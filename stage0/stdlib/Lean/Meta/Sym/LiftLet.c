// Lean compiler output
// Module: Lean.Meta.Sym.LiftLet
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.ReplaceS
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
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_EStateM_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_seqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
uint8_t lean_usize_dec_lt(size_t, size_t);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_EStateM_instInhabited___redArg(lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
static const lean_string_object l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl;
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_map, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_seqRight, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_bind, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "_private.Lean.Meta.Sym.ReplaceS.0.Lean.Meta.Sym.visit"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.Sym.ReplaceS"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Sym.AlphaShareBuilder"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.Sym.Internal.liftBuilderM"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "`Sym.liftLets` internal error, input term is not closed"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3;
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "_private.Lean.Meta.Sym.LiftLet.0.Lean.Meta.Sym.LiftLet.go.visit"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Meta.Sym.LiftLet"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Meta.Sym.LiftLet.0.Lean.Meta.Sym.LiftLet.mkLets"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "assertion violation: p < i\n          "};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_liftLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_liftLets___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_liftLets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_liftLets___closed__1;
static const lean_array_object l_Lean_Meta_Sym_liftLets___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_liftLets___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_liftLets___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_liftLets___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_liftLets___closed__3;
static const lean_string_object l_Lean_Meta_Sym_liftLets___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "`Sym.liftLets` internal error, input term has loose bound variables"};
static const lean_object* l_Lean_Meta_Sym_liftLets___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_liftLets___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Sym_liftLets___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_liftLets___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3(void){
_start:
{
uint8_t v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_7_ = 0;
v___x_8_ = lean_box(0);
v___x_9_ = lean_obj_once(&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2, &l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2_once, _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2);
v___x_10_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_8_);
lean_ctor_set(v___x_10_, 2, v___x_9_);
lean_ctor_set(v___x_10_, 3, v___x_9_);
lean_ctor_set_uint8(v___x_10_, sizeof(void*)*4, v___x_7_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3, &l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3_once, _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3);
return v___x_11_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default;
return v___x_12_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1(lean_object* v_xs_13_){
_start:
{
size_t v___x_14_; size_t v___x_15_; size_t v___x_16_; uint64_t v___x_17_; 
v___x_14_ = lean_ptr_addr(v_xs_13_);
v___x_15_ = ((size_t)3ULL);
v___x_16_ = lean_usize_shift_right(v___x_14_, v___x_15_);
v___x_17_ = lean_usize_to_uint64(v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1___boxed(lean_object* v_xs_18_){
_start:
{
uint64_t v_res_19_; lean_object* v_r_20_; 
v_res_19_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1(v_xs_18_);
lean_dec_ref(v_xs_18_);
v_r_20_ = lean_box_uint64(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv(lean_object* v_xs_21_){
_start:
{
size_t v___x_22_; size_t v___x_23_; size_t v___x_24_; uint64_t v___x_25_; 
v___x_22_ = lean_ptr_addr(v_xs_21_);
v___x_23_ = ((size_t)3ULL);
v___x_24_ = lean_usize_shift_right(v___x_22_, v___x_23_);
v___x_25_ = lean_usize_to_uint64(v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv___boxed(lean_object* v_xs_26_){
_start:
{
uint64_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv(v_xs_26_);
lean_dec_ref(v_xs_26_);
v_r_28_ = lean_box_uint64(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1(lean_object* v_xs_29_, lean_object* v_ys_30_){
_start:
{
size_t v___x_31_; size_t v___x_32_; uint8_t v___x_33_; 
v___x_31_ = lean_ptr_addr(v_xs_29_);
v___x_32_ = lean_ptr_addr(v_ys_30_);
v___x_33_ = lean_usize_dec_eq(v___x_31_, v___x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1___boxed(lean_object* v_xs_34_, lean_object* v_ys_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1(v_xs_34_, v_ys_35_);
lean_dec_ref(v_ys_35_);
lean_dec_ref(v_xs_34_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv(lean_object* v_xs_38_, lean_object* v_ys_39_){
_start:
{
size_t v___x_40_; size_t v___x_41_; uint8_t v___x_42_; 
v___x_40_ = lean_ptr_addr(v_xs_38_);
v___x_41_ = lean_ptr_addr(v_ys_39_);
v___x_42_ = lean_usize_dec_eq(v___x_40_, v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv___boxed(lean_object* v_xs_43_, lean_object* v_ys_44_){
_start:
{
uint8_t v_res_45_; lean_object* v_r_46_; 
v_res_45_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv(v_xs_43_, v_ys_44_);
lean_dec_ref(v_ys_44_);
lean_dec_ref(v_xs_43_);
v_r_46_ = lean_box(v_res_45_);
return v_r_46_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0(lean_object* v_k_47_){
_start:
{
size_t v___x_48_; size_t v___x_49_; size_t v___x_50_; uint64_t v___x_51_; 
v___x_48_ = lean_ptr_addr(v_k_47_);
v___x_49_ = ((size_t)3ULL);
v___x_50_ = lean_usize_shift_right(v___x_48_, v___x_49_);
v___x_51_ = lean_usize_to_uint64(v___x_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0___boxed(lean_object* v_k_52_){
_start:
{
uint64_t v_res_53_; lean_object* v_r_54_; 
v_res_53_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0(v_k_52_);
lean_dec_ref(v_k_52_);
v_r_54_ = lean_box_uint64(v_res_53_);
return v_r_54_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0(lean_object* v_k_u2081_57_, lean_object* v_k_u2082_58_){
_start:
{
size_t v___x_59_; size_t v___x_60_; uint8_t v___x_61_; 
v___x_59_ = lean_ptr_addr(v_k_u2081_57_);
v___x_60_ = lean_ptr_addr(v_k_u2082_58_);
v___x_61_ = lean_usize_dec_eq(v___x_59_, v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0___boxed(lean_object* v_k_u2081_62_, lean_object* v_k_u2082_63_){
_start:
{
uint8_t v_res_64_; lean_object* v_r_65_; 
v_res_64_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0(v_k_u2081_62_, v_k_u2082_63_);
lean_dec_ref(v_k_u2082_63_);
lean_dec_ref(v_k_u2081_62_);
v_r_65_ = lean_box(v_res_64_);
return v_r_65_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_68_, lean_object* v_x_69_){
_start:
{
if (lean_obj_tag(v_x_69_) == 0)
{
return v_x_68_;
}
else
{
lean_object* v_key_70_; lean_object* v_value_71_; lean_object* v_tail_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_98_; 
v_key_70_ = lean_ctor_get(v_x_69_, 0);
v_value_71_ = lean_ctor_get(v_x_69_, 1);
v_tail_72_ = lean_ctor_get(v_x_69_, 2);
v_isSharedCheck_98_ = !lean_is_exclusive(v_x_69_);
if (v_isSharedCheck_98_ == 0)
{
v___x_74_ = v_x_69_;
v_isShared_75_ = v_isSharedCheck_98_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_tail_72_);
lean_inc(v_value_71_);
lean_inc(v_key_70_);
lean_dec(v_x_69_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_98_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_76_; size_t v___x_77_; size_t v___x_78_; size_t v___x_79_; uint64_t v___x_80_; uint64_t v___x_81_; uint64_t v___x_82_; uint64_t v_fold_83_; uint64_t v___x_84_; uint64_t v___x_85_; uint64_t v___x_86_; size_t v___x_87_; size_t v___x_88_; size_t v___x_89_; size_t v___x_90_; size_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_94_; 
v___x_76_ = lean_array_get_size(v_x_68_);
v___x_77_ = lean_ptr_addr(v_key_70_);
v___x_78_ = ((size_t)3ULL);
v___x_79_ = lean_usize_shift_right(v___x_77_, v___x_78_);
v___x_80_ = lean_usize_to_uint64(v___x_79_);
v___x_81_ = 32ULL;
v___x_82_ = lean_uint64_shift_right(v___x_80_, v___x_81_);
v_fold_83_ = lean_uint64_xor(v___x_80_, v___x_82_);
v___x_84_ = 16ULL;
v___x_85_ = lean_uint64_shift_right(v_fold_83_, v___x_84_);
v___x_86_ = lean_uint64_xor(v_fold_83_, v___x_85_);
v___x_87_ = lean_uint64_to_usize(v___x_86_);
v___x_88_ = lean_usize_of_nat(v___x_76_);
v___x_89_ = ((size_t)1ULL);
v___x_90_ = lean_usize_sub(v___x_88_, v___x_89_);
v___x_91_ = lean_usize_land(v___x_87_, v___x_90_);
v___x_92_ = lean_array_uget_borrowed(v_x_68_, v___x_91_);
lean_inc(v___x_92_);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 2, v___x_92_);
v___x_94_ = v___x_74_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_key_70_);
lean_ctor_set(v_reuseFailAlloc_97_, 1, v_value_71_);
lean_ctor_set(v_reuseFailAlloc_97_, 2, v___x_92_);
v___x_94_ = v_reuseFailAlloc_97_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
lean_object* v___x_95_; 
v___x_95_ = lean_array_uset(v_x_68_, v___x_91_, v___x_94_);
v_x_68_ = v___x_95_;
v_x_69_ = v_tail_72_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4___redArg(lean_object* v_i_99_, lean_object* v_source_100_, lean_object* v_target_101_){
_start:
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = lean_array_get_size(v_source_100_);
v___x_103_ = lean_nat_dec_lt(v_i_99_, v___x_102_);
if (v___x_103_ == 0)
{
lean_dec_ref(v_source_100_);
lean_dec(v_i_99_);
return v_target_101_;
}
else
{
lean_object* v_es_104_; lean_object* v___x_105_; lean_object* v_source_106_; lean_object* v_target_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v_es_104_ = lean_array_fget(v_source_100_, v_i_99_);
v___x_105_ = lean_box(0);
v_source_106_ = lean_array_fset(v_source_100_, v_i_99_, v___x_105_);
v_target_107_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5___redArg(v_target_101_, v_es_104_);
v___x_108_ = lean_unsigned_to_nat(1u);
v___x_109_ = lean_nat_add(v_i_99_, v___x_108_);
lean_dec(v_i_99_);
v_i_99_ = v___x_109_;
v_source_100_ = v_source_106_;
v_target_101_ = v_target_107_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3___redArg(lean_object* v_data_111_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v_nbuckets_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_112_ = lean_array_get_size(v_data_111_);
v___x_113_ = lean_unsigned_to_nat(2u);
v_nbuckets_114_ = lean_nat_mul(v___x_112_, v___x_113_);
v___x_115_ = lean_unsigned_to_nat(0u);
v___x_116_ = lean_box(0);
v___x_117_ = lean_mk_array(v_nbuckets_114_, v___x_116_);
v___x_118_ = lean_array_propagate_mark(v_data_111_, v___x_117_);
v___x_119_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4___redArg(v___x_115_, v_data_111_, v___x_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(lean_object* v_a_120_, lean_object* v_b_121_, lean_object* v_x_122_){
_start:
{
if (lean_obj_tag(v_x_122_) == 0)
{
lean_dec(v_b_121_);
lean_dec_ref(v_a_120_);
return v_x_122_;
}
else
{
lean_object* v_key_123_; lean_object* v_value_124_; lean_object* v_tail_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_139_; 
v_key_123_ = lean_ctor_get(v_x_122_, 0);
v_value_124_ = lean_ctor_get(v_x_122_, 1);
v_tail_125_ = lean_ctor_get(v_x_122_, 2);
v_isSharedCheck_139_ = !lean_is_exclusive(v_x_122_);
if (v_isSharedCheck_139_ == 0)
{
v___x_127_ = v_x_122_;
v_isShared_128_ = v_isSharedCheck_139_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_tail_125_);
lean_inc(v_value_124_);
lean_inc(v_key_123_);
lean_dec(v_x_122_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_139_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
size_t v___x_129_; size_t v___x_130_; uint8_t v___x_131_; 
v___x_129_ = lean_ptr_addr(v_key_123_);
v___x_130_ = lean_ptr_addr(v_a_120_);
v___x_131_ = lean_usize_dec_eq(v___x_129_, v___x_130_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_132_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(v_a_120_, v_b_121_, v_tail_125_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 2, v___x_132_);
v___x_134_ = v___x_127_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_key_123_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v_value_124_);
lean_ctor_set(v_reuseFailAlloc_135_, 2, v___x_132_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
else
{
lean_object* v___x_137_; 
lean_dec(v_value_124_);
lean_dec(v_key_123_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v_b_121_);
lean_ctor_set(v___x_127_, 0, v_a_120_);
v___x_137_ = v___x_127_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_a_120_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v_b_121_);
lean_ctor_set(v_reuseFailAlloc_138_, 2, v_tail_125_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(lean_object* v_a_140_, lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 0)
{
uint8_t v___x_142_; 
v___x_142_ = 0;
return v___x_142_;
}
else
{
lean_object* v_key_143_; lean_object* v_tail_144_; size_t v___x_145_; size_t v___x_146_; uint8_t v___x_147_; 
v_key_143_ = lean_ctor_get(v_x_141_, 0);
v_tail_144_ = lean_ctor_get(v_x_141_, 2);
v___x_145_ = lean_ptr_addr(v_key_143_);
v___x_146_ = lean_ptr_addr(v_a_140_);
v___x_147_ = lean_usize_dec_eq(v___x_145_, v___x_146_);
if (v___x_147_ == 0)
{
v_x_141_ = v_tail_144_;
goto _start;
}
else
{
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg___boxed(lean_object* v_a_149_, lean_object* v_x_150_){
_start:
{
uint8_t v_res_151_; lean_object* v_r_152_; 
v_res_151_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(v_a_149_, v_x_150_);
lean_dec(v_x_150_);
lean_dec_ref(v_a_149_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(lean_object* v_m_153_, lean_object* v_a_154_, lean_object* v_b_155_){
_start:
{
lean_object* v_size_156_; lean_object* v_buckets_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_203_; 
v_size_156_ = lean_ctor_get(v_m_153_, 0);
v_buckets_157_ = lean_ctor_get(v_m_153_, 1);
v_isSharedCheck_203_ = !lean_is_exclusive(v_m_153_);
if (v_isSharedCheck_203_ == 0)
{
v___x_159_ = v_m_153_;
v_isShared_160_ = v_isSharedCheck_203_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_buckets_157_);
lean_inc(v_size_156_);
lean_dec(v_m_153_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_203_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; size_t v___x_162_; size_t v___x_163_; size_t v___x_164_; uint64_t v___x_165_; uint64_t v___x_166_; uint64_t v___x_167_; uint64_t v_fold_168_; uint64_t v___x_169_; uint64_t v___x_170_; uint64_t v___x_171_; size_t v___x_172_; size_t v___x_173_; size_t v___x_174_; size_t v___x_175_; size_t v___x_176_; lean_object* v_bkt_177_; uint8_t v___x_178_; 
v___x_161_ = lean_array_get_size(v_buckets_157_);
v___x_162_ = lean_ptr_addr(v_a_154_);
v___x_163_ = ((size_t)3ULL);
v___x_164_ = lean_usize_shift_right(v___x_162_, v___x_163_);
v___x_165_ = lean_usize_to_uint64(v___x_164_);
v___x_166_ = 32ULL;
v___x_167_ = lean_uint64_shift_right(v___x_165_, v___x_166_);
v_fold_168_ = lean_uint64_xor(v___x_165_, v___x_167_);
v___x_169_ = 16ULL;
v___x_170_ = lean_uint64_shift_right(v_fold_168_, v___x_169_);
v___x_171_ = lean_uint64_xor(v_fold_168_, v___x_170_);
v___x_172_ = lean_uint64_to_usize(v___x_171_);
v___x_173_ = lean_usize_of_nat(v___x_161_);
v___x_174_ = ((size_t)1ULL);
v___x_175_ = lean_usize_sub(v___x_173_, v___x_174_);
v___x_176_ = lean_usize_land(v___x_172_, v___x_175_);
v_bkt_177_ = lean_array_uget_borrowed(v_buckets_157_, v___x_176_);
v___x_178_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(v_a_154_, v_bkt_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v_size_x27_180_; lean_object* v___x_181_; lean_object* v_buckets_x27_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_179_ = lean_unsigned_to_nat(1u);
v_size_x27_180_ = lean_nat_add(v_size_156_, v___x_179_);
lean_dec(v_size_156_);
lean_inc(v_bkt_177_);
v___x_181_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_181_, 0, v_a_154_);
lean_ctor_set(v___x_181_, 1, v_b_155_);
lean_ctor_set(v___x_181_, 2, v_bkt_177_);
v_buckets_x27_182_ = lean_array_uset(v_buckets_157_, v___x_176_, v___x_181_);
v___x_183_ = lean_unsigned_to_nat(4u);
v___x_184_ = lean_nat_mul(v_size_x27_180_, v___x_183_);
v___x_185_ = lean_unsigned_to_nat(3u);
v___x_186_ = lean_nat_div(v___x_184_, v___x_185_);
lean_dec(v___x_184_);
v___x_187_ = lean_array_get_size(v_buckets_x27_182_);
v___x_188_ = lean_nat_dec_le(v___x_186_, v___x_187_);
lean_dec(v___x_186_);
if (v___x_188_ == 0)
{
lean_object* v_val_189_; lean_object* v___x_191_; 
v_val_189_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3___redArg(v_buckets_x27_182_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v_val_189_);
lean_ctor_set(v___x_159_, 0, v_size_x27_180_);
v___x_191_ = v___x_159_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_size_x27_180_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v_val_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
else
{
lean_object* v___x_194_; 
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v_buckets_x27_182_);
lean_ctor_set(v___x_159_, 0, v_size_x27_180_);
v___x_194_ = v___x_159_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_size_x27_180_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_buckets_x27_182_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
else
{
lean_object* v___x_196_; lean_object* v_buckets_x27_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_201_; 
lean_inc(v_bkt_177_);
v___x_196_ = lean_box(0);
v_buckets_x27_197_ = lean_array_uset(v_buckets_157_, v___x_176_, v___x_196_);
v___x_198_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(v_a_154_, v_b_155_, v_bkt_177_);
v___x_199_ = lean_array_uset(v_buckets_x27_197_, v___x_176_, v___x_198_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v___x_199_);
v___x_201_ = v___x_159_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_size_156_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v___x_199_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(lean_object* v_a_204_, lean_object* v_x_205_){
_start:
{
if (lean_obj_tag(v_x_205_) == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_box(0);
return v___x_206_;
}
else
{
lean_object* v_key_207_; lean_object* v_value_208_; lean_object* v_tail_209_; size_t v___x_210_; size_t v___x_211_; uint8_t v___x_212_; 
v_key_207_ = lean_ctor_get(v_x_205_, 0);
v_value_208_ = lean_ctor_get(v_x_205_, 1);
v_tail_209_ = lean_ctor_get(v_x_205_, 2);
v___x_210_ = lean_ptr_addr(v_key_207_);
v___x_211_ = lean_ptr_addr(v_a_204_);
v___x_212_ = lean_usize_dec_eq(v___x_210_, v___x_211_);
if (v___x_212_ == 0)
{
v_x_205_ = v_tail_209_;
goto _start;
}
else
{
lean_object* v___x_214_; 
lean_inc(v_value_208_);
v___x_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_214_, 0, v_value_208_);
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg___boxed(lean_object* v_a_215_, lean_object* v_x_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(v_a_215_, v_x_216_);
lean_dec(v_x_216_);
lean_dec_ref(v_a_215_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(lean_object* v_m_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_buckets_220_; lean_object* v___x_221_; size_t v___x_222_; size_t v___x_223_; size_t v___x_224_; uint64_t v___x_225_; uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v_fold_228_; uint64_t v___x_229_; uint64_t v___x_230_; uint64_t v___x_231_; size_t v___x_232_; size_t v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_buckets_220_ = lean_ctor_get(v_m_218_, 1);
v___x_221_ = lean_array_get_size(v_buckets_220_);
v___x_222_ = lean_ptr_addr(v_a_219_);
v___x_223_ = ((size_t)3ULL);
v___x_224_ = lean_usize_shift_right(v___x_222_, v___x_223_);
v___x_225_ = lean_usize_to_uint64(v___x_224_);
v___x_226_ = 32ULL;
v___x_227_ = lean_uint64_shift_right(v___x_225_, v___x_226_);
v_fold_228_ = lean_uint64_xor(v___x_225_, v___x_227_);
v___x_229_ = 16ULL;
v___x_230_ = lean_uint64_shift_right(v_fold_228_, v___x_229_);
v___x_231_ = lean_uint64_xor(v_fold_228_, v___x_230_);
v___x_232_ = lean_uint64_to_usize(v___x_231_);
v___x_233_ = lean_usize_of_nat(v___x_221_);
v___x_234_ = ((size_t)1ULL);
v___x_235_ = lean_usize_sub(v___x_233_, v___x_234_);
v___x_236_ = lean_usize_land(v___x_232_, v___x_235_);
v___x_237_ = lean_array_uget_borrowed(v_buckets_220_, v___x_236_);
v___x_238_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(v_a_219_, v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg___boxed(lean_object* v_m_239_, lean_object* v_a_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(v_m_239_, v_a_240_);
lean_dec_ref(v_a_240_);
lean_dec_ref(v_m_239_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0___boxed(lean_object* v_fn_242_, lean_object* v_arg_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0(v_fn_242_, v_arg_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec(v___y_244_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___boxed(lean_object* v_e_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(v_e_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec(v___y_254_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(lean_object* v_e_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v_e_273_; lean_object* v_k_274_; lean_object* v___y_275_; lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_279_; lean_object* v___y_280_; lean_object* v___y_281_; 
switch(lean_obj_tag(v_e_263_))
{
case 8:
{
uint8_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec_ref_known(v_e_263_, 4);
v___x_317_ = 1;
v___x_318_ = lean_box(v___x_317_);
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
case 5:
{
lean_object* v_fn_320_; lean_object* v_arg_321_; lean_object* v___f_322_; 
v_fn_320_ = lean_ctor_get(v_e_263_, 0);
v_arg_321_ = lean_ctor_get(v_e_263_, 1);
lean_inc_ref(v_arg_321_);
lean_inc_ref(v_fn_320_);
v___f_322_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0___boxed), 10, 2);
lean_closure_set(v___f_322_, 0, v_fn_320_);
lean_closure_set(v___f_322_, 1, v_arg_321_);
v_e_273_ = v_e_263_;
v_k_274_ = v___f_322_;
v___y_275_ = v___y_264_;
v___y_276_ = v___y_265_;
v___y_277_ = v___y_266_;
v___y_278_ = v___y_267_;
v___y_279_ = v___y_268_;
v___y_280_ = v___y_269_;
v___y_281_ = v___y_270_;
goto v___jp_272_;
}
case 10:
{
lean_object* v_expr_323_; lean_object* v___x_324_; 
v_expr_323_ = lean_ctor_get(v_e_263_, 1);
lean_inc_ref(v_expr_323_);
v___x_324_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___boxed), 9, 1);
lean_closure_set(v___x_324_, 0, v_expr_323_);
v_e_273_ = v_e_263_;
v_k_274_ = v___x_324_;
v___y_275_ = v___y_264_;
v___y_276_ = v___y_265_;
v___y_277_ = v___y_266_;
v___y_278_ = v___y_267_;
v___y_279_ = v___y_268_;
v___y_280_ = v___y_269_;
v___y_281_ = v___y_270_;
goto v___jp_272_;
}
case 11:
{
lean_object* v_struct_325_; lean_object* v___x_326_; 
v_struct_325_ = lean_ctor_get(v_e_263_, 2);
lean_inc_ref(v_struct_325_);
v___x_326_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___boxed), 9, 1);
lean_closure_set(v___x_326_, 0, v_struct_325_);
v_e_273_ = v_e_263_;
v_k_274_ = v___x_326_;
v___y_275_ = v___y_264_;
v___y_276_ = v___y_265_;
v___y_277_ = v___y_266_;
v___y_278_ = v___y_267_;
v___y_279_ = v___y_268_;
v___y_280_ = v___y_269_;
v___y_281_ = v___y_270_;
goto v___jp_272_;
}
default: 
{
uint8_t v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec_ref(v_e_263_);
v___x_327_ = 0;
v___x_328_ = lean_box(v___x_327_);
v___x_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_329_, 0, v___x_328_);
return v___x_329_;
}
}
v___jp_272_:
{
lean_object* v___x_282_; lean_object* v_hasLetCache_283_; lean_object* v___x_284_; 
v___x_282_ = lean_st_ref_get(v___y_275_);
v_hasLetCache_283_ = lean_ctor_get(v___x_282_, 2);
lean_inc_ref(v_hasLetCache_283_);
lean_dec(v___x_282_);
v___x_284_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(v_hasLetCache_283_, v_e_273_);
lean_dec_ref(v_hasLetCache_283_);
if (lean_obj_tag(v___x_284_) == 1)
{
lean_object* v_val_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_292_; 
lean_dec_ref(v_k_274_);
lean_dec_ref(v_e_273_);
v_val_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_val_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
lean_ctor_set_tag(v___x_287_, 0);
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_val_285_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
else
{
lean_object* v___x_293_; 
lean_dec(v___x_284_);
lean_inc(v___y_281_);
lean_inc_ref(v___y_280_);
lean_inc(v___y_279_);
lean_inc_ref(v___y_278_);
lean_inc(v___y_277_);
lean_inc_ref(v___y_276_);
lean_inc(v___y_275_);
v___x_293_ = lean_apply_8(v_k_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, lean_box(0));
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_316_; 
v_a_294_ = lean_ctor_get(v___x_293_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_316_ == 0)
{
v___x_296_ = v___x_293_;
v_isShared_297_ = v_isSharedCheck_316_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_293_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_316_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_298_; lean_object* v_cache_299_; lean_object* v_cacheClosed_300_; lean_object* v_hasLetCache_301_; lean_object* v_decls_302_; lean_object* v_valueMap_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_315_; 
v___x_298_ = lean_st_ref_take(v___y_275_);
v_cache_299_ = lean_ctor_get(v___x_298_, 0);
v_cacheClosed_300_ = lean_ctor_get(v___x_298_, 1);
v_hasLetCache_301_ = lean_ctor_get(v___x_298_, 2);
v_decls_302_ = lean_ctor_get(v___x_298_, 3);
v_valueMap_303_ = lean_ctor_get(v___x_298_, 4);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_315_ == 0)
{
v___x_305_ = v___x_298_;
v_isShared_306_ = v_isSharedCheck_315_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_valueMap_303_);
lean_inc(v_decls_302_);
lean_inc(v_hasLetCache_301_);
lean_inc(v_cacheClosed_300_);
lean_inc(v_cache_299_);
lean_dec(v___x_298_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_315_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v___x_309_; 
lean_inc(v_a_294_);
v___x_307_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(v_hasLetCache_301_, v_e_273_, v_a_294_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 2, v___x_307_);
v___x_309_ = v___x_305_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_cache_299_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_cacheClosed_300_);
lean_ctor_set(v_reuseFailAlloc_314_, 2, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_314_, 3, v_decls_302_);
lean_ctor_set(v_reuseFailAlloc_314_, 4, v_valueMap_303_);
v___x_309_ = v_reuseFailAlloc_314_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_310_ = lean_st_ref_put(v___y_275_, v___x_309_);
if (v_isShared_297_ == 0)
{
v___x_312_ = v___x_296_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_294_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_273_);
return v___x_293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0(lean_object* v_fn_330_, lean_object* v_arg_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(v_fn_330_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; uint8_t v___x_342_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
v___x_342_ = lean_unbox(v_a_341_);
lean_dec(v_a_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; 
lean_dec_ref_known(v___x_340_, 1);
v___x_343_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(v_arg_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
return v___x_343_;
}
else
{
lean_dec_ref(v_arg_331_);
return v___x_340_;
}
}
else
{
lean_dec_ref(v_arg_331_);
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0(lean_object* v_00_u03b2_344_, lean_object* v_m_345_, lean_object* v_a_346_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(v_m_345_, v_a_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___boxed(lean_object* v_00_u03b2_348_, lean_object* v_m_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0(v_00_u03b2_348_, v_m_349_, v_a_350_);
lean_dec_ref(v_a_350_);
lean_dec_ref(v_m_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1(lean_object* v_00_u03b2_352_, lean_object* v_m_353_, lean_object* v_a_354_, lean_object* v_b_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(v_m_353_, v_a_354_, v_b_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0(lean_object* v_00_u03b2_357_, lean_object* v_a_358_, lean_object* v_x_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(v_a_358_, v_x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___boxed(lean_object* v_00_u03b2_361_, lean_object* v_a_362_, lean_object* v_x_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0(v_00_u03b2_361_, v_a_362_, v_x_363_);
lean_dec(v_x_363_);
lean_dec_ref(v_a_362_);
return v_res_364_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2(lean_object* v_00_u03b2_365_, lean_object* v_a_366_, lean_object* v_x_367_){
_start:
{
uint8_t v___x_368_; 
v___x_368_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(v_a_366_, v_x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___boxed(lean_object* v_00_u03b2_369_, lean_object* v_a_370_, lean_object* v_x_371_){
_start:
{
uint8_t v_res_372_; lean_object* v_r_373_; 
v_res_372_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2(v_00_u03b2_369_, v_a_370_, v_x_371_);
lean_dec(v_x_371_);
lean_dec_ref(v_a_370_);
v_r_373_ = lean_box(v_res_372_);
return v_r_373_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3(lean_object* v_00_u03b2_374_, lean_object* v_data_375_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3___redArg(v_data_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4(lean_object* v_00_u03b2_377_, lean_object* v_a_378_, lean_object* v_b_379_, lean_object* v_x_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(v_a_378_, v_b_379_, v_x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_382_, lean_object* v_i_383_, lean_object* v_source_384_, lean_object* v_target_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4___redArg(v_i_383_, v_source_384_, v_target_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_387_, lean_object* v_x_388_, lean_object* v_x_389_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5___redArg(v_x_388_, v_x_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(lean_object* v_fvarId_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = l_Lean_Expr_fvar___override(v_fvarId_391_);
v___x_395_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_394_, v___y_392_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg___boxed(lean_object* v_fvarId_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(v_fvarId_396_, v___y_397_);
lean_dec(v___y_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2(lean_object* v_fvarId_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(v_fvarId_400_, v___y_403_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___boxed(lean_object* v_fvarId_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2(v_fvarId_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(lean_object* v___y_420_){
_start:
{
lean_object* v___x_422_; lean_object* v_ngen_423_; lean_object* v_namePrefix_424_; lean_object* v_idx_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_454_; 
v___x_422_ = lean_st_ref_get(v___y_420_);
v_ngen_423_ = lean_ctor_get(v___x_422_, 2);
lean_inc_ref(v_ngen_423_);
lean_dec(v___x_422_);
v_namePrefix_424_ = lean_ctor_get(v_ngen_423_, 0);
v_idx_425_ = lean_ctor_get(v_ngen_423_, 1);
v_isSharedCheck_454_ = !lean_is_exclusive(v_ngen_423_);
if (v_isSharedCheck_454_ == 0)
{
v___x_427_ = v_ngen_423_;
v_isShared_428_ = v_isSharedCheck_454_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_idx_425_);
lean_inc(v_namePrefix_424_);
lean_dec(v_ngen_423_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_454_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v_r_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_433_; 
lean_inc(v_idx_425_);
lean_inc(v_namePrefix_424_);
v_r_429_ = l_Lean_Name_num___override(v_namePrefix_424_, v_idx_425_);
v___x_430_ = lean_unsigned_to_nat(1u);
v___x_431_ = lean_nat_add(v_idx_425_, v___x_430_);
lean_dec(v_idx_425_);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 1, v___x_431_);
v___x_433_ = v___x_427_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_namePrefix_424_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v___x_431_);
v___x_433_ = v_reuseFailAlloc_453_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_434_; lean_object* v_env_435_; lean_object* v_nextMacroScope_436_; lean_object* v_auxDeclNGen_437_; lean_object* v_traceState_438_; lean_object* v_cache_439_; lean_object* v_messages_440_; lean_object* v_infoState_441_; lean_object* v_snapshotTasks_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_451_; 
v___x_434_ = lean_st_ref_take(v___y_420_);
v_env_435_ = lean_ctor_get(v___x_434_, 0);
v_nextMacroScope_436_ = lean_ctor_get(v___x_434_, 1);
v_auxDeclNGen_437_ = lean_ctor_get(v___x_434_, 3);
v_traceState_438_ = lean_ctor_get(v___x_434_, 4);
v_cache_439_ = lean_ctor_get(v___x_434_, 5);
v_messages_440_ = lean_ctor_get(v___x_434_, 6);
v_infoState_441_ = lean_ctor_get(v___x_434_, 7);
v_snapshotTasks_442_ = lean_ctor_get(v___x_434_, 8);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_451_ == 0)
{
lean_object* v_unused_452_; 
v_unused_452_ = lean_ctor_get(v___x_434_, 2);
lean_dec(v_unused_452_);
v___x_444_ = v___x_434_;
v_isShared_445_ = v_isSharedCheck_451_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_snapshotTasks_442_);
lean_inc(v_infoState_441_);
lean_inc(v_messages_440_);
lean_inc(v_cache_439_);
lean_inc(v_traceState_438_);
lean_inc(v_auxDeclNGen_437_);
lean_inc(v_nextMacroScope_436_);
lean_inc(v_env_435_);
lean_dec(v___x_434_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_451_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 2, v___x_433_);
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_env_435_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v_nextMacroScope_436_);
lean_ctor_set(v_reuseFailAlloc_450_, 2, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_450_, 3, v_auxDeclNGen_437_);
lean_ctor_set(v_reuseFailAlloc_450_, 4, v_traceState_438_);
lean_ctor_set(v_reuseFailAlloc_450_, 5, v_cache_439_);
lean_ctor_set(v_reuseFailAlloc_450_, 6, v_messages_440_);
lean_ctor_set(v_reuseFailAlloc_450_, 7, v_infoState_441_);
lean_ctor_set(v_reuseFailAlloc_450_, 8, v_snapshotTasks_442_);
v___x_447_ = v_reuseFailAlloc_450_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_st_ref_put(v___y_420_, v___x_447_);
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v_r_429_);
return v___x_449_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg___boxed(lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(v___y_455_);
lean_dec(v___y_455_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1(lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v___x_466_; lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
v___x_466_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(v___y_464_);
v_a_467_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_466_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_466_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
if (v_isShared_470_ == 0)
{
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1___boxed(lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1(v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(lean_object* v_a_484_, lean_object* v_x_485_){
_start:
{
if (lean_obj_tag(v_x_485_) == 0)
{
lean_object* v___x_486_; 
v___x_486_ = lean_box(0);
return v___x_486_;
}
else
{
lean_object* v_key_487_; lean_object* v_value_488_; lean_object* v_tail_489_; lean_object* v_fst_490_; lean_object* v_snd_491_; lean_object* v_fst_492_; lean_object* v_snd_493_; size_t v___x_494_; size_t v___x_495_; uint8_t v___x_496_; 
v_key_487_ = lean_ctor_get(v_x_485_, 0);
v_value_488_ = lean_ctor_get(v_x_485_, 1);
v_tail_489_ = lean_ctor_get(v_x_485_, 2);
v_fst_490_ = lean_ctor_get(v_key_487_, 0);
v_snd_491_ = lean_ctor_get(v_key_487_, 1);
v_fst_492_ = lean_ctor_get(v_a_484_, 0);
v_snd_493_ = lean_ctor_get(v_a_484_, 1);
v___x_494_ = lean_ptr_addr(v_fst_490_);
v___x_495_ = lean_ptr_addr(v_fst_492_);
v___x_496_ = lean_usize_dec_eq(v___x_494_, v___x_495_);
if (v___x_496_ == 0)
{
v_x_485_ = v_tail_489_;
goto _start;
}
else
{
size_t v___x_498_; size_t v___x_499_; uint8_t v___x_500_; 
v___x_498_ = lean_ptr_addr(v_snd_491_);
v___x_499_ = lean_ptr_addr(v_snd_493_);
v___x_500_ = lean_usize_dec_eq(v___x_498_, v___x_499_);
if (v___x_500_ == 0)
{
v_x_485_ = v_tail_489_;
goto _start;
}
else
{
lean_object* v___x_502_; 
lean_inc(v_value_488_);
v___x_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_502_, 0, v_value_488_);
return v___x_502_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg___boxed(lean_object* v_a_503_, lean_object* v_x_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(v_a_503_, v_x_504_);
lean_dec(v_x_504_);
lean_dec_ref(v_a_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(lean_object* v_m_506_, lean_object* v_a_507_){
_start:
{
lean_object* v_buckets_508_; lean_object* v_fst_509_; lean_object* v_snd_510_; lean_object* v___x_511_; size_t v___x_512_; size_t v___x_513_; size_t v___x_514_; uint64_t v___x_515_; size_t v___x_516_; size_t v___x_517_; uint64_t v___x_518_; uint64_t v___x_519_; uint64_t v___x_520_; uint64_t v___x_521_; uint64_t v_fold_522_; uint64_t v___x_523_; uint64_t v___x_524_; uint64_t v___x_525_; size_t v___x_526_; size_t v___x_527_; size_t v___x_528_; size_t v___x_529_; size_t v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v_buckets_508_ = lean_ctor_get(v_m_506_, 1);
v_fst_509_ = lean_ctor_get(v_a_507_, 0);
v_snd_510_ = lean_ctor_get(v_a_507_, 1);
v___x_511_ = lean_array_get_size(v_buckets_508_);
v___x_512_ = lean_ptr_addr(v_fst_509_);
v___x_513_ = ((size_t)3ULL);
v___x_514_ = lean_usize_shift_right(v___x_512_, v___x_513_);
v___x_515_ = lean_usize_to_uint64(v___x_514_);
v___x_516_ = lean_ptr_addr(v_snd_510_);
v___x_517_ = lean_usize_shift_right(v___x_516_, v___x_513_);
v___x_518_ = lean_usize_to_uint64(v___x_517_);
v___x_519_ = lean_uint64_mix_hash(v___x_515_, v___x_518_);
v___x_520_ = 32ULL;
v___x_521_ = lean_uint64_shift_right(v___x_519_, v___x_520_);
v_fold_522_ = lean_uint64_xor(v___x_519_, v___x_521_);
v___x_523_ = 16ULL;
v___x_524_ = lean_uint64_shift_right(v_fold_522_, v___x_523_);
v___x_525_ = lean_uint64_xor(v_fold_522_, v___x_524_);
v___x_526_ = lean_uint64_to_usize(v___x_525_);
v___x_527_ = lean_usize_of_nat(v___x_511_);
v___x_528_ = ((size_t)1ULL);
v___x_529_ = lean_usize_sub(v___x_527_, v___x_528_);
v___x_530_ = lean_usize_land(v___x_526_, v___x_529_);
v___x_531_ = lean_array_uget_borrowed(v_buckets_508_, v___x_530_);
v___x_532_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(v_a_507_, v___x_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg___boxed(lean_object* v_m_533_, lean_object* v_a_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(v_m_533_, v_a_534_);
lean_dec_ref(v_a_534_);
lean_dec_ref(v_m_533_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(lean_object* v_a_536_, lean_object* v_b_537_, lean_object* v_x_538_){
_start:
{
if (lean_obj_tag(v_x_538_) == 0)
{
lean_dec(v_b_537_);
lean_dec_ref(v_a_536_);
return v_x_538_;
}
else
{
lean_object* v_key_539_; lean_object* v_value_540_; lean_object* v_tail_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_561_; 
v_key_539_ = lean_ctor_get(v_x_538_, 0);
v_value_540_ = lean_ctor_get(v_x_538_, 1);
v_tail_541_ = lean_ctor_get(v_x_538_, 2);
v_isSharedCheck_561_ = !lean_is_exclusive(v_x_538_);
if (v_isSharedCheck_561_ == 0)
{
v___x_543_ = v_x_538_;
v_isShared_544_ = v_isSharedCheck_561_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_tail_541_);
lean_inc(v_value_540_);
lean_inc(v_key_539_);
lean_dec(v_x_538_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_561_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v_fst_550_; lean_object* v_snd_551_; lean_object* v_fst_552_; lean_object* v_snd_553_; size_t v___x_554_; size_t v___x_555_; uint8_t v___x_556_; 
v_fst_550_ = lean_ctor_get(v_key_539_, 0);
v_snd_551_ = lean_ctor_get(v_key_539_, 1);
v_fst_552_ = lean_ctor_get(v_a_536_, 0);
v_snd_553_ = lean_ctor_get(v_a_536_, 1);
v___x_554_ = lean_ptr_addr(v_fst_550_);
v___x_555_ = lean_ptr_addr(v_fst_552_);
v___x_556_ = lean_usize_dec_eq(v___x_554_, v___x_555_);
if (v___x_556_ == 0)
{
goto v___jp_545_;
}
else
{
size_t v___x_557_; size_t v___x_558_; uint8_t v___x_559_; 
v___x_557_ = lean_ptr_addr(v_snd_551_);
v___x_558_ = lean_ptr_addr(v_snd_553_);
v___x_559_ = lean_usize_dec_eq(v___x_557_, v___x_558_);
if (v___x_559_ == 0)
{
goto v___jp_545_;
}
else
{
lean_object* v___x_560_; 
lean_del_object(v___x_543_);
lean_dec(v_value_540_);
lean_dec(v_key_539_);
v___x_560_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_560_, 0, v_a_536_);
lean_ctor_set(v___x_560_, 1, v_b_537_);
lean_ctor_set(v___x_560_, 2, v_tail_541_);
return v___x_560_;
}
}
v___jp_545_:
{
lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_546_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(v_a_536_, v_b_537_, v_tail_541_);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 2, v___x_546_);
v___x_548_ = v___x_543_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_key_539_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v_value_540_);
lean_ctor_set(v_reuseFailAlloc_549_, 2, v___x_546_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(lean_object* v_a_562_, lean_object* v_x_563_){
_start:
{
if (lean_obj_tag(v_x_563_) == 0)
{
uint8_t v___x_564_; 
v___x_564_ = 0;
return v___x_564_;
}
else
{
lean_object* v_key_565_; lean_object* v_tail_566_; lean_object* v_fst_567_; lean_object* v_snd_568_; lean_object* v_fst_569_; lean_object* v_snd_570_; size_t v___x_571_; size_t v___x_572_; uint8_t v___x_573_; 
v_key_565_ = lean_ctor_get(v_x_563_, 0);
v_tail_566_ = lean_ctor_get(v_x_563_, 2);
v_fst_567_ = lean_ctor_get(v_key_565_, 0);
v_snd_568_ = lean_ctor_get(v_key_565_, 1);
v_fst_569_ = lean_ctor_get(v_a_562_, 0);
v_snd_570_ = lean_ctor_get(v_a_562_, 1);
v___x_571_ = lean_ptr_addr(v_fst_567_);
v___x_572_ = lean_ptr_addr(v_fst_569_);
v___x_573_ = lean_usize_dec_eq(v___x_571_, v___x_572_);
if (v___x_573_ == 0)
{
v_x_563_ = v_tail_566_;
goto _start;
}
else
{
size_t v___x_575_; size_t v___x_576_; uint8_t v___x_577_; 
v___x_575_ = lean_ptr_addr(v_snd_568_);
v___x_576_ = lean_ptr_addr(v_snd_570_);
v___x_577_ = lean_usize_dec_eq(v___x_575_, v___x_576_);
if (v___x_577_ == 0)
{
v_x_563_ = v_tail_566_;
goto _start;
}
else
{
return v___x_577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg___boxed(lean_object* v_a_579_, lean_object* v_x_580_){
_start:
{
uint8_t v_res_581_; lean_object* v_r_582_; 
v_res_581_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(v_a_579_, v_x_580_);
lean_dec(v_x_580_);
lean_dec_ref(v_a_579_);
v_r_582_ = lean_box(v_res_581_);
return v_r_582_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8___redArg(lean_object* v_x_583_, lean_object* v_x_584_){
_start:
{
if (lean_obj_tag(v_x_584_) == 0)
{
return v_x_583_;
}
else
{
lean_object* v_key_585_; lean_object* v_value_586_; lean_object* v_tail_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_619_; 
v_key_585_ = lean_ctor_get(v_x_584_, 0);
v_value_586_ = lean_ctor_get(v_x_584_, 1);
v_tail_587_ = lean_ctor_get(v_x_584_, 2);
v_isSharedCheck_619_ = !lean_is_exclusive(v_x_584_);
if (v_isSharedCheck_619_ == 0)
{
v___x_589_ = v_x_584_;
v_isShared_590_ = v_isSharedCheck_619_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_tail_587_);
lean_inc(v_value_586_);
lean_inc(v_key_585_);
lean_dec(v_x_584_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_619_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v_fst_591_; lean_object* v_snd_592_; lean_object* v___x_593_; size_t v___x_594_; size_t v___x_595_; size_t v___x_596_; uint64_t v___x_597_; size_t v___x_598_; size_t v___x_599_; uint64_t v___x_600_; uint64_t v___x_601_; uint64_t v___x_602_; uint64_t v___x_603_; uint64_t v_fold_604_; uint64_t v___x_605_; uint64_t v___x_606_; uint64_t v___x_607_; size_t v___x_608_; size_t v___x_609_; size_t v___x_610_; size_t v___x_611_; size_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_615_; 
v_fst_591_ = lean_ctor_get(v_key_585_, 0);
v_snd_592_ = lean_ctor_get(v_key_585_, 1);
v___x_593_ = lean_array_get_size(v_x_583_);
v___x_594_ = lean_ptr_addr(v_fst_591_);
v___x_595_ = ((size_t)3ULL);
v___x_596_ = lean_usize_shift_right(v___x_594_, v___x_595_);
v___x_597_ = lean_usize_to_uint64(v___x_596_);
v___x_598_ = lean_ptr_addr(v_snd_592_);
v___x_599_ = lean_usize_shift_right(v___x_598_, v___x_595_);
v___x_600_ = lean_usize_to_uint64(v___x_599_);
v___x_601_ = lean_uint64_mix_hash(v___x_597_, v___x_600_);
v___x_602_ = 32ULL;
v___x_603_ = lean_uint64_shift_right(v___x_601_, v___x_602_);
v_fold_604_ = lean_uint64_xor(v___x_601_, v___x_603_);
v___x_605_ = 16ULL;
v___x_606_ = lean_uint64_shift_right(v_fold_604_, v___x_605_);
v___x_607_ = lean_uint64_xor(v_fold_604_, v___x_606_);
v___x_608_ = lean_uint64_to_usize(v___x_607_);
v___x_609_ = lean_usize_of_nat(v___x_593_);
v___x_610_ = ((size_t)1ULL);
v___x_611_ = lean_usize_sub(v___x_609_, v___x_610_);
v___x_612_ = lean_usize_land(v___x_608_, v___x_611_);
v___x_613_ = lean_array_uget_borrowed(v_x_583_, v___x_612_);
lean_inc(v___x_613_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 2, v___x_613_);
v___x_615_ = v___x_589_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_key_585_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_value_586_);
lean_ctor_set(v_reuseFailAlloc_618_, 2, v___x_613_);
v___x_615_ = v_reuseFailAlloc_618_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_616_; 
v___x_616_ = lean_array_uset(v_x_583_, v___x_612_, v___x_615_);
v_x_583_ = v___x_616_;
v_x_584_ = v_tail_587_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7___redArg(lean_object* v_i_620_, lean_object* v_source_621_, lean_object* v_target_622_){
_start:
{
lean_object* v___x_623_; uint8_t v___x_624_; 
v___x_623_ = lean_array_get_size(v_source_621_);
v___x_624_ = lean_nat_dec_lt(v_i_620_, v___x_623_);
if (v___x_624_ == 0)
{
lean_dec_ref(v_source_621_);
lean_dec(v_i_620_);
return v_target_622_;
}
else
{
lean_object* v_es_625_; lean_object* v___x_626_; lean_object* v_source_627_; lean_object* v_target_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v_es_625_ = lean_array_fget(v_source_621_, v_i_620_);
v___x_626_ = lean_box(0);
v_source_627_ = lean_array_fset(v_source_621_, v_i_620_, v___x_626_);
v_target_628_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8___redArg(v_target_622_, v_es_625_);
v___x_629_ = lean_unsigned_to_nat(1u);
v___x_630_ = lean_nat_add(v_i_620_, v___x_629_);
lean_dec(v_i_620_);
v_i_620_ = v___x_630_;
v_source_621_ = v_source_627_;
v_target_622_ = v_target_628_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6___redArg(lean_object* v_data_632_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v_nbuckets_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_633_ = lean_array_get_size(v_data_632_);
v___x_634_ = lean_unsigned_to_nat(2u);
v_nbuckets_635_ = lean_nat_mul(v___x_633_, v___x_634_);
v___x_636_ = lean_unsigned_to_nat(0u);
v___x_637_ = lean_box(0);
v___x_638_ = lean_mk_array(v_nbuckets_635_, v___x_637_);
v___x_639_ = lean_array_propagate_mark(v_data_632_, v___x_638_);
v___x_640_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7___redArg(v___x_636_, v_data_632_, v___x_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3___redArg(lean_object* v_m_641_, lean_object* v_a_642_, lean_object* v_b_643_){
_start:
{
lean_object* v_size_644_; lean_object* v_buckets_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_697_; 
v_size_644_ = lean_ctor_get(v_m_641_, 0);
v_buckets_645_ = lean_ctor_get(v_m_641_, 1);
v_isSharedCheck_697_ = !lean_is_exclusive(v_m_641_);
if (v_isSharedCheck_697_ == 0)
{
v___x_647_ = v_m_641_;
v_isShared_648_ = v_isSharedCheck_697_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_buckets_645_);
lean_inc(v_size_644_);
lean_dec(v_m_641_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_697_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_fst_649_; lean_object* v_snd_650_; lean_object* v___x_651_; size_t v___x_652_; size_t v___x_653_; size_t v___x_654_; uint64_t v___x_655_; size_t v___x_656_; size_t v___x_657_; uint64_t v___x_658_; uint64_t v___x_659_; uint64_t v___x_660_; uint64_t v___x_661_; uint64_t v_fold_662_; uint64_t v___x_663_; uint64_t v___x_664_; uint64_t v___x_665_; size_t v___x_666_; size_t v___x_667_; size_t v___x_668_; size_t v___x_669_; size_t v___x_670_; lean_object* v_bkt_671_; uint8_t v___x_672_; 
v_fst_649_ = lean_ctor_get(v_a_642_, 0);
v_snd_650_ = lean_ctor_get(v_a_642_, 1);
v___x_651_ = lean_array_get_size(v_buckets_645_);
v___x_652_ = lean_ptr_addr(v_fst_649_);
v___x_653_ = ((size_t)3ULL);
v___x_654_ = lean_usize_shift_right(v___x_652_, v___x_653_);
v___x_655_ = lean_usize_to_uint64(v___x_654_);
v___x_656_ = lean_ptr_addr(v_snd_650_);
v___x_657_ = lean_usize_shift_right(v___x_656_, v___x_653_);
v___x_658_ = lean_usize_to_uint64(v___x_657_);
v___x_659_ = lean_uint64_mix_hash(v___x_655_, v___x_658_);
v___x_660_ = 32ULL;
v___x_661_ = lean_uint64_shift_right(v___x_659_, v___x_660_);
v_fold_662_ = lean_uint64_xor(v___x_659_, v___x_661_);
v___x_663_ = 16ULL;
v___x_664_ = lean_uint64_shift_right(v_fold_662_, v___x_663_);
v___x_665_ = lean_uint64_xor(v_fold_662_, v___x_664_);
v___x_666_ = lean_uint64_to_usize(v___x_665_);
v___x_667_ = lean_usize_of_nat(v___x_651_);
v___x_668_ = ((size_t)1ULL);
v___x_669_ = lean_usize_sub(v___x_667_, v___x_668_);
v___x_670_ = lean_usize_land(v___x_666_, v___x_669_);
v_bkt_671_ = lean_array_uget_borrowed(v_buckets_645_, v___x_670_);
v___x_672_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(v_a_642_, v_bkt_671_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; lean_object* v_size_x27_674_; lean_object* v___x_675_; lean_object* v_buckets_x27_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_673_ = lean_unsigned_to_nat(1u);
v_size_x27_674_ = lean_nat_add(v_size_644_, v___x_673_);
lean_dec(v_size_644_);
lean_inc(v_bkt_671_);
v___x_675_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_675_, 0, v_a_642_);
lean_ctor_set(v___x_675_, 1, v_b_643_);
lean_ctor_set(v___x_675_, 2, v_bkt_671_);
v_buckets_x27_676_ = lean_array_uset(v_buckets_645_, v___x_670_, v___x_675_);
v___x_677_ = lean_unsigned_to_nat(4u);
v___x_678_ = lean_nat_mul(v_size_x27_674_, v___x_677_);
v___x_679_ = lean_unsigned_to_nat(3u);
v___x_680_ = lean_nat_div(v___x_678_, v___x_679_);
lean_dec(v___x_678_);
v___x_681_ = lean_array_get_size(v_buckets_x27_676_);
v___x_682_ = lean_nat_dec_le(v___x_680_, v___x_681_);
lean_dec(v___x_680_);
if (v___x_682_ == 0)
{
lean_object* v_val_683_; lean_object* v___x_685_; 
v_val_683_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6___redArg(v_buckets_x27_676_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v_val_683_);
lean_ctor_set(v___x_647_, 0, v_size_x27_674_);
v___x_685_ = v___x_647_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_size_x27_674_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_val_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
else
{
lean_object* v___x_688_; 
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v_buckets_x27_676_);
lean_ctor_set(v___x_647_, 0, v_size_x27_674_);
v___x_688_ = v___x_647_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_size_x27_674_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_buckets_x27_676_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
else
{
lean_object* v___x_690_; lean_object* v_buckets_x27_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_695_; 
lean_inc(v_bkt_671_);
v___x_690_ = lean_box(0);
v_buckets_x27_691_ = lean_array_uset(v_buckets_645_, v___x_670_, v___x_690_);
v___x_692_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(v_a_642_, v_b_643_, v_bkt_671_);
v___x_693_ = lean_array_uset(v_buckets_x27_691_, v___x_670_, v___x_692_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v___x_693_);
v___x_695_ = v___x_647_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_size_644_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl(lean_object* v_userName_698_, lean_object* v_type_699_, lean_object* v_value_700_, uint8_t v_nondep_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v___x_710_; lean_object* v_key_711_; lean_object* v___x_712_; lean_object* v_valueMap_713_; lean_object* v___x_714_; 
v___x_710_ = l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default;
lean_inc_ref(v_value_700_);
lean_inc_ref(v_type_699_);
v_key_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_711_, 0, v_type_699_);
lean_ctor_set(v_key_711_, 1, v_value_700_);
v___x_712_ = lean_st_ref_get(v___y_702_);
v_valueMap_713_ = lean_ctor_get(v___x_712_, 4);
lean_inc_ref(v_valueMap_713_);
lean_dec(v___x_712_);
v___x_714_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(v_valueMap_713_, v_key_711_);
lean_dec_ref(v_valueMap_713_);
if (lean_obj_tag(v___x_714_) == 1)
{
lean_object* v_val_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_761_; 
lean_dec_ref_known(v_key_711_, 2);
lean_dec_ref(v_value_700_);
lean_dec_ref(v_type_699_);
lean_dec(v_userName_698_);
v_val_715_ = lean_ctor_get(v___x_714_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_714_);
if (v_isSharedCheck_761_ == 0)
{
v___x_717_ = v___x_714_;
v_isShared_718_ = v_isSharedCheck_761_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_val_715_);
lean_dec(v___x_714_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_761_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___y_720_; 
if (v_nondep_701_ == 0)
{
lean_object* v___x_728_; lean_object* v_cache_729_; lean_object* v_cacheClosed_730_; lean_object* v_hasLetCache_731_; lean_object* v_decls_732_; lean_object* v_valueMap_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_760_; 
v___x_728_ = lean_st_ref_take(v___y_702_);
v_cache_729_ = lean_ctor_get(v___x_728_, 0);
v_cacheClosed_730_ = lean_ctor_get(v___x_728_, 1);
v_hasLetCache_731_ = lean_ctor_get(v___x_728_, 2);
v_decls_732_ = lean_ctor_get(v___x_728_, 3);
v_valueMap_733_ = lean_ctor_get(v___x_728_, 4);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_760_ == 0)
{
v___x_735_ = v___x_728_;
v_isShared_736_ = v_isSharedCheck_760_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_valueMap_733_);
lean_inc(v_decls_732_);
lean_inc(v_hasLetCache_731_);
lean_inc(v_cacheClosed_730_);
lean_inc(v_cache_729_);
lean_dec(v___x_728_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_760_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___y_738_; lean_object* v___x_743_; uint8_t v___x_744_; 
v___x_743_ = lean_array_get_size(v_decls_732_);
v___x_744_ = lean_nat_dec_lt(v_val_715_, v___x_743_);
if (v___x_744_ == 0)
{
v___y_738_ = v_decls_732_;
goto v___jp_737_;
}
else
{
lean_object* v_v_745_; lean_object* v_fvar_746_; lean_object* v_userName_747_; lean_object* v_type_748_; lean_object* v_value_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_759_; 
v_v_745_ = lean_array_fget(v_decls_732_, v_val_715_);
v_fvar_746_ = lean_ctor_get(v_v_745_, 0);
v_userName_747_ = lean_ctor_get(v_v_745_, 1);
v_type_748_ = lean_ctor_get(v_v_745_, 2);
v_value_749_ = lean_ctor_get(v_v_745_, 3);
v_isSharedCheck_759_ = !lean_is_exclusive(v_v_745_);
if (v_isSharedCheck_759_ == 0)
{
v___x_751_ = v_v_745_;
v_isShared_752_ = v_isSharedCheck_759_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_value_749_);
lean_inc(v_type_748_);
lean_inc(v_userName_747_);
lean_inc(v_fvar_746_);
lean_dec(v_v_745_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_759_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_753_; lean_object* v_xs_x27_754_; lean_object* v___x_756_; 
v___x_753_ = lean_box(0);
v_xs_x27_754_ = lean_array_fset(v_decls_732_, v_val_715_, v___x_753_);
if (v_isShared_752_ == 0)
{
v___x_756_ = v___x_751_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_fvar_746_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_userName_747_);
lean_ctor_set(v_reuseFailAlloc_758_, 2, v_type_748_);
lean_ctor_set(v_reuseFailAlloc_758_, 3, v_value_749_);
v___x_756_ = v_reuseFailAlloc_758_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_757_; 
lean_ctor_set_uint8(v___x_756_, sizeof(void*)*4, v_nondep_701_);
v___x_757_ = lean_array_fset(v_xs_x27_754_, v_val_715_, v___x_756_);
v___y_738_ = v___x_757_;
goto v___jp_737_;
}
}
}
v___jp_737_:
{
lean_object* v___x_740_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 3, v___y_738_);
v___x_740_ = v___x_735_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_cache_729_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v_cacheClosed_730_);
lean_ctor_set(v_reuseFailAlloc_742_, 2, v_hasLetCache_731_);
lean_ctor_set(v_reuseFailAlloc_742_, 3, v___y_738_);
lean_ctor_set(v_reuseFailAlloc_742_, 4, v_valueMap_733_);
v___x_740_ = v_reuseFailAlloc_742_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_741_; 
v___x_741_ = lean_st_ref_put(v___y_702_, v___x_740_);
v___y_720_ = v___y_702_;
goto v___jp_719_;
}
}
}
}
else
{
v___y_720_ = v___y_702_;
goto v___jp_719_;
}
v___jp_719_:
{
lean_object* v___x_721_; lean_object* v_decls_722_; lean_object* v___x_723_; lean_object* v_fvar_724_; lean_object* v___x_726_; 
v___x_721_ = lean_st_ref_get(v___y_720_);
v_decls_722_ = lean_ctor_get(v___x_721_, 3);
lean_inc_ref(v_decls_722_);
lean_dec(v___x_721_);
v___x_723_ = lean_array_get(v___x_710_, v_decls_722_, v_val_715_);
lean_dec(v_val_715_);
lean_dec_ref(v_decls_722_);
v_fvar_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc_ref(v_fvar_724_);
lean_dec(v___x_723_);
if (v_isShared_718_ == 0)
{
lean_ctor_set_tag(v___x_717_, 0);
lean_ctor_set(v___x_717_, 0, v_fvar_724_);
v___x_726_ = v___x_717_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_fvar_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
else
{
lean_object* v___x_762_; 
lean_dec(v___x_714_);
v___x_762_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1(v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; lean_object* v___x_764_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
lean_dec_ref_known(v___x_762_, 1);
v___x_764_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(v_a_763_, v___y_704_);
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
lean_object* v___x_769_; lean_object* v_decls_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v_cache_773_; lean_object* v_cacheClosed_774_; lean_object* v_hasLetCache_775_; lean_object* v_decls_776_; lean_object* v_valueMap_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_791_; 
v___x_769_ = lean_st_ref_get(v___y_702_);
v_decls_770_ = lean_ctor_get(v___x_769_, 3);
lean_inc_ref(v_decls_770_);
lean_dec(v___x_769_);
v___x_771_ = lean_array_get_size(v_decls_770_);
lean_dec_ref(v_decls_770_);
v___x_772_ = lean_st_ref_take(v___y_702_);
v_cache_773_ = lean_ctor_get(v___x_772_, 0);
v_cacheClosed_774_ = lean_ctor_get(v___x_772_, 1);
v_hasLetCache_775_ = lean_ctor_get(v___x_772_, 2);
v_decls_776_ = lean_ctor_get(v___x_772_, 3);
v_valueMap_777_ = lean_ctor_get(v___x_772_, 4);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_791_ == 0)
{
v___x_779_ = v___x_772_;
v_isShared_780_ = v_isSharedCheck_791_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_valueMap_777_);
lean_inc(v_decls_776_);
lean_inc(v_hasLetCache_775_);
lean_inc(v_cacheClosed_774_);
lean_inc(v_cache_773_);
lean_dec(v___x_772_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_791_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_785_; 
lean_inc(v_a_765_);
v___x_781_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_781_, 0, v_a_765_);
lean_ctor_set(v___x_781_, 1, v_userName_698_);
lean_ctor_set(v___x_781_, 2, v_type_699_);
lean_ctor_set(v___x_781_, 3, v_value_700_);
lean_ctor_set_uint8(v___x_781_, sizeof(void*)*4, v_nondep_701_);
v___x_782_ = lean_array_push(v_decls_776_, v___x_781_);
v___x_783_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3___redArg(v_valueMap_777_, v_key_711_, v___x_771_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 4, v___x_783_);
lean_ctor_set(v___x_779_, 3, v___x_782_);
v___x_785_ = v___x_779_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_cache_773_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_cacheClosed_774_);
lean_ctor_set(v_reuseFailAlloc_790_, 2, v_hasLetCache_775_);
lean_ctor_set(v_reuseFailAlloc_790_, 3, v___x_782_);
lean_ctor_set(v_reuseFailAlloc_790_, 4, v___x_783_);
v___x_785_ = v_reuseFailAlloc_790_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_786_ = lean_st_ref_put(v___y_702_, v___x_785_);
if (v_isShared_768_ == 0)
{
v___x_788_ = v___x_767_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_765_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_711_, 2);
lean_dec_ref(v_value_700_);
lean_dec_ref(v_type_699_);
lean_dec(v_userName_698_);
return v___x_764_;
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
lean_dec_ref_known(v_key_711_, 2);
lean_dec_ref(v_value_700_);
lean_dec_ref(v_type_699_);
lean_dec(v_userName_698_);
v_a_793_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_762_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_762_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___boxed(lean_object* v_userName_801_, lean_object* v_type_802_, lean_object* v_value_803_, lean_object* v_nondep_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
uint8_t v_nondep_boxed_813_; lean_object* v_res_814_; 
v_nondep_boxed_813_ = lean_unbox(v_nondep_804_);
v_res_814_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl(v_userName_801_, v_type_802_, v_value_803_, v_nondep_boxed_813_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v___y_805_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0(lean_object* v_00_u03b2_815_, lean_object* v_m_816_, lean_object* v_a_817_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(v_m_816_, v_a_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___boxed(lean_object* v_00_u03b2_819_, lean_object* v_m_820_, lean_object* v_a_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0(v_00_u03b2_819_, v_m_820_, v_a_821_);
lean_dec_ref(v_a_821_);
lean_dec_ref(v_m_820_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2(lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(v___y_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___boxed(lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2(v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3(lean_object* v_00_u03b2_841_, lean_object* v_m_842_, lean_object* v_a_843_, lean_object* v_b_844_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3___redArg(v_m_842_, v_a_843_, v_b_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0(lean_object* v_00_u03b2_846_, lean_object* v_a_847_, lean_object* v_x_848_){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(v_a_847_, v_x_848_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_850_, lean_object* v_a_851_, lean_object* v_x_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0(v_00_u03b2_850_, v_a_851_, v_x_852_);
lean_dec(v_x_852_);
lean_dec_ref(v_a_851_);
return v_res_853_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5(lean_object* v_00_u03b2_854_, lean_object* v_a_855_, lean_object* v_x_856_){
_start:
{
uint8_t v___x_857_; 
v___x_857_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(v_a_855_, v_x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___boxed(lean_object* v_00_u03b2_858_, lean_object* v_a_859_, lean_object* v_x_860_){
_start:
{
uint8_t v_res_861_; lean_object* v_r_862_; 
v_res_861_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5(v_00_u03b2_858_, v_a_859_, v_x_860_);
lean_dec(v_x_860_);
lean_dec_ref(v_a_859_);
v_r_862_ = lean_box(v_res_861_);
return v_r_862_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6(lean_object* v_00_u03b2_863_, lean_object* v_data_864_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6___redArg(v_data_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7(lean_object* v_00_u03b2_866_, lean_object* v_a_867_, lean_object* v_b_868_, lean_object* v_x_869_){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(v_a_867_, v_b_868_, v_x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7(lean_object* v_00_u03b2_871_, lean_object* v_i_872_, lean_object* v_source_873_, lean_object* v_target_874_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7___redArg(v_i_872_, v_source_873_, v_target_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_876_, lean_object* v_x_877_, lean_object* v_x_878_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8___redArg(v_x_877_, v_x_878_);
return v___x_879_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0(void){
_start:
{
lean_object* v___x_880_; 
v___x_880_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(lean_object* v_msg_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v___x_889_; lean_object* v___x_2328__overap_890_; lean_object* v___x_891_; 
v___x_889_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0);
v___x_2328__overap_890_ = lean_panic_fn_borrowed(v___x_889_, v_msg_881_);
lean_inc(v___y_887_);
lean_inc_ref(v___y_886_);
lean_inc(v___y_885_);
lean_inc_ref(v___y_884_);
lean_inc(v___y_883_);
lean_inc_ref(v___y_882_);
v___x_891_ = lean_apply_7(v___x_2328__overap_890_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, lean_box(0));
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___boxed(lean_object* v_msg_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(v_msg_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(lean_object* v_x_901_, uint8_t v_bi_902_, lean_object* v_t_903_, lean_object* v_b_904_, lean_object* v___y_905_, uint8_t v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v___y_910_; lean_object* v___y_911_; 
if (v___y_906_ == 0)
{
v___y_910_ = v___y_905_;
v___y_911_ = v___y_908_;
goto v___jp_909_;
}
else
{
lean_object* v___x_933_; 
v___x_933_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_903_, v___y_906_, v___y_907_, v___y_908_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_935_; 
v_a_934_ = lean_ctor_get(v___x_933_, 1);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_933_, 2);
v___x_935_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_904_, v___y_906_, v___y_907_, v_a_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; 
v_a_936_ = lean_ctor_get(v___x_935_, 1);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_935_, 2);
v___y_910_ = v___y_905_;
v___y_911_ = v_a_936_;
goto v___jp_909_;
}
else
{
lean_object* v_a_937_; lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec_ref(v___y_905_);
lean_dec_ref(v_b_904_);
lean_dec_ref(v_t_903_);
lean_dec(v_x_901_);
v_a_937_ = lean_ctor_get(v___x_935_, 0);
v_a_938_ = lean_ctor_get(v___x_935_, 1);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_935_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_inc(v_a_937_);
lean_dec(v___x_935_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_937_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_a_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
else
{
lean_object* v_a_946_; lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec_ref(v___y_905_);
lean_dec_ref(v_b_904_);
lean_dec_ref(v_t_903_);
lean_dec(v_x_901_);
v_a_946_ = lean_ctor_get(v___x_933_, 0);
v_a_947_ = lean_ctor_get(v___x_933_, 1);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_933_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_inc(v_a_946_);
lean_dec(v___x_933_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_946_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
v___jp_909_:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = l_Lean_Expr_lam___override(v_x_901_, v_t_903_, v_b_904_, v_bi_902_);
v___x_913_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_912_, v___y_911_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_923_; 
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_a_915_ = lean_ctor_get(v___x_913_, 1);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_923_ == 0)
{
v___x_917_ = v___x_913_;
v_isShared_918_ = v_isSharedCheck_923_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_923_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v_a_914_);
lean_ctor_set(v___x_919_, 1, v___y_910_);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 0, v___x_919_);
v___x_921_ = v___x_917_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v_a_915_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
else
{
lean_object* v_a_924_; lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec_ref(v___y_910_);
v_a_924_ = lean_ctor_get(v___x_913_, 0);
v_a_925_ = lean_ctor_get(v___x_913_, 1);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_913_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_inc(v_a_924_);
lean_dec(v___x_913_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_924_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2___boxed(lean_object* v_x_955_, lean_object* v_bi_956_, lean_object* v_t_957_, lean_object* v_b_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
uint8_t v_bi_boxed_963_; uint8_t v___y_25651__boxed_964_; lean_object* v_res_965_; 
v_bi_boxed_963_ = lean_unbox(v_bi_956_);
v___y_25651__boxed_964_ = lean_unbox(v___y_960_);
v_res_965_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_x_955_, v_bi_boxed_963_, v_t_957_, v_b_958_, v___y_959_, v___y_25651__boxed_964_, v___y_961_, v___y_962_);
lean_dec_ref(v___y_961_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(lean_object* v_structName_966_, lean_object* v_idx_967_, lean_object* v_struct_968_, lean_object* v___y_969_, uint8_t v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v___y_974_; lean_object* v___y_975_; 
if (v___y_970_ == 0)
{
v___y_974_ = v___y_969_;
v___y_975_ = v___y_972_;
goto v___jp_973_;
}
else
{
lean_object* v___x_997_; 
v___x_997_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_struct_968_, v___y_970_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; 
v_a_998_ = lean_ctor_get(v___x_997_, 1);
lean_inc(v_a_998_);
lean_dec_ref_known(v___x_997_, 2);
v___y_974_ = v___y_969_;
v___y_975_ = v_a_998_;
goto v___jp_973_;
}
else
{
lean_object* v_a_999_; lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec_ref(v___y_969_);
lean_dec_ref(v_struct_968_);
lean_dec(v_idx_967_);
lean_dec(v_structName_966_);
v_a_999_ = lean_ctor_get(v___x_997_, 0);
v_a_1000_ = lean_ctor_get(v___x_997_, 1);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_997_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_inc(v_a_999_);
lean_dec(v___x_997_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_999_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_a_1000_);
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
v___jp_973_:
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = l_Lean_Expr_proj___override(v_structName_966_, v_idx_967_, v_struct_968_);
v___x_977_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_976_, v___y_975_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_a_978_; lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_987_; 
v_a_978_ = lean_ctor_get(v___x_977_, 0);
v_a_979_ = lean_ctor_get(v___x_977_, 1);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_987_ == 0)
{
v___x_981_ = v___x_977_;
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_inc(v_a_978_);
lean_dec(v___x_977_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_983_, 0, v_a_978_);
lean_ctor_set(v___x_983_, 1, v___y_974_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 0, v___x_983_);
v___x_985_ = v___x_981_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v___x_983_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_a_979_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
else
{
lean_object* v_a_988_; lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
lean_dec_ref(v___y_974_);
v_a_988_ = lean_ctor_get(v___x_977_, 0);
v_a_989_ = lean_ctor_get(v___x_977_, 1);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_977_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_inc(v_a_988_);
lean_dec(v___x_977_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_988_);
lean_ctor_set(v_reuseFailAlloc_995_, 1, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6___boxed(lean_object* v_structName_1008_, lean_object* v_idx_1009_, lean_object* v_struct_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
uint8_t v___y_25757__boxed_1015_; lean_object* v_res_1016_; 
v___y_25757__boxed_1015_ = lean_unbox(v___y_1012_);
v_res_1016_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(v_structName_1008_, v_idx_1009_, v_struct_1010_, v___y_1011_, v___y_25757__boxed_1015_, v___y_1013_, v___y_1014_);
lean_dec_ref(v___y_1013_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(lean_object* v_f_1017_, lean_object* v_a_1018_, lean_object* v___y_1019_, uint8_t v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v___y_1024_; lean_object* v___y_1025_; 
if (v___y_1020_ == 0)
{
v___y_1024_ = v___y_1019_;
v___y_1025_ = v___y_1022_;
goto v___jp_1023_;
}
else
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_f_1017_, v___y_1020_, v___y_1021_, v___y_1022_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1049_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 1);
lean_inc(v_a_1048_);
lean_dec_ref_known(v___x_1047_, 2);
v___x_1049_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_a_1018_, v___y_1020_, v___y_1021_, v_a_1048_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 1);
lean_inc(v_a_1050_);
lean_dec_ref_known(v___x_1049_, 2);
v___y_1024_ = v___y_1019_;
v___y_1025_ = v_a_1050_;
goto v___jp_1023_;
}
else
{
lean_object* v_a_1051_; lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1059_; 
lean_dec_ref(v___y_1019_);
lean_dec_ref(v_a_1018_);
lean_dec_ref(v_f_1017_);
v_a_1051_ = lean_ctor_get(v___x_1049_, 0);
v_a_1052_ = lean_ctor_get(v___x_1049_, 1);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1054_ = v___x_1049_;
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_inc(v_a_1051_);
lean_dec(v___x_1049_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1051_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v_a_1052_);
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
else
{
lean_object* v_a_1060_; lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
lean_dec_ref(v___y_1019_);
lean_dec_ref(v_a_1018_);
lean_dec_ref(v_f_1017_);
v_a_1060_ = lean_ctor_get(v___x_1047_, 0);
v_a_1061_ = lean_ctor_get(v___x_1047_, 1);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1047_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_inc(v_a_1060_);
lean_dec(v___x_1047_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1060_);
lean_ctor_set(v_reuseFailAlloc_1067_, 1, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
v___jp_1023_:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = l_Lean_Expr_app___override(v_f_1017_, v_a_1018_);
v___x_1027_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1026_, v___y_1025_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1037_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
v_a_1029_ = lean_ctor_get(v___x_1027_, 1);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1031_ = v___x_1027_;
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_inc(v_a_1028_);
lean_dec(v___x_1027_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
v___x_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1033_, 0, v_a_1028_);
lean_ctor_set(v___x_1033_, 1, v___y_1024_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1033_);
v___x_1035_ = v___x_1031_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v_a_1029_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec_ref(v___y_1024_);
v_a_1038_ = lean_ctor_get(v___x_1027_, 0);
v_a_1039_ = lean_ctor_get(v___x_1027_, 1);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1027_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_inc(v_a_1038_);
lean_dec(v___x_1027_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1038_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1___boxed(lean_object* v_f_1069_, lean_object* v_a_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
uint8_t v___y_25840__boxed_1075_; lean_object* v_res_1076_; 
v___y_25840__boxed_1075_ = lean_unbox(v___y_1072_);
v_res_1076_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_f_1069_, v_a_1070_, v___y_1071_, v___y_25840__boxed_1075_, v___y_1073_, v___y_1074_);
lean_dec_ref(v___y_1073_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(lean_object* v_x_1077_, lean_object* v_t_1078_, lean_object* v_v_1079_, lean_object* v_b_1080_, uint8_t v_nondep_1081_, lean_object* v___y_1082_, uint8_t v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v___y_1087_; lean_object* v___y_1088_; 
if (v___y_1083_ == 0)
{
v___y_1087_ = v___y_1082_;
v___y_1088_ = v___y_1085_;
goto v___jp_1086_;
}
else
{
lean_object* v___x_1110_; 
v___x_1110_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_1078_, v___y_1083_, v___y_1084_, v___y_1085_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1112_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 1);
lean_inc(v_a_1111_);
lean_dec_ref_known(v___x_1110_, 2);
v___x_1112_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_v_1079_, v___y_1083_, v___y_1084_, v_a_1111_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1114_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 1);
lean_inc(v_a_1113_);
lean_dec_ref_known(v___x_1112_, 2);
v___x_1114_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_1080_, v___y_1083_, v___y_1084_, v_a_1113_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 1);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 2);
v___y_1087_ = v___y_1082_;
v___y_1088_ = v_a_1115_;
goto v___jp_1086_;
}
else
{
lean_object* v_a_1116_; lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
lean_dec_ref(v___y_1082_);
lean_dec_ref(v_b_1080_);
lean_dec_ref(v_v_1079_);
lean_dec_ref(v_t_1078_);
lean_dec(v_x_1077_);
v_a_1116_ = lean_ctor_get(v___x_1114_, 0);
v_a_1117_ = lean_ctor_get(v___x_1114_, 1);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1119_ = v___x_1114_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_inc(v_a_1116_);
lean_dec(v___x_1114_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1116_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v_a_1117_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
else
{
lean_object* v_a_1125_; lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v___y_1082_);
lean_dec_ref(v_b_1080_);
lean_dec_ref(v_v_1079_);
lean_dec_ref(v_t_1078_);
lean_dec(v_x_1077_);
v_a_1125_ = lean_ctor_get(v___x_1112_, 0);
v_a_1126_ = lean_ctor_get(v___x_1112_, 1);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1112_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_inc(v_a_1125_);
lean_dec(v___x_1112_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1125_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
else
{
lean_object* v_a_1134_; lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec_ref(v___y_1082_);
lean_dec_ref(v_b_1080_);
lean_dec_ref(v_v_1079_);
lean_dec_ref(v_t_1078_);
lean_dec(v_x_1077_);
v_a_1134_ = lean_ctor_get(v___x_1110_, 0);
v_a_1135_ = lean_ctor_get(v___x_1110_, 1);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1110_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_inc(v_a_1134_);
lean_dec(v___x_1110_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1134_);
lean_ctor_set(v_reuseFailAlloc_1141_, 1, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
v___jp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = l_Lean_Expr_letE___override(v_x_1077_, v_t_1078_, v_v_1079_, v_b_1080_, v_nondep_1081_);
v___x_1090_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1089_, v___y_1088_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1100_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_a_1092_ = lean_ctor_get(v___x_1090_, 1);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1094_ = v___x_1090_;
v_isShared_1095_ = v_isSharedCheck_1100_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1100_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1096_, 0, v_a_1091_);
lean_ctor_set(v___x_1096_, 1, v___y_1087_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1096_);
v___x_1098_ = v___x_1094_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v_a_1092_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
else
{
lean_object* v_a_1101_; lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
lean_dec_ref(v___y_1087_);
v_a_1101_ = lean_ctor_get(v___x_1090_, 0);
v_a_1102_ = lean_ctor_get(v___x_1090_, 1);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1090_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_inc(v_a_1101_);
lean_dec(v___x_1090_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1101_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_a_1102_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4___boxed(lean_object* v_x_1143_, lean_object* v_t_1144_, lean_object* v_v_1145_, lean_object* v_b_1146_, lean_object* v_nondep_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
uint8_t v_nondep_boxed_1152_; uint8_t v___y_25946__boxed_1153_; lean_object* v_res_1154_; 
v_nondep_boxed_1152_ = lean_unbox(v_nondep_1147_);
v___y_25946__boxed_1153_ = lean_unbox(v___y_1149_);
v_res_1154_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_x_1143_, v_t_1144_, v_v_1145_, v_b_1146_, v_nondep_boxed_1152_, v___y_1148_, v___y_25946__boxed_1153_, v___y_1150_, v___y_1151_);
lean_dec_ref(v___y_1150_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(lean_object* v_msg_1162_, lean_object* v___y_1163_, uint8_t v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v___f_1167_; lean_object* v___f_1168_; lean_object* v___f_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___f_1179_; lean_object* v___f_1180_; lean_object* v___f_1181_; lean_object* v___f_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_25158__overap_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___f_1167_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__0));
v___f_1168_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__1));
v___f_1169_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__2));
v___x_1170_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__3));
v___x_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
lean_ctor_set(v___x_1171_, 1, v___f_1167_);
v___x_1172_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__4));
v___x_1173_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__5));
v___x_1174_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1171_);
lean_ctor_set(v___x_1174_, 1, v___x_1172_);
lean_ctor_set(v___x_1174_, 2, v___f_1168_);
lean_ctor_set(v___x_1174_, 3, v___f_1169_);
lean_ctor_set(v___x_1174_, 4, v___x_1173_);
v___x_1175_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__6));
v___x_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1174_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = l_ReaderT_instMonad___redArg(v___x_1176_);
v___x_1178_ = l_ReaderT_instMonad___redArg(v___x_1177_);
lean_inc_ref_n(v___x_1178_, 6);
v___f_1179_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1179_, 0, v___x_1178_);
v___f_1180_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1180_, 0, v___x_1178_);
v___f_1181_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1181_, 0, v___x_1178_);
v___f_1182_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1182_, 0, v___x_1178_);
v___x_1183_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1183_, 0, lean_box(0));
lean_closure_set(v___x_1183_, 1, lean_box(0));
lean_closure_set(v___x_1183_, 2, v___x_1178_);
v___x_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
lean_ctor_set(v___x_1184_, 1, v___f_1179_);
v___x_1185_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1185_, 0, lean_box(0));
lean_closure_set(v___x_1185_, 1, lean_box(0));
lean_closure_set(v___x_1185_, 2, v___x_1178_);
v___x_1186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1184_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
lean_ctor_set(v___x_1186_, 2, v___f_1180_);
lean_ctor_set(v___x_1186_, 3, v___f_1181_);
lean_ctor_set(v___x_1186_, 4, v___f_1182_);
v___x_1187_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1187_, 0, lean_box(0));
lean_closure_set(v___x_1187_, 1, lean_box(0));
lean_closure_set(v___x_1187_, 2, v___x_1178_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1186_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = l_Lean_instInhabitedExpr;
v___x_1190_ = l_instInhabitedOfMonad___redArg(v___x_1188_, v___x_1189_);
v___x_25158__overap_1191_ = lean_panic_fn_borrowed(v___x_1190_, v_msg_1162_);
lean_dec(v___x_1190_);
v___x_1192_ = lean_box(v___y_1164_);
lean_inc_ref(v___y_1165_);
v___x_1193_ = lean_apply_4(v___x_25158__overap_1191_, v___y_1163_, v___x_1192_, v___y_1165_, v___y_1166_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___boxed(lean_object* v_msg_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
uint8_t v___y_26089__boxed_1199_; lean_object* v_res_1200_; 
v___y_26089__boxed_1199_ = lean_unbox(v___y_1196_);
v_res_1200_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(v_msg_1194_, v___y_1195_, v___y_26089__boxed_1199_, v___y_1197_, v___y_1198_);
lean_dec_ref(v___y_1197_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(lean_object* v_d_1201_, lean_object* v_e_1202_, lean_object* v___y_1203_, uint8_t v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v___y_1208_; lean_object* v___y_1209_; 
if (v___y_1204_ == 0)
{
v___y_1208_ = v___y_1203_;
v___y_1209_ = v___y_1206_;
goto v___jp_1207_;
}
else
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_e_1202_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 1);
lean_inc(v_a_1232_);
lean_dec_ref_known(v___x_1231_, 2);
v___y_1208_ = v___y_1203_;
v___y_1209_ = v_a_1232_;
goto v___jp_1207_;
}
else
{
lean_object* v_a_1233_; lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
lean_dec_ref(v___y_1203_);
lean_dec_ref(v_e_1202_);
lean_dec(v_d_1201_);
v_a_1233_ = lean_ctor_get(v___x_1231_, 0);
v_a_1234_ = lean_ctor_get(v___x_1231_, 1);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1231_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_inc(v_a_1233_);
lean_dec(v___x_1231_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1233_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v_a_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
v___jp_1207_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = l_Lean_Expr_mdata___override(v_d_1201_, v_e_1202_);
v___x_1211_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1210_, v___y_1209_);
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1221_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
v_a_1213_ = lean_ctor_get(v___x_1211_, 1);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1215_ = v___x_1211_;
v_isShared_1216_ = v_isSharedCheck_1221_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_inc(v_a_1212_);
lean_dec(v___x_1211_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1221_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1217_; lean_object* v___x_1219_; 
v___x_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1217_, 0, v_a_1212_);
lean_ctor_set(v___x_1217_, 1, v___y_1208_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 0, v___x_1217_);
v___x_1219_ = v___x_1215_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v___x_1217_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_a_1213_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
else
{
lean_object* v_a_1222_; lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec_ref(v___y_1208_);
v_a_1222_ = lean_ctor_get(v___x_1211_, 0);
v_a_1223_ = lean_ctor_get(v___x_1211_, 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1211_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_inc(v_a_1222_);
lean_dec(v___x_1211_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1222_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5___boxed(lean_object* v_d_1242_, lean_object* v_e_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
uint8_t v___y_26160__boxed_1248_; lean_object* v_res_1249_; 
v___y_26160__boxed_1248_ = lean_unbox(v___y_1245_);
v_res_1249_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(v_d_1242_, v_e_1243_, v___y_1244_, v___y_26160__boxed_1248_, v___y_1246_, v___y_1247_);
lean_dec_ref(v___y_1246_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(lean_object* v_x_1250_, uint8_t v_bi_1251_, lean_object* v_t_1252_, lean_object* v_b_1253_, lean_object* v___y_1254_, uint8_t v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v___y_1259_; lean_object* v___y_1260_; 
if (v___y_1255_ == 0)
{
v___y_1259_ = v___y_1254_;
v___y_1260_ = v___y_1257_;
goto v___jp_1258_;
}
else
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_1252_, v___y_1255_, v___y_1256_, v___y_1257_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1284_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 1);
lean_inc(v_a_1283_);
lean_dec_ref_known(v___x_1282_, 2);
v___x_1284_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_1253_, v___y_1255_, v___y_1256_, v_a_1283_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v_a_1285_; 
v_a_1285_ = lean_ctor_get(v___x_1284_, 1);
lean_inc(v_a_1285_);
lean_dec_ref_known(v___x_1284_, 2);
v___y_1259_ = v___y_1254_;
v___y_1260_ = v_a_1285_;
goto v___jp_1258_;
}
else
{
lean_object* v_a_1286_; lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_dec_ref(v___y_1254_);
lean_dec_ref(v_b_1253_);
lean_dec_ref(v_t_1252_);
lean_dec(v_x_1250_);
v_a_1286_ = lean_ctor_get(v___x_1284_, 0);
v_a_1287_ = lean_ctor_get(v___x_1284_, 1);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1284_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_inc(v_a_1286_);
lean_dec(v___x_1284_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1286_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref(v___y_1254_);
lean_dec_ref(v_b_1253_);
lean_dec_ref(v_t_1252_);
lean_dec(v_x_1250_);
v_a_1295_ = lean_ctor_get(v___x_1282_, 0);
v_a_1296_ = lean_ctor_get(v___x_1282_, 1);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1282_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_inc(v_a_1295_);
lean_dec(v___x_1282_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1295_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
v___jp_1258_:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = l_Lean_Expr_forallE___override(v_x_1250_, v_t_1252_, v_b_1253_, v_bi_1251_);
v___x_1262_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1261_, v___y_1260_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v_a_1263_; lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1272_; 
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
v_a_1264_ = lean_ctor_get(v___x_1262_, 1);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1266_ = v___x_1262_;
v_isShared_1267_ = v_isSharedCheck_1272_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_inc(v_a_1263_);
lean_dec(v___x_1262_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1272_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; lean_object* v___x_1270_; 
v___x_1268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1268_, 0, v_a_1263_);
lean_ctor_set(v___x_1268_, 1, v___y_1259_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1268_);
v___x_1270_ = v___x_1266_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1268_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v_a_1264_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
else
{
lean_object* v_a_1273_; lean_object* v_a_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1281_; 
lean_dec_ref(v___y_1259_);
v_a_1273_ = lean_ctor_get(v___x_1262_, 0);
v_a_1274_ = lean_ctor_get(v___x_1262_, 1);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1276_ = v___x_1262_;
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_a_1274_);
lean_inc(v_a_1273_);
lean_dec(v___x_1262_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1279_; 
if (v_isShared_1277_ == 0)
{
v___x_1279_ = v___x_1276_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_a_1273_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v_a_1274_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
return v___x_1279_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3___boxed(lean_object* v_x_1304_, lean_object* v_bi_1305_, lean_object* v_t_1306_, lean_object* v_b_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
uint8_t v_bi_boxed_1312_; uint8_t v___y_26243__boxed_1313_; lean_object* v_res_1314_; 
v_bi_boxed_1312_ = lean_unbox(v_bi_1305_);
v___y_26243__boxed_1313_ = lean_unbox(v___y_1309_);
v_res_1314_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_x_1304_, v_bi_boxed_1312_, v_t_1306_, v_b_1307_, v___y_1308_, v___y_26243__boxed_1313_, v___y_1310_, v___y_1311_);
lean_dec_ref(v___y_1310_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(lean_object* v_a_1315_, lean_object* v_x_1316_){
_start:
{
if (lean_obj_tag(v_x_1316_) == 0)
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_box(0);
return v___x_1317_;
}
else
{
lean_object* v_key_1318_; lean_object* v_value_1319_; lean_object* v_tail_1320_; lean_object* v_fst_1321_; lean_object* v_snd_1322_; lean_object* v_fst_1323_; lean_object* v_snd_1324_; size_t v___x_1325_; size_t v___x_1326_; uint8_t v___x_1327_; 
v_key_1318_ = lean_ctor_get(v_x_1316_, 0);
v_value_1319_ = lean_ctor_get(v_x_1316_, 1);
v_tail_1320_ = lean_ctor_get(v_x_1316_, 2);
v_fst_1321_ = lean_ctor_get(v_key_1318_, 0);
v_snd_1322_ = lean_ctor_get(v_key_1318_, 1);
v_fst_1323_ = lean_ctor_get(v_a_1315_, 0);
v_snd_1324_ = lean_ctor_get(v_a_1315_, 1);
v___x_1325_ = lean_ptr_addr(v_fst_1321_);
v___x_1326_ = lean_ptr_addr(v_fst_1323_);
v___x_1327_ = lean_usize_dec_eq(v___x_1325_, v___x_1326_);
if (v___x_1327_ == 0)
{
v_x_1316_ = v_tail_1320_;
goto _start;
}
else
{
uint8_t v___x_1329_; 
v___x_1329_ = lean_nat_dec_eq(v_snd_1322_, v_snd_1324_);
if (v___x_1329_ == 0)
{
v_x_1316_ = v_tail_1320_;
goto _start;
}
else
{
lean_object* v___x_1331_; 
lean_inc(v_value_1319_);
v___x_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1331_, 0, v_value_1319_);
return v___x_1331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg___boxed(lean_object* v_a_1332_, lean_object* v_x_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(v_a_1332_, v_x_1333_);
lean_dec(v_x_1333_);
lean_dec_ref(v_a_1332_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(lean_object* v_m_1335_, lean_object* v_a_1336_){
_start:
{
lean_object* v_buckets_1337_; lean_object* v_fst_1338_; lean_object* v_snd_1339_; lean_object* v___x_1340_; size_t v___x_1341_; size_t v___x_1342_; size_t v___x_1343_; uint64_t v___x_1344_; uint64_t v___x_1345_; uint64_t v___x_1346_; uint64_t v___x_1347_; uint64_t v___x_1348_; uint64_t v_fold_1349_; uint64_t v___x_1350_; uint64_t v___x_1351_; uint64_t v___x_1352_; size_t v___x_1353_; size_t v___x_1354_; size_t v___x_1355_; size_t v___x_1356_; size_t v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
v_buckets_1337_ = lean_ctor_get(v_m_1335_, 1);
v_fst_1338_ = lean_ctor_get(v_a_1336_, 0);
v_snd_1339_ = lean_ctor_get(v_a_1336_, 1);
v___x_1340_ = lean_array_get_size(v_buckets_1337_);
v___x_1341_ = lean_ptr_addr(v_fst_1338_);
v___x_1342_ = ((size_t)3ULL);
v___x_1343_ = lean_usize_shift_right(v___x_1341_, v___x_1342_);
v___x_1344_ = lean_usize_to_uint64(v___x_1343_);
v___x_1345_ = lean_uint64_of_nat(v_snd_1339_);
v___x_1346_ = lean_uint64_mix_hash(v___x_1344_, v___x_1345_);
v___x_1347_ = 32ULL;
v___x_1348_ = lean_uint64_shift_right(v___x_1346_, v___x_1347_);
v_fold_1349_ = lean_uint64_xor(v___x_1346_, v___x_1348_);
v___x_1350_ = 16ULL;
v___x_1351_ = lean_uint64_shift_right(v_fold_1349_, v___x_1350_);
v___x_1352_ = lean_uint64_xor(v_fold_1349_, v___x_1351_);
v___x_1353_ = lean_uint64_to_usize(v___x_1352_);
v___x_1354_ = lean_usize_of_nat(v___x_1340_);
v___x_1355_ = ((size_t)1ULL);
v___x_1356_ = lean_usize_sub(v___x_1354_, v___x_1355_);
v___x_1357_ = lean_usize_land(v___x_1353_, v___x_1356_);
v___x_1358_ = lean_array_uget_borrowed(v_buckets_1337_, v___x_1357_);
v___x_1359_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(v_a_1336_, v___x_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_m_1360_, lean_object* v_a_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(v_m_1360_, v_a_1361_);
lean_dec_ref(v_a_1361_);
lean_dec_ref(v_m_1360_);
return v_res_1362_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1366_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2));
v___x_1367_ = lean_unsigned_to_nat(67u);
v___x_1368_ = lean_unsigned_to_nat(35u);
v___x_1369_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__1));
v___x_1370_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__0));
v___x_1371_ = l_mkPanicMessageWithDecl(v___x_1370_, v___x_1369_, v___x_1368_, v___x_1367_, v___x_1366_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(lean_object* v_n_1372_, lean_object* v_xs_1373_, lean_object* v_e_1374_, lean_object* v_offset_1375_, lean_object* v___y_1376_, uint8_t v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
switch(lean_obj_tag(v_e_1374_))
{
case 5:
{
lean_object* v_fn_1380_; lean_object* v_arg_1381_; lean_object* v___x_1382_; 
v_fn_1380_ = lean_ctor_get(v_e_1374_, 0);
v_arg_1381_ = lean_ctor_get(v_e_1374_, 1);
lean_inc(v_offset_1375_);
lean_inc_ref(v_fn_1380_);
v___x_1382_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_fn_1380_, v_offset_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_object* v_a_1383_; lean_object* v_a_1384_; lean_object* v_fst_1385_; lean_object* v_snd_1386_; lean_object* v___x_1387_; 
v_a_1383_ = lean_ctor_get(v___x_1382_, 0);
lean_inc(v_a_1383_);
v_a_1384_ = lean_ctor_get(v___x_1382_, 1);
lean_inc(v_a_1384_);
lean_dec_ref_known(v___x_1382_, 2);
v_fst_1385_ = lean_ctor_get(v_a_1383_, 0);
lean_inc(v_fst_1385_);
v_snd_1386_ = lean_ctor_get(v_a_1383_, 1);
lean_inc(v_snd_1386_);
lean_dec(v_a_1383_);
lean_inc_ref(v_arg_1381_);
v___x_1387_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_arg_1381_, v_offset_1375_, v_snd_1386_, v___y_1377_, v___y_1378_, v_a_1384_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v_a_1388_; lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1413_; 
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
v_a_1389_ = lean_ctor_get(v___x_1387_, 1);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1391_ = v___x_1387_;
v_isShared_1392_ = v_isSharedCheck_1413_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_inc(v_a_1388_);
lean_dec(v___x_1387_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1413_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v_fst_1393_; lean_object* v_snd_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1412_; 
v_fst_1393_ = lean_ctor_get(v_a_1388_, 0);
v_snd_1394_ = lean_ctor_get(v_a_1388_, 1);
v_isSharedCheck_1412_ = !lean_is_exclusive(v_a_1388_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1396_ = v_a_1388_;
v_isShared_1397_ = v_isSharedCheck_1412_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_snd_1394_);
lean_inc(v_fst_1393_);
lean_dec(v_a_1388_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1412_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
size_t v___x_1398_; size_t v___x_1399_; uint8_t v___x_1400_; 
v___x_1398_ = lean_ptr_addr(v_fn_1380_);
v___x_1399_ = lean_ptr_addr(v_fst_1385_);
v___x_1400_ = lean_usize_dec_eq(v___x_1398_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; 
lean_del_object(v___x_1396_);
lean_del_object(v___x_1391_);
lean_dec_ref_known(v_e_1374_, 2);
v___x_1401_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_fst_1385_, v_fst_1393_, v_snd_1394_, v___y_1377_, v___y_1378_, v_a_1389_);
return v___x_1401_;
}
else
{
size_t v___x_1402_; size_t v___x_1403_; uint8_t v___x_1404_; 
v___x_1402_ = lean_ptr_addr(v_arg_1381_);
v___x_1403_ = lean_ptr_addr(v_fst_1393_);
v___x_1404_ = lean_usize_dec_eq(v___x_1402_, v___x_1403_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; 
lean_del_object(v___x_1396_);
lean_del_object(v___x_1391_);
lean_dec_ref_known(v_e_1374_, 2);
v___x_1405_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_fst_1385_, v_fst_1393_, v_snd_1394_, v___y_1377_, v___y_1378_, v_a_1389_);
return v___x_1405_;
}
else
{
lean_object* v___x_1407_; 
lean_dec(v_fst_1393_);
lean_dec(v_fst_1385_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v_e_1374_);
v___x_1407_ = v___x_1396_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_e_1374_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v_snd_1394_);
v___x_1407_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1409_; 
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 0, v___x_1407_);
v___x_1409_ = v___x_1391_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_a_1389_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1385_);
lean_dec_ref_known(v_e_1374_, 2);
return v___x_1387_;
}
}
else
{
lean_dec_ref_known(v_e_1374_, 2);
lean_dec(v_offset_1375_);
return v___x_1382_;
}
}
case 6:
{
lean_object* v_binderName_1414_; lean_object* v_binderType_1415_; lean_object* v_body_1416_; uint8_t v_binderInfo_1417_; lean_object* v___x_1418_; 
v_binderName_1414_ = lean_ctor_get(v_e_1374_, 0);
v_binderType_1415_ = lean_ctor_get(v_e_1374_, 1);
v_body_1416_ = lean_ctor_get(v_e_1374_, 2);
v_binderInfo_1417_ = lean_ctor_get_uint8(v_e_1374_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1375_);
lean_inc_ref(v_binderType_1415_);
v___x_1418_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_binderType_1415_, v_offset_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v_a_1420_; lean_object* v_fst_1421_; lean_object* v_snd_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
v_a_1420_ = lean_ctor_get(v___x_1418_, 1);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1418_, 2);
v_fst_1421_ = lean_ctor_get(v_a_1419_, 0);
lean_inc(v_fst_1421_);
v_snd_1422_ = lean_ctor_get(v_a_1419_, 1);
lean_inc(v_snd_1422_);
lean_dec(v_a_1419_);
v___x_1423_ = lean_unsigned_to_nat(1u);
v___x_1424_ = lean_nat_add(v_offset_1375_, v___x_1423_);
lean_dec(v_offset_1375_);
lean_inc_ref(v_body_1416_);
v___x_1425_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_body_1416_, v___x_1424_, v_snd_1422_, v___y_1377_, v___y_1378_, v_a_1420_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1451_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_a_1427_ = lean_ctor_get(v___x_1425_, 1);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1429_ = v___x_1425_;
v_isShared_1430_ = v_isSharedCheck_1451_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1451_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v_fst_1431_; lean_object* v_snd_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1450_; 
v_fst_1431_ = lean_ctor_get(v_a_1426_, 0);
v_snd_1432_ = lean_ctor_get(v_a_1426_, 1);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_a_1426_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1434_ = v_a_1426_;
v_isShared_1435_ = v_isSharedCheck_1450_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_snd_1432_);
lean_inc(v_fst_1431_);
lean_dec(v_a_1426_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1450_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
size_t v___x_1436_; size_t v___x_1437_; uint8_t v___x_1438_; 
v___x_1436_ = lean_ptr_addr(v_binderType_1415_);
v___x_1437_ = lean_ptr_addr(v_fst_1421_);
v___x_1438_ = lean_usize_dec_eq(v___x_1436_, v___x_1437_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; 
lean_inc(v_binderName_1414_);
lean_del_object(v___x_1434_);
lean_del_object(v___x_1429_);
lean_dec_ref_known(v_e_1374_, 3);
v___x_1439_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_binderName_1414_, v_binderInfo_1417_, v_fst_1421_, v_fst_1431_, v_snd_1432_, v___y_1377_, v___y_1378_, v_a_1427_);
return v___x_1439_;
}
else
{
size_t v___x_1440_; size_t v___x_1441_; uint8_t v___x_1442_; 
v___x_1440_ = lean_ptr_addr(v_body_1416_);
v___x_1441_ = lean_ptr_addr(v_fst_1431_);
v___x_1442_ = lean_usize_dec_eq(v___x_1440_, v___x_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; 
lean_inc(v_binderName_1414_);
lean_del_object(v___x_1434_);
lean_del_object(v___x_1429_);
lean_dec_ref_known(v_e_1374_, 3);
v___x_1443_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_binderName_1414_, v_binderInfo_1417_, v_fst_1421_, v_fst_1431_, v_snd_1432_, v___y_1377_, v___y_1378_, v_a_1427_);
return v___x_1443_;
}
else
{
lean_object* v___x_1445_; 
lean_dec(v_fst_1431_);
lean_dec(v_fst_1421_);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v_e_1374_);
v___x_1445_ = v___x_1434_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_e_1374_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v_snd_1432_);
v___x_1445_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
lean_object* v___x_1447_; 
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v___x_1445_);
v___x_1447_ = v___x_1429_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1445_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_a_1427_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1421_);
lean_dec_ref_known(v_e_1374_, 3);
return v___x_1425_;
}
}
else
{
lean_dec_ref_known(v_e_1374_, 3);
lean_dec(v_offset_1375_);
return v___x_1418_;
}
}
case 7:
{
lean_object* v_binderName_1452_; lean_object* v_binderType_1453_; lean_object* v_body_1454_; uint8_t v_binderInfo_1455_; lean_object* v___x_1456_; 
v_binderName_1452_ = lean_ctor_get(v_e_1374_, 0);
v_binderType_1453_ = lean_ctor_get(v_e_1374_, 1);
v_body_1454_ = lean_ctor_get(v_e_1374_, 2);
v_binderInfo_1455_ = lean_ctor_get_uint8(v_e_1374_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1375_);
lean_inc_ref(v_binderType_1453_);
v___x_1456_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_binderType_1453_, v_offset_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v_a_1458_; lean_object* v_fst_1459_; lean_object* v_snd_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
v_a_1458_ = lean_ctor_get(v___x_1456_, 1);
lean_inc(v_a_1458_);
lean_dec_ref_known(v___x_1456_, 2);
v_fst_1459_ = lean_ctor_get(v_a_1457_, 0);
lean_inc(v_fst_1459_);
v_snd_1460_ = lean_ctor_get(v_a_1457_, 1);
lean_inc(v_snd_1460_);
lean_dec(v_a_1457_);
v___x_1461_ = lean_unsigned_to_nat(1u);
v___x_1462_ = lean_nat_add(v_offset_1375_, v___x_1461_);
lean_dec(v_offset_1375_);
lean_inc_ref(v_body_1454_);
v___x_1463_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_body_1454_, v___x_1462_, v_snd_1460_, v___y_1377_, v___y_1378_, v_a_1458_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1489_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
v_a_1465_ = lean_ctor_get(v___x_1463_, 1);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1467_ = v___x_1463_;
v_isShared_1468_ = v_isSharedCheck_1489_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_inc(v_a_1464_);
lean_dec(v___x_1463_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1489_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v_fst_1469_; lean_object* v_snd_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1488_; 
v_fst_1469_ = lean_ctor_get(v_a_1464_, 0);
v_snd_1470_ = lean_ctor_get(v_a_1464_, 1);
v_isSharedCheck_1488_ = !lean_is_exclusive(v_a_1464_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1472_ = v_a_1464_;
v_isShared_1473_ = v_isSharedCheck_1488_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_snd_1470_);
lean_inc(v_fst_1469_);
lean_dec(v_a_1464_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1488_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
size_t v___x_1474_; size_t v___x_1475_; uint8_t v___x_1476_; 
v___x_1474_ = lean_ptr_addr(v_binderType_1453_);
v___x_1475_ = lean_ptr_addr(v_fst_1459_);
v___x_1476_ = lean_usize_dec_eq(v___x_1474_, v___x_1475_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; 
lean_inc(v_binderName_1452_);
lean_del_object(v___x_1472_);
lean_del_object(v___x_1467_);
lean_dec_ref_known(v_e_1374_, 3);
v___x_1477_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_binderName_1452_, v_binderInfo_1455_, v_fst_1459_, v_fst_1469_, v_snd_1470_, v___y_1377_, v___y_1378_, v_a_1465_);
return v___x_1477_;
}
else
{
size_t v___x_1478_; size_t v___x_1479_; uint8_t v___x_1480_; 
v___x_1478_ = lean_ptr_addr(v_body_1454_);
v___x_1479_ = lean_ptr_addr(v_fst_1469_);
v___x_1480_ = lean_usize_dec_eq(v___x_1478_, v___x_1479_);
if (v___x_1480_ == 0)
{
lean_object* v___x_1481_; 
lean_inc(v_binderName_1452_);
lean_del_object(v___x_1472_);
lean_del_object(v___x_1467_);
lean_dec_ref_known(v_e_1374_, 3);
v___x_1481_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_binderName_1452_, v_binderInfo_1455_, v_fst_1459_, v_fst_1469_, v_snd_1470_, v___y_1377_, v___y_1378_, v_a_1465_);
return v___x_1481_;
}
else
{
lean_object* v___x_1483_; 
lean_dec(v_fst_1469_);
lean_dec(v_fst_1459_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 0, v_e_1374_);
v___x_1483_ = v___x_1472_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_e_1374_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v_snd_1470_);
v___x_1483_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1485_; 
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 0, v___x_1483_);
v___x_1485_ = v___x_1467_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v_a_1465_);
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
else
{
lean_dec(v_fst_1459_);
lean_dec_ref_known(v_e_1374_, 3);
return v___x_1463_;
}
}
else
{
lean_dec_ref_known(v_e_1374_, 3);
lean_dec(v_offset_1375_);
return v___x_1456_;
}
}
case 8:
{
lean_object* v_declName_1490_; lean_object* v_type_1491_; lean_object* v_value_1492_; lean_object* v_body_1493_; uint8_t v_nondep_1494_; lean_object* v___x_1495_; 
v_declName_1490_ = lean_ctor_get(v_e_1374_, 0);
v_type_1491_ = lean_ctor_get(v_e_1374_, 1);
v_value_1492_ = lean_ctor_get(v_e_1374_, 2);
v_body_1493_ = lean_ctor_get(v_e_1374_, 3);
v_nondep_1494_ = lean_ctor_get_uint8(v_e_1374_, sizeof(void*)*4 + 8);
lean_inc(v_offset_1375_);
lean_inc_ref(v_type_1491_);
v___x_1495_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_type_1491_, v_offset_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v_a_1497_; lean_object* v_fst_1498_; lean_object* v_snd_1499_; lean_object* v___x_1500_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
v_a_1497_ = lean_ctor_get(v___x_1495_, 1);
lean_inc(v_a_1497_);
lean_dec_ref_known(v___x_1495_, 2);
v_fst_1498_ = lean_ctor_get(v_a_1496_, 0);
lean_inc(v_fst_1498_);
v_snd_1499_ = lean_ctor_get(v_a_1496_, 1);
lean_inc(v_snd_1499_);
lean_dec(v_a_1496_);
lean_inc(v_offset_1375_);
lean_inc_ref(v_value_1492_);
v___x_1500_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_value_1492_, v_offset_1375_, v_snd_1499_, v___y_1377_, v___y_1378_, v_a_1497_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v_a_1501_; lean_object* v_a_1502_; lean_object* v_fst_1503_; lean_object* v_snd_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_a_1501_);
v_a_1502_ = lean_ctor_get(v___x_1500_, 1);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1500_, 2);
v_fst_1503_ = lean_ctor_get(v_a_1501_, 0);
lean_inc(v_fst_1503_);
v_snd_1504_ = lean_ctor_get(v_a_1501_, 1);
lean_inc(v_snd_1504_);
lean_dec(v_a_1501_);
v___x_1505_ = lean_unsigned_to_nat(1u);
v___x_1506_ = lean_nat_add(v_offset_1375_, v___x_1505_);
lean_dec(v_offset_1375_);
lean_inc_ref(v_body_1493_);
v___x_1507_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_body_1493_, v___x_1506_, v_snd_1504_, v___y_1377_, v___y_1378_, v_a_1502_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_a_1508_; lean_object* v_a_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1537_; 
v_a_1508_ = lean_ctor_get(v___x_1507_, 0);
v_a_1509_ = lean_ctor_get(v___x_1507_, 1);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1511_ = v___x_1507_;
v_isShared_1512_ = v_isSharedCheck_1537_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_a_1509_);
lean_inc(v_a_1508_);
lean_dec(v___x_1507_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1537_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v_fst_1513_; lean_object* v_snd_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1536_; 
v_fst_1513_ = lean_ctor_get(v_a_1508_, 0);
v_snd_1514_ = lean_ctor_get(v_a_1508_, 1);
v_isSharedCheck_1536_ = !lean_is_exclusive(v_a_1508_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1516_ = v_a_1508_;
v_isShared_1517_ = v_isSharedCheck_1536_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_snd_1514_);
lean_inc(v_fst_1513_);
lean_dec(v_a_1508_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1536_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
size_t v___x_1518_; size_t v___x_1519_; uint8_t v___x_1520_; 
v___x_1518_ = lean_ptr_addr(v_type_1491_);
v___x_1519_ = lean_ptr_addr(v_fst_1498_);
v___x_1520_ = lean_usize_dec_eq(v___x_1518_, v___x_1519_);
if (v___x_1520_ == 0)
{
lean_object* v___x_1521_; 
lean_inc(v_declName_1490_);
lean_del_object(v___x_1516_);
lean_del_object(v___x_1511_);
lean_dec_ref_known(v_e_1374_, 4);
v___x_1521_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_1490_, v_fst_1498_, v_fst_1503_, v_fst_1513_, v_nondep_1494_, v_snd_1514_, v___y_1377_, v___y_1378_, v_a_1509_);
return v___x_1521_;
}
else
{
size_t v___x_1522_; size_t v___x_1523_; uint8_t v___x_1524_; 
v___x_1522_ = lean_ptr_addr(v_value_1492_);
v___x_1523_ = lean_ptr_addr(v_fst_1503_);
v___x_1524_ = lean_usize_dec_eq(v___x_1522_, v___x_1523_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1525_; 
lean_inc(v_declName_1490_);
lean_del_object(v___x_1516_);
lean_del_object(v___x_1511_);
lean_dec_ref_known(v_e_1374_, 4);
v___x_1525_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_1490_, v_fst_1498_, v_fst_1503_, v_fst_1513_, v_nondep_1494_, v_snd_1514_, v___y_1377_, v___y_1378_, v_a_1509_);
return v___x_1525_;
}
else
{
size_t v___x_1526_; size_t v___x_1527_; uint8_t v___x_1528_; 
v___x_1526_ = lean_ptr_addr(v_body_1493_);
v___x_1527_ = lean_ptr_addr(v_fst_1513_);
v___x_1528_ = lean_usize_dec_eq(v___x_1526_, v___x_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; 
lean_inc(v_declName_1490_);
lean_del_object(v___x_1516_);
lean_del_object(v___x_1511_);
lean_dec_ref_known(v_e_1374_, 4);
v___x_1529_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_1490_, v_fst_1498_, v_fst_1503_, v_fst_1513_, v_nondep_1494_, v_snd_1514_, v___y_1377_, v___y_1378_, v_a_1509_);
return v___x_1529_;
}
else
{
lean_object* v___x_1531_; 
lean_dec(v_fst_1513_);
lean_dec(v_fst_1503_);
lean_dec(v_fst_1498_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v_e_1374_);
v___x_1531_ = v___x_1516_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_e_1374_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v_snd_1514_);
v___x_1531_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
lean_object* v___x_1533_; 
if (v_isShared_1512_ == 0)
{
lean_ctor_set(v___x_1511_, 0, v___x_1531_);
v___x_1533_ = v___x_1511_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___x_1531_);
lean_ctor_set(v_reuseFailAlloc_1534_, 1, v_a_1509_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
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
lean_dec(v_fst_1503_);
lean_dec(v_fst_1498_);
lean_dec_ref_known(v_e_1374_, 4);
return v___x_1507_;
}
}
else
{
lean_dec(v_fst_1498_);
lean_dec_ref_known(v_e_1374_, 4);
lean_dec(v_offset_1375_);
return v___x_1500_;
}
}
else
{
lean_dec_ref_known(v_e_1374_, 4);
lean_dec(v_offset_1375_);
return v___x_1495_;
}
}
case 10:
{
lean_object* v_data_1538_; lean_object* v_expr_1539_; lean_object* v___x_1540_; 
v_data_1538_ = lean_ctor_get(v_e_1374_, 0);
v_expr_1539_ = lean_ctor_get(v_e_1374_, 1);
lean_inc_ref(v_expr_1539_);
v___x_1540_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_expr_1539_, v_offset_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1562_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
v_a_1542_ = lean_ctor_get(v___x_1540_, 1);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1544_ = v___x_1540_;
v_isShared_1545_ = v_isSharedCheck_1562_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_inc(v_a_1541_);
lean_dec(v___x_1540_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1562_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v_fst_1546_; lean_object* v_snd_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1561_; 
v_fst_1546_ = lean_ctor_get(v_a_1541_, 0);
v_snd_1547_ = lean_ctor_get(v_a_1541_, 1);
v_isSharedCheck_1561_ = !lean_is_exclusive(v_a_1541_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1549_ = v_a_1541_;
v_isShared_1550_ = v_isSharedCheck_1561_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_snd_1547_);
lean_inc(v_fst_1546_);
lean_dec(v_a_1541_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1561_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
size_t v___x_1551_; size_t v___x_1552_; uint8_t v___x_1553_; 
v___x_1551_ = lean_ptr_addr(v_expr_1539_);
v___x_1552_ = lean_ptr_addr(v_fst_1546_);
v___x_1553_ = lean_usize_dec_eq(v___x_1551_, v___x_1552_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; 
lean_inc(v_data_1538_);
lean_del_object(v___x_1549_);
lean_del_object(v___x_1544_);
lean_dec_ref_known(v_e_1374_, 2);
v___x_1554_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(v_data_1538_, v_fst_1546_, v_snd_1547_, v___y_1377_, v___y_1378_, v_a_1542_);
return v___x_1554_;
}
else
{
lean_object* v___x_1556_; 
lean_dec(v_fst_1546_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v_e_1374_);
v___x_1556_ = v___x_1549_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_e_1374_);
lean_ctor_set(v_reuseFailAlloc_1560_, 1, v_snd_1547_);
v___x_1556_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
lean_object* v___x_1558_; 
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 0, v___x_1556_);
v___x_1558_ = v___x_1544_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1556_);
lean_ctor_set(v_reuseFailAlloc_1559_, 1, v_a_1542_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_1374_, 2);
return v___x_1540_;
}
}
case 11:
{
lean_object* v_typeName_1563_; lean_object* v_idx_1564_; lean_object* v_struct_1565_; lean_object* v___x_1566_; 
v_typeName_1563_ = lean_ctor_get(v_e_1374_, 0);
v_idx_1564_ = lean_ctor_get(v_e_1374_, 1);
v_struct_1565_ = lean_ctor_get(v_e_1374_, 2);
lean_inc_ref(v_struct_1565_);
v___x_1566_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1372_, v_xs_1373_, v_struct_1565_, v_offset_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_a_1567_; lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1588_; 
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
v_a_1568_ = lean_ctor_get(v___x_1566_, 1);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1570_ = v___x_1566_;
v_isShared_1571_ = v_isSharedCheck_1588_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_inc(v_a_1567_);
lean_dec(v___x_1566_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1588_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v_fst_1572_; lean_object* v_snd_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1587_; 
v_fst_1572_ = lean_ctor_get(v_a_1567_, 0);
v_snd_1573_ = lean_ctor_get(v_a_1567_, 1);
v_isSharedCheck_1587_ = !lean_is_exclusive(v_a_1567_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1575_ = v_a_1567_;
v_isShared_1576_ = v_isSharedCheck_1587_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_snd_1573_);
lean_inc(v_fst_1572_);
lean_dec(v_a_1567_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1587_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
size_t v___x_1577_; size_t v___x_1578_; uint8_t v___x_1579_; 
v___x_1577_ = lean_ptr_addr(v_struct_1565_);
v___x_1578_ = lean_ptr_addr(v_fst_1572_);
v___x_1579_ = lean_usize_dec_eq(v___x_1577_, v___x_1578_);
if (v___x_1579_ == 0)
{
lean_object* v___x_1580_; 
lean_inc(v_idx_1564_);
lean_inc(v_typeName_1563_);
lean_del_object(v___x_1575_);
lean_del_object(v___x_1570_);
lean_dec_ref_known(v_e_1374_, 3);
v___x_1580_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(v_typeName_1563_, v_idx_1564_, v_fst_1572_, v_snd_1573_, v___y_1377_, v___y_1378_, v_a_1568_);
return v___x_1580_;
}
else
{
lean_object* v___x_1582_; 
lean_dec(v_fst_1572_);
if (v_isShared_1576_ == 0)
{
lean_ctor_set(v___x_1575_, 0, v_e_1374_);
v___x_1582_ = v___x_1575_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_e_1374_);
lean_ctor_set(v_reuseFailAlloc_1586_, 1, v_snd_1573_);
v___x_1582_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
lean_object* v___x_1584_; 
if (v_isShared_1571_ == 0)
{
lean_ctor_set(v___x_1570_, 0, v___x_1582_);
v___x_1584_ = v___x_1570_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v___x_1582_);
lean_ctor_set(v_reuseFailAlloc_1585_, 1, v_a_1568_);
v___x_1584_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
return v___x_1584_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_1374_, 3);
return v___x_1566_;
}
}
default: 
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
lean_dec(v_offset_1375_);
lean_dec_ref(v_e_1374_);
v___x_1589_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3);
v___x_1590_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(v___x_1589_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
return v___x_1590_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(lean_object* v_n_1591_, lean_object* v_xs_1592_, lean_object* v_e_1593_, lean_object* v_offset_1594_, lean_object* v___y_1595_, uint8_t v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v_key_1599_; lean_object* v___x_1600_; 
lean_inc(v_offset_1594_);
lean_inc_ref(v_e_1593_);
v_key_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_1599_, 0, v_e_1593_);
lean_ctor_set(v_key_1599_, 1, v_offset_1594_);
v___x_1600_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(v___y_1595_, v_key_1599_);
if (lean_obj_tag(v___x_1600_) == 1)
{
lean_object* v_val_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
lean_dec_ref_known(v_key_1599_, 2);
lean_dec(v_offset_1594_);
lean_dec_ref(v_e_1593_);
v_val_1601_ = lean_ctor_get(v___x_1600_, 0);
lean_inc(v_val_1601_);
lean_dec_ref_known(v___x_1600_, 1);
v___x_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1602_, 0, v_val_1601_);
lean_ctor_set(v___x_1602_, 1, v___y_1595_);
v___x_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1602_);
lean_ctor_set(v___x_1603_, 1, v___y_1598_);
return v___x_1603_;
}
else
{
lean_dec(v___x_1600_);
switch(lean_obj_tag(v_e_1593_))
{
case 0:
{
lean_object* v_deBruijnIndex_1604_; uint8_t v___x_1605_; 
v_deBruijnIndex_1604_ = lean_ctor_get(v_e_1593_, 0);
v___x_1605_ = lean_nat_dec_le(v_offset_1594_, v_deBruijnIndex_1604_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; 
lean_dec(v_offset_1594_);
v___x_1606_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1606_;
}
else
{
lean_object* v_size_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; uint8_t v___x_1613_; 
lean_inc(v_deBruijnIndex_1604_);
lean_dec_ref_known(v_e_1593_, 1);
v_size_1607_ = lean_ctor_get(v_xs_1592_, 2);
v___x_1608_ = l_Lean_instInhabitedExpr;
v___x_1609_ = lean_nat_sub(v_deBruijnIndex_1604_, v_offset_1594_);
lean_dec(v_offset_1594_);
lean_dec(v_deBruijnIndex_1604_);
v___x_1610_ = lean_nat_sub(v_n_1591_, v___x_1609_);
lean_dec(v___x_1609_);
v___x_1611_ = lean_unsigned_to_nat(1u);
v___x_1612_ = lean_nat_sub(v___x_1610_, v___x_1611_);
lean_dec(v___x_1610_);
v___x_1613_ = lean_nat_dec_lt(v___x_1612_, v_size_1607_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
lean_dec(v___x_1612_);
v___x_1614_ = l_outOfBounds___redArg(v___x_1608_);
v___x_1615_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v___x_1614_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1615_;
}
else
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1608_, v_xs_1592_, v___x_1612_);
lean_dec(v___x_1612_);
v___x_1617_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v___x_1616_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1617_;
}
}
}
case 9:
{
lean_object* v___x_1618_; 
lean_dec(v_offset_1594_);
v___x_1618_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1618_;
}
case 2:
{
lean_object* v___x_1619_; 
lean_dec(v_offset_1594_);
v___x_1619_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1619_;
}
case 1:
{
lean_object* v___x_1620_; 
lean_dec(v_offset_1594_);
v___x_1620_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1620_;
}
case 4:
{
lean_object* v___x_1621_; 
lean_dec(v_offset_1594_);
v___x_1621_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1621_;
}
case 3:
{
lean_object* v___x_1622_; 
lean_dec(v_offset_1594_);
v___x_1622_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1622_;
}
default: 
{
lean_object* v___x_1623_; uint8_t v___x_1624_; 
v___x_1623_ = l_Lean_Expr_looseBVarRange(v_e_1593_);
v___x_1624_ = lean_nat_dec_le(v___x_1623_, v_offset_1594_);
lean_dec(v___x_1623_);
if (v___x_1624_ == 0)
{
switch(lean_obj_tag(v_e_1593_))
{
case 9:
{
lean_object* v___x_1625_; 
lean_dec(v_offset_1594_);
v___x_1625_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1625_;
}
case 2:
{
lean_object* v___x_1626_; 
lean_dec(v_offset_1594_);
v___x_1626_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1626_;
}
case 0:
{
lean_object* v___x_1627_; 
lean_dec(v_offset_1594_);
v___x_1627_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1627_;
}
case 1:
{
lean_object* v___x_1628_; 
lean_dec(v_offset_1594_);
v___x_1628_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1628_;
}
case 4:
{
lean_object* v___x_1629_; 
lean_dec(v_offset_1594_);
v___x_1629_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1629_;
}
case 3:
{
lean_object* v___x_1630_; 
lean_dec(v_offset_1594_);
v___x_1630_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1630_;
}
default: 
{
lean_object* v___x_1631_; 
v___x_1631_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(v_n_1591_, v_xs_1592_, v_e_1593_, v_offset_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v_a_1633_; lean_object* v_fst_1634_; lean_object* v_snd_1635_; lean_object* v___x_1636_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_a_1632_);
v_a_1633_ = lean_ctor_get(v___x_1631_, 1);
lean_inc(v_a_1633_);
lean_dec_ref_known(v___x_1631_, 2);
v_fst_1634_ = lean_ctor_get(v_a_1632_, 0);
lean_inc(v_fst_1634_);
v_snd_1635_ = lean_ctor_get(v_a_1632_, 1);
lean_inc(v_snd_1635_);
lean_dec(v_a_1632_);
v___x_1636_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_fst_1634_, v_snd_1635_, v___y_1596_, v___y_1597_, v_a_1633_);
return v___x_1636_;
}
else
{
lean_dec_ref_known(v_key_1599_, 2);
return v___x_1631_;
}
}
}
}
else
{
lean_object* v___x_1637_; 
lean_dec(v_offset_1594_);
v___x_1637_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1599_, v_e_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1637_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0___boxed(lean_object* v_n_1638_, lean_object* v_xs_1639_, lean_object* v_e_1640_, lean_object* v_offset_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_){
_start:
{
uint8_t v___y_26435__boxed_1646_; lean_object* v_res_1647_; 
v___y_26435__boxed_1646_ = lean_unbox(v___y_1643_);
v_res_1647_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1638_, v_xs_1639_, v_e_1640_, v_offset_1641_, v___y_1642_, v___y_26435__boxed_1646_, v___y_1644_, v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec_ref(v_xs_1639_);
lean_dec(v_n_1638_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___boxed(lean_object* v_n_1648_, lean_object* v_xs_1649_, lean_object* v_e_1650_, lean_object* v_offset_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_){
_start:
{
uint8_t v___y_26500__boxed_1656_; lean_object* v_res_1657_; 
v___y_26500__boxed_1656_ = lean_unbox(v___y_1653_);
v_res_1657_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(v_n_1648_, v_xs_1649_, v_e_1650_, v_offset_1651_, v___y_1652_, v___y_26500__boxed_1656_, v___y_1654_, v___y_1655_);
lean_dec_ref(v___y_1654_);
lean_dec_ref(v_xs_1649_);
lean_dec(v_n_1648_);
return v_res_1657_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1658_ = lean_box(0);
v___x_1659_ = lean_unsigned_to_nat(16u);
v___x_1660_ = lean_mk_array(v___x_1659_, v___x_1658_);
return v___x_1660_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1661_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0);
v___x_1662_ = lean_unsigned_to_nat(0u);
v___x_1663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1662_);
lean_ctor_set(v___x_1663_, 1, v___x_1661_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0(lean_object* v_e_1664_, lean_object* v_size_1665_, lean_object* v___x_1666_, lean_object* v_xs_1667_, uint8_t v_debug_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = lean_unsigned_to_nat(0u);
switch(lean_obj_tag(v_e_1664_))
{
case 0:
{
lean_object* v_deBruijnIndex_1672_; uint8_t v___x_1673_; 
v_deBruijnIndex_1672_ = lean_ctor_get(v_e_1664_, 0);
v___x_1673_ = lean_nat_dec_le(v___x_1671_, v_deBruijnIndex_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; 
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v_e_1664_);
lean_ctor_set(v___x_1674_, 1, v___y_1670_);
return v___x_1674_;
}
else
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; uint8_t v___x_1678_; 
lean_inc(v_deBruijnIndex_1672_);
lean_dec_ref_known(v_e_1664_, 1);
v___x_1675_ = lean_nat_sub(v_size_1665_, v_deBruijnIndex_1672_);
lean_dec(v_deBruijnIndex_1672_);
v___x_1676_ = lean_unsigned_to_nat(1u);
v___x_1677_ = lean_nat_sub(v___x_1675_, v___x_1676_);
lean_dec(v___x_1675_);
v___x_1678_ = lean_nat_dec_lt(v___x_1677_, v_size_1665_);
if (v___x_1678_ == 0)
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
lean_dec(v___x_1677_);
v___x_1679_ = l_outOfBounds___redArg(v___x_1666_);
v___x_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1679_);
lean_ctor_set(v___x_1680_, 1, v___y_1670_);
return v___x_1680_;
}
else
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1666_, v_xs_1667_, v___x_1677_);
lean_dec(v___x_1677_);
v___x_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1681_);
lean_ctor_set(v___x_1682_, 1, v___y_1670_);
return v___x_1682_;
}
}
}
case 9:
{
lean_object* v___x_1683_; 
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v_e_1664_);
lean_ctor_set(v___x_1683_, 1, v___y_1670_);
return v___x_1683_;
}
case 2:
{
lean_object* v___x_1684_; 
v___x_1684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1684_, 0, v_e_1664_);
lean_ctor_set(v___x_1684_, 1, v___y_1670_);
return v___x_1684_;
}
case 1:
{
lean_object* v___x_1685_; 
v___x_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1685_, 0, v_e_1664_);
lean_ctor_set(v___x_1685_, 1, v___y_1670_);
return v___x_1685_;
}
case 4:
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v_e_1664_);
lean_ctor_set(v___x_1686_, 1, v___y_1670_);
return v___x_1686_;
}
case 3:
{
lean_object* v___x_1687_; 
v___x_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1687_, 0, v_e_1664_);
lean_ctor_set(v___x_1687_, 1, v___y_1670_);
return v___x_1687_;
}
default: 
{
lean_object* v___x_1688_; uint8_t v___x_1689_; 
v___x_1688_ = l_Lean_Expr_looseBVarRange(v_e_1664_);
v___x_1689_ = lean_nat_dec_le(v___x_1688_, v___x_1671_);
lean_dec(v___x_1688_);
if (v___x_1689_ == 0)
{
switch(lean_obj_tag(v_e_1664_))
{
case 9:
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1690_, 0, v_e_1664_);
lean_ctor_set(v___x_1690_, 1, v___y_1670_);
return v___x_1690_;
}
case 2:
{
lean_object* v___x_1691_; 
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v_e_1664_);
lean_ctor_set(v___x_1691_, 1, v___y_1670_);
return v___x_1691_;
}
case 0:
{
lean_object* v___x_1692_; 
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v_e_1664_);
lean_ctor_set(v___x_1692_, 1, v___y_1670_);
return v___x_1692_;
}
case 1:
{
lean_object* v___x_1693_; 
v___x_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1693_, 0, v_e_1664_);
lean_ctor_set(v___x_1693_, 1, v___y_1670_);
return v___x_1693_;
}
case 4:
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v_e_1664_);
lean_ctor_set(v___x_1694_, 1, v___y_1670_);
return v___x_1694_;
}
case 3:
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v_e_1664_);
lean_ctor_set(v___x_1695_, 1, v___y_1670_);
return v___x_1695_;
}
default: 
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1);
v___x_1697_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(v_size_1665_, v_xs_1667_, v_e_1664_, v___x_1671_, v___x_1696_, v_debug_1668_, v___y_1669_, v___y_1670_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1707_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
v_a_1699_ = lean_ctor_get(v___x_1697_, 1);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1701_ = v___x_1697_;
v_isShared_1702_ = v_isSharedCheck_1707_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_inc(v_a_1698_);
lean_dec(v___x_1697_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1707_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v_fst_1703_; lean_object* v___x_1705_; 
v_fst_1703_ = lean_ctor_get(v_a_1698_, 0);
lean_inc(v_fst_1703_);
lean_dec(v_a_1698_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v_fst_1703_);
v___x_1705_ = v___x_1701_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_fst_1703_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v_a_1699_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
else
{
lean_object* v_a_1708_; lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1716_; 
v_a_1708_ = lean_ctor_get(v___x_1697_, 0);
v_a_1709_ = lean_ctor_get(v___x_1697_, 1);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1711_ = v___x_1697_;
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_inc(v_a_1708_);
lean_dec(v___x_1697_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1714_; 
if (v_isShared_1712_ == 0)
{
v___x_1714_ = v___x_1711_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_a_1708_);
lean_ctor_set(v_reuseFailAlloc_1715_, 1, v_a_1709_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
}
}
else
{
lean_object* v___x_1717_; 
v___x_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1717_, 0, v_e_1664_);
lean_ctor_set(v___x_1717_, 1, v___y_1670_);
return v___x_1717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___boxed(lean_object* v_e_1718_, lean_object* v_size_1719_, lean_object* v___x_1720_, lean_object* v_xs_1721_, lean_object* v_debug_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_){
_start:
{
uint8_t v_debug_boxed_1725_; lean_object* v_res_1726_; 
v_debug_boxed_1725_ = lean_unbox(v_debug_1722_);
v_res_1726_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0(v_e_1718_, v_size_1719_, v___x_1720_, v_xs_1721_, v_debug_boxed_1725_, v___y_1723_, v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec_ref(v_xs_1721_);
lean_dec_ref(v___x_1720_);
lean_dec(v_size_1719_);
return v_res_1726_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2(void){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1729_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2));
v___x_1730_ = lean_unsigned_to_nat(16u);
v___x_1731_ = lean_unsigned_to_nat(62u);
v___x_1732_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__1));
v___x_1733_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__0));
v___x_1734_ = l_mkPanicMessageWithDecl(v___x_1733_, v___x_1732_, v___x_1731_, v___x_1730_, v___x_1729_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(lean_object* v_xs_1735_, lean_object* v_e_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_size_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; uint8_t v_debug_1747_; lean_object* v___x_1748_; lean_object* v___f_1749_; lean_object* v___x_1750_; lean_object* v_env_1751_; uint8_t v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v_size_1744_ = lean_ctor_get(v_xs_1735_, 2);
lean_inc(v_size_1744_);
v___x_1745_ = l_Lean_instInhabitedExpr;
v___x_1746_ = lean_st_ref_get(v___y_1738_);
v_debug_1747_ = lean_ctor_get_uint8(v___x_1746_, sizeof(void*)*11);
lean_dec(v___x_1746_);
v___x_1748_ = lean_box(v_debug_1747_);
v___f_1749_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1749_, 0, v_e_1736_);
lean_closure_set(v___f_1749_, 1, v_size_1744_);
lean_closure_set(v___f_1749_, 2, v___x_1745_);
lean_closure_set(v___f_1749_, 3, v_xs_1735_);
lean_closure_set(v___f_1749_, 4, v___x_1748_);
v___x_1750_ = lean_st_ref_get(v___y_1742_);
v_env_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc_ref(v_env_1751_);
lean_dec(v___x_1750_);
v___x_1752_ = 0;
v___x_1753_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1753_, 0, v_env_1751_);
lean_ctor_set_uint8(v___x_1753_, sizeof(void*)*1, v___x_1752_);
lean_ctor_set_uint8(v___x_1753_, sizeof(void*)*1 + 1, v___x_1752_);
v___x_1754_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_1749_, v___x_1753_, v___y_1738_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1765_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1757_ = v___x_1754_;
v_isShared_1758_ = v_isSharedCheck_1765_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1754_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1765_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
if (lean_obj_tag(v_a_1755_) == 0)
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
lean_dec_ref_known(v_a_1755_, 1);
lean_del_object(v___x_1757_);
v___x_1759_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2);
v___x_1760_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(v___x_1759_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
return v___x_1760_;
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1763_; 
v_a_1761_ = lean_ctor_get(v_a_1755_, 0);
lean_inc(v_a_1761_);
lean_dec_ref_known(v_a_1755_, 1);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 0, v_a_1761_);
v___x_1763_ = v___x_1757_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1761_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
else
{
lean_object* v_a_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1773_; 
v_a_1766_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1768_ = v___x_1754_;
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_a_1766_);
lean_dec(v___x_1754_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1771_; 
if (v_isShared_1769_ == 0)
{
v___x_1771_ = v___x_1768_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_a_1766_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___boxed(lean_object* v_xs_1774_, lean_object* v_e_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(v_xs_1774_, v_e_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv(lean_object* v_xs_1784_, lean_object* v_e_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
lean_object* v___x_1794_; 
v___x_1794_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(v_xs_1784_, v_e_1785_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___boxed(lean_object* v_xs_1795_, lean_object* v_e_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv(v_xs_1795_, v_e_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
lean_dec(v___y_1797_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1806_, lean_object* v_m_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(v_m_1807_, v_a_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1810_, lean_object* v_m_1811_, lean_object* v_a_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2(v_00_u03b2_1810_, v_m_1811_, v_a_1812_);
lean_dec_ref(v_a_1812_);
lean_dec_ref(v_m_1811_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10(lean_object* v_00_u03b2_1814_, lean_object* v_a_1815_, lean_object* v_x_1816_){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(v_a_1815_, v_x_1816_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___boxed(lean_object* v_00_u03b2_1818_, lean_object* v_a_1819_, lean_object* v_x_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10(v_00_u03b2_1818_, v_a_1819_, v_x_1820_);
lean_dec(v_x_1820_);
lean_dec_ref(v_a_1819_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(lean_object* v_msg_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
lean_object* v___f_1841_; lean_object* v___f_1842_; lean_object* v___f_1843_; lean_object* v___f_1844_; lean_object* v___f_1845_; lean_object* v___f_1846_; lean_object* v___f_1847_; lean_object* v___f_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v_toApplicative_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1917_; 
v___f_1841_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0));
v___f_1842_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__1));
v___f_1843_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__2));
v___f_1844_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__3));
v___f_1845_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__4));
v___f_1846_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1846_, 0, v___f_1845_);
lean_closure_set(v___f_1846_, 1, v___f_1844_);
v___f_1847_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1847_, 0, v___f_1844_);
v___f_1848_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__5));
v___x_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___f_1841_);
lean_ctor_set(v___x_1849_, 1, v___f_1842_);
v___x_1850_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
lean_ctor_set(v___x_1850_, 1, v___f_1843_);
lean_ctor_set(v___x_1850_, 2, v___f_1846_);
lean_ctor_set(v___x_1850_, 3, v___f_1847_);
lean_ctor_set(v___x_1850_, 4, v___f_1848_);
v___x_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
lean_ctor_set(v___x_1851_, 1, v___f_1844_);
v___x_1852_ = l_StateRefT_x27_instMonad___redArg(v___x_1851_);
v_toApplicative_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1917_ == 0)
{
lean_object* v_unused_1918_; 
v_unused_1918_ = lean_ctor_get(v___x_1852_, 1);
lean_dec(v_unused_1918_);
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1917_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_toApplicative_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1917_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v_toFunctor_1857_; lean_object* v_toSeq_1858_; lean_object* v_toSeqLeft_1859_; lean_object* v_toSeqRight_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1915_; 
v_toFunctor_1857_ = lean_ctor_get(v_toApplicative_1853_, 0);
v_toSeq_1858_ = lean_ctor_get(v_toApplicative_1853_, 2);
v_toSeqLeft_1859_ = lean_ctor_get(v_toApplicative_1853_, 3);
v_toSeqRight_1860_ = lean_ctor_get(v_toApplicative_1853_, 4);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_toApplicative_1853_);
if (v_isSharedCheck_1915_ == 0)
{
lean_object* v_unused_1916_; 
v_unused_1916_ = lean_ctor_get(v_toApplicative_1853_, 1);
lean_dec(v_unused_1916_);
v___x_1862_ = v_toApplicative_1853_;
v_isShared_1863_ = v_isSharedCheck_1915_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_toSeqRight_1860_);
lean_inc(v_toSeqLeft_1859_);
lean_inc(v_toSeq_1858_);
lean_inc(v_toFunctor_1857_);
lean_dec(v_toApplicative_1853_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1915_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___f_1864_; lean_object* v___f_1865_; lean_object* v___f_1866_; lean_object* v___f_1867_; lean_object* v___x_1868_; lean_object* v___f_1869_; lean_object* v___f_1870_; lean_object* v___f_1871_; lean_object* v___x_1873_; 
v___f_1864_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__6));
v___f_1865_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__7));
lean_inc_ref(v_toFunctor_1857_);
v___f_1866_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1866_, 0, v_toFunctor_1857_);
v___f_1867_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1867_, 0, v_toFunctor_1857_);
v___x_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___f_1866_);
lean_ctor_set(v___x_1868_, 1, v___f_1867_);
v___f_1869_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1869_, 0, v_toSeqRight_1860_);
v___f_1870_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1870_, 0, v_toSeqLeft_1859_);
v___f_1871_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1871_, 0, v_toSeq_1858_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 4, v___f_1869_);
lean_ctor_set(v___x_1862_, 3, v___f_1870_);
lean_ctor_set(v___x_1862_, 2, v___f_1871_);
lean_ctor_set(v___x_1862_, 1, v___f_1864_);
lean_ctor_set(v___x_1862_, 0, v___x_1868_);
v___x_1873_ = v___x_1862_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1868_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v___f_1864_);
lean_ctor_set(v_reuseFailAlloc_1914_, 2, v___f_1871_);
lean_ctor_set(v_reuseFailAlloc_1914_, 3, v___f_1870_);
lean_ctor_set(v_reuseFailAlloc_1914_, 4, v___f_1869_);
v___x_1873_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___x_1875_; 
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 1, v___f_1865_);
lean_ctor_set(v___x_1855_, 0, v___x_1873_);
v___x_1875_ = v___x_1855_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v___x_1873_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v___f_1865_);
v___x_1875_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
lean_object* v___x_1876_; lean_object* v_toApplicative_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1911_; 
v___x_1876_ = l_StateRefT_x27_instMonad___redArg(v___x_1875_);
v_toApplicative_1877_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1911_ == 0)
{
lean_object* v_unused_1912_; 
v_unused_1912_ = lean_ctor_get(v___x_1876_, 1);
lean_dec(v_unused_1912_);
v___x_1879_ = v___x_1876_;
v_isShared_1880_ = v_isSharedCheck_1911_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_toApplicative_1877_);
lean_dec(v___x_1876_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1911_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v_toFunctor_1881_; lean_object* v_toSeq_1882_; lean_object* v_toSeqLeft_1883_; lean_object* v_toSeqRight_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1909_; 
v_toFunctor_1881_ = lean_ctor_get(v_toApplicative_1877_, 0);
v_toSeq_1882_ = lean_ctor_get(v_toApplicative_1877_, 2);
v_toSeqLeft_1883_ = lean_ctor_get(v_toApplicative_1877_, 3);
v_toSeqRight_1884_ = lean_ctor_get(v_toApplicative_1877_, 4);
v_isSharedCheck_1909_ = !lean_is_exclusive(v_toApplicative_1877_);
if (v_isSharedCheck_1909_ == 0)
{
lean_object* v_unused_1910_; 
v_unused_1910_ = lean_ctor_get(v_toApplicative_1877_, 1);
lean_dec(v_unused_1910_);
v___x_1886_ = v_toApplicative_1877_;
v_isShared_1887_ = v_isSharedCheck_1909_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_toSeqRight_1884_);
lean_inc(v_toSeqLeft_1883_);
lean_inc(v_toSeq_1882_);
lean_inc(v_toFunctor_1881_);
lean_dec(v_toApplicative_1877_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1909_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___f_1888_; lean_object* v___f_1889_; lean_object* v___f_1890_; lean_object* v___f_1891_; lean_object* v___x_1892_; lean_object* v___f_1893_; lean_object* v___f_1894_; lean_object* v___f_1895_; lean_object* v___x_1897_; 
v___f_1888_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__8));
v___f_1889_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__9));
lean_inc_ref(v_toFunctor_1881_);
v___f_1890_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1890_, 0, v_toFunctor_1881_);
v___f_1891_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1891_, 0, v_toFunctor_1881_);
v___x_1892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___f_1890_);
lean_ctor_set(v___x_1892_, 1, v___f_1891_);
v___f_1893_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1893_, 0, v_toSeqRight_1884_);
v___f_1894_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1894_, 0, v_toSeqLeft_1883_);
v___f_1895_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1895_, 0, v_toSeq_1882_);
if (v_isShared_1887_ == 0)
{
lean_ctor_set(v___x_1886_, 4, v___f_1893_);
lean_ctor_set(v___x_1886_, 3, v___f_1894_);
lean_ctor_set(v___x_1886_, 2, v___f_1895_);
lean_ctor_set(v___x_1886_, 1, v___f_1888_);
lean_ctor_set(v___x_1886_, 0, v___x_1892_);
v___x_1897_ = v___x_1886_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v___x_1892_);
lean_ctor_set(v_reuseFailAlloc_1908_, 1, v___f_1888_);
lean_ctor_set(v_reuseFailAlloc_1908_, 2, v___f_1895_);
lean_ctor_set(v_reuseFailAlloc_1908_, 3, v___f_1894_);
lean_ctor_set(v_reuseFailAlloc_1908_, 4, v___f_1893_);
v___x_1897_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
lean_object* v___x_1899_; 
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 1, v___f_1889_);
lean_ctor_set(v___x_1879_, 0, v___x_1897_);
v___x_1899_ = v___x_1879_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v___x_1897_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v___f_1889_);
v___x_1899_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_16346__overap_1905_; lean_object* v___x_1906_; 
v___x_1900_ = l_StateRefT_x27_instMonad___redArg(v___x_1899_);
v___x_1901_ = l_ReaderT_instMonad___redArg(v___x_1900_);
v___x_1902_ = l_StateRefT_x27_instMonad___redArg(v___x_1901_);
v___x_1903_ = l_Lean_instInhabitedExpr;
v___x_1904_ = l_instInhabitedOfMonad___redArg(v___x_1902_, v___x_1903_);
v___x_16346__overap_1905_ = lean_panic_fn_borrowed(v___x_1904_, v_msg_1832_);
lean_dec(v___x_1904_);
lean_inc(v___y_1839_);
lean_inc_ref(v___y_1838_);
lean_inc(v___y_1837_);
lean_inc_ref(v___y_1836_);
lean_inc(v___y_1835_);
lean_inc_ref(v___y_1834_);
lean_inc(v___y_1833_);
v___x_1906_ = lean_apply_8(v___x_16346__overap_1905_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, lean_box(0));
return v___x_1906_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___boxed(lean_object* v_msg_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v_msg_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(lean_object* v_f_1929_, lean_object* v_a_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_){
_start:
{
lean_object* v___y_1939_; lean_object* v___x_1942_; uint8_t v_debug_1943_; 
v___x_1942_ = lean_st_ref_get(v___y_1932_);
v_debug_1943_ = lean_ctor_get_uint8(v___x_1942_, sizeof(void*)*11);
lean_dec(v___x_1942_);
if (v_debug_1943_ == 0)
{
v___y_1939_ = v___y_1932_;
goto v___jp_1938_;
}
else
{
lean_object* v___x_1944_; 
v___x_1944_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_1929_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v___x_1945_; 
lean_dec_ref_known(v___x_1944_, 1);
v___x_1945_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_dec_ref_known(v___x_1945_, 1);
v___y_1939_ = v___y_1932_;
goto v___jp_1938_;
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
lean_dec_ref(v_a_1930_);
lean_dec_ref(v_f_1929_);
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1945_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1945_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec_ref(v_a_1930_);
lean_dec_ref(v_f_1929_);
v_a_1954_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1944_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1944_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
v___jp_1938_:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = l_Lean_Expr_app___override(v_f_1929_, v_a_1930_);
v___x_1941_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1940_, v___y_1939_);
return v___x_1941_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg___boxed(lean_object* v_f_1962_, lean_object* v_a_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(v_f_1962_, v_a_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1(lean_object* v_f_1972_, lean_object* v_a_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v___x_1982_; 
v___x_1982_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(v_f_1972_, v_a_1973_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___boxed(lean_object* v_f_1983_, lean_object* v_a_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1(v_f_1983_, v_a_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
lean_dec(v___y_1989_);
lean_dec_ref(v___y_1988_);
lean_dec(v___y_1987_);
lean_dec_ref(v___y_1986_);
lean_dec(v___y_1985_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(lean_object* v_d_1994_, lean_object* v_e_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_){
_start:
{
lean_object* v___y_2004_; lean_object* v___x_2007_; uint8_t v_debug_2008_; 
v___x_2007_ = lean_st_ref_get(v___y_1997_);
v_debug_2008_ = lean_ctor_get_uint8(v___x_2007_, sizeof(void*)*11);
lean_dec(v___x_2007_);
if (v_debug_2008_ == 0)
{
v___y_2004_ = v___y_1997_;
goto v___jp_2003_;
}
else
{
lean_object* v___x_2009_; 
v___x_2009_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_e_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_dec_ref_known(v___x_2009_, 1);
v___y_2004_ = v___y_1997_;
goto v___jp_2003_;
}
else
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2017_; 
lean_dec_ref(v_e_1995_);
lean_dec(v_d_1994_);
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_2012_ = v___x_2009_;
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v___x_2009_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2015_; 
if (v_isShared_2013_ == 0)
{
v___x_2015_ = v___x_2012_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_a_2010_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
return v___x_2015_;
}
}
}
}
v___jp_2003_:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = l_Lean_Expr_mdata___override(v_d_1994_, v_e_1995_);
v___x_2006_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2005_, v___y_2004_);
return v___x_2006_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg___boxed(lean_object* v_d_2018_, lean_object* v_e_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(v_d_2018_, v_e_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_);
lean_dec(v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec(v___y_2023_);
lean_dec_ref(v___y_2022_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2(lean_object* v_d_2028_, lean_object* v_e_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v___x_2038_; 
v___x_2038_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(v_d_2028_, v_e_2029_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_);
return v___x_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___boxed(lean_object* v_d_2039_, lean_object* v_e_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
lean_object* v_res_2049_; 
v_res_2049_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2(v_d_2039_, v_e_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
lean_dec(v___y_2041_);
return v_res_2049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(lean_object* v_structName_2050_, lean_object* v_idx_2051_, lean_object* v_struct_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
lean_object* v___y_2061_; lean_object* v___x_2064_; uint8_t v_debug_2065_; 
v___x_2064_ = lean_st_ref_get(v___y_2054_);
v_debug_2065_ = lean_ctor_get_uint8(v___x_2064_, sizeof(void*)*11);
lean_dec(v___x_2064_);
if (v_debug_2065_ == 0)
{
v___y_2061_ = v___y_2054_;
goto v___jp_2060_;
}
else
{
lean_object* v___x_2066_; 
v___x_2066_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_struct_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_dec_ref_known(v___x_2066_, 1);
v___y_2061_ = v___y_2054_;
goto v___jp_2060_;
}
else
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2074_; 
lean_dec_ref(v_struct_2052_);
lean_dec(v_idx_2051_);
lean_dec(v_structName_2050_);
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2069_ = v___x_2066_;
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_2066_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2070_ == 0)
{
v___x_2072_ = v___x_2069_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_a_2067_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
}
}
v___jp_2060_:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2062_ = l_Lean_Expr_proj___override(v_structName_2050_, v_idx_2051_, v_struct_2052_);
v___x_2063_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2062_, v___y_2061_);
return v___x_2063_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg___boxed(lean_object* v_structName_2075_, lean_object* v_idx_2076_, lean_object* v_struct_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(v_structName_2075_, v_idx_2076_, v_struct_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3(lean_object* v_structName_2086_, lean_object* v_idx_2087_, lean_object* v_struct_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_){
_start:
{
lean_object* v___x_2097_; 
v___x_2097_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(v_structName_2086_, v_idx_2087_, v_struct_2088_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___boxed(lean_object* v_structName_2098_, lean_object* v_idx_2099_, lean_object* v_struct_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3(v_structName_2098_, v_idx_2099_, v_struct_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec(v___y_2101_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(lean_object* v_msgData_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v___x_2116_; lean_object* v_env_2117_; lean_object* v___x_2118_; lean_object* v_toCold_2119_; lean_object* v_mctx_2120_; lean_object* v_lctx_2121_; lean_object* v_options_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2116_ = lean_st_ref_get(v___y_2114_);
v_env_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc_ref(v_env_2117_);
lean_dec(v___x_2116_);
v___x_2118_ = lean_st_ref_get(v___y_2112_);
v_toCold_2119_ = lean_ctor_get(v___y_2113_, 0);
v_mctx_2120_ = lean_ctor_get(v___x_2118_, 0);
lean_inc_ref(v_mctx_2120_);
lean_dec(v___x_2118_);
v_lctx_2121_ = lean_ctor_get(v___y_2111_, 2);
v_options_2122_ = lean_ctor_get(v_toCold_2119_, 2);
lean_inc_ref(v_options_2122_);
lean_inc_ref(v_lctx_2121_);
v___x_2123_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2123_, 0, v_env_2117_);
lean_ctor_set(v___x_2123_, 1, v_mctx_2120_);
lean_ctor_set(v___x_2123_, 2, v_lctx_2121_);
lean_ctor_set(v___x_2123_, 3, v_options_2122_);
v___x_2124_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
lean_ctor_set(v___x_2124_, 1, v_msgData_2110_);
v___x_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2124_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5___boxed(lean_object* v_msgData_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(v_msgData_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(lean_object* v_msg_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v_ref_2139_; lean_object* v___x_2140_; lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2149_; 
v_ref_2139_ = lean_ctor_get(v___y_2136_, 2);
v___x_2140_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(v_msg_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2143_ = v___x_2140_;
v_isShared_2144_ = v_isSharedCheck_2149_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v___x_2140_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2149_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2145_; lean_object* v___x_2147_; 
lean_inc(v_ref_2139_);
v___x_2145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2145_, 0, v_ref_2139_);
lean_ctor_set(v___x_2145_, 1, v_a_2141_);
if (v_isShared_2144_ == 0)
{
lean_ctor_set_tag(v___x_2143_, 1);
lean_ctor_set(v___x_2143_, 0, v___x_2145_);
v___x_2147_ = v___x_2143_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg___boxed(lean_object* v_msg_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(v_msg_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
lean_dec(v___y_2154_);
lean_dec_ref(v___y_2153_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
return v_res_2156_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(lean_object* v_a_2157_, lean_object* v_x_2158_){
_start:
{
if (lean_obj_tag(v_x_2158_) == 0)
{
lean_object* v___x_2159_; 
v___x_2159_ = lean_box(0);
return v___x_2159_;
}
else
{
lean_object* v_key_2160_; lean_object* v_value_2161_; lean_object* v_tail_2162_; lean_object* v_fst_2163_; lean_object* v_snd_2164_; lean_object* v_fst_2165_; lean_object* v_snd_2166_; size_t v___x_2167_; size_t v___x_2168_; uint8_t v___x_2169_; 
v_key_2160_ = lean_ctor_get(v_x_2158_, 0);
v_value_2161_ = lean_ctor_get(v_x_2158_, 1);
v_tail_2162_ = lean_ctor_get(v_x_2158_, 2);
v_fst_2163_ = lean_ctor_get(v_key_2160_, 0);
v_snd_2164_ = lean_ctor_get(v_key_2160_, 1);
v_fst_2165_ = lean_ctor_get(v_a_2157_, 0);
v_snd_2166_ = lean_ctor_get(v_a_2157_, 1);
v___x_2167_ = lean_ptr_addr(v_fst_2163_);
v___x_2168_ = lean_ptr_addr(v_fst_2165_);
v___x_2169_ = lean_usize_dec_eq(v___x_2167_, v___x_2168_);
if (v___x_2169_ == 0)
{
v_x_2158_ = v_tail_2162_;
goto _start;
}
else
{
size_t v___x_2171_; size_t v___x_2172_; uint8_t v___x_2173_; 
v___x_2171_ = lean_ptr_addr(v_snd_2164_);
v___x_2172_ = lean_ptr_addr(v_snd_2166_);
v___x_2173_ = lean_usize_dec_eq(v___x_2171_, v___x_2172_);
if (v___x_2173_ == 0)
{
v_x_2158_ = v_tail_2162_;
goto _start;
}
else
{
lean_object* v___x_2175_; 
lean_inc(v_value_2161_);
v___x_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2175_, 0, v_value_2161_);
return v___x_2175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg___boxed(lean_object* v_a_2176_, lean_object* v_x_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(v_a_2176_, v_x_2177_);
lean_dec(v_x_2177_);
lean_dec_ref(v_a_2176_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(lean_object* v_m_2179_, lean_object* v_a_2180_){
_start:
{
lean_object* v_buckets_2181_; lean_object* v_fst_2182_; lean_object* v_snd_2183_; lean_object* v___x_2184_; size_t v___x_2185_; size_t v___x_2186_; size_t v___x_2187_; uint64_t v___x_2188_; size_t v___x_2189_; size_t v___x_2190_; uint64_t v___x_2191_; uint64_t v___x_2192_; uint64_t v___x_2193_; uint64_t v___x_2194_; uint64_t v_fold_2195_; uint64_t v___x_2196_; uint64_t v___x_2197_; uint64_t v___x_2198_; size_t v___x_2199_; size_t v___x_2200_; size_t v___x_2201_; size_t v___x_2202_; size_t v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v_buckets_2181_ = lean_ctor_get(v_m_2179_, 1);
v_fst_2182_ = lean_ctor_get(v_a_2180_, 0);
v_snd_2183_ = lean_ctor_get(v_a_2180_, 1);
v___x_2184_ = lean_array_get_size(v_buckets_2181_);
v___x_2185_ = lean_ptr_addr(v_fst_2182_);
v___x_2186_ = ((size_t)3ULL);
v___x_2187_ = lean_usize_shift_right(v___x_2185_, v___x_2186_);
v___x_2188_ = lean_usize_to_uint64(v___x_2187_);
v___x_2189_ = lean_ptr_addr(v_snd_2183_);
v___x_2190_ = lean_usize_shift_right(v___x_2189_, v___x_2186_);
v___x_2191_ = lean_usize_to_uint64(v___x_2190_);
v___x_2192_ = lean_uint64_mix_hash(v___x_2188_, v___x_2191_);
v___x_2193_ = 32ULL;
v___x_2194_ = lean_uint64_shift_right(v___x_2192_, v___x_2193_);
v_fold_2195_ = lean_uint64_xor(v___x_2192_, v___x_2194_);
v___x_2196_ = 16ULL;
v___x_2197_ = lean_uint64_shift_right(v_fold_2195_, v___x_2196_);
v___x_2198_ = lean_uint64_xor(v_fold_2195_, v___x_2197_);
v___x_2199_ = lean_uint64_to_usize(v___x_2198_);
v___x_2200_ = lean_usize_of_nat(v___x_2184_);
v___x_2201_ = ((size_t)1ULL);
v___x_2202_ = lean_usize_sub(v___x_2200_, v___x_2201_);
v___x_2203_ = lean_usize_land(v___x_2199_, v___x_2202_);
v___x_2204_ = lean_array_uget_borrowed(v_buckets_2181_, v___x_2203_);
v___x_2205_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(v_a_2180_, v___x_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg___boxed(lean_object* v_m_2206_, lean_object* v_a_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(v_m_2206_, v_a_2207_);
lean_dec_ref(v_a_2207_);
lean_dec_ref(v_m_2206_);
return v_res_2208_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(lean_object* v_a_2209_, lean_object* v_x_2210_){
_start:
{
if (lean_obj_tag(v_x_2210_) == 0)
{
uint8_t v___x_2211_; 
v___x_2211_ = 0;
return v___x_2211_;
}
else
{
lean_object* v_key_2212_; lean_object* v_tail_2213_; lean_object* v_fst_2214_; lean_object* v_snd_2215_; lean_object* v_fst_2216_; lean_object* v_snd_2217_; size_t v___x_2218_; size_t v___x_2219_; uint8_t v___x_2220_; 
v_key_2212_ = lean_ctor_get(v_x_2210_, 0);
v_tail_2213_ = lean_ctor_get(v_x_2210_, 2);
v_fst_2214_ = lean_ctor_get(v_key_2212_, 0);
v_snd_2215_ = lean_ctor_get(v_key_2212_, 1);
v_fst_2216_ = lean_ctor_get(v_a_2209_, 0);
v_snd_2217_ = lean_ctor_get(v_a_2209_, 1);
v___x_2218_ = lean_ptr_addr(v_fst_2214_);
v___x_2219_ = lean_ptr_addr(v_fst_2216_);
v___x_2220_ = lean_usize_dec_eq(v___x_2218_, v___x_2219_);
if (v___x_2220_ == 0)
{
v_x_2210_ = v_tail_2213_;
goto _start;
}
else
{
size_t v___x_2222_; size_t v___x_2223_; uint8_t v___x_2224_; 
v___x_2222_ = lean_ptr_addr(v_snd_2215_);
v___x_2223_ = lean_ptr_addr(v_snd_2217_);
v___x_2224_ = lean_usize_dec_eq(v___x_2222_, v___x_2223_);
if (v___x_2224_ == 0)
{
v_x_2210_ = v_tail_2213_;
goto _start;
}
else
{
return v___x_2224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg___boxed(lean_object* v_a_2226_, lean_object* v_x_2227_){
_start:
{
uint8_t v_res_2228_; lean_object* v_r_2229_; 
v_res_2228_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(v_a_2226_, v_x_2227_);
lean_dec(v_x_2227_);
lean_dec_ref(v_a_2226_);
v_r_2229_ = lean_box(v_res_2228_);
return v_r_2229_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(lean_object* v_a_2230_, lean_object* v_b_2231_, lean_object* v_x_2232_){
_start:
{
if (lean_obj_tag(v_x_2232_) == 0)
{
lean_dec(v_b_2231_);
lean_dec_ref(v_a_2230_);
return v_x_2232_;
}
else
{
lean_object* v_key_2233_; lean_object* v_value_2234_; lean_object* v_tail_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2255_; 
v_key_2233_ = lean_ctor_get(v_x_2232_, 0);
v_value_2234_ = lean_ctor_get(v_x_2232_, 1);
v_tail_2235_ = lean_ctor_get(v_x_2232_, 2);
v_isSharedCheck_2255_ = !lean_is_exclusive(v_x_2232_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2237_ = v_x_2232_;
v_isShared_2238_ = v_isSharedCheck_2255_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_tail_2235_);
lean_inc(v_value_2234_);
lean_inc(v_key_2233_);
lean_dec(v_x_2232_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2255_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v_fst_2244_; lean_object* v_snd_2245_; lean_object* v_fst_2246_; lean_object* v_snd_2247_; size_t v___x_2248_; size_t v___x_2249_; uint8_t v___x_2250_; 
v_fst_2244_ = lean_ctor_get(v_key_2233_, 0);
v_snd_2245_ = lean_ctor_get(v_key_2233_, 1);
v_fst_2246_ = lean_ctor_get(v_a_2230_, 0);
v_snd_2247_ = lean_ctor_get(v_a_2230_, 1);
v___x_2248_ = lean_ptr_addr(v_fst_2244_);
v___x_2249_ = lean_ptr_addr(v_fst_2246_);
v___x_2250_ = lean_usize_dec_eq(v___x_2248_, v___x_2249_);
if (v___x_2250_ == 0)
{
goto v___jp_2239_;
}
else
{
size_t v___x_2251_; size_t v___x_2252_; uint8_t v___x_2253_; 
v___x_2251_ = lean_ptr_addr(v_snd_2245_);
v___x_2252_ = lean_ptr_addr(v_snd_2247_);
v___x_2253_ = lean_usize_dec_eq(v___x_2251_, v___x_2252_);
if (v___x_2253_ == 0)
{
goto v___jp_2239_;
}
else
{
lean_object* v___x_2254_; 
lean_del_object(v___x_2237_);
lean_dec(v_value_2234_);
lean_dec(v_key_2233_);
v___x_2254_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2254_, 0, v_a_2230_);
lean_ctor_set(v___x_2254_, 1, v_b_2231_);
lean_ctor_set(v___x_2254_, 2, v_tail_2235_);
return v___x_2254_;
}
}
v___jp_2239_:
{
lean_object* v___x_2240_; lean_object* v___x_2242_; 
v___x_2240_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(v_a_2230_, v_b_2231_, v_tail_2235_);
if (v_isShared_2238_ == 0)
{
lean_ctor_set(v___x_2237_, 2, v___x_2240_);
v___x_2242_ = v___x_2237_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_key_2233_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v_value_2234_);
lean_ctor_set(v_reuseFailAlloc_2243_, 2, v___x_2240_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12___redArg(lean_object* v_x_2256_, lean_object* v_x_2257_){
_start:
{
if (lean_obj_tag(v_x_2257_) == 0)
{
return v_x_2256_;
}
else
{
lean_object* v_key_2258_; lean_object* v_value_2259_; lean_object* v_tail_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2292_; 
v_key_2258_ = lean_ctor_get(v_x_2257_, 0);
v_value_2259_ = lean_ctor_get(v_x_2257_, 1);
v_tail_2260_ = lean_ctor_get(v_x_2257_, 2);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_x_2257_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2262_ = v_x_2257_;
v_isShared_2263_ = v_isSharedCheck_2292_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_tail_2260_);
lean_inc(v_value_2259_);
lean_inc(v_key_2258_);
lean_dec(v_x_2257_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2292_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v_fst_2264_; lean_object* v_snd_2265_; lean_object* v___x_2266_; size_t v___x_2267_; size_t v___x_2268_; size_t v___x_2269_; uint64_t v___x_2270_; size_t v___x_2271_; size_t v___x_2272_; uint64_t v___x_2273_; uint64_t v___x_2274_; uint64_t v___x_2275_; uint64_t v___x_2276_; uint64_t v_fold_2277_; uint64_t v___x_2278_; uint64_t v___x_2279_; uint64_t v___x_2280_; size_t v___x_2281_; size_t v___x_2282_; size_t v___x_2283_; size_t v___x_2284_; size_t v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2288_; 
v_fst_2264_ = lean_ctor_get(v_key_2258_, 0);
v_snd_2265_ = lean_ctor_get(v_key_2258_, 1);
v___x_2266_ = lean_array_get_size(v_x_2256_);
v___x_2267_ = lean_ptr_addr(v_fst_2264_);
v___x_2268_ = ((size_t)3ULL);
v___x_2269_ = lean_usize_shift_right(v___x_2267_, v___x_2268_);
v___x_2270_ = lean_usize_to_uint64(v___x_2269_);
v___x_2271_ = lean_ptr_addr(v_snd_2265_);
v___x_2272_ = lean_usize_shift_right(v___x_2271_, v___x_2268_);
v___x_2273_ = lean_usize_to_uint64(v___x_2272_);
v___x_2274_ = lean_uint64_mix_hash(v___x_2270_, v___x_2273_);
v___x_2275_ = 32ULL;
v___x_2276_ = lean_uint64_shift_right(v___x_2274_, v___x_2275_);
v_fold_2277_ = lean_uint64_xor(v___x_2274_, v___x_2276_);
v___x_2278_ = 16ULL;
v___x_2279_ = lean_uint64_shift_right(v_fold_2277_, v___x_2278_);
v___x_2280_ = lean_uint64_xor(v_fold_2277_, v___x_2279_);
v___x_2281_ = lean_uint64_to_usize(v___x_2280_);
v___x_2282_ = lean_usize_of_nat(v___x_2266_);
v___x_2283_ = ((size_t)1ULL);
v___x_2284_ = lean_usize_sub(v___x_2282_, v___x_2283_);
v___x_2285_ = lean_usize_land(v___x_2281_, v___x_2284_);
v___x_2286_ = lean_array_uget_borrowed(v_x_2256_, v___x_2285_);
lean_inc(v___x_2286_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 2, v___x_2286_);
v___x_2288_ = v___x_2262_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_key_2258_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_value_2259_);
lean_ctor_set(v_reuseFailAlloc_2291_, 2, v___x_2286_);
v___x_2288_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_array_uset(v_x_2256_, v___x_2285_, v___x_2288_);
v_x_2256_ = v___x_2289_;
v_x_2257_ = v_tail_2260_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11___redArg(lean_object* v_i_2293_, lean_object* v_source_2294_, lean_object* v_target_2295_){
_start:
{
lean_object* v___x_2296_; uint8_t v___x_2297_; 
v___x_2296_ = lean_array_get_size(v_source_2294_);
v___x_2297_ = lean_nat_dec_lt(v_i_2293_, v___x_2296_);
if (v___x_2297_ == 0)
{
lean_dec_ref(v_source_2294_);
lean_dec(v_i_2293_);
return v_target_2295_;
}
else
{
lean_object* v_es_2298_; lean_object* v___x_2299_; lean_object* v_source_2300_; lean_object* v_target_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v_es_2298_ = lean_array_fget(v_source_2294_, v_i_2293_);
v___x_2299_ = lean_box(0);
v_source_2300_ = lean_array_fset(v_source_2294_, v_i_2293_, v___x_2299_);
v_target_2301_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12___redArg(v_target_2295_, v_es_2298_);
v___x_2302_ = lean_unsigned_to_nat(1u);
v___x_2303_ = lean_nat_add(v_i_2293_, v___x_2302_);
lean_dec(v_i_2293_);
v_i_2293_ = v___x_2303_;
v_source_2294_ = v_source_2300_;
v_target_2295_ = v_target_2301_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10___redArg(lean_object* v_data_2305_){
_start:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v_nbuckets_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2306_ = lean_array_get_size(v_data_2305_);
v___x_2307_ = lean_unsigned_to_nat(2u);
v_nbuckets_2308_ = lean_nat_mul(v___x_2306_, v___x_2307_);
v___x_2309_ = lean_unsigned_to_nat(0u);
v___x_2310_ = lean_box(0);
v___x_2311_ = lean_mk_array(v_nbuckets_2308_, v___x_2310_);
v___x_2312_ = lean_array_propagate_mark(v_data_2305_, v___x_2311_);
v___x_2313_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11___redArg(v___x_2309_, v_data_2305_, v___x_2312_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7___redArg(lean_object* v_m_2314_, lean_object* v_a_2315_, lean_object* v_b_2316_){
_start:
{
lean_object* v_size_2317_; lean_object* v_buckets_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2370_; 
v_size_2317_ = lean_ctor_get(v_m_2314_, 0);
v_buckets_2318_ = lean_ctor_get(v_m_2314_, 1);
v_isSharedCheck_2370_ = !lean_is_exclusive(v_m_2314_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2320_ = v_m_2314_;
v_isShared_2321_ = v_isSharedCheck_2370_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_buckets_2318_);
lean_inc(v_size_2317_);
lean_dec(v_m_2314_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2370_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v_fst_2322_; lean_object* v_snd_2323_; lean_object* v___x_2324_; size_t v___x_2325_; size_t v___x_2326_; size_t v___x_2327_; uint64_t v___x_2328_; size_t v___x_2329_; size_t v___x_2330_; uint64_t v___x_2331_; uint64_t v___x_2332_; uint64_t v___x_2333_; uint64_t v___x_2334_; uint64_t v_fold_2335_; uint64_t v___x_2336_; uint64_t v___x_2337_; uint64_t v___x_2338_; size_t v___x_2339_; size_t v___x_2340_; size_t v___x_2341_; size_t v___x_2342_; size_t v___x_2343_; lean_object* v_bkt_2344_; uint8_t v___x_2345_; 
v_fst_2322_ = lean_ctor_get(v_a_2315_, 0);
v_snd_2323_ = lean_ctor_get(v_a_2315_, 1);
v___x_2324_ = lean_array_get_size(v_buckets_2318_);
v___x_2325_ = lean_ptr_addr(v_fst_2322_);
v___x_2326_ = ((size_t)3ULL);
v___x_2327_ = lean_usize_shift_right(v___x_2325_, v___x_2326_);
v___x_2328_ = lean_usize_to_uint64(v___x_2327_);
v___x_2329_ = lean_ptr_addr(v_snd_2323_);
v___x_2330_ = lean_usize_shift_right(v___x_2329_, v___x_2326_);
v___x_2331_ = lean_usize_to_uint64(v___x_2330_);
v___x_2332_ = lean_uint64_mix_hash(v___x_2328_, v___x_2331_);
v___x_2333_ = 32ULL;
v___x_2334_ = lean_uint64_shift_right(v___x_2332_, v___x_2333_);
v_fold_2335_ = lean_uint64_xor(v___x_2332_, v___x_2334_);
v___x_2336_ = 16ULL;
v___x_2337_ = lean_uint64_shift_right(v_fold_2335_, v___x_2336_);
v___x_2338_ = lean_uint64_xor(v_fold_2335_, v___x_2337_);
v___x_2339_ = lean_uint64_to_usize(v___x_2338_);
v___x_2340_ = lean_usize_of_nat(v___x_2324_);
v___x_2341_ = ((size_t)1ULL);
v___x_2342_ = lean_usize_sub(v___x_2340_, v___x_2341_);
v___x_2343_ = lean_usize_land(v___x_2339_, v___x_2342_);
v_bkt_2344_ = lean_array_uget_borrowed(v_buckets_2318_, v___x_2343_);
v___x_2345_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(v_a_2315_, v_bkt_2344_);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; lean_object* v_size_x27_2347_; lean_object* v___x_2348_; lean_object* v_buckets_x27_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; uint8_t v___x_2355_; 
v___x_2346_ = lean_unsigned_to_nat(1u);
v_size_x27_2347_ = lean_nat_add(v_size_2317_, v___x_2346_);
lean_dec(v_size_2317_);
lean_inc(v_bkt_2344_);
v___x_2348_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2348_, 0, v_a_2315_);
lean_ctor_set(v___x_2348_, 1, v_b_2316_);
lean_ctor_set(v___x_2348_, 2, v_bkt_2344_);
v_buckets_x27_2349_ = lean_array_uset(v_buckets_2318_, v___x_2343_, v___x_2348_);
v___x_2350_ = lean_unsigned_to_nat(4u);
v___x_2351_ = lean_nat_mul(v_size_x27_2347_, v___x_2350_);
v___x_2352_ = lean_unsigned_to_nat(3u);
v___x_2353_ = lean_nat_div(v___x_2351_, v___x_2352_);
lean_dec(v___x_2351_);
v___x_2354_ = lean_array_get_size(v_buckets_x27_2349_);
v___x_2355_ = lean_nat_dec_le(v___x_2353_, v___x_2354_);
lean_dec(v___x_2353_);
if (v___x_2355_ == 0)
{
lean_object* v_val_2356_; lean_object* v___x_2358_; 
v_val_2356_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10___redArg(v_buckets_x27_2349_);
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 1, v_val_2356_);
lean_ctor_set(v___x_2320_, 0, v_size_x27_2347_);
v___x_2358_ = v___x_2320_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_size_x27_2347_);
lean_ctor_set(v_reuseFailAlloc_2359_, 1, v_val_2356_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
else
{
lean_object* v___x_2361_; 
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 1, v_buckets_x27_2349_);
lean_ctor_set(v___x_2320_, 0, v_size_x27_2347_);
v___x_2361_ = v___x_2320_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_size_x27_2347_);
lean_ctor_set(v_reuseFailAlloc_2362_, 1, v_buckets_x27_2349_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
else
{
lean_object* v___x_2363_; lean_object* v_buckets_x27_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2368_; 
lean_inc(v_bkt_2344_);
v___x_2363_ = lean_box(0);
v_buckets_x27_2364_ = lean_array_uset(v_buckets_2318_, v___x_2343_, v___x_2363_);
v___x_2365_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(v_a_2315_, v_b_2316_, v_bkt_2344_);
v___x_2366_ = lean_array_uset(v_buckets_x27_2364_, v___x_2343_, v___x_2365_);
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 1, v___x_2366_);
v___x_2368_ = v___x_2320_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_size_2317_);
lean_ctor_set(v_reuseFailAlloc_2369_, 1, v___x_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1(void){
_start:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2372_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__0));
v___x_2373_ = l_Lean_stringToMessageData(v___x_2372_);
return v___x_2373_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2(void){
_start:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2374_ = lean_unsigned_to_nat(32u);
v___x_2375_ = lean_mk_empty_array_with_capacity(v___x_2374_);
v___x_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
return v___x_2376_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3(void){
_start:
{
size_t v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2377_ = ((size_t)5ULL);
v___x_2378_ = lean_unsigned_to_nat(0u);
v___x_2379_ = lean_unsigned_to_nat(32u);
v___x_2380_ = lean_mk_empty_array_with_capacity(v___x_2379_);
v___x_2381_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2);
v___x_2382_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2382_, 0, v___x_2381_);
lean_ctor_set(v___x_2382_, 1, v___x_2380_);
lean_ctor_set(v___x_2382_, 2, v___x_2378_);
lean_ctor_set(v___x_2382_, 3, v___x_2378_);
lean_ctor_set_usize(v___x_2382_, 4, v___x_2377_);
return v___x_2382_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2(void){
_start:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2385_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2));
v___x_2386_ = lean_unsigned_to_nat(73u);
v___x_2387_ = lean_unsigned_to_nat(213u);
v___x_2388_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__1));
v___x_2389_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0));
v___x_2390_ = l_mkPanicMessageWithDecl(v___x_2389_, v___x_2388_, v___x_2387_, v___x_2386_, v___x_2385_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(lean_object* v_xs_2391_, lean_object* v_e_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
switch(lean_obj_tag(v_e_2392_))
{
case 0:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
lean_dec_ref_known(v_e_2392_, 1);
lean_dec_ref(v_xs_2391_);
v___x_2401_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2402_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2401_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2402_;
}
case 1:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
lean_dec_ref_known(v_e_2392_, 1);
lean_dec_ref(v_xs_2391_);
v___x_2403_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2404_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2403_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2404_;
}
case 2:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; 
lean_dec_ref_known(v_e_2392_, 1);
lean_dec_ref(v_xs_2391_);
v___x_2405_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2406_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2405_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2406_;
}
case 3:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
lean_dec_ref_known(v_e_2392_, 1);
lean_dec_ref(v_xs_2391_);
v___x_2407_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2408_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2407_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2408_;
}
case 4:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; 
lean_dec_ref_known(v_e_2392_, 2);
lean_dec_ref(v_xs_2391_);
v___x_2409_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2410_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2409_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2410_;
}
case 5:
{
lean_object* v_fn_2411_; lean_object* v_arg_2412_; lean_object* v___x_2413_; 
v_fn_2411_ = lean_ctor_get(v_e_2392_, 0);
v_arg_2412_ = lean_ctor_get(v_e_2392_, 1);
lean_inc_ref(v_fn_2411_);
lean_inc_ref(v_xs_2391_);
v___x_2413_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2391_, v_fn_2411_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2415_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2414_);
lean_dec_ref_known(v___x_2413_, 1);
lean_inc_ref(v_arg_2412_);
v___x_2415_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2391_, v_arg_2412_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2415_) == 0)
{
lean_object* v_a_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2431_; 
v_a_2416_ = lean_ctor_get(v___x_2415_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2418_ = v___x_2415_;
v_isShared_2419_ = v_isSharedCheck_2431_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_a_2416_);
lean_dec(v___x_2415_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2431_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
size_t v___x_2420_; size_t v___x_2421_; uint8_t v___x_2422_; 
v___x_2420_ = lean_ptr_addr(v_fn_2411_);
v___x_2421_ = lean_ptr_addr(v_a_2414_);
v___x_2422_ = lean_usize_dec_eq(v___x_2420_, v___x_2421_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; 
lean_del_object(v___x_2418_);
lean_dec_ref_known(v_e_2392_, 2);
v___x_2423_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(v_a_2414_, v_a_2416_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2423_;
}
else
{
size_t v___x_2424_; size_t v___x_2425_; uint8_t v___x_2426_; 
v___x_2424_ = lean_ptr_addr(v_arg_2412_);
v___x_2425_ = lean_ptr_addr(v_a_2416_);
v___x_2426_ = lean_usize_dec_eq(v___x_2424_, v___x_2425_);
if (v___x_2426_ == 0)
{
lean_object* v___x_2427_; 
lean_del_object(v___x_2418_);
lean_dec_ref_known(v_e_2392_, 2);
v___x_2427_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(v_a_2414_, v_a_2416_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2427_;
}
else
{
lean_object* v___x_2429_; 
lean_dec(v_a_2416_);
lean_dec(v_a_2414_);
if (v_isShared_2419_ == 0)
{
lean_ctor_set(v___x_2418_, 0, v_e_2392_);
v___x_2429_ = v___x_2418_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v_e_2392_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
return v___x_2429_;
}
}
}
}
}
else
{
lean_dec(v_a_2414_);
lean_dec_ref_known(v_e_2392_, 2);
return v___x_2415_;
}
}
else
{
lean_dec_ref_known(v_e_2392_, 2);
lean_dec_ref(v_xs_2391_);
return v___x_2413_;
}
}
case 8:
{
lean_object* v_declName_2432_; lean_object* v_type_2433_; lean_object* v_value_2434_; lean_object* v_body_2435_; uint8_t v_nondep_2436_; lean_object* v___x_2437_; 
v_declName_2432_ = lean_ctor_get(v_e_2392_, 0);
lean_inc(v_declName_2432_);
v_type_2433_ = lean_ctor_get(v_e_2392_, 1);
lean_inc_ref(v_type_2433_);
v_value_2434_ = lean_ctor_get(v_e_2392_, 2);
lean_inc_ref(v_value_2434_);
v_body_2435_ = lean_ctor_get(v_e_2392_, 3);
lean_inc_ref(v_body_2435_);
v_nondep_2436_ = lean_ctor_get_uint8(v_e_2392_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2392_, 4);
lean_inc_ref(v_xs_2391_);
v___x_2437_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2391_, v_type_2433_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2439_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref_known(v___x_2437_, 1);
lean_inc_ref(v_xs_2391_);
v___x_2439_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2391_, v_value_2434_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2439_) == 0)
{
lean_object* v_a_2440_; lean_object* v___x_2441_; 
v_a_2440_ = lean_ctor_get(v___x_2439_, 0);
lean_inc(v_a_2440_);
lean_dec_ref_known(v___x_2439_, 1);
v___x_2441_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl(v_declName_2432_, v_a_2438_, v_a_2440_, v_nondep_2436_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2441_) == 0)
{
lean_object* v_a_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v_a_2442_ = lean_ctor_get(v___x_2441_, 0);
lean_inc(v_a_2442_);
lean_dec_ref_known(v___x_2441_, 1);
v___x_2443_ = l_Lean_PersistentArray_push___redArg(v_xs_2391_, v_a_2442_);
v___x_2444_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v___x_2443_, v_body_2435_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2444_;
}
else
{
lean_dec_ref(v_body_2435_);
lean_dec_ref(v_xs_2391_);
return v___x_2441_;
}
}
else
{
lean_dec(v_a_2438_);
lean_dec_ref(v_body_2435_);
lean_dec(v_declName_2432_);
lean_dec_ref(v_xs_2391_);
return v___x_2439_;
}
}
else
{
lean_dec_ref(v_body_2435_);
lean_dec_ref(v_value_2434_);
lean_dec(v_declName_2432_);
lean_dec_ref(v_xs_2391_);
return v___x_2437_;
}
}
case 9:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
lean_dec_ref_known(v_e_2392_, 1);
lean_dec_ref(v_xs_2391_);
v___x_2445_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2446_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2445_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2446_;
}
case 10:
{
lean_object* v_data_2447_; lean_object* v_expr_2448_; lean_object* v___x_2449_; 
v_data_2447_ = lean_ctor_get(v_e_2392_, 0);
v_expr_2448_ = lean_ctor_get(v_e_2392_, 1);
lean_inc_ref(v_expr_2448_);
v___x_2449_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2391_, v_expr_2448_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2461_; 
v_a_2450_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2452_ = v___x_2449_;
v_isShared_2453_ = v_isSharedCheck_2461_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2449_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2461_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
size_t v___x_2454_; size_t v___x_2455_; uint8_t v___x_2456_; 
v___x_2454_ = lean_ptr_addr(v_expr_2448_);
v___x_2455_ = lean_ptr_addr(v_a_2450_);
v___x_2456_ = lean_usize_dec_eq(v___x_2454_, v___x_2455_);
if (v___x_2456_ == 0)
{
lean_object* v___x_2457_; 
lean_inc(v_data_2447_);
lean_del_object(v___x_2452_);
lean_dec_ref_known(v_e_2392_, 2);
v___x_2457_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(v_data_2447_, v_a_2450_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2457_;
}
else
{
lean_object* v___x_2459_; 
lean_dec(v_a_2450_);
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 0, v_e_2392_);
v___x_2459_ = v___x_2452_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_e_2392_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2392_, 2);
return v___x_2449_;
}
}
case 11:
{
lean_object* v_typeName_2462_; lean_object* v_idx_2463_; lean_object* v_struct_2464_; lean_object* v___x_2465_; 
v_typeName_2462_ = lean_ctor_get(v_e_2392_, 0);
v_idx_2463_ = lean_ctor_get(v_e_2392_, 1);
v_struct_2464_ = lean_ctor_get(v_e_2392_, 2);
lean_inc_ref(v_struct_2464_);
v___x_2465_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2391_, v_struct_2464_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2477_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2468_ = v___x_2465_;
v_isShared_2469_ = v_isSharedCheck_2477_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2465_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2477_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
size_t v___x_2470_; size_t v___x_2471_; uint8_t v___x_2472_; 
v___x_2470_ = lean_ptr_addr(v_struct_2464_);
v___x_2471_ = lean_ptr_addr(v_a_2466_);
v___x_2472_ = lean_usize_dec_eq(v___x_2470_, v___x_2471_);
if (v___x_2472_ == 0)
{
lean_object* v___x_2473_; 
lean_inc(v_idx_2463_);
lean_inc(v_typeName_2462_);
lean_del_object(v___x_2468_);
lean_dec_ref_known(v_e_2392_, 3);
v___x_2473_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(v_typeName_2462_, v_idx_2463_, v_a_2466_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2473_;
}
else
{
lean_object* v___x_2475_; 
lean_dec(v_a_2466_);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v_e_2392_);
v___x_2475_ = v___x_2468_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_e_2392_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2392_, 3);
return v___x_2465_;
}
}
default: 
{
lean_object* v___x_2478_; 
v___x_2478_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(v_xs_2391_, v_e_2392_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
return v___x_2478_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(lean_object* v_xs_2479_, lean_object* v_e_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_){
_start:
{
switch(lean_obj_tag(v_e_2480_))
{
case 0:
{
lean_object* v_deBruijnIndex_2489_; lean_object* v_size_2490_; uint8_t v___x_2491_; 
v_deBruijnIndex_2489_ = lean_ctor_get(v_e_2480_, 0);
lean_inc(v_deBruijnIndex_2489_);
lean_dec_ref_known(v_e_2480_, 1);
v_size_2490_ = lean_ctor_get(v_xs_2479_, 2);
v___x_2491_ = lean_nat_dec_lt(v_deBruijnIndex_2489_, v_size_2490_);
if (v___x_2491_ == 0)
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
lean_dec(v_deBruijnIndex_2489_);
lean_dec_ref(v_xs_2479_);
v___x_2492_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1);
v___x_2493_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(v___x_2492_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
return v___x_2493_;
}
else
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2494_ = l_Lean_instInhabitedExpr;
v___x_2495_ = lean_nat_sub(v_size_2490_, v_deBruijnIndex_2489_);
lean_dec(v_deBruijnIndex_2489_);
v___x_2496_ = lean_unsigned_to_nat(1u);
v___x_2497_ = lean_nat_sub(v___x_2495_, v___x_2496_);
lean_dec(v___x_2495_);
v___x_2498_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2494_, v_xs_2479_, v___x_2497_);
lean_dec(v___x_2497_);
lean_dec_ref(v_xs_2479_);
v___x_2499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
return v___x_2499_;
}
}
case 1:
{
lean_object* v___x_2500_; 
lean_dec_ref(v_xs_2479_);
v___x_2500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2500_, 0, v_e_2480_);
return v___x_2500_;
}
case 2:
{
lean_object* v___x_2501_; 
lean_dec_ref(v_xs_2479_);
v___x_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2501_, 0, v_e_2480_);
return v___x_2501_;
}
case 3:
{
lean_object* v___x_2502_; 
lean_dec_ref(v_xs_2479_);
v___x_2502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2502_, 0, v_e_2480_);
return v___x_2502_;
}
case 4:
{
lean_object* v___x_2503_; 
lean_dec_ref(v_xs_2479_);
v___x_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2503_, 0, v_e_2480_);
return v___x_2503_;
}
case 9:
{
lean_object* v___x_2504_; 
lean_dec_ref(v_xs_2479_);
v___x_2504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2504_, 0, v_e_2480_);
return v___x_2504_;
}
default: 
{
uint8_t v___x_2505_; 
v___x_2505_ = l_Lean_Expr_hasLooseBVars(v_e_2480_);
if (v___x_2505_ == 0)
{
lean_object* v___x_2506_; 
lean_dec_ref(v_xs_2479_);
lean_inc_ref(v_e_2480_);
v___x_2506_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(v_e_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
if (lean_obj_tag(v___x_2506_) == 0)
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2547_; 
v_a_2507_ = lean_ctor_get(v___x_2506_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2509_ = v___x_2506_;
v_isShared_2510_ = v_isSharedCheck_2547_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2506_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2547_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
uint8_t v___x_2511_; 
v___x_2511_ = lean_unbox(v_a_2507_);
lean_dec(v_a_2507_);
if (v___x_2511_ == 0)
{
lean_object* v___x_2513_; 
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 0, v_e_2480_);
v___x_2513_ = v___x_2509_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_e_2480_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
else
{
lean_object* v___x_2515_; lean_object* v_cacheClosed_2516_; lean_object* v___x_2517_; 
v___x_2515_ = lean_st_ref_get(v___y_2481_);
v_cacheClosed_2516_ = lean_ctor_get(v___x_2515_, 1);
lean_inc_ref(v_cacheClosed_2516_);
lean_dec(v___x_2515_);
v___x_2517_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(v_cacheClosed_2516_, v_e_2480_);
lean_dec_ref(v_cacheClosed_2516_);
if (lean_obj_tag(v___x_2517_) == 1)
{
lean_object* v_val_2518_; lean_object* v___x_2520_; 
lean_dec_ref(v_e_2480_);
v_val_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc(v_val_2518_);
lean_dec_ref_known(v___x_2517_, 1);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 0, v_val_2518_);
v___x_2520_ = v___x_2509_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_val_2518_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
else
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
lean_dec(v___x_2517_);
lean_del_object(v___x_2509_);
v___x_2522_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3);
lean_inc_ref(v_e_2480_);
v___x_2523_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(v___x_2522_, v_e_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2546_; 
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2526_ = v___x_2523_;
v_isShared_2527_ = v_isSharedCheck_2546_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2523_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2546_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2528_; lean_object* v_cache_2529_; lean_object* v_cacheClosed_2530_; lean_object* v_hasLetCache_2531_; lean_object* v_decls_2532_; lean_object* v_valueMap_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2545_; 
v___x_2528_ = lean_st_ref_take(v___y_2481_);
v_cache_2529_ = lean_ctor_get(v___x_2528_, 0);
v_cacheClosed_2530_ = lean_ctor_get(v___x_2528_, 1);
v_hasLetCache_2531_ = lean_ctor_get(v___x_2528_, 2);
v_decls_2532_ = lean_ctor_get(v___x_2528_, 3);
v_valueMap_2533_ = lean_ctor_get(v___x_2528_, 4);
v_isSharedCheck_2545_ = !lean_is_exclusive(v___x_2528_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2535_ = v___x_2528_;
v_isShared_2536_ = v_isSharedCheck_2545_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_valueMap_2533_);
lean_inc(v_decls_2532_);
lean_inc(v_hasLetCache_2531_);
lean_inc(v_cacheClosed_2530_);
lean_inc(v_cache_2529_);
lean_dec(v___x_2528_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2545_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2537_; lean_object* v___x_2539_; 
lean_inc(v_a_2524_);
v___x_2537_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(v_cacheClosed_2530_, v_e_2480_, v_a_2524_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 1, v___x_2537_);
v___x_2539_ = v___x_2535_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v_cache_2529_);
lean_ctor_set(v_reuseFailAlloc_2544_, 1, v___x_2537_);
lean_ctor_set(v_reuseFailAlloc_2544_, 2, v_hasLetCache_2531_);
lean_ctor_set(v_reuseFailAlloc_2544_, 3, v_decls_2532_);
lean_ctor_set(v_reuseFailAlloc_2544_, 4, v_valueMap_2533_);
v___x_2539_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
lean_object* v___x_2540_; lean_object* v___x_2542_; 
v___x_2540_ = lean_st_ref_put(v___y_2481_, v___x_2539_);
if (v_isShared_2527_ == 0)
{
v___x_2542_ = v___x_2526_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_a_2524_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_2480_);
return v___x_2523_;
}
}
}
}
}
else
{
lean_object* v_a_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2555_; 
lean_dec_ref(v_e_2480_);
v_a_2548_ = lean_ctor_get(v___x_2506_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2550_ = v___x_2506_;
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_a_2548_);
lean_dec(v___x_2506_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2553_; 
if (v_isShared_2551_ == 0)
{
v___x_2553_ = v___x_2550_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_a_2548_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
return v___x_2553_;
}
}
}
}
else
{
lean_object* v_key_2556_; lean_object* v___x_2557_; lean_object* v_cache_2558_; lean_object* v___x_2559_; 
lean_inc_ref(v_e_2480_);
lean_inc_ref(v_xs_2479_);
v_key_2556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_2556_, 0, v_xs_2479_);
lean_ctor_set(v_key_2556_, 1, v_e_2480_);
v___x_2557_ = lean_st_ref_get(v___y_2481_);
v_cache_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc_ref(v_cache_2558_);
lean_dec(v___x_2557_);
v___x_2559_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(v_cache_2558_, v_key_2556_);
lean_dec_ref(v_cache_2558_);
if (lean_obj_tag(v___x_2559_) == 1)
{
lean_object* v_val_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2567_; 
lean_dec_ref_known(v_key_2556_, 2);
lean_dec_ref(v_e_2480_);
lean_dec_ref(v_xs_2479_);
v_val_2560_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2567_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2562_ = v___x_2559_;
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_val_2560_);
lean_dec(v___x_2559_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2563_ == 0)
{
lean_ctor_set_tag(v___x_2562_, 0);
v___x_2565_ = v___x_2562_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_val_2560_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
}
else
{
lean_object* v___x_2568_; 
lean_dec(v___x_2559_);
v___x_2568_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(v_xs_2479_, v_e_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2591_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2571_ = v___x_2568_;
v_isShared_2572_ = v_isSharedCheck_2591_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2568_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2591_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2573_; lean_object* v_cache_2574_; lean_object* v_cacheClosed_2575_; lean_object* v_hasLetCache_2576_; lean_object* v_decls_2577_; lean_object* v_valueMap_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2590_; 
v___x_2573_ = lean_st_ref_take(v___y_2481_);
v_cache_2574_ = lean_ctor_get(v___x_2573_, 0);
v_cacheClosed_2575_ = lean_ctor_get(v___x_2573_, 1);
v_hasLetCache_2576_ = lean_ctor_get(v___x_2573_, 2);
v_decls_2577_ = lean_ctor_get(v___x_2573_, 3);
v_valueMap_2578_ = lean_ctor_get(v___x_2573_, 4);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2580_ = v___x_2573_;
v_isShared_2581_ = v_isSharedCheck_2590_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_valueMap_2578_);
lean_inc(v_decls_2577_);
lean_inc(v_hasLetCache_2576_);
lean_inc(v_cacheClosed_2575_);
lean_inc(v_cache_2574_);
lean_dec(v___x_2573_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2590_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2582_; lean_object* v___x_2584_; 
lean_inc(v_a_2569_);
v___x_2582_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7___redArg(v_cache_2574_, v_key_2556_, v_a_2569_);
if (v_isShared_2581_ == 0)
{
lean_ctor_set(v___x_2580_, 0, v___x_2582_);
v___x_2584_ = v___x_2580_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2582_);
lean_ctor_set(v_reuseFailAlloc_2589_, 1, v_cacheClosed_2575_);
lean_ctor_set(v_reuseFailAlloc_2589_, 2, v_hasLetCache_2576_);
lean_ctor_set(v_reuseFailAlloc_2589_, 3, v_decls_2577_);
lean_ctor_set(v_reuseFailAlloc_2589_, 4, v_valueMap_2578_);
v___x_2584_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
lean_object* v___x_2585_; lean_object* v___x_2587_; 
v___x_2585_ = lean_st_ref_put(v___y_2481_, v___x_2584_);
if (v_isShared_2572_ == 0)
{
v___x_2587_ = v___x_2571_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v_a_2569_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_2556_, 2);
return v___x_2568_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___boxed(lean_object* v_xs_2592_, lean_object* v_e_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2592_, v_e_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
lean_dec(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec(v___y_2594_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___boxed(lean_object* v_xs_2603_, lean_object* v_e_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_){
_start:
{
lean_object* v_res_2613_; 
v_res_2613_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(v_xs_2603_, v_e_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_);
lean_dec(v___y_2611_);
lean_dec_ref(v___y_2610_);
lean_dec(v___y_2609_);
lean_dec_ref(v___y_2608_);
lean_dec(v___y_2607_);
lean_dec_ref(v___y_2606_);
lean_dec(v___y_2605_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5(lean_object* v_00_u03b1_2614_, lean_object* v_msg_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
lean_object* v___x_2624_; 
v___x_2624_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(v_msg_2615_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___boxed(lean_object* v_00_u03b1_2625_, lean_object* v_msg_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5(v_00_u03b1_2625_, v_msg_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec(v___y_2627_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6(lean_object* v_00_u03b2_2636_, lean_object* v_m_2637_, lean_object* v_a_2638_){
_start:
{
lean_object* v___x_2639_; 
v___x_2639_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(v_m_2637_, v_a_2638_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___boxed(lean_object* v_00_u03b2_2640_, lean_object* v_m_2641_, lean_object* v_a_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6(v_00_u03b2_2640_, v_m_2641_, v_a_2642_);
lean_dec_ref(v_a_2642_);
lean_dec_ref(v_m_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7(lean_object* v_00_u03b2_2644_, lean_object* v_m_2645_, lean_object* v_a_2646_, lean_object* v_b_2647_){
_start:
{
lean_object* v___x_2648_; 
v___x_2648_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7___redArg(v_m_2645_, v_a_2646_, v_b_2647_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7(lean_object* v_00_u03b2_2649_, lean_object* v_a_2650_, lean_object* v_x_2651_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(v_a_2650_, v_x_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___boxed(lean_object* v_00_u03b2_2653_, lean_object* v_a_2654_, lean_object* v_x_2655_){
_start:
{
lean_object* v_res_2656_; 
v_res_2656_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7(v_00_u03b2_2653_, v_a_2654_, v_x_2655_);
lean_dec(v_x_2655_);
lean_dec_ref(v_a_2654_);
return v_res_2656_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9(lean_object* v_00_u03b2_2657_, lean_object* v_a_2658_, lean_object* v_x_2659_){
_start:
{
uint8_t v___x_2660_; 
v___x_2660_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(v_a_2658_, v_x_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___boxed(lean_object* v_00_u03b2_2661_, lean_object* v_a_2662_, lean_object* v_x_2663_){
_start:
{
uint8_t v_res_2664_; lean_object* v_r_2665_; 
v_res_2664_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9(v_00_u03b2_2661_, v_a_2662_, v_x_2663_);
lean_dec(v_x_2663_);
lean_dec_ref(v_a_2662_);
v_r_2665_ = lean_box(v_res_2664_);
return v_r_2665_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10(lean_object* v_00_u03b2_2666_, lean_object* v_data_2667_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10___redArg(v_data_2667_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11(lean_object* v_00_u03b2_2669_, lean_object* v_a_2670_, lean_object* v_b_2671_, lean_object* v_x_2672_){
_start:
{
lean_object* v___x_2673_; 
v___x_2673_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(v_a_2670_, v_b_2671_, v_x_2672_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11(lean_object* v_00_u03b2_2674_, lean_object* v_i_2675_, lean_object* v_source_2676_, lean_object* v_target_2677_){
_start:
{
lean_object* v___x_2678_; 
v___x_2678_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11___redArg(v_i_2675_, v_source_2676_, v_target_2677_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12(lean_object* v_00_u03b2_2679_, lean_object* v_x_2680_, lean_object* v_x_2681_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12___redArg(v_x_2680_, v_x_2681_);
return v___x_2682_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2683_; 
v___x_2683_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2683_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(lean_object* v_msg_2684_, uint8_t v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_){
_start:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_11789__overap_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2688_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0);
v___x_2689_ = l_EStateM_instInhabited___redArg(v___x_2688_);
v___x_2690_ = l_instInhabitedReaderT___redArg(v___x_2689_);
v___x_2691_ = l_instInhabitedReaderT___redArg(v___x_2690_);
v___x_11789__overap_2692_ = lean_panic_fn_borrowed(v___x_2691_, v_msg_2684_);
lean_dec(v___x_2691_);
v___x_2693_ = lean_box(v___y_2685_);
lean_inc_ref(v___y_2686_);
v___x_2694_ = lean_apply_3(v___x_11789__overap_2692_, v___x_2693_, v___y_2686_, v___y_2687_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___boxed(lean_object* v_msg_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
uint8_t v___y_17577__boxed_2699_; lean_object* v_res_2700_; 
v___y_17577__boxed_2699_ = lean_unbox(v___y_2696_);
v_res_2700_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(v_msg_2695_, v___y_17577__boxed_2699_, v___y_2697_, v___y_2698_);
lean_dec_ref(v___y_2697_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(lean_object* v_idx_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2703_ = l_Lean_Expr_bvar___override(v_idx_2701_);
v___x_2704_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_2703_, v___y_2702_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4(lean_object* v_idx_2705_, uint8_t v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_){
_start:
{
lean_object* v___x_2709_; 
v___x_2709_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(v_idx_2705_, v___y_2708_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___boxed(lean_object* v_idx_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
uint8_t v___y_17605__boxed_2714_; lean_object* v_res_2715_; 
v___y_17605__boxed_2714_ = lean_unbox(v___y_2711_);
v_res_2715_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4(v_idx_2710_, v___y_17605__boxed_2714_, v___y_2712_, v___y_2713_);
lean_dec_ref(v___y_2712_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(lean_object* v_x_2716_, lean_object* v_t_2717_, lean_object* v_v_2718_, lean_object* v_b_2719_, uint8_t v_nondep_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v___y_2729_; lean_object* v___x_2732_; uint8_t v_debug_2733_; 
v___x_2732_ = lean_st_ref_get(v___y_2722_);
v_debug_2733_ = lean_ctor_get_uint8(v___x_2732_, sizeof(void*)*11);
lean_dec(v___x_2732_);
if (v_debug_2733_ == 0)
{
v___y_2729_ = v___y_2722_;
goto v___jp_2728_;
}
else
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_2717_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v___x_2735_; 
lean_dec_ref_known(v___x_2734_, 1);
v___x_2735_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_v_2718_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
if (lean_obj_tag(v___x_2735_) == 0)
{
lean_object* v___x_2736_; 
lean_dec_ref_known(v___x_2735_, 1);
v___x_2736_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_2719_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_dec_ref_known(v___x_2736_, 1);
v___y_2729_ = v___y_2722_;
goto v___jp_2728_;
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
lean_dec_ref(v_b_2719_);
lean_dec_ref(v_v_2718_);
lean_dec_ref(v_t_2717_);
lean_dec(v_x_2716_);
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___x_2736_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2736_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
v___x_2742_ = v___x_2739_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_a_2737_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
else
{
lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2752_; 
lean_dec_ref(v_b_2719_);
lean_dec_ref(v_v_2718_);
lean_dec_ref(v_t_2717_);
lean_dec(v_x_2716_);
v_a_2745_ = lean_ctor_get(v___x_2735_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2735_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2747_ = v___x_2735_;
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2735_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2750_; 
if (v_isShared_2748_ == 0)
{
v___x_2750_ = v___x_2747_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2745_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
else
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2760_; 
lean_dec_ref(v_b_2719_);
lean_dec_ref(v_v_2718_);
lean_dec_ref(v_t_2717_);
lean_dec(v_x_2716_);
v_a_2753_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2755_ = v___x_2734_;
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___x_2734_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2756_ == 0)
{
v___x_2758_ = v___x_2755_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_a_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
v___jp_2728_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2730_ = l_Lean_Expr_letE___override(v_x_2716_, v_t_2717_, v_v_2718_, v_b_2719_, v_nondep_2720_);
v___x_2731_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2730_, v___y_2729_);
return v___x_2731_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg___boxed(lean_object* v_x_2761_, lean_object* v_t_2762_, lean_object* v_v_2763_, lean_object* v_b_2764_, lean_object* v_nondep_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
uint8_t v_nondep_boxed_2773_; lean_object* v_res_2774_; 
v_nondep_boxed_2773_ = lean_unbox(v_nondep_2765_);
v_res_2774_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(v_x_2761_, v_t_2762_, v_v_2763_, v_b_2764_, v_nondep_boxed_2773_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v___y_2768_);
lean_dec(v___y_2767_);
lean_dec_ref(v___y_2766_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6(lean_object* v_x_2775_, lean_object* v_t_2776_, lean_object* v_v_2777_, lean_object* v_b_2778_, uint8_t v_nondep_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_){
_start:
{
lean_object* v___x_2788_; 
v___x_2788_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(v_x_2775_, v_t_2776_, v_v_2777_, v_b_2778_, v_nondep_2779_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___boxed(lean_object* v_x_2789_, lean_object* v_t_2790_, lean_object* v_v_2791_, lean_object* v_b_2792_, lean_object* v_nondep_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_){
_start:
{
uint8_t v_nondep_boxed_2802_; lean_object* v_res_2803_; 
v_nondep_boxed_2802_ = lean_unbox(v_nondep_2793_);
v_res_2803_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6(v_x_2789_, v_t_2790_, v_v_2791_, v_b_2792_, v_nondep_boxed_2802_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_);
lean_dec(v___y_2800_);
lean_dec_ref(v___y_2799_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2797_);
lean_dec(v___y_2796_);
lean_dec_ref(v___y_2795_);
lean_dec(v___y_2794_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(lean_object* v_a_2804_, lean_object* v_x_2805_){
_start:
{
if (lean_obj_tag(v_x_2805_) == 0)
{
lean_object* v___x_2806_; 
v___x_2806_ = lean_box(0);
return v___x_2806_;
}
else
{
lean_object* v_key_2807_; lean_object* v_value_2808_; lean_object* v_tail_2809_; uint8_t v___x_2810_; 
v_key_2807_ = lean_ctor_get(v_x_2805_, 0);
v_value_2808_ = lean_ctor_get(v_x_2805_, 1);
v_tail_2809_ = lean_ctor_get(v_x_2805_, 2);
v___x_2810_ = l_Lean_instBEqFVarId_beq(v_key_2807_, v_a_2804_);
if (v___x_2810_ == 0)
{
v_x_2805_ = v_tail_2809_;
goto _start;
}
else
{
lean_object* v___x_2812_; 
lean_inc(v_value_2808_);
v___x_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2812_, 0, v_value_2808_);
return v___x_2812_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg___boxed(lean_object* v_a_2813_, lean_object* v_x_2814_){
_start:
{
lean_object* v_res_2815_; 
v_res_2815_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(v_a_2813_, v_x_2814_);
lean_dec(v_x_2814_);
lean_dec(v_a_2813_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(lean_object* v_m_2816_, lean_object* v_a_2817_){
_start:
{
lean_object* v_buckets_2818_; lean_object* v___x_2819_; uint64_t v___x_2820_; uint64_t v___x_2821_; uint64_t v___x_2822_; uint64_t v_fold_2823_; uint64_t v___x_2824_; uint64_t v___x_2825_; uint64_t v___x_2826_; size_t v___x_2827_; size_t v___x_2828_; size_t v___x_2829_; size_t v___x_2830_; size_t v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v_buckets_2818_ = lean_ctor_get(v_m_2816_, 1);
v___x_2819_ = lean_array_get_size(v_buckets_2818_);
v___x_2820_ = l_Lean_instHashableFVarId_hash(v_a_2817_);
v___x_2821_ = 32ULL;
v___x_2822_ = lean_uint64_shift_right(v___x_2820_, v___x_2821_);
v_fold_2823_ = lean_uint64_xor(v___x_2820_, v___x_2822_);
v___x_2824_ = 16ULL;
v___x_2825_ = lean_uint64_shift_right(v_fold_2823_, v___x_2824_);
v___x_2826_ = lean_uint64_xor(v_fold_2823_, v___x_2825_);
v___x_2827_ = lean_uint64_to_usize(v___x_2826_);
v___x_2828_ = lean_usize_of_nat(v___x_2819_);
v___x_2829_ = ((size_t)1ULL);
v___x_2830_ = lean_usize_sub(v___x_2828_, v___x_2829_);
v___x_2831_ = lean_usize_land(v___x_2827_, v___x_2830_);
v___x_2832_ = lean_array_uget_borrowed(v_buckets_2818_, v___x_2831_);
v___x_2833_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(v_a_2817_, v___x_2832_);
return v___x_2833_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg___boxed(lean_object* v_m_2834_, lean_object* v_a_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v_m_2834_, v_a_2835_);
lean_dec(v_a_2835_);
lean_dec_ref(v_m_2834_);
return v_res_2836_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2(void){
_start:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2839_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__1));
v___x_2840_ = lean_unsigned_to_nat(10u);
v___x_2841_ = lean_unsigned_to_nat(236u);
v___x_2842_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__0));
v___x_2843_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0));
v___x_2844_ = l_mkPanicMessageWithDecl(v___x_2843_, v___x_2842_, v___x_2841_, v___x_2840_, v___x_2839_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(lean_object* v___x_2845_, lean_object* v_i_2846_, lean_object* v_e_2847_, lean_object* v_offset_2848_, lean_object* v___y_2849_, uint8_t v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
switch(lean_obj_tag(v_e_2847_))
{
case 5:
{
lean_object* v_fn_2853_; lean_object* v_arg_2854_; lean_object* v___x_2855_; 
v_fn_2853_ = lean_ctor_get(v_e_2847_, 0);
v_arg_2854_ = lean_ctor_get(v_e_2847_, 1);
lean_inc(v_offset_2848_);
lean_inc_ref(v_fn_2853_);
v___x_2855_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_fn_2853_, v_offset_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v_a_2856_; lean_object* v_a_2857_; lean_object* v_fst_2858_; lean_object* v_snd_2859_; lean_object* v___x_2860_; 
v_a_2856_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_a_2856_);
v_a_2857_ = lean_ctor_get(v___x_2855_, 1);
lean_inc(v_a_2857_);
lean_dec_ref_known(v___x_2855_, 2);
v_fst_2858_ = lean_ctor_get(v_a_2856_, 0);
lean_inc(v_fst_2858_);
v_snd_2859_ = lean_ctor_get(v_a_2856_, 1);
lean_inc(v_snd_2859_);
lean_dec(v_a_2856_);
lean_inc_ref(v_arg_2854_);
v___x_2860_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_arg_2854_, v_offset_2848_, v_snd_2859_, v___y_2850_, v___y_2851_, v_a_2857_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v_a_2861_; lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2886_; 
v_a_2861_ = lean_ctor_get(v___x_2860_, 0);
v_a_2862_ = lean_ctor_get(v___x_2860_, 1);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2864_ = v___x_2860_;
v_isShared_2865_ = v_isSharedCheck_2886_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_inc(v_a_2861_);
lean_dec(v___x_2860_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2886_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v_fst_2866_; lean_object* v_snd_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2885_; 
v_fst_2866_ = lean_ctor_get(v_a_2861_, 0);
v_snd_2867_ = lean_ctor_get(v_a_2861_, 1);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_a_2861_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2869_ = v_a_2861_;
v_isShared_2870_ = v_isSharedCheck_2885_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_snd_2867_);
lean_inc(v_fst_2866_);
lean_dec(v_a_2861_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2885_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
size_t v___x_2871_; size_t v___x_2872_; uint8_t v___x_2873_; 
v___x_2871_ = lean_ptr_addr(v_fn_2853_);
v___x_2872_ = lean_ptr_addr(v_fst_2858_);
v___x_2873_ = lean_usize_dec_eq(v___x_2871_, v___x_2872_);
if (v___x_2873_ == 0)
{
lean_object* v___x_2874_; 
lean_del_object(v___x_2869_);
lean_del_object(v___x_2864_);
lean_dec_ref_known(v_e_2847_, 2);
v___x_2874_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_fst_2858_, v_fst_2866_, v_snd_2867_, v___y_2850_, v___y_2851_, v_a_2862_);
return v___x_2874_;
}
else
{
size_t v___x_2875_; size_t v___x_2876_; uint8_t v___x_2877_; 
v___x_2875_ = lean_ptr_addr(v_arg_2854_);
v___x_2876_ = lean_ptr_addr(v_fst_2866_);
v___x_2877_ = lean_usize_dec_eq(v___x_2875_, v___x_2876_);
if (v___x_2877_ == 0)
{
lean_object* v___x_2878_; 
lean_del_object(v___x_2869_);
lean_del_object(v___x_2864_);
lean_dec_ref_known(v_e_2847_, 2);
v___x_2878_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_fst_2858_, v_fst_2866_, v_snd_2867_, v___y_2850_, v___y_2851_, v_a_2862_);
return v___x_2878_;
}
else
{
lean_object* v___x_2880_; 
lean_dec(v_fst_2866_);
lean_dec(v_fst_2858_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 0, v_e_2847_);
v___x_2880_ = v___x_2869_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_e_2847_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v_snd_2867_);
v___x_2880_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v___x_2882_; 
if (v_isShared_2865_ == 0)
{
lean_ctor_set(v___x_2864_, 0, v___x_2880_);
v___x_2882_ = v___x_2864_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v___x_2880_);
lean_ctor_set(v_reuseFailAlloc_2883_, 1, v_a_2862_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_2858_);
lean_dec_ref_known(v_e_2847_, 2);
return v___x_2860_;
}
}
else
{
lean_dec_ref_known(v_e_2847_, 2);
lean_dec(v_offset_2848_);
return v___x_2855_;
}
}
case 6:
{
lean_object* v_binderName_2887_; lean_object* v_binderType_2888_; lean_object* v_body_2889_; uint8_t v_binderInfo_2890_; lean_object* v___x_2891_; 
v_binderName_2887_ = lean_ctor_get(v_e_2847_, 0);
v_binderType_2888_ = lean_ctor_get(v_e_2847_, 1);
v_body_2889_ = lean_ctor_get(v_e_2847_, 2);
v_binderInfo_2890_ = lean_ctor_get_uint8(v_e_2847_, sizeof(void*)*3 + 8);
lean_inc(v_offset_2848_);
lean_inc_ref(v_binderType_2888_);
v___x_2891_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_binderType_2888_, v_offset_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v_a_2892_; lean_object* v_a_2893_; lean_object* v_fst_2894_; lean_object* v_snd_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v_a_2892_ = lean_ctor_get(v___x_2891_, 0);
lean_inc(v_a_2892_);
v_a_2893_ = lean_ctor_get(v___x_2891_, 1);
lean_inc(v_a_2893_);
lean_dec_ref_known(v___x_2891_, 2);
v_fst_2894_ = lean_ctor_get(v_a_2892_, 0);
lean_inc(v_fst_2894_);
v_snd_2895_ = lean_ctor_get(v_a_2892_, 1);
lean_inc(v_snd_2895_);
lean_dec(v_a_2892_);
v___x_2896_ = lean_unsigned_to_nat(1u);
v___x_2897_ = lean_nat_add(v_offset_2848_, v___x_2896_);
lean_dec(v_offset_2848_);
lean_inc_ref(v_body_2889_);
v___x_2898_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_body_2889_, v___x_2897_, v_snd_2895_, v___y_2850_, v___y_2851_, v_a_2893_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v_a_2899_; lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2924_; 
v_a_2899_ = lean_ctor_get(v___x_2898_, 0);
v_a_2900_ = lean_ctor_get(v___x_2898_, 1);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2898_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2902_ = v___x_2898_;
v_isShared_2903_ = v_isSharedCheck_2924_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_inc(v_a_2899_);
lean_dec(v___x_2898_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2924_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v_fst_2904_; lean_object* v_snd_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2923_; 
v_fst_2904_ = lean_ctor_get(v_a_2899_, 0);
v_snd_2905_ = lean_ctor_get(v_a_2899_, 1);
v_isSharedCheck_2923_ = !lean_is_exclusive(v_a_2899_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2907_ = v_a_2899_;
v_isShared_2908_ = v_isSharedCheck_2923_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_snd_2905_);
lean_inc(v_fst_2904_);
lean_dec(v_a_2899_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2923_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
size_t v___x_2909_; size_t v___x_2910_; uint8_t v___x_2911_; 
v___x_2909_ = lean_ptr_addr(v_binderType_2888_);
v___x_2910_ = lean_ptr_addr(v_fst_2894_);
v___x_2911_ = lean_usize_dec_eq(v___x_2909_, v___x_2910_);
if (v___x_2911_ == 0)
{
lean_object* v___x_2912_; 
lean_inc(v_binderName_2887_);
lean_del_object(v___x_2907_);
lean_del_object(v___x_2902_);
lean_dec_ref_known(v_e_2847_, 3);
v___x_2912_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_binderName_2887_, v_binderInfo_2890_, v_fst_2894_, v_fst_2904_, v_snd_2905_, v___y_2850_, v___y_2851_, v_a_2900_);
return v___x_2912_;
}
else
{
size_t v___x_2913_; size_t v___x_2914_; uint8_t v___x_2915_; 
v___x_2913_ = lean_ptr_addr(v_body_2889_);
v___x_2914_ = lean_ptr_addr(v_fst_2904_);
v___x_2915_ = lean_usize_dec_eq(v___x_2913_, v___x_2914_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; 
lean_inc(v_binderName_2887_);
lean_del_object(v___x_2907_);
lean_del_object(v___x_2902_);
lean_dec_ref_known(v_e_2847_, 3);
v___x_2916_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_binderName_2887_, v_binderInfo_2890_, v_fst_2894_, v_fst_2904_, v_snd_2905_, v___y_2850_, v___y_2851_, v_a_2900_);
return v___x_2916_;
}
else
{
lean_object* v___x_2918_; 
lean_dec(v_fst_2904_);
lean_dec(v_fst_2894_);
if (v_isShared_2908_ == 0)
{
lean_ctor_set(v___x_2907_, 0, v_e_2847_);
v___x_2918_ = v___x_2907_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_e_2847_);
lean_ctor_set(v_reuseFailAlloc_2922_, 1, v_snd_2905_);
v___x_2918_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
lean_object* v___x_2920_; 
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 0, v___x_2918_);
v___x_2920_ = v___x_2902_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v___x_2918_);
lean_ctor_set(v_reuseFailAlloc_2921_, 1, v_a_2900_);
v___x_2920_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2919_;
}
v_reusejp_2919_:
{
return v___x_2920_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_2894_);
lean_dec_ref_known(v_e_2847_, 3);
return v___x_2898_;
}
}
else
{
lean_dec_ref_known(v_e_2847_, 3);
lean_dec(v_offset_2848_);
return v___x_2891_;
}
}
case 7:
{
lean_object* v_binderName_2925_; lean_object* v_binderType_2926_; lean_object* v_body_2927_; uint8_t v_binderInfo_2928_; lean_object* v___x_2929_; 
v_binderName_2925_ = lean_ctor_get(v_e_2847_, 0);
v_binderType_2926_ = lean_ctor_get(v_e_2847_, 1);
v_body_2927_ = lean_ctor_get(v_e_2847_, 2);
v_binderInfo_2928_ = lean_ctor_get_uint8(v_e_2847_, sizeof(void*)*3 + 8);
lean_inc(v_offset_2848_);
lean_inc_ref(v_binderType_2926_);
v___x_2929_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_binderType_2926_, v_offset_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v_a_2930_; lean_object* v_a_2931_; lean_object* v_fst_2932_; lean_object* v_snd_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v_a_2930_ = lean_ctor_get(v___x_2929_, 0);
lean_inc(v_a_2930_);
v_a_2931_ = lean_ctor_get(v___x_2929_, 1);
lean_inc(v_a_2931_);
lean_dec_ref_known(v___x_2929_, 2);
v_fst_2932_ = lean_ctor_get(v_a_2930_, 0);
lean_inc(v_fst_2932_);
v_snd_2933_ = lean_ctor_get(v_a_2930_, 1);
lean_inc(v_snd_2933_);
lean_dec(v_a_2930_);
v___x_2934_ = lean_unsigned_to_nat(1u);
v___x_2935_ = lean_nat_add(v_offset_2848_, v___x_2934_);
lean_dec(v_offset_2848_);
lean_inc_ref(v_body_2927_);
v___x_2936_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_body_2927_, v___x_2935_, v_snd_2933_, v___y_2850_, v___y_2851_, v_a_2931_);
if (lean_obj_tag(v___x_2936_) == 0)
{
lean_object* v_a_2937_; lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2962_; 
v_a_2937_ = lean_ctor_get(v___x_2936_, 0);
v_a_2938_ = lean_ctor_get(v___x_2936_, 1);
v_isSharedCheck_2962_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2940_ = v___x_2936_;
v_isShared_2941_ = v_isSharedCheck_2962_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_inc(v_a_2937_);
lean_dec(v___x_2936_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2962_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v_fst_2942_; lean_object* v_snd_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2961_; 
v_fst_2942_ = lean_ctor_get(v_a_2937_, 0);
v_snd_2943_ = lean_ctor_get(v_a_2937_, 1);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_a_2937_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2945_ = v_a_2937_;
v_isShared_2946_ = v_isSharedCheck_2961_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_snd_2943_);
lean_inc(v_fst_2942_);
lean_dec(v_a_2937_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2961_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
size_t v___x_2947_; size_t v___x_2948_; uint8_t v___x_2949_; 
v___x_2947_ = lean_ptr_addr(v_binderType_2926_);
v___x_2948_ = lean_ptr_addr(v_fst_2932_);
v___x_2949_ = lean_usize_dec_eq(v___x_2947_, v___x_2948_);
if (v___x_2949_ == 0)
{
lean_object* v___x_2950_; 
lean_inc(v_binderName_2925_);
lean_del_object(v___x_2945_);
lean_del_object(v___x_2940_);
lean_dec_ref_known(v_e_2847_, 3);
v___x_2950_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_binderName_2925_, v_binderInfo_2928_, v_fst_2932_, v_fst_2942_, v_snd_2943_, v___y_2850_, v___y_2851_, v_a_2938_);
return v___x_2950_;
}
else
{
size_t v___x_2951_; size_t v___x_2952_; uint8_t v___x_2953_; 
v___x_2951_ = lean_ptr_addr(v_body_2927_);
v___x_2952_ = lean_ptr_addr(v_fst_2942_);
v___x_2953_ = lean_usize_dec_eq(v___x_2951_, v___x_2952_);
if (v___x_2953_ == 0)
{
lean_object* v___x_2954_; 
lean_inc(v_binderName_2925_);
lean_del_object(v___x_2945_);
lean_del_object(v___x_2940_);
lean_dec_ref_known(v_e_2847_, 3);
v___x_2954_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_binderName_2925_, v_binderInfo_2928_, v_fst_2932_, v_fst_2942_, v_snd_2943_, v___y_2850_, v___y_2851_, v_a_2938_);
return v___x_2954_;
}
else
{
lean_object* v___x_2956_; 
lean_dec(v_fst_2942_);
lean_dec(v_fst_2932_);
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 0, v_e_2847_);
v___x_2956_ = v___x_2945_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_e_2847_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v_snd_2943_);
v___x_2956_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
lean_object* v___x_2958_; 
if (v_isShared_2941_ == 0)
{
lean_ctor_set(v___x_2940_, 0, v___x_2956_);
v___x_2958_ = v___x_2940_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2956_);
lean_ctor_set(v_reuseFailAlloc_2959_, 1, v_a_2938_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_2932_);
lean_dec_ref_known(v_e_2847_, 3);
return v___x_2936_;
}
}
else
{
lean_dec_ref_known(v_e_2847_, 3);
lean_dec(v_offset_2848_);
return v___x_2929_;
}
}
case 8:
{
lean_object* v_declName_2963_; lean_object* v_type_2964_; lean_object* v_value_2965_; lean_object* v_body_2966_; uint8_t v_nondep_2967_; lean_object* v___x_2968_; 
v_declName_2963_ = lean_ctor_get(v_e_2847_, 0);
v_type_2964_ = lean_ctor_get(v_e_2847_, 1);
v_value_2965_ = lean_ctor_get(v_e_2847_, 2);
v_body_2966_ = lean_ctor_get(v_e_2847_, 3);
v_nondep_2967_ = lean_ctor_get_uint8(v_e_2847_, sizeof(void*)*4 + 8);
lean_inc(v_offset_2848_);
lean_inc_ref(v_type_2964_);
v___x_2968_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_type_2964_, v_offset_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v_a_2969_; lean_object* v_a_2970_; lean_object* v_fst_2971_; lean_object* v_snd_2972_; lean_object* v___x_2973_; 
v_a_2969_ = lean_ctor_get(v___x_2968_, 0);
lean_inc(v_a_2969_);
v_a_2970_ = lean_ctor_get(v___x_2968_, 1);
lean_inc(v_a_2970_);
lean_dec_ref_known(v___x_2968_, 2);
v_fst_2971_ = lean_ctor_get(v_a_2969_, 0);
lean_inc(v_fst_2971_);
v_snd_2972_ = lean_ctor_get(v_a_2969_, 1);
lean_inc(v_snd_2972_);
lean_dec(v_a_2969_);
lean_inc(v_offset_2848_);
lean_inc_ref(v_value_2965_);
v___x_2973_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_value_2965_, v_offset_2848_, v_snd_2972_, v___y_2850_, v___y_2851_, v_a_2970_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v_a_2975_; lean_object* v_fst_2976_; lean_object* v_snd_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2974_);
v_a_2975_ = lean_ctor_get(v___x_2973_, 1);
lean_inc(v_a_2975_);
lean_dec_ref_known(v___x_2973_, 2);
v_fst_2976_ = lean_ctor_get(v_a_2974_, 0);
lean_inc(v_fst_2976_);
v_snd_2977_ = lean_ctor_get(v_a_2974_, 1);
lean_inc(v_snd_2977_);
lean_dec(v_a_2974_);
v___x_2978_ = lean_unsigned_to_nat(1u);
v___x_2979_ = lean_nat_add(v_offset_2848_, v___x_2978_);
lean_dec(v_offset_2848_);
lean_inc_ref(v_body_2966_);
v___x_2980_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_body_2966_, v___x_2979_, v_snd_2977_, v___y_2850_, v___y_2851_, v_a_2975_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_3010_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
v_a_2982_ = lean_ctor_get(v___x_2980_, 1);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_2984_ = v___x_2980_;
v_isShared_2985_ = v_isSharedCheck_3010_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_inc(v_a_2981_);
lean_dec(v___x_2980_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_3010_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v_fst_2986_; lean_object* v_snd_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_3009_; 
v_fst_2986_ = lean_ctor_get(v_a_2981_, 0);
v_snd_2987_ = lean_ctor_get(v_a_2981_, 1);
v_isSharedCheck_3009_ = !lean_is_exclusive(v_a_2981_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_2989_ = v_a_2981_;
v_isShared_2990_ = v_isSharedCheck_3009_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_snd_2987_);
lean_inc(v_fst_2986_);
lean_dec(v_a_2981_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_3009_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
size_t v___x_2991_; size_t v___x_2992_; uint8_t v___x_2993_; 
v___x_2991_ = lean_ptr_addr(v_type_2964_);
v___x_2992_ = lean_ptr_addr(v_fst_2971_);
v___x_2993_ = lean_usize_dec_eq(v___x_2991_, v___x_2992_);
if (v___x_2993_ == 0)
{
lean_object* v___x_2994_; 
lean_inc(v_declName_2963_);
lean_del_object(v___x_2989_);
lean_del_object(v___x_2984_);
lean_dec_ref_known(v_e_2847_, 4);
v___x_2994_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_2963_, v_fst_2971_, v_fst_2976_, v_fst_2986_, v_nondep_2967_, v_snd_2987_, v___y_2850_, v___y_2851_, v_a_2982_);
return v___x_2994_;
}
else
{
size_t v___x_2995_; size_t v___x_2996_; uint8_t v___x_2997_; 
v___x_2995_ = lean_ptr_addr(v_value_2965_);
v___x_2996_ = lean_ptr_addr(v_fst_2976_);
v___x_2997_ = lean_usize_dec_eq(v___x_2995_, v___x_2996_);
if (v___x_2997_ == 0)
{
lean_object* v___x_2998_; 
lean_inc(v_declName_2963_);
lean_del_object(v___x_2989_);
lean_del_object(v___x_2984_);
lean_dec_ref_known(v_e_2847_, 4);
v___x_2998_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_2963_, v_fst_2971_, v_fst_2976_, v_fst_2986_, v_nondep_2967_, v_snd_2987_, v___y_2850_, v___y_2851_, v_a_2982_);
return v___x_2998_;
}
else
{
size_t v___x_2999_; size_t v___x_3000_; uint8_t v___x_3001_; 
v___x_2999_ = lean_ptr_addr(v_body_2966_);
v___x_3000_ = lean_ptr_addr(v_fst_2986_);
v___x_3001_ = lean_usize_dec_eq(v___x_2999_, v___x_3000_);
if (v___x_3001_ == 0)
{
lean_object* v___x_3002_; 
lean_inc(v_declName_2963_);
lean_del_object(v___x_2989_);
lean_del_object(v___x_2984_);
lean_dec_ref_known(v_e_2847_, 4);
v___x_3002_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_2963_, v_fst_2971_, v_fst_2976_, v_fst_2986_, v_nondep_2967_, v_snd_2987_, v___y_2850_, v___y_2851_, v_a_2982_);
return v___x_3002_;
}
else
{
lean_object* v___x_3004_; 
lean_dec(v_fst_2986_);
lean_dec(v_fst_2976_);
lean_dec(v_fst_2971_);
if (v_isShared_2990_ == 0)
{
lean_ctor_set(v___x_2989_, 0, v_e_2847_);
v___x_3004_ = v___x_2989_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_e_2847_);
lean_ctor_set(v_reuseFailAlloc_3008_, 1, v_snd_2987_);
v___x_3004_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
lean_object* v___x_3006_; 
if (v_isShared_2985_ == 0)
{
lean_ctor_set(v___x_2984_, 0, v___x_3004_);
v___x_3006_ = v___x_2984_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v___x_3004_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v_a_2982_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
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
lean_dec(v_fst_2976_);
lean_dec(v_fst_2971_);
lean_dec_ref_known(v_e_2847_, 4);
return v___x_2980_;
}
}
else
{
lean_dec(v_fst_2971_);
lean_dec_ref_known(v_e_2847_, 4);
lean_dec(v_offset_2848_);
return v___x_2973_;
}
}
else
{
lean_dec_ref_known(v_e_2847_, 4);
lean_dec(v_offset_2848_);
return v___x_2968_;
}
}
case 10:
{
lean_object* v_data_3011_; lean_object* v_expr_3012_; lean_object* v___x_3013_; 
v_data_3011_ = lean_ctor_get(v_e_2847_, 0);
v_expr_3012_ = lean_ctor_get(v_e_2847_, 1);
lean_inc_ref(v_expr_3012_);
v___x_3013_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_expr_3012_, v_offset_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3035_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
v_a_3015_ = lean_ctor_get(v___x_3013_, 1);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3017_ = v___x_3013_;
v_isShared_3018_ = v_isSharedCheck_3035_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_inc(v_a_3014_);
lean_dec(v___x_3013_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3035_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v_fst_3019_; lean_object* v_snd_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3034_; 
v_fst_3019_ = lean_ctor_get(v_a_3014_, 0);
v_snd_3020_ = lean_ctor_get(v_a_3014_, 1);
v_isSharedCheck_3034_ = !lean_is_exclusive(v_a_3014_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3022_ = v_a_3014_;
v_isShared_3023_ = v_isSharedCheck_3034_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_snd_3020_);
lean_inc(v_fst_3019_);
lean_dec(v_a_3014_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3034_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
size_t v___x_3024_; size_t v___x_3025_; uint8_t v___x_3026_; 
v___x_3024_ = lean_ptr_addr(v_expr_3012_);
v___x_3025_ = lean_ptr_addr(v_fst_3019_);
v___x_3026_ = lean_usize_dec_eq(v___x_3024_, v___x_3025_);
if (v___x_3026_ == 0)
{
lean_object* v___x_3027_; 
lean_inc(v_data_3011_);
lean_del_object(v___x_3022_);
lean_del_object(v___x_3017_);
lean_dec_ref_known(v_e_2847_, 2);
v___x_3027_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(v_data_3011_, v_fst_3019_, v_snd_3020_, v___y_2850_, v___y_2851_, v_a_3015_);
return v___x_3027_;
}
else
{
lean_object* v___x_3029_; 
lean_dec(v_fst_3019_);
if (v_isShared_3023_ == 0)
{
lean_ctor_set(v___x_3022_, 0, v_e_2847_);
v___x_3029_ = v___x_3022_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_e_2847_);
lean_ctor_set(v_reuseFailAlloc_3033_, 1, v_snd_3020_);
v___x_3029_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
lean_object* v___x_3031_; 
if (v_isShared_3018_ == 0)
{
lean_ctor_set(v___x_3017_, 0, v___x_3029_);
v___x_3031_ = v___x_3017_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v___x_3029_);
lean_ctor_set(v_reuseFailAlloc_3032_, 1, v_a_3015_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_2847_, 2);
return v___x_3013_;
}
}
case 11:
{
lean_object* v_typeName_3036_; lean_object* v_idx_3037_; lean_object* v_struct_3038_; lean_object* v___x_3039_; 
v_typeName_3036_ = lean_ctor_get(v_e_2847_, 0);
v_idx_3037_ = lean_ctor_get(v_e_2847_, 1);
v_struct_3038_ = lean_ctor_get(v_e_2847_, 2);
lean_inc_ref(v_struct_3038_);
v___x_3039_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2845_, v_i_2846_, v_struct_3038_, v_offset_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3061_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
v_a_3041_ = lean_ctor_get(v___x_3039_, 1);
v_isSharedCheck_3061_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3043_ = v___x_3039_;
v_isShared_3044_ = v_isSharedCheck_3061_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_inc(v_a_3040_);
lean_dec(v___x_3039_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3061_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v_fst_3045_; lean_object* v_snd_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3060_; 
v_fst_3045_ = lean_ctor_get(v_a_3040_, 0);
v_snd_3046_ = lean_ctor_get(v_a_3040_, 1);
v_isSharedCheck_3060_ = !lean_is_exclusive(v_a_3040_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3048_ = v_a_3040_;
v_isShared_3049_ = v_isSharedCheck_3060_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_snd_3046_);
lean_inc(v_fst_3045_);
lean_dec(v_a_3040_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3060_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
size_t v___x_3050_; size_t v___x_3051_; uint8_t v___x_3052_; 
v___x_3050_ = lean_ptr_addr(v_struct_3038_);
v___x_3051_ = lean_ptr_addr(v_fst_3045_);
v___x_3052_ = lean_usize_dec_eq(v___x_3050_, v___x_3051_);
if (v___x_3052_ == 0)
{
lean_object* v___x_3053_; 
lean_inc(v_idx_3037_);
lean_inc(v_typeName_3036_);
lean_del_object(v___x_3048_);
lean_del_object(v___x_3043_);
lean_dec_ref_known(v_e_2847_, 3);
v___x_3053_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(v_typeName_3036_, v_idx_3037_, v_fst_3045_, v_snd_3046_, v___y_2850_, v___y_2851_, v_a_3041_);
return v___x_3053_;
}
else
{
lean_object* v___x_3055_; 
lean_dec(v_fst_3045_);
if (v_isShared_3049_ == 0)
{
lean_ctor_set(v___x_3048_, 0, v_e_2847_);
v___x_3055_ = v___x_3048_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_e_2847_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v_snd_3046_);
v___x_3055_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
lean_object* v___x_3057_; 
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 0, v___x_3055_);
v___x_3057_ = v___x_3043_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v___x_3055_);
lean_ctor_set(v_reuseFailAlloc_3058_, 1, v_a_3041_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_2847_, 3);
return v___x_3039_;
}
}
default: 
{
lean_object* v___x_3062_; lean_object* v___x_3063_; 
lean_dec(v_offset_2848_);
lean_dec_ref(v_e_2847_);
v___x_3062_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3);
v___x_3063_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(v___x_3062_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
return v___x_3063_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(lean_object* v___x_3064_, lean_object* v_i_3065_, lean_object* v_e_3066_, lean_object* v_offset_3067_, lean_object* v___y_3068_, uint8_t v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v_key_3072_; lean_object* v_a_3074_; lean_object* v___x_3087_; 
lean_inc(v_offset_3067_);
lean_inc_ref(v_e_3066_);
v_key_3072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_3072_, 0, v_e_3066_);
lean_ctor_set(v_key_3072_, 1, v_offset_3067_);
v___x_3087_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(v___y_3068_, v_key_3072_);
if (lean_obj_tag(v___x_3087_) == 1)
{
lean_object* v_val_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
lean_dec_ref_known(v_key_3072_, 2);
lean_dec(v_offset_3067_);
lean_dec_ref(v_e_3066_);
v_val_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc(v_val_3088_);
lean_dec_ref_known(v___x_3087_, 1);
v___x_3089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3089_, 0, v_val_3088_);
lean_ctor_set(v___x_3089_, 1, v___y_3068_);
v___x_3090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
lean_ctor_set(v___x_3090_, 1, v___y_3071_);
return v___x_3090_;
}
else
{
lean_dec(v___x_3087_);
switch(lean_obj_tag(v_e_3066_))
{
case 1:
{
lean_object* v_fvarId_3091_; lean_object* v___x_3092_; 
v_fvarId_3091_ = lean_ctor_get(v_e_3066_, 0);
v___x_3092_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v___x_3064_, v_fvarId_3091_);
if (lean_obj_tag(v___x_3092_) == 1)
{
lean_object* v_val_3093_; uint8_t v___x_3094_; 
v_val_3093_ = lean_ctor_get(v___x_3092_, 0);
lean_inc(v_val_3093_);
lean_dec_ref_known(v___x_3092_, 1);
v___x_3094_ = lean_nat_dec_lt(v_val_3093_, v_i_3065_);
if (v___x_3094_ == 0)
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
lean_dec(v_val_3093_);
v___x_3095_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2);
v___x_3096_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(v___x_3095_, v___y_3069_, v___y_3070_, v___y_3071_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_object* v_a_3097_; 
v_a_3097_ = lean_ctor_get(v___x_3096_, 0);
lean_inc(v_a_3097_);
if (lean_obj_tag(v_a_3097_) == 1)
{
lean_object* v_a_3098_; lean_object* v_val_3099_; lean_object* v___x_3100_; 
lean_dec_ref_known(v_e_3066_, 1);
lean_dec(v_offset_3067_);
v_a_3098_ = lean_ctor_get(v___x_3096_, 1);
lean_inc(v_a_3098_);
lean_dec_ref_known(v___x_3096_, 2);
v_val_3099_ = lean_ctor_get(v_a_3097_, 0);
lean_inc(v_val_3099_);
lean_dec_ref_known(v_a_3097_, 1);
v___x_3100_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_val_3099_, v___y_3068_, v___y_3069_, v___y_3070_, v_a_3098_);
return v___x_3100_;
}
else
{
lean_object* v_a_3101_; 
lean_dec(v_a_3097_);
v_a_3101_ = lean_ctor_get(v___x_3096_, 1);
lean_inc(v_a_3101_);
lean_dec_ref_known(v___x_3096_, 2);
v_a_3074_ = v_a_3101_;
goto v___jp_3073_;
}
}
else
{
lean_object* v_a_3102_; lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
lean_dec_ref_known(v_e_3066_, 1);
lean_dec_ref_known(v_key_3072_, 2);
lean_dec_ref(v___y_3068_);
lean_dec(v_offset_3067_);
v_a_3102_ = lean_ctor_get(v___x_3096_, 0);
v_a_3103_ = lean_ctor_get(v___x_3096_, 1);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_3096_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_inc(v_a_3102_);
lean_dec(v___x_3096_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3102_);
lean_ctor_set(v_reuseFailAlloc_3109_, 1, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
else
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
lean_dec_ref_known(v_e_3066_, 1);
v___x_3111_ = lean_nat_add(v_offset_3067_, v_i_3065_);
lean_dec(v_offset_3067_);
v___x_3112_ = lean_nat_sub(v___x_3111_, v_val_3093_);
lean_dec(v_val_3093_);
lean_dec(v___x_3111_);
v___x_3113_ = lean_unsigned_to_nat(1u);
v___x_3114_ = lean_nat_sub(v___x_3112_, v___x_3113_);
lean_dec(v___x_3112_);
v___x_3115_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(v___x_3114_, v___y_3071_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v_a_3116_; lean_object* v_a_3117_; lean_object* v___x_3118_; 
v_a_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc(v_a_3116_);
v_a_3117_ = lean_ctor_get(v___x_3115_, 1);
lean_inc(v_a_3117_);
lean_dec_ref_known(v___x_3115_, 2);
v___x_3118_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_a_3116_, v___y_3068_, v___y_3069_, v___y_3070_, v_a_3117_);
return v___x_3118_;
}
else
{
lean_object* v_a_3119_; lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
lean_dec_ref_known(v_key_3072_, 2);
lean_dec_ref(v___y_3068_);
v_a_3119_ = lean_ctor_get(v___x_3115_, 0);
v_a_3120_ = lean_ctor_get(v___x_3115_, 1);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3122_ = v___x_3115_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_inc(v_a_3119_);
lean_dec(v___x_3115_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3119_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v_a_3120_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
}
}
else
{
lean_object* v___x_3128_; 
lean_dec(v___x_3092_);
lean_dec(v_offset_3067_);
v___x_3128_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3128_;
}
}
case 9:
{
lean_object* v___x_3129_; 
lean_dec(v_offset_3067_);
v___x_3129_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3129_;
}
case 2:
{
lean_object* v___x_3130_; 
lean_dec(v_offset_3067_);
v___x_3130_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3130_;
}
case 0:
{
lean_object* v___x_3131_; 
lean_dec(v_offset_3067_);
v___x_3131_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3131_;
}
case 4:
{
lean_object* v___x_3132_; 
lean_dec(v_offset_3067_);
v___x_3132_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3132_;
}
case 3:
{
lean_object* v___x_3133_; 
lean_dec(v_offset_3067_);
v___x_3133_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3133_;
}
default: 
{
uint8_t v___x_3134_; 
v___x_3134_ = l_Lean_Expr_hasFVar(v_e_3066_);
if (v___x_3134_ == 0)
{
lean_object* v___x_3135_; 
lean_dec(v_offset_3067_);
v___x_3135_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3135_;
}
else
{
v_a_3074_ = v___y_3071_;
goto v___jp_3073_;
}
}
}
}
v___jp_3073_:
{
switch(lean_obj_tag(v_e_3066_))
{
case 9:
{
lean_object* v___x_3075_; 
lean_dec(v_offset_3067_);
v___x_3075_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v_a_3074_);
return v___x_3075_;
}
case 2:
{
lean_object* v___x_3076_; 
lean_dec(v_offset_3067_);
v___x_3076_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v_a_3074_);
return v___x_3076_;
}
case 0:
{
lean_object* v___x_3077_; 
lean_dec(v_offset_3067_);
v___x_3077_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v_a_3074_);
return v___x_3077_;
}
case 1:
{
lean_object* v___x_3078_; 
lean_dec(v_offset_3067_);
v___x_3078_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v_a_3074_);
return v___x_3078_;
}
case 4:
{
lean_object* v___x_3079_; 
lean_dec(v_offset_3067_);
v___x_3079_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v_a_3074_);
return v___x_3079_;
}
case 3:
{
lean_object* v___x_3080_; 
lean_dec(v_offset_3067_);
v___x_3080_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_e_3066_, v___y_3068_, v___y_3069_, v___y_3070_, v_a_3074_);
return v___x_3080_;
}
default: 
{
lean_object* v___x_3081_; 
v___x_3081_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(v___x_3064_, v_i_3065_, v_e_3066_, v_offset_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v_a_3074_);
if (lean_obj_tag(v___x_3081_) == 0)
{
lean_object* v_a_3082_; lean_object* v_a_3083_; lean_object* v_fst_3084_; lean_object* v_snd_3085_; lean_object* v___x_3086_; 
v_a_3082_ = lean_ctor_get(v___x_3081_, 0);
lean_inc(v_a_3082_);
v_a_3083_ = lean_ctor_get(v___x_3081_, 1);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___x_3081_, 2);
v_fst_3084_ = lean_ctor_get(v_a_3082_, 0);
lean_inc(v_fst_3084_);
v_snd_3085_ = lean_ctor_get(v_a_3082_, 1);
lean_inc(v_snd_3085_);
lean_dec(v_a_3082_);
v___x_3086_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3072_, v_fst_3084_, v_snd_3085_, v___y_3069_, v___y_3070_, v_a_3083_);
return v___x_3086_;
}
else
{
lean_dec_ref_known(v_key_3072_, 2);
return v___x_3081_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___boxed(lean_object* v___x_3136_, lean_object* v_i_3137_, lean_object* v_e_3138_, lean_object* v_offset_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_){
_start:
{
uint8_t v___y_17806__boxed_3144_; lean_object* v_res_3145_; 
v___y_17806__boxed_3144_ = lean_unbox(v___y_3141_);
v_res_3145_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_3136_, v_i_3137_, v_e_3138_, v_offset_3139_, v___y_3140_, v___y_17806__boxed_3144_, v___y_3142_, v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v_i_3137_);
lean_dec_ref(v___x_3136_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5___boxed(lean_object* v___x_3146_, lean_object* v_i_3147_, lean_object* v_e_3148_, lean_object* v_offset_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
uint8_t v___y_17877__boxed_3154_; lean_object* v_res_3155_; 
v___y_17877__boxed_3154_ = lean_unbox(v___y_3151_);
v_res_3155_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(v___x_3146_, v_i_3147_, v_e_3148_, v_offset_3149_, v___y_3150_, v___y_17877__boxed_3154_, v___y_3152_, v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec(v_i_3147_);
lean_dec_ref(v___x_3146_);
return v_res_3155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0(lean_object* v_e_3156_, lean_object* v___x_3157_, lean_object* v___x_3158_, lean_object* v_fst_3159_, lean_object* v___x_3160_, uint8_t v_debug_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v_a_3165_; 
switch(lean_obj_tag(v_e_3156_))
{
case 1:
{
lean_object* v_fvarId_3195_; lean_object* v___x_3196_; 
v_fvarId_3195_ = lean_ctor_get(v_e_3156_, 0);
v___x_3196_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v_fst_3159_, v_fvarId_3195_);
if (lean_obj_tag(v___x_3196_) == 1)
{
lean_object* v_val_3197_; uint8_t v___x_3198_; 
v_val_3197_ = lean_ctor_get(v___x_3196_, 0);
lean_inc(v_val_3197_);
lean_dec_ref_known(v___x_3196_, 1);
v___x_3198_ = lean_nat_dec_lt(v_val_3197_, v___x_3160_);
if (v___x_3198_ == 0)
{
lean_object* v___x_3199_; lean_object* v___x_3200_; 
lean_dec(v_val_3197_);
v___x_3199_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2);
v___x_3200_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(v___x_3199_, v_debug_3161_, v___y_3162_, v___y_3163_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; 
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
lean_inc(v_a_3201_);
if (lean_obj_tag(v_a_3201_) == 1)
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3210_; 
lean_dec_ref_known(v_e_3156_, 1);
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v_a_3202_ = lean_ctor_get(v___x_3200_, 1);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3210_ == 0)
{
lean_object* v_unused_3211_; 
v_unused_3211_ = lean_ctor_get(v___x_3200_, 0);
lean_dec(v_unused_3211_);
v___x_3204_ = v___x_3200_;
v_isShared_3205_ = v_isSharedCheck_3210_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3200_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3210_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v_val_3206_; lean_object* v___x_3208_; 
v_val_3206_ = lean_ctor_get(v_a_3201_, 0);
lean_inc(v_val_3206_);
lean_dec_ref_known(v_a_3201_, 1);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 0, v_val_3206_);
v___x_3208_ = v___x_3204_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_val_3206_);
lean_ctor_set(v_reuseFailAlloc_3209_, 1, v_a_3202_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
else
{
lean_object* v_a_3212_; 
lean_dec(v_a_3201_);
v_a_3212_ = lean_ctor_get(v___x_3200_, 1);
lean_inc(v_a_3212_);
lean_dec_ref_known(v___x_3200_, 2);
v_a_3165_ = v_a_3212_;
goto v___jp_3164_;
}
}
else
{
lean_object* v_a_3213_; lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3221_; 
lean_dec_ref_known(v_e_3156_, 1);
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v_a_3213_ = lean_ctor_get(v___x_3200_, 0);
v_a_3214_ = lean_ctor_get(v___x_3200_, 1);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3216_ = v___x_3200_;
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_inc(v_a_3213_);
lean_dec(v___x_3200_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_a_3213_);
lean_ctor_set(v_reuseFailAlloc_3220_, 1, v_a_3214_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
}
else
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
lean_dec_ref_known(v_e_3156_, 1);
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3222_ = lean_nat_sub(v___x_3160_, v_val_3197_);
lean_dec(v_val_3197_);
v___x_3223_ = lean_unsigned_to_nat(1u);
v___x_3224_ = lean_nat_sub(v___x_3222_, v___x_3223_);
lean_dec(v___x_3222_);
v___x_3225_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(v___x_3224_, v___y_3163_);
return v___x_3225_;
}
}
else
{
lean_object* v___x_3226_; 
lean_dec(v___x_3196_);
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3226_, 0, v_e_3156_);
lean_ctor_set(v___x_3226_, 1, v___y_3163_);
return v___x_3226_;
}
}
case 9:
{
lean_object* v___x_3227_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3227_, 0, v_e_3156_);
lean_ctor_set(v___x_3227_, 1, v___y_3163_);
return v___x_3227_;
}
case 2:
{
lean_object* v___x_3228_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3228_, 0, v_e_3156_);
lean_ctor_set(v___x_3228_, 1, v___y_3163_);
return v___x_3228_;
}
case 0:
{
lean_object* v___x_3229_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3229_, 0, v_e_3156_);
lean_ctor_set(v___x_3229_, 1, v___y_3163_);
return v___x_3229_;
}
case 4:
{
lean_object* v___x_3230_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3230_, 0, v_e_3156_);
lean_ctor_set(v___x_3230_, 1, v___y_3163_);
return v___x_3230_;
}
case 3:
{
lean_object* v___x_3231_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3231_, 0, v_e_3156_);
lean_ctor_set(v___x_3231_, 1, v___y_3163_);
return v___x_3231_;
}
default: 
{
uint8_t v___x_3232_; 
v___x_3232_ = l_Lean_Expr_hasFVar(v_e_3156_);
if (v___x_3232_ == 0)
{
lean_object* v___x_3233_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3233_, 0, v_e_3156_);
lean_ctor_set(v___x_3233_, 1, v___y_3163_);
return v___x_3233_;
}
else
{
v_a_3165_ = v___y_3163_;
goto v___jp_3164_;
}
}
}
v___jp_3164_:
{
switch(lean_obj_tag(v_e_3156_))
{
case 9:
{
lean_object* v___x_3166_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3166_, 0, v_e_3156_);
lean_ctor_set(v___x_3166_, 1, v_a_3165_);
return v___x_3166_;
}
case 2:
{
lean_object* v___x_3167_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3167_, 0, v_e_3156_);
lean_ctor_set(v___x_3167_, 1, v_a_3165_);
return v___x_3167_;
}
case 0:
{
lean_object* v___x_3168_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3168_, 0, v_e_3156_);
lean_ctor_set(v___x_3168_, 1, v_a_3165_);
return v___x_3168_;
}
case 1:
{
lean_object* v___x_3169_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3169_, 0, v_e_3156_);
lean_ctor_set(v___x_3169_, 1, v_a_3165_);
return v___x_3169_;
}
case 4:
{
lean_object* v___x_3170_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3170_, 0, v_e_3156_);
lean_ctor_set(v___x_3170_, 1, v_a_3165_);
return v___x_3170_;
}
case 3:
{
lean_object* v___x_3171_; 
lean_dec(v___x_3158_);
lean_dec(v___x_3157_);
v___x_3171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3171_, 0, v_e_3156_);
lean_ctor_set(v___x_3171_, 1, v_a_3165_);
return v___x_3171_;
}
default: 
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3172_ = lean_box(0);
v___x_3173_ = lean_mk_array(v___x_3157_, v___x_3172_);
lean_inc(v___x_3158_);
v___x_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3158_);
lean_ctor_set(v___x_3174_, 1, v___x_3173_);
v___x_3175_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(v_fst_3159_, v___x_3160_, v_e_3156_, v___x_3158_, v___x_3174_, v_debug_3161_, v___y_3162_, v_a_3165_);
if (lean_obj_tag(v___x_3175_) == 0)
{
lean_object* v_a_3176_; lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3185_; 
v_a_3176_ = lean_ctor_get(v___x_3175_, 0);
v_a_3177_ = lean_ctor_get(v___x_3175_, 1);
v_isSharedCheck_3185_ = !lean_is_exclusive(v___x_3175_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3179_ = v___x_3175_;
v_isShared_3180_ = v_isSharedCheck_3185_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_inc(v_a_3176_);
lean_dec(v___x_3175_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3185_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v_fst_3181_; lean_object* v___x_3183_; 
v_fst_3181_ = lean_ctor_get(v_a_3176_, 0);
lean_inc(v_fst_3181_);
lean_dec(v_a_3176_);
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 0, v_fst_3181_);
v___x_3183_ = v___x_3179_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v_fst_3181_);
lean_ctor_set(v_reuseFailAlloc_3184_, 1, v_a_3177_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
return v___x_3183_;
}
}
}
else
{
lean_object* v_a_3186_; lean_object* v_a_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3194_; 
v_a_3186_ = lean_ctor_get(v___x_3175_, 0);
v_a_3187_ = lean_ctor_get(v___x_3175_, 1);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3175_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3189_ = v___x_3175_;
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_a_3187_);
lean_inc(v_a_3186_);
lean_dec(v___x_3175_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3192_; 
if (v_isShared_3190_ == 0)
{
v___x_3192_ = v___x_3189_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_a_3186_);
lean_ctor_set(v_reuseFailAlloc_3193_, 1, v_a_3187_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0___boxed(lean_object* v_e_3234_, lean_object* v___x_3235_, lean_object* v___x_3236_, lean_object* v_fst_3237_, lean_object* v___x_3238_, lean_object* v_debug_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_){
_start:
{
uint8_t v_debug_boxed_3242_; lean_object* v_res_3243_; 
v_debug_boxed_3242_ = lean_unbox(v_debug_3239_);
v_res_3243_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0(v_e_3234_, v___x_3235_, v___x_3236_, v_fst_3237_, v___x_3238_, v_debug_boxed_3242_, v___y_3240_, v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___x_3238_);
lean_dec(v_fst_3237_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0(lean_object* v_piece_3244_, lean_object* v___x_3245_, lean_object* v___x_3246_, lean_object* v_i_3247_, uint8_t v_debug_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_){
_start:
{
lean_object* v_a_3252_; 
switch(lean_obj_tag(v_piece_3244_))
{
case 1:
{
lean_object* v_fvarId_3281_; lean_object* v___x_3282_; 
v_fvarId_3281_ = lean_ctor_get(v_piece_3244_, 0);
v___x_3282_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v___x_3246_, v_fvarId_3281_);
if (lean_obj_tag(v___x_3282_) == 1)
{
lean_object* v_val_3283_; uint8_t v___x_3284_; 
v_val_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_val_3283_);
lean_dec_ref_known(v___x_3282_, 1);
v___x_3284_ = lean_nat_dec_lt(v_val_3283_, v_i_3247_);
if (v___x_3284_ == 0)
{
lean_object* v___x_3285_; lean_object* v___x_3286_; 
lean_dec(v_val_3283_);
v___x_3285_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2);
v___x_3286_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(v___x_3285_, v_debug_3248_, v___y_3249_, v___y_3250_);
if (lean_obj_tag(v___x_3286_) == 0)
{
lean_object* v_a_3287_; 
v_a_3287_ = lean_ctor_get(v___x_3286_, 0);
lean_inc(v_a_3287_);
if (lean_obj_tag(v_a_3287_) == 1)
{
lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3296_; 
lean_dec_ref_known(v_piece_3244_, 1);
lean_dec(v___x_3245_);
v_a_3288_ = lean_ctor_get(v___x_3286_, 1);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3296_ == 0)
{
lean_object* v_unused_3297_; 
v_unused_3297_ = lean_ctor_get(v___x_3286_, 0);
lean_dec(v_unused_3297_);
v___x_3290_ = v___x_3286_;
v_isShared_3291_ = v_isSharedCheck_3296_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_dec(v___x_3286_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3296_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v_val_3292_; lean_object* v___x_3294_; 
v_val_3292_ = lean_ctor_get(v_a_3287_, 0);
lean_inc(v_val_3292_);
lean_dec_ref_known(v_a_3287_, 1);
if (v_isShared_3291_ == 0)
{
lean_ctor_set(v___x_3290_, 0, v_val_3292_);
v___x_3294_ = v___x_3290_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_val_3292_);
lean_ctor_set(v_reuseFailAlloc_3295_, 1, v_a_3288_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
else
{
lean_object* v_a_3298_; 
lean_dec(v_a_3287_);
v_a_3298_ = lean_ctor_get(v___x_3286_, 1);
lean_inc(v_a_3298_);
lean_dec_ref_known(v___x_3286_, 2);
v_a_3252_ = v_a_3298_;
goto v___jp_3251_;
}
}
else
{
lean_object* v_a_3299_; lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3307_; 
lean_dec_ref_known(v_piece_3244_, 1);
lean_dec(v___x_3245_);
v_a_3299_ = lean_ctor_get(v___x_3286_, 0);
v_a_3300_ = lean_ctor_get(v___x_3286_, 1);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3302_ = v___x_3286_;
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_inc(v_a_3299_);
lean_dec(v___x_3286_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3299_);
lean_ctor_set(v_reuseFailAlloc_3306_, 1, v_a_3300_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
}
else
{
lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
lean_dec_ref_known(v_piece_3244_, 1);
lean_dec(v___x_3245_);
v___x_3308_ = lean_nat_sub(v_i_3247_, v_val_3283_);
lean_dec(v_val_3283_);
v___x_3309_ = lean_unsigned_to_nat(1u);
v___x_3310_ = lean_nat_sub(v___x_3308_, v___x_3309_);
lean_dec(v___x_3308_);
v___x_3311_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(v___x_3310_, v___y_3250_);
return v___x_3311_;
}
}
else
{
lean_object* v___x_3312_; 
lean_dec(v___x_3282_);
lean_dec(v___x_3245_);
v___x_3312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3312_, 0, v_piece_3244_);
lean_ctor_set(v___x_3312_, 1, v___y_3250_);
return v___x_3312_;
}
}
case 9:
{
lean_object* v___x_3313_; 
lean_dec(v___x_3245_);
v___x_3313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3313_, 0, v_piece_3244_);
lean_ctor_set(v___x_3313_, 1, v___y_3250_);
return v___x_3313_;
}
case 2:
{
lean_object* v___x_3314_; 
lean_dec(v___x_3245_);
v___x_3314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3314_, 0, v_piece_3244_);
lean_ctor_set(v___x_3314_, 1, v___y_3250_);
return v___x_3314_;
}
case 0:
{
lean_object* v___x_3315_; 
lean_dec(v___x_3245_);
v___x_3315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3315_, 0, v_piece_3244_);
lean_ctor_set(v___x_3315_, 1, v___y_3250_);
return v___x_3315_;
}
case 4:
{
lean_object* v___x_3316_; 
lean_dec(v___x_3245_);
v___x_3316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3316_, 0, v_piece_3244_);
lean_ctor_set(v___x_3316_, 1, v___y_3250_);
return v___x_3316_;
}
case 3:
{
lean_object* v___x_3317_; 
lean_dec(v___x_3245_);
v___x_3317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3317_, 0, v_piece_3244_);
lean_ctor_set(v___x_3317_, 1, v___y_3250_);
return v___x_3317_;
}
default: 
{
uint8_t v___x_3318_; 
v___x_3318_ = l_Lean_Expr_hasFVar(v_piece_3244_);
if (v___x_3318_ == 0)
{
lean_object* v___x_3319_; 
lean_dec(v___x_3245_);
v___x_3319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3319_, 0, v_piece_3244_);
lean_ctor_set(v___x_3319_, 1, v___y_3250_);
return v___x_3319_;
}
else
{
v_a_3252_ = v___y_3250_;
goto v___jp_3251_;
}
}
}
v___jp_3251_:
{
switch(lean_obj_tag(v_piece_3244_))
{
case 9:
{
lean_object* v___x_3253_; 
lean_dec(v___x_3245_);
v___x_3253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3253_, 0, v_piece_3244_);
lean_ctor_set(v___x_3253_, 1, v_a_3252_);
return v___x_3253_;
}
case 2:
{
lean_object* v___x_3254_; 
lean_dec(v___x_3245_);
v___x_3254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3254_, 0, v_piece_3244_);
lean_ctor_set(v___x_3254_, 1, v_a_3252_);
return v___x_3254_;
}
case 0:
{
lean_object* v___x_3255_; 
lean_dec(v___x_3245_);
v___x_3255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3255_, 0, v_piece_3244_);
lean_ctor_set(v___x_3255_, 1, v_a_3252_);
return v___x_3255_;
}
case 1:
{
lean_object* v___x_3256_; 
lean_dec(v___x_3245_);
v___x_3256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3256_, 0, v_piece_3244_);
lean_ctor_set(v___x_3256_, 1, v_a_3252_);
return v___x_3256_;
}
case 4:
{
lean_object* v___x_3257_; 
lean_dec(v___x_3245_);
v___x_3257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3257_, 0, v_piece_3244_);
lean_ctor_set(v___x_3257_, 1, v_a_3252_);
return v___x_3257_;
}
case 3:
{
lean_object* v___x_3258_; 
lean_dec(v___x_3245_);
v___x_3258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3258_, 0, v_piece_3244_);
lean_ctor_set(v___x_3258_, 1, v_a_3252_);
return v___x_3258_;
}
default: 
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3259_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0);
lean_inc(v___x_3245_);
v___x_3260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3245_);
lean_ctor_set(v___x_3260_, 1, v___x_3259_);
v___x_3261_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(v___x_3246_, v_i_3247_, v_piece_3244_, v___x_3245_, v___x_3260_, v_debug_3248_, v___y_3249_, v_a_3252_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3271_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
v_a_3263_ = lean_ctor_get(v___x_3261_, 1);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3265_ = v___x_3261_;
v_isShared_3266_ = v_isSharedCheck_3271_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_inc(v_a_3262_);
lean_dec(v___x_3261_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3271_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v_fst_3267_; lean_object* v___x_3269_; 
v_fst_3267_ = lean_ctor_get(v_a_3262_, 0);
lean_inc(v_fst_3267_);
lean_dec(v_a_3262_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 0, v_fst_3267_);
v___x_3269_ = v___x_3265_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_fst_3267_);
lean_ctor_set(v_reuseFailAlloc_3270_, 1, v_a_3263_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
}
}
}
else
{
lean_object* v_a_3272_; lean_object* v_a_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3280_; 
v_a_3272_ = lean_ctor_get(v___x_3261_, 0);
v_a_3273_ = lean_ctor_get(v___x_3261_, 1);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3275_ = v___x_3261_;
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_a_3273_);
lean_inc(v_a_3272_);
lean_dec(v___x_3261_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3276_ == 0)
{
v___x_3278_ = v___x_3275_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_a_3272_);
lean_ctor_set(v_reuseFailAlloc_3279_, 1, v_a_3273_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0___boxed(lean_object* v_piece_3320_, lean_object* v___x_3321_, lean_object* v___x_3322_, lean_object* v_i_3323_, lean_object* v_debug_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_){
_start:
{
uint8_t v_debug_boxed_3327_; lean_object* v_res_3328_; 
v_debug_boxed_3327_ = lean_unbox(v_debug_3324_);
v_res_3328_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0(v_piece_3320_, v___x_3321_, v___x_3322_, v_i_3323_, v_debug_boxed_3327_, v___y_3325_, v___y_3326_);
lean_dec_ref(v___y_3325_);
lean_dec(v_i_3323_);
lean_dec_ref(v___x_3322_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(lean_object* v___x_3329_, lean_object* v___x_3330_, uint8_t v___x_3331_, lean_object* v_piece_3332_, lean_object* v_i_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_){
_start:
{
lean_object* v___x_3342_; uint8_t v_debug_3343_; lean_object* v___x_3344_; lean_object* v___f_3345_; lean_object* v___x_3346_; lean_object* v_env_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3342_ = lean_st_ref_get(v___y_3336_);
v_debug_3343_ = lean_ctor_get_uint8(v___x_3342_, sizeof(void*)*11);
lean_dec(v___x_3342_);
v___x_3344_ = lean_box(v_debug_3343_);
v___f_3345_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0___boxed), 7, 5);
lean_closure_set(v___f_3345_, 0, v_piece_3332_);
lean_closure_set(v___f_3345_, 1, v___x_3329_);
lean_closure_set(v___f_3345_, 2, v___x_3330_);
lean_closure_set(v___f_3345_, 3, v_i_3333_);
lean_closure_set(v___f_3345_, 4, v___x_3344_);
v___x_3346_ = lean_st_ref_get(v___y_3340_);
v_env_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc_ref(v_env_3347_);
lean_dec(v___x_3346_);
v___x_3348_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3348_, 0, v_env_3347_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*1, v___x_3331_);
lean_ctor_set_uint8(v___x_3348_, sizeof(void*)*1 + 1, v___x_3331_);
v___x_3349_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_3345_, v___x_3348_, v___y_3336_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3360_; 
v_a_3350_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3352_ = v___x_3349_;
v_isShared_3353_ = v_isSharedCheck_3360_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3349_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3360_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
if (lean_obj_tag(v_a_3350_) == 0)
{
lean_object* v___x_3354_; lean_object* v___x_3355_; 
lean_dec_ref_known(v_a_3350_, 1);
lean_del_object(v___x_3352_);
v___x_3354_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2);
v___x_3355_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(v___x_3354_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
return v___x_3355_;
}
else
{
lean_object* v_a_3356_; lean_object* v___x_3358_; 
v_a_3356_ = lean_ctor_get(v_a_3350_, 0);
lean_inc(v_a_3356_);
lean_dec_ref_known(v_a_3350_, 1);
if (v_isShared_3353_ == 0)
{
lean_ctor_set(v___x_3352_, 0, v_a_3356_);
v___x_3358_ = v___x_3352_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_a_3356_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
return v___x_3358_;
}
}
}
}
else
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3368_; 
v_a_3361_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3363_ = v___x_3349_;
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v___x_3349_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3366_; 
if (v_isShared_3364_ == 0)
{
v___x_3366_ = v___x_3363_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v_a_3361_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1___boxed(lean_object* v___x_3369_, lean_object* v___x_3370_, lean_object* v___x_3371_, lean_object* v_piece_3372_, lean_object* v_i_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
uint8_t v___x_18803__boxed_3382_; lean_object* v_res_3383_; 
v___x_18803__boxed_3382_ = lean_unbox(v___x_3371_);
v_res_3383_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3369_, v___x_3370_, v___x_18803__boxed_3382_, v_piece_3372_, v_i_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
lean_dec(v___y_3374_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12(lean_object* v___x_3384_, lean_object* v___x_3385_, lean_object* v_as_3386_, size_t v_sz_3387_, size_t v_i_3388_, lean_object* v_b_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
uint8_t v___x_3398_; 
v___x_3398_ = lean_usize_dec_lt(v_i_3388_, v_sz_3387_);
if (v___x_3398_ == 0)
{
lean_object* v___x_3399_; 
lean_dec_ref(v___x_3384_);
v___x_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3399_, 0, v_b_3389_);
return v___x_3399_;
}
else
{
lean_object* v_fst_3400_; lean_object* v_snd_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3450_; 
v_fst_3400_ = lean_ctor_get(v_b_3389_, 0);
v_snd_3401_ = lean_ctor_get(v_b_3389_, 1);
v_isSharedCheck_3450_ = !lean_is_exclusive(v_b_3389_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3403_ = v_b_3389_;
v_isShared_3404_ = v_isSharedCheck_3450_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_snd_3401_);
lean_inc(v_fst_3400_);
lean_dec(v_b_3389_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3450_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v_a_3405_; lean_object* v_userName_3406_; lean_object* v_type_3407_; lean_object* v_value_3408_; uint8_t v_nondep_3409_; lean_object* v___x_3410_; uint8_t v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v_a_3405_ = lean_array_uget_borrowed(v_as_3386_, v_i_3388_);
v_userName_3406_ = lean_ctor_get(v_a_3405_, 1);
v_type_3407_ = lean_ctor_get(v_a_3405_, 2);
v_value_3408_ = lean_ctor_get(v_a_3405_, 3);
v_nondep_3409_ = lean_ctor_get_uint8(v_a_3405_, sizeof(void*)*4);
v___x_3410_ = lean_unsigned_to_nat(0u);
v___x_3411_ = lean_nat_dec_eq(v___x_3385_, v___x_3410_);
v___x_3412_ = lean_unsigned_to_nat(1u);
v___x_3413_ = lean_nat_sub(v_snd_3401_, v___x_3412_);
lean_dec(v_snd_3401_);
lean_inc(v___x_3413_);
lean_inc_ref(v_type_3407_);
lean_inc_ref(v___x_3384_);
v___x_3414_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3410_, v___x_3384_, v___x_3411_, v_type_3407_, v___x_3413_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3415_; lean_object* v___x_3416_; 
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
lean_dec_ref_known(v___x_3414_, 1);
lean_inc(v___x_3413_);
lean_inc_ref(v_value_3408_);
lean_inc_ref(v___x_3384_);
v___x_3416_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3410_, v___x_3384_, v___x_3411_, v_value_3408_, v___x_3413_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; lean_object* v___x_3418_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3416_, 1);
lean_inc(v_userName_3406_);
v___x_3418_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(v_userName_3406_, v_a_3415_, v_a_3417_, v_fst_3400_, v_nondep_3409_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_);
if (lean_obj_tag(v___x_3418_) == 0)
{
lean_object* v_a_3419_; lean_object* v___x_3421_; 
v_a_3419_ = lean_ctor_get(v___x_3418_, 0);
lean_inc(v_a_3419_);
lean_dec_ref_known(v___x_3418_, 1);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 1, v___x_3413_);
lean_ctor_set(v___x_3403_, 0, v_a_3419_);
v___x_3421_ = v___x_3403_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v_a_3419_);
lean_ctor_set(v_reuseFailAlloc_3425_, 1, v___x_3413_);
v___x_3421_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
size_t v___x_3422_; size_t v___x_3423_; 
v___x_3422_ = ((size_t)1ULL);
v___x_3423_ = lean_usize_add(v_i_3388_, v___x_3422_);
v_i_3388_ = v___x_3423_;
v_b_3389_ = v___x_3421_;
goto _start;
}
}
else
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3433_; 
lean_dec(v___x_3413_);
lean_del_object(v___x_3403_);
lean_dec_ref(v___x_3384_);
v_a_3426_ = lean_ctor_get(v___x_3418_, 0);
v_isSharedCheck_3433_ = !lean_is_exclusive(v___x_3418_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3428_ = v___x_3418_;
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3418_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3431_; 
if (v_isShared_3429_ == 0)
{
v___x_3431_ = v___x_3428_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_a_3426_);
v___x_3431_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
return v___x_3431_;
}
}
}
}
else
{
lean_object* v_a_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3441_; 
lean_dec(v_a_3415_);
lean_dec(v___x_3413_);
lean_del_object(v___x_3403_);
lean_dec(v_fst_3400_);
lean_dec_ref(v___x_3384_);
v_a_3434_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3441_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3441_ == 0)
{
v___x_3436_ = v___x_3416_;
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_a_3434_);
lean_dec(v___x_3416_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3439_; 
if (v_isShared_3437_ == 0)
{
v___x_3439_ = v___x_3436_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v_a_3434_);
v___x_3439_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
return v___x_3439_;
}
}
}
}
else
{
lean_object* v_a_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3449_; 
lean_dec(v___x_3413_);
lean_del_object(v___x_3403_);
lean_dec(v_fst_3400_);
lean_dec_ref(v___x_3384_);
v_a_3442_ = lean_ctor_get(v___x_3414_, 0);
v_isSharedCheck_3449_ = !lean_is_exclusive(v___x_3414_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3444_ = v___x_3414_;
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_a_3442_);
lean_dec(v___x_3414_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3447_; 
if (v_isShared_3445_ == 0)
{
v___x_3447_ = v___x_3444_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3448_; 
v_reuseFailAlloc_3448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3448_, 0, v_a_3442_);
v___x_3447_ = v_reuseFailAlloc_3448_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
return v___x_3447_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12___boxed(lean_object* v___x_3451_, lean_object* v___x_3452_, lean_object* v_as_3453_, lean_object* v_sz_3454_, lean_object* v_i_3455_, lean_object* v_b_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_){
_start:
{
size_t v_sz_boxed_3465_; size_t v_i_boxed_3466_; lean_object* v_res_3467_; 
v_sz_boxed_3465_ = lean_unbox_usize(v_sz_3454_);
lean_dec(v_sz_3454_);
v_i_boxed_3466_ = lean_unbox_usize(v_i_3455_);
lean_dec(v_i_3455_);
v_res_3467_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12(v___x_3451_, v___x_3452_, v_as_3453_, v_sz_boxed_3465_, v_i_boxed_3466_, v_b_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_);
lean_dec(v___y_3463_);
lean_dec_ref(v___y_3462_);
lean_dec(v___y_3461_);
lean_dec_ref(v___y_3460_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
lean_dec(v___y_3457_);
lean_dec_ref(v_as_3453_);
lean_dec(v___x_3452_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7(lean_object* v___x_3468_, lean_object* v___x_3469_, lean_object* v_as_3470_, size_t v_sz_3471_, size_t v_i_3472_, lean_object* v_b_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_){
_start:
{
uint8_t v___x_3482_; 
v___x_3482_ = lean_usize_dec_lt(v_i_3472_, v_sz_3471_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; 
lean_dec_ref(v___x_3468_);
v___x_3483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3483_, 0, v_b_3473_);
return v___x_3483_;
}
else
{
lean_object* v_fst_3484_; lean_object* v_snd_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3534_; 
v_fst_3484_ = lean_ctor_get(v_b_3473_, 0);
v_snd_3485_ = lean_ctor_get(v_b_3473_, 1);
v_isSharedCheck_3534_ = !lean_is_exclusive(v_b_3473_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3487_ = v_b_3473_;
v_isShared_3488_ = v_isSharedCheck_3534_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_snd_3485_);
lean_inc(v_fst_3484_);
lean_dec(v_b_3473_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3534_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v_a_3489_; lean_object* v_userName_3490_; lean_object* v_type_3491_; lean_object* v_value_3492_; uint8_t v_nondep_3493_; lean_object* v___x_3494_; uint8_t v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; 
v_a_3489_ = lean_array_uget_borrowed(v_as_3470_, v_i_3472_);
v_userName_3490_ = lean_ctor_get(v_a_3489_, 1);
v_type_3491_ = lean_ctor_get(v_a_3489_, 2);
v_value_3492_ = lean_ctor_get(v_a_3489_, 3);
v_nondep_3493_ = lean_ctor_get_uint8(v_a_3489_, sizeof(void*)*4);
v___x_3494_ = lean_unsigned_to_nat(0u);
v___x_3495_ = lean_nat_dec_eq(v___x_3469_, v___x_3494_);
v___x_3496_ = lean_unsigned_to_nat(1u);
v___x_3497_ = lean_nat_sub(v_snd_3485_, v___x_3496_);
lean_dec(v_snd_3485_);
lean_inc(v___x_3497_);
lean_inc_ref(v_type_3491_);
lean_inc_ref(v___x_3468_);
v___x_3498_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3494_, v___x_3468_, v___x_3495_, v_type_3491_, v___x_3497_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; lean_object* v___x_3500_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3498_, 1);
lean_inc(v___x_3497_);
lean_inc_ref(v_value_3492_);
lean_inc_ref(v___x_3468_);
v___x_3500_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3494_, v___x_3468_, v___x_3495_, v_value_3492_, v___x_3497_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_);
if (lean_obj_tag(v___x_3500_) == 0)
{
lean_object* v_a_3501_; lean_object* v___x_3502_; 
v_a_3501_ = lean_ctor_get(v___x_3500_, 0);
lean_inc(v_a_3501_);
lean_dec_ref_known(v___x_3500_, 1);
lean_inc(v_userName_3490_);
v___x_3502_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(v_userName_3490_, v_a_3499_, v_a_3501_, v_fst_3484_, v_nondep_3493_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v_a_3503_; lean_object* v___x_3505_; 
v_a_3503_ = lean_ctor_get(v___x_3502_, 0);
lean_inc(v_a_3503_);
lean_dec_ref_known(v___x_3502_, 1);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 1, v___x_3497_);
lean_ctor_set(v___x_3487_, 0, v_a_3503_);
v___x_3505_ = v___x_3487_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_a_3503_);
lean_ctor_set(v_reuseFailAlloc_3509_, 1, v___x_3497_);
v___x_3505_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
size_t v___x_3506_; size_t v___x_3507_; lean_object* v___x_3508_; 
v___x_3506_ = ((size_t)1ULL);
v___x_3507_ = lean_usize_add(v_i_3472_, v___x_3506_);
v___x_3508_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12(v___x_3468_, v___x_3469_, v_as_3470_, v_sz_3471_, v___x_3507_, v___x_3505_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_);
return v___x_3508_;
}
}
else
{
lean_object* v_a_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3517_; 
lean_dec(v___x_3497_);
lean_del_object(v___x_3487_);
lean_dec_ref(v___x_3468_);
v_a_3510_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3517_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3517_ == 0)
{
v___x_3512_ = v___x_3502_;
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_a_3510_);
lean_dec(v___x_3502_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v___x_3515_; 
if (v_isShared_3513_ == 0)
{
v___x_3515_ = v___x_3512_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_a_3510_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
}
}
else
{
lean_object* v_a_3518_; lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3525_; 
lean_dec(v_a_3499_);
lean_dec(v___x_3497_);
lean_del_object(v___x_3487_);
lean_dec(v_fst_3484_);
lean_dec_ref(v___x_3468_);
v_a_3518_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3525_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3525_ == 0)
{
v___x_3520_ = v___x_3500_;
v_isShared_3521_ = v_isSharedCheck_3525_;
goto v_resetjp_3519_;
}
else
{
lean_inc(v_a_3518_);
lean_dec(v___x_3500_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3525_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
lean_object* v___x_3523_; 
if (v_isShared_3521_ == 0)
{
v___x_3523_ = v___x_3520_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v_a_3518_);
v___x_3523_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
return v___x_3523_;
}
}
}
}
else
{
lean_object* v_a_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3533_; 
lean_dec(v___x_3497_);
lean_del_object(v___x_3487_);
lean_dec(v_fst_3484_);
lean_dec_ref(v___x_3468_);
v_a_3526_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3528_ = v___x_3498_;
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_a_3526_);
lean_dec(v___x_3498_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3531_; 
if (v_isShared_3529_ == 0)
{
v___x_3531_ = v___x_3528_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v_a_3526_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___boxed(lean_object* v___x_3535_, lean_object* v___x_3536_, lean_object* v_as_3537_, lean_object* v_sz_3538_, lean_object* v_i_3539_, lean_object* v_b_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_){
_start:
{
size_t v_sz_boxed_3549_; size_t v_i_boxed_3550_; lean_object* v_res_3551_; 
v_sz_boxed_3549_ = lean_unbox_usize(v_sz_3538_);
lean_dec(v_sz_3538_);
v_i_boxed_3550_ = lean_unbox_usize(v_i_3539_);
lean_dec(v_i_3539_);
v_res_3551_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7(v___x_3535_, v___x_3536_, v_as_3537_, v_sz_boxed_3549_, v_i_boxed_3550_, v_b_3540_, v___y_3541_, v___y_3542_, v___y_3543_, v___y_3544_, v___y_3545_, v___y_3546_, v___y_3547_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
lean_dec(v___y_3545_);
lean_dec_ref(v___y_3544_);
lean_dec(v___y_3543_);
lean_dec_ref(v___y_3542_);
lean_dec(v___y_3541_);
lean_dec_ref(v_as_3537_);
lean_dec(v___x_3536_);
return v_res_3551_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(lean_object* v_a_3552_, lean_object* v_x_3553_){
_start:
{
if (lean_obj_tag(v_x_3553_) == 0)
{
uint8_t v___x_3554_; 
v___x_3554_ = 0;
return v___x_3554_;
}
else
{
lean_object* v_key_3555_; lean_object* v_tail_3556_; uint8_t v___x_3557_; 
v_key_3555_ = lean_ctor_get(v_x_3553_, 0);
v_tail_3556_ = lean_ctor_get(v_x_3553_, 2);
v___x_3557_ = l_Lean_instBEqFVarId_beq(v_key_3555_, v_a_3552_);
if (v___x_3557_ == 0)
{
v_x_3553_ = v_tail_3556_;
goto _start;
}
else
{
return v___x_3557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg___boxed(lean_object* v_a_3559_, lean_object* v_x_3560_){
_start:
{
uint8_t v_res_3561_; lean_object* v_r_3562_; 
v_res_3561_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(v_a_3559_, v_x_3560_);
lean_dec(v_x_3560_);
lean_dec(v_a_3559_);
v_r_3562_ = lean_box(v_res_3561_);
return v_r_3562_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10___redArg(lean_object* v_x_3563_, lean_object* v_x_3564_){
_start:
{
if (lean_obj_tag(v_x_3564_) == 0)
{
return v_x_3563_;
}
else
{
lean_object* v_key_3565_; lean_object* v_value_3566_; lean_object* v_tail_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3590_; 
v_key_3565_ = lean_ctor_get(v_x_3564_, 0);
v_value_3566_ = lean_ctor_get(v_x_3564_, 1);
v_tail_3567_ = lean_ctor_get(v_x_3564_, 2);
v_isSharedCheck_3590_ = !lean_is_exclusive(v_x_3564_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3569_ = v_x_3564_;
v_isShared_3570_ = v_isSharedCheck_3590_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_tail_3567_);
lean_inc(v_value_3566_);
lean_inc(v_key_3565_);
lean_dec(v_x_3564_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3590_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3571_; uint64_t v___x_3572_; uint64_t v___x_3573_; uint64_t v___x_3574_; uint64_t v_fold_3575_; uint64_t v___x_3576_; uint64_t v___x_3577_; uint64_t v___x_3578_; size_t v___x_3579_; size_t v___x_3580_; size_t v___x_3581_; size_t v___x_3582_; size_t v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3586_; 
v___x_3571_ = lean_array_get_size(v_x_3563_);
v___x_3572_ = l_Lean_instHashableFVarId_hash(v_key_3565_);
v___x_3573_ = 32ULL;
v___x_3574_ = lean_uint64_shift_right(v___x_3572_, v___x_3573_);
v_fold_3575_ = lean_uint64_xor(v___x_3572_, v___x_3574_);
v___x_3576_ = 16ULL;
v___x_3577_ = lean_uint64_shift_right(v_fold_3575_, v___x_3576_);
v___x_3578_ = lean_uint64_xor(v_fold_3575_, v___x_3577_);
v___x_3579_ = lean_uint64_to_usize(v___x_3578_);
v___x_3580_ = lean_usize_of_nat(v___x_3571_);
v___x_3581_ = ((size_t)1ULL);
v___x_3582_ = lean_usize_sub(v___x_3580_, v___x_3581_);
v___x_3583_ = lean_usize_land(v___x_3579_, v___x_3582_);
v___x_3584_ = lean_array_uget_borrowed(v_x_3563_, v___x_3583_);
lean_inc(v___x_3584_);
if (v_isShared_3570_ == 0)
{
lean_ctor_set(v___x_3569_, 2, v___x_3584_);
v___x_3586_ = v___x_3569_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_key_3565_);
lean_ctor_set(v_reuseFailAlloc_3589_, 1, v_value_3566_);
lean_ctor_set(v_reuseFailAlloc_3589_, 2, v___x_3584_);
v___x_3586_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
lean_object* v___x_3587_; 
v___x_3587_ = lean_array_uset(v_x_3563_, v___x_3583_, v___x_3586_);
v_x_3563_ = v___x_3587_;
v_x_3564_ = v_tail_3567_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5___redArg(lean_object* v_i_3591_, lean_object* v_source_3592_, lean_object* v_target_3593_){
_start:
{
lean_object* v___x_3594_; uint8_t v___x_3595_; 
v___x_3594_ = lean_array_get_size(v_source_3592_);
v___x_3595_ = lean_nat_dec_lt(v_i_3591_, v___x_3594_);
if (v___x_3595_ == 0)
{
lean_dec_ref(v_source_3592_);
lean_dec(v_i_3591_);
return v_target_3593_;
}
else
{
lean_object* v_es_3596_; lean_object* v___x_3597_; lean_object* v_source_3598_; lean_object* v_target_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v_es_3596_ = lean_array_fget(v_source_3592_, v_i_3591_);
v___x_3597_ = lean_box(0);
v_source_3598_ = lean_array_fset(v_source_3592_, v_i_3591_, v___x_3597_);
v_target_3599_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10___redArg(v_target_3593_, v_es_3596_);
v___x_3600_ = lean_unsigned_to_nat(1u);
v___x_3601_ = lean_nat_add(v_i_3591_, v___x_3600_);
lean_dec(v_i_3591_);
v_i_3591_ = v___x_3601_;
v_source_3592_ = v_source_3598_;
v_target_3593_ = v_target_3599_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1___redArg(lean_object* v_data_3603_){
_start:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v_nbuckets_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3604_ = lean_array_get_size(v_data_3603_);
v___x_3605_ = lean_unsigned_to_nat(2u);
v_nbuckets_3606_ = lean_nat_mul(v___x_3604_, v___x_3605_);
v___x_3607_ = lean_unsigned_to_nat(0u);
v___x_3608_ = lean_box(0);
v___x_3609_ = lean_mk_array(v_nbuckets_3606_, v___x_3608_);
v___x_3610_ = lean_array_propagate_mark(v_data_3603_, v___x_3609_);
v___x_3611_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5___redArg(v___x_3607_, v_data_3603_, v___x_3610_);
return v___x_3611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(lean_object* v_a_3612_, lean_object* v_b_3613_, lean_object* v_x_3614_){
_start:
{
if (lean_obj_tag(v_x_3614_) == 0)
{
lean_dec(v_b_3613_);
lean_dec(v_a_3612_);
return v_x_3614_;
}
else
{
lean_object* v_key_3615_; lean_object* v_value_3616_; lean_object* v_tail_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3629_; 
v_key_3615_ = lean_ctor_get(v_x_3614_, 0);
v_value_3616_ = lean_ctor_get(v_x_3614_, 1);
v_tail_3617_ = lean_ctor_get(v_x_3614_, 2);
v_isSharedCheck_3629_ = !lean_is_exclusive(v_x_3614_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3619_ = v_x_3614_;
v_isShared_3620_ = v_isSharedCheck_3629_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_tail_3617_);
lean_inc(v_value_3616_);
lean_inc(v_key_3615_);
lean_dec(v_x_3614_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3629_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
uint8_t v___x_3621_; 
v___x_3621_ = l_Lean_instBEqFVarId_beq(v_key_3615_, v_a_3612_);
if (v___x_3621_ == 0)
{
lean_object* v___x_3622_; lean_object* v___x_3624_; 
v___x_3622_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(v_a_3612_, v_b_3613_, v_tail_3617_);
if (v_isShared_3620_ == 0)
{
lean_ctor_set(v___x_3619_, 2, v___x_3622_);
v___x_3624_ = v___x_3619_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3625_; 
v_reuseFailAlloc_3625_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3625_, 0, v_key_3615_);
lean_ctor_set(v_reuseFailAlloc_3625_, 1, v_value_3616_);
lean_ctor_set(v_reuseFailAlloc_3625_, 2, v___x_3622_);
v___x_3624_ = v_reuseFailAlloc_3625_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
return v___x_3624_;
}
}
else
{
lean_object* v___x_3627_; 
lean_dec(v_value_3616_);
lean_dec(v_key_3615_);
if (v_isShared_3620_ == 0)
{
lean_ctor_set(v___x_3619_, 1, v_b_3613_);
lean_ctor_set(v___x_3619_, 0, v_a_3612_);
v___x_3627_ = v___x_3619_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v_a_3612_);
lean_ctor_set(v_reuseFailAlloc_3628_, 1, v_b_3613_);
lean_ctor_set(v_reuseFailAlloc_3628_, 2, v_tail_3617_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
return v___x_3627_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0___redArg(lean_object* v_m_3630_, lean_object* v_a_3631_, lean_object* v_b_3632_){
_start:
{
lean_object* v_size_3633_; lean_object* v_buckets_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3677_; 
v_size_3633_ = lean_ctor_get(v_m_3630_, 0);
v_buckets_3634_ = lean_ctor_get(v_m_3630_, 1);
v_isSharedCheck_3677_ = !lean_is_exclusive(v_m_3630_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3636_ = v_m_3630_;
v_isShared_3637_ = v_isSharedCheck_3677_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_buckets_3634_);
lean_inc(v_size_3633_);
lean_dec(v_m_3630_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3677_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3638_; uint64_t v___x_3639_; uint64_t v___x_3640_; uint64_t v___x_3641_; uint64_t v_fold_3642_; uint64_t v___x_3643_; uint64_t v___x_3644_; uint64_t v___x_3645_; size_t v___x_3646_; size_t v___x_3647_; size_t v___x_3648_; size_t v___x_3649_; size_t v___x_3650_; lean_object* v_bkt_3651_; uint8_t v___x_3652_; 
v___x_3638_ = lean_array_get_size(v_buckets_3634_);
v___x_3639_ = l_Lean_instHashableFVarId_hash(v_a_3631_);
v___x_3640_ = 32ULL;
v___x_3641_ = lean_uint64_shift_right(v___x_3639_, v___x_3640_);
v_fold_3642_ = lean_uint64_xor(v___x_3639_, v___x_3641_);
v___x_3643_ = 16ULL;
v___x_3644_ = lean_uint64_shift_right(v_fold_3642_, v___x_3643_);
v___x_3645_ = lean_uint64_xor(v_fold_3642_, v___x_3644_);
v___x_3646_ = lean_uint64_to_usize(v___x_3645_);
v___x_3647_ = lean_usize_of_nat(v___x_3638_);
v___x_3648_ = ((size_t)1ULL);
v___x_3649_ = lean_usize_sub(v___x_3647_, v___x_3648_);
v___x_3650_ = lean_usize_land(v___x_3646_, v___x_3649_);
v_bkt_3651_ = lean_array_uget_borrowed(v_buckets_3634_, v___x_3650_);
v___x_3652_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(v_a_3631_, v_bkt_3651_);
if (v___x_3652_ == 0)
{
lean_object* v___x_3653_; lean_object* v_size_x27_3654_; lean_object* v___x_3655_; lean_object* v_buckets_x27_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; uint8_t v___x_3662_; 
v___x_3653_ = lean_unsigned_to_nat(1u);
v_size_x27_3654_ = lean_nat_add(v_size_3633_, v___x_3653_);
lean_dec(v_size_3633_);
lean_inc(v_bkt_3651_);
v___x_3655_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3655_, 0, v_a_3631_);
lean_ctor_set(v___x_3655_, 1, v_b_3632_);
lean_ctor_set(v___x_3655_, 2, v_bkt_3651_);
v_buckets_x27_3656_ = lean_array_uset(v_buckets_3634_, v___x_3650_, v___x_3655_);
v___x_3657_ = lean_unsigned_to_nat(4u);
v___x_3658_ = lean_nat_mul(v_size_x27_3654_, v___x_3657_);
v___x_3659_ = lean_unsigned_to_nat(3u);
v___x_3660_ = lean_nat_div(v___x_3658_, v___x_3659_);
lean_dec(v___x_3658_);
v___x_3661_ = lean_array_get_size(v_buckets_x27_3656_);
v___x_3662_ = lean_nat_dec_le(v___x_3660_, v___x_3661_);
lean_dec(v___x_3660_);
if (v___x_3662_ == 0)
{
lean_object* v_val_3663_; lean_object* v___x_3665_; 
v_val_3663_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1___redArg(v_buckets_x27_3656_);
if (v_isShared_3637_ == 0)
{
lean_ctor_set(v___x_3636_, 1, v_val_3663_);
lean_ctor_set(v___x_3636_, 0, v_size_x27_3654_);
v___x_3665_ = v___x_3636_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_size_x27_3654_);
lean_ctor_set(v_reuseFailAlloc_3666_, 1, v_val_3663_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
}
}
else
{
lean_object* v___x_3668_; 
if (v_isShared_3637_ == 0)
{
lean_ctor_set(v___x_3636_, 1, v_buckets_x27_3656_);
lean_ctor_set(v___x_3636_, 0, v_size_x27_3654_);
v___x_3668_ = v___x_3636_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_size_x27_3654_);
lean_ctor_set(v_reuseFailAlloc_3669_, 1, v_buckets_x27_3656_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
else
{
lean_object* v___x_3670_; lean_object* v_buckets_x27_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3675_; 
lean_inc(v_bkt_3651_);
v___x_3670_ = lean_box(0);
v_buckets_x27_3671_ = lean_array_uset(v_buckets_3634_, v___x_3650_, v___x_3670_);
v___x_3672_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(v_a_3631_, v_b_3632_, v_bkt_3651_);
v___x_3673_ = lean_array_uset(v_buckets_x27_3671_, v___x_3650_, v___x_3672_);
if (v_isShared_3637_ == 0)
{
lean_ctor_set(v___x_3636_, 1, v___x_3673_);
v___x_3675_ = v___x_3636_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_size_3633_);
lean_ctor_set(v_reuseFailAlloc_3676_, 1, v___x_3673_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(lean_object* v_as_3678_, size_t v_sz_3679_, size_t v_i_3680_, lean_object* v_b_3681_){
_start:
{
uint8_t v___x_3683_; 
v___x_3683_ = lean_usize_dec_lt(v_i_3680_, v_sz_3679_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; 
v___x_3684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3684_, 0, v_b_3681_);
return v___x_3684_;
}
else
{
lean_object* v_fst_3685_; lean_object* v_snd_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3702_; 
v_fst_3685_ = lean_ctor_get(v_b_3681_, 0);
v_snd_3686_ = lean_ctor_get(v_b_3681_, 1);
v_isSharedCheck_3702_ = !lean_is_exclusive(v_b_3681_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3688_ = v_b_3681_;
v_isShared_3689_ = v_isSharedCheck_3702_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_snd_3686_);
lean_inc(v_fst_3685_);
lean_dec(v_b_3681_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3702_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v_a_3690_; lean_object* v_fvar_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3697_; 
v_a_3690_ = lean_array_uget_borrowed(v_as_3678_, v_i_3680_);
v_fvar_3691_ = lean_ctor_get(v_a_3690_, 0);
v___x_3692_ = l_Lean_Expr_fvarId_x21(v_fvar_3691_);
lean_inc(v_snd_3686_);
v___x_3693_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0___redArg(v_fst_3685_, v___x_3692_, v_snd_3686_);
v___x_3694_ = lean_unsigned_to_nat(1u);
v___x_3695_ = lean_nat_add(v_snd_3686_, v___x_3694_);
lean_dec(v_snd_3686_);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 1, v___x_3695_);
lean_ctor_set(v___x_3688_, 0, v___x_3693_);
v___x_3697_ = v___x_3688_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v___x_3693_);
lean_ctor_set(v_reuseFailAlloc_3701_, 1, v___x_3695_);
v___x_3697_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
size_t v___x_3698_; size_t v___x_3699_; 
v___x_3698_ = ((size_t)1ULL);
v___x_3699_ = lean_usize_add(v_i_3680_, v___x_3698_);
v_i_3680_ = v___x_3699_;
v_b_3681_ = v___x_3697_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg___boxed(lean_object* v_as_3703_, lean_object* v_sz_3704_, lean_object* v_i_3705_, lean_object* v_b_3706_, lean_object* v___y_3707_){
_start:
{
size_t v_sz_boxed_3708_; size_t v_i_boxed_3709_; lean_object* v_res_3710_; 
v_sz_boxed_3708_ = lean_unbox_usize(v_sz_3704_);
lean_dec(v_sz_3704_);
v_i_boxed_3709_ = lean_unbox_usize(v_i_3705_);
lean_dec(v_i_3705_);
v_res_3710_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(v_as_3703_, v_sz_boxed_3708_, v_i_boxed_3709_, v_b_3706_);
lean_dec_ref(v_as_3703_);
return v_res_3710_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0(void){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3711_ = lean_box(0);
v___x_3712_ = lean_unsigned_to_nat(16u);
v___x_3713_ = lean_mk_array(v___x_3712_, v___x_3711_);
return v___x_3713_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1(void){
_start:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; 
v___x_3714_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0);
v___x_3715_ = lean_unsigned_to_nat(0u);
v___x_3716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3715_);
lean_ctor_set(v___x_3716_, 1, v___x_3714_);
return v___x_3716_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2(void){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3717_ = lean_unsigned_to_nat(0u);
v___x_3718_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1);
v___x_3719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3718_);
lean_ctor_set(v___x_3719_, 1, v___x_3717_);
return v___x_3719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets(lean_object* v_e_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_){
_start:
{
lean_object* v___x_3729_; lean_object* v_decls_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; uint8_t v___x_3733_; 
v___x_3729_ = lean_st_ref_get(v___y_3721_);
v_decls_3730_ = lean_ctor_get(v___x_3729_, 3);
lean_inc_ref(v_decls_3730_);
lean_dec(v___x_3729_);
v___x_3731_ = lean_array_get_size(v_decls_3730_);
v___x_3732_ = lean_unsigned_to_nat(0u);
v___x_3733_ = lean_nat_dec_eq(v___x_3731_, v___x_3732_);
if (v___x_3733_ == 0)
{
lean_object* v___x_3734_; lean_object* v___x_3735_; size_t v_sz_3736_; size_t v___x_3737_; lean_object* v___x_3738_; 
v___x_3734_ = lean_unsigned_to_nat(16u);
v___x_3735_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2);
v_sz_3736_ = lean_array_size(v_decls_3730_);
v___x_3737_ = ((size_t)0ULL);
v___x_3738_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(v_decls_3730_, v_sz_3736_, v___x_3737_, v___x_3735_);
if (lean_obj_tag(v___x_3738_) == 0)
{
lean_object* v_a_3739_; lean_object* v_fst_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3790_; 
v_a_3739_ = lean_ctor_get(v___x_3738_, 0);
lean_inc(v_a_3739_);
lean_dec_ref_known(v___x_3738_, 1);
v_fst_3740_ = lean_ctor_get(v_a_3739_, 0);
v_isSharedCheck_3790_ = !lean_is_exclusive(v_a_3739_);
if (v_isSharedCheck_3790_ == 0)
{
lean_object* v_unused_3791_; 
v_unused_3791_ = lean_ctor_get(v_a_3739_, 1);
lean_dec(v_unused_3791_);
v___x_3742_ = v_a_3739_;
v_isShared_3743_ = v_isSharedCheck_3790_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_fst_3740_);
lean_dec(v_a_3739_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3790_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v_a_3745_; lean_object* v___x_3769_; uint8_t v_debug_3770_; lean_object* v___x_3771_; lean_object* v___f_3772_; lean_object* v___x_3773_; lean_object* v_env_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3769_ = lean_st_ref_get(v___y_3723_);
v_debug_3770_ = lean_ctor_get_uint8(v___x_3769_, sizeof(void*)*11);
lean_dec(v___x_3769_);
v___x_3771_ = lean_box(v_debug_3770_);
lean_inc(v_fst_3740_);
v___f_3772_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0___boxed), 8, 6);
lean_closure_set(v___f_3772_, 0, v_e_3720_);
lean_closure_set(v___f_3772_, 1, v___x_3734_);
lean_closure_set(v___f_3772_, 2, v___x_3732_);
lean_closure_set(v___f_3772_, 3, v_fst_3740_);
lean_closure_set(v___f_3772_, 4, v___x_3731_);
lean_closure_set(v___f_3772_, 5, v___x_3771_);
v___x_3773_ = lean_st_ref_get(v___y_3727_);
v_env_3774_ = lean_ctor_get(v___x_3773_, 0);
lean_inc_ref(v_env_3774_);
lean_dec(v___x_3773_);
v___x_3775_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3775_, 0, v_env_3774_);
lean_ctor_set_uint8(v___x_3775_, sizeof(void*)*1, v___x_3733_);
lean_ctor_set_uint8(v___x_3775_, sizeof(void*)*1 + 1, v___x_3733_);
v___x_3776_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_3772_, v___x_3775_, v___y_3723_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_object* v_a_3777_; 
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
lean_inc(v_a_3777_);
lean_dec_ref_known(v___x_3776_, 1);
if (lean_obj_tag(v_a_3777_) == 0)
{
lean_object* v___x_3778_; lean_object* v___x_3779_; 
lean_dec_ref_known(v_a_3777_, 1);
v___x_3778_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2);
v___x_3779_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(v___x_3778_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_object* v_a_3780_; 
v_a_3780_ = lean_ctor_get(v___x_3779_, 0);
lean_inc(v_a_3780_);
lean_dec_ref_known(v___x_3779_, 1);
v_a_3745_ = v_a_3780_;
goto v___jp_3744_;
}
else
{
lean_del_object(v___x_3742_);
lean_dec(v_fst_3740_);
lean_dec_ref(v_decls_3730_);
return v___x_3779_;
}
}
else
{
lean_object* v_a_3781_; 
v_a_3781_ = lean_ctor_get(v_a_3777_, 0);
lean_inc(v_a_3781_);
lean_dec_ref_known(v_a_3777_, 1);
v_a_3745_ = v_a_3781_;
goto v___jp_3744_;
}
}
else
{
lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3789_; 
lean_del_object(v___x_3742_);
lean_dec(v_fst_3740_);
lean_dec_ref(v_decls_3730_);
v_a_3782_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3789_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3789_ == 0)
{
v___x_3784_ = v___x_3776_;
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_dec(v___x_3776_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_a_3782_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
v___jp_3744_:
{
lean_object* v___x_3746_; lean_object* v___x_3748_; 
v___x_3746_ = l_Array_reverse___redArg(v_decls_3730_);
if (v_isShared_3743_ == 0)
{
lean_ctor_set(v___x_3742_, 1, v___x_3731_);
lean_ctor_set(v___x_3742_, 0, v_a_3745_);
v___x_3748_ = v___x_3742_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3768_; 
v_reuseFailAlloc_3768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3768_, 0, v_a_3745_);
lean_ctor_set(v_reuseFailAlloc_3768_, 1, v___x_3731_);
v___x_3748_ = v_reuseFailAlloc_3768_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
size_t v_sz_3749_; lean_object* v___x_3750_; 
v_sz_3749_ = lean_array_size(v___x_3746_);
v___x_3750_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7(v_fst_3740_, v___x_3731_, v___x_3746_, v_sz_3749_, v___x_3737_, v___x_3748_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_);
lean_dec_ref(v___x_3746_);
if (lean_obj_tag(v___x_3750_) == 0)
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3759_; 
v_a_3751_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3753_ = v___x_3750_;
v_isShared_3754_ = v_isSharedCheck_3759_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3750_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3759_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v_fst_3755_; lean_object* v___x_3757_; 
v_fst_3755_ = lean_ctor_get(v_a_3751_, 0);
lean_inc(v_fst_3755_);
lean_dec(v_a_3751_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 0, v_fst_3755_);
v___x_3757_ = v___x_3753_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_fst_3755_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
else
{
lean_object* v_a_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3767_; 
v_a_3760_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3762_ = v___x_3750_;
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_a_3760_);
lean_dec(v___x_3750_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3765_; 
if (v_isShared_3763_ == 0)
{
v___x_3765_ = v___x_3762_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v_a_3760_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3792_; lean_object* v___x_3794_; uint8_t v_isShared_3795_; uint8_t v_isSharedCheck_3799_; 
lean_dec_ref(v_decls_3730_);
lean_dec_ref(v_e_3720_);
v_a_3792_ = lean_ctor_get(v___x_3738_, 0);
v_isSharedCheck_3799_ = !lean_is_exclusive(v___x_3738_);
if (v_isSharedCheck_3799_ == 0)
{
v___x_3794_ = v___x_3738_;
v_isShared_3795_ = v_isSharedCheck_3799_;
goto v_resetjp_3793_;
}
else
{
lean_inc(v_a_3792_);
lean_dec(v___x_3738_);
v___x_3794_ = lean_box(0);
v_isShared_3795_ = v_isSharedCheck_3799_;
goto v_resetjp_3793_;
}
v_resetjp_3793_:
{
lean_object* v___x_3797_; 
if (v_isShared_3795_ == 0)
{
v___x_3797_ = v___x_3794_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v_a_3792_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
return v___x_3797_;
}
}
}
}
else
{
lean_object* v___x_3800_; 
lean_dec_ref(v_decls_3730_);
v___x_3800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3800_, 0, v_e_3720_);
return v___x_3800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___boxed(lean_object* v_e_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_){
_start:
{
lean_object* v_res_3810_; 
v_res_3810_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets(v_e_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_, v___y_3807_, v___y_3808_);
lean_dec(v___y_3808_);
lean_dec_ref(v___y_3807_);
lean_dec(v___y_3806_);
lean_dec_ref(v___y_3805_);
lean_dec(v___y_3804_);
lean_dec_ref(v___y_3803_);
lean_dec(v___y_3802_);
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0(lean_object* v_00_u03b2_3811_, lean_object* v_m_3812_, lean_object* v_a_3813_, lean_object* v_b_3814_){
_start:
{
lean_object* v___x_3815_; 
v___x_3815_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0___redArg(v_m_3812_, v_a_3813_, v_b_3814_);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1(lean_object* v_as_3816_, size_t v_sz_3817_, size_t v_i_3818_, lean_object* v_b_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_){
_start:
{
lean_object* v___x_3828_; 
v___x_3828_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(v_as_3816_, v_sz_3817_, v_i_3818_, v_b_3819_);
return v___x_3828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___boxed(lean_object* v_as_3829_, lean_object* v_sz_3830_, lean_object* v_i_3831_, lean_object* v_b_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_){
_start:
{
size_t v_sz_boxed_3841_; size_t v_i_boxed_3842_; lean_object* v_res_3843_; 
v_sz_boxed_3841_ = lean_unbox_usize(v_sz_3830_);
lean_dec(v_sz_3830_);
v_i_boxed_3842_ = lean_unbox_usize(v_i_3831_);
lean_dec(v_i_3831_);
v_res_3843_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1(v_as_3829_, v_sz_boxed_3841_, v_i_boxed_3842_, v_b_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_);
lean_dec(v___y_3839_);
lean_dec_ref(v___y_3838_);
lean_dec(v___y_3837_);
lean_dec_ref(v___y_3836_);
lean_dec(v___y_3835_);
lean_dec_ref(v___y_3834_);
lean_dec(v___y_3833_);
lean_dec_ref(v_as_3829_);
return v_res_3843_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2(lean_object* v_00_u03b2_3844_, lean_object* v_m_3845_, lean_object* v_a_3846_){
_start:
{
lean_object* v___x_3847_; 
v___x_3847_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v_m_3845_, v_a_3846_);
return v___x_3847_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___boxed(lean_object* v_00_u03b2_3848_, lean_object* v_m_3849_, lean_object* v_a_3850_){
_start:
{
lean_object* v_res_3851_; 
v_res_3851_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2(v_00_u03b2_3848_, v_m_3849_, v_a_3850_);
lean_dec(v_a_3850_);
lean_dec_ref(v_m_3849_);
return v_res_3851_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0(lean_object* v_00_u03b2_3852_, lean_object* v_a_3853_, lean_object* v_x_3854_){
_start:
{
uint8_t v___x_3855_; 
v___x_3855_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(v_a_3853_, v_x_3854_);
return v___x_3855_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3856_, lean_object* v_a_3857_, lean_object* v_x_3858_){
_start:
{
uint8_t v_res_3859_; lean_object* v_r_3860_; 
v_res_3859_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0(v_00_u03b2_3856_, v_a_3857_, v_x_3858_);
lean_dec(v_x_3858_);
lean_dec(v_a_3857_);
v_r_3860_ = lean_box(v_res_3859_);
return v_r_3860_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1(lean_object* v_00_u03b2_3861_, lean_object* v_data_3862_){
_start:
{
lean_object* v___x_3863_; 
v___x_3863_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1___redArg(v_data_3862_);
return v___x_3863_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2(lean_object* v_00_u03b2_3864_, lean_object* v_a_3865_, lean_object* v_b_3866_, lean_object* v_x_3867_){
_start:
{
lean_object* v___x_3868_; 
v___x_3868_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(v_a_3865_, v_b_3866_, v_x_3867_);
return v___x_3868_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5(lean_object* v_00_u03b2_3869_, lean_object* v_a_3870_, lean_object* v_x_3871_){
_start:
{
lean_object* v___x_3872_; 
v___x_3872_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(v_a_3870_, v_x_3871_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___boxed(lean_object* v_00_u03b2_3873_, lean_object* v_a_3874_, lean_object* v_x_3875_){
_start:
{
lean_object* v_res_3876_; 
v_res_3876_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5(v_00_u03b2_3873_, v_a_3874_, v_x_3875_);
lean_dec(v_x_3875_);
lean_dec(v_a_3874_);
return v_res_3876_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_3877_, lean_object* v_i_3878_, lean_object* v_source_3879_, lean_object* v_target_3880_){
_start:
{
lean_object* v___x_3881_; 
v___x_3881_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5___redArg(v_i_3878_, v_source_3879_, v_target_3880_);
return v___x_3881_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10(lean_object* v_00_u03b2_3882_, lean_object* v_x_3883_, lean_object* v_x_3884_){
_start:
{
lean_object* v___x_3885_; 
v___x_3885_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10___redArg(v_x_3883_, v_x_3884_);
return v___x_3885_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(lean_object* v_msg_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_){
_start:
{
lean_object* v_ref_3892_; lean_object* v___x_3893_; lean_object* v_a_3894_; lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3902_; 
v_ref_3892_ = lean_ctor_get(v___y_3889_, 2);
v___x_3893_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(v_msg_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_);
v_a_3894_ = lean_ctor_get(v___x_3893_, 0);
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3893_);
if (v_isSharedCheck_3902_ == 0)
{
v___x_3896_ = v___x_3893_;
v_isShared_3897_ = v_isSharedCheck_3902_;
goto v_resetjp_3895_;
}
else
{
lean_inc(v_a_3894_);
lean_dec(v___x_3893_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3902_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3898_; lean_object* v___x_3900_; 
lean_inc(v_ref_3892_);
v___x_3898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3898_, 0, v_ref_3892_);
lean_ctor_set(v___x_3898_, 1, v_a_3894_);
if (v_isShared_3897_ == 0)
{
lean_ctor_set_tag(v___x_3896_, 1);
lean_ctor_set(v___x_3896_, 0, v___x_3898_);
v___x_3900_ = v___x_3896_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3898_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg___boxed(lean_object* v_msg_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v_res_3909_; 
v_res_3909_ = l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(v_msg_3903_, v___y_3904_, v___y_3905_, v___y_3906_, v___y_3907_);
lean_dec(v___y_3907_);
lean_dec_ref(v___y_3906_);
lean_dec(v___y_3905_);
lean_dec_ref(v___y_3904_);
return v_res_3909_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_liftLets___closed__0(void){
_start:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3910_ = lean_box(0);
v___x_3911_ = lean_unsigned_to_nat(16u);
v___x_3912_ = lean_mk_array(v___x_3911_, v___x_3910_);
return v___x_3912_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_liftLets___closed__1(void){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3913_ = lean_obj_once(&l_Lean_Meta_Sym_liftLets___closed__0, &l_Lean_Meta_Sym_liftLets___closed__0_once, _init_l_Lean_Meta_Sym_liftLets___closed__0);
v___x_3914_ = lean_unsigned_to_nat(0u);
v___x_3915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3914_);
lean_ctor_set(v___x_3915_, 1, v___x_3913_);
return v___x_3915_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_liftLets___closed__3(void){
_start:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3918_ = ((lean_object*)(l_Lean_Meta_Sym_liftLets___closed__2));
v___x_3919_ = lean_obj_once(&l_Lean_Meta_Sym_liftLets___closed__1, &l_Lean_Meta_Sym_liftLets___closed__1_once, _init_l_Lean_Meta_Sym_liftLets___closed__1);
v___x_3920_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
lean_ctor_set(v___x_3920_, 1, v___x_3919_);
lean_ctor_set(v___x_3920_, 2, v___x_3919_);
lean_ctor_set(v___x_3920_, 3, v___x_3918_);
lean_ctor_set(v___x_3920_, 4, v___x_3919_);
return v___x_3920_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_liftLets___closed__5(void){
_start:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; 
v___x_3922_ = ((lean_object*)(l_Lean_Meta_Sym_liftLets___closed__4));
v___x_3923_ = l_Lean_stringToMessageData(v___x_3922_);
return v___x_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLets(lean_object* v_e_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v___y_3933_; lean_object* v___y_3934_; lean_object* v___y_3945_; lean_object* v___y_3946_; lean_object* v___y_3947_; lean_object* v___y_3948_; lean_object* v___y_3949_; lean_object* v___y_3950_; uint8_t v___x_3957_; 
v___x_3957_ = l_Lean_Expr_hasLooseBVars(v_e_3924_);
if (v___x_3957_ == 0)
{
v___y_3945_ = v___y_3925_;
v___y_3946_ = v___y_3926_;
v___y_3947_ = v___y_3927_;
v___y_3948_ = v___y_3928_;
v___y_3949_ = v___y_3929_;
v___y_3950_ = v___y_3930_;
goto v___jp_3944_;
}
else
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v_a_3960_; lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3967_; 
lean_dec_ref(v_e_3924_);
v___x_3958_ = lean_obj_once(&l_Lean_Meta_Sym_liftLets___closed__5, &l_Lean_Meta_Sym_liftLets___closed__5_once, _init_l_Lean_Meta_Sym_liftLets___closed__5);
v___x_3959_ = l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(v___x_3958_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
v_a_3960_ = lean_ctor_get(v___x_3959_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3959_);
if (v_isSharedCheck_3967_ == 0)
{
v___x_3962_ = v___x_3959_;
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
else
{
lean_inc(v_a_3960_);
lean_dec(v___x_3959_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
lean_object* v___x_3965_; 
if (v_isShared_3963_ == 0)
{
v___x_3965_ = v___x_3962_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_a_3960_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
return v___x_3965_;
}
}
}
v___jp_3932_:
{
if (lean_obj_tag(v___y_3934_) == 0)
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3943_; 
v_a_3935_ = lean_ctor_get(v___y_3934_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v___y_3934_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3937_ = v___y_3934_;
v_isShared_3938_ = v_isSharedCheck_3943_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v___y_3934_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3943_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3939_; lean_object* v___x_3941_; 
v___x_3939_ = lean_st_ref_get(v___y_3933_);
lean_dec(v___y_3933_);
lean_dec(v___x_3939_);
if (v_isShared_3938_ == 0)
{
v___x_3941_ = v___x_3937_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v_a_3935_);
v___x_3941_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
return v___x_3941_;
}
}
}
else
{
lean_dec(v___y_3933_);
return v___y_3934_;
}
}
v___jp_3944_:
{
lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3951_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3);
v___x_3952_ = lean_obj_once(&l_Lean_Meta_Sym_liftLets___closed__3, &l_Lean_Meta_Sym_liftLets___closed__3_once, _init_l_Lean_Meta_Sym_liftLets___closed__3);
v___x_3953_ = lean_st_mk_ref(v___x_3952_);
v___x_3954_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v___x_3951_, v_e_3924_, v___x_3953_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; lean_object* v___x_3956_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_a_3955_);
lean_dec_ref_known(v___x_3954_, 1);
v___x_3956_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets(v_a_3955_, v___x_3953_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
v___y_3933_ = v___x_3953_;
v___y_3934_ = v___x_3956_;
goto v___jp_3932_;
}
else
{
v___y_3933_ = v___x_3953_;
v___y_3934_ = v___x_3954_;
goto v___jp_3932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLets___boxed(lean_object* v_e_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Lean_Meta_Sym_liftLets(v_e_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_);
lean_dec(v___y_3974_);
lean_dec_ref(v___y_3973_);
lean_dec(v___y_3972_);
lean_dec_ref(v___y_3971_);
lean_dec(v___y_3970_);
lean_dec_ref(v___y_3969_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0(lean_object* v_00_u03b1_3977_, lean_object* v_msg_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_){
_start:
{
lean_object* v___x_3986_; 
v___x_3986_ = l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(v_msg_3978_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_);
return v___x_3986_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___boxed(lean_object* v_00_u03b1_3987_, lean_object* v_msg_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0(v_00_u03b1_3987_, v_msg_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_);
lean_dec(v___y_3994_);
lean_dec_ref(v___y_3993_);
lean_dec(v___y_3992_);
lean_dec_ref(v___y_3991_);
lean_dec(v___y_3990_);
lean_dec_ref(v___y_3989_);
return v_res_3996_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_LiftLet(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default = _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default();
lean_mark_persistent(l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default);
l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl = _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl();
lean_mark_persistent(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_LiftLet(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_LiftLet(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_LiftLet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_LiftLet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_LiftLet(builtin);
}
#ifdef __cplusplus
}
#endif
