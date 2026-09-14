// Lean compiler output
// Module: Lean.Compiler.LCNF.PullLetDecls
// Imports: public import Lean.Compiler.LCNF.DependsOn public import Lean.Compiler.LCNF.PassManager
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_isClass_x3f___redArg(lean_object*, lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(uint8_t, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9_value;
static const lean_closure_object l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_shouldPull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_shouldPull___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_pullLetDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullLetDecls___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_pullInstances___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_pullInstances___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_pullInstances___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "pullInstances"};
static const lean_object* l_Lean_Compiler_LCNF_pullInstances___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_pullInstances___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 64, 178, 67, 149, 31, 237, 171)}};
static const lean_object* l_Lean_Compiler_LCNF_pullInstances___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_pullInstances___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_pullInstances___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_pullInstances___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_pullInstances___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_pullInstances___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_pullInstances;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_pullInstances___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 201, 254, 145, 100, 42, 166, 160)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PullLetDecls"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(27, 241, 159, 200, 135, 109, 225, 185)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(166, 136, 187, 86, 18, 25, 137, 250)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 251, 46, 178, 152, 200, 229, 229)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(33, 158, 200, 255, 227, 47, 35, 179)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(132, 194, 125, 228, 235, 98, 41, 196)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 133, 224, 244, 214, 86, 90, 84)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(108, 69, 254, 167, 12, 16, 110, 124)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(109, 16, 148, 33, 118, 65, 200, 4)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 149, 17, 125, 174, 166, 104, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(182, 72, 13, 30, 160, 214, 147, 68)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 189, 197, 199, 72, 35, 203, 245)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg(lean_object* v_fvarId_1_, lean_object* v_x_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v_isCandidateFn_10_; lean_object* v_included_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_isCandidateFn_10_ = lean_ctor_get(v___y_3_, 0);
v_included_11_ = lean_ctor_get(v___y_3_, 1);
lean_inc(v_included_11_);
v___x_12_ = l_Lean_FVarIdSet_insert(v_included_11_, v_fvarId_1_);
lean_inc_ref(v_isCandidateFn_10_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v_isCandidateFn_10_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
v___x_14_ = lean_apply_7(v_x_2_, v___x_13_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg___boxed(lean_object* v_fvarId_15_, lean_object* v_x_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Compiler_LCNF_PullLetDecls_withFVar___redArg(v_fvarId_15_, v_x_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar(lean_object* v_00_u03b1_25_, lean_object* v_fvarId_26_, lean_object* v_x_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v_isCandidateFn_35_; lean_object* v_included_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_isCandidateFn_35_ = lean_ctor_get(v___y_28_, 0);
v_included_36_ = lean_ctor_get(v___y_28_, 1);
lean_inc(v_included_36_);
v___x_37_ = l_Lean_FVarIdSet_insert(v_included_36_, v_fvarId_26_);
lean_inc_ref(v_isCandidateFn_35_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_isCandidateFn_35_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
lean_inc(v___y_33_);
lean_inc_ref(v___y_32_);
lean_inc(v___y_31_);
lean_inc_ref(v___y_30_);
lean_inc(v___y_29_);
v___x_39_ = lean_apply_7(v_x_27_, v___x_38_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, lean_box(0));
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withFVar___boxed(lean_object* v_00_u03b1_40_, lean_object* v_fvarId_41_, lean_object* v_x_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Compiler_LCNF_PullLetDecls_withFVar(v_00_u03b1_40_, v_fvarId_41_, v_x_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
lean_dec(v___y_44_);
lean_dec_ref(v___y_43_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___lam__0(lean_object* v_x1_51_, lean_object* v_x2_52_){
_start:
{
lean_object* v_fvarId_53_; lean_object* v___x_54_; 
v_fvarId_53_ = lean_ctor_get(v_x2_52_, 0);
lean_inc(v_fvarId_53_);
lean_dec_ref(v_x2_52_);
v___x_54_ = l_Lean_FVarIdSet_insert(v_x1_51_, v_fvarId_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg(lean_object* v_ps_75_, lean_object* v_x_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v_isCandidateFn_84_; lean_object* v_included_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v_isCandidateFn_84_ = lean_ctor_get(v___y_77_, 0);
v_included_85_ = lean_ctor_get(v___y_77_, 1);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_array_get_size(v_ps_75_);
v___x_88_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9));
v___x_89_ = lean_nat_dec_lt(v___x_86_, v___x_87_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec_ref(v_ps_75_);
lean_inc(v_included_85_);
lean_inc_ref(v_isCandidateFn_84_);
v___x_90_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_90_, 0, v_isCandidateFn_84_);
lean_ctor_set(v___x_90_, 1, v_included_85_);
lean_inc(v___y_82_);
lean_inc_ref(v___y_81_);
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
lean_inc(v___y_78_);
v___x_91_ = lean_apply_7(v_x_76_, v___x_90_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, lean_box(0));
return v___x_91_;
}
else
{
lean_object* v___f_92_; uint8_t v___x_93_; 
v___f_92_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10));
v___x_93_ = lean_nat_dec_le(v___x_87_, v___x_87_);
if (v___x_93_ == 0)
{
if (v___x_89_ == 0)
{
lean_object* v___x_94_; lean_object* v___x_95_; 
lean_dec_ref(v_ps_75_);
lean_inc(v_included_85_);
lean_inc_ref(v_isCandidateFn_84_);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v_isCandidateFn_84_);
lean_ctor_set(v___x_94_, 1, v_included_85_);
lean_inc(v___y_82_);
lean_inc_ref(v___y_81_);
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
lean_inc(v___y_78_);
v___x_95_ = lean_apply_7(v_x_76_, v___x_94_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, lean_box(0));
return v___x_95_;
}
else
{
size_t v___x_96_; size_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_96_ = ((size_t)0ULL);
v___x_97_ = lean_usize_of_nat(v___x_87_);
lean_inc(v_included_85_);
v___x_98_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_88_, v___f_92_, v_ps_75_, v___x_96_, v___x_97_, v_included_85_);
lean_inc_ref(v_isCandidateFn_84_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v_isCandidateFn_84_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
lean_inc(v___y_82_);
lean_inc_ref(v___y_81_);
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
lean_inc(v___y_78_);
v___x_100_ = lean_apply_7(v_x_76_, v___x_99_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, lean_box(0));
return v___x_100_;
}
}
else
{
size_t v___x_101_; size_t v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_101_ = ((size_t)0ULL);
v___x_102_ = lean_usize_of_nat(v___x_87_);
lean_inc(v_included_85_);
v___x_103_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_88_, v___f_92_, v_ps_75_, v___x_101_, v___x_102_, v_included_85_);
lean_inc_ref(v_isCandidateFn_84_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v_isCandidateFn_84_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
lean_inc(v___y_82_);
lean_inc_ref(v___y_81_);
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
lean_inc(v___y_78_);
v___x_105_ = lean_apply_7(v_x_76_, v___x_104_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, lean_box(0));
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___boxed(lean_object* v_ps_106_, lean_object* v_x_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg(v_ps_106_, v_x_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams(lean_object* v_00_u03b1_116_, lean_object* v_ps_117_, lean_object* v_x_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_isCandidateFn_126_; lean_object* v_included_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v_isCandidateFn_126_ = lean_ctor_get(v___y_119_, 0);
v_included_127_ = lean_ctor_get(v___y_119_, 1);
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = lean_array_get_size(v_ps_117_);
v___x_130_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__9));
v___x_131_ = lean_nat_dec_lt(v___x_128_, v___x_129_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; 
lean_dec_ref(v_ps_117_);
lean_inc(v_included_127_);
lean_inc_ref(v_isCandidateFn_126_);
v___x_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_132_, 0, v_isCandidateFn_126_);
lean_ctor_set(v___x_132_, 1, v_included_127_);
lean_inc(v___y_124_);
lean_inc_ref(v___y_123_);
lean_inc(v___y_122_);
lean_inc_ref(v___y_121_);
lean_inc(v___y_120_);
v___x_133_ = lean_apply_7(v_x_118_, v___x_132_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, lean_box(0));
return v___x_133_;
}
else
{
lean_object* v___f_134_; uint8_t v___x_135_; 
v___f_134_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withParams___redArg___closed__10));
v___x_135_ = lean_nat_dec_le(v___x_129_, v___x_129_);
if (v___x_135_ == 0)
{
if (v___x_131_ == 0)
{
lean_object* v___x_136_; lean_object* v___x_137_; 
lean_dec_ref(v_ps_117_);
lean_inc(v_included_127_);
lean_inc_ref(v_isCandidateFn_126_);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v_isCandidateFn_126_);
lean_ctor_set(v___x_136_, 1, v_included_127_);
lean_inc(v___y_124_);
lean_inc_ref(v___y_123_);
lean_inc(v___y_122_);
lean_inc_ref(v___y_121_);
lean_inc(v___y_120_);
v___x_137_ = lean_apply_7(v_x_118_, v___x_136_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, lean_box(0));
return v___x_137_;
}
else
{
size_t v___x_138_; size_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_138_ = ((size_t)0ULL);
v___x_139_ = lean_usize_of_nat(v___x_129_);
lean_inc(v_included_127_);
v___x_140_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_130_, v___f_134_, v_ps_117_, v___x_138_, v___x_139_, v_included_127_);
lean_inc_ref(v_isCandidateFn_126_);
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v_isCandidateFn_126_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
lean_inc(v___y_124_);
lean_inc_ref(v___y_123_);
lean_inc(v___y_122_);
lean_inc_ref(v___y_121_);
lean_inc(v___y_120_);
v___x_142_ = lean_apply_7(v_x_118_, v___x_141_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, lean_box(0));
return v___x_142_;
}
}
else
{
size_t v___x_143_; size_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_143_ = ((size_t)0ULL);
v___x_144_ = lean_usize_of_nat(v___x_129_);
lean_inc(v_included_127_);
v___x_145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_130_, v___f_134_, v_ps_117_, v___x_143_, v___x_144_, v_included_127_);
lean_inc_ref(v_isCandidateFn_126_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v_isCandidateFn_126_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
lean_inc(v___y_124_);
lean_inc_ref(v___y_123_);
lean_inc(v___y_122_);
lean_inc_ref(v___y_121_);
lean_inc(v___y_120_);
v___x_147_ = lean_apply_7(v_x_118_, v___x_146_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, lean_box(0));
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withParams___boxed(lean_object* v_00_u03b1_148_, lean_object* v_ps_149_, lean_object* v_x_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_Compiler_LCNF_PullLetDecls_withParams(v_00_u03b1_148_, v_ps_149_, v_x_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg(lean_object* v_x_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_isCandidateFn_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_isCandidateFn_167_ = lean_ctor_get(v___y_160_, 0);
v___x_168_ = lean_box(1);
lean_inc_ref(v_isCandidateFn_167_);
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v_isCandidateFn_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
lean_inc(v___y_165_);
lean_inc_ref(v___y_164_);
lean_inc(v___y_163_);
lean_inc_ref(v___y_162_);
lean_inc(v___y_161_);
v___x_170_ = lean_apply_7(v_x_159_, v___x_169_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, lean_box(0));
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg___boxed(lean_object* v_x_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___redArg(v_x_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope(lean_object* v_00_u03b1_180_, lean_object* v_x_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_isCandidateFn_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v_isCandidateFn_189_ = lean_ctor_get(v___y_182_, 0);
v___x_190_ = lean_box(1);
lean_inc_ref(v_isCandidateFn_189_);
v___x_191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_191_, 0, v_isCandidateFn_189_);
lean_ctor_set(v___x_191_, 1, v___x_190_);
lean_inc(v___y_187_);
lean_inc_ref(v___y_186_);
lean_inc(v___y_185_);
lean_inc_ref(v___y_184_);
lean_inc(v___y_183_);
v___x_192_ = lean_apply_7(v_x_181_, v___x_191_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, lean_box(0));
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withNewScope___boxed(lean_object* v_00_u03b1_193_, lean_object* v_x_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_Compiler_LCNF_PullLetDecls_withNewScope(v_00_u03b1_193_, v_x_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec(v___y_196_);
lean_dec_ref(v___y_195_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(lean_object* v_c_203_, lean_object* v_toPull_204_, lean_object* v_i_205_, lean_object* v_included_206_, lean_object* v___y_207_){
_start:
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = lean_array_get_size(v_toPull_204_);
v___x_209_ = lean_nat_dec_lt(v_i_205_, v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
lean_dec(v_included_206_);
lean_dec(v_i_205_);
v___x_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_210_, 0, v_c_203_);
lean_ctor_set(v___x_210_, 1, v___y_207_);
return v___x_210_;
}
else
{
lean_object* v_letDecl_211_; uint8_t v___x_212_; uint8_t v___x_213_; 
v_letDecl_211_ = lean_array_fget_borrowed(v_toPull_204_, v_i_205_);
v___x_212_ = 0;
v___x_213_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v___x_212_, v_letDecl_211_, v_included_206_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
lean_inc(v_letDecl_211_);
v___x_214_ = lean_array_push(v___y_207_, v_letDecl_211_);
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_nat_add(v_i_205_, v___x_215_);
lean_dec(v_i_205_);
v_i_205_ = v___x_216_;
v___y_207_ = v___x_214_;
goto _start;
}
else
{
lean_object* v_fvarId_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v_fst_223_; lean_object* v_snd_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_232_; 
v_fvarId_218_ = lean_ctor_get(v_letDecl_211_, 0);
v___x_219_ = lean_unsigned_to_nat(1u);
v___x_220_ = lean_nat_add(v_i_205_, v___x_219_);
lean_dec(v_i_205_);
lean_inc(v_fvarId_218_);
v___x_221_ = l_Lean_FVarIdSet_insert(v_included_206_, v_fvarId_218_);
v___x_222_ = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(v_c_203_, v_toPull_204_, v___x_220_, v___x_221_, v___y_207_);
v_fst_223_ = lean_ctor_get(v___x_222_, 0);
v_snd_224_ = lean_ctor_get(v___x_222_, 1);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_232_ == 0)
{
v___x_226_ = v___x_222_;
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_snd_224_);
lean_inc(v_fst_223_);
lean_dec(v___x_222_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v___x_230_; 
lean_inc(v_letDecl_211_);
v___x_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_228_, 0, v_letDecl_211_);
lean_ctor_set(v___x_228_, 1, v_fst_223_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_228_);
v___x_230_ = v___x_226_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v_snd_224_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go___boxed(lean_object* v_c_233_, lean_object* v_toPull_234_, lean_object* v_i_235_, lean_object* v_included_236_, lean_object* v___y_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(v_c_233_, v_toPull_234_, v_i_235_, v_included_236_, v___y_237_);
lean_dec_ref(v_toPull_234_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(lean_object* v_x_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
lean_object* v___x_249_; lean_object* v_isCandidateFn_250_; lean_object* v_included_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_249_ = lean_st_ref_get(v___y_243_);
v_isCandidateFn_250_ = lean_ctor_get(v___y_242_, 0);
v_included_251_ = lean_ctor_get(v___y_242_, 1);
v___x_252_ = lean_array_get_size(v___x_249_);
lean_dec(v___x_249_);
v___x_253_ = lean_box(1);
lean_inc_ref(v_isCandidateFn_250_);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v_isCandidateFn_250_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
lean_inc(v___y_247_);
lean_inc_ref(v___y_246_);
lean_inc(v___y_245_);
lean_inc_ref(v___y_244_);
lean_inc(v___y_243_);
v___x_255_ = lean_apply_7(v_x_241_, v___x_254_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, lean_box(0));
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_272_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_272_ == 0)
{
v___x_258_ = v___x_255_;
v_isShared_259_ = v_isSharedCheck_272_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_272_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v_fst_263_; lean_object* v_snd_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_270_; 
v___x_260_ = lean_st_ref_get(v___y_243_);
v___x_261_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0));
lean_inc(v_included_251_);
v___x_262_ = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_PullLetDecls_withCheckpoint_go(v_a_256_, v___x_260_, v___x_252_, v_included_251_, v___x_261_);
lean_dec(v___x_260_);
v_fst_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_fst_263_);
v_snd_264_ = lean_ctor_get(v___x_262_, 1);
lean_inc(v_snd_264_);
lean_dec_ref(v___x_262_);
v___x_265_ = lean_st_ref_take(v___y_243_);
v___x_266_ = l_Array_shrink___redArg(v___x_265_, v___x_252_);
v___x_267_ = l_Array_append___redArg(v___x_266_, v_snd_264_);
lean_dec(v_snd_264_);
v___x_268_ = lean_st_ref_put(v___y_243_, v___x_267_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 0, v_fst_263_);
v___x_270_ = v___x_258_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_fst_263_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
else
{
return v___x_255_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___boxed(lean_object* v_x_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(v_x_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0(lean_object* v_as_282_, size_t v_i_283_, size_t v_stop_284_, lean_object* v_b_285_){
_start:
{
uint8_t v___x_286_; 
v___x_286_ = lean_usize_dec_eq(v_i_283_, v_stop_284_);
if (v___x_286_ == 0)
{
size_t v___x_287_; size_t v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_287_ = ((size_t)1ULL);
v___x_288_ = lean_usize_sub(v_i_283_, v___x_287_);
v___x_289_ = lean_array_uget_borrowed(v_as_282_, v___x_288_);
lean_inc(v___x_289_);
v___x_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v_b_285_);
v_i_283_ = v___x_288_;
v_b_285_ = v___x_290_;
goto _start;
}
else
{
return v_b_285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0___boxed(lean_object* v_as_292_, lean_object* v_i_293_, lean_object* v_stop_294_, lean_object* v_b_295_){
_start:
{
size_t v_i_boxed_296_; size_t v_stop_boxed_297_; lean_object* v_res_298_; 
v_i_boxed_296_ = lean_unbox_usize(v_i_293_);
lean_dec(v_i_293_);
v_stop_boxed_297_ = lean_unbox_usize(v_stop_294_);
lean_dec(v_stop_294_);
v_res_298_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0(v_as_292_, v_i_boxed_296_, v_stop_boxed_297_, v_b_295_);
lean_dec_ref(v_as_292_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg(lean_object* v_c_299_, lean_object* v___y_300_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_302_ = lean_st_ref_get(v___y_300_);
v___x_303_ = lean_array_get_size(v___x_302_);
v___x_304_ = lean_unsigned_to_nat(0u);
v___x_305_ = lean_nat_dec_lt(v___x_304_, v___x_303_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; 
lean_dec(v___x_302_);
v___x_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_306_, 0, v_c_299_);
return v___x_306_;
}
else
{
size_t v___x_307_; size_t v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_307_ = lean_usize_of_nat(v___x_303_);
v___x_308_ = ((size_t)0ULL);
v___x_309_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_attachToPull_spec__0(v___x_302_, v___x_307_, v___x_308_, v_c_299_);
lean_dec(v___x_302_);
v___x_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg___boxed(lean_object* v_c_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg(v_c_311_, v___y_312_);
lean_dec(v___y_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull(lean_object* v_c_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___redArg(v_c_315_, v___y_317_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_attachToPull___boxed(lean_object* v_c_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lean_Compiler_LCNF_PullLetDecls_attachToPull(v_c_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
lean_dec(v___y_330_);
lean_dec_ref(v___y_329_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_shouldPull(lean_object* v_decl_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_isCandidateFn_345_; lean_object* v_included_346_; uint8_t v___x_347_; uint8_t v___x_348_; 
v_isCandidateFn_345_ = lean_ctor_get(v___y_334_, 0);
v_included_346_ = lean_ctor_get(v___y_334_, 1);
v___x_347_ = 0;
v___x_348_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v___x_347_, v_decl_333_, v_included_346_);
if (v___x_348_ == 0)
{
uint8_t v___x_349_; lean_object* v___x_350_; 
v___x_349_ = 1;
lean_inc_ref(v_isCandidateFn_345_);
lean_inc(v___y_339_);
lean_inc_ref(v___y_338_);
lean_inc(v___y_337_);
lean_inc_ref(v___y_336_);
lean_inc(v_included_346_);
lean_inc_ref(v_decl_333_);
v___x_350_ = lean_apply_7(v_isCandidateFn_345_, v_decl_333_, v_included_346_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, lean_box(0));
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_363_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_363_ == 0)
{
v___x_353_ = v___x_350_;
v_isShared_354_ = v_isSharedCheck_363_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_363_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
uint8_t v___x_355_; 
v___x_355_ = lean_unbox(v_a_351_);
lean_dec(v_a_351_);
if (v___x_355_ == 0)
{
lean_del_object(v___x_353_);
lean_dec_ref(v_decl_333_);
goto v___jp_341_;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_356_ = lean_st_ref_take(v___y_335_);
v___x_357_ = lean_array_push(v___x_356_, v_decl_333_);
v___x_358_ = lean_st_ref_put(v___y_335_, v___x_357_);
v___x_359_ = lean_box(v___x_349_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 0, v___x_359_);
v___x_361_ = v___x_353_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_dec_ref(v_decl_333_);
return v___x_350_;
}
}
else
{
lean_dec_ref(v_decl_333_);
goto v___jp_341_;
}
v___jp_341_:
{
uint8_t v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = 0;
v___x_343_ = lean_box(v___x_342_);
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v___x_343_);
return v___x_344_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_shouldPull___boxed(lean_object* v_decl_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_Compiler_LCNF_PullLetDecls_shouldPull(v_decl_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(lean_object* v_as_373_, size_t v_i_374_, size_t v_stop_375_, lean_object* v_b_376_){
_start:
{
uint8_t v___x_377_; 
v___x_377_ = lean_usize_dec_eq(v_i_374_, v_stop_375_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; lean_object* v_fvarId_379_; lean_object* v___x_380_; size_t v___x_381_; size_t v___x_382_; 
v___x_378_ = lean_array_uget_borrowed(v_as_373_, v_i_374_);
v_fvarId_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_fvarId_379_);
v___x_380_ = l_Lean_FVarIdSet_insert(v_b_376_, v_fvarId_379_);
v___x_381_ = ((size_t)1ULL);
v___x_382_ = lean_usize_add(v_i_374_, v___x_381_);
v_i_374_ = v___x_382_;
v_b_376_ = v___x_380_;
goto _start;
}
else
{
return v_b_376_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0___boxed(lean_object* v_as_384_, lean_object* v_i_385_, lean_object* v_stop_386_, lean_object* v_b_387_){
_start:
{
size_t v_i_boxed_388_; size_t v_stop_boxed_389_; lean_object* v_res_390_; 
v_i_boxed_388_ = lean_unbox_usize(v_i_385_);
lean_dec(v_i_385_);
v_stop_boxed_389_ = lean_unbox_usize(v_stop_386_);
lean_dec(v_stop_386_);
v_res_390_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(v_as_384_, v_i_boxed_388_, v_stop_boxed_389_, v_b_387_);
lean_dec_ref(v_as_384_);
return v_res_390_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0(void){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2(lean_object* v_msg_392_){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0, &l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2___closed__0);
v___x_394_ = lean_panic_fn_borrowed(v___x_393_, v_msg_392_);
return v___x_394_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_398_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__2));
v___x_399_ = lean_unsigned_to_nat(9u);
v___x_400_ = lean_unsigned_to_nat(650u);
v___x_401_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__1));
v___x_402_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__0));
v___x_403_ = l_mkPanicMessageWithDecl(v___x_402_, v___x_401_, v___x_400_, v___x_399_, v___x_398_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0(uint8_t v___x_404_, lean_object* v_decl_405_, lean_object* v_type_406_, lean_object* v_params_407_, lean_object* v_k_408_, lean_object* v_code_409_, lean_object* v_value_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v_isCandidateFn_418_; lean_object* v_included_419_; lean_object* v___y_421_; lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v_isCandidateFn_418_ = lean_ctor_get(v___y_411_, 0);
v_included_419_ = lean_ctor_get(v___y_411_, 1);
v___x_527_ = lean_unsigned_to_nat(0u);
v___x_528_ = lean_array_get_size(v_params_407_);
v___x_529_ = lean_nat_dec_lt(v___x_527_, v___x_528_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; lean_object* v___x_531_; 
lean_inc(v_included_419_);
lean_inc_ref(v_isCandidateFn_418_);
v___x_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_530_, 0, v_isCandidateFn_418_);
lean_ctor_set(v___x_530_, 1, v_included_419_);
v___x_531_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_value_410_, v___x_530_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
lean_dec_ref_known(v___x_530_, 2);
v___y_421_ = v___x_531_;
goto v___jp_420_;
}
else
{
size_t v___x_532_; size_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_532_ = ((size_t)0ULL);
v___x_533_ = lean_usize_of_nat(v___x_528_);
lean_inc(v_included_419_);
v___x_534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(v_params_407_, v___x_532_, v___x_533_, v_included_419_);
lean_inc_ref(v_isCandidateFn_418_);
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v_isCandidateFn_418_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_value_410_, v___x_535_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
lean_dec_ref_known(v___x_535_, 2);
v___y_421_ = v___x_536_;
goto v___jp_420_;
}
v___jp_420_:
{
if (lean_obj_tag(v___y_421_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_423_; 
v_a_422_ = lean_ctor_get(v___y_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v___y_421_, 1);
v___x_423_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_404_, v_decl_405_, v_type_406_, v_params_407_, v_a_422_, v___y_414_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; lean_object* v_fvarId_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_423_, 1);
v_fvarId_425_ = lean_ctor_get(v_a_424_, 0);
lean_inc(v_fvarId_425_);
lean_inc(v_included_419_);
v___x_426_ = l_Lean_FVarIdSet_insert(v_included_419_, v_fvarId_425_);
lean_inc_ref(v_isCandidateFn_418_);
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v_isCandidateFn_418_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_k_408_, v___x_427_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
lean_dec_ref_known(v___x_427_, 2);
if (lean_obj_tag(v___x_428_) == 0)
{
switch(lean_obj_tag(v_code_409_))
{
case 1:
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_468_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_468_ == 0)
{
v___x_431_ = v___x_428_;
v_isShared_432_ = v_isSharedCheck_468_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_428_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_468_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v_decl_433_; lean_object* v_k_434_; size_t v___x_435_; size_t v___x_436_; uint8_t v___x_437_; 
v_decl_433_ = lean_ctor_get(v_code_409_, 0);
v_k_434_ = lean_ctor_get(v_code_409_, 1);
v___x_435_ = lean_ptr_addr(v_k_434_);
v___x_436_ = lean_ptr_addr(v_a_429_);
v___x_437_ = lean_usize_dec_eq(v___x_435_, v___x_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_447_; 
v_isSharedCheck_447_ = !lean_is_exclusive(v_code_409_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; lean_object* v_unused_449_; 
v_unused_448_ = lean_ctor_get(v_code_409_, 1);
lean_dec(v_unused_448_);
v_unused_449_ = lean_ctor_get(v_code_409_, 0);
lean_dec(v_unused_449_);
v___x_439_ = v_code_409_;
v_isShared_440_ = v_isSharedCheck_447_;
goto v_resetjp_438_;
}
else
{
lean_dec(v_code_409_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_447_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_442_; 
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 1, v_a_429_);
lean_ctor_set(v___x_439_, 0, v_a_424_);
v___x_442_ = v___x_439_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_424_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_a_429_);
v___x_442_ = v_reuseFailAlloc_446_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_444_; 
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 0, v___x_442_);
v___x_444_ = v___x_431_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_442_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
else
{
size_t v___x_450_; size_t v___x_451_; uint8_t v___x_452_; 
v___x_450_ = lean_ptr_addr(v_decl_433_);
v___x_451_ = lean_ptr_addr(v_a_424_);
v___x_452_ = lean_usize_dec_eq(v___x_450_, v___x_451_);
if (v___x_452_ == 0)
{
lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_462_; 
v_isSharedCheck_462_ = !lean_is_exclusive(v_code_409_);
if (v_isSharedCheck_462_ == 0)
{
lean_object* v_unused_463_; lean_object* v_unused_464_; 
v_unused_463_ = lean_ctor_get(v_code_409_, 1);
lean_dec(v_unused_463_);
v_unused_464_ = lean_ctor_get(v_code_409_, 0);
lean_dec(v_unused_464_);
v___x_454_ = v_code_409_;
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
else
{
lean_dec(v_code_409_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v_a_429_);
lean_ctor_set(v___x_454_, 0, v_a_424_);
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_424_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_a_429_);
v___x_457_ = v_reuseFailAlloc_461_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_459_; 
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 0, v___x_457_);
v___x_459_ = v___x_431_;
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
}
}
else
{
lean_object* v___x_466_; 
lean_dec(v_a_429_);
lean_dec(v_a_424_);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 0, v_code_409_);
v___x_466_ = v___x_431_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_code_409_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
case 2:
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_508_; 
v_a_469_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_508_ == 0)
{
v___x_471_ = v___x_428_;
v_isShared_472_ = v_isSharedCheck_508_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_428_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_508_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v_decl_473_; lean_object* v_k_474_; size_t v___x_475_; size_t v___x_476_; uint8_t v___x_477_; 
v_decl_473_ = lean_ctor_get(v_code_409_, 0);
v_k_474_ = lean_ctor_get(v_code_409_, 1);
v___x_475_ = lean_ptr_addr(v_k_474_);
v___x_476_ = lean_ptr_addr(v_a_469_);
v___x_477_ = lean_usize_dec_eq(v___x_475_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_487_; 
v_isSharedCheck_487_ = !lean_is_exclusive(v_code_409_);
if (v_isSharedCheck_487_ == 0)
{
lean_object* v_unused_488_; lean_object* v_unused_489_; 
v_unused_488_ = lean_ctor_get(v_code_409_, 1);
lean_dec(v_unused_488_);
v_unused_489_ = lean_ctor_get(v_code_409_, 0);
lean_dec(v_unused_489_);
v___x_479_ = v_code_409_;
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
else
{
lean_dec(v_code_409_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 1, v_a_469_);
lean_ctor_set(v___x_479_, 0, v_a_424_);
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_424_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v_a_469_);
v___x_482_ = v_reuseFailAlloc_486_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
lean_object* v___x_484_; 
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_482_);
v___x_484_ = v___x_471_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_482_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
else
{
size_t v___x_490_; size_t v___x_491_; uint8_t v___x_492_; 
v___x_490_ = lean_ptr_addr(v_decl_473_);
v___x_491_ = lean_ptr_addr(v_a_424_);
v___x_492_ = lean_usize_dec_eq(v___x_490_, v___x_491_);
if (v___x_492_ == 0)
{
lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_502_; 
v_isSharedCheck_502_ = !lean_is_exclusive(v_code_409_);
if (v_isSharedCheck_502_ == 0)
{
lean_object* v_unused_503_; lean_object* v_unused_504_; 
v_unused_503_ = lean_ctor_get(v_code_409_, 1);
lean_dec(v_unused_503_);
v_unused_504_ = lean_ctor_get(v_code_409_, 0);
lean_dec(v_unused_504_);
v___x_494_ = v_code_409_;
v_isShared_495_ = v_isSharedCheck_502_;
goto v_resetjp_493_;
}
else
{
lean_dec(v_code_409_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_502_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 1, v_a_469_);
lean_ctor_set(v___x_494_, 0, v_a_424_);
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_424_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_a_469_);
v___x_497_ = v_reuseFailAlloc_501_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
lean_object* v___x_499_; 
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_497_);
v___x_499_ = v___x_471_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_497_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
else
{
lean_object* v___x_506_; 
lean_dec(v_a_469_);
lean_dec(v_a_424_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v_code_409_);
v___x_506_ = v___x_471_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_code_409_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
}
default: 
{
lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_517_; 
lean_dec(v_a_424_);
lean_dec_ref(v_code_409_);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_517_ == 0)
{
lean_object* v_unused_518_; 
v_unused_518_ = lean_ctor_get(v___x_428_, 0);
lean_dec(v_unused_518_);
v___x_510_ = v___x_428_;
v_isShared_511_ = v_isSharedCheck_517_;
goto v_resetjp_509_;
}
else
{
lean_dec(v___x_428_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_517_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_515_; 
v___x_512_ = lean_obj_once(&l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3, &l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3_once, _init_l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___closed__3);
v___x_513_ = l_panic___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__2(v___x_512_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_513_);
v___x_515_ = v___x_510_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_513_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
}
else
{
lean_dec(v_a_424_);
lean_dec_ref(v_code_409_);
return v___x_428_;
}
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v_code_409_);
lean_dec_ref(v_k_408_);
v_a_519_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_423_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_423_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
else
{
lean_dec_ref(v_code_409_);
lean_dec_ref(v_k_408_);
lean_dec_ref(v_params_407_);
lean_dec_ref(v_type_406_);
lean_dec_ref(v_decl_405_);
return v___y_421_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___boxed(lean_object* v___x_537_, lean_object* v_decl_538_, lean_object* v_type_539_, lean_object* v_params_540_, lean_object* v_k_541_, lean_object* v_code_542_, lean_object* v_value_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
uint8_t v___x_4836__boxed_551_; lean_object* v_res_552_; 
v___x_4836__boxed_551_ = lean_unbox(v___x_537_);
v_res_552_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0(v___x_4836__boxed_551_, v_decl_538_, v_type_539_, v_params_540_, v_k_541_, v_code_542_, v_value_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1___boxed(lean_object* v___x_553_, lean_object* v_alts_554_, lean_object* v_typeName_555_, lean_object* v_resultType_556_, lean_object* v_discr_557_, lean_object* v_code_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1(v___x_553_, v_alts_554_, v_typeName_555_, v_resultType_556_, v_discr_557_, v_code_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(lean_object* v_code_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_decl_576_; lean_object* v_k_577_; lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v___y_583_; 
switch(lean_obj_tag(v_code_567_))
{
case 4:
{
lean_object* v_cases_591_; lean_object* v_typeName_592_; lean_object* v_resultType_593_; lean_object* v_discr_594_; lean_object* v_alts_595_; lean_object* v___x_596_; lean_object* v___f_597_; lean_object* v___x_598_; 
v_cases_591_ = lean_ctor_get(v_code_567_, 0);
v_typeName_592_ = lean_ctor_get(v_cases_591_, 0);
lean_inc(v_typeName_592_);
v_resultType_593_ = lean_ctor_get(v_cases_591_, 1);
lean_inc_ref(v_resultType_593_);
v_discr_594_ = lean_ctor_get(v_cases_591_, 2);
lean_inc(v_discr_594_);
v_alts_595_ = lean_ctor_get(v_cases_591_, 3);
lean_inc_ref(v_alts_595_);
v___x_596_ = lean_unsigned_to_nat(0u);
v___f_597_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1___boxed), 13, 6);
lean_closure_set(v___f_597_, 0, v___x_596_);
lean_closure_set(v___f_597_, 1, v_alts_595_);
lean_closure_set(v___f_597_, 2, v_typeName_592_);
lean_closure_set(v___f_597_, 3, v_resultType_593_);
lean_closure_set(v___f_597_, 4, v_discr_594_);
lean_closure_set(v___f_597_, 5, v_code_567_);
v___x_598_ = l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(v___f_597_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
return v___x_598_;
}
case 0:
{
lean_object* v_decl_599_; lean_object* v_k_600_; lean_object* v___x_601_; 
v_decl_599_ = lean_ctor_get(v_code_567_, 0);
v_k_600_ = lean_ctor_get(v_code_567_, 1);
lean_inc_ref(v_decl_599_);
v___x_601_ = l_Lean_Compiler_LCNF_PullLetDecls_shouldPull(v_decl_599_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; uint8_t v___x_603_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = lean_unbox(v_a_602_);
lean_dec(v_a_602_);
if (v___x_603_ == 0)
{
lean_object* v_fvarId_604_; lean_object* v_isCandidateFn_605_; lean_object* v_included_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v_fvarId_604_ = lean_ctor_get(v_decl_599_, 0);
v_isCandidateFn_605_ = lean_ctor_get(v___y_568_, 0);
v_included_606_ = lean_ctor_get(v___y_568_, 1);
lean_inc(v_fvarId_604_);
lean_inc(v_included_606_);
v___x_607_ = l_Lean_FVarIdSet_insert(v_included_606_, v_fvarId_604_);
lean_inc_ref(v_isCandidateFn_605_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v_isCandidateFn_605_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
lean_inc_ref(v_k_600_);
v___x_609_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_k_600_, v___x_608_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
lean_dec_ref_known(v___x_608_, 2);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_632_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_632_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_632_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_632_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
size_t v___x_614_; size_t v___x_615_; uint8_t v___x_616_; 
v___x_614_ = lean_ptr_addr(v_k_600_);
v___x_615_ = lean_ptr_addr(v_a_610_);
v___x_616_ = lean_usize_dec_eq(v___x_614_, v___x_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_626_; 
lean_inc_ref(v_decl_599_);
v_isSharedCheck_626_ = !lean_is_exclusive(v_code_567_);
if (v_isSharedCheck_626_ == 0)
{
lean_object* v_unused_627_; lean_object* v_unused_628_; 
v_unused_627_ = lean_ctor_get(v_code_567_, 1);
lean_dec(v_unused_627_);
v_unused_628_ = lean_ctor_get(v_code_567_, 0);
lean_dec(v_unused_628_);
v___x_618_ = v_code_567_;
v_isShared_619_ = v_isSharedCheck_626_;
goto v_resetjp_617_;
}
else
{
lean_dec(v_code_567_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_626_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v_a_610_);
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_decl_599_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_a_610_);
v___x_621_ = v_reuseFailAlloc_625_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_623_; 
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 0, v___x_621_);
v___x_623_ = v___x_612_;
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
}
}
else
{
lean_object* v___x_630_; 
lean_dec(v_a_610_);
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 0, v_code_567_);
v___x_630_ = v___x_612_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_code_567_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_567_, 2);
return v___x_609_;
}
}
else
{
lean_inc_ref(v_k_600_);
lean_dec_ref_known(v_code_567_, 2);
v_code_567_ = v_k_600_;
goto _start;
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref_known(v_code_567_, 2);
v_a_634_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_601_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_601_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
case 1:
{
lean_object* v_decl_642_; lean_object* v_k_643_; 
v_decl_642_ = lean_ctor_get(v_code_567_, 0);
v_k_643_ = lean_ctor_get(v_code_567_, 1);
lean_inc_ref(v_k_643_);
lean_inc_ref(v_decl_642_);
v_decl_576_ = v_decl_642_;
v_k_577_ = v_k_643_;
v___y_578_ = v___y_568_;
v___y_579_ = v___y_569_;
v___y_580_ = v___y_570_;
v___y_581_ = v___y_571_;
v___y_582_ = v___y_572_;
v___y_583_ = v___y_573_;
goto v___jp_575_;
}
case 2:
{
lean_object* v_decl_644_; lean_object* v_k_645_; 
v_decl_644_ = lean_ctor_get(v_code_567_, 0);
v_k_645_ = lean_ctor_get(v_code_567_, 1);
lean_inc_ref(v_k_645_);
lean_inc_ref(v_decl_644_);
v_decl_576_ = v_decl_644_;
v_k_577_ = v_k_645_;
v___y_578_ = v___y_568_;
v___y_579_ = v___y_569_;
v___y_580_ = v___y_570_;
v___y_581_ = v___y_571_;
v___y_582_ = v___y_572_;
v___y_583_ = v___y_573_;
goto v___jp_575_;
}
default: 
{
lean_object* v___x_646_; 
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v_code_567_);
return v___x_646_;
}
}
v___jp_575_:
{
lean_object* v_params_584_; lean_object* v_type_585_; lean_object* v_value_586_; uint8_t v___x_587_; lean_object* v___x_588_; lean_object* v___f_589_; lean_object* v___x_590_; 
v_params_584_ = lean_ctor_get(v_decl_576_, 2);
lean_inc_ref(v_params_584_);
v_type_585_ = lean_ctor_get(v_decl_576_, 3);
lean_inc_ref(v_type_585_);
v_value_586_ = lean_ctor_get(v_decl_576_, 4);
lean_inc_ref(v_value_586_);
v___x_587_ = 0;
v___x_588_ = lean_box(v___x_587_);
v___f_589_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__0___boxed), 14, 7);
lean_closure_set(v___f_589_, 0, v___x_588_);
lean_closure_set(v___f_589_, 1, v_decl_576_);
lean_closure_set(v___f_589_, 2, v_type_585_);
lean_closure_set(v___f_589_, 3, v_params_584_);
lean_closure_set(v___f_589_, 4, v_k_577_);
lean_closure_set(v___f_589_, 5, v_code_567_);
lean_closure_set(v___f_589_, 6, v_value_586_);
v___x_590_ = l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint(v___f_589_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
return v___x_590_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullAlt(lean_object* v_alt_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___y_656_; 
if (lean_obj_tag(v_alt_647_) == 0)
{
lean_object* v_params_674_; lean_object* v_code_675_; lean_object* v_isCandidateFn_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; uint8_t v___x_680_; 
v_params_674_ = lean_ctor_get(v_alt_647_, 1);
v_code_675_ = lean_ctor_get(v_alt_647_, 2);
v_isCandidateFn_676_ = lean_ctor_get(v___y_648_, 0);
v___x_677_ = lean_box(1);
v___x_678_ = lean_unsigned_to_nat(0u);
v___x_679_ = lean_array_get_size(v_params_674_);
v___x_680_ = lean_nat_dec_lt(v___x_678_, v___x_679_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; lean_object* v___x_682_; 
lean_inc_ref(v_isCandidateFn_676_);
v___x_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_681_, 0, v_isCandidateFn_676_);
lean_ctor_set(v___x_681_, 1, v___x_677_);
lean_inc_ref(v_code_675_);
v___x_682_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_code_675_, v___x_681_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec_ref_known(v___x_681_, 2);
v___y_656_ = v___x_682_;
goto v___jp_655_;
}
else
{
size_t v___x_683_; size_t v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_683_ = ((size_t)0ULL);
v___x_684_ = lean_usize_of_nat(v___x_679_);
v___x_685_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(v_params_674_, v___x_683_, v___x_684_, v___x_677_);
lean_inc_ref(v_isCandidateFn_676_);
v___x_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_686_, 0, v_isCandidateFn_676_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
lean_inc_ref(v_code_675_);
v___x_687_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_code_675_, v___x_686_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec_ref_known(v___x_686_, 2);
v___y_656_ = v___x_687_;
goto v___jp_655_;
}
}
else
{
lean_object* v_code_688_; lean_object* v_isCandidateFn_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v_code_688_ = lean_ctor_get(v_alt_647_, 0);
v_isCandidateFn_689_ = lean_ctor_get(v___y_648_, 0);
v___x_690_ = lean_box(1);
lean_inc_ref(v_isCandidateFn_689_);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v_isCandidateFn_689_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
lean_inc_ref(v_code_688_);
v___x_692_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_code_688_, v___x_691_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec_ref_known(v___x_691_, 2);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_701_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_701_ == 0)
{
v___x_695_ = v___x_692_;
v_isShared_696_ = v_isSharedCheck_701_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_692_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_701_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_697_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_647_, v_a_693_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v___x_697_);
v___x_699_ = v___x_695_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
else
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
lean_dec_ref_known(v_alt_647_, 1);
v_a_702_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_709_ == 0)
{
v___x_704_ = v___x_692_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_692_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
v___jp_655_:
{
if (lean_obj_tag(v___y_656_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_665_; 
v_a_657_ = lean_ctor_get(v___y_656_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___y_656_);
if (v_isSharedCheck_665_ == 0)
{
v___x_659_ = v___y_656_;
v_isShared_660_ = v_isSharedCheck_665_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___y_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_665_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_661_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_647_, v_a_657_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 0, v___x_661_);
v___x_663_ = v___x_659_;
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
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
lean_dec_ref(v_alt_647_);
v_a_666_ = lean_ctor_get(v___y_656_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___y_656_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___y_656_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___y_656_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3(lean_object* v_i_710_, lean_object* v_as_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_719_ = lean_array_get_size(v_as_711_);
v___x_720_ = lean_nat_dec_lt(v_i_710_, v___x_719_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; 
lean_dec(v_i_710_);
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v_as_711_);
return v___x_721_;
}
else
{
lean_object* v_a_722_; lean_object* v___x_723_; 
v_a_722_ = lean_array_fget_borrowed(v_as_711_, v_i_710_);
lean_inc(v_a_722_);
v___x_723_ = l_Lean_Compiler_LCNF_PullLetDecls_pullAlt(v_a_722_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; size_t v___x_725_; size_t v___x_726_; uint8_t v___x_727_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_723_, 1);
v___x_725_ = lean_ptr_addr(v_a_722_);
v___x_726_ = lean_ptr_addr(v_a_724_);
v___x_727_ = lean_usize_dec_eq(v___x_725_, v___x_726_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_728_ = lean_unsigned_to_nat(1u);
v___x_729_ = lean_nat_add(v_i_710_, v___x_728_);
v___x_730_ = lean_array_fset(v_as_711_, v_i_710_, v_a_724_);
lean_dec(v_i_710_);
v_i_710_ = v___x_729_;
v_as_711_ = v___x_730_;
goto _start;
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec(v_a_724_);
v___x_732_ = lean_unsigned_to_nat(1u);
v___x_733_ = lean_nat_add(v_i_710_, v___x_732_);
lean_dec(v_i_710_);
v_i_710_ = v___x_733_;
goto _start;
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec_ref(v_as_711_);
lean_dec(v_i_710_);
v_a_735_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_723_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_723_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___lam__1(lean_object* v___x_743_, lean_object* v_alts_744_, lean_object* v_typeName_745_, lean_object* v_resultType_746_, lean_object* v_discr_747_, lean_object* v_code_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v___x_756_; 
lean_inc_ref(v_alts_744_);
v___x_756_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3(v___x_743_, v_alts_744_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_772_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_772_ == 0)
{
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_772_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_772_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
size_t v___x_761_; size_t v___x_762_; uint8_t v___x_763_; 
v___x_761_ = lean_ptr_addr(v_alts_744_);
lean_dec_ref(v_alts_744_);
v___x_762_ = lean_ptr_addr(v_a_757_);
v___x_763_ = lean_usize_dec_eq(v___x_761_, v___x_762_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_767_; 
lean_dec_ref(v_code_748_);
v___x_764_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_764_, 0, v_typeName_745_);
lean_ctor_set(v___x_764_, 1, v_resultType_746_);
lean_ctor_set(v___x_764_, 2, v_discr_747_);
lean_ctor_set(v___x_764_, 3, v_a_757_);
v___x_765_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v___x_765_);
v___x_767_ = v___x_759_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v___x_765_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
else
{
lean_object* v___x_770_; 
lean_dec(v_a_757_);
lean_dec(v_discr_747_);
lean_dec_ref(v_resultType_746_);
lean_dec(v_typeName_745_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v_code_748_);
v___x_770_ = v___x_759_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_code_748_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
else
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
lean_dec_ref(v_code_748_);
lean_dec(v_discr_747_);
lean_dec_ref(v_resultType_746_);
lean_dec(v_typeName_745_);
lean_dec_ref(v_alts_744_);
v_a_773_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_756_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_756_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3___boxed(lean_object* v_i_781_, lean_object* v_as_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_PullLetDecls_pullDecls_spec__3(v_i_781_, v_as_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullAlt___boxed(lean_object* v_alt_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_Compiler_LCNF_PullLetDecls_pullAlt(v_alt_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_pullDecls___boxed(lean_object* v_code_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lean_Compiler_LCNF_PullLetDecls_pullDecls(v_code_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(lean_object* v_x_809_, lean_object* v_isCandidateFn_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_816_ = lean_box(1);
v___x_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_817_, 0, v_isCandidateFn_810_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
v___x_818_ = ((lean_object*)(l_Lean_Compiler_LCNF_PullLetDecls_withCheckpoint___closed__0));
v___x_819_ = lean_st_mk_ref(v___x_818_);
lean_inc(v___y_814_);
lean_inc_ref(v___y_813_);
lean_inc(v___y_812_);
lean_inc_ref(v___y_811_);
lean_inc(v___x_819_);
v___x_820_ = lean_apply_7(v_x_809_, v___x_817_, v___x_819_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, lean_box(0));
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_829_; 
v_a_821_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_829_ == 0)
{
v___x_823_ = v___x_820_;
v_isShared_824_ = v_isSharedCheck_829_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_820_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_829_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; lean_object* v___x_827_; 
v___x_825_ = lean_st_ref_get(v___x_819_);
lean_dec(v___x_819_);
lean_dec(v___x_825_);
if (v_isShared_824_ == 0)
{
v___x_827_ = v___x_823_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_821_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
else
{
lean_dec(v___x_819_);
return v___x_820_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg___boxed(lean_object* v_x_830_, lean_object* v_isCandidateFn_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(v_x_830_, v_isCandidateFn_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run(lean_object* v_00_u03b1_838_, lean_object* v_x_839_, lean_object* v_isCandidateFn_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(v_x_839_, v_isCandidateFn_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___boxed(lean_object* v_00_u03b1_847_, lean_object* v_x_848_, lean_object* v_isCandidateFn_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_Compiler_LCNF_PullLetDecls_PullM_run(v_00_u03b1_847_, v_x_848_, v_isCandidateFn_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(lean_object* v_f_856_, lean_object* v_v_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
if (lean_obj_tag(v_v_857_) == 0)
{
lean_object* v_code_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_889_; 
v_code_865_ = lean_ctor_get(v_v_857_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v_v_857_);
if (v_isSharedCheck_889_ == 0)
{
v___x_867_ = v_v_857_;
v_isShared_868_ = v_isSharedCheck_889_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_code_865_);
lean_dec(v_v_857_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_889_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_869_; 
lean_inc(v___y_863_);
lean_inc_ref(v___y_862_);
lean_inc(v___y_861_);
lean_inc_ref(v___y_860_);
lean_inc(v___y_859_);
lean_inc_ref(v___y_858_);
v___x_869_ = lean_apply_8(v_f_856_, v_code_865_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, lean_box(0));
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_880_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_880_ == 0)
{
v___x_872_ = v___x_869_;
v_isShared_873_ = v_isSharedCheck_880_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_869_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_880_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v_a_870_);
v___x_875_ = v___x_867_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_879_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
lean_object* v___x_877_; 
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 0, v___x_875_);
v___x_877_ = v___x_872_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_875_);
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
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_del_object(v___x_867_);
v_a_881_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_869_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_869_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
else
{
lean_object* v___x_890_; 
lean_dec_ref(v_f_856_);
v___x_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_890_, 0, v_v_857_);
return v___x_890_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg___boxed(lean_object* v_f_891_, lean_object* v_v_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(v_f_891_, v_v_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0(uint8_t v_pu_901_, lean_object* v_f_902_, lean_object* v_v_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(v_f_902_, v_v_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___boxed(lean_object* v_pu_912_, lean_object* v_f_913_, lean_object* v_v_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
uint8_t v_pu_boxed_922_; lean_object* v_res_923_; 
v_pu_boxed_922_ = lean_unbox(v_pu_912_);
v_res_923_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0(v_pu_boxed_922_, v_f_913_, v_v_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0(lean_object* v___x_925_, lean_object* v_value_926_, lean_object* v_toSignature_927_, uint8_t v_recursive_928_, lean_object* v_inlineAttr_x3f_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v___x_937_; 
v___x_937_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(v___x_925_, v_value_926_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v___x_939_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___closed__0));
v___x_940_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_pullLetDecls_spec__0___redArg(v___x_939_, v_a_938_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_949_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_949_ == 0)
{
v___x_943_ = v___x_940_;
v_isShared_944_ = v_isSharedCheck_949_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_940_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_949_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; lean_object* v___x_947_; 
v___x_945_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_945_, 0, v_toSignature_927_);
lean_ctor_set(v___x_945_, 1, v_a_941_);
lean_ctor_set(v___x_945_, 2, v_inlineAttr_x3f_929_);
lean_ctor_set_uint8(v___x_945_, sizeof(void*)*3, v_recursive_928_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v___x_945_);
v___x_947_ = v___x_943_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec(v_inlineAttr_x3f_929_);
lean_dec_ref(v_toSignature_927_);
v_a_950_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_940_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_940_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec(v_inlineAttr_x3f_929_);
lean_dec_ref(v_toSignature_927_);
v_a_958_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_937_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_937_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___boxed(lean_object* v___x_966_, lean_object* v_value_967_, lean_object* v_toSignature_968_, lean_object* v_recursive_969_, lean_object* v_inlineAttr_x3f_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
uint8_t v_recursive_boxed_978_; lean_object* v_res_979_; 
v_recursive_boxed_978_ = lean_unbox(v_recursive_969_);
v_res_979_ = l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0(v___x_966_, v_value_967_, v_toSignature_968_, v_recursive_boxed_978_, v_inlineAttr_x3f_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1(lean_object* v_params_980_, lean_object* v___f_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v_isCandidateFn_989_; lean_object* v_included_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1008_; 
v_isCandidateFn_989_ = lean_ctor_get(v___y_982_, 0);
v_included_990_ = lean_ctor_get(v___y_982_, 1);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___y_982_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_992_ = v___y_982_;
v_isShared_993_ = v_isSharedCheck_1008_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_included_990_);
lean_inc(v_isCandidateFn_989_);
lean_dec(v___y_982_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1008_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = lean_array_get_size(v_params_980_);
v___x_996_ = lean_nat_dec_lt(v___x_994_, v___x_995_);
if (v___x_996_ == 0)
{
lean_object* v___x_998_; 
if (v_isShared_993_ == 0)
{
v___x_998_ = v___x_992_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_isCandidateFn_989_);
lean_ctor_set(v_reuseFailAlloc_1000_, 1, v_included_990_);
v___x_998_ = v_reuseFailAlloc_1000_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; 
v___x_999_ = lean_apply_7(v___f_981_, v___x_998_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, lean_box(0));
return v___x_999_;
}
}
else
{
size_t v___x_1001_; size_t v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1005_; 
v___x_1001_ = ((size_t)0ULL);
v___x_1002_ = lean_usize_of_nat(v___x_995_);
v___x_1003_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_PullLetDecls_pullAlt_spec__0(v_params_980_, v___x_1001_, v___x_1002_, v_included_990_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 1, v___x_1003_);
v___x_1005_ = v___x_992_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_isCandidateFn_989_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_apply_7(v___f_981_, v___x_1005_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, lean_box(0));
return v___x_1006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1___boxed(lean_object* v_params_1009_, lean_object* v___f_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1(v_params_1009_, v___f_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
lean_dec_ref(v_params_1009_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls(lean_object* v_decl_1020_, lean_object* v_isCandidateFn_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_toSignature_1027_; lean_object* v_value_1028_; uint8_t v_recursive_1029_; lean_object* v_inlineAttr_x3f_1030_; lean_object* v_params_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___x_1036_; 
v_toSignature_1027_ = lean_ctor_get(v_decl_1020_, 0);
lean_inc_ref(v_toSignature_1027_);
v_value_1028_ = lean_ctor_get(v_decl_1020_, 1);
lean_inc_ref(v_value_1028_);
v_recursive_1029_ = lean_ctor_get_uint8(v_decl_1020_, sizeof(void*)*3);
v_inlineAttr_x3f_1030_ = lean_ctor_get(v_decl_1020_, 2);
lean_inc(v_inlineAttr_x3f_1030_);
lean_dec_ref(v_decl_1020_);
v_params_1031_ = lean_ctor_get(v_toSignature_1027_, 3);
lean_inc_ref(v_params_1031_);
v___x_1032_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullLetDecls___closed__0));
v___x_1033_ = lean_box(v_recursive_1029_);
v___f_1034_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1034_, 0, v___x_1032_);
lean_closure_set(v___f_1034_, 1, v_value_1028_);
lean_closure_set(v___f_1034_, 2, v_toSignature_1027_);
lean_closure_set(v___f_1034_, 3, v___x_1033_);
lean_closure_set(v___f_1034_, 4, v_inlineAttr_x3f_1030_);
v___f_1035_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_pullLetDecls___lam__1___boxed), 9, 2);
lean_closure_set(v___f_1035_, 0, v_params_1031_);
lean_closure_set(v___f_1035_, 1, v___f_1034_);
v___x_1036_ = l_Lean_Compiler_LCNF_PullLetDecls_PullM_run___redArg(v___f_1035_, v_isCandidateFn_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullLetDecls___boxed(lean_object* v_decl_1037_, lean_object* v_isCandidateFn_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Lean_Compiler_LCNF_Decl_pullLetDecls(v_decl_1037_, v_isCandidateFn_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
return v_res_1044_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0(lean_object* v_as_1045_, size_t v_i_1046_, size_t v_stop_1047_){
_start:
{
uint8_t v___x_1048_; 
v___x_1048_ = lean_usize_dec_eq(v_i_1046_, v_stop_1047_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; uint8_t v___x_1051_; 
v___x_1049_ = lean_array_uget_borrowed(v_as_1045_, v_i_1046_);
v___x_1050_ = lean_box(0);
v___x_1051_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_1049_, v___x_1050_);
if (v___x_1051_ == 0)
{
size_t v___x_1052_; size_t v___x_1053_; 
v___x_1052_ = ((size_t)1ULL);
v___x_1053_ = lean_usize_add(v_i_1046_, v___x_1052_);
v_i_1046_ = v___x_1053_;
goto _start;
}
else
{
return v___x_1051_;
}
}
else
{
uint8_t v___x_1055_; 
v___x_1055_ = 0;
return v___x_1055_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0___boxed(lean_object* v_as_1056_, lean_object* v_i_1057_, lean_object* v_stop_1058_){
_start:
{
size_t v_i_boxed_1059_; size_t v_stop_boxed_1060_; uint8_t v_res_1061_; lean_object* v_r_1062_; 
v_i_boxed_1059_ = lean_unbox_usize(v_i_1057_);
lean_dec(v_i_1057_);
v_stop_boxed_1060_ = lean_unbox_usize(v_stop_1058_);
lean_dec(v_stop_1058_);
v_res_1061_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0(v_as_1056_, v_i_boxed_1059_, v_stop_boxed_1060_);
lean_dec_ref(v_as_1056_);
v_r_1062_ = lean_box(v_res_1061_);
return v_r_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0(lean_object* v_letDecl_1066_, lean_object* v_candidates_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_type_1073_; lean_object* v_value_1074_; lean_object* v___y_1076_; lean_object* v___y_1116_; 
v_type_1073_ = lean_ctor_get(v_letDecl_1066_, 2);
v_value_1074_ = lean_ctor_get(v_letDecl_1066_, 3);
if (lean_obj_tag(v_value_1074_) == 3)
{
lean_object* v_args_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; uint8_t v___x_1130_; 
v_args_1127_ = lean_ctor_get(v_value_1074_, 2);
v___x_1128_ = lean_unsigned_to_nat(0u);
v___x_1129_ = lean_array_get_size(v_args_1127_);
v___x_1130_ = lean_nat_dec_lt(v___x_1128_, v___x_1129_);
if (v___x_1130_ == 0)
{
v___y_1116_ = v___y_1071_;
goto v___jp_1115_;
}
else
{
if (v___x_1130_ == 0)
{
v___y_1116_ = v___y_1071_;
goto v___jp_1115_;
}
else
{
size_t v___x_1131_; size_t v___x_1132_; uint8_t v___x_1133_; 
v___x_1131_ = ((size_t)0ULL);
v___x_1132_ = lean_usize_of_nat(v___x_1129_);
v___x_1133_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0(v_args_1127_, v___x_1131_, v___x_1132_);
if (v___x_1133_ == 0)
{
v___y_1116_ = v___y_1071_;
goto v___jp_1115_;
}
else
{
uint8_t v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1134_ = 0;
v___x_1135_ = lean_box(v___x_1134_);
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
return v___x_1136_;
}
}
}
}
else
{
v___y_1116_ = v___y_1071_;
goto v___jp_1115_;
}
v___jp_1075_:
{
lean_object* v___x_1077_; uint8_t v___x_1078_; 
v___x_1077_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___closed__1));
v___x_1078_ = l_Lean_Expr_isAppOf(v_type_1073_, v___x_1077_);
if (v___x_1078_ == 0)
{
uint8_t v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = 1;
v___x_1080_ = l_Lean_Compiler_LCNF_isClass_x3f___redArg(v_type_1073_, v___y_1076_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1103_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1083_ = v___x_1080_;
v_isShared_1084_ = v_isSharedCheck_1103_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1080_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1103_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
if (lean_obj_tag(v_a_1081_) == 0)
{
if (v___x_1078_ == 0)
{
if (lean_obj_tag(v_value_1074_) == 2)
{
lean_object* v_struct_1085_; uint8_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1089_; 
v_struct_1085_ = lean_ctor_get(v_value_1074_, 2);
v___x_1086_ = l_Lean_FVarIdSet_contains(v_candidates_1067_, v_struct_1085_);
v___x_1087_ = lean_box(v___x_1086_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1087_);
v___x_1089_ = v___x_1083_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
else
{
lean_object* v___x_1091_; lean_object* v___x_1093_; 
v___x_1091_ = lean_box(v___x_1078_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1091_);
v___x_1093_ = v___x_1083_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
else
{
lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1095_ = lean_box(v___x_1079_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1095_);
v___x_1097_ = v___x_1083_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
else
{
lean_object* v___x_1099_; lean_object* v___x_1101_; 
lean_dec_ref_known(v_a_1081_, 1);
v___x_1099_ = lean_box(v___x_1079_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1099_);
v___x_1101_ = v___x_1083_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
v_a_1104_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_1080_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1080_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
else
{
uint8_t v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1112_ = 0;
v___x_1113_ = lean_box(v___x_1112_);
v___x_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
return v___x_1114_;
}
}
v___jp_1115_:
{
if (lean_obj_tag(v_value_1074_) == 4)
{
lean_object* v_args_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; uint8_t v___x_1120_; 
v_args_1117_ = lean_ctor_get(v_value_1074_, 1);
v___x_1118_ = lean_unsigned_to_nat(0u);
v___x_1119_ = lean_array_get_size(v_args_1117_);
v___x_1120_ = lean_nat_dec_lt(v___x_1118_, v___x_1119_);
if (v___x_1120_ == 0)
{
v___y_1076_ = v___y_1116_;
goto v___jp_1075_;
}
else
{
if (v___x_1120_ == 0)
{
v___y_1076_ = v___y_1116_;
goto v___jp_1075_;
}
else
{
size_t v___x_1121_; size_t v___x_1122_; uint8_t v___x_1123_; 
v___x_1121_ = ((size_t)0ULL);
v___x_1122_ = lean_usize_of_nat(v___x_1119_);
v___x_1123_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_Decl_pullInstances_spec__0(v_args_1117_, v___x_1121_, v___x_1122_);
if (v___x_1123_ == 0)
{
v___y_1076_ = v___y_1116_;
goto v___jp_1075_;
}
else
{
uint8_t v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1124_ = 0;
v___x_1125_ = lean_box(v___x_1124_);
v___x_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
return v___x_1126_;
}
}
}
}
else
{
v___y_1076_ = v___y_1116_;
goto v___jp_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0___boxed(lean_object* v_letDecl_1137_, lean_object* v_candidates_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_Compiler_LCNF_Decl_pullInstances___lam__0(v_letDecl_1137_, v_candidates_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v_candidates_1138_);
lean_dec_ref(v_letDecl_1137_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances(lean_object* v_decl_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v___f_1152_; lean_object* v___x_1153_; 
v___f_1152_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_pullInstances___closed__0));
v___x_1153_ = l_Lean_Compiler_LCNF_Decl_pullLetDecls(v_decl_1146_, v___f_1152_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_pullInstances___boxed(lean_object* v_decl_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lean_Compiler_LCNF_Decl_pullInstances(v_decl_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
return v_res_1160_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_pullInstances___closed__3(void){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; uint8_t v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = ((lean_object*)(l_Lean_Compiler_LCNF_pullInstances___closed__2));
v___x_1167_ = 0;
v___x_1168_ = ((lean_object*)(l_Lean_Compiler_LCNF_pullInstances___closed__1));
v___x_1169_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_1168_, v___x_1167_, v___x_1166_, v___x_1165_);
return v___x_1169_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_pullInstances(void){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_obj_once(&l_Lean_Compiler_LCNF_pullInstances___closed__3, &l_Lean_Compiler_LCNF_pullInstances___closed__3_once, _init_l_Lean_Compiler_LCNF_pullInstances___closed__3);
return v___x_1170_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1226_ = lean_unsigned_to_nat(3825914912u);
v___x_1227_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_));
v___x_1228_ = l_Lean_Name_num___override(v___x_1227_, v___x_1226_);
return v___x_1228_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1230_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_));
v___x_1231_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_);
v___x_1232_ = l_Lean_Name_str___override(v___x_1231_, v___x_1230_);
return v___x_1232_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1234_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_));
v___x_1235_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_);
v___x_1236_ = l_Lean_Name_str___override(v___x_1235_, v___x_1234_);
return v___x_1236_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1237_ = lean_unsigned_to_nat(2u);
v___x_1238_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_);
v___x_1239_ = l_Lean_Name_num___override(v___x_1238_, v___x_1237_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1241_; uint8_t v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1241_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_));
v___x_1242_ = 1;
v___x_1243_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_);
v___x_1244_ = l_Lean_registerTraceClass(v___x_1241_, v___x_1242_, v___x_1243_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2____boxed(lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_();
return v_res_1246_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_PullLetDecls(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_pullInstances = _init_l_Lean_Compiler_LCNF_pullInstances();
lean_mark_persistent(l_Lean_Compiler_LCNF_pullInstances);
res = l___private_Lean_Compiler_LCNF_PullLetDecls_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PullLetDecls_3825914912____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_PullLetDecls(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_PullLetDecls(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PullLetDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_PullLetDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_PullLetDecls(builtin);
}
#ifdef __cplusplus
}
#endif
