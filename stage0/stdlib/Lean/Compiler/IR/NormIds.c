// Lean compiler output
// Module: Lean.Compiler.IR.NormIds
// Imports: public import Lean.Compiler.IR.Basic
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_IR_Alt_body(lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_IR_instBEqVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkId(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkFnBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkDecl(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_Decl_uniqueIds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_uniqueIds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normIndex___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normJP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normJP___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normExpr___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_NormalizeIds_withVar___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_NormalizeIds_withVar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_NormalizeIds_withVar___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___closed__0 = (const lean_object*)&l_Lean_IR_NormalizeIds_withVar___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__0 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__0_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__1 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__1_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__2 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__2_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__3 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__3_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__4 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__4_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__5 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__5_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__6 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__6_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__0_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__1_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__7 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__7_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__7_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__2_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__3_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__4_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__5_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__8 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__8_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__8_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__6_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__9 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__10 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__10_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__4, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__11 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__11_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__12 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__12_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__9, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__13 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__13_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_map, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__14 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__14_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__14_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__10_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__15 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__15_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_pure, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__16 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__16_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__15_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__16_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__11_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__12_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__13_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__17 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__17_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__9_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__18 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__18_value;
static const lean_ctor_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__17_value),((lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__18_value)}};
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__19 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__19_value;
static const lean_closure_object l_Lean_IR_NormalizeIds_withParams___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_NormalizeIds_withParams___redArg___lam__2, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_IR_NormalizeIds_withVar___redArg___closed__0_value)} };
static const lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___closed__20 = (const lean_object*)&l_Lean_IR_NormalizeIds_withParams___redArg___closed__20_value;
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_NormalizeIds_instMonadLiftMN___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_NormalizeIds_instMonadLiftMN___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN___closed__0 = (const lean_object*)&l_Lean_IR_NormalizeIds_instMonadLiftMN___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN = (const lean_object*)&l_Lean_IR_NormalizeIds_instMonadLiftMN___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normFnBody(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normFnBody___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normDecl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Decl_normalizeIds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapFnBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_mapVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(lean_object* v_k_1_, lean_object* v_t_2_){
_start:
{
if (lean_obj_tag(v_t_2_) == 0)
{
lean_object* v_k_3_; lean_object* v_l_4_; lean_object* v_r_5_; uint8_t v___x_6_; 
v_k_3_ = lean_ctor_get(v_t_2_, 1);
v_l_4_ = lean_ctor_get(v_t_2_, 3);
v_r_5_ = lean_ctor_get(v_t_2_, 4);
v___x_6_ = lean_nat_dec_lt(v_k_1_, v_k_3_);
if (v___x_6_ == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_nat_dec_eq(v_k_1_, v_k_3_);
if (v___x_7_ == 0)
{
v_t_2_ = v_r_5_;
goto _start;
}
else
{
return v___x_7_;
}
}
else
{
v_t_2_ = v_l_4_;
goto _start;
}
}
else
{
uint8_t v___x_10_; 
v___x_10_ = 0;
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg___boxed(lean_object* v_k_11_, lean_object* v_t_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(v_k_11_, v_t_12_);
lean_dec(v_t_12_);
lean_dec(v_k_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(lean_object* v_k_15_, lean_object* v_v_16_, lean_object* v_t_17_){
_start:
{
if (lean_obj_tag(v_t_17_) == 0)
{
lean_object* v_size_18_; lean_object* v_k_19_; lean_object* v_v_20_; lean_object* v_l_21_; lean_object* v_r_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_303_; 
v_size_18_ = lean_ctor_get(v_t_17_, 0);
v_k_19_ = lean_ctor_get(v_t_17_, 1);
v_v_20_ = lean_ctor_get(v_t_17_, 2);
v_l_21_ = lean_ctor_get(v_t_17_, 3);
v_r_22_ = lean_ctor_get(v_t_17_, 4);
v_isSharedCheck_303_ = !lean_is_exclusive(v_t_17_);
if (v_isSharedCheck_303_ == 0)
{
v___x_24_ = v_t_17_;
v_isShared_25_ = v_isSharedCheck_303_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_r_22_);
lean_inc(v_l_21_);
lean_inc(v_v_20_);
lean_inc(v_k_19_);
lean_inc(v_size_18_);
lean_dec(v_t_17_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_303_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
uint8_t v___x_26_; 
v___x_26_ = lean_nat_dec_lt(v_k_15_, v_k_19_);
if (v___x_26_ == 0)
{
uint8_t v___x_27_; 
v___x_27_ = lean_nat_dec_eq(v_k_15_, v_k_19_);
if (v___x_27_ == 0)
{
lean_object* v_impl_28_; lean_object* v___x_29_; 
lean_dec(v_size_18_);
v_impl_28_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_k_15_, v_v_16_, v_r_22_);
v___x_29_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_21_) == 0)
{
lean_object* v_size_30_; lean_object* v_size_31_; lean_object* v_k_32_; lean_object* v_v_33_; lean_object* v_l_34_; lean_object* v_r_35_; lean_object* v___x_36_; lean_object* v___x_37_; uint8_t v___x_38_; 
v_size_30_ = lean_ctor_get(v_l_21_, 0);
v_size_31_ = lean_ctor_get(v_impl_28_, 0);
lean_inc(v_size_31_);
v_k_32_ = lean_ctor_get(v_impl_28_, 1);
lean_inc(v_k_32_);
v_v_33_ = lean_ctor_get(v_impl_28_, 2);
lean_inc(v_v_33_);
v_l_34_ = lean_ctor_get(v_impl_28_, 3);
lean_inc(v_l_34_);
v_r_35_ = lean_ctor_get(v_impl_28_, 4);
lean_inc(v_r_35_);
v___x_36_ = lean_unsigned_to_nat(3u);
v___x_37_ = lean_nat_mul(v___x_36_, v_size_30_);
v___x_38_ = lean_nat_dec_lt(v___x_37_, v_size_31_);
lean_dec(v___x_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_42_; 
lean_dec(v_r_35_);
lean_dec(v_l_34_);
lean_dec(v_v_33_);
lean_dec(v_k_32_);
v___x_39_ = lean_nat_add(v___x_29_, v_size_30_);
v___x_40_ = lean_nat_add(v___x_39_, v_size_31_);
lean_dec(v_size_31_);
lean_dec(v___x_39_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_impl_28_);
lean_ctor_set(v___x_24_, 0, v___x_40_);
v___x_42_ = v___x_24_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v___x_40_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_43_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_43_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_43_, 4, v_impl_28_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
else
{
lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_107_; 
v_isSharedCheck_107_ = !lean_is_exclusive(v_impl_28_);
if (v_isSharedCheck_107_ == 0)
{
lean_object* v_unused_108_; lean_object* v_unused_109_; lean_object* v_unused_110_; lean_object* v_unused_111_; lean_object* v_unused_112_; 
v_unused_108_ = lean_ctor_get(v_impl_28_, 4);
lean_dec(v_unused_108_);
v_unused_109_ = lean_ctor_get(v_impl_28_, 3);
lean_dec(v_unused_109_);
v_unused_110_ = lean_ctor_get(v_impl_28_, 2);
lean_dec(v_unused_110_);
v_unused_111_ = lean_ctor_get(v_impl_28_, 1);
lean_dec(v_unused_111_);
v_unused_112_ = lean_ctor_get(v_impl_28_, 0);
lean_dec(v_unused_112_);
v___x_45_ = v_impl_28_;
v_isShared_46_ = v_isSharedCheck_107_;
goto v_resetjp_44_;
}
else
{
lean_dec(v_impl_28_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_107_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v_size_47_; lean_object* v_k_48_; lean_object* v_v_49_; lean_object* v_l_50_; lean_object* v_r_51_; lean_object* v_size_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; 
v_size_47_ = lean_ctor_get(v_l_34_, 0);
v_k_48_ = lean_ctor_get(v_l_34_, 1);
v_v_49_ = lean_ctor_get(v_l_34_, 2);
v_l_50_ = lean_ctor_get(v_l_34_, 3);
v_r_51_ = lean_ctor_get(v_l_34_, 4);
v_size_52_ = lean_ctor_get(v_r_35_, 0);
v___x_53_ = lean_unsigned_to_nat(2u);
v___x_54_ = lean_nat_mul(v___x_53_, v_size_52_);
v___x_55_ = lean_nat_dec_lt(v_size_47_, v___x_54_);
lean_dec(v___x_54_);
if (v___x_55_ == 0)
{
lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_83_; 
lean_inc(v_r_51_);
lean_inc(v_l_50_);
lean_inc(v_v_49_);
lean_inc(v_k_48_);
v_isSharedCheck_83_ = !lean_is_exclusive(v_l_34_);
if (v_isSharedCheck_83_ == 0)
{
lean_object* v_unused_84_; lean_object* v_unused_85_; lean_object* v_unused_86_; lean_object* v_unused_87_; lean_object* v_unused_88_; 
v_unused_84_ = lean_ctor_get(v_l_34_, 4);
lean_dec(v_unused_84_);
v_unused_85_ = lean_ctor_get(v_l_34_, 3);
lean_dec(v_unused_85_);
v_unused_86_ = lean_ctor_get(v_l_34_, 2);
lean_dec(v_unused_86_);
v_unused_87_ = lean_ctor_get(v_l_34_, 1);
lean_dec(v_unused_87_);
v_unused_88_ = lean_ctor_get(v_l_34_, 0);
lean_dec(v_unused_88_);
v___x_57_ = v_l_34_;
v_isShared_58_ = v_isSharedCheck_83_;
goto v_resetjp_56_;
}
else
{
lean_dec(v_l_34_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_83_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___y_62_; lean_object* v___y_63_; lean_object* v___y_64_; lean_object* v___y_73_; 
v___x_59_ = lean_nat_add(v___x_29_, v_size_30_);
v___x_60_ = lean_nat_add(v___x_59_, v_size_31_);
lean_dec(v_size_31_);
if (lean_obj_tag(v_l_50_) == 0)
{
lean_object* v_size_81_; 
v_size_81_ = lean_ctor_get(v_l_50_, 0);
lean_inc(v_size_81_);
v___y_73_ = v_size_81_;
goto v___jp_72_;
}
else
{
lean_object* v___x_82_; 
v___x_82_ = lean_unsigned_to_nat(0u);
v___y_73_ = v___x_82_;
goto v___jp_72_;
}
v___jp_61_:
{
lean_object* v___x_65_; lean_object* v___x_67_; 
v___x_65_ = lean_nat_add(v___y_63_, v___y_64_);
lean_dec(v___y_64_);
lean_dec(v___y_63_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 4, v_r_35_);
lean_ctor_set(v___x_57_, 3, v_r_51_);
lean_ctor_set(v___x_57_, 2, v_v_33_);
lean_ctor_set(v___x_57_, 1, v_k_32_);
lean_ctor_set(v___x_57_, 0, v___x_65_);
v___x_67_ = v___x_57_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_65_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_k_32_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v_v_33_);
lean_ctor_set(v_reuseFailAlloc_71_, 3, v_r_51_);
lean_ctor_set(v_reuseFailAlloc_71_, 4, v_r_35_);
v___x_67_ = v_reuseFailAlloc_71_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
lean_object* v___x_69_; 
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 4, v___x_67_);
lean_ctor_set(v___x_45_, 3, v___y_62_);
lean_ctor_set(v___x_45_, 2, v_v_49_);
lean_ctor_set(v___x_45_, 1, v_k_48_);
lean_ctor_set(v___x_45_, 0, v___x_60_);
v___x_69_ = v___x_45_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_60_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_k_48_);
lean_ctor_set(v_reuseFailAlloc_70_, 2, v_v_49_);
lean_ctor_set(v_reuseFailAlloc_70_, 3, v___y_62_);
lean_ctor_set(v_reuseFailAlloc_70_, 4, v___x_67_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
v___jp_72_:
{
lean_object* v___x_74_; lean_object* v___x_76_; 
v___x_74_ = lean_nat_add(v___x_59_, v___y_73_);
lean_dec(v___y_73_);
lean_dec(v___x_59_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_l_50_);
lean_ctor_set(v___x_24_, 0, v___x_74_);
v___x_76_ = v___x_24_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_80_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_80_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_80_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_80_, 4, v_l_50_);
v___x_76_ = v_reuseFailAlloc_80_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_77_; 
v___x_77_ = lean_nat_add(v___x_29_, v_size_52_);
if (lean_obj_tag(v_r_51_) == 0)
{
lean_object* v_size_78_; 
v_size_78_ = lean_ctor_get(v_r_51_, 0);
lean_inc(v_size_78_);
v___y_62_ = v___x_76_;
v___y_63_ = v___x_77_;
v___y_64_ = v_size_78_;
goto v___jp_61_;
}
else
{
lean_object* v___x_79_; 
v___x_79_ = lean_unsigned_to_nat(0u);
v___y_62_ = v___x_76_;
v___y_63_ = v___x_77_;
v___y_64_ = v___x_79_;
goto v___jp_61_;
}
}
}
}
}
else
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
lean_del_object(v___x_24_);
v___x_89_ = lean_nat_add(v___x_29_, v_size_30_);
v___x_90_ = lean_nat_add(v___x_89_, v_size_31_);
lean_dec(v_size_31_);
v___x_91_ = lean_nat_add(v___x_89_, v_size_47_);
lean_dec(v___x_89_);
lean_inc_ref(v_l_21_);
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 4, v_l_34_);
lean_ctor_set(v___x_45_, 3, v_l_21_);
lean_ctor_set(v___x_45_, 2, v_v_20_);
lean_ctor_set(v___x_45_, 1, v_k_19_);
lean_ctor_set(v___x_45_, 0, v___x_91_);
v___x_93_ = v___x_45_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_91_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_106_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_106_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_106_, 4, v_l_34_);
v___x_93_ = v_reuseFailAlloc_106_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
v_isSharedCheck_100_ = !lean_is_exclusive(v_l_21_);
if (v_isSharedCheck_100_ == 0)
{
lean_object* v_unused_101_; lean_object* v_unused_102_; lean_object* v_unused_103_; lean_object* v_unused_104_; lean_object* v_unused_105_; 
v_unused_101_ = lean_ctor_get(v_l_21_, 4);
lean_dec(v_unused_101_);
v_unused_102_ = lean_ctor_get(v_l_21_, 3);
lean_dec(v_unused_102_);
v_unused_103_ = lean_ctor_get(v_l_21_, 2);
lean_dec(v_unused_103_);
v_unused_104_ = lean_ctor_get(v_l_21_, 1);
lean_dec(v_unused_104_);
v_unused_105_ = lean_ctor_get(v_l_21_, 0);
lean_dec(v_unused_105_);
v___x_95_ = v_l_21_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_dec(v_l_21_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 4, v_r_35_);
lean_ctor_set(v___x_95_, 3, v___x_93_);
lean_ctor_set(v___x_95_, 2, v_v_33_);
lean_ctor_set(v___x_95_, 1, v_k_32_);
lean_ctor_set(v___x_95_, 0, v___x_90_);
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v_k_32_);
lean_ctor_set(v_reuseFailAlloc_99_, 2, v_v_33_);
lean_ctor_set(v_reuseFailAlloc_99_, 3, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_99_, 4, v_r_35_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_113_; 
v_l_113_ = lean_ctor_get(v_impl_28_, 3);
lean_inc(v_l_113_);
if (lean_obj_tag(v_l_113_) == 0)
{
lean_object* v_r_114_; lean_object* v_k_115_; lean_object* v_v_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_139_; 
v_r_114_ = lean_ctor_get(v_impl_28_, 4);
v_k_115_ = lean_ctor_get(v_impl_28_, 1);
v_v_116_ = lean_ctor_get(v_impl_28_, 2);
v_isSharedCheck_139_ = !lean_is_exclusive(v_impl_28_);
if (v_isSharedCheck_139_ == 0)
{
lean_object* v_unused_140_; lean_object* v_unused_141_; 
v_unused_140_ = lean_ctor_get(v_impl_28_, 3);
lean_dec(v_unused_140_);
v_unused_141_ = lean_ctor_get(v_impl_28_, 0);
lean_dec(v_unused_141_);
v___x_118_ = v_impl_28_;
v_isShared_119_ = v_isSharedCheck_139_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_r_114_);
lean_inc(v_v_116_);
lean_inc(v_k_115_);
lean_dec(v_impl_28_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_139_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v_k_120_; lean_object* v_v_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_135_; 
v_k_120_ = lean_ctor_get(v_l_113_, 1);
v_v_121_ = lean_ctor_get(v_l_113_, 2);
v_isSharedCheck_135_ = !lean_is_exclusive(v_l_113_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; lean_object* v_unused_137_; lean_object* v_unused_138_; 
v_unused_136_ = lean_ctor_get(v_l_113_, 4);
lean_dec(v_unused_136_);
v_unused_137_ = lean_ctor_get(v_l_113_, 3);
lean_dec(v_unused_137_);
v_unused_138_ = lean_ctor_get(v_l_113_, 0);
lean_dec(v_unused_138_);
v___x_123_ = v_l_113_;
v_isShared_124_ = v_isSharedCheck_135_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_v_121_);
lean_inc(v_k_120_);
lean_dec(v_l_113_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_135_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_127_; 
v___x_125_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_114_, 2);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 4, v_r_114_);
lean_ctor_set(v___x_123_, 3, v_r_114_);
lean_ctor_set(v___x_123_, 2, v_v_20_);
lean_ctor_set(v___x_123_, 1, v_k_19_);
lean_ctor_set(v___x_123_, 0, v___x_29_);
v___x_127_ = v___x_123_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_134_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_134_, 3, v_r_114_);
lean_ctor_set(v_reuseFailAlloc_134_, 4, v_r_114_);
v___x_127_ = v_reuseFailAlloc_134_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
lean_object* v___x_129_; 
lean_inc(v_r_114_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 3, v_r_114_);
lean_ctor_set(v___x_118_, 0, v___x_29_);
v___x_129_ = v___x_118_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_k_115_);
lean_ctor_set(v_reuseFailAlloc_133_, 2, v_v_116_);
lean_ctor_set(v_reuseFailAlloc_133_, 3, v_r_114_);
lean_ctor_set(v_reuseFailAlloc_133_, 4, v_r_114_);
v___x_129_ = v_reuseFailAlloc_133_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_131_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v___x_129_);
lean_ctor_set(v___x_24_, 3, v___x_127_);
lean_ctor_set(v___x_24_, 2, v_v_121_);
lean_ctor_set(v___x_24_, 1, v_k_120_);
lean_ctor_set(v___x_24_, 0, v___x_125_);
v___x_131_ = v___x_24_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_125_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v_k_120_);
lean_ctor_set(v_reuseFailAlloc_132_, 2, v_v_121_);
lean_ctor_set(v_reuseFailAlloc_132_, 3, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_132_, 4, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
}
}
else
{
lean_object* v_r_142_; 
v_r_142_ = lean_ctor_get(v_impl_28_, 4);
lean_inc(v_r_142_);
if (lean_obj_tag(v_r_142_) == 0)
{
lean_object* v_k_143_; lean_object* v_v_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_155_; 
v_k_143_ = lean_ctor_get(v_impl_28_, 1);
v_v_144_ = lean_ctor_get(v_impl_28_, 2);
v_isSharedCheck_155_ = !lean_is_exclusive(v_impl_28_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; lean_object* v_unused_157_; lean_object* v_unused_158_; 
v_unused_156_ = lean_ctor_get(v_impl_28_, 4);
lean_dec(v_unused_156_);
v_unused_157_ = lean_ctor_get(v_impl_28_, 3);
lean_dec(v_unused_157_);
v_unused_158_ = lean_ctor_get(v_impl_28_, 0);
lean_dec(v_unused_158_);
v___x_146_ = v_impl_28_;
v_isShared_147_ = v_isSharedCheck_155_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_v_144_);
lean_inc(v_k_143_);
lean_dec(v_impl_28_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_155_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_148_; lean_object* v___x_150_; 
v___x_148_ = lean_unsigned_to_nat(3u);
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 4, v_l_113_);
lean_ctor_set(v___x_146_, 2, v_v_20_);
lean_ctor_set(v___x_146_, 1, v_k_19_);
lean_ctor_set(v___x_146_, 0, v___x_29_);
v___x_150_ = v___x_146_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_154_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_154_, 3, v_l_113_);
lean_ctor_set(v_reuseFailAlloc_154_, 4, v_l_113_);
v___x_150_ = v_reuseFailAlloc_154_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_152_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_r_142_);
lean_ctor_set(v___x_24_, 3, v___x_150_);
lean_ctor_set(v___x_24_, 2, v_v_144_);
lean_ctor_set(v___x_24_, 1, v_k_143_);
lean_ctor_set(v___x_24_, 0, v___x_148_);
v___x_152_ = v___x_24_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_148_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v_k_143_);
lean_ctor_set(v_reuseFailAlloc_153_, 2, v_v_144_);
lean_ctor_set(v_reuseFailAlloc_153_, 3, v___x_150_);
lean_ctor_set(v_reuseFailAlloc_153_, 4, v_r_142_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
else
{
lean_object* v___x_159_; lean_object* v___x_161_; 
v___x_159_ = lean_unsigned_to_nat(2u);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_impl_28_);
lean_ctor_set(v___x_24_, 3, v_r_142_);
lean_ctor_set(v___x_24_, 0, v___x_159_);
v___x_161_ = v___x_24_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_159_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_162_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_162_, 3, v_r_142_);
lean_ctor_set(v_reuseFailAlloc_162_, 4, v_impl_28_);
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
else
{
lean_object* v___x_164_; 
lean_dec(v_v_20_);
lean_dec(v_k_19_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 2, v_v_16_);
lean_ctor_set(v___x_24_, 1, v_k_15_);
v___x_164_ = v___x_24_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_size_18_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v_k_15_);
lean_ctor_set(v_reuseFailAlloc_165_, 2, v_v_16_);
lean_ctor_set(v_reuseFailAlloc_165_, 3, v_l_21_);
lean_ctor_set(v_reuseFailAlloc_165_, 4, v_r_22_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
else
{
lean_object* v_impl_166_; lean_object* v___x_167_; 
lean_dec(v_size_18_);
v_impl_166_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_k_15_, v_v_16_, v_l_21_);
v___x_167_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_22_) == 0)
{
lean_object* v_size_168_; lean_object* v_size_169_; lean_object* v_k_170_; lean_object* v_v_171_; lean_object* v_l_172_; lean_object* v_r_173_; lean_object* v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
v_size_168_ = lean_ctor_get(v_r_22_, 0);
v_size_169_ = lean_ctor_get(v_impl_166_, 0);
lean_inc(v_size_169_);
v_k_170_ = lean_ctor_get(v_impl_166_, 1);
lean_inc(v_k_170_);
v_v_171_ = lean_ctor_get(v_impl_166_, 2);
lean_inc(v_v_171_);
v_l_172_ = lean_ctor_get(v_impl_166_, 3);
lean_inc(v_l_172_);
v_r_173_ = lean_ctor_get(v_impl_166_, 4);
lean_inc(v_r_173_);
v___x_174_ = lean_unsigned_to_nat(3u);
v___x_175_ = lean_nat_mul(v___x_174_, v_size_168_);
v___x_176_ = lean_nat_dec_lt(v___x_175_, v_size_169_);
lean_dec(v___x_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
lean_dec(v_r_173_);
lean_dec(v_l_172_);
lean_dec(v_v_171_);
lean_dec(v_k_170_);
v___x_177_ = lean_nat_add(v___x_167_, v_size_169_);
lean_dec(v_size_169_);
v___x_178_ = lean_nat_add(v___x_177_, v_size_168_);
lean_dec(v___x_177_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 3, v_impl_166_);
lean_ctor_set(v___x_24_, 0, v___x_178_);
v___x_180_ = v___x_24_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_181_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_181_, 3, v_impl_166_);
lean_ctor_set(v_reuseFailAlloc_181_, 4, v_r_22_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
else
{
lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_247_; 
v_isSharedCheck_247_ = !lean_is_exclusive(v_impl_166_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; lean_object* v_unused_249_; lean_object* v_unused_250_; lean_object* v_unused_251_; lean_object* v_unused_252_; 
v_unused_248_ = lean_ctor_get(v_impl_166_, 4);
lean_dec(v_unused_248_);
v_unused_249_ = lean_ctor_get(v_impl_166_, 3);
lean_dec(v_unused_249_);
v_unused_250_ = lean_ctor_get(v_impl_166_, 2);
lean_dec(v_unused_250_);
v_unused_251_ = lean_ctor_get(v_impl_166_, 1);
lean_dec(v_unused_251_);
v_unused_252_ = lean_ctor_get(v_impl_166_, 0);
lean_dec(v_unused_252_);
v___x_183_ = v_impl_166_;
v_isShared_184_ = v_isSharedCheck_247_;
goto v_resetjp_182_;
}
else
{
lean_dec(v_impl_166_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_247_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v_size_185_; lean_object* v_size_186_; lean_object* v_k_187_; lean_object* v_v_188_; lean_object* v_l_189_; lean_object* v_r_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_size_185_ = lean_ctor_get(v_l_172_, 0);
v_size_186_ = lean_ctor_get(v_r_173_, 0);
v_k_187_ = lean_ctor_get(v_r_173_, 1);
v_v_188_ = lean_ctor_get(v_r_173_, 2);
v_l_189_ = lean_ctor_get(v_r_173_, 3);
v_r_190_ = lean_ctor_get(v_r_173_, 4);
v___x_191_ = lean_unsigned_to_nat(2u);
v___x_192_ = lean_nat_mul(v___x_191_, v_size_185_);
v___x_193_ = lean_nat_dec_lt(v_size_186_, v___x_192_);
lean_dec(v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_222_; 
lean_inc(v_r_190_);
lean_inc(v_l_189_);
lean_inc(v_v_188_);
lean_inc(v_k_187_);
v_isSharedCheck_222_ = !lean_is_exclusive(v_r_173_);
if (v_isSharedCheck_222_ == 0)
{
lean_object* v_unused_223_; lean_object* v_unused_224_; lean_object* v_unused_225_; lean_object* v_unused_226_; lean_object* v_unused_227_; 
v_unused_223_ = lean_ctor_get(v_r_173_, 4);
lean_dec(v_unused_223_);
v_unused_224_ = lean_ctor_get(v_r_173_, 3);
lean_dec(v_unused_224_);
v_unused_225_ = lean_ctor_get(v_r_173_, 2);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_r_173_, 1);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_r_173_, 0);
lean_dec(v_unused_227_);
v___x_195_ = v_r_173_;
v_isShared_196_ = v_isSharedCheck_222_;
goto v_resetjp_194_;
}
else
{
lean_dec(v_r_173_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_222_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___y_200_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___x_210_; lean_object* v___y_212_; 
v___x_197_ = lean_nat_add(v___x_167_, v_size_169_);
lean_dec(v_size_169_);
v___x_198_ = lean_nat_add(v___x_197_, v_size_168_);
lean_dec(v___x_197_);
v___x_210_ = lean_nat_add(v___x_167_, v_size_185_);
if (lean_obj_tag(v_l_189_) == 0)
{
lean_object* v_size_220_; 
v_size_220_ = lean_ctor_get(v_l_189_, 0);
lean_inc(v_size_220_);
v___y_212_ = v_size_220_;
goto v___jp_211_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_unsigned_to_nat(0u);
v___y_212_ = v___x_221_;
goto v___jp_211_;
}
v___jp_199_:
{
lean_object* v___x_203_; lean_object* v___x_205_; 
v___x_203_ = lean_nat_add(v___y_200_, v___y_202_);
lean_dec(v___y_202_);
lean_dec(v___y_200_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 4, v_r_22_);
lean_ctor_set(v___x_195_, 3, v_r_190_);
lean_ctor_set(v___x_195_, 2, v_v_20_);
lean_ctor_set(v___x_195_, 1, v_k_19_);
lean_ctor_set(v___x_195_, 0, v___x_203_);
v___x_205_ = v___x_195_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_209_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_209_, 3, v_r_190_);
lean_ctor_set(v_reuseFailAlloc_209_, 4, v_r_22_);
v___x_205_ = v_reuseFailAlloc_209_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v___x_207_; 
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 4, v___x_205_);
lean_ctor_set(v___x_183_, 3, v___y_201_);
lean_ctor_set(v___x_183_, 2, v_v_188_);
lean_ctor_set(v___x_183_, 1, v_k_187_);
lean_ctor_set(v___x_183_, 0, v___x_198_);
v___x_207_ = v___x_183_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_198_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_k_187_);
lean_ctor_set(v_reuseFailAlloc_208_, 2, v_v_188_);
lean_ctor_set(v_reuseFailAlloc_208_, 3, v___y_201_);
lean_ctor_set(v_reuseFailAlloc_208_, 4, v___x_205_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
v___jp_211_:
{
lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_213_ = lean_nat_add(v___x_210_, v___y_212_);
lean_dec(v___y_212_);
lean_dec(v___x_210_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_l_189_);
lean_ctor_set(v___x_24_, 3, v_l_172_);
lean_ctor_set(v___x_24_, 2, v_v_171_);
lean_ctor_set(v___x_24_, 1, v_k_170_);
lean_ctor_set(v___x_24_, 0, v___x_213_);
v___x_215_ = v___x_24_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_213_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_k_170_);
lean_ctor_set(v_reuseFailAlloc_219_, 2, v_v_171_);
lean_ctor_set(v_reuseFailAlloc_219_, 3, v_l_172_);
lean_ctor_set(v_reuseFailAlloc_219_, 4, v_l_189_);
v___x_215_ = v_reuseFailAlloc_219_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v___x_216_; 
v___x_216_ = lean_nat_add(v___x_167_, v_size_168_);
if (lean_obj_tag(v_r_190_) == 0)
{
lean_object* v_size_217_; 
v_size_217_ = lean_ctor_get(v_r_190_, 0);
lean_inc(v_size_217_);
v___y_200_ = v___x_216_;
v___y_201_ = v___x_215_;
v___y_202_ = v_size_217_;
goto v___jp_199_;
}
else
{
lean_object* v___x_218_; 
v___x_218_ = lean_unsigned_to_nat(0u);
v___y_200_ = v___x_216_;
v___y_201_ = v___x_215_;
v___y_202_ = v___x_218_;
goto v___jp_199_;
}
}
}
}
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
lean_del_object(v___x_24_);
v___x_228_ = lean_nat_add(v___x_167_, v_size_169_);
lean_dec(v_size_169_);
v___x_229_ = lean_nat_add(v___x_228_, v_size_168_);
lean_dec(v___x_228_);
v___x_230_ = lean_nat_add(v___x_167_, v_size_168_);
v___x_231_ = lean_nat_add(v___x_230_, v_size_186_);
lean_dec(v___x_230_);
lean_inc_ref(v_r_22_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 4, v_r_22_);
lean_ctor_set(v___x_183_, 3, v_r_173_);
lean_ctor_set(v___x_183_, 2, v_v_20_);
lean_ctor_set(v___x_183_, 1, v_k_19_);
lean_ctor_set(v___x_183_, 0, v___x_231_);
v___x_233_ = v___x_183_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_246_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_246_, 3, v_r_173_);
lean_ctor_set(v_reuseFailAlloc_246_, 4, v_r_22_);
v___x_233_ = v_reuseFailAlloc_246_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
v_isSharedCheck_240_ = !lean_is_exclusive(v_r_22_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; lean_object* v_unused_242_; lean_object* v_unused_243_; lean_object* v_unused_244_; lean_object* v_unused_245_; 
v_unused_241_ = lean_ctor_get(v_r_22_, 4);
lean_dec(v_unused_241_);
v_unused_242_ = lean_ctor_get(v_r_22_, 3);
lean_dec(v_unused_242_);
v_unused_243_ = lean_ctor_get(v_r_22_, 2);
lean_dec(v_unused_243_);
v_unused_244_ = lean_ctor_get(v_r_22_, 1);
lean_dec(v_unused_244_);
v_unused_245_ = lean_ctor_get(v_r_22_, 0);
lean_dec(v_unused_245_);
v___x_235_ = v_r_22_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_dec(v_r_22_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 4, v___x_233_);
lean_ctor_set(v___x_235_, 3, v_l_172_);
lean_ctor_set(v___x_235_, 2, v_v_171_);
lean_ctor_set(v___x_235_, 1, v_k_170_);
lean_ctor_set(v___x_235_, 0, v___x_229_);
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_k_170_);
lean_ctor_set(v_reuseFailAlloc_239_, 2, v_v_171_);
lean_ctor_set(v_reuseFailAlloc_239_, 3, v_l_172_);
lean_ctor_set(v_reuseFailAlloc_239_, 4, v___x_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_253_; 
v_l_253_ = lean_ctor_get(v_impl_166_, 3);
lean_inc(v_l_253_);
if (lean_obj_tag(v_l_253_) == 0)
{
lean_object* v_r_254_; lean_object* v_k_255_; lean_object* v_v_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_267_; 
v_r_254_ = lean_ctor_get(v_impl_166_, 4);
v_k_255_ = lean_ctor_get(v_impl_166_, 1);
v_v_256_ = lean_ctor_get(v_impl_166_, 2);
v_isSharedCheck_267_ = !lean_is_exclusive(v_impl_166_);
if (v_isSharedCheck_267_ == 0)
{
lean_object* v_unused_268_; lean_object* v_unused_269_; 
v_unused_268_ = lean_ctor_get(v_impl_166_, 3);
lean_dec(v_unused_268_);
v_unused_269_ = lean_ctor_get(v_impl_166_, 0);
lean_dec(v_unused_269_);
v___x_258_ = v_impl_166_;
v_isShared_259_ = v_isSharedCheck_267_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_r_254_);
lean_inc(v_v_256_);
lean_inc(v_k_255_);
lean_dec(v_impl_166_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_267_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_260_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_254_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 3, v_r_254_);
lean_ctor_set(v___x_258_, 2, v_v_20_);
lean_ctor_set(v___x_258_, 1, v_k_19_);
lean_ctor_set(v___x_258_, 0, v___x_167_);
v___x_262_ = v___x_258_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_266_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_266_, 3, v_r_254_);
lean_ctor_set(v_reuseFailAlloc_266_, 4, v_r_254_);
v___x_262_ = v_reuseFailAlloc_266_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_264_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v___x_262_);
lean_ctor_set(v___x_24_, 3, v_l_253_);
lean_ctor_set(v___x_24_, 2, v_v_256_);
lean_ctor_set(v___x_24_, 1, v_k_255_);
lean_ctor_set(v___x_24_, 0, v___x_260_);
v___x_264_ = v___x_24_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_260_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_k_255_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v_v_256_);
lean_ctor_set(v_reuseFailAlloc_265_, 3, v_l_253_);
lean_ctor_set(v_reuseFailAlloc_265_, 4, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
else
{
lean_object* v_r_270_; 
v_r_270_ = lean_ctor_get(v_impl_166_, 4);
lean_inc(v_r_270_);
if (lean_obj_tag(v_r_270_) == 0)
{
lean_object* v_k_271_; lean_object* v_v_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_295_; 
v_k_271_ = lean_ctor_get(v_impl_166_, 1);
v_v_272_ = lean_ctor_get(v_impl_166_, 2);
v_isSharedCheck_295_ = !lean_is_exclusive(v_impl_166_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; lean_object* v_unused_297_; lean_object* v_unused_298_; 
v_unused_296_ = lean_ctor_get(v_impl_166_, 4);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_impl_166_, 3);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_impl_166_, 0);
lean_dec(v_unused_298_);
v___x_274_ = v_impl_166_;
v_isShared_275_ = v_isSharedCheck_295_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_v_272_);
lean_inc(v_k_271_);
lean_dec(v_impl_166_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_295_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v_k_276_; lean_object* v_v_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_291_; 
v_k_276_ = lean_ctor_get(v_r_270_, 1);
v_v_277_ = lean_ctor_get(v_r_270_, 2);
v_isSharedCheck_291_ = !lean_is_exclusive(v_r_270_);
if (v_isSharedCheck_291_ == 0)
{
lean_object* v_unused_292_; lean_object* v_unused_293_; lean_object* v_unused_294_; 
v_unused_292_ = lean_ctor_get(v_r_270_, 4);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_r_270_, 3);
lean_dec(v_unused_293_);
v_unused_294_ = lean_ctor_get(v_r_270_, 0);
lean_dec(v_unused_294_);
v___x_279_ = v_r_270_;
v_isShared_280_ = v_isSharedCheck_291_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_v_277_);
lean_inc(v_k_276_);
lean_dec(v_r_270_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_291_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; lean_object* v___x_283_; 
v___x_281_ = lean_unsigned_to_nat(3u);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 4, v_l_253_);
lean_ctor_set(v___x_279_, 3, v_l_253_);
lean_ctor_set(v___x_279_, 2, v_v_272_);
lean_ctor_set(v___x_279_, 1, v_k_271_);
lean_ctor_set(v___x_279_, 0, v___x_167_);
v___x_283_ = v___x_279_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_k_271_);
lean_ctor_set(v_reuseFailAlloc_290_, 2, v_v_272_);
lean_ctor_set(v_reuseFailAlloc_290_, 3, v_l_253_);
lean_ctor_set(v_reuseFailAlloc_290_, 4, v_l_253_);
v___x_283_ = v_reuseFailAlloc_290_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
lean_object* v___x_285_; 
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 4, v_l_253_);
lean_ctor_set(v___x_274_, 2, v_v_20_);
lean_ctor_set(v___x_274_, 1, v_k_19_);
lean_ctor_set(v___x_274_, 0, v___x_167_);
v___x_285_ = v___x_274_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_289_, 3, v_l_253_);
lean_ctor_set(v_reuseFailAlloc_289_, 4, v_l_253_);
v___x_285_ = v_reuseFailAlloc_289_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v___x_287_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v___x_285_);
lean_ctor_set(v___x_24_, 3, v___x_283_);
lean_ctor_set(v___x_24_, 2, v_v_277_);
lean_ctor_set(v___x_24_, 1, v_k_276_);
lean_ctor_set(v___x_24_, 0, v___x_281_);
v___x_287_ = v___x_24_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_k_276_);
lean_ctor_set(v_reuseFailAlloc_288_, 2, v_v_277_);
lean_ctor_set(v_reuseFailAlloc_288_, 3, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_288_, 4, v___x_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
}
else
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = lean_unsigned_to_nat(2u);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 4, v_r_270_);
lean_ctor_set(v___x_24_, 3, v_impl_166_);
lean_ctor_set(v___x_24_, 0, v___x_299_);
v___x_301_ = v___x_24_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v_k_19_);
lean_ctor_set(v_reuseFailAlloc_302_, 2, v_v_20_);
lean_ctor_set(v_reuseFailAlloc_302_, 3, v_impl_166_);
lean_ctor_set(v_reuseFailAlloc_302_, 4, v_r_270_);
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
}
}
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v_k_15_);
lean_ctor_set(v___x_305_, 2, v_v_16_);
lean_ctor_set(v___x_305_, 3, v_t_17_);
lean_ctor_set(v___x_305_, 4, v_t_17_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkId(lean_object* v_id_306_, lean_object* v___y_307_){
_start:
{
uint8_t v___x_308_; 
v___x_308_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(v_id_306_, v___y_307_);
if (v___x_308_ == 0)
{
uint8_t v___x_309_; 
v___x_309_ = 1;
if (v___x_308_ == 0)
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = lean_box(0);
v___x_311_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_id_306_, v___x_310_, v___y_307_);
v___x_312_ = lean_box(v___x_309_);
v___x_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
lean_ctor_set(v___x_313_, 1, v___x_311_);
return v___x_313_;
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec(v_id_306_);
v___x_314_ = lean_box(v___x_309_);
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
lean_ctor_set(v___x_315_, 1, v___y_307_);
return v___x_315_;
}
}
else
{
uint8_t v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
lean_dec(v_id_306_);
v___x_316_ = 0;
v___x_317_ = lean_box(v___x_316_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
lean_ctor_set(v___x_318_, 1, v___y_307_);
return v___x_318_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0(lean_object* v_00_u03b2_319_, lean_object* v_k_320_, lean_object* v_t_321_){
_start:
{
uint8_t v___x_322_; 
v___x_322_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___redArg(v_k_320_, v_t_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0___boxed(lean_object* v_00_u03b2_323_, lean_object* v_k_324_, lean_object* v_t_325_){
_start:
{
uint8_t v_res_326_; lean_object* v_r_327_; 
v_res_326_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_UniqueIds_checkId_spec__0(v_00_u03b2_323_, v_k_324_, v_t_325_);
lean_dec(v_t_325_);
lean_dec(v_k_324_);
v_r_327_ = lean_box(v_res_326_);
return v_r_327_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1(lean_object* v_00_u03b2_328_, lean_object* v_k_329_, lean_object* v_v_330_, lean_object* v_t_331_, lean_object* v_hl_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_k_329_, v_v_330_, v_t_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0(lean_object* v_as_334_, size_t v_i_335_, size_t v_stop_336_, lean_object* v___y_337_){
_start:
{
uint8_t v___x_338_; 
v___x_338_ = lean_usize_dec_eq(v_i_335_, v_stop_336_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; lean_object* v_x_340_; lean_object* v___x_341_; lean_object* v_fst_342_; uint8_t v___x_343_; 
v___x_339_ = lean_array_uget_borrowed(v_as_334_, v_i_335_);
v_x_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_x_340_);
v___x_341_ = l_Lean_IR_UniqueIds_checkId(v_x_340_, v___y_337_);
v_fst_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_fst_342_);
v___x_343_ = lean_unbox(v_fst_342_);
lean_dec(v_fst_342_);
if (v___x_343_ == 0)
{
lean_object* v_snd_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_353_; 
v_snd_344_ = lean_ctor_get(v___x_341_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_353_ == 0)
{
lean_object* v_unused_354_; 
v_unused_354_ = lean_ctor_get(v___x_341_, 0);
lean_dec(v_unused_354_);
v___x_346_ = v___x_341_;
v_isShared_347_ = v_isSharedCheck_353_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_snd_344_);
lean_dec(v___x_341_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_353_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_348_ = 1;
v___x_349_ = lean_box(v___x_348_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 0, v___x_349_);
v___x_351_ = v___x_346_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_snd_344_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
else
{
lean_object* v_snd_355_; size_t v___x_356_; size_t v___x_357_; 
v_snd_355_ = lean_ctor_get(v___x_341_, 1);
lean_inc(v_snd_355_);
lean_dec_ref(v___x_341_);
v___x_356_ = ((size_t)1ULL);
v___x_357_ = lean_usize_add(v_i_335_, v___x_356_);
v_i_335_ = v___x_357_;
v___y_337_ = v_snd_355_;
goto _start;
}
}
else
{
uint8_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_359_ = 0;
v___x_360_ = lean_box(v___x_359_);
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v___y_337_);
return v___x_361_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0___boxed(lean_object* v_as_362_, lean_object* v_i_363_, lean_object* v_stop_364_, lean_object* v___y_365_){
_start:
{
size_t v_i_boxed_366_; size_t v_stop_boxed_367_; lean_object* v_res_368_; 
v_i_boxed_366_ = lean_unbox_usize(v_i_363_);
lean_dec(v_i_363_);
v_stop_boxed_367_ = lean_unbox_usize(v_stop_364_);
lean_dec(v_stop_364_);
v_res_368_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0(v_as_362_, v_i_boxed_366_, v_stop_boxed_367_, v___y_365_);
lean_dec_ref(v_as_362_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkParams(lean_object* v_ps_369_, lean_object* v___y_370_){
_start:
{
lean_object* v___y_372_; lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_376_ = lean_unsigned_to_nat(0u);
v___x_377_ = lean_array_get_size(v_ps_369_);
v___x_378_ = lean_nat_dec_lt(v___x_376_, v___x_377_);
if (v___x_378_ == 0)
{
v___y_372_ = v___y_370_;
goto v___jp_371_;
}
else
{
if (v___x_378_ == 0)
{
v___y_372_ = v___y_370_;
goto v___jp_371_;
}
else
{
size_t v___x_379_; size_t v___x_380_; lean_object* v___x_381_; lean_object* v_fst_382_; uint8_t v___x_383_; 
v___x_379_ = ((size_t)0ULL);
v___x_380_ = lean_usize_of_nat(v___x_377_);
v___x_381_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkParams_spec__0(v_ps_369_, v___x_379_, v___x_380_, v___y_370_);
v_fst_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_fst_382_);
v___x_383_ = lean_unbox(v_fst_382_);
lean_dec(v_fst_382_);
if (v___x_383_ == 0)
{
lean_object* v_snd_384_; 
v_snd_384_ = lean_ctor_get(v___x_381_, 1);
lean_inc(v_snd_384_);
lean_dec_ref(v___x_381_);
v___y_372_ = v_snd_384_;
goto v___jp_371_;
}
else
{
lean_object* v_snd_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_394_; 
v_snd_385_ = lean_ctor_get(v___x_381_, 1);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_394_ == 0)
{
lean_object* v_unused_395_; 
v_unused_395_ = lean_ctor_get(v___x_381_, 0);
lean_dec(v_unused_395_);
v___x_387_ = v___x_381_;
v_isShared_388_ = v_isSharedCheck_394_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_snd_385_);
lean_dec(v___x_381_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_394_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_392_; 
v___x_389_ = 0;
v___x_390_ = lean_box(v___x_389_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_390_);
v___x_392_ = v___x_387_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v_snd_385_);
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
v___jp_371_:
{
uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = 1;
v___x_374_ = lean_box(v___x_373_);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v___y_372_);
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkParams___boxed(lean_object* v_ps_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_IR_UniqueIds_checkParams(v_ps_396_, v___y_397_);
lean_dec_ref(v_ps_396_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkFnBody(lean_object* v_x_399_, lean_object* v___y_400_){
_start:
{
lean_object* v___y_402_; 
switch(lean_obj_tag(v_x_399_))
{
case 0:
{
lean_object* v_x_406_; lean_object* v_b_407_; lean_object* v___x_408_; lean_object* v_fst_409_; uint8_t v___x_410_; 
v_x_406_ = lean_ctor_get(v_x_399_, 0);
lean_inc(v_x_406_);
v_b_407_ = lean_ctor_get(v_x_399_, 3);
lean_inc(v_b_407_);
lean_dec_ref_known(v_x_399_, 4);
v___x_408_ = l_Lean_IR_UniqueIds_checkId(v_x_406_, v___y_400_);
v_fst_409_ = lean_ctor_get(v___x_408_, 0);
lean_inc(v_fst_409_);
v___x_410_ = lean_unbox(v_fst_409_);
lean_dec(v_fst_409_);
if (v___x_410_ == 0)
{
lean_dec(v_b_407_);
return v___x_408_;
}
else
{
lean_object* v_snd_411_; 
v_snd_411_ = lean_ctor_get(v___x_408_, 1);
lean_inc(v_snd_411_);
lean_dec_ref(v___x_408_);
v_x_399_ = v_b_407_;
v___y_400_ = v_snd_411_;
goto _start;
}
}
case 1:
{
lean_object* v_j_413_; lean_object* v_xs_414_; lean_object* v_b_415_; lean_object* v___x_416_; lean_object* v_fst_417_; uint8_t v___x_418_; 
v_j_413_ = lean_ctor_get(v_x_399_, 0);
lean_inc(v_j_413_);
v_xs_414_ = lean_ctor_get(v_x_399_, 1);
lean_inc_ref(v_xs_414_);
v_b_415_ = lean_ctor_get(v_x_399_, 3);
lean_inc(v_b_415_);
lean_dec_ref_known(v_x_399_, 4);
v___x_416_ = l_Lean_IR_UniqueIds_checkId(v_j_413_, v___y_400_);
v_fst_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_fst_417_);
v___x_418_ = lean_unbox(v_fst_417_);
lean_dec(v_fst_417_);
if (v___x_418_ == 0)
{
lean_dec(v_b_415_);
lean_dec_ref(v_xs_414_);
return v___x_416_;
}
else
{
lean_object* v_snd_419_; lean_object* v___x_420_; lean_object* v_fst_421_; uint8_t v___x_422_; 
v_snd_419_ = lean_ctor_get(v___x_416_, 1);
lean_inc(v_snd_419_);
lean_dec_ref(v___x_416_);
v___x_420_ = l_Lean_IR_UniqueIds_checkParams(v_xs_414_, v_snd_419_);
lean_dec_ref(v_xs_414_);
v_fst_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc(v_fst_421_);
v___x_422_ = lean_unbox(v_fst_421_);
lean_dec(v_fst_421_);
if (v___x_422_ == 0)
{
lean_dec(v_b_415_);
return v___x_420_;
}
else
{
lean_object* v_snd_423_; 
v_snd_423_ = lean_ctor_get(v___x_420_, 1);
lean_inc(v_snd_423_);
lean_dec_ref(v___x_420_);
v_x_399_ = v_b_415_;
v___y_400_ = v_snd_423_;
goto _start;
}
}
}
case 9:
{
lean_object* v_cs_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; 
v_cs_425_ = lean_ctor_get(v_x_399_, 3);
lean_inc_ref(v_cs_425_);
lean_dec_ref_known(v_x_399_, 4);
v___x_426_ = lean_unsigned_to_nat(0u);
v___x_427_ = lean_array_get_size(v_cs_425_);
v___x_428_ = lean_nat_dec_lt(v___x_426_, v___x_427_);
if (v___x_428_ == 0)
{
lean_dec_ref(v_cs_425_);
v___y_402_ = v___y_400_;
goto v___jp_401_;
}
else
{
if (v___x_428_ == 0)
{
lean_dec_ref(v_cs_425_);
v___y_402_ = v___y_400_;
goto v___jp_401_;
}
else
{
size_t v___x_429_; size_t v___x_430_; lean_object* v___x_431_; lean_object* v_fst_432_; uint8_t v___x_433_; 
v___x_429_ = ((size_t)0ULL);
v___x_430_ = lean_usize_of_nat(v___x_427_);
v___x_431_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0(v_cs_425_, v___x_429_, v___x_430_, v___y_400_);
lean_dec_ref(v_cs_425_);
v_fst_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_fst_432_);
v___x_433_ = lean_unbox(v_fst_432_);
lean_dec(v_fst_432_);
if (v___x_433_ == 0)
{
lean_object* v_snd_434_; 
v_snd_434_ = lean_ctor_get(v___x_431_, 1);
lean_inc(v_snd_434_);
lean_dec_ref(v___x_431_);
v___y_402_ = v_snd_434_;
goto v___jp_401_;
}
else
{
lean_object* v_snd_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_444_; 
v_snd_435_ = lean_ctor_get(v___x_431_, 1);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_444_ == 0)
{
lean_object* v_unused_445_; 
v_unused_445_ = lean_ctor_get(v___x_431_, 0);
lean_dec(v_unused_445_);
v___x_437_ = v___x_431_;
v_isShared_438_ = v_isSharedCheck_444_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_snd_435_);
lean_dec(v___x_431_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_444_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_439_ = 0;
v___x_440_ = lean_box(v___x_439_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_440_);
v___x_442_ = v___x_437_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_440_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v_snd_435_);
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
}
default: 
{
uint8_t v___x_446_; 
v___x_446_ = l_Lean_IR_FnBody_isTerminal(v_x_399_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; 
v___x_447_ = l_Lean_IR_FnBody_body(v_x_399_);
lean_dec(v_x_399_);
v_x_399_ = v___x_447_;
goto _start;
}
else
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec(v_x_399_);
v___x_449_ = lean_box(v___x_446_);
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v___y_400_);
return v___x_450_;
}
}
}
v___jp_401_:
{
uint8_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = 1;
v___x_404_ = lean_box(v___x_403_);
v___x_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v___y_402_);
return v___x_405_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0(lean_object* v_as_451_, size_t v_i_452_, size_t v_stop_453_, lean_object* v___y_454_){
_start:
{
uint8_t v___x_455_; 
v___x_455_ = lean_usize_dec_eq(v_i_452_, v_stop_453_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v_fst_459_; uint8_t v___x_460_; 
v___x_456_ = lean_array_uget_borrowed(v_as_451_, v_i_452_);
v___x_457_ = l_Lean_IR_Alt_body(v___x_456_);
v___x_458_ = l_Lean_IR_UniqueIds_checkFnBody(v___x_457_, v___y_454_);
v_fst_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_fst_459_);
v___x_460_ = lean_unbox(v_fst_459_);
lean_dec(v_fst_459_);
if (v___x_460_ == 0)
{
lean_object* v_snd_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_470_; 
v_snd_461_ = lean_ctor_get(v___x_458_, 1);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_470_ == 0)
{
lean_object* v_unused_471_; 
v_unused_471_ = lean_ctor_get(v___x_458_, 0);
lean_dec(v_unused_471_);
v___x_463_ = v___x_458_;
v_isShared_464_ = v_isSharedCheck_470_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_snd_461_);
lean_dec(v___x_458_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_470_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
uint8_t v___x_465_; lean_object* v___x_466_; lean_object* v___x_468_; 
v___x_465_ = 1;
v___x_466_ = lean_box(v___x_465_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 0, v___x_466_);
v___x_468_ = v___x_463_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_snd_461_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
else
{
lean_object* v_snd_472_; size_t v___x_473_; size_t v___x_474_; 
v_snd_472_ = lean_ctor_get(v___x_458_, 1);
lean_inc(v_snd_472_);
lean_dec_ref(v___x_458_);
v___x_473_ = ((size_t)1ULL);
v___x_474_ = lean_usize_add(v_i_452_, v___x_473_);
v_i_452_ = v___x_474_;
v___y_454_ = v_snd_472_;
goto _start;
}
}
else
{
uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = 0;
v___x_477_ = lean_box(v___x_476_);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
lean_ctor_set(v___x_478_, 1, v___y_454_);
return v___x_478_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0___boxed(lean_object* v_as_479_, lean_object* v_i_480_, lean_object* v_stop_481_, lean_object* v___y_482_){
_start:
{
size_t v_i_boxed_483_; size_t v_stop_boxed_484_; lean_object* v_res_485_; 
v_i_boxed_483_ = lean_unbox_usize(v_i_480_);
lean_dec(v_i_480_);
v_stop_boxed_484_ = lean_unbox_usize(v_stop_481_);
lean_dec(v_stop_481_);
v_res_485_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_UniqueIds_checkFnBody_spec__0(v_as_479_, v_i_boxed_483_, v_stop_boxed_484_, v___y_482_);
lean_dec_ref(v_as_479_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_UniqueIds_checkDecl(lean_object* v_x_486_, lean_object* v___y_487_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v_xs_488_; lean_object* v_body_489_; lean_object* v___x_490_; lean_object* v_fst_491_; uint8_t v___x_492_; 
v_xs_488_ = lean_ctor_get(v_x_486_, 1);
lean_inc_ref(v_xs_488_);
v_body_489_ = lean_ctor_get(v_x_486_, 3);
lean_inc(v_body_489_);
lean_dec_ref_known(v_x_486_, 5);
v___x_490_ = l_Lean_IR_UniqueIds_checkParams(v_xs_488_, v___y_487_);
lean_dec_ref(v_xs_488_);
v_fst_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_fst_491_);
v___x_492_ = lean_unbox(v_fst_491_);
lean_dec(v_fst_491_);
if (v___x_492_ == 0)
{
lean_dec(v_body_489_);
return v___x_490_;
}
else
{
lean_object* v_snd_493_; lean_object* v___x_494_; 
v_snd_493_ = lean_ctor_get(v___x_490_, 1);
lean_inc(v_snd_493_);
lean_dec_ref(v___x_490_);
v___x_494_ = l_Lean_IR_UniqueIds_checkFnBody(v_body_489_, v_snd_493_);
return v___x_494_;
}
}
else
{
lean_object* v_xs_495_; lean_object* v___x_496_; 
v_xs_495_ = lean_ctor_get(v_x_486_, 1);
lean_inc_ref(v_xs_495_);
lean_dec_ref_known(v_x_486_, 4);
v___x_496_ = l_Lean_IR_UniqueIds_checkParams(v_xs_495_, v___y_487_);
lean_dec_ref(v_xs_495_);
return v___x_496_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_IR_Decl_uniqueIds(lean_object* v_d_497_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v_fst_500_; uint8_t v___x_501_; 
v___x_498_ = lean_box(1);
v___x_499_ = l_Lean_IR_UniqueIds_checkDecl(v_d_497_, v___x_498_);
v_fst_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_fst_500_);
lean_dec_ref(v___x_499_);
v___x_501_ = lean_unbox(v_fst_500_);
lean_dec(v_fst_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_uniqueIds___boxed(lean_object* v_d_502_){
_start:
{
uint8_t v_res_503_; lean_object* v_r_504_; 
v_res_503_ = l_Lean_IR_Decl_uniqueIds(v_d_502_);
v_r_504_ = lean_box(v_res_503_);
return v_r_504_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(lean_object* v_t_505_, lean_object* v_k_506_){
_start:
{
if (lean_obj_tag(v_t_505_) == 0)
{
lean_object* v_k_507_; lean_object* v_v_508_; lean_object* v_l_509_; lean_object* v_r_510_; uint8_t v___x_511_; 
v_k_507_ = lean_ctor_get(v_t_505_, 1);
v_v_508_ = lean_ctor_get(v_t_505_, 2);
v_l_509_ = lean_ctor_get(v_t_505_, 3);
v_r_510_ = lean_ctor_get(v_t_505_, 4);
v___x_511_ = lean_nat_dec_lt(v_k_506_, v_k_507_);
if (v___x_511_ == 0)
{
uint8_t v___x_512_; 
v___x_512_ = lean_nat_dec_eq(v_k_506_, v_k_507_);
if (v___x_512_ == 0)
{
v_t_505_ = v_r_510_;
goto _start;
}
else
{
lean_object* v___x_514_; 
lean_inc(v_v_508_);
v___x_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_514_, 0, v_v_508_);
return v___x_514_;
}
}
else
{
v_t_505_ = v_l_509_;
goto _start;
}
}
else
{
lean_object* v___x_516_; 
v___x_516_ = lean_box(0);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg___boxed(lean_object* v_t_517_, lean_object* v_k_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(v_t_517_, v_k_518_);
lean_dec(v_k_518_);
lean_dec(v_t_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normIndex(lean_object* v_x_520_, lean_object* v___y_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(v___y_521_, v_x_520_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_inc(v_x_520_);
return v_x_520_;
}
else
{
lean_object* v_val_523_; 
v_val_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_val_523_);
lean_dec_ref_known(v___x_522_, 1);
return v_val_523_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normIndex___boxed(lean_object* v_x_524_, lean_object* v___y_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_IR_NormalizeIds_normIndex(v_x_524_, v___y_525_);
lean_dec(v___y_525_);
lean_dec(v_x_524_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0(lean_object* v_00_u03b4_527_, lean_object* v_t_528_, lean_object* v_k_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___redArg(v_t_528_, v_k_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0___boxed(lean_object* v_00_u03b4_531_, lean_object* v_t_532_, lean_object* v_k_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_IR_NormalizeIds_normIndex_spec__0(v_00_u03b4_531_, v_t_532_, v_k_533_);
lean_dec(v_k_533_);
lean_dec(v_t_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normVar(lean_object* v_x_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l_Lean_IR_NormalizeIds_normIndex(v_x_535_, v___y_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normVar___boxed(lean_object* v_x_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_IR_NormalizeIds_normVar(v_x_538_, v___y_539_);
lean_dec(v___y_539_);
lean_dec(v_x_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normJP(lean_object* v_x_541_, lean_object* v___y_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Lean_IR_NormalizeIds_normIndex(v_x_541_, v___y_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normJP___boxed(lean_object* v_x_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_IR_NormalizeIds_normJP(v_x_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec(v_x_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArg(lean_object* v_x_547_, lean_object* v___y_548_){
_start:
{
if (lean_obj_tag(v_x_547_) == 0)
{
lean_object* v_id_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_557_; 
v_id_549_ = lean_ctor_get(v_x_547_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v_x_547_);
if (v_isSharedCheck_557_ == 0)
{
v___x_551_ = v_x_547_;
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_id_549_);
lean_dec(v_x_547_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_555_; 
v___x_553_ = l_Lean_IR_NormalizeIds_normIndex(v_id_549_, v___y_548_);
lean_dec(v_id_549_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 0, v___x_553_);
v___x_555_ = v___x_551_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v___x_553_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
else
{
return v_x_547_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArg___boxed(lean_object* v_x_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_IR_NormalizeIds_normArg(v_x_558_, v___y_559_);
lean_dec(v___y_559_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0(lean_object* v___y_561_, size_t v_sz_562_, size_t v_i_563_, lean_object* v_bs_564_){
_start:
{
uint8_t v___x_565_; 
v___x_565_ = lean_usize_dec_lt(v_i_563_, v_sz_562_);
if (v___x_565_ == 0)
{
return v_bs_564_;
}
else
{
lean_object* v_v_566_; lean_object* v___x_567_; lean_object* v_bs_x27_568_; lean_object* v___x_569_; size_t v___x_570_; size_t v___x_571_; lean_object* v___x_572_; 
v_v_566_ = lean_array_uget(v_bs_564_, v_i_563_);
v___x_567_ = lean_unsigned_to_nat(0u);
v_bs_x27_568_ = lean_array_uset(v_bs_564_, v_i_563_, v___x_567_);
v___x_569_ = l_Lean_IR_NormalizeIds_normArg(v_v_566_, v___y_561_);
v___x_570_ = ((size_t)1ULL);
v___x_571_ = lean_usize_add(v_i_563_, v___x_570_);
v___x_572_ = lean_array_uset(v_bs_x27_568_, v_i_563_, v___x_569_);
v_i_563_ = v___x_571_;
v_bs_564_ = v___x_572_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0___boxed(lean_object* v___y_574_, lean_object* v_sz_575_, lean_object* v_i_576_, lean_object* v_bs_577_){
_start:
{
size_t v_sz_boxed_578_; size_t v_i_boxed_579_; lean_object* v_res_580_; 
v_sz_boxed_578_ = lean_unbox_usize(v_sz_575_);
lean_dec(v_sz_575_);
v_i_boxed_579_ = lean_unbox_usize(v_i_576_);
lean_dec(v_i_576_);
v_res_580_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0(v___y_574_, v_sz_boxed_578_, v_i_boxed_579_, v_bs_577_);
lean_dec(v___y_574_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArgs(lean_object* v_as_581_, lean_object* v___y_582_){
_start:
{
size_t v_sz_583_; size_t v___x_584_; lean_object* v___x_585_; 
v_sz_583_ = lean_array_size(v_as_581_);
v___x_584_ = ((size_t)0ULL);
v___x_585_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normArgs_spec__0(v___y_582_, v_sz_583_, v___x_584_, v_as_581_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normArgs___boxed(lean_object* v_as_586_, lean_object* v___y_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lean_IR_NormalizeIds_normArgs(v_as_586_, v___y_587_);
lean_dec(v___y_587_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normExpr(lean_object* v_e_589_, lean_object* v___y_590_){
_start:
{
switch(lean_obj_tag(v_e_589_))
{
case 0:
{
lean_object* v_i_591_; lean_object* v_ys_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_600_; 
v_i_591_ = lean_ctor_get(v_e_589_, 0);
v_ys_592_ = lean_ctor_get(v_e_589_, 1);
v_isSharedCheck_600_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_600_ == 0)
{
v___x_594_ = v_e_589_;
v_isShared_595_ = v_isSharedCheck_600_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_ys_592_);
lean_inc(v_i_591_);
lean_dec(v_e_589_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_600_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_596_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_592_, v___y_590_);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 1, v___x_596_);
v___x_598_ = v___x_594_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_i_591_);
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
case 1:
{
lean_object* v_n_601_; lean_object* v_x_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_610_; 
v_n_601_ = lean_ctor_get(v_e_589_, 0);
v_x_602_ = lean_ctor_get(v_e_589_, 1);
v_isSharedCheck_610_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_610_ == 0)
{
v___x_604_ = v_e_589_;
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_x_602_);
lean_inc(v_n_601_);
lean_dec(v_e_589_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v___x_608_; 
v___x_606_ = l_Lean_IR_NormalizeIds_normIndex(v_x_602_, v___y_590_);
lean_dec(v_x_602_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 1, v___x_606_);
v___x_608_ = v___x_604_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_n_601_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v___x_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
case 2:
{
lean_object* v_x_611_; lean_object* v_i_612_; uint8_t v_updtHeader_613_; lean_object* v_ys_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_623_; 
v_x_611_ = lean_ctor_get(v_e_589_, 0);
v_i_612_ = lean_ctor_get(v_e_589_, 1);
v_updtHeader_613_ = lean_ctor_get_uint8(v_e_589_, sizeof(void*)*3);
v_ys_614_ = lean_ctor_get(v_e_589_, 2);
v_isSharedCheck_623_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_623_ == 0)
{
v___x_616_ = v_e_589_;
v_isShared_617_ = v_isSharedCheck_623_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_ys_614_);
lean_inc(v_i_612_);
lean_inc(v_x_611_);
lean_dec(v_e_589_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_623_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_621_; 
v___x_618_ = l_Lean_IR_NormalizeIds_normIndex(v_x_611_, v___y_590_);
lean_dec(v_x_611_);
v___x_619_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_614_, v___y_590_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 2, v___x_619_);
lean_ctor_set(v___x_616_, 0, v___x_618_);
v___x_621_ = v___x_616_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_618_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_i_612_);
lean_ctor_set(v_reuseFailAlloc_622_, 2, v___x_619_);
lean_ctor_set_uint8(v_reuseFailAlloc_622_, sizeof(void*)*3, v_updtHeader_613_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
case 3:
{
lean_object* v_i_624_; lean_object* v_x_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_633_; 
v_i_624_ = lean_ctor_get(v_e_589_, 0);
v_x_625_ = lean_ctor_get(v_e_589_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_633_ == 0)
{
v___x_627_ = v_e_589_;
v_isShared_628_ = v_isSharedCheck_633_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_x_625_);
lean_inc(v_i_624_);
lean_dec(v_e_589_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_633_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_629_ = l_Lean_IR_NormalizeIds_normIndex(v_x_625_, v___y_590_);
lean_dec(v_x_625_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 1, v___x_629_);
v___x_631_ = v___x_627_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_i_624_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v___x_629_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
case 4:
{
lean_object* v_i_634_; lean_object* v_x_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_643_; 
v_i_634_ = lean_ctor_get(v_e_589_, 0);
v_x_635_ = lean_ctor_get(v_e_589_, 1);
v_isSharedCheck_643_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_643_ == 0)
{
v___x_637_ = v_e_589_;
v_isShared_638_ = v_isSharedCheck_643_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_x_635_);
lean_inc(v_i_634_);
lean_dec(v_e_589_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_643_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_639_; lean_object* v___x_641_; 
v___x_639_ = l_Lean_IR_NormalizeIds_normIndex(v_x_635_, v___y_590_);
lean_dec(v_x_635_);
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 1, v___x_639_);
v___x_641_ = v___x_637_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_i_634_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v___x_639_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
case 5:
{
lean_object* v_n_644_; lean_object* v_offset_645_; lean_object* v_x_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_654_; 
v_n_644_ = lean_ctor_get(v_e_589_, 0);
v_offset_645_ = lean_ctor_get(v_e_589_, 1);
v_x_646_ = lean_ctor_get(v_e_589_, 2);
v_isSharedCheck_654_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_654_ == 0)
{
v___x_648_ = v_e_589_;
v_isShared_649_ = v_isSharedCheck_654_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_x_646_);
lean_inc(v_offset_645_);
lean_inc(v_n_644_);
lean_dec(v_e_589_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_654_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_650_ = l_Lean_IR_NormalizeIds_normIndex(v_x_646_, v___y_590_);
lean_dec(v_x_646_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 2, v___x_650_);
v___x_652_ = v___x_648_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_n_644_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_offset_645_);
lean_ctor_set(v_reuseFailAlloc_653_, 2, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
case 6:
{
lean_object* v_c_655_; lean_object* v_ys_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_664_; 
v_c_655_ = lean_ctor_get(v_e_589_, 0);
v_ys_656_ = lean_ctor_get(v_e_589_, 1);
v_isSharedCheck_664_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_664_ == 0)
{
v___x_658_ = v_e_589_;
v_isShared_659_ = v_isSharedCheck_664_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_ys_656_);
lean_inc(v_c_655_);
lean_dec(v_e_589_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_664_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_660_; lean_object* v___x_662_; 
v___x_660_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_656_, v___y_590_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v___x_660_);
v___x_662_ = v___x_658_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_c_655_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v___x_660_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
case 7:
{
lean_object* v_c_665_; lean_object* v_ys_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_674_; 
v_c_665_ = lean_ctor_get(v_e_589_, 0);
v_ys_666_ = lean_ctor_get(v_e_589_, 1);
v_isSharedCheck_674_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_674_ == 0)
{
v___x_668_ = v_e_589_;
v_isShared_669_ = v_isSharedCheck_674_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_ys_666_);
lean_inc(v_c_665_);
lean_dec(v_e_589_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_674_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_670_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_666_, v___y_590_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 1, v___x_670_);
v___x_672_ = v___x_668_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_c_665_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v___x_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
case 8:
{
lean_object* v_x_675_; lean_object* v_ys_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_685_; 
v_x_675_ = lean_ctor_get(v_e_589_, 0);
v_ys_676_ = lean_ctor_get(v_e_589_, 1);
v_isSharedCheck_685_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_685_ == 0)
{
v___x_678_ = v_e_589_;
v_isShared_679_ = v_isSharedCheck_685_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_ys_676_);
lean_inc(v_x_675_);
lean_dec(v_e_589_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_685_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_683_; 
v___x_680_ = l_Lean_IR_NormalizeIds_normIndex(v_x_675_, v___y_590_);
lean_dec(v_x_675_);
v___x_681_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_676_, v___y_590_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 1, v___x_681_);
lean_ctor_set(v___x_678_, 0, v___x_680_);
v___x_683_ = v___x_678_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v___x_681_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
case 9:
{
lean_object* v_ty_686_; lean_object* v_x_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_695_; 
v_ty_686_ = lean_ctor_get(v_e_589_, 0);
v_x_687_ = lean_ctor_get(v_e_589_, 1);
v_isSharedCheck_695_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_695_ == 0)
{
v___x_689_ = v_e_589_;
v_isShared_690_ = v_isSharedCheck_695_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_x_687_);
lean_inc(v_ty_686_);
lean_dec(v_e_589_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_695_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v___x_693_; 
v___x_691_ = l_Lean_IR_NormalizeIds_normIndex(v_x_687_, v___y_590_);
lean_dec(v_x_687_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 1, v___x_691_);
v___x_693_ = v___x_689_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_ty_686_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_691_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
case 10:
{
lean_object* v_x_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_704_; 
v_x_696_ = lean_ctor_get(v_e_589_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_704_ == 0)
{
v___x_698_ = v_e_589_;
v_isShared_699_ = v_isSharedCheck_704_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_x_696_);
lean_dec(v_e_589_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_704_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_700_; lean_object* v___x_702_; 
v___x_700_ = l_Lean_IR_NormalizeIds_normIndex(v_x_696_, v___y_590_);
lean_dec(v_x_696_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 0, v___x_700_);
v___x_702_ = v___x_698_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_700_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
case 11:
{
return v_e_589_;
}
default: 
{
lean_object* v_x_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_713_; 
v_x_705_ = lean_ctor_get(v_e_589_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v_e_589_);
if (v_isSharedCheck_713_ == 0)
{
v___x_707_ = v_e_589_;
v_isShared_708_ = v_isSharedCheck_713_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_x_705_);
lean_dec(v_e_589_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_713_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_709_; lean_object* v___x_711_; 
v___x_709_ = l_Lean_IR_NormalizeIds_normIndex(v_x_705_, v___y_590_);
lean_dec(v_x_705_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 0, v___x_709_);
v___x_711_ = v___x_707_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_709_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normExpr___boxed(lean_object* v_e_714_, lean_object* v___y_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lean_IR_NormalizeIds_normExpr(v_e_714_, v___y_715_);
lean_dec(v___y_715_);
return v_res_716_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_NormalizeIds_withVar___redArg___lam__0(lean_object* v_x_717_, lean_object* v_y_718_){
_start:
{
uint8_t v___x_719_; 
v___x_719_ = lean_nat_dec_lt(v_x_717_, v_y_718_);
if (v___x_719_ == 0)
{
uint8_t v___x_720_; 
v___x_720_ = lean_nat_dec_eq(v_x_717_, v_y_718_);
if (v___x_720_ == 0)
{
uint8_t v___x_721_; 
v___x_721_ = 2;
return v___x_721_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = 1;
return v___x_722_;
}
}
else
{
uint8_t v___x_723_; 
v___x_723_ = 0;
return v___x_723_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___lam__0___boxed(lean_object* v_x_724_, lean_object* v_y_725_){
_start:
{
uint8_t v_res_726_; lean_object* v_r_727_; 
v_res_726_ = l_Lean_IR_NormalizeIds_withVar___redArg___lam__0(v_x_724_, v_y_725_);
lean_dec(v_y_725_);
lean_dec(v_x_724_);
v_r_727_ = lean_box(v_res_726_);
return v_r_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg(lean_object* v_x_729_, lean_object* v_k_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v___f_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___f_733_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withVar___redArg___closed__0));
v___x_734_ = lean_unsigned_to_nat(1u);
v___x_735_ = lean_nat_add(v___y_732_, v___x_734_);
lean_inc(v___y_731_);
lean_inc(v___y_732_);
v___x_736_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_733_, v_x_729_, v___y_732_, v___y_731_);
v___x_737_ = lean_apply_3(v_k_730_, v___y_732_, v___x_736_, v___x_735_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___redArg___boxed(lean_object* v_x_738_, lean_object* v_k_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lean_IR_NormalizeIds_withVar___redArg(v_x_738_, v_k_739_, v___y_740_, v___y_741_);
lean_dec(v___y_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar(lean_object* v_00_u03b1_743_, lean_object* v_x_744_, lean_object* v_k_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v___f_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___f_748_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withVar___redArg___closed__0));
v___x_749_ = lean_unsigned_to_nat(1u);
v___x_750_ = lean_nat_add(v___y_747_, v___x_749_);
lean_inc(v___y_746_);
lean_inc(v___y_747_);
v___x_751_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_748_, v_x_744_, v___y_747_, v___y_746_);
v___x_752_ = lean_apply_3(v_k_745_, v___y_747_, v___x_751_, v___x_750_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withVar___boxed(lean_object* v_00_u03b1_753_, lean_object* v_x_754_, lean_object* v_k_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_IR_NormalizeIds_withVar(v_00_u03b1_753_, v_x_754_, v_k_755_, v___y_756_, v___y_757_);
lean_dec(v___y_756_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___redArg(lean_object* v_x_759_, lean_object* v_k_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v___f_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___f_763_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withVar___redArg___closed__0));
v___x_764_ = lean_unsigned_to_nat(1u);
v___x_765_ = lean_nat_add(v___y_762_, v___x_764_);
lean_inc(v___y_761_);
lean_inc(v___y_762_);
v___x_766_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_763_, v_x_759_, v___y_762_, v___y_761_);
v___x_767_ = lean_apply_3(v_k_760_, v___y_762_, v___x_766_, v___x_765_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___redArg___boxed(lean_object* v_x_768_, lean_object* v_k_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_IR_NormalizeIds_withJP___redArg(v_x_768_, v_k_769_, v___y_770_, v___y_771_);
lean_dec(v___y_770_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP(lean_object* v_00_u03b1_773_, lean_object* v_x_774_, lean_object* v_k_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v___f_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___f_778_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withVar___redArg___closed__0));
v___x_779_ = lean_unsigned_to_nat(1u);
v___x_780_ = lean_nat_add(v___y_777_, v___x_779_);
lean_inc(v___y_776_);
lean_inc(v___y_777_);
v___x_781_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_778_, v_x_774_, v___y_777_, v___y_776_);
v___x_782_ = lean_apply_3(v_k_775_, v___y_777_, v___x_781_, v___x_780_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withJP___boxed(lean_object* v_00_u03b1_783_, lean_object* v_x_784_, lean_object* v_k_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lean_IR_NormalizeIds_withJP(v_00_u03b1_783_, v_x_784_, v_k_785_, v___y_786_, v___y_787_);
lean_dec(v___y_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__0(lean_object* v_fst_789_, lean_object* v_x_790_){
_start:
{
lean_object* v_x_791_; uint8_t v_borrow_792_; lean_object* v_ty_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_801_; 
v_x_791_ = lean_ctor_get(v_x_790_, 0);
v_borrow_792_ = lean_ctor_get_uint8(v_x_790_, sizeof(void*)*2);
v_ty_793_ = lean_ctor_get(v_x_790_, 1);
v_isSharedCheck_801_ = !lean_is_exclusive(v_x_790_);
if (v_isSharedCheck_801_ == 0)
{
v___x_795_ = v_x_790_;
v_isShared_796_ = v_isSharedCheck_801_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_ty_793_);
lean_inc(v_x_791_);
lean_dec(v_x_790_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_801_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_797_ = l_Lean_IR_NormalizeIds_normIndex(v_x_791_, v_fst_789_);
lean_dec(v_x_791_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_797_);
v___x_799_ = v___x_795_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_797_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_ty_793_);
lean_ctor_set_uint8(v_reuseFailAlloc_800_, sizeof(void*)*2, v_borrow_792_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__0___boxed(lean_object* v_fst_802_, lean_object* v_x_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Lean_IR_NormalizeIds_withParams___redArg___lam__0(v_fst_802_, v_x_803_);
lean_dec(v_fst_802_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___lam__2(lean_object* v___f_805_, lean_object* v_m_806_, lean_object* v_p_807_, lean_object* v___y_808_){
_start:
{
lean_object* v_x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_x_809_ = lean_ctor_get(v_p_807_, 0);
lean_inc(v_x_809_);
lean_dec_ref(v_p_807_);
v___x_810_ = lean_unsigned_to_nat(1u);
v___x_811_ = lean_nat_add(v___y_808_, v___x_810_);
v___x_812_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___f_805_, v_x_809_, v___y_808_, v_m_806_);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_ctor_set(v___x_813_, 1, v___x_811_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg(lean_object* v_ps_861_, lean_object* v_k_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_865_; lean_object* v_fst_867_; lean_object* v_snd_868_; lean_object* v___y_875_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; uint8_t v___x_881_; 
v___x_865_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__9));
v___x_878_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__19));
v___x_879_ = lean_unsigned_to_nat(0u);
v___x_880_ = lean_array_get_size(v_ps_861_);
v___x_881_ = lean_nat_dec_lt(v___x_879_, v___x_880_);
if (v___x_881_ == 0)
{
lean_inc(v___y_863_);
v_fst_867_ = v___y_863_;
v_snd_868_ = v___y_864_;
goto v___jp_866_;
}
else
{
lean_object* v___f_882_; uint8_t v___x_883_; 
v___f_882_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__20));
v___x_883_ = lean_nat_dec_le(v___x_880_, v___x_880_);
if (v___x_883_ == 0)
{
if (v___x_881_ == 0)
{
lean_inc(v___y_863_);
v_fst_867_ = v___y_863_;
v_snd_868_ = v___y_864_;
goto v___jp_866_;
}
else
{
size_t v___x_884_; size_t v___x_885_; lean_object* v___x_841__overap_886_; lean_object* v___x_887_; 
v___x_884_ = ((size_t)0ULL);
v___x_885_ = lean_usize_of_nat(v___x_880_);
lean_inc(v___y_863_);
lean_inc_ref(v_ps_861_);
v___x_841__overap_886_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_878_, v___f_882_, v_ps_861_, v___x_884_, v___x_885_, v___y_863_);
v___x_887_ = lean_apply_1(v___x_841__overap_886_, v___y_864_);
v___y_875_ = v___x_887_;
goto v___jp_874_;
}
}
else
{
size_t v___x_888_; size_t v___x_889_; lean_object* v___x_845__overap_890_; lean_object* v___x_891_; 
v___x_888_ = ((size_t)0ULL);
v___x_889_ = lean_usize_of_nat(v___x_880_);
lean_inc(v___y_863_);
lean_inc_ref(v_ps_861_);
v___x_845__overap_890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_878_, v___f_882_, v_ps_861_, v___x_888_, v___x_889_, v___y_863_);
v___x_891_ = lean_apply_1(v___x_845__overap_890_, v___y_864_);
v___y_875_ = v___x_891_;
goto v___jp_874_;
}
}
v___jp_866_:
{
lean_object* v___f_869_; size_t v_sz_870_; size_t v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
lean_inc(v_fst_867_);
v___f_869_ = lean_alloc_closure((void*)(l_Lean_IR_NormalizeIds_withParams___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_869_, 0, v_fst_867_);
v_sz_870_ = lean_array_size(v_ps_861_);
v___x_871_ = ((size_t)0ULL);
v___x_872_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_865_, v___f_869_, v_sz_870_, v___x_871_, v_ps_861_);
v___x_873_ = lean_apply_3(v_k_862_, v___x_872_, v_fst_867_, v_snd_868_);
return v___x_873_;
}
v___jp_874_:
{
lean_object* v_fst_876_; lean_object* v_snd_877_; 
v_fst_876_ = lean_ctor_get(v___y_875_, 0);
lean_inc(v_fst_876_);
v_snd_877_ = lean_ctor_get(v___y_875_, 1);
lean_inc(v_snd_877_);
lean_dec_ref(v___y_875_);
v_fst_867_ = v_fst_876_;
v_snd_868_ = v_snd_877_;
goto v___jp_866_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___redArg___boxed(lean_object* v_ps_892_, lean_object* v_k_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l_Lean_IR_NormalizeIds_withParams___redArg(v_ps_892_, v_k_893_, v___y_894_, v___y_895_);
lean_dec(v___y_894_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams(lean_object* v_00_u03b1_897_, lean_object* v_ps_898_, lean_object* v_k_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v___x_902_; lean_object* v_fst_904_; lean_object* v_snd_905_; lean_object* v___y_912_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_902_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__9));
v___x_915_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__19));
v___x_916_ = lean_unsigned_to_nat(0u);
v___x_917_ = lean_array_get_size(v_ps_898_);
v___x_918_ = lean_nat_dec_lt(v___x_916_, v___x_917_);
if (v___x_918_ == 0)
{
lean_inc(v___y_900_);
v_fst_904_ = v___y_900_;
v_snd_905_ = v___y_901_;
goto v___jp_903_;
}
else
{
lean_object* v___f_919_; uint8_t v___x_920_; 
v___f_919_ = ((lean_object*)(l_Lean_IR_NormalizeIds_withParams___redArg___closed__20));
v___x_920_ = lean_nat_dec_le(v___x_917_, v___x_917_);
if (v___x_920_ == 0)
{
if (v___x_918_ == 0)
{
lean_inc(v___y_900_);
v_fst_904_ = v___y_900_;
v_snd_905_ = v___y_901_;
goto v___jp_903_;
}
else
{
size_t v___x_921_; size_t v___x_922_; lean_object* v___x_1027__overap_923_; lean_object* v___x_924_; 
v___x_921_ = ((size_t)0ULL);
v___x_922_ = lean_usize_of_nat(v___x_917_);
lean_inc(v___y_900_);
lean_inc_ref(v_ps_898_);
v___x_1027__overap_923_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_915_, v___f_919_, v_ps_898_, v___x_921_, v___x_922_, v___y_900_);
v___x_924_ = lean_apply_1(v___x_1027__overap_923_, v___y_901_);
v___y_912_ = v___x_924_;
goto v___jp_911_;
}
}
else
{
size_t v___x_925_; size_t v___x_926_; lean_object* v___x_1030__overap_927_; lean_object* v___x_928_; 
v___x_925_ = ((size_t)0ULL);
v___x_926_ = lean_usize_of_nat(v___x_917_);
lean_inc(v___y_900_);
lean_inc_ref(v_ps_898_);
v___x_1030__overap_927_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_915_, v___f_919_, v_ps_898_, v___x_925_, v___x_926_, v___y_900_);
v___x_928_ = lean_apply_1(v___x_1030__overap_927_, v___y_901_);
v___y_912_ = v___x_928_;
goto v___jp_911_;
}
}
v___jp_903_:
{
lean_object* v___f_906_; size_t v_sz_907_; size_t v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
lean_inc(v_fst_904_);
v___f_906_ = lean_alloc_closure((void*)(l_Lean_IR_NormalizeIds_withParams___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_906_, 0, v_fst_904_);
v_sz_907_ = lean_array_size(v_ps_898_);
v___x_908_ = ((size_t)0ULL);
v___x_909_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_902_, v___f_906_, v_sz_907_, v___x_908_, v_ps_898_);
v___x_910_ = lean_apply_3(v_k_899_, v___x_909_, v_fst_904_, v_snd_905_);
return v___x_910_;
}
v___jp_911_:
{
lean_object* v_fst_913_; lean_object* v_snd_914_; 
v_fst_913_ = lean_ctor_get(v___y_912_, 0);
lean_inc(v_fst_913_);
v_snd_914_ = lean_ctor_get(v___y_912_, 1);
lean_inc(v_snd_914_);
lean_dec_ref(v___y_912_);
v_fst_904_ = v_fst_913_;
v_snd_905_ = v_snd_914_;
goto v___jp_903_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_withParams___boxed(lean_object* v_00_u03b1_929_, lean_object* v_ps_930_, lean_object* v_k_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lean_IR_NormalizeIds_withParams(v_00_u03b1_929_, v_ps_930_, v_k_931_, v___y_932_, v___y_933_);
lean_dec(v___y_932_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN___lam__0(lean_object* v_00_u03b1_935_, lean_object* v_x_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
lean_inc(v___y_937_);
v___x_939_ = lean_apply_1(v_x_936_, v___y_937_);
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
lean_ctor_set(v___x_940_, 1, v___y_938_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_instMonadLiftMN___lam__0___boxed(lean_object* v_00_u03b1_941_, lean_object* v_x_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lean_IR_NormalizeIds_instMonadLiftMN___lam__0(v_00_u03b1_941_, v_x_942_, v___y_943_, v___y_944_);
lean_dec(v___y_943_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0(lean_object* v_fst_948_, size_t v_sz_949_, size_t v_i_950_, lean_object* v_bs_951_){
_start:
{
uint8_t v___x_952_; 
v___x_952_ = lean_usize_dec_lt(v_i_950_, v_sz_949_);
if (v___x_952_ == 0)
{
return v_bs_951_;
}
else
{
lean_object* v_v_953_; lean_object* v_x_954_; uint8_t v_borrow_955_; lean_object* v_ty_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_970_; 
v_v_953_ = lean_array_uget(v_bs_951_, v_i_950_);
v_x_954_ = lean_ctor_get(v_v_953_, 0);
v_borrow_955_ = lean_ctor_get_uint8(v_v_953_, sizeof(void*)*2);
v_ty_956_ = lean_ctor_get(v_v_953_, 1);
v_isSharedCheck_970_ = !lean_is_exclusive(v_v_953_);
if (v_isSharedCheck_970_ == 0)
{
v___x_958_ = v_v_953_;
v_isShared_959_ = v_isSharedCheck_970_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_ty_956_);
lean_inc(v_x_954_);
lean_dec(v_v_953_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_970_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v_bs_x27_961_; lean_object* v___x_962_; lean_object* v___x_964_; 
v___x_960_ = lean_unsigned_to_nat(0u);
v_bs_x27_961_ = lean_array_uset(v_bs_951_, v_i_950_, v___x_960_);
v___x_962_ = l_Lean_IR_NormalizeIds_normIndex(v_x_954_, v_fst_948_);
lean_dec(v_x_954_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_962_);
v___x_964_ = v___x_958_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_962_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_ty_956_);
lean_ctor_set_uint8(v_reuseFailAlloc_969_, sizeof(void*)*2, v_borrow_955_);
v___x_964_ = v_reuseFailAlloc_969_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
size_t v___x_965_; size_t v___x_966_; lean_object* v___x_967_; 
v___x_965_ = ((size_t)1ULL);
v___x_966_ = lean_usize_add(v_i_950_, v___x_965_);
v___x_967_ = lean_array_uset(v_bs_x27_961_, v_i_950_, v___x_964_);
v_i_950_ = v___x_966_;
v_bs_951_ = v___x_967_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0___boxed(lean_object* v_fst_971_, lean_object* v_sz_972_, lean_object* v_i_973_, lean_object* v_bs_974_){
_start:
{
size_t v_sz_boxed_975_; size_t v_i_boxed_976_; lean_object* v_res_977_; 
v_sz_boxed_975_ = lean_unbox_usize(v_sz_972_);
lean_dec(v_sz_972_);
v_i_boxed_976_ = lean_unbox_usize(v_i_973_);
lean_dec(v_i_973_);
v_res_977_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0(v_fst_971_, v_sz_boxed_975_, v_i_boxed_976_, v_bs_974_);
lean_dec(v_fst_971_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(lean_object* v_as_978_, size_t v_i_979_, size_t v_stop_980_, lean_object* v_b_981_, lean_object* v___y_982_){
_start:
{
uint8_t v___x_983_; 
v___x_983_ = lean_usize_dec_eq(v_i_979_, v_stop_980_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; lean_object* v_x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; size_t v___x_989_; size_t v___x_990_; 
v___x_984_ = lean_array_uget_borrowed(v_as_978_, v_i_979_);
v_x_985_ = lean_ctor_get(v___x_984_, 0);
v___x_986_ = lean_unsigned_to_nat(1u);
v___x_987_ = lean_nat_add(v___y_982_, v___x_986_);
lean_inc(v_x_985_);
v___x_988_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_x_985_, v___y_982_, v_b_981_);
v___x_989_ = ((size_t)1ULL);
v___x_990_ = lean_usize_add(v_i_979_, v___x_989_);
v_i_979_ = v___x_990_;
v_b_981_ = v___x_988_;
v___y_982_ = v___x_987_;
goto _start;
}
else
{
lean_object* v___x_992_; 
v___x_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_992_, 0, v_b_981_);
lean_ctor_set(v___x_992_, 1, v___y_982_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1___boxed(lean_object* v_as_993_, lean_object* v_i_994_, lean_object* v_stop_995_, lean_object* v_b_996_, lean_object* v___y_997_){
_start:
{
size_t v_i_boxed_998_; size_t v_stop_boxed_999_; lean_object* v_res_1000_; 
v_i_boxed_998_ = lean_unbox_usize(v_i_994_);
lean_dec(v_i_994_);
v_stop_boxed_999_ = lean_unbox_usize(v_stop_995_);
lean_dec(v_stop_995_);
v_res_1000_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(v_as_993_, v_i_boxed_998_, v_stop_boxed_999_, v_b_996_, v___y_997_);
lean_dec_ref(v_as_993_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normFnBody(lean_object* v_x_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
switch(lean_obj_tag(v_x_1001_))
{
case 0:
{
lean_object* v_x_1004_; lean_object* v_ty_1005_; lean_object* v_e_1006_; lean_object* v_b_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1028_; 
v_x_1004_ = lean_ctor_get(v_x_1001_, 0);
v_ty_1005_ = lean_ctor_get(v_x_1001_, 1);
v_e_1006_ = lean_ctor_get(v_x_1001_, 2);
v_b_1007_ = lean_ctor_get(v_x_1001_, 3);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1009_ = v_x_1001_;
v_isShared_1010_ = v_isSharedCheck_1028_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_b_1007_);
lean_inc(v_e_1006_);
lean_inc(v_ty_1005_);
lean_inc(v_x_1004_);
lean_dec(v_x_1001_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1028_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v_fst_1015_; lean_object* v_snd_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1027_; 
v___x_1011_ = lean_unsigned_to_nat(1u);
v___x_1012_ = lean_nat_add(v___y_1003_, v___x_1011_);
lean_inc(v___y_1002_);
lean_inc(v___y_1003_);
v___x_1013_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_x_1004_, v___y_1003_, v___y_1002_);
v___x_1014_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1007_, v___x_1013_, v___x_1012_);
lean_dec(v___x_1013_);
v_fst_1015_ = lean_ctor_get(v___x_1014_, 0);
v_snd_1016_ = lean_ctor_get(v___x_1014_, 1);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1018_ = v___x_1014_;
v_isShared_1019_ = v_isSharedCheck_1027_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_snd_1016_);
lean_inc(v_fst_1015_);
lean_dec(v___x_1014_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1027_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
v___x_1020_ = l_Lean_IR_NormalizeIds_normExpr(v_e_1006_, v___y_1002_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 3, v_fst_1015_);
lean_ctor_set(v___x_1009_, 2, v___x_1020_);
lean_ctor_set(v___x_1009_, 0, v___y_1003_);
v___x_1022_ = v___x_1009_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v___y_1003_);
lean_ctor_set(v_reuseFailAlloc_1026_, 1, v_ty_1005_);
lean_ctor_set(v_reuseFailAlloc_1026_, 2, v___x_1020_);
lean_ctor_set(v_reuseFailAlloc_1026_, 3, v_fst_1015_);
v___x_1022_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
lean_object* v___x_1024_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1022_);
v___x_1024_ = v___x_1018_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_1022_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v_snd_1016_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
}
case 1:
{
lean_object* v_j_1029_; lean_object* v_xs_1030_; lean_object* v_v_1031_; lean_object* v_b_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1069_; 
v_j_1029_ = lean_ctor_get(v_x_1001_, 0);
v_xs_1030_ = lean_ctor_get(v_x_1001_, 1);
v_v_1031_ = lean_ctor_get(v_x_1001_, 2);
v_b_1032_ = lean_ctor_get(v_x_1001_, 3);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1034_ = v_x_1001_;
v_isShared_1035_ = v_isSharedCheck_1069_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_b_1032_);
lean_inc(v_v_1031_);
lean_inc(v_xs_1030_);
lean_inc(v_j_1029_);
lean_dec(v_x_1001_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1069_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v_fst_1037_; lean_object* v_snd_1038_; lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1061_ = lean_unsigned_to_nat(0u);
v___x_1062_ = lean_array_get_size(v_xs_1030_);
v___x_1063_ = lean_nat_dec_lt(v___x_1061_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_inc(v___y_1002_);
v_fst_1037_ = v___y_1002_;
v_snd_1038_ = v___y_1003_;
goto v___jp_1036_;
}
else
{
size_t v___x_1064_; size_t v___x_1065_; lean_object* v___x_1066_; lean_object* v_fst_1067_; lean_object* v_snd_1068_; 
v___x_1064_ = ((size_t)0ULL);
v___x_1065_ = lean_usize_of_nat(v___x_1062_);
lean_inc(v___y_1002_);
v___x_1066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(v_xs_1030_, v___x_1064_, v___x_1065_, v___y_1002_, v___y_1003_);
v_fst_1067_ = lean_ctor_get(v___x_1066_, 0);
lean_inc(v_fst_1067_);
v_snd_1068_ = lean_ctor_get(v___x_1066_, 1);
lean_inc(v_snd_1068_);
lean_dec_ref(v___x_1066_);
v_fst_1037_ = v_fst_1067_;
v_snd_1038_ = v_snd_1068_;
goto v___jp_1036_;
}
v___jp_1036_:
{
lean_object* v___x_1039_; lean_object* v_fst_1040_; lean_object* v_snd_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v_fst_1046_; lean_object* v_snd_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1060_; 
v___x_1039_ = l_Lean_IR_NormalizeIds_normFnBody(v_v_1031_, v_fst_1037_, v_snd_1038_);
v_fst_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_fst_1040_);
v_snd_1041_ = lean_ctor_get(v___x_1039_, 1);
lean_inc_n(v_snd_1041_, 2);
lean_dec_ref(v___x_1039_);
v___x_1042_ = lean_unsigned_to_nat(1u);
v___x_1043_ = lean_nat_add(v_snd_1041_, v___x_1042_);
lean_inc(v___y_1002_);
v___x_1044_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_UniqueIds_checkId_spec__1___redArg(v_j_1029_, v_snd_1041_, v___y_1002_);
v___x_1045_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1032_, v___x_1044_, v___x_1043_);
lean_dec(v___x_1044_);
v_fst_1046_ = lean_ctor_get(v___x_1045_, 0);
v_snd_1047_ = lean_ctor_get(v___x_1045_, 1);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1049_ = v___x_1045_;
v_isShared_1050_ = v_isSharedCheck_1060_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_snd_1047_);
lean_inc(v_fst_1046_);
lean_dec(v___x_1045_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1060_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
size_t v_sz_1051_; size_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1055_; 
v_sz_1051_ = lean_array_size(v_xs_1030_);
v___x_1052_ = ((size_t)0ULL);
v___x_1053_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__0(v_fst_1037_, v_sz_1051_, v___x_1052_, v_xs_1030_);
lean_dec(v_fst_1037_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 3, v_fst_1046_);
lean_ctor_set(v___x_1034_, 2, v_fst_1040_);
lean_ctor_set(v___x_1034_, 1, v___x_1053_);
lean_ctor_set(v___x_1034_, 0, v_snd_1041_);
v___x_1055_ = v___x_1034_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_snd_1041_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1059_, 2, v_fst_1040_);
lean_ctor_set(v_reuseFailAlloc_1059_, 3, v_fst_1046_);
v___x_1055_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1057_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 0, v___x_1055_);
v___x_1057_ = v___x_1049_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v_snd_1047_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
}
}
case 2:
{
lean_object* v_x_1070_; lean_object* v_i_1071_; lean_object* v_y_1072_; lean_object* v_b_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1092_; 
v_x_1070_ = lean_ctor_get(v_x_1001_, 0);
v_i_1071_ = lean_ctor_get(v_x_1001_, 1);
v_y_1072_ = lean_ctor_get(v_x_1001_, 2);
v_b_1073_ = lean_ctor_get(v_x_1001_, 3);
v_isSharedCheck_1092_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1075_ = v_x_1001_;
v_isShared_1076_ = v_isSharedCheck_1092_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_b_1073_);
lean_inc(v_y_1072_);
lean_inc(v_i_1071_);
lean_inc(v_x_1070_);
lean_dec(v_x_1001_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1092_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v_fst_1080_; lean_object* v_snd_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1091_; 
v___x_1077_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1070_, v___y_1002_);
lean_dec(v_x_1070_);
v___x_1078_ = l_Lean_IR_NormalizeIds_normArg(v_y_1072_, v___y_1002_);
v___x_1079_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1073_, v___y_1002_, v___y_1003_);
v_fst_1080_ = lean_ctor_get(v___x_1079_, 0);
v_snd_1081_ = lean_ctor_get(v___x_1079_, 1);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1083_ = v___x_1079_;
v_isShared_1084_ = v_isSharedCheck_1091_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_snd_1081_);
lean_inc(v_fst_1080_);
lean_dec(v___x_1079_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1091_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1086_; 
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 3, v_fst_1080_);
lean_ctor_set(v___x_1075_, 2, v___x_1078_);
lean_ctor_set(v___x_1075_, 0, v___x_1077_);
v___x_1086_ = v___x_1075_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1077_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_i_1071_);
lean_ctor_set(v_reuseFailAlloc_1090_, 2, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1090_, 3, v_fst_1080_);
v___x_1086_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
lean_object* v___x_1088_; 
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1086_);
v___x_1088_ = v___x_1083_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1086_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v_snd_1081_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
}
case 3:
{
lean_object* v_x_1093_; lean_object* v_cidx_1094_; lean_object* v_b_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1113_; 
v_x_1093_ = lean_ctor_get(v_x_1001_, 0);
v_cidx_1094_ = lean_ctor_get(v_x_1001_, 1);
v_b_1095_ = lean_ctor_get(v_x_1001_, 2);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1097_ = v_x_1001_;
v_isShared_1098_ = v_isSharedCheck_1113_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_b_1095_);
lean_inc(v_cidx_1094_);
lean_inc(v_x_1093_);
lean_dec(v_x_1001_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1113_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v_fst_1101_; lean_object* v_snd_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1112_; 
v___x_1099_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1093_, v___y_1002_);
lean_dec(v_x_1093_);
v___x_1100_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1095_, v___y_1002_, v___y_1003_);
v_fst_1101_ = lean_ctor_get(v___x_1100_, 0);
v_snd_1102_ = lean_ctor_get(v___x_1100_, 1);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1104_ = v___x_1100_;
v_isShared_1105_ = v_isSharedCheck_1112_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_snd_1102_);
lean_inc(v_fst_1101_);
lean_dec(v___x_1100_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1112_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 2, v_fst_1101_);
lean_ctor_set(v___x_1097_, 0, v___x_1099_);
v___x_1107_ = v___x_1097_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1099_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v_cidx_1094_);
lean_ctor_set(v_reuseFailAlloc_1111_, 2, v_fst_1101_);
v___x_1107_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1109_; 
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 0, v___x_1107_);
v___x_1109_ = v___x_1104_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1107_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_snd_1102_);
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
}
case 4:
{
lean_object* v_x_1114_; lean_object* v_i_1115_; lean_object* v_y_1116_; lean_object* v_b_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1136_; 
v_x_1114_ = lean_ctor_get(v_x_1001_, 0);
v_i_1115_ = lean_ctor_get(v_x_1001_, 1);
v_y_1116_ = lean_ctor_get(v_x_1001_, 2);
v_b_1117_ = lean_ctor_get(v_x_1001_, 3);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1119_ = v_x_1001_;
v_isShared_1120_ = v_isSharedCheck_1136_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_b_1117_);
lean_inc(v_y_1116_);
lean_inc(v_i_1115_);
lean_inc(v_x_1114_);
lean_dec(v_x_1001_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1136_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v_fst_1124_; lean_object* v_snd_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1135_; 
v___x_1121_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1114_, v___y_1002_);
lean_dec(v_x_1114_);
v___x_1122_ = l_Lean_IR_NormalizeIds_normIndex(v_y_1116_, v___y_1002_);
lean_dec(v_y_1116_);
v___x_1123_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1117_, v___y_1002_, v___y_1003_);
v_fst_1124_ = lean_ctor_get(v___x_1123_, 0);
v_snd_1125_ = lean_ctor_get(v___x_1123_, 1);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1127_ = v___x_1123_;
v_isShared_1128_ = v_isSharedCheck_1135_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_snd_1125_);
lean_inc(v_fst_1124_);
lean_dec(v___x_1123_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1135_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 3, v_fst_1124_);
lean_ctor_set(v___x_1119_, 2, v___x_1122_);
lean_ctor_set(v___x_1119_, 0, v___x_1121_);
v___x_1130_ = v___x_1119_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v_i_1115_);
lean_ctor_set(v_reuseFailAlloc_1134_, 2, v___x_1122_);
lean_ctor_set(v_reuseFailAlloc_1134_, 3, v_fst_1124_);
v___x_1130_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1132_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 0, v___x_1130_);
v___x_1132_ = v___x_1127_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1130_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_snd_1125_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
}
case 5:
{
lean_object* v_x_1137_; lean_object* v_i_1138_; lean_object* v_offset_1139_; lean_object* v_y_1140_; lean_object* v_ty_1141_; lean_object* v_b_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1161_; 
v_x_1137_ = lean_ctor_get(v_x_1001_, 0);
v_i_1138_ = lean_ctor_get(v_x_1001_, 1);
v_offset_1139_ = lean_ctor_get(v_x_1001_, 2);
v_y_1140_ = lean_ctor_get(v_x_1001_, 3);
v_ty_1141_ = lean_ctor_get(v_x_1001_, 4);
v_b_1142_ = lean_ctor_get(v_x_1001_, 5);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1144_ = v_x_1001_;
v_isShared_1145_ = v_isSharedCheck_1161_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_b_1142_);
lean_inc(v_ty_1141_);
lean_inc(v_y_1140_);
lean_inc(v_offset_1139_);
lean_inc(v_i_1138_);
lean_inc(v_x_1137_);
lean_dec(v_x_1001_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1161_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v_fst_1149_; lean_object* v_snd_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1160_; 
v___x_1146_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1137_, v___y_1002_);
lean_dec(v_x_1137_);
v___x_1147_ = l_Lean_IR_NormalizeIds_normIndex(v_y_1140_, v___y_1002_);
lean_dec(v_y_1140_);
v___x_1148_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1142_, v___y_1002_, v___y_1003_);
v_fst_1149_ = lean_ctor_get(v___x_1148_, 0);
v_snd_1150_ = lean_ctor_get(v___x_1148_, 1);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1152_ = v___x_1148_;
v_isShared_1153_ = v_isSharedCheck_1160_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_snd_1150_);
lean_inc(v_fst_1149_);
lean_dec(v___x_1148_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1160_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 5, v_fst_1149_);
lean_ctor_set(v___x_1144_, 3, v___x_1147_);
lean_ctor_set(v___x_1144_, 0, v___x_1146_);
v___x_1155_ = v___x_1144_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1146_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_i_1138_);
lean_ctor_set(v_reuseFailAlloc_1159_, 2, v_offset_1139_);
lean_ctor_set(v_reuseFailAlloc_1159_, 3, v___x_1147_);
lean_ctor_set(v_reuseFailAlloc_1159_, 4, v_ty_1141_);
lean_ctor_set(v_reuseFailAlloc_1159_, 5, v_fst_1149_);
v___x_1155_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1157_; 
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 0, v___x_1155_);
v___x_1157_ = v___x_1152_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1158_, 1, v_snd_1150_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
}
case 6:
{
lean_object* v_x_1162_; lean_object* v_n_1163_; uint8_t v_c_1164_; uint8_t v_persistent_1165_; lean_object* v_b_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1184_; 
v_x_1162_ = lean_ctor_get(v_x_1001_, 0);
v_n_1163_ = lean_ctor_get(v_x_1001_, 1);
v_c_1164_ = lean_ctor_get_uint8(v_x_1001_, sizeof(void*)*3);
v_persistent_1165_ = lean_ctor_get_uint8(v_x_1001_, sizeof(void*)*3 + 1);
v_b_1166_ = lean_ctor_get(v_x_1001_, 2);
v_isSharedCheck_1184_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1168_ = v_x_1001_;
v_isShared_1169_ = v_isSharedCheck_1184_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_b_1166_);
lean_inc(v_n_1163_);
lean_inc(v_x_1162_);
lean_dec(v_x_1001_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1184_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v_fst_1172_; lean_object* v_snd_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1183_; 
v___x_1170_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1162_, v___y_1002_);
lean_dec(v_x_1162_);
v___x_1171_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1166_, v___y_1002_, v___y_1003_);
v_fst_1172_ = lean_ctor_get(v___x_1171_, 0);
v_snd_1173_ = lean_ctor_get(v___x_1171_, 1);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1175_ = v___x_1171_;
v_isShared_1176_ = v_isSharedCheck_1183_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_snd_1173_);
lean_inc(v_fst_1172_);
lean_dec(v___x_1171_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1183_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1169_ == 0)
{
lean_ctor_set(v___x_1168_, 2, v_fst_1172_);
lean_ctor_set(v___x_1168_, 0, v___x_1170_);
v___x_1178_ = v___x_1168_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(6, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1182_, 1, v_n_1163_);
lean_ctor_set(v_reuseFailAlloc_1182_, 2, v_fst_1172_);
lean_ctor_set_uint8(v_reuseFailAlloc_1182_, sizeof(void*)*3, v_c_1164_);
lean_ctor_set_uint8(v_reuseFailAlloc_1182_, sizeof(void*)*3 + 1, v_persistent_1165_);
v___x_1178_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
lean_object* v___x_1180_; 
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 0, v___x_1178_);
v___x_1180_ = v___x_1175_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1178_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v_snd_1173_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
}
case 7:
{
lean_object* v_x_1185_; lean_object* v_n_1186_; uint8_t v_c_1187_; uint8_t v_persistent_1188_; lean_object* v_b_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1207_; 
v_x_1185_ = lean_ctor_get(v_x_1001_, 0);
v_n_1186_ = lean_ctor_get(v_x_1001_, 1);
v_c_1187_ = lean_ctor_get_uint8(v_x_1001_, sizeof(void*)*3);
v_persistent_1188_ = lean_ctor_get_uint8(v_x_1001_, sizeof(void*)*3 + 1);
v_b_1189_ = lean_ctor_get(v_x_1001_, 2);
v_isSharedCheck_1207_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1191_ = v_x_1001_;
v_isShared_1192_ = v_isSharedCheck_1207_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_b_1189_);
lean_inc(v_n_1186_);
lean_inc(v_x_1185_);
lean_dec(v_x_1001_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1207_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v_fst_1195_; lean_object* v_snd_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1206_; 
v___x_1193_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1185_, v___y_1002_);
lean_dec(v_x_1185_);
v___x_1194_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1189_, v___y_1002_, v___y_1003_);
v_fst_1195_ = lean_ctor_get(v___x_1194_, 0);
v_snd_1196_ = lean_ctor_get(v___x_1194_, 1);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1198_ = v___x_1194_;
v_isShared_1199_ = v_isSharedCheck_1206_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_snd_1196_);
lean_inc(v_fst_1195_);
lean_dec(v___x_1194_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1206_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 2, v_fst_1195_);
lean_ctor_set(v___x_1191_, 0, v___x_1193_);
v___x_1201_ = v___x_1191_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v___x_1193_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v_n_1186_);
lean_ctor_set(v_reuseFailAlloc_1205_, 2, v_fst_1195_);
lean_ctor_set_uint8(v_reuseFailAlloc_1205_, sizeof(void*)*3, v_c_1187_);
lean_ctor_set_uint8(v_reuseFailAlloc_1205_, sizeof(void*)*3 + 1, v_persistent_1188_);
v___x_1201_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
lean_object* v___x_1203_; 
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 0, v___x_1201_);
v___x_1203_ = v___x_1198_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1201_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_snd_1196_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
case 8:
{
lean_object* v_x_1208_; lean_object* v_b_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1227_; 
v_x_1208_ = lean_ctor_get(v_x_1001_, 0);
v_b_1209_ = lean_ctor_get(v_x_1001_, 1);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1211_ = v_x_1001_;
v_isShared_1212_ = v_isSharedCheck_1227_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_b_1209_);
lean_inc(v_x_1208_);
lean_dec(v_x_1001_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1227_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v_fst_1215_; lean_object* v_snd_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1226_; 
v___x_1213_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1208_, v___y_1002_);
lean_dec(v_x_1208_);
v___x_1214_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1209_, v___y_1002_, v___y_1003_);
v_fst_1215_ = lean_ctor_get(v___x_1214_, 0);
v_snd_1216_ = lean_ctor_get(v___x_1214_, 1);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1218_ = v___x_1214_;
v_isShared_1219_ = v_isSharedCheck_1226_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_snd_1216_);
lean_inc(v_fst_1215_);
lean_dec(v___x_1214_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1226_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 1, v_fst_1215_);
lean_ctor_set(v___x_1211_, 0, v___x_1213_);
v___x_1221_ = v___x_1211_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1213_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_fst_1215_);
v___x_1221_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
lean_object* v___x_1223_; 
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 0, v___x_1221_);
v___x_1223_ = v___x_1218_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_snd_1216_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
}
case 9:
{
lean_object* v_tid_1228_; lean_object* v_x_1229_; lean_object* v_xType_1230_; lean_object* v_cs_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1251_; 
v_tid_1228_ = lean_ctor_get(v_x_1001_, 0);
v_x_1229_ = lean_ctor_get(v_x_1001_, 1);
v_xType_1230_ = lean_ctor_get(v_x_1001_, 2);
v_cs_1231_ = lean_ctor_get(v_x_1001_, 3);
v_isSharedCheck_1251_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1233_ = v_x_1001_;
v_isShared_1234_ = v_isSharedCheck_1251_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_cs_1231_);
lean_inc(v_xType_1230_);
lean_inc(v_x_1229_);
lean_inc(v_tid_1228_);
lean_dec(v_x_1001_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1251_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; size_t v_sz_1236_; size_t v___x_1237_; lean_object* v___x_1238_; lean_object* v_fst_1239_; lean_object* v_snd_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1250_; 
v___x_1235_ = l_Lean_IR_NormalizeIds_normIndex(v_x_1229_, v___y_1002_);
lean_dec(v_x_1229_);
v_sz_1236_ = lean_array_size(v_cs_1231_);
v___x_1237_ = ((size_t)0ULL);
v___x_1238_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2(v_sz_1236_, v___x_1237_, v_cs_1231_, v___y_1002_, v___y_1003_);
v_fst_1239_ = lean_ctor_get(v___x_1238_, 0);
v_snd_1240_ = lean_ctor_get(v___x_1238_, 1);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1242_ = v___x_1238_;
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_snd_1240_);
lean_inc(v_fst_1239_);
lean_dec(v___x_1238_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 3, v_fst_1239_);
lean_ctor_set(v___x_1233_, 1, v___x_1235_);
v___x_1245_ = v___x_1233_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(9, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_tid_1228_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v___x_1235_);
lean_ctor_set(v_reuseFailAlloc_1249_, 2, v_xType_1230_);
lean_ctor_set(v_reuseFailAlloc_1249_, 3, v_fst_1239_);
v___x_1245_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
lean_object* v___x_1247_; 
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v___x_1245_);
v___x_1247_ = v___x_1242_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v___x_1245_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v_snd_1240_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
}
case 10:
{
lean_object* v_x_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1261_; 
v_x_1252_ = lean_ctor_get(v_x_1001_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1254_ = v_x_1001_;
v_isShared_1255_ = v_isSharedCheck_1261_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_x_1252_);
lean_dec(v_x_1001_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1261_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1256_ = l_Lean_IR_NormalizeIds_normArg(v_x_1252_, v___y_1002_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 0, v___x_1256_);
v___x_1258_ = v___x_1254_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v___x_1259_; 
v___x_1259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
lean_ctor_set(v___x_1259_, 1, v___y_1003_);
return v___x_1259_;
}
}
}
case 11:
{
lean_object* v_j_1262_; lean_object* v_ys_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1273_; 
v_j_1262_ = lean_ctor_get(v_x_1001_, 0);
v_ys_1263_ = lean_ctor_get(v_x_1001_, 1);
v_isSharedCheck_1273_ = !lean_is_exclusive(v_x_1001_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1265_ = v_x_1001_;
v_isShared_1266_ = v_isSharedCheck_1273_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_ys_1263_);
lean_inc(v_j_1262_);
lean_dec(v_x_1001_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1273_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1270_; 
v___x_1267_ = l_Lean_IR_NormalizeIds_normIndex(v_j_1262_, v___y_1002_);
lean_dec(v_j_1262_);
v___x_1268_ = l_Lean_IR_NormalizeIds_normArgs(v_ys_1263_, v___y_1002_);
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 1, v___x_1268_);
lean_ctor_set(v___x_1265_, 0, v___x_1267_);
v___x_1270_ = v___x_1265_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1267_);
lean_ctor_set(v_reuseFailAlloc_1272_, 1, v___x_1268_);
v___x_1270_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
lean_object* v___x_1271_; 
v___x_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
lean_ctor_set(v___x_1271_, 1, v___y_1003_);
return v___x_1271_;
}
}
}
default: 
{
lean_object* v___x_1274_; 
v___x_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1274_, 0, v_x_1001_);
lean_ctor_set(v___x_1274_, 1, v___y_1003_);
return v___x_1274_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2(size_t v_sz_1275_, size_t v_i_1276_, lean_object* v_bs_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
uint8_t v___x_1280_; 
v___x_1280_ = lean_usize_dec_lt(v_i_1276_, v_sz_1275_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1281_, 0, v_bs_1277_);
lean_ctor_set(v___x_1281_, 1, v___y_1279_);
return v___x_1281_;
}
else
{
lean_object* v_v_1282_; lean_object* v___x_1283_; lean_object* v_bs_x27_1284_; lean_object* v_fst_1286_; lean_object* v_snd_1287_; 
v_v_1282_ = lean_array_uget(v_bs_1277_, v_i_1276_);
v___x_1283_ = lean_unsigned_to_nat(0u);
v_bs_x27_1284_ = lean_array_uset(v_bs_1277_, v_i_1276_, v___x_1283_);
if (lean_obj_tag(v_v_1282_) == 0)
{
lean_object* v_info_1292_; lean_object* v_b_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1303_; 
v_info_1292_ = lean_ctor_get(v_v_1282_, 0);
v_b_1293_ = lean_ctor_get(v_v_1282_, 1);
v_isSharedCheck_1303_ = !lean_is_exclusive(v_v_1282_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1295_ = v_v_1282_;
v_isShared_1296_ = v_isSharedCheck_1303_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_b_1293_);
lean_inc(v_info_1292_);
lean_dec(v_v_1282_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1303_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1297_; lean_object* v_fst_1298_; lean_object* v_snd_1299_; lean_object* v___x_1301_; 
v___x_1297_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1293_, v___y_1278_, v___y_1279_);
v_fst_1298_ = lean_ctor_get(v___x_1297_, 0);
lean_inc(v_fst_1298_);
v_snd_1299_ = lean_ctor_get(v___x_1297_, 1);
lean_inc(v_snd_1299_);
lean_dec_ref(v___x_1297_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 1, v_fst_1298_);
v___x_1301_ = v___x_1295_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_info_1292_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v_fst_1298_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
v_fst_1286_ = v___x_1301_;
v_snd_1287_ = v_snd_1299_;
goto v___jp_1285_;
}
}
}
else
{
lean_object* v_b_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1314_; 
v_b_1304_ = lean_ctor_get(v_v_1282_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_v_1282_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1306_ = v_v_1282_;
v_isShared_1307_ = v_isSharedCheck_1314_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_b_1304_);
lean_dec(v_v_1282_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1314_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1308_; lean_object* v_fst_1309_; lean_object* v_snd_1310_; lean_object* v___x_1312_; 
v___x_1308_ = l_Lean_IR_NormalizeIds_normFnBody(v_b_1304_, v___y_1278_, v___y_1279_);
v_fst_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_fst_1309_);
v_snd_1310_ = lean_ctor_get(v___x_1308_, 1);
lean_inc(v_snd_1310_);
lean_dec_ref(v___x_1308_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 0, v_fst_1309_);
v___x_1312_ = v___x_1306_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_fst_1309_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
v_fst_1286_ = v___x_1312_;
v_snd_1287_ = v_snd_1310_;
goto v___jp_1285_;
}
}
}
v___jp_1285_:
{
size_t v___x_1288_; size_t v___x_1289_; lean_object* v___x_1290_; 
v___x_1288_ = ((size_t)1ULL);
v___x_1289_ = lean_usize_add(v_i_1276_, v___x_1288_);
v___x_1290_ = lean_array_uset(v_bs_x27_1284_, v_i_1276_, v_fst_1286_);
v_i_1276_ = v___x_1289_;
v_bs_1277_ = v___x_1290_;
v___y_1279_ = v_snd_1287_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2___boxed(lean_object* v_sz_1315_, lean_object* v_i_1316_, lean_object* v_bs_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
size_t v_sz_boxed_1320_; size_t v_i_boxed_1321_; lean_object* v_res_1322_; 
v_sz_boxed_1320_ = lean_unbox_usize(v_sz_1315_);
lean_dec(v_sz_1315_);
v_i_boxed_1321_ = lean_unbox_usize(v_i_1316_);
lean_dec(v_i_1316_);
v_res_1322_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_NormalizeIds_normFnBody_spec__2(v_sz_boxed_1320_, v_i_boxed_1321_, v_bs_1317_, v___y_1318_, v___y_1319_);
lean_dec(v___y_1318_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normFnBody___boxed(lean_object* v_x_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l_Lean_IR_NormalizeIds_normFnBody(v_x_1323_, v___y_1324_, v___y_1325_);
lean_dec(v___y_1324_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normDecl(lean_object* v_d_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
if (lean_obj_tag(v_d_1327_) == 0)
{
lean_object* v_xs_1330_; lean_object* v_body_1331_; lean_object* v_fst_1333_; lean_object* v_snd_1334_; lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v_xs_1330_ = lean_ctor_get(v_d_1327_, 1);
v_body_1331_ = lean_ctor_get(v_d_1327_, 3);
v___x_1346_ = lean_unsigned_to_nat(0u);
v___x_1347_ = lean_array_get_size(v_xs_1330_);
v___x_1348_ = lean_nat_dec_lt(v___x_1346_, v___x_1347_);
if (v___x_1348_ == 0)
{
lean_inc(v___y_1328_);
v_fst_1333_ = v___y_1328_;
v_snd_1334_ = v___y_1329_;
goto v___jp_1332_;
}
else
{
size_t v___x_1349_; size_t v___x_1350_; lean_object* v___x_1351_; lean_object* v_fst_1352_; lean_object* v_snd_1353_; 
v___x_1349_ = ((size_t)0ULL);
v___x_1350_ = lean_usize_of_nat(v___x_1347_);
lean_inc(v___y_1328_);
v___x_1351_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_NormalizeIds_normFnBody_spec__1(v_xs_1330_, v___x_1349_, v___x_1350_, v___y_1328_, v___y_1329_);
v_fst_1352_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_fst_1352_);
v_snd_1353_ = lean_ctor_get(v___x_1351_, 1);
lean_inc(v_snd_1353_);
lean_dec_ref(v___x_1351_);
v_fst_1333_ = v_fst_1352_;
v_snd_1334_ = v_snd_1353_;
goto v___jp_1332_;
}
v___jp_1332_:
{
lean_object* v___x_1335_; lean_object* v_fst_1336_; lean_object* v_snd_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1345_; 
lean_inc(v_body_1331_);
v___x_1335_ = l_Lean_IR_NormalizeIds_normFnBody(v_body_1331_, v_fst_1333_, v_snd_1334_);
lean_dec(v_fst_1333_);
v_fst_1336_ = lean_ctor_get(v___x_1335_, 0);
v_snd_1337_ = lean_ctor_get(v___x_1335_, 1);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1339_ = v___x_1335_;
v_isShared_1340_ = v_isSharedCheck_1345_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_snd_1337_);
lean_inc(v_fst_1336_);
lean_dec(v___x_1335_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1345_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1343_; 
v___x_1341_ = l_Lean_IR_Decl_updateBody_x21(v_d_1327_, v_fst_1336_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 0, v___x_1341_);
v___x_1343_ = v___x_1339_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v___x_1341_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v_snd_1337_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
}
else
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1354_, 0, v_d_1327_);
lean_ctor_set(v___x_1354_, 1, v___y_1329_);
return v___x_1354_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_NormalizeIds_normDecl___boxed(lean_object* v_d_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_IR_NormalizeIds_normDecl(v_d_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1356_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_normalizeIds(lean_object* v_d_1359_){
_start:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v_fst_1363_; 
v___x_1360_ = lean_box(1);
v___x_1361_ = lean_unsigned_to_nat(1u);
v___x_1362_ = l_Lean_IR_NormalizeIds_normDecl(v_d_1359_, v___x_1360_, v___x_1361_);
v_fst_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc(v_fst_1363_);
lean_dec_ref(v___x_1362_);
return v_fst_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArg(lean_object* v_f_1364_, lean_object* v_x_1365_){
_start:
{
if (lean_obj_tag(v_x_1365_) == 0)
{
lean_object* v_id_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1374_; 
v_id_1366_ = lean_ctor_get(v_x_1365_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v_x_1365_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1368_ = v_x_1365_;
v_isShared_1369_ = v_isSharedCheck_1374_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_id_1366_);
lean_dec(v_x_1365_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1374_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1370_; lean_object* v___x_1372_; 
v___x_1370_ = lean_apply_1(v_f_1364_, v_id_1366_);
if (v_isShared_1369_ == 0)
{
lean_ctor_set(v___x_1368_, 0, v___x_1370_);
v___x_1372_ = v___x_1368_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v___x_1370_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
else
{
lean_dec_ref(v_f_1364_);
return v_x_1365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0(lean_object* v_f_1375_, size_t v_sz_1376_, size_t v_i_1377_, lean_object* v_bs_1378_){
_start:
{
uint8_t v___x_1379_; 
v___x_1379_ = lean_usize_dec_lt(v_i_1377_, v_sz_1376_);
if (v___x_1379_ == 0)
{
lean_dec_ref(v_f_1375_);
return v_bs_1378_;
}
else
{
lean_object* v_v_1380_; lean_object* v___x_1381_; lean_object* v_bs_x27_1382_; lean_object* v___y_1384_; 
v_v_1380_ = lean_array_uget(v_bs_1378_, v_i_1377_);
v___x_1381_ = lean_unsigned_to_nat(0u);
v_bs_x27_1382_ = lean_array_uset(v_bs_1378_, v_i_1377_, v___x_1381_);
if (lean_obj_tag(v_v_1380_) == 0)
{
lean_object* v_id_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1397_; 
v_id_1389_ = lean_ctor_get(v_v_1380_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v_v_1380_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1391_ = v_v_1380_;
v_isShared_1392_ = v_isSharedCheck_1397_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_id_1389_);
lean_dec(v_v_1380_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1397_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1393_; lean_object* v___x_1395_; 
lean_inc_ref(v_f_1375_);
v___x_1393_ = lean_apply_1(v_f_1375_, v_id_1389_);
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 0, v___x_1393_);
v___x_1395_ = v___x_1391_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1393_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
v___y_1384_ = v___x_1395_;
goto v___jp_1383_;
}
}
}
else
{
v___y_1384_ = v_v_1380_;
goto v___jp_1383_;
}
v___jp_1383_:
{
size_t v___x_1385_; size_t v___x_1386_; lean_object* v___x_1387_; 
v___x_1385_ = ((size_t)1ULL);
v___x_1386_ = lean_usize_add(v_i_1377_, v___x_1385_);
v___x_1387_ = lean_array_uset(v_bs_x27_1382_, v_i_1377_, v___y_1384_);
v_i_1377_ = v___x_1386_;
v_bs_1378_ = v___x_1387_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0___boxed(lean_object* v_f_1398_, lean_object* v_sz_1399_, lean_object* v_i_1400_, lean_object* v_bs_1401_){
_start:
{
size_t v_sz_boxed_1402_; size_t v_i_boxed_1403_; lean_object* v_res_1404_; 
v_sz_boxed_1402_ = lean_unbox_usize(v_sz_1399_);
lean_dec(v_sz_1399_);
v_i_boxed_1403_ = lean_unbox_usize(v_i_1400_);
lean_dec(v_i_1400_);
v_res_1404_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0(v_f_1398_, v_sz_boxed_1402_, v_i_boxed_1403_, v_bs_1401_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapArgs(lean_object* v_f_1405_, lean_object* v_as_1406_){
_start:
{
size_t v_sz_1407_; size_t v___x_1408_; lean_object* v___x_1409_; 
v_sz_1407_ = lean_array_size(v_as_1406_);
v___x_1408_ = ((size_t)0ULL);
v___x_1409_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapArgs_spec__0(v_f_1405_, v_sz_1407_, v___x_1408_, v_as_1406_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapExpr(lean_object* v_f_1410_, lean_object* v_x_1411_){
_start:
{
switch(lean_obj_tag(v_x_1411_))
{
case 0:
{
lean_object* v_i_1412_; lean_object* v_ys_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1421_; 
v_i_1412_ = lean_ctor_get(v_x_1411_, 0);
v_ys_1413_ = lean_ctor_get(v_x_1411_, 1);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1415_ = v_x_1411_;
v_isShared_1416_ = v_isSharedCheck_1421_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_ys_1413_);
lean_inc(v_i_1412_);
lean_dec(v_x_1411_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1421_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1417_; lean_object* v___x_1419_; 
v___x_1417_ = l_Lean_IR_MapVars_mapArgs(v_f_1410_, v_ys_1413_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 1, v___x_1417_);
v___x_1419_ = v___x_1415_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_i_1412_);
lean_ctor_set(v_reuseFailAlloc_1420_, 1, v___x_1417_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
case 1:
{
lean_object* v_n_1422_; lean_object* v_x_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1431_; 
v_n_1422_ = lean_ctor_get(v_x_1411_, 0);
v_x_1423_ = lean_ctor_get(v_x_1411_, 1);
v_isSharedCheck_1431_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1425_ = v_x_1411_;
v_isShared_1426_ = v_isSharedCheck_1431_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_x_1423_);
lean_inc(v_n_1422_);
lean_dec(v_x_1411_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1431_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1427_; lean_object* v___x_1429_; 
v___x_1427_ = lean_apply_1(v_f_1410_, v_x_1423_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 1, v___x_1427_);
v___x_1429_ = v___x_1425_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_n_1422_);
lean_ctor_set(v_reuseFailAlloc_1430_, 1, v___x_1427_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
case 2:
{
lean_object* v_x_1432_; lean_object* v_i_1433_; uint8_t v_updtHeader_1434_; lean_object* v_ys_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1444_; 
v_x_1432_ = lean_ctor_get(v_x_1411_, 0);
v_i_1433_ = lean_ctor_get(v_x_1411_, 1);
v_updtHeader_1434_ = lean_ctor_get_uint8(v_x_1411_, sizeof(void*)*3);
v_ys_1435_ = lean_ctor_get(v_x_1411_, 2);
v_isSharedCheck_1444_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1437_ = v_x_1411_;
v_isShared_1438_ = v_isSharedCheck_1444_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_ys_1435_);
lean_inc(v_i_1433_);
lean_inc(v_x_1432_);
lean_dec(v_x_1411_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1444_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
lean_inc_ref(v_f_1410_);
v___x_1439_ = lean_apply_1(v_f_1410_, v_x_1432_);
v___x_1440_ = l_Lean_IR_MapVars_mapArgs(v_f_1410_, v_ys_1435_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 2, v___x_1440_);
lean_ctor_set(v___x_1437_, 0, v___x_1439_);
v___x_1442_ = v___x_1437_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1439_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v_i_1433_);
lean_ctor_set(v_reuseFailAlloc_1443_, 2, v___x_1440_);
lean_ctor_set_uint8(v_reuseFailAlloc_1443_, sizeof(void*)*3, v_updtHeader_1434_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
case 3:
{
lean_object* v_i_1445_; lean_object* v_x_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1454_; 
v_i_1445_ = lean_ctor_get(v_x_1411_, 0);
v_x_1446_ = lean_ctor_get(v_x_1411_, 1);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1448_ = v_x_1411_;
v_isShared_1449_ = v_isSharedCheck_1454_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_x_1446_);
lean_inc(v_i_1445_);
lean_dec(v_x_1411_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1454_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; lean_object* v___x_1452_; 
v___x_1450_ = lean_apply_1(v_f_1410_, v_x_1446_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 1, v___x_1450_);
v___x_1452_ = v___x_1448_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_i_1445_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
case 4:
{
lean_object* v_i_1455_; lean_object* v_x_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1464_; 
v_i_1455_ = lean_ctor_get(v_x_1411_, 0);
v_x_1456_ = lean_ctor_get(v_x_1411_, 1);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1458_ = v_x_1411_;
v_isShared_1459_ = v_isSharedCheck_1464_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_x_1456_);
lean_inc(v_i_1455_);
lean_dec(v_x_1411_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1464_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1460_; lean_object* v___x_1462_; 
v___x_1460_ = lean_apply_1(v_f_1410_, v_x_1456_);
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 1, v___x_1460_);
v___x_1462_ = v___x_1458_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_i_1455_);
lean_ctor_set(v_reuseFailAlloc_1463_, 1, v___x_1460_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
case 5:
{
lean_object* v_n_1465_; lean_object* v_offset_1466_; lean_object* v_x_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1475_; 
v_n_1465_ = lean_ctor_get(v_x_1411_, 0);
v_offset_1466_ = lean_ctor_get(v_x_1411_, 1);
v_x_1467_ = lean_ctor_get(v_x_1411_, 2);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1469_ = v_x_1411_;
v_isShared_1470_ = v_isSharedCheck_1475_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_x_1467_);
lean_inc(v_offset_1466_);
lean_inc(v_n_1465_);
lean_dec(v_x_1411_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1475_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1471_; lean_object* v___x_1473_; 
v___x_1471_ = lean_apply_1(v_f_1410_, v_x_1467_);
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 2, v___x_1471_);
v___x_1473_ = v___x_1469_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_n_1465_);
lean_ctor_set(v_reuseFailAlloc_1474_, 1, v_offset_1466_);
lean_ctor_set(v_reuseFailAlloc_1474_, 2, v___x_1471_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
case 6:
{
lean_object* v_c_1476_; lean_object* v_ys_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1485_; 
v_c_1476_ = lean_ctor_get(v_x_1411_, 0);
v_ys_1477_ = lean_ctor_get(v_x_1411_, 1);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1479_ = v_x_1411_;
v_isShared_1480_ = v_isSharedCheck_1485_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_ys_1477_);
lean_inc(v_c_1476_);
lean_dec(v_x_1411_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1485_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1481_; lean_object* v___x_1483_; 
v___x_1481_ = l_Lean_IR_MapVars_mapArgs(v_f_1410_, v_ys_1477_);
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 1, v___x_1481_);
v___x_1483_ = v___x_1479_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_c_1476_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v___x_1481_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
case 7:
{
lean_object* v_c_1486_; lean_object* v_ys_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1495_; 
v_c_1486_ = lean_ctor_get(v_x_1411_, 0);
v_ys_1487_ = lean_ctor_get(v_x_1411_, 1);
v_isSharedCheck_1495_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1489_ = v_x_1411_;
v_isShared_1490_ = v_isSharedCheck_1495_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_ys_1487_);
lean_inc(v_c_1486_);
lean_dec(v_x_1411_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1495_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1491_; lean_object* v___x_1493_; 
v___x_1491_ = l_Lean_IR_MapVars_mapArgs(v_f_1410_, v_ys_1487_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 1, v___x_1491_);
v___x_1493_ = v___x_1489_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_c_1486_);
lean_ctor_set(v_reuseFailAlloc_1494_, 1, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
case 8:
{
lean_object* v_x_1496_; lean_object* v_ys_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1506_; 
v_x_1496_ = lean_ctor_get(v_x_1411_, 0);
v_ys_1497_ = lean_ctor_get(v_x_1411_, 1);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1499_ = v_x_1411_;
v_isShared_1500_ = v_isSharedCheck_1506_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_ys_1497_);
lean_inc(v_x_1496_);
lean_dec(v_x_1411_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1506_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1504_; 
lean_inc_ref(v_f_1410_);
v___x_1501_ = lean_apply_1(v_f_1410_, v_x_1496_);
v___x_1502_ = l_Lean_IR_MapVars_mapArgs(v_f_1410_, v_ys_1497_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 1, v___x_1502_);
lean_ctor_set(v___x_1499_, 0, v___x_1501_);
v___x_1504_ = v___x_1499_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1501_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v___x_1502_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
case 9:
{
lean_object* v_ty_1507_; lean_object* v_x_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1516_; 
v_ty_1507_ = lean_ctor_get(v_x_1411_, 0);
v_x_1508_ = lean_ctor_get(v_x_1411_, 1);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1510_ = v_x_1411_;
v_isShared_1511_ = v_isSharedCheck_1516_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_x_1508_);
lean_inc(v_ty_1507_);
lean_dec(v_x_1411_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1516_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1512_; lean_object* v___x_1514_; 
v___x_1512_ = lean_apply_1(v_f_1410_, v_x_1508_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 1, v___x_1512_);
v___x_1514_ = v___x_1510_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_ty_1507_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v___x_1512_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
case 10:
{
lean_object* v_x_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1525_; 
v_x_1517_ = lean_ctor_get(v_x_1411_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1519_ = v_x_1411_;
v_isShared_1520_ = v_isSharedCheck_1525_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_x_1517_);
lean_dec(v_x_1411_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1525_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1521_; lean_object* v___x_1523_; 
v___x_1521_ = lean_apply_1(v_f_1410_, v_x_1517_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 0, v___x_1521_);
v___x_1523_ = v___x_1519_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1521_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
case 11:
{
lean_dec_ref(v_f_1410_);
return v_x_1411_;
}
default: 
{
lean_object* v_x_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1534_; 
v_x_1526_ = lean_ctor_get(v_x_1411_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1528_ = v_x_1411_;
v_isShared_1529_ = v_isSharedCheck_1534_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_x_1526_);
lean_dec(v_x_1411_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1534_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1530_ = lean_apply_1(v_f_1410_, v_x_1526_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v___x_1530_);
v___x_1532_ = v___x_1528_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_MapVars_mapFnBody(lean_object* v_f_1535_, lean_object* v_x_1536_){
_start:
{
switch(lean_obj_tag(v_x_1536_))
{
case 0:
{
lean_object* v_x_1537_; lean_object* v_ty_1538_; lean_object* v_e_1539_; lean_object* v_b_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1549_; 
v_x_1537_ = lean_ctor_get(v_x_1536_, 0);
v_ty_1538_ = lean_ctor_get(v_x_1536_, 1);
v_e_1539_ = lean_ctor_get(v_x_1536_, 2);
v_b_1540_ = lean_ctor_get(v_x_1536_, 3);
v_isSharedCheck_1549_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1542_ = v_x_1536_;
v_isShared_1543_ = v_isSharedCheck_1549_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_b_1540_);
lean_inc(v_e_1539_);
lean_inc(v_ty_1538_);
lean_inc(v_x_1537_);
lean_dec(v_x_1536_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1549_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1547_; 
lean_inc_ref(v_f_1535_);
v___x_1544_ = l_Lean_IR_MapVars_mapExpr(v_f_1535_, v_e_1539_);
v___x_1545_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_b_1540_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 3, v___x_1545_);
lean_ctor_set(v___x_1542_, 2, v___x_1544_);
v___x_1547_ = v___x_1542_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_x_1537_);
lean_ctor_set(v_reuseFailAlloc_1548_, 1, v_ty_1538_);
lean_ctor_set(v_reuseFailAlloc_1548_, 2, v___x_1544_);
lean_ctor_set(v_reuseFailAlloc_1548_, 3, v___x_1545_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
case 1:
{
lean_object* v_j_1550_; lean_object* v_xs_1551_; lean_object* v_v_1552_; lean_object* v_b_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1562_; 
v_j_1550_ = lean_ctor_get(v_x_1536_, 0);
v_xs_1551_ = lean_ctor_get(v_x_1536_, 1);
v_v_1552_ = lean_ctor_get(v_x_1536_, 2);
v_b_1553_ = lean_ctor_get(v_x_1536_, 3);
v_isSharedCheck_1562_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1555_ = v_x_1536_;
v_isShared_1556_ = v_isSharedCheck_1562_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_b_1553_);
lean_inc(v_v_1552_);
lean_inc(v_xs_1551_);
lean_inc(v_j_1550_);
lean_dec(v_x_1536_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1562_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1560_; 
lean_inc_ref(v_f_1535_);
v___x_1557_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_v_1552_);
v___x_1558_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_b_1553_);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 3, v___x_1558_);
lean_ctor_set(v___x_1555_, 2, v___x_1557_);
v___x_1560_ = v___x_1555_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_j_1550_);
lean_ctor_set(v_reuseFailAlloc_1561_, 1, v_xs_1551_);
lean_ctor_set(v_reuseFailAlloc_1561_, 2, v___x_1557_);
lean_ctor_set(v_reuseFailAlloc_1561_, 3, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
case 2:
{
lean_object* v_x_1563_; lean_object* v_i_1564_; lean_object* v_y_1565_; lean_object* v_b_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1586_; 
v_x_1563_ = lean_ctor_get(v_x_1536_, 0);
v_i_1564_ = lean_ctor_get(v_x_1536_, 1);
v_y_1565_ = lean_ctor_get(v_x_1536_, 2);
v_b_1566_ = lean_ctor_get(v_x_1536_, 3);
v_isSharedCheck_1586_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1568_ = v_x_1536_;
v_isShared_1569_ = v_isSharedCheck_1586_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_b_1566_);
lean_inc(v_y_1565_);
lean_inc(v_i_1564_);
lean_inc(v_x_1563_);
lean_dec(v_x_1536_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1586_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1570_; lean_object* v___y_1572_; 
lean_inc_ref(v_f_1535_);
v___x_1570_ = lean_apply_1(v_f_1535_, v_x_1563_);
if (lean_obj_tag(v_y_1565_) == 0)
{
lean_object* v_id_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1585_; 
v_id_1577_ = lean_ctor_get(v_y_1565_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v_y_1565_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1579_ = v_y_1565_;
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_id_1577_);
lean_dec(v_y_1565_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
lean_inc_ref(v_f_1535_);
v___x_1581_ = lean_apply_1(v_f_1535_, v_id_1577_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 0, v___x_1581_);
v___x_1583_ = v___x_1579_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
v___y_1572_ = v___x_1583_;
goto v___jp_1571_;
}
}
}
else
{
v___y_1572_ = v_y_1565_;
goto v___jp_1571_;
}
v___jp_1571_:
{
lean_object* v___x_1573_; lean_object* v___x_1575_; 
v___x_1573_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_b_1566_);
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 3, v___x_1573_);
lean_ctor_set(v___x_1568_, 2, v___y_1572_);
lean_ctor_set(v___x_1568_, 0, v___x_1570_);
v___x_1575_ = v___x_1568_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v___x_1570_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_i_1564_);
lean_ctor_set(v_reuseFailAlloc_1576_, 2, v___y_1572_);
lean_ctor_set(v_reuseFailAlloc_1576_, 3, v___x_1573_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
case 3:
{
lean_object* v_x_1587_; lean_object* v_cidx_1588_; lean_object* v_b_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1598_; 
v_x_1587_ = lean_ctor_get(v_x_1536_, 0);
v_cidx_1588_ = lean_ctor_get(v_x_1536_, 1);
v_b_1589_ = lean_ctor_get(v_x_1536_, 2);
v_isSharedCheck_1598_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1591_ = v_x_1536_;
v_isShared_1592_ = v_isSharedCheck_1598_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_b_1589_);
lean_inc(v_cidx_1588_);
lean_inc(v_x_1587_);
lean_dec(v_x_1536_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1598_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1596_; 
lean_inc_ref(v_f_1535_);
v___x_1593_ = lean_apply_1(v_f_1535_, v_x_1587_);
v___x_1594_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_b_1589_);
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 2, v___x_1594_);
lean_ctor_set(v___x_1591_, 0, v___x_1593_);
v___x_1596_ = v___x_1591_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1593_);
lean_ctor_set(v_reuseFailAlloc_1597_, 1, v_cidx_1588_);
lean_ctor_set(v_reuseFailAlloc_1597_, 2, v___x_1594_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
case 4:
{
lean_object* v_x_1599_; lean_object* v_i_1600_; lean_object* v_y_1601_; lean_object* v_b_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1612_; 
v_x_1599_ = lean_ctor_get(v_x_1536_, 0);
v_i_1600_ = lean_ctor_get(v_x_1536_, 1);
v_y_1601_ = lean_ctor_get(v_x_1536_, 2);
v_b_1602_ = lean_ctor_get(v_x_1536_, 3);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1604_ = v_x_1536_;
v_isShared_1605_ = v_isSharedCheck_1612_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_b_1602_);
lean_inc(v_y_1601_);
lean_inc(v_i_1600_);
lean_inc(v_x_1599_);
lean_dec(v_x_1536_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1612_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1610_; 
lean_inc_ref_n(v_f_1535_, 2);
v___x_1606_ = lean_apply_1(v_f_1535_, v_x_1599_);
v___x_1607_ = lean_apply_1(v_f_1535_, v_y_1601_);
v___x_1608_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_b_1602_);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 3, v___x_1608_);
lean_ctor_set(v___x_1604_, 2, v___x_1607_);
lean_ctor_set(v___x_1604_, 0, v___x_1606_);
v___x_1610_ = v___x_1604_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1606_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_i_1600_);
lean_ctor_set(v_reuseFailAlloc_1611_, 2, v___x_1607_);
lean_ctor_set(v_reuseFailAlloc_1611_, 3, v___x_1608_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
}
case 5:
{
lean_object* v_x_1613_; lean_object* v_i_1614_; lean_object* v_offset_1615_; lean_object* v_y_1616_; lean_object* v_ty_1617_; lean_object* v_b_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1628_; 
v_x_1613_ = lean_ctor_get(v_x_1536_, 0);
v_i_1614_ = lean_ctor_get(v_x_1536_, 1);
v_offset_1615_ = lean_ctor_get(v_x_1536_, 2);
v_y_1616_ = lean_ctor_get(v_x_1536_, 3);
v_ty_1617_ = lean_ctor_get(v_x_1536_, 4);
v_b_1618_ = lean_ctor_get(v_x_1536_, 5);
v_isSharedCheck_1628_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1620_ = v_x_1536_;
v_isShared_1621_ = v_isSharedCheck_1628_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_b_1618_);
lean_inc(v_ty_1617_);
lean_inc(v_y_1616_);
lean_inc(v_offset_1615_);
lean_inc(v_i_1614_);
lean_inc(v_x_1613_);
lean_dec(v_x_1536_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1628_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1626_; 
lean_inc_ref_n(v_f_1535_, 2);
v___x_1622_ = lean_apply_1(v_f_1535_, v_x_1613_);
v___x_1623_ = lean_apply_1(v_f_1535_, v_y_1616_);
v___x_1624_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_b_1618_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set(v___x_1620_, 5, v___x_1624_);
lean_ctor_set(v___x_1620_, 3, v___x_1623_);
lean_ctor_set(v___x_1620_, 0, v___x_1622_);
v___x_1626_ = v___x_1620_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v___x_1622_);
lean_ctor_set(v_reuseFailAlloc_1627_, 1, v_i_1614_);
lean_ctor_set(v_reuseFailAlloc_1627_, 2, v_offset_1615_);
lean_ctor_set(v_reuseFailAlloc_1627_, 3, v___x_1623_);
lean_ctor_set(v_reuseFailAlloc_1627_, 4, v_ty_1617_);
lean_ctor_set(v_reuseFailAlloc_1627_, 5, v___x_1624_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
case 6:
{
lean_object* v_x_1629_; lean_object* v_n_1630_; uint8_t v_c_1631_; uint8_t v_persistent_1632_; lean_object* v_b_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1642_; 
v_x_1629_ = lean_ctor_get(v_x_1536_, 0);
v_n_1630_ = lean_ctor_get(v_x_1536_, 1);
v_c_1631_ = lean_ctor_get_uint8(v_x_1536_, sizeof(void*)*3);
v_persistent_1632_ = lean_ctor_get_uint8(v_x_1536_, sizeof(void*)*3 + 1);
v_b_1633_ = lean_ctor_get(v_x_1536_, 2);
v_isSharedCheck_1642_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1635_ = v_x_1536_;
v_isShared_1636_ = v_isSharedCheck_1642_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_b_1633_);
lean_inc(v_n_1630_);
lean_inc(v_x_1629_);
lean_dec(v_x_1536_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1642_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1640_; 
lean_inc_ref(v_f_1535_);
v___x_1637_ = lean_apply_1(v_f_1535_, v_x_1629_);
v___x_1638_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_b_1633_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 2, v___x_1638_);
lean_ctor_set(v___x_1635_, 0, v___x_1637_);
v___x_1640_ = v___x_1635_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(6, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1637_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v_n_1630_);
lean_ctor_set(v_reuseFailAlloc_1641_, 2, v___x_1638_);
lean_ctor_set_uint8(v_reuseFailAlloc_1641_, sizeof(void*)*3, v_c_1631_);
lean_ctor_set_uint8(v_reuseFailAlloc_1641_, sizeof(void*)*3 + 1, v_persistent_1632_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
case 7:
{
lean_object* v_x_1643_; lean_object* v_n_1644_; uint8_t v_c_1645_; uint8_t v_persistent_1646_; lean_object* v_b_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1656_; 
v_x_1643_ = lean_ctor_get(v_x_1536_, 0);
v_n_1644_ = lean_ctor_get(v_x_1536_, 1);
v_c_1645_ = lean_ctor_get_uint8(v_x_1536_, sizeof(void*)*3);
v_persistent_1646_ = lean_ctor_get_uint8(v_x_1536_, sizeof(void*)*3 + 1);
v_b_1647_ = lean_ctor_get(v_x_1536_, 2);
v_isSharedCheck_1656_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1649_ = v_x_1536_;
v_isShared_1650_ = v_isSharedCheck_1656_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_b_1647_);
lean_inc(v_n_1644_);
lean_inc(v_x_1643_);
lean_dec(v_x_1536_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1656_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1654_; 
lean_inc_ref(v_f_1535_);
v___x_1651_ = lean_apply_1(v_f_1535_, v_x_1643_);
v___x_1652_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_b_1647_);
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 2, v___x_1652_);
lean_ctor_set(v___x_1649_, 0, v___x_1651_);
v___x_1654_ = v___x_1649_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v___x_1651_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v_n_1644_);
lean_ctor_set(v_reuseFailAlloc_1655_, 2, v___x_1652_);
lean_ctor_set_uint8(v_reuseFailAlloc_1655_, sizeof(void*)*3, v_c_1645_);
lean_ctor_set_uint8(v_reuseFailAlloc_1655_, sizeof(void*)*3 + 1, v_persistent_1646_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
case 8:
{
lean_object* v_x_1657_; lean_object* v_b_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1667_; 
v_x_1657_ = lean_ctor_get(v_x_1536_, 0);
v_b_1658_ = lean_ctor_get(v_x_1536_, 1);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1660_ = v_x_1536_;
v_isShared_1661_ = v_isSharedCheck_1667_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_b_1658_);
lean_inc(v_x_1657_);
lean_dec(v_x_1536_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1667_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1665_; 
lean_inc_ref(v_f_1535_);
v___x_1662_ = lean_apply_1(v_f_1535_, v_x_1657_);
v___x_1663_ = l_Lean_IR_MapVars_mapFnBody(v_f_1535_, v_b_1658_);
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 1, v___x_1663_);
lean_ctor_set(v___x_1660_, 0, v___x_1662_);
v___x_1665_ = v___x_1660_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1662_);
lean_ctor_set(v_reuseFailAlloc_1666_, 1, v___x_1663_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
case 9:
{
lean_object* v_tid_1668_; lean_object* v_x_1669_; lean_object* v_xType_1670_; lean_object* v_cs_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1682_; 
v_tid_1668_ = lean_ctor_get(v_x_1536_, 0);
v_x_1669_ = lean_ctor_get(v_x_1536_, 1);
v_xType_1670_ = lean_ctor_get(v_x_1536_, 2);
v_cs_1671_ = lean_ctor_get(v_x_1536_, 3);
v_isSharedCheck_1682_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1673_ = v_x_1536_;
v_isShared_1674_ = v_isSharedCheck_1682_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_cs_1671_);
lean_inc(v_xType_1670_);
lean_inc(v_x_1669_);
lean_inc(v_tid_1668_);
lean_dec(v_x_1536_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1682_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1675_; size_t v_sz_1676_; size_t v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1680_; 
lean_inc_ref(v_f_1535_);
v___x_1675_ = lean_apply_1(v_f_1535_, v_x_1669_);
v_sz_1676_ = lean_array_size(v_cs_1671_);
v___x_1677_ = ((size_t)0ULL);
v___x_1678_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0(v_f_1535_, v_sz_1676_, v___x_1677_, v_cs_1671_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 3, v___x_1678_);
lean_ctor_set(v___x_1673_, 1, v___x_1675_);
v___x_1680_ = v___x_1673_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(9, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_tid_1668_);
lean_ctor_set(v_reuseFailAlloc_1681_, 1, v___x_1675_);
lean_ctor_set(v_reuseFailAlloc_1681_, 2, v_xType_1670_);
lean_ctor_set(v_reuseFailAlloc_1681_, 3, v___x_1678_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
case 10:
{
lean_object* v_x_1683_; 
v_x_1683_ = lean_ctor_get(v_x_1536_, 0);
lean_inc(v_x_1683_);
if (lean_obj_tag(v_x_1683_) == 0)
{
lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1699_; 
v_isSharedCheck_1699_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1699_ == 0)
{
lean_object* v_unused_1700_; 
v_unused_1700_ = lean_ctor_get(v_x_1536_, 0);
lean_dec(v_unused_1700_);
v___x_1685_ = v_x_1536_;
v_isShared_1686_ = v_isSharedCheck_1699_;
goto v_resetjp_1684_;
}
else
{
lean_dec(v_x_1536_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1699_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v_id_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1698_; 
v_id_1687_ = lean_ctor_get(v_x_1683_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_x_1683_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1689_ = v_x_1683_;
v_isShared_1690_ = v_isSharedCheck_1698_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_id_1687_);
lean_dec(v_x_1683_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1698_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1691_; lean_object* v___x_1693_; 
v___x_1691_ = lean_apply_1(v_f_1535_, v_id_1687_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1691_);
v___x_1693_ = v___x_1689_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1691_);
v___x_1693_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
lean_object* v___x_1695_; 
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 0, v___x_1693_);
v___x_1695_ = v___x_1685_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
}
else
{
lean_dec_ref(v_f_1535_);
return v_x_1536_;
}
}
case 11:
{
lean_object* v_j_1701_; lean_object* v_ys_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1710_; 
v_j_1701_ = lean_ctor_get(v_x_1536_, 0);
v_ys_1702_ = lean_ctor_get(v_x_1536_, 1);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_x_1536_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1704_ = v_x_1536_;
v_isShared_1705_ = v_isSharedCheck_1710_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_ys_1702_);
lean_inc(v_j_1701_);
lean_dec(v_x_1536_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1710_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1706_; lean_object* v___x_1708_; 
v___x_1706_ = l_Lean_IR_MapVars_mapArgs(v_f_1535_, v_ys_1702_);
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 1, v___x_1706_);
v___x_1708_ = v___x_1704_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_j_1701_);
lean_ctor_set(v_reuseFailAlloc_1709_, 1, v___x_1706_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
default: 
{
lean_dec_ref(v_f_1535_);
return v_x_1536_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0(lean_object* v_f_1711_, size_t v_sz_1712_, size_t v_i_1713_, lean_object* v_bs_1714_){
_start:
{
uint8_t v___x_1715_; 
v___x_1715_ = lean_usize_dec_lt(v_i_1713_, v_sz_1712_);
if (v___x_1715_ == 0)
{
lean_dec_ref(v_f_1711_);
return v_bs_1714_;
}
else
{
lean_object* v_v_1716_; lean_object* v___x_1717_; lean_object* v_bs_x27_1718_; lean_object* v___y_1720_; 
v_v_1716_ = lean_array_uget(v_bs_1714_, v_i_1713_);
v___x_1717_ = lean_unsigned_to_nat(0u);
v_bs_x27_1718_ = lean_array_uset(v_bs_1714_, v_i_1713_, v___x_1717_);
if (lean_obj_tag(v_v_1716_) == 0)
{
lean_object* v_info_1725_; lean_object* v_b_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1734_; 
v_info_1725_ = lean_ctor_get(v_v_1716_, 0);
v_b_1726_ = lean_ctor_get(v_v_1716_, 1);
v_isSharedCheck_1734_ = !lean_is_exclusive(v_v_1716_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1728_ = v_v_1716_;
v_isShared_1729_ = v_isSharedCheck_1734_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_b_1726_);
lean_inc(v_info_1725_);
lean_dec(v_v_1716_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1734_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1730_; lean_object* v___x_1732_; 
lean_inc_ref(v_f_1711_);
v___x_1730_ = l_Lean_IR_MapVars_mapFnBody(v_f_1711_, v_b_1726_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 1, v___x_1730_);
v___x_1732_ = v___x_1728_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_info_1725_);
lean_ctor_set(v_reuseFailAlloc_1733_, 1, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
v___y_1720_ = v___x_1732_;
goto v___jp_1719_;
}
}
}
else
{
lean_object* v_b_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1743_; 
v_b_1735_ = lean_ctor_get(v_v_1716_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_v_1716_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1737_ = v_v_1716_;
v_isShared_1738_ = v_isSharedCheck_1743_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_b_1735_);
lean_dec(v_v_1716_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1743_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1739_; lean_object* v___x_1741_; 
lean_inc_ref(v_f_1711_);
v___x_1739_ = l_Lean_IR_MapVars_mapFnBody(v_f_1711_, v_b_1735_);
if (v_isShared_1738_ == 0)
{
lean_ctor_set(v___x_1737_, 0, v___x_1739_);
v___x_1741_ = v___x_1737_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
v___y_1720_ = v___x_1741_;
goto v___jp_1719_;
}
}
}
v___jp_1719_:
{
size_t v___x_1721_; size_t v___x_1722_; lean_object* v___x_1723_; 
v___x_1721_ = ((size_t)1ULL);
v___x_1722_ = lean_usize_add(v_i_1713_, v___x_1721_);
v___x_1723_ = lean_array_uset(v_bs_x27_1718_, v_i_1713_, v___y_1720_);
v_i_1713_ = v___x_1722_;
v_bs_1714_ = v___x_1723_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0___boxed(lean_object* v_f_1744_, lean_object* v_sz_1745_, lean_object* v_i_1746_, lean_object* v_bs_1747_){
_start:
{
size_t v_sz_boxed_1748_; size_t v_i_boxed_1749_; lean_object* v_res_1750_; 
v_sz_boxed_1748_ = lean_unbox_usize(v_sz_1745_);
lean_dec(v_sz_1745_);
v_i_boxed_1749_ = lean_unbox_usize(v_i_1746_);
lean_dec(v_i_1746_);
v_res_1750_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_MapVars_mapFnBody_spec__0(v_f_1744_, v_sz_boxed_1748_, v_i_boxed_1749_, v_bs_1747_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_mapVars(lean_object* v_f_1751_, lean_object* v_b_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lean_IR_MapVars_mapFnBody(v_f_1751_, v_b_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar___lam__0(lean_object* v_x_1754_, lean_object* v_y_1755_, lean_object* v_z_1756_){
_start:
{
uint8_t v___x_1757_; 
v___x_1757_ = l_Lean_IR_instBEqVarId_beq(v_x_1754_, v_z_1756_);
if (v___x_1757_ == 0)
{
lean_inc(v_z_1756_);
return v_z_1756_;
}
else
{
lean_inc(v_y_1755_);
return v_y_1755_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar___lam__0___boxed(lean_object* v_x_1758_, lean_object* v_y_1759_, lean_object* v_z_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_IR_FnBody_replaceVar___lam__0(v_x_1758_, v_y_1759_, v_z_1760_);
lean_dec(v_z_1760_);
lean_dec(v_y_1759_);
lean_dec(v_x_1758_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_FnBody_replaceVar(lean_object* v_x_1762_, lean_object* v_y_1763_, lean_object* v_b_1764_){
_start:
{
lean_object* v___f_1765_; lean_object* v___x_1766_; 
v___f_1765_ = lean_alloc_closure((void*)(l_Lean_IR_FnBody_replaceVar___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1765_, 0, v_x_1762_);
lean_closure_set(v___f_1765_, 1, v_y_1763_);
v___x_1766_ = l_Lean_IR_MapVars_mapFnBody(v___f_1765_, v_b_1764_);
return v___x_1766_;
}
}
lean_object* runtime_initialize_Lean_Compiler_IR_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_NormIds(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_IR_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_NormIds(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_IR_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_NormIds(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_NormIds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_NormIds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_NormIds(builtin);
}
#ifdef __cplusplus
}
#endif
