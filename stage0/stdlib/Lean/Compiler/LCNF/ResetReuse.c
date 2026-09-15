// Lean compiler output
// Module: Lean.Compiler.LCNF.ResetReuse
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.LiveVars import Lean.Compiler.LCNF.DependsOn import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.PropagateBorrow
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
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
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
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(uint8_t, lean_object*);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(uint8_t, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_CodeDecl_dependsOn(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(uint8_t, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_ptr_addr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_applyOwnedness(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t l_Lean_Compiler_LCNF_instBEqOwnedness_beq(uint8_t, uint8_t);
uint8_t l_Lean_Compiler_LCNF_CtorInfo_isScalar(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__7_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateContImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.S.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Compiler.LCNF.ResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.D.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.Code.insertResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(uint8_t, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.Decl.insertResetReuseCore.collectResets"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "resetReuse"};
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_insertResetReuse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 201, 93, 114, 179, 16, 247, 72)}};
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_insertResetReuse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_insertResetReuse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_insertResetReuse;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(42, 22, 75, 214, 119, 69, 48, 225)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 165, 194, 12, 198, 157, 117, 65)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(105, 150, 117, 254, 63, 70, 178, 234)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(44, 242, 201, 181, 138, 172, 149, 255)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(182, 154, 112, 50, 132, 225, 68, 23)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 182, 243, 139, 183, 248, 56, 98)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(190, 130, 185, 126, 60, 87, 109, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 224, 225, 246, 174, 48, 45, 78)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(146, 47, 104, 191, 68, 113, 248, 179)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(96, 193, 129, 108, 61, 130, 124, 18)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(217, 251, 249, 254, 208, 86, 150, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 85, 80, 162, 8, 82, 178, 101)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(lean_object* v_c_u2081_1_, lean_object* v_c_u2082_2_, lean_object* v___y_3_){
_start:
{
lean_object* v_name_5_; lean_object* v_size_6_; lean_object* v_usize_7_; lean_object* v_ssize_8_; lean_object* v_name_9_; lean_object* v_size_10_; lean_object* v_usize_11_; lean_object* v_ssize_12_; uint8_t v___x_13_; 
v_name_5_ = lean_ctor_get(v_c_u2081_1_, 0);
v_size_6_ = lean_ctor_get(v_c_u2081_1_, 2);
v_usize_7_ = lean_ctor_get(v_c_u2081_1_, 3);
v_ssize_8_ = lean_ctor_get(v_c_u2081_1_, 4);
v_name_9_ = lean_ctor_get(v_c_u2082_2_, 0);
v_size_10_ = lean_ctor_get(v_c_u2082_2_, 2);
v_usize_11_ = lean_ctor_get(v_c_u2082_2_, 3);
v_ssize_12_ = lean_ctor_get(v_c_u2082_2_, 4);
v___x_13_ = lean_nat_dec_eq(v_size_6_, v_size_10_);
if (v___x_13_ == 0)
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_box(v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
else
{
uint8_t v___x_16_; 
v___x_16_ = lean_nat_dec_eq(v_usize_7_, v_usize_11_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_box(v___x_16_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
else
{
uint8_t v___x_19_; 
v___x_19_ = lean_nat_dec_eq(v_ssize_8_, v_ssize_12_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_box(v___x_19_);
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
else
{
uint8_t v_relaxedReuse_22_; 
v_relaxedReuse_22_ = lean_ctor_get_uint8(v___y_3_, sizeof(void*)*2);
if (v_relaxedReuse_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; uint8_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_23_ = l_Lean_Name_getPrefix(v_name_5_);
v___x_24_ = l_Lean_Name_getPrefix(v_name_9_);
v___x_25_ = lean_name_eq(v___x_23_, v___x_24_);
lean_dec(v___x_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(v___x_25_);
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
else
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_box(v_relaxedReuse_22_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg___boxed(lean_object* v_c_u2081_30_, lean_object* v_c_u2082_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_c_u2081_30_, v_c_u2082_31_, v___y_32_);
lean_dec_ref(v___y_32_);
lean_dec_ref(v_c_u2082_31_);
lean_dec_ref(v_c_u2081_30_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(lean_object* v_c_u2081_35_, lean_object* v_c_u2082_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_c_u2081_35_, v_c_u2082_36_, v___y_37_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___boxed(lean_object* v_c_u2081_44_, lean_object* v_c_u2082_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(v_c_u2081_44_, v_c_u2082_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec_ref(v_c_u2082_45_);
lean_dec_ref(v_c_u2081_44_);
return v_res_52_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(lean_object* v_msg_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_56_ = lean_panic_fn_borrowed(v___x_55_, v_msg_54_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(lean_object* v_msg_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v___f_72_; lean_object* v___f_73_; lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___f_76_; lean_object* v___f_77_; lean_object* v___f_78_; lean_object* v___f_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v_toApplicative_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_121_; 
v___f_72_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0));
v___f_73_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_74_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
v___f_75_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__3));
v___f_76_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__4));
v___f_77_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_77_, 0, v___f_76_);
lean_closure_set(v___f_77_, 1, v___f_75_);
v___f_78_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_78_, 0, v___f_75_);
v___f_79_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__5));
v___x_80_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_80_, 0, v___f_72_);
lean_ctor_set(v___x_80_, 1, v___f_73_);
v___x_81_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___f_74_);
lean_ctor_set(v___x_81_, 2, v___f_77_);
lean_ctor_set(v___x_81_, 3, v___f_78_);
lean_ctor_set(v___x_81_, 4, v___f_79_);
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___f_75_);
v___x_83_ = l_StateRefT_x27_instMonad___redArg(v___x_82_);
v_toApplicative_84_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_121_ == 0)
{
lean_object* v_unused_122_; 
v_unused_122_ = lean_ctor_get(v___x_83_, 1);
lean_dec(v_unused_122_);
v___x_86_ = v___x_83_;
v_isShared_87_ = v_isSharedCheck_121_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_toApplicative_84_);
lean_dec(v___x_83_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_121_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v_toFunctor_88_; lean_object* v_toSeq_89_; lean_object* v_toSeqLeft_90_; lean_object* v_toSeqRight_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_119_; 
v_toFunctor_88_ = lean_ctor_get(v_toApplicative_84_, 0);
v_toSeq_89_ = lean_ctor_get(v_toApplicative_84_, 2);
v_toSeqLeft_90_ = lean_ctor_get(v_toApplicative_84_, 3);
v_toSeqRight_91_ = lean_ctor_get(v_toApplicative_84_, 4);
v_isSharedCheck_119_ = !lean_is_exclusive(v_toApplicative_84_);
if (v_isSharedCheck_119_ == 0)
{
lean_object* v_unused_120_; 
v_unused_120_ = lean_ctor_get(v_toApplicative_84_, 1);
lean_dec(v_unused_120_);
v___x_93_ = v_toApplicative_84_;
v_isShared_94_ = v_isSharedCheck_119_;
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
v_isShared_94_ = v_isSharedCheck_119_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___f_95_; lean_object* v___f_96_; lean_object* v___f_97_; lean_object* v___f_98_; lean_object* v___x_99_; lean_object* v___f_100_; lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___x_104_; 
v___f_95_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__6));
v___f_96_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__7));
lean_inc_ref(v_toFunctor_88_);
v___f_97_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_97_, 0, v_toFunctor_88_);
v___f_98_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_98_, 0, v_toFunctor_88_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v___f_97_);
lean_ctor_set(v___x_99_, 1, v___f_98_);
v___f_100_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_100_, 0, v_toSeqRight_91_);
v___f_101_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_101_, 0, v_toSeqLeft_90_);
v___f_102_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
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
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___f_95_);
lean_ctor_set(v_reuseFailAlloc_118_, 2, v___f_102_);
lean_ctor_set(v_reuseFailAlloc_118_, 3, v___f_101_);
lean_ctor_set(v_reuseFailAlloc_118_, 4, v___f_100_);
v___x_104_ = v_reuseFailAlloc_118_;
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
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_117_, 1, v___f_96_);
v___x_106_ = v_reuseFailAlloc_117_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_3572__overap_115_; lean_object* v___x_116_; 
v___x_107_ = l_StateRefT_x27_instMonad___redArg(v___x_106_);
v___x_108_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_109_ = 0;
v___x_110_ = lean_box(v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_108_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = l_instInhabitedOfMonad___redArg(v___x_107_, v___x_111_);
v___x_113_ = l_instInhabitedReaderT___redArg(v___x_112_);
v___x_114_ = l_instInhabitedReaderT___redArg(v___x_113_);
v___x_3572__overap_115_ = lean_panic_fn_borrowed(v___x_114_, v_msg_65_);
lean_dec(v___x_114_);
lean_inc(v___y_70_);
lean_inc_ref(v___y_69_);
lean_inc(v___y_68_);
lean_inc_ref(v___y_67_);
lean_inc_ref(v___y_66_);
v___x_116_ = lean_apply_6(v___x_3572__overap_115_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, lean_box(0));
return v___x_116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___boxed(lean_object* v_msg_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v_msg_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
lean_dec(v___y_126_);
lean_dec_ref(v___y_125_);
lean_dec_ref(v___y_124_);
return v_res_130_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(lean_object* v_as_131_, size_t v_i_132_, size_t v_stop_133_){
_start:
{
uint8_t v___x_134_; 
v___x_134_ = lean_usize_dec_eq(v_i_132_, v_stop_133_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_135_ = lean_array_uget_borrowed(v_as_131_, v_i_132_);
v___x_136_ = lean_unbox(v___x_135_);
if (v___x_136_ == 0)
{
size_t v___x_137_; size_t v___x_138_; 
v___x_137_ = ((size_t)1ULL);
v___x_138_ = lean_usize_add(v_i_132_, v___x_137_);
v_i_132_ = v___x_138_;
goto _start;
}
else
{
uint8_t v___x_140_; 
v___x_140_ = lean_unbox(v___x_135_);
return v___x_140_;
}
}
else
{
uint8_t v___x_141_; 
v___x_141_ = 0;
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2___boxed(lean_object* v_as_142_, lean_object* v_i_143_, lean_object* v_stop_144_){
_start:
{
size_t v_i_boxed_145_; size_t v_stop_boxed_146_; uint8_t v_res_147_; lean_object* v_r_148_; 
v_i_boxed_145_ = lean_unbox_usize(v_i_143_);
lean_dec(v_i_143_);
v_stop_boxed_146_ = lean_unbox_usize(v_stop_144_);
lean_dec(v_stop_144_);
v_res_147_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_as_142_, v_i_boxed_145_, v_stop_boxed_146_);
lean_dec_ref(v_as_142_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_152_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_153_ = lean_unsigned_to_nat(9u);
v___x_154_ = lean_unsigned_to_nat(642u);
v___x_155_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1));
v___x_156_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0));
v___x_157_ = l_mkPanicMessageWithDecl(v___x_156_, v___x_155_, v___x_154_, v___x_153_, v___x_152_);
return v___x_157_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_160_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_161_ = lean_unsigned_to_nat(61u);
v___x_162_ = lean_unsigned_to_nat(125u);
v___x_163_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5));
v___x_164_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_165_ = l_mkPanicMessageWithDecl(v___x_164_, v___x_163_, v___x_162_, v___x_161_, v___x_160_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(lean_object* v_info_166_, lean_object* v_w_167_, lean_object* v_c_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
uint8_t v___y_176_; lean_object* v___y_177_; lean_object* v_k_182_; lean_object* v___y_183_; lean_object* v___y_184_; lean_object* v___y_185_; lean_object* v___y_186_; lean_object* v___y_187_; 
switch(lean_obj_tag(v_c_168_))
{
case 0:
{
lean_object* v_decl_402_; lean_object* v_value_403_; 
v_decl_402_ = lean_ctor_get(v_c_168_, 0);
lean_inc_ref(v_decl_402_);
v_value_403_ = lean_ctor_get(v_decl_402_, 3);
lean_inc(v_value_403_);
if (lean_obj_tag(v_value_403_) == 5)
{
lean_object* v_k_404_; lean_object* v_fvarId_405_; lean_object* v_binderName_406_; lean_object* v_type_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_462_; 
v_k_404_ = lean_ctor_get(v_c_168_, 1);
v_fvarId_405_ = lean_ctor_get(v_decl_402_, 0);
v_binderName_406_ = lean_ctor_get(v_decl_402_, 1);
v_type_407_ = lean_ctor_get(v_decl_402_, 2);
v_isSharedCheck_462_ = !lean_is_exclusive(v_decl_402_);
if (v_isSharedCheck_462_ == 0)
{
lean_object* v_unused_463_; 
v_unused_463_ = lean_ctor_get(v_decl_402_, 3);
lean_dec(v_unused_463_);
v___x_409_ = v_decl_402_;
v_isShared_410_ = v_isSharedCheck_462_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_type_407_);
lean_inc(v_binderName_406_);
lean_inc(v_fvarId_405_);
lean_dec(v_decl_402_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_462_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_i_411_; lean_object* v_args_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_461_; 
v_i_411_ = lean_ctor_get(v_value_403_, 0);
v_args_412_ = lean_ctor_get(v_value_403_, 1);
v_isSharedCheck_461_ = !lean_is_exclusive(v_value_403_);
if (v_isSharedCheck_461_ == 0)
{
v___x_414_ = v_value_403_;
v_isShared_415_ = v_isSharedCheck_461_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_args_412_);
lean_inc(v_i_411_);
lean_dec(v_value_403_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_461_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
uint8_t v___x_416_; lean_object* v___x_418_; 
v___x_416_ = 1;
lean_inc_ref(v_args_412_);
lean_inc_ref(v_i_411_);
if (v_isShared_415_ == 0)
{
v___x_418_ = v___x_414_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_i_411_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_args_412_);
v___x_418_ = v_reuseFailAlloc_460_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_420_; 
lean_inc_ref(v_type_407_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 3, v___x_418_);
v___x_420_ = v___x_409_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_fvarId_405_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_binderName_406_);
lean_ctor_set(v_reuseFailAlloc_459_, 2, v_type_407_);
lean_ctor_set(v_reuseFailAlloc_459_, 3, v___x_418_);
v___x_420_ = v_reuseFailAlloc_459_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_421_; 
v___x_421_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_info_166_, v_i_411_, v___y_169_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; uint8_t v___y_424_; uint8_t v___x_445_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v___x_421_, 1);
v___x_445_ = lean_unbox(v_a_422_);
if (v___x_445_ == 0)
{
lean_dec(v_a_422_);
lean_dec_ref(v___x_420_);
lean_dec_ref(v_args_412_);
lean_dec_ref(v_i_411_);
lean_dec_ref(v_type_407_);
lean_inc_ref(v_k_404_);
v_k_182_ = v_k_404_;
v___y_183_ = v___y_169_;
v___y_184_ = v___y_170_;
v___y_185_ = v___y_171_;
v___y_186_ = v___y_172_;
v___y_187_ = v___y_173_;
goto v___jp_181_;
}
else
{
lean_object* v_cidx_446_; lean_object* v_cidx_447_; uint8_t v___x_448_; 
lean_inc_ref(v_k_404_);
lean_dec_ref_known(v_c_168_, 2);
v_cidx_446_ = lean_ctor_get(v_info_166_, 1);
v_cidx_447_ = lean_ctor_get(v_i_411_, 1);
v___x_448_ = lean_nat_dec_eq(v_cidx_446_, v_cidx_447_);
if (v___x_448_ == 0)
{
uint8_t v___x_449_; 
v___x_449_ = lean_unbox(v_a_422_);
v___y_424_ = v___x_449_;
goto v___jp_423_;
}
else
{
uint8_t v___x_450_; 
v___x_450_ = 0;
v___y_424_ = v___x_450_;
goto v___jp_423_;
}
}
v___jp_423_:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(v___x_425_, 0, v_w_167_);
lean_ctor_set(v___x_425_, 1, v_i_411_);
lean_ctor_set(v___x_425_, 2, v_args_412_);
lean_ctor_set_uint8(v___x_425_, sizeof(void*)*3, v___y_424_);
v___x_426_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_416_, v___x_420_, v_type_407_, v___x_425_, v___y_171_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_436_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_436_ == 0)
{
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_436_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_436_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_434_; 
v___x_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_431_, 0, v_a_427_);
lean_ctor_set(v___x_431_, 1, v_k_404_);
v___x_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v_a_422_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_432_);
v___x_434_ = v___x_429_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v___x_432_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
else
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_444_; 
lean_dec(v_a_422_);
lean_dec_ref(v_k_404_);
v_a_437_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_444_ == 0)
{
v___x_439_ = v___x_426_;
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_426_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_442_; 
if (v_isShared_440_ == 0)
{
v___x_442_ = v___x_439_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_437_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
lean_dec_ref(v___x_420_);
lean_dec_ref(v_args_412_);
lean_dec_ref(v_i_411_);
lean_dec_ref(v_type_407_);
lean_dec_ref_known(v_c_168_, 2);
lean_dec(v_w_167_);
v_a_451_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_421_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_421_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
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
lean_object* v_k_464_; 
lean_dec(v_value_403_);
lean_dec_ref(v_decl_402_);
v_k_464_ = lean_ctor_get(v_c_168_, 1);
lean_inc_ref(v_k_464_);
v_k_182_ = v_k_464_;
v___y_183_ = v___y_169_;
v___y_184_ = v___y_170_;
v___y_185_ = v___y_171_;
v___y_186_ = v___y_172_;
v___y_187_ = v___y_173_;
goto v___jp_181_;
}
}
case 2:
{
lean_object* v_decl_465_; lean_object* v_k_466_; lean_object* v_params_467_; lean_object* v_type_468_; lean_object* v_value_469_; uint8_t v___x_470_; lean_object* v___x_471_; 
v_decl_465_ = lean_ctor_get(v_c_168_, 0);
v_k_466_ = lean_ctor_get(v_c_168_, 1);
v_params_467_ = lean_ctor_get(v_decl_465_, 2);
v_type_468_ = lean_ctor_get(v_decl_465_, 3);
v_value_469_ = lean_ctor_get(v_decl_465_, 4);
v___x_470_ = 1;
lean_inc_ref(v_value_469_);
lean_inc(v_w_167_);
v___x_471_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_166_, v_w_167_, v_value_469_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v_snd_473_; uint8_t v___x_474_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v_snd_473_ = lean_ctor_get(v_a_472_, 1);
lean_inc(v_snd_473_);
v___x_474_ = lean_unbox(v_snd_473_);
if (v___x_474_ == 0)
{
lean_dec(v_snd_473_);
lean_dec(v_a_472_);
lean_inc_ref(v_k_466_);
v_k_182_ = v_k_466_;
v___y_183_ = v___y_169_;
v___y_184_ = v___y_170_;
v___y_185_ = v___y_171_;
v___y_186_ = v___y_172_;
v___y_187_ = v___y_173_;
goto v___jp_181_;
}
else
{
lean_object* v_fst_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_524_; 
lean_dec(v_w_167_);
v_fst_475_ = lean_ctor_get(v_a_472_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v_a_472_);
if (v_isSharedCheck_524_ == 0)
{
lean_object* v_unused_525_; 
v_unused_525_ = lean_ctor_get(v_a_472_, 1);
lean_dec(v_unused_525_);
v___x_477_ = v_a_472_;
v_isShared_478_ = v_isSharedCheck_524_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_fst_475_);
lean_dec(v_a_472_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_524_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; 
lean_inc_ref(v_params_467_);
lean_inc_ref(v_type_468_);
lean_inc_ref(v_decl_465_);
v___x_479_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_470_, v_decl_465_, v_type_468_, v_params_467_, v_fst_475_, v___y_171_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_515_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_515_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_515_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_515_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___y_485_; size_t v___x_492_; uint8_t v___x_493_; 
v___x_492_ = lean_ptr_addr(v_k_466_);
v___x_493_ = lean_usize_dec_eq(v___x_492_, v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_500_; 
lean_inc_ref(v_k_466_);
v_isSharedCheck_500_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_500_ == 0)
{
lean_object* v_unused_501_; lean_object* v_unused_502_; 
v_unused_501_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_501_);
v_unused_502_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_502_);
v___x_495_ = v_c_168_;
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
else
{
lean_dec(v_c_168_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v_a_480_);
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_480_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_k_466_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
v___y_485_ = v___x_498_;
goto v___jp_484_;
}
}
}
else
{
size_t v___x_503_; size_t v___x_504_; uint8_t v___x_505_; 
v___x_503_ = lean_ptr_addr(v_decl_465_);
v___x_504_ = lean_ptr_addr(v_a_480_);
v___x_505_ = lean_usize_dec_eq(v___x_503_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
lean_inc_ref(v_k_466_);
v_isSharedCheck_512_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_512_ == 0)
{
lean_object* v_unused_513_; lean_object* v_unused_514_; 
v_unused_513_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_513_);
v_unused_514_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_514_);
v___x_507_ = v_c_168_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_dec(v_c_168_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v_a_480_);
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_a_480_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_k_466_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
v___y_485_ = v___x_510_;
goto v___jp_484_;
}
}
}
else
{
lean_dec(v_a_480_);
v___y_485_ = v_c_168_;
goto v___jp_484_;
}
}
v___jp_484_:
{
lean_object* v___x_487_; 
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v___y_485_);
v___x_487_ = v___x_477_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___y_485_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_snd_473_);
v___x_487_ = v_reuseFailAlloc_491_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_489_; 
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_487_);
v___x_489_ = v___x_482_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_487_);
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
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_del_object(v___x_477_);
lean_dec(v_snd_473_);
lean_dec_ref_known(v_c_168_, 2);
v_a_516_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_479_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_479_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_c_168_, 2);
lean_dec(v_w_167_);
return v___x_471_;
}
}
case 3:
{
uint8_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec(v_w_167_);
v___x_526_ = 0;
v___x_527_ = lean_box(v___x_526_);
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v_c_168_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
case 4:
{
lean_object* v_cases_530_; lean_object* v_typeName_531_; lean_object* v_resultType_532_; lean_object* v_discr_533_; lean_object* v_alts_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_586_; 
v_cases_530_ = lean_ctor_get(v_c_168_, 0);
lean_inc_ref(v_cases_530_);
v_typeName_531_ = lean_ctor_get(v_cases_530_, 0);
v_resultType_532_ = lean_ctor_get(v_cases_530_, 1);
v_discr_533_ = lean_ctor_get(v_cases_530_, 2);
v_alts_534_ = lean_ctor_get(v_cases_530_, 3);
v_isSharedCheck_586_ = !lean_is_exclusive(v_cases_530_);
if (v_isSharedCheck_586_ == 0)
{
v___x_536_ = v_cases_530_;
v_isShared_537_ = v_isSharedCheck_586_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_alts_534_);
lean_inc(v_discr_533_);
lean_inc(v_resultType_532_);
lean_inc(v_typeName_531_);
lean_dec(v_cases_530_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_586_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
size_t v_sz_538_; size_t v___x_539_; lean_object* v___x_540_; 
v_sz_538_ = lean_array_size(v_alts_534_);
v___x_539_ = ((size_t)0ULL);
lean_inc_ref(v_alts_534_);
v___x_540_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(v_info_166_, v_w_167_, v_sz_538_, v___x_539_, v_alts_534_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_577_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_577_ == 0)
{
v___x_543_ = v___x_540_;
v_isShared_544_ = v_isSharedCheck_577_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_540_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_577_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___y_546_; uint8_t v___y_547_; lean_object* v___x_553_; lean_object* v_fst_554_; lean_object* v_snd_555_; lean_object* v___y_557_; size_t v___x_563_; size_t v___x_564_; uint8_t v___x_565_; 
v___x_553_ = l_Array_unzip___redArg(v_a_541_);
lean_dec(v_a_541_);
v_fst_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_fst_554_);
v_snd_555_ = lean_ctor_get(v___x_553_, 1);
lean_inc(v_snd_555_);
lean_dec_ref(v___x_553_);
v___x_563_ = lean_ptr_addr(v_alts_534_);
lean_dec_ref(v_alts_534_);
v___x_564_ = lean_ptr_addr(v_fst_554_);
v___x_565_ = lean_usize_dec_eq(v___x_563_, v___x_564_);
if (v___x_565_ == 0)
{
lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_575_; 
v_isSharedCheck_575_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_575_ == 0)
{
lean_object* v_unused_576_; 
v_unused_576_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_576_);
v___x_567_ = v_c_168_;
v_isShared_568_ = v_isSharedCheck_575_;
goto v_resetjp_566_;
}
else
{
lean_dec(v_c_168_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_575_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 3, v_fst_554_);
v___x_570_ = v___x_536_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_typeName_531_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_resultType_532_);
lean_ctor_set(v_reuseFailAlloc_574_, 2, v_discr_533_);
lean_ctor_set(v_reuseFailAlloc_574_, 3, v_fst_554_);
v___x_570_ = v_reuseFailAlloc_574_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_572_; 
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v___x_570_);
v___x_572_ = v___x_567_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v___x_570_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
v___y_557_ = v___x_572_;
goto v___jp_556_;
}
}
}
}
else
{
lean_dec(v_fst_554_);
lean_del_object(v___x_536_);
lean_dec(v_discr_533_);
lean_dec_ref(v_resultType_532_);
lean_dec(v_typeName_531_);
v___y_557_ = v_c_168_;
goto v___jp_556_;
}
v___jp_545_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_548_ = lean_box(v___y_547_);
v___x_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_549_, 0, v___y_546_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 0, v___x_549_);
v___x_551_ = v___x_543_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_549_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
v___jp_556_:
{
lean_object* v___x_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
v___x_558_ = lean_unsigned_to_nat(0u);
v___x_559_ = lean_array_get_size(v_snd_555_);
v___x_560_ = lean_nat_dec_lt(v___x_558_, v___x_559_);
if (v___x_560_ == 0)
{
lean_dec(v_snd_555_);
v___y_546_ = v___y_557_;
v___y_547_ = v___x_560_;
goto v___jp_545_;
}
else
{
if (v___x_560_ == 0)
{
lean_dec(v_snd_555_);
v___y_546_ = v___y_557_;
v___y_547_ = v___x_560_;
goto v___jp_545_;
}
else
{
size_t v___x_561_; uint8_t v___x_562_; 
v___x_561_ = lean_usize_of_nat(v___x_559_);
v___x_562_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_snd_555_, v___x_539_, v___x_561_);
lean_dec(v_snd_555_);
v___y_546_ = v___y_557_;
v___y_547_ = v___x_562_;
goto v___jp_545_;
}
}
}
}
}
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
lean_del_object(v___x_536_);
lean_dec_ref(v_alts_534_);
lean_dec(v_discr_533_);
lean_dec_ref(v_resultType_532_);
lean_dec(v_typeName_531_);
lean_dec_ref_known(v_c_168_, 1);
v_a_578_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_540_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_540_);
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
uint8_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
lean_dec(v_w_167_);
v___x_587_ = 0;
v___x_588_ = lean_box(v___x_587_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v_c_168_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
return v___x_590_;
}
case 6:
{
uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec(v_w_167_);
v___x_591_ = 0;
v___x_592_ = lean_box(v___x_591_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v_c_168_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
return v___x_594_;
}
case 8:
{
lean_object* v_k_595_; 
v_k_595_ = lean_ctor_get(v_c_168_, 3);
lean_inc_ref(v_k_595_);
v_k_182_ = v_k_595_;
v___y_183_ = v___y_169_;
v___y_184_ = v___y_170_;
v___y_185_ = v___y_171_;
v___y_186_ = v___y_172_;
v___y_187_ = v___y_173_;
goto v___jp_181_;
}
case 9:
{
lean_object* v_k_596_; 
v_k_596_ = lean_ctor_get(v_c_168_, 5);
lean_inc_ref(v_k_596_);
v_k_182_ = v_k_596_;
v___y_183_ = v___y_169_;
v___y_184_ = v___y_170_;
v___y_185_ = v___y_171_;
v___y_186_ = v___y_172_;
v___y_187_ = v___y_173_;
goto v___jp_181_;
}
default: 
{
lean_object* v___x_597_; lean_object* v___x_598_; 
lean_dec_ref(v_c_168_);
lean_dec(v_w_167_);
v___x_597_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6);
v___x_598_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_597_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
return v___x_598_;
}
}
v___jp_175_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_box(v___y_176_);
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v___y_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
return v___x_180_;
}
v___jp_181_:
{
lean_object* v___x_188_; 
v___x_188_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_166_, v_w_167_, v_k_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v_a_189_; 
v_a_189_ = lean_ctor_get(v___x_188_, 0);
lean_inc(v_a_189_);
lean_dec_ref_known(v___x_188_, 1);
switch(lean_obj_tag(v_c_168_))
{
case 0:
{
lean_object* v_fst_190_; lean_object* v_snd_191_; lean_object* v_decl_192_; lean_object* v_k_193_; size_t v___x_194_; size_t v___x_195_; uint8_t v___x_196_; 
v_fst_190_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_190_);
v_snd_191_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_191_);
lean_dec(v_a_189_);
v_decl_192_ = lean_ctor_get(v_c_168_, 0);
v_k_193_ = lean_ctor_get(v_c_168_, 1);
v___x_194_ = lean_ptr_addr(v_k_193_);
v___x_195_ = lean_ptr_addr(v_fst_190_);
v___x_196_ = lean_usize_dec_eq(v___x_194_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_204_; 
lean_inc_ref(v_decl_192_);
v_isSharedCheck_204_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_204_ == 0)
{
lean_object* v_unused_205_; lean_object* v_unused_206_; 
v_unused_205_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_205_);
v_unused_206_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_206_);
v___x_198_ = v_c_168_;
v_isShared_199_ = v_isSharedCheck_204_;
goto v_resetjp_197_;
}
else
{
lean_dec(v_c_168_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_204_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v_fst_190_);
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_decl_192_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_fst_190_);
v___x_201_ = v_reuseFailAlloc_203_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
uint8_t v___x_202_; 
v___x_202_ = lean_unbox(v_snd_191_);
lean_dec(v_snd_191_);
v___y_176_ = v___x_202_;
v___y_177_ = v___x_201_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_207_; 
lean_dec(v_fst_190_);
v___x_207_ = lean_unbox(v_snd_191_);
lean_dec(v_snd_191_);
v___y_176_ = v___x_207_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
case 1:
{
lean_object* v_fst_208_; lean_object* v_snd_209_; lean_object* v_decl_210_; lean_object* v_k_211_; size_t v___x_212_; size_t v___x_213_; uint8_t v___x_214_; 
v_fst_208_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_208_);
v_snd_209_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_209_);
lean_dec(v_a_189_);
v_decl_210_ = lean_ctor_get(v_c_168_, 0);
v_k_211_ = lean_ctor_get(v_c_168_, 1);
v___x_212_ = lean_ptr_addr(v_k_211_);
v___x_213_ = lean_ptr_addr(v_fst_208_);
v___x_214_ = lean_usize_dec_eq(v___x_212_, v___x_213_);
if (v___x_214_ == 0)
{
lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_222_; 
lean_inc_ref(v_decl_210_);
v_isSharedCheck_222_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_222_ == 0)
{
lean_object* v_unused_223_; lean_object* v_unused_224_; 
v_unused_223_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_223_);
v_unused_224_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_224_);
v___x_216_ = v_c_168_;
v_isShared_217_ = v_isSharedCheck_222_;
goto v_resetjp_215_;
}
else
{
lean_dec(v_c_168_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_222_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 1, v_fst_208_);
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_decl_210_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_fst_208_);
v___x_219_ = v_reuseFailAlloc_221_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
uint8_t v___x_220_; 
v___x_220_ = lean_unbox(v_snd_209_);
lean_dec(v_snd_209_);
v___y_176_ = v___x_220_;
v___y_177_ = v___x_219_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_225_; 
lean_dec(v_fst_208_);
v___x_225_ = lean_unbox(v_snd_209_);
lean_dec(v_snd_209_);
v___y_176_ = v___x_225_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
case 2:
{
lean_object* v_fst_226_; lean_object* v_snd_227_; lean_object* v_decl_228_; lean_object* v_k_229_; size_t v___x_230_; size_t v___x_231_; uint8_t v___x_232_; 
v_fst_226_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_226_);
v_snd_227_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_227_);
lean_dec(v_a_189_);
v_decl_228_ = lean_ctor_get(v_c_168_, 0);
v_k_229_ = lean_ctor_get(v_c_168_, 1);
v___x_230_ = lean_ptr_addr(v_k_229_);
v___x_231_ = lean_ptr_addr(v_fst_226_);
v___x_232_ = lean_usize_dec_eq(v___x_230_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_240_; 
lean_inc_ref(v_decl_228_);
v_isSharedCheck_240_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; lean_object* v_unused_242_; 
v_unused_241_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_241_);
v_unused_242_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_242_);
v___x_234_ = v_c_168_;
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
else
{
lean_dec(v_c_168_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_237_; 
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 1, v_fst_226_);
v___x_237_ = v___x_234_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_decl_228_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_fst_226_);
v___x_237_ = v_reuseFailAlloc_239_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
uint8_t v___x_238_; 
v___x_238_ = lean_unbox(v_snd_227_);
lean_dec(v_snd_227_);
v___y_176_ = v___x_238_;
v___y_177_ = v___x_237_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_243_; 
lean_dec(v_fst_226_);
v___x_243_ = lean_unbox(v_snd_227_);
lean_dec(v_snd_227_);
v___y_176_ = v___x_243_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
case 7:
{
lean_object* v_fst_244_; lean_object* v_snd_245_; lean_object* v_fvarId_246_; lean_object* v_i_247_; lean_object* v_y_248_; lean_object* v_k_249_; size_t v___x_250_; size_t v___x_251_; uint8_t v___x_252_; 
v_fst_244_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_244_);
v_snd_245_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_245_);
lean_dec(v_a_189_);
v_fvarId_246_ = lean_ctor_get(v_c_168_, 0);
v_i_247_ = lean_ctor_get(v_c_168_, 1);
v_y_248_ = lean_ctor_get(v_c_168_, 2);
v_k_249_ = lean_ctor_get(v_c_168_, 3);
v___x_250_ = lean_ptr_addr(v_k_249_);
v___x_251_ = lean_ptr_addr(v_fst_244_);
v___x_252_ = lean_usize_dec_eq(v___x_250_, v___x_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_260_; 
lean_inc(v_y_248_);
lean_inc(v_i_247_);
lean_inc(v_fvarId_246_);
v_isSharedCheck_260_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_260_ == 0)
{
lean_object* v_unused_261_; lean_object* v_unused_262_; lean_object* v_unused_263_; lean_object* v_unused_264_; 
v_unused_261_ = lean_ctor_get(v_c_168_, 3);
lean_dec(v_unused_261_);
v_unused_262_ = lean_ctor_get(v_c_168_, 2);
lean_dec(v_unused_262_);
v_unused_263_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_263_);
v_unused_264_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_264_);
v___x_254_ = v_c_168_;
v_isShared_255_ = v_isSharedCheck_260_;
goto v_resetjp_253_;
}
else
{
lean_dec(v_c_168_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_260_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 3, v_fst_244_);
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_fvarId_246_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_i_247_);
lean_ctor_set(v_reuseFailAlloc_259_, 2, v_y_248_);
lean_ctor_set(v_reuseFailAlloc_259_, 3, v_fst_244_);
v___x_257_ = v_reuseFailAlloc_259_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
uint8_t v___x_258_; 
v___x_258_ = lean_unbox(v_snd_245_);
lean_dec(v_snd_245_);
v___y_176_ = v___x_258_;
v___y_177_ = v___x_257_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_265_; 
lean_dec(v_fst_244_);
v___x_265_ = lean_unbox(v_snd_245_);
lean_dec(v_snd_245_);
v___y_176_ = v___x_265_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
case 9:
{
lean_object* v_fst_266_; lean_object* v_snd_267_; lean_object* v_fvarId_268_; lean_object* v_i_269_; lean_object* v_offset_270_; lean_object* v_y_271_; lean_object* v_ty_272_; lean_object* v_k_273_; size_t v___x_274_; size_t v___x_275_; uint8_t v___x_276_; 
v_fst_266_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_266_);
v_snd_267_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_267_);
lean_dec(v_a_189_);
v_fvarId_268_ = lean_ctor_get(v_c_168_, 0);
v_i_269_ = lean_ctor_get(v_c_168_, 1);
v_offset_270_ = lean_ctor_get(v_c_168_, 2);
v_y_271_ = lean_ctor_get(v_c_168_, 3);
v_ty_272_ = lean_ctor_get(v_c_168_, 4);
v_k_273_ = lean_ctor_get(v_c_168_, 5);
v___x_274_ = lean_ptr_addr(v_k_273_);
v___x_275_ = lean_ptr_addr(v_fst_266_);
v___x_276_ = lean_usize_dec_eq(v___x_274_, v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_284_; 
lean_inc_ref(v_ty_272_);
lean_inc(v_y_271_);
lean_inc(v_offset_270_);
lean_inc(v_i_269_);
lean_inc(v_fvarId_268_);
v_isSharedCheck_284_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_284_ == 0)
{
lean_object* v_unused_285_; lean_object* v_unused_286_; lean_object* v_unused_287_; lean_object* v_unused_288_; lean_object* v_unused_289_; lean_object* v_unused_290_; 
v_unused_285_ = lean_ctor_get(v_c_168_, 5);
lean_dec(v_unused_285_);
v_unused_286_ = lean_ctor_get(v_c_168_, 4);
lean_dec(v_unused_286_);
v_unused_287_ = lean_ctor_get(v_c_168_, 3);
lean_dec(v_unused_287_);
v_unused_288_ = lean_ctor_get(v_c_168_, 2);
lean_dec(v_unused_288_);
v_unused_289_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_289_);
v_unused_290_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_290_);
v___x_278_ = v_c_168_;
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
else
{
lean_dec(v_c_168_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 5, v_fst_266_);
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_fvarId_268_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_i_269_);
lean_ctor_set(v_reuseFailAlloc_283_, 2, v_offset_270_);
lean_ctor_set(v_reuseFailAlloc_283_, 3, v_y_271_);
lean_ctor_set(v_reuseFailAlloc_283_, 4, v_ty_272_);
lean_ctor_set(v_reuseFailAlloc_283_, 5, v_fst_266_);
v___x_281_ = v_reuseFailAlloc_283_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
uint8_t v___x_282_; 
v___x_282_ = lean_unbox(v_snd_267_);
lean_dec(v_snd_267_);
v___y_176_ = v___x_282_;
v___y_177_ = v___x_281_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_291_; 
lean_dec(v_fst_266_);
v___x_291_ = lean_unbox(v_snd_267_);
lean_dec(v_snd_267_);
v___y_176_ = v___x_291_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
case 8:
{
lean_object* v_fst_292_; lean_object* v_snd_293_; lean_object* v_fvarId_294_; lean_object* v_i_295_; lean_object* v_y_296_; lean_object* v_k_297_; size_t v___x_298_; size_t v___x_299_; uint8_t v___x_300_; 
v_fst_292_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_292_);
v_snd_293_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_293_);
lean_dec(v_a_189_);
v_fvarId_294_ = lean_ctor_get(v_c_168_, 0);
v_i_295_ = lean_ctor_get(v_c_168_, 1);
v_y_296_ = lean_ctor_get(v_c_168_, 2);
v_k_297_ = lean_ctor_get(v_c_168_, 3);
v___x_298_ = lean_ptr_addr(v_k_297_);
v___x_299_ = lean_ptr_addr(v_fst_292_);
v___x_300_ = lean_usize_dec_eq(v___x_298_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_308_; 
lean_inc(v_y_296_);
lean_inc(v_i_295_);
lean_inc(v_fvarId_294_);
v_isSharedCheck_308_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; lean_object* v_unused_310_; lean_object* v_unused_311_; lean_object* v_unused_312_; 
v_unused_309_ = lean_ctor_get(v_c_168_, 3);
lean_dec(v_unused_309_);
v_unused_310_ = lean_ctor_get(v_c_168_, 2);
lean_dec(v_unused_310_);
v_unused_311_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_311_);
v_unused_312_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_312_);
v___x_302_ = v_c_168_;
v_isShared_303_ = v_isSharedCheck_308_;
goto v_resetjp_301_;
}
else
{
lean_dec(v_c_168_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_308_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 3, v_fst_292_);
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_fvarId_294_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v_i_295_);
lean_ctor_set(v_reuseFailAlloc_307_, 2, v_y_296_);
lean_ctor_set(v_reuseFailAlloc_307_, 3, v_fst_292_);
v___x_305_ = v_reuseFailAlloc_307_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
uint8_t v___x_306_; 
v___x_306_ = lean_unbox(v_snd_293_);
lean_dec(v_snd_293_);
v___y_176_ = v___x_306_;
v___y_177_ = v___x_305_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_313_; 
lean_dec(v_fst_292_);
v___x_313_ = lean_unbox(v_snd_293_);
lean_dec(v_snd_293_);
v___y_176_ = v___x_313_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
case 10:
{
lean_object* v_fst_314_; lean_object* v_snd_315_; lean_object* v_fvarId_316_; lean_object* v_cidx_317_; lean_object* v_k_318_; size_t v___x_319_; size_t v___x_320_; uint8_t v___x_321_; 
v_fst_314_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_314_);
v_snd_315_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_315_);
lean_dec(v_a_189_);
v_fvarId_316_ = lean_ctor_get(v_c_168_, 0);
v_cidx_317_ = lean_ctor_get(v_c_168_, 1);
v_k_318_ = lean_ctor_get(v_c_168_, 2);
v___x_319_ = lean_ptr_addr(v_k_318_);
v___x_320_ = lean_ptr_addr(v_fst_314_);
v___x_321_ = lean_usize_dec_eq(v___x_319_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_329_; 
lean_inc(v_cidx_317_);
lean_inc(v_fvarId_316_);
v_isSharedCheck_329_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_329_ == 0)
{
lean_object* v_unused_330_; lean_object* v_unused_331_; lean_object* v_unused_332_; 
v_unused_330_ = lean_ctor_get(v_c_168_, 2);
lean_dec(v_unused_330_);
v_unused_331_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_331_);
v_unused_332_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_332_);
v___x_323_ = v_c_168_;
v_isShared_324_ = v_isSharedCheck_329_;
goto v_resetjp_322_;
}
else
{
lean_dec(v_c_168_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_329_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 2, v_fst_314_);
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_fvarId_316_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v_cidx_317_);
lean_ctor_set(v_reuseFailAlloc_328_, 2, v_fst_314_);
v___x_326_ = v_reuseFailAlloc_328_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
uint8_t v___x_327_; 
v___x_327_ = lean_unbox(v_snd_315_);
lean_dec(v_snd_315_);
v___y_176_ = v___x_327_;
v___y_177_ = v___x_326_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_333_; 
lean_dec(v_fst_314_);
v___x_333_ = lean_unbox(v_snd_315_);
lean_dec(v_snd_315_);
v___y_176_ = v___x_333_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
case 11:
{
lean_object* v_fst_334_; lean_object* v_snd_335_; lean_object* v_fvarId_336_; lean_object* v_n_337_; uint8_t v_check_338_; uint8_t v_persistent_339_; lean_object* v_k_340_; size_t v___x_341_; size_t v___x_342_; uint8_t v___x_343_; 
v_fst_334_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_334_);
v_snd_335_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_335_);
lean_dec(v_a_189_);
v_fvarId_336_ = lean_ctor_get(v_c_168_, 0);
v_n_337_ = lean_ctor_get(v_c_168_, 1);
v_check_338_ = lean_ctor_get_uint8(v_c_168_, sizeof(void*)*3);
v_persistent_339_ = lean_ctor_get_uint8(v_c_168_, sizeof(void*)*3 + 1);
v_k_340_ = lean_ctor_get(v_c_168_, 2);
v___x_341_ = lean_ptr_addr(v_k_340_);
v___x_342_ = lean_ptr_addr(v_fst_334_);
v___x_343_ = lean_usize_dec_eq(v___x_341_, v___x_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_351_; 
lean_inc(v_n_337_);
lean_inc(v_fvarId_336_);
v_isSharedCheck_351_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_351_ == 0)
{
lean_object* v_unused_352_; lean_object* v_unused_353_; lean_object* v_unused_354_; 
v_unused_352_ = lean_ctor_get(v_c_168_, 2);
lean_dec(v_unused_352_);
v_unused_353_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_353_);
v_unused_354_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_354_);
v___x_345_ = v_c_168_;
v_isShared_346_ = v_isSharedCheck_351_;
goto v_resetjp_344_;
}
else
{
lean_dec(v_c_168_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_351_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 2, v_fst_334_);
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_fvarId_336_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_n_337_);
lean_ctor_set(v_reuseFailAlloc_350_, 2, v_fst_334_);
lean_ctor_set_uint8(v_reuseFailAlloc_350_, sizeof(void*)*3, v_check_338_);
lean_ctor_set_uint8(v_reuseFailAlloc_350_, sizeof(void*)*3 + 1, v_persistent_339_);
v___x_348_ = v_reuseFailAlloc_350_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
uint8_t v___x_349_; 
v___x_349_ = lean_unbox(v_snd_335_);
lean_dec(v_snd_335_);
v___y_176_ = v___x_349_;
v___y_177_ = v___x_348_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_355_; 
lean_dec(v_fst_334_);
v___x_355_ = lean_unbox(v_snd_335_);
lean_dec(v_snd_335_);
v___y_176_ = v___x_355_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
case 12:
{
lean_object* v_fst_356_; lean_object* v_snd_357_; lean_object* v_fvarId_358_; lean_object* v_n_359_; uint8_t v_check_360_; uint8_t v_persistent_361_; lean_object* v_objs_x3f_362_; lean_object* v_k_363_; size_t v___x_364_; size_t v___x_365_; uint8_t v___x_366_; 
v_fst_356_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_356_);
v_snd_357_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_357_);
lean_dec(v_a_189_);
v_fvarId_358_ = lean_ctor_get(v_c_168_, 0);
v_n_359_ = lean_ctor_get(v_c_168_, 1);
v_check_360_ = lean_ctor_get_uint8(v_c_168_, sizeof(void*)*4);
v_persistent_361_ = lean_ctor_get_uint8(v_c_168_, sizeof(void*)*4 + 1);
v_objs_x3f_362_ = lean_ctor_get(v_c_168_, 2);
v_k_363_ = lean_ctor_get(v_c_168_, 3);
v___x_364_ = lean_ptr_addr(v_k_363_);
v___x_365_ = lean_ptr_addr(v_fst_356_);
v___x_366_ = lean_usize_dec_eq(v___x_364_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_374_; 
lean_inc(v_objs_x3f_362_);
lean_inc(v_n_359_);
lean_inc(v_fvarId_358_);
v_isSharedCheck_374_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; lean_object* v_unused_376_; lean_object* v_unused_377_; lean_object* v_unused_378_; 
v_unused_375_ = lean_ctor_get(v_c_168_, 3);
lean_dec(v_unused_375_);
v_unused_376_ = lean_ctor_get(v_c_168_, 2);
lean_dec(v_unused_376_);
v_unused_377_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_377_);
v_unused_378_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_378_);
v___x_368_ = v_c_168_;
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
else
{
lean_dec(v_c_168_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_371_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 3, v_fst_356_);
v___x_371_ = v___x_368_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_fvarId_358_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_n_359_);
lean_ctor_set(v_reuseFailAlloc_373_, 2, v_objs_x3f_362_);
lean_ctor_set(v_reuseFailAlloc_373_, 3, v_fst_356_);
lean_ctor_set_uint8(v_reuseFailAlloc_373_, sizeof(void*)*4, v_check_360_);
lean_ctor_set_uint8(v_reuseFailAlloc_373_, sizeof(void*)*4 + 1, v_persistent_361_);
v___x_371_ = v_reuseFailAlloc_373_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
uint8_t v___x_372_; 
v___x_372_ = lean_unbox(v_snd_357_);
lean_dec(v_snd_357_);
v___y_176_ = v___x_372_;
v___y_177_ = v___x_371_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_379_; 
lean_dec(v_fst_356_);
v___x_379_ = lean_unbox(v_snd_357_);
lean_dec(v_snd_357_);
v___y_176_ = v___x_379_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
case 13:
{
lean_object* v_fst_380_; lean_object* v_snd_381_; lean_object* v_fvarId_382_; lean_object* v_k_383_; size_t v___x_384_; size_t v___x_385_; uint8_t v___x_386_; 
v_fst_380_ = lean_ctor_get(v_a_189_, 0);
lean_inc(v_fst_380_);
v_snd_381_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_381_);
lean_dec(v_a_189_);
v_fvarId_382_ = lean_ctor_get(v_c_168_, 0);
v_k_383_ = lean_ctor_get(v_c_168_, 1);
v___x_384_ = lean_ptr_addr(v_k_383_);
v___x_385_ = lean_ptr_addr(v_fst_380_);
v___x_386_ = lean_usize_dec_eq(v___x_384_, v___x_385_);
if (v___x_386_ == 0)
{
lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_394_; 
lean_inc(v_fvarId_382_);
v_isSharedCheck_394_ = !lean_is_exclusive(v_c_168_);
if (v_isSharedCheck_394_ == 0)
{
lean_object* v_unused_395_; lean_object* v_unused_396_; 
v_unused_395_ = lean_ctor_get(v_c_168_, 1);
lean_dec(v_unused_395_);
v_unused_396_ = lean_ctor_get(v_c_168_, 0);
lean_dec(v_unused_396_);
v___x_388_ = v_c_168_;
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
else
{
lean_dec(v_c_168_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 1, v_fst_380_);
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_fvarId_382_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v_fst_380_);
v___x_391_ = v_reuseFailAlloc_393_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
uint8_t v___x_392_; 
v___x_392_ = lean_unbox(v_snd_381_);
lean_dec(v_snd_381_);
v___y_176_ = v___x_392_;
v___y_177_ = v___x_391_;
goto v___jp_175_;
}
}
}
else
{
uint8_t v___x_397_; 
lean_dec(v_fst_380_);
v___x_397_ = lean_unbox(v_snd_381_);
lean_dec(v_snd_381_);
v___y_176_ = v___x_397_;
v___y_177_ = v_c_168_;
goto v___jp_175_;
}
}
default: 
{
lean_object* v_snd_398_; lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
lean_dec_ref(v_c_168_);
v_snd_398_ = lean_ctor_get(v_a_189_, 1);
lean_inc(v_snd_398_);
lean_dec(v_a_189_);
v___x_399_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3);
v___x_400_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(v___x_399_);
v___x_401_ = lean_unbox(v_snd_398_);
lean_dec(v_snd_398_);
v___y_176_ = v___x_401_;
v___y_177_ = v___x_400_;
goto v___jp_175_;
}
}
}
else
{
lean_dec_ref(v_c_168_);
return v___x_188_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(lean_object* v_info_599_, lean_object* v_w_600_, size_t v_sz_601_, size_t v_i_602_, lean_object* v_bs_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
uint8_t v___x_610_; 
v___x_610_ = lean_usize_dec_lt(v_i_602_, v_sz_601_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; 
lean_dec(v_w_600_);
v___x_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_611_, 0, v_bs_603_);
return v___x_611_;
}
else
{
lean_object* v_v_612_; lean_object* v___x_613_; lean_object* v_bs_x27_614_; lean_object* v___y_616_; 
v_v_612_ = lean_array_uget(v_bs_603_, v_i_602_);
v___x_613_ = lean_unsigned_to_nat(0u);
v_bs_x27_614_ = lean_array_uset(v_bs_603_, v_i_602_, v___x_613_);
switch(lean_obj_tag(v_v_612_))
{
case 0:
{
lean_object* v_code_641_; 
v_code_641_ = lean_ctor_get(v_v_612_, 2);
lean_inc_ref(v_code_641_);
v___y_616_ = v_code_641_;
goto v___jp_615_;
}
case 1:
{
lean_object* v_code_642_; 
v_code_642_ = lean_ctor_get(v_v_612_, 1);
lean_inc_ref(v_code_642_);
v___y_616_ = v_code_642_;
goto v___jp_615_;
}
default: 
{
lean_object* v_code_643_; 
v_code_643_ = lean_ctor_get(v_v_612_, 0);
lean_inc_ref(v_code_643_);
v___y_616_ = v_code_643_;
goto v___jp_615_;
}
}
v___jp_615_:
{
lean_object* v___x_617_; 
lean_inc(v_w_600_);
v___x_617_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_599_, v_w_600_, v___y_616_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v_fst_619_; lean_object* v_snd_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_632_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_617_, 1);
v_fst_619_ = lean_ctor_get(v_a_618_, 0);
v_snd_620_ = lean_ctor_get(v_a_618_, 1);
v_isSharedCheck_632_ = !lean_is_exclusive(v_a_618_);
if (v_isSharedCheck_632_ == 0)
{
v___x_622_ = v_a_618_;
v_isShared_623_ = v_isSharedCheck_632_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_snd_620_);
lean_inc(v_fst_619_);
lean_dec(v_a_618_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_632_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_624_; lean_object* v___x_626_; 
v___x_624_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_612_, v_fst_619_);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 0, v___x_624_);
v___x_626_ = v___x_622_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_624_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v_snd_620_);
v___x_626_ = v_reuseFailAlloc_631_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
size_t v___x_627_; size_t v___x_628_; lean_object* v___x_629_; 
v___x_627_ = ((size_t)1ULL);
v___x_628_ = lean_usize_add(v_i_602_, v___x_627_);
v___x_629_ = lean_array_uset(v_bs_x27_614_, v_i_602_, v___x_626_);
v_i_602_ = v___x_628_;
v_bs_603_ = v___x_629_;
goto _start;
}
}
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec_ref(v_bs_x27_614_);
lean_dec(v_v_612_);
lean_dec(v_w_600_);
v_a_633_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_617_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_617_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed(lean_object* v_info_644_, lean_object* v_w_645_, lean_object* v_sz_646_, lean_object* v_i_647_, lean_object* v_bs_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
size_t v_sz_boxed_655_; size_t v_i_boxed_656_; lean_object* v_res_657_; 
v_sz_boxed_655_ = lean_unbox_usize(v_sz_646_);
lean_dec(v_sz_646_);
v_i_boxed_656_ = lean_unbox_usize(v_i_647_);
lean_dec(v_i_647_);
v_res_657_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(v_info_644_, v_w_645_, v_sz_boxed_655_, v_i_boxed_656_, v_bs_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec_ref(v_info_644_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed(lean_object* v_info_658_, lean_object* v_w_659_, lean_object* v_c_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_658_, v_w_659_, v_c_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec_ref(v_info_658_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(lean_object* v___y_668_){
_start:
{
lean_object* v___x_670_; lean_object* v_ngen_671_; lean_object* v_namePrefix_672_; lean_object* v_idx_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_702_; 
v___x_670_ = lean_st_ref_get(v___y_668_);
v_ngen_671_ = lean_ctor_get(v___x_670_, 2);
lean_inc_ref(v_ngen_671_);
lean_dec(v___x_670_);
v_namePrefix_672_ = lean_ctor_get(v_ngen_671_, 0);
v_idx_673_ = lean_ctor_get(v_ngen_671_, 1);
v_isSharedCheck_702_ = !lean_is_exclusive(v_ngen_671_);
if (v_isSharedCheck_702_ == 0)
{
v___x_675_ = v_ngen_671_;
v_isShared_676_ = v_isSharedCheck_702_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_idx_673_);
lean_inc(v_namePrefix_672_);
lean_dec(v_ngen_671_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_702_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_r_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_681_; 
lean_inc(v_idx_673_);
lean_inc(v_namePrefix_672_);
v_r_677_ = l_Lean_Name_num___override(v_namePrefix_672_, v_idx_673_);
v___x_678_ = lean_unsigned_to_nat(1u);
v___x_679_ = lean_nat_add(v_idx_673_, v___x_678_);
lean_dec(v_idx_673_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v___x_679_);
v___x_681_ = v___x_675_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_namePrefix_672_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v___x_679_);
v___x_681_ = v_reuseFailAlloc_701_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; lean_object* v_env_683_; lean_object* v_nextMacroScope_684_; lean_object* v_auxDeclNGen_685_; lean_object* v_traceState_686_; lean_object* v_cache_687_; lean_object* v_messages_688_; lean_object* v_infoState_689_; lean_object* v_snapshotTasks_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_699_; 
v___x_682_ = lean_st_ref_take(v___y_668_);
v_env_683_ = lean_ctor_get(v___x_682_, 0);
v_nextMacroScope_684_ = lean_ctor_get(v___x_682_, 1);
v_auxDeclNGen_685_ = lean_ctor_get(v___x_682_, 3);
v_traceState_686_ = lean_ctor_get(v___x_682_, 4);
v_cache_687_ = lean_ctor_get(v___x_682_, 5);
v_messages_688_ = lean_ctor_get(v___x_682_, 6);
v_infoState_689_ = lean_ctor_get(v___x_682_, 7);
v_snapshotTasks_690_ = lean_ctor_get(v___x_682_, 8);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_699_ == 0)
{
lean_object* v_unused_700_; 
v_unused_700_ = lean_ctor_get(v___x_682_, 2);
lean_dec(v_unused_700_);
v___x_692_ = v___x_682_;
v_isShared_693_ = v_isSharedCheck_699_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_snapshotTasks_690_);
lean_inc(v_infoState_689_);
lean_inc(v_messages_688_);
lean_inc(v_cache_687_);
lean_inc(v_traceState_686_);
lean_inc(v_auxDeclNGen_685_);
lean_inc(v_nextMacroScope_684_);
lean_inc(v_env_683_);
lean_dec(v___x_682_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_699_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 2, v___x_681_);
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_env_683_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_nextMacroScope_684_);
lean_ctor_set(v_reuseFailAlloc_698_, 2, v___x_681_);
lean_ctor_set(v_reuseFailAlloc_698_, 3, v_auxDeclNGen_685_);
lean_ctor_set(v_reuseFailAlloc_698_, 4, v_traceState_686_);
lean_ctor_set(v_reuseFailAlloc_698_, 5, v_cache_687_);
lean_ctor_set(v_reuseFailAlloc_698_, 6, v_messages_688_);
lean_ctor_set(v_reuseFailAlloc_698_, 7, v_infoState_689_);
lean_ctor_set(v_reuseFailAlloc_698_, 8, v_snapshotTasks_690_);
v___x_695_ = v_reuseFailAlloc_698_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = lean_st_ref_put(v___y_668_, v___x_695_);
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v_r_677_);
return v___x_697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg___boxed(lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_703_);
lean_dec(v___y_703_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v___x_712_; lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
v___x_712_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_710_);
v_a_713_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_712_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_712_);
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
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0___boxed(lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec_ref(v___y_721_);
return v_res_727_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_734_ = lean_box(0);
v___x_735_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3));
v___x_736_ = l_Lean_Expr_const___override(v___x_735_, v___x_734_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(lean_object* v_x_737_, lean_object* v_info_738_, lean_object* v_c_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_748_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc_n(v_a_747_, 2);
lean_dec_ref_known(v___x_746_, 1);
v___x_748_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_738_, v_a_747_, v_c_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_803_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_803_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_803_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_803_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v_snd_753_; uint8_t v___x_754_; 
v_snd_753_ = lean_ctor_get(v_a_749_, 1);
v___x_754_ = lean_unbox(v_snd_753_);
if (v___x_754_ == 0)
{
lean_object* v_fst_755_; lean_object* v___x_757_; 
lean_dec(v_a_747_);
lean_dec(v_x_737_);
v_fst_755_ = lean_ctor_get(v_a_749_, 0);
lean_inc(v_fst_755_);
lean_dec(v_a_749_);
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 0, v_fst_755_);
v___x_757_ = v___x_751_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_fst_755_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
else
{
lean_object* v_fst_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_801_; 
lean_del_object(v___x_751_);
v_fst_759_ = lean_ctor_get(v_a_749_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v_a_749_);
if (v_isSharedCheck_801_ == 0)
{
lean_object* v_unused_802_; 
v_unused_802_ = lean_ctor_get(v_a_749_, 1);
lean_dec(v_unused_802_);
v___x_761_ = v_a_749_;
v_isShared_762_ = v_isSharedCheck_801_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_fst_759_);
lean_dec(v_a_749_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_801_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_763_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1));
v___x_764_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_763_, v___y_742_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_792_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_764_);
if (v_isSharedCheck_792_ == 0)
{
v___x_767_ = v___x_764_;
v_isShared_768_ = v_isSharedCheck_792_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_764_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_792_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v_size_769_; uint8_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
v_size_769_ = lean_ctor_get(v_info_738_, 2);
v___x_770_ = 1;
v___x_771_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4);
lean_inc(v_size_769_);
if (v_isShared_762_ == 0)
{
lean_ctor_set_tag(v___x_761_, 11);
lean_ctor_set(v___x_761_, 1, v_x_737_);
lean_ctor_set(v___x_761_, 0, v_size_769_);
v___x_773_ = v___x_761_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_size_769_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v_x_737_);
v___x_773_ = v_reuseFailAlloc_791_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v_lctx_776_; lean_object* v_nextIdx_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_790_; 
v___x_774_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_774_, 0, v_a_747_);
lean_ctor_set(v___x_774_, 1, v_a_765_);
lean_ctor_set(v___x_774_, 2, v___x_771_);
lean_ctor_set(v___x_774_, 3, v___x_773_);
v___x_775_ = lean_st_ref_take(v___y_742_);
v_lctx_776_ = lean_ctor_get(v___x_775_, 0);
v_nextIdx_777_ = lean_ctor_get(v___x_775_, 1);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_790_ == 0)
{
v___x_779_ = v___x_775_;
v_isShared_780_ = v_isSharedCheck_790_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_nextIdx_777_);
lean_inc(v_lctx_776_);
lean_dec(v___x_775_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_790_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_781_; lean_object* v___x_783_; 
lean_inc_ref(v___x_774_);
v___x_781_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_770_, v_lctx_776_, v___x_774_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v___x_781_);
v___x_783_ = v___x_779_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_781_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_nextIdx_777_);
v___x_783_ = v_reuseFailAlloc_789_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_784_ = lean_st_ref_put(v___y_742_, v___x_783_);
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_774_);
lean_ctor_set(v___x_785_, 1, v_fst_759_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 0, v___x_785_);
v___x_787_ = v___x_767_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
lean_del_object(v___x_761_);
lean_dec(v_fst_759_);
lean_dec(v_a_747_);
lean_dec(v_x_737_);
v_a_793_ = lean_ctor_get(v___x_764_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_764_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_764_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_764_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_793_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_a_747_);
lean_dec(v_x_737_);
v_a_804_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_748_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_748_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec_ref(v_c_739_);
lean_dec(v_x_737_);
v_a_812_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_746_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_746_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___boxed(lean_object* v_x_820_, lean_object* v_info_821_, lean_object* v_c_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_820_, v_info_821_, v_c_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec_ref(v_info_821_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_834_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___boxed(lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec_ref(v___y_837_);
return v_res_843_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(lean_object* v_k_844_, lean_object* v_t_845_){
_start:
{
if (lean_obj_tag(v_t_845_) == 0)
{
lean_object* v_k_846_; lean_object* v_l_847_; lean_object* v_r_848_; uint8_t v___x_849_; 
v_k_846_ = lean_ctor_get(v_t_845_, 1);
v_l_847_ = lean_ctor_get(v_t_845_, 3);
v_r_848_ = lean_ctor_get(v_t_845_, 4);
v___x_849_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_844_, v_k_846_);
switch(v___x_849_)
{
case 0:
{
v_t_845_ = v_l_847_;
goto _start;
}
case 1:
{
uint8_t v___x_851_; 
v___x_851_ = 1;
return v___x_851_;
}
default: 
{
v_t_845_ = v_r_848_;
goto _start;
}
}
}
else
{
uint8_t v___x_853_; 
v___x_853_ = 0;
return v___x_853_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg___boxed(lean_object* v_k_854_, lean_object* v_t_855_){
_start:
{
uint8_t v_res_856_; lean_object* v_r_857_; 
v_res_856_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_k_854_, v_t_855_);
lean_dec(v_t_855_);
lean_dec(v_k_854_);
v_r_857_ = lean_box(v_res_856_);
return v_r_857_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(lean_object* v_k_858_, lean_object* v_v_859_, lean_object* v_t_860_){
_start:
{
if (lean_obj_tag(v_t_860_) == 0)
{
lean_object* v_size_861_; lean_object* v_k_862_; lean_object* v_v_863_; lean_object* v_l_864_; lean_object* v_r_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_1145_; 
v_size_861_ = lean_ctor_get(v_t_860_, 0);
v_k_862_ = lean_ctor_get(v_t_860_, 1);
v_v_863_ = lean_ctor_get(v_t_860_, 2);
v_l_864_ = lean_ctor_get(v_t_860_, 3);
v_r_865_ = lean_ctor_get(v_t_860_, 4);
v_isSharedCheck_1145_ = !lean_is_exclusive(v_t_860_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_867_ = v_t_860_;
v_isShared_868_ = v_isSharedCheck_1145_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_r_865_);
lean_inc(v_l_864_);
lean_inc(v_v_863_);
lean_inc(v_k_862_);
lean_inc(v_size_861_);
lean_dec(v_t_860_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_1145_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
uint8_t v___x_869_; 
v___x_869_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_858_, v_k_862_);
switch(v___x_869_)
{
case 0:
{
lean_object* v_impl_870_; lean_object* v___x_871_; 
lean_dec(v_size_861_);
v_impl_870_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_k_858_, v_v_859_, v_l_864_);
v___x_871_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_865_) == 0)
{
lean_object* v_size_872_; lean_object* v_size_873_; lean_object* v_k_874_; lean_object* v_v_875_; lean_object* v_l_876_; lean_object* v_r_877_; lean_object* v___x_878_; lean_object* v___x_879_; uint8_t v___x_880_; 
v_size_872_ = lean_ctor_get(v_r_865_, 0);
v_size_873_ = lean_ctor_get(v_impl_870_, 0);
lean_inc(v_size_873_);
v_k_874_ = lean_ctor_get(v_impl_870_, 1);
lean_inc(v_k_874_);
v_v_875_ = lean_ctor_get(v_impl_870_, 2);
lean_inc(v_v_875_);
v_l_876_ = lean_ctor_get(v_impl_870_, 3);
lean_inc(v_l_876_);
v_r_877_ = lean_ctor_get(v_impl_870_, 4);
lean_inc(v_r_877_);
v___x_878_ = lean_unsigned_to_nat(3u);
v___x_879_ = lean_nat_mul(v___x_878_, v_size_872_);
v___x_880_ = lean_nat_dec_lt(v___x_879_, v_size_873_);
lean_dec(v___x_879_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
lean_dec(v_r_877_);
lean_dec(v_l_876_);
lean_dec(v_v_875_);
lean_dec(v_k_874_);
v___x_881_ = lean_nat_add(v___x_871_, v_size_873_);
lean_dec(v_size_873_);
v___x_882_ = lean_nat_add(v___x_881_, v_size_872_);
lean_dec(v___x_881_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 3, v_impl_870_);
lean_ctor_set(v___x_867_, 0, v___x_882_);
v___x_884_ = v___x_867_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_882_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_885_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_885_, 3, v_impl_870_);
lean_ctor_set(v_reuseFailAlloc_885_, 4, v_r_865_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
else
{
lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_951_; 
v_isSharedCheck_951_ = !lean_is_exclusive(v_impl_870_);
if (v_isSharedCheck_951_ == 0)
{
lean_object* v_unused_952_; lean_object* v_unused_953_; lean_object* v_unused_954_; lean_object* v_unused_955_; lean_object* v_unused_956_; 
v_unused_952_ = lean_ctor_get(v_impl_870_, 4);
lean_dec(v_unused_952_);
v_unused_953_ = lean_ctor_get(v_impl_870_, 3);
lean_dec(v_unused_953_);
v_unused_954_ = lean_ctor_get(v_impl_870_, 2);
lean_dec(v_unused_954_);
v_unused_955_ = lean_ctor_get(v_impl_870_, 1);
lean_dec(v_unused_955_);
v_unused_956_ = lean_ctor_get(v_impl_870_, 0);
lean_dec(v_unused_956_);
v___x_887_ = v_impl_870_;
v_isShared_888_ = v_isSharedCheck_951_;
goto v_resetjp_886_;
}
else
{
lean_dec(v_impl_870_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_951_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v_size_889_; lean_object* v_size_890_; lean_object* v_k_891_; lean_object* v_v_892_; lean_object* v_l_893_; lean_object* v_r_894_; lean_object* v___x_895_; lean_object* v___x_896_; uint8_t v___x_897_; 
v_size_889_ = lean_ctor_get(v_l_876_, 0);
v_size_890_ = lean_ctor_get(v_r_877_, 0);
v_k_891_ = lean_ctor_get(v_r_877_, 1);
v_v_892_ = lean_ctor_get(v_r_877_, 2);
v_l_893_ = lean_ctor_get(v_r_877_, 3);
v_r_894_ = lean_ctor_get(v_r_877_, 4);
v___x_895_ = lean_unsigned_to_nat(2u);
v___x_896_ = lean_nat_mul(v___x_895_, v_size_889_);
v___x_897_ = lean_nat_dec_lt(v_size_890_, v___x_896_);
lean_dec(v___x_896_);
if (v___x_897_ == 0)
{
lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_926_; 
lean_inc(v_r_894_);
lean_inc(v_l_893_);
lean_inc(v_v_892_);
lean_inc(v_k_891_);
v_isSharedCheck_926_ = !lean_is_exclusive(v_r_877_);
if (v_isSharedCheck_926_ == 0)
{
lean_object* v_unused_927_; lean_object* v_unused_928_; lean_object* v_unused_929_; lean_object* v_unused_930_; lean_object* v_unused_931_; 
v_unused_927_ = lean_ctor_get(v_r_877_, 4);
lean_dec(v_unused_927_);
v_unused_928_ = lean_ctor_get(v_r_877_, 3);
lean_dec(v_unused_928_);
v_unused_929_ = lean_ctor_get(v_r_877_, 2);
lean_dec(v_unused_929_);
v_unused_930_ = lean_ctor_get(v_r_877_, 1);
lean_dec(v_unused_930_);
v_unused_931_ = lean_ctor_get(v_r_877_, 0);
lean_dec(v_unused_931_);
v___x_899_ = v_r_877_;
v_isShared_900_ = v_isSharedCheck_926_;
goto v_resetjp_898_;
}
else
{
lean_dec(v_r_877_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_926_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___x_914_; lean_object* v___y_916_; 
v___x_901_ = lean_nat_add(v___x_871_, v_size_873_);
lean_dec(v_size_873_);
v___x_902_ = lean_nat_add(v___x_901_, v_size_872_);
lean_dec(v___x_901_);
v___x_914_ = lean_nat_add(v___x_871_, v_size_889_);
if (lean_obj_tag(v_l_893_) == 0)
{
lean_object* v_size_924_; 
v_size_924_ = lean_ctor_get(v_l_893_, 0);
lean_inc(v_size_924_);
v___y_916_ = v_size_924_;
goto v___jp_915_;
}
else
{
lean_object* v___x_925_; 
v___x_925_ = lean_unsigned_to_nat(0u);
v___y_916_ = v___x_925_;
goto v___jp_915_;
}
v___jp_903_:
{
lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_907_ = lean_nat_add(v___y_905_, v___y_906_);
lean_dec(v___y_906_);
lean_dec(v___y_905_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 4, v_r_865_);
lean_ctor_set(v___x_899_, 3, v_r_894_);
lean_ctor_set(v___x_899_, 2, v_v_863_);
lean_ctor_set(v___x_899_, 1, v_k_862_);
lean_ctor_set(v___x_899_, 0, v___x_907_);
v___x_909_ = v___x_899_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v___x_907_);
lean_ctor_set(v_reuseFailAlloc_913_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_913_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_913_, 3, v_r_894_);
lean_ctor_set(v_reuseFailAlloc_913_, 4, v_r_865_);
v___x_909_ = v_reuseFailAlloc_913_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
lean_object* v___x_911_; 
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 4, v___x_909_);
lean_ctor_set(v___x_887_, 3, v___y_904_);
lean_ctor_set(v___x_887_, 2, v_v_892_);
lean_ctor_set(v___x_887_, 1, v_k_891_);
lean_ctor_set(v___x_887_, 0, v___x_902_);
v___x_911_ = v___x_887_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_912_, 1, v_k_891_);
lean_ctor_set(v_reuseFailAlloc_912_, 2, v_v_892_);
lean_ctor_set(v_reuseFailAlloc_912_, 3, v___y_904_);
lean_ctor_set(v_reuseFailAlloc_912_, 4, v___x_909_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
v___jp_915_:
{
lean_object* v___x_917_; lean_object* v___x_919_; 
v___x_917_ = lean_nat_add(v___x_914_, v___y_916_);
lean_dec(v___y_916_);
lean_dec(v___x_914_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 4, v_l_893_);
lean_ctor_set(v___x_867_, 3, v_l_876_);
lean_ctor_set(v___x_867_, 2, v_v_875_);
lean_ctor_set(v___x_867_, 1, v_k_874_);
lean_ctor_set(v___x_867_, 0, v___x_917_);
v___x_919_ = v___x_867_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_923_, 1, v_k_874_);
lean_ctor_set(v_reuseFailAlloc_923_, 2, v_v_875_);
lean_ctor_set(v_reuseFailAlloc_923_, 3, v_l_876_);
lean_ctor_set(v_reuseFailAlloc_923_, 4, v_l_893_);
v___x_919_ = v_reuseFailAlloc_923_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
lean_object* v___x_920_; 
v___x_920_ = lean_nat_add(v___x_871_, v_size_872_);
if (lean_obj_tag(v_r_894_) == 0)
{
lean_object* v_size_921_; 
v_size_921_ = lean_ctor_get(v_r_894_, 0);
lean_inc(v_size_921_);
v___y_904_ = v___x_919_;
v___y_905_ = v___x_920_;
v___y_906_ = v_size_921_;
goto v___jp_903_;
}
else
{
lean_object* v___x_922_; 
v___x_922_ = lean_unsigned_to_nat(0u);
v___y_904_ = v___x_919_;
v___y_905_ = v___x_920_;
v___y_906_ = v___x_922_;
goto v___jp_903_;
}
}
}
}
}
else
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_937_; 
lean_del_object(v___x_867_);
v___x_932_ = lean_nat_add(v___x_871_, v_size_873_);
lean_dec(v_size_873_);
v___x_933_ = lean_nat_add(v___x_932_, v_size_872_);
lean_dec(v___x_932_);
v___x_934_ = lean_nat_add(v___x_871_, v_size_872_);
v___x_935_ = lean_nat_add(v___x_934_, v_size_890_);
lean_dec(v___x_934_);
lean_inc_ref(v_r_865_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 4, v_r_865_);
lean_ctor_set(v___x_887_, 3, v_r_877_);
lean_ctor_set(v___x_887_, 2, v_v_863_);
lean_ctor_set(v___x_887_, 1, v_k_862_);
lean_ctor_set(v___x_887_, 0, v___x_935_);
v___x_937_ = v___x_887_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v___x_935_);
lean_ctor_set(v_reuseFailAlloc_950_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_950_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_950_, 3, v_r_877_);
lean_ctor_set(v_reuseFailAlloc_950_, 4, v_r_865_);
v___x_937_ = v_reuseFailAlloc_950_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
v_isSharedCheck_944_ = !lean_is_exclusive(v_r_865_);
if (v_isSharedCheck_944_ == 0)
{
lean_object* v_unused_945_; lean_object* v_unused_946_; lean_object* v_unused_947_; lean_object* v_unused_948_; lean_object* v_unused_949_; 
v_unused_945_ = lean_ctor_get(v_r_865_, 4);
lean_dec(v_unused_945_);
v_unused_946_ = lean_ctor_get(v_r_865_, 3);
lean_dec(v_unused_946_);
v_unused_947_ = lean_ctor_get(v_r_865_, 2);
lean_dec(v_unused_947_);
v_unused_948_ = lean_ctor_get(v_r_865_, 1);
lean_dec(v_unused_948_);
v_unused_949_ = lean_ctor_get(v_r_865_, 0);
lean_dec(v_unused_949_);
v___x_939_ = v_r_865_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_dec(v_r_865_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 4, v___x_937_);
lean_ctor_set(v___x_939_, 3, v_l_876_);
lean_ctor_set(v___x_939_, 2, v_v_875_);
lean_ctor_set(v___x_939_, 1, v_k_874_);
lean_ctor_set(v___x_939_, 0, v___x_933_);
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_933_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v_k_874_);
lean_ctor_set(v_reuseFailAlloc_943_, 2, v_v_875_);
lean_ctor_set(v_reuseFailAlloc_943_, 3, v_l_876_);
lean_ctor_set(v_reuseFailAlloc_943_, 4, v___x_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_957_; 
v_l_957_ = lean_ctor_get(v_impl_870_, 3);
lean_inc(v_l_957_);
if (lean_obj_tag(v_l_957_) == 0)
{
lean_object* v_r_958_; lean_object* v_k_959_; lean_object* v_v_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_971_; 
v_r_958_ = lean_ctor_get(v_impl_870_, 4);
v_k_959_ = lean_ctor_get(v_impl_870_, 1);
v_v_960_ = lean_ctor_get(v_impl_870_, 2);
v_isSharedCheck_971_ = !lean_is_exclusive(v_impl_870_);
if (v_isSharedCheck_971_ == 0)
{
lean_object* v_unused_972_; lean_object* v_unused_973_; 
v_unused_972_ = lean_ctor_get(v_impl_870_, 3);
lean_dec(v_unused_972_);
v_unused_973_ = lean_ctor_get(v_impl_870_, 0);
lean_dec(v_unused_973_);
v___x_962_ = v_impl_870_;
v_isShared_963_ = v_isSharedCheck_971_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_r_958_);
lean_inc(v_v_960_);
lean_inc(v_k_959_);
lean_dec(v_impl_870_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_971_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_966_; 
v___x_964_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_958_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 3, v_r_958_);
lean_ctor_set(v___x_962_, 2, v_v_863_);
lean_ctor_set(v___x_962_, 1, v_k_862_);
lean_ctor_set(v___x_962_, 0, v___x_871_);
v___x_966_ = v___x_962_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_871_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_970_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_970_, 3, v_r_958_);
lean_ctor_set(v_reuseFailAlloc_970_, 4, v_r_958_);
v___x_966_ = v_reuseFailAlloc_970_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
lean_object* v___x_968_; 
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 4, v___x_966_);
lean_ctor_set(v___x_867_, 3, v_l_957_);
lean_ctor_set(v___x_867_, 2, v_v_960_);
lean_ctor_set(v___x_867_, 1, v_k_959_);
lean_ctor_set(v___x_867_, 0, v___x_964_);
v___x_968_ = v___x_867_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_964_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_k_959_);
lean_ctor_set(v_reuseFailAlloc_969_, 2, v_v_960_);
lean_ctor_set(v_reuseFailAlloc_969_, 3, v_l_957_);
lean_ctor_set(v_reuseFailAlloc_969_, 4, v___x_966_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
else
{
lean_object* v_r_974_; 
v_r_974_ = lean_ctor_get(v_impl_870_, 4);
lean_inc(v_r_974_);
if (lean_obj_tag(v_r_974_) == 0)
{
lean_object* v_k_975_; lean_object* v_v_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_999_; 
v_k_975_ = lean_ctor_get(v_impl_870_, 1);
v_v_976_ = lean_ctor_get(v_impl_870_, 2);
v_isSharedCheck_999_ = !lean_is_exclusive(v_impl_870_);
if (v_isSharedCheck_999_ == 0)
{
lean_object* v_unused_1000_; lean_object* v_unused_1001_; lean_object* v_unused_1002_; 
v_unused_1000_ = lean_ctor_get(v_impl_870_, 4);
lean_dec(v_unused_1000_);
v_unused_1001_ = lean_ctor_get(v_impl_870_, 3);
lean_dec(v_unused_1001_);
v_unused_1002_ = lean_ctor_get(v_impl_870_, 0);
lean_dec(v_unused_1002_);
v___x_978_ = v_impl_870_;
v_isShared_979_ = v_isSharedCheck_999_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_v_976_);
lean_inc(v_k_975_);
lean_dec(v_impl_870_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_999_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v_k_980_; lean_object* v_v_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_995_; 
v_k_980_ = lean_ctor_get(v_r_974_, 1);
v_v_981_ = lean_ctor_get(v_r_974_, 2);
v_isSharedCheck_995_ = !lean_is_exclusive(v_r_974_);
if (v_isSharedCheck_995_ == 0)
{
lean_object* v_unused_996_; lean_object* v_unused_997_; lean_object* v_unused_998_; 
v_unused_996_ = lean_ctor_get(v_r_974_, 4);
lean_dec(v_unused_996_);
v_unused_997_ = lean_ctor_get(v_r_974_, 3);
lean_dec(v_unused_997_);
v_unused_998_ = lean_ctor_get(v_r_974_, 0);
lean_dec(v_unused_998_);
v___x_983_ = v_r_974_;
v_isShared_984_ = v_isSharedCheck_995_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_v_981_);
lean_inc(v_k_980_);
lean_dec(v_r_974_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_995_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_985_ = lean_unsigned_to_nat(3u);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 4, v_l_957_);
lean_ctor_set(v___x_983_, 3, v_l_957_);
lean_ctor_set(v___x_983_, 2, v_v_976_);
lean_ctor_set(v___x_983_, 1, v_k_975_);
lean_ctor_set(v___x_983_, 0, v___x_871_);
v___x_987_ = v___x_983_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_871_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_k_975_);
lean_ctor_set(v_reuseFailAlloc_994_, 2, v_v_976_);
lean_ctor_set(v_reuseFailAlloc_994_, 3, v_l_957_);
lean_ctor_set(v_reuseFailAlloc_994_, 4, v_l_957_);
v___x_987_ = v_reuseFailAlloc_994_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v___x_989_; 
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 4, v_l_957_);
lean_ctor_set(v___x_978_, 2, v_v_863_);
lean_ctor_set(v___x_978_, 1, v_k_862_);
lean_ctor_set(v___x_978_, 0, v___x_871_);
v___x_989_ = v___x_978_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_871_);
lean_ctor_set(v_reuseFailAlloc_993_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_993_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_993_, 3, v_l_957_);
lean_ctor_set(v_reuseFailAlloc_993_, 4, v_l_957_);
v___x_989_ = v_reuseFailAlloc_993_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
lean_object* v___x_991_; 
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 4, v___x_989_);
lean_ctor_set(v___x_867_, 3, v___x_987_);
lean_ctor_set(v___x_867_, 2, v_v_981_);
lean_ctor_set(v___x_867_, 1, v_k_980_);
lean_ctor_set(v___x_867_, 0, v___x_985_);
v___x_991_ = v___x_867_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_k_980_);
lean_ctor_set(v_reuseFailAlloc_992_, 2, v_v_981_);
lean_ctor_set(v_reuseFailAlloc_992_, 3, v___x_987_);
lean_ctor_set(v_reuseFailAlloc_992_, 4, v___x_989_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
}
}
}
else
{
lean_object* v___x_1003_; lean_object* v___x_1005_; 
v___x_1003_ = lean_unsigned_to_nat(2u);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 4, v_r_974_);
lean_ctor_set(v___x_867_, 3, v_impl_870_);
lean_ctor_set(v___x_867_, 0, v___x_1003_);
v___x_1005_ = v___x_867_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_1003_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_1006_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_1006_, 3, v_impl_870_);
lean_ctor_set(v_reuseFailAlloc_1006_, 4, v_r_974_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1008_; 
lean_dec(v_v_863_);
lean_dec(v_k_862_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 2, v_v_859_);
lean_ctor_set(v___x_867_, 1, v_k_858_);
v___x_1008_ = v___x_867_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_size_861_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_1009_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_1009_, 3, v_l_864_);
lean_ctor_set(v_reuseFailAlloc_1009_, 4, v_r_865_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
default: 
{
lean_object* v_impl_1010_; lean_object* v___x_1011_; 
lean_dec(v_size_861_);
v_impl_1010_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_k_858_, v_v_859_, v_r_865_);
v___x_1011_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_864_) == 0)
{
lean_object* v_size_1012_; lean_object* v_size_1013_; lean_object* v_k_1014_; lean_object* v_v_1015_; lean_object* v_l_1016_; lean_object* v_r_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; uint8_t v___x_1020_; 
v_size_1012_ = lean_ctor_get(v_l_864_, 0);
v_size_1013_ = lean_ctor_get(v_impl_1010_, 0);
lean_inc(v_size_1013_);
v_k_1014_ = lean_ctor_get(v_impl_1010_, 1);
lean_inc(v_k_1014_);
v_v_1015_ = lean_ctor_get(v_impl_1010_, 2);
lean_inc(v_v_1015_);
v_l_1016_ = lean_ctor_get(v_impl_1010_, 3);
lean_inc(v_l_1016_);
v_r_1017_ = lean_ctor_get(v_impl_1010_, 4);
lean_inc(v_r_1017_);
v___x_1018_ = lean_unsigned_to_nat(3u);
v___x_1019_ = lean_nat_mul(v___x_1018_, v_size_1012_);
v___x_1020_ = lean_nat_dec_lt(v___x_1019_, v_size_1013_);
lean_dec(v___x_1019_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1024_; 
lean_dec(v_r_1017_);
lean_dec(v_l_1016_);
lean_dec(v_v_1015_);
lean_dec(v_k_1014_);
v___x_1021_ = lean_nat_add(v___x_1011_, v_size_1012_);
v___x_1022_ = lean_nat_add(v___x_1021_, v_size_1013_);
lean_dec(v_size_1013_);
lean_dec(v___x_1021_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 4, v_impl_1010_);
lean_ctor_set(v___x_867_, 0, v___x_1022_);
v___x_1024_ = v___x_867_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_1022_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_1025_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_1025_, 3, v_l_864_);
lean_ctor_set(v_reuseFailAlloc_1025_, 4, v_impl_1010_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
else
{
lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1089_; 
v_isSharedCheck_1089_ = !lean_is_exclusive(v_impl_1010_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; lean_object* v_unused_1091_; lean_object* v_unused_1092_; lean_object* v_unused_1093_; lean_object* v_unused_1094_; 
v_unused_1090_ = lean_ctor_get(v_impl_1010_, 4);
lean_dec(v_unused_1090_);
v_unused_1091_ = lean_ctor_get(v_impl_1010_, 3);
lean_dec(v_unused_1091_);
v_unused_1092_ = lean_ctor_get(v_impl_1010_, 2);
lean_dec(v_unused_1092_);
v_unused_1093_ = lean_ctor_get(v_impl_1010_, 1);
lean_dec(v_unused_1093_);
v_unused_1094_ = lean_ctor_get(v_impl_1010_, 0);
lean_dec(v_unused_1094_);
v___x_1027_ = v_impl_1010_;
v_isShared_1028_ = v_isSharedCheck_1089_;
goto v_resetjp_1026_;
}
else
{
lean_dec(v_impl_1010_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1089_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v_size_1029_; lean_object* v_k_1030_; lean_object* v_v_1031_; lean_object* v_l_1032_; lean_object* v_r_1033_; lean_object* v_size_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; 
v_size_1029_ = lean_ctor_get(v_l_1016_, 0);
v_k_1030_ = lean_ctor_get(v_l_1016_, 1);
v_v_1031_ = lean_ctor_get(v_l_1016_, 2);
v_l_1032_ = lean_ctor_get(v_l_1016_, 3);
v_r_1033_ = lean_ctor_get(v_l_1016_, 4);
v_size_1034_ = lean_ctor_get(v_r_1017_, 0);
v___x_1035_ = lean_unsigned_to_nat(2u);
v___x_1036_ = lean_nat_mul(v___x_1035_, v_size_1034_);
v___x_1037_ = lean_nat_dec_lt(v_size_1029_, v___x_1036_);
lean_dec(v___x_1036_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1065_; 
lean_inc(v_r_1033_);
lean_inc(v_l_1032_);
lean_inc(v_v_1031_);
lean_inc(v_k_1030_);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_l_1016_);
if (v_isSharedCheck_1065_ == 0)
{
lean_object* v_unused_1066_; lean_object* v_unused_1067_; lean_object* v_unused_1068_; lean_object* v_unused_1069_; lean_object* v_unused_1070_; 
v_unused_1066_ = lean_ctor_get(v_l_1016_, 4);
lean_dec(v_unused_1066_);
v_unused_1067_ = lean_ctor_get(v_l_1016_, 3);
lean_dec(v_unused_1067_);
v_unused_1068_ = lean_ctor_get(v_l_1016_, 2);
lean_dec(v_unused_1068_);
v_unused_1069_ = lean_ctor_get(v_l_1016_, 1);
lean_dec(v_unused_1069_);
v_unused_1070_ = lean_ctor_get(v_l_1016_, 0);
lean_dec(v_unused_1070_);
v___x_1039_ = v_l_1016_;
v_isShared_1040_ = v_isSharedCheck_1065_;
goto v_resetjp_1038_;
}
else
{
lean_dec(v_l_1016_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1065_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1055_; 
v___x_1041_ = lean_nat_add(v___x_1011_, v_size_1012_);
v___x_1042_ = lean_nat_add(v___x_1041_, v_size_1013_);
lean_dec(v_size_1013_);
if (lean_obj_tag(v_l_1032_) == 0)
{
lean_object* v_size_1063_; 
v_size_1063_ = lean_ctor_get(v_l_1032_, 0);
lean_inc(v_size_1063_);
v___y_1055_ = v_size_1063_;
goto v___jp_1054_;
}
else
{
lean_object* v___x_1064_; 
v___x_1064_ = lean_unsigned_to_nat(0u);
v___y_1055_ = v___x_1064_;
goto v___jp_1054_;
}
v___jp_1043_:
{
lean_object* v___x_1047_; lean_object* v___x_1049_; 
v___x_1047_ = lean_nat_add(v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec(v___y_1045_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 4, v_r_1017_);
lean_ctor_set(v___x_1039_, 3, v_r_1033_);
lean_ctor_set(v___x_1039_, 2, v_v_1015_);
lean_ctor_set(v___x_1039_, 1, v_k_1014_);
lean_ctor_set(v___x_1039_, 0, v___x_1047_);
v___x_1049_ = v___x_1039_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v_k_1014_);
lean_ctor_set(v_reuseFailAlloc_1053_, 2, v_v_1015_);
lean_ctor_set(v_reuseFailAlloc_1053_, 3, v_r_1033_);
lean_ctor_set(v_reuseFailAlloc_1053_, 4, v_r_1017_);
v___x_1049_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
lean_object* v___x_1051_; 
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 4, v___x_1049_);
lean_ctor_set(v___x_1027_, 3, v___y_1044_);
lean_ctor_set(v___x_1027_, 2, v_v_1031_);
lean_ctor_set(v___x_1027_, 1, v_k_1030_);
lean_ctor_set(v___x_1027_, 0, v___x_1042_);
v___x_1051_ = v___x_1027_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v___x_1042_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_k_1030_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v_v_1031_);
lean_ctor_set(v_reuseFailAlloc_1052_, 3, v___y_1044_);
lean_ctor_set(v_reuseFailAlloc_1052_, 4, v___x_1049_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
v___jp_1054_:
{
lean_object* v___x_1056_; lean_object* v___x_1058_; 
v___x_1056_ = lean_nat_add(v___x_1041_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec(v___x_1041_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 4, v_l_1032_);
lean_ctor_set(v___x_867_, 0, v___x_1056_);
v___x_1058_ = v___x_867_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_1062_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_1062_, 3, v_l_864_);
lean_ctor_set(v_reuseFailAlloc_1062_, 4, v_l_1032_);
v___x_1058_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_nat_add(v___x_1011_, v_size_1034_);
if (lean_obj_tag(v_r_1033_) == 0)
{
lean_object* v_size_1060_; 
v_size_1060_ = lean_ctor_get(v_r_1033_, 0);
lean_inc(v_size_1060_);
v___y_1044_ = v___x_1058_;
v___y_1045_ = v___x_1059_;
v___y_1046_ = v_size_1060_;
goto v___jp_1043_;
}
else
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_unsigned_to_nat(0u);
v___y_1044_ = v___x_1058_;
v___y_1045_ = v___x_1059_;
v___y_1046_ = v___x_1061_;
goto v___jp_1043_;
}
}
}
}
}
else
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1075_; 
lean_del_object(v___x_867_);
v___x_1071_ = lean_nat_add(v___x_1011_, v_size_1012_);
v___x_1072_ = lean_nat_add(v___x_1071_, v_size_1013_);
lean_dec(v_size_1013_);
v___x_1073_ = lean_nat_add(v___x_1071_, v_size_1029_);
lean_dec(v___x_1071_);
lean_inc_ref(v_l_864_);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 4, v_l_1016_);
lean_ctor_set(v___x_1027_, 3, v_l_864_);
lean_ctor_set(v___x_1027_, 2, v_v_863_);
lean_ctor_set(v___x_1027_, 1, v_k_862_);
lean_ctor_set(v___x_1027_, 0, v___x_1073_);
v___x_1075_ = v___x_1027_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1073_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_1088_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_1088_, 3, v_l_864_);
lean_ctor_set(v_reuseFailAlloc_1088_, 4, v_l_1016_);
v___x_1075_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
v_isSharedCheck_1082_ = !lean_is_exclusive(v_l_864_);
if (v_isSharedCheck_1082_ == 0)
{
lean_object* v_unused_1083_; lean_object* v_unused_1084_; lean_object* v_unused_1085_; lean_object* v_unused_1086_; lean_object* v_unused_1087_; 
v_unused_1083_ = lean_ctor_get(v_l_864_, 4);
lean_dec(v_unused_1083_);
v_unused_1084_ = lean_ctor_get(v_l_864_, 3);
lean_dec(v_unused_1084_);
v_unused_1085_ = lean_ctor_get(v_l_864_, 2);
lean_dec(v_unused_1085_);
v_unused_1086_ = lean_ctor_get(v_l_864_, 1);
lean_dec(v_unused_1086_);
v_unused_1087_ = lean_ctor_get(v_l_864_, 0);
lean_dec(v_unused_1087_);
v___x_1077_ = v_l_864_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_dec(v_l_864_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 4, v_r_1017_);
lean_ctor_set(v___x_1077_, 3, v___x_1075_);
lean_ctor_set(v___x_1077_, 2, v_v_1015_);
lean_ctor_set(v___x_1077_, 1, v_k_1014_);
lean_ctor_set(v___x_1077_, 0, v___x_1072_);
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1081_, 1, v_k_1014_);
lean_ctor_set(v_reuseFailAlloc_1081_, 2, v_v_1015_);
lean_ctor_set(v_reuseFailAlloc_1081_, 3, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1081_, 4, v_r_1017_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1095_; 
v_l_1095_ = lean_ctor_get(v_impl_1010_, 3);
lean_inc(v_l_1095_);
if (lean_obj_tag(v_l_1095_) == 0)
{
lean_object* v_r_1096_; lean_object* v_k_1097_; lean_object* v_v_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1121_; 
v_r_1096_ = lean_ctor_get(v_impl_1010_, 4);
v_k_1097_ = lean_ctor_get(v_impl_1010_, 1);
v_v_1098_ = lean_ctor_get(v_impl_1010_, 2);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_impl_1010_);
if (v_isSharedCheck_1121_ == 0)
{
lean_object* v_unused_1122_; lean_object* v_unused_1123_; 
v_unused_1122_ = lean_ctor_get(v_impl_1010_, 3);
lean_dec(v_unused_1122_);
v_unused_1123_ = lean_ctor_get(v_impl_1010_, 0);
lean_dec(v_unused_1123_);
v___x_1100_ = v_impl_1010_;
v_isShared_1101_ = v_isSharedCheck_1121_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_r_1096_);
lean_inc(v_v_1098_);
lean_inc(v_k_1097_);
lean_dec(v_impl_1010_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1121_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v_k_1102_; lean_object* v_v_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1117_; 
v_k_1102_ = lean_ctor_get(v_l_1095_, 1);
v_v_1103_ = lean_ctor_get(v_l_1095_, 2);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_l_1095_);
if (v_isSharedCheck_1117_ == 0)
{
lean_object* v_unused_1118_; lean_object* v_unused_1119_; lean_object* v_unused_1120_; 
v_unused_1118_ = lean_ctor_get(v_l_1095_, 4);
lean_dec(v_unused_1118_);
v_unused_1119_ = lean_ctor_get(v_l_1095_, 3);
lean_dec(v_unused_1119_);
v_unused_1120_ = lean_ctor_get(v_l_1095_, 0);
lean_dec(v_unused_1120_);
v___x_1105_ = v_l_1095_;
v_isShared_1106_ = v_isSharedCheck_1117_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_v_1103_);
lean_inc(v_k_1102_);
lean_dec(v_l_1095_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1117_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1107_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1096_, 2);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 4, v_r_1096_);
lean_ctor_set(v___x_1105_, 3, v_r_1096_);
lean_ctor_set(v___x_1105_, 2, v_v_863_);
lean_ctor_set(v___x_1105_, 1, v_k_862_);
lean_ctor_set(v___x_1105_, 0, v___x_1011_);
v___x_1109_ = v___x_1105_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_1116_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_1116_, 3, v_r_1096_);
lean_ctor_set(v_reuseFailAlloc_1116_, 4, v_r_1096_);
v___x_1109_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
lean_object* v___x_1111_; 
lean_inc(v_r_1096_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 3, v_r_1096_);
lean_ctor_set(v___x_1100_, 0, v___x_1011_);
v___x_1111_ = v___x_1100_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_k_1097_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v_v_1098_);
lean_ctor_set(v_reuseFailAlloc_1115_, 3, v_r_1096_);
lean_ctor_set(v_reuseFailAlloc_1115_, 4, v_r_1096_);
v___x_1111_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1113_; 
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 4, v___x_1111_);
lean_ctor_set(v___x_867_, 3, v___x_1109_);
lean_ctor_set(v___x_867_, 2, v_v_1103_);
lean_ctor_set(v___x_867_, 1, v_k_1102_);
lean_ctor_set(v___x_867_, 0, v___x_1107_);
v___x_1113_ = v___x_867_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1107_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_k_1102_);
lean_ctor_set(v_reuseFailAlloc_1114_, 2, v_v_1103_);
lean_ctor_set(v_reuseFailAlloc_1114_, 3, v___x_1109_);
lean_ctor_set(v_reuseFailAlloc_1114_, 4, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
}
else
{
lean_object* v_r_1124_; 
v_r_1124_ = lean_ctor_get(v_impl_1010_, 4);
lean_inc(v_r_1124_);
if (lean_obj_tag(v_r_1124_) == 0)
{
lean_object* v_k_1125_; lean_object* v_v_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1137_; 
v_k_1125_ = lean_ctor_get(v_impl_1010_, 1);
v_v_1126_ = lean_ctor_get(v_impl_1010_, 2);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_impl_1010_);
if (v_isSharedCheck_1137_ == 0)
{
lean_object* v_unused_1138_; lean_object* v_unused_1139_; lean_object* v_unused_1140_; 
v_unused_1138_ = lean_ctor_get(v_impl_1010_, 4);
lean_dec(v_unused_1138_);
v_unused_1139_ = lean_ctor_get(v_impl_1010_, 3);
lean_dec(v_unused_1139_);
v_unused_1140_ = lean_ctor_get(v_impl_1010_, 0);
lean_dec(v_unused_1140_);
v___x_1128_ = v_impl_1010_;
v_isShared_1129_ = v_isSharedCheck_1137_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_v_1126_);
lean_inc(v_k_1125_);
lean_dec(v_impl_1010_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1137_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1130_; lean_object* v___x_1132_; 
v___x_1130_ = lean_unsigned_to_nat(3u);
if (v_isShared_1129_ == 0)
{
lean_ctor_set(v___x_1128_, 4, v_l_1095_);
lean_ctor_set(v___x_1128_, 2, v_v_863_);
lean_ctor_set(v___x_1128_, 1, v_k_862_);
lean_ctor_set(v___x_1128_, 0, v___x_1011_);
v___x_1132_ = v___x_1128_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_1136_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_1136_, 3, v_l_1095_);
lean_ctor_set(v_reuseFailAlloc_1136_, 4, v_l_1095_);
v___x_1132_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
lean_object* v___x_1134_; 
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 4, v_r_1124_);
lean_ctor_set(v___x_867_, 3, v___x_1132_);
lean_ctor_set(v___x_867_, 2, v_v_1126_);
lean_ctor_set(v___x_867_, 1, v_k_1125_);
lean_ctor_set(v___x_867_, 0, v___x_1130_);
v___x_1134_ = v___x_867_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1130_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_k_1125_);
lean_ctor_set(v_reuseFailAlloc_1135_, 2, v_v_1126_);
lean_ctor_set(v_reuseFailAlloc_1135_, 3, v___x_1132_);
lean_ctor_set(v_reuseFailAlloc_1135_, 4, v_r_1124_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
else
{
lean_object* v___x_1141_; lean_object* v___x_1143_; 
v___x_1141_ = lean_unsigned_to_nat(2u);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 4, v_impl_1010_);
lean_ctor_set(v___x_867_, 3, v_r_1124_);
lean_ctor_set(v___x_867_, 0, v___x_1141_);
v___x_1143_ = v___x_867_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v___x_1141_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v_k_862_);
lean_ctor_set(v_reuseFailAlloc_1144_, 2, v_v_863_);
lean_ctor_set(v_reuseFailAlloc_1144_, 3, v_r_1124_);
lean_ctor_set(v_reuseFailAlloc_1144_, 4, v_impl_1010_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
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
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = lean_unsigned_to_nat(1u);
v___x_1147_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
lean_ctor_set(v___x_1147_, 1, v_k_858_);
lean_ctor_set(v___x_1147_, 2, v_v_859_);
lean_ctor_set(v___x_1147_, 3, v_t_860_);
lean_ctor_set(v___x_1147_, 4, v_t_860_);
return v___x_1147_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2(lean_object* v_x_1148_, lean_object* v_as_1149_, size_t v_i_1150_, size_t v_stop_1151_){
_start:
{
uint8_t v___x_1152_; 
v___x_1152_ = lean_usize_dec_eq(v_i_1150_, v_stop_1151_);
if (v___x_1152_ == 0)
{
uint8_t v___x_1153_; lean_object* v___x_1154_; uint8_t v___x_1155_; lean_object* v___y_1157_; lean_object* v___x_1162_; uint8_t v___x_1163_; 
v___x_1153_ = 1;
v___x_1154_ = lean_array_uget_borrowed(v_as_1149_, v_i_1150_);
v___x_1155_ = 1;
v___x_1162_ = lean_box(1);
v___x_1163_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1148_, v___x_1162_);
if (v___x_1163_ == 0)
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = lean_box(0);
lean_inc(v_x_1148_);
v___x_1165_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1148_, v___x_1164_, v___x_1162_);
v___y_1157_ = v___x_1165_;
goto v___jp_1156_;
}
else
{
v___y_1157_ = v___x_1162_;
goto v___jp_1156_;
}
v___jp_1156_:
{
uint8_t v___x_1158_; 
v___x_1158_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v___x_1155_, v___x_1154_, v___y_1157_);
lean_dec(v___y_1157_);
if (v___x_1158_ == 0)
{
size_t v___x_1159_; size_t v___x_1160_; 
v___x_1159_ = ((size_t)1ULL);
v___x_1160_ = lean_usize_add(v_i_1150_, v___x_1159_);
v_i_1150_ = v___x_1160_;
goto _start;
}
else
{
lean_dec(v_x_1148_);
return v___x_1153_;
}
}
}
else
{
uint8_t v___x_1166_; 
lean_dec(v_x_1148_);
v___x_1166_ = 0;
return v___x_1166_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2___boxed(lean_object* v_x_1167_, lean_object* v_as_1168_, lean_object* v_i_1169_, lean_object* v_stop_1170_){
_start:
{
size_t v_i_boxed_1171_; size_t v_stop_boxed_1172_; uint8_t v_res_1173_; lean_object* v_r_1174_; 
v_i_boxed_1171_ = lean_unbox_usize(v_i_1169_);
lean_dec(v_i_1169_);
v_stop_boxed_1172_ = lean_unbox_usize(v_stop_1170_);
lean_dec(v_stop_1170_);
v_res_1173_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2(v_x_1167_, v_as_1168_, v_i_boxed_1171_, v_stop_boxed_1172_);
lean_dec_ref(v_as_1168_);
v_r_1174_ = lean_box(v_res_1173_);
return v_r_1174_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(lean_object* v_instr_1175_, lean_object* v_x_1176_){
_start:
{
if (lean_obj_tag(v_instr_1175_) == 0)
{
lean_object* v_decl_1177_; lean_object* v_value_1178_; 
v_decl_1177_ = lean_ctor_get(v_instr_1175_, 0);
v_value_1178_ = lean_ctor_get(v_decl_1177_, 3);
if (lean_obj_tag(v_value_1178_) == 5)
{
lean_object* v_args_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; uint8_t v___x_1182_; 
v_args_1179_ = lean_ctor_get(v_value_1178_, 1);
v___x_1180_ = lean_unsigned_to_nat(0u);
v___x_1181_ = lean_array_get_size(v_args_1179_);
v___x_1182_ = lean_nat_dec_lt(v___x_1180_, v___x_1181_);
if (v___x_1182_ == 0)
{
lean_dec(v_x_1176_);
return v___x_1182_;
}
else
{
if (v___x_1182_ == 0)
{
lean_dec(v_x_1176_);
return v___x_1182_;
}
else
{
size_t v___x_1183_; size_t v___x_1184_; uint8_t v___x_1185_; 
v___x_1183_ = ((size_t)0ULL);
v___x_1184_ = lean_usize_of_nat(v___x_1181_);
v___x_1185_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2(v_x_1176_, v_args_1179_, v___x_1183_, v___x_1184_);
return v___x_1185_;
}
}
}
else
{
uint8_t v___x_1186_; 
lean_dec(v_x_1176_);
v___x_1186_ = 0;
return v___x_1186_;
}
}
else
{
uint8_t v___x_1187_; 
lean_dec(v_x_1176_);
v___x_1187_ = 0;
return v___x_1187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing___boxed(lean_object* v_instr_1188_, lean_object* v_x_1189_){
_start:
{
uint8_t v_res_1190_; lean_object* v_r_1191_; 
v_res_1190_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1188_, v_x_1189_);
lean_dec_ref(v_instr_1188_);
v_r_1191_ = lean_box(v_res_1190_);
return v_r_1191_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(lean_object* v_00_u03b2_1192_, lean_object* v_k_1193_, lean_object* v_t_1194_){
_start:
{
uint8_t v___x_1195_; 
v___x_1195_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_k_1193_, v_t_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___boxed(lean_object* v_00_u03b2_1196_, lean_object* v_k_1197_, lean_object* v_t_1198_){
_start:
{
uint8_t v_res_1199_; lean_object* v_r_1200_; 
v_res_1199_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(v_00_u03b2_1196_, v_k_1197_, v_t_1198_);
lean_dec(v_t_1198_);
lean_dec(v_k_1197_);
v_r_1200_ = lean_box(v_res_1199_);
return v_r_1200_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1(lean_object* v_00_u03b2_1201_, lean_object* v_k_1202_, lean_object* v_v_1203_, lean_object* v_t_1204_, lean_object* v_hl_1205_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_k_1202_, v_v_1203_, v_t_1204_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(uint8_t v_x_1207_){
_start:
{
switch(v_x_1207_)
{
case 0:
{
lean_object* v___x_1208_; 
v___x_1208_ = lean_unsigned_to_nat(0u);
return v___x_1208_;
}
case 1:
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_unsigned_to_nat(1u);
return v___x_1209_;
}
default: 
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_unsigned_to_nat(2u);
return v___x_1210_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___boxed(lean_object* v_x_1211_){
_start:
{
uint8_t v_x_boxed_1212_; lean_object* v_res_1213_; 
v_x_boxed_1212_ = lean_unbox(v_x_1211_);
v_res_1213_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(v_x_boxed_1212_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(lean_object* v_k_1214_){
_start:
{
lean_inc(v_k_1214_);
return v_k_1214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg___boxed(lean_object* v_k_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(v_k_1215_);
lean_dec(v_k_1215_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(lean_object* v_motive_1217_, lean_object* v_ctorIdx_1218_, uint8_t v_t_1219_, lean_object* v_h_1220_, lean_object* v_k_1221_){
_start:
{
lean_inc(v_k_1221_);
return v_k_1221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___boxed(lean_object* v_motive_1222_, lean_object* v_ctorIdx_1223_, lean_object* v_t_1224_, lean_object* v_h_1225_, lean_object* v_k_1226_){
_start:
{
uint8_t v_t_boxed_1227_; lean_object* v_res_1228_; 
v_t_boxed_1227_ = lean_unbox(v_t_1224_);
v_res_1228_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(v_motive_1222_, v_ctorIdx_1223_, v_t_boxed_1227_, v_h_1225_, v_k_1226_);
lean_dec(v_k_1226_);
lean_dec(v_ctorIdx_1223_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(lean_object* v_ownedArg_1229_){
_start:
{
lean_inc(v_ownedArg_1229_);
return v_ownedArg_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg___boxed(lean_object* v_ownedArg_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(v_ownedArg_1230_);
lean_dec(v_ownedArg_1230_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(lean_object* v_motive_1232_, uint8_t v_t_1233_, lean_object* v_h_1234_, lean_object* v_ownedArg_1235_){
_start:
{
lean_inc(v_ownedArg_1235_);
return v_ownedArg_1235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___boxed(lean_object* v_motive_1236_, lean_object* v_t_1237_, lean_object* v_h_1238_, lean_object* v_ownedArg_1239_){
_start:
{
uint8_t v_t_boxed_1240_; lean_object* v_res_1241_; 
v_t_boxed_1240_ = lean_unbox(v_t_1237_);
v_res_1241_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(v_motive_1236_, v_t_boxed_1240_, v_h_1238_, v_ownedArg_1239_);
lean_dec(v_ownedArg_1239_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(lean_object* v_other_1242_){
_start:
{
lean_inc(v_other_1242_);
return v_other_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg___boxed(lean_object* v_other_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(v_other_1243_);
lean_dec(v_other_1243_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(lean_object* v_motive_1245_, uint8_t v_t_1246_, lean_object* v_h_1247_, lean_object* v_other_1248_){
_start:
{
lean_inc(v_other_1248_);
return v_other_1248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___boxed(lean_object* v_motive_1249_, lean_object* v_t_1250_, lean_object* v_h_1251_, lean_object* v_other_1252_){
_start:
{
uint8_t v_t_boxed_1253_; lean_object* v_res_1254_; 
v_t_boxed_1253_ = lean_unbox(v_t_1250_);
v_res_1254_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(v_motive_1249_, v_t_boxed_1253_, v_h_1251_, v_other_1252_);
lean_dec(v_other_1252_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(lean_object* v_none_1255_){
_start:
{
lean_inc(v_none_1255_);
return v_none_1255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg___boxed(lean_object* v_none_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(v_none_1256_);
lean_dec(v_none_1256_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(lean_object* v_motive_1258_, uint8_t v_t_1259_, lean_object* v_h_1260_, lean_object* v_none_1261_){
_start:
{
lean_inc(v_none_1261_);
return v_none_1261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___boxed(lean_object* v_motive_1262_, lean_object* v_t_1263_, lean_object* v_h_1264_, lean_object* v_none_1265_){
_start:
{
uint8_t v_t_boxed_1266_; lean_object* v_res_1267_; 
v_t_boxed_1266_ = lean_unbox(v_t_1263_);
v_res_1267_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(v_motive_1262_, v_t_boxed_1266_, v_h_1264_, v_none_1265_);
lean_dec(v_none_1265_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(lean_object* v_x_1268_, lean_object* v_as_1269_, size_t v_sz_1270_, size_t v_i_1271_, lean_object* v_b_1272_){
_start:
{
lean_object* v_a_1275_; uint8_t v___x_1279_; 
v___x_1279_ = lean_usize_dec_lt(v_i_1271_, v_sz_1270_);
if (v___x_1279_ == 0)
{
lean_object* v___x_1280_; 
v___x_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1280_, 0, v_b_1272_);
return v___x_1280_;
}
else
{
lean_object* v_snd_1281_; lean_object* v_fst_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1326_; 
v_snd_1281_ = lean_ctor_get(v_b_1272_, 1);
v_fst_1282_ = lean_ctor_get(v_b_1272_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v_b_1272_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1284_ = v_b_1272_;
v_isShared_1285_ = v_isSharedCheck_1326_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_snd_1281_);
lean_inc(v_fst_1282_);
lean_dec(v_b_1272_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1326_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v_array_1286_; lean_object* v_start_1287_; lean_object* v_stop_1288_; uint8_t v___x_1289_; 
v_array_1286_ = lean_ctor_get(v_snd_1281_, 0);
v_start_1287_ = lean_ctor_get(v_snd_1281_, 1);
v_stop_1288_ = lean_ctor_get(v_snd_1281_, 2);
v___x_1289_ = lean_nat_dec_lt(v_start_1287_, v_stop_1288_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1291_; 
if (v_isShared_1285_ == 0)
{
v___x_1291_ = v___x_1284_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_fst_1282_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v_snd_1281_);
v___x_1291_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
return v___x_1292_;
}
}
else
{
lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1322_; 
lean_inc(v_stop_1288_);
lean_inc(v_start_1287_);
lean_inc_ref(v_array_1286_);
v_isSharedCheck_1322_ = !lean_is_exclusive(v_snd_1281_);
if (v_isSharedCheck_1322_ == 0)
{
lean_object* v_unused_1323_; lean_object* v_unused_1324_; lean_object* v_unused_1325_; 
v_unused_1323_ = lean_ctor_get(v_snd_1281_, 2);
lean_dec(v_unused_1323_);
v_unused_1324_ = lean_ctor_get(v_snd_1281_, 1);
lean_dec(v_unused_1324_);
v_unused_1325_ = lean_ctor_get(v_snd_1281_, 0);
lean_dec(v_unused_1325_);
v___x_1295_ = v_snd_1281_;
v_isShared_1296_ = v_isSharedCheck_1322_;
goto v_resetjp_1294_;
}
else
{
lean_dec(v_snd_1281_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1322_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v_a_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1302_; 
v_a_1297_ = lean_array_uget_borrowed(v_as_1269_, v_i_1271_);
v___x_1298_ = lean_array_fget(v_array_1286_, v_start_1287_);
v___x_1299_ = lean_unsigned_to_nat(1u);
v___x_1300_ = lean_nat_add(v_start_1287_, v___x_1299_);
lean_dec(v_start_1287_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 1, v___x_1300_);
v___x_1302_ = v___x_1295_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_array_1286_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v___x_1300_);
lean_ctor_set(v_reuseFailAlloc_1321_, 2, v_stop_1288_);
v___x_1302_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
uint8_t v___y_1304_; 
if (lean_obj_tag(v_a_1297_) == 1)
{
lean_object* v_fvarId_1309_; uint8_t v___x_1310_; 
v_fvarId_1309_ = lean_ctor_get(v_a_1297_, 0);
v___x_1310_ = l_Lean_instBEqFVarId_beq(v_fvarId_1309_, v_x_1268_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; 
lean_dec(v___x_1298_);
lean_del_object(v___x_1284_);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v_fst_1282_);
lean_ctor_set(v___x_1311_, 1, v___x_1302_);
v_a_1275_ = v___x_1311_;
goto v___jp_1274_;
}
else
{
uint8_t v___x_1312_; 
v___x_1312_ = lean_unbox(v_fst_1282_);
switch(v___x_1312_)
{
case 0:
{
uint8_t v_borrow_1313_; 
v_borrow_1313_ = lean_ctor_get_uint8(v___x_1298_, sizeof(void*)*3);
lean_dec(v___x_1298_);
if (v_borrow_1313_ == 0)
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_unbox(v_fst_1282_);
lean_dec(v_fst_1282_);
v___y_1304_ = v___x_1314_;
goto v___jp_1303_;
}
else
{
uint8_t v___x_1315_; 
lean_dec(v_fst_1282_);
v___x_1315_ = 1;
v___y_1304_ = v___x_1315_;
goto v___jp_1303_;
}
}
case 1:
{
uint8_t v___x_1316_; 
lean_dec(v___x_1298_);
v___x_1316_ = lean_unbox(v_fst_1282_);
lean_dec(v_fst_1282_);
v___y_1304_ = v___x_1316_;
goto v___jp_1303_;
}
default: 
{
uint8_t v_borrow_1317_; 
lean_dec(v_fst_1282_);
v_borrow_1317_ = lean_ctor_get_uint8(v___x_1298_, sizeof(void*)*3);
lean_dec(v___x_1298_);
if (v_borrow_1317_ == 0)
{
uint8_t v___x_1318_; 
v___x_1318_ = 0;
v___y_1304_ = v___x_1318_;
goto v___jp_1303_;
}
else
{
uint8_t v___x_1319_; 
v___x_1319_ = 1;
v___y_1304_ = v___x_1319_;
goto v___jp_1303_;
}
}
}
}
}
else
{
lean_object* v___x_1320_; 
lean_dec(v___x_1298_);
lean_del_object(v___x_1284_);
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v_fst_1282_);
lean_ctor_set(v___x_1320_, 1, v___x_1302_);
v_a_1275_ = v___x_1320_;
goto v___jp_1274_;
}
v___jp_1303_:
{
lean_object* v___x_1305_; lean_object* v___x_1307_; 
v___x_1305_ = lean_box(v___y_1304_);
if (v_isShared_1285_ == 0)
{
lean_ctor_set(v___x_1284_, 1, v___x_1302_);
lean_ctor_set(v___x_1284_, 0, v___x_1305_);
v___x_1307_ = v___x_1284_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1305_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v___x_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
v_a_1275_ = v___x_1307_;
goto v___jp_1274_;
}
}
}
}
}
}
}
v___jp_1274_:
{
size_t v___x_1276_; size_t v___x_1277_; 
v___x_1276_ = ((size_t)1ULL);
v___x_1277_ = lean_usize_add(v_i_1271_, v___x_1276_);
v_i_1271_ = v___x_1277_;
v_b_1272_ = v_a_1275_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg___boxed(lean_object* v_x_1327_, lean_object* v_as_1328_, lean_object* v_sz_1329_, lean_object* v_i_1330_, lean_object* v_b_1331_, lean_object* v___y_1332_){
_start:
{
size_t v_sz_boxed_1333_; size_t v_i_boxed_1334_; lean_object* v_res_1335_; 
v_sz_boxed_1333_ = lean_unbox_usize(v_sz_1329_);
lean_dec(v_sz_1329_);
v_i_boxed_1334_ = lean_unbox_usize(v_i_1330_);
lean_dec(v_i_1330_);
v_res_1335_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1327_, v_as_1328_, v_sz_boxed_1333_, v_i_boxed_1334_, v_b_1331_);
lean_dec_ref(v_as_1328_);
lean_dec(v_x_1327_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(lean_object* v_instr_1336_, lean_object* v_x_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
uint8_t v___y_1345_; lean_object* v___y_1346_; 
if (lean_obj_tag(v_instr_1336_) == 0)
{
lean_object* v_decl_1360_; lean_object* v_value_1361_; 
v_decl_1360_ = lean_ctor_get(v_instr_1336_, 0);
v_value_1361_ = lean_ctor_get(v_decl_1360_, 3);
lean_inc(v_value_1361_);
switch(lean_obj_tag(v_value_1361_))
{
case 9:
{
lean_object* v_fn_1362_; lean_object* v_args_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1430_; 
lean_dec_ref_known(v_instr_1336_, 1);
v_fn_1362_ = lean_ctor_get(v_value_1361_, 0);
v_args_1363_ = lean_ctor_get(v_value_1361_, 1);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_value_1361_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1365_ = v_value_1361_;
v_isShared_1366_ = v_isSharedCheck_1430_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_args_1363_);
lean_inc(v_fn_1362_);
lean_dec(v_value_1361_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1430_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
uint8_t v___x_1367_; lean_object* v___x_1369_; 
v___x_1367_ = 1;
lean_inc_ref(v_args_1363_);
lean_inc(v_fn_1362_);
if (v_isShared_1366_ == 0)
{
v___x_1369_ = v___x_1365_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_fn_1362_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v_args_1363_);
v___x_1369_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
lean_object* v___x_1370_; 
v___x_1370_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1362_, v___y_1342_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1420_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1373_ = v___x_1370_;
v_isShared_1374_ = v_isSharedCheck_1420_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1370_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1420_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___y_1376_; 
if (lean_obj_tag(v_a_1371_) == 1)
{
lean_object* v_val_1388_; lean_object* v_params_1389_; uint8_t v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; size_t v_sz_1396_; size_t v___x_1397_; lean_object* v___x_1398_; 
lean_del_object(v___x_1373_);
lean_dec_ref(v___x_1369_);
v_val_1388_ = lean_ctor_get(v_a_1371_, 0);
lean_inc(v_val_1388_);
lean_dec_ref_known(v_a_1371_, 1);
v_params_1389_ = lean_ctor_get(v_val_1388_, 3);
lean_inc_ref(v_params_1389_);
lean_dec(v_val_1388_);
v___x_1390_ = 2;
v___x_1391_ = lean_unsigned_to_nat(0u);
v___x_1392_ = lean_array_get_size(v_params_1389_);
v___x_1393_ = l_Array_toSubarray___redArg(v_params_1389_, v___x_1391_, v___x_1392_);
v___x_1394_ = lean_box(v___x_1390_);
v___x_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
lean_ctor_set(v___x_1395_, 1, v___x_1393_);
v_sz_1396_ = lean_array_size(v_args_1363_);
v___x_1397_ = ((size_t)0ULL);
v___x_1398_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1337_, v_args_1363_, v_sz_1396_, v___x_1397_, v___x_1395_);
lean_dec_ref(v_args_1363_);
lean_dec(v_x_1337_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1407_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1401_ = v___x_1398_;
v_isShared_1402_ = v_isSharedCheck_1407_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1398_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1407_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v_fst_1403_; lean_object* v___x_1405_; 
v_fst_1403_ = lean_ctor_get(v_a_1399_, 0);
lean_inc(v_fst_1403_);
lean_dec(v_a_1399_);
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 0, v_fst_1403_);
v___x_1405_ = v___x_1401_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_fst_1403_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
else
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1415_; 
v_a_1408_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1410_ = v___x_1398_;
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1398_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1408_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
else
{
lean_object* v___x_1416_; uint8_t v___x_1417_; 
lean_dec(v_a_1371_);
lean_dec_ref(v_args_1363_);
v___x_1416_ = lean_box(1);
v___x_1417_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1337_, v___x_1416_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = lean_box(0);
v___x_1419_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1337_, v___x_1418_, v___x_1416_);
v___y_1376_ = v___x_1419_;
goto v___jp_1375_;
}
else
{
lean_dec(v_x_1337_);
v___y_1376_ = v___x_1416_;
goto v___jp_1375_;
}
}
v___jp_1375_:
{
uint8_t v___x_1377_; 
v___x_1377_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1367_, v___x_1369_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec_ref(v___x_1369_);
if (v___x_1377_ == 0)
{
uint8_t v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1381_; 
v___x_1378_ = 2;
v___x_1379_ = lean_box(v___x_1378_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 0, v___x_1379_);
v___x_1381_ = v___x_1373_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
else
{
uint8_t v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1383_ = 0;
v___x_1384_ = lean_box(v___x_1383_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 0, v___x_1384_);
v___x_1386_ = v___x_1373_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec_ref(v___x_1369_);
lean_dec_ref(v_args_1363_);
lean_dec(v_x_1337_);
v_a_1421_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1370_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1370_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
}
case 10:
{
lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1461_; 
v_isSharedCheck_1461_ = !lean_is_exclusive(v_instr_1336_);
if (v_isSharedCheck_1461_ == 0)
{
lean_object* v_unused_1462_; 
v_unused_1462_ = lean_ctor_get(v_instr_1336_, 0);
lean_dec(v_unused_1462_);
v___x_1432_ = v_instr_1336_;
v_isShared_1433_ = v_isSharedCheck_1461_;
goto v_resetjp_1431_;
}
else
{
lean_dec(v_instr_1336_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1461_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v_fn_1434_; lean_object* v_args_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1460_; 
v_fn_1434_ = lean_ctor_get(v_value_1361_, 0);
v_args_1435_ = lean_ctor_get(v_value_1361_, 1);
v_isSharedCheck_1460_ = !lean_is_exclusive(v_value_1361_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1437_ = v_value_1361_;
v_isShared_1438_ = v_isSharedCheck_1460_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_args_1435_);
lean_inc(v_fn_1434_);
lean_dec(v_value_1361_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1460_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
uint8_t v___x_1439_; lean_object* v___x_1441_; 
v___x_1439_ = 1;
if (v_isShared_1438_ == 0)
{
v___x_1441_ = v___x_1437_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_fn_1434_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_args_1435_);
v___x_1441_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
lean_object* v___y_1443_; lean_object* v___x_1455_; uint8_t v___x_1456_; 
v___x_1455_ = lean_box(1);
v___x_1456_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1337_, v___x_1455_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1457_ = lean_box(0);
v___x_1458_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1337_, v___x_1457_, v___x_1455_);
v___y_1443_ = v___x_1458_;
goto v___jp_1442_;
}
else
{
lean_dec(v_x_1337_);
v___y_1443_ = v___x_1455_;
goto v___jp_1442_;
}
v___jp_1442_:
{
uint8_t v___x_1444_; 
v___x_1444_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1439_, v___x_1441_, v___y_1443_);
lean_dec(v___y_1443_);
lean_dec_ref(v___x_1441_);
if (v___x_1444_ == 0)
{
uint8_t v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1448_; 
v___x_1445_ = 2;
v___x_1446_ = lean_box(v___x_1445_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1446_);
v___x_1448_ = v___x_1432_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1446_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
else
{
uint8_t v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1450_ = 0;
v___x_1451_ = lean_box(v___x_1450_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1451_);
v___x_1453_ = v___x_1432_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1451_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
}
}
case 4:
{
lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1493_; 
v_isSharedCheck_1493_ = !lean_is_exclusive(v_instr_1336_);
if (v_isSharedCheck_1493_ == 0)
{
lean_object* v_unused_1494_; 
v_unused_1494_ = lean_ctor_get(v_instr_1336_, 0);
lean_dec(v_unused_1494_);
v___x_1464_ = v_instr_1336_;
v_isShared_1465_ = v_isSharedCheck_1493_;
goto v_resetjp_1463_;
}
else
{
lean_dec(v_instr_1336_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1493_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v_fvarId_1466_; lean_object* v_args_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1492_; 
v_fvarId_1466_ = lean_ctor_get(v_value_1361_, 0);
v_args_1467_ = lean_ctor_get(v_value_1361_, 1);
v_isSharedCheck_1492_ = !lean_is_exclusive(v_value_1361_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1469_ = v_value_1361_;
v_isShared_1470_ = v_isSharedCheck_1492_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_args_1467_);
lean_inc(v_fvarId_1466_);
lean_dec(v_value_1361_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1492_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
uint8_t v___x_1471_; lean_object* v___x_1473_; 
v___x_1471_ = 1;
if (v_isShared_1470_ == 0)
{
v___x_1473_ = v___x_1469_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_fvarId_1466_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v_args_1467_);
v___x_1473_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
lean_object* v___y_1475_; lean_object* v___x_1487_; uint8_t v___x_1488_; 
v___x_1487_ = lean_box(1);
v___x_1488_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1337_, v___x_1487_);
if (v___x_1488_ == 0)
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1489_ = lean_box(0);
v___x_1490_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1337_, v___x_1489_, v___x_1487_);
v___y_1475_ = v___x_1490_;
goto v___jp_1474_;
}
else
{
lean_dec(v_x_1337_);
v___y_1475_ = v___x_1487_;
goto v___jp_1474_;
}
v___jp_1474_:
{
uint8_t v___x_1476_; 
v___x_1476_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1471_, v___x_1473_, v___y_1475_);
lean_dec(v___y_1475_);
lean_dec_ref(v___x_1473_);
if (v___x_1476_ == 0)
{
uint8_t v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1480_; 
v___x_1477_ = 2;
v___x_1478_ = lean_box(v___x_1477_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1478_);
v___x_1480_ = v___x_1464_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v___x_1478_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
else
{
uint8_t v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1485_; 
v___x_1482_ = 0;
v___x_1483_ = lean_box(v___x_1482_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1483_);
v___x_1485_ = v___x_1464_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_value_1361_);
goto v___jp_1354_;
}
}
}
else
{
goto v___jp_1354_;
}
v___jp_1344_:
{
uint8_t v___x_1347_; 
v___x_1347_ = l_Lean_Compiler_LCNF_CodeDecl_dependsOn(v___y_1345_, v_instr_1336_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v_instr_1336_);
if (v___x_1347_ == 0)
{
uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1348_ = 2;
v___x_1349_ = lean_box(v___x_1348_);
v___x_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
return v___x_1350_;
}
else
{
uint8_t v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1351_ = 1;
v___x_1352_ = lean_box(v___x_1351_);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
}
v___jp_1354_:
{
uint8_t v___x_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v___x_1355_ = 1;
v___x_1356_ = lean_box(1);
v___x_1357_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1337_, v___x_1356_);
if (v___x_1357_ == 0)
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = lean_box(0);
v___x_1359_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1337_, v___x_1358_, v___x_1356_);
v___y_1345_ = v___x_1355_;
v___y_1346_ = v___x_1359_;
goto v___jp_1344_;
}
else
{
lean_dec(v_x_1337_);
v___y_1345_ = v___x_1355_;
v___y_1346_ = v___x_1356_;
goto v___jp_1344_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse___boxed(lean_object* v_instr_1495_, lean_object* v_x_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1495_, v_x_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec_ref(v___y_1497_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(lean_object* v_x_1504_, lean_object* v_as_1505_, size_t v_sz_1506_, size_t v_i_1507_, lean_object* v_b_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1504_, v_as_1505_, v_sz_1506_, v_i_1507_, v_b_1508_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___boxed(lean_object* v_x_1516_, lean_object* v_as_1517_, lean_object* v_sz_1518_, lean_object* v_i_1519_, lean_object* v_b_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
size_t v_sz_boxed_1527_; size_t v_i_boxed_1528_; lean_object* v_res_1529_; 
v_sz_boxed_1527_ = lean_unbox_usize(v_sz_1518_);
lean_dec(v_sz_1518_);
v_i_boxed_1528_ = lean_unbox_usize(v_i_1519_);
lean_dec(v_i_1519_);
v_res_1529_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(v_x_1516_, v_as_1517_, v_sz_boxed_1527_, v_i_boxed_1528_, v_b_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec_ref(v_as_1517_);
lean_dec(v_x_1516_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(lean_object* v_alt_1530_, lean_object* v_f_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v___y_1539_; 
switch(lean_obj_tag(v_alt_1530_))
{
case 0:
{
lean_object* v_code_1558_; 
v_code_1558_ = lean_ctor_get(v_alt_1530_, 2);
lean_inc_ref(v_code_1558_);
v___y_1539_ = v_code_1558_;
goto v___jp_1538_;
}
case 1:
{
lean_object* v_code_1559_; 
v_code_1559_ = lean_ctor_get(v_alt_1530_, 1);
lean_inc_ref(v_code_1559_);
v___y_1539_ = v_code_1559_;
goto v___jp_1538_;
}
default: 
{
lean_object* v_code_1560_; 
v_code_1560_ = lean_ctor_get(v_alt_1530_, 0);
lean_inc_ref(v_code_1560_);
v___y_1539_ = v_code_1560_;
goto v___jp_1538_;
}
}
v___jp_1538_:
{
lean_object* v___x_1540_; 
lean_inc(v___y_1536_);
lean_inc_ref(v___y_1535_);
lean_inc(v___y_1534_);
lean_inc_ref(v___y_1533_);
lean_inc_ref(v___y_1532_);
v___x_1540_ = lean_apply_7(v_f_1531_, v___y_1539_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, lean_box(0));
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1549_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1543_ = v___x_1540_;
v_isShared_1544_ = v_isSharedCheck_1549_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1540_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1549_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1545_; lean_object* v___x_1547_; 
v___x_1545_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1530_, v_a_1541_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 0, v___x_1545_);
v___x_1547_ = v___x_1543_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v___x_1545_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
else
{
lean_object* v_a_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1557_; 
lean_dec_ref(v_alt_1530_);
v_a_1550_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1552_ = v___x_1540_;
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1540_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
lean_object* v___x_1555_; 
if (v_isShared_1553_ == 0)
{
v___x_1555_ = v___x_1552_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1550_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
return v___x_1555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg___boxed(lean_object* v_alt_1561_, lean_object* v_f_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_1561_, v_f_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec_ref(v___y_1563_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed(lean_object* v_x_1570_, lean_object* v_info_1571_, lean_object* v_c_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_x_1570_, v_info_1571_, v_c_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec_ref(v___y_1573_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(lean_object* v_x_1580_, lean_object* v_info_1581_, lean_object* v_i_1582_, lean_object* v_as_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
lean_object* v___x_1590_; uint8_t v___x_1591_; 
v___x_1590_ = lean_array_get_size(v_as_1583_);
v___x_1591_ = lean_nat_dec_lt(v_i_1582_, v___x_1590_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1592_; 
lean_dec(v_i_1582_);
lean_dec_ref(v_info_1581_);
lean_dec(v_x_1580_);
v___x_1592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1592_, 0, v_as_1583_);
return v___x_1592_;
}
else
{
lean_object* v_a_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v_a_1593_ = lean_array_fget_borrowed(v_as_1583_, v_i_1582_);
lean_inc_ref(v_info_1581_);
lean_inc(v_x_1580_);
v___x_1594_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed), 9, 2);
lean_closure_set(v___x_1594_, 0, v_x_1580_);
lean_closure_set(v___x_1594_, 1, v_info_1581_);
lean_inc(v_a_1593_);
v___x_1595_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_a_1593_, v___x_1594_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
if (lean_obj_tag(v___x_1595_) == 0)
{
lean_object* v_a_1596_; size_t v___x_1597_; size_t v___x_1598_; uint8_t v___x_1599_; 
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
lean_inc(v_a_1596_);
lean_dec_ref_known(v___x_1595_, 1);
v___x_1597_ = lean_ptr_addr(v_a_1593_);
v___x_1598_ = lean_ptr_addr(v_a_1596_);
v___x_1599_ = lean_usize_dec_eq(v___x_1597_, v___x_1598_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1600_ = lean_unsigned_to_nat(1u);
v___x_1601_ = lean_nat_add(v_i_1582_, v___x_1600_);
v___x_1602_ = lean_array_fset(v_as_1583_, v_i_1582_, v_a_1596_);
lean_dec(v_i_1582_);
v_i_1582_ = v___x_1601_;
v_as_1583_ = v___x_1602_;
goto _start;
}
else
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
lean_dec(v_a_1596_);
v___x_1604_ = lean_unsigned_to_nat(1u);
v___x_1605_ = lean_nat_add(v_i_1582_, v___x_1604_);
lean_dec(v_i_1582_);
v_i_1582_ = v___x_1605_;
goto _start;
}
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec_ref(v_as_1583_);
lean_dec(v_i_1582_);
lean_dec_ref(v_info_1581_);
lean_dec(v_x_1580_);
v_a_1607_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1595_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1595_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1(void){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1616_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_1617_ = lean_unsigned_to_nat(61u);
v___x_1618_ = lean_unsigned_to_nat(247u);
v___x_1619_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0));
v___x_1620_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_1621_ = l_mkPanicMessageWithDecl(v___x_1620_, v___x_1619_, v___x_1618_, v___x_1617_, v___x_1616_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(lean_object* v_x_1622_, lean_object* v_info_1623_, lean_object* v_c_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
switch(lean_obj_tag(v_c_1624_))
{
case 0:
{
lean_object* v_decl_1631_; lean_object* v_k_1632_; uint8_t v___x_1633_; lean_object* v_instr_1634_; uint8_t v___x_1635_; uint8_t v___x_1636_; 
v_decl_1631_ = lean_ctor_get(v_c_1624_, 0);
v_k_1632_ = lean_ctor_get(v_c_1624_, 1);
v___x_1633_ = 1;
v_instr_1634_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1633_, v_c_1624_);
lean_inc(v_x_1622_);
v___x_1635_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1634_, v_x_1622_);
v___x_1636_ = 1;
if (v___x_1635_ == 0)
{
lean_object* v___x_1637_; 
lean_inc_ref(v_k_1632_);
lean_inc_ref(v_info_1623_);
lean_inc(v_x_1622_);
v___x_1637_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1622_, v_info_1623_, v_k_1632_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1755_; 
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1640_ = v___x_1637_;
v_isShared_1641_ = v_isSharedCheck_1755_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1637_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1755_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___y_1643_; lean_object* v_snd_1649_; uint8_t v___x_1650_; 
v_snd_1649_ = lean_ctor_get(v_a_1638_, 1);
v___x_1650_ = lean_unbox(v_snd_1649_);
if (v___x_1650_ == 0)
{
lean_object* v_fst_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1740_; 
lean_inc(v_snd_1649_);
lean_del_object(v___x_1640_);
v_fst_1651_ = lean_ctor_get(v_a_1638_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v_a_1638_);
if (v_isSharedCheck_1740_ == 0)
{
lean_object* v_unused_1741_; 
v_unused_1741_ = lean_ctor_get(v_a_1638_, 1);
lean_dec(v_unused_1741_);
v___x_1653_ = v_a_1638_;
v_isShared_1654_ = v_isSharedCheck_1740_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_fst_1651_);
lean_dec(v_a_1638_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1740_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1655_; 
lean_inc(v_x_1622_);
v___x_1655_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1634_, v_x_1622_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1655_) == 0)
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1731_; 
v_a_1656_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1658_ = v___x_1655_;
v_isShared_1659_ = v_isSharedCheck_1731_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1655_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1731_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___y_1661_; lean_object* v___y_1669_; uint8_t v___x_1673_; 
v___x_1673_ = lean_unbox(v_a_1656_);
lean_dec(v_a_1656_);
switch(v___x_1673_)
{
case 0:
{
size_t v___x_1674_; size_t v___x_1675_; uint8_t v___x_1676_; 
lean_del_object(v___x_1658_);
lean_del_object(v___x_1653_);
lean_dec(v_snd_1649_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_1674_ = lean_ptr_addr(v_k_1632_);
v___x_1675_ = lean_ptr_addr(v_fst_1651_);
v___x_1676_ = lean_usize_dec_eq(v___x_1674_, v___x_1675_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
lean_inc_ref(v_decl_1631_);
v_isSharedCheck_1683_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_1683_ == 0)
{
lean_object* v_unused_1684_; lean_object* v_unused_1685_; 
v_unused_1684_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_1684_);
v_unused_1685_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_1685_);
v___x_1678_ = v_c_1624_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_dec(v_c_1624_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 1, v_fst_1651_);
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_decl_1631_);
lean_ctor_set(v_reuseFailAlloc_1682_, 1, v_fst_1651_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
v___y_1669_ = v___x_1681_;
goto v___jp_1668_;
}
}
}
else
{
lean_dec(v_fst_1651_);
v___y_1669_ = v_c_1624_;
goto v___jp_1668_;
}
}
case 1:
{
lean_object* v___x_1686_; 
lean_del_object(v___x_1658_);
lean_del_object(v___x_1653_);
lean_dec(v_snd_1649_);
v___x_1686_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1622_, v_info_1623_, v_fst_1651_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec_ref(v_info_1623_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1710_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1689_ = v___x_1686_;
v_isShared_1690_ = v_isSharedCheck_1710_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1686_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1710_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___y_1692_; size_t v___x_1698_; size_t v___x_1699_; uint8_t v___x_1700_; 
v___x_1698_ = lean_ptr_addr(v_k_1632_);
v___x_1699_ = lean_ptr_addr(v_a_1687_);
v___x_1700_ = lean_usize_dec_eq(v___x_1698_, v___x_1699_);
if (v___x_1700_ == 0)
{
lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
lean_inc_ref(v_decl_1631_);
v_isSharedCheck_1707_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_1707_ == 0)
{
lean_object* v_unused_1708_; lean_object* v_unused_1709_; 
v_unused_1708_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_1708_);
v_unused_1709_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_1709_);
v___x_1702_ = v_c_1624_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_dec(v_c_1624_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v_a_1687_);
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_decl_1631_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v_a_1687_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
v___y_1692_ = v___x_1705_;
goto v___jp_1691_;
}
}
}
else
{
lean_dec(v_a_1687_);
v___y_1692_ = v_c_1624_;
goto v___jp_1691_;
}
v___jp_1691_:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1696_; 
v___x_1693_ = lean_box(v___x_1636_);
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___y_1692_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1694_);
v___x_1696_ = v___x_1689_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1694_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
lean_dec_ref_known(v_c_1624_, 2);
v_a_1711_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1713_ = v___x_1686_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1686_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1711_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
default: 
{
size_t v___x_1719_; size_t v___x_1720_; uint8_t v___x_1721_; 
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_1719_ = lean_ptr_addr(v_k_1632_);
v___x_1720_ = lean_ptr_addr(v_fst_1651_);
v___x_1721_ = lean_usize_dec_eq(v___x_1719_, v___x_1720_);
if (v___x_1721_ == 0)
{
lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_inc_ref(v_decl_1631_);
v_isSharedCheck_1728_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_1728_ == 0)
{
lean_object* v_unused_1729_; lean_object* v_unused_1730_; 
v_unused_1729_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_1729_);
v_unused_1730_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_1730_);
v___x_1723_ = v_c_1624_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_dec(v_c_1624_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 1, v_fst_1651_);
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_decl_1631_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v_fst_1651_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
v___y_1661_ = v___x_1726_;
goto v___jp_1660_;
}
}
}
else
{
lean_dec(v_fst_1651_);
v___y_1661_ = v_c_1624_;
goto v___jp_1660_;
}
}
}
v___jp_1660_:
{
lean_object* v___x_1663_; 
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 0, v___y_1661_);
v___x_1663_ = v___x_1653_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___y_1661_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v_snd_1649_);
v___x_1663_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
lean_object* v___x_1665_; 
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 0, v___x_1663_);
v___x_1665_ = v___x_1658_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1663_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
v___jp_1668_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1670_ = lean_box(v___x_1636_);
v___x_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___y_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1671_);
return v___x_1672_;
}
}
}
else
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
lean_del_object(v___x_1653_);
lean_dec(v_fst_1651_);
lean_dec(v_snd_1649_);
lean_dec_ref_known(v_c_1624_, 2);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v_a_1732_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v___x_1655_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1655_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1732_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
}
else
{
lean_object* v_fst_1742_; size_t v___x_1743_; size_t v___x_1744_; uint8_t v___x_1745_; 
lean_dec_ref(v_instr_1634_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v_fst_1742_ = lean_ctor_get(v_a_1638_, 0);
lean_inc(v_fst_1742_);
lean_dec(v_a_1638_);
v___x_1743_ = lean_ptr_addr(v_k_1632_);
v___x_1744_ = lean_ptr_addr(v_fst_1742_);
v___x_1745_ = lean_usize_dec_eq(v___x_1743_, v___x_1744_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1752_; 
lean_inc_ref(v_decl_1631_);
v_isSharedCheck_1752_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_1752_ == 0)
{
lean_object* v_unused_1753_; lean_object* v_unused_1754_; 
v_unused_1753_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_1753_);
v_unused_1754_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_1754_);
v___x_1747_ = v_c_1624_;
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
else
{
lean_dec(v_c_1624_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1748_ == 0)
{
lean_ctor_set(v___x_1747_, 1, v_fst_1742_);
v___x_1750_ = v___x_1747_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_decl_1631_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v_fst_1742_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
v___y_1643_ = v___x_1750_;
goto v___jp_1642_;
}
}
}
else
{
lean_dec(v_fst_1742_);
v___y_1643_ = v_c_1624_;
goto v___jp_1642_;
}
}
v___jp_1642_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1647_; 
v___x_1644_ = lean_box(v___x_1636_);
v___x_1645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1645_, 0, v___y_1643_);
lean_ctor_set(v___x_1645_, 1, v___x_1644_);
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 0, v___x_1645_);
v___x_1647_ = v___x_1640_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v___x_1645_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1634_);
lean_dec_ref_known(v_c_1624_, 2);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
return v___x_1637_;
}
}
else
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
lean_dec_ref(v_instr_1634_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_1756_ = lean_box(v___x_1636_);
v___x_1757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1757_, 0, v_c_1624_);
lean_ctor_set(v___x_1757_, 1, v___x_1756_);
v___x_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1757_);
return v___x_1758_;
}
}
case 2:
{
lean_object* v_decl_1759_; lean_object* v_k_1760_; lean_object* v___x_1761_; 
v_decl_1759_ = lean_ctor_get(v_c_1624_, 0);
v_k_1760_ = lean_ctor_get(v_c_1624_, 1);
lean_inc_ref(v_k_1760_);
lean_inc_ref(v_info_1623_);
lean_inc(v_x_1622_);
v___x_1761_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1622_, v_info_1623_, v_k_1760_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v_a_1762_; lean_object* v_fst_1763_; lean_object* v_snd_1764_; lean_object* v_params_1765_; lean_object* v_type_1766_; lean_object* v_value_1767_; uint8_t v___x_1768_; lean_object* v___x_1769_; 
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc(v_a_1762_);
lean_dec_ref_known(v___x_1761_, 1);
v_fst_1763_ = lean_ctor_get(v_a_1762_, 0);
lean_inc(v_fst_1763_);
v_snd_1764_ = lean_ctor_get(v_a_1762_, 1);
lean_inc(v_snd_1764_);
lean_dec(v_a_1762_);
v_params_1765_ = lean_ctor_get(v_decl_1759_, 2);
v_type_1766_ = lean_ctor_get(v_decl_1759_, 3);
v_value_1767_ = lean_ctor_get(v_decl_1759_, 4);
v___x_1768_ = 1;
lean_inc_ref(v_value_1767_);
v___x_1769_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1622_, v_info_1623_, v_value_1767_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v_fst_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1821_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v_fst_1771_ = lean_ctor_get(v_a_1770_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_a_1770_);
if (v_isSharedCheck_1821_ == 0)
{
lean_object* v_unused_1822_; 
v_unused_1822_ = lean_ctor_get(v_a_1770_, 1);
lean_dec(v_unused_1822_);
v___x_1773_ = v_a_1770_;
v_isShared_1774_ = v_isSharedCheck_1821_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_fst_1771_);
lean_dec(v_a_1770_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1821_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1775_; 
lean_inc_ref(v_params_1765_);
lean_inc_ref(v_type_1766_);
lean_inc_ref(v_decl_1759_);
v___x_1775_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1768_, v_decl_1759_, v_type_1766_, v_params_1765_, v_fst_1771_, v___y_1627_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1812_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1812_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1812_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___y_1781_; size_t v___x_1788_; size_t v___x_1789_; uint8_t v___x_1790_; 
v___x_1788_ = lean_ptr_addr(v_k_1760_);
v___x_1789_ = lean_ptr_addr(v_fst_1763_);
v___x_1790_ = lean_usize_dec_eq(v___x_1788_, v___x_1789_);
if (v___x_1790_ == 0)
{
lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
v_isSharedCheck_1797_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_1797_ == 0)
{
lean_object* v_unused_1798_; lean_object* v_unused_1799_; 
v_unused_1798_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_1798_);
v_unused_1799_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_1799_);
v___x_1792_ = v_c_1624_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_dec(v_c_1624_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
lean_ctor_set(v___x_1792_, 1, v_fst_1763_);
lean_ctor_set(v___x_1792_, 0, v_a_1776_);
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1776_);
lean_ctor_set(v_reuseFailAlloc_1796_, 1, v_fst_1763_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
v___y_1781_ = v___x_1795_;
goto v___jp_1780_;
}
}
}
else
{
size_t v___x_1800_; size_t v___x_1801_; uint8_t v___x_1802_; 
v___x_1800_ = lean_ptr_addr(v_decl_1759_);
v___x_1801_ = lean_ptr_addr(v_a_1776_);
v___x_1802_ = lean_usize_dec_eq(v___x_1800_, v___x_1801_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
v_isSharedCheck_1809_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_1809_ == 0)
{
lean_object* v_unused_1810_; lean_object* v_unused_1811_; 
v_unused_1810_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_1810_);
v_unused_1811_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_1811_);
v___x_1804_ = v_c_1624_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_dec(v_c_1624_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 1, v_fst_1763_);
lean_ctor_set(v___x_1804_, 0, v_a_1776_);
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1776_);
lean_ctor_set(v_reuseFailAlloc_1808_, 1, v_fst_1763_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
v___y_1781_ = v___x_1807_;
goto v___jp_1780_;
}
}
}
else
{
lean_dec(v_a_1776_);
lean_dec(v_fst_1763_);
v___y_1781_ = v_c_1624_;
goto v___jp_1780_;
}
}
v___jp_1780_:
{
lean_object* v___x_1783_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 1, v_snd_1764_);
lean_ctor_set(v___x_1773_, 0, v___y_1781_);
v___x_1783_ = v___x_1773_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v___y_1781_);
lean_ctor_set(v_reuseFailAlloc_1787_, 1, v_snd_1764_);
v___x_1783_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
lean_object* v___x_1785_; 
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1783_);
v___x_1785_ = v___x_1778_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1783_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
return v___x_1785_;
}
}
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_del_object(v___x_1773_);
lean_dec(v_snd_1764_);
lean_dec(v_fst_1763_);
lean_dec_ref_known(v_c_1624_, 2);
v_a_1813_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1775_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1775_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
}
else
{
lean_dec(v_snd_1764_);
lean_dec(v_fst_1763_);
lean_dec_ref_known(v_c_1624_, 2);
return v___x_1769_;
}
}
else
{
lean_dec_ref_known(v_c_1624_, 2);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
return v___x_1761_;
}
}
case 3:
{
lean_object* v___x_1823_; 
lean_dec_ref(v_info_1623_);
lean_inc_ref(v_c_1624_);
v___x_1823_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1624_, v_x_1622_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1832_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1826_ = v___x_1823_;
v_isShared_1827_ = v_isSharedCheck_1832_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v___x_1823_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1832_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1828_; lean_object* v___x_1830_; 
v___x_1828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1828_, 0, v_c_1624_);
lean_ctor_set(v___x_1828_, 1, v_a_1824_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1828_);
v___x_1830_ = v___x_1826_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v___x_1828_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
return v___x_1830_;
}
}
}
else
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1840_; 
lean_dec_ref_known(v_c_1624_, 2);
v_a_1833_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1835_ = v___x_1823_;
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v___x_1823_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1838_; 
if (v_isShared_1836_ == 0)
{
v___x_1838_ = v___x_1835_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1833_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
case 4:
{
lean_object* v_cases_1841_; lean_object* v___x_1842_; 
v_cases_1841_ = lean_ctor_get(v_c_1624_, 0);
lean_inc_ref(v_cases_1841_);
lean_inc(v_x_1622_);
lean_inc_ref(v_c_1624_);
v___x_1842_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1624_, v_x_1622_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1895_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1895_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1895_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
uint8_t v___x_1847_; 
v___x_1847_ = lean_unbox(v_a_1843_);
if (v___x_1847_ == 0)
{
lean_object* v___x_1848_; lean_object* v___x_1850_; 
lean_dec_ref(v_cases_1841_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v_c_1624_);
lean_ctor_set(v___x_1848_, 1, v_a_1843_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v___x_1848_);
v___x_1850_ = v___x_1845_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
else
{
lean_object* v_typeName_1852_; lean_object* v_resultType_1853_; lean_object* v_discr_1854_; lean_object* v_alts_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1894_; 
lean_del_object(v___x_1845_);
v_typeName_1852_ = lean_ctor_get(v_cases_1841_, 0);
v_resultType_1853_ = lean_ctor_get(v_cases_1841_, 1);
v_discr_1854_ = lean_ctor_get(v_cases_1841_, 2);
v_alts_1855_ = lean_ctor_get(v_cases_1841_, 3);
v_isSharedCheck_1894_ = !lean_is_exclusive(v_cases_1841_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1857_ = v_cases_1841_;
v_isShared_1858_ = v_isSharedCheck_1894_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_alts_1855_);
lean_inc(v_discr_1854_);
lean_inc(v_resultType_1853_);
lean_inc(v_typeName_1852_);
lean_dec(v_cases_1841_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1894_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1855_);
v___x_1860_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_1622_, v_info_1623_, v___x_1859_, v_alts_1855_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1885_; 
v_a_1861_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1863_ = v___x_1860_;
v_isShared_1864_ = v_isSharedCheck_1885_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1860_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1885_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___y_1866_; size_t v___x_1871_; size_t v___x_1872_; uint8_t v___x_1873_; 
v___x_1871_ = lean_ptr_addr(v_alts_1855_);
lean_dec_ref(v_alts_1855_);
v___x_1872_ = lean_ptr_addr(v_a_1861_);
v___x_1873_ = lean_usize_dec_eq(v___x_1871_, v___x_1872_);
if (v___x_1873_ == 0)
{
lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1883_; 
v_isSharedCheck_1883_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_1883_ == 0)
{
lean_object* v_unused_1884_; 
v_unused_1884_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_1884_);
v___x_1875_ = v_c_1624_;
v_isShared_1876_ = v_isSharedCheck_1883_;
goto v_resetjp_1874_;
}
else
{
lean_dec(v_c_1624_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1883_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 3, v_a_1861_);
v___x_1878_ = v___x_1857_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_typeName_1852_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v_resultType_1853_);
lean_ctor_set(v_reuseFailAlloc_1882_, 2, v_discr_1854_);
lean_ctor_set(v_reuseFailAlloc_1882_, 3, v_a_1861_);
v___x_1878_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
lean_object* v___x_1880_; 
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 0, v___x_1878_);
v___x_1880_ = v___x_1875_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
v___y_1866_ = v___x_1880_;
goto v___jp_1865_;
}
}
}
}
else
{
lean_dec(v_a_1861_);
lean_del_object(v___x_1857_);
lean_dec(v_discr_1854_);
lean_dec_ref(v_resultType_1853_);
lean_dec(v_typeName_1852_);
v___y_1866_ = v_c_1624_;
goto v___jp_1865_;
}
v___jp_1865_:
{
lean_object* v___x_1867_; lean_object* v___x_1869_; 
v___x_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___y_1866_);
lean_ctor_set(v___x_1867_, 1, v_a_1843_);
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v___x_1867_);
v___x_1869_ = v___x_1863_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_del_object(v___x_1857_);
lean_dec_ref(v_alts_1855_);
lean_dec(v_discr_1854_);
lean_dec_ref(v_resultType_1853_);
lean_dec(v_typeName_1852_);
lean_dec(v_a_1843_);
lean_dec_ref_known(v_c_1624_, 1);
v_a_1886_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1860_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1860_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1903_; 
lean_dec_ref(v_cases_1841_);
lean_dec_ref_known(v_c_1624_, 1);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v_a_1896_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1898_ = v___x_1842_;
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1842_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1901_; 
if (v_isShared_1899_ == 0)
{
v___x_1901_ = v___x_1898_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_a_1896_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
return v___x_1901_;
}
}
}
}
case 5:
{
lean_object* v___x_1904_; 
lean_dec_ref(v_info_1623_);
lean_inc_ref(v_c_1624_);
v___x_1904_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1624_, v_x_1622_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1913_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1907_ = v___x_1904_;
v_isShared_1908_ = v_isSharedCheck_1913_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1904_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1913_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1909_; lean_object* v___x_1911_; 
v___x_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1909_, 0, v_c_1624_);
lean_ctor_set(v___x_1909_, 1, v_a_1905_);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v___x_1909_);
v___x_1911_ = v___x_1907_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v___x_1909_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
lean_dec_ref_known(v_c_1624_, 1);
v_a_1914_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1904_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1904_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1914_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
}
case 6:
{
lean_object* v___x_1922_; 
lean_dec_ref(v_info_1623_);
lean_inc_ref(v_c_1624_);
v___x_1922_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1624_, v_x_1622_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1922_) == 0)
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1931_; 
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1922_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1925_ = v___x_1922_;
v_isShared_1926_ = v_isSharedCheck_1931_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1922_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1931_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1927_; lean_object* v___x_1929_; 
v___x_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1927_, 0, v_c_1624_);
lean_ctor_set(v___x_1927_, 1, v_a_1923_);
if (v_isShared_1926_ == 0)
{
lean_ctor_set(v___x_1925_, 0, v___x_1927_);
v___x_1929_ = v___x_1925_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v___x_1927_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
else
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
lean_dec_ref_known(v_c_1624_, 1);
v_a_1932_ = lean_ctor_get(v___x_1922_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1922_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v___x_1922_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1922_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_a_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
}
case 8:
{
lean_object* v_fvarId_1940_; lean_object* v_i_1941_; lean_object* v_y_1942_; lean_object* v_k_1943_; uint8_t v___x_1944_; lean_object* v_instr_1945_; uint8_t v___x_1946_; uint8_t v___x_1947_; 
v_fvarId_1940_ = lean_ctor_get(v_c_1624_, 0);
v_i_1941_ = lean_ctor_get(v_c_1624_, 1);
v_y_1942_ = lean_ctor_get(v_c_1624_, 2);
v_k_1943_ = lean_ctor_get(v_c_1624_, 3);
v___x_1944_ = 1;
v_instr_1945_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1944_, v_c_1624_);
lean_inc(v_x_1622_);
v___x_1946_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1945_, v_x_1622_);
v___x_1947_ = 1;
if (v___x_1946_ == 0)
{
lean_object* v___x_1948_; 
lean_inc_ref(v_k_1943_);
lean_inc_ref(v_info_1623_);
lean_inc(v_x_1622_);
v___x_1948_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1622_, v_info_1623_, v_k_1943_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_2074_; 
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_1951_ = v___x_1948_;
v_isShared_1952_ = v_isSharedCheck_2074_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1948_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_2074_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___y_1954_; lean_object* v_snd_1960_; uint8_t v___x_1961_; 
v_snd_1960_ = lean_ctor_get(v_a_1949_, 1);
v___x_1961_ = lean_unbox(v_snd_1960_);
if (v___x_1961_ == 0)
{
lean_object* v_fst_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_2057_; 
lean_inc(v_snd_1960_);
lean_del_object(v___x_1951_);
v_fst_1962_ = lean_ctor_get(v_a_1949_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_a_1949_);
if (v_isSharedCheck_2057_ == 0)
{
lean_object* v_unused_2058_; 
v_unused_2058_ = lean_ctor_get(v_a_1949_, 1);
lean_dec(v_unused_2058_);
v___x_1964_ = v_a_1949_;
v_isShared_1965_ = v_isSharedCheck_2057_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_fst_1962_);
lean_dec(v_a_1949_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_2057_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1966_; 
lean_inc(v_x_1622_);
v___x_1966_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1945_, v_x_1622_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1966_) == 0)
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_2048_; 
v_a_1967_ = lean_ctor_get(v___x_1966_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_1966_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_1969_ = v___x_1966_;
v_isShared_1970_ = v_isSharedCheck_2048_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1966_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_2048_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___y_1972_; lean_object* v___y_1980_; uint8_t v___x_1984_; 
v___x_1984_ = lean_unbox(v_a_1967_);
lean_dec(v_a_1967_);
switch(v___x_1984_)
{
case 0:
{
size_t v___x_1985_; size_t v___x_1986_; uint8_t v___x_1987_; 
lean_del_object(v___x_1969_);
lean_del_object(v___x_1964_);
lean_dec(v_snd_1960_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_1985_ = lean_ptr_addr(v_k_1943_);
v___x_1986_ = lean_ptr_addr(v_fst_1962_);
v___x_1987_ = lean_usize_dec_eq(v___x_1985_, v___x_1986_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
lean_inc(v_y_1942_);
lean_inc(v_i_1941_);
lean_inc(v_fvarId_1940_);
v_isSharedCheck_1994_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_1994_ == 0)
{
lean_object* v_unused_1995_; lean_object* v_unused_1996_; lean_object* v_unused_1997_; lean_object* v_unused_1998_; 
v_unused_1995_ = lean_ctor_get(v_c_1624_, 3);
lean_dec(v_unused_1995_);
v_unused_1996_ = lean_ctor_get(v_c_1624_, 2);
lean_dec(v_unused_1996_);
v_unused_1997_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_1997_);
v_unused_1998_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_1998_);
v___x_1989_ = v_c_1624_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_dec(v_c_1624_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 3, v_fst_1962_);
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_fvarId_1940_);
lean_ctor_set(v_reuseFailAlloc_1993_, 1, v_i_1941_);
lean_ctor_set(v_reuseFailAlloc_1993_, 2, v_y_1942_);
lean_ctor_set(v_reuseFailAlloc_1993_, 3, v_fst_1962_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
v___y_1980_ = v___x_1992_;
goto v___jp_1979_;
}
}
}
else
{
lean_dec(v_fst_1962_);
v___y_1980_ = v_c_1624_;
goto v___jp_1979_;
}
}
case 1:
{
lean_object* v___x_1999_; 
lean_del_object(v___x_1969_);
lean_del_object(v___x_1964_);
lean_dec(v_snd_1960_);
v___x_1999_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1622_, v_info_1623_, v_fst_1962_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec_ref(v_info_1623_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2025_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2002_ = v___x_1999_;
v_isShared_2003_ = v_isSharedCheck_2025_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1999_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2025_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___y_2005_; size_t v___x_2011_; size_t v___x_2012_; uint8_t v___x_2013_; 
v___x_2011_ = lean_ptr_addr(v_k_1943_);
v___x_2012_ = lean_ptr_addr(v_a_2000_);
v___x_2013_ = lean_usize_dec_eq(v___x_2011_, v___x_2012_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
lean_inc(v_y_1942_);
lean_inc(v_i_1941_);
lean_inc(v_fvarId_1940_);
v_isSharedCheck_2020_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_2020_ == 0)
{
lean_object* v_unused_2021_; lean_object* v_unused_2022_; lean_object* v_unused_2023_; lean_object* v_unused_2024_; 
v_unused_2021_ = lean_ctor_get(v_c_1624_, 3);
lean_dec(v_unused_2021_);
v_unused_2022_ = lean_ctor_get(v_c_1624_, 2);
lean_dec(v_unused_2022_);
v_unused_2023_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_2023_);
v_unused_2024_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_2024_);
v___x_2015_ = v_c_1624_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_dec(v_c_1624_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 3, v_a_2000_);
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_fvarId_1940_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_i_1941_);
lean_ctor_set(v_reuseFailAlloc_2019_, 2, v_y_1942_);
lean_ctor_set(v_reuseFailAlloc_2019_, 3, v_a_2000_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
v___y_2005_ = v___x_2018_;
goto v___jp_2004_;
}
}
}
else
{
lean_dec(v_a_2000_);
v___y_2005_ = v_c_1624_;
goto v___jp_2004_;
}
v___jp_2004_:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2009_; 
v___x_2006_ = lean_box(v___x_1947_);
v___x_2007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2007_, 0, v___y_2005_);
lean_ctor_set(v___x_2007_, 1, v___x_2006_);
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 0, v___x_2007_);
v___x_2009_ = v___x_2002_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2007_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
lean_dec_ref_known(v_c_1624_, 4);
v_a_2026_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_1999_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_1999_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2026_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
default: 
{
size_t v___x_2034_; size_t v___x_2035_; uint8_t v___x_2036_; 
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_2034_ = lean_ptr_addr(v_k_1943_);
v___x_2035_ = lean_ptr_addr(v_fst_1962_);
v___x_2036_ = lean_usize_dec_eq(v___x_2034_, v___x_2035_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2043_; 
lean_inc(v_y_1942_);
lean_inc(v_i_1941_);
lean_inc(v_fvarId_1940_);
v_isSharedCheck_2043_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_2043_ == 0)
{
lean_object* v_unused_2044_; lean_object* v_unused_2045_; lean_object* v_unused_2046_; lean_object* v_unused_2047_; 
v_unused_2044_ = lean_ctor_get(v_c_1624_, 3);
lean_dec(v_unused_2044_);
v_unused_2045_ = lean_ctor_get(v_c_1624_, 2);
lean_dec(v_unused_2045_);
v_unused_2046_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_2046_);
v_unused_2047_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_2047_);
v___x_2038_ = v_c_1624_;
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
else
{
lean_dec(v_c_1624_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 3, v_fst_1962_);
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_fvarId_1940_);
lean_ctor_set(v_reuseFailAlloc_2042_, 1, v_i_1941_);
lean_ctor_set(v_reuseFailAlloc_2042_, 2, v_y_1942_);
lean_ctor_set(v_reuseFailAlloc_2042_, 3, v_fst_1962_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
v___y_1972_ = v___x_2041_;
goto v___jp_1971_;
}
}
}
else
{
lean_dec(v_fst_1962_);
v___y_1972_ = v_c_1624_;
goto v___jp_1971_;
}
}
}
v___jp_1971_:
{
lean_object* v___x_1974_; 
if (v_isShared_1965_ == 0)
{
lean_ctor_set(v___x_1964_, 0, v___y_1972_);
v___x_1974_ = v___x_1964_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v___y_1972_);
lean_ctor_set(v_reuseFailAlloc_1978_, 1, v_snd_1960_);
v___x_1974_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
lean_object* v___x_1976_; 
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 0, v___x_1974_);
v___x_1976_ = v___x_1969_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v___x_1974_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
v___jp_1979_:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1981_ = lean_box(v___x_1947_);
v___x_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___y_1980_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
return v___x_1983_;
}
}
}
else
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
lean_del_object(v___x_1964_);
lean_dec(v_fst_1962_);
lean_dec(v_snd_1960_);
lean_dec_ref_known(v_c_1624_, 4);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v_a_2049_ = lean_ctor_get(v___x_1966_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_1966_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_1966_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_1966_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
}
else
{
lean_object* v_fst_2059_; size_t v___x_2060_; size_t v___x_2061_; uint8_t v___x_2062_; 
lean_dec_ref(v_instr_1945_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v_fst_2059_ = lean_ctor_get(v_a_1949_, 0);
lean_inc(v_fst_2059_);
lean_dec(v_a_1949_);
v___x_2060_ = lean_ptr_addr(v_k_1943_);
v___x_2061_ = lean_ptr_addr(v_fst_2059_);
v___x_2062_ = lean_usize_dec_eq(v___x_2060_, v___x_2061_);
if (v___x_2062_ == 0)
{
lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
lean_inc(v_y_1942_);
lean_inc(v_i_1941_);
lean_inc(v_fvarId_1940_);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_2069_ == 0)
{
lean_object* v_unused_2070_; lean_object* v_unused_2071_; lean_object* v_unused_2072_; lean_object* v_unused_2073_; 
v_unused_2070_ = lean_ctor_get(v_c_1624_, 3);
lean_dec(v_unused_2070_);
v_unused_2071_ = lean_ctor_get(v_c_1624_, 2);
lean_dec(v_unused_2071_);
v_unused_2072_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_2072_);
v_unused_2073_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_2073_);
v___x_2064_ = v_c_1624_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_dec(v_c_1624_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 3, v_fst_2059_);
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_fvarId_1940_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v_i_1941_);
lean_ctor_set(v_reuseFailAlloc_2068_, 2, v_y_1942_);
lean_ctor_set(v_reuseFailAlloc_2068_, 3, v_fst_2059_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
v___y_1954_ = v___x_2067_;
goto v___jp_1953_;
}
}
}
else
{
lean_dec(v_fst_2059_);
v___y_1954_ = v_c_1624_;
goto v___jp_1953_;
}
}
v___jp_1953_:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1958_; 
v___x_1955_ = lean_box(v___x_1947_);
v___x_1956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1956_, 0, v___y_1954_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 0, v___x_1956_);
v___x_1958_ = v___x_1951_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v___x_1956_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1945_);
lean_dec_ref_known(v_c_1624_, 4);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
return v___x_1948_;
}
}
else
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
lean_dec_ref(v_instr_1945_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_2075_ = lean_box(v___x_1947_);
v___x_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2076_, 0, v_c_1624_);
lean_ctor_set(v___x_2076_, 1, v___x_2075_);
v___x_2077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
return v___x_2077_;
}
}
case 9:
{
lean_object* v_fvarId_2078_; lean_object* v_i_2079_; lean_object* v_offset_2080_; lean_object* v_y_2081_; lean_object* v_ty_2082_; lean_object* v_k_2083_; uint8_t v___x_2084_; lean_object* v_instr_2085_; uint8_t v___x_2086_; uint8_t v___x_2087_; 
v_fvarId_2078_ = lean_ctor_get(v_c_1624_, 0);
v_i_2079_ = lean_ctor_get(v_c_1624_, 1);
v_offset_2080_ = lean_ctor_get(v_c_1624_, 2);
v_y_2081_ = lean_ctor_get(v_c_1624_, 3);
v_ty_2082_ = lean_ctor_get(v_c_1624_, 4);
v_k_2083_ = lean_ctor_get(v_c_1624_, 5);
v___x_2084_ = 1;
v_instr_2085_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_2084_, v_c_1624_);
lean_inc(v_x_1622_);
v___x_2086_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_2085_, v_x_1622_);
v___x_2087_ = 1;
if (v___x_2086_ == 0)
{
lean_object* v___x_2088_; 
lean_inc_ref(v_k_2083_);
lean_inc_ref(v_info_1623_);
lean_inc(v_x_1622_);
v___x_2088_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1622_, v_info_1623_, v_k_2083_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_2088_) == 0)
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2222_; 
v_a_2089_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2091_ = v___x_2088_;
v_isShared_2092_ = v_isSharedCheck_2222_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2088_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2222_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___y_2094_; lean_object* v_snd_2100_; uint8_t v___x_2101_; 
v_snd_2100_ = lean_ctor_get(v_a_2089_, 1);
v___x_2101_ = lean_unbox(v_snd_2100_);
if (v___x_2101_ == 0)
{
lean_object* v_fst_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2203_; 
lean_inc(v_snd_2100_);
lean_del_object(v___x_2091_);
v_fst_2102_ = lean_ctor_get(v_a_2089_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v_a_2089_);
if (v_isSharedCheck_2203_ == 0)
{
lean_object* v_unused_2204_; 
v_unused_2204_ = lean_ctor_get(v_a_2089_, 1);
lean_dec(v_unused_2204_);
v___x_2104_ = v_a_2089_;
v_isShared_2105_ = v_isSharedCheck_2203_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_fst_2102_);
lean_dec(v_a_2089_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2203_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2106_; 
lean_inc(v_x_1622_);
v___x_2106_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_2085_, v_x_1622_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2194_; 
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2106_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2109_ = v___x_2106_;
v_isShared_2110_ = v_isSharedCheck_2194_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v___x_2106_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2194_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___y_2112_; lean_object* v___y_2120_; uint8_t v___x_2124_; 
v___x_2124_ = lean_unbox(v_a_2107_);
lean_dec(v_a_2107_);
switch(v___x_2124_)
{
case 0:
{
size_t v___x_2125_; size_t v___x_2126_; uint8_t v___x_2127_; 
lean_del_object(v___x_2109_);
lean_del_object(v___x_2104_);
lean_dec(v_snd_2100_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_2125_ = lean_ptr_addr(v_k_2083_);
v___x_2126_ = lean_ptr_addr(v_fst_2102_);
v___x_2127_ = lean_usize_dec_eq(v___x_2125_, v___x_2126_);
if (v___x_2127_ == 0)
{
lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2134_; 
lean_inc_ref(v_ty_2082_);
lean_inc(v_y_2081_);
lean_inc(v_offset_2080_);
lean_inc(v_i_2079_);
lean_inc(v_fvarId_2078_);
v_isSharedCheck_2134_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_2134_ == 0)
{
lean_object* v_unused_2135_; lean_object* v_unused_2136_; lean_object* v_unused_2137_; lean_object* v_unused_2138_; lean_object* v_unused_2139_; lean_object* v_unused_2140_; 
v_unused_2135_ = lean_ctor_get(v_c_1624_, 5);
lean_dec(v_unused_2135_);
v_unused_2136_ = lean_ctor_get(v_c_1624_, 4);
lean_dec(v_unused_2136_);
v_unused_2137_ = lean_ctor_get(v_c_1624_, 3);
lean_dec(v_unused_2137_);
v_unused_2138_ = lean_ctor_get(v_c_1624_, 2);
lean_dec(v_unused_2138_);
v_unused_2139_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_2139_);
v_unused_2140_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_2140_);
v___x_2129_ = v_c_1624_;
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
else
{
lean_dec(v_c_1624_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 5, v_fst_2102_);
v___x_2132_ = v___x_2129_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_fvarId_2078_);
lean_ctor_set(v_reuseFailAlloc_2133_, 1, v_i_2079_);
lean_ctor_set(v_reuseFailAlloc_2133_, 2, v_offset_2080_);
lean_ctor_set(v_reuseFailAlloc_2133_, 3, v_y_2081_);
lean_ctor_set(v_reuseFailAlloc_2133_, 4, v_ty_2082_);
lean_ctor_set(v_reuseFailAlloc_2133_, 5, v_fst_2102_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
v___y_2120_ = v___x_2132_;
goto v___jp_2119_;
}
}
}
else
{
lean_dec(v_fst_2102_);
v___y_2120_ = v_c_1624_;
goto v___jp_2119_;
}
}
case 1:
{
lean_object* v___x_2141_; 
lean_del_object(v___x_2109_);
lean_del_object(v___x_2104_);
lean_dec(v_snd_2100_);
v___x_2141_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1622_, v_info_1623_, v_fst_2102_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec_ref(v_info_1623_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2169_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2144_ = v___x_2141_;
v_isShared_2145_ = v_isSharedCheck_2169_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_a_2142_);
lean_dec(v___x_2141_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2169_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___y_2147_; size_t v___x_2153_; size_t v___x_2154_; uint8_t v___x_2155_; 
v___x_2153_ = lean_ptr_addr(v_k_2083_);
v___x_2154_ = lean_ptr_addr(v_a_2142_);
v___x_2155_ = lean_usize_dec_eq(v___x_2153_, v___x_2154_);
if (v___x_2155_ == 0)
{
lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2162_; 
lean_inc_ref(v_ty_2082_);
lean_inc(v_y_2081_);
lean_inc(v_offset_2080_);
lean_inc(v_i_2079_);
lean_inc(v_fvarId_2078_);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_2162_ == 0)
{
lean_object* v_unused_2163_; lean_object* v_unused_2164_; lean_object* v_unused_2165_; lean_object* v_unused_2166_; lean_object* v_unused_2167_; lean_object* v_unused_2168_; 
v_unused_2163_ = lean_ctor_get(v_c_1624_, 5);
lean_dec(v_unused_2163_);
v_unused_2164_ = lean_ctor_get(v_c_1624_, 4);
lean_dec(v_unused_2164_);
v_unused_2165_ = lean_ctor_get(v_c_1624_, 3);
lean_dec(v_unused_2165_);
v_unused_2166_ = lean_ctor_get(v_c_1624_, 2);
lean_dec(v_unused_2166_);
v_unused_2167_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_2167_);
v_unused_2168_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_2168_);
v___x_2157_ = v_c_1624_;
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
else
{
lean_dec(v_c_1624_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 5, v_a_2142_);
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_fvarId_2078_);
lean_ctor_set(v_reuseFailAlloc_2161_, 1, v_i_2079_);
lean_ctor_set(v_reuseFailAlloc_2161_, 2, v_offset_2080_);
lean_ctor_set(v_reuseFailAlloc_2161_, 3, v_y_2081_);
lean_ctor_set(v_reuseFailAlloc_2161_, 4, v_ty_2082_);
lean_ctor_set(v_reuseFailAlloc_2161_, 5, v_a_2142_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
v___y_2147_ = v___x_2160_;
goto v___jp_2146_;
}
}
}
else
{
lean_dec(v_a_2142_);
v___y_2147_ = v_c_1624_;
goto v___jp_2146_;
}
v___jp_2146_:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2151_; 
v___x_2148_ = lean_box(v___x_2087_);
v___x_2149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___y_2147_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 0, v___x_2149_);
v___x_2151_ = v___x_2144_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v___x_2149_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
lean_dec_ref_known(v_c_1624_, 6);
v_a_2170_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2141_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2141_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
default: 
{
size_t v___x_2178_; size_t v___x_2179_; uint8_t v___x_2180_; 
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_2178_ = lean_ptr_addr(v_k_2083_);
v___x_2179_ = lean_ptr_addr(v_fst_2102_);
v___x_2180_ = lean_usize_dec_eq(v___x_2178_, v___x_2179_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
lean_inc_ref(v_ty_2082_);
lean_inc(v_y_2081_);
lean_inc(v_offset_2080_);
lean_inc(v_i_2079_);
lean_inc(v_fvarId_2078_);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_2187_ == 0)
{
lean_object* v_unused_2188_; lean_object* v_unused_2189_; lean_object* v_unused_2190_; lean_object* v_unused_2191_; lean_object* v_unused_2192_; lean_object* v_unused_2193_; 
v_unused_2188_ = lean_ctor_get(v_c_1624_, 5);
lean_dec(v_unused_2188_);
v_unused_2189_ = lean_ctor_get(v_c_1624_, 4);
lean_dec(v_unused_2189_);
v_unused_2190_ = lean_ctor_get(v_c_1624_, 3);
lean_dec(v_unused_2190_);
v_unused_2191_ = lean_ctor_get(v_c_1624_, 2);
lean_dec(v_unused_2191_);
v_unused_2192_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_2192_);
v_unused_2193_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_2193_);
v___x_2182_ = v_c_1624_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_dec(v_c_1624_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 5, v_fst_2102_);
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_fvarId_2078_);
lean_ctor_set(v_reuseFailAlloc_2186_, 1, v_i_2079_);
lean_ctor_set(v_reuseFailAlloc_2186_, 2, v_offset_2080_);
lean_ctor_set(v_reuseFailAlloc_2186_, 3, v_y_2081_);
lean_ctor_set(v_reuseFailAlloc_2186_, 4, v_ty_2082_);
lean_ctor_set(v_reuseFailAlloc_2186_, 5, v_fst_2102_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
v___y_2112_ = v___x_2185_;
goto v___jp_2111_;
}
}
}
else
{
lean_dec(v_fst_2102_);
v___y_2112_ = v_c_1624_;
goto v___jp_2111_;
}
}
}
v___jp_2111_:
{
lean_object* v___x_2114_; 
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v___y_2112_);
v___x_2114_ = v___x_2104_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v___y_2112_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v_snd_2100_);
v___x_2114_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
lean_object* v___x_2116_; 
if (v_isShared_2110_ == 0)
{
lean_ctor_set(v___x_2109_, 0, v___x_2114_);
v___x_2116_ = v___x_2109_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v___x_2114_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
v___jp_2119_:
{
lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2121_ = lean_box(v___x_2087_);
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___y_2120_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
return v___x_2123_;
}
}
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
lean_del_object(v___x_2104_);
lean_dec(v_fst_2102_);
lean_dec(v_snd_2100_);
lean_dec_ref_known(v_c_1624_, 6);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v_a_2195_ = lean_ctor_get(v___x_2106_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2106_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___x_2106_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2106_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
}
else
{
lean_object* v_fst_2205_; size_t v___x_2206_; size_t v___x_2207_; uint8_t v___x_2208_; 
lean_dec_ref(v_instr_2085_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v_fst_2205_ = lean_ctor_get(v_a_2089_, 0);
lean_inc(v_fst_2205_);
lean_dec(v_a_2089_);
v___x_2206_ = lean_ptr_addr(v_k_2083_);
v___x_2207_ = lean_ptr_addr(v_fst_2205_);
v___x_2208_ = lean_usize_dec_eq(v___x_2206_, v___x_2207_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2215_; 
lean_inc_ref(v_ty_2082_);
lean_inc(v_y_2081_);
lean_inc(v_offset_2080_);
lean_inc(v_i_2079_);
lean_inc(v_fvarId_2078_);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_c_1624_);
if (v_isSharedCheck_2215_ == 0)
{
lean_object* v_unused_2216_; lean_object* v_unused_2217_; lean_object* v_unused_2218_; lean_object* v_unused_2219_; lean_object* v_unused_2220_; lean_object* v_unused_2221_; 
v_unused_2216_ = lean_ctor_get(v_c_1624_, 5);
lean_dec(v_unused_2216_);
v_unused_2217_ = lean_ctor_get(v_c_1624_, 4);
lean_dec(v_unused_2217_);
v_unused_2218_ = lean_ctor_get(v_c_1624_, 3);
lean_dec(v_unused_2218_);
v_unused_2219_ = lean_ctor_get(v_c_1624_, 2);
lean_dec(v_unused_2219_);
v_unused_2220_ = lean_ctor_get(v_c_1624_, 1);
lean_dec(v_unused_2220_);
v_unused_2221_ = lean_ctor_get(v_c_1624_, 0);
lean_dec(v_unused_2221_);
v___x_2210_ = v_c_1624_;
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
else
{
lean_dec(v_c_1624_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v___x_2213_; 
if (v_isShared_2211_ == 0)
{
lean_ctor_set(v___x_2210_, 5, v_fst_2205_);
v___x_2213_ = v___x_2210_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v_fvarId_2078_);
lean_ctor_set(v_reuseFailAlloc_2214_, 1, v_i_2079_);
lean_ctor_set(v_reuseFailAlloc_2214_, 2, v_offset_2080_);
lean_ctor_set(v_reuseFailAlloc_2214_, 3, v_y_2081_);
lean_ctor_set(v_reuseFailAlloc_2214_, 4, v_ty_2082_);
lean_ctor_set(v_reuseFailAlloc_2214_, 5, v_fst_2205_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
v___y_2094_ = v___x_2213_;
goto v___jp_2093_;
}
}
}
else
{
lean_dec(v_fst_2205_);
v___y_2094_ = v_c_1624_;
goto v___jp_2093_;
}
}
v___jp_2093_:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2098_; 
v___x_2095_ = lean_box(v___x_2087_);
v___x_2096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2096_, 0, v___y_2094_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 0, v___x_2096_);
v___x_2098_ = v___x_2091_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v___x_2096_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
else
{
lean_dec_ref(v_instr_2085_);
lean_dec_ref_known(v_c_1624_, 6);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
return v___x_2088_;
}
}
else
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
lean_dec_ref(v_instr_2085_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_2223_ = lean_box(v___x_2087_);
v___x_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2224_, 0, v_c_1624_);
lean_ctor_set(v___x_2224_, 1, v___x_2223_);
v___x_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
return v___x_2225_;
}
}
default: 
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
lean_dec_ref(v_c_1624_);
lean_dec_ref(v_info_1623_);
lean_dec(v_x_1622_);
v___x_2226_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1);
v___x_2227_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_2226_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
return v___x_2227_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(lean_object* v_x_2228_, lean_object* v_info_2229_, lean_object* v_c_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v___x_2237_; 
lean_inc_ref(v_info_2229_);
lean_inc(v_x_2228_);
v___x_2237_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_2228_, v_info_2229_, v_c_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_);
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v_a_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2250_; 
v_a_2238_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2240_ = v___x_2237_;
v_isShared_2241_ = v_isSharedCheck_2250_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_a_2238_);
lean_dec(v___x_2237_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2250_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v_snd_2242_; uint8_t v___x_2243_; 
v_snd_2242_ = lean_ctor_get(v_a_2238_, 1);
v___x_2243_ = lean_unbox(v_snd_2242_);
if (v___x_2243_ == 0)
{
lean_object* v_fst_2244_; lean_object* v___x_2245_; 
lean_del_object(v___x_2240_);
v_fst_2244_ = lean_ctor_get(v_a_2238_, 0);
lean_inc(v_fst_2244_);
lean_dec(v_a_2238_);
v___x_2245_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_2228_, v_info_2229_, v_fst_2244_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_);
lean_dec_ref(v_info_2229_);
return v___x_2245_;
}
else
{
lean_object* v_fst_2246_; lean_object* v___x_2248_; 
lean_dec_ref(v_info_2229_);
lean_dec(v_x_2228_);
v_fst_2246_ = lean_ctor_get(v_a_2238_, 0);
lean_inc(v_fst_2246_);
lean_dec(v_a_2238_);
if (v_isShared_2241_ == 0)
{
lean_ctor_set(v___x_2240_, 0, v_fst_2246_);
v___x_2248_ = v___x_2240_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_fst_2246_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
lean_dec_ref(v_info_2229_);
lean_dec(v_x_2228_);
v_a_2251_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_2237_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2237_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1___boxed(lean_object* v_x_2259_, lean_object* v_info_2260_, lean_object* v_i_2261_, lean_object* v_as_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_2259_, v_info_2260_, v_i_2261_, v_as_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec_ref(v___y_2263_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___boxed(lean_object* v_x_2270_, lean_object* v_info_2271_, lean_object* v_c_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_2270_, v_info_2271_, v_c_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec_ref(v___y_2273_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(uint8_t v_pu_2280_, lean_object* v_alt_2281_, lean_object* v_f_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_2281_, v_f_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___boxed(lean_object* v_pu_2290_, lean_object* v_alt_2291_, lean_object* v_f_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
uint8_t v_pu_boxed_2299_; lean_object* v_res_2300_; 
v_pu_boxed_2299_ = lean_unbox(v_pu_2290_);
v_res_2300_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(v_pu_boxed_2299_, v_alt_2291_, v_f_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec_ref(v___y_2293_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(lean_object* v_msg_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_){
_start:
{
lean_object* v___f_2308_; lean_object* v___f_2309_; lean_object* v___f_2310_; lean_object* v___f_2311_; lean_object* v___f_2312_; lean_object* v___f_2313_; lean_object* v___f_2314_; lean_object* v___f_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v_toApplicative_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2354_; 
v___f_2308_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0));
v___f_2309_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_2310_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
v___f_2311_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__3));
v___f_2312_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__4));
v___f_2313_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2313_, 0, v___f_2312_);
lean_closure_set(v___f_2313_, 1, v___f_2311_);
v___f_2314_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2314_, 0, v___f_2311_);
v___f_2315_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__5));
v___x_2316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___f_2308_);
lean_ctor_set(v___x_2316_, 1, v___f_2309_);
v___x_2317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2316_);
lean_ctor_set(v___x_2317_, 1, v___f_2310_);
lean_ctor_set(v___x_2317_, 2, v___f_2313_);
lean_ctor_set(v___x_2317_, 3, v___f_2314_);
lean_ctor_set(v___x_2317_, 4, v___f_2315_);
v___x_2318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
lean_ctor_set(v___x_2318_, 1, v___f_2311_);
v___x_2319_ = l_StateRefT_x27_instMonad___redArg(v___x_2318_);
v_toApplicative_2320_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2354_ == 0)
{
lean_object* v_unused_2355_; 
v_unused_2355_ = lean_ctor_get(v___x_2319_, 1);
lean_dec(v_unused_2355_);
v___x_2322_ = v___x_2319_;
v_isShared_2323_ = v_isSharedCheck_2354_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_toApplicative_2320_);
lean_dec(v___x_2319_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2354_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v_toFunctor_2324_; lean_object* v_toSeq_2325_; lean_object* v_toSeqLeft_2326_; lean_object* v_toSeqRight_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2352_; 
v_toFunctor_2324_ = lean_ctor_get(v_toApplicative_2320_, 0);
v_toSeq_2325_ = lean_ctor_get(v_toApplicative_2320_, 2);
v_toSeqLeft_2326_ = lean_ctor_get(v_toApplicative_2320_, 3);
v_toSeqRight_2327_ = lean_ctor_get(v_toApplicative_2320_, 4);
v_isSharedCheck_2352_ = !lean_is_exclusive(v_toApplicative_2320_);
if (v_isSharedCheck_2352_ == 0)
{
lean_object* v_unused_2353_; 
v_unused_2353_ = lean_ctor_get(v_toApplicative_2320_, 1);
lean_dec(v_unused_2353_);
v___x_2329_ = v_toApplicative_2320_;
v_isShared_2330_ = v_isSharedCheck_2352_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_toSeqRight_2327_);
lean_inc(v_toSeqLeft_2326_);
lean_inc(v_toSeq_2325_);
lean_inc(v_toFunctor_2324_);
lean_dec(v_toApplicative_2320_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2352_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___f_2331_; lean_object* v___f_2332_; lean_object* v___f_2333_; lean_object* v___f_2334_; lean_object* v___x_2335_; lean_object* v___f_2336_; lean_object* v___f_2337_; lean_object* v___f_2338_; lean_object* v___x_2340_; 
v___f_2331_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__6));
v___f_2332_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__7));
lean_inc_ref(v_toFunctor_2324_);
v___f_2333_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2333_, 0, v_toFunctor_2324_);
v___f_2334_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2334_, 0, v_toFunctor_2324_);
v___x_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___f_2333_);
lean_ctor_set(v___x_2335_, 1, v___f_2334_);
v___f_2336_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2336_, 0, v_toSeqRight_2327_);
v___f_2337_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2337_, 0, v_toSeqLeft_2326_);
v___f_2338_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2338_, 0, v_toSeq_2325_);
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 4, v___f_2336_);
lean_ctor_set(v___x_2329_, 3, v___f_2337_);
lean_ctor_set(v___x_2329_, 2, v___f_2338_);
lean_ctor_set(v___x_2329_, 1, v___f_2331_);
lean_ctor_set(v___x_2329_, 0, v___x_2335_);
v___x_2340_ = v___x_2329_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v___x_2335_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v___f_2331_);
lean_ctor_set(v_reuseFailAlloc_2351_, 2, v___f_2338_);
lean_ctor_set(v_reuseFailAlloc_2351_, 3, v___f_2337_);
lean_ctor_set(v_reuseFailAlloc_2351_, 4, v___f_2336_);
v___x_2340_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
lean_object* v___x_2342_; 
if (v_isShared_2323_ == 0)
{
lean_ctor_set(v___x_2322_, 1, v___f_2332_);
lean_ctor_set(v___x_2322_, 0, v___x_2340_);
v___x_2342_ = v___x_2322_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v___x_2340_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v___f_2332_);
v___x_2342_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_4974__overap_2348_; lean_object* v___x_2349_; 
v___x_2343_ = l_StateRefT_x27_instMonad___redArg(v___x_2342_);
v___x_2344_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_2345_ = l_instInhabitedOfMonad___redArg(v___x_2343_, v___x_2344_);
v___x_2346_ = l_instInhabitedReaderT___redArg(v___x_2345_);
v___x_2347_ = l_instInhabitedReaderT___redArg(v___x_2346_);
v___x_4974__overap_2348_ = lean_panic_fn_borrowed(v___x_2347_, v_msg_2301_);
lean_dec(v___x_2347_);
lean_inc(v___y_2306_);
lean_inc_ref(v___y_2305_);
lean_inc(v___y_2304_);
lean_inc_ref(v___y_2303_);
lean_inc_ref(v___y_2302_);
v___x_2349_ = lean_apply_6(v___x_4974__overap_2348_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, lean_box(0));
return v___x_2349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4___boxed(lean_object* v_msg_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v_msg_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec_ref(v___y_2357_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(lean_object* v_a_2364_, lean_object* v_fallback_2365_, lean_object* v_x_2366_){
_start:
{
if (lean_obj_tag(v_x_2366_) == 0)
{
lean_inc(v_fallback_2365_);
return v_fallback_2365_;
}
else
{
lean_object* v_key_2367_; lean_object* v_value_2368_; lean_object* v_tail_2369_; uint8_t v___x_2370_; 
v_key_2367_ = lean_ctor_get(v_x_2366_, 0);
v_value_2368_ = lean_ctor_get(v_x_2366_, 1);
v_tail_2369_ = lean_ctor_get(v_x_2366_, 2);
v___x_2370_ = l_Lean_instBEqFVarId_beq(v_key_2367_, v_a_2364_);
if (v___x_2370_ == 0)
{
v_x_2366_ = v_tail_2369_;
goto _start;
}
else
{
lean_inc(v_value_2368_);
return v_value_2368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg___boxed(lean_object* v_a_2372_, lean_object* v_fallback_2373_, lean_object* v_x_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2372_, v_fallback_2373_, v_x_2374_);
lean_dec(v_x_2374_);
lean_dec(v_fallback_2373_);
lean_dec(v_a_2372_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(lean_object* v_m_2376_, lean_object* v_a_2377_, lean_object* v_fallback_2378_){
_start:
{
lean_object* v_buckets_2379_; lean_object* v___x_2380_; uint64_t v___x_2381_; uint64_t v___x_2382_; uint64_t v___x_2383_; uint64_t v_fold_2384_; uint64_t v___x_2385_; uint64_t v___x_2386_; uint64_t v___x_2387_; size_t v___x_2388_; size_t v___x_2389_; size_t v___x_2390_; size_t v___x_2391_; size_t v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
v_buckets_2379_ = lean_ctor_get(v_m_2376_, 1);
v___x_2380_ = lean_array_get_size(v_buckets_2379_);
v___x_2381_ = l_Lean_instHashableFVarId_hash(v_a_2377_);
v___x_2382_ = 32ULL;
v___x_2383_ = lean_uint64_shift_right(v___x_2381_, v___x_2382_);
v_fold_2384_ = lean_uint64_xor(v___x_2381_, v___x_2383_);
v___x_2385_ = 16ULL;
v___x_2386_ = lean_uint64_shift_right(v_fold_2384_, v___x_2385_);
v___x_2387_ = lean_uint64_xor(v_fold_2384_, v___x_2386_);
v___x_2388_ = lean_uint64_to_usize(v___x_2387_);
v___x_2389_ = lean_usize_of_nat(v___x_2380_);
v___x_2390_ = ((size_t)1ULL);
v___x_2391_ = lean_usize_sub(v___x_2389_, v___x_2390_);
v___x_2392_ = lean_usize_land(v___x_2388_, v___x_2391_);
v___x_2393_ = lean_array_uget_borrowed(v_buckets_2379_, v___x_2392_);
v___x_2394_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2377_, v_fallback_2378_, v___x_2393_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg___boxed(lean_object* v_m_2395_, lean_object* v_a_2396_, lean_object* v_fallback_2397_){
_start:
{
lean_object* v_res_2398_; 
v_res_2398_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_2395_, v_a_2396_, v_fallback_2397_);
lean_dec(v_fallback_2397_);
lean_dec(v_a_2396_);
lean_dec_ref(v_m_2395_);
return v_res_2398_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(lean_object* v_x_2399_, lean_object* v_x_2400_, lean_object* v_x_2401_, lean_object* v_x_2402_){
_start:
{
lean_object* v_ks_2403_; lean_object* v_vs_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2428_; 
v_ks_2403_ = lean_ctor_get(v_x_2399_, 0);
v_vs_2404_ = lean_ctor_get(v_x_2399_, 1);
v_isSharedCheck_2428_ = !lean_is_exclusive(v_x_2399_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2406_ = v_x_2399_;
v_isShared_2407_ = v_isSharedCheck_2428_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_vs_2404_);
lean_inc(v_ks_2403_);
lean_dec(v_x_2399_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2428_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2408_; uint8_t v___x_2409_; 
v___x_2408_ = lean_array_get_size(v_ks_2403_);
v___x_2409_ = lean_nat_dec_lt(v_x_2400_, v___x_2408_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2413_; 
lean_dec(v_x_2400_);
v___x_2410_ = lean_array_push(v_ks_2403_, v_x_2401_);
v___x_2411_ = lean_array_push(v_vs_2404_, v_x_2402_);
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 1, v___x_2411_);
lean_ctor_set(v___x_2406_, 0, v___x_2410_);
v___x_2413_ = v___x_2406_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v___x_2410_);
lean_ctor_set(v_reuseFailAlloc_2414_, 1, v___x_2411_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
else
{
lean_object* v_k_x27_2415_; uint8_t v___x_2416_; 
v_k_x27_2415_ = lean_array_fget_borrowed(v_ks_2403_, v_x_2400_);
v___x_2416_ = l_Lean_instBEqFVarId_beq(v_x_2401_, v_k_x27_2415_);
if (v___x_2416_ == 0)
{
lean_object* v___x_2418_; 
if (v_isShared_2407_ == 0)
{
v___x_2418_ = v___x_2406_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v_ks_2403_);
lean_ctor_set(v_reuseFailAlloc_2422_, 1, v_vs_2404_);
v___x_2418_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2419_ = lean_unsigned_to_nat(1u);
v___x_2420_ = lean_nat_add(v_x_2400_, v___x_2419_);
lean_dec(v_x_2400_);
v_x_2399_ = v___x_2418_;
v_x_2400_ = v___x_2420_;
goto _start;
}
}
else
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2426_; 
v___x_2423_ = lean_array_fset(v_ks_2403_, v_x_2400_, v_x_2401_);
v___x_2424_ = lean_array_fset(v_vs_2404_, v_x_2400_, v_x_2402_);
lean_dec(v_x_2400_);
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 1, v___x_2424_);
lean_ctor_set(v___x_2406_, 0, v___x_2423_);
v___x_2426_ = v___x_2406_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v___x_2423_);
lean_ctor_set(v_reuseFailAlloc_2427_, 1, v___x_2424_);
v___x_2426_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
return v___x_2426_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(lean_object* v_n_2429_, lean_object* v_k_2430_, lean_object* v_v_2431_){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2432_ = lean_unsigned_to_nat(0u);
v___x_2433_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_n_2429_, v___x_2432_, v_k_2430_, v_v_2431_);
return v___x_2433_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(lean_object* v_x_2435_, size_t v_x_2436_, size_t v_x_2437_, lean_object* v_x_2438_, lean_object* v_x_2439_){
_start:
{
if (lean_obj_tag(v_x_2435_) == 0)
{
lean_object* v_es_2440_; size_t v___x_2441_; size_t v___x_2442_; lean_object* v_j_2443_; lean_object* v___x_2444_; uint8_t v___x_2445_; 
v_es_2440_ = lean_ctor_get(v_x_2435_, 0);
v___x_2441_ = ((size_t)31ULL);
v___x_2442_ = lean_usize_land(v_x_2436_, v___x_2441_);
v_j_2443_ = lean_usize_to_nat(v___x_2442_);
v___x_2444_ = lean_array_get_size(v_es_2440_);
v___x_2445_ = lean_nat_dec_lt(v_j_2443_, v___x_2444_);
if (v___x_2445_ == 0)
{
lean_dec(v_j_2443_);
lean_dec(v_x_2439_);
lean_dec(v_x_2438_);
return v_x_2435_;
}
else
{
lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2484_; 
lean_inc_ref(v_es_2440_);
v_isSharedCheck_2484_ = !lean_is_exclusive(v_x_2435_);
if (v_isSharedCheck_2484_ == 0)
{
lean_object* v_unused_2485_; 
v_unused_2485_ = lean_ctor_get(v_x_2435_, 0);
lean_dec(v_unused_2485_);
v___x_2447_ = v_x_2435_;
v_isShared_2448_ = v_isSharedCheck_2484_;
goto v_resetjp_2446_;
}
else
{
lean_dec(v_x_2435_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2484_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
lean_object* v_v_2449_; lean_object* v___x_2450_; lean_object* v_xs_x27_2451_; lean_object* v___y_2453_; 
v_v_2449_ = lean_array_fget(v_es_2440_, v_j_2443_);
v___x_2450_ = lean_box(0);
v_xs_x27_2451_ = lean_array_fset(v_es_2440_, v_j_2443_, v___x_2450_);
switch(lean_obj_tag(v_v_2449_))
{
case 0:
{
lean_object* v_key_2458_; lean_object* v_val_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2469_; 
v_key_2458_ = lean_ctor_get(v_v_2449_, 0);
v_val_2459_ = lean_ctor_get(v_v_2449_, 1);
v_isSharedCheck_2469_ = !lean_is_exclusive(v_v_2449_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2461_ = v_v_2449_;
v_isShared_2462_ = v_isSharedCheck_2469_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_val_2459_);
lean_inc(v_key_2458_);
lean_dec(v_v_2449_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2469_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
uint8_t v___x_2463_; 
v___x_2463_ = l_Lean_instBEqFVarId_beq(v_x_2438_, v_key_2458_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
lean_del_object(v___x_2461_);
v___x_2464_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2458_, v_val_2459_, v_x_2438_, v_x_2439_);
v___x_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2464_);
v___y_2453_ = v___x_2465_;
goto v___jp_2452_;
}
else
{
lean_object* v___x_2467_; 
lean_dec(v_val_2459_);
lean_dec(v_key_2458_);
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 1, v_x_2439_);
lean_ctor_set(v___x_2461_, 0, v_x_2438_);
v___x_2467_ = v___x_2461_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_x_2438_);
lean_ctor_set(v_reuseFailAlloc_2468_, 1, v_x_2439_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
v___y_2453_ = v___x_2467_;
goto v___jp_2452_;
}
}
}
}
case 1:
{
lean_object* v_node_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2482_; 
v_node_2470_ = lean_ctor_get(v_v_2449_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v_v_2449_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2472_ = v_v_2449_;
v_isShared_2473_ = v_isSharedCheck_2482_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_node_2470_);
lean_dec(v_v_2449_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2482_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
size_t v___x_2474_; size_t v___x_2475_; size_t v___x_2476_; size_t v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2480_; 
v___x_2474_ = ((size_t)5ULL);
v___x_2475_ = lean_usize_shift_right(v_x_2436_, v___x_2474_);
v___x_2476_ = ((size_t)1ULL);
v___x_2477_ = lean_usize_add(v_x_2437_, v___x_2476_);
v___x_2478_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_node_2470_, v___x_2475_, v___x_2477_, v_x_2438_, v_x_2439_);
if (v_isShared_2473_ == 0)
{
lean_ctor_set(v___x_2472_, 0, v___x_2478_);
v___x_2480_ = v___x_2472_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v___x_2478_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
v___y_2453_ = v___x_2480_;
goto v___jp_2452_;
}
}
}
default: 
{
lean_object* v___x_2483_; 
v___x_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2483_, 0, v_x_2438_);
lean_ctor_set(v___x_2483_, 1, v_x_2439_);
v___y_2453_ = v___x_2483_;
goto v___jp_2452_;
}
}
v___jp_2452_:
{
lean_object* v___x_2454_; lean_object* v___x_2456_; 
v___x_2454_ = lean_array_fset(v_xs_x27_2451_, v_j_2443_, v___y_2453_);
lean_dec(v_j_2443_);
if (v_isShared_2448_ == 0)
{
lean_ctor_set(v___x_2447_, 0, v___x_2454_);
v___x_2456_ = v___x_2447_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v___x_2454_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
}
}
else
{
lean_object* v_ks_2486_; lean_object* v_vs_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2505_; 
v_ks_2486_ = lean_ctor_get(v_x_2435_, 0);
v_vs_2487_ = lean_ctor_get(v_x_2435_, 1);
v_isSharedCheck_2505_ = !lean_is_exclusive(v_x_2435_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2489_ = v_x_2435_;
v_isShared_2490_ = v_isSharedCheck_2505_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_vs_2487_);
lean_inc(v_ks_2486_);
lean_dec(v_x_2435_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2505_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2492_; 
if (v_isShared_2490_ == 0)
{
v___x_2492_ = v___x_2489_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_ks_2486_);
lean_ctor_set(v_reuseFailAlloc_2504_, 1, v_vs_2487_);
v___x_2492_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
lean_object* v_newNode_2493_; size_t v___x_2494_; uint8_t v___x_2495_; 
v_newNode_2493_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v___x_2492_, v_x_2438_, v_x_2439_);
v___x_2494_ = ((size_t)7ULL);
v___x_2495_ = lean_usize_dec_le(v___x_2494_, v_x_2437_);
if (v___x_2495_ == 0)
{
lean_object* v___x_2496_; lean_object* v___x_2497_; uint8_t v___x_2498_; 
v___x_2496_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2493_);
v___x_2497_ = lean_unsigned_to_nat(4u);
v___x_2498_ = lean_nat_dec_lt(v___x_2496_, v___x_2497_);
lean_dec(v___x_2496_);
if (v___x_2498_ == 0)
{
lean_object* v_ks_2499_; lean_object* v_vs_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v_ks_2499_ = lean_ctor_get(v_newNode_2493_, 0);
lean_inc_ref(v_ks_2499_);
v_vs_2500_ = lean_ctor_get(v_newNode_2493_, 1);
lean_inc_ref(v_vs_2500_);
lean_dec_ref(v_newNode_2493_);
v___x_2501_ = lean_unsigned_to_nat(0u);
v___x_2502_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0);
v___x_2503_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_x_2437_, v_ks_2499_, v_vs_2500_, v___x_2501_, v___x_2502_);
lean_dec_ref(v_vs_2500_);
lean_dec_ref(v_ks_2499_);
return v___x_2503_;
}
else
{
return v_newNode_2493_;
}
}
else
{
return v_newNode_2493_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(size_t v_depth_2506_, lean_object* v_keys_2507_, lean_object* v_vals_2508_, lean_object* v_i_2509_, lean_object* v_entries_2510_){
_start:
{
lean_object* v___x_2511_; uint8_t v___x_2512_; 
v___x_2511_ = lean_array_get_size(v_keys_2507_);
v___x_2512_ = lean_nat_dec_lt(v_i_2509_, v___x_2511_);
if (v___x_2512_ == 0)
{
lean_dec(v_i_2509_);
return v_entries_2510_;
}
else
{
lean_object* v_k_2513_; lean_object* v_v_2514_; uint64_t v___x_2515_; size_t v_h_2516_; size_t v___x_2517_; lean_object* v___x_2518_; size_t v___x_2519_; size_t v___x_2520_; size_t v___x_2521_; size_t v_h_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v_k_2513_ = lean_array_fget_borrowed(v_keys_2507_, v_i_2509_);
v_v_2514_ = lean_array_fget_borrowed(v_vals_2508_, v_i_2509_);
v___x_2515_ = l_Lean_instHashableFVarId_hash(v_k_2513_);
v_h_2516_ = lean_uint64_to_usize(v___x_2515_);
v___x_2517_ = ((size_t)5ULL);
v___x_2518_ = lean_unsigned_to_nat(1u);
v___x_2519_ = ((size_t)1ULL);
v___x_2520_ = lean_usize_sub(v_depth_2506_, v___x_2519_);
v___x_2521_ = lean_usize_mul(v___x_2517_, v___x_2520_);
v_h_2522_ = lean_usize_shift_right(v_h_2516_, v___x_2521_);
v___x_2523_ = lean_nat_add(v_i_2509_, v___x_2518_);
lean_dec(v_i_2509_);
lean_inc(v_v_2514_);
lean_inc(v_k_2513_);
v___x_2524_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_entries_2510_, v_h_2522_, v_depth_2506_, v_k_2513_, v_v_2514_);
v_i_2509_ = v___x_2523_;
v_entries_2510_ = v___x_2524_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_2526_, lean_object* v_keys_2527_, lean_object* v_vals_2528_, lean_object* v_i_2529_, lean_object* v_entries_2530_){
_start:
{
size_t v_depth_boxed_2531_; lean_object* v_res_2532_; 
v_depth_boxed_2531_ = lean_unbox_usize(v_depth_2526_);
lean_dec(v_depth_2526_);
v_res_2532_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_boxed_2531_, v_keys_2527_, v_vals_2528_, v_i_2529_, v_entries_2530_);
lean_dec_ref(v_vals_2528_);
lean_dec_ref(v_keys_2527_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___boxed(lean_object* v_x_2533_, lean_object* v_x_2534_, lean_object* v_x_2535_, lean_object* v_x_2536_, lean_object* v_x_2537_){
_start:
{
size_t v_x_5653__boxed_2538_; size_t v_x_5654__boxed_2539_; lean_object* v_res_2540_; 
v_x_5653__boxed_2538_ = lean_unbox_usize(v_x_2534_);
lean_dec(v_x_2534_);
v_x_5654__boxed_2539_ = lean_unbox_usize(v_x_2535_);
lean_dec(v_x_2535_);
v_res_2540_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2533_, v_x_5653__boxed_2538_, v_x_5654__boxed_2539_, v_x_2536_, v_x_2537_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(lean_object* v_x_2541_, lean_object* v_x_2542_, lean_object* v_x_2543_){
_start:
{
uint64_t v___x_2544_; size_t v___x_2545_; size_t v___x_2546_; lean_object* v___x_2547_; 
v___x_2544_ = l_Lean_instHashableFVarId_hash(v_x_2542_);
v___x_2545_ = lean_uint64_to_usize(v___x_2544_);
v___x_2546_ = ((size_t)1ULL);
v___x_2547_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2541_, v___x_2545_, v___x_2546_, v_x_2542_, v_x_2543_);
return v___x_2547_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_2548_, lean_object* v_i_2549_, lean_object* v_k_2550_){
_start:
{
lean_object* v___x_2551_; uint8_t v___x_2552_; 
v___x_2551_ = lean_array_get_size(v_keys_2548_);
v___x_2552_ = lean_nat_dec_lt(v_i_2549_, v___x_2551_);
if (v___x_2552_ == 0)
{
lean_dec(v_i_2549_);
return v___x_2552_;
}
else
{
lean_object* v_k_x27_2553_; uint8_t v___x_2554_; 
v_k_x27_2553_ = lean_array_fget_borrowed(v_keys_2548_, v_i_2549_);
v___x_2554_ = l_Lean_instBEqFVarId_beq(v_k_2550_, v_k_x27_2553_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2555_ = lean_unsigned_to_nat(1u);
v___x_2556_ = lean_nat_add(v_i_2549_, v___x_2555_);
lean_dec(v_i_2549_);
v_i_2549_ = v___x_2556_;
goto _start;
}
else
{
lean_dec(v_i_2549_);
return v___x_2552_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_2558_, lean_object* v_i_2559_, lean_object* v_k_2560_){
_start:
{
uint8_t v_res_2561_; lean_object* v_r_2562_; 
v_res_2561_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2558_, v_i_2559_, v_k_2560_);
lean_dec(v_k_2560_);
lean_dec_ref(v_keys_2558_);
v_r_2562_ = lean_box(v_res_2561_);
return v_r_2562_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(lean_object* v_x_2563_, size_t v_x_2564_, lean_object* v_x_2565_){
_start:
{
if (lean_obj_tag(v_x_2563_) == 0)
{
lean_object* v_es_2566_; lean_object* v___x_2567_; size_t v___x_2568_; size_t v___x_2569_; lean_object* v_j_2570_; lean_object* v___x_2571_; 
v_es_2566_ = lean_ctor_get(v_x_2563_, 0);
v___x_2567_ = lean_box(2);
v___x_2568_ = ((size_t)31ULL);
v___x_2569_ = lean_usize_land(v_x_2564_, v___x_2568_);
v_j_2570_ = lean_usize_to_nat(v___x_2569_);
v___x_2571_ = lean_array_get_borrowed(v___x_2567_, v_es_2566_, v_j_2570_);
lean_dec(v_j_2570_);
switch(lean_obj_tag(v___x_2571_))
{
case 0:
{
lean_object* v_key_2572_; uint8_t v___x_2573_; 
v_key_2572_ = lean_ctor_get(v___x_2571_, 0);
v___x_2573_ = l_Lean_instBEqFVarId_beq(v_x_2565_, v_key_2572_);
return v___x_2573_;
}
case 1:
{
lean_object* v_node_2574_; size_t v___x_2575_; size_t v___x_2576_; 
v_node_2574_ = lean_ctor_get(v___x_2571_, 0);
v___x_2575_ = ((size_t)5ULL);
v___x_2576_ = lean_usize_shift_right(v_x_2564_, v___x_2575_);
v_x_2563_ = v_node_2574_;
v_x_2564_ = v___x_2576_;
goto _start;
}
default: 
{
uint8_t v___x_2578_; 
v___x_2578_ = 0;
return v___x_2578_;
}
}
}
else
{
lean_object* v_ks_2579_; lean_object* v___x_2580_; uint8_t v___x_2581_; 
v_ks_2579_ = lean_ctor_get(v_x_2563_, 0);
v___x_2580_ = lean_unsigned_to_nat(0u);
v___x_2581_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_ks_2579_, v___x_2580_, v_x_2565_);
return v___x_2581_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg___boxed(lean_object* v_x_2582_, lean_object* v_x_2583_, lean_object* v_x_2584_){
_start:
{
size_t v_x_5831__boxed_2585_; uint8_t v_res_2586_; lean_object* v_r_2587_; 
v_x_5831__boxed_2585_ = lean_unbox_usize(v_x_2583_);
lean_dec(v_x_2583_);
v_res_2586_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2582_, v_x_5831__boxed_2585_, v_x_2584_);
lean_dec(v_x_2584_);
lean_dec_ref(v_x_2582_);
v_r_2587_ = lean_box(v_res_2586_);
return v_r_2587_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(lean_object* v_x_2588_, lean_object* v_x_2589_){
_start:
{
uint64_t v___x_2590_; size_t v___x_2591_; uint8_t v___x_2592_; 
v___x_2590_ = l_Lean_instHashableFVarId_hash(v_x_2589_);
v___x_2591_ = lean_uint64_to_usize(v___x_2590_);
v___x_2592_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2588_, v___x_2591_, v_x_2589_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg___boxed(lean_object* v_x_2593_, lean_object* v_x_2594_){
_start:
{
uint8_t v_res_2595_; lean_object* v_r_2596_; 
v_res_2595_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2593_, v_x_2594_);
lean_dec(v_x_2594_);
lean_dec_ref(v_x_2593_);
v_r_2596_ = lean_box(v_res_2595_);
return v_r_2596_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1(void){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2598_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_2599_ = lean_unsigned_to_nat(59u);
v___x_2600_ = lean_unsigned_to_nat(281u);
v___x_2601_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0));
v___x_2602_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_2603_ = l_mkPanicMessageWithDecl(v___x_2602_, v___x_2601_, v___x_2600_, v___x_2599_, v___x_2598_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(lean_object* v_c_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_){
_start:
{
switch(lean_obj_tag(v_c_2604_))
{
case 0:
{
lean_object* v_decl_2611_; lean_object* v_k_2612_; lean_object* v___x_2613_; 
v_decl_2611_ = lean_ctor_get(v_c_2604_, 0);
v_k_2612_ = lean_ctor_get(v_c_2604_, 1);
lean_inc_ref(v_k_2612_);
v___x_2613_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2612_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
if (lean_obj_tag(v___x_2613_) == 0)
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2636_; 
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2636_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2616_ = v___x_2613_;
v_isShared_2617_ = v_isSharedCheck_2636_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2613_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2636_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
size_t v___x_2618_; size_t v___x_2619_; uint8_t v___x_2620_; 
v___x_2618_ = lean_ptr_addr(v_k_2612_);
v___x_2619_ = lean_ptr_addr(v_a_2614_);
v___x_2620_ = lean_usize_dec_eq(v___x_2618_, v___x_2619_);
if (v___x_2620_ == 0)
{
lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2630_; 
lean_inc_ref(v_decl_2611_);
v_isSharedCheck_2630_ = !lean_is_exclusive(v_c_2604_);
if (v_isSharedCheck_2630_ == 0)
{
lean_object* v_unused_2631_; lean_object* v_unused_2632_; 
v_unused_2631_ = lean_ctor_get(v_c_2604_, 1);
lean_dec(v_unused_2631_);
v_unused_2632_ = lean_ctor_get(v_c_2604_, 0);
lean_dec(v_unused_2632_);
v___x_2622_ = v_c_2604_;
v_isShared_2623_ = v_isSharedCheck_2630_;
goto v_resetjp_2621_;
}
else
{
lean_dec(v_c_2604_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2630_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
lean_ctor_set(v___x_2622_, 1, v_a_2614_);
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_decl_2611_);
lean_ctor_set(v_reuseFailAlloc_2629_, 1, v_a_2614_);
v___x_2625_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
lean_object* v___x_2627_; 
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 0, v___x_2625_);
v___x_2627_ = v___x_2616_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v___x_2625_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
}
}
else
{
lean_object* v___x_2634_; 
lean_dec(v_a_2614_);
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 0, v_c_2604_);
v___x_2634_ = v___x_2616_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_c_2604_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
return v___x_2634_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2604_, 2);
return v___x_2613_;
}
}
case 2:
{
lean_object* v_decl_2637_; lean_object* v_k_2638_; lean_object* v_params_2639_; lean_object* v_type_2640_; lean_object* v_value_2641_; uint8_t v___x_2642_; lean_object* v___x_2643_; 
v_decl_2637_ = lean_ctor_get(v_c_2604_, 0);
v_k_2638_ = lean_ctor_get(v_c_2604_, 1);
v_params_2639_ = lean_ctor_get(v_decl_2637_, 2);
v_type_2640_ = lean_ctor_get(v_decl_2637_, 3);
v_value_2641_ = lean_ctor_get(v_decl_2637_, 4);
v___x_2642_ = 1;
lean_inc_ref(v_value_2641_);
v___x_2643_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_value_2641_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
if (lean_obj_tag(v___x_2643_) == 0)
{
lean_object* v_a_2644_; lean_object* v___x_2645_; 
v_a_2644_ = lean_ctor_get(v___x_2643_, 0);
lean_inc(v_a_2644_);
lean_dec_ref_known(v___x_2643_, 1);
lean_inc_ref(v_params_2639_);
lean_inc_ref(v_type_2640_);
lean_inc_ref(v_decl_2637_);
v___x_2645_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_2642_, v_decl_2637_, v_type_2640_, v_params_2639_, v_a_2644_, v___y_2607_);
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; lean_object* v___x_2647_; 
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2646_);
lean_dec_ref_known(v___x_2645_, 1);
lean_inc_ref(v_k_2638_);
v___x_2647_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2638_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2685_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2650_ = v___x_2647_;
v_isShared_2651_ = v_isSharedCheck_2685_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_a_2648_);
lean_dec(v___x_2647_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2685_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
size_t v___x_2652_; size_t v___x_2653_; uint8_t v___x_2654_; 
v___x_2652_ = lean_ptr_addr(v_k_2638_);
v___x_2653_ = lean_ptr_addr(v_a_2648_);
v___x_2654_ = lean_usize_dec_eq(v___x_2652_, v___x_2653_);
if (v___x_2654_ == 0)
{
lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2664_; 
v_isSharedCheck_2664_ = !lean_is_exclusive(v_c_2604_);
if (v_isSharedCheck_2664_ == 0)
{
lean_object* v_unused_2665_; lean_object* v_unused_2666_; 
v_unused_2665_ = lean_ctor_get(v_c_2604_, 1);
lean_dec(v_unused_2665_);
v_unused_2666_ = lean_ctor_get(v_c_2604_, 0);
lean_dec(v_unused_2666_);
v___x_2656_ = v_c_2604_;
v_isShared_2657_ = v_isSharedCheck_2664_;
goto v_resetjp_2655_;
}
else
{
lean_dec(v_c_2604_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2664_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v___x_2659_; 
if (v_isShared_2657_ == 0)
{
lean_ctor_set(v___x_2656_, 1, v_a_2648_);
lean_ctor_set(v___x_2656_, 0, v_a_2646_);
v___x_2659_ = v___x_2656_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_a_2646_);
lean_ctor_set(v_reuseFailAlloc_2663_, 1, v_a_2648_);
v___x_2659_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
lean_object* v___x_2661_; 
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2659_);
v___x_2661_ = v___x_2650_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v___x_2659_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
}
}
else
{
size_t v___x_2667_; size_t v___x_2668_; uint8_t v___x_2669_; 
v___x_2667_ = lean_ptr_addr(v_decl_2637_);
v___x_2668_ = lean_ptr_addr(v_a_2646_);
v___x_2669_ = lean_usize_dec_eq(v___x_2667_, v___x_2668_);
if (v___x_2669_ == 0)
{
lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2679_; 
v_isSharedCheck_2679_ = !lean_is_exclusive(v_c_2604_);
if (v_isSharedCheck_2679_ == 0)
{
lean_object* v_unused_2680_; lean_object* v_unused_2681_; 
v_unused_2680_ = lean_ctor_get(v_c_2604_, 1);
lean_dec(v_unused_2680_);
v_unused_2681_ = lean_ctor_get(v_c_2604_, 0);
lean_dec(v_unused_2681_);
v___x_2671_ = v_c_2604_;
v_isShared_2672_ = v_isSharedCheck_2679_;
goto v_resetjp_2670_;
}
else
{
lean_dec(v_c_2604_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2679_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 1, v_a_2648_);
lean_ctor_set(v___x_2671_, 0, v_a_2646_);
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2646_);
lean_ctor_set(v_reuseFailAlloc_2678_, 1, v_a_2648_);
v___x_2674_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
lean_object* v___x_2676_; 
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2674_);
v___x_2676_ = v___x_2650_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2674_);
v___x_2676_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
return v___x_2676_;
}
}
}
}
else
{
lean_object* v___x_2683_; 
lean_dec(v_a_2648_);
lean_dec(v_a_2646_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v_c_2604_);
v___x_2683_ = v___x_2650_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_c_2604_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
}
}
}
else
{
lean_dec(v_a_2646_);
lean_dec_ref_known(v_c_2604_, 2);
return v___x_2647_;
}
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
lean_dec_ref_known(v_c_2604_, 2);
v_a_2686_ = lean_ctor_get(v___x_2645_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2645_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2645_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2604_, 2);
return v___x_2643_;
}
}
case 3:
{
lean_object* v___x_2694_; 
v___x_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2694_, 0, v_c_2604_);
return v___x_2694_;
}
case 4:
{
lean_object* v_cases_2695_; lean_object* v_typeName_2696_; lean_object* v_resultType_2697_; lean_object* v_discr_2698_; lean_object* v_alts_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2752_; 
v_cases_2695_ = lean_ctor_get(v_c_2604_, 0);
lean_inc_ref(v_cases_2695_);
v_typeName_2696_ = lean_ctor_get(v_cases_2695_, 0);
v_resultType_2697_ = lean_ctor_get(v_cases_2695_, 1);
v_discr_2698_ = lean_ctor_get(v_cases_2695_, 2);
v_alts_2699_ = lean_ctor_get(v_cases_2695_, 3);
v_isSharedCheck_2752_ = !lean_is_exclusive(v_cases_2695_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2701_ = v_cases_2695_;
v_isShared_2702_ = v_isSharedCheck_2752_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_alts_2699_);
lean_inc(v_discr_2698_);
lean_inc(v_resultType_2697_);
lean_inc(v_typeName_2696_);
lean_dec(v_cases_2695_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2752_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v_alreadyFound_2703_; uint8_t v_relaxedReuse_2704_; lean_object* v_ownedness_2705_; uint8_t v___x_2706_; uint8_t v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; uint8_t v___x_2710_; uint8_t v___x_2711_; uint8_t v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; size_t v_sz_2716_; size_t v___x_2717_; lean_object* v___x_2718_; 
v_alreadyFound_2703_ = lean_ctor_get(v___y_2605_, 0);
v_relaxedReuse_2704_ = lean_ctor_get_uint8(v___y_2605_, sizeof(void*)*2);
v_ownedness_2705_ = lean_ctor_get(v___y_2605_, 1);
v___x_2706_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_alreadyFound_2703_, v_discr_2698_);
v___x_2707_ = 0;
v___x_2708_ = lean_box(v___x_2707_);
v___x_2709_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_ownedness_2705_, v_discr_2698_, v___x_2708_);
lean_dec(v___x_2708_);
v___x_2710_ = 1;
v___x_2711_ = lean_unbox(v___x_2709_);
lean_dec(v___x_2709_);
v___x_2712_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_2711_, v___x_2710_);
v___x_2713_ = lean_box(0);
lean_inc_n(v_discr_2698_, 2);
lean_inc_ref(v_alreadyFound_2703_);
v___x_2714_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_alreadyFound_2703_, v_discr_2698_, v___x_2713_);
lean_inc_ref(v_ownedness_2705_);
v___x_2715_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2715_, 0, v___x_2714_);
lean_ctor_set(v___x_2715_, 1, v_ownedness_2705_);
lean_ctor_set_uint8(v___x_2715_, sizeof(void*)*2, v_relaxedReuse_2704_);
v_sz_2716_ = lean_array_size(v_alts_2699_);
v___x_2717_ = ((size_t)0ULL);
lean_inc_ref(v_alts_2699_);
v___x_2718_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(v___x_2712_, v_discr_2698_, v___x_2706_, v_sz_2716_, v___x_2717_, v_alts_2699_, v___x_2715_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
lean_dec_ref_known(v___x_2715_, 2);
if (lean_obj_tag(v___x_2718_) == 0)
{
lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2743_; 
v_a_2719_ = lean_ctor_get(v___x_2718_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2718_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2721_ = v___x_2718_;
v_isShared_2722_ = v_isSharedCheck_2743_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2718_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2743_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
size_t v___x_2723_; size_t v___x_2724_; uint8_t v___x_2725_; 
v___x_2723_ = lean_ptr_addr(v_alts_2699_);
lean_dec_ref(v_alts_2699_);
v___x_2724_ = lean_ptr_addr(v_a_2719_);
v___x_2725_ = lean_usize_dec_eq(v___x_2723_, v___x_2724_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2738_; 
v_isSharedCheck_2738_ = !lean_is_exclusive(v_c_2604_);
if (v_isSharedCheck_2738_ == 0)
{
lean_object* v_unused_2739_; 
v_unused_2739_ = lean_ctor_get(v_c_2604_, 0);
lean_dec(v_unused_2739_);
v___x_2727_ = v_c_2604_;
v_isShared_2728_ = v_isSharedCheck_2738_;
goto v_resetjp_2726_;
}
else
{
lean_dec(v_c_2604_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2738_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 3, v_a_2719_);
v___x_2730_ = v___x_2701_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_typeName_2696_);
lean_ctor_set(v_reuseFailAlloc_2737_, 1, v_resultType_2697_);
lean_ctor_set(v_reuseFailAlloc_2737_, 2, v_discr_2698_);
lean_ctor_set(v_reuseFailAlloc_2737_, 3, v_a_2719_);
v___x_2730_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
lean_object* v___x_2732_; 
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 0, v___x_2730_);
v___x_2732_ = v___x_2727_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
lean_object* v___x_2734_; 
if (v_isShared_2722_ == 0)
{
lean_ctor_set(v___x_2721_, 0, v___x_2732_);
v___x_2734_ = v___x_2721_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2732_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
}
}
}
else
{
lean_object* v___x_2741_; 
lean_dec(v_a_2719_);
lean_del_object(v___x_2701_);
lean_dec(v_discr_2698_);
lean_dec_ref(v_resultType_2697_);
lean_dec(v_typeName_2696_);
if (v_isShared_2722_ == 0)
{
lean_ctor_set(v___x_2721_, 0, v_c_2604_);
v___x_2741_ = v___x_2721_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_c_2604_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_del_object(v___x_2701_);
lean_dec_ref(v_alts_2699_);
lean_dec(v_discr_2698_);
lean_dec_ref(v_resultType_2697_);
lean_dec(v_typeName_2696_);
lean_dec_ref_known(v_c_2604_, 1);
v_a_2744_ = lean_ctor_get(v___x_2718_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2718_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2718_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2718_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
}
case 5:
{
lean_object* v___x_2753_; 
v___x_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2753_, 0, v_c_2604_);
return v___x_2753_;
}
case 6:
{
lean_object* v___x_2754_; 
v___x_2754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2754_, 0, v_c_2604_);
return v___x_2754_;
}
case 8:
{
lean_object* v_fvarId_2755_; lean_object* v_i_2756_; lean_object* v_y_2757_; lean_object* v_k_2758_; lean_object* v___x_2759_; 
v_fvarId_2755_ = lean_ctor_get(v_c_2604_, 0);
v_i_2756_ = lean_ctor_get(v_c_2604_, 1);
v_y_2757_ = lean_ctor_get(v_c_2604_, 2);
v_k_2758_ = lean_ctor_get(v_c_2604_, 3);
lean_inc_ref(v_k_2758_);
v___x_2759_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2758_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v_a_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2784_; 
v_a_2760_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2762_ = v___x_2759_;
v_isShared_2763_ = v_isSharedCheck_2784_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_a_2760_);
lean_dec(v___x_2759_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2784_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
size_t v___x_2764_; size_t v___x_2765_; uint8_t v___x_2766_; 
v___x_2764_ = lean_ptr_addr(v_k_2758_);
v___x_2765_ = lean_ptr_addr(v_a_2760_);
v___x_2766_ = lean_usize_dec_eq(v___x_2764_, v___x_2765_);
if (v___x_2766_ == 0)
{
lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2776_; 
lean_inc(v_y_2757_);
lean_inc(v_i_2756_);
lean_inc(v_fvarId_2755_);
v_isSharedCheck_2776_ = !lean_is_exclusive(v_c_2604_);
if (v_isSharedCheck_2776_ == 0)
{
lean_object* v_unused_2777_; lean_object* v_unused_2778_; lean_object* v_unused_2779_; lean_object* v_unused_2780_; 
v_unused_2777_ = lean_ctor_get(v_c_2604_, 3);
lean_dec(v_unused_2777_);
v_unused_2778_ = lean_ctor_get(v_c_2604_, 2);
lean_dec(v_unused_2778_);
v_unused_2779_ = lean_ctor_get(v_c_2604_, 1);
lean_dec(v_unused_2779_);
v_unused_2780_ = lean_ctor_get(v_c_2604_, 0);
lean_dec(v_unused_2780_);
v___x_2768_ = v_c_2604_;
v_isShared_2769_ = v_isSharedCheck_2776_;
goto v_resetjp_2767_;
}
else
{
lean_dec(v_c_2604_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2776_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2771_; 
if (v_isShared_2769_ == 0)
{
lean_ctor_set(v___x_2768_, 3, v_a_2760_);
v___x_2771_ = v___x_2768_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_fvarId_2755_);
lean_ctor_set(v_reuseFailAlloc_2775_, 1, v_i_2756_);
lean_ctor_set(v_reuseFailAlloc_2775_, 2, v_y_2757_);
lean_ctor_set(v_reuseFailAlloc_2775_, 3, v_a_2760_);
v___x_2771_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
lean_object* v___x_2773_; 
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 0, v___x_2771_);
v___x_2773_ = v___x_2762_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v___x_2771_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
return v___x_2773_;
}
}
}
}
else
{
lean_object* v___x_2782_; 
lean_dec(v_a_2760_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 0, v_c_2604_);
v___x_2782_ = v___x_2762_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_c_2604_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2604_, 4);
return v___x_2759_;
}
}
case 9:
{
lean_object* v_fvarId_2785_; lean_object* v_i_2786_; lean_object* v_offset_2787_; lean_object* v_y_2788_; lean_object* v_ty_2789_; lean_object* v_k_2790_; lean_object* v___x_2791_; 
v_fvarId_2785_ = lean_ctor_get(v_c_2604_, 0);
v_i_2786_ = lean_ctor_get(v_c_2604_, 1);
v_offset_2787_ = lean_ctor_get(v_c_2604_, 2);
v_y_2788_ = lean_ctor_get(v_c_2604_, 3);
v_ty_2789_ = lean_ctor_get(v_c_2604_, 4);
v_k_2790_ = lean_ctor_get(v_c_2604_, 5);
lean_inc_ref(v_k_2790_);
v___x_2791_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2790_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2818_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2794_ = v___x_2791_;
v_isShared_2795_ = v_isSharedCheck_2818_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2791_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2818_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
size_t v___x_2796_; size_t v___x_2797_; uint8_t v___x_2798_; 
v___x_2796_ = lean_ptr_addr(v_k_2790_);
v___x_2797_ = lean_ptr_addr(v_a_2792_);
v___x_2798_ = lean_usize_dec_eq(v___x_2796_, v___x_2797_);
if (v___x_2798_ == 0)
{
lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2808_; 
lean_inc_ref(v_ty_2789_);
lean_inc(v_y_2788_);
lean_inc(v_offset_2787_);
lean_inc(v_i_2786_);
lean_inc(v_fvarId_2785_);
v_isSharedCheck_2808_ = !lean_is_exclusive(v_c_2604_);
if (v_isSharedCheck_2808_ == 0)
{
lean_object* v_unused_2809_; lean_object* v_unused_2810_; lean_object* v_unused_2811_; lean_object* v_unused_2812_; lean_object* v_unused_2813_; lean_object* v_unused_2814_; 
v_unused_2809_ = lean_ctor_get(v_c_2604_, 5);
lean_dec(v_unused_2809_);
v_unused_2810_ = lean_ctor_get(v_c_2604_, 4);
lean_dec(v_unused_2810_);
v_unused_2811_ = lean_ctor_get(v_c_2604_, 3);
lean_dec(v_unused_2811_);
v_unused_2812_ = lean_ctor_get(v_c_2604_, 2);
lean_dec(v_unused_2812_);
v_unused_2813_ = lean_ctor_get(v_c_2604_, 1);
lean_dec(v_unused_2813_);
v_unused_2814_ = lean_ctor_get(v_c_2604_, 0);
lean_dec(v_unused_2814_);
v___x_2800_ = v_c_2604_;
v_isShared_2801_ = v_isSharedCheck_2808_;
goto v_resetjp_2799_;
}
else
{
lean_dec(v_c_2604_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2808_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___x_2803_; 
if (v_isShared_2801_ == 0)
{
lean_ctor_set(v___x_2800_, 5, v_a_2792_);
v___x_2803_ = v___x_2800_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_fvarId_2785_);
lean_ctor_set(v_reuseFailAlloc_2807_, 1, v_i_2786_);
lean_ctor_set(v_reuseFailAlloc_2807_, 2, v_offset_2787_);
lean_ctor_set(v_reuseFailAlloc_2807_, 3, v_y_2788_);
lean_ctor_set(v_reuseFailAlloc_2807_, 4, v_ty_2789_);
lean_ctor_set(v_reuseFailAlloc_2807_, 5, v_a_2792_);
v___x_2803_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
lean_object* v___x_2805_; 
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v___x_2803_);
v___x_2805_ = v___x_2794_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2806_; 
v_reuseFailAlloc_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2806_, 0, v___x_2803_);
v___x_2805_ = v_reuseFailAlloc_2806_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
return v___x_2805_;
}
}
}
}
else
{
lean_object* v___x_2816_; 
lean_dec(v_a_2792_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v_c_2604_);
v___x_2816_ = v___x_2794_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_c_2604_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2604_, 6);
return v___x_2791_;
}
}
default: 
{
lean_object* v___x_2819_; lean_object* v___x_2820_; 
lean_dec_ref(v_c_2604_);
v___x_2819_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1);
v___x_2820_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v___x_2819_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
return v___x_2820_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed(lean_object* v_c_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_){
_start:
{
lean_object* v_res_2828_; 
v_res_2828_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_c_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_);
lean_dec(v___y_2826_);
lean_dec_ref(v___y_2825_);
lean_dec(v___y_2824_);
lean_dec_ref(v___y_2823_);
lean_dec_ref(v___y_2822_);
return v_res_2828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(uint8_t v___x_2829_, lean_object* v_discr_2830_, uint8_t v___x_2831_, size_t v_sz_2832_, size_t v_i_2833_, lean_object* v_bs_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_){
_start:
{
uint8_t v___x_2841_; 
v___x_2841_ = lean_usize_dec_lt(v_i_2833_, v_sz_2832_);
if (v___x_2841_ == 0)
{
lean_object* v___x_2842_; 
lean_dec(v_discr_2830_);
v___x_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2842_, 0, v_bs_2834_);
return v___x_2842_;
}
else
{
lean_object* v___f_2843_; lean_object* v_v_2844_; lean_object* v___x_2845_; lean_object* v_bs_x27_2846_; lean_object* v_a_2848_; lean_object* v___y_2854_; lean_object* v___x_2864_; 
v___f_2843_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed), 7, 0);
v_v_2844_ = lean_array_uget(v_bs_2834_, v_i_2833_);
v___x_2845_ = lean_unsigned_to_nat(0u);
v_bs_x27_2846_ = lean_array_uset(v_bs_2834_, v_i_2833_, v___x_2845_);
v___x_2864_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_v_2844_, v___f_2843_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
if (lean_obj_tag(v___x_2864_) == 0)
{
lean_object* v_a_2865_; 
v_a_2865_ = lean_ctor_get(v___x_2864_, 0);
lean_inc(v_a_2865_);
if (lean_obj_tag(v_a_2865_) == 1)
{
lean_object* v_info_2866_; lean_object* v_code_2867_; uint8_t v___y_2869_; uint8_t v___x_2881_; 
v_info_2866_ = lean_ctor_get(v_a_2865_, 0);
v_code_2867_ = lean_ctor_get(v_a_2865_, 1);
v___x_2881_ = l_Lean_Compiler_LCNF_CtorInfo_isScalar(v_info_2866_);
if (v___x_2881_ == 0)
{
v___y_2869_ = v___x_2831_;
goto v___jp_2868_;
}
else
{
v___y_2869_ = v___x_2881_;
goto v___jp_2868_;
}
v___jp_2868_:
{
if (v___y_2869_ == 0)
{
if (v___x_2829_ == 0)
{
lean_object* v___x_2870_; 
lean_dec_ref_known(v___x_2864_, 1);
lean_inc_ref(v_code_2867_);
lean_inc_ref(v_info_2866_);
lean_inc(v_discr_2830_);
v___x_2870_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_discr_2830_, v_info_2866_, v_code_2867_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_object* v_a_2871_; lean_object* v___x_2872_; 
v_a_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_a_2871_);
lean_dec_ref_known(v___x_2870_, 1);
v___x_2872_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2865_, v_a_2871_);
v_a_2848_ = v___x_2872_;
goto v___jp_2847_;
}
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
lean_dec_ref_known(v_a_2865_, 2);
lean_dec_ref(v_bs_x27_2846_);
lean_dec(v_discr_2830_);
v_a_2873_ = lean_ctor_get(v___x_2870_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2870_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2870_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___x_2870_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_2865_, 2);
v___y_2854_ = v___x_2864_;
goto v___jp_2853_;
}
}
else
{
lean_dec_ref_known(v_a_2865_, 2);
v___y_2854_ = v___x_2864_;
goto v___jp_2853_;
}
}
}
else
{
lean_dec_ref_known(v_a_2865_, 1);
v___y_2854_ = v___x_2864_;
goto v___jp_2853_;
}
}
else
{
v___y_2854_ = v___x_2864_;
goto v___jp_2853_;
}
v___jp_2847_:
{
size_t v___x_2849_; size_t v___x_2850_; lean_object* v___x_2851_; 
v___x_2849_ = ((size_t)1ULL);
v___x_2850_ = lean_usize_add(v_i_2833_, v___x_2849_);
v___x_2851_ = lean_array_uset(v_bs_x27_2846_, v_i_2833_, v_a_2848_);
v_i_2833_ = v___x_2850_;
v_bs_2834_ = v___x_2851_;
goto _start;
}
v___jp_2853_:
{
if (lean_obj_tag(v___y_2854_) == 0)
{
lean_object* v_a_2855_; 
v_a_2855_ = lean_ctor_get(v___y_2854_, 0);
lean_inc(v_a_2855_);
lean_dec_ref_known(v___y_2854_, 1);
v_a_2848_ = v_a_2855_;
goto v___jp_2847_;
}
else
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2863_; 
lean_dec_ref(v_bs_x27_2846_);
lean_dec(v_discr_2830_);
v_a_2856_ = lean_ctor_get(v___y_2854_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___y_2854_);
if (v_isSharedCheck_2863_ == 0)
{
v___x_2858_ = v___y_2854_;
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___y_2854_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2861_; 
if (v_isShared_2859_ == 0)
{
v___x_2861_ = v___x_2858_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_a_2856_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed(lean_object* v___x_2882_, lean_object* v_discr_2883_, lean_object* v___x_2884_, lean_object* v_sz_2885_, lean_object* v_i_2886_, lean_object* v_bs_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
uint8_t v___x_5892__boxed_2894_; uint8_t v___x_5894__boxed_2895_; size_t v_sz_boxed_2896_; size_t v_i_boxed_2897_; lean_object* v_res_2898_; 
v___x_5892__boxed_2894_ = lean_unbox(v___x_2882_);
v___x_5894__boxed_2895_ = lean_unbox(v___x_2884_);
v_sz_boxed_2896_ = lean_unbox_usize(v_sz_2885_);
lean_dec(v_sz_2885_);
v_i_boxed_2897_ = lean_unbox_usize(v_i_2886_);
lean_dec(v_i_2886_);
v_res_2898_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(v___x_5892__boxed_2894_, v_discr_2883_, v___x_5894__boxed_2895_, v_sz_boxed_2896_, v_i_boxed_2897_, v_bs_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec_ref(v___y_2888_);
return v_res_2898_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(lean_object* v_00_u03b2_2899_, lean_object* v_x_2900_, lean_object* v_x_2901_){
_start:
{
uint8_t v___x_2902_; 
v___x_2902_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2900_, v_x_2901_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___boxed(lean_object* v_00_u03b2_2903_, lean_object* v_x_2904_, lean_object* v_x_2905_){
_start:
{
uint8_t v_res_2906_; lean_object* v_r_2907_; 
v_res_2906_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(v_00_u03b2_2903_, v_x_2904_, v_x_2905_);
lean_dec(v_x_2905_);
lean_dec_ref(v_x_2904_);
v_r_2907_ = lean_box(v_res_2906_);
return v_r_2907_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(lean_object* v_00_u03b2_2908_, lean_object* v_m_2909_, lean_object* v_a_2910_, lean_object* v_fallback_2911_){
_start:
{
lean_object* v___x_2912_; 
v___x_2912_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_2909_, v_a_2910_, v_fallback_2911_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___boxed(lean_object* v_00_u03b2_2913_, lean_object* v_m_2914_, lean_object* v_a_2915_, lean_object* v_fallback_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(v_00_u03b2_2913_, v_m_2914_, v_a_2915_, v_fallback_2916_);
lean_dec(v_fallback_2916_);
lean_dec(v_a_2915_);
lean_dec_ref(v_m_2914_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2(lean_object* v_00_u03b2_2918_, lean_object* v_x_2919_, lean_object* v_x_2920_, lean_object* v_x_2921_){
_start:
{
lean_object* v___x_2922_; 
v___x_2922_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_x_2919_, v_x_2920_, v_x_2921_);
return v___x_2922_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(lean_object* v_00_u03b2_2923_, lean_object* v_x_2924_, size_t v_x_2925_, lean_object* v_x_2926_){
_start:
{
uint8_t v___x_2927_; 
v___x_2927_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2924_, v_x_2925_, v_x_2926_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2928_, lean_object* v_x_2929_, lean_object* v_x_2930_, lean_object* v_x_2931_){
_start:
{
size_t v_x_6478__boxed_2932_; uint8_t v_res_2933_; lean_object* v_r_2934_; 
v_x_6478__boxed_2932_ = lean_unbox_usize(v_x_2930_);
lean_dec(v_x_2930_);
v_res_2933_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(v_00_u03b2_2928_, v_x_2929_, v_x_6478__boxed_2932_, v_x_2931_);
lean_dec(v_x_2931_);
lean_dec_ref(v_x_2929_);
v_r_2934_ = lean_box(v_res_2933_);
return v_r_2934_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(lean_object* v_00_u03b2_2935_, lean_object* v_a_2936_, lean_object* v_fallback_2937_, lean_object* v_x_2938_){
_start:
{
lean_object* v___x_2939_; 
v___x_2939_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2936_, v_fallback_2937_, v_x_2938_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2940_, lean_object* v_a_2941_, lean_object* v_fallback_2942_, lean_object* v_x_2943_){
_start:
{
lean_object* v_res_2944_; 
v_res_2944_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(v_00_u03b2_2940_, v_a_2941_, v_fallback_2942_, v_x_2943_);
lean_dec(v_x_2943_);
lean_dec(v_fallback_2942_);
lean_dec(v_a_2941_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(lean_object* v_00_u03b2_2945_, lean_object* v_x_2946_, size_t v_x_2947_, size_t v_x_2948_, lean_object* v_x_2949_, lean_object* v_x_2950_){
_start:
{
lean_object* v___x_2951_; 
v___x_2951_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2946_, v_x_2947_, v_x_2948_, v_x_2949_, v_x_2950_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2952_, lean_object* v_x_2953_, lean_object* v_x_2954_, lean_object* v_x_2955_, lean_object* v_x_2956_, lean_object* v_x_2957_){
_start:
{
size_t v_x_6494__boxed_2958_; size_t v_x_6495__boxed_2959_; lean_object* v_res_2960_; 
v_x_6494__boxed_2958_ = lean_unbox_usize(v_x_2954_);
lean_dec(v_x_2954_);
v_x_6495__boxed_2959_ = lean_unbox_usize(v_x_2955_);
lean_dec(v_x_2955_);
v_res_2960_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(v_00_u03b2_2952_, v_x_2953_, v_x_6494__boxed_2958_, v_x_6495__boxed_2959_, v_x_2956_, v_x_2957_);
return v_res_2960_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2961_, lean_object* v_keys_2962_, lean_object* v_vals_2963_, lean_object* v_heq_2964_, lean_object* v_i_2965_, lean_object* v_k_2966_){
_start:
{
uint8_t v___x_2967_; 
v___x_2967_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2962_, v_i_2965_, v_k_2966_);
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2968_, lean_object* v_keys_2969_, lean_object* v_vals_2970_, lean_object* v_heq_2971_, lean_object* v_i_2972_, lean_object* v_k_2973_){
_start:
{
uint8_t v_res_2974_; lean_object* v_r_2975_; 
v_res_2974_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(v_00_u03b2_2968_, v_keys_2969_, v_vals_2970_, v_heq_2971_, v_i_2972_, v_k_2973_);
lean_dec(v_k_2973_);
lean_dec_ref(v_vals_2970_);
lean_dec_ref(v_keys_2969_);
v_r_2975_ = lean_box(v_res_2974_);
return v_r_2975_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_2976_, lean_object* v_n_2977_, lean_object* v_k_2978_, lean_object* v_v_2979_){
_start:
{
lean_object* v___x_2980_; 
v___x_2980_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v_n_2977_, v_k_2978_, v_v_2979_);
return v___x_2980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_2981_, size_t v_depth_2982_, lean_object* v_keys_2983_, lean_object* v_vals_2984_, lean_object* v_heq_2985_, lean_object* v_i_2986_, lean_object* v_entries_2987_){
_start:
{
lean_object* v___x_2988_; 
v___x_2988_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_2982_, v_keys_2983_, v_vals_2984_, v_i_2986_, v_entries_2987_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_2989_, lean_object* v_depth_2990_, lean_object* v_keys_2991_, lean_object* v_vals_2992_, lean_object* v_heq_2993_, lean_object* v_i_2994_, lean_object* v_entries_2995_){
_start:
{
size_t v_depth_boxed_2996_; lean_object* v_res_2997_; 
v_depth_boxed_2996_ = lean_unbox_usize(v_depth_2990_);
lean_dec(v_depth_2990_);
v_res_2997_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(v_00_u03b2_2989_, v_depth_boxed_2996_, v_keys_2991_, v_vals_2992_, v_heq_2993_, v_i_2994_, v_entries_2995_);
lean_dec_ref(v_vals_2992_);
lean_dec_ref(v_keys_2991_);
return v_res_2997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9(lean_object* v_00_u03b2_2998_, lean_object* v_x_2999_, lean_object* v_x_3000_, lean_object* v_x_3001_, lean_object* v_x_3002_){
_start:
{
lean_object* v___x_3003_; 
v___x_3003_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_x_2999_, v_x_3000_, v_x_3001_, v_x_3002_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(lean_object* v_msg_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_){
_start:
{
lean_object* v___f_3013_; lean_object* v___f_3014_; lean_object* v___f_3015_; lean_object* v___f_3016_; lean_object* v___f_3017_; lean_object* v___f_3018_; lean_object* v___f_3019_; lean_object* v___f_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v_toApplicative_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3087_; 
v___f_3013_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0));
v___f_3014_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_3015_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
v___f_3016_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__3));
v___f_3017_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__4));
v___f_3018_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_3018_, 0, v___f_3017_);
lean_closure_set(v___f_3018_, 1, v___f_3016_);
v___f_3019_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_3019_, 0, v___f_3016_);
v___f_3020_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__5));
v___x_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___f_3013_);
lean_ctor_set(v___x_3021_, 1, v___f_3014_);
v___x_3022_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3021_);
lean_ctor_set(v___x_3022_, 1, v___f_3015_);
lean_ctor_set(v___x_3022_, 2, v___f_3018_);
lean_ctor_set(v___x_3022_, 3, v___f_3019_);
lean_ctor_set(v___x_3022_, 4, v___f_3020_);
v___x_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
lean_ctor_set(v___x_3023_, 1, v___f_3016_);
v___x_3024_ = l_StateRefT_x27_instMonad___redArg(v___x_3023_);
v_toApplicative_3025_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3087_ == 0)
{
lean_object* v_unused_3088_; 
v_unused_3088_ = lean_ctor_get(v___x_3024_, 1);
lean_dec(v_unused_3088_);
v___x_3027_ = v___x_3024_;
v_isShared_3028_ = v_isSharedCheck_3087_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_toApplicative_3025_);
lean_dec(v___x_3024_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3087_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v_toFunctor_3029_; lean_object* v_toSeq_3030_; lean_object* v_toSeqLeft_3031_; lean_object* v_toSeqRight_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3085_; 
v_toFunctor_3029_ = lean_ctor_get(v_toApplicative_3025_, 0);
v_toSeq_3030_ = lean_ctor_get(v_toApplicative_3025_, 2);
v_toSeqLeft_3031_ = lean_ctor_get(v_toApplicative_3025_, 3);
v_toSeqRight_3032_ = lean_ctor_get(v_toApplicative_3025_, 4);
v_isSharedCheck_3085_ = !lean_is_exclusive(v_toApplicative_3025_);
if (v_isSharedCheck_3085_ == 0)
{
lean_object* v_unused_3086_; 
v_unused_3086_ = lean_ctor_get(v_toApplicative_3025_, 1);
lean_dec(v_unused_3086_);
v___x_3034_ = v_toApplicative_3025_;
v_isShared_3035_ = v_isSharedCheck_3085_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_toSeqRight_3032_);
lean_inc(v_toSeqLeft_3031_);
lean_inc(v_toSeq_3030_);
lean_inc(v_toFunctor_3029_);
lean_dec(v_toApplicative_3025_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3085_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___f_3036_; lean_object* v___f_3037_; lean_object* v___f_3038_; lean_object* v___f_3039_; lean_object* v___x_3040_; lean_object* v___f_3041_; lean_object* v___f_3042_; lean_object* v___f_3043_; lean_object* v___x_3045_; 
v___f_3036_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__6));
v___f_3037_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__7));
lean_inc_ref(v_toFunctor_3029_);
v___f_3038_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3038_, 0, v_toFunctor_3029_);
v___f_3039_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3039_, 0, v_toFunctor_3029_);
v___x_3040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3040_, 0, v___f_3038_);
lean_ctor_set(v___x_3040_, 1, v___f_3039_);
v___f_3041_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3041_, 0, v_toSeqRight_3032_);
v___f_3042_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3042_, 0, v_toSeqLeft_3031_);
v___f_3043_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3043_, 0, v_toSeq_3030_);
if (v_isShared_3035_ == 0)
{
lean_ctor_set(v___x_3034_, 4, v___f_3041_);
lean_ctor_set(v___x_3034_, 3, v___f_3042_);
lean_ctor_set(v___x_3034_, 2, v___f_3043_);
lean_ctor_set(v___x_3034_, 1, v___f_3036_);
lean_ctor_set(v___x_3034_, 0, v___x_3040_);
v___x_3045_ = v___x_3034_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v___x_3040_);
lean_ctor_set(v_reuseFailAlloc_3084_, 1, v___f_3036_);
lean_ctor_set(v_reuseFailAlloc_3084_, 2, v___f_3043_);
lean_ctor_set(v_reuseFailAlloc_3084_, 3, v___f_3042_);
lean_ctor_set(v_reuseFailAlloc_3084_, 4, v___f_3041_);
v___x_3045_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
lean_object* v___x_3047_; 
if (v_isShared_3028_ == 0)
{
lean_ctor_set(v___x_3027_, 1, v___f_3037_);
lean_ctor_set(v___x_3027_, 0, v___x_3045_);
v___x_3047_ = v___x_3027_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v___x_3045_);
lean_ctor_set(v_reuseFailAlloc_3083_, 1, v___f_3037_);
v___x_3047_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
lean_object* v___x_3048_; lean_object* v_toApplicative_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3081_; 
v___x_3048_ = l_StateRefT_x27_instMonad___redArg(v___x_3047_);
v_toApplicative_3049_ = lean_ctor_get(v___x_3048_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3048_);
if (v_isSharedCheck_3081_ == 0)
{
lean_object* v_unused_3082_; 
v_unused_3082_ = lean_ctor_get(v___x_3048_, 1);
lean_dec(v_unused_3082_);
v___x_3051_ = v___x_3048_;
v_isShared_3052_ = v_isSharedCheck_3081_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_toApplicative_3049_);
lean_dec(v___x_3048_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3081_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v_toFunctor_3053_; lean_object* v_toSeq_3054_; lean_object* v_toSeqLeft_3055_; lean_object* v_toSeqRight_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3079_; 
v_toFunctor_3053_ = lean_ctor_get(v_toApplicative_3049_, 0);
v_toSeq_3054_ = lean_ctor_get(v_toApplicative_3049_, 2);
v_toSeqLeft_3055_ = lean_ctor_get(v_toApplicative_3049_, 3);
v_toSeqRight_3056_ = lean_ctor_get(v_toApplicative_3049_, 4);
v_isSharedCheck_3079_ = !lean_is_exclusive(v_toApplicative_3049_);
if (v_isSharedCheck_3079_ == 0)
{
lean_object* v_unused_3080_; 
v_unused_3080_ = lean_ctor_get(v_toApplicative_3049_, 1);
lean_dec(v_unused_3080_);
v___x_3058_ = v_toApplicative_3049_;
v_isShared_3059_ = v_isSharedCheck_3079_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_toSeqRight_3056_);
lean_inc(v_toSeqLeft_3055_);
lean_inc(v_toSeq_3054_);
lean_inc(v_toFunctor_3053_);
lean_dec(v_toApplicative_3049_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3079_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___f_3060_; lean_object* v___f_3061_; lean_object* v___f_3062_; lean_object* v___f_3063_; lean_object* v___x_3064_; lean_object* v___f_3065_; lean_object* v___f_3066_; lean_object* v___f_3067_; lean_object* v___x_3069_; 
v___f_3060_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0));
v___f_3061_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1));
lean_inc_ref(v_toFunctor_3053_);
v___f_3062_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3062_, 0, v_toFunctor_3053_);
v___f_3063_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3063_, 0, v_toFunctor_3053_);
v___x_3064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3064_, 0, v___f_3062_);
lean_ctor_set(v___x_3064_, 1, v___f_3063_);
v___f_3065_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3065_, 0, v_toSeqRight_3056_);
v___f_3066_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3066_, 0, v_toSeqLeft_3055_);
v___f_3067_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3067_, 0, v_toSeq_3054_);
if (v_isShared_3059_ == 0)
{
lean_ctor_set(v___x_3058_, 4, v___f_3065_);
lean_ctor_set(v___x_3058_, 3, v___f_3066_);
lean_ctor_set(v___x_3058_, 2, v___f_3067_);
lean_ctor_set(v___x_3058_, 1, v___f_3060_);
lean_ctor_set(v___x_3058_, 0, v___x_3064_);
v___x_3069_ = v___x_3058_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v___f_3060_);
lean_ctor_set(v_reuseFailAlloc_3078_, 2, v___f_3067_);
lean_ctor_set(v_reuseFailAlloc_3078_, 3, v___f_3066_);
lean_ctor_set(v_reuseFailAlloc_3078_, 4, v___f_3065_);
v___x_3069_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
lean_object* v___x_3071_; 
if (v_isShared_3052_ == 0)
{
lean_ctor_set(v___x_3051_, 1, v___f_3061_);
lean_ctor_set(v___x_3051_, 0, v___x_3069_);
v___x_3071_ = v___x_3051_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v___x_3069_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v___f_3061_);
v___x_3071_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_2385__overap_3075_; lean_object* v___x_3076_; 
v___x_3072_ = l_StateRefT_x27_instMonad___redArg(v___x_3071_);
v___x_3073_ = lean_box(0);
v___x_3074_ = l_instInhabitedOfMonad___redArg(v___x_3072_, v___x_3073_);
v___x_2385__overap_3075_ = lean_panic_fn_borrowed(v___x_3074_, v_msg_3006_);
lean_dec(v___x_3074_);
lean_inc(v___y_3011_);
lean_inc_ref(v___y_3010_);
lean_inc(v___y_3009_);
lean_inc_ref(v___y_3008_);
lean_inc(v___y_3007_);
v___x_3076_ = lean_apply_6(v___x_2385__overap_3075_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_, v___y_3011_, lean_box(0));
return v___x_3076_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___boxed(lean_object* v_msg_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_){
_start:
{
lean_object* v_res_3096_; 
v_res_3096_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v_msg_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_);
lean_dec(v___y_3094_);
lean_dec_ref(v___y_3093_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
return v_res_3096_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1(void){
_start:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3098_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_3099_ = lean_unsigned_to_nat(61u);
v___x_3100_ = lean_unsigned_to_nat(304u);
v___x_3101_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0));
v___x_3102_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_3103_ = l_mkPanicMessageWithDecl(v___x_3102_, v___x_3101_, v___x_3100_, v___x_3099_, v___x_3098_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(lean_object* v_c_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_){
_start:
{
switch(lean_obj_tag(v_c_3104_))
{
case 0:
{
lean_object* v_decl_3111_; lean_object* v_value_3112_; 
v_decl_3111_ = lean_ctor_get(v_c_3104_, 0);
v_value_3112_ = lean_ctor_get(v_decl_3111_, 3);
if (lean_obj_tag(v_value_3112_) == 11)
{
lean_object* v_k_3113_; lean_object* v_var_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
lean_inc_ref(v_value_3112_);
v_k_3113_ = lean_ctor_get(v_c_3104_, 1);
lean_inc_ref(v_k_3113_);
lean_dec_ref_known(v_c_3104_, 2);
v_var_3114_ = lean_ctor_get(v_value_3112_, 1);
lean_inc(v_var_3114_);
lean_dec_ref_known(v_value_3112_, 2);
v___x_3115_ = lean_st_ref_take(v___y_3105_);
v___x_3116_ = lean_box(0);
v___x_3117_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v___x_3115_, v_var_3114_, v___x_3116_);
v___x_3118_ = lean_st_ref_put(v___y_3105_, v___x_3117_);
v_c_3104_ = v_k_3113_;
goto _start;
}
else
{
lean_object* v_k_3120_; 
v_k_3120_ = lean_ctor_get(v_c_3104_, 1);
lean_inc_ref(v_k_3120_);
lean_dec_ref_known(v_c_3104_, 2);
v_c_3104_ = v_k_3120_;
goto _start;
}
}
case 2:
{
lean_object* v_decl_3122_; lean_object* v_k_3123_; lean_object* v_value_3124_; lean_object* v___x_3125_; 
v_decl_3122_ = lean_ctor_get(v_c_3104_, 0);
lean_inc_ref(v_decl_3122_);
v_k_3123_ = lean_ctor_get(v_c_3104_, 1);
lean_inc_ref(v_k_3123_);
lean_dec_ref_known(v_c_3104_, 2);
v_value_3124_ = lean_ctor_get(v_decl_3122_, 4);
lean_inc_ref(v_value_3124_);
lean_dec_ref(v_decl_3122_);
v___x_3125_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_value_3124_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_dec_ref_known(v___x_3125_, 1);
v_c_3104_ = v_k_3123_;
goto _start;
}
else
{
lean_dec_ref(v_k_3123_);
return v___x_3125_;
}
}
case 3:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; 
lean_dec_ref_known(v_c_3104_, 2);
v___x_3127_ = lean_box(0);
v___x_3128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
return v___x_3128_;
}
case 4:
{
lean_object* v_cases_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3151_; 
v_cases_3129_ = lean_ctor_get(v_c_3104_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v_c_3104_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3131_ = v_c_3104_;
v_isShared_3132_ = v_isSharedCheck_3151_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_cases_3129_);
lean_dec(v_c_3104_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3151_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v_alts_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; uint8_t v___x_3137_; 
v_alts_3133_ = lean_ctor_get(v_cases_3129_, 3);
lean_inc_ref(v_alts_3133_);
lean_dec_ref(v_cases_3129_);
v___x_3134_ = lean_unsigned_to_nat(0u);
v___x_3135_ = lean_array_get_size(v_alts_3133_);
v___x_3136_ = lean_box(0);
v___x_3137_ = lean_nat_dec_lt(v___x_3134_, v___x_3135_);
if (v___x_3137_ == 0)
{
lean_object* v___x_3139_; 
lean_dec_ref(v_alts_3133_);
if (v_isShared_3132_ == 0)
{
lean_ctor_set_tag(v___x_3131_, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3136_);
v___x_3139_ = v___x_3131_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v___x_3136_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
else
{
uint8_t v___x_3141_; 
v___x_3141_ = lean_nat_dec_le(v___x_3135_, v___x_3135_);
if (v___x_3141_ == 0)
{
if (v___x_3137_ == 0)
{
lean_object* v___x_3143_; 
lean_dec_ref(v_alts_3133_);
if (v_isShared_3132_ == 0)
{
lean_ctor_set_tag(v___x_3131_, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3136_);
v___x_3143_ = v___x_3131_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___x_3136_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
else
{
size_t v___x_3145_; size_t v___x_3146_; lean_object* v___x_3147_; 
lean_del_object(v___x_3131_);
v___x_3145_ = ((size_t)0ULL);
v___x_3146_ = lean_usize_of_nat(v___x_3135_);
v___x_3147_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_alts_3133_, v___x_3145_, v___x_3146_, v___x_3136_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_);
lean_dec_ref(v_alts_3133_);
return v___x_3147_;
}
}
else
{
size_t v___x_3148_; size_t v___x_3149_; lean_object* v___x_3150_; 
lean_del_object(v___x_3131_);
v___x_3148_ = ((size_t)0ULL);
v___x_3149_ = lean_usize_of_nat(v___x_3135_);
v___x_3150_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_alts_3133_, v___x_3148_, v___x_3149_, v___x_3136_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_);
lean_dec_ref(v_alts_3133_);
return v___x_3150_;
}
}
}
}
case 5:
{
lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3159_; 
v_isSharedCheck_3159_ = !lean_is_exclusive(v_c_3104_);
if (v_isSharedCheck_3159_ == 0)
{
lean_object* v_unused_3160_; 
v_unused_3160_ = lean_ctor_get(v_c_3104_, 0);
lean_dec(v_unused_3160_);
v___x_3153_ = v_c_3104_;
v_isShared_3154_ = v_isSharedCheck_3159_;
goto v_resetjp_3152_;
}
else
{
lean_dec(v_c_3104_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3159_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3155_; lean_object* v___x_3157_; 
v___x_3155_ = lean_box(0);
if (v_isShared_3154_ == 0)
{
lean_ctor_set_tag(v___x_3153_, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3155_);
v___x_3157_ = v___x_3153_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v___x_3155_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
case 6:
{
lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3168_; 
v_isSharedCheck_3168_ = !lean_is_exclusive(v_c_3104_);
if (v_isSharedCheck_3168_ == 0)
{
lean_object* v_unused_3169_; 
v_unused_3169_ = lean_ctor_get(v_c_3104_, 0);
lean_dec(v_unused_3169_);
v___x_3162_ = v_c_3104_;
v_isShared_3163_ = v_isSharedCheck_3168_;
goto v_resetjp_3161_;
}
else
{
lean_dec(v_c_3104_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3168_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
lean_object* v___x_3164_; lean_object* v___x_3166_; 
v___x_3164_ = lean_box(0);
if (v_isShared_3163_ == 0)
{
lean_ctor_set_tag(v___x_3162_, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3164_);
v___x_3166_ = v___x_3162_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v___x_3164_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
case 8:
{
lean_object* v_k_3170_; 
v_k_3170_ = lean_ctor_get(v_c_3104_, 3);
lean_inc_ref(v_k_3170_);
lean_dec_ref_known(v_c_3104_, 4);
v_c_3104_ = v_k_3170_;
goto _start;
}
case 9:
{
lean_object* v_k_3172_; 
v_k_3172_ = lean_ctor_get(v_c_3104_, 5);
lean_inc_ref(v_k_3172_);
lean_dec_ref_known(v_c_3104_, 6);
v_c_3104_ = v_k_3172_;
goto _start;
}
default: 
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
lean_dec_ref(v_c_3104_);
v___x_3174_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1);
v___x_3175_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v___x_3174_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_);
return v___x_3175_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(lean_object* v_as_3176_, size_t v_i_3177_, size_t v_stop_3178_, lean_object* v_b_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_){
_start:
{
lean_object* v___y_3187_; uint8_t v___x_3193_; 
v___x_3193_ = lean_usize_dec_eq(v_i_3177_, v_stop_3178_);
if (v___x_3193_ == 0)
{
lean_object* v___x_3194_; 
v___x_3194_ = lean_array_uget_borrowed(v_as_3176_, v_i_3177_);
switch(lean_obj_tag(v___x_3194_))
{
case 0:
{
lean_object* v_code_3195_; 
v_code_3195_ = lean_ctor_get(v___x_3194_, 2);
lean_inc_ref(v_code_3195_);
v___y_3187_ = v_code_3195_;
goto v___jp_3186_;
}
case 1:
{
lean_object* v_code_3196_; 
v_code_3196_ = lean_ctor_get(v___x_3194_, 1);
lean_inc_ref(v_code_3196_);
v___y_3187_ = v_code_3196_;
goto v___jp_3186_;
}
default: 
{
lean_object* v_code_3197_; 
v_code_3197_ = lean_ctor_get(v___x_3194_, 0);
lean_inc_ref(v_code_3197_);
v___y_3187_ = v_code_3197_;
goto v___jp_3186_;
}
}
}
else
{
lean_object* v___x_3198_; 
v___x_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3198_, 0, v_b_3179_);
return v___x_3198_;
}
v___jp_3186_:
{
lean_object* v___x_3188_; 
v___x_3188_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v___y_3187_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_, v___y_3184_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; size_t v___x_3190_; size_t v___x_3191_; 
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3189_);
lean_dec_ref_known(v___x_3188_, 1);
v___x_3190_ = ((size_t)1ULL);
v___x_3191_ = lean_usize_add(v_i_3177_, v___x_3190_);
v_i_3177_ = v___x_3191_;
v_b_3179_ = v_a_3189_;
goto _start;
}
else
{
return v___x_3188_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0___boxed(lean_object* v_as_3199_, lean_object* v_i_3200_, lean_object* v_stop_3201_, lean_object* v_b_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_){
_start:
{
size_t v_i_boxed_3209_; size_t v_stop_boxed_3210_; lean_object* v_res_3211_; 
v_i_boxed_3209_ = lean_unbox_usize(v_i_3200_);
lean_dec(v_i_3200_);
v_stop_boxed_3210_ = lean_unbox_usize(v_stop_3201_);
lean_dec(v_stop_3201_);
v_res_3211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_as_3199_, v_i_boxed_3209_, v_stop_boxed_3210_, v_b_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_);
lean_dec(v___y_3207_);
lean_dec_ref(v___y_3206_);
lean_dec(v___y_3205_);
lean_dec_ref(v___y_3204_);
lean_dec(v___y_3203_);
lean_dec_ref(v_as_3199_);
return v_res_3211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___boxed(lean_object* v_c_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_c_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
return v_res_3219_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3220_; 
v___x_3220_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3220_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0);
v___x_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
return v___x_3222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg(){
_start:
{
lean_object* v___x_3224_; 
v___x_3224_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___boxed(lean_object* v___dummy_3225_){
_start:
{
lean_object* v_res_3226_; 
v_res_3226_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
return v_res_3226_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3227_; 
v___x_3227_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_object* v_00_u03b2_3228_){
_start:
{
lean_object* v___x_3229_; 
v___x_3229_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
return v___x_3229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(lean_object* v_f_3230_, lean_object* v_v_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_){
_start:
{
if (lean_obj_tag(v_v_3231_) == 0)
{
lean_object* v_code_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3262_; 
v_code_3238_ = lean_ctor_get(v_v_3231_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v_v_3231_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3240_ = v_v_3231_;
v_isShared_3241_ = v_isSharedCheck_3262_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_code_3238_);
lean_dec(v_v_3231_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3262_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3242_; 
lean_inc(v___y_3236_);
lean_inc_ref(v___y_3235_);
lean_inc(v___y_3234_);
lean_inc_ref(v___y_3233_);
lean_inc_ref(v___y_3232_);
v___x_3242_ = lean_apply_7(v_f_3230_, v_code_3238_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_, lean_box(0));
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3253_; 
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3245_ = v___x_3242_;
v_isShared_3246_ = v_isSharedCheck_3253_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3242_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3253_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3248_; 
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 0, v_a_3243_);
v___x_3248_ = v___x_3240_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v_a_3243_);
v___x_3248_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
lean_object* v___x_3250_; 
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v___x_3248_);
v___x_3250_ = v___x_3245_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3248_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
lean_del_object(v___x_3240_);
v_a_3254_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3242_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3242_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
}
else
{
lean_object* v___x_3263_; 
lean_dec_ref(v_f_3230_);
v___x_3263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3263_, 0, v_v_3231_);
return v___x_3263_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg___boxed(lean_object* v_f_3264_, lean_object* v_v_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_){
_start:
{
lean_object* v_res_3272_; 
v_res_3272_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_3264_, v_v_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_);
lean_dec(v___y_3270_);
lean_dec_ref(v___y_3269_);
lean_dec(v___y_3268_);
lean_dec_ref(v___y_3267_);
lean_dec_ref(v___y_3266_);
return v_res_3272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(uint8_t v_pu_3273_, lean_object* v_f_3274_, lean_object* v_v_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
lean_object* v___x_3282_; 
v___x_3282_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_3274_, v_v_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_);
return v___x_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___boxed(lean_object* v_pu_3283_, lean_object* v_f_3284_, lean_object* v_v_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_){
_start:
{
uint8_t v_pu_boxed_3292_; lean_object* v_res_3293_; 
v_pu_boxed_3292_ = lean_unbox(v_pu_3283_);
v_res_3293_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(v_pu_boxed_3292_, v_f_3284_, v_v_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_);
lean_dec(v___y_3290_);
lean_dec_ref(v___y_3289_);
lean_dec(v___y_3288_);
lean_dec_ref(v___y_3287_);
lean_dec_ref(v___y_3286_);
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(lean_object* v_code_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_){
_start:
{
lean_object* v_alreadyFound_3302_; uint8_t v_relaxedReuse_3303_; lean_object* v_ownedness_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; uint8_t v_relaxedReuse_3311_; 
v_relaxedReuse_3311_ = lean_ctor_get_uint8(v___y_3295_, sizeof(void*)*2);
if (v_relaxedReuse_3311_ == 0)
{
lean_object* v_ownedness_3312_; lean_object* v___x_3313_; 
v_ownedness_3312_ = lean_ctor_get(v___y_3295_, 1);
v___x_3313_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v_alreadyFound_3302_ = v___x_3313_;
v_relaxedReuse_3303_ = v_relaxedReuse_3311_;
v_ownedness_3304_ = v_ownedness_3312_;
v___y_3305_ = v___y_3296_;
v___y_3306_ = v___y_3297_;
v___y_3307_ = v___y_3298_;
v___y_3308_ = v___y_3299_;
goto v___jp_3301_;
}
else
{
lean_object* v_ownedness_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
v_ownedness_3314_ = lean_ctor_get(v___y_3295_, 1);
v___x_3315_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v___x_3316_ = lean_st_mk_ref(v___x_3315_);
lean_inc_ref(v_code_3294_);
v___x_3317_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_code_3294_, v___x_3316_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v___x_3318_; 
lean_dec_ref_known(v___x_3317_, 1);
v___x_3318_ = lean_st_ref_get(v___x_3316_);
lean_dec(v___x_3316_);
v_alreadyFound_3302_ = v___x_3318_;
v_relaxedReuse_3303_ = v_relaxedReuse_3311_;
v_ownedness_3304_ = v_ownedness_3314_;
v___y_3305_ = v___y_3296_;
v___y_3306_ = v___y_3297_;
v___y_3307_ = v___y_3298_;
v___y_3308_ = v___y_3299_;
goto v___jp_3301_;
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3326_; 
lean_dec(v___x_3316_);
lean_dec_ref(v_code_3294_);
v_a_3319_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3321_ = v___x_3317_;
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_a_3319_);
lean_dec(v___x_3317_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
if (v_isShared_3322_ == 0)
{
v___x_3324_ = v___x_3321_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3319_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
v___jp_3301_:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
lean_inc_ref(v_ownedness_3304_);
v___x_3309_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3309_, 0, v_alreadyFound_3302_);
lean_ctor_set(v___x_3309_, 1, v_ownedness_3304_);
lean_ctor_set_uint8(v___x_3309_, sizeof(void*)*2, v_relaxedReuse_3303_);
v___x_3310_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_code_3294_, v___x_3309_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
lean_dec_ref_known(v___x_3309_, 2);
return v___x_3310_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed(lean_object* v_code_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_){
_start:
{
lean_object* v_res_3334_; 
v_res_3334_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(v_code_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_);
lean_dec(v___y_3332_);
lean_dec_ref(v___y_3331_);
lean_dec(v___y_3330_);
lean_dec_ref(v___y_3329_);
lean_dec_ref(v___y_3328_);
return v_res_3334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(lean_object* v_decl_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_){
_start:
{
lean_object* v_toSignature_3343_; lean_object* v_value_3344_; uint8_t v_recursive_3345_; lean_object* v_inlineAttr_x3f_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3371_; 
v_toSignature_3343_ = lean_ctor_get(v_decl_3336_, 0);
v_value_3344_ = lean_ctor_get(v_decl_3336_, 1);
v_recursive_3345_ = lean_ctor_get_uint8(v_decl_3336_, sizeof(void*)*3);
v_inlineAttr_x3f_3346_ = lean_ctor_get(v_decl_3336_, 2);
v_isSharedCheck_3371_ = !lean_is_exclusive(v_decl_3336_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3348_ = v_decl_3336_;
v_isShared_3349_ = v_isSharedCheck_3371_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_inlineAttr_x3f_3346_);
lean_inc(v_value_3344_);
lean_inc(v_toSignature_3343_);
lean_dec(v_decl_3336_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3371_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___f_3350_; lean_object* v___x_3351_; 
v___f_3350_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0));
v___x_3351_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v___f_3350_, v_value_3344_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3362_; 
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3362_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3362_ == 0)
{
v___x_3354_ = v___x_3351_;
v_isShared_3355_ = v_isSharedCheck_3362_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3351_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3362_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3349_ == 0)
{
lean_ctor_set(v___x_3348_, 1, v_a_3352_);
v___x_3357_ = v___x_3348_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_toSignature_3343_);
lean_ctor_set(v_reuseFailAlloc_3361_, 1, v_a_3352_);
lean_ctor_set(v_reuseFailAlloc_3361_, 2, v_inlineAttr_x3f_3346_);
lean_ctor_set_uint8(v_reuseFailAlloc_3361_, sizeof(void*)*3, v_recursive_3345_);
v___x_3357_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
lean_object* v___x_3359_; 
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 0, v___x_3357_);
v___x_3359_ = v___x_3354_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v___x_3357_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
}
else
{
lean_object* v_a_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3370_; 
lean_del_object(v___x_3348_);
lean_dec(v_inlineAttr_x3f_3346_);
lean_dec_ref(v_toSignature_3343_);
v_a_3363_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3370_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3370_ == 0)
{
v___x_3365_ = v___x_3351_;
v_isShared_3366_ = v_isSharedCheck_3370_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_a_3363_);
lean_dec(v___x_3351_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3370_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
lean_object* v___x_3368_; 
if (v_isShared_3366_ == 0)
{
v___x_3368_ = v___x_3365_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_a_3363_);
v___x_3368_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
return v___x_3368_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___boxed(lean_object* v_decl_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_){
_start:
{
lean_object* v_res_3379_; 
v_res_3379_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_decl_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
lean_dec(v___y_3375_);
lean_dec_ref(v___y_3374_);
lean_dec_ref(v___y_3373_);
return v_res_3379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(lean_object* v_decl_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
lean_object* v___x_3386_; 
v___x_3386_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_3381_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3414_; 
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3389_ = v___x_3386_;
v_isShared_3390_ = v_isSharedCheck_3414_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3386_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3414_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
uint8_t v_resetReuse_3391_; 
v_resetReuse_3391_ = lean_ctor_get_uint8(v_a_3387_, sizeof(void*)*4 + 2);
lean_dec(v_a_3387_);
if (v_resetReuse_3391_ == 0)
{
lean_object* v___x_3393_; 
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 0, v_decl_3380_);
v___x_3393_ = v___x_3389_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_decl_3380_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
else
{
lean_object* v___x_3395_; 
lean_del_object(v___x_3389_);
lean_inc_ref(v_decl_3380_);
v___x_3395_ = l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(v_decl_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_object* v_a_3396_; lean_object* v___x_3397_; 
v_a_3396_ = lean_ctor_get(v___x_3395_, 0);
lean_inc_n(v_a_3396_, 2);
lean_dec_ref_known(v___x_3395_, 1);
v___x_3397_ = l_Lean_Compiler_LCNF_Decl_applyOwnedness(v_decl_3380_, v_a_3396_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; lean_object* v___x_3399_; uint8_t v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
v___x_3399_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v___x_3400_ = 0;
lean_inc(v_a_3396_);
v___x_3401_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3401_, 0, v___x_3399_);
lean_ctor_set(v___x_3401_, 1, v_a_3396_);
lean_ctor_set_uint8(v___x_3401_, sizeof(void*)*2, v___x_3400_);
v___x_3402_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_3398_, v___x_3401_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_);
lean_dec_ref_known(v___x_3401_, 2);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_object* v_a_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v_a_3403_ = lean_ctor_get(v___x_3402_, 0);
lean_inc(v_a_3403_);
lean_dec_ref_known(v___x_3402_, 1);
v___x_3404_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3404_, 0, v___x_3399_);
lean_ctor_set(v___x_3404_, 1, v_a_3396_);
lean_ctor_set_uint8(v___x_3404_, sizeof(void*)*2, v_resetReuse_3391_);
v___x_3405_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_3403_, v___x_3404_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_);
lean_dec_ref_known(v___x_3404_, 2);
return v___x_3405_;
}
else
{
lean_dec(v_a_3396_);
return v___x_3402_;
}
}
else
{
lean_dec(v_a_3396_);
return v___x_3397_;
}
}
else
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
lean_dec_ref(v_decl_3380_);
v_a_3406_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3408_ = v___x_3395_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3395_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
}
}
else
{
lean_object* v_a_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3422_; 
lean_dec_ref(v_decl_3380_);
v_a_3415_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3417_ = v___x_3386_;
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_a_3415_);
lean_dec(v___x_3386_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3420_; 
if (v_isShared_3418_ == 0)
{
v___x_3420_ = v___x_3417_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3415_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed(lean_object* v_decl_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(v_decl_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_);
lean_dec(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
return v_res_3429_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3(void){
_start:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; uint8_t v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; 
v___x_3434_ = lean_unsigned_to_nat(0u);
v___x_3435_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__2));
v___x_3436_ = 2;
v___x_3437_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__1));
v___x_3438_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_3437_, v___x_3436_, v___x_3435_, v___x_3434_);
return v___x_3438_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse(void){
_start:
{
lean_object* v___x_3439_; 
v___x_3439_ = lean_obj_once(&l_Lean_Compiler_LCNF_insertResetReuse___closed__3, &l_Lean_Compiler_LCNF_insertResetReuse___closed__3_once, _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3);
return v___x_3439_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v___x_3495_ = lean_unsigned_to_nat(2506150707u);
v___x_3496_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3497_ = l_Lean_Name_num___override(v___x_3496_, v___x_3495_);
return v___x_3497_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3499_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3500_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3501_ = l_Lean_Name_str___override(v___x_3500_, v___x_3499_);
return v___x_3501_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3503_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3504_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3505_ = l_Lean_Name_str___override(v___x_3504_, v___x_3503_);
return v___x_3505_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3506_ = lean_unsigned_to_nat(2u);
v___x_3507_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3508_ = l_Lean_Name_num___override(v___x_3507_, v___x_3506_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3510_; uint8_t v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3510_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3511_ = 1;
v___x_3512_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3513_ = l_Lean_registerTraceClass(v___x_3510_, v___x_3511_, v___x_3512_);
return v___x_3513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2____boxed(lean_object* v___y_3514_){
_start:
{
lean_object* v_res_3515_; 
v_res_3515_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
return v_res_3515_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
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
res = runtime_initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_insertResetReuse = _init_l_Lean_Compiler_LCNF_insertResetReuse();
lean_mark_persistent(l_Lean_Compiler_LCNF_insertResetReuse);
res = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
}
#ifdef __cplusplus
}
#endif
