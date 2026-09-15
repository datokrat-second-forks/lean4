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
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
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
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__9_value;
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___redArg(lean_object* v_fvarId_1_, lean_object* v_x_2_, lean_object* v___y_3_){
_start:
{
uint8_t v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_5_ = l_Lean_instBEqFVarId_beq(v_x_2_, v_fvarId_1_);
v___x_6_ = lean_box(v___x_5_);
v___x_7_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___y_3_);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___redArg___boxed(lean_object* v_fvarId_9_, lean_object* v_x_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___redArg(v_fvarId_9_, v_x_10_, v___y_11_);
lean_dec(v_x_10_);
lean_dec(v_fvarId_9_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar(lean_object* v_fvarId_14_, lean_object* v_x_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_23_ = l_Lean_instBEqFVarId_beq(v_x_15_, v_fvarId_14_);
v___x_24_ = lean_box(v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v___y_17_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar___boxed(lean_object* v_fvarId_27_, lean_object* v_x_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_visitVar(v_fvarId_27_, v_x_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
lean_dec(v___y_32_);
lean_dec_ref(v___y_31_);
lean_dec_ref(v___y_29_);
lean_dec(v_x_28_);
lean_dec(v_fvarId_27_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___redArg(lean_object* v_jp_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_40_ = lean_box(0);
v___x_41_ = l_Lean_FVarIdHashSet_insert(v___y_38_, v_jp_37_);
v___x_42_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_40_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___redArg___boxed(lean_object* v_jp_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___redArg(v_jp_44_, v___y_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited(lean_object* v_jp_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_box(0);
v___x_57_ = l_Lean_FVarIdHashSet_insert(v___y_50_, v_jp_48_);
v___x_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited___boxed(lean_object* v_jp_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_markJpVisited(v_jp_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
lean_dec(v___y_64_);
lean_dec_ref(v___y_63_);
lean_dec_ref(v___y_61_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0(lean_object* v_msg_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
lean_object* v___f_87_; lean_object* v___f_88_; lean_object* v___f_89_; lean_object* v___f_90_; lean_object* v___f_91_; lean_object* v___f_92_; lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v_toApplicative_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_172_; 
v___f_87_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__0));
v___f_88_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__1));
v___f_89_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__2));
v___f_90_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__3));
v___f_91_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__4));
v___f_92_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_92_, 0, v___f_91_);
lean_closure_set(v___f_92_, 1, v___f_90_);
v___f_93_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_93_, 0, v___f_90_);
v___f_94_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__5));
v___x_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_95_, 0, v___f_87_);
lean_ctor_set(v___x_95_, 1, v___f_88_);
v___x_96_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___f_89_);
lean_ctor_set(v___x_96_, 2, v___f_92_);
lean_ctor_set(v___x_96_, 3, v___f_93_);
lean_ctor_set(v___x_96_, 4, v___f_94_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___f_90_);
v___x_98_ = l_StateRefT_x27_instMonad___redArg(v___x_97_);
v_toApplicative_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_172_ == 0)
{
lean_object* v_unused_173_; 
v_unused_173_ = lean_ctor_get(v___x_98_, 1);
lean_dec(v_unused_173_);
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_172_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_toApplicative_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_172_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v_toFunctor_103_; lean_object* v_toSeq_104_; lean_object* v_toSeqLeft_105_; lean_object* v_toSeqRight_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_170_; 
v_toFunctor_103_ = lean_ctor_get(v_toApplicative_99_, 0);
v_toSeq_104_ = lean_ctor_get(v_toApplicative_99_, 2);
v_toSeqLeft_105_ = lean_ctor_get(v_toApplicative_99_, 3);
v_toSeqRight_106_ = lean_ctor_get(v_toApplicative_99_, 4);
v_isSharedCheck_170_ = !lean_is_exclusive(v_toApplicative_99_);
if (v_isSharedCheck_170_ == 0)
{
lean_object* v_unused_171_; 
v_unused_171_ = lean_ctor_get(v_toApplicative_99_, 1);
lean_dec(v_unused_171_);
v___x_108_ = v_toApplicative_99_;
v_isShared_109_ = v_isSharedCheck_170_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_toSeqRight_106_);
lean_inc(v_toSeqLeft_105_);
lean_inc(v_toSeq_104_);
lean_inc(v_toFunctor_103_);
lean_dec(v_toApplicative_99_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_170_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___f_110_; lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___f_115_; lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___x_119_; 
v___f_110_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__6));
v___f_111_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__7));
lean_inc_ref(v_toFunctor_103_);
v___f_112_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_112_, 0, v_toFunctor_103_);
v___f_113_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_113_, 0, v_toFunctor_103_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___f_112_);
lean_ctor_set(v___x_114_, 1, v___f_113_);
v___f_115_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_115_, 0, v_toSeqRight_106_);
v___f_116_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_116_, 0, v_toSeqLeft_105_);
v___f_117_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_117_, 0, v_toSeq_104_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 4, v___f_115_);
lean_ctor_set(v___x_108_, 3, v___f_116_);
lean_ctor_set(v___x_108_, 2, v___f_117_);
lean_ctor_set(v___x_108_, 1, v___f_110_);
lean_ctor_set(v___x_108_, 0, v___x_114_);
v___x_119_ = v___x_108_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v___f_110_);
lean_ctor_set(v_reuseFailAlloc_169_, 2, v___f_117_);
lean_ctor_set(v_reuseFailAlloc_169_, 3, v___f_116_);
lean_ctor_set(v_reuseFailAlloc_169_, 4, v___f_115_);
v___x_119_ = v_reuseFailAlloc_169_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_121_; 
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v___f_111_);
lean_ctor_set(v___x_101_, 0, v___x_119_);
v___x_121_ = v___x_101_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v___f_111_);
v___x_121_ = v_reuseFailAlloc_168_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_122_; lean_object* v_toApplicative_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_166_; 
v___x_122_ = l_StateRefT_x27_instMonad___redArg(v___x_121_);
v_toApplicative_123_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_166_ == 0)
{
lean_object* v_unused_167_; 
v_unused_167_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_167_);
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_166_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_toApplicative_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_166_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v_toFunctor_127_; lean_object* v_toSeq_128_; lean_object* v_toSeqLeft_129_; lean_object* v_toSeqRight_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_164_; 
v_toFunctor_127_ = lean_ctor_get(v_toApplicative_123_, 0);
v_toSeq_128_ = lean_ctor_get(v_toApplicative_123_, 2);
v_toSeqLeft_129_ = lean_ctor_get(v_toApplicative_123_, 3);
v_toSeqRight_130_ = lean_ctor_get(v_toApplicative_123_, 4);
v_isSharedCheck_164_ = !lean_is_exclusive(v_toApplicative_123_);
if (v_isSharedCheck_164_ == 0)
{
lean_object* v_unused_165_; 
v_unused_165_ = lean_ctor_get(v_toApplicative_123_, 1);
lean_dec(v_unused_165_);
v___x_132_ = v_toApplicative_123_;
v_isShared_133_ = v_isSharedCheck_164_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_toSeqRight_130_);
lean_inc(v_toSeqLeft_129_);
lean_inc(v_toSeq_128_);
lean_inc(v_toFunctor_127_);
lean_dec(v_toApplicative_123_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_164_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___f_134_; lean_object* v___f_135_; lean_object* v___f_136_; lean_object* v___f_137_; lean_object* v___x_138_; lean_object* v___f_139_; lean_object* v___f_140_; lean_object* v___f_141_; lean_object* v___x_143_; 
v___f_134_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__8));
v___f_135_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___closed__9));
lean_inc_ref(v_toFunctor_127_);
v___f_136_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_136_, 0, v_toFunctor_127_);
v___f_137_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_137_, 0, v_toFunctor_127_);
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v___f_136_);
lean_ctor_set(v___x_138_, 1, v___f_137_);
v___f_139_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_139_, 0, v_toSeqRight_130_);
v___f_140_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_140_, 0, v_toSeqLeft_129_);
v___f_141_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_141_, 0, v_toSeq_128_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 4, v___f_139_);
lean_ctor_set(v___x_132_, 3, v___f_140_);
lean_ctor_set(v___x_132_, 2, v___f_141_);
lean_ctor_set(v___x_132_, 1, v___f_134_);
lean_ctor_set(v___x_132_, 0, v___x_138_);
v___x_143_ = v___x_132_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_138_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v___f_134_);
lean_ctor_set(v_reuseFailAlloc_163_, 2, v___f_141_);
lean_ctor_set(v_reuseFailAlloc_163_, 3, v___f_140_);
lean_ctor_set(v_reuseFailAlloc_163_, 4, v___f_139_);
v___x_143_ = v_reuseFailAlloc_163_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_145_; 
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___f_135_);
lean_ctor_set(v___x_125_, 0, v___x_143_);
v___x_145_ = v___x_125_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_143_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v___f_135_);
v___x_145_ = v_reuseFailAlloc_162_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
lean_object* v___f_146_; lean_object* v___f_147_; lean_object* v___f_148_; lean_object* v___f_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_15205__overap_160_; lean_object* v___x_161_; 
lean_inc_ref_n(v___x_145_, 6);
v___f_146_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_146_, 0, v___x_145_);
v___f_147_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_147_, 0, v___x_145_);
v___f_148_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_148_, 0, v___x_145_);
v___f_149_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_149_, 0, v___x_145_);
v___x_150_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_150_, 0, lean_box(0));
lean_closure_set(v___x_150_, 1, lean_box(0));
lean_closure_set(v___x_150_, 2, v___x_145_);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___f_146_);
v___x_152_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_152_, 0, lean_box(0));
lean_closure_set(v___x_152_, 1, lean_box(0));
lean_closure_set(v___x_152_, 2, v___x_145_);
v___x_153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_153_, 0, v___x_151_);
lean_ctor_set(v___x_153_, 1, v___x_152_);
lean_ctor_set(v___x_153_, 2, v___f_147_);
lean_ctor_set(v___x_153_, 3, v___f_148_);
lean_ctor_set(v___x_153_, 4, v___f_149_);
v___x_154_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_154_, 0, lean_box(0));
lean_closure_set(v___x_154_, 1, lean_box(0));
lean_closure_set(v___x_154_, 2, v___x_145_);
v___x_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_153_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = 0;
v___x_157_ = lean_box(v___x_156_);
v___x_158_ = l_instInhabitedOfMonad___redArg(v___x_155_, v___x_157_);
v___x_159_ = l_instInhabitedReaderT___redArg(v___x_158_);
v___x_15205__overap_160_ = lean_panic_fn_borrowed(v___x_159_, v_msg_79_);
lean_dec(v___x_159_);
lean_inc(v___y_85_);
lean_inc_ref(v___y_84_);
lean_inc(v___y_83_);
lean_inc_ref(v___y_82_);
lean_inc_ref(v___y_80_);
v___x_161_ = lean_apply_7(v___x_15205__overap_160_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, lean_box(0));
return v___x_161_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0___boxed(lean_object* v_msg_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0(v_msg_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_);
lean_dec(v___y_180_);
lean_dec_ref(v___y_179_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec_ref(v___y_175_);
return v_res_182_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1(lean_object* v___y_183_, lean_object* v_as_184_, size_t v_i_185_, size_t v_stop_186_){
_start:
{
uint8_t v___x_187_; 
v___x_187_ = lean_usize_dec_eq(v_i_185_, v_stop_186_);
if (v___x_187_ == 0)
{
lean_object* v_targetSet_188_; lean_object* v___x_189_; uint8_t v___x_190_; uint8_t v___x_191_; 
v_targetSet_188_ = lean_ctor_get(v___y_183_, 0);
v___x_189_ = lean_array_uget_borrowed(v_as_184_, v_i_185_);
v___x_190_ = 1;
v___x_191_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v___x_190_, v___x_189_, v_targetSet_188_);
if (v___x_191_ == 0)
{
size_t v___x_192_; size_t v___x_193_; 
v___x_192_ = ((size_t)1ULL);
v___x_193_ = lean_usize_add(v_i_185_, v___x_192_);
v_i_185_ = v___x_193_;
goto _start;
}
else
{
return v___x_191_;
}
}
else
{
uint8_t v___x_195_; 
v___x_195_ = 0;
return v___x_195_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1___boxed(lean_object* v___y_196_, lean_object* v_as_197_, lean_object* v_i_198_, lean_object* v_stop_199_){
_start:
{
size_t v_i_boxed_200_; size_t v_stop_boxed_201_; uint8_t v_res_202_; lean_object* v_r_203_; 
v_i_boxed_200_ = lean_unbox_usize(v_i_198_);
lean_dec(v_i_198_);
v_stop_boxed_201_ = lean_unbox_usize(v_stop_199_);
lean_dec(v_stop_199_);
v_res_202_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1(v___y_196_, v_as_197_, v_i_boxed_200_, v_stop_boxed_201_);
lean_dec_ref(v_as_197_);
lean_dec_ref(v___y_196_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_207_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__2));
v___x_208_ = lean_unsigned_to_nat(48u);
v___x_209_ = lean_unsigned_to_nat(76u);
v___x_210_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__1));
v___x_211_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__0));
v___x_212_ = l_mkPanicMessageWithDecl(v___x_211_, v___x_210_, v___x_209_, v___x_208_, v___x_207_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(lean_object* v_fvarId_213_, lean_object* v_c_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
switch(lean_obj_tag(v_c_214_))
{
case 0:
{
lean_object* v_decl_222_; lean_object* v_k_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_236_; 
v_decl_222_ = lean_ctor_get(v_c_214_, 0);
v_k_223_ = lean_ctor_get(v_c_214_, 1);
v_isSharedCheck_236_ = !lean_is_exclusive(v_c_214_);
if (v_isSharedCheck_236_ == 0)
{
v___x_225_ = v_c_214_;
v_isShared_226_ = v_isSharedCheck_236_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_k_223_);
lean_inc(v_decl_222_);
lean_dec(v_c_214_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_236_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v_targetSet_227_; uint8_t v___x_228_; uint8_t v___x_229_; 
v_targetSet_227_ = lean_ctor_get(v___y_215_, 0);
v___x_228_ = 1;
v___x_229_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_LetDecl_depOn(v___x_228_, v_decl_222_, v_targetSet_227_);
lean_dec_ref(v_decl_222_);
if (v___x_229_ == 0)
{
lean_del_object(v___x_225_);
v_c_214_ = v_k_223_;
goto _start;
}
else
{
lean_object* v___x_231_; lean_object* v___x_233_; 
lean_dec_ref(v_k_223_);
v___x_231_ = lean_box(v___x_229_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 1, v___y_216_);
lean_ctor_set(v___x_225_, 0, v___x_231_);
v___x_233_ = v___x_225_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v___y_216_);
v___x_233_ = v_reuseFailAlloc_235_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_234_; 
v___x_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
return v___x_234_;
}
}
}
}
case 2:
{
lean_object* v_decl_237_; lean_object* v_k_238_; lean_object* v_fvarId_239_; lean_object* v_value_240_; lean_object* v___x_241_; 
v_decl_237_ = lean_ctor_get(v_c_214_, 0);
lean_inc_ref(v_decl_237_);
v_k_238_ = lean_ctor_get(v_c_214_, 1);
lean_inc_ref(v_k_238_);
lean_dec_ref_known(v_c_214_, 2);
v_fvarId_239_ = lean_ctor_get(v_decl_237_, 0);
lean_inc(v_fvarId_239_);
v_value_240_ = lean_ctor_get(v_decl_237_, 4);
lean_inc_ref(v_value_240_);
lean_dec_ref(v_decl_237_);
v___x_241_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(v_fvarId_213_, v_value_240_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v_a_242_; lean_object* v_fst_243_; uint8_t v___x_244_; 
v_a_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc(v_a_242_);
v_fst_243_ = lean_ctor_get(v_a_242_, 0);
v___x_244_ = lean_unbox(v_fst_243_);
if (v___x_244_ == 0)
{
lean_object* v_snd_245_; lean_object* v___x_246_; 
lean_dec_ref_known(v___x_241_, 1);
v_snd_245_ = lean_ctor_get(v_a_242_, 1);
lean_inc(v_snd_245_);
lean_dec(v_a_242_);
v___x_246_ = l_Lean_FVarIdHashSet_insert(v_snd_245_, v_fvarId_239_);
v_c_214_ = v_k_238_;
v___y_216_ = v___x_246_;
goto _start;
}
else
{
lean_dec(v_a_242_);
lean_dec(v_fvarId_239_);
lean_dec_ref(v_k_238_);
return v___x_241_;
}
}
else
{
lean_dec(v_fvarId_239_);
lean_dec_ref(v_k_238_);
return v___x_241_;
}
}
case 3:
{
lean_object* v_fvarId_248_; lean_object* v_args_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_287_; 
v_fvarId_248_ = lean_ctor_get(v_c_214_, 0);
v_args_249_ = lean_ctor_get(v_c_214_, 1);
v_isSharedCheck_287_ = !lean_is_exclusive(v_c_214_);
if (v_isSharedCheck_287_ == 0)
{
v___x_251_ = v_c_214_;
v_isShared_252_ = v_isSharedCheck_287_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_args_249_);
lean_inc(v_fvarId_248_);
lean_dec(v_c_214_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_287_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
uint8_t v___y_254_; lean_object* v___x_278_; lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_278_ = lean_unsigned_to_nat(0u);
v___x_279_ = lean_array_get_size(v_args_249_);
v___x_280_ = lean_nat_dec_lt(v___x_278_, v___x_279_);
if (v___x_280_ == 0)
{
lean_dec_ref(v_args_249_);
v___y_254_ = v___x_280_;
goto v___jp_253_;
}
else
{
if (v___x_280_ == 0)
{
lean_dec_ref(v_args_249_);
v___y_254_ = v___x_280_;
goto v___jp_253_;
}
else
{
size_t v___x_281_; size_t v___x_282_; uint8_t v___x_283_; 
v___x_281_ = ((size_t)0ULL);
v___x_282_ = lean_usize_of_nat(v___x_279_);
v___x_283_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__1(v___y_215_, v_args_249_, v___x_281_, v___x_282_);
lean_dec_ref(v_args_249_);
if (v___x_283_ == 0)
{
v___y_254_ = v___x_283_;
goto v___jp_253_;
}
else
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
lean_del_object(v___x_251_);
lean_dec(v_fvarId_248_);
v___x_284_ = lean_box(v___x_283_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___y_216_);
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
}
}
v___jp_253_:
{
uint8_t v___x_255_; 
v___x_255_ = l_Lean_FVarIdHashSet_contains(v___y_216_, v_fvarId_248_);
if (v___x_255_ == 0)
{
uint8_t v___x_256_; lean_object* v___x_257_; 
lean_del_object(v___x_251_);
v___x_256_ = 1;
v___x_257_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_256_, v_fvarId_248_, v___y_218_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc(v_a_258_);
lean_dec_ref_known(v___x_257_, 1);
if (lean_obj_tag(v_a_258_) == 1)
{
lean_object* v_val_259_; lean_object* v_value_260_; lean_object* v___x_261_; 
v_val_259_ = lean_ctor_get(v_a_258_, 0);
lean_inc(v_val_259_);
lean_dec_ref_known(v_a_258_, 1);
v_value_260_ = lean_ctor_get(v_val_259_, 4);
lean_inc_ref(v_value_260_);
lean_dec(v_val_259_);
v___x_261_ = l_Lean_FVarIdHashSet_insert(v___y_216_, v_fvarId_248_);
v_c_214_ = v_value_260_;
v___y_216_ = v___x_261_;
goto _start;
}
else
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v_a_258_);
lean_dec(v_fvarId_248_);
v___x_263_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3, &l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___closed__3);
v___x_264_ = l_panic___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__0(v___x_263_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
return v___x_264_;
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
lean_dec(v_fvarId_248_);
lean_dec_ref(v___y_216_);
v_a_265_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_257_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_257_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
else
{
lean_object* v___x_273_; lean_object* v___x_275_; 
lean_dec(v_fvarId_248_);
v___x_273_ = lean_box(v___y_254_);
if (v_isShared_252_ == 0)
{
lean_ctor_set_tag(v___x_251_, 0);
lean_ctor_set(v___x_251_, 1, v___y_216_);
lean_ctor_set(v___x_251_, 0, v___x_273_);
v___x_275_ = v___x_251_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___y_216_);
v___x_275_ = v_reuseFailAlloc_277_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_276_; 
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
}
}
}
case 4:
{
lean_object* v_cases_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_316_; 
v_cases_288_ = lean_ctor_get(v_c_214_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v_c_214_);
if (v_isSharedCheck_316_ == 0)
{
v___x_290_ = v_c_214_;
v_isShared_291_ = v_isSharedCheck_316_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_cases_288_);
lean_dec(v_c_214_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_316_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v_discr_292_; lean_object* v_alts_293_; uint8_t v___x_294_; 
v_discr_292_ = lean_ctor_get(v_cases_288_, 2);
lean_inc(v_discr_292_);
v_alts_293_ = lean_ctor_get(v_cases_288_, 3);
lean_inc_ref(v_alts_293_);
lean_dec_ref(v_cases_288_);
v___x_294_ = l_Lean_instBEqFVarId_beq(v_discr_292_, v_fvarId_213_);
lean_dec(v_discr_292_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = lean_array_get_size(v_alts_293_);
v___x_297_ = lean_nat_dec_lt(v___x_295_, v___x_296_);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_301_; 
lean_dec_ref(v_alts_293_);
v___x_298_ = lean_box(v___x_297_);
v___x_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
lean_ctor_set(v___x_299_, 1, v___y_216_);
if (v_isShared_291_ == 0)
{
lean_ctor_set_tag(v___x_290_, 0);
lean_ctor_set(v___x_290_, 0, v___x_299_);
v___x_301_ = v___x_290_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_299_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
else
{
if (v___x_297_ == 0)
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_306_; 
lean_dec_ref(v_alts_293_);
v___x_303_ = lean_box(v___x_297_);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___y_216_);
if (v_isShared_291_ == 0)
{
lean_ctor_set_tag(v___x_290_, 0);
lean_ctor_set(v___x_290_, 0, v___x_304_);
v___x_306_ = v___x_290_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_304_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
else
{
size_t v___x_308_; size_t v___x_309_; lean_object* v___x_310_; 
lean_del_object(v___x_290_);
v___x_308_ = ((size_t)0ULL);
v___x_309_ = lean_usize_of_nat(v___x_296_);
v___x_310_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2(v_fvarId_213_, v_alts_293_, v___x_308_, v___x_309_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
lean_dec_ref(v_alts_293_);
return v___x_310_;
}
}
}
else
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_314_; 
lean_dec_ref(v_alts_293_);
v___x_311_ = lean_box(v___x_294_);
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
lean_ctor_set(v___x_312_, 1, v___y_216_);
if (v_isShared_291_ == 0)
{
lean_ctor_set_tag(v___x_290_, 0);
lean_ctor_set(v___x_290_, 0, v___x_312_);
v___x_314_ = v___x_290_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_327_; 
v_fvarId_317_ = lean_ctor_get(v_c_214_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v_c_214_);
if (v_isSharedCheck_327_ == 0)
{
v___x_319_ = v_c_214_;
v_isShared_320_ = v_isSharedCheck_327_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_fvarId_317_);
lean_dec(v_c_214_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_327_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
uint8_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_321_ = l_Lean_instBEqFVarId_beq(v_fvarId_317_, v_fvarId_213_);
lean_dec(v_fvarId_317_);
v___x_322_ = lean_box(v___x_321_);
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v___y_216_);
if (v_isShared_320_ == 0)
{
lean_ctor_set_tag(v___x_319_, 0);
lean_ctor_set(v___x_319_, 0, v___x_323_);
v___x_325_ = v___x_319_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_323_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
case 6:
{
lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_337_; 
v_isSharedCheck_337_ = !lean_is_exclusive(v_c_214_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; 
v_unused_338_ = lean_ctor_get(v_c_214_, 0);
lean_dec(v_unused_338_);
v___x_329_ = v_c_214_;
v_isShared_330_ = v_isSharedCheck_337_;
goto v_resetjp_328_;
}
else
{
lean_dec(v_c_214_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_337_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
uint8_t v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_335_; 
v___x_331_ = 0;
v___x_332_ = lean_box(v___x_331_);
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v___y_216_);
if (v_isShared_330_ == 0)
{
lean_ctor_set_tag(v___x_329_, 0);
lean_ctor_set(v___x_329_, 0, v___x_333_);
v___x_335_ = v___x_329_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v___x_333_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
case 7:
{
lean_object* v_fvarId_339_; lean_object* v_y_340_; lean_object* v_k_341_; uint8_t v___x_342_; 
v_fvarId_339_ = lean_ctor_get(v_c_214_, 0);
lean_inc(v_fvarId_339_);
v_y_340_ = lean_ctor_get(v_c_214_, 2);
lean_inc(v_y_340_);
v_k_341_ = lean_ctor_get(v_c_214_, 3);
lean_inc_ref(v_k_341_);
lean_dec_ref_known(v_c_214_, 4);
v___x_342_ = l_Lean_instBEqFVarId_beq(v_fvarId_339_, v_fvarId_213_);
lean_dec(v_fvarId_339_);
if (v___x_342_ == 0)
{
lean_object* v_targetSet_343_; uint8_t v___x_344_; uint8_t v___x_345_; 
v_targetSet_343_ = lean_ctor_get(v___y_215_, 0);
v___x_344_ = 1;
v___x_345_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v___x_344_, v_y_340_, v_targetSet_343_);
lean_dec(v_y_340_);
if (v___x_345_ == 0)
{
v_c_214_ = v_k_341_;
goto _start;
}
else
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
lean_dec_ref(v_k_341_);
v___x_347_ = lean_box(v___x_345_);
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v___y_216_);
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
else
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
lean_dec_ref(v_k_341_);
lean_dec(v_y_340_);
v___x_350_ = lean_box(v___x_342_);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v___y_216_);
v___x_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
}
}
case 8:
{
lean_object* v_fvarId_353_; lean_object* v_y_354_; lean_object* v_k_355_; uint8_t v___x_356_; 
v_fvarId_353_ = lean_ctor_get(v_c_214_, 0);
lean_inc(v_fvarId_353_);
v_y_354_ = lean_ctor_get(v_c_214_, 2);
lean_inc(v_y_354_);
v_k_355_ = lean_ctor_get(v_c_214_, 3);
lean_inc_ref(v_k_355_);
lean_dec_ref_known(v_c_214_, 4);
v___x_356_ = l_Lean_instBEqFVarId_beq(v_fvarId_353_, v_fvarId_213_);
lean_dec(v_fvarId_353_);
if (v___x_356_ == 0)
{
uint8_t v___x_357_; 
v___x_357_ = l_Lean_instBEqFVarId_beq(v_y_354_, v_fvarId_213_);
lean_dec(v_y_354_);
if (v___x_357_ == 0)
{
v_c_214_ = v_k_355_;
goto _start;
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
lean_dec_ref(v_k_355_);
v___x_359_ = lean_box(v___x_357_);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v___y_216_);
v___x_361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
return v___x_361_;
}
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
lean_dec_ref(v_k_355_);
lean_dec(v_y_354_);
v___x_362_ = lean_box(v___x_356_);
v___x_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
lean_ctor_set(v___x_363_, 1, v___y_216_);
v___x_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
}
case 9:
{
lean_object* v_fvarId_365_; lean_object* v_y_366_; lean_object* v_k_367_; uint8_t v___x_368_; 
v_fvarId_365_ = lean_ctor_get(v_c_214_, 0);
lean_inc(v_fvarId_365_);
v_y_366_ = lean_ctor_get(v_c_214_, 3);
lean_inc(v_y_366_);
v_k_367_ = lean_ctor_get(v_c_214_, 5);
lean_inc_ref(v_k_367_);
lean_dec_ref_known(v_c_214_, 6);
v___x_368_ = l_Lean_instBEqFVarId_beq(v_fvarId_365_, v_fvarId_213_);
lean_dec(v_fvarId_365_);
if (v___x_368_ == 0)
{
uint8_t v___x_369_; 
v___x_369_ = l_Lean_instBEqFVarId_beq(v_y_366_, v_fvarId_213_);
lean_dec(v_y_366_);
if (v___x_369_ == 0)
{
v_c_214_ = v_k_367_;
goto _start;
}
else
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
lean_dec_ref(v_k_367_);
v___x_371_ = lean_box(v___x_369_);
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v___y_216_);
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
return v___x_373_;
}
}
else
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
lean_dec_ref(v_k_367_);
lean_dec(v_y_366_);
v___x_374_ = lean_box(v___x_368_);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v___y_216_);
v___x_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
return v___x_376_;
}
}
case 12:
{
lean_object* v_fvarId_377_; lean_object* v_k_378_; uint8_t v___x_379_; 
v_fvarId_377_ = lean_ctor_get(v_c_214_, 0);
lean_inc(v_fvarId_377_);
v_k_378_ = lean_ctor_get(v_c_214_, 3);
lean_inc_ref(v_k_378_);
lean_dec_ref_known(v_c_214_, 4);
v___x_379_ = l_Lean_instBEqFVarId_beq(v_fvarId_377_, v_fvarId_213_);
lean_dec(v_fvarId_377_);
if (v___x_379_ == 0)
{
v_c_214_ = v_k_378_;
goto _start;
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
lean_dec_ref(v_k_378_);
v___x_381_ = lean_box(v___x_379_);
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___y_216_);
v___x_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
return v___x_383_;
}
}
case 13:
{
lean_object* v_fvarId_384_; lean_object* v_k_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_396_; 
v_fvarId_384_ = lean_ctor_get(v_c_214_, 0);
v_k_385_ = lean_ctor_get(v_c_214_, 1);
v_isSharedCheck_396_ = !lean_is_exclusive(v_c_214_);
if (v_isSharedCheck_396_ == 0)
{
v___x_387_ = v_c_214_;
v_isShared_388_ = v_isSharedCheck_396_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_k_385_);
lean_inc(v_fvarId_384_);
lean_dec(v_c_214_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_396_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
uint8_t v___x_389_; 
v___x_389_ = l_Lean_instBEqFVarId_beq(v_fvarId_384_, v_fvarId_213_);
lean_dec(v_fvarId_384_);
if (v___x_389_ == 0)
{
lean_del_object(v___x_387_);
v_c_214_ = v_k_385_;
goto _start;
}
else
{
lean_object* v___x_391_; lean_object* v___x_393_; 
lean_dec_ref(v_k_385_);
v___x_391_ = lean_box(v___x_389_);
if (v_isShared_388_ == 0)
{
lean_ctor_set_tag(v___x_387_, 0);
lean_ctor_set(v___x_387_, 1, v___y_216_);
lean_ctor_set(v___x_387_, 0, v___x_391_);
v___x_393_ = v___x_387_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_391_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v___y_216_);
v___x_393_ = v_reuseFailAlloc_395_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; 
v___x_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
return v___x_394_;
}
}
}
}
default: 
{
lean_object* v_fvarId_397_; lean_object* v_k_398_; uint8_t v___x_399_; 
v_fvarId_397_ = lean_ctor_get(v_c_214_, 0);
lean_inc(v_fvarId_397_);
v_k_398_ = lean_ctor_get(v_c_214_, 2);
lean_inc_ref(v_k_398_);
lean_dec_ref(v_c_214_);
v___x_399_ = l_Lean_instBEqFVarId_beq(v_fvarId_397_, v_fvarId_213_);
lean_dec(v_fvarId_397_);
if (v___x_399_ == 0)
{
v_c_214_ = v_k_398_;
goto _start;
}
else
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec_ref(v_k_398_);
v___x_401_ = lean_box(v___x_399_);
v___x_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v___y_216_);
v___x_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
return v___x_403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2(lean_object* v_fvarId_404_, lean_object* v_as_405_, size_t v_i_406_, size_t v_stop_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
uint8_t v___x_415_; 
v___x_415_ = lean_usize_dec_eq(v_i_406_, v_stop_407_);
if (v___x_415_ == 0)
{
uint8_t v___x_416_; lean_object* v___y_418_; lean_object* v___x_444_; 
v___x_416_ = 1;
v___x_444_ = lean_array_uget_borrowed(v_as_405_, v_i_406_);
switch(lean_obj_tag(v___x_444_))
{
case 0:
{
lean_object* v_code_445_; 
v_code_445_ = lean_ctor_get(v___x_444_, 2);
lean_inc_ref(v_code_445_);
v___y_418_ = v_code_445_;
goto v___jp_417_;
}
case 1:
{
lean_object* v_code_446_; 
v_code_446_ = lean_ctor_get(v___x_444_, 1);
lean_inc_ref(v_code_446_);
v___y_418_ = v_code_446_;
goto v___jp_417_;
}
default: 
{
lean_object* v_code_447_; 
v_code_447_ = lean_ctor_get(v___x_444_, 0);
lean_inc_ref(v_code_447_);
v___y_418_ = v_code_447_;
goto v___jp_417_;
}
}
v___jp_417_:
{
lean_object* v___x_419_; 
v___x_419_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(v_fvarId_404_, v___y_418_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_443_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_443_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_443_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_443_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v_fst_424_; uint8_t v___x_425_; 
v_fst_424_ = lean_ctor_get(v_a_420_, 0);
v___x_425_ = lean_unbox(v_fst_424_);
if (v___x_425_ == 0)
{
lean_object* v_snd_426_; size_t v___x_427_; size_t v___x_428_; 
lean_del_object(v___x_422_);
v_snd_426_ = lean_ctor_get(v_a_420_, 1);
lean_inc(v_snd_426_);
lean_dec(v_a_420_);
v___x_427_ = ((size_t)1ULL);
v___x_428_ = lean_usize_add(v_i_406_, v___x_427_);
v_i_406_ = v___x_428_;
v___y_409_ = v_snd_426_;
goto _start;
}
else
{
lean_object* v_snd_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_441_; 
v_snd_430_ = lean_ctor_get(v_a_420_, 1);
v_isSharedCheck_441_ = !lean_is_exclusive(v_a_420_);
if (v_isSharedCheck_441_ == 0)
{
lean_object* v_unused_442_; 
v_unused_442_ = lean_ctor_get(v_a_420_, 0);
lean_dec(v_unused_442_);
v___x_432_ = v_a_420_;
v_isShared_433_ = v_isSharedCheck_441_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_snd_430_);
lean_dec(v_a_420_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_441_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_434_ = lean_box(v___x_416_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_434_);
v___x_436_ = v___x_432_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_snd_430_);
v___x_436_ = v_reuseFailAlloc_440_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
lean_object* v___x_438_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_436_);
v___x_438_ = v___x_422_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_436_);
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
}
}
else
{
return v___x_419_;
}
}
}
else
{
uint8_t v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_448_ = 0;
v___x_449_ = lean_box(v___x_448_);
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v___y_409_);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2___boxed(lean_object* v_fvarId_452_, lean_object* v_as_453_, lean_object* v_i_454_, lean_object* v_stop_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
size_t v_i_boxed_463_; size_t v_stop_boxed_464_; lean_object* v_res_465_; 
v_i_boxed_463_ = lean_unbox_usize(v_i_454_);
lean_dec(v_i_454_);
v_stop_boxed_464_ = lean_unbox_usize(v_stop_455_);
lean_dec(v_stop_455_);
v_res_465_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go_spec__2(v_fvarId_452_, v_as_453_, v_i_boxed_463_, v_stop_boxed_464_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec_ref(v___y_456_);
lean_dec_ref(v_as_453_);
lean_dec(v_fvarId_452_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go___boxed(lean_object* v_fvarId_466_, lean_object* v_c_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(v_fvarId_466_, v_c_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec_ref(v___y_468_);
lean_dec(v_fvarId_466_);
return v_res_475_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg(lean_object* v_k_476_, lean_object* v_t_477_){
_start:
{
if (lean_obj_tag(v_t_477_) == 0)
{
lean_object* v_k_478_; lean_object* v_l_479_; lean_object* v_r_480_; uint8_t v___x_481_; 
v_k_478_ = lean_ctor_get(v_t_477_, 1);
v_l_479_ = lean_ctor_get(v_t_477_, 3);
v_r_480_ = lean_ctor_get(v_t_477_, 4);
v___x_481_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_476_, v_k_478_);
switch(v___x_481_)
{
case 0:
{
v_t_477_ = v_l_479_;
goto _start;
}
case 1:
{
uint8_t v___x_483_; 
v___x_483_ = 1;
return v___x_483_;
}
default: 
{
v_t_477_ = v_r_480_;
goto _start;
}
}
}
else
{
uint8_t v___x_485_; 
v___x_485_ = 0;
return v___x_485_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg___boxed(lean_object* v_k_486_, lean_object* v_t_487_){
_start:
{
uint8_t v_res_488_; lean_object* v_r_489_; 
v_res_488_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg(v_k_486_, v_t_487_);
lean_dec(v_t_487_);
lean_dec(v_k_486_);
v_r_489_ = lean_box(v_res_488_);
return v_r_489_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(lean_object* v_k_490_, lean_object* v_v_491_, lean_object* v_t_492_){
_start:
{
if (lean_obj_tag(v_t_492_) == 0)
{
lean_object* v_size_493_; lean_object* v_k_494_; lean_object* v_v_495_; lean_object* v_l_496_; lean_object* v_r_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_777_; 
v_size_493_ = lean_ctor_get(v_t_492_, 0);
v_k_494_ = lean_ctor_get(v_t_492_, 1);
v_v_495_ = lean_ctor_get(v_t_492_, 2);
v_l_496_ = lean_ctor_get(v_t_492_, 3);
v_r_497_ = lean_ctor_get(v_t_492_, 4);
v_isSharedCheck_777_ = !lean_is_exclusive(v_t_492_);
if (v_isSharedCheck_777_ == 0)
{
v___x_499_ = v_t_492_;
v_isShared_500_ = v_isSharedCheck_777_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_r_497_);
lean_inc(v_l_496_);
lean_inc(v_v_495_);
lean_inc(v_k_494_);
lean_inc(v_size_493_);
lean_dec(v_t_492_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_777_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
uint8_t v___x_501_; 
v___x_501_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_490_, v_k_494_);
switch(v___x_501_)
{
case 0:
{
lean_object* v_impl_502_; lean_object* v___x_503_; 
lean_dec(v_size_493_);
v_impl_502_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(v_k_490_, v_v_491_, v_l_496_);
v___x_503_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_497_) == 0)
{
lean_object* v_size_504_; lean_object* v_size_505_; lean_object* v_k_506_; lean_object* v_v_507_; lean_object* v_l_508_; lean_object* v_r_509_; lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v_size_504_ = lean_ctor_get(v_r_497_, 0);
v_size_505_ = lean_ctor_get(v_impl_502_, 0);
lean_inc(v_size_505_);
v_k_506_ = lean_ctor_get(v_impl_502_, 1);
lean_inc(v_k_506_);
v_v_507_ = lean_ctor_get(v_impl_502_, 2);
lean_inc(v_v_507_);
v_l_508_ = lean_ctor_get(v_impl_502_, 3);
lean_inc(v_l_508_);
v_r_509_ = lean_ctor_get(v_impl_502_, 4);
lean_inc(v_r_509_);
v___x_510_ = lean_unsigned_to_nat(3u);
v___x_511_ = lean_nat_mul(v___x_510_, v_size_504_);
v___x_512_ = lean_nat_dec_lt(v___x_511_, v_size_505_);
lean_dec(v___x_511_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
lean_dec(v_r_509_);
lean_dec(v_l_508_);
lean_dec(v_v_507_);
lean_dec(v_k_506_);
v___x_513_ = lean_nat_add(v___x_503_, v_size_505_);
lean_dec(v_size_505_);
v___x_514_ = lean_nat_add(v___x_513_, v_size_504_);
lean_dec(v___x_513_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 3, v_impl_502_);
lean_ctor_set(v___x_499_, 0, v___x_514_);
v___x_516_ = v___x_499_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_517_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_517_, 3, v_impl_502_);
lean_ctor_set(v_reuseFailAlloc_517_, 4, v_r_497_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
else
{
lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_583_; 
v_isSharedCheck_583_ = !lean_is_exclusive(v_impl_502_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; lean_object* v_unused_585_; lean_object* v_unused_586_; lean_object* v_unused_587_; lean_object* v_unused_588_; 
v_unused_584_ = lean_ctor_get(v_impl_502_, 4);
lean_dec(v_unused_584_);
v_unused_585_ = lean_ctor_get(v_impl_502_, 3);
lean_dec(v_unused_585_);
v_unused_586_ = lean_ctor_get(v_impl_502_, 2);
lean_dec(v_unused_586_);
v_unused_587_ = lean_ctor_get(v_impl_502_, 1);
lean_dec(v_unused_587_);
v_unused_588_ = lean_ctor_get(v_impl_502_, 0);
lean_dec(v_unused_588_);
v___x_519_ = v_impl_502_;
v_isShared_520_ = v_isSharedCheck_583_;
goto v_resetjp_518_;
}
else
{
lean_dec(v_impl_502_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_583_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v_size_521_; lean_object* v_size_522_; lean_object* v_k_523_; lean_object* v_v_524_; lean_object* v_l_525_; lean_object* v_r_526_; lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v_size_521_ = lean_ctor_get(v_l_508_, 0);
v_size_522_ = lean_ctor_get(v_r_509_, 0);
v_k_523_ = lean_ctor_get(v_r_509_, 1);
v_v_524_ = lean_ctor_get(v_r_509_, 2);
v_l_525_ = lean_ctor_get(v_r_509_, 3);
v_r_526_ = lean_ctor_get(v_r_509_, 4);
v___x_527_ = lean_unsigned_to_nat(2u);
v___x_528_ = lean_nat_mul(v___x_527_, v_size_521_);
v___x_529_ = lean_nat_dec_lt(v_size_522_, v___x_528_);
lean_dec(v___x_528_);
if (v___x_529_ == 0)
{
lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_558_; 
lean_inc(v_r_526_);
lean_inc(v_l_525_);
lean_inc(v_v_524_);
lean_inc(v_k_523_);
v_isSharedCheck_558_ = !lean_is_exclusive(v_r_509_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; lean_object* v_unused_560_; lean_object* v_unused_561_; lean_object* v_unused_562_; lean_object* v_unused_563_; 
v_unused_559_ = lean_ctor_get(v_r_509_, 4);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v_r_509_, 3);
lean_dec(v_unused_560_);
v_unused_561_ = lean_ctor_get(v_r_509_, 2);
lean_dec(v_unused_561_);
v_unused_562_ = lean_ctor_get(v_r_509_, 1);
lean_dec(v_unused_562_);
v_unused_563_ = lean_ctor_get(v_r_509_, 0);
lean_dec(v_unused_563_);
v___x_531_ = v_r_509_;
v_isShared_532_ = v_isSharedCheck_558_;
goto v_resetjp_530_;
}
else
{
lean_dec(v_r_509_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_558_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___x_546_; lean_object* v___y_548_; 
v___x_533_ = lean_nat_add(v___x_503_, v_size_505_);
lean_dec(v_size_505_);
v___x_534_ = lean_nat_add(v___x_533_, v_size_504_);
lean_dec(v___x_533_);
v___x_546_ = lean_nat_add(v___x_503_, v_size_521_);
if (lean_obj_tag(v_l_525_) == 0)
{
lean_object* v_size_556_; 
v_size_556_ = lean_ctor_get(v_l_525_, 0);
lean_inc(v_size_556_);
v___y_548_ = v_size_556_;
goto v___jp_547_;
}
else
{
lean_object* v___x_557_; 
v___x_557_ = lean_unsigned_to_nat(0u);
v___y_548_ = v___x_557_;
goto v___jp_547_;
}
v___jp_535_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_539_ = lean_nat_add(v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec(v___y_537_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 4, v_r_497_);
lean_ctor_set(v___x_531_, 3, v_r_526_);
lean_ctor_set(v___x_531_, 2, v_v_495_);
lean_ctor_set(v___x_531_, 1, v_k_494_);
lean_ctor_set(v___x_531_, 0, v___x_539_);
v___x_541_ = v___x_531_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_545_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_545_, 3, v_r_526_);
lean_ctor_set(v_reuseFailAlloc_545_, 4, v_r_497_);
v___x_541_ = v_reuseFailAlloc_545_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_543_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 4, v___x_541_);
lean_ctor_set(v___x_519_, 3, v___y_536_);
lean_ctor_set(v___x_519_, 2, v_v_524_);
lean_ctor_set(v___x_519_, 1, v_k_523_);
lean_ctor_set(v___x_519_, 0, v___x_534_);
v___x_543_ = v___x_519_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_534_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_k_523_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v_v_524_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v___y_536_);
lean_ctor_set(v_reuseFailAlloc_544_, 4, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
v___jp_547_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_nat_add(v___x_546_, v___y_548_);
lean_dec(v___y_548_);
lean_dec(v___x_546_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_l_525_);
lean_ctor_set(v___x_499_, 3, v_l_508_);
lean_ctor_set(v___x_499_, 2, v_v_507_);
lean_ctor_set(v___x_499_, 1, v_k_506_);
lean_ctor_set(v___x_499_, 0, v___x_549_);
v___x_551_ = v___x_499_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_k_506_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_v_507_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_l_508_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_l_525_);
v___x_551_ = v_reuseFailAlloc_555_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_552_; 
v___x_552_ = lean_nat_add(v___x_503_, v_size_504_);
if (lean_obj_tag(v_r_526_) == 0)
{
lean_object* v_size_553_; 
v_size_553_ = lean_ctor_get(v_r_526_, 0);
lean_inc(v_size_553_);
v___y_536_ = v___x_551_;
v___y_537_ = v___x_552_;
v___y_538_ = v_size_553_;
goto v___jp_535_;
}
else
{
lean_object* v___x_554_; 
v___x_554_ = lean_unsigned_to_nat(0u);
v___y_536_ = v___x_551_;
v___y_537_ = v___x_552_;
v___y_538_ = v___x_554_;
goto v___jp_535_;
}
}
}
}
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_569_; 
lean_del_object(v___x_499_);
v___x_564_ = lean_nat_add(v___x_503_, v_size_505_);
lean_dec(v_size_505_);
v___x_565_ = lean_nat_add(v___x_564_, v_size_504_);
lean_dec(v___x_564_);
v___x_566_ = lean_nat_add(v___x_503_, v_size_504_);
v___x_567_ = lean_nat_add(v___x_566_, v_size_522_);
lean_dec(v___x_566_);
lean_inc_ref(v_r_497_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 4, v_r_497_);
lean_ctor_set(v___x_519_, 3, v_r_509_);
lean_ctor_set(v___x_519_, 2, v_v_495_);
lean_ctor_set(v___x_519_, 1, v_k_494_);
lean_ctor_set(v___x_519_, 0, v___x_567_);
v___x_569_ = v___x_519_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v___x_567_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_582_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_582_, 3, v_r_509_);
lean_ctor_set(v_reuseFailAlloc_582_, 4, v_r_497_);
v___x_569_ = v_reuseFailAlloc_582_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
v_isSharedCheck_576_ = !lean_is_exclusive(v_r_497_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; lean_object* v_unused_578_; lean_object* v_unused_579_; lean_object* v_unused_580_; lean_object* v_unused_581_; 
v_unused_577_ = lean_ctor_get(v_r_497_, 4);
lean_dec(v_unused_577_);
v_unused_578_ = lean_ctor_get(v_r_497_, 3);
lean_dec(v_unused_578_);
v_unused_579_ = lean_ctor_get(v_r_497_, 2);
lean_dec(v_unused_579_);
v_unused_580_ = lean_ctor_get(v_r_497_, 1);
lean_dec(v_unused_580_);
v_unused_581_ = lean_ctor_get(v_r_497_, 0);
lean_dec(v_unused_581_);
v___x_571_ = v_r_497_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_dec(v_r_497_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 4, v___x_569_);
lean_ctor_set(v___x_571_, 3, v_l_508_);
lean_ctor_set(v___x_571_, 2, v_v_507_);
lean_ctor_set(v___x_571_, 1, v_k_506_);
lean_ctor_set(v___x_571_, 0, v___x_565_);
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_k_506_);
lean_ctor_set(v_reuseFailAlloc_575_, 2, v_v_507_);
lean_ctor_set(v_reuseFailAlloc_575_, 3, v_l_508_);
lean_ctor_set(v_reuseFailAlloc_575_, 4, v___x_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_589_; 
v_l_589_ = lean_ctor_get(v_impl_502_, 3);
lean_inc(v_l_589_);
if (lean_obj_tag(v_l_589_) == 0)
{
lean_object* v_r_590_; lean_object* v_k_591_; lean_object* v_v_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_603_; 
v_r_590_ = lean_ctor_get(v_impl_502_, 4);
v_k_591_ = lean_ctor_get(v_impl_502_, 1);
v_v_592_ = lean_ctor_get(v_impl_502_, 2);
v_isSharedCheck_603_ = !lean_is_exclusive(v_impl_502_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; lean_object* v_unused_605_; 
v_unused_604_ = lean_ctor_get(v_impl_502_, 3);
lean_dec(v_unused_604_);
v_unused_605_ = lean_ctor_get(v_impl_502_, 0);
lean_dec(v_unused_605_);
v___x_594_ = v_impl_502_;
v_isShared_595_ = v_isSharedCheck_603_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_r_590_);
lean_inc(v_v_592_);
lean_inc(v_k_591_);
lean_dec(v_impl_502_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_603_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_596_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_590_);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 3, v_r_590_);
lean_ctor_set(v___x_594_, 2, v_v_495_);
lean_ctor_set(v___x_594_, 1, v_k_494_);
lean_ctor_set(v___x_594_, 0, v___x_503_);
v___x_598_ = v___x_594_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_602_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_602_, 3, v_r_590_);
lean_ctor_set(v_reuseFailAlloc_602_, 4, v_r_590_);
v___x_598_ = v_reuseFailAlloc_602_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_600_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v___x_598_);
lean_ctor_set(v___x_499_, 3, v_l_589_);
lean_ctor_set(v___x_499_, 2, v_v_592_);
lean_ctor_set(v___x_499_, 1, v_k_591_);
lean_ctor_set(v___x_499_, 0, v___x_596_);
v___x_600_ = v___x_499_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_596_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v_k_591_);
lean_ctor_set(v_reuseFailAlloc_601_, 2, v_v_592_);
lean_ctor_set(v_reuseFailAlloc_601_, 3, v_l_589_);
lean_ctor_set(v_reuseFailAlloc_601_, 4, v___x_598_);
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
else
{
lean_object* v_r_606_; 
v_r_606_ = lean_ctor_get(v_impl_502_, 4);
lean_inc(v_r_606_);
if (lean_obj_tag(v_r_606_) == 0)
{
lean_object* v_k_607_; lean_object* v_v_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_631_; 
v_k_607_ = lean_ctor_get(v_impl_502_, 1);
v_v_608_ = lean_ctor_get(v_impl_502_, 2);
v_isSharedCheck_631_ = !lean_is_exclusive(v_impl_502_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; lean_object* v_unused_633_; lean_object* v_unused_634_; 
v_unused_632_ = lean_ctor_get(v_impl_502_, 4);
lean_dec(v_unused_632_);
v_unused_633_ = lean_ctor_get(v_impl_502_, 3);
lean_dec(v_unused_633_);
v_unused_634_ = lean_ctor_get(v_impl_502_, 0);
lean_dec(v_unused_634_);
v___x_610_ = v_impl_502_;
v_isShared_611_ = v_isSharedCheck_631_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_v_608_);
lean_inc(v_k_607_);
lean_dec(v_impl_502_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_631_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v_k_612_; lean_object* v_v_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_627_; 
v_k_612_ = lean_ctor_get(v_r_606_, 1);
v_v_613_ = lean_ctor_get(v_r_606_, 2);
v_isSharedCheck_627_ = !lean_is_exclusive(v_r_606_);
if (v_isSharedCheck_627_ == 0)
{
lean_object* v_unused_628_; lean_object* v_unused_629_; lean_object* v_unused_630_; 
v_unused_628_ = lean_ctor_get(v_r_606_, 4);
lean_dec(v_unused_628_);
v_unused_629_ = lean_ctor_get(v_r_606_, 3);
lean_dec(v_unused_629_);
v_unused_630_ = lean_ctor_get(v_r_606_, 0);
lean_dec(v_unused_630_);
v___x_615_ = v_r_606_;
v_isShared_616_ = v_isSharedCheck_627_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_v_613_);
lean_inc(v_k_612_);
lean_dec(v_r_606_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_627_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v___x_619_; 
v___x_617_ = lean_unsigned_to_nat(3u);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 4, v_l_589_);
lean_ctor_set(v___x_615_, 3, v_l_589_);
lean_ctor_set(v___x_615_, 2, v_v_608_);
lean_ctor_set(v___x_615_, 1, v_k_607_);
lean_ctor_set(v___x_615_, 0, v___x_503_);
v___x_619_ = v___x_615_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_k_607_);
lean_ctor_set(v_reuseFailAlloc_626_, 2, v_v_608_);
lean_ctor_set(v_reuseFailAlloc_626_, 3, v_l_589_);
lean_ctor_set(v_reuseFailAlloc_626_, 4, v_l_589_);
v___x_619_ = v_reuseFailAlloc_626_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
lean_object* v___x_621_; 
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 4, v_l_589_);
lean_ctor_set(v___x_610_, 2, v_v_495_);
lean_ctor_set(v___x_610_, 1, v_k_494_);
lean_ctor_set(v___x_610_, 0, v___x_503_);
v___x_621_ = v___x_610_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_625_, 3, v_l_589_);
lean_ctor_set(v_reuseFailAlloc_625_, 4, v_l_589_);
v___x_621_ = v_reuseFailAlloc_625_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_623_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v___x_621_);
lean_ctor_set(v___x_499_, 3, v___x_619_);
lean_ctor_set(v___x_499_, 2, v_v_613_);
lean_ctor_set(v___x_499_, 1, v_k_612_);
lean_ctor_set(v___x_499_, 0, v___x_617_);
v___x_623_ = v___x_499_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_617_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_k_612_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_v_613_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v___x_619_);
lean_ctor_set(v_reuseFailAlloc_624_, 4, v___x_621_);
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
}
}
else
{
lean_object* v___x_635_; lean_object* v___x_637_; 
v___x_635_ = lean_unsigned_to_nat(2u);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_r_606_);
lean_ctor_set(v___x_499_, 3, v_impl_502_);
lean_ctor_set(v___x_499_, 0, v___x_635_);
v___x_637_ = v___x_499_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_638_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_638_, 3, v_impl_502_);
lean_ctor_set(v_reuseFailAlloc_638_, 4, v_r_606_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
}
case 1:
{
lean_object* v___x_640_; 
lean_dec(v_v_495_);
lean_dec(v_k_494_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 2, v_v_491_);
lean_ctor_set(v___x_499_, 1, v_k_490_);
v___x_640_ = v___x_499_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_size_493_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_k_490_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v_v_491_);
lean_ctor_set(v_reuseFailAlloc_641_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_641_, 4, v_r_497_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
default: 
{
lean_object* v_impl_642_; lean_object* v___x_643_; 
lean_dec(v_size_493_);
v_impl_642_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(v_k_490_, v_v_491_, v_r_497_);
v___x_643_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_496_) == 0)
{
lean_object* v_size_644_; lean_object* v_size_645_; lean_object* v_k_646_; lean_object* v_v_647_; lean_object* v_l_648_; lean_object* v_r_649_; lean_object* v___x_650_; lean_object* v___x_651_; uint8_t v___x_652_; 
v_size_644_ = lean_ctor_get(v_l_496_, 0);
v_size_645_ = lean_ctor_get(v_impl_642_, 0);
lean_inc(v_size_645_);
v_k_646_ = lean_ctor_get(v_impl_642_, 1);
lean_inc(v_k_646_);
v_v_647_ = lean_ctor_get(v_impl_642_, 2);
lean_inc(v_v_647_);
v_l_648_ = lean_ctor_get(v_impl_642_, 3);
lean_inc(v_l_648_);
v_r_649_ = lean_ctor_get(v_impl_642_, 4);
lean_inc(v_r_649_);
v___x_650_ = lean_unsigned_to_nat(3u);
v___x_651_ = lean_nat_mul(v___x_650_, v_size_644_);
v___x_652_ = lean_nat_dec_lt(v___x_651_, v_size_645_);
lean_dec(v___x_651_);
if (v___x_652_ == 0)
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_656_; 
lean_dec(v_r_649_);
lean_dec(v_l_648_);
lean_dec(v_v_647_);
lean_dec(v_k_646_);
v___x_653_ = lean_nat_add(v___x_643_, v_size_644_);
v___x_654_ = lean_nat_add(v___x_653_, v_size_645_);
lean_dec(v_size_645_);
lean_dec(v___x_653_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_impl_642_);
lean_ctor_set(v___x_499_, 0, v___x_654_);
v___x_656_ = v___x_499_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_654_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_657_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_657_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_657_, 4, v_impl_642_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
else
{
lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_721_; 
v_isSharedCheck_721_ = !lean_is_exclusive(v_impl_642_);
if (v_isSharedCheck_721_ == 0)
{
lean_object* v_unused_722_; lean_object* v_unused_723_; lean_object* v_unused_724_; lean_object* v_unused_725_; lean_object* v_unused_726_; 
v_unused_722_ = lean_ctor_get(v_impl_642_, 4);
lean_dec(v_unused_722_);
v_unused_723_ = lean_ctor_get(v_impl_642_, 3);
lean_dec(v_unused_723_);
v_unused_724_ = lean_ctor_get(v_impl_642_, 2);
lean_dec(v_unused_724_);
v_unused_725_ = lean_ctor_get(v_impl_642_, 1);
lean_dec(v_unused_725_);
v_unused_726_ = lean_ctor_get(v_impl_642_, 0);
lean_dec(v_unused_726_);
v___x_659_ = v_impl_642_;
v_isShared_660_ = v_isSharedCheck_721_;
goto v_resetjp_658_;
}
else
{
lean_dec(v_impl_642_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_721_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v_size_661_; lean_object* v_k_662_; lean_object* v_v_663_; lean_object* v_l_664_; lean_object* v_r_665_; lean_object* v_size_666_; lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v_size_661_ = lean_ctor_get(v_l_648_, 0);
v_k_662_ = lean_ctor_get(v_l_648_, 1);
v_v_663_ = lean_ctor_get(v_l_648_, 2);
v_l_664_ = lean_ctor_get(v_l_648_, 3);
v_r_665_ = lean_ctor_get(v_l_648_, 4);
v_size_666_ = lean_ctor_get(v_r_649_, 0);
v___x_667_ = lean_unsigned_to_nat(2u);
v___x_668_ = lean_nat_mul(v___x_667_, v_size_666_);
v___x_669_ = lean_nat_dec_lt(v_size_661_, v___x_668_);
lean_dec(v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_697_; 
lean_inc(v_r_665_);
lean_inc(v_l_664_);
lean_inc(v_v_663_);
lean_inc(v_k_662_);
v_isSharedCheck_697_ = !lean_is_exclusive(v_l_648_);
if (v_isSharedCheck_697_ == 0)
{
lean_object* v_unused_698_; lean_object* v_unused_699_; lean_object* v_unused_700_; lean_object* v_unused_701_; lean_object* v_unused_702_; 
v_unused_698_ = lean_ctor_get(v_l_648_, 4);
lean_dec(v_unused_698_);
v_unused_699_ = lean_ctor_get(v_l_648_, 3);
lean_dec(v_unused_699_);
v_unused_700_ = lean_ctor_get(v_l_648_, 2);
lean_dec(v_unused_700_);
v_unused_701_ = lean_ctor_get(v_l_648_, 1);
lean_dec(v_unused_701_);
v_unused_702_ = lean_ctor_get(v_l_648_, 0);
lean_dec(v_unused_702_);
v___x_671_ = v_l_648_;
v_isShared_672_ = v_isSharedCheck_697_;
goto v_resetjp_670_;
}
else
{
lean_dec(v_l_648_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_697_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_687_; 
v___x_673_ = lean_nat_add(v___x_643_, v_size_644_);
v___x_674_ = lean_nat_add(v___x_673_, v_size_645_);
lean_dec(v_size_645_);
if (lean_obj_tag(v_l_664_) == 0)
{
lean_object* v_size_695_; 
v_size_695_ = lean_ctor_get(v_l_664_, 0);
lean_inc(v_size_695_);
v___y_687_ = v_size_695_;
goto v___jp_686_;
}
else
{
lean_object* v___x_696_; 
v___x_696_ = lean_unsigned_to_nat(0u);
v___y_687_ = v___x_696_;
goto v___jp_686_;
}
v___jp_675_:
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = lean_nat_add(v___y_676_, v___y_678_);
lean_dec(v___y_678_);
lean_dec(v___y_676_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 4, v_r_649_);
lean_ctor_set(v___x_671_, 3, v_r_665_);
lean_ctor_set(v___x_671_, 2, v_v_647_);
lean_ctor_set(v___x_671_, 1, v_k_646_);
lean_ctor_set(v___x_671_, 0, v___x_679_);
v___x_681_ = v___x_671_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_k_646_);
lean_ctor_set(v_reuseFailAlloc_685_, 2, v_v_647_);
lean_ctor_set(v_reuseFailAlloc_685_, 3, v_r_665_);
lean_ctor_set(v_reuseFailAlloc_685_, 4, v_r_649_);
v___x_681_ = v_reuseFailAlloc_685_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_683_; 
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 4, v___x_681_);
lean_ctor_set(v___x_659_, 3, v___y_677_);
lean_ctor_set(v___x_659_, 2, v_v_663_);
lean_ctor_set(v___x_659_, 1, v_k_662_);
lean_ctor_set(v___x_659_, 0, v___x_674_);
v___x_683_ = v___x_659_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_674_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_k_662_);
lean_ctor_set(v_reuseFailAlloc_684_, 2, v_v_663_);
lean_ctor_set(v_reuseFailAlloc_684_, 3, v___y_677_);
lean_ctor_set(v_reuseFailAlloc_684_, 4, v___x_681_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
v___jp_686_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = lean_nat_add(v___x_673_, v___y_687_);
lean_dec(v___y_687_);
lean_dec(v___x_673_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_l_664_);
lean_ctor_set(v___x_499_, 0, v___x_688_);
v___x_690_ = v___x_499_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_694_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_694_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_694_, 4, v_l_664_);
v___x_690_ = v_reuseFailAlloc_694_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_nat_add(v___x_643_, v_size_666_);
if (lean_obj_tag(v_r_665_) == 0)
{
lean_object* v_size_692_; 
v_size_692_ = lean_ctor_get(v_r_665_, 0);
lean_inc(v_size_692_);
v___y_676_ = v___x_691_;
v___y_677_ = v___x_690_;
v___y_678_ = v_size_692_;
goto v___jp_675_;
}
else
{
lean_object* v___x_693_; 
v___x_693_ = lean_unsigned_to_nat(0u);
v___y_676_ = v___x_691_;
v___y_677_ = v___x_690_;
v___y_678_ = v___x_693_;
goto v___jp_675_;
}
}
}
}
}
else
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
lean_del_object(v___x_499_);
v___x_703_ = lean_nat_add(v___x_643_, v_size_644_);
v___x_704_ = lean_nat_add(v___x_703_, v_size_645_);
lean_dec(v_size_645_);
v___x_705_ = lean_nat_add(v___x_703_, v_size_661_);
lean_dec(v___x_703_);
lean_inc_ref(v_l_496_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 4, v_l_648_);
lean_ctor_set(v___x_659_, 3, v_l_496_);
lean_ctor_set(v___x_659_, 2, v_v_495_);
lean_ctor_set(v___x_659_, 1, v_k_494_);
lean_ctor_set(v___x_659_, 0, v___x_705_);
v___x_707_ = v___x_659_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_705_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_720_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_720_, 3, v_l_496_);
lean_ctor_set(v_reuseFailAlloc_720_, 4, v_l_648_);
v___x_707_ = v_reuseFailAlloc_720_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
v_isSharedCheck_714_ = !lean_is_exclusive(v_l_496_);
if (v_isSharedCheck_714_ == 0)
{
lean_object* v_unused_715_; lean_object* v_unused_716_; lean_object* v_unused_717_; lean_object* v_unused_718_; lean_object* v_unused_719_; 
v_unused_715_ = lean_ctor_get(v_l_496_, 4);
lean_dec(v_unused_715_);
v_unused_716_ = lean_ctor_get(v_l_496_, 3);
lean_dec(v_unused_716_);
v_unused_717_ = lean_ctor_get(v_l_496_, 2);
lean_dec(v_unused_717_);
v_unused_718_ = lean_ctor_get(v_l_496_, 1);
lean_dec(v_unused_718_);
v_unused_719_ = lean_ctor_get(v_l_496_, 0);
lean_dec(v_unused_719_);
v___x_709_ = v_l_496_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_dec(v_l_496_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 4, v_r_649_);
lean_ctor_set(v___x_709_, 3, v___x_707_);
lean_ctor_set(v___x_709_, 2, v_v_647_);
lean_ctor_set(v___x_709_, 1, v_k_646_);
lean_ctor_set(v___x_709_, 0, v___x_704_);
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_704_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v_k_646_);
lean_ctor_set(v_reuseFailAlloc_713_, 2, v_v_647_);
lean_ctor_set(v_reuseFailAlloc_713_, 3, v___x_707_);
lean_ctor_set(v_reuseFailAlloc_713_, 4, v_r_649_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_727_; 
v_l_727_ = lean_ctor_get(v_impl_642_, 3);
lean_inc(v_l_727_);
if (lean_obj_tag(v_l_727_) == 0)
{
lean_object* v_r_728_; lean_object* v_k_729_; lean_object* v_v_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_753_; 
v_r_728_ = lean_ctor_get(v_impl_642_, 4);
v_k_729_ = lean_ctor_get(v_impl_642_, 1);
v_v_730_ = lean_ctor_get(v_impl_642_, 2);
v_isSharedCheck_753_ = !lean_is_exclusive(v_impl_642_);
if (v_isSharedCheck_753_ == 0)
{
lean_object* v_unused_754_; lean_object* v_unused_755_; 
v_unused_754_ = lean_ctor_get(v_impl_642_, 3);
lean_dec(v_unused_754_);
v_unused_755_ = lean_ctor_get(v_impl_642_, 0);
lean_dec(v_unused_755_);
v___x_732_ = v_impl_642_;
v_isShared_733_ = v_isSharedCheck_753_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_r_728_);
lean_inc(v_v_730_);
lean_inc(v_k_729_);
lean_dec(v_impl_642_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_753_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v_k_734_; lean_object* v_v_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_749_; 
v_k_734_ = lean_ctor_get(v_l_727_, 1);
v_v_735_ = lean_ctor_get(v_l_727_, 2);
v_isSharedCheck_749_ = !lean_is_exclusive(v_l_727_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; lean_object* v_unused_751_; lean_object* v_unused_752_; 
v_unused_750_ = lean_ctor_get(v_l_727_, 4);
lean_dec(v_unused_750_);
v_unused_751_ = lean_ctor_get(v_l_727_, 3);
lean_dec(v_unused_751_);
v_unused_752_ = lean_ctor_get(v_l_727_, 0);
lean_dec(v_unused_752_);
v___x_737_ = v_l_727_;
v_isShared_738_ = v_isSharedCheck_749_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_v_735_);
lean_inc(v_k_734_);
lean_dec(v_l_727_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_749_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_739_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_728_, 2);
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 4, v_r_728_);
lean_ctor_set(v___x_737_, 3, v_r_728_);
lean_ctor_set(v___x_737_, 2, v_v_495_);
lean_ctor_set(v___x_737_, 1, v_k_494_);
lean_ctor_set(v___x_737_, 0, v___x_643_);
v___x_741_ = v___x_737_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_748_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_748_, 3, v_r_728_);
lean_ctor_set(v_reuseFailAlloc_748_, 4, v_r_728_);
v___x_741_ = v_reuseFailAlloc_748_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
lean_inc(v_r_728_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 3, v_r_728_);
lean_ctor_set(v___x_732_, 0, v___x_643_);
v___x_743_ = v___x_732_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_k_729_);
lean_ctor_set(v_reuseFailAlloc_747_, 2, v_v_730_);
lean_ctor_set(v_reuseFailAlloc_747_, 3, v_r_728_);
lean_ctor_set(v_reuseFailAlloc_747_, 4, v_r_728_);
v___x_743_ = v_reuseFailAlloc_747_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_745_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v___x_743_);
lean_ctor_set(v___x_499_, 3, v___x_741_);
lean_ctor_set(v___x_499_, 2, v_v_735_);
lean_ctor_set(v___x_499_, 1, v_k_734_);
lean_ctor_set(v___x_499_, 0, v___x_739_);
v___x_745_ = v___x_499_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_739_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_k_734_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_v_735_);
lean_ctor_set(v_reuseFailAlloc_746_, 3, v___x_741_);
lean_ctor_set(v_reuseFailAlloc_746_, 4, v___x_743_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
}
else
{
lean_object* v_r_756_; 
v_r_756_ = lean_ctor_get(v_impl_642_, 4);
lean_inc(v_r_756_);
if (lean_obj_tag(v_r_756_) == 0)
{
lean_object* v_k_757_; lean_object* v_v_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_769_; 
v_k_757_ = lean_ctor_get(v_impl_642_, 1);
v_v_758_ = lean_ctor_get(v_impl_642_, 2);
v_isSharedCheck_769_ = !lean_is_exclusive(v_impl_642_);
if (v_isSharedCheck_769_ == 0)
{
lean_object* v_unused_770_; lean_object* v_unused_771_; lean_object* v_unused_772_; 
v_unused_770_ = lean_ctor_get(v_impl_642_, 4);
lean_dec(v_unused_770_);
v_unused_771_ = lean_ctor_get(v_impl_642_, 3);
lean_dec(v_unused_771_);
v_unused_772_ = lean_ctor_get(v_impl_642_, 0);
lean_dec(v_unused_772_);
v___x_760_ = v_impl_642_;
v_isShared_761_ = v_isSharedCheck_769_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_v_758_);
lean_inc(v_k_757_);
lean_dec(v_impl_642_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_769_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_764_; 
v___x_762_ = lean_unsigned_to_nat(3u);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 4, v_l_727_);
lean_ctor_set(v___x_760_, 2, v_v_495_);
lean_ctor_set(v___x_760_, 1, v_k_494_);
lean_ctor_set(v___x_760_, 0, v___x_643_);
v___x_764_ = v___x_760_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_768_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_768_, 3, v_l_727_);
lean_ctor_set(v_reuseFailAlloc_768_, 4, v_l_727_);
v___x_764_ = v_reuseFailAlloc_768_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
lean_object* v___x_766_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_r_756_);
lean_ctor_set(v___x_499_, 3, v___x_764_);
lean_ctor_set(v___x_499_, 2, v_v_758_);
lean_ctor_set(v___x_499_, 1, v_k_757_);
lean_ctor_set(v___x_499_, 0, v___x_762_);
v___x_766_ = v___x_499_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v___x_762_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v_k_757_);
lean_ctor_set(v_reuseFailAlloc_767_, 2, v_v_758_);
lean_ctor_set(v_reuseFailAlloc_767_, 3, v___x_764_);
lean_ctor_set(v_reuseFailAlloc_767_, 4, v_r_756_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_object* v___x_773_; lean_object* v___x_775_; 
v___x_773_ = lean_unsigned_to_nat(2u);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_impl_642_);
lean_ctor_set(v___x_499_, 3, v_r_756_);
lean_ctor_set(v___x_499_, 0, v___x_773_);
v___x_775_ = v___x_499_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_k_494_);
lean_ctor_set(v_reuseFailAlloc_776_, 2, v_v_495_);
lean_ctor_set(v_reuseFailAlloc_776_, 3, v_r_756_);
lean_ctor_set(v_reuseFailAlloc_776_, 4, v_impl_642_);
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
}
}
}
else
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = lean_unsigned_to_nat(1u);
v___x_779_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v_k_490_);
lean_ctor_set(v___x_779_, 2, v_v_491_);
lean_ctor_set(v___x_779_, 3, v_t_492_);
lean_ctor_set(v___x_779_, 4, v_t_492_);
return v___x_779_;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_780_ = lean_box(0);
v___x_781_ = lean_unsigned_to_nat(16u);
v___x_782_ = lean_mk_array(v___x_781_, v___x_780_);
return v___x_782_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_783_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0, &l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0_once, _init_l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__0);
v___x_784_ = lean_unsigned_to_nat(0u);
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v___x_783_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn(lean_object* v_c_786_, lean_object* v_fvarId_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v___y_794_; lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = lean_box(1);
v___x_816_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg(v_fvarId_787_, v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = lean_box(0);
lean_inc(v_fvarId_787_);
v___x_818_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(v_fvarId_787_, v___x_817_, v___x_815_);
v___y_794_ = v___x_818_;
goto v___jp_793_;
}
else
{
v___y_794_ = v___x_815_;
goto v___jp_793_;
}
v___jp_793_:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
lean_inc(v_fvarId_787_);
v___x_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_795_, 0, v___y_794_);
lean_ctor_set(v___x_795_, 1, v_fvarId_787_);
v___x_796_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1, &l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1_once, _init_l_Lean_Compiler_LCNF_Code_isFVarLiveIn___closed__1);
v___x_797_ = l___private_Lean_Compiler_LCNF_LiveVars_0__Lean_Compiler_LCNF_Code_isFVarLiveIn_go(v_fvarId_787_, v_c_786_, v___x_795_, v___x_796_, v___y_788_, v___y_789_, v___y_790_, v___y_791_);
lean_dec_ref_known(v___x_795_, 2);
lean_dec(v_fvarId_787_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_806_; 
v_a_798_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_806_ == 0)
{
v___x_800_ = v___x_797_;
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_797_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v_fst_802_; lean_object* v___x_804_; 
v_fst_802_ = lean_ctor_get(v_a_798_, 0);
lean_inc(v_fst_802_);
lean_dec(v_a_798_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v_fst_802_);
v___x_804_ = v___x_800_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_fst_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
v_a_807_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_797_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_797_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn___boxed(lean_object* v_c_819_, lean_object* v_fvarId_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_819_, v_fvarId_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
return v_res_826_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0(lean_object* v_00_u03b2_827_, lean_object* v_k_828_, lean_object* v_t_829_){
_start:
{
uint8_t v___x_830_; 
v___x_830_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___redArg(v_k_828_, v_t_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0___boxed(lean_object* v_00_u03b2_831_, lean_object* v_k_832_, lean_object* v_t_833_){
_start:
{
uint8_t v_res_834_; lean_object* v_r_835_; 
v_res_834_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__0(v_00_u03b2_831_, v_k_832_, v_t_833_);
lean_dec(v_t_833_);
lean_dec(v_k_832_);
v_r_835_ = lean_box(v_res_834_);
return v_r_835_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1(lean_object* v_00_u03b2_836_, lean_object* v_k_837_, lean_object* v_v_838_, lean_object* v_t_839_, lean_object* v_hl_840_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Compiler_LCNF_Code_isFVarLiveIn_spec__1___redArg(v_k_837_, v_v_838_, v_t_839_);
return v___x_841_;
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
