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
lean_object* l_instMonadEIO___redArg();
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
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value;
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
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_instMonadEIO___redArg();
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(lean_object* v_msg_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v_toApplicative_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_106_; 
v___x_67_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_68_ = l_StateRefT_x27_instMonad___redArg(v___x_67_);
v_toApplicative_69_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_106_ == 0)
{
lean_object* v_unused_107_; 
v_unused_107_ = lean_ctor_get(v___x_68_, 1);
lean_dec(v_unused_107_);
v___x_71_ = v___x_68_;
v_isShared_72_ = v_isSharedCheck_106_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_toApplicative_69_);
lean_dec(v___x_68_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_106_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v_toFunctor_73_; lean_object* v_toSeq_74_; lean_object* v_toSeqLeft_75_; lean_object* v_toSeqRight_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_104_; 
v_toFunctor_73_ = lean_ctor_get(v_toApplicative_69_, 0);
v_toSeq_74_ = lean_ctor_get(v_toApplicative_69_, 2);
v_toSeqLeft_75_ = lean_ctor_get(v_toApplicative_69_, 3);
v_toSeqRight_76_ = lean_ctor_get(v_toApplicative_69_, 4);
v_isSharedCheck_104_ = !lean_is_exclusive(v_toApplicative_69_);
if (v_isSharedCheck_104_ == 0)
{
lean_object* v_unused_105_; 
v_unused_105_ = lean_ctor_get(v_toApplicative_69_, 1);
lean_dec(v_unused_105_);
v___x_78_ = v_toApplicative_69_;
v_isShared_79_ = v_isSharedCheck_104_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_toSeqRight_76_);
lean_inc(v_toSeqLeft_75_);
lean_inc(v_toSeq_74_);
lean_inc(v_toFunctor_73_);
lean_dec(v_toApplicative_69_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_104_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___f_80_; lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___f_83_; lean_object* v___x_84_; lean_object* v___f_85_; lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___x_89_; 
v___f_80_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_81_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_73_);
v___f_82_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_82_, 0, v_toFunctor_73_);
v___f_83_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_83_, 0, v_toFunctor_73_);
v___x_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_84_, 0, v___f_82_);
lean_ctor_set(v___x_84_, 1, v___f_83_);
v___f_85_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_85_, 0, v_toSeqRight_76_);
v___f_86_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_86_, 0, v_toSeqLeft_75_);
v___f_87_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_87_, 0, v_toSeq_74_);
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 4, v___f_85_);
lean_ctor_set(v___x_78_, 3, v___f_86_);
lean_ctor_set(v___x_78_, 2, v___f_87_);
lean_ctor_set(v___x_78_, 1, v___f_80_);
lean_ctor_set(v___x_78_, 0, v___x_84_);
v___x_89_ = v___x_78_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___f_80_);
lean_ctor_set(v_reuseFailAlloc_103_, 2, v___f_87_);
lean_ctor_set(v_reuseFailAlloc_103_, 3, v___f_86_);
lean_ctor_set(v_reuseFailAlloc_103_, 4, v___f_85_);
v___x_89_ = v_reuseFailAlloc_103_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_91_; 
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 1, v___f_81_);
lean_ctor_set(v___x_71_, 0, v___x_89_);
v___x_91_ = v___x_71_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_89_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v___f_81_);
v___x_91_ = v_reuseFailAlloc_102_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_3572__overap_100_; lean_object* v___x_101_; 
v___x_92_ = l_StateRefT_x27_instMonad___redArg(v___x_91_);
v___x_93_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_94_ = 0;
v___x_95_ = lean_box(v___x_94_);
v___x_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_93_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = l_instInhabitedOfMonad___redArg(v___x_92_, v___x_96_);
v___x_98_ = l_instInhabitedReaderT___redArg(v___x_97_);
v___x_99_ = l_instInhabitedReaderT___redArg(v___x_98_);
v___x_3572__overap_100_ = lean_panic_fn_borrowed(v___x_99_, v_msg_60_);
lean_dec(v___x_99_);
lean_inc(v___y_65_);
lean_inc_ref(v___y_64_);
lean_inc(v___y_63_);
lean_inc_ref(v___y_62_);
lean_inc_ref(v___y_61_);
v___x_101_ = lean_apply_6(v___x_3572__overap_100_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, lean_box(0));
return v___x_101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___boxed(lean_object* v_msg_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v_msg_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec_ref(v___y_109_);
return v_res_115_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(lean_object* v_as_116_, size_t v_i_117_, size_t v_stop_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = lean_usize_dec_eq(v_i_117_, v_stop_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_array_uget_borrowed(v_as_116_, v_i_117_);
v___x_121_ = lean_unbox(v___x_120_);
if (v___x_121_ == 0)
{
size_t v___x_122_; size_t v___x_123_; 
v___x_122_ = ((size_t)1ULL);
v___x_123_ = lean_usize_add(v_i_117_, v___x_122_);
v_i_117_ = v___x_123_;
goto _start;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = lean_unbox(v___x_120_);
return v___x_125_;
}
}
else
{
uint8_t v___x_126_; 
v___x_126_ = 0;
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2___boxed(lean_object* v_as_127_, lean_object* v_i_128_, lean_object* v_stop_129_){
_start:
{
size_t v_i_boxed_130_; size_t v_stop_boxed_131_; uint8_t v_res_132_; lean_object* v_r_133_; 
v_i_boxed_130_ = lean_unbox_usize(v_i_128_);
lean_dec(v_i_128_);
v_stop_boxed_131_ = lean_unbox_usize(v_stop_129_);
lean_dec(v_stop_129_);
v_res_132_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_as_127_, v_i_boxed_130_, v_stop_boxed_131_);
lean_dec_ref(v_as_127_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_137_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_138_ = lean_unsigned_to_nat(9u);
v___x_139_ = lean_unsigned_to_nat(642u);
v___x_140_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1));
v___x_141_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0));
v___x_142_ = l_mkPanicMessageWithDecl(v___x_141_, v___x_140_, v___x_139_, v___x_138_, v___x_137_);
return v___x_142_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_145_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_146_ = lean_unsigned_to_nat(61u);
v___x_147_ = lean_unsigned_to_nat(125u);
v___x_148_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5));
v___x_149_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_150_ = l_mkPanicMessageWithDecl(v___x_149_, v___x_148_, v___x_147_, v___x_146_, v___x_145_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(lean_object* v_info_151_, lean_object* v_w_152_, lean_object* v_c_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
uint8_t v___y_161_; lean_object* v___y_162_; lean_object* v_k_167_; lean_object* v___y_168_; lean_object* v___y_169_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_172_; 
switch(lean_obj_tag(v_c_153_))
{
case 0:
{
lean_object* v_decl_387_; lean_object* v_value_388_; 
v_decl_387_ = lean_ctor_get(v_c_153_, 0);
lean_inc_ref(v_decl_387_);
v_value_388_ = lean_ctor_get(v_decl_387_, 3);
lean_inc(v_value_388_);
if (lean_obj_tag(v_value_388_) == 5)
{
lean_object* v_k_389_; lean_object* v_fvarId_390_; lean_object* v_binderName_391_; lean_object* v_type_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_447_; 
v_k_389_ = lean_ctor_get(v_c_153_, 1);
v_fvarId_390_ = lean_ctor_get(v_decl_387_, 0);
v_binderName_391_ = lean_ctor_get(v_decl_387_, 1);
v_type_392_ = lean_ctor_get(v_decl_387_, 2);
v_isSharedCheck_447_ = !lean_is_exclusive(v_decl_387_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; 
v_unused_448_ = lean_ctor_get(v_decl_387_, 3);
lean_dec(v_unused_448_);
v___x_394_ = v_decl_387_;
v_isShared_395_ = v_isSharedCheck_447_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_type_392_);
lean_inc(v_binderName_391_);
lean_inc(v_fvarId_390_);
lean_dec(v_decl_387_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_447_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v_i_396_; lean_object* v_args_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_446_; 
v_i_396_ = lean_ctor_get(v_value_388_, 0);
v_args_397_ = lean_ctor_get(v_value_388_, 1);
v_isSharedCheck_446_ = !lean_is_exclusive(v_value_388_);
if (v_isSharedCheck_446_ == 0)
{
v___x_399_ = v_value_388_;
v_isShared_400_ = v_isSharedCheck_446_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_args_397_);
lean_inc(v_i_396_);
lean_dec(v_value_388_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_446_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
uint8_t v___x_401_; lean_object* v___x_403_; 
v___x_401_ = 1;
lean_inc_ref(v_args_397_);
lean_inc_ref(v_i_396_);
if (v_isShared_400_ == 0)
{
v___x_403_ = v___x_399_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_i_396_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_args_397_);
v___x_403_ = v_reuseFailAlloc_445_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_405_; 
lean_inc_ref(v_type_392_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 3, v___x_403_);
v___x_405_ = v___x_394_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_fvarId_390_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_binderName_391_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_type_392_);
lean_ctor_set(v_reuseFailAlloc_444_, 3, v___x_403_);
v___x_405_ = v_reuseFailAlloc_444_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v___x_406_; 
v___x_406_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_info_151_, v_i_396_, v___y_154_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; uint8_t v___y_409_; uint8_t v___x_430_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v___x_406_, 1);
v___x_430_ = lean_unbox(v_a_407_);
if (v___x_430_ == 0)
{
lean_dec(v_a_407_);
lean_dec_ref(v___x_405_);
lean_dec_ref(v_args_397_);
lean_dec_ref(v_i_396_);
lean_dec_ref(v_type_392_);
lean_inc_ref(v_k_389_);
v_k_167_ = v_k_389_;
v___y_168_ = v___y_154_;
v___y_169_ = v___y_155_;
v___y_170_ = v___y_156_;
v___y_171_ = v___y_157_;
v___y_172_ = v___y_158_;
goto v___jp_166_;
}
else
{
lean_object* v_cidx_431_; lean_object* v_cidx_432_; uint8_t v___x_433_; 
lean_inc_ref(v_k_389_);
lean_dec_ref_known(v_c_153_, 2);
v_cidx_431_ = lean_ctor_get(v_info_151_, 1);
v_cidx_432_ = lean_ctor_get(v_i_396_, 1);
v___x_433_ = lean_nat_dec_eq(v_cidx_431_, v_cidx_432_);
if (v___x_433_ == 0)
{
uint8_t v___x_434_; 
v___x_434_ = lean_unbox(v_a_407_);
v___y_409_ = v___x_434_;
goto v___jp_408_;
}
else
{
uint8_t v___x_435_; 
v___x_435_ = 0;
v___y_409_ = v___x_435_;
goto v___jp_408_;
}
}
v___jp_408_:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(v___x_410_, 0, v_w_152_);
lean_ctor_set(v___x_410_, 1, v_i_396_);
lean_ctor_set(v___x_410_, 2, v_args_397_);
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*3, v___y_409_);
v___x_411_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_401_, v___x_405_, v_type_392_, v___x_410_, v___y_156_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_421_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_421_ == 0)
{
v___x_414_ = v___x_411_;
v_isShared_415_ = v_isSharedCheck_421_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_411_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_421_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_416_, 0, v_a_412_);
lean_ctor_set(v___x_416_, 1, v_k_389_);
v___x_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
lean_ctor_set(v___x_417_, 1, v_a_407_);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v___x_417_);
v___x_419_ = v___x_414_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
lean_dec(v_a_407_);
lean_dec_ref(v_k_389_);
v_a_422_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_411_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_411_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec_ref(v___x_405_);
lean_dec_ref(v_args_397_);
lean_dec_ref(v_i_396_);
lean_dec_ref(v_type_392_);
lean_dec_ref_known(v_c_153_, 2);
lean_dec(v_w_152_);
v_a_436_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_406_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_406_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
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
lean_object* v_k_449_; 
lean_dec(v_value_388_);
lean_dec_ref(v_decl_387_);
v_k_449_ = lean_ctor_get(v_c_153_, 1);
lean_inc_ref(v_k_449_);
v_k_167_ = v_k_449_;
v___y_168_ = v___y_154_;
v___y_169_ = v___y_155_;
v___y_170_ = v___y_156_;
v___y_171_ = v___y_157_;
v___y_172_ = v___y_158_;
goto v___jp_166_;
}
}
case 2:
{
lean_object* v_decl_450_; lean_object* v_k_451_; lean_object* v_params_452_; lean_object* v_type_453_; lean_object* v_value_454_; uint8_t v___x_455_; lean_object* v___x_456_; 
v_decl_450_ = lean_ctor_get(v_c_153_, 0);
v_k_451_ = lean_ctor_get(v_c_153_, 1);
v_params_452_ = lean_ctor_get(v_decl_450_, 2);
v_type_453_ = lean_ctor_get(v_decl_450_, 3);
v_value_454_ = lean_ctor_get(v_decl_450_, 4);
v___x_455_ = 1;
lean_inc_ref(v_value_454_);
lean_inc(v_w_152_);
v___x_456_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_151_, v_w_152_, v_value_454_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v_snd_458_; uint8_t v___x_459_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref_known(v___x_456_, 1);
v_snd_458_ = lean_ctor_get(v_a_457_, 1);
lean_inc(v_snd_458_);
v___x_459_ = lean_unbox(v_snd_458_);
if (v___x_459_ == 0)
{
lean_dec(v_snd_458_);
lean_dec(v_a_457_);
lean_inc_ref(v_k_451_);
v_k_167_ = v_k_451_;
v___y_168_ = v___y_154_;
v___y_169_ = v___y_155_;
v___y_170_ = v___y_156_;
v___y_171_ = v___y_157_;
v___y_172_ = v___y_158_;
goto v___jp_166_;
}
else
{
lean_object* v_fst_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_509_; 
lean_dec(v_w_152_);
v_fst_460_ = lean_ctor_get(v_a_457_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v_a_457_);
if (v_isSharedCheck_509_ == 0)
{
lean_object* v_unused_510_; 
v_unused_510_ = lean_ctor_get(v_a_457_, 1);
lean_dec(v_unused_510_);
v___x_462_ = v_a_457_;
v_isShared_463_ = v_isSharedCheck_509_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_fst_460_);
lean_dec(v_a_457_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_509_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; 
lean_inc_ref(v_params_452_);
lean_inc_ref(v_type_453_);
lean_inc_ref(v_decl_450_);
v___x_464_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_455_, v_decl_450_, v_type_453_, v_params_452_, v_fst_460_, v___y_156_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_500_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_500_ == 0)
{
v___x_467_ = v___x_464_;
v_isShared_468_ = v_isSharedCheck_500_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_464_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_500_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___y_470_; size_t v___x_477_; uint8_t v___x_478_; 
v___x_477_ = lean_ptr_addr(v_k_451_);
v___x_478_ = lean_usize_dec_eq(v___x_477_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_485_; 
lean_inc_ref(v_k_451_);
v_isSharedCheck_485_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_485_ == 0)
{
lean_object* v_unused_486_; lean_object* v_unused_487_; 
v_unused_486_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_486_);
v_unused_487_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_487_);
v___x_480_ = v_c_153_;
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
else
{
lean_dec(v_c_153_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 0, v_a_465_);
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_465_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_k_451_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
v___y_470_ = v___x_483_;
goto v___jp_469_;
}
}
}
else
{
size_t v___x_488_; size_t v___x_489_; uint8_t v___x_490_; 
v___x_488_ = lean_ptr_addr(v_decl_450_);
v___x_489_ = lean_ptr_addr(v_a_465_);
v___x_490_ = lean_usize_dec_eq(v___x_488_, v___x_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
lean_inc_ref(v_k_451_);
v_isSharedCheck_497_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_497_ == 0)
{
lean_object* v_unused_498_; lean_object* v_unused_499_; 
v_unused_498_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_498_);
v_unused_499_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_499_);
v___x_492_ = v_c_153_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_dec(v_c_153_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_495_; 
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 0, v_a_465_);
v___x_495_ = v___x_492_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_a_465_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_k_451_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
v___y_470_ = v___x_495_;
goto v___jp_469_;
}
}
}
else
{
lean_dec(v_a_465_);
v___y_470_ = v_c_153_;
goto v___jp_469_;
}
}
v___jp_469_:
{
lean_object* v___x_472_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v___y_470_);
v___x_472_ = v___x_462_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___y_470_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_snd_458_);
v___x_472_ = v_reuseFailAlloc_476_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
lean_object* v___x_474_; 
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_472_);
v___x_474_ = v___x_467_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
lean_del_object(v___x_462_);
lean_dec(v_snd_458_);
lean_dec_ref_known(v_c_153_, 2);
v_a_501_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_464_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_464_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
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
}
else
{
lean_dec_ref_known(v_c_153_, 2);
lean_dec(v_w_152_);
return v___x_456_;
}
}
case 3:
{
uint8_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec(v_w_152_);
v___x_511_ = 0;
v___x_512_ = lean_box(v___x_511_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v_c_153_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
case 4:
{
lean_object* v_cases_515_; lean_object* v_typeName_516_; lean_object* v_resultType_517_; lean_object* v_discr_518_; lean_object* v_alts_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_571_; 
v_cases_515_ = lean_ctor_get(v_c_153_, 0);
lean_inc_ref(v_cases_515_);
v_typeName_516_ = lean_ctor_get(v_cases_515_, 0);
v_resultType_517_ = lean_ctor_get(v_cases_515_, 1);
v_discr_518_ = lean_ctor_get(v_cases_515_, 2);
v_alts_519_ = lean_ctor_get(v_cases_515_, 3);
v_isSharedCheck_571_ = !lean_is_exclusive(v_cases_515_);
if (v_isSharedCheck_571_ == 0)
{
v___x_521_ = v_cases_515_;
v_isShared_522_ = v_isSharedCheck_571_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_alts_519_);
lean_inc(v_discr_518_);
lean_inc(v_resultType_517_);
lean_inc(v_typeName_516_);
lean_dec(v_cases_515_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_571_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
size_t v_sz_523_; size_t v___x_524_; lean_object* v___x_525_; 
v_sz_523_ = lean_array_size(v_alts_519_);
v___x_524_ = ((size_t)0ULL);
lean_inc_ref(v_alts_519_);
v___x_525_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(v_info_151_, v_w_152_, v_sz_523_, v___x_524_, v_alts_519_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_562_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_562_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_562_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_562_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___y_531_; uint8_t v___y_532_; lean_object* v___x_538_; lean_object* v_fst_539_; lean_object* v_snd_540_; lean_object* v___y_542_; size_t v___x_548_; size_t v___x_549_; uint8_t v___x_550_; 
v___x_538_ = l_Array_unzip___redArg(v_a_526_);
lean_dec(v_a_526_);
v_fst_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_fst_539_);
v_snd_540_ = lean_ctor_get(v___x_538_, 1);
lean_inc(v_snd_540_);
lean_dec_ref(v___x_538_);
v___x_548_ = lean_ptr_addr(v_alts_519_);
lean_dec_ref(v_alts_519_);
v___x_549_ = lean_ptr_addr(v_fst_539_);
v___x_550_ = lean_usize_dec_eq(v___x_548_, v___x_549_);
if (v___x_550_ == 0)
{
lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_560_; 
v_isSharedCheck_560_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_560_ == 0)
{
lean_object* v_unused_561_; 
v_unused_561_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_561_);
v___x_552_ = v_c_153_;
v_isShared_553_ = v_isSharedCheck_560_;
goto v_resetjp_551_;
}
else
{
lean_dec(v_c_153_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_560_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 3, v_fst_539_);
v___x_555_ = v___x_521_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_typeName_516_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_resultType_517_);
lean_ctor_set(v_reuseFailAlloc_559_, 2, v_discr_518_);
lean_ctor_set(v_reuseFailAlloc_559_, 3, v_fst_539_);
v___x_555_ = v_reuseFailAlloc_559_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
lean_object* v___x_557_; 
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 0, v___x_555_);
v___x_557_ = v___x_552_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_555_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
v___y_542_ = v___x_557_;
goto v___jp_541_;
}
}
}
}
else
{
lean_dec(v_fst_539_);
lean_del_object(v___x_521_);
lean_dec(v_discr_518_);
lean_dec_ref(v_resultType_517_);
lean_dec(v_typeName_516_);
v___y_542_ = v_c_153_;
goto v___jp_541_;
}
v___jp_530_:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_533_ = lean_box(v___y_532_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___y_531_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_534_);
v___x_536_ = v___x_528_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_534_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
v___jp_541_:
{
lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = lean_array_get_size(v_snd_540_);
v___x_545_ = lean_nat_dec_lt(v___x_543_, v___x_544_);
if (v___x_545_ == 0)
{
lean_dec(v_snd_540_);
v___y_531_ = v___y_542_;
v___y_532_ = v___x_545_;
goto v___jp_530_;
}
else
{
if (v___x_545_ == 0)
{
lean_dec(v_snd_540_);
v___y_531_ = v___y_542_;
v___y_532_ = v___x_545_;
goto v___jp_530_;
}
else
{
size_t v___x_546_; uint8_t v___x_547_; 
v___x_546_ = lean_usize_of_nat(v___x_544_);
v___x_547_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_snd_540_, v___x_524_, v___x_546_);
lean_dec(v_snd_540_);
v___y_531_ = v___y_542_;
v___y_532_ = v___x_547_;
goto v___jp_530_;
}
}
}
}
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
lean_del_object(v___x_521_);
lean_dec_ref(v_alts_519_);
lean_dec(v_discr_518_);
lean_dec_ref(v_resultType_517_);
lean_dec(v_typeName_516_);
lean_dec_ref_known(v_c_153_, 1);
v_a_563_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_525_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_525_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
case 5:
{
uint8_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec(v_w_152_);
v___x_572_ = 0;
v___x_573_ = lean_box(v___x_572_);
v___x_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_574_, 0, v_c_153_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
case 6:
{
uint8_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
lean_dec(v_w_152_);
v___x_576_ = 0;
v___x_577_ = lean_box(v___x_576_);
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v_c_153_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
case 8:
{
lean_object* v_k_580_; 
v_k_580_ = lean_ctor_get(v_c_153_, 3);
lean_inc_ref(v_k_580_);
v_k_167_ = v_k_580_;
v___y_168_ = v___y_154_;
v___y_169_ = v___y_155_;
v___y_170_ = v___y_156_;
v___y_171_ = v___y_157_;
v___y_172_ = v___y_158_;
goto v___jp_166_;
}
case 9:
{
lean_object* v_k_581_; 
v_k_581_ = lean_ctor_get(v_c_153_, 5);
lean_inc_ref(v_k_581_);
v_k_167_ = v_k_581_;
v___y_168_ = v___y_154_;
v___y_169_ = v___y_155_;
v___y_170_ = v___y_156_;
v___y_171_ = v___y_157_;
v___y_172_ = v___y_158_;
goto v___jp_166_;
}
default: 
{
lean_object* v___x_582_; lean_object* v___x_583_; 
lean_dec_ref(v_c_153_);
lean_dec(v_w_152_);
v___x_582_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6);
v___x_583_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_582_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
return v___x_583_;
}
}
v___jp_160_:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = lean_box(v___y_161_);
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v___y_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
v___jp_166_:
{
lean_object* v___x_173_; 
v___x_173_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_151_, v_w_152_, v_k_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc(v_a_174_);
lean_dec_ref_known(v___x_173_, 1);
switch(lean_obj_tag(v_c_153_))
{
case 0:
{
lean_object* v_fst_175_; lean_object* v_snd_176_; lean_object* v_decl_177_; lean_object* v_k_178_; size_t v___x_179_; size_t v___x_180_; uint8_t v___x_181_; 
v_fst_175_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_175_);
v_snd_176_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_176_);
lean_dec(v_a_174_);
v_decl_177_ = lean_ctor_get(v_c_153_, 0);
v_k_178_ = lean_ctor_get(v_c_153_, 1);
v___x_179_ = lean_ptr_addr(v_k_178_);
v___x_180_ = lean_ptr_addr(v_fst_175_);
v___x_181_ = lean_usize_dec_eq(v___x_179_, v___x_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_189_; 
lean_inc_ref(v_decl_177_);
v_isSharedCheck_189_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_189_ == 0)
{
lean_object* v_unused_190_; lean_object* v_unused_191_; 
v_unused_190_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_190_);
v_unused_191_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_191_);
v___x_183_ = v_c_153_;
v_isShared_184_ = v_isSharedCheck_189_;
goto v_resetjp_182_;
}
else
{
lean_dec(v_c_153_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_189_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 1, v_fst_175_);
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_decl_177_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v_fst_175_);
v___x_186_ = v_reuseFailAlloc_188_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
uint8_t v___x_187_; 
v___x_187_ = lean_unbox(v_snd_176_);
lean_dec(v_snd_176_);
v___y_161_ = v___x_187_;
v___y_162_ = v___x_186_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_192_; 
lean_dec(v_fst_175_);
v___x_192_ = lean_unbox(v_snd_176_);
lean_dec(v_snd_176_);
v___y_161_ = v___x_192_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 1:
{
lean_object* v_fst_193_; lean_object* v_snd_194_; lean_object* v_decl_195_; lean_object* v_k_196_; size_t v___x_197_; size_t v___x_198_; uint8_t v___x_199_; 
v_fst_193_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_193_);
v_snd_194_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_194_);
lean_dec(v_a_174_);
v_decl_195_ = lean_ctor_get(v_c_153_, 0);
v_k_196_ = lean_ctor_get(v_c_153_, 1);
v___x_197_ = lean_ptr_addr(v_k_196_);
v___x_198_ = lean_ptr_addr(v_fst_193_);
v___x_199_ = lean_usize_dec_eq(v___x_197_, v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_207_; 
lean_inc_ref(v_decl_195_);
v_isSharedCheck_207_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_207_ == 0)
{
lean_object* v_unused_208_; lean_object* v_unused_209_; 
v_unused_208_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_208_);
v_unused_209_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_209_);
v___x_201_ = v_c_153_;
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
else
{
lean_dec(v_c_153_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v_fst_193_);
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_decl_195_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_fst_193_);
v___x_204_ = v_reuseFailAlloc_206_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
uint8_t v___x_205_; 
v___x_205_ = lean_unbox(v_snd_194_);
lean_dec(v_snd_194_);
v___y_161_ = v___x_205_;
v___y_162_ = v___x_204_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_210_; 
lean_dec(v_fst_193_);
v___x_210_ = lean_unbox(v_snd_194_);
lean_dec(v_snd_194_);
v___y_161_ = v___x_210_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 2:
{
lean_object* v_fst_211_; lean_object* v_snd_212_; lean_object* v_decl_213_; lean_object* v_k_214_; size_t v___x_215_; size_t v___x_216_; uint8_t v___x_217_; 
v_fst_211_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_211_);
v_snd_212_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_212_);
lean_dec(v_a_174_);
v_decl_213_ = lean_ctor_get(v_c_153_, 0);
v_k_214_ = lean_ctor_get(v_c_153_, 1);
v___x_215_ = lean_ptr_addr(v_k_214_);
v___x_216_ = lean_ptr_addr(v_fst_211_);
v___x_217_ = lean_usize_dec_eq(v___x_215_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_225_; 
lean_inc_ref(v_decl_213_);
v_isSharedCheck_225_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_225_ == 0)
{
lean_object* v_unused_226_; lean_object* v_unused_227_; 
v_unused_226_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_227_);
v___x_219_ = v_c_153_;
v_isShared_220_ = v_isSharedCheck_225_;
goto v_resetjp_218_;
}
else
{
lean_dec(v_c_153_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_225_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v_fst_211_);
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_decl_213_);
lean_ctor_set(v_reuseFailAlloc_224_, 1, v_fst_211_);
v___x_222_ = v_reuseFailAlloc_224_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
uint8_t v___x_223_; 
v___x_223_ = lean_unbox(v_snd_212_);
lean_dec(v_snd_212_);
v___y_161_ = v___x_223_;
v___y_162_ = v___x_222_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_228_; 
lean_dec(v_fst_211_);
v___x_228_ = lean_unbox(v_snd_212_);
lean_dec(v_snd_212_);
v___y_161_ = v___x_228_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 7:
{
lean_object* v_fst_229_; lean_object* v_snd_230_; lean_object* v_fvarId_231_; lean_object* v_i_232_; lean_object* v_y_233_; lean_object* v_k_234_; size_t v___x_235_; size_t v___x_236_; uint8_t v___x_237_; 
v_fst_229_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_229_);
v_snd_230_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_230_);
lean_dec(v_a_174_);
v_fvarId_231_ = lean_ctor_get(v_c_153_, 0);
v_i_232_ = lean_ctor_get(v_c_153_, 1);
v_y_233_ = lean_ctor_get(v_c_153_, 2);
v_k_234_ = lean_ctor_get(v_c_153_, 3);
v___x_235_ = lean_ptr_addr(v_k_234_);
v___x_236_ = lean_ptr_addr(v_fst_229_);
v___x_237_ = lean_usize_dec_eq(v___x_235_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_245_; 
lean_inc(v_y_233_);
lean_inc(v_i_232_);
lean_inc(v_fvarId_231_);
v_isSharedCheck_245_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_245_ == 0)
{
lean_object* v_unused_246_; lean_object* v_unused_247_; lean_object* v_unused_248_; lean_object* v_unused_249_; 
v_unused_246_ = lean_ctor_get(v_c_153_, 3);
lean_dec(v_unused_246_);
v_unused_247_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_247_);
v_unused_248_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_248_);
v_unused_249_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_249_);
v___x_239_ = v_c_153_;
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
else
{
lean_dec(v_c_153_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 3, v_fst_229_);
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_fvarId_231_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_i_232_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v_y_233_);
lean_ctor_set(v_reuseFailAlloc_244_, 3, v_fst_229_);
v___x_242_ = v_reuseFailAlloc_244_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
uint8_t v___x_243_; 
v___x_243_ = lean_unbox(v_snd_230_);
lean_dec(v_snd_230_);
v___y_161_ = v___x_243_;
v___y_162_ = v___x_242_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_250_; 
lean_dec(v_fst_229_);
v___x_250_ = lean_unbox(v_snd_230_);
lean_dec(v_snd_230_);
v___y_161_ = v___x_250_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 9:
{
lean_object* v_fst_251_; lean_object* v_snd_252_; lean_object* v_fvarId_253_; lean_object* v_i_254_; lean_object* v_offset_255_; lean_object* v_y_256_; lean_object* v_ty_257_; lean_object* v_k_258_; size_t v___x_259_; size_t v___x_260_; uint8_t v___x_261_; 
v_fst_251_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_251_);
v_snd_252_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_252_);
lean_dec(v_a_174_);
v_fvarId_253_ = lean_ctor_get(v_c_153_, 0);
v_i_254_ = lean_ctor_get(v_c_153_, 1);
v_offset_255_ = lean_ctor_get(v_c_153_, 2);
v_y_256_ = lean_ctor_get(v_c_153_, 3);
v_ty_257_ = lean_ctor_get(v_c_153_, 4);
v_k_258_ = lean_ctor_get(v_c_153_, 5);
v___x_259_ = lean_ptr_addr(v_k_258_);
v___x_260_ = lean_ptr_addr(v_fst_251_);
v___x_261_ = lean_usize_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_269_; 
lean_inc_ref(v_ty_257_);
lean_inc(v_y_256_);
lean_inc(v_offset_255_);
lean_inc(v_i_254_);
lean_inc(v_fvarId_253_);
v_isSharedCheck_269_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_269_ == 0)
{
lean_object* v_unused_270_; lean_object* v_unused_271_; lean_object* v_unused_272_; lean_object* v_unused_273_; lean_object* v_unused_274_; lean_object* v_unused_275_; 
v_unused_270_ = lean_ctor_get(v_c_153_, 5);
lean_dec(v_unused_270_);
v_unused_271_ = lean_ctor_get(v_c_153_, 4);
lean_dec(v_unused_271_);
v_unused_272_ = lean_ctor_get(v_c_153_, 3);
lean_dec(v_unused_272_);
v_unused_273_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_273_);
v_unused_274_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_274_);
v_unused_275_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_275_);
v___x_263_ = v_c_153_;
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
else
{
lean_dec(v_c_153_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 5, v_fst_251_);
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_fvarId_253_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_i_254_);
lean_ctor_set(v_reuseFailAlloc_268_, 2, v_offset_255_);
lean_ctor_set(v_reuseFailAlloc_268_, 3, v_y_256_);
lean_ctor_set(v_reuseFailAlloc_268_, 4, v_ty_257_);
lean_ctor_set(v_reuseFailAlloc_268_, 5, v_fst_251_);
v___x_266_ = v_reuseFailAlloc_268_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
uint8_t v___x_267_; 
v___x_267_ = lean_unbox(v_snd_252_);
lean_dec(v_snd_252_);
v___y_161_ = v___x_267_;
v___y_162_ = v___x_266_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_276_; 
lean_dec(v_fst_251_);
v___x_276_ = lean_unbox(v_snd_252_);
lean_dec(v_snd_252_);
v___y_161_ = v___x_276_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 8:
{
lean_object* v_fst_277_; lean_object* v_snd_278_; lean_object* v_fvarId_279_; lean_object* v_i_280_; lean_object* v_y_281_; lean_object* v_k_282_; size_t v___x_283_; size_t v___x_284_; uint8_t v___x_285_; 
v_fst_277_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_277_);
v_snd_278_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_278_);
lean_dec(v_a_174_);
v_fvarId_279_ = lean_ctor_get(v_c_153_, 0);
v_i_280_ = lean_ctor_get(v_c_153_, 1);
v_y_281_ = lean_ctor_get(v_c_153_, 2);
v_k_282_ = lean_ctor_get(v_c_153_, 3);
v___x_283_ = lean_ptr_addr(v_k_282_);
v___x_284_ = lean_ptr_addr(v_fst_277_);
v___x_285_ = lean_usize_dec_eq(v___x_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_293_; 
lean_inc(v_y_281_);
lean_inc(v_i_280_);
lean_inc(v_fvarId_279_);
v_isSharedCheck_293_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; lean_object* v_unused_295_; lean_object* v_unused_296_; lean_object* v_unused_297_; 
v_unused_294_ = lean_ctor_get(v_c_153_, 3);
lean_dec(v_unused_294_);
v_unused_295_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_297_);
v___x_287_ = v_c_153_;
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
else
{
lean_dec(v_c_153_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 3, v_fst_277_);
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_fvarId_279_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_i_280_);
lean_ctor_set(v_reuseFailAlloc_292_, 2, v_y_281_);
lean_ctor_set(v_reuseFailAlloc_292_, 3, v_fst_277_);
v___x_290_ = v_reuseFailAlloc_292_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
uint8_t v___x_291_; 
v___x_291_ = lean_unbox(v_snd_278_);
lean_dec(v_snd_278_);
v___y_161_ = v___x_291_;
v___y_162_ = v___x_290_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_298_; 
lean_dec(v_fst_277_);
v___x_298_ = lean_unbox(v_snd_278_);
lean_dec(v_snd_278_);
v___y_161_ = v___x_298_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 10:
{
lean_object* v_fst_299_; lean_object* v_snd_300_; lean_object* v_fvarId_301_; lean_object* v_cidx_302_; lean_object* v_k_303_; size_t v___x_304_; size_t v___x_305_; uint8_t v___x_306_; 
v_fst_299_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_299_);
v_snd_300_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_300_);
lean_dec(v_a_174_);
v_fvarId_301_ = lean_ctor_get(v_c_153_, 0);
v_cidx_302_ = lean_ctor_get(v_c_153_, 1);
v_k_303_ = lean_ctor_get(v_c_153_, 2);
v___x_304_ = lean_ptr_addr(v_k_303_);
v___x_305_ = lean_ptr_addr(v_fst_299_);
v___x_306_ = lean_usize_dec_eq(v___x_304_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_314_; 
lean_inc(v_cidx_302_);
lean_inc(v_fvarId_301_);
v_isSharedCheck_314_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; lean_object* v_unused_316_; lean_object* v_unused_317_; 
v_unused_315_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_317_);
v___x_308_ = v_c_153_;
v_isShared_309_ = v_isSharedCheck_314_;
goto v_resetjp_307_;
}
else
{
lean_dec(v_c_153_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_314_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 2, v_fst_299_);
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_fvarId_301_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_cidx_302_);
lean_ctor_set(v_reuseFailAlloc_313_, 2, v_fst_299_);
v___x_311_ = v_reuseFailAlloc_313_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
uint8_t v___x_312_; 
v___x_312_ = lean_unbox(v_snd_300_);
lean_dec(v_snd_300_);
v___y_161_ = v___x_312_;
v___y_162_ = v___x_311_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_318_; 
lean_dec(v_fst_299_);
v___x_318_ = lean_unbox(v_snd_300_);
lean_dec(v_snd_300_);
v___y_161_ = v___x_318_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 11:
{
lean_object* v_fst_319_; lean_object* v_snd_320_; lean_object* v_fvarId_321_; lean_object* v_n_322_; uint8_t v_check_323_; uint8_t v_persistent_324_; lean_object* v_k_325_; size_t v___x_326_; size_t v___x_327_; uint8_t v___x_328_; 
v_fst_319_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_319_);
v_snd_320_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_320_);
lean_dec(v_a_174_);
v_fvarId_321_ = lean_ctor_get(v_c_153_, 0);
v_n_322_ = lean_ctor_get(v_c_153_, 1);
v_check_323_ = lean_ctor_get_uint8(v_c_153_, sizeof(void*)*3);
v_persistent_324_ = lean_ctor_get_uint8(v_c_153_, sizeof(void*)*3 + 1);
v_k_325_ = lean_ctor_get(v_c_153_, 2);
v___x_326_ = lean_ptr_addr(v_k_325_);
v___x_327_ = lean_ptr_addr(v_fst_319_);
v___x_328_ = lean_usize_dec_eq(v___x_326_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_336_; 
lean_inc(v_n_322_);
lean_inc(v_fvarId_321_);
v_isSharedCheck_336_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_336_ == 0)
{
lean_object* v_unused_337_; lean_object* v_unused_338_; lean_object* v_unused_339_; 
v_unused_337_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_337_);
v_unused_338_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_338_);
v_unused_339_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_339_);
v___x_330_ = v_c_153_;
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
else
{
lean_dec(v_c_153_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 2, v_fst_319_);
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_fvarId_321_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_n_322_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v_fst_319_);
lean_ctor_set_uint8(v_reuseFailAlloc_335_, sizeof(void*)*3, v_check_323_);
lean_ctor_set_uint8(v_reuseFailAlloc_335_, sizeof(void*)*3 + 1, v_persistent_324_);
v___x_333_ = v_reuseFailAlloc_335_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
uint8_t v___x_334_; 
v___x_334_ = lean_unbox(v_snd_320_);
lean_dec(v_snd_320_);
v___y_161_ = v___x_334_;
v___y_162_ = v___x_333_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_340_; 
lean_dec(v_fst_319_);
v___x_340_ = lean_unbox(v_snd_320_);
lean_dec(v_snd_320_);
v___y_161_ = v___x_340_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 12:
{
lean_object* v_fst_341_; lean_object* v_snd_342_; lean_object* v_fvarId_343_; lean_object* v_n_344_; uint8_t v_check_345_; uint8_t v_persistent_346_; lean_object* v_objs_x3f_347_; lean_object* v_k_348_; size_t v___x_349_; size_t v___x_350_; uint8_t v___x_351_; 
v_fst_341_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_341_);
v_snd_342_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_342_);
lean_dec(v_a_174_);
v_fvarId_343_ = lean_ctor_get(v_c_153_, 0);
v_n_344_ = lean_ctor_get(v_c_153_, 1);
v_check_345_ = lean_ctor_get_uint8(v_c_153_, sizeof(void*)*4);
v_persistent_346_ = lean_ctor_get_uint8(v_c_153_, sizeof(void*)*4 + 1);
v_objs_x3f_347_ = lean_ctor_get(v_c_153_, 2);
v_k_348_ = lean_ctor_get(v_c_153_, 3);
v___x_349_ = lean_ptr_addr(v_k_348_);
v___x_350_ = lean_ptr_addr(v_fst_341_);
v___x_351_ = lean_usize_dec_eq(v___x_349_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_359_; 
lean_inc(v_objs_x3f_347_);
lean_inc(v_n_344_);
lean_inc(v_fvarId_343_);
v_isSharedCheck_359_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_359_ == 0)
{
lean_object* v_unused_360_; lean_object* v_unused_361_; lean_object* v_unused_362_; lean_object* v_unused_363_; 
v_unused_360_ = lean_ctor_get(v_c_153_, 3);
lean_dec(v_unused_360_);
v_unused_361_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_361_);
v_unused_362_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_362_);
v_unused_363_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_363_);
v___x_353_ = v_c_153_;
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
else
{
lean_dec(v_c_153_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 3, v_fst_341_);
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_fvarId_343_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_n_344_);
lean_ctor_set(v_reuseFailAlloc_358_, 2, v_objs_x3f_347_);
lean_ctor_set(v_reuseFailAlloc_358_, 3, v_fst_341_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*4, v_check_345_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*4 + 1, v_persistent_346_);
v___x_356_ = v_reuseFailAlloc_358_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
uint8_t v___x_357_; 
v___x_357_ = lean_unbox(v_snd_342_);
lean_dec(v_snd_342_);
v___y_161_ = v___x_357_;
v___y_162_ = v___x_356_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_364_; 
lean_dec(v_fst_341_);
v___x_364_ = lean_unbox(v_snd_342_);
lean_dec(v_snd_342_);
v___y_161_ = v___x_364_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 13:
{
lean_object* v_fst_365_; lean_object* v_snd_366_; lean_object* v_fvarId_367_; lean_object* v_k_368_; size_t v___x_369_; size_t v___x_370_; uint8_t v___x_371_; 
v_fst_365_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_365_);
v_snd_366_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_366_);
lean_dec(v_a_174_);
v_fvarId_367_ = lean_ctor_get(v_c_153_, 0);
v_k_368_ = lean_ctor_get(v_c_153_, 1);
v___x_369_ = lean_ptr_addr(v_k_368_);
v___x_370_ = lean_ptr_addr(v_fst_365_);
v___x_371_ = lean_usize_dec_eq(v___x_369_, v___x_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_379_; 
lean_inc(v_fvarId_367_);
v_isSharedCheck_379_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; lean_object* v_unused_381_; 
v_unused_380_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_380_);
v_unused_381_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_381_);
v___x_373_ = v_c_153_;
v_isShared_374_ = v_isSharedCheck_379_;
goto v_resetjp_372_;
}
else
{
lean_dec(v_c_153_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_379_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v_fst_365_);
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_fvarId_367_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_fst_365_);
v___x_376_ = v_reuseFailAlloc_378_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
uint8_t v___x_377_; 
v___x_377_ = lean_unbox(v_snd_366_);
lean_dec(v_snd_366_);
v___y_161_ = v___x_377_;
v___y_162_ = v___x_376_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_382_; 
lean_dec(v_fst_365_);
v___x_382_ = lean_unbox(v_snd_366_);
lean_dec(v_snd_366_);
v___y_161_ = v___x_382_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
default: 
{
lean_object* v_snd_383_; lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; 
lean_dec_ref(v_c_153_);
v_snd_383_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_383_);
lean_dec(v_a_174_);
v___x_384_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3);
v___x_385_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(v___x_384_);
v___x_386_ = lean_unbox(v_snd_383_);
lean_dec(v_snd_383_);
v___y_161_ = v___x_386_;
v___y_162_ = v___x_385_;
goto v___jp_160_;
}
}
}
else
{
lean_dec_ref(v_c_153_);
return v___x_173_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(lean_object* v_info_584_, lean_object* v_w_585_, size_t v_sz_586_, size_t v_i_587_, lean_object* v_bs_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
uint8_t v___x_595_; 
v___x_595_ = lean_usize_dec_lt(v_i_587_, v_sz_586_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; 
lean_dec(v_w_585_);
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v_bs_588_);
return v___x_596_;
}
else
{
lean_object* v_v_597_; lean_object* v___x_598_; lean_object* v_bs_x27_599_; lean_object* v___y_601_; 
v_v_597_ = lean_array_uget(v_bs_588_, v_i_587_);
v___x_598_ = lean_unsigned_to_nat(0u);
v_bs_x27_599_ = lean_array_uset(v_bs_588_, v_i_587_, v___x_598_);
switch(lean_obj_tag(v_v_597_))
{
case 0:
{
lean_object* v_code_626_; 
v_code_626_ = lean_ctor_get(v_v_597_, 2);
lean_inc_ref(v_code_626_);
v___y_601_ = v_code_626_;
goto v___jp_600_;
}
case 1:
{
lean_object* v_code_627_; 
v_code_627_ = lean_ctor_get(v_v_597_, 1);
lean_inc_ref(v_code_627_);
v___y_601_ = v_code_627_;
goto v___jp_600_;
}
default: 
{
lean_object* v_code_628_; 
v_code_628_ = lean_ctor_get(v_v_597_, 0);
lean_inc_ref(v_code_628_);
v___y_601_ = v_code_628_;
goto v___jp_600_;
}
}
v___jp_600_:
{
lean_object* v___x_602_; 
lean_inc(v_w_585_);
v___x_602_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_584_, v_w_585_, v___y_601_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v_fst_604_; lean_object* v_snd_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_617_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 1);
v_fst_604_ = lean_ctor_get(v_a_603_, 0);
v_snd_605_ = lean_ctor_get(v_a_603_, 1);
v_isSharedCheck_617_ = !lean_is_exclusive(v_a_603_);
if (v_isSharedCheck_617_ == 0)
{
v___x_607_ = v_a_603_;
v_isShared_608_ = v_isSharedCheck_617_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_snd_605_);
lean_inc(v_fst_604_);
lean_dec(v_a_603_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_617_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v___x_611_; 
v___x_609_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_597_, v_fst_604_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_609_);
v___x_611_ = v___x_607_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_609_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v_snd_605_);
v___x_611_ = v_reuseFailAlloc_616_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
size_t v___x_612_; size_t v___x_613_; lean_object* v___x_614_; 
v___x_612_ = ((size_t)1ULL);
v___x_613_ = lean_usize_add(v_i_587_, v___x_612_);
v___x_614_ = lean_array_uset(v_bs_x27_599_, v_i_587_, v___x_611_);
v_i_587_ = v___x_613_;
v_bs_588_ = v___x_614_;
goto _start;
}
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec_ref(v_bs_x27_599_);
lean_dec(v_v_597_);
lean_dec(v_w_585_);
v_a_618_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_602_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_602_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed(lean_object* v_info_629_, lean_object* v_w_630_, lean_object* v_sz_631_, lean_object* v_i_632_, lean_object* v_bs_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
size_t v_sz_boxed_640_; size_t v_i_boxed_641_; lean_object* v_res_642_; 
v_sz_boxed_640_ = lean_unbox_usize(v_sz_631_);
lean_dec(v_sz_631_);
v_i_boxed_641_ = lean_unbox_usize(v_i_632_);
lean_dec(v_i_632_);
v_res_642_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(v_info_629_, v_w_630_, v_sz_boxed_640_, v_i_boxed_641_, v_bs_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec_ref(v_info_629_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed(lean_object* v_info_643_, lean_object* v_w_644_, lean_object* v_c_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_643_, v_w_644_, v_c_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec_ref(v___y_646_);
lean_dec_ref(v_info_643_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(lean_object* v___y_653_){
_start:
{
lean_object* v___x_655_; lean_object* v_ngen_656_; lean_object* v_namePrefix_657_; lean_object* v_idx_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_687_; 
v___x_655_ = lean_st_ref_get(v___y_653_);
v_ngen_656_ = lean_ctor_get(v___x_655_, 2);
lean_inc_ref(v_ngen_656_);
lean_dec(v___x_655_);
v_namePrefix_657_ = lean_ctor_get(v_ngen_656_, 0);
v_idx_658_ = lean_ctor_get(v_ngen_656_, 1);
v_isSharedCheck_687_ = !lean_is_exclusive(v_ngen_656_);
if (v_isSharedCheck_687_ == 0)
{
v___x_660_ = v_ngen_656_;
v_isShared_661_ = v_isSharedCheck_687_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_idx_658_);
lean_inc(v_namePrefix_657_);
lean_dec(v_ngen_656_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_687_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v_r_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_666_; 
lean_inc(v_idx_658_);
lean_inc(v_namePrefix_657_);
v_r_662_ = l_Lean_Name_num___override(v_namePrefix_657_, v_idx_658_);
v___x_663_ = lean_unsigned_to_nat(1u);
v___x_664_ = lean_nat_add(v_idx_658_, v___x_663_);
lean_dec(v_idx_658_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v___x_664_);
v___x_666_ = v___x_660_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_namePrefix_657_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v___x_664_);
v___x_666_ = v_reuseFailAlloc_686_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_667_; lean_object* v_env_668_; lean_object* v_nextMacroScope_669_; lean_object* v_auxDeclNGen_670_; lean_object* v_traceState_671_; lean_object* v_cache_672_; lean_object* v_messages_673_; lean_object* v_infoState_674_; lean_object* v_snapshotTasks_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_684_; 
v___x_667_ = lean_st_ref_take(v___y_653_);
v_env_668_ = lean_ctor_get(v___x_667_, 0);
v_nextMacroScope_669_ = lean_ctor_get(v___x_667_, 1);
v_auxDeclNGen_670_ = lean_ctor_get(v___x_667_, 3);
v_traceState_671_ = lean_ctor_get(v___x_667_, 4);
v_cache_672_ = lean_ctor_get(v___x_667_, 5);
v_messages_673_ = lean_ctor_get(v___x_667_, 6);
v_infoState_674_ = lean_ctor_get(v___x_667_, 7);
v_snapshotTasks_675_ = lean_ctor_get(v___x_667_, 8);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_684_ == 0)
{
lean_object* v_unused_685_; 
v_unused_685_ = lean_ctor_get(v___x_667_, 2);
lean_dec(v_unused_685_);
v___x_677_ = v___x_667_;
v_isShared_678_ = v_isSharedCheck_684_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_snapshotTasks_675_);
lean_inc(v_infoState_674_);
lean_inc(v_messages_673_);
lean_inc(v_cache_672_);
lean_inc(v_traceState_671_);
lean_inc(v_auxDeclNGen_670_);
lean_inc(v_nextMacroScope_669_);
lean_inc(v_env_668_);
lean_dec(v___x_667_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_684_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 2, v___x_666_);
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_env_668_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_nextMacroScope_669_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v_auxDeclNGen_670_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v_traceState_671_);
lean_ctor_set(v_reuseFailAlloc_683_, 5, v_cache_672_);
lean_ctor_set(v_reuseFailAlloc_683_, 6, v_messages_673_);
lean_ctor_set(v_reuseFailAlloc_683_, 7, v_infoState_674_);
lean_ctor_set(v_reuseFailAlloc_683_, 8, v_snapshotTasks_675_);
v___x_680_ = v_reuseFailAlloc_683_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_st_ref_put(v___y_653_, v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v_r_662_);
return v___x_682_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg___boxed(lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_688_);
lean_dec(v___y_688_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v___x_697_; lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v___x_697_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_695_);
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0___boxed(lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec_ref(v___y_706_);
return v_res_712_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_box(0);
v___x_720_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3));
v___x_721_ = l_Lean_Expr_const___override(v___x_720_, v___x_719_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(lean_object* v_x_722_, lean_object* v_info_723_, lean_object* v_c_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_733_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc_n(v_a_732_, 2);
lean_dec_ref_known(v___x_731_, 1);
v___x_733_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_723_, v_a_732_, v_c_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_788_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_788_ == 0)
{
v___x_736_ = v___x_733_;
v_isShared_737_ = v_isSharedCheck_788_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_788_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v_snd_738_; uint8_t v___x_739_; 
v_snd_738_ = lean_ctor_get(v_a_734_, 1);
v___x_739_ = lean_unbox(v_snd_738_);
if (v___x_739_ == 0)
{
lean_object* v_fst_740_; lean_object* v___x_742_; 
lean_dec(v_a_732_);
lean_dec(v_x_722_);
v_fst_740_ = lean_ctor_get(v_a_734_, 0);
lean_inc(v_fst_740_);
lean_dec(v_a_734_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v_fst_740_);
v___x_742_ = v___x_736_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_fst_740_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
else
{
lean_object* v_fst_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_786_; 
lean_del_object(v___x_736_);
v_fst_744_ = lean_ctor_get(v_a_734_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v_a_734_);
if (v_isSharedCheck_786_ == 0)
{
lean_object* v_unused_787_; 
v_unused_787_ = lean_ctor_get(v_a_734_, 1);
lean_dec(v_unused_787_);
v___x_746_ = v_a_734_;
v_isShared_747_ = v_isSharedCheck_786_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_fst_744_);
lean_dec(v_a_734_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_786_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1));
v___x_749_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_748_, v___y_727_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_777_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_777_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_777_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_777_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v_size_754_; uint8_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_758_; 
v_size_754_ = lean_ctor_get(v_info_723_, 2);
v___x_755_ = 1;
v___x_756_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4);
lean_inc(v_size_754_);
if (v_isShared_747_ == 0)
{
lean_ctor_set_tag(v___x_746_, 11);
lean_ctor_set(v___x_746_, 1, v_x_722_);
lean_ctor_set(v___x_746_, 0, v_size_754_);
v___x_758_ = v___x_746_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_size_754_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_x_722_);
v___x_758_ = v_reuseFailAlloc_776_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v_lctx_761_; lean_object* v_nextIdx_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_775_; 
v___x_759_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_759_, 0, v_a_732_);
lean_ctor_set(v___x_759_, 1, v_a_750_);
lean_ctor_set(v___x_759_, 2, v___x_756_);
lean_ctor_set(v___x_759_, 3, v___x_758_);
v___x_760_ = lean_st_ref_take(v___y_727_);
v_lctx_761_ = lean_ctor_get(v___x_760_, 0);
v_nextIdx_762_ = lean_ctor_get(v___x_760_, 1);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_775_ == 0)
{
v___x_764_ = v___x_760_;
v_isShared_765_ = v_isSharedCheck_775_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_nextIdx_762_);
lean_inc(v_lctx_761_);
lean_dec(v___x_760_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_775_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_766_; lean_object* v___x_768_; 
lean_inc_ref(v___x_759_);
v___x_766_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_755_, v_lctx_761_, v___x_759_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 0, v___x_766_);
v___x_768_ = v___x_764_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_nextIdx_762_);
v___x_768_ = v_reuseFailAlloc_774_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_772_; 
v___x_769_ = lean_st_ref_put(v___y_727_, v___x_768_);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v___x_759_);
lean_ctor_set(v___x_770_, 1, v_fst_744_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_770_);
v___x_772_ = v___x_752_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_del_object(v___x_746_);
lean_dec(v_fst_744_);
lean_dec(v_a_732_);
lean_dec(v_x_722_);
v_a_778_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_749_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_749_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec(v_a_732_);
lean_dec(v_x_722_);
v_a_789_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_733_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_733_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
lean_dec_ref(v_c_724_);
lean_dec(v_x_722_);
v_a_797_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_731_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_731_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_797_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___boxed(lean_object* v_x_805_, lean_object* v_info_806_, lean_object* v_c_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_805_, v_info_806_, v_c_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec_ref(v_info_806_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_819_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___boxed(lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec_ref(v___y_822_);
return v_res_828_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(lean_object* v_k_829_, lean_object* v_t_830_){
_start:
{
if (lean_obj_tag(v_t_830_) == 0)
{
lean_object* v_k_831_; lean_object* v_l_832_; lean_object* v_r_833_; uint8_t v___x_834_; 
v_k_831_ = lean_ctor_get(v_t_830_, 1);
v_l_832_ = lean_ctor_get(v_t_830_, 3);
v_r_833_ = lean_ctor_get(v_t_830_, 4);
v___x_834_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_829_, v_k_831_);
switch(v___x_834_)
{
case 0:
{
v_t_830_ = v_l_832_;
goto _start;
}
case 1:
{
uint8_t v___x_836_; 
v___x_836_ = 1;
return v___x_836_;
}
default: 
{
v_t_830_ = v_r_833_;
goto _start;
}
}
}
else
{
uint8_t v___x_838_; 
v___x_838_ = 0;
return v___x_838_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg___boxed(lean_object* v_k_839_, lean_object* v_t_840_){
_start:
{
uint8_t v_res_841_; lean_object* v_r_842_; 
v_res_841_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_k_839_, v_t_840_);
lean_dec(v_t_840_);
lean_dec(v_k_839_);
v_r_842_ = lean_box(v_res_841_);
return v_r_842_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(lean_object* v_k_843_, lean_object* v_v_844_, lean_object* v_t_845_){
_start:
{
if (lean_obj_tag(v_t_845_) == 0)
{
lean_object* v_size_846_; lean_object* v_k_847_; lean_object* v_v_848_; lean_object* v_l_849_; lean_object* v_r_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_1130_; 
v_size_846_ = lean_ctor_get(v_t_845_, 0);
v_k_847_ = lean_ctor_get(v_t_845_, 1);
v_v_848_ = lean_ctor_get(v_t_845_, 2);
v_l_849_ = lean_ctor_get(v_t_845_, 3);
v_r_850_ = lean_ctor_get(v_t_845_, 4);
v_isSharedCheck_1130_ = !lean_is_exclusive(v_t_845_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_852_ = v_t_845_;
v_isShared_853_ = v_isSharedCheck_1130_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_r_850_);
lean_inc(v_l_849_);
lean_inc(v_v_848_);
lean_inc(v_k_847_);
lean_inc(v_size_846_);
lean_dec(v_t_845_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_1130_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
uint8_t v___x_854_; 
v___x_854_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_843_, v_k_847_);
switch(v___x_854_)
{
case 0:
{
lean_object* v_impl_855_; lean_object* v___x_856_; 
lean_dec(v_size_846_);
v_impl_855_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_k_843_, v_v_844_, v_l_849_);
v___x_856_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_850_) == 0)
{
lean_object* v_size_857_; lean_object* v_size_858_; lean_object* v_k_859_; lean_object* v_v_860_; lean_object* v_l_861_; lean_object* v_r_862_; lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; 
v_size_857_ = lean_ctor_get(v_r_850_, 0);
v_size_858_ = lean_ctor_get(v_impl_855_, 0);
lean_inc(v_size_858_);
v_k_859_ = lean_ctor_get(v_impl_855_, 1);
lean_inc(v_k_859_);
v_v_860_ = lean_ctor_get(v_impl_855_, 2);
lean_inc(v_v_860_);
v_l_861_ = lean_ctor_get(v_impl_855_, 3);
lean_inc(v_l_861_);
v_r_862_ = lean_ctor_get(v_impl_855_, 4);
lean_inc(v_r_862_);
v___x_863_ = lean_unsigned_to_nat(3u);
v___x_864_ = lean_nat_mul(v___x_863_, v_size_857_);
v___x_865_ = lean_nat_dec_lt(v___x_864_, v_size_858_);
lean_dec(v___x_864_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_869_; 
lean_dec(v_r_862_);
lean_dec(v_l_861_);
lean_dec(v_v_860_);
lean_dec(v_k_859_);
v___x_866_ = lean_nat_add(v___x_856_, v_size_858_);
lean_dec(v_size_858_);
v___x_867_ = lean_nat_add(v___x_866_, v_size_857_);
lean_dec(v___x_866_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 3, v_impl_855_);
lean_ctor_set(v___x_852_, 0, v___x_867_);
v___x_869_ = v___x_852_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_870_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_870_, 3, v_impl_855_);
lean_ctor_set(v_reuseFailAlloc_870_, 4, v_r_850_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
else
{
lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_936_; 
v_isSharedCheck_936_ = !lean_is_exclusive(v_impl_855_);
if (v_isSharedCheck_936_ == 0)
{
lean_object* v_unused_937_; lean_object* v_unused_938_; lean_object* v_unused_939_; lean_object* v_unused_940_; lean_object* v_unused_941_; 
v_unused_937_ = lean_ctor_get(v_impl_855_, 4);
lean_dec(v_unused_937_);
v_unused_938_ = lean_ctor_get(v_impl_855_, 3);
lean_dec(v_unused_938_);
v_unused_939_ = lean_ctor_get(v_impl_855_, 2);
lean_dec(v_unused_939_);
v_unused_940_ = lean_ctor_get(v_impl_855_, 1);
lean_dec(v_unused_940_);
v_unused_941_ = lean_ctor_get(v_impl_855_, 0);
lean_dec(v_unused_941_);
v___x_872_ = v_impl_855_;
v_isShared_873_ = v_isSharedCheck_936_;
goto v_resetjp_871_;
}
else
{
lean_dec(v_impl_855_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_936_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v_size_874_; lean_object* v_size_875_; lean_object* v_k_876_; lean_object* v_v_877_; lean_object* v_l_878_; lean_object* v_r_879_; lean_object* v___x_880_; lean_object* v___x_881_; uint8_t v___x_882_; 
v_size_874_ = lean_ctor_get(v_l_861_, 0);
v_size_875_ = lean_ctor_get(v_r_862_, 0);
v_k_876_ = lean_ctor_get(v_r_862_, 1);
v_v_877_ = lean_ctor_get(v_r_862_, 2);
v_l_878_ = lean_ctor_get(v_r_862_, 3);
v_r_879_ = lean_ctor_get(v_r_862_, 4);
v___x_880_ = lean_unsigned_to_nat(2u);
v___x_881_ = lean_nat_mul(v___x_880_, v_size_874_);
v___x_882_ = lean_nat_dec_lt(v_size_875_, v___x_881_);
lean_dec(v___x_881_);
if (v___x_882_ == 0)
{
lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_911_; 
lean_inc(v_r_879_);
lean_inc(v_l_878_);
lean_inc(v_v_877_);
lean_inc(v_k_876_);
v_isSharedCheck_911_ = !lean_is_exclusive(v_r_862_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; lean_object* v_unused_913_; lean_object* v_unused_914_; lean_object* v_unused_915_; lean_object* v_unused_916_; 
v_unused_912_ = lean_ctor_get(v_r_862_, 4);
lean_dec(v_unused_912_);
v_unused_913_ = lean_ctor_get(v_r_862_, 3);
lean_dec(v_unused_913_);
v_unused_914_ = lean_ctor_get(v_r_862_, 2);
lean_dec(v_unused_914_);
v_unused_915_ = lean_ctor_get(v_r_862_, 1);
lean_dec(v_unused_915_);
v_unused_916_ = lean_ctor_get(v_r_862_, 0);
lean_dec(v_unused_916_);
v___x_884_ = v_r_862_;
v_isShared_885_ = v_isSharedCheck_911_;
goto v_resetjp_883_;
}
else
{
lean_dec(v_r_862_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_911_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___x_899_; lean_object* v___y_901_; 
v___x_886_ = lean_nat_add(v___x_856_, v_size_858_);
lean_dec(v_size_858_);
v___x_887_ = lean_nat_add(v___x_886_, v_size_857_);
lean_dec(v___x_886_);
v___x_899_ = lean_nat_add(v___x_856_, v_size_874_);
if (lean_obj_tag(v_l_878_) == 0)
{
lean_object* v_size_909_; 
v_size_909_ = lean_ctor_get(v_l_878_, 0);
lean_inc(v_size_909_);
v___y_901_ = v_size_909_;
goto v___jp_900_;
}
else
{
lean_object* v___x_910_; 
v___x_910_ = lean_unsigned_to_nat(0u);
v___y_901_ = v___x_910_;
goto v___jp_900_;
}
v___jp_888_:
{
lean_object* v___x_892_; lean_object* v___x_894_; 
v___x_892_ = lean_nat_add(v___y_890_, v___y_891_);
lean_dec(v___y_891_);
lean_dec(v___y_890_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 4, v_r_850_);
lean_ctor_set(v___x_884_, 3, v_r_879_);
lean_ctor_set(v___x_884_, 2, v_v_848_);
lean_ctor_set(v___x_884_, 1, v_k_847_);
lean_ctor_set(v___x_884_, 0, v___x_892_);
v___x_894_ = v___x_884_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_892_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_898_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_898_, 3, v_r_879_);
lean_ctor_set(v_reuseFailAlloc_898_, 4, v_r_850_);
v___x_894_ = v_reuseFailAlloc_898_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
lean_object* v___x_896_; 
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 4, v___x_894_);
lean_ctor_set(v___x_872_, 3, v___y_889_);
lean_ctor_set(v___x_872_, 2, v_v_877_);
lean_ctor_set(v___x_872_, 1, v_k_876_);
lean_ctor_set(v___x_872_, 0, v___x_887_);
v___x_896_ = v___x_872_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v_k_876_);
lean_ctor_set(v_reuseFailAlloc_897_, 2, v_v_877_);
lean_ctor_set(v_reuseFailAlloc_897_, 3, v___y_889_);
lean_ctor_set(v_reuseFailAlloc_897_, 4, v___x_894_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
v___jp_900_:
{
lean_object* v___x_902_; lean_object* v___x_904_; 
v___x_902_ = lean_nat_add(v___x_899_, v___y_901_);
lean_dec(v___y_901_);
lean_dec(v___x_899_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v_l_878_);
lean_ctor_set(v___x_852_, 3, v_l_861_);
lean_ctor_set(v___x_852_, 2, v_v_860_);
lean_ctor_set(v___x_852_, 1, v_k_859_);
lean_ctor_set(v___x_852_, 0, v___x_902_);
v___x_904_ = v___x_852_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_k_859_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v_v_860_);
lean_ctor_set(v_reuseFailAlloc_908_, 3, v_l_861_);
lean_ctor_set(v_reuseFailAlloc_908_, 4, v_l_878_);
v___x_904_ = v_reuseFailAlloc_908_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
lean_object* v___x_905_; 
v___x_905_ = lean_nat_add(v___x_856_, v_size_857_);
if (lean_obj_tag(v_r_879_) == 0)
{
lean_object* v_size_906_; 
v_size_906_ = lean_ctor_get(v_r_879_, 0);
lean_inc(v_size_906_);
v___y_889_ = v___x_904_;
v___y_890_ = v___x_905_;
v___y_891_ = v_size_906_;
goto v___jp_888_;
}
else
{
lean_object* v___x_907_; 
v___x_907_ = lean_unsigned_to_nat(0u);
v___y_889_ = v___x_904_;
v___y_890_ = v___x_905_;
v___y_891_ = v___x_907_;
goto v___jp_888_;
}
}
}
}
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_922_; 
lean_del_object(v___x_852_);
v___x_917_ = lean_nat_add(v___x_856_, v_size_858_);
lean_dec(v_size_858_);
v___x_918_ = lean_nat_add(v___x_917_, v_size_857_);
lean_dec(v___x_917_);
v___x_919_ = lean_nat_add(v___x_856_, v_size_857_);
v___x_920_ = lean_nat_add(v___x_919_, v_size_875_);
lean_dec(v___x_919_);
lean_inc_ref(v_r_850_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 4, v_r_850_);
lean_ctor_set(v___x_872_, 3, v_r_862_);
lean_ctor_set(v___x_872_, 2, v_v_848_);
lean_ctor_set(v___x_872_, 1, v_k_847_);
lean_ctor_set(v___x_872_, 0, v___x_920_);
v___x_922_ = v___x_872_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_935_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_935_, 3, v_r_862_);
lean_ctor_set(v_reuseFailAlloc_935_, 4, v_r_850_);
v___x_922_ = v_reuseFailAlloc_935_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
v_isSharedCheck_929_ = !lean_is_exclusive(v_r_850_);
if (v_isSharedCheck_929_ == 0)
{
lean_object* v_unused_930_; lean_object* v_unused_931_; lean_object* v_unused_932_; lean_object* v_unused_933_; lean_object* v_unused_934_; 
v_unused_930_ = lean_ctor_get(v_r_850_, 4);
lean_dec(v_unused_930_);
v_unused_931_ = lean_ctor_get(v_r_850_, 3);
lean_dec(v_unused_931_);
v_unused_932_ = lean_ctor_get(v_r_850_, 2);
lean_dec(v_unused_932_);
v_unused_933_ = lean_ctor_get(v_r_850_, 1);
lean_dec(v_unused_933_);
v_unused_934_ = lean_ctor_get(v_r_850_, 0);
lean_dec(v_unused_934_);
v___x_924_ = v_r_850_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_dec(v_r_850_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 4, v___x_922_);
lean_ctor_set(v___x_924_, 3, v_l_861_);
lean_ctor_set(v___x_924_, 2, v_v_860_);
lean_ctor_set(v___x_924_, 1, v_k_859_);
lean_ctor_set(v___x_924_, 0, v___x_918_);
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_k_859_);
lean_ctor_set(v_reuseFailAlloc_928_, 2, v_v_860_);
lean_ctor_set(v_reuseFailAlloc_928_, 3, v_l_861_);
lean_ctor_set(v_reuseFailAlloc_928_, 4, v___x_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_942_; 
v_l_942_ = lean_ctor_get(v_impl_855_, 3);
lean_inc(v_l_942_);
if (lean_obj_tag(v_l_942_) == 0)
{
lean_object* v_r_943_; lean_object* v_k_944_; lean_object* v_v_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_956_; 
v_r_943_ = lean_ctor_get(v_impl_855_, 4);
v_k_944_ = lean_ctor_get(v_impl_855_, 1);
v_v_945_ = lean_ctor_get(v_impl_855_, 2);
v_isSharedCheck_956_ = !lean_is_exclusive(v_impl_855_);
if (v_isSharedCheck_956_ == 0)
{
lean_object* v_unused_957_; lean_object* v_unused_958_; 
v_unused_957_ = lean_ctor_get(v_impl_855_, 3);
lean_dec(v_unused_957_);
v_unused_958_ = lean_ctor_get(v_impl_855_, 0);
lean_dec(v_unused_958_);
v___x_947_ = v_impl_855_;
v_isShared_948_ = v_isSharedCheck_956_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_r_943_);
lean_inc(v_v_945_);
lean_inc(v_k_944_);
lean_dec(v_impl_855_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_956_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_949_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_943_);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 3, v_r_943_);
lean_ctor_set(v___x_947_, 2, v_v_848_);
lean_ctor_set(v___x_947_, 1, v_k_847_);
lean_ctor_set(v___x_947_, 0, v___x_856_);
v___x_951_ = v___x_947_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_856_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_955_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_955_, 3, v_r_943_);
lean_ctor_set(v_reuseFailAlloc_955_, 4, v_r_943_);
v___x_951_ = v_reuseFailAlloc_955_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_953_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v___x_951_);
lean_ctor_set(v___x_852_, 3, v_l_942_);
lean_ctor_set(v___x_852_, 2, v_v_945_);
lean_ctor_set(v___x_852_, 1, v_k_944_);
lean_ctor_set(v___x_852_, 0, v___x_949_);
v___x_953_ = v___x_852_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_949_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_k_944_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v_v_945_);
lean_ctor_set(v_reuseFailAlloc_954_, 3, v_l_942_);
lean_ctor_set(v_reuseFailAlloc_954_, 4, v___x_951_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
else
{
lean_object* v_r_959_; 
v_r_959_ = lean_ctor_get(v_impl_855_, 4);
lean_inc(v_r_959_);
if (lean_obj_tag(v_r_959_) == 0)
{
lean_object* v_k_960_; lean_object* v_v_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_984_; 
v_k_960_ = lean_ctor_get(v_impl_855_, 1);
v_v_961_ = lean_ctor_get(v_impl_855_, 2);
v_isSharedCheck_984_ = !lean_is_exclusive(v_impl_855_);
if (v_isSharedCheck_984_ == 0)
{
lean_object* v_unused_985_; lean_object* v_unused_986_; lean_object* v_unused_987_; 
v_unused_985_ = lean_ctor_get(v_impl_855_, 4);
lean_dec(v_unused_985_);
v_unused_986_ = lean_ctor_get(v_impl_855_, 3);
lean_dec(v_unused_986_);
v_unused_987_ = lean_ctor_get(v_impl_855_, 0);
lean_dec(v_unused_987_);
v___x_963_ = v_impl_855_;
v_isShared_964_ = v_isSharedCheck_984_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_v_961_);
lean_inc(v_k_960_);
lean_dec(v_impl_855_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_984_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v_k_965_; lean_object* v_v_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_980_; 
v_k_965_ = lean_ctor_get(v_r_959_, 1);
v_v_966_ = lean_ctor_get(v_r_959_, 2);
v_isSharedCheck_980_ = !lean_is_exclusive(v_r_959_);
if (v_isSharedCheck_980_ == 0)
{
lean_object* v_unused_981_; lean_object* v_unused_982_; lean_object* v_unused_983_; 
v_unused_981_ = lean_ctor_get(v_r_959_, 4);
lean_dec(v_unused_981_);
v_unused_982_ = lean_ctor_get(v_r_959_, 3);
lean_dec(v_unused_982_);
v_unused_983_ = lean_ctor_get(v_r_959_, 0);
lean_dec(v_unused_983_);
v___x_968_ = v_r_959_;
v_isShared_969_ = v_isSharedCheck_980_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_v_966_);
lean_inc(v_k_965_);
lean_dec(v_r_959_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_980_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_970_; lean_object* v___x_972_; 
v___x_970_ = lean_unsigned_to_nat(3u);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 4, v_l_942_);
lean_ctor_set(v___x_968_, 3, v_l_942_);
lean_ctor_set(v___x_968_, 2, v_v_961_);
lean_ctor_set(v___x_968_, 1, v_k_960_);
lean_ctor_set(v___x_968_, 0, v___x_856_);
v___x_972_ = v___x_968_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_856_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_k_960_);
lean_ctor_set(v_reuseFailAlloc_979_, 2, v_v_961_);
lean_ctor_set(v_reuseFailAlloc_979_, 3, v_l_942_);
lean_ctor_set(v_reuseFailAlloc_979_, 4, v_l_942_);
v___x_972_ = v_reuseFailAlloc_979_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_object* v___x_974_; 
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 4, v_l_942_);
lean_ctor_set(v___x_963_, 2, v_v_848_);
lean_ctor_set(v___x_963_, 1, v_k_847_);
lean_ctor_set(v___x_963_, 0, v___x_856_);
v___x_974_ = v___x_963_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v___x_856_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_978_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_978_, 3, v_l_942_);
lean_ctor_set(v_reuseFailAlloc_978_, 4, v_l_942_);
v___x_974_ = v_reuseFailAlloc_978_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
lean_object* v___x_976_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v___x_974_);
lean_ctor_set(v___x_852_, 3, v___x_972_);
lean_ctor_set(v___x_852_, 2, v_v_966_);
lean_ctor_set(v___x_852_, 1, v_k_965_);
lean_ctor_set(v___x_852_, 0, v___x_970_);
v___x_976_ = v___x_852_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v_k_965_);
lean_ctor_set(v_reuseFailAlloc_977_, 2, v_v_966_);
lean_ctor_set(v_reuseFailAlloc_977_, 3, v___x_972_);
lean_ctor_set(v_reuseFailAlloc_977_, 4, v___x_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
}
else
{
lean_object* v___x_988_; lean_object* v___x_990_; 
v___x_988_ = lean_unsigned_to_nat(2u);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v_r_959_);
lean_ctor_set(v___x_852_, 3, v_impl_855_);
lean_ctor_set(v___x_852_, 0, v___x_988_);
v___x_990_ = v___x_852_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_991_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_991_, 3, v_impl_855_);
lean_ctor_set(v_reuseFailAlloc_991_, 4, v_r_959_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
}
case 1:
{
lean_object* v___x_993_; 
lean_dec(v_v_848_);
lean_dec(v_k_847_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 2, v_v_844_);
lean_ctor_set(v___x_852_, 1, v_k_843_);
v___x_993_ = v___x_852_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_size_846_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_k_843_);
lean_ctor_set(v_reuseFailAlloc_994_, 2, v_v_844_);
lean_ctor_set(v_reuseFailAlloc_994_, 3, v_l_849_);
lean_ctor_set(v_reuseFailAlloc_994_, 4, v_r_850_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
default: 
{
lean_object* v_impl_995_; lean_object* v___x_996_; 
lean_dec(v_size_846_);
v_impl_995_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_k_843_, v_v_844_, v_r_850_);
v___x_996_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_849_) == 0)
{
lean_object* v_size_997_; lean_object* v_size_998_; lean_object* v_k_999_; lean_object* v_v_1000_; lean_object* v_l_1001_; lean_object* v_r_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v_size_997_ = lean_ctor_get(v_l_849_, 0);
v_size_998_ = lean_ctor_get(v_impl_995_, 0);
lean_inc(v_size_998_);
v_k_999_ = lean_ctor_get(v_impl_995_, 1);
lean_inc(v_k_999_);
v_v_1000_ = lean_ctor_get(v_impl_995_, 2);
lean_inc(v_v_1000_);
v_l_1001_ = lean_ctor_get(v_impl_995_, 3);
lean_inc(v_l_1001_);
v_r_1002_ = lean_ctor_get(v_impl_995_, 4);
lean_inc(v_r_1002_);
v___x_1003_ = lean_unsigned_to_nat(3u);
v___x_1004_ = lean_nat_mul(v___x_1003_, v_size_997_);
v___x_1005_ = lean_nat_dec_lt(v___x_1004_, v_size_998_);
lean_dec(v___x_1004_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1009_; 
lean_dec(v_r_1002_);
lean_dec(v_l_1001_);
lean_dec(v_v_1000_);
lean_dec(v_k_999_);
v___x_1006_ = lean_nat_add(v___x_996_, v_size_997_);
v___x_1007_ = lean_nat_add(v___x_1006_, v_size_998_);
lean_dec(v_size_998_);
lean_dec(v___x_1006_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v_impl_995_);
lean_ctor_set(v___x_852_, 0, v___x_1007_);
v___x_1009_ = v___x_852_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_1010_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_1010_, 3, v_l_849_);
lean_ctor_set(v_reuseFailAlloc_1010_, 4, v_impl_995_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
else
{
lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1074_; 
v_isSharedCheck_1074_ = !lean_is_exclusive(v_impl_995_);
if (v_isSharedCheck_1074_ == 0)
{
lean_object* v_unused_1075_; lean_object* v_unused_1076_; lean_object* v_unused_1077_; lean_object* v_unused_1078_; lean_object* v_unused_1079_; 
v_unused_1075_ = lean_ctor_get(v_impl_995_, 4);
lean_dec(v_unused_1075_);
v_unused_1076_ = lean_ctor_get(v_impl_995_, 3);
lean_dec(v_unused_1076_);
v_unused_1077_ = lean_ctor_get(v_impl_995_, 2);
lean_dec(v_unused_1077_);
v_unused_1078_ = lean_ctor_get(v_impl_995_, 1);
lean_dec(v_unused_1078_);
v_unused_1079_ = lean_ctor_get(v_impl_995_, 0);
lean_dec(v_unused_1079_);
v___x_1012_ = v_impl_995_;
v_isShared_1013_ = v_isSharedCheck_1074_;
goto v_resetjp_1011_;
}
else
{
lean_dec(v_impl_995_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1074_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v_size_1014_; lean_object* v_k_1015_; lean_object* v_v_1016_; lean_object* v_l_1017_; lean_object* v_r_1018_; lean_object* v_size_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; 
v_size_1014_ = lean_ctor_get(v_l_1001_, 0);
v_k_1015_ = lean_ctor_get(v_l_1001_, 1);
v_v_1016_ = lean_ctor_get(v_l_1001_, 2);
v_l_1017_ = lean_ctor_get(v_l_1001_, 3);
v_r_1018_ = lean_ctor_get(v_l_1001_, 4);
v_size_1019_ = lean_ctor_get(v_r_1002_, 0);
v___x_1020_ = lean_unsigned_to_nat(2u);
v___x_1021_ = lean_nat_mul(v___x_1020_, v_size_1019_);
v___x_1022_ = lean_nat_dec_lt(v_size_1014_, v___x_1021_);
lean_dec(v___x_1021_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1050_; 
lean_inc(v_r_1018_);
lean_inc(v_l_1017_);
lean_inc(v_v_1016_);
lean_inc(v_k_1015_);
v_isSharedCheck_1050_ = !lean_is_exclusive(v_l_1001_);
if (v_isSharedCheck_1050_ == 0)
{
lean_object* v_unused_1051_; lean_object* v_unused_1052_; lean_object* v_unused_1053_; lean_object* v_unused_1054_; lean_object* v_unused_1055_; 
v_unused_1051_ = lean_ctor_get(v_l_1001_, 4);
lean_dec(v_unused_1051_);
v_unused_1052_ = lean_ctor_get(v_l_1001_, 3);
lean_dec(v_unused_1052_);
v_unused_1053_ = lean_ctor_get(v_l_1001_, 2);
lean_dec(v_unused_1053_);
v_unused_1054_ = lean_ctor_get(v_l_1001_, 1);
lean_dec(v_unused_1054_);
v_unused_1055_ = lean_ctor_get(v_l_1001_, 0);
lean_dec(v_unused_1055_);
v___x_1024_ = v_l_1001_;
v_isShared_1025_ = v_isSharedCheck_1050_;
goto v_resetjp_1023_;
}
else
{
lean_dec(v_l_1001_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1050_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1040_; 
v___x_1026_ = lean_nat_add(v___x_996_, v_size_997_);
v___x_1027_ = lean_nat_add(v___x_1026_, v_size_998_);
lean_dec(v_size_998_);
if (lean_obj_tag(v_l_1017_) == 0)
{
lean_object* v_size_1048_; 
v_size_1048_ = lean_ctor_get(v_l_1017_, 0);
lean_inc(v_size_1048_);
v___y_1040_ = v_size_1048_;
goto v___jp_1039_;
}
else
{
lean_object* v___x_1049_; 
v___x_1049_ = lean_unsigned_to_nat(0u);
v___y_1040_ = v___x_1049_;
goto v___jp_1039_;
}
v___jp_1028_:
{
lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1032_ = lean_nat_add(v___y_1030_, v___y_1031_);
lean_dec(v___y_1031_);
lean_dec(v___y_1030_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 4, v_r_1002_);
lean_ctor_set(v___x_1024_, 3, v_r_1018_);
lean_ctor_set(v___x_1024_, 2, v_v_1000_);
lean_ctor_set(v___x_1024_, 1, v_k_999_);
lean_ctor_set(v___x_1024_, 0, v___x_1032_);
v___x_1034_ = v___x_1024_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_k_999_);
lean_ctor_set(v_reuseFailAlloc_1038_, 2, v_v_1000_);
lean_ctor_set(v_reuseFailAlloc_1038_, 3, v_r_1018_);
lean_ctor_set(v_reuseFailAlloc_1038_, 4, v_r_1002_);
v___x_1034_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1036_; 
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 4, v___x_1034_);
lean_ctor_set(v___x_1012_, 3, v___y_1029_);
lean_ctor_set(v___x_1012_, 2, v_v_1016_);
lean_ctor_set(v___x_1012_, 1, v_k_1015_);
lean_ctor_set(v___x_1012_, 0, v___x_1027_);
v___x_1036_ = v___x_1012_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1027_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_k_1015_);
lean_ctor_set(v_reuseFailAlloc_1037_, 2, v_v_1016_);
lean_ctor_set(v_reuseFailAlloc_1037_, 3, v___y_1029_);
lean_ctor_set(v_reuseFailAlloc_1037_, 4, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
v___jp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1041_ = lean_nat_add(v___x_1026_, v___y_1040_);
lean_dec(v___y_1040_);
lean_dec(v___x_1026_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v_l_1017_);
lean_ctor_set(v___x_852_, 0, v___x_1041_);
v___x_1043_ = v___x_852_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_1041_);
lean_ctor_set(v_reuseFailAlloc_1047_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_1047_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_1047_, 3, v_l_849_);
lean_ctor_set(v_reuseFailAlloc_1047_, 4, v_l_1017_);
v___x_1043_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1044_; 
v___x_1044_ = lean_nat_add(v___x_996_, v_size_1019_);
if (lean_obj_tag(v_r_1018_) == 0)
{
lean_object* v_size_1045_; 
v_size_1045_ = lean_ctor_get(v_r_1018_, 0);
lean_inc(v_size_1045_);
v___y_1029_ = v___x_1043_;
v___y_1030_ = v___x_1044_;
v___y_1031_ = v_size_1045_;
goto v___jp_1028_;
}
else
{
lean_object* v___x_1046_; 
v___x_1046_ = lean_unsigned_to_nat(0u);
v___y_1029_ = v___x_1043_;
v___y_1030_ = v___x_1044_;
v___y_1031_ = v___x_1046_;
goto v___jp_1028_;
}
}
}
}
}
else
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1060_; 
lean_del_object(v___x_852_);
v___x_1056_ = lean_nat_add(v___x_996_, v_size_997_);
v___x_1057_ = lean_nat_add(v___x_1056_, v_size_998_);
lean_dec(v_size_998_);
v___x_1058_ = lean_nat_add(v___x_1056_, v_size_1014_);
lean_dec(v___x_1056_);
lean_inc_ref(v_l_849_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 4, v_l_1001_);
lean_ctor_set(v___x_1012_, 3, v_l_849_);
lean_ctor_set(v___x_1012_, 2, v_v_848_);
lean_ctor_set(v___x_1012_, 1, v_k_847_);
lean_ctor_set(v___x_1012_, 0, v___x_1058_);
v___x_1060_ = v___x_1012_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_1073_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_1073_, 3, v_l_849_);
lean_ctor_set(v_reuseFailAlloc_1073_, 4, v_l_1001_);
v___x_1060_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
v_isSharedCheck_1067_ = !lean_is_exclusive(v_l_849_);
if (v_isSharedCheck_1067_ == 0)
{
lean_object* v_unused_1068_; lean_object* v_unused_1069_; lean_object* v_unused_1070_; lean_object* v_unused_1071_; lean_object* v_unused_1072_; 
v_unused_1068_ = lean_ctor_get(v_l_849_, 4);
lean_dec(v_unused_1068_);
v_unused_1069_ = lean_ctor_get(v_l_849_, 3);
lean_dec(v_unused_1069_);
v_unused_1070_ = lean_ctor_get(v_l_849_, 2);
lean_dec(v_unused_1070_);
v_unused_1071_ = lean_ctor_get(v_l_849_, 1);
lean_dec(v_unused_1071_);
v_unused_1072_ = lean_ctor_get(v_l_849_, 0);
lean_dec(v_unused_1072_);
v___x_1062_ = v_l_849_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_dec(v_l_849_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
lean_ctor_set(v___x_1062_, 4, v_r_1002_);
lean_ctor_set(v___x_1062_, 3, v___x_1060_);
lean_ctor_set(v___x_1062_, 2, v_v_1000_);
lean_ctor_set(v___x_1062_, 1, v_k_999_);
lean_ctor_set(v___x_1062_, 0, v___x_1057_);
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1057_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v_k_999_);
lean_ctor_set(v_reuseFailAlloc_1066_, 2, v_v_1000_);
lean_ctor_set(v_reuseFailAlloc_1066_, 3, v___x_1060_);
lean_ctor_set(v_reuseFailAlloc_1066_, 4, v_r_1002_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1080_; 
v_l_1080_ = lean_ctor_get(v_impl_995_, 3);
lean_inc(v_l_1080_);
if (lean_obj_tag(v_l_1080_) == 0)
{
lean_object* v_r_1081_; lean_object* v_k_1082_; lean_object* v_v_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1106_; 
v_r_1081_ = lean_ctor_get(v_impl_995_, 4);
v_k_1082_ = lean_ctor_get(v_impl_995_, 1);
v_v_1083_ = lean_ctor_get(v_impl_995_, 2);
v_isSharedCheck_1106_ = !lean_is_exclusive(v_impl_995_);
if (v_isSharedCheck_1106_ == 0)
{
lean_object* v_unused_1107_; lean_object* v_unused_1108_; 
v_unused_1107_ = lean_ctor_get(v_impl_995_, 3);
lean_dec(v_unused_1107_);
v_unused_1108_ = lean_ctor_get(v_impl_995_, 0);
lean_dec(v_unused_1108_);
v___x_1085_ = v_impl_995_;
v_isShared_1086_ = v_isSharedCheck_1106_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_r_1081_);
lean_inc(v_v_1083_);
lean_inc(v_k_1082_);
lean_dec(v_impl_995_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1106_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v_k_1087_; lean_object* v_v_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1102_; 
v_k_1087_ = lean_ctor_get(v_l_1080_, 1);
v_v_1088_ = lean_ctor_get(v_l_1080_, 2);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_l_1080_);
if (v_isSharedCheck_1102_ == 0)
{
lean_object* v_unused_1103_; lean_object* v_unused_1104_; lean_object* v_unused_1105_; 
v_unused_1103_ = lean_ctor_get(v_l_1080_, 4);
lean_dec(v_unused_1103_);
v_unused_1104_ = lean_ctor_get(v_l_1080_, 3);
lean_dec(v_unused_1104_);
v_unused_1105_ = lean_ctor_get(v_l_1080_, 0);
lean_dec(v_unused_1105_);
v___x_1090_ = v_l_1080_;
v_isShared_1091_ = v_isSharedCheck_1102_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_v_1088_);
lean_inc(v_k_1087_);
lean_dec(v_l_1080_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1102_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1092_; lean_object* v___x_1094_; 
v___x_1092_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1081_, 2);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 4, v_r_1081_);
lean_ctor_set(v___x_1090_, 3, v_r_1081_);
lean_ctor_set(v___x_1090_, 2, v_v_848_);
lean_ctor_set(v___x_1090_, 1, v_k_847_);
lean_ctor_set(v___x_1090_, 0, v___x_996_);
v___x_1094_ = v___x_1090_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_996_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_1101_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_1101_, 3, v_r_1081_);
lean_ctor_set(v_reuseFailAlloc_1101_, 4, v_r_1081_);
v___x_1094_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
lean_object* v___x_1096_; 
lean_inc(v_r_1081_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 3, v_r_1081_);
lean_ctor_set(v___x_1085_, 0, v___x_996_);
v___x_1096_ = v___x_1085_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_996_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v_k_1082_);
lean_ctor_set(v_reuseFailAlloc_1100_, 2, v_v_1083_);
lean_ctor_set(v_reuseFailAlloc_1100_, 3, v_r_1081_);
lean_ctor_set(v_reuseFailAlloc_1100_, 4, v_r_1081_);
v___x_1096_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
lean_object* v___x_1098_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v___x_1096_);
lean_ctor_set(v___x_852_, 3, v___x_1094_);
lean_ctor_set(v___x_852_, 2, v_v_1088_);
lean_ctor_set(v___x_852_, 1, v_k_1087_);
lean_ctor_set(v___x_852_, 0, v___x_1092_);
v___x_1098_ = v___x_852_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1092_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v_k_1087_);
lean_ctor_set(v_reuseFailAlloc_1099_, 2, v_v_1088_);
lean_ctor_set(v_reuseFailAlloc_1099_, 3, v___x_1094_);
lean_ctor_set(v_reuseFailAlloc_1099_, 4, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
}
}
else
{
lean_object* v_r_1109_; 
v_r_1109_ = lean_ctor_get(v_impl_995_, 4);
lean_inc(v_r_1109_);
if (lean_obj_tag(v_r_1109_) == 0)
{
lean_object* v_k_1110_; lean_object* v_v_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1122_; 
v_k_1110_ = lean_ctor_get(v_impl_995_, 1);
v_v_1111_ = lean_ctor_get(v_impl_995_, 2);
v_isSharedCheck_1122_ = !lean_is_exclusive(v_impl_995_);
if (v_isSharedCheck_1122_ == 0)
{
lean_object* v_unused_1123_; lean_object* v_unused_1124_; lean_object* v_unused_1125_; 
v_unused_1123_ = lean_ctor_get(v_impl_995_, 4);
lean_dec(v_unused_1123_);
v_unused_1124_ = lean_ctor_get(v_impl_995_, 3);
lean_dec(v_unused_1124_);
v_unused_1125_ = lean_ctor_get(v_impl_995_, 0);
lean_dec(v_unused_1125_);
v___x_1113_ = v_impl_995_;
v_isShared_1114_ = v_isSharedCheck_1122_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_v_1111_);
lean_inc(v_k_1110_);
lean_dec(v_impl_995_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1122_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; lean_object* v___x_1117_; 
v___x_1115_ = lean_unsigned_to_nat(3u);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v_l_1080_);
lean_ctor_set(v___x_1113_, 2, v_v_848_);
lean_ctor_set(v___x_1113_, 1, v_k_847_);
lean_ctor_set(v___x_1113_, 0, v___x_996_);
v___x_1117_ = v___x_1113_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v___x_996_);
lean_ctor_set(v_reuseFailAlloc_1121_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_1121_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_1121_, 3, v_l_1080_);
lean_ctor_set(v_reuseFailAlloc_1121_, 4, v_l_1080_);
v___x_1117_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1119_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v_r_1109_);
lean_ctor_set(v___x_852_, 3, v___x_1117_);
lean_ctor_set(v___x_852_, 2, v_v_1111_);
lean_ctor_set(v___x_852_, 1, v_k_1110_);
lean_ctor_set(v___x_852_, 0, v___x_1115_);
v___x_1119_ = v___x_852_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1115_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v_k_1110_);
lean_ctor_set(v_reuseFailAlloc_1120_, 2, v_v_1111_);
lean_ctor_set(v_reuseFailAlloc_1120_, 3, v___x_1117_);
lean_ctor_set(v_reuseFailAlloc_1120_, 4, v_r_1109_);
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
else
{
lean_object* v___x_1126_; lean_object* v___x_1128_; 
v___x_1126_ = lean_unsigned_to_nat(2u);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v_impl_995_);
lean_ctor_set(v___x_852_, 3, v_r_1109_);
lean_ctor_set(v___x_852_, 0, v___x_1126_);
v___x_1128_ = v___x_852_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1129_, 1, v_k_847_);
lean_ctor_set(v_reuseFailAlloc_1129_, 2, v_v_848_);
lean_ctor_set(v_reuseFailAlloc_1129_, 3, v_r_1109_);
lean_ctor_set(v_reuseFailAlloc_1129_, 4, v_impl_995_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
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
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_unsigned_to_nat(1u);
v___x_1132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v_k_843_);
lean_ctor_set(v___x_1132_, 2, v_v_844_);
lean_ctor_set(v___x_1132_, 3, v_t_845_);
lean_ctor_set(v___x_1132_, 4, v_t_845_);
return v___x_1132_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2(lean_object* v_x_1133_, lean_object* v_as_1134_, size_t v_i_1135_, size_t v_stop_1136_){
_start:
{
uint8_t v___x_1137_; 
v___x_1137_ = lean_usize_dec_eq(v_i_1135_, v_stop_1136_);
if (v___x_1137_ == 0)
{
uint8_t v___x_1138_; lean_object* v___x_1139_; uint8_t v___x_1140_; lean_object* v___y_1142_; lean_object* v___x_1147_; uint8_t v___x_1148_; 
v___x_1138_ = 1;
v___x_1139_ = lean_array_uget_borrowed(v_as_1134_, v_i_1135_);
v___x_1140_ = 1;
v___x_1147_ = lean_box(1);
v___x_1148_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1133_, v___x_1147_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = lean_box(0);
lean_inc(v_x_1133_);
v___x_1150_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1133_, v___x_1149_, v___x_1147_);
v___y_1142_ = v___x_1150_;
goto v___jp_1141_;
}
else
{
v___y_1142_ = v___x_1147_;
goto v___jp_1141_;
}
v___jp_1141_:
{
uint8_t v___x_1143_; 
v___x_1143_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v___x_1140_, v___x_1139_, v___y_1142_);
lean_dec(v___y_1142_);
if (v___x_1143_ == 0)
{
size_t v___x_1144_; size_t v___x_1145_; 
v___x_1144_ = ((size_t)1ULL);
v___x_1145_ = lean_usize_add(v_i_1135_, v___x_1144_);
v_i_1135_ = v___x_1145_;
goto _start;
}
else
{
lean_dec(v_x_1133_);
return v___x_1138_;
}
}
}
else
{
uint8_t v___x_1151_; 
lean_dec(v_x_1133_);
v___x_1151_ = 0;
return v___x_1151_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2___boxed(lean_object* v_x_1152_, lean_object* v_as_1153_, lean_object* v_i_1154_, lean_object* v_stop_1155_){
_start:
{
size_t v_i_boxed_1156_; size_t v_stop_boxed_1157_; uint8_t v_res_1158_; lean_object* v_r_1159_; 
v_i_boxed_1156_ = lean_unbox_usize(v_i_1154_);
lean_dec(v_i_1154_);
v_stop_boxed_1157_ = lean_unbox_usize(v_stop_1155_);
lean_dec(v_stop_1155_);
v_res_1158_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2(v_x_1152_, v_as_1153_, v_i_boxed_1156_, v_stop_boxed_1157_);
lean_dec_ref(v_as_1153_);
v_r_1159_ = lean_box(v_res_1158_);
return v_r_1159_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(lean_object* v_instr_1160_, lean_object* v_x_1161_){
_start:
{
if (lean_obj_tag(v_instr_1160_) == 0)
{
lean_object* v_decl_1162_; lean_object* v_value_1163_; 
v_decl_1162_ = lean_ctor_get(v_instr_1160_, 0);
v_value_1163_ = lean_ctor_get(v_decl_1162_, 3);
if (lean_obj_tag(v_value_1163_) == 5)
{
lean_object* v_args_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; uint8_t v___x_1167_; 
v_args_1164_ = lean_ctor_get(v_value_1163_, 1);
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = lean_array_get_size(v_args_1164_);
v___x_1167_ = lean_nat_dec_lt(v___x_1165_, v___x_1166_);
if (v___x_1167_ == 0)
{
lean_dec(v_x_1161_);
return v___x_1167_;
}
else
{
if (v___x_1167_ == 0)
{
lean_dec(v_x_1161_);
return v___x_1167_;
}
else
{
size_t v___x_1168_; size_t v___x_1169_; uint8_t v___x_1170_; 
v___x_1168_ = ((size_t)0ULL);
v___x_1169_ = lean_usize_of_nat(v___x_1166_);
v___x_1170_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__2(v_x_1161_, v_args_1164_, v___x_1168_, v___x_1169_);
return v___x_1170_;
}
}
}
else
{
uint8_t v___x_1171_; 
lean_dec(v_x_1161_);
v___x_1171_ = 0;
return v___x_1171_;
}
}
else
{
uint8_t v___x_1172_; 
lean_dec(v_x_1161_);
v___x_1172_ = 0;
return v___x_1172_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing___boxed(lean_object* v_instr_1173_, lean_object* v_x_1174_){
_start:
{
uint8_t v_res_1175_; lean_object* v_r_1176_; 
v_res_1175_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1173_, v_x_1174_);
lean_dec_ref(v_instr_1173_);
v_r_1176_ = lean_box(v_res_1175_);
return v_r_1176_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(lean_object* v_00_u03b2_1177_, lean_object* v_k_1178_, lean_object* v_t_1179_){
_start:
{
uint8_t v___x_1180_; 
v___x_1180_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_k_1178_, v_t_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___boxed(lean_object* v_00_u03b2_1181_, lean_object* v_k_1182_, lean_object* v_t_1183_){
_start:
{
uint8_t v_res_1184_; lean_object* v_r_1185_; 
v_res_1184_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(v_00_u03b2_1181_, v_k_1182_, v_t_1183_);
lean_dec(v_t_1183_);
lean_dec(v_k_1182_);
v_r_1185_ = lean_box(v_res_1184_);
return v_r_1185_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1(lean_object* v_00_u03b2_1186_, lean_object* v_k_1187_, lean_object* v_v_1188_, lean_object* v_t_1189_, lean_object* v_hl_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_k_1187_, v_v_1188_, v_t_1189_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(uint8_t v_x_1192_){
_start:
{
switch(v_x_1192_)
{
case 0:
{
lean_object* v___x_1193_; 
v___x_1193_ = lean_unsigned_to_nat(0u);
return v___x_1193_;
}
case 1:
{
lean_object* v___x_1194_; 
v___x_1194_ = lean_unsigned_to_nat(1u);
return v___x_1194_;
}
default: 
{
lean_object* v___x_1195_; 
v___x_1195_ = lean_unsigned_to_nat(2u);
return v___x_1195_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___boxed(lean_object* v_x_1196_){
_start:
{
uint8_t v_x_boxed_1197_; lean_object* v_res_1198_; 
v_x_boxed_1197_ = lean_unbox(v_x_1196_);
v_res_1198_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(v_x_boxed_1197_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(lean_object* v_k_1199_){
_start:
{
lean_inc(v_k_1199_);
return v_k_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg___boxed(lean_object* v_k_1200_){
_start:
{
lean_object* v_res_1201_; 
v_res_1201_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(v_k_1200_);
lean_dec(v_k_1200_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(lean_object* v_motive_1202_, lean_object* v_ctorIdx_1203_, uint8_t v_t_1204_, lean_object* v_h_1205_, lean_object* v_k_1206_){
_start:
{
lean_inc(v_k_1206_);
return v_k_1206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___boxed(lean_object* v_motive_1207_, lean_object* v_ctorIdx_1208_, lean_object* v_t_1209_, lean_object* v_h_1210_, lean_object* v_k_1211_){
_start:
{
uint8_t v_t_boxed_1212_; lean_object* v_res_1213_; 
v_t_boxed_1212_ = lean_unbox(v_t_1209_);
v_res_1213_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(v_motive_1207_, v_ctorIdx_1208_, v_t_boxed_1212_, v_h_1210_, v_k_1211_);
lean_dec(v_k_1211_);
lean_dec(v_ctorIdx_1208_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(lean_object* v_ownedArg_1214_){
_start:
{
lean_inc(v_ownedArg_1214_);
return v_ownedArg_1214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg___boxed(lean_object* v_ownedArg_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(v_ownedArg_1215_);
lean_dec(v_ownedArg_1215_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(lean_object* v_motive_1217_, uint8_t v_t_1218_, lean_object* v_h_1219_, lean_object* v_ownedArg_1220_){
_start:
{
lean_inc(v_ownedArg_1220_);
return v_ownedArg_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___boxed(lean_object* v_motive_1221_, lean_object* v_t_1222_, lean_object* v_h_1223_, lean_object* v_ownedArg_1224_){
_start:
{
uint8_t v_t_boxed_1225_; lean_object* v_res_1226_; 
v_t_boxed_1225_ = lean_unbox(v_t_1222_);
v_res_1226_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(v_motive_1221_, v_t_boxed_1225_, v_h_1223_, v_ownedArg_1224_);
lean_dec(v_ownedArg_1224_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(lean_object* v_other_1227_){
_start:
{
lean_inc(v_other_1227_);
return v_other_1227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg___boxed(lean_object* v_other_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(v_other_1228_);
lean_dec(v_other_1228_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(lean_object* v_motive_1230_, uint8_t v_t_1231_, lean_object* v_h_1232_, lean_object* v_other_1233_){
_start:
{
lean_inc(v_other_1233_);
return v_other_1233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___boxed(lean_object* v_motive_1234_, lean_object* v_t_1235_, lean_object* v_h_1236_, lean_object* v_other_1237_){
_start:
{
uint8_t v_t_boxed_1238_; lean_object* v_res_1239_; 
v_t_boxed_1238_ = lean_unbox(v_t_1235_);
v_res_1239_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(v_motive_1234_, v_t_boxed_1238_, v_h_1236_, v_other_1237_);
lean_dec(v_other_1237_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(lean_object* v_none_1240_){
_start:
{
lean_inc(v_none_1240_);
return v_none_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg___boxed(lean_object* v_none_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(v_none_1241_);
lean_dec(v_none_1241_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(lean_object* v_motive_1243_, uint8_t v_t_1244_, lean_object* v_h_1245_, lean_object* v_none_1246_){
_start:
{
lean_inc(v_none_1246_);
return v_none_1246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___boxed(lean_object* v_motive_1247_, lean_object* v_t_1248_, lean_object* v_h_1249_, lean_object* v_none_1250_){
_start:
{
uint8_t v_t_boxed_1251_; lean_object* v_res_1252_; 
v_t_boxed_1251_ = lean_unbox(v_t_1248_);
v_res_1252_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(v_motive_1247_, v_t_boxed_1251_, v_h_1249_, v_none_1250_);
lean_dec(v_none_1250_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(lean_object* v_x_1253_, lean_object* v_as_1254_, size_t v_sz_1255_, size_t v_i_1256_, lean_object* v_b_1257_){
_start:
{
lean_object* v_a_1260_; uint8_t v___x_1264_; 
v___x_1264_ = lean_usize_dec_lt(v_i_1256_, v_sz_1255_);
if (v___x_1264_ == 0)
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1265_, 0, v_b_1257_);
return v___x_1265_;
}
else
{
lean_object* v_snd_1266_; lean_object* v_fst_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1311_; 
v_snd_1266_ = lean_ctor_get(v_b_1257_, 1);
v_fst_1267_ = lean_ctor_get(v_b_1257_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_b_1257_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1269_ = v_b_1257_;
v_isShared_1270_ = v_isSharedCheck_1311_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_snd_1266_);
lean_inc(v_fst_1267_);
lean_dec(v_b_1257_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1311_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v_array_1271_; lean_object* v_start_1272_; lean_object* v_stop_1273_; uint8_t v___x_1274_; 
v_array_1271_ = lean_ctor_get(v_snd_1266_, 0);
v_start_1272_ = lean_ctor_get(v_snd_1266_, 1);
v_stop_1273_ = lean_ctor_get(v_snd_1266_, 2);
v___x_1274_ = lean_nat_dec_lt(v_start_1272_, v_stop_1273_);
if (v___x_1274_ == 0)
{
lean_object* v___x_1276_; 
if (v_isShared_1270_ == 0)
{
v___x_1276_ = v___x_1269_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_fst_1267_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v_snd_1266_);
v___x_1276_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
return v___x_1277_;
}
}
else
{
lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1307_; 
lean_inc(v_stop_1273_);
lean_inc(v_start_1272_);
lean_inc_ref(v_array_1271_);
v_isSharedCheck_1307_ = !lean_is_exclusive(v_snd_1266_);
if (v_isSharedCheck_1307_ == 0)
{
lean_object* v_unused_1308_; lean_object* v_unused_1309_; lean_object* v_unused_1310_; 
v_unused_1308_ = lean_ctor_get(v_snd_1266_, 2);
lean_dec(v_unused_1308_);
v_unused_1309_ = lean_ctor_get(v_snd_1266_, 1);
lean_dec(v_unused_1309_);
v_unused_1310_ = lean_ctor_get(v_snd_1266_, 0);
lean_dec(v_unused_1310_);
v___x_1280_ = v_snd_1266_;
v_isShared_1281_ = v_isSharedCheck_1307_;
goto v_resetjp_1279_;
}
else
{
lean_dec(v_snd_1266_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1307_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v_a_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1287_; 
v_a_1282_ = lean_array_uget_borrowed(v_as_1254_, v_i_1256_);
v___x_1283_ = lean_array_fget(v_array_1271_, v_start_1272_);
v___x_1284_ = lean_unsigned_to_nat(1u);
v___x_1285_ = lean_nat_add(v_start_1272_, v___x_1284_);
lean_dec(v_start_1272_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 1, v___x_1285_);
v___x_1287_ = v___x_1280_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_array_1271_);
lean_ctor_set(v_reuseFailAlloc_1306_, 1, v___x_1285_);
lean_ctor_set(v_reuseFailAlloc_1306_, 2, v_stop_1273_);
v___x_1287_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
uint8_t v___y_1289_; 
if (lean_obj_tag(v_a_1282_) == 1)
{
lean_object* v_fvarId_1294_; uint8_t v___x_1295_; 
v_fvarId_1294_ = lean_ctor_get(v_a_1282_, 0);
v___x_1295_ = l_Lean_instBEqFVarId_beq(v_fvarId_1294_, v_x_1253_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; 
lean_dec(v___x_1283_);
lean_del_object(v___x_1269_);
v___x_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1296_, 0, v_fst_1267_);
lean_ctor_set(v___x_1296_, 1, v___x_1287_);
v_a_1260_ = v___x_1296_;
goto v___jp_1259_;
}
else
{
uint8_t v___x_1297_; 
v___x_1297_ = lean_unbox(v_fst_1267_);
switch(v___x_1297_)
{
case 0:
{
uint8_t v_borrow_1298_; 
v_borrow_1298_ = lean_ctor_get_uint8(v___x_1283_, sizeof(void*)*3);
lean_dec(v___x_1283_);
if (v_borrow_1298_ == 0)
{
uint8_t v___x_1299_; 
v___x_1299_ = lean_unbox(v_fst_1267_);
lean_dec(v_fst_1267_);
v___y_1289_ = v___x_1299_;
goto v___jp_1288_;
}
else
{
uint8_t v___x_1300_; 
lean_dec(v_fst_1267_);
v___x_1300_ = 1;
v___y_1289_ = v___x_1300_;
goto v___jp_1288_;
}
}
case 1:
{
uint8_t v___x_1301_; 
lean_dec(v___x_1283_);
v___x_1301_ = lean_unbox(v_fst_1267_);
lean_dec(v_fst_1267_);
v___y_1289_ = v___x_1301_;
goto v___jp_1288_;
}
default: 
{
uint8_t v_borrow_1302_; 
lean_dec(v_fst_1267_);
v_borrow_1302_ = lean_ctor_get_uint8(v___x_1283_, sizeof(void*)*3);
lean_dec(v___x_1283_);
if (v_borrow_1302_ == 0)
{
uint8_t v___x_1303_; 
v___x_1303_ = 0;
v___y_1289_ = v___x_1303_;
goto v___jp_1288_;
}
else
{
uint8_t v___x_1304_; 
v___x_1304_ = 1;
v___y_1289_ = v___x_1304_;
goto v___jp_1288_;
}
}
}
}
}
else
{
lean_object* v___x_1305_; 
lean_dec(v___x_1283_);
lean_del_object(v___x_1269_);
v___x_1305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1305_, 0, v_fst_1267_);
lean_ctor_set(v___x_1305_, 1, v___x_1287_);
v_a_1260_ = v___x_1305_;
goto v___jp_1259_;
}
v___jp_1288_:
{
lean_object* v___x_1290_; lean_object* v___x_1292_; 
v___x_1290_ = lean_box(v___y_1289_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 1, v___x_1287_);
lean_ctor_set(v___x_1269_, 0, v___x_1290_);
v___x_1292_ = v___x_1269_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v___x_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
v_a_1260_ = v___x_1292_;
goto v___jp_1259_;
}
}
}
}
}
}
}
v___jp_1259_:
{
size_t v___x_1261_; size_t v___x_1262_; 
v___x_1261_ = ((size_t)1ULL);
v___x_1262_ = lean_usize_add(v_i_1256_, v___x_1261_);
v_i_1256_ = v___x_1262_;
v_b_1257_ = v_a_1260_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg___boxed(lean_object* v_x_1312_, lean_object* v_as_1313_, lean_object* v_sz_1314_, lean_object* v_i_1315_, lean_object* v_b_1316_, lean_object* v___y_1317_){
_start:
{
size_t v_sz_boxed_1318_; size_t v_i_boxed_1319_; lean_object* v_res_1320_; 
v_sz_boxed_1318_ = lean_unbox_usize(v_sz_1314_);
lean_dec(v_sz_1314_);
v_i_boxed_1319_ = lean_unbox_usize(v_i_1315_);
lean_dec(v_i_1315_);
v_res_1320_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1312_, v_as_1313_, v_sz_boxed_1318_, v_i_boxed_1319_, v_b_1316_);
lean_dec_ref(v_as_1313_);
lean_dec(v_x_1312_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(lean_object* v_instr_1321_, lean_object* v_x_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
uint8_t v___y_1330_; lean_object* v___y_1331_; 
if (lean_obj_tag(v_instr_1321_) == 0)
{
lean_object* v_decl_1345_; lean_object* v_value_1346_; 
v_decl_1345_ = lean_ctor_get(v_instr_1321_, 0);
v_value_1346_ = lean_ctor_get(v_decl_1345_, 3);
lean_inc(v_value_1346_);
switch(lean_obj_tag(v_value_1346_))
{
case 9:
{
lean_object* v_fn_1347_; lean_object* v_args_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1415_; 
lean_dec_ref_known(v_instr_1321_, 1);
v_fn_1347_ = lean_ctor_get(v_value_1346_, 0);
v_args_1348_ = lean_ctor_get(v_value_1346_, 1);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_value_1346_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1350_ = v_value_1346_;
v_isShared_1351_ = v_isSharedCheck_1415_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_args_1348_);
lean_inc(v_fn_1347_);
lean_dec(v_value_1346_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1415_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
uint8_t v___x_1352_; lean_object* v___x_1354_; 
v___x_1352_ = 1;
lean_inc_ref(v_args_1348_);
lean_inc(v_fn_1347_);
if (v_isShared_1351_ == 0)
{
v___x_1354_ = v___x_1350_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_fn_1347_);
lean_ctor_set(v_reuseFailAlloc_1414_, 1, v_args_1348_);
v___x_1354_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
lean_object* v___x_1355_; 
v___x_1355_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1347_, v___y_1327_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1405_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1358_ = v___x_1355_;
v_isShared_1359_ = v_isSharedCheck_1405_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1355_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1405_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___y_1361_; 
if (lean_obj_tag(v_a_1356_) == 1)
{
lean_object* v_val_1373_; lean_object* v_params_1374_; uint8_t v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; size_t v_sz_1381_; size_t v___x_1382_; lean_object* v___x_1383_; 
lean_del_object(v___x_1358_);
lean_dec_ref(v___x_1354_);
v_val_1373_ = lean_ctor_get(v_a_1356_, 0);
lean_inc(v_val_1373_);
lean_dec_ref_known(v_a_1356_, 1);
v_params_1374_ = lean_ctor_get(v_val_1373_, 3);
lean_inc_ref(v_params_1374_);
lean_dec(v_val_1373_);
v___x_1375_ = 2;
v___x_1376_ = lean_unsigned_to_nat(0u);
v___x_1377_ = lean_array_get_size(v_params_1374_);
v___x_1378_ = l_Array_toSubarray___redArg(v_params_1374_, v___x_1376_, v___x_1377_);
v___x_1379_ = lean_box(v___x_1375_);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
lean_ctor_set(v___x_1380_, 1, v___x_1378_);
v_sz_1381_ = lean_array_size(v_args_1348_);
v___x_1382_ = ((size_t)0ULL);
v___x_1383_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1322_, v_args_1348_, v_sz_1381_, v___x_1382_, v___x_1380_);
lean_dec_ref(v_args_1348_);
lean_dec(v_x_1322_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1392_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1386_ = v___x_1383_;
v_isShared_1387_ = v_isSharedCheck_1392_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1383_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1392_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v_fst_1388_; lean_object* v___x_1390_; 
v_fst_1388_ = lean_ctor_get(v_a_1384_, 0);
lean_inc(v_fst_1388_);
lean_dec(v_a_1384_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v_fst_1388_);
v___x_1390_ = v___x_1386_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_fst_1388_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
else
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
v_a_1393_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1383_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1383_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
else
{
lean_object* v___x_1401_; uint8_t v___x_1402_; 
lean_dec(v_a_1356_);
lean_dec_ref(v_args_1348_);
v___x_1401_ = lean_box(1);
v___x_1402_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1322_, v___x_1401_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_box(0);
v___x_1404_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1322_, v___x_1403_, v___x_1401_);
v___y_1361_ = v___x_1404_;
goto v___jp_1360_;
}
else
{
lean_dec(v_x_1322_);
v___y_1361_ = v___x_1401_;
goto v___jp_1360_;
}
}
v___jp_1360_:
{
uint8_t v___x_1362_; 
v___x_1362_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1352_, v___x_1354_, v___y_1361_);
lean_dec(v___y_1361_);
lean_dec_ref(v___x_1354_);
if (v___x_1362_ == 0)
{
uint8_t v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1366_; 
v___x_1363_ = 2;
v___x_1364_ = lean_box(v___x_1363_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v___x_1364_);
v___x_1366_ = v___x_1358_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1364_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
else
{
uint8_t v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
v___x_1368_ = 0;
v___x_1369_ = lean_box(v___x_1368_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v___x_1369_);
v___x_1371_ = v___x_1358_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v___x_1369_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec_ref(v___x_1354_);
lean_dec_ref(v_args_1348_);
lean_dec(v_x_1322_);
v_a_1406_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1355_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1355_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
}
case 10:
{
lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1446_; 
v_isSharedCheck_1446_ = !lean_is_exclusive(v_instr_1321_);
if (v_isSharedCheck_1446_ == 0)
{
lean_object* v_unused_1447_; 
v_unused_1447_ = lean_ctor_get(v_instr_1321_, 0);
lean_dec(v_unused_1447_);
v___x_1417_ = v_instr_1321_;
v_isShared_1418_ = v_isSharedCheck_1446_;
goto v_resetjp_1416_;
}
else
{
lean_dec(v_instr_1321_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1446_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v_fn_1419_; lean_object* v_args_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1445_; 
v_fn_1419_ = lean_ctor_get(v_value_1346_, 0);
v_args_1420_ = lean_ctor_get(v_value_1346_, 1);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_value_1346_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1422_ = v_value_1346_;
v_isShared_1423_ = v_isSharedCheck_1445_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_args_1420_);
lean_inc(v_fn_1419_);
lean_dec(v_value_1346_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1445_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
uint8_t v___x_1424_; lean_object* v___x_1426_; 
v___x_1424_ = 1;
if (v_isShared_1423_ == 0)
{
v___x_1426_ = v___x_1422_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_fn_1419_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v_args_1420_);
v___x_1426_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
lean_object* v___y_1428_; lean_object* v___x_1440_; uint8_t v___x_1441_; 
v___x_1440_ = lean_box(1);
v___x_1441_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1322_, v___x_1440_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1442_ = lean_box(0);
v___x_1443_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1322_, v___x_1442_, v___x_1440_);
v___y_1428_ = v___x_1443_;
goto v___jp_1427_;
}
else
{
lean_dec(v_x_1322_);
v___y_1428_ = v___x_1440_;
goto v___jp_1427_;
}
v___jp_1427_:
{
uint8_t v___x_1429_; 
v___x_1429_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1424_, v___x_1426_, v___y_1428_);
lean_dec(v___y_1428_);
lean_dec_ref(v___x_1426_);
if (v___x_1429_ == 0)
{
uint8_t v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1433_; 
v___x_1430_ = 2;
v___x_1431_ = lean_box(v___x_1430_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1431_);
v___x_1433_ = v___x_1417_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
else
{
uint8_t v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1438_; 
v___x_1435_ = 0;
v___x_1436_ = lean_box(v___x_1435_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1436_);
v___x_1438_ = v___x_1417_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
}
}
}
case 4:
{
lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1478_; 
v_isSharedCheck_1478_ = !lean_is_exclusive(v_instr_1321_);
if (v_isSharedCheck_1478_ == 0)
{
lean_object* v_unused_1479_; 
v_unused_1479_ = lean_ctor_get(v_instr_1321_, 0);
lean_dec(v_unused_1479_);
v___x_1449_ = v_instr_1321_;
v_isShared_1450_ = v_isSharedCheck_1478_;
goto v_resetjp_1448_;
}
else
{
lean_dec(v_instr_1321_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1478_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v_fvarId_1451_; lean_object* v_args_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1477_; 
v_fvarId_1451_ = lean_ctor_get(v_value_1346_, 0);
v_args_1452_ = lean_ctor_get(v_value_1346_, 1);
v_isSharedCheck_1477_ = !lean_is_exclusive(v_value_1346_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1454_ = v_value_1346_;
v_isShared_1455_ = v_isSharedCheck_1477_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_args_1452_);
lean_inc(v_fvarId_1451_);
lean_dec(v_value_1346_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1477_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
uint8_t v___x_1456_; lean_object* v___x_1458_; 
v___x_1456_ = 1;
if (v_isShared_1455_ == 0)
{
v___x_1458_ = v___x_1454_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_fvarId_1451_);
lean_ctor_set(v_reuseFailAlloc_1476_, 1, v_args_1452_);
v___x_1458_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
lean_object* v___y_1460_; lean_object* v___x_1472_; uint8_t v___x_1473_; 
v___x_1472_ = lean_box(1);
v___x_1473_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1322_, v___x_1472_);
if (v___x_1473_ == 0)
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = lean_box(0);
v___x_1475_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1322_, v___x_1474_, v___x_1472_);
v___y_1460_ = v___x_1475_;
goto v___jp_1459_;
}
else
{
lean_dec(v_x_1322_);
v___y_1460_ = v___x_1472_;
goto v___jp_1459_;
}
v___jp_1459_:
{
uint8_t v___x_1461_; 
v___x_1461_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1456_, v___x_1458_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___x_1458_);
if (v___x_1461_ == 0)
{
uint8_t v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1465_; 
v___x_1462_ = 2;
v___x_1463_ = lean_box(v___x_1462_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1463_);
v___x_1465_ = v___x_1449_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___x_1463_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
else
{
uint8_t v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1470_; 
v___x_1467_ = 0;
v___x_1468_ = lean_box(v___x_1467_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1468_);
v___x_1470_ = v___x_1449_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1468_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_value_1346_);
goto v___jp_1339_;
}
}
}
else
{
goto v___jp_1339_;
}
v___jp_1329_:
{
uint8_t v___x_1332_; 
v___x_1332_ = l_Lean_Compiler_LCNF_CodeDecl_dependsOn(v___y_1330_, v_instr_1321_, v___y_1331_);
lean_dec(v___y_1331_);
lean_dec_ref(v_instr_1321_);
if (v___x_1332_ == 0)
{
uint8_t v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1333_ = 2;
v___x_1334_ = lean_box(v___x_1333_);
v___x_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
return v___x_1335_;
}
else
{
uint8_t v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1336_ = 1;
v___x_1337_ = lean_box(v___x_1336_);
v___x_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
return v___x_1338_;
}
}
v___jp_1339_:
{
uint8_t v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v___x_1340_ = 1;
v___x_1341_ = lean_box(1);
v___x_1342_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___redArg(v_x_1322_, v___x_1341_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = lean_box(0);
v___x_1344_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__1___redArg(v_x_1322_, v___x_1343_, v___x_1341_);
v___y_1330_ = v___x_1340_;
v___y_1331_ = v___x_1344_;
goto v___jp_1329_;
}
else
{
lean_dec(v_x_1322_);
v___y_1330_ = v___x_1340_;
v___y_1331_ = v___x_1341_;
goto v___jp_1329_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse___boxed(lean_object* v_instr_1480_, lean_object* v_x_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1480_, v_x_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec_ref(v___y_1482_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(lean_object* v_x_1489_, lean_object* v_as_1490_, size_t v_sz_1491_, size_t v_i_1492_, lean_object* v_b_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1489_, v_as_1490_, v_sz_1491_, v_i_1492_, v_b_1493_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___boxed(lean_object* v_x_1501_, lean_object* v_as_1502_, lean_object* v_sz_1503_, lean_object* v_i_1504_, lean_object* v_b_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
size_t v_sz_boxed_1512_; size_t v_i_boxed_1513_; lean_object* v_res_1514_; 
v_sz_boxed_1512_ = lean_unbox_usize(v_sz_1503_);
lean_dec(v_sz_1503_);
v_i_boxed_1513_ = lean_unbox_usize(v_i_1504_);
lean_dec(v_i_1504_);
v_res_1514_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(v_x_1501_, v_as_1502_, v_sz_boxed_1512_, v_i_boxed_1513_, v_b_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec_ref(v_as_1502_);
lean_dec(v_x_1501_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(lean_object* v_alt_1515_, lean_object* v_f_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v___y_1524_; 
switch(lean_obj_tag(v_alt_1515_))
{
case 0:
{
lean_object* v_code_1543_; 
v_code_1543_ = lean_ctor_get(v_alt_1515_, 2);
lean_inc_ref(v_code_1543_);
v___y_1524_ = v_code_1543_;
goto v___jp_1523_;
}
case 1:
{
lean_object* v_code_1544_; 
v_code_1544_ = lean_ctor_get(v_alt_1515_, 1);
lean_inc_ref(v_code_1544_);
v___y_1524_ = v_code_1544_;
goto v___jp_1523_;
}
default: 
{
lean_object* v_code_1545_; 
v_code_1545_ = lean_ctor_get(v_alt_1515_, 0);
lean_inc_ref(v_code_1545_);
v___y_1524_ = v_code_1545_;
goto v___jp_1523_;
}
}
v___jp_1523_:
{
lean_object* v___x_1525_; 
lean_inc(v___y_1521_);
lean_inc_ref(v___y_1520_);
lean_inc(v___y_1519_);
lean_inc_ref(v___y_1518_);
lean_inc_ref(v___y_1517_);
v___x_1525_ = lean_apply_7(v_f_1516_, v___y_1524_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, lean_box(0));
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1534_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1528_ = v___x_1525_;
v_isShared_1529_ = v_isSharedCheck_1534_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1525_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1534_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1530_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1515_, v_a_1526_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v___x_1530_);
v___x_1532_ = v___x_1528_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
lean_dec_ref(v_alt_1515_);
v_a_1535_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1525_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1525_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg___boxed(lean_object* v_alt_1546_, lean_object* v_f_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_1546_, v_f_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec_ref(v___y_1548_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed(lean_object* v_x_1555_, lean_object* v_info_1556_, lean_object* v_c_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_x_1555_, v_info_1556_, v_c_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec_ref(v___y_1558_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(lean_object* v_x_1565_, lean_object* v_info_1566_, lean_object* v_i_1567_, lean_object* v_as_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v___x_1575_; uint8_t v___x_1576_; 
v___x_1575_ = lean_array_get_size(v_as_1568_);
v___x_1576_ = lean_nat_dec_lt(v_i_1567_, v___x_1575_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; 
lean_dec(v_i_1567_);
lean_dec_ref(v_info_1566_);
lean_dec(v_x_1565_);
v___x_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1577_, 0, v_as_1568_);
return v___x_1577_;
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v_a_1578_ = lean_array_fget_borrowed(v_as_1568_, v_i_1567_);
lean_inc_ref(v_info_1566_);
lean_inc(v_x_1565_);
v___x_1579_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed), 9, 2);
lean_closure_set(v___x_1579_, 0, v_x_1565_);
lean_closure_set(v___x_1579_, 1, v_info_1566_);
lean_inc(v_a_1578_);
v___x_1580_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_a_1578_, v___x_1579_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; size_t v___x_1582_; size_t v___x_1583_; uint8_t v___x_1584_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v___x_1580_, 1);
v___x_1582_ = lean_ptr_addr(v_a_1578_);
v___x_1583_ = lean_ptr_addr(v_a_1581_);
v___x_1584_ = lean_usize_dec_eq(v___x_1582_, v___x_1583_);
if (v___x_1584_ == 0)
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1585_ = lean_unsigned_to_nat(1u);
v___x_1586_ = lean_nat_add(v_i_1567_, v___x_1585_);
v___x_1587_ = lean_array_fset(v_as_1568_, v_i_1567_, v_a_1581_);
lean_dec(v_i_1567_);
v_i_1567_ = v___x_1586_;
v_as_1568_ = v___x_1587_;
goto _start;
}
else
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
lean_dec(v_a_1581_);
v___x_1589_ = lean_unsigned_to_nat(1u);
v___x_1590_ = lean_nat_add(v_i_1567_, v___x_1589_);
lean_dec(v_i_1567_);
v_i_1567_ = v___x_1590_;
goto _start;
}
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
lean_dec_ref(v_as_1568_);
lean_dec(v_i_1567_);
lean_dec_ref(v_info_1566_);
lean_dec(v_x_1565_);
v_a_1592_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1580_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1580_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1(void){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1601_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_1602_ = lean_unsigned_to_nat(61u);
v___x_1603_ = lean_unsigned_to_nat(247u);
v___x_1604_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0));
v___x_1605_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_1606_ = l_mkPanicMessageWithDecl(v___x_1605_, v___x_1604_, v___x_1603_, v___x_1602_, v___x_1601_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(lean_object* v_x_1607_, lean_object* v_info_1608_, lean_object* v_c_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
switch(lean_obj_tag(v_c_1609_))
{
case 0:
{
lean_object* v_decl_1616_; lean_object* v_k_1617_; uint8_t v___x_1618_; lean_object* v_instr_1619_; uint8_t v___x_1620_; uint8_t v___x_1621_; 
v_decl_1616_ = lean_ctor_get(v_c_1609_, 0);
v_k_1617_ = lean_ctor_get(v_c_1609_, 1);
v___x_1618_ = 1;
v_instr_1619_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1618_, v_c_1609_);
lean_inc(v_x_1607_);
v___x_1620_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1619_, v_x_1607_);
v___x_1621_ = 1;
if (v___x_1620_ == 0)
{
lean_object* v___x_1622_; 
lean_inc_ref(v_k_1617_);
lean_inc_ref(v_info_1608_);
lean_inc(v_x_1607_);
v___x_1622_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1607_, v_info_1608_, v_k_1617_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1740_; 
v_a_1623_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1625_ = v___x_1622_;
v_isShared_1626_ = v_isSharedCheck_1740_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1622_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1740_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___y_1628_; lean_object* v_snd_1634_; uint8_t v___x_1635_; 
v_snd_1634_ = lean_ctor_get(v_a_1623_, 1);
v___x_1635_ = lean_unbox(v_snd_1634_);
if (v___x_1635_ == 0)
{
lean_object* v_fst_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1725_; 
lean_inc(v_snd_1634_);
lean_del_object(v___x_1625_);
v_fst_1636_ = lean_ctor_get(v_a_1623_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v_a_1623_);
if (v_isSharedCheck_1725_ == 0)
{
lean_object* v_unused_1726_; 
v_unused_1726_ = lean_ctor_get(v_a_1623_, 1);
lean_dec(v_unused_1726_);
v___x_1638_ = v_a_1623_;
v_isShared_1639_ = v_isSharedCheck_1725_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_fst_1636_);
lean_dec(v_a_1623_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1725_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1640_; 
lean_inc(v_x_1607_);
v___x_1640_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1619_, v_x_1607_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1716_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1643_ = v___x_1640_;
v_isShared_1644_ = v_isSharedCheck_1716_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1640_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1716_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___y_1646_; lean_object* v___y_1654_; uint8_t v___x_1658_; 
v___x_1658_ = lean_unbox(v_a_1641_);
lean_dec(v_a_1641_);
switch(v___x_1658_)
{
case 0:
{
size_t v___x_1659_; size_t v___x_1660_; uint8_t v___x_1661_; 
lean_del_object(v___x_1643_);
lean_del_object(v___x_1638_);
lean_dec(v_snd_1634_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_1659_ = lean_ptr_addr(v_k_1617_);
v___x_1660_ = lean_ptr_addr(v_fst_1636_);
v___x_1661_ = lean_usize_dec_eq(v___x_1659_, v___x_1660_);
if (v___x_1661_ == 0)
{
lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1668_; 
lean_inc_ref(v_decl_1616_);
v_isSharedCheck_1668_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_1668_ == 0)
{
lean_object* v_unused_1669_; lean_object* v_unused_1670_; 
v_unused_1669_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_1669_);
v_unused_1670_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_1670_);
v___x_1663_ = v_c_1609_;
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
else
{
lean_dec(v_c_1609_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___x_1666_; 
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 1, v_fst_1636_);
v___x_1666_ = v___x_1663_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v_decl_1616_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v_fst_1636_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
v___y_1654_ = v___x_1666_;
goto v___jp_1653_;
}
}
}
else
{
lean_dec(v_fst_1636_);
v___y_1654_ = v_c_1609_;
goto v___jp_1653_;
}
}
case 1:
{
lean_object* v___x_1671_; 
lean_del_object(v___x_1643_);
lean_del_object(v___x_1638_);
lean_dec(v_snd_1634_);
v___x_1671_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1607_, v_info_1608_, v_fst_1636_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
lean_dec_ref(v_info_1608_);
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1695_; 
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1674_ = v___x_1671_;
v_isShared_1675_ = v_isSharedCheck_1695_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1671_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1695_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___y_1677_; size_t v___x_1683_; size_t v___x_1684_; uint8_t v___x_1685_; 
v___x_1683_ = lean_ptr_addr(v_k_1617_);
v___x_1684_ = lean_ptr_addr(v_a_1672_);
v___x_1685_ = lean_usize_dec_eq(v___x_1683_, v___x_1684_);
if (v___x_1685_ == 0)
{
lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
lean_inc_ref(v_decl_1616_);
v_isSharedCheck_1692_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_1692_ == 0)
{
lean_object* v_unused_1693_; lean_object* v_unused_1694_; 
v_unused_1693_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_1693_);
v_unused_1694_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_1694_);
v___x_1687_ = v_c_1609_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_dec(v_c_1609_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 1, v_a_1672_);
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_decl_1616_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v_a_1672_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
v___y_1677_ = v___x_1690_;
goto v___jp_1676_;
}
}
}
else
{
lean_dec(v_a_1672_);
v___y_1677_ = v_c_1609_;
goto v___jp_1676_;
}
v___jp_1676_:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1678_ = lean_box(v___x_1621_);
v___x_1679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___y_1677_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 0, v___x_1679_);
v___x_1681_ = v___x_1674_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
else
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
lean_dec_ref_known(v_c_1609_, 2);
v_a_1696_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v___x_1671_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1671_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
default: 
{
size_t v___x_1704_; size_t v___x_1705_; uint8_t v___x_1706_; 
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_1704_ = lean_ptr_addr(v_k_1617_);
v___x_1705_ = lean_ptr_addr(v_fst_1636_);
v___x_1706_ = lean_usize_dec_eq(v___x_1704_, v___x_1705_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_inc_ref(v_decl_1616_);
v_isSharedCheck_1713_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_1713_ == 0)
{
lean_object* v_unused_1714_; lean_object* v_unused_1715_; 
v_unused_1714_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_1714_);
v_unused_1715_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_1715_);
v___x_1708_ = v_c_1609_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_dec(v_c_1609_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v_fst_1636_);
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_decl_1616_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_fst_1636_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
v___y_1646_ = v___x_1711_;
goto v___jp_1645_;
}
}
}
else
{
lean_dec(v_fst_1636_);
v___y_1646_ = v_c_1609_;
goto v___jp_1645_;
}
}
}
v___jp_1645_:
{
lean_object* v___x_1648_; 
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v___y_1646_);
v___x_1648_ = v___x_1638_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v___y_1646_);
lean_ctor_set(v_reuseFailAlloc_1652_, 1, v_snd_1634_);
v___x_1648_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
lean_object* v___x_1650_; 
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 0, v___x_1648_);
v___x_1650_ = v___x_1643_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1648_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
v___jp_1653_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1655_ = lean_box(v___x_1621_);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___y_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
return v___x_1657_;
}
}
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
lean_del_object(v___x_1638_);
lean_dec(v_fst_1636_);
lean_dec(v_snd_1634_);
lean_dec_ref_known(v_c_1609_, 2);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v_a_1717_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1640_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1640_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
else
{
lean_object* v_fst_1727_; size_t v___x_1728_; size_t v___x_1729_; uint8_t v___x_1730_; 
lean_dec_ref(v_instr_1619_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v_fst_1727_ = lean_ctor_get(v_a_1623_, 0);
lean_inc(v_fst_1727_);
lean_dec(v_a_1623_);
v___x_1728_ = lean_ptr_addr(v_k_1617_);
v___x_1729_ = lean_ptr_addr(v_fst_1727_);
v___x_1730_ = lean_usize_dec_eq(v___x_1728_, v___x_1729_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1737_; 
lean_inc_ref(v_decl_1616_);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_1737_ == 0)
{
lean_object* v_unused_1738_; lean_object* v_unused_1739_; 
v_unused_1738_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_1738_);
v_unused_1739_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_1739_);
v___x_1732_ = v_c_1609_;
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
else
{
lean_dec(v_c_1609_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 1, v_fst_1727_);
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_decl_1616_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_fst_1727_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
v___y_1628_ = v___x_1735_;
goto v___jp_1627_;
}
}
}
else
{
lean_dec(v_fst_1727_);
v___y_1628_ = v_c_1609_;
goto v___jp_1627_;
}
}
v___jp_1627_:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1632_; 
v___x_1629_ = lean_box(v___x_1621_);
v___x_1630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___y_1628_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 0, v___x_1630_);
v___x_1632_ = v___x_1625_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1630_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1619_);
lean_dec_ref_known(v_c_1609_, 2);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
return v___x_1622_;
}
}
else
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
lean_dec_ref(v_instr_1619_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_1741_ = lean_box(v___x_1621_);
v___x_1742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1742_, 0, v_c_1609_);
lean_ctor_set(v___x_1742_, 1, v___x_1741_);
v___x_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1742_);
return v___x_1743_;
}
}
case 2:
{
lean_object* v_decl_1744_; lean_object* v_k_1745_; lean_object* v___x_1746_; 
v_decl_1744_ = lean_ctor_get(v_c_1609_, 0);
v_k_1745_ = lean_ctor_get(v_c_1609_, 1);
lean_inc_ref(v_k_1745_);
lean_inc_ref(v_info_1608_);
lean_inc(v_x_1607_);
v___x_1746_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1607_, v_info_1608_, v_k_1745_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v_fst_1748_; lean_object* v_snd_1749_; lean_object* v_params_1750_; lean_object* v_type_1751_; lean_object* v_value_1752_; uint8_t v___x_1753_; lean_object* v___x_1754_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
lean_inc(v_a_1747_);
lean_dec_ref_known(v___x_1746_, 1);
v_fst_1748_ = lean_ctor_get(v_a_1747_, 0);
lean_inc(v_fst_1748_);
v_snd_1749_ = lean_ctor_get(v_a_1747_, 1);
lean_inc(v_snd_1749_);
lean_dec(v_a_1747_);
v_params_1750_ = lean_ctor_get(v_decl_1744_, 2);
v_type_1751_ = lean_ctor_get(v_decl_1744_, 3);
v_value_1752_ = lean_ctor_get(v_decl_1744_, 4);
v___x_1753_ = 1;
lean_inc_ref(v_value_1752_);
v___x_1754_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1607_, v_info_1608_, v_value_1752_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; lean_object* v_fst_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1806_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc(v_a_1755_);
lean_dec_ref_known(v___x_1754_, 1);
v_fst_1756_ = lean_ctor_get(v_a_1755_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_a_1755_);
if (v_isSharedCheck_1806_ == 0)
{
lean_object* v_unused_1807_; 
v_unused_1807_ = lean_ctor_get(v_a_1755_, 1);
lean_dec(v_unused_1807_);
v___x_1758_ = v_a_1755_;
v_isShared_1759_ = v_isSharedCheck_1806_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_fst_1756_);
lean_dec(v_a_1755_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1806_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1760_; 
lean_inc_ref(v_params_1750_);
lean_inc_ref(v_type_1751_);
lean_inc_ref(v_decl_1744_);
v___x_1760_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1753_, v_decl_1744_, v_type_1751_, v_params_1750_, v_fst_1756_, v___y_1612_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1797_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1763_ = v___x_1760_;
v_isShared_1764_ = v_isSharedCheck_1797_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1760_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1797_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___y_1766_; size_t v___x_1773_; size_t v___x_1774_; uint8_t v___x_1775_; 
v___x_1773_ = lean_ptr_addr(v_k_1745_);
v___x_1774_ = lean_ptr_addr(v_fst_1748_);
v___x_1775_ = lean_usize_dec_eq(v___x_1773_, v___x_1774_);
if (v___x_1775_ == 0)
{
lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
v_isSharedCheck_1782_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_1782_ == 0)
{
lean_object* v_unused_1783_; lean_object* v_unused_1784_; 
v_unused_1783_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_1783_);
v_unused_1784_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_1784_);
v___x_1777_ = v_c_1609_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_dec(v_c_1609_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 1, v_fst_1748_);
lean_ctor_set(v___x_1777_, 0, v_a_1761_);
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1761_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v_fst_1748_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
v___y_1766_ = v___x_1780_;
goto v___jp_1765_;
}
}
}
else
{
size_t v___x_1785_; size_t v___x_1786_; uint8_t v___x_1787_; 
v___x_1785_ = lean_ptr_addr(v_decl_1744_);
v___x_1786_ = lean_ptr_addr(v_a_1761_);
v___x_1787_ = lean_usize_dec_eq(v___x_1785_, v___x_1786_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
v_isSharedCheck_1794_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_1794_ == 0)
{
lean_object* v_unused_1795_; lean_object* v_unused_1796_; 
v_unused_1795_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_1795_);
v_unused_1796_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_1796_);
v___x_1789_ = v_c_1609_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_dec(v_c_1609_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
lean_ctor_set(v___x_1789_, 1, v_fst_1748_);
lean_ctor_set(v___x_1789_, 0, v_a_1761_);
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1761_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v_fst_1748_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
v___y_1766_ = v___x_1792_;
goto v___jp_1765_;
}
}
}
else
{
lean_dec(v_a_1761_);
lean_dec(v_fst_1748_);
v___y_1766_ = v_c_1609_;
goto v___jp_1765_;
}
}
v___jp_1765_:
{
lean_object* v___x_1768_; 
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 1, v_snd_1749_);
lean_ctor_set(v___x_1758_, 0, v___y_1766_);
v___x_1768_ = v___x_1758_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___y_1766_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v_snd_1749_);
v___x_1768_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1770_; 
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 0, v___x_1768_);
v___x_1770_ = v___x_1763_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v___x_1768_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
lean_del_object(v___x_1758_);
lean_dec(v_snd_1749_);
lean_dec(v_fst_1748_);
lean_dec_ref_known(v_c_1609_, 2);
v_a_1798_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1760_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1760_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
}
else
{
lean_dec(v_snd_1749_);
lean_dec(v_fst_1748_);
lean_dec_ref_known(v_c_1609_, 2);
return v___x_1754_;
}
}
else
{
lean_dec_ref_known(v_c_1609_, 2);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
return v___x_1746_;
}
}
case 3:
{
lean_object* v___x_1808_; 
lean_dec_ref(v_info_1608_);
lean_inc_ref(v_c_1609_);
v___x_1808_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1609_, v_x_1607_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1817_; 
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1817_ == 0)
{
v___x_1811_ = v___x_1808_;
v_isShared_1812_ = v_isSharedCheck_1817_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_dec(v___x_1808_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1817_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1813_; lean_object* v___x_1815_; 
v___x_1813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1813_, 0, v_c_1609_);
lean_ctor_set(v___x_1813_, 1, v_a_1809_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 0, v___x_1813_);
v___x_1815_ = v___x_1811_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v___x_1813_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
return v___x_1815_;
}
}
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
lean_dec_ref_known(v_c_1609_, 2);
v_a_1818_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1808_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1808_);
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
case 4:
{
lean_object* v_cases_1826_; lean_object* v___x_1827_; 
v_cases_1826_ = lean_ctor_get(v_c_1609_, 0);
lean_inc_ref(v_cases_1826_);
lean_inc(v_x_1607_);
lean_inc_ref(v_c_1609_);
v___x_1827_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1609_, v_x_1607_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1880_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1830_ = v___x_1827_;
v_isShared_1831_ = v_isSharedCheck_1880_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___x_1827_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1880_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
uint8_t v___x_1832_; 
v___x_1832_ = lean_unbox(v_a_1828_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; lean_object* v___x_1835_; 
lean_dec_ref(v_cases_1826_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_1833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1833_, 0, v_c_1609_);
lean_ctor_set(v___x_1833_, 1, v_a_1828_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 0, v___x_1833_);
v___x_1835_ = v___x_1830_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v___x_1833_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
else
{
lean_object* v_typeName_1837_; lean_object* v_resultType_1838_; lean_object* v_discr_1839_; lean_object* v_alts_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1879_; 
lean_del_object(v___x_1830_);
v_typeName_1837_ = lean_ctor_get(v_cases_1826_, 0);
v_resultType_1838_ = lean_ctor_get(v_cases_1826_, 1);
v_discr_1839_ = lean_ctor_get(v_cases_1826_, 2);
v_alts_1840_ = lean_ctor_get(v_cases_1826_, 3);
v_isSharedCheck_1879_ = !lean_is_exclusive(v_cases_1826_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1842_ = v_cases_1826_;
v_isShared_1843_ = v_isSharedCheck_1879_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_alts_1840_);
lean_inc(v_discr_1839_);
lean_inc(v_resultType_1838_);
lean_inc(v_typeName_1837_);
lean_dec(v_cases_1826_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1879_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1844_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1840_);
v___x_1845_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_1607_, v_info_1608_, v___x_1844_, v_alts_1840_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1870_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1848_ = v___x_1845_;
v_isShared_1849_ = v_isSharedCheck_1870_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1845_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1870_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___y_1851_; size_t v___x_1856_; size_t v___x_1857_; uint8_t v___x_1858_; 
v___x_1856_ = lean_ptr_addr(v_alts_1840_);
lean_dec_ref(v_alts_1840_);
v___x_1857_ = lean_ptr_addr(v_a_1846_);
v___x_1858_ = lean_usize_dec_eq(v___x_1856_, v___x_1857_);
if (v___x_1858_ == 0)
{
lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1868_; 
v_isSharedCheck_1868_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_1868_ == 0)
{
lean_object* v_unused_1869_; 
v_unused_1869_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_1869_);
v___x_1860_ = v_c_1609_;
v_isShared_1861_ = v_isSharedCheck_1868_;
goto v_resetjp_1859_;
}
else
{
lean_dec(v_c_1609_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1868_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 3, v_a_1846_);
v___x_1863_ = v___x_1842_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_typeName_1837_);
lean_ctor_set(v_reuseFailAlloc_1867_, 1, v_resultType_1838_);
lean_ctor_set(v_reuseFailAlloc_1867_, 2, v_discr_1839_);
lean_ctor_set(v_reuseFailAlloc_1867_, 3, v_a_1846_);
v___x_1863_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
lean_object* v___x_1865_; 
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 0, v___x_1863_);
v___x_1865_ = v___x_1860_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1863_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
v___y_1851_ = v___x_1865_;
goto v___jp_1850_;
}
}
}
}
else
{
lean_dec(v_a_1846_);
lean_del_object(v___x_1842_);
lean_dec(v_discr_1839_);
lean_dec_ref(v_resultType_1838_);
lean_dec(v_typeName_1837_);
v___y_1851_ = v_c_1609_;
goto v___jp_1850_;
}
v___jp_1850_:
{
lean_object* v___x_1852_; lean_object* v___x_1854_; 
v___x_1852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1852_, 0, v___y_1851_);
lean_ctor_set(v___x_1852_, 1, v_a_1828_);
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 0, v___x_1852_);
v___x_1854_ = v___x_1848_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v___x_1852_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
else
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
lean_del_object(v___x_1842_);
lean_dec_ref(v_alts_1840_);
lean_dec(v_discr_1839_);
lean_dec_ref(v_resultType_1838_);
lean_dec(v_typeName_1837_);
lean_dec(v_a_1828_);
lean_dec_ref_known(v_c_1609_, 1);
v_a_1871_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___x_1845_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___x_1845_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_a_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
lean_dec_ref(v_cases_1826_);
lean_dec_ref_known(v_c_1609_, 1);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v_a_1881_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1827_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1827_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_a_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
case 5:
{
lean_object* v___x_1889_; 
lean_dec_ref(v_info_1608_);
lean_inc_ref(v_c_1609_);
v___x_1889_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1609_, v_x_1607_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1898_; 
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1892_ = v___x_1889_;
v_isShared_1893_ = v_isSharedCheck_1898_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1889_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1898_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; lean_object* v___x_1896_; 
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v_c_1609_);
lean_ctor_set(v___x_1894_, 1, v_a_1890_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 0, v___x_1894_);
v___x_1896_ = v___x_1892_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1894_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1906_; 
lean_dec_ref_known(v_c_1609_, 1);
v_a_1899_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1901_ = v___x_1889_;
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1889_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1904_; 
if (v_isShared_1902_ == 0)
{
v___x_1904_ = v___x_1901_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_a_1899_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
case 6:
{
lean_object* v___x_1907_; 
lean_dec_ref(v_info_1608_);
lean_inc_ref(v_c_1609_);
v___x_1907_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1609_, v_x_1607_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1916_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1910_ = v___x_1907_;
v_isShared_1911_ = v_isSharedCheck_1916_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1907_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1916_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1912_; lean_object* v___x_1914_; 
v___x_1912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1912_, 0, v_c_1609_);
lean_ctor_set(v___x_1912_, 1, v_a_1908_);
if (v_isShared_1911_ == 0)
{
lean_ctor_set(v___x_1910_, 0, v___x_1912_);
v___x_1914_ = v___x_1910_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v___x_1912_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
lean_dec_ref_known(v_c_1609_, 1);
v_a_1917_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1907_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1907_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
case 8:
{
lean_object* v_fvarId_1925_; lean_object* v_i_1926_; lean_object* v_y_1927_; lean_object* v_k_1928_; uint8_t v___x_1929_; lean_object* v_instr_1930_; uint8_t v___x_1931_; uint8_t v___x_1932_; 
v_fvarId_1925_ = lean_ctor_get(v_c_1609_, 0);
v_i_1926_ = lean_ctor_get(v_c_1609_, 1);
v_y_1927_ = lean_ctor_get(v_c_1609_, 2);
v_k_1928_ = lean_ctor_get(v_c_1609_, 3);
v___x_1929_ = 1;
v_instr_1930_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1929_, v_c_1609_);
lean_inc(v_x_1607_);
v___x_1931_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1930_, v_x_1607_);
v___x_1932_ = 1;
if (v___x_1931_ == 0)
{
lean_object* v___x_1933_; 
lean_inc_ref(v_k_1928_);
lean_inc_ref(v_info_1608_);
lean_inc(v_x_1607_);
v___x_1933_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1607_, v_info_1608_, v_k_1928_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_2059_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_1936_ = v___x_1933_;
v_isShared_1937_ = v_isSharedCheck_2059_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1933_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_2059_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___y_1939_; lean_object* v_snd_1945_; uint8_t v___x_1946_; 
v_snd_1945_ = lean_ctor_get(v_a_1934_, 1);
v___x_1946_ = lean_unbox(v_snd_1945_);
if (v___x_1946_ == 0)
{
lean_object* v_fst_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_2042_; 
lean_inc(v_snd_1945_);
lean_del_object(v___x_1936_);
v_fst_1947_ = lean_ctor_get(v_a_1934_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v_a_1934_);
if (v_isSharedCheck_2042_ == 0)
{
lean_object* v_unused_2043_; 
v_unused_2043_ = lean_ctor_get(v_a_1934_, 1);
lean_dec(v_unused_2043_);
v___x_1949_ = v_a_1934_;
v_isShared_1950_ = v_isSharedCheck_2042_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_fst_1947_);
lean_dec(v_a_1934_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_2042_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1951_; 
lean_inc(v_x_1607_);
v___x_1951_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1930_, v_x_1607_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_2033_; 
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_1954_ = v___x_1951_;
v_isShared_1955_ = v_isSharedCheck_2033_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1951_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_2033_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___y_1957_; lean_object* v___y_1965_; uint8_t v___x_1969_; 
v___x_1969_ = lean_unbox(v_a_1952_);
lean_dec(v_a_1952_);
switch(v___x_1969_)
{
case 0:
{
size_t v___x_1970_; size_t v___x_1971_; uint8_t v___x_1972_; 
lean_del_object(v___x_1954_);
lean_del_object(v___x_1949_);
lean_dec(v_snd_1945_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_1970_ = lean_ptr_addr(v_k_1928_);
v___x_1971_ = lean_ptr_addr(v_fst_1947_);
v___x_1972_ = lean_usize_dec_eq(v___x_1970_, v___x_1971_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_inc(v_y_1927_);
lean_inc(v_i_1926_);
lean_inc(v_fvarId_1925_);
v_isSharedCheck_1979_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_1979_ == 0)
{
lean_object* v_unused_1980_; lean_object* v_unused_1981_; lean_object* v_unused_1982_; lean_object* v_unused_1983_; 
v_unused_1980_ = lean_ctor_get(v_c_1609_, 3);
lean_dec(v_unused_1980_);
v_unused_1981_ = lean_ctor_get(v_c_1609_, 2);
lean_dec(v_unused_1981_);
v_unused_1982_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_1982_);
v_unused_1983_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_1983_);
v___x_1974_ = v_c_1609_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_dec(v_c_1609_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 3, v_fst_1947_);
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_fvarId_1925_);
lean_ctor_set(v_reuseFailAlloc_1978_, 1, v_i_1926_);
lean_ctor_set(v_reuseFailAlloc_1978_, 2, v_y_1927_);
lean_ctor_set(v_reuseFailAlloc_1978_, 3, v_fst_1947_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
v___y_1965_ = v___x_1977_;
goto v___jp_1964_;
}
}
}
else
{
lean_dec(v_fst_1947_);
v___y_1965_ = v_c_1609_;
goto v___jp_1964_;
}
}
case 1:
{
lean_object* v___x_1984_; 
lean_del_object(v___x_1954_);
lean_del_object(v___x_1949_);
lean_dec(v_snd_1945_);
v___x_1984_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1607_, v_info_1608_, v_fst_1947_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
lean_dec_ref(v_info_1608_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2010_; 
v_a_1985_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_1987_ = v___x_1984_;
v_isShared_1988_ = v_isSharedCheck_2010_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1984_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2010_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___y_1990_; size_t v___x_1996_; size_t v___x_1997_; uint8_t v___x_1998_; 
v___x_1996_ = lean_ptr_addr(v_k_1928_);
v___x_1997_ = lean_ptr_addr(v_a_1985_);
v___x_1998_ = lean_usize_dec_eq(v___x_1996_, v___x_1997_);
if (v___x_1998_ == 0)
{
lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_inc(v_y_1927_);
lean_inc(v_i_1926_);
lean_inc(v_fvarId_1925_);
v_isSharedCheck_2005_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_2005_ == 0)
{
lean_object* v_unused_2006_; lean_object* v_unused_2007_; lean_object* v_unused_2008_; lean_object* v_unused_2009_; 
v_unused_2006_ = lean_ctor_get(v_c_1609_, 3);
lean_dec(v_unused_2006_);
v_unused_2007_ = lean_ctor_get(v_c_1609_, 2);
lean_dec(v_unused_2007_);
v_unused_2008_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_2008_);
v_unused_2009_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_2009_);
v___x_2000_ = v_c_1609_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_dec(v_c_1609_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 3, v_a_1985_);
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_fvarId_1925_);
lean_ctor_set(v_reuseFailAlloc_2004_, 1, v_i_1926_);
lean_ctor_set(v_reuseFailAlloc_2004_, 2, v_y_1927_);
lean_ctor_set(v_reuseFailAlloc_2004_, 3, v_a_1985_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
v___y_1990_ = v___x_2003_;
goto v___jp_1989_;
}
}
}
else
{
lean_dec(v_a_1985_);
v___y_1990_ = v_c_1609_;
goto v___jp_1989_;
}
v___jp_1989_:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1994_; 
v___x_1991_ = lean_box(v___x_1932_);
v___x_1992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1992_, 0, v___y_1990_);
lean_ctor_set(v___x_1992_, 1, v___x_1991_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_1992_);
v___x_1994_ = v___x_1987_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1992_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
lean_dec_ref_known(v_c_1609_, 4);
v_a_2011_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_1984_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_1984_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
default: 
{
size_t v___x_2019_; size_t v___x_2020_; uint8_t v___x_2021_; 
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_2019_ = lean_ptr_addr(v_k_1928_);
v___x_2020_ = lean_ptr_addr(v_fst_1947_);
v___x_2021_ = lean_usize_dec_eq(v___x_2019_, v___x_2020_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_inc(v_y_1927_);
lean_inc(v_i_1926_);
lean_inc(v_fvarId_1925_);
v_isSharedCheck_2028_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_2028_ == 0)
{
lean_object* v_unused_2029_; lean_object* v_unused_2030_; lean_object* v_unused_2031_; lean_object* v_unused_2032_; 
v_unused_2029_ = lean_ctor_get(v_c_1609_, 3);
lean_dec(v_unused_2029_);
v_unused_2030_ = lean_ctor_get(v_c_1609_, 2);
lean_dec(v_unused_2030_);
v_unused_2031_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_2031_);
v_unused_2032_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_2032_);
v___x_2023_ = v_c_1609_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_dec(v_c_1609_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 3, v_fst_1947_);
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_fvarId_1925_);
lean_ctor_set(v_reuseFailAlloc_2027_, 1, v_i_1926_);
lean_ctor_set(v_reuseFailAlloc_2027_, 2, v_y_1927_);
lean_ctor_set(v_reuseFailAlloc_2027_, 3, v_fst_1947_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
v___y_1957_ = v___x_2026_;
goto v___jp_1956_;
}
}
}
else
{
lean_dec(v_fst_1947_);
v___y_1957_ = v_c_1609_;
goto v___jp_1956_;
}
}
}
v___jp_1956_:
{
lean_object* v___x_1959_; 
if (v_isShared_1950_ == 0)
{
lean_ctor_set(v___x_1949_, 0, v___y_1957_);
v___x_1959_ = v___x_1949_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v___y_1957_);
lean_ctor_set(v_reuseFailAlloc_1963_, 1, v_snd_1945_);
v___x_1959_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
lean_object* v___x_1961_; 
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 0, v___x_1959_);
v___x_1961_ = v___x_1954_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v___x_1959_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
v___jp_1964_:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1966_ = lean_box(v___x_1932_);
v___x_1967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___y_1965_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
v___x_1968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1967_);
return v___x_1968_;
}
}
}
else
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2041_; 
lean_del_object(v___x_1949_);
lean_dec(v_fst_1947_);
lean_dec(v_snd_1945_);
lean_dec_ref_known(v_c_1609_, 4);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v_a_2034_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2036_ = v___x_1951_;
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_1951_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2039_; 
if (v_isShared_2037_ == 0)
{
v___x_2039_ = v___x_2036_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_a_2034_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
}
}
else
{
lean_object* v_fst_2044_; size_t v___x_2045_; size_t v___x_2046_; uint8_t v___x_2047_; 
lean_dec_ref(v_instr_1930_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v_fst_2044_ = lean_ctor_get(v_a_1934_, 0);
lean_inc(v_fst_2044_);
lean_dec(v_a_1934_);
v___x_2045_ = lean_ptr_addr(v_k_1928_);
v___x_2046_ = lean_ptr_addr(v_fst_2044_);
v___x_2047_ = lean_usize_dec_eq(v___x_2045_, v___x_2046_);
if (v___x_2047_ == 0)
{
lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
lean_inc(v_y_1927_);
lean_inc(v_i_1926_);
lean_inc(v_fvarId_1925_);
v_isSharedCheck_2054_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_2054_ == 0)
{
lean_object* v_unused_2055_; lean_object* v_unused_2056_; lean_object* v_unused_2057_; lean_object* v_unused_2058_; 
v_unused_2055_ = lean_ctor_get(v_c_1609_, 3);
lean_dec(v_unused_2055_);
v_unused_2056_ = lean_ctor_get(v_c_1609_, 2);
lean_dec(v_unused_2056_);
v_unused_2057_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_2057_);
v_unused_2058_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_2058_);
v___x_2049_ = v_c_1609_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_dec(v_c_1609_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
lean_ctor_set(v___x_2049_, 3, v_fst_2044_);
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_fvarId_1925_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v_i_1926_);
lean_ctor_set(v_reuseFailAlloc_2053_, 2, v_y_1927_);
lean_ctor_set(v_reuseFailAlloc_2053_, 3, v_fst_2044_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
v___y_1939_ = v___x_2052_;
goto v___jp_1938_;
}
}
}
else
{
lean_dec(v_fst_2044_);
v___y_1939_ = v_c_1609_;
goto v___jp_1938_;
}
}
v___jp_1938_:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1943_; 
v___x_1940_ = lean_box(v___x_1932_);
v___x_1941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1941_, 0, v___y_1939_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 0, v___x_1941_);
v___x_1943_ = v___x_1936_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v___x_1941_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1930_);
lean_dec_ref_known(v_c_1609_, 4);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
return v___x_1933_;
}
}
else
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
lean_dec_ref(v_instr_1930_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_2060_ = lean_box(v___x_1932_);
v___x_2061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2061_, 0, v_c_1609_);
lean_ctor_set(v___x_2061_, 1, v___x_2060_);
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
return v___x_2062_;
}
}
case 9:
{
lean_object* v_fvarId_2063_; lean_object* v_i_2064_; lean_object* v_offset_2065_; lean_object* v_y_2066_; lean_object* v_ty_2067_; lean_object* v_k_2068_; uint8_t v___x_2069_; lean_object* v_instr_2070_; uint8_t v___x_2071_; uint8_t v___x_2072_; 
v_fvarId_2063_ = lean_ctor_get(v_c_1609_, 0);
v_i_2064_ = lean_ctor_get(v_c_1609_, 1);
v_offset_2065_ = lean_ctor_get(v_c_1609_, 2);
v_y_2066_ = lean_ctor_get(v_c_1609_, 3);
v_ty_2067_ = lean_ctor_get(v_c_1609_, 4);
v_k_2068_ = lean_ctor_get(v_c_1609_, 5);
v___x_2069_ = 1;
v_instr_2070_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_2069_, v_c_1609_);
lean_inc(v_x_1607_);
v___x_2071_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_2070_, v_x_1607_);
v___x_2072_ = 1;
if (v___x_2071_ == 0)
{
lean_object* v___x_2073_; 
lean_inc_ref(v_k_2068_);
lean_inc_ref(v_info_1608_);
lean_inc(v_x_1607_);
v___x_2073_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1607_, v_info_1608_, v_k_2068_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2207_; 
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2076_ = v___x_2073_;
v_isShared_2077_ = v_isSharedCheck_2207_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2073_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2207_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___y_2079_; lean_object* v_snd_2085_; uint8_t v___x_2086_; 
v_snd_2085_ = lean_ctor_get(v_a_2074_, 1);
v___x_2086_ = lean_unbox(v_snd_2085_);
if (v___x_2086_ == 0)
{
lean_object* v_fst_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2188_; 
lean_inc(v_snd_2085_);
lean_del_object(v___x_2076_);
v_fst_2087_ = lean_ctor_get(v_a_2074_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v_a_2074_);
if (v_isSharedCheck_2188_ == 0)
{
lean_object* v_unused_2189_; 
v_unused_2189_ = lean_ctor_get(v_a_2074_, 1);
lean_dec(v_unused_2189_);
v___x_2089_ = v_a_2074_;
v_isShared_2090_ = v_isSharedCheck_2188_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_fst_2087_);
lean_dec(v_a_2074_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2188_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2091_; 
lean_inc(v_x_1607_);
v___x_2091_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_2070_, v_x_1607_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2179_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2179_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2179_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___y_2097_; lean_object* v___y_2105_; uint8_t v___x_2109_; 
v___x_2109_ = lean_unbox(v_a_2092_);
lean_dec(v_a_2092_);
switch(v___x_2109_)
{
case 0:
{
size_t v___x_2110_; size_t v___x_2111_; uint8_t v___x_2112_; 
lean_del_object(v___x_2094_);
lean_del_object(v___x_2089_);
lean_dec(v_snd_2085_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_2110_ = lean_ptr_addr(v_k_2068_);
v___x_2111_ = lean_ptr_addr(v_fst_2087_);
v___x_2112_ = lean_usize_dec_eq(v___x_2110_, v___x_2111_);
if (v___x_2112_ == 0)
{
lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2119_; 
lean_inc_ref(v_ty_2067_);
lean_inc(v_y_2066_);
lean_inc(v_offset_2065_);
lean_inc(v_i_2064_);
lean_inc(v_fvarId_2063_);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_2119_ == 0)
{
lean_object* v_unused_2120_; lean_object* v_unused_2121_; lean_object* v_unused_2122_; lean_object* v_unused_2123_; lean_object* v_unused_2124_; lean_object* v_unused_2125_; 
v_unused_2120_ = lean_ctor_get(v_c_1609_, 5);
lean_dec(v_unused_2120_);
v_unused_2121_ = lean_ctor_get(v_c_1609_, 4);
lean_dec(v_unused_2121_);
v_unused_2122_ = lean_ctor_get(v_c_1609_, 3);
lean_dec(v_unused_2122_);
v_unused_2123_ = lean_ctor_get(v_c_1609_, 2);
lean_dec(v_unused_2123_);
v_unused_2124_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_2124_);
v_unused_2125_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_2125_);
v___x_2114_ = v_c_1609_;
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
else
{
lean_dec(v_c_1609_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v___x_2117_; 
if (v_isShared_2115_ == 0)
{
lean_ctor_set(v___x_2114_, 5, v_fst_2087_);
v___x_2117_ = v___x_2114_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_fvarId_2063_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v_i_2064_);
lean_ctor_set(v_reuseFailAlloc_2118_, 2, v_offset_2065_);
lean_ctor_set(v_reuseFailAlloc_2118_, 3, v_y_2066_);
lean_ctor_set(v_reuseFailAlloc_2118_, 4, v_ty_2067_);
lean_ctor_set(v_reuseFailAlloc_2118_, 5, v_fst_2087_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
v___y_2105_ = v___x_2117_;
goto v___jp_2104_;
}
}
}
else
{
lean_dec(v_fst_2087_);
v___y_2105_ = v_c_1609_;
goto v___jp_2104_;
}
}
case 1:
{
lean_object* v___x_2126_; 
lean_del_object(v___x_2094_);
lean_del_object(v___x_2089_);
lean_dec(v_snd_2085_);
v___x_2126_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1607_, v_info_1608_, v_fst_2087_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
lean_dec_ref(v_info_1608_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2154_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2129_ = v___x_2126_;
v_isShared_2130_ = v_isSharedCheck_2154_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2126_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2154_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___y_2132_; size_t v___x_2138_; size_t v___x_2139_; uint8_t v___x_2140_; 
v___x_2138_ = lean_ptr_addr(v_k_2068_);
v___x_2139_ = lean_ptr_addr(v_a_2127_);
v___x_2140_ = lean_usize_dec_eq(v___x_2138_, v___x_2139_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
lean_inc_ref(v_ty_2067_);
lean_inc(v_y_2066_);
lean_inc(v_offset_2065_);
lean_inc(v_i_2064_);
lean_inc(v_fvarId_2063_);
v_isSharedCheck_2147_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_2147_ == 0)
{
lean_object* v_unused_2148_; lean_object* v_unused_2149_; lean_object* v_unused_2150_; lean_object* v_unused_2151_; lean_object* v_unused_2152_; lean_object* v_unused_2153_; 
v_unused_2148_ = lean_ctor_get(v_c_1609_, 5);
lean_dec(v_unused_2148_);
v_unused_2149_ = lean_ctor_get(v_c_1609_, 4);
lean_dec(v_unused_2149_);
v_unused_2150_ = lean_ctor_get(v_c_1609_, 3);
lean_dec(v_unused_2150_);
v_unused_2151_ = lean_ctor_get(v_c_1609_, 2);
lean_dec(v_unused_2151_);
v_unused_2152_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_2152_);
v_unused_2153_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_2153_);
v___x_2142_ = v_c_1609_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_dec(v_c_1609_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 5, v_a_2127_);
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_fvarId_2063_);
lean_ctor_set(v_reuseFailAlloc_2146_, 1, v_i_2064_);
lean_ctor_set(v_reuseFailAlloc_2146_, 2, v_offset_2065_);
lean_ctor_set(v_reuseFailAlloc_2146_, 3, v_y_2066_);
lean_ctor_set(v_reuseFailAlloc_2146_, 4, v_ty_2067_);
lean_ctor_set(v_reuseFailAlloc_2146_, 5, v_a_2127_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
v___y_2132_ = v___x_2145_;
goto v___jp_2131_;
}
}
}
else
{
lean_dec(v_a_2127_);
v___y_2132_ = v_c_1609_;
goto v___jp_2131_;
}
v___jp_2131_:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2136_; 
v___x_2133_ = lean_box(v___x_2072_);
v___x_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___y_2132_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 0, v___x_2134_);
v___x_2136_ = v___x_2129_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2134_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
else
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2162_; 
lean_dec_ref_known(v_c_1609_, 6);
v_a_2155_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2157_ = v___x_2126_;
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2126_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_a_2155_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
default: 
{
size_t v___x_2163_; size_t v___x_2164_; uint8_t v___x_2165_; 
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_2163_ = lean_ptr_addr(v_k_2068_);
v___x_2164_ = lean_ptr_addr(v_fst_2087_);
v___x_2165_ = lean_usize_dec_eq(v___x_2163_, v___x_2164_);
if (v___x_2165_ == 0)
{
lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_inc_ref(v_ty_2067_);
lean_inc(v_y_2066_);
lean_inc(v_offset_2065_);
lean_inc(v_i_2064_);
lean_inc(v_fvarId_2063_);
v_isSharedCheck_2172_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_2172_ == 0)
{
lean_object* v_unused_2173_; lean_object* v_unused_2174_; lean_object* v_unused_2175_; lean_object* v_unused_2176_; lean_object* v_unused_2177_; lean_object* v_unused_2178_; 
v_unused_2173_ = lean_ctor_get(v_c_1609_, 5);
lean_dec(v_unused_2173_);
v_unused_2174_ = lean_ctor_get(v_c_1609_, 4);
lean_dec(v_unused_2174_);
v_unused_2175_ = lean_ctor_get(v_c_1609_, 3);
lean_dec(v_unused_2175_);
v_unused_2176_ = lean_ctor_get(v_c_1609_, 2);
lean_dec(v_unused_2176_);
v_unused_2177_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_2177_);
v_unused_2178_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_2178_);
v___x_2167_ = v_c_1609_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_dec(v_c_1609_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
lean_ctor_set(v___x_2167_, 5, v_fst_2087_);
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_fvarId_2063_);
lean_ctor_set(v_reuseFailAlloc_2171_, 1, v_i_2064_);
lean_ctor_set(v_reuseFailAlloc_2171_, 2, v_offset_2065_);
lean_ctor_set(v_reuseFailAlloc_2171_, 3, v_y_2066_);
lean_ctor_set(v_reuseFailAlloc_2171_, 4, v_ty_2067_);
lean_ctor_set(v_reuseFailAlloc_2171_, 5, v_fst_2087_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
v___y_2097_ = v___x_2170_;
goto v___jp_2096_;
}
}
}
else
{
lean_dec(v_fst_2087_);
v___y_2097_ = v_c_1609_;
goto v___jp_2096_;
}
}
}
v___jp_2096_:
{
lean_object* v___x_2099_; 
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 0, v___y_2097_);
v___x_2099_ = v___x_2089_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___y_2097_);
lean_ctor_set(v_reuseFailAlloc_2103_, 1, v_snd_2085_);
v___x_2099_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2101_; 
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2099_);
v___x_2101_ = v___x_2094_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2099_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
}
v___jp_2104_:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2106_ = lean_box(v___x_2072_);
v___x_2107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2107_, 0, v___y_2105_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
v___x_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
return v___x_2108_;
}
}
}
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
lean_del_object(v___x_2089_);
lean_dec(v_fst_2087_);
lean_dec(v_snd_2085_);
lean_dec_ref_known(v_c_1609_, 6);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v_a_2180_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2091_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2091_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
}
else
{
lean_object* v_fst_2190_; size_t v___x_2191_; size_t v___x_2192_; uint8_t v___x_2193_; 
lean_dec_ref(v_instr_2070_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v_fst_2190_ = lean_ctor_get(v_a_2074_, 0);
lean_inc(v_fst_2190_);
lean_dec(v_a_2074_);
v___x_2191_ = lean_ptr_addr(v_k_2068_);
v___x_2192_ = lean_ptr_addr(v_fst_2190_);
v___x_2193_ = lean_usize_dec_eq(v___x_2191_, v___x_2192_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2200_; 
lean_inc_ref(v_ty_2067_);
lean_inc(v_y_2066_);
lean_inc(v_offset_2065_);
lean_inc(v_i_2064_);
lean_inc(v_fvarId_2063_);
v_isSharedCheck_2200_ = !lean_is_exclusive(v_c_1609_);
if (v_isSharedCheck_2200_ == 0)
{
lean_object* v_unused_2201_; lean_object* v_unused_2202_; lean_object* v_unused_2203_; lean_object* v_unused_2204_; lean_object* v_unused_2205_; lean_object* v_unused_2206_; 
v_unused_2201_ = lean_ctor_get(v_c_1609_, 5);
lean_dec(v_unused_2201_);
v_unused_2202_ = lean_ctor_get(v_c_1609_, 4);
lean_dec(v_unused_2202_);
v_unused_2203_ = lean_ctor_get(v_c_1609_, 3);
lean_dec(v_unused_2203_);
v_unused_2204_ = lean_ctor_get(v_c_1609_, 2);
lean_dec(v_unused_2204_);
v_unused_2205_ = lean_ctor_get(v_c_1609_, 1);
lean_dec(v_unused_2205_);
v_unused_2206_ = lean_ctor_get(v_c_1609_, 0);
lean_dec(v_unused_2206_);
v___x_2195_ = v_c_1609_;
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
else
{
lean_dec(v_c_1609_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2198_; 
if (v_isShared_2196_ == 0)
{
lean_ctor_set(v___x_2195_, 5, v_fst_2190_);
v___x_2198_ = v___x_2195_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_fvarId_2063_);
lean_ctor_set(v_reuseFailAlloc_2199_, 1, v_i_2064_);
lean_ctor_set(v_reuseFailAlloc_2199_, 2, v_offset_2065_);
lean_ctor_set(v_reuseFailAlloc_2199_, 3, v_y_2066_);
lean_ctor_set(v_reuseFailAlloc_2199_, 4, v_ty_2067_);
lean_ctor_set(v_reuseFailAlloc_2199_, 5, v_fst_2190_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
v___y_2079_ = v___x_2198_;
goto v___jp_2078_;
}
}
}
else
{
lean_dec(v_fst_2190_);
v___y_2079_ = v_c_1609_;
goto v___jp_2078_;
}
}
v___jp_2078_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v___x_2080_ = lean_box(v___x_2072_);
v___x_2081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2081_, 0, v___y_2079_);
lean_ctor_set(v___x_2081_, 1, v___x_2080_);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 0, v___x_2081_);
v___x_2083_ = v___x_2076_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2081_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
}
else
{
lean_dec_ref(v_instr_2070_);
lean_dec_ref_known(v_c_1609_, 6);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
return v___x_2073_;
}
}
else
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
lean_dec_ref(v_instr_2070_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_2208_ = lean_box(v___x_2072_);
v___x_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2209_, 0, v_c_1609_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2209_);
return v___x_2210_;
}
}
default: 
{
lean_object* v___x_2211_; lean_object* v___x_2212_; 
lean_dec_ref(v_c_1609_);
lean_dec_ref(v_info_1608_);
lean_dec(v_x_1607_);
v___x_2211_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1);
v___x_2212_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_2211_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
return v___x_2212_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(lean_object* v_x_2213_, lean_object* v_info_2214_, lean_object* v_c_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v___x_2222_; 
lean_inc_ref(v_info_2214_);
lean_inc(v_x_2213_);
v___x_2222_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_2213_, v_info_2214_, v_c_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2235_; 
v_a_2223_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2235_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2235_ == 0)
{
v___x_2225_ = v___x_2222_;
v_isShared_2226_ = v_isSharedCheck_2235_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2222_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2235_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v_snd_2227_; uint8_t v___x_2228_; 
v_snd_2227_ = lean_ctor_get(v_a_2223_, 1);
v___x_2228_ = lean_unbox(v_snd_2227_);
if (v___x_2228_ == 0)
{
lean_object* v_fst_2229_; lean_object* v___x_2230_; 
lean_del_object(v___x_2225_);
v_fst_2229_ = lean_ctor_get(v_a_2223_, 0);
lean_inc(v_fst_2229_);
lean_dec(v_a_2223_);
v___x_2230_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_2213_, v_info_2214_, v_fst_2229_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_);
lean_dec_ref(v_info_2214_);
return v___x_2230_;
}
else
{
lean_object* v_fst_2231_; lean_object* v___x_2233_; 
lean_dec_ref(v_info_2214_);
lean_dec(v_x_2213_);
v_fst_2231_ = lean_ctor_get(v_a_2223_, 0);
lean_inc(v_fst_2231_);
lean_dec(v_a_2223_);
if (v_isShared_2226_ == 0)
{
lean_ctor_set(v___x_2225_, 0, v_fst_2231_);
v___x_2233_ = v___x_2225_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_fst_2231_);
v___x_2233_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
return v___x_2233_;
}
}
}
}
else
{
lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2243_; 
lean_dec_ref(v_info_2214_);
lean_dec(v_x_2213_);
v_a_2236_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2238_ = v___x_2222_;
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_dec(v___x_2222_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2241_; 
if (v_isShared_2239_ == 0)
{
v___x_2241_ = v___x_2238_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_a_2236_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1___boxed(lean_object* v_x_2244_, lean_object* v_info_2245_, lean_object* v_i_2246_, lean_object* v_as_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_2244_, v_info_2245_, v_i_2246_, v_as_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec_ref(v___y_2248_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___boxed(lean_object* v_x_2255_, lean_object* v_info_2256_, lean_object* v_c_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_){
_start:
{
lean_object* v_res_2264_; 
v_res_2264_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_2255_, v_info_2256_, v_c_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec_ref(v___y_2258_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(uint8_t v_pu_2265_, lean_object* v_alt_2266_, lean_object* v_f_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v___x_2274_; 
v___x_2274_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_2266_, v_f_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___boxed(lean_object* v_pu_2275_, lean_object* v_alt_2276_, lean_object* v_f_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
uint8_t v_pu_boxed_2284_; lean_object* v_res_2285_; 
v_pu_boxed_2284_ = lean_unbox(v_pu_2275_);
v_res_2285_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(v_pu_boxed_2284_, v_alt_2276_, v_f_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec_ref(v___y_2278_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(lean_object* v_msg_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_){
_start:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v_toApplicative_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2329_; 
v___x_2293_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_2294_ = l_StateRefT_x27_instMonad___redArg(v___x_2293_);
v_toApplicative_2295_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2329_ == 0)
{
lean_object* v_unused_2330_; 
v_unused_2330_ = lean_ctor_get(v___x_2294_, 1);
lean_dec(v_unused_2330_);
v___x_2297_ = v___x_2294_;
v_isShared_2298_ = v_isSharedCheck_2329_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_toApplicative_2295_);
lean_dec(v___x_2294_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2329_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v_toFunctor_2299_; lean_object* v_toSeq_2300_; lean_object* v_toSeqLeft_2301_; lean_object* v_toSeqRight_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2327_; 
v_toFunctor_2299_ = lean_ctor_get(v_toApplicative_2295_, 0);
v_toSeq_2300_ = lean_ctor_get(v_toApplicative_2295_, 2);
v_toSeqLeft_2301_ = lean_ctor_get(v_toApplicative_2295_, 3);
v_toSeqRight_2302_ = lean_ctor_get(v_toApplicative_2295_, 4);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_toApplicative_2295_);
if (v_isSharedCheck_2327_ == 0)
{
lean_object* v_unused_2328_; 
v_unused_2328_ = lean_ctor_get(v_toApplicative_2295_, 1);
lean_dec(v_unused_2328_);
v___x_2304_ = v_toApplicative_2295_;
v_isShared_2305_ = v_isSharedCheck_2327_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_toSeqRight_2302_);
lean_inc(v_toSeqLeft_2301_);
lean_inc(v_toSeq_2300_);
lean_inc(v_toFunctor_2299_);
lean_dec(v_toApplicative_2295_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2327_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___f_2306_; lean_object* v___f_2307_; lean_object* v___f_2308_; lean_object* v___f_2309_; lean_object* v___x_2310_; lean_object* v___f_2311_; lean_object* v___f_2312_; lean_object* v___f_2313_; lean_object* v___x_2315_; 
v___f_2306_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_2307_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_2299_);
v___f_2308_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2308_, 0, v_toFunctor_2299_);
v___f_2309_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2309_, 0, v_toFunctor_2299_);
v___x_2310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___f_2308_);
lean_ctor_set(v___x_2310_, 1, v___f_2309_);
v___f_2311_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2311_, 0, v_toSeqRight_2302_);
v___f_2312_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2312_, 0, v_toSeqLeft_2301_);
v___f_2313_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2313_, 0, v_toSeq_2300_);
if (v_isShared_2305_ == 0)
{
lean_ctor_set(v___x_2304_, 4, v___f_2311_);
lean_ctor_set(v___x_2304_, 3, v___f_2312_);
lean_ctor_set(v___x_2304_, 2, v___f_2313_);
lean_ctor_set(v___x_2304_, 1, v___f_2306_);
lean_ctor_set(v___x_2304_, 0, v___x_2310_);
v___x_2315_ = v___x_2304_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v___x_2310_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v___f_2306_);
lean_ctor_set(v_reuseFailAlloc_2326_, 2, v___f_2313_);
lean_ctor_set(v_reuseFailAlloc_2326_, 3, v___f_2312_);
lean_ctor_set(v_reuseFailAlloc_2326_, 4, v___f_2311_);
v___x_2315_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
lean_object* v___x_2317_; 
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 1, v___f_2307_);
lean_ctor_set(v___x_2297_, 0, v___x_2315_);
v___x_2317_ = v___x_2297_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2315_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v___f_2307_);
v___x_2317_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_4974__overap_2323_; lean_object* v___x_2324_; 
v___x_2318_ = l_StateRefT_x27_instMonad___redArg(v___x_2317_);
v___x_2319_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_2320_ = l_instInhabitedOfMonad___redArg(v___x_2318_, v___x_2319_);
v___x_2321_ = l_instInhabitedReaderT___redArg(v___x_2320_);
v___x_2322_ = l_instInhabitedReaderT___redArg(v___x_2321_);
v___x_4974__overap_2323_ = lean_panic_fn_borrowed(v___x_2322_, v_msg_2286_);
lean_dec(v___x_2322_);
lean_inc(v___y_2291_);
lean_inc_ref(v___y_2290_);
lean_inc(v___y_2289_);
lean_inc_ref(v___y_2288_);
lean_inc_ref(v___y_2287_);
v___x_2324_ = lean_apply_6(v___x_4974__overap_2323_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_, lean_box(0));
return v___x_2324_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4___boxed(lean_object* v_msg_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v_msg_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec_ref(v___y_2332_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(lean_object* v_a_2339_, lean_object* v_fallback_2340_, lean_object* v_x_2341_){
_start:
{
if (lean_obj_tag(v_x_2341_) == 0)
{
lean_inc(v_fallback_2340_);
return v_fallback_2340_;
}
else
{
lean_object* v_key_2342_; lean_object* v_value_2343_; lean_object* v_tail_2344_; uint8_t v___x_2345_; 
v_key_2342_ = lean_ctor_get(v_x_2341_, 0);
v_value_2343_ = lean_ctor_get(v_x_2341_, 1);
v_tail_2344_ = lean_ctor_get(v_x_2341_, 2);
v___x_2345_ = l_Lean_instBEqFVarId_beq(v_key_2342_, v_a_2339_);
if (v___x_2345_ == 0)
{
v_x_2341_ = v_tail_2344_;
goto _start;
}
else
{
lean_inc(v_value_2343_);
return v_value_2343_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg___boxed(lean_object* v_a_2347_, lean_object* v_fallback_2348_, lean_object* v_x_2349_){
_start:
{
lean_object* v_res_2350_; 
v_res_2350_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2347_, v_fallback_2348_, v_x_2349_);
lean_dec(v_x_2349_);
lean_dec(v_fallback_2348_);
lean_dec(v_a_2347_);
return v_res_2350_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(lean_object* v_m_2351_, lean_object* v_a_2352_, lean_object* v_fallback_2353_){
_start:
{
lean_object* v_buckets_2354_; lean_object* v___x_2355_; uint64_t v___x_2356_; uint64_t v___x_2357_; uint64_t v___x_2358_; uint64_t v_fold_2359_; uint64_t v___x_2360_; uint64_t v___x_2361_; uint64_t v___x_2362_; size_t v___x_2363_; size_t v___x_2364_; size_t v___x_2365_; size_t v___x_2366_; size_t v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v_buckets_2354_ = lean_ctor_get(v_m_2351_, 1);
v___x_2355_ = lean_array_get_size(v_buckets_2354_);
v___x_2356_ = l_Lean_instHashableFVarId_hash(v_a_2352_);
v___x_2357_ = 32ULL;
v___x_2358_ = lean_uint64_shift_right(v___x_2356_, v___x_2357_);
v_fold_2359_ = lean_uint64_xor(v___x_2356_, v___x_2358_);
v___x_2360_ = 16ULL;
v___x_2361_ = lean_uint64_shift_right(v_fold_2359_, v___x_2360_);
v___x_2362_ = lean_uint64_xor(v_fold_2359_, v___x_2361_);
v___x_2363_ = lean_uint64_to_usize(v___x_2362_);
v___x_2364_ = lean_usize_of_nat(v___x_2355_);
v___x_2365_ = ((size_t)1ULL);
v___x_2366_ = lean_usize_sub(v___x_2364_, v___x_2365_);
v___x_2367_ = lean_usize_land(v___x_2363_, v___x_2366_);
v___x_2368_ = lean_array_uget_borrowed(v_buckets_2354_, v___x_2367_);
v___x_2369_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2352_, v_fallback_2353_, v___x_2368_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg___boxed(lean_object* v_m_2370_, lean_object* v_a_2371_, lean_object* v_fallback_2372_){
_start:
{
lean_object* v_res_2373_; 
v_res_2373_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_2370_, v_a_2371_, v_fallback_2372_);
lean_dec(v_fallback_2372_);
lean_dec(v_a_2371_);
lean_dec_ref(v_m_2370_);
return v_res_2373_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(lean_object* v_x_2374_, lean_object* v_x_2375_, lean_object* v_x_2376_, lean_object* v_x_2377_){
_start:
{
lean_object* v_ks_2378_; lean_object* v_vs_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2403_; 
v_ks_2378_ = lean_ctor_get(v_x_2374_, 0);
v_vs_2379_ = lean_ctor_get(v_x_2374_, 1);
v_isSharedCheck_2403_ = !lean_is_exclusive(v_x_2374_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2381_ = v_x_2374_;
v_isShared_2382_ = v_isSharedCheck_2403_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_vs_2379_);
lean_inc(v_ks_2378_);
lean_dec(v_x_2374_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2403_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2383_; uint8_t v___x_2384_; 
v___x_2383_ = lean_array_get_size(v_ks_2378_);
v___x_2384_ = lean_nat_dec_lt(v_x_2375_, v___x_2383_);
if (v___x_2384_ == 0)
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2388_; 
lean_dec(v_x_2375_);
v___x_2385_ = lean_array_push(v_ks_2378_, v_x_2376_);
v___x_2386_ = lean_array_push(v_vs_2379_, v_x_2377_);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 1, v___x_2386_);
lean_ctor_set(v___x_2381_, 0, v___x_2385_);
v___x_2388_ = v___x_2381_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v___x_2385_);
lean_ctor_set(v_reuseFailAlloc_2389_, 1, v___x_2386_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
else
{
lean_object* v_k_x27_2390_; uint8_t v___x_2391_; 
v_k_x27_2390_ = lean_array_fget_borrowed(v_ks_2378_, v_x_2375_);
v___x_2391_ = l_Lean_instBEqFVarId_beq(v_x_2376_, v_k_x27_2390_);
if (v___x_2391_ == 0)
{
lean_object* v___x_2393_; 
if (v_isShared_2382_ == 0)
{
v___x_2393_ = v___x_2381_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_ks_2378_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v_vs_2379_);
v___x_2393_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = lean_unsigned_to_nat(1u);
v___x_2395_ = lean_nat_add(v_x_2375_, v___x_2394_);
lean_dec(v_x_2375_);
v_x_2374_ = v___x_2393_;
v_x_2375_ = v___x_2395_;
goto _start;
}
}
else
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2401_; 
v___x_2398_ = lean_array_fset(v_ks_2378_, v_x_2375_, v_x_2376_);
v___x_2399_ = lean_array_fset(v_vs_2379_, v_x_2375_, v_x_2377_);
lean_dec(v_x_2375_);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 1, v___x_2399_);
lean_ctor_set(v___x_2381_, 0, v___x_2398_);
v___x_2401_ = v___x_2381_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v___x_2398_);
lean_ctor_set(v_reuseFailAlloc_2402_, 1, v___x_2399_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(lean_object* v_n_2404_, lean_object* v_k_2405_, lean_object* v_v_2406_){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = lean_unsigned_to_nat(0u);
v___x_2408_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_n_2404_, v___x_2407_, v_k_2405_, v_v_2406_);
return v___x_2408_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(lean_object* v_x_2410_, size_t v_x_2411_, size_t v_x_2412_, lean_object* v_x_2413_, lean_object* v_x_2414_){
_start:
{
if (lean_obj_tag(v_x_2410_) == 0)
{
lean_object* v_es_2415_; size_t v___x_2416_; size_t v___x_2417_; lean_object* v_j_2418_; lean_object* v___x_2419_; uint8_t v___x_2420_; 
v_es_2415_ = lean_ctor_get(v_x_2410_, 0);
v___x_2416_ = ((size_t)31ULL);
v___x_2417_ = lean_usize_land(v_x_2411_, v___x_2416_);
v_j_2418_ = lean_usize_to_nat(v___x_2417_);
v___x_2419_ = lean_array_get_size(v_es_2415_);
v___x_2420_ = lean_nat_dec_lt(v_j_2418_, v___x_2419_);
if (v___x_2420_ == 0)
{
lean_dec(v_j_2418_);
lean_dec(v_x_2414_);
lean_dec(v_x_2413_);
return v_x_2410_;
}
else
{
lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2459_; 
lean_inc_ref(v_es_2415_);
v_isSharedCheck_2459_ = !lean_is_exclusive(v_x_2410_);
if (v_isSharedCheck_2459_ == 0)
{
lean_object* v_unused_2460_; 
v_unused_2460_ = lean_ctor_get(v_x_2410_, 0);
lean_dec(v_unused_2460_);
v___x_2422_ = v_x_2410_;
v_isShared_2423_ = v_isSharedCheck_2459_;
goto v_resetjp_2421_;
}
else
{
lean_dec(v_x_2410_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2459_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v_v_2424_; lean_object* v___x_2425_; lean_object* v_xs_x27_2426_; lean_object* v___y_2428_; 
v_v_2424_ = lean_array_fget(v_es_2415_, v_j_2418_);
v___x_2425_ = lean_box(0);
v_xs_x27_2426_ = lean_array_fset(v_es_2415_, v_j_2418_, v___x_2425_);
switch(lean_obj_tag(v_v_2424_))
{
case 0:
{
lean_object* v_key_2433_; lean_object* v_val_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2444_; 
v_key_2433_ = lean_ctor_get(v_v_2424_, 0);
v_val_2434_ = lean_ctor_get(v_v_2424_, 1);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_v_2424_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2436_ = v_v_2424_;
v_isShared_2437_ = v_isSharedCheck_2444_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_val_2434_);
lean_inc(v_key_2433_);
lean_dec(v_v_2424_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2444_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
uint8_t v___x_2438_; 
v___x_2438_ = l_Lean_instBEqFVarId_beq(v_x_2413_, v_key_2433_);
if (v___x_2438_ == 0)
{
lean_object* v___x_2439_; lean_object* v___x_2440_; 
lean_del_object(v___x_2436_);
v___x_2439_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2433_, v_val_2434_, v_x_2413_, v_x_2414_);
v___x_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2439_);
v___y_2428_ = v___x_2440_;
goto v___jp_2427_;
}
else
{
lean_object* v___x_2442_; 
lean_dec(v_val_2434_);
lean_dec(v_key_2433_);
if (v_isShared_2437_ == 0)
{
lean_ctor_set(v___x_2436_, 1, v_x_2414_);
lean_ctor_set(v___x_2436_, 0, v_x_2413_);
v___x_2442_ = v___x_2436_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_x_2413_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v_x_2414_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
v___y_2428_ = v___x_2442_;
goto v___jp_2427_;
}
}
}
}
case 1:
{
lean_object* v_node_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2457_; 
v_node_2445_ = lean_ctor_get(v_v_2424_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v_v_2424_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2447_ = v_v_2424_;
v_isShared_2448_ = v_isSharedCheck_2457_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_node_2445_);
lean_dec(v_v_2424_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2457_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
size_t v___x_2449_; size_t v___x_2450_; size_t v___x_2451_; size_t v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2455_; 
v___x_2449_ = ((size_t)5ULL);
v___x_2450_ = lean_usize_shift_right(v_x_2411_, v___x_2449_);
v___x_2451_ = ((size_t)1ULL);
v___x_2452_ = lean_usize_add(v_x_2412_, v___x_2451_);
v___x_2453_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_node_2445_, v___x_2450_, v___x_2452_, v_x_2413_, v_x_2414_);
if (v_isShared_2448_ == 0)
{
lean_ctor_set(v___x_2447_, 0, v___x_2453_);
v___x_2455_ = v___x_2447_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v___x_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
v___y_2428_ = v___x_2455_;
goto v___jp_2427_;
}
}
}
default: 
{
lean_object* v___x_2458_; 
v___x_2458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2458_, 0, v_x_2413_);
lean_ctor_set(v___x_2458_, 1, v_x_2414_);
v___y_2428_ = v___x_2458_;
goto v___jp_2427_;
}
}
v___jp_2427_:
{
lean_object* v___x_2429_; lean_object* v___x_2431_; 
v___x_2429_ = lean_array_fset(v_xs_x27_2426_, v_j_2418_, v___y_2428_);
lean_dec(v_j_2418_);
if (v_isShared_2423_ == 0)
{
lean_ctor_set(v___x_2422_, 0, v___x_2429_);
v___x_2431_ = v___x_2422_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v___x_2429_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
}
else
{
lean_object* v_ks_2461_; lean_object* v_vs_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2480_; 
v_ks_2461_ = lean_ctor_get(v_x_2410_, 0);
v_vs_2462_ = lean_ctor_get(v_x_2410_, 1);
v_isSharedCheck_2480_ = !lean_is_exclusive(v_x_2410_);
if (v_isSharedCheck_2480_ == 0)
{
v___x_2464_ = v_x_2410_;
v_isShared_2465_ = v_isSharedCheck_2480_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_vs_2462_);
lean_inc(v_ks_2461_);
lean_dec(v_x_2410_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2480_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v_ks_2461_);
lean_ctor_set(v_reuseFailAlloc_2479_, 1, v_vs_2462_);
v___x_2467_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
lean_object* v_newNode_2468_; size_t v___x_2469_; uint8_t v___x_2470_; 
v_newNode_2468_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v___x_2467_, v_x_2413_, v_x_2414_);
v___x_2469_ = ((size_t)7ULL);
v___x_2470_ = lean_usize_dec_le(v___x_2469_, v_x_2412_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; lean_object* v___x_2472_; uint8_t v___x_2473_; 
v___x_2471_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2468_);
v___x_2472_ = lean_unsigned_to_nat(4u);
v___x_2473_ = lean_nat_dec_lt(v___x_2471_, v___x_2472_);
lean_dec(v___x_2471_);
if (v___x_2473_ == 0)
{
lean_object* v_ks_2474_; lean_object* v_vs_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v_ks_2474_ = lean_ctor_get(v_newNode_2468_, 0);
lean_inc_ref(v_ks_2474_);
v_vs_2475_ = lean_ctor_get(v_newNode_2468_, 1);
lean_inc_ref(v_vs_2475_);
lean_dec_ref(v_newNode_2468_);
v___x_2476_ = lean_unsigned_to_nat(0u);
v___x_2477_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0);
v___x_2478_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_x_2412_, v_ks_2474_, v_vs_2475_, v___x_2476_, v___x_2477_);
lean_dec_ref(v_vs_2475_);
lean_dec_ref(v_ks_2474_);
return v___x_2478_;
}
else
{
return v_newNode_2468_;
}
}
else
{
return v_newNode_2468_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(size_t v_depth_2481_, lean_object* v_keys_2482_, lean_object* v_vals_2483_, lean_object* v_i_2484_, lean_object* v_entries_2485_){
_start:
{
lean_object* v___x_2486_; uint8_t v___x_2487_; 
v___x_2486_ = lean_array_get_size(v_keys_2482_);
v___x_2487_ = lean_nat_dec_lt(v_i_2484_, v___x_2486_);
if (v___x_2487_ == 0)
{
lean_dec(v_i_2484_);
return v_entries_2485_;
}
else
{
lean_object* v_k_2488_; lean_object* v_v_2489_; uint64_t v___x_2490_; size_t v_h_2491_; size_t v___x_2492_; lean_object* v___x_2493_; size_t v___x_2494_; size_t v___x_2495_; size_t v___x_2496_; size_t v_h_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v_k_2488_ = lean_array_fget_borrowed(v_keys_2482_, v_i_2484_);
v_v_2489_ = lean_array_fget_borrowed(v_vals_2483_, v_i_2484_);
v___x_2490_ = l_Lean_instHashableFVarId_hash(v_k_2488_);
v_h_2491_ = lean_uint64_to_usize(v___x_2490_);
v___x_2492_ = ((size_t)5ULL);
v___x_2493_ = lean_unsigned_to_nat(1u);
v___x_2494_ = ((size_t)1ULL);
v___x_2495_ = lean_usize_sub(v_depth_2481_, v___x_2494_);
v___x_2496_ = lean_usize_mul(v___x_2492_, v___x_2495_);
v_h_2497_ = lean_usize_shift_right(v_h_2491_, v___x_2496_);
v___x_2498_ = lean_nat_add(v_i_2484_, v___x_2493_);
lean_dec(v_i_2484_);
lean_inc(v_v_2489_);
lean_inc(v_k_2488_);
v___x_2499_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_entries_2485_, v_h_2497_, v_depth_2481_, v_k_2488_, v_v_2489_);
v_i_2484_ = v___x_2498_;
v_entries_2485_ = v___x_2499_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_2501_, lean_object* v_keys_2502_, lean_object* v_vals_2503_, lean_object* v_i_2504_, lean_object* v_entries_2505_){
_start:
{
size_t v_depth_boxed_2506_; lean_object* v_res_2507_; 
v_depth_boxed_2506_ = lean_unbox_usize(v_depth_2501_);
lean_dec(v_depth_2501_);
v_res_2507_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_boxed_2506_, v_keys_2502_, v_vals_2503_, v_i_2504_, v_entries_2505_);
lean_dec_ref(v_vals_2503_);
lean_dec_ref(v_keys_2502_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___boxed(lean_object* v_x_2508_, lean_object* v_x_2509_, lean_object* v_x_2510_, lean_object* v_x_2511_, lean_object* v_x_2512_){
_start:
{
size_t v_x_5618__boxed_2513_; size_t v_x_5619__boxed_2514_; lean_object* v_res_2515_; 
v_x_5618__boxed_2513_ = lean_unbox_usize(v_x_2509_);
lean_dec(v_x_2509_);
v_x_5619__boxed_2514_ = lean_unbox_usize(v_x_2510_);
lean_dec(v_x_2510_);
v_res_2515_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2508_, v_x_5618__boxed_2513_, v_x_5619__boxed_2514_, v_x_2511_, v_x_2512_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(lean_object* v_x_2516_, lean_object* v_x_2517_, lean_object* v_x_2518_){
_start:
{
uint64_t v___x_2519_; size_t v___x_2520_; size_t v___x_2521_; lean_object* v___x_2522_; 
v___x_2519_ = l_Lean_instHashableFVarId_hash(v_x_2517_);
v___x_2520_ = lean_uint64_to_usize(v___x_2519_);
v___x_2521_ = ((size_t)1ULL);
v___x_2522_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2516_, v___x_2520_, v___x_2521_, v_x_2517_, v_x_2518_);
return v___x_2522_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_2523_, lean_object* v_i_2524_, lean_object* v_k_2525_){
_start:
{
lean_object* v___x_2526_; uint8_t v___x_2527_; 
v___x_2526_ = lean_array_get_size(v_keys_2523_);
v___x_2527_ = lean_nat_dec_lt(v_i_2524_, v___x_2526_);
if (v___x_2527_ == 0)
{
lean_dec(v_i_2524_);
return v___x_2527_;
}
else
{
lean_object* v_k_x27_2528_; uint8_t v___x_2529_; 
v_k_x27_2528_ = lean_array_fget_borrowed(v_keys_2523_, v_i_2524_);
v___x_2529_ = l_Lean_instBEqFVarId_beq(v_k_2525_, v_k_x27_2528_);
if (v___x_2529_ == 0)
{
lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = lean_unsigned_to_nat(1u);
v___x_2531_ = lean_nat_add(v_i_2524_, v___x_2530_);
lean_dec(v_i_2524_);
v_i_2524_ = v___x_2531_;
goto _start;
}
else
{
lean_dec(v_i_2524_);
return v___x_2527_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_2533_, lean_object* v_i_2534_, lean_object* v_k_2535_){
_start:
{
uint8_t v_res_2536_; lean_object* v_r_2537_; 
v_res_2536_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2533_, v_i_2534_, v_k_2535_);
lean_dec(v_k_2535_);
lean_dec_ref(v_keys_2533_);
v_r_2537_ = lean_box(v_res_2536_);
return v_r_2537_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(lean_object* v_x_2538_, size_t v_x_2539_, lean_object* v_x_2540_){
_start:
{
if (lean_obj_tag(v_x_2538_) == 0)
{
lean_object* v_es_2541_; lean_object* v___x_2542_; size_t v___x_2543_; size_t v___x_2544_; lean_object* v_j_2545_; lean_object* v___x_2546_; 
v_es_2541_ = lean_ctor_get(v_x_2538_, 0);
v___x_2542_ = lean_box(2);
v___x_2543_ = ((size_t)31ULL);
v___x_2544_ = lean_usize_land(v_x_2539_, v___x_2543_);
v_j_2545_ = lean_usize_to_nat(v___x_2544_);
v___x_2546_ = lean_array_get_borrowed(v___x_2542_, v_es_2541_, v_j_2545_);
lean_dec(v_j_2545_);
switch(lean_obj_tag(v___x_2546_))
{
case 0:
{
lean_object* v_key_2547_; uint8_t v___x_2548_; 
v_key_2547_ = lean_ctor_get(v___x_2546_, 0);
v___x_2548_ = l_Lean_instBEqFVarId_beq(v_x_2540_, v_key_2547_);
return v___x_2548_;
}
case 1:
{
lean_object* v_node_2549_; size_t v___x_2550_; size_t v___x_2551_; 
v_node_2549_ = lean_ctor_get(v___x_2546_, 0);
v___x_2550_ = ((size_t)5ULL);
v___x_2551_ = lean_usize_shift_right(v_x_2539_, v___x_2550_);
v_x_2538_ = v_node_2549_;
v_x_2539_ = v___x_2551_;
goto _start;
}
default: 
{
uint8_t v___x_2553_; 
v___x_2553_ = 0;
return v___x_2553_;
}
}
}
else
{
lean_object* v_ks_2554_; lean_object* v___x_2555_; uint8_t v___x_2556_; 
v_ks_2554_ = lean_ctor_get(v_x_2538_, 0);
v___x_2555_ = lean_unsigned_to_nat(0u);
v___x_2556_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_ks_2554_, v___x_2555_, v_x_2540_);
return v___x_2556_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg___boxed(lean_object* v_x_2557_, lean_object* v_x_2558_, lean_object* v_x_2559_){
_start:
{
size_t v_x_5796__boxed_2560_; uint8_t v_res_2561_; lean_object* v_r_2562_; 
v_x_5796__boxed_2560_ = lean_unbox_usize(v_x_2558_);
lean_dec(v_x_2558_);
v_res_2561_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2557_, v_x_5796__boxed_2560_, v_x_2559_);
lean_dec(v_x_2559_);
lean_dec_ref(v_x_2557_);
v_r_2562_ = lean_box(v_res_2561_);
return v_r_2562_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(lean_object* v_x_2563_, lean_object* v_x_2564_){
_start:
{
uint64_t v___x_2565_; size_t v___x_2566_; uint8_t v___x_2567_; 
v___x_2565_ = l_Lean_instHashableFVarId_hash(v_x_2564_);
v___x_2566_ = lean_uint64_to_usize(v___x_2565_);
v___x_2567_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2563_, v___x_2566_, v_x_2564_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg___boxed(lean_object* v_x_2568_, lean_object* v_x_2569_){
_start:
{
uint8_t v_res_2570_; lean_object* v_r_2571_; 
v_res_2570_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2568_, v_x_2569_);
lean_dec(v_x_2569_);
lean_dec_ref(v_x_2568_);
v_r_2571_ = lean_box(v_res_2570_);
return v_r_2571_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1(void){
_start:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2573_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_2574_ = lean_unsigned_to_nat(59u);
v___x_2575_ = lean_unsigned_to_nat(281u);
v___x_2576_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0));
v___x_2577_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_2578_ = l_mkPanicMessageWithDecl(v___x_2577_, v___x_2576_, v___x_2575_, v___x_2574_, v___x_2573_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(lean_object* v_c_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_){
_start:
{
switch(lean_obj_tag(v_c_2579_))
{
case 0:
{
lean_object* v_decl_2586_; lean_object* v_k_2587_; lean_object* v___x_2588_; 
v_decl_2586_ = lean_ctor_get(v_c_2579_, 0);
v_k_2587_ = lean_ctor_get(v_c_2579_, 1);
lean_inc_ref(v_k_2587_);
v___x_2588_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2587_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2611_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2591_ = v___x_2588_;
v_isShared_2592_ = v_isSharedCheck_2611_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2588_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2611_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
size_t v___x_2593_; size_t v___x_2594_; uint8_t v___x_2595_; 
v___x_2593_ = lean_ptr_addr(v_k_2587_);
v___x_2594_ = lean_ptr_addr(v_a_2589_);
v___x_2595_ = lean_usize_dec_eq(v___x_2593_, v___x_2594_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2605_; 
lean_inc_ref(v_decl_2586_);
v_isSharedCheck_2605_ = !lean_is_exclusive(v_c_2579_);
if (v_isSharedCheck_2605_ == 0)
{
lean_object* v_unused_2606_; lean_object* v_unused_2607_; 
v_unused_2606_ = lean_ctor_get(v_c_2579_, 1);
lean_dec(v_unused_2606_);
v_unused_2607_ = lean_ctor_get(v_c_2579_, 0);
lean_dec(v_unused_2607_);
v___x_2597_ = v_c_2579_;
v_isShared_2598_ = v_isSharedCheck_2605_;
goto v_resetjp_2596_;
}
else
{
lean_dec(v_c_2579_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2605_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2600_; 
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 1, v_a_2589_);
v___x_2600_ = v___x_2597_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_decl_2586_);
lean_ctor_set(v_reuseFailAlloc_2604_, 1, v_a_2589_);
v___x_2600_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
lean_object* v___x_2602_; 
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 0, v___x_2600_);
v___x_2602_ = v___x_2591_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v___x_2600_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
}
}
else
{
lean_object* v___x_2609_; 
lean_dec(v_a_2589_);
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 0, v_c_2579_);
v___x_2609_ = v___x_2591_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_c_2579_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2579_, 2);
return v___x_2588_;
}
}
case 2:
{
lean_object* v_decl_2612_; lean_object* v_k_2613_; lean_object* v_params_2614_; lean_object* v_type_2615_; lean_object* v_value_2616_; uint8_t v___x_2617_; lean_object* v___x_2618_; 
v_decl_2612_ = lean_ctor_get(v_c_2579_, 0);
v_k_2613_ = lean_ctor_get(v_c_2579_, 1);
v_params_2614_ = lean_ctor_get(v_decl_2612_, 2);
v_type_2615_ = lean_ctor_get(v_decl_2612_, 3);
v_value_2616_ = lean_ctor_get(v_decl_2612_, 4);
v___x_2617_ = 1;
lean_inc_ref(v_value_2616_);
v___x_2618_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_value_2616_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v_a_2619_; lean_object* v___x_2620_; 
v_a_2619_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v___x_2618_, 1);
lean_inc_ref(v_params_2614_);
lean_inc_ref(v_type_2615_);
lean_inc_ref(v_decl_2612_);
v___x_2620_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_2617_, v_decl_2612_, v_type_2615_, v_params_2614_, v_a_2619_, v___y_2582_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2622_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v___x_2620_, 1);
lean_inc_ref(v_k_2613_);
v___x_2622_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2613_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2660_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2625_ = v___x_2622_;
v_isShared_2626_ = v_isSharedCheck_2660_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2622_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2660_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
size_t v___x_2627_; size_t v___x_2628_; uint8_t v___x_2629_; 
v___x_2627_ = lean_ptr_addr(v_k_2613_);
v___x_2628_ = lean_ptr_addr(v_a_2623_);
v___x_2629_ = lean_usize_dec_eq(v___x_2627_, v___x_2628_);
if (v___x_2629_ == 0)
{
lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2639_; 
v_isSharedCheck_2639_ = !lean_is_exclusive(v_c_2579_);
if (v_isSharedCheck_2639_ == 0)
{
lean_object* v_unused_2640_; lean_object* v_unused_2641_; 
v_unused_2640_ = lean_ctor_get(v_c_2579_, 1);
lean_dec(v_unused_2640_);
v_unused_2641_ = lean_ctor_get(v_c_2579_, 0);
lean_dec(v_unused_2641_);
v___x_2631_ = v_c_2579_;
v_isShared_2632_ = v_isSharedCheck_2639_;
goto v_resetjp_2630_;
}
else
{
lean_dec(v_c_2579_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2639_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 1, v_a_2623_);
lean_ctor_set(v___x_2631_, 0, v_a_2621_);
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2621_);
lean_ctor_set(v_reuseFailAlloc_2638_, 1, v_a_2623_);
v___x_2634_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
lean_object* v___x_2636_; 
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v___x_2634_);
v___x_2636_ = v___x_2625_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v___x_2634_);
v___x_2636_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
return v___x_2636_;
}
}
}
}
else
{
size_t v___x_2642_; size_t v___x_2643_; uint8_t v___x_2644_; 
v___x_2642_ = lean_ptr_addr(v_decl_2612_);
v___x_2643_ = lean_ptr_addr(v_a_2621_);
v___x_2644_ = lean_usize_dec_eq(v___x_2642_, v___x_2643_);
if (v___x_2644_ == 0)
{
lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2654_; 
v_isSharedCheck_2654_ = !lean_is_exclusive(v_c_2579_);
if (v_isSharedCheck_2654_ == 0)
{
lean_object* v_unused_2655_; lean_object* v_unused_2656_; 
v_unused_2655_ = lean_ctor_get(v_c_2579_, 1);
lean_dec(v_unused_2655_);
v_unused_2656_ = lean_ctor_get(v_c_2579_, 0);
lean_dec(v_unused_2656_);
v___x_2646_ = v_c_2579_;
v_isShared_2647_ = v_isSharedCheck_2654_;
goto v_resetjp_2645_;
}
else
{
lean_dec(v_c_2579_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2654_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2649_; 
if (v_isShared_2647_ == 0)
{
lean_ctor_set(v___x_2646_, 1, v_a_2623_);
lean_ctor_set(v___x_2646_, 0, v_a_2621_);
v___x_2649_ = v___x_2646_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_a_2621_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v_a_2623_);
v___x_2649_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
lean_object* v___x_2651_; 
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v___x_2649_);
v___x_2651_ = v___x_2625_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v___x_2649_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
}
else
{
lean_object* v___x_2658_; 
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v_c_2579_);
v___x_2658_ = v___x_2625_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_c_2579_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
}
else
{
lean_dec(v_a_2621_);
lean_dec_ref_known(v_c_2579_, 2);
return v___x_2622_;
}
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2668_; 
lean_dec_ref_known(v_c_2579_, 2);
v_a_2661_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2663_ = v___x_2620_;
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2620_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2666_; 
if (v_isShared_2664_ == 0)
{
v___x_2666_ = v___x_2663_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_a_2661_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2579_, 2);
return v___x_2618_;
}
}
case 3:
{
lean_object* v___x_2669_; 
v___x_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2669_, 0, v_c_2579_);
return v___x_2669_;
}
case 4:
{
lean_object* v_cases_2670_; lean_object* v_typeName_2671_; lean_object* v_resultType_2672_; lean_object* v_discr_2673_; lean_object* v_alts_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2727_; 
v_cases_2670_ = lean_ctor_get(v_c_2579_, 0);
lean_inc_ref(v_cases_2670_);
v_typeName_2671_ = lean_ctor_get(v_cases_2670_, 0);
v_resultType_2672_ = lean_ctor_get(v_cases_2670_, 1);
v_discr_2673_ = lean_ctor_get(v_cases_2670_, 2);
v_alts_2674_ = lean_ctor_get(v_cases_2670_, 3);
v_isSharedCheck_2727_ = !lean_is_exclusive(v_cases_2670_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2676_ = v_cases_2670_;
v_isShared_2677_ = v_isSharedCheck_2727_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_alts_2674_);
lean_inc(v_discr_2673_);
lean_inc(v_resultType_2672_);
lean_inc(v_typeName_2671_);
lean_dec(v_cases_2670_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2727_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v_alreadyFound_2678_; uint8_t v_relaxedReuse_2679_; lean_object* v_ownedness_2680_; uint8_t v___x_2681_; uint8_t v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; uint8_t v___x_2685_; uint8_t v___x_2686_; uint8_t v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; size_t v_sz_2691_; size_t v___x_2692_; lean_object* v___x_2693_; 
v_alreadyFound_2678_ = lean_ctor_get(v___y_2580_, 0);
v_relaxedReuse_2679_ = lean_ctor_get_uint8(v___y_2580_, sizeof(void*)*2);
v_ownedness_2680_ = lean_ctor_get(v___y_2580_, 1);
v___x_2681_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_alreadyFound_2678_, v_discr_2673_);
v___x_2682_ = 0;
v___x_2683_ = lean_box(v___x_2682_);
v___x_2684_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_ownedness_2680_, v_discr_2673_, v___x_2683_);
lean_dec(v___x_2683_);
v___x_2685_ = 1;
v___x_2686_ = lean_unbox(v___x_2684_);
lean_dec(v___x_2684_);
v___x_2687_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_2686_, v___x_2685_);
v___x_2688_ = lean_box(0);
lean_inc_n(v_discr_2673_, 2);
lean_inc_ref(v_alreadyFound_2678_);
v___x_2689_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_alreadyFound_2678_, v_discr_2673_, v___x_2688_);
lean_inc_ref(v_ownedness_2680_);
v___x_2690_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2690_, 0, v___x_2689_);
lean_ctor_set(v___x_2690_, 1, v_ownedness_2680_);
lean_ctor_set_uint8(v___x_2690_, sizeof(void*)*2, v_relaxedReuse_2679_);
v_sz_2691_ = lean_array_size(v_alts_2674_);
v___x_2692_ = ((size_t)0ULL);
lean_inc_ref(v_alts_2674_);
v___x_2693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(v___x_2687_, v_discr_2673_, v___x_2681_, v_sz_2691_, v___x_2692_, v_alts_2674_, v___x_2690_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
lean_dec_ref_known(v___x_2690_, 2);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2718_; 
v_a_2694_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2696_ = v___x_2693_;
v_isShared_2697_ = v_isSharedCheck_2718_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2693_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2718_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
size_t v___x_2698_; size_t v___x_2699_; uint8_t v___x_2700_; 
v___x_2698_ = lean_ptr_addr(v_alts_2674_);
lean_dec_ref(v_alts_2674_);
v___x_2699_ = lean_ptr_addr(v_a_2694_);
v___x_2700_ = lean_usize_dec_eq(v___x_2698_, v___x_2699_);
if (v___x_2700_ == 0)
{
lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2713_; 
v_isSharedCheck_2713_ = !lean_is_exclusive(v_c_2579_);
if (v_isSharedCheck_2713_ == 0)
{
lean_object* v_unused_2714_; 
v_unused_2714_ = lean_ctor_get(v_c_2579_, 0);
lean_dec(v_unused_2714_);
v___x_2702_ = v_c_2579_;
v_isShared_2703_ = v_isSharedCheck_2713_;
goto v_resetjp_2701_;
}
else
{
lean_dec(v_c_2579_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2713_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2705_; 
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 3, v_a_2694_);
v___x_2705_ = v___x_2676_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_typeName_2671_);
lean_ctor_set(v_reuseFailAlloc_2712_, 1, v_resultType_2672_);
lean_ctor_set(v_reuseFailAlloc_2712_, 2, v_discr_2673_);
lean_ctor_set(v_reuseFailAlloc_2712_, 3, v_a_2694_);
v___x_2705_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
lean_object* v___x_2707_; 
if (v_isShared_2703_ == 0)
{
lean_ctor_set(v___x_2702_, 0, v___x_2705_);
v___x_2707_ = v___x_2702_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v___x_2705_);
v___x_2707_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
lean_object* v___x_2709_; 
if (v_isShared_2697_ == 0)
{
lean_ctor_set(v___x_2696_, 0, v___x_2707_);
v___x_2709_ = v___x_2696_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v___x_2707_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
}
else
{
lean_object* v___x_2716_; 
lean_dec(v_a_2694_);
lean_del_object(v___x_2676_);
lean_dec(v_discr_2673_);
lean_dec_ref(v_resultType_2672_);
lean_dec(v_typeName_2671_);
if (v_isShared_2697_ == 0)
{
lean_ctor_set(v___x_2696_, 0, v_c_2579_);
v___x_2716_ = v___x_2696_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_c_2579_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
else
{
lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2726_; 
lean_del_object(v___x_2676_);
lean_dec_ref(v_alts_2674_);
lean_dec(v_discr_2673_);
lean_dec_ref(v_resultType_2672_);
lean_dec(v_typeName_2671_);
lean_dec_ref_known(v_c_2579_, 1);
v_a_2719_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2721_ = v___x_2693_;
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2693_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2724_; 
if (v_isShared_2722_ == 0)
{
v___x_2724_ = v___x_2721_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_a_2719_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
}
}
case 5:
{
lean_object* v___x_2728_; 
v___x_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2728_, 0, v_c_2579_);
return v___x_2728_;
}
case 6:
{
lean_object* v___x_2729_; 
v___x_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2729_, 0, v_c_2579_);
return v___x_2729_;
}
case 8:
{
lean_object* v_fvarId_2730_; lean_object* v_i_2731_; lean_object* v_y_2732_; lean_object* v_k_2733_; lean_object* v___x_2734_; 
v_fvarId_2730_ = lean_ctor_get(v_c_2579_, 0);
v_i_2731_ = lean_ctor_get(v_c_2579_, 1);
v_y_2732_ = lean_ctor_get(v_c_2579_, 2);
v_k_2733_ = lean_ctor_get(v_c_2579_, 3);
lean_inc_ref(v_k_2733_);
v___x_2734_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2733_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2759_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2737_ = v___x_2734_;
v_isShared_2738_ = v_isSharedCheck_2759_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_a_2735_);
lean_dec(v___x_2734_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2759_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
size_t v___x_2739_; size_t v___x_2740_; uint8_t v___x_2741_; 
v___x_2739_ = lean_ptr_addr(v_k_2733_);
v___x_2740_ = lean_ptr_addr(v_a_2735_);
v___x_2741_ = lean_usize_dec_eq(v___x_2739_, v___x_2740_);
if (v___x_2741_ == 0)
{
lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2751_; 
lean_inc(v_y_2732_);
lean_inc(v_i_2731_);
lean_inc(v_fvarId_2730_);
v_isSharedCheck_2751_ = !lean_is_exclusive(v_c_2579_);
if (v_isSharedCheck_2751_ == 0)
{
lean_object* v_unused_2752_; lean_object* v_unused_2753_; lean_object* v_unused_2754_; lean_object* v_unused_2755_; 
v_unused_2752_ = lean_ctor_get(v_c_2579_, 3);
lean_dec(v_unused_2752_);
v_unused_2753_ = lean_ctor_get(v_c_2579_, 2);
lean_dec(v_unused_2753_);
v_unused_2754_ = lean_ctor_get(v_c_2579_, 1);
lean_dec(v_unused_2754_);
v_unused_2755_ = lean_ctor_get(v_c_2579_, 0);
lean_dec(v_unused_2755_);
v___x_2743_ = v_c_2579_;
v_isShared_2744_ = v_isSharedCheck_2751_;
goto v_resetjp_2742_;
}
else
{
lean_dec(v_c_2579_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2751_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2746_; 
if (v_isShared_2744_ == 0)
{
lean_ctor_set(v___x_2743_, 3, v_a_2735_);
v___x_2746_ = v___x_2743_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_fvarId_2730_);
lean_ctor_set(v_reuseFailAlloc_2750_, 1, v_i_2731_);
lean_ctor_set(v_reuseFailAlloc_2750_, 2, v_y_2732_);
lean_ctor_set(v_reuseFailAlloc_2750_, 3, v_a_2735_);
v___x_2746_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
lean_object* v___x_2748_; 
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 0, v___x_2746_);
v___x_2748_ = v___x_2737_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v___x_2746_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
}
else
{
lean_object* v___x_2757_; 
lean_dec(v_a_2735_);
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 0, v_c_2579_);
v___x_2757_ = v___x_2737_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_c_2579_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2579_, 4);
return v___x_2734_;
}
}
case 9:
{
lean_object* v_fvarId_2760_; lean_object* v_i_2761_; lean_object* v_offset_2762_; lean_object* v_y_2763_; lean_object* v_ty_2764_; lean_object* v_k_2765_; lean_object* v___x_2766_; 
v_fvarId_2760_ = lean_ctor_get(v_c_2579_, 0);
v_i_2761_ = lean_ctor_get(v_c_2579_, 1);
v_offset_2762_ = lean_ctor_get(v_c_2579_, 2);
v_y_2763_ = lean_ctor_get(v_c_2579_, 3);
v_ty_2764_ = lean_ctor_get(v_c_2579_, 4);
v_k_2765_ = lean_ctor_get(v_c_2579_, 5);
lean_inc_ref(v_k_2765_);
v___x_2766_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2765_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2793_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2769_ = v___x_2766_;
v_isShared_2770_ = v_isSharedCheck_2793_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v___x_2766_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2793_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
size_t v___x_2771_; size_t v___x_2772_; uint8_t v___x_2773_; 
v___x_2771_ = lean_ptr_addr(v_k_2765_);
v___x_2772_ = lean_ptr_addr(v_a_2767_);
v___x_2773_ = lean_usize_dec_eq(v___x_2771_, v___x_2772_);
if (v___x_2773_ == 0)
{
lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2783_; 
lean_inc_ref(v_ty_2764_);
lean_inc(v_y_2763_);
lean_inc(v_offset_2762_);
lean_inc(v_i_2761_);
lean_inc(v_fvarId_2760_);
v_isSharedCheck_2783_ = !lean_is_exclusive(v_c_2579_);
if (v_isSharedCheck_2783_ == 0)
{
lean_object* v_unused_2784_; lean_object* v_unused_2785_; lean_object* v_unused_2786_; lean_object* v_unused_2787_; lean_object* v_unused_2788_; lean_object* v_unused_2789_; 
v_unused_2784_ = lean_ctor_get(v_c_2579_, 5);
lean_dec(v_unused_2784_);
v_unused_2785_ = lean_ctor_get(v_c_2579_, 4);
lean_dec(v_unused_2785_);
v_unused_2786_ = lean_ctor_get(v_c_2579_, 3);
lean_dec(v_unused_2786_);
v_unused_2787_ = lean_ctor_get(v_c_2579_, 2);
lean_dec(v_unused_2787_);
v_unused_2788_ = lean_ctor_get(v_c_2579_, 1);
lean_dec(v_unused_2788_);
v_unused_2789_ = lean_ctor_get(v_c_2579_, 0);
lean_dec(v_unused_2789_);
v___x_2775_ = v_c_2579_;
v_isShared_2776_ = v_isSharedCheck_2783_;
goto v_resetjp_2774_;
}
else
{
lean_dec(v_c_2579_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2783_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 5, v_a_2767_);
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_fvarId_2760_);
lean_ctor_set(v_reuseFailAlloc_2782_, 1, v_i_2761_);
lean_ctor_set(v_reuseFailAlloc_2782_, 2, v_offset_2762_);
lean_ctor_set(v_reuseFailAlloc_2782_, 3, v_y_2763_);
lean_ctor_set(v_reuseFailAlloc_2782_, 4, v_ty_2764_);
lean_ctor_set(v_reuseFailAlloc_2782_, 5, v_a_2767_);
v___x_2778_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
lean_object* v___x_2780_; 
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 0, v___x_2778_);
v___x_2780_ = v___x_2769_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v___x_2778_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
}
else
{
lean_object* v___x_2791_; 
lean_dec(v_a_2767_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 0, v_c_2579_);
v___x_2791_ = v___x_2769_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_c_2579_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2579_, 6);
return v___x_2766_;
}
}
default: 
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
lean_dec_ref(v_c_2579_);
v___x_2794_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1);
v___x_2795_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v___x_2794_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
return v___x_2795_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed(lean_object* v_c_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_c_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
lean_dec_ref(v___y_2797_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(uint8_t v___x_2804_, lean_object* v_discr_2805_, uint8_t v___x_2806_, size_t v_sz_2807_, size_t v_i_2808_, lean_object* v_bs_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_){
_start:
{
uint8_t v___x_2816_; 
v___x_2816_ = lean_usize_dec_lt(v_i_2808_, v_sz_2807_);
if (v___x_2816_ == 0)
{
lean_object* v___x_2817_; 
lean_dec(v_discr_2805_);
v___x_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2817_, 0, v_bs_2809_);
return v___x_2817_;
}
else
{
lean_object* v___f_2818_; lean_object* v_v_2819_; lean_object* v___x_2820_; lean_object* v_bs_x27_2821_; lean_object* v_a_2823_; lean_object* v___y_2829_; lean_object* v___x_2839_; 
v___f_2818_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed), 7, 0);
v_v_2819_ = lean_array_uget(v_bs_2809_, v_i_2808_);
v___x_2820_ = lean_unsigned_to_nat(0u);
v_bs_x27_2821_ = lean_array_uset(v_bs_2809_, v_i_2808_, v___x_2820_);
v___x_2839_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_v_2819_, v___f_2818_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_);
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_object* v_a_2840_; 
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
lean_inc(v_a_2840_);
if (lean_obj_tag(v_a_2840_) == 1)
{
lean_object* v_info_2841_; lean_object* v_code_2842_; uint8_t v___y_2844_; uint8_t v___x_2856_; 
v_info_2841_ = lean_ctor_get(v_a_2840_, 0);
v_code_2842_ = lean_ctor_get(v_a_2840_, 1);
v___x_2856_ = l_Lean_Compiler_LCNF_CtorInfo_isScalar(v_info_2841_);
if (v___x_2856_ == 0)
{
v___y_2844_ = v___x_2806_;
goto v___jp_2843_;
}
else
{
v___y_2844_ = v___x_2856_;
goto v___jp_2843_;
}
v___jp_2843_:
{
if (v___y_2844_ == 0)
{
if (v___x_2804_ == 0)
{
lean_object* v___x_2845_; 
lean_dec_ref_known(v___x_2839_, 1);
lean_inc_ref(v_code_2842_);
lean_inc_ref(v_info_2841_);
lean_inc(v_discr_2805_);
v___x_2845_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_discr_2805_, v_info_2841_, v_code_2842_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2847_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2846_);
lean_dec_ref_known(v___x_2845_, 1);
v___x_2847_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2840_, v_a_2846_);
v_a_2823_ = v___x_2847_;
goto v___jp_2822_;
}
else
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec_ref_known(v_a_2840_, 2);
lean_dec_ref(v_bs_x27_2821_);
lean_dec(v_discr_2805_);
v_a_2848_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2845_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2845_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_a_2848_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_2840_, 2);
v___y_2829_ = v___x_2839_;
goto v___jp_2828_;
}
}
else
{
lean_dec_ref_known(v_a_2840_, 2);
v___y_2829_ = v___x_2839_;
goto v___jp_2828_;
}
}
}
else
{
lean_dec_ref_known(v_a_2840_, 1);
v___y_2829_ = v___x_2839_;
goto v___jp_2828_;
}
}
else
{
v___y_2829_ = v___x_2839_;
goto v___jp_2828_;
}
v___jp_2822_:
{
size_t v___x_2824_; size_t v___x_2825_; lean_object* v___x_2826_; 
v___x_2824_ = ((size_t)1ULL);
v___x_2825_ = lean_usize_add(v_i_2808_, v___x_2824_);
v___x_2826_ = lean_array_uset(v_bs_x27_2821_, v_i_2808_, v_a_2823_);
v_i_2808_ = v___x_2825_;
v_bs_2809_ = v___x_2826_;
goto _start;
}
v___jp_2828_:
{
if (lean_obj_tag(v___y_2829_) == 0)
{
lean_object* v_a_2830_; 
v_a_2830_ = lean_ctor_get(v___y_2829_, 0);
lean_inc(v_a_2830_);
lean_dec_ref_known(v___y_2829_, 1);
v_a_2823_ = v_a_2830_;
goto v___jp_2822_;
}
else
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2838_; 
lean_dec_ref(v_bs_x27_2821_);
lean_dec(v_discr_2805_);
v_a_2831_ = lean_ctor_get(v___y_2829_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___y_2829_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2833_ = v___y_2829_;
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v___y_2829_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_a_2831_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed(lean_object* v___x_2857_, lean_object* v_discr_2858_, lean_object* v___x_2859_, lean_object* v_sz_2860_, lean_object* v_i_2861_, lean_object* v_bs_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
uint8_t v___x_5857__boxed_2869_; uint8_t v___x_5859__boxed_2870_; size_t v_sz_boxed_2871_; size_t v_i_boxed_2872_; lean_object* v_res_2873_; 
v___x_5857__boxed_2869_ = lean_unbox(v___x_2857_);
v___x_5859__boxed_2870_ = lean_unbox(v___x_2859_);
v_sz_boxed_2871_ = lean_unbox_usize(v_sz_2860_);
lean_dec(v_sz_2860_);
v_i_boxed_2872_ = lean_unbox_usize(v_i_2861_);
lean_dec(v_i_2861_);
v_res_2873_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(v___x_5857__boxed_2869_, v_discr_2858_, v___x_5859__boxed_2870_, v_sz_boxed_2871_, v_i_boxed_2872_, v_bs_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec_ref(v___y_2863_);
return v_res_2873_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(lean_object* v_00_u03b2_2874_, lean_object* v_x_2875_, lean_object* v_x_2876_){
_start:
{
uint8_t v___x_2877_; 
v___x_2877_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2875_, v_x_2876_);
return v___x_2877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___boxed(lean_object* v_00_u03b2_2878_, lean_object* v_x_2879_, lean_object* v_x_2880_){
_start:
{
uint8_t v_res_2881_; lean_object* v_r_2882_; 
v_res_2881_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(v_00_u03b2_2878_, v_x_2879_, v_x_2880_);
lean_dec(v_x_2880_);
lean_dec_ref(v_x_2879_);
v_r_2882_ = lean_box(v_res_2881_);
return v_r_2882_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(lean_object* v_00_u03b2_2883_, lean_object* v_m_2884_, lean_object* v_a_2885_, lean_object* v_fallback_2886_){
_start:
{
lean_object* v___x_2887_; 
v___x_2887_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_2884_, v_a_2885_, v_fallback_2886_);
return v___x_2887_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___boxed(lean_object* v_00_u03b2_2888_, lean_object* v_m_2889_, lean_object* v_a_2890_, lean_object* v_fallback_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(v_00_u03b2_2888_, v_m_2889_, v_a_2890_, v_fallback_2891_);
lean_dec(v_fallback_2891_);
lean_dec(v_a_2890_);
lean_dec_ref(v_m_2889_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2(lean_object* v_00_u03b2_2893_, lean_object* v_x_2894_, lean_object* v_x_2895_, lean_object* v_x_2896_){
_start:
{
lean_object* v___x_2897_; 
v___x_2897_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_x_2894_, v_x_2895_, v_x_2896_);
return v___x_2897_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(lean_object* v_00_u03b2_2898_, lean_object* v_x_2899_, size_t v_x_2900_, lean_object* v_x_2901_){
_start:
{
uint8_t v___x_2902_; 
v___x_2902_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2899_, v_x_2900_, v_x_2901_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2903_, lean_object* v_x_2904_, lean_object* v_x_2905_, lean_object* v_x_2906_){
_start:
{
size_t v_x_6443__boxed_2907_; uint8_t v_res_2908_; lean_object* v_r_2909_; 
v_x_6443__boxed_2907_ = lean_unbox_usize(v_x_2905_);
lean_dec(v_x_2905_);
v_res_2908_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(v_00_u03b2_2903_, v_x_2904_, v_x_6443__boxed_2907_, v_x_2906_);
lean_dec(v_x_2906_);
lean_dec_ref(v_x_2904_);
v_r_2909_ = lean_box(v_res_2908_);
return v_r_2909_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(lean_object* v_00_u03b2_2910_, lean_object* v_a_2911_, lean_object* v_fallback_2912_, lean_object* v_x_2913_){
_start:
{
lean_object* v___x_2914_; 
v___x_2914_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2911_, v_fallback_2912_, v_x_2913_);
return v___x_2914_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2915_, lean_object* v_a_2916_, lean_object* v_fallback_2917_, lean_object* v_x_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(v_00_u03b2_2915_, v_a_2916_, v_fallback_2917_, v_x_2918_);
lean_dec(v_x_2918_);
lean_dec(v_fallback_2917_);
lean_dec(v_a_2916_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(lean_object* v_00_u03b2_2920_, lean_object* v_x_2921_, size_t v_x_2922_, size_t v_x_2923_, lean_object* v_x_2924_, lean_object* v_x_2925_){
_start:
{
lean_object* v___x_2926_; 
v___x_2926_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2921_, v_x_2922_, v_x_2923_, v_x_2924_, v_x_2925_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2927_, lean_object* v_x_2928_, lean_object* v_x_2929_, lean_object* v_x_2930_, lean_object* v_x_2931_, lean_object* v_x_2932_){
_start:
{
size_t v_x_6459__boxed_2933_; size_t v_x_6460__boxed_2934_; lean_object* v_res_2935_; 
v_x_6459__boxed_2933_ = lean_unbox_usize(v_x_2929_);
lean_dec(v_x_2929_);
v_x_6460__boxed_2934_ = lean_unbox_usize(v_x_2930_);
lean_dec(v_x_2930_);
v_res_2935_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(v_00_u03b2_2927_, v_x_2928_, v_x_6459__boxed_2933_, v_x_6460__boxed_2934_, v_x_2931_, v_x_2932_);
return v_res_2935_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2936_, lean_object* v_keys_2937_, lean_object* v_vals_2938_, lean_object* v_heq_2939_, lean_object* v_i_2940_, lean_object* v_k_2941_){
_start:
{
uint8_t v___x_2942_; 
v___x_2942_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2937_, v_i_2940_, v_k_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2943_, lean_object* v_keys_2944_, lean_object* v_vals_2945_, lean_object* v_heq_2946_, lean_object* v_i_2947_, lean_object* v_k_2948_){
_start:
{
uint8_t v_res_2949_; lean_object* v_r_2950_; 
v_res_2949_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(v_00_u03b2_2943_, v_keys_2944_, v_vals_2945_, v_heq_2946_, v_i_2947_, v_k_2948_);
lean_dec(v_k_2948_);
lean_dec_ref(v_vals_2945_);
lean_dec_ref(v_keys_2944_);
v_r_2950_ = lean_box(v_res_2949_);
return v_r_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_2951_, lean_object* v_n_2952_, lean_object* v_k_2953_, lean_object* v_v_2954_){
_start:
{
lean_object* v___x_2955_; 
v___x_2955_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v_n_2952_, v_k_2953_, v_v_2954_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_2956_, size_t v_depth_2957_, lean_object* v_keys_2958_, lean_object* v_vals_2959_, lean_object* v_heq_2960_, lean_object* v_i_2961_, lean_object* v_entries_2962_){
_start:
{
lean_object* v___x_2963_; 
v___x_2963_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_2957_, v_keys_2958_, v_vals_2959_, v_i_2961_, v_entries_2962_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_2964_, lean_object* v_depth_2965_, lean_object* v_keys_2966_, lean_object* v_vals_2967_, lean_object* v_heq_2968_, lean_object* v_i_2969_, lean_object* v_entries_2970_){
_start:
{
size_t v_depth_boxed_2971_; lean_object* v_res_2972_; 
v_depth_boxed_2971_ = lean_unbox_usize(v_depth_2965_);
lean_dec(v_depth_2965_);
v_res_2972_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(v_00_u03b2_2964_, v_depth_boxed_2971_, v_keys_2966_, v_vals_2967_, v_heq_2968_, v_i_2969_, v_entries_2970_);
lean_dec_ref(v_vals_2967_);
lean_dec_ref(v_keys_2966_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9(lean_object* v_00_u03b2_2973_, lean_object* v_x_2974_, lean_object* v_x_2975_, lean_object* v_x_2976_, lean_object* v_x_2977_){
_start:
{
lean_object* v___x_2978_; 
v___x_2978_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_x_2974_, v_x_2975_, v_x_2976_, v_x_2977_);
return v___x_2978_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(lean_object* v_msg_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v_toApplicative_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3052_; 
v___x_2988_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_2989_ = l_StateRefT_x27_instMonad___redArg(v___x_2988_);
v_toApplicative_2990_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3052_ == 0)
{
lean_object* v_unused_3053_; 
v_unused_3053_ = lean_ctor_get(v___x_2989_, 1);
lean_dec(v_unused_3053_);
v___x_2992_ = v___x_2989_;
v_isShared_2993_ = v_isSharedCheck_3052_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_toApplicative_2990_);
lean_dec(v___x_2989_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3052_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v_toFunctor_2994_; lean_object* v_toSeq_2995_; lean_object* v_toSeqLeft_2996_; lean_object* v_toSeqRight_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3050_; 
v_toFunctor_2994_ = lean_ctor_get(v_toApplicative_2990_, 0);
v_toSeq_2995_ = lean_ctor_get(v_toApplicative_2990_, 2);
v_toSeqLeft_2996_ = lean_ctor_get(v_toApplicative_2990_, 3);
v_toSeqRight_2997_ = lean_ctor_get(v_toApplicative_2990_, 4);
v_isSharedCheck_3050_ = !lean_is_exclusive(v_toApplicative_2990_);
if (v_isSharedCheck_3050_ == 0)
{
lean_object* v_unused_3051_; 
v_unused_3051_ = lean_ctor_get(v_toApplicative_2990_, 1);
lean_dec(v_unused_3051_);
v___x_2999_ = v_toApplicative_2990_;
v_isShared_3000_ = v_isSharedCheck_3050_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_toSeqRight_2997_);
lean_inc(v_toSeqLeft_2996_);
lean_inc(v_toSeq_2995_);
lean_inc(v_toFunctor_2994_);
lean_dec(v_toApplicative_2990_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3050_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___f_3001_; lean_object* v___f_3002_; lean_object* v___f_3003_; lean_object* v___f_3004_; lean_object* v___x_3005_; lean_object* v___f_3006_; lean_object* v___f_3007_; lean_object* v___f_3008_; lean_object* v___x_3010_; 
v___f_3001_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_3002_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_2994_);
v___f_3003_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3003_, 0, v_toFunctor_2994_);
v___f_3004_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3004_, 0, v_toFunctor_2994_);
v___x_3005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3005_, 0, v___f_3003_);
lean_ctor_set(v___x_3005_, 1, v___f_3004_);
v___f_3006_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3006_, 0, v_toSeqRight_2997_);
v___f_3007_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3007_, 0, v_toSeqLeft_2996_);
v___f_3008_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3008_, 0, v_toSeq_2995_);
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 4, v___f_3006_);
lean_ctor_set(v___x_2999_, 3, v___f_3007_);
lean_ctor_set(v___x_2999_, 2, v___f_3008_);
lean_ctor_set(v___x_2999_, 1, v___f_3001_);
lean_ctor_set(v___x_2999_, 0, v___x_3005_);
v___x_3010_ = v___x_2999_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v___x_3005_);
lean_ctor_set(v_reuseFailAlloc_3049_, 1, v___f_3001_);
lean_ctor_set(v_reuseFailAlloc_3049_, 2, v___f_3008_);
lean_ctor_set(v_reuseFailAlloc_3049_, 3, v___f_3007_);
lean_ctor_set(v_reuseFailAlloc_3049_, 4, v___f_3006_);
v___x_3010_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
lean_object* v___x_3012_; 
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 1, v___f_3002_);
lean_ctor_set(v___x_2992_, 0, v___x_3010_);
v___x_3012_ = v___x_2992_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v___x_3010_);
lean_ctor_set(v_reuseFailAlloc_3048_, 1, v___f_3002_);
v___x_3012_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
lean_object* v___x_3013_; lean_object* v_toApplicative_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3046_; 
v___x_3013_ = l_StateRefT_x27_instMonad___redArg(v___x_3012_);
v_toApplicative_3014_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3046_ == 0)
{
lean_object* v_unused_3047_; 
v_unused_3047_ = lean_ctor_get(v___x_3013_, 1);
lean_dec(v_unused_3047_);
v___x_3016_ = v___x_3013_;
v_isShared_3017_ = v_isSharedCheck_3046_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_toApplicative_3014_);
lean_dec(v___x_3013_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3046_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v_toFunctor_3018_; lean_object* v_toSeq_3019_; lean_object* v_toSeqLeft_3020_; lean_object* v_toSeqRight_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3044_; 
v_toFunctor_3018_ = lean_ctor_get(v_toApplicative_3014_, 0);
v_toSeq_3019_ = lean_ctor_get(v_toApplicative_3014_, 2);
v_toSeqLeft_3020_ = lean_ctor_get(v_toApplicative_3014_, 3);
v_toSeqRight_3021_ = lean_ctor_get(v_toApplicative_3014_, 4);
v_isSharedCheck_3044_ = !lean_is_exclusive(v_toApplicative_3014_);
if (v_isSharedCheck_3044_ == 0)
{
lean_object* v_unused_3045_; 
v_unused_3045_ = lean_ctor_get(v_toApplicative_3014_, 1);
lean_dec(v_unused_3045_);
v___x_3023_ = v_toApplicative_3014_;
v_isShared_3024_ = v_isSharedCheck_3044_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_toSeqRight_3021_);
lean_inc(v_toSeqLeft_3020_);
lean_inc(v_toSeq_3019_);
lean_inc(v_toFunctor_3018_);
lean_dec(v_toApplicative_3014_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3044_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___f_3025_; lean_object* v___f_3026_; lean_object* v___f_3027_; lean_object* v___f_3028_; lean_object* v___x_3029_; lean_object* v___f_3030_; lean_object* v___f_3031_; lean_object* v___f_3032_; lean_object* v___x_3034_; 
v___f_3025_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0));
v___f_3026_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1));
lean_inc_ref(v_toFunctor_3018_);
v___f_3027_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3027_, 0, v_toFunctor_3018_);
v___f_3028_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3028_, 0, v_toFunctor_3018_);
v___x_3029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3029_, 0, v___f_3027_);
lean_ctor_set(v___x_3029_, 1, v___f_3028_);
v___f_3030_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3030_, 0, v_toSeqRight_3021_);
v___f_3031_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3031_, 0, v_toSeqLeft_3020_);
v___f_3032_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3032_, 0, v_toSeq_3019_);
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 4, v___f_3030_);
lean_ctor_set(v___x_3023_, 3, v___f_3031_);
lean_ctor_set(v___x_3023_, 2, v___f_3032_);
lean_ctor_set(v___x_3023_, 1, v___f_3025_);
lean_ctor_set(v___x_3023_, 0, v___x_3029_);
v___x_3034_ = v___x_3023_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v___x_3029_);
lean_ctor_set(v_reuseFailAlloc_3043_, 1, v___f_3025_);
lean_ctor_set(v_reuseFailAlloc_3043_, 2, v___f_3032_);
lean_ctor_set(v_reuseFailAlloc_3043_, 3, v___f_3031_);
lean_ctor_set(v_reuseFailAlloc_3043_, 4, v___f_3030_);
v___x_3034_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
lean_object* v___x_3036_; 
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 1, v___f_3026_);
lean_ctor_set(v___x_3016_, 0, v___x_3034_);
v___x_3036_ = v___x_3016_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v___x_3034_);
lean_ctor_set(v_reuseFailAlloc_3042_, 1, v___f_3026_);
v___x_3036_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_2385__overap_3040_; lean_object* v___x_3041_; 
v___x_3037_ = l_StateRefT_x27_instMonad___redArg(v___x_3036_);
v___x_3038_ = lean_box(0);
v___x_3039_ = l_instInhabitedOfMonad___redArg(v___x_3037_, v___x_3038_);
v___x_2385__overap_3040_ = lean_panic_fn_borrowed(v___x_3039_, v_msg_2981_);
lean_dec(v___x_3039_);
lean_inc(v___y_2986_);
lean_inc_ref(v___y_2985_);
lean_inc(v___y_2984_);
lean_inc_ref(v___y_2983_);
lean_inc(v___y_2982_);
v___x_3041_ = lean_apply_6(v___x_2385__overap_3040_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_, lean_box(0));
return v___x_3041_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___boxed(lean_object* v_msg_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v_msg_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
return v_res_3061_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1(void){
_start:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3063_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_3064_ = lean_unsigned_to_nat(61u);
v___x_3065_ = lean_unsigned_to_nat(304u);
v___x_3066_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0));
v___x_3067_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_3068_ = l_mkPanicMessageWithDecl(v___x_3067_, v___x_3066_, v___x_3065_, v___x_3064_, v___x_3063_);
return v___x_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(lean_object* v_c_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
switch(lean_obj_tag(v_c_3069_))
{
case 0:
{
lean_object* v_decl_3076_; lean_object* v_value_3077_; 
v_decl_3076_ = lean_ctor_get(v_c_3069_, 0);
v_value_3077_ = lean_ctor_get(v_decl_3076_, 3);
if (lean_obj_tag(v_value_3077_) == 11)
{
lean_object* v_k_3078_; lean_object* v_var_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
lean_inc_ref(v_value_3077_);
v_k_3078_ = lean_ctor_get(v_c_3069_, 1);
lean_inc_ref(v_k_3078_);
lean_dec_ref_known(v_c_3069_, 2);
v_var_3079_ = lean_ctor_get(v_value_3077_, 1);
lean_inc(v_var_3079_);
lean_dec_ref_known(v_value_3077_, 2);
v___x_3080_ = lean_st_ref_take(v___y_3070_);
v___x_3081_ = lean_box(0);
v___x_3082_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v___x_3080_, v_var_3079_, v___x_3081_);
v___x_3083_ = lean_st_ref_put(v___y_3070_, v___x_3082_);
v_c_3069_ = v_k_3078_;
goto _start;
}
else
{
lean_object* v_k_3085_; 
v_k_3085_ = lean_ctor_get(v_c_3069_, 1);
lean_inc_ref(v_k_3085_);
lean_dec_ref_known(v_c_3069_, 2);
v_c_3069_ = v_k_3085_;
goto _start;
}
}
case 2:
{
lean_object* v_decl_3087_; lean_object* v_k_3088_; lean_object* v_value_3089_; lean_object* v___x_3090_; 
v_decl_3087_ = lean_ctor_get(v_c_3069_, 0);
lean_inc_ref(v_decl_3087_);
v_k_3088_ = lean_ctor_get(v_c_3069_, 1);
lean_inc_ref(v_k_3088_);
lean_dec_ref_known(v_c_3069_, 2);
v_value_3089_ = lean_ctor_get(v_decl_3087_, 4);
lean_inc_ref(v_value_3089_);
lean_dec_ref(v_decl_3087_);
v___x_3090_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_value_3089_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_dec_ref_known(v___x_3090_, 1);
v_c_3069_ = v_k_3088_;
goto _start;
}
else
{
lean_dec_ref(v_k_3088_);
return v___x_3090_;
}
}
case 3:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
lean_dec_ref_known(v_c_3069_, 2);
v___x_3092_ = lean_box(0);
v___x_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3092_);
return v___x_3093_;
}
case 4:
{
lean_object* v_cases_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3116_; 
v_cases_3094_ = lean_ctor_get(v_c_3069_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v_c_3069_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3096_ = v_c_3069_;
v_isShared_3097_ = v_isSharedCheck_3116_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_cases_3094_);
lean_dec(v_c_3069_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3116_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v_alts_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; uint8_t v___x_3102_; 
v_alts_3098_ = lean_ctor_get(v_cases_3094_, 3);
lean_inc_ref(v_alts_3098_);
lean_dec_ref(v_cases_3094_);
v___x_3099_ = lean_unsigned_to_nat(0u);
v___x_3100_ = lean_array_get_size(v_alts_3098_);
v___x_3101_ = lean_box(0);
v___x_3102_ = lean_nat_dec_lt(v___x_3099_, v___x_3100_);
if (v___x_3102_ == 0)
{
lean_object* v___x_3104_; 
lean_dec_ref(v_alts_3098_);
if (v_isShared_3097_ == 0)
{
lean_ctor_set_tag(v___x_3096_, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3101_);
v___x_3104_ = v___x_3096_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v___x_3101_);
v___x_3104_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
return v___x_3104_;
}
}
else
{
uint8_t v___x_3106_; 
v___x_3106_ = lean_nat_dec_le(v___x_3100_, v___x_3100_);
if (v___x_3106_ == 0)
{
if (v___x_3102_ == 0)
{
lean_object* v___x_3108_; 
lean_dec_ref(v_alts_3098_);
if (v_isShared_3097_ == 0)
{
lean_ctor_set_tag(v___x_3096_, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3101_);
v___x_3108_ = v___x_3096_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v___x_3101_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
else
{
size_t v___x_3110_; size_t v___x_3111_; lean_object* v___x_3112_; 
lean_del_object(v___x_3096_);
v___x_3110_ = ((size_t)0ULL);
v___x_3111_ = lean_usize_of_nat(v___x_3100_);
v___x_3112_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_alts_3098_, v___x_3110_, v___x_3111_, v___x_3101_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
lean_dec_ref(v_alts_3098_);
return v___x_3112_;
}
}
else
{
size_t v___x_3113_; size_t v___x_3114_; lean_object* v___x_3115_; 
lean_del_object(v___x_3096_);
v___x_3113_ = ((size_t)0ULL);
v___x_3114_ = lean_usize_of_nat(v___x_3100_);
v___x_3115_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_alts_3098_, v___x_3113_, v___x_3114_, v___x_3101_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
lean_dec_ref(v_alts_3098_);
return v___x_3115_;
}
}
}
}
case 5:
{
lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3124_; 
v_isSharedCheck_3124_ = !lean_is_exclusive(v_c_3069_);
if (v_isSharedCheck_3124_ == 0)
{
lean_object* v_unused_3125_; 
v_unused_3125_ = lean_ctor_get(v_c_3069_, 0);
lean_dec(v_unused_3125_);
v___x_3118_ = v_c_3069_;
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
else
{
lean_dec(v_c_3069_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3120_; lean_object* v___x_3122_; 
v___x_3120_ = lean_box(0);
if (v_isShared_3119_ == 0)
{
lean_ctor_set_tag(v___x_3118_, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3120_);
v___x_3122_ = v___x_3118_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v___x_3120_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
case 6:
{
lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3133_; 
v_isSharedCheck_3133_ = !lean_is_exclusive(v_c_3069_);
if (v_isSharedCheck_3133_ == 0)
{
lean_object* v_unused_3134_; 
v_unused_3134_ = lean_ctor_get(v_c_3069_, 0);
lean_dec(v_unused_3134_);
v___x_3127_ = v_c_3069_;
v_isShared_3128_ = v_isSharedCheck_3133_;
goto v_resetjp_3126_;
}
else
{
lean_dec(v_c_3069_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3133_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3129_; lean_object* v___x_3131_; 
v___x_3129_ = lean_box(0);
if (v_isShared_3128_ == 0)
{
lean_ctor_set_tag(v___x_3127_, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3129_);
v___x_3131_ = v___x_3127_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v___x_3129_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
case 8:
{
lean_object* v_k_3135_; 
v_k_3135_ = lean_ctor_get(v_c_3069_, 3);
lean_inc_ref(v_k_3135_);
lean_dec_ref_known(v_c_3069_, 4);
v_c_3069_ = v_k_3135_;
goto _start;
}
case 9:
{
lean_object* v_k_3137_; 
v_k_3137_ = lean_ctor_get(v_c_3069_, 5);
lean_inc_ref(v_k_3137_);
lean_dec_ref_known(v_c_3069_, 6);
v_c_3069_ = v_k_3137_;
goto _start;
}
default: 
{
lean_object* v___x_3139_; lean_object* v___x_3140_; 
lean_dec_ref(v_c_3069_);
v___x_3139_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1);
v___x_3140_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v___x_3139_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
return v___x_3140_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(lean_object* v_as_3141_, size_t v_i_3142_, size_t v_stop_3143_, lean_object* v_b_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v___y_3152_; uint8_t v___x_3158_; 
v___x_3158_ = lean_usize_dec_eq(v_i_3142_, v_stop_3143_);
if (v___x_3158_ == 0)
{
lean_object* v___x_3159_; 
v___x_3159_ = lean_array_uget_borrowed(v_as_3141_, v_i_3142_);
switch(lean_obj_tag(v___x_3159_))
{
case 0:
{
lean_object* v_code_3160_; 
v_code_3160_ = lean_ctor_get(v___x_3159_, 2);
lean_inc_ref(v_code_3160_);
v___y_3152_ = v_code_3160_;
goto v___jp_3151_;
}
case 1:
{
lean_object* v_code_3161_; 
v_code_3161_ = lean_ctor_get(v___x_3159_, 1);
lean_inc_ref(v_code_3161_);
v___y_3152_ = v_code_3161_;
goto v___jp_3151_;
}
default: 
{
lean_object* v_code_3162_; 
v_code_3162_ = lean_ctor_get(v___x_3159_, 0);
lean_inc_ref(v_code_3162_);
v___y_3152_ = v_code_3162_;
goto v___jp_3151_;
}
}
}
else
{
lean_object* v___x_3163_; 
v___x_3163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3163_, 0, v_b_3144_);
return v___x_3163_;
}
v___jp_3151_:
{
lean_object* v___x_3153_; 
v___x_3153_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v___y_3152_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_);
if (lean_obj_tag(v___x_3153_) == 0)
{
lean_object* v_a_3154_; size_t v___x_3155_; size_t v___x_3156_; 
v_a_3154_ = lean_ctor_get(v___x_3153_, 0);
lean_inc(v_a_3154_);
lean_dec_ref_known(v___x_3153_, 1);
v___x_3155_ = ((size_t)1ULL);
v___x_3156_ = lean_usize_add(v_i_3142_, v___x_3155_);
v_i_3142_ = v___x_3156_;
v_b_3144_ = v_a_3154_;
goto _start;
}
else
{
return v___x_3153_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0___boxed(lean_object* v_as_3164_, lean_object* v_i_3165_, lean_object* v_stop_3166_, lean_object* v_b_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_){
_start:
{
size_t v_i_boxed_3174_; size_t v_stop_boxed_3175_; lean_object* v_res_3176_; 
v_i_boxed_3174_ = lean_unbox_usize(v_i_3165_);
lean_dec(v_i_3165_);
v_stop_boxed_3175_ = lean_unbox_usize(v_stop_3166_);
lean_dec(v_stop_3166_);
v_res_3176_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_as_3164_, v_i_boxed_3174_, v_stop_boxed_3175_, v_b_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_);
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
lean_dec(v___y_3168_);
lean_dec_ref(v_as_3164_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___boxed(lean_object* v_c_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_){
_start:
{
lean_object* v_res_3184_; 
v_res_3184_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_c_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_);
lean_dec(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3180_);
lean_dec_ref(v___y_3179_);
lean_dec(v___y_3178_);
return v_res_3184_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3185_; 
v___x_3185_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3185_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3186_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0);
v___x_3187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg(){
_start:
{
lean_object* v___x_3189_; 
v___x_3189_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___boxed(lean_object* v___dummy_3190_){
_start:
{
lean_object* v_res_3191_; 
v_res_3191_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
return v_res_3191_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3192_; 
v___x_3192_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_object* v_00_u03b2_3193_){
_start:
{
lean_object* v___x_3194_; 
v___x_3194_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(lean_object* v_f_3195_, lean_object* v_v_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_){
_start:
{
if (lean_obj_tag(v_v_3196_) == 0)
{
lean_object* v_code_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3227_; 
v_code_3203_ = lean_ctor_get(v_v_3196_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v_v_3196_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3205_ = v_v_3196_;
v_isShared_3206_ = v_isSharedCheck_3227_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_code_3203_);
lean_dec(v_v_3196_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3227_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3207_; 
lean_inc(v___y_3201_);
lean_inc_ref(v___y_3200_);
lean_inc(v___y_3199_);
lean_inc_ref(v___y_3198_);
lean_inc_ref(v___y_3197_);
v___x_3207_ = lean_apply_7(v_f_3195_, v_code_3203_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, lean_box(0));
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3218_; 
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3210_ = v___x_3207_;
v_isShared_3211_ = v_isSharedCheck_3218_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3207_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3218_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3206_ == 0)
{
lean_ctor_set(v___x_3205_, 0, v_a_3208_);
v___x_3213_ = v___x_3205_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
lean_object* v___x_3215_; 
if (v_isShared_3211_ == 0)
{
lean_ctor_set(v___x_3210_, 0, v___x_3213_);
v___x_3215_ = v___x_3210_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v___x_3213_);
v___x_3215_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
return v___x_3215_;
}
}
}
}
else
{
lean_object* v_a_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3226_; 
lean_del_object(v___x_3205_);
v_a_3219_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3221_ = v___x_3207_;
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_a_3219_);
lean_dec(v___x_3207_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3224_; 
if (v_isShared_3222_ == 0)
{
v___x_3224_ = v___x_3221_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_a_3219_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
}
}
else
{
lean_object* v___x_3228_; 
lean_dec_ref(v_f_3195_);
v___x_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3228_, 0, v_v_3196_);
return v___x_3228_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg___boxed(lean_object* v_f_3229_, lean_object* v_v_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_){
_start:
{
lean_object* v_res_3237_; 
v_res_3237_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_3229_, v_v_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_);
lean_dec(v___y_3235_);
lean_dec_ref(v___y_3234_);
lean_dec(v___y_3233_);
lean_dec_ref(v___y_3232_);
lean_dec_ref(v___y_3231_);
return v_res_3237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(uint8_t v_pu_3238_, lean_object* v_f_3239_, lean_object* v_v_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_){
_start:
{
lean_object* v___x_3247_; 
v___x_3247_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_3239_, v_v_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___boxed(lean_object* v_pu_3248_, lean_object* v_f_3249_, lean_object* v_v_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_){
_start:
{
uint8_t v_pu_boxed_3257_; lean_object* v_res_3258_; 
v_pu_boxed_3257_ = lean_unbox(v_pu_3248_);
v_res_3258_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(v_pu_boxed_3257_, v_f_3249_, v_v_3250_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_, v___y_3255_);
lean_dec(v___y_3255_);
lean_dec_ref(v___y_3254_);
lean_dec(v___y_3253_);
lean_dec_ref(v___y_3252_);
lean_dec_ref(v___y_3251_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(lean_object* v_code_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_){
_start:
{
lean_object* v_alreadyFound_3267_; uint8_t v_relaxedReuse_3268_; lean_object* v_ownedness_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3273_; uint8_t v_relaxedReuse_3276_; 
v_relaxedReuse_3276_ = lean_ctor_get_uint8(v___y_3260_, sizeof(void*)*2);
if (v_relaxedReuse_3276_ == 0)
{
lean_object* v_ownedness_3277_; lean_object* v___x_3278_; 
v_ownedness_3277_ = lean_ctor_get(v___y_3260_, 1);
v___x_3278_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v_alreadyFound_3267_ = v___x_3278_;
v_relaxedReuse_3268_ = v_relaxedReuse_3276_;
v_ownedness_3269_ = v_ownedness_3277_;
v___y_3270_ = v___y_3261_;
v___y_3271_ = v___y_3262_;
v___y_3272_ = v___y_3263_;
v___y_3273_ = v___y_3264_;
goto v___jp_3266_;
}
else
{
lean_object* v_ownedness_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
v_ownedness_3279_ = lean_ctor_get(v___y_3260_, 1);
v___x_3280_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v___x_3281_ = lean_st_mk_ref(v___x_3280_);
lean_inc_ref(v_code_3259_);
v___x_3282_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_code_3259_, v___x_3281_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v___x_3283_; 
lean_dec_ref_known(v___x_3282_, 1);
v___x_3283_ = lean_st_ref_get(v___x_3281_);
lean_dec(v___x_3281_);
v_alreadyFound_3267_ = v___x_3283_;
v_relaxedReuse_3268_ = v_relaxedReuse_3276_;
v_ownedness_3269_ = v_ownedness_3279_;
v___y_3270_ = v___y_3261_;
v___y_3271_ = v___y_3262_;
v___y_3272_ = v___y_3263_;
v___y_3273_ = v___y_3264_;
goto v___jp_3266_;
}
else
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3291_; 
lean_dec(v___x_3281_);
lean_dec_ref(v_code_3259_);
v_a_3284_ = lean_ctor_get(v___x_3282_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v___x_3282_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3286_ = v___x_3282_;
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v___x_3282_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
if (v_isShared_3287_ == 0)
{
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3284_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
return v___x_3289_;
}
}
}
}
v___jp_3266_:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
lean_inc_ref(v_ownedness_3269_);
v___x_3274_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3274_, 0, v_alreadyFound_3267_);
lean_ctor_set(v___x_3274_, 1, v_ownedness_3269_);
lean_ctor_set_uint8(v___x_3274_, sizeof(void*)*2, v_relaxedReuse_3268_);
v___x_3275_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_code_3259_, v___x_3274_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
lean_dec_ref_known(v___x_3274_, 2);
return v___x_3275_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed(lean_object* v_code_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(v_code_3292_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec_ref(v___y_3293_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(lean_object* v_decl_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v_toSignature_3308_; lean_object* v_value_3309_; uint8_t v_recursive_3310_; lean_object* v_inlineAttr_x3f_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3336_; 
v_toSignature_3308_ = lean_ctor_get(v_decl_3301_, 0);
v_value_3309_ = lean_ctor_get(v_decl_3301_, 1);
v_recursive_3310_ = lean_ctor_get_uint8(v_decl_3301_, sizeof(void*)*3);
v_inlineAttr_x3f_3311_ = lean_ctor_get(v_decl_3301_, 2);
v_isSharedCheck_3336_ = !lean_is_exclusive(v_decl_3301_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3313_ = v_decl_3301_;
v_isShared_3314_ = v_isSharedCheck_3336_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_inlineAttr_x3f_3311_);
lean_inc(v_value_3309_);
lean_inc(v_toSignature_3308_);
lean_dec(v_decl_3301_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3336_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___f_3315_; lean_object* v___x_3316_; 
v___f_3315_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0));
v___x_3316_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v___f_3315_, v_value_3309_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3327_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3327_ == 0)
{
v___x_3319_ = v___x_3316_;
v_isShared_3320_ = v_isSharedCheck_3327_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3316_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3327_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3322_; 
if (v_isShared_3314_ == 0)
{
lean_ctor_set(v___x_3313_, 1, v_a_3317_);
v___x_3322_ = v___x_3313_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_toSignature_3308_);
lean_ctor_set(v_reuseFailAlloc_3326_, 1, v_a_3317_);
lean_ctor_set(v_reuseFailAlloc_3326_, 2, v_inlineAttr_x3f_3311_);
lean_ctor_set_uint8(v_reuseFailAlloc_3326_, sizeof(void*)*3, v_recursive_3310_);
v___x_3322_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
lean_object* v___x_3324_; 
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 0, v___x_3322_);
v___x_3324_ = v___x_3319_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v___x_3322_);
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
else
{
lean_object* v_a_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3335_; 
lean_del_object(v___x_3313_);
lean_dec(v_inlineAttr_x3f_3311_);
lean_dec_ref(v_toSignature_3308_);
v_a_3328_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3330_ = v___x_3316_;
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_a_3328_);
lean_dec(v___x_3316_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
lean_object* v___x_3333_; 
if (v_isShared_3331_ == 0)
{
v___x_3333_ = v___x_3330_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_a_3328_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___boxed(lean_object* v_decl_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_){
_start:
{
lean_object* v_res_3344_; 
v_res_3344_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_decl_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec_ref(v___y_3338_);
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(lean_object* v_decl_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_){
_start:
{
lean_object* v___x_3351_; 
v___x_3351_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_3346_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3379_; 
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3354_ = v___x_3351_;
v_isShared_3355_ = v_isSharedCheck_3379_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3351_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3379_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
uint8_t v_resetReuse_3356_; 
v_resetReuse_3356_ = lean_ctor_get_uint8(v_a_3352_, sizeof(void*)*4 + 2);
lean_dec(v_a_3352_);
if (v_resetReuse_3356_ == 0)
{
lean_object* v___x_3358_; 
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 0, v_decl_3345_);
v___x_3358_ = v___x_3354_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_decl_3345_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
return v___x_3358_;
}
}
else
{
lean_object* v___x_3360_; 
lean_del_object(v___x_3354_);
lean_inc_ref(v_decl_3345_);
v___x_3360_ = l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(v_decl_3345_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v_a_3361_; lean_object* v___x_3362_; 
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
lean_inc_n(v_a_3361_, 2);
lean_dec_ref_known(v___x_3360_, 1);
v___x_3362_ = l_Lean_Compiler_LCNF_Decl_applyOwnedness(v_decl_3345_, v_a_3361_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v_a_3363_; lean_object* v___x_3364_; uint8_t v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v_a_3363_ = lean_ctor_get(v___x_3362_, 0);
lean_inc(v_a_3363_);
lean_dec_ref_known(v___x_3362_, 1);
v___x_3364_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v___x_3365_ = 0;
lean_inc(v_a_3361_);
v___x_3366_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3366_, 0, v___x_3364_);
lean_ctor_set(v___x_3366_, 1, v_a_3361_);
lean_ctor_set_uint8(v___x_3366_, sizeof(void*)*2, v___x_3365_);
v___x_3367_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_3363_, v___x_3366_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
lean_dec_ref_known(v___x_3366_, 2);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_object* v_a_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3368_);
lean_dec_ref_known(v___x_3367_, 1);
v___x_3369_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3369_, 0, v___x_3364_);
lean_ctor_set(v___x_3369_, 1, v_a_3361_);
lean_ctor_set_uint8(v___x_3369_, sizeof(void*)*2, v_resetReuse_3356_);
v___x_3370_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_3368_, v___x_3369_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
lean_dec_ref_known(v___x_3369_, 2);
return v___x_3370_;
}
else
{
lean_dec(v_a_3361_);
return v___x_3367_;
}
}
else
{
lean_dec(v_a_3361_);
return v___x_3362_;
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_dec_ref(v_decl_3345_);
v_a_3371_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3360_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3360_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
}
}
else
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3387_; 
lean_dec_ref(v_decl_3345_);
v_a_3380_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3382_ = v___x_3351_;
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3351_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3385_; 
if (v_isShared_3383_ == 0)
{
v___x_3385_ = v___x_3382_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3380_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed(lean_object* v_decl_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(v_decl_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
return v_res_3394_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3(void){
_start:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3399_ = lean_unsigned_to_nat(0u);
v___x_3400_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__2));
v___x_3401_ = 2;
v___x_3402_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__1));
v___x_3403_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_3402_, v___x_3401_, v___x_3400_, v___x_3399_);
return v___x_3403_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse(void){
_start:
{
lean_object* v___x_3404_; 
v___x_3404_ = lean_obj_once(&l_Lean_Compiler_LCNF_insertResetReuse___closed__3, &l_Lean_Compiler_LCNF_insertResetReuse___closed__3_once, _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3);
return v___x_3404_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3460_ = lean_unsigned_to_nat(2506150707u);
v___x_3461_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3462_ = l_Lean_Name_num___override(v___x_3461_, v___x_3460_);
return v___x_3462_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___x_3464_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3465_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3466_ = l_Lean_Name_str___override(v___x_3465_, v___x_3464_);
return v___x_3466_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3468_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3469_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3470_ = l_Lean_Name_str___override(v___x_3469_, v___x_3468_);
return v___x_3470_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; 
v___x_3471_ = lean_unsigned_to_nat(2u);
v___x_3472_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3473_ = l_Lean_Name_num___override(v___x_3472_, v___x_3471_);
return v___x_3473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3475_; uint8_t v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; 
v___x_3475_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3476_ = 1;
v___x_3477_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3478_ = l_Lean_registerTraceClass(v___x_3475_, v___x_3476_, v___x_3477_);
return v___x_3478_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2____boxed(lean_object* v___y_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
return v_res_3480_;
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
