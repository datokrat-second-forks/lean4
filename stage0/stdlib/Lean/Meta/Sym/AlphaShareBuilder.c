// Lean compiler output
// Module: Lean.Meta.Sym.AlphaShareBuilder
// Imports: public import Lean.Meta.Sym.SymM
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_EStateM_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_EStateM_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_seqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_ReaderT_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lit___override(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_Sym_isDebugEnabled___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "__dummy__"};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 141, 137, 132, 208, 124, 31, 129)}};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Sym_share1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_Meta_Sym_Internal_Sym_share1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Sym.AlphaShareBuilder"};
static const lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.Sym.Internal.Sym.assertShared"};
static const lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "assertion violation: isSameExpr prev.expr e\n\n"};
static const lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Internal_Sym_share1___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0_value;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Internal_Sym_assertShared___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1_value;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_isDebugEnabled___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__0_value),((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__1_value),((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__2_value)}};
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.Sym.Internal.liftBuilderM"};
static const lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Meta.Sym.Internal.Builder.assertShared"};
static const lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 121, .m_capacity = 121, .m_length = 116, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Sym.AlphaShareBuilder.3401574005._hygCtx._hyg.9.0 ).set.contains ⟨e⟩\n\n"};
static const lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0_value;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1_value;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__2_value;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_map, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__3_value),((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__0_value)}};
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__4_value;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__5_value;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_seqRight, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__4_value),((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__5_value),((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__1_value),((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__2_value),((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__6_value)}};
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__7_value;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_bind, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__7_value),((lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__8_value)}};
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__10;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Internal_Builder_share1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__11 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__11_value;
static const lean_closure_object l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Internal_Builder_assertShared___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__12 = (const lean_object*)&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__13;
static lean_once_cell_t l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLitS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLitS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMVarS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMVarS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateAppS_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Expr.updateAppS!"};
static const lean_object* l_Lean_Expr_updateAppS_x21___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_updateAppS_x21___redArg___closed__0_value;
static const lean_string_object l_Lean_Expr_updateAppS_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "application expected"};
static const lean_object* l_Lean_Expr_updateAppS_x21___redArg___closed__1 = (const lean_object*)&l_Lean_Expr_updateAppS_x21___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Expr_updateAppS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateAppS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateAppS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateAppS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateMDataS_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Expr.updateMDataS!"};
static const lean_object* l_Lean_Expr_updateMDataS_x21___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_updateMDataS_x21___redArg___closed__0_value;
static const lean_string_object l_Lean_Expr_updateMDataS_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "mdata expected"};
static const lean_object* l_Lean_Expr_updateMDataS_x21___redArg___closed__1 = (const lean_object*)&l_Lean_Expr_updateMDataS_x21___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Expr_updateMDataS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateMDataS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateMDataS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateMDataS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateProjS_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Expr.updateProjS!"};
static const lean_object* l_Lean_Expr_updateProjS_x21___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_updateProjS_x21___redArg___closed__0_value;
static const lean_string_object l_Lean_Expr_updateProjS_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proj expected"};
static const lean_object* l_Lean_Expr_updateProjS_x21___redArg___closed__1 = (const lean_object*)&l_Lean_Expr_updateProjS_x21___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Expr_updateProjS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateProjS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateProjS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateProjS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateForallS_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Expr.updateForallS!"};
static const lean_object* l_Lean_Expr_updateForallS_x21___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_updateForallS_x21___redArg___closed__0_value;
static const lean_string_object l_Lean_Expr_updateForallS_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "forall expected"};
static const lean_object* l_Lean_Expr_updateForallS_x21___redArg___closed__1 = (const lean_object*)&l_Lean_Expr_updateForallS_x21___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Expr_updateForallS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateForallS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateLambdaS_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Expr.updateLambdaS!"};
static const lean_object* l_Lean_Expr_updateLambdaS_x21___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_updateLambdaS_x21___redArg___closed__0_value;
static const lean_string_object l_Lean_Expr_updateLambdaS_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "lambda expected"};
static const lean_object* l_Lean_Expr_updateLambdaS_x21___redArg___closed__1 = (const lean_object*)&l_Lean_Expr_updateLambdaS_x21___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Expr_updateLambdaS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLambdaS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_updateLetS_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Expr.updateLetS!"};
static const lean_object* l_Lean_Expr_updateLetS_x21___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_updateLetS_x21___redArg___closed__0_value;
static const lean_string_object l_Lean_Expr_updateLetS_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "let expression expected"};
static const lean_object* l_Lean_Expr_updateLetS_x21___redArg___closed__1 = (const lean_object*)&l_Lean_Expr_updateLetS_x21___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Expr_updateLetS_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_updateLetS_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetS_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetS_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRangeS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__0(lean_object* v_share1_1_, lean_object* v_inst_2_, lean_object* v_e_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_apply_1(v_share1_1_, v_e_3_);
v___x_5_ = lean_apply_2(v_inst_2_, lean_box(0), v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__1(lean_object* v_assertShared_6_, lean_object* v_inst_7_, lean_object* v_e_8_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_apply_1(v_assertShared_6_, v_e_8_);
v___x_10_ = lean_apply_2(v_inst_7_, lean_box(0), v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg(lean_object* v_inst_11_, lean_object* v_inst_12_){
_start:
{
lean_object* v_share1_13_; lean_object* v_assertShared_14_; lean_object* v_isDebugEnabled_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_25_; 
v_share1_13_ = lean_ctor_get(v_inst_12_, 0);
v_assertShared_14_ = lean_ctor_get(v_inst_12_, 1);
v_isDebugEnabled_15_ = lean_ctor_get(v_inst_12_, 2);
v_isSharedCheck_25_ = !lean_is_exclusive(v_inst_12_);
if (v_isSharedCheck_25_ == 0)
{
v___x_17_ = v_inst_12_;
v_isShared_18_ = v_isSharedCheck_25_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_isDebugEnabled_15_);
lean_inc(v_assertShared_14_);
lean_inc(v_share1_13_);
lean_dec(v_inst_12_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_25_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___f_19_; lean_object* v___f_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
lean_inc_n(v_inst_11_, 2);
v___f_19_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_19_, 0, v_share1_13_);
lean_closure_set(v___f_19_, 1, v_inst_11_);
v___f_20_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__1), 3, 2);
lean_closure_set(v___f_20_, 0, v_assertShared_14_);
lean_closure_set(v___f_20_, 1, v_inst_11_);
v___x_21_ = lean_apply_2(v_inst_11_, lean_box(0), v_isDebugEnabled_15_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 2, v___x_21_);
lean_ctor_set(v___x_17_, 1, v___f_20_);
lean_ctor_set(v___x_17_, 0, v___f_19_);
v___x_23_ = v___x_17_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___f_19_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v___f_20_);
lean_ctor_set(v_reuseFailAlloc_24_, 2, v___x_21_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift(lean_object* v_m_26_, lean_object* v_n_27_, lean_object* v_inst_28_, lean_object* v_inst_29_){
_start:
{
lean_object* v_share1_30_; lean_object* v_assertShared_31_; lean_object* v_isDebugEnabled_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_42_; 
v_share1_30_ = lean_ctor_get(v_inst_29_, 0);
v_assertShared_31_ = lean_ctor_get(v_inst_29_, 1);
v_isDebugEnabled_32_ = lean_ctor_get(v_inst_29_, 2);
v_isSharedCheck_42_ = !lean_is_exclusive(v_inst_29_);
if (v_isSharedCheck_42_ == 0)
{
v___x_34_ = v_inst_29_;
v_isShared_35_ = v_isSharedCheck_42_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_isDebugEnabled_32_);
lean_inc(v_assertShared_31_);
lean_inc(v_share1_30_);
lean_dec(v_inst_29_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_42_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___f_36_; lean_object* v___f_37_; lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc_n(v_inst_28_, 2);
v___f_36_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_36_, 0, v_share1_30_);
lean_closure_set(v___f_36_, 1, v_inst_28_);
v___f_37_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonOfMonadLift___redArg___lam__1), 3, 2);
lean_closure_set(v___f_37_, 0, v_assertShared_31_);
lean_closure_set(v___f_37_, 1, v_inst_28_);
v___x_38_ = lean_apply_2(v_inst_28_, lean_box(0), v_isDebugEnabled_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 2, v___x_38_);
lean_ctor_set(v___x_34_, 1, v___f_37_);
lean_ctor_set(v___x_34_, 0, v___f_36_);
v___x_40_ = v___x_34_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___f_36_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___f_37_);
lean_ctor_set(v_reuseFailAlloc_41_, 2, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_box(0);
v___x_47_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__1));
v___x_48_ = l_Lean_mkConst(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2, &l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2_once, _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy___closed__2);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_50_, lean_object* v_x_51_, lean_object* v_x_52_, lean_object* v_x_53_){
_start:
{
lean_object* v_ks_54_; lean_object* v_vs_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_79_; 
v_ks_54_ = lean_ctor_get(v_x_50_, 0);
v_vs_55_ = lean_ctor_get(v_x_50_, 1);
v_isSharedCheck_79_ = !lean_is_exclusive(v_x_50_);
if (v_isSharedCheck_79_ == 0)
{
v___x_57_ = v_x_50_;
v_isShared_58_ = v_isSharedCheck_79_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_vs_55_);
lean_inc(v_ks_54_);
lean_dec(v_x_50_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_79_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = lean_array_get_size(v_ks_54_);
v___x_60_ = lean_nat_dec_lt(v_x_51_, v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_64_; 
lean_dec(v_x_51_);
v___x_61_ = lean_array_push(v_ks_54_, v_x_52_);
v___x_62_ = lean_array_push(v_vs_55_, v_x_53_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 1, v___x_62_);
lean_ctor_set(v___x_57_, 0, v___x_61_);
v___x_64_ = v___x_57_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_61_);
lean_ctor_set(v_reuseFailAlloc_65_, 1, v___x_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
else
{
lean_object* v_k_x27_66_; uint8_t v___x_67_; 
v_k_x27_66_ = lean_array_fget_borrowed(v_ks_54_, v_x_51_);
v___x_67_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_52_, v_k_x27_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_69_; 
if (v_isShared_58_ == 0)
{
v___x_69_ = v___x_57_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_ks_54_);
lean_ctor_set(v_reuseFailAlloc_73_, 1, v_vs_55_);
v___x_69_ = v_reuseFailAlloc_73_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_unsigned_to_nat(1u);
v___x_71_ = lean_nat_add(v_x_51_, v___x_70_);
lean_dec(v_x_51_);
v_x_50_ = v___x_69_;
v_x_51_ = v___x_71_;
goto _start;
}
}
else
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_74_ = lean_array_fset(v_ks_54_, v_x_51_, v_x_52_);
v___x_75_ = lean_array_fset(v_vs_55_, v_x_51_, v_x_53_);
lean_dec(v_x_51_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 1, v___x_75_);
lean_ctor_set(v___x_57_, 0, v___x_74_);
v___x_77_ = v___x_57_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v___x_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3___redArg(lean_object* v_n_80_, lean_object* v_k_81_, lean_object* v_v_82_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4___redArg(v_n_80_, v___x_83_, v_k_81_, v_v_82_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(lean_object* v_x_86_, size_t v_x_87_, size_t v_x_88_, lean_object* v_x_89_, lean_object* v_x_90_){
_start:
{
if (lean_obj_tag(v_x_86_) == 0)
{
lean_object* v_es_91_; size_t v___x_92_; size_t v___x_93_; lean_object* v_j_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v_es_91_ = lean_ctor_get(v_x_86_, 0);
v___x_92_ = ((size_t)31ULL);
v___x_93_ = lean_usize_land(v_x_87_, v___x_92_);
v_j_94_ = lean_usize_to_nat(v___x_93_);
v___x_95_ = lean_array_get_size(v_es_91_);
v___x_96_ = lean_nat_dec_lt(v_j_94_, v___x_95_);
if (v___x_96_ == 0)
{
lean_dec(v_j_94_);
lean_dec(v_x_90_);
lean_dec_ref(v_x_89_);
return v_x_86_;
}
else
{
lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_135_; 
lean_inc_ref(v_es_91_);
v_isSharedCheck_135_ = !lean_is_exclusive(v_x_86_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; 
v_unused_136_ = lean_ctor_get(v_x_86_, 0);
lean_dec(v_unused_136_);
v___x_98_ = v_x_86_;
v_isShared_99_ = v_isSharedCheck_135_;
goto v_resetjp_97_;
}
else
{
lean_dec(v_x_86_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_135_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v_v_100_; lean_object* v___x_101_; lean_object* v_xs_x27_102_; lean_object* v___y_104_; 
v_v_100_ = lean_array_fget(v_es_91_, v_j_94_);
v___x_101_ = lean_box(0);
v_xs_x27_102_ = lean_array_fset(v_es_91_, v_j_94_, v___x_101_);
switch(lean_obj_tag(v_v_100_))
{
case 0:
{
lean_object* v_key_109_; lean_object* v_val_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_120_; 
v_key_109_ = lean_ctor_get(v_v_100_, 0);
v_val_110_ = lean_ctor_get(v_v_100_, 1);
v_isSharedCheck_120_ = !lean_is_exclusive(v_v_100_);
if (v_isSharedCheck_120_ == 0)
{
v___x_112_ = v_v_100_;
v_isShared_113_ = v_isSharedCheck_120_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_val_110_);
lean_inc(v_key_109_);
lean_dec(v_v_100_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_120_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
uint8_t v___x_114_; 
v___x_114_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_89_, v_key_109_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; lean_object* v___x_116_; 
lean_del_object(v___x_112_);
v___x_115_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_109_, v_val_110_, v_x_89_, v_x_90_);
v___x_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
v___y_104_ = v___x_116_;
goto v___jp_103_;
}
else
{
lean_object* v___x_118_; 
lean_dec(v_val_110_);
lean_dec(v_key_109_);
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 1, v_x_90_);
lean_ctor_set(v___x_112_, 0, v_x_89_);
v___x_118_ = v___x_112_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_x_89_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v_x_90_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
v___y_104_ = v___x_118_;
goto v___jp_103_;
}
}
}
}
case 1:
{
lean_object* v_node_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_133_; 
v_node_121_ = lean_ctor_get(v_v_100_, 0);
v_isSharedCheck_133_ = !lean_is_exclusive(v_v_100_);
if (v_isSharedCheck_133_ == 0)
{
v___x_123_ = v_v_100_;
v_isShared_124_ = v_isSharedCheck_133_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_node_121_);
lean_dec(v_v_100_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_133_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
size_t v___x_125_; size_t v___x_126_; size_t v___x_127_; size_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_125_ = ((size_t)5ULL);
v___x_126_ = lean_usize_shift_right(v_x_87_, v___x_125_);
v___x_127_ = ((size_t)1ULL);
v___x_128_ = lean_usize_add(v_x_88_, v___x_127_);
v___x_129_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_node_121_, v___x_126_, v___x_128_, v_x_89_, v_x_90_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 0, v___x_129_);
v___x_131_ = v___x_123_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
v___y_104_ = v___x_131_;
goto v___jp_103_;
}
}
}
default: 
{
lean_object* v___x_134_; 
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v_x_89_);
lean_ctor_set(v___x_134_, 1, v_x_90_);
v___y_104_ = v___x_134_;
goto v___jp_103_;
}
}
v___jp_103_:
{
lean_object* v___x_105_; lean_object* v___x_107_; 
v___x_105_ = lean_array_fset(v_xs_x27_102_, v_j_94_, v___y_104_);
lean_dec(v_j_94_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 0, v___x_105_);
v___x_107_ = v___x_98_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v___x_105_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
}
else
{
lean_object* v_ks_137_; lean_object* v_vs_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_156_; 
v_ks_137_ = lean_ctor_get(v_x_86_, 0);
v_vs_138_ = lean_ctor_get(v_x_86_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_x_86_);
if (v_isSharedCheck_156_ == 0)
{
v___x_140_ = v_x_86_;
v_isShared_141_ = v_isSharedCheck_156_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_vs_138_);
lean_inc(v_ks_137_);
lean_dec(v_x_86_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_156_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_ks_137_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v_vs_138_);
v___x_143_ = v_reuseFailAlloc_155_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v_newNode_144_; size_t v___x_145_; uint8_t v___x_146_; 
v_newNode_144_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3___redArg(v___x_143_, v_x_89_, v_x_90_);
v___x_145_ = ((size_t)7ULL);
v___x_146_ = lean_usize_dec_le(v___x_145_, v_x_88_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_147_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_144_);
v___x_148_ = lean_unsigned_to_nat(4u);
v___x_149_ = lean_nat_dec_lt(v___x_147_, v___x_148_);
lean_dec(v___x_147_);
if (v___x_149_ == 0)
{
lean_object* v_ks_150_; lean_object* v_vs_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v_ks_150_ = lean_ctor_get(v_newNode_144_, 0);
lean_inc_ref(v_ks_150_);
v_vs_151_ = lean_ctor_get(v_newNode_144_, 1);
lean_inc_ref(v_vs_151_);
lean_dec_ref(v_newNode_144_);
v___x_152_ = lean_unsigned_to_nat(0u);
v___x_153_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___closed__0);
v___x_154_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(v_x_88_, v_ks_150_, v_vs_151_, v___x_152_, v___x_153_);
lean_dec_ref(v_vs_151_);
lean_dec_ref(v_ks_150_);
return v___x_154_;
}
else
{
return v_newNode_144_;
}
}
else
{
return v_newNode_144_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(size_t v_depth_157_, lean_object* v_keys_158_, lean_object* v_vals_159_, lean_object* v_i_160_, lean_object* v_entries_161_){
_start:
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = lean_array_get_size(v_keys_158_);
v___x_163_ = lean_nat_dec_lt(v_i_160_, v___x_162_);
if (v___x_163_ == 0)
{
lean_dec(v_i_160_);
return v_entries_161_;
}
else
{
lean_object* v_k_164_; lean_object* v_v_165_; uint64_t v___x_166_; size_t v_h_167_; size_t v___x_168_; lean_object* v___x_169_; size_t v___x_170_; size_t v___x_171_; size_t v___x_172_; size_t v_h_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_k_164_ = lean_array_fget_borrowed(v_keys_158_, v_i_160_);
v_v_165_ = lean_array_fget_borrowed(v_vals_159_, v_i_160_);
v___x_166_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_164_);
v_h_167_ = lean_uint64_to_usize(v___x_166_);
v___x_168_ = ((size_t)5ULL);
v___x_169_ = lean_unsigned_to_nat(1u);
v___x_170_ = ((size_t)1ULL);
v___x_171_ = lean_usize_sub(v_depth_157_, v___x_170_);
v___x_172_ = lean_usize_mul(v___x_168_, v___x_171_);
v_h_173_ = lean_usize_shift_right(v_h_167_, v___x_172_);
v___x_174_ = lean_nat_add(v_i_160_, v___x_169_);
lean_dec(v_i_160_);
lean_inc(v_v_165_);
lean_inc(v_k_164_);
v___x_175_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_entries_161_, v_h_173_, v_depth_157_, v_k_164_, v_v_165_);
v_i_160_ = v___x_174_;
v_entries_161_ = v___x_175_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_depth_177_, lean_object* v_keys_178_, lean_object* v_vals_179_, lean_object* v_i_180_, lean_object* v_entries_181_){
_start:
{
size_t v_depth_boxed_182_; lean_object* v_res_183_; 
v_depth_boxed_182_ = lean_unbox_usize(v_depth_177_);
lean_dec(v_depth_177_);
v_res_183_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(v_depth_boxed_182_, v_keys_178_, v_vals_179_, v_i_180_, v_entries_181_);
lean_dec_ref(v_vals_179_);
lean_dec_ref(v_keys_178_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg___boxed(lean_object* v_x_184_, lean_object* v_x_185_, lean_object* v_x_186_, lean_object* v_x_187_, lean_object* v_x_188_){
_start:
{
size_t v_x_2068__boxed_189_; size_t v_x_2069__boxed_190_; lean_object* v_res_191_; 
v_x_2068__boxed_189_ = lean_unbox_usize(v_x_185_);
lean_dec(v_x_185_);
v_x_2069__boxed_190_ = lean_unbox_usize(v_x_186_);
lean_dec(v_x_186_);
v_res_191_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_x_184_, v_x_2068__boxed_189_, v_x_2069__boxed_190_, v_x_187_, v_x_188_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(lean_object* v_x_192_, lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
uint64_t v___x_195_; size_t v___x_196_; size_t v___x_197_; lean_object* v___x_198_; 
v___x_195_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_193_);
v___x_196_ = lean_uint64_to_usize(v___x_195_);
v___x_197_ = ((size_t)1ULL);
v___x_198_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_x_192_, v___x_196_, v___x_197_, v_x_193_, v_x_194_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(lean_object* v_keys_199_, lean_object* v_i_200_, lean_object* v_k_201_, lean_object* v_k_u2080_202_){
_start:
{
lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_203_ = lean_array_get_size(v_keys_199_);
v___x_204_ = lean_nat_dec_lt(v_i_200_, v___x_203_);
if (v___x_204_ == 0)
{
lean_dec(v_i_200_);
lean_inc_ref(v_k_u2080_202_);
return v_k_u2080_202_;
}
else
{
lean_object* v_k_x27_205_; uint8_t v___x_206_; 
v_k_x27_205_ = lean_array_fget_borrowed(v_keys_199_, v_i_200_);
v___x_206_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_201_, v_k_x27_205_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_unsigned_to_nat(1u);
v___x_208_ = lean_nat_add(v_i_200_, v___x_207_);
lean_dec(v_i_200_);
v_i_200_ = v___x_208_;
goto _start;
}
else
{
lean_dec(v_i_200_);
lean_inc(v_k_x27_205_);
return v_k_x27_205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg___boxed(lean_object* v_keys_210_, lean_object* v_i_211_, lean_object* v_k_212_, lean_object* v_k_u2080_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(v_keys_210_, v_i_211_, v_k_212_, v_k_u2080_213_);
lean_dec_ref(v_k_u2080_213_);
lean_dec_ref(v_k_212_);
lean_dec_ref(v_keys_210_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(lean_object* v_x_215_, size_t v_x_216_, lean_object* v_x_217_, lean_object* v_x_218_){
_start:
{
if (lean_obj_tag(v_x_215_) == 0)
{
lean_object* v_es_219_; lean_object* v___x_220_; size_t v___x_221_; size_t v___x_222_; lean_object* v_j_223_; lean_object* v___x_224_; 
v_es_219_ = lean_ctor_get(v_x_215_, 0);
v___x_220_ = lean_box(2);
v___x_221_ = ((size_t)31ULL);
v___x_222_ = lean_usize_land(v_x_216_, v___x_221_);
v_j_223_ = lean_usize_to_nat(v___x_222_);
v___x_224_ = lean_array_get_borrowed(v___x_220_, v_es_219_, v_j_223_);
lean_dec(v_j_223_);
switch(lean_obj_tag(v___x_224_))
{
case 0:
{
lean_object* v_key_225_; uint8_t v___x_226_; 
v_key_225_ = lean_ctor_get(v___x_224_, 0);
v___x_226_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_217_, v_key_225_);
if (v___x_226_ == 0)
{
lean_inc_ref(v_x_218_);
return v_x_218_;
}
else
{
lean_inc(v_key_225_);
return v_key_225_;
}
}
case 1:
{
lean_object* v_node_227_; size_t v___x_228_; size_t v___x_229_; 
v_node_227_ = lean_ctor_get(v___x_224_, 0);
v___x_228_ = ((size_t)5ULL);
v___x_229_ = lean_usize_shift_right(v_x_216_, v___x_228_);
v_x_215_ = v_node_227_;
v_x_216_ = v___x_229_;
goto _start;
}
default: 
{
lean_inc_ref(v_x_218_);
return v_x_218_;
}
}
}
else
{
lean_object* v_ks_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v_ks_231_ = lean_ctor_get(v_x_215_, 0);
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(v_ks_231_, v___x_232_, v_x_217_, v_x_218_);
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg___boxed(lean_object* v_x_234_, lean_object* v_x_235_, lean_object* v_x_236_, lean_object* v_x_237_){
_start:
{
size_t v_x_2246__boxed_238_; lean_object* v_res_239_; 
v_x_2246__boxed_238_ = lean_unbox_usize(v_x_235_);
lean_dec(v_x_235_);
v_res_239_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_x_234_, v_x_2246__boxed_238_, v_x_236_, v_x_237_);
lean_dec_ref(v_x_237_);
lean_dec_ref(v_x_236_);
lean_dec_ref(v_x_234_);
return v_res_239_;
}
}
static size_t _init_l_Lean_Meta_Sym_Internal_Sym_share1___redArg___closed__0(void){
_start:
{
lean_object* v___x_240_; size_t v___x_241_; 
v___x_240_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy;
v___x_241_ = lean_ptr_addr(v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object* v_e_242_, lean_object* v_a_243_){
_start:
{
lean_object* v___x_245_; lean_object* v_share_246_; lean_object* v___x_247_; uint64_t v___x_248_; size_t v___x_249_; lean_object* v___x_250_; size_t v___x_251_; size_t v___x_252_; uint8_t v___x_253_; 
v___x_245_ = lean_st_ref_get(v_a_243_);
v_share_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc_ref(v_share_246_);
lean_dec(v___x_245_);
v___x_247_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy;
v___x_248_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_242_);
v___x_249_ = lean_uint64_to_usize(v___x_248_);
v___x_250_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_share_246_, v___x_249_, v_e_242_, v___x_247_);
lean_dec_ref(v_share_246_);
v___x_251_ = lean_ptr_addr(v___x_250_);
v___x_252_ = lean_usize_once(&l_Lean_Meta_Sym_Internal_Sym_share1___redArg___closed__0, &l_Lean_Meta_Sym_Internal_Sym_share1___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_share1___redArg___closed__0);
v___x_253_ = lean_usize_dec_eq(v___x_251_, v___x_252_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
lean_dec_ref(v_e_242_);
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_250_);
return v___x_254_;
}
else
{
lean_object* v___x_255_; lean_object* v_share_256_; lean_object* v_maxFVar_257_; lean_object* v_proofInstInfo_258_; lean_object* v_proofInstInfoFVar_259_; lean_object* v_inferType_260_; lean_object* v_getLevel_261_; lean_object* v_congrInfo_262_; lean_object* v_congrInfoFixedUDec_263_; lean_object* v_defEqI_264_; lean_object* v_extensions_265_; lean_object* v_issues_266_; lean_object* v_canon_267_; lean_object* v_instanceOverrides_268_; uint8_t v_debug_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_280_; 
lean_dec_ref(v___x_250_);
v___x_255_ = lean_st_ref_take(v_a_243_);
v_share_256_ = lean_ctor_get(v___x_255_, 0);
v_maxFVar_257_ = lean_ctor_get(v___x_255_, 1);
v_proofInstInfo_258_ = lean_ctor_get(v___x_255_, 2);
v_proofInstInfoFVar_259_ = lean_ctor_get(v___x_255_, 3);
v_inferType_260_ = lean_ctor_get(v___x_255_, 4);
v_getLevel_261_ = lean_ctor_get(v___x_255_, 5);
v_congrInfo_262_ = lean_ctor_get(v___x_255_, 6);
v_congrInfoFixedUDec_263_ = lean_ctor_get(v___x_255_, 7);
v_defEqI_264_ = lean_ctor_get(v___x_255_, 8);
v_extensions_265_ = lean_ctor_get(v___x_255_, 9);
v_issues_266_ = lean_ctor_get(v___x_255_, 10);
v_canon_267_ = lean_ctor_get(v___x_255_, 11);
v_instanceOverrides_268_ = lean_ctor_get(v___x_255_, 12);
v_debug_269_ = lean_ctor_get_uint8(v___x_255_, sizeof(void*)*13);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_280_ == 0)
{
v___x_271_ = v___x_255_;
v_isShared_272_ = v_isSharedCheck_280_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_instanceOverrides_268_);
lean_inc(v_canon_267_);
lean_inc(v_issues_266_);
lean_inc(v_extensions_265_);
lean_inc(v_defEqI_264_);
lean_inc(v_congrInfoFixedUDec_263_);
lean_inc(v_congrInfo_262_);
lean_inc(v_getLevel_261_);
lean_inc(v_inferType_260_);
lean_inc(v_proofInstInfoFVar_259_);
lean_inc(v_proofInstInfo_258_);
lean_inc(v_maxFVar_257_);
lean_inc(v_share_256_);
lean_dec(v___x_255_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_280_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_273_ = lean_box(0);
lean_inc_ref(v_e_242_);
v___x_274_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(v_share_256_, v_e_242_, v___x_273_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_274_);
v___x_276_ = v___x_271_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_274_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_maxFVar_257_);
lean_ctor_set(v_reuseFailAlloc_279_, 2, v_proofInstInfo_258_);
lean_ctor_set(v_reuseFailAlloc_279_, 3, v_proofInstInfoFVar_259_);
lean_ctor_set(v_reuseFailAlloc_279_, 4, v_inferType_260_);
lean_ctor_set(v_reuseFailAlloc_279_, 5, v_getLevel_261_);
lean_ctor_set(v_reuseFailAlloc_279_, 6, v_congrInfo_262_);
lean_ctor_set(v_reuseFailAlloc_279_, 7, v_congrInfoFixedUDec_263_);
lean_ctor_set(v_reuseFailAlloc_279_, 8, v_defEqI_264_);
lean_ctor_set(v_reuseFailAlloc_279_, 9, v_extensions_265_);
lean_ctor_set(v_reuseFailAlloc_279_, 10, v_issues_266_);
lean_ctor_set(v_reuseFailAlloc_279_, 11, v_canon_267_);
lean_ctor_set(v_reuseFailAlloc_279_, 12, v_instanceOverrides_268_);
lean_ctor_set_uint8(v_reuseFailAlloc_279_, sizeof(void*)*13, v_debug_269_);
v___x_276_ = v_reuseFailAlloc_279_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_st_ref_put(v_a_243_, v___x_276_);
v___x_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_278_, 0, v_e_242_);
return v___x_278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg___boxed(lean_object* v_e_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v_e_281_, v_a_282_);
lean_dec(v_a_282_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1(lean_object* v_e_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v_e_285_, v_a_287_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___boxed(lean_object* v_e_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Meta_Sym_Internal_Sym_share1(v_e_294_, v_a_295_, v_a_296_, v_a_297_, v_a_298_, v_a_299_, v_a_300_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec(v_a_298_);
lean_dec_ref(v_a_297_);
lean_dec(v_a_296_);
lean_dec_ref(v_a_295_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0(lean_object* v_00_u03b2_303_, lean_object* v_x_304_, size_t v_x_305_, lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_x_304_, v_x_305_, v_x_306_, v_x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___boxed(lean_object* v_00_u03b2_309_, lean_object* v_x_310_, lean_object* v_x_311_, lean_object* v_x_312_, lean_object* v_x_313_){
_start:
{
size_t v_x_2344__boxed_314_; lean_object* v_res_315_; 
v_x_2344__boxed_314_ = lean_unbox_usize(v_x_311_);
lean_dec(v_x_311_);
v_res_315_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0(v_00_u03b2_309_, v_x_310_, v_x_2344__boxed_314_, v_x_312_, v_x_313_);
lean_dec_ref(v_x_313_);
lean_dec_ref(v_x_312_);
lean_dec_ref(v_x_310_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1(lean_object* v_00_u03b2_316_, lean_object* v_x_317_, lean_object* v_x_318_, lean_object* v_x_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(v_x_317_, v_x_318_, v_x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0(lean_object* v_00_u03b2_321_, lean_object* v_keys_322_, lean_object* v_vals_323_, lean_object* v_heq_324_, lean_object* v_i_325_, lean_object* v_k_326_, lean_object* v_k_u2080_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___redArg(v_keys_322_, v_i_325_, v_k_326_, v_k_u2080_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0___boxed(lean_object* v_00_u03b2_329_, lean_object* v_keys_330_, lean_object* v_vals_331_, lean_object* v_heq_332_, lean_object* v_i_333_, lean_object* v_k_334_, lean_object* v_k_u2080_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0_spec__0(v_00_u03b2_329_, v_keys_330_, v_vals_331_, v_heq_332_, v_i_333_, v_k_334_, v_k_u2080_335_);
lean_dec_ref(v_k_u2080_335_);
lean_dec_ref(v_k_334_);
lean_dec_ref(v_vals_331_);
lean_dec_ref(v_keys_330_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2(lean_object* v_00_u03b2_337_, lean_object* v_x_338_, size_t v_x_339_, size_t v_x_340_, lean_object* v_x_341_, lean_object* v_x_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___redArg(v_x_338_, v_x_339_, v_x_340_, v_x_341_, v_x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_344_, lean_object* v_x_345_, lean_object* v_x_346_, lean_object* v_x_347_, lean_object* v_x_348_, lean_object* v_x_349_){
_start:
{
size_t v_x_2368__boxed_350_; size_t v_x_2369__boxed_351_; lean_object* v_res_352_; 
v_x_2368__boxed_350_ = lean_unbox_usize(v_x_346_);
lean_dec(v_x_346_);
v_x_2369__boxed_351_ = lean_unbox_usize(v_x_347_);
lean_dec(v_x_347_);
v_res_352_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2(v_00_u03b2_344_, v_x_345_, v_x_2368__boxed_350_, v_x_2369__boxed_351_, v_x_348_, v_x_349_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_353_, lean_object* v_n_354_, lean_object* v_k_355_, lean_object* v_v_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3___redArg(v_n_354_, v_k_355_, v_v_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_358_, size_t v_depth_359_, lean_object* v_keys_360_, lean_object* v_vals_361_, lean_object* v_heq_362_, lean_object* v_i_363_, lean_object* v_entries_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___redArg(v_depth_359_, v_keys_360_, v_vals_361_, v_i_363_, v_entries_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_366_, lean_object* v_depth_367_, lean_object* v_keys_368_, lean_object* v_vals_369_, lean_object* v_heq_370_, lean_object* v_i_371_, lean_object* v_entries_372_){
_start:
{
size_t v_depth_boxed_373_; lean_object* v_res_374_; 
v_depth_boxed_373_ = lean_unbox_usize(v_depth_367_);
lean_dec(v_depth_367_);
v_res_374_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__4(v_00_u03b2_366_, v_depth_boxed_373_, v_keys_368_, v_vals_369_, v_heq_370_, v_i_371_, v_entries_372_);
lean_dec_ref(v_vals_369_);
lean_dec_ref(v_keys_368_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_375_, lean_object* v_x_376_, lean_object* v_x_377_, lean_object* v_x_378_, lean_object* v_x_379_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1_spec__2_spec__3_spec__4___redArg(v_x_376_, v_x_377_, v_x_378_, v_x_379_);
return v___x_380_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0(void){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0(lean_object* v_msg_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___x_390_; lean_object* v___x_679__overap_391_; lean_object* v___x_392_; 
v___x_390_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0, &l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0);
v___x_679__overap_391_ = lean_panic_fn_borrowed(v___x_390_, v_msg_382_);
lean_inc(v___y_388_);
lean_inc_ref(v___y_387_);
lean_inc(v___y_386_);
lean_inc_ref(v___y_385_);
lean_inc(v___y_384_);
lean_inc_ref(v___y_383_);
v___x_392_ = lean_apply_7(v___x_679__overap_391_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, lean_box(0));
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___boxed(lean_object* v_msg_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0(v_msg_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
return v_res_401_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_405_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__2));
v___x_406_ = lean_unsigned_to_nat(2u);
v___x_407_ = lean_unsigned_to_nat(42u);
v___x_408_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__1));
v___x_409_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0));
v___x_410_ = l_mkPanicMessageWithDecl(v___x_409_, v___x_408_, v___x_407_, v___x_406_, v___x_405_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object* v_e_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v___x_419_; lean_object* v_share_420_; lean_object* v___x_421_; uint64_t v___x_422_; size_t v___x_423_; lean_object* v___x_424_; size_t v___x_425_; size_t v___x_426_; uint8_t v___x_427_; 
v___x_419_ = lean_st_ref_get(v_a_413_);
v_share_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc_ref(v_share_420_);
lean_dec(v___x_419_);
v___x_421_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy;
v___x_422_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_411_);
v___x_423_ = lean_uint64_to_usize(v___x_422_);
v___x_424_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_share_420_, v___x_423_, v_e_411_, v___x_421_);
lean_dec_ref(v_share_420_);
v___x_425_ = lean_ptr_addr(v___x_424_);
lean_dec_ref(v___x_424_);
v___x_426_ = lean_ptr_addr(v_e_411_);
v___x_427_ = lean_usize_dec_eq(v___x_425_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3, &l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3_once, _init_l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__3);
v___x_429_ = l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0(v___x_428_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_);
return v___x_429_;
}
else
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_box(0);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared___boxed(lean_object* v_e_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_e_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec_ref(v_a_433_);
lean_dec_ref(v_e_432_);
return v_res_440_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_451_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__1));
v___x_452_ = lean_unsigned_to_nat(16u);
v___x_453_ = lean_unsigned_to_nat(62u);
v___x_454_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__0));
v___x_455_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0));
v___x_456_ = l_mkPanicMessageWithDecl(v___x_455_, v___x_454_, v___x_453_, v___x_452_, v___x_451_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg(lean_object* v_k_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v_debug_467_; lean_object* v___x_468_; lean_object* v_env_469_; lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_465_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0, &l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0);
v___x_466_ = lean_st_ref_get(v_a_459_);
v_debug_467_ = lean_ctor_get_uint8(v___x_466_, sizeof(void*)*13);
lean_dec(v___x_466_);
v___x_468_ = lean_st_ref_get(v_a_463_);
v_env_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc_ref(v_env_469_);
lean_dec(v___x_468_);
v___x_470_ = lean_box(v_debug_467_);
v___x_471_ = lean_apply_1(v_k_457_, v___x_470_);
v___x_472_ = 0;
v___x_473_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_473_, 0, v_env_469_);
lean_ctor_set_uint8(v___x_473_, sizeof(void*)*1, v___x_472_);
lean_ctor_set_uint8(v___x_473_, sizeof(void*)*1 + 1, v___x_472_);
v___x_474_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___x_471_, v___x_473_, v_a_459_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_486_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_486_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_486_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_486_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
if (lean_obj_tag(v_a_475_) == 0)
{
lean_object* v___x_479_; lean_object* v___x_1322__overap_480_; lean_object* v___x_481_; 
lean_dec_ref_known(v_a_475_, 1);
lean_del_object(v___x_477_);
v___x_479_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2, &l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2_once, _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2);
v___x_1322__overap_480_ = l_panic___redArg(v___x_465_, v___x_479_);
lean_inc(v_a_463_);
lean_inc_ref(v_a_462_);
lean_inc(v_a_461_);
lean_inc_ref(v_a_460_);
lean_inc(v_a_459_);
lean_inc_ref(v_a_458_);
v___x_481_ = lean_apply_7(v___x_1322__overap_480_, v_a_458_, v_a_459_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, lean_box(0));
return v___x_481_;
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; 
v_a_482_ = lean_ctor_get(v_a_475_, 0);
lean_inc(v_a_482_);
lean_dec_ref_known(v_a_475_, 1);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v_a_482_);
v___x_484_ = v___x_477_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_482_);
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
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
v_a_487_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_474_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_474_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_487_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___boxed(lean_object* v_k_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Meta_Sym_Internal_liftBuilderM___redArg(v_k_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_);
lean_dec(v_a_501_);
lean_dec_ref(v_a_500_);
lean_dec(v_a_499_);
lean_dec_ref(v_a_498_);
lean_dec(v_a_497_);
lean_dec_ref(v_a_496_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM(lean_object* v_00_u03b1_504_, lean_object* v_k_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; uint8_t v_debug_515_; lean_object* v___x_516_; lean_object* v_env_517_; lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_513_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0, &l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Sym_assertShared_spec__0___closed__0);
v___x_514_ = lean_st_ref_get(v_a_507_);
v_debug_515_ = lean_ctor_get_uint8(v___x_514_, sizeof(void*)*13);
lean_dec(v___x_514_);
v___x_516_ = lean_st_ref_get(v_a_511_);
v_env_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc_ref(v_env_517_);
lean_dec(v___x_516_);
v___x_518_ = lean_box(v_debug_515_);
v___x_519_ = lean_apply_1(v_k_505_, v___x_518_);
v___x_520_ = 0;
v___x_521_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_521_, 0, v_env_517_);
lean_ctor_set_uint8(v___x_521_, sizeof(void*)*1, v___x_520_);
lean_ctor_set_uint8(v___x_521_, sizeof(void*)*1 + 1, v___x_520_);
v___x_522_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___x_519_, v___x_521_, v_a_507_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_534_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_534_ == 0)
{
v___x_525_ = v___x_522_;
v_isShared_526_ = v_isSharedCheck_534_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_534_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
if (lean_obj_tag(v_a_523_) == 0)
{
lean_object* v___x_527_; lean_object* v___x_1345__overap_528_; lean_object* v___x_529_; 
lean_dec_ref_known(v_a_523_, 1);
lean_del_object(v___x_525_);
v___x_527_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2, &l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2_once, _init_l_Lean_Meta_Sym_Internal_liftBuilderM___redArg___closed__2);
v___x_1345__overap_528_ = l_panic___redArg(v___x_513_, v___x_527_);
lean_inc(v_a_511_);
lean_inc_ref(v_a_510_);
lean_inc(v_a_509_);
lean_inc_ref(v_a_508_);
lean_inc(v_a_507_);
lean_inc_ref(v_a_506_);
v___x_529_ = lean_apply_7(v___x_1345__overap_528_, v_a_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, lean_box(0));
return v___x_529_;
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; 
v_a_530_ = lean_ctor_get(v_a_523_, 0);
lean_inc(v_a_530_);
lean_dec_ref_known(v_a_523_, 1);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v_a_530_);
v___x_532_ = v___x_525_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
v_a_535_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_522_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_522_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_liftBuilderM___boxed(lean_object* v_00_u03b1_543_, lean_object* v_k_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_Meta_Sym_Internal_liftBuilderM(v_00_u03b1_543_, v_k_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_);
lean_dec(v_a_550_);
lean_dec_ref(v_a_549_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object* v_e_553_, lean_object* v_a_554_){
_start:
{
lean_object* v___x_555_; uint64_t v___x_556_; size_t v___x_557_; lean_object* v___x_558_; size_t v___x_559_; size_t v___x_560_; uint8_t v___x_561_; 
v___x_555_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy;
v___x_556_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_553_);
v___x_557_ = lean_uint64_to_usize(v___x_556_);
v___x_558_ = l_Lean_PersistentHashMap_findKeyDAux___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__0___redArg(v_a_554_, v___x_557_, v_e_553_, v___x_555_);
v___x_559_ = lean_ptr_addr(v___x_558_);
v___x_560_ = lean_usize_once(&l_Lean_Meta_Sym_Internal_Sym_share1___redArg___closed__0, &l_Lean_Meta_Sym_Internal_Sym_share1___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Internal_Sym_share1___redArg___closed__0);
v___x_561_ = lean_usize_dec_eq(v___x_559_, v___x_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; 
lean_dec_ref(v_e_553_);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_558_);
lean_ctor_set(v___x_562_, 1, v_a_554_);
return v___x_562_;
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
lean_dec_ref(v___x_558_);
v___x_563_ = lean_box(0);
lean_inc_ref(v_e_553_);
v___x_564_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_Internal_Sym_share1_spec__1___redArg(v_a_554_, v_e_553_, v___x_563_);
v___x_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_565_, 0, v_e_553_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
return v___x_565_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1(lean_object* v_e_566_, uint8_t v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v_e_566_, v_a_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___boxed(lean_object* v_e_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_){
_start:
{
uint8_t v_a_boxed_575_; lean_object* v_res_576_; 
v_a_boxed_575_ = lean_unbox(v_a_572_);
v_res_576_ = l_Lean_Meta_Sym_Internal_Builder_share1(v_e_571_, v_a_boxed_575_, v_a_573_, v_a_574_);
lean_dec_ref(v_a_573_);
return v_res_576_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0(void){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Std_HashMap_instInhabited___redArg();
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1(lean_object* v_msg_578_, uint8_t v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v___x_582_; lean_object* v___f_583_; lean_object* v___f_584_; lean_object* v___f_585_; lean_object* v___x_534__overap_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_582_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0, &l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___closed__0);
v___f_583_ = lean_alloc_closure((void*)(l_EStateM_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_583_, 0, v___x_582_);
v___f_584_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_584_, 0, v___f_583_);
v___f_585_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_585_, 0, v___f_584_);
v___x_534__overap_586_ = lean_panic_fn_borrowed(v___f_585_, v_msg_578_);
lean_dec_ref(v___f_585_);
v___x_587_ = lean_box(v___y_579_);
lean_inc_ref(v___y_580_);
v___x_588_ = lean_apply_3(v___x_534__overap_586_, v___x_587_, v___y_580_, v___y_581_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1___boxed(lean_object* v_msg_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
uint8_t v___y_635__boxed_593_; lean_object* v_res_594_; 
v___y_635__boxed_593_ = lean_unbox(v___y_590_);
v_res_594_ = l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1(v_msg_589_, v___y_635__boxed_593_, v___y_591_, v___y_592_);
lean_dec_ref(v___y_591_);
return v_res_594_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_595_, lean_object* v_i_596_, lean_object* v_k_597_){
_start:
{
lean_object* v___x_598_; uint8_t v___x_599_; 
v___x_598_ = lean_array_get_size(v_keys_595_);
v___x_599_ = lean_nat_dec_lt(v_i_596_, v___x_598_);
if (v___x_599_ == 0)
{
lean_dec(v_i_596_);
return v___x_599_;
}
else
{
lean_object* v_k_x27_600_; uint8_t v___x_601_; 
v_k_x27_600_ = lean_array_fget_borrowed(v_keys_595_, v_i_596_);
v___x_601_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_597_, v_k_x27_600_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = lean_unsigned_to_nat(1u);
v___x_603_ = lean_nat_add(v_i_596_, v___x_602_);
lean_dec(v_i_596_);
v_i_596_ = v___x_603_;
goto _start;
}
else
{
lean_dec(v_i_596_);
return v___x_599_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_605_, lean_object* v_i_606_, lean_object* v_k_607_){
_start:
{
uint8_t v_res_608_; lean_object* v_r_609_; 
v_res_608_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(v_keys_605_, v_i_606_, v_k_607_);
lean_dec_ref(v_k_607_);
lean_dec_ref(v_keys_605_);
v_r_609_ = lean_box(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(lean_object* v_x_610_, size_t v_x_611_, lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_610_) == 0)
{
lean_object* v_es_613_; lean_object* v___x_614_; size_t v___x_615_; size_t v___x_616_; lean_object* v_j_617_; lean_object* v___x_618_; 
v_es_613_ = lean_ctor_get(v_x_610_, 0);
v___x_614_ = lean_box(2);
v___x_615_ = ((size_t)31ULL);
v___x_616_ = lean_usize_land(v_x_611_, v___x_615_);
v_j_617_ = lean_usize_to_nat(v___x_616_);
v___x_618_ = lean_array_get_borrowed(v___x_614_, v_es_613_, v_j_617_);
lean_dec(v_j_617_);
switch(lean_obj_tag(v___x_618_))
{
case 0:
{
lean_object* v_key_619_; uint8_t v___x_620_; 
v_key_619_ = lean_ctor_get(v___x_618_, 0);
v___x_620_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_612_, v_key_619_);
return v___x_620_;
}
case 1:
{
lean_object* v_node_621_; size_t v___x_622_; size_t v___x_623_; 
v_node_621_ = lean_ctor_get(v___x_618_, 0);
v___x_622_ = ((size_t)5ULL);
v___x_623_ = lean_usize_shift_right(v_x_611_, v___x_622_);
v_x_610_ = v_node_621_;
v_x_611_ = v___x_623_;
goto _start;
}
default: 
{
uint8_t v___x_625_; 
v___x_625_ = 0;
return v___x_625_;
}
}
}
else
{
lean_object* v_ks_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v_ks_626_ = lean_ctor_get(v_x_610_, 0);
v___x_627_ = lean_unsigned_to_nat(0u);
v___x_628_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(v_ks_626_, v___x_627_, v_x_612_);
return v___x_628_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg___boxed(lean_object* v_x_629_, lean_object* v_x_630_, lean_object* v_x_631_){
_start:
{
size_t v_x_670__boxed_632_; uint8_t v_res_633_; lean_object* v_r_634_; 
v_x_670__boxed_632_ = lean_unbox_usize(v_x_630_);
lean_dec(v_x_630_);
v_res_633_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(v_x_629_, v_x_670__boxed_632_, v_x_631_);
lean_dec_ref(v_x_631_);
lean_dec_ref(v_x_629_);
v_r_634_ = lean_box(v_res_633_);
return v_r_634_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(lean_object* v_x_635_, lean_object* v_x_636_){
_start:
{
uint64_t v___x_637_; size_t v___x_638_; uint8_t v___x_639_; 
v___x_637_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_636_);
v___x_638_ = lean_uint64_to_usize(v___x_637_);
v___x_639_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(v_x_635_, v___x_638_, v_x_636_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg___boxed(lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
uint8_t v_res_642_; lean_object* v_r_643_; 
v_res_642_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(v_x_640_, v_x_641_);
lean_dec_ref(v_x_641_);
lean_dec_ref(v_x_640_);
v_r_643_ = lean_box(v_res_642_);
return v_r_643_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_646_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__1));
v___x_647_ = lean_unsigned_to_nat(2u);
v___x_648_ = lean_unsigned_to_nat(74u);
v___x_649_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__0));
v___x_650_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0));
v___x_651_ = l_mkPanicMessageWithDecl(v___x_650_, v___x_649_, v___x_648_, v___x_647_, v___x_646_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object* v_e_652_, uint8_t v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_){
_start:
{
uint8_t v___x_656_; 
v___x_656_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(v_a_655_, v_e_652_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2, &l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2_once, _init_l_Lean_Meta_Sym_Internal_Builder_assertShared___closed__2);
v___x_658_ = l_panic___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__1(v___x_657_, v_a_653_, v_a_654_, v_a_655_);
return v___x_658_;
}
else
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = lean_box(0);
v___x_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v_a_655_);
return v___x_660_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared___boxed(lean_object* v_e_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_){
_start:
{
uint8_t v_a_boxed_665_; lean_object* v_res_666_; 
v_a_boxed_665_ = lean_unbox(v_a_662_);
v_res_666_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_e_661_, v_a_boxed_665_, v_a_663_, v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec_ref(v_e_661_);
return v_res_666_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0(lean_object* v_00_u03b2_667_, lean_object* v_x_668_, lean_object* v_x_669_){
_start:
{
uint8_t v___x_670_; 
v___x_670_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___redArg(v_x_668_, v_x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0___boxed(lean_object* v_00_u03b2_671_, lean_object* v_x_672_, lean_object* v_x_673_){
_start:
{
uint8_t v_res_674_; lean_object* v_r_675_; 
v_res_674_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0(v_00_u03b2_671_, v_x_672_, v_x_673_);
lean_dec_ref(v_x_673_);
lean_dec_ref(v_x_672_);
v_r_675_ = lean_box(v_res_674_);
return v_r_675_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0(lean_object* v_00_u03b2_676_, lean_object* v_x_677_, size_t v_x_678_, lean_object* v_x_679_){
_start:
{
uint8_t v___x_680_; 
v___x_680_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___redArg(v_x_677_, v_x_678_, v_x_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0___boxed(lean_object* v_00_u03b2_681_, lean_object* v_x_682_, lean_object* v_x_683_, lean_object* v_x_684_){
_start:
{
size_t v_x_769__boxed_685_; uint8_t v_res_686_; lean_object* v_r_687_; 
v_x_769__boxed_685_ = lean_unbox_usize(v_x_683_);
lean_dec(v_x_683_);
v_res_686_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0(v_00_u03b2_681_, v_x_682_, v_x_769__boxed_685_, v_x_684_);
lean_dec_ref(v_x_684_);
lean_dec_ref(v_x_682_);
v_r_687_ = lean_box(v_res_686_);
return v_r_687_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_688_, lean_object* v_keys_689_, lean_object* v_vals_690_, lean_object* v_heq_691_, lean_object* v_i_692_, lean_object* v_k_693_){
_start:
{
uint8_t v___x_694_; 
v___x_694_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___redArg(v_keys_689_, v_i_692_, v_k_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_695_, lean_object* v_keys_696_, lean_object* v_vals_697_, lean_object* v_heq_698_, lean_object* v_i_699_, lean_object* v_k_700_){
_start:
{
uint8_t v_res_701_; lean_object* v_r_702_; 
v_res_701_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Sym_Internal_Builder_assertShared_spec__0_spec__0_spec__2(v_00_u03b2_695_, v_keys_696_, v_vals_697_, v_heq_698_, v_i_699_, v_k_700_);
lean_dec_ref(v_k_700_);
lean_dec_ref(v_vals_697_);
lean_dec_ref(v_keys_696_);
v_r_702_ = lean_box(v_res_701_);
return v_r_702_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__10(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__9));
v___x_723_ = l_ReaderT_instMonad___redArg(v___x_722_);
return v___x_723_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__13(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__10, &l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__10_once, _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__10);
v___x_727_ = lean_alloc_closure((void*)(l_ReaderT_read___boxed), 4, 3);
lean_closure_set(v___x_727_, 0, lean_box(0));
lean_closure_set(v___x_727_, 1, lean_box(0));
lean_closure_set(v___x_727_, 2, v___x_726_);
return v___x_727_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__14(void){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_728_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__13, &l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__13_once, _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__13);
v___x_729_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__12));
v___x_730_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__11));
v___x_731_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
lean_ctor_set(v___x_731_, 1, v___x_729_);
lean_ctor_set(v___x_731_, 2, v___x_728_);
return v___x_731_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM(void){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = lean_obj_once(&l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__14, &l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__14_once, _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM___closed__14);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLitS___redArg(lean_object* v_inst_733_, lean_object* v_l_734_){
_start:
{
lean_object* v_share1_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_share1_735_ = lean_ctor_get(v_inst_733_, 0);
lean_inc(v_share1_735_);
lean_dec_ref(v_inst_733_);
v___x_736_ = l_Lean_Expr_lit___override(v_l_734_);
v___x_737_ = lean_apply_1(v_share1_735_, v___x_736_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLitS(lean_object* v_m_738_, lean_object* v_inst_739_, lean_object* v_l_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l_Lean_Meta_Sym_Internal_mkLitS___redArg(v_inst_739_, v_l_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___redArg(lean_object* v_inst_742_, lean_object* v_declName_743_, lean_object* v_us_744_){
_start:
{
lean_object* v_share1_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v_share1_745_ = lean_ctor_get(v_inst_742_, 0);
lean_inc(v_share1_745_);
lean_dec_ref(v_inst_742_);
v___x_746_ = l_Lean_Expr_const___override(v_declName_743_, v_us_744_);
v___x_747_ = lean_apply_1(v_share1_745_, v___x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS(lean_object* v_m_748_, lean_object* v_inst_749_, lean_object* v_declName_750_, lean_object* v_us_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Lean_Meta_Sym_Internal_mkConstS___redArg(v_inst_749_, v_declName_750_, v_us_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___redArg(lean_object* v_inst_753_, lean_object* v_idx_754_){
_start:
{
lean_object* v_share1_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v_share1_755_ = lean_ctor_get(v_inst_753_, 0);
lean_inc(v_share1_755_);
lean_dec_ref(v_inst_753_);
v___x_756_ = l_Lean_Expr_bvar___override(v_idx_754_);
v___x_757_ = lean_apply_1(v_share1_755_, v___x_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS(lean_object* v_m_758_, lean_object* v_inst_759_, lean_object* v_idx_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lean_Meta_Sym_Internal_mkBVarS___redArg(v_inst_759_, v_idx_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___redArg(lean_object* v_inst_762_, lean_object* v_u_763_){
_start:
{
lean_object* v_share1_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v_share1_764_ = lean_ctor_get(v_inst_762_, 0);
lean_inc(v_share1_764_);
lean_dec_ref(v_inst_762_);
v___x_765_ = l_Lean_Expr_sort___override(v_u_763_);
v___x_766_ = lean_apply_1(v_share1_764_, v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS(lean_object* v_m_767_, lean_object* v_inst_768_, lean_object* v_u_769_){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_Meta_Sym_Internal_mkSortS___redArg(v_inst_768_, v_u_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___redArg(lean_object* v_inst_771_, lean_object* v_fvarId_772_){
_start:
{
lean_object* v_share1_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v_share1_773_ = lean_ctor_get(v_inst_771_, 0);
lean_inc(v_share1_773_);
lean_dec_ref(v_inst_771_);
v___x_774_ = l_Lean_Expr_fvar___override(v_fvarId_772_);
v___x_775_ = lean_apply_1(v_share1_773_, v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS(lean_object* v_m_776_, lean_object* v_inst_777_, lean_object* v_fvarId_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Lean_Meta_Sym_Internal_mkFVarS___redArg(v_inst_777_, v_fvarId_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMVarS___redArg(lean_object* v_inst_780_, lean_object* v_mvarId_781_){
_start:
{
lean_object* v_share1_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v_share1_782_ = lean_ctor_get(v_inst_780_, 0);
lean_inc(v_share1_782_);
lean_dec_ref(v_inst_780_);
v___x_783_ = l_Lean_Expr_mvar___override(v_mvarId_781_);
v___x_784_ = lean_apply_1(v_share1_782_, v___x_783_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMVarS(lean_object* v_m_785_, lean_object* v_inst_786_, lean_object* v_mvarId_787_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = l_Lean_Meta_Sym_Internal_mkMVarS___redArg(v_inst_786_, v_mvarId_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__0(lean_object* v_d_789_, lean_object* v_e_790_, lean_object* v_share1_791_, lean_object* v_____r_792_){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = l_Lean_Expr_mdata___override(v_d_789_, v_e_790_);
v___x_794_ = lean_apply_1(v_share1_791_, v___x_793_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1(lean_object* v___f_795_, lean_object* v_____r_796_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = lean_apply_1(v___f_795_, v_____r_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2(lean_object* v___f_798_, lean_object* v_assertShared_799_, lean_object* v_e_800_, lean_object* v_toBind_801_, lean_object* v___f_802_, uint8_t v_____do__lift_803_){
_start:
{
if (v_____do__lift_803_ == 0)
{
lean_object* v___x_804_; lean_object* v___x_805_; 
lean_dec(v___f_802_);
lean_dec(v_toBind_801_);
lean_dec_ref(v_e_800_);
lean_dec(v_assertShared_799_);
v___x_804_ = lean_box(0);
v___x_805_ = lean_apply_1(v___f_798_, v___x_804_);
return v___x_805_;
}
else
{
lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec(v___f_798_);
v___x_806_ = lean_apply_1(v_assertShared_799_, v_e_800_);
v___x_807_ = lean_apply_4(v_toBind_801_, lean_box(0), lean_box(0), v___x_806_, v___f_802_);
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2___boxed(lean_object* v___f_808_, lean_object* v_assertShared_809_, lean_object* v_e_810_, lean_object* v_toBind_811_, lean_object* v___f_812_, lean_object* v_____do__lift_813_){
_start:
{
uint8_t v_____do__lift_63__boxed_814_; lean_object* v_res_815_; 
v_____do__lift_63__boxed_814_ = lean_unbox(v_____do__lift_813_);
v_res_815_ = l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2(v___f_808_, v_assertShared_809_, v_e_810_, v_toBind_811_, v___f_812_, v_____do__lift_63__boxed_814_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___redArg(lean_object* v_inst_816_, lean_object* v_inst_817_, lean_object* v_d_818_, lean_object* v_e_819_){
_start:
{
lean_object* v_toBind_820_; lean_object* v_share1_821_; lean_object* v_assertShared_822_; lean_object* v_isDebugEnabled_823_; lean_object* v___f_824_; lean_object* v___f_825_; lean_object* v___f_826_; lean_object* v___x_827_; 
v_toBind_820_ = lean_ctor_get(v_inst_817_, 1);
lean_inc_n(v_toBind_820_, 2);
lean_dec_ref(v_inst_817_);
v_share1_821_ = lean_ctor_get(v_inst_816_, 0);
lean_inc(v_share1_821_);
v_assertShared_822_ = lean_ctor_get(v_inst_816_, 1);
lean_inc(v_assertShared_822_);
v_isDebugEnabled_823_ = lean_ctor_get(v_inst_816_, 2);
lean_inc(v_isDebugEnabled_823_);
lean_dec_ref(v_inst_816_);
lean_inc_ref(v_e_819_);
v___f_824_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__0), 4, 3);
lean_closure_set(v___f_824_, 0, v_d_818_);
lean_closure_set(v___f_824_, 1, v_e_819_);
lean_closure_set(v___f_824_, 2, v_share1_821_);
lean_inc_ref(v___f_824_);
v___f_825_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_825_, 0, v___f_824_);
v___f_826_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_826_, 0, v___f_824_);
lean_closure_set(v___f_826_, 1, v_assertShared_822_);
lean_closure_set(v___f_826_, 2, v_e_819_);
lean_closure_set(v___f_826_, 3, v_toBind_820_);
lean_closure_set(v___f_826_, 4, v___f_825_);
v___x_827_ = lean_apply_4(v_toBind_820_, lean_box(0), lean_box(0), v_isDebugEnabled_823_, v___f_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS(lean_object* v_m_828_, lean_object* v_inst_829_, lean_object* v_inst_830_, lean_object* v_d_831_, lean_object* v_e_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_Lean_Meta_Sym_Internal_mkMDataS___redArg(v_inst_829_, v_inst_830_, v_d_831_, v_e_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__0(lean_object* v_structName_834_, lean_object* v_idx_835_, lean_object* v_struct_836_, lean_object* v_share1_837_, lean_object* v_____r_838_){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_839_ = l_Lean_Expr_proj___override(v_structName_834_, v_idx_835_, v_struct_836_);
v___x_840_ = lean_apply_1(v_share1_837_, v___x_839_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2(lean_object* v___f_841_, lean_object* v_assertShared_842_, lean_object* v_struct_843_, lean_object* v_toBind_844_, lean_object* v___f_845_, uint8_t v_____do__lift_846_){
_start:
{
if (v_____do__lift_846_ == 0)
{
lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec(v___f_845_);
lean_dec(v_toBind_844_);
lean_dec_ref(v_struct_843_);
lean_dec(v_assertShared_842_);
v___x_847_ = lean_box(0);
v___x_848_ = lean_apply_1(v___f_841_, v___x_847_);
return v___x_848_;
}
else
{
lean_object* v___x_849_; lean_object* v___x_850_; 
lean_dec(v___f_841_);
v___x_849_ = lean_apply_1(v_assertShared_842_, v_struct_843_);
v___x_850_ = lean_apply_4(v_toBind_844_, lean_box(0), lean_box(0), v___x_849_, v___f_845_);
return v___x_850_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2___boxed(lean_object* v___f_851_, lean_object* v_assertShared_852_, lean_object* v_struct_853_, lean_object* v_toBind_854_, lean_object* v___f_855_, lean_object* v_____do__lift_856_){
_start:
{
uint8_t v_____do__lift_57__boxed_857_; lean_object* v_res_858_; 
v_____do__lift_57__boxed_857_ = lean_unbox(v_____do__lift_856_);
v_res_858_ = l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2(v___f_851_, v_assertShared_852_, v_struct_853_, v_toBind_854_, v___f_855_, v_____do__lift_57__boxed_857_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___redArg(lean_object* v_inst_859_, lean_object* v_inst_860_, lean_object* v_structName_861_, lean_object* v_idx_862_, lean_object* v_struct_863_){
_start:
{
lean_object* v_toBind_864_; lean_object* v_share1_865_; lean_object* v_assertShared_866_; lean_object* v_isDebugEnabled_867_; lean_object* v___f_868_; lean_object* v___f_869_; lean_object* v___f_870_; lean_object* v___x_871_; 
v_toBind_864_ = lean_ctor_get(v_inst_860_, 1);
lean_inc_n(v_toBind_864_, 2);
lean_dec_ref(v_inst_860_);
v_share1_865_ = lean_ctor_get(v_inst_859_, 0);
lean_inc(v_share1_865_);
v_assertShared_866_ = lean_ctor_get(v_inst_859_, 1);
lean_inc(v_assertShared_866_);
v_isDebugEnabled_867_ = lean_ctor_get(v_inst_859_, 2);
lean_inc(v_isDebugEnabled_867_);
lean_dec_ref(v_inst_859_);
lean_inc_ref(v_struct_863_);
v___f_868_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__0), 5, 4);
lean_closure_set(v___f_868_, 0, v_structName_861_);
lean_closure_set(v___f_868_, 1, v_idx_862_);
lean_closure_set(v___f_868_, 2, v_struct_863_);
lean_closure_set(v___f_868_, 3, v_share1_865_);
lean_inc_ref(v___f_868_);
v___f_869_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_869_, 0, v___f_868_);
v___f_870_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkProjS___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_870_, 0, v___f_868_);
lean_closure_set(v___f_870_, 1, v_assertShared_866_);
lean_closure_set(v___f_870_, 2, v_struct_863_);
lean_closure_set(v___f_870_, 3, v_toBind_864_);
lean_closure_set(v___f_870_, 4, v___f_869_);
v___x_871_ = lean_apply_4(v_toBind_864_, lean_box(0), lean_box(0), v_isDebugEnabled_867_, v___f_870_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS(lean_object* v_m_872_, lean_object* v_inst_873_, lean_object* v_inst_874_, lean_object* v_structName_875_, lean_object* v_idx_876_, lean_object* v_struct_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_Meta_Sym_Internal_mkProjS___redArg(v_inst_873_, v_inst_874_, v_structName_875_, v_idx_876_, v_struct_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__0(lean_object* v_f_879_, lean_object* v_a_880_, lean_object* v_share1_881_, lean_object* v_____r_882_){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_883_ = l_Lean_Expr_app___override(v_f_879_, v_a_880_);
v___x_884_ = lean_apply_1(v_share1_881_, v___x_883_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__2(lean_object* v_assertShared_885_, lean_object* v_a_886_, lean_object* v_toBind_887_, lean_object* v___f_888_, lean_object* v_____r_889_){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_apply_1(v_assertShared_885_, v_a_886_);
v___x_891_ = lean_apply_4(v_toBind_887_, lean_box(0), lean_box(0), v___x_890_, v___f_888_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1(lean_object* v___f_892_, lean_object* v_assertShared_893_, lean_object* v_a_894_, lean_object* v_toBind_895_, lean_object* v___f_896_, lean_object* v_f_897_, uint8_t v_____do__lift_898_){
_start:
{
if (v_____do__lift_898_ == 0)
{
lean_object* v___x_899_; lean_object* v___x_900_; 
lean_dec_ref(v_f_897_);
lean_dec(v___f_896_);
lean_dec(v_toBind_895_);
lean_dec_ref(v_a_894_);
lean_dec(v_assertShared_893_);
v___x_899_ = lean_box(0);
v___x_900_ = lean_apply_1(v___f_892_, v___x_899_);
return v___x_900_;
}
else
{
lean_object* v___f_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
lean_dec(v___f_892_);
lean_inc(v_toBind_895_);
lean_inc(v_assertShared_893_);
v___f_901_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__2), 5, 4);
lean_closure_set(v___f_901_, 0, v_assertShared_893_);
lean_closure_set(v___f_901_, 1, v_a_894_);
lean_closure_set(v___f_901_, 2, v_toBind_895_);
lean_closure_set(v___f_901_, 3, v___f_896_);
v___x_902_ = lean_apply_1(v_assertShared_893_, v_f_897_);
v___x_903_ = lean_apply_4(v_toBind_895_, lean_box(0), lean_box(0), v___x_902_, v___f_901_);
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1___boxed(lean_object* v___f_904_, lean_object* v_assertShared_905_, lean_object* v_a_906_, lean_object* v_toBind_907_, lean_object* v___f_908_, lean_object* v_f_909_, lean_object* v_____do__lift_910_){
_start:
{
uint8_t v_____do__lift_74__boxed_911_; lean_object* v_res_912_; 
v_____do__lift_74__boxed_911_ = lean_unbox(v_____do__lift_910_);
v_res_912_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1(v___f_904_, v_assertShared_905_, v_a_906_, v_toBind_907_, v___f_908_, v_f_909_, v_____do__lift_74__boxed_911_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___redArg(lean_object* v_inst_913_, lean_object* v_inst_914_, lean_object* v_f_915_, lean_object* v_a_916_){
_start:
{
lean_object* v_toBind_917_; lean_object* v_share1_918_; lean_object* v_assertShared_919_; lean_object* v_isDebugEnabled_920_; lean_object* v___f_921_; lean_object* v___f_922_; lean_object* v___f_923_; lean_object* v___x_924_; 
v_toBind_917_ = lean_ctor_get(v_inst_914_, 1);
lean_inc_n(v_toBind_917_, 2);
lean_dec_ref(v_inst_914_);
v_share1_918_ = lean_ctor_get(v_inst_913_, 0);
lean_inc(v_share1_918_);
v_assertShared_919_ = lean_ctor_get(v_inst_913_, 1);
lean_inc(v_assertShared_919_);
v_isDebugEnabled_920_ = lean_ctor_get(v_inst_913_, 2);
lean_inc(v_isDebugEnabled_920_);
lean_dec_ref(v_inst_913_);
lean_inc_ref(v_a_916_);
lean_inc_ref(v_f_915_);
v___f_921_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__0), 4, 3);
lean_closure_set(v___f_921_, 0, v_f_915_);
lean_closure_set(v___f_921_, 1, v_a_916_);
lean_closure_set(v___f_921_, 2, v_share1_918_);
lean_inc_ref(v___f_921_);
v___f_922_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_922_, 0, v___f_921_);
v___f_923_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_923_, 0, v___f_921_);
lean_closure_set(v___f_923_, 1, v_assertShared_919_);
lean_closure_set(v___f_923_, 2, v_a_916_);
lean_closure_set(v___f_923_, 3, v_toBind_917_);
lean_closure_set(v___f_923_, 4, v___f_922_);
lean_closure_set(v___f_923_, 5, v_f_915_);
v___x_924_ = lean_apply_4(v_toBind_917_, lean_box(0), lean_box(0), v_isDebugEnabled_920_, v___f_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS(lean_object* v_m_925_, lean_object* v_inst_926_, lean_object* v_inst_927_, lean_object* v_f_928_, lean_object* v_a_929_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_926_, v_inst_927_, v_f_928_, v_a_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0(lean_object* v_x_931_, lean_object* v_t_932_, lean_object* v_b_933_, uint8_t v_bi_934_, lean_object* v_share1_935_, lean_object* v_____r_936_){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = l_Lean_Expr_lam___override(v_x_931_, v_t_932_, v_b_933_, v_bi_934_);
v___x_938_ = lean_apply_1(v_share1_935_, v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0___boxed(lean_object* v_x_939_, lean_object* v_t_940_, lean_object* v_b_941_, lean_object* v_bi_942_, lean_object* v_share1_943_, lean_object* v_____r_944_){
_start:
{
uint8_t v_bi_boxed_945_; lean_object* v_res_946_; 
v_bi_boxed_945_ = lean_unbox(v_bi_942_);
v_res_946_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0(v_x_939_, v_t_940_, v_b_941_, v_bi_boxed_945_, v_share1_943_, v_____r_944_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__2(lean_object* v_assertShared_947_, lean_object* v_b_948_, lean_object* v_toBind_949_, lean_object* v___f_950_, lean_object* v_____r_951_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = lean_apply_1(v_assertShared_947_, v_b_948_);
v___x_953_ = lean_apply_4(v_toBind_949_, lean_box(0), lean_box(0), v___x_952_, v___f_950_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1(lean_object* v___f_954_, lean_object* v_assertShared_955_, lean_object* v_b_956_, lean_object* v_toBind_957_, lean_object* v___f_958_, lean_object* v_t_959_, uint8_t v_____do__lift_960_){
_start:
{
if (v_____do__lift_960_ == 0)
{
lean_object* v___x_961_; lean_object* v___x_962_; 
lean_dec_ref(v_t_959_);
lean_dec(v___f_958_);
lean_dec(v_toBind_957_);
lean_dec_ref(v_b_956_);
lean_dec(v_assertShared_955_);
v___x_961_ = lean_box(0);
v___x_962_ = lean_apply_1(v___f_954_, v___x_961_);
return v___x_962_;
}
else
{
lean_object* v___f_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
lean_dec(v___f_954_);
lean_inc(v_toBind_957_);
lean_inc(v_assertShared_955_);
v___f_963_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__2), 5, 4);
lean_closure_set(v___f_963_, 0, v_assertShared_955_);
lean_closure_set(v___f_963_, 1, v_b_956_);
lean_closure_set(v___f_963_, 2, v_toBind_957_);
lean_closure_set(v___f_963_, 3, v___f_958_);
v___x_964_ = lean_apply_1(v_assertShared_955_, v_t_959_);
v___x_965_ = lean_apply_4(v_toBind_957_, lean_box(0), lean_box(0), v___x_964_, v___f_963_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1___boxed(lean_object* v___f_966_, lean_object* v_assertShared_967_, lean_object* v_b_968_, lean_object* v_toBind_969_, lean_object* v___f_970_, lean_object* v_t_971_, lean_object* v_____do__lift_972_){
_start:
{
uint8_t v_____do__lift_75__boxed_973_; lean_object* v_res_974_; 
v_____do__lift_75__boxed_973_ = lean_unbox(v_____do__lift_972_);
v_res_974_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1(v___f_966_, v_assertShared_967_, v_b_968_, v_toBind_969_, v___f_970_, v_t_971_, v_____do__lift_75__boxed_973_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(lean_object* v_inst_975_, lean_object* v_inst_976_, lean_object* v_x_977_, uint8_t v_bi_978_, lean_object* v_t_979_, lean_object* v_b_980_){
_start:
{
lean_object* v_toBind_981_; lean_object* v_share1_982_; lean_object* v_assertShared_983_; lean_object* v_isDebugEnabled_984_; lean_object* v___x_985_; lean_object* v___f_986_; lean_object* v___f_987_; lean_object* v___f_988_; lean_object* v___x_989_; 
v_toBind_981_ = lean_ctor_get(v_inst_976_, 1);
lean_inc_n(v_toBind_981_, 2);
lean_dec_ref(v_inst_976_);
v_share1_982_ = lean_ctor_get(v_inst_975_, 0);
lean_inc(v_share1_982_);
v_assertShared_983_ = lean_ctor_get(v_inst_975_, 1);
lean_inc(v_assertShared_983_);
v_isDebugEnabled_984_ = lean_ctor_get(v_inst_975_, 2);
lean_inc(v_isDebugEnabled_984_);
lean_dec_ref(v_inst_975_);
v___x_985_ = lean_box(v_bi_978_);
lean_inc_ref(v_b_980_);
lean_inc_ref(v_t_979_);
v___f_986_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_986_, 0, v_x_977_);
lean_closure_set(v___f_986_, 1, v_t_979_);
lean_closure_set(v___f_986_, 2, v_b_980_);
lean_closure_set(v___f_986_, 3, v___x_985_);
lean_closure_set(v___f_986_, 4, v_share1_982_);
lean_inc_ref(v___f_986_);
v___f_987_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_987_, 0, v___f_986_);
v___f_988_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_988_, 0, v___f_986_);
lean_closure_set(v___f_988_, 1, v_assertShared_983_);
lean_closure_set(v___f_988_, 2, v_b_980_);
lean_closure_set(v___f_988_, 3, v_toBind_981_);
lean_closure_set(v___f_988_, 4, v___f_987_);
lean_closure_set(v___f_988_, 5, v_t_979_);
v___x_989_ = lean_apply_4(v_toBind_981_, lean_box(0), lean_box(0), v_isDebugEnabled_984_, v___f_988_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___boxed(lean_object* v_inst_990_, lean_object* v_inst_991_, lean_object* v_x_992_, lean_object* v_bi_993_, lean_object* v_t_994_, lean_object* v_b_995_){
_start:
{
uint8_t v_bi_boxed_996_; lean_object* v_res_997_; 
v_bi_boxed_996_ = lean_unbox(v_bi_993_);
v_res_997_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_990_, v_inst_991_, v_x_992_, v_bi_boxed_996_, v_t_994_, v_b_995_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS(lean_object* v_m_998_, lean_object* v_inst_999_, lean_object* v_inst_1000_, lean_object* v_x_1001_, uint8_t v_bi_1002_, lean_object* v_t_1003_, lean_object* v_b_1004_){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_999_, v_inst_1000_, v_x_1001_, v_bi_1002_, v_t_1003_, v_b_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___boxed(lean_object* v_m_1006_, lean_object* v_inst_1007_, lean_object* v_inst_1008_, lean_object* v_x_1009_, lean_object* v_bi_1010_, lean_object* v_t_1011_, lean_object* v_b_1012_){
_start:
{
uint8_t v_bi_boxed_1013_; lean_object* v_res_1014_; 
v_bi_boxed_1013_ = lean_unbox(v_bi_1010_);
v_res_1014_ = l_Lean_Meta_Sym_Internal_mkLambdaS(v_m_1006_, v_inst_1007_, v_inst_1008_, v_x_1009_, v_bi_boxed_1013_, v_t_1011_, v_b_1012_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0(lean_object* v_x_1015_, lean_object* v_t_1016_, lean_object* v_b_1017_, uint8_t v_bi_1018_, lean_object* v_share1_1019_, lean_object* v_____r_1020_){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = l_Lean_Expr_forallE___override(v_x_1015_, v_t_1016_, v_b_1017_, v_bi_1018_);
v___x_1022_ = lean_apply_1(v_share1_1019_, v___x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0___boxed(lean_object* v_x_1023_, lean_object* v_t_1024_, lean_object* v_b_1025_, lean_object* v_bi_1026_, lean_object* v_share1_1027_, lean_object* v_____r_1028_){
_start:
{
uint8_t v_bi_boxed_1029_; lean_object* v_res_1030_; 
v_bi_boxed_1029_ = lean_unbox(v_bi_1026_);
v_res_1030_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0(v_x_1023_, v_t_1024_, v_b_1025_, v_bi_boxed_1029_, v_share1_1027_, v_____r_1028_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg(lean_object* v_inst_1031_, lean_object* v_inst_1032_, lean_object* v_x_1033_, uint8_t v_bi_1034_, lean_object* v_t_1035_, lean_object* v_b_1036_){
_start:
{
lean_object* v_toBind_1037_; lean_object* v_share1_1038_; lean_object* v_assertShared_1039_; lean_object* v_isDebugEnabled_1040_; lean_object* v___x_1041_; lean_object* v___f_1042_; lean_object* v___f_1043_; lean_object* v___f_1044_; lean_object* v___x_1045_; 
v_toBind_1037_ = lean_ctor_get(v_inst_1032_, 1);
lean_inc_n(v_toBind_1037_, 2);
lean_dec_ref(v_inst_1032_);
v_share1_1038_ = lean_ctor_get(v_inst_1031_, 0);
lean_inc(v_share1_1038_);
v_assertShared_1039_ = lean_ctor_get(v_inst_1031_, 1);
lean_inc(v_assertShared_1039_);
v_isDebugEnabled_1040_ = lean_ctor_get(v_inst_1031_, 2);
lean_inc(v_isDebugEnabled_1040_);
lean_dec_ref(v_inst_1031_);
v___x_1041_ = lean_box(v_bi_1034_);
lean_inc_ref(v_b_1036_);
lean_inc_ref(v_t_1035_);
v___f_1042_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkForallS___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1042_, 0, v_x_1033_);
lean_closure_set(v___f_1042_, 1, v_t_1035_);
lean_closure_set(v___f_1042_, 2, v_b_1036_);
lean_closure_set(v___f_1042_, 3, v___x_1041_);
lean_closure_set(v___f_1042_, 4, v_share1_1038_);
lean_inc_ref(v___f_1042_);
v___f_1043_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1043_, 0, v___f_1042_);
v___f_1044_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_1044_, 0, v___f_1042_);
lean_closure_set(v___f_1044_, 1, v_assertShared_1039_);
lean_closure_set(v___f_1044_, 2, v_b_1036_);
lean_closure_set(v___f_1044_, 3, v_toBind_1037_);
lean_closure_set(v___f_1044_, 4, v___f_1043_);
lean_closure_set(v___f_1044_, 5, v_t_1035_);
v___x_1045_ = lean_apply_4(v_toBind_1037_, lean_box(0), lean_box(0), v_isDebugEnabled_1040_, v___f_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___redArg___boxed(lean_object* v_inst_1046_, lean_object* v_inst_1047_, lean_object* v_x_1048_, lean_object* v_bi_1049_, lean_object* v_t_1050_, lean_object* v_b_1051_){
_start:
{
uint8_t v_bi_boxed_1052_; lean_object* v_res_1053_; 
v_bi_boxed_1052_ = lean_unbox(v_bi_1049_);
v_res_1053_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1046_, v_inst_1047_, v_x_1048_, v_bi_boxed_1052_, v_t_1050_, v_b_1051_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS(lean_object* v_m_1054_, lean_object* v_inst_1055_, lean_object* v_inst_1056_, lean_object* v_x_1057_, uint8_t v_bi_1058_, lean_object* v_t_1059_, lean_object* v_b_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1055_, v_inst_1056_, v_x_1057_, v_bi_1058_, v_t_1059_, v_b_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___boxed(lean_object* v_m_1062_, lean_object* v_inst_1063_, lean_object* v_inst_1064_, lean_object* v_x_1065_, lean_object* v_bi_1066_, lean_object* v_t_1067_, lean_object* v_b_1068_){
_start:
{
uint8_t v_bi_boxed_1069_; lean_object* v_res_1070_; 
v_bi_boxed_1069_ = lean_unbox(v_bi_1066_);
v_res_1070_ = l_Lean_Meta_Sym_Internal_mkForallS(v_m_1062_, v_inst_1063_, v_inst_1064_, v_x_1065_, v_bi_boxed_1069_, v_t_1067_, v_b_1068_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0(lean_object* v_x_1071_, lean_object* v_t_1072_, lean_object* v_v_1073_, lean_object* v_b_1074_, uint8_t v_nondep_1075_, lean_object* v_share1_1076_, lean_object* v_____r_1077_){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = l_Lean_Expr_letE___override(v_x_1071_, v_t_1072_, v_v_1073_, v_b_1074_, v_nondep_1075_);
v___x_1079_ = lean_apply_1(v_share1_1076_, v___x_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0___boxed(lean_object* v_x_1080_, lean_object* v_t_1081_, lean_object* v_v_1082_, lean_object* v_b_1083_, lean_object* v_nondep_1084_, lean_object* v_share1_1085_, lean_object* v_____r_1086_){
_start:
{
uint8_t v_nondep_boxed_1087_; lean_object* v_res_1088_; 
v_nondep_boxed_1087_ = lean_unbox(v_nondep_1084_);
v_res_1088_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0(v_x_1080_, v_t_1081_, v_v_1082_, v_b_1083_, v_nondep_boxed_1087_, v_share1_1085_, v_____r_1086_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__3(lean_object* v_assertShared_1089_, lean_object* v_v_1090_, lean_object* v_toBind_1091_, lean_object* v___f_1092_, lean_object* v_____r_1093_){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = lean_apply_1(v_assertShared_1089_, v_v_1090_);
v___x_1095_ = lean_apply_4(v_toBind_1091_, lean_box(0), lean_box(0), v___x_1094_, v___f_1092_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1(lean_object* v___f_1096_, lean_object* v_assertShared_1097_, lean_object* v_b_1098_, lean_object* v_toBind_1099_, lean_object* v___f_1100_, lean_object* v_v_1101_, lean_object* v_t_1102_, uint8_t v_____do__lift_1103_){
_start:
{
if (v_____do__lift_1103_ == 0)
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
lean_dec_ref(v_t_1102_);
lean_dec_ref(v_v_1101_);
lean_dec(v___f_1100_);
lean_dec(v_toBind_1099_);
lean_dec_ref(v_b_1098_);
lean_dec(v_assertShared_1097_);
v___x_1104_ = lean_box(0);
v___x_1105_ = lean_apply_1(v___f_1096_, v___x_1104_);
return v___x_1105_;
}
else
{
lean_object* v___f_1106_; lean_object* v___f_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
lean_dec(v___f_1096_);
lean_inc_n(v_toBind_1099_, 2);
lean_inc_n(v_assertShared_1097_, 2);
v___f_1106_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLambdaS___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1106_, 0, v_assertShared_1097_);
lean_closure_set(v___f_1106_, 1, v_b_1098_);
lean_closure_set(v___f_1106_, 2, v_toBind_1099_);
lean_closure_set(v___f_1106_, 3, v___f_1100_);
v___f_1107_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1107_, 0, v_assertShared_1097_);
lean_closure_set(v___f_1107_, 1, v_v_1101_);
lean_closure_set(v___f_1107_, 2, v_toBind_1099_);
lean_closure_set(v___f_1107_, 3, v___f_1106_);
v___x_1108_ = lean_apply_1(v_assertShared_1097_, v_t_1102_);
v___x_1109_ = lean_apply_4(v_toBind_1099_, lean_box(0), lean_box(0), v___x_1108_, v___f_1107_);
return v___x_1109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1___boxed(lean_object* v___f_1110_, lean_object* v_assertShared_1111_, lean_object* v_b_1112_, lean_object* v_toBind_1113_, lean_object* v___f_1114_, lean_object* v_v_1115_, lean_object* v_t_1116_, lean_object* v_____do__lift_1117_){
_start:
{
uint8_t v_____do__lift_84__boxed_1118_; lean_object* v_res_1119_; 
v_____do__lift_84__boxed_1118_ = lean_unbox(v_____do__lift_1117_);
v_res_1119_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1(v___f_1110_, v_assertShared_1111_, v_b_1112_, v_toBind_1113_, v___f_1114_, v_v_1115_, v_t_1116_, v_____do__lift_84__boxed_1118_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg(lean_object* v_inst_1120_, lean_object* v_inst_1121_, lean_object* v_x_1122_, lean_object* v_t_1123_, lean_object* v_v_1124_, lean_object* v_b_1125_, uint8_t v_nondep_1126_){
_start:
{
lean_object* v_toBind_1127_; lean_object* v_share1_1128_; lean_object* v_assertShared_1129_; lean_object* v_isDebugEnabled_1130_; lean_object* v___x_1131_; lean_object* v___f_1132_; lean_object* v___f_1133_; lean_object* v___f_1134_; lean_object* v___x_1135_; 
v_toBind_1127_ = lean_ctor_get(v_inst_1121_, 1);
lean_inc_n(v_toBind_1127_, 2);
lean_dec_ref(v_inst_1121_);
v_share1_1128_ = lean_ctor_get(v_inst_1120_, 0);
lean_inc(v_share1_1128_);
v_assertShared_1129_ = lean_ctor_get(v_inst_1120_, 1);
lean_inc(v_assertShared_1129_);
v_isDebugEnabled_1130_ = lean_ctor_get(v_inst_1120_, 2);
lean_inc(v_isDebugEnabled_1130_);
lean_dec_ref(v_inst_1120_);
v___x_1131_ = lean_box(v_nondep_1126_);
lean_inc_ref(v_b_1125_);
lean_inc_ref(v_v_1124_);
lean_inc_ref(v_t_1123_);
v___f_1132_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1132_, 0, v_x_1122_);
lean_closure_set(v___f_1132_, 1, v_t_1123_);
lean_closure_set(v___f_1132_, 2, v_v_1124_);
lean_closure_set(v___f_1132_, 3, v_b_1125_);
lean_closure_set(v___f_1132_, 4, v___x_1131_);
lean_closure_set(v___f_1132_, 5, v_share1_1128_);
lean_inc_ref(v___f_1132_);
v___f_1133_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1133_, 0, v___f_1132_);
v___f_1134_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_1134_, 0, v___f_1132_);
lean_closure_set(v___f_1134_, 1, v_assertShared_1129_);
lean_closure_set(v___f_1134_, 2, v_b_1125_);
lean_closure_set(v___f_1134_, 3, v_toBind_1127_);
lean_closure_set(v___f_1134_, 4, v___f_1133_);
lean_closure_set(v___f_1134_, 5, v_v_1124_);
lean_closure_set(v___f_1134_, 6, v_t_1123_);
v___x_1135_ = lean_apply_4(v_toBind_1127_, lean_box(0), lean_box(0), v_isDebugEnabled_1130_, v___f_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___redArg___boxed(lean_object* v_inst_1136_, lean_object* v_inst_1137_, lean_object* v_x_1138_, lean_object* v_t_1139_, lean_object* v_v_1140_, lean_object* v_b_1141_, lean_object* v_nondep_1142_){
_start:
{
uint8_t v_nondep_boxed_1143_; lean_object* v_res_1144_; 
v_nondep_boxed_1143_ = lean_unbox(v_nondep_1142_);
v_res_1144_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1136_, v_inst_1137_, v_x_1138_, v_t_1139_, v_v_1140_, v_b_1141_, v_nondep_boxed_1143_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS(lean_object* v_m_1145_, lean_object* v_inst_1146_, lean_object* v_inst_1147_, lean_object* v_x_1148_, lean_object* v_t_1149_, lean_object* v_v_1150_, lean_object* v_b_1151_, uint8_t v_nondep_1152_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1146_, v_inst_1147_, v_x_1148_, v_t_1149_, v_v_1150_, v_b_1151_, v_nondep_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___boxed(lean_object* v_m_1154_, lean_object* v_inst_1155_, lean_object* v_inst_1156_, lean_object* v_x_1157_, lean_object* v_t_1158_, lean_object* v_v_1159_, lean_object* v_b_1160_, lean_object* v_nondep_1161_){
_start:
{
uint8_t v_nondep_boxed_1162_; lean_object* v_res_1163_; 
v_nondep_boxed_1162_ = lean_unbox(v_nondep_1161_);
v_res_1163_ = l_Lean_Meta_Sym_Internal_mkLetS(v_m_1154_, v_inst_1155_, v_inst_1156_, v_x_1157_, v_t_1158_, v_v_1159_, v_b_1160_, v_nondep_boxed_1162_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS___redArg___lam__0(lean_object* v_x_1164_, lean_object* v_t_1165_, lean_object* v_v_1166_, lean_object* v_b_1167_, lean_object* v_share1_1168_, lean_object* v_____r_1169_){
_start:
{
uint8_t v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1170_ = 1;
v___x_1171_ = l_Lean_Expr_letE___override(v_x_1164_, v_t_1165_, v_v_1166_, v_b_1167_, v___x_1170_);
v___x_1172_ = lean_apply_1(v_share1_1168_, v___x_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS___redArg(lean_object* v_inst_1173_, lean_object* v_inst_1174_, lean_object* v_x_1175_, lean_object* v_t_1176_, lean_object* v_v_1177_, lean_object* v_b_1178_){
_start:
{
lean_object* v_toBind_1179_; lean_object* v_share1_1180_; lean_object* v_assertShared_1181_; lean_object* v_isDebugEnabled_1182_; lean_object* v___f_1183_; lean_object* v___f_1184_; lean_object* v___f_1185_; lean_object* v___x_1186_; 
v_toBind_1179_ = lean_ctor_get(v_inst_1174_, 1);
lean_inc_n(v_toBind_1179_, 2);
lean_dec_ref(v_inst_1174_);
v_share1_1180_ = lean_ctor_get(v_inst_1173_, 0);
lean_inc(v_share1_1180_);
v_assertShared_1181_ = lean_ctor_get(v_inst_1173_, 1);
lean_inc(v_assertShared_1181_);
v_isDebugEnabled_1182_ = lean_ctor_get(v_inst_1173_, 2);
lean_inc(v_isDebugEnabled_1182_);
lean_dec_ref(v_inst_1173_);
lean_inc_ref(v_b_1178_);
lean_inc_ref(v_v_1177_);
lean_inc_ref(v_t_1176_);
v___f_1183_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkHaveS___redArg___lam__0), 6, 5);
lean_closure_set(v___f_1183_, 0, v_x_1175_);
lean_closure_set(v___f_1183_, 1, v_t_1176_);
lean_closure_set(v___f_1183_, 2, v_v_1177_);
lean_closure_set(v___f_1183_, 3, v_b_1178_);
lean_closure_set(v___f_1183_, 4, v_share1_1180_);
lean_inc_ref(v___f_1183_);
v___f_1184_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkMDataS___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1184_, 0, v___f_1183_);
v___f_1185_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkLetS___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_1185_, 0, v___f_1183_);
lean_closure_set(v___f_1185_, 1, v_assertShared_1181_);
lean_closure_set(v___f_1185_, 2, v_b_1178_);
lean_closure_set(v___f_1185_, 3, v_toBind_1179_);
lean_closure_set(v___f_1185_, 4, v___f_1184_);
lean_closure_set(v___f_1185_, 5, v_v_1177_);
lean_closure_set(v___f_1185_, 6, v_t_1176_);
v___x_1186_ = lean_apply_4(v_toBind_1179_, lean_box(0), lean_box(0), v_isDebugEnabled_1182_, v___f_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkHaveS(lean_object* v_m_1187_, lean_object* v_inst_1188_, lean_object* v_inst_1189_, lean_object* v_x_1190_, lean_object* v_t_1191_, lean_object* v_v_1192_, lean_object* v_b_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_Meta_Sym_Internal_mkHaveS___redArg(v_inst_1188_, v_inst_1189_, v_x_1190_, v_t_1191_, v_v_1192_, v_b_1193_);
return v___x_1194_;
}
}
static lean_object* _init_l_Lean_Expr_updateAppS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1197_ = ((lean_object*)(l_Lean_Expr_updateAppS_x21___redArg___closed__1));
v___x_1198_ = lean_unsigned_to_nat(25u);
v___x_1199_ = lean_unsigned_to_nat(148u);
v___x_1200_ = ((lean_object*)(l_Lean_Expr_updateAppS_x21___redArg___closed__0));
v___x_1201_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0));
v___x_1202_ = l_mkPanicMessageWithDecl(v___x_1201_, v___x_1200_, v___x_1199_, v___x_1198_, v___x_1197_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateAppS_x21___redArg(lean_object* v_inst_1203_, lean_object* v_inst_1204_, lean_object* v_e_1205_, lean_object* v_newFn_1206_, lean_object* v_newArg_1207_){
_start:
{
if (lean_obj_tag(v_e_1205_) == 5)
{
lean_object* v_toApplicative_1208_; lean_object* v_toPure_1209_; lean_object* v_fn_1210_; lean_object* v_arg_1211_; size_t v___x_1212_; size_t v___x_1213_; uint8_t v___x_1214_; 
v_toApplicative_1208_ = lean_ctor_get(v_inst_1204_, 0);
v_toPure_1209_ = lean_ctor_get(v_toApplicative_1208_, 1);
v_fn_1210_ = lean_ctor_get(v_e_1205_, 0);
v_arg_1211_ = lean_ctor_get(v_e_1205_, 1);
v___x_1212_ = lean_ptr_addr(v_fn_1210_);
v___x_1213_ = lean_ptr_addr(v_newFn_1206_);
v___x_1214_ = lean_usize_dec_eq(v___x_1212_, v___x_1213_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; 
lean_dec_ref_known(v_e_1205_, 2);
v___x_1215_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1203_, v_inst_1204_, v_newFn_1206_, v_newArg_1207_);
return v___x_1215_;
}
else
{
size_t v___x_1216_; size_t v___x_1217_; uint8_t v___x_1218_; 
v___x_1216_ = lean_ptr_addr(v_arg_1211_);
v___x_1217_ = lean_ptr_addr(v_newArg_1207_);
v___x_1218_ = lean_usize_dec_eq(v___x_1216_, v___x_1217_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; 
lean_dec_ref_known(v_e_1205_, 2);
v___x_1219_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1203_, v_inst_1204_, v_newFn_1206_, v_newArg_1207_);
return v___x_1219_;
}
else
{
lean_object* v___x_1220_; 
lean_inc(v_toPure_1209_);
lean_dec_ref(v_newArg_1207_);
lean_dec_ref(v_newFn_1206_);
lean_dec_ref(v_inst_1204_);
lean_dec_ref(v_inst_1203_);
v___x_1220_ = lean_apply_2(v_toPure_1209_, lean_box(0), v_e_1205_);
return v___x_1220_;
}
}
}
else
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
lean_dec_ref(v_newArg_1207_);
lean_dec_ref(v_newFn_1206_);
lean_dec_ref(v_e_1205_);
lean_dec_ref(v_inst_1203_);
v___x_1221_ = l_Lean_instInhabitedExpr;
v___x_1222_ = l_instInhabitedOfMonad___redArg(v_inst_1204_, v___x_1221_);
v___x_1223_ = lean_obj_once(&l_Lean_Expr_updateAppS_x21___redArg___closed__2, &l_Lean_Expr_updateAppS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateAppS_x21___redArg___closed__2);
v___x_1224_ = l_panic___redArg(v___x_1222_, v___x_1223_);
lean_dec(v___x_1222_);
return v___x_1224_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateAppS_x21(lean_object* v_m_1225_, lean_object* v_inst_1226_, lean_object* v_inst_1227_, lean_object* v_e_1228_, lean_object* v_newFn_1229_, lean_object* v_newArg_1230_){
_start:
{
if (lean_obj_tag(v_e_1228_) == 5)
{
lean_object* v_toApplicative_1231_; lean_object* v_toPure_1232_; lean_object* v_fn_1233_; lean_object* v_arg_1234_; size_t v___x_1235_; size_t v___x_1236_; uint8_t v___x_1237_; 
v_toApplicative_1231_ = lean_ctor_get(v_inst_1227_, 0);
v_toPure_1232_ = lean_ctor_get(v_toApplicative_1231_, 1);
v_fn_1233_ = lean_ctor_get(v_e_1228_, 0);
v_arg_1234_ = lean_ctor_get(v_e_1228_, 1);
v___x_1235_ = lean_ptr_addr(v_fn_1233_);
v___x_1236_ = lean_ptr_addr(v_newFn_1229_);
v___x_1237_ = lean_usize_dec_eq(v___x_1235_, v___x_1236_);
if (v___x_1237_ == 0)
{
lean_object* v___x_1238_; 
lean_dec_ref_known(v_e_1228_, 2);
v___x_1238_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1226_, v_inst_1227_, v_newFn_1229_, v_newArg_1230_);
return v___x_1238_;
}
else
{
size_t v___x_1239_; size_t v___x_1240_; uint8_t v___x_1241_; 
v___x_1239_ = lean_ptr_addr(v_arg_1234_);
v___x_1240_ = lean_ptr_addr(v_newArg_1230_);
v___x_1241_ = lean_usize_dec_eq(v___x_1239_, v___x_1240_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; 
lean_dec_ref_known(v_e_1228_, 2);
v___x_1242_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1226_, v_inst_1227_, v_newFn_1229_, v_newArg_1230_);
return v___x_1242_;
}
else
{
lean_object* v___x_1243_; 
lean_inc(v_toPure_1232_);
lean_dec_ref(v_newArg_1230_);
lean_dec_ref(v_newFn_1229_);
lean_dec_ref(v_inst_1227_);
lean_dec_ref(v_inst_1226_);
v___x_1243_ = lean_apply_2(v_toPure_1232_, lean_box(0), v_e_1228_);
return v___x_1243_;
}
}
}
else
{
lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
lean_dec_ref(v_newArg_1230_);
lean_dec_ref(v_newFn_1229_);
lean_dec_ref(v_e_1228_);
lean_dec_ref(v_inst_1226_);
v___x_1244_ = l_Lean_instInhabitedExpr;
v___x_1245_ = l_instInhabitedOfMonad___redArg(v_inst_1227_, v___x_1244_);
v___x_1246_ = lean_obj_once(&l_Lean_Expr_updateAppS_x21___redArg___closed__2, &l_Lean_Expr_updateAppS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateAppS_x21___redArg___closed__2);
v___x_1247_ = l_panic___redArg(v___x_1245_, v___x_1246_);
lean_dec(v___x_1245_);
return v___x_1247_;
}
}
}
static lean_object* _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1250_ = ((lean_object*)(l_Lean_Expr_updateMDataS_x21___redArg___closed__1));
v___x_1251_ = lean_unsigned_to_nat(24u);
v___x_1252_ = lean_unsigned_to_nat(152u);
v___x_1253_ = ((lean_object*)(l_Lean_Expr_updateMDataS_x21___redArg___closed__0));
v___x_1254_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0));
v___x_1255_ = l_mkPanicMessageWithDecl(v___x_1254_, v___x_1253_, v___x_1252_, v___x_1251_, v___x_1250_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateMDataS_x21___redArg(lean_object* v_inst_1256_, lean_object* v_inst_1257_, lean_object* v_e_1258_, lean_object* v_newExpr_1259_){
_start:
{
if (lean_obj_tag(v_e_1258_) == 10)
{
lean_object* v_toApplicative_1260_; lean_object* v_toPure_1261_; lean_object* v_data_1262_; lean_object* v_expr_1263_; size_t v___x_1264_; size_t v___x_1265_; uint8_t v___x_1266_; 
v_toApplicative_1260_ = lean_ctor_get(v_inst_1257_, 0);
v_toPure_1261_ = lean_ctor_get(v_toApplicative_1260_, 1);
v_data_1262_ = lean_ctor_get(v_e_1258_, 0);
v_expr_1263_ = lean_ctor_get(v_e_1258_, 1);
v___x_1264_ = lean_ptr_addr(v_expr_1263_);
v___x_1265_ = lean_ptr_addr(v_newExpr_1259_);
v___x_1266_ = lean_usize_dec_eq(v___x_1264_, v___x_1265_);
if (v___x_1266_ == 0)
{
lean_object* v___x_1267_; 
lean_inc(v_data_1262_);
lean_dec_ref_known(v_e_1258_, 2);
v___x_1267_ = l_Lean_Meta_Sym_Internal_mkMDataS___redArg(v_inst_1256_, v_inst_1257_, v_data_1262_, v_newExpr_1259_);
return v___x_1267_;
}
else
{
lean_object* v___x_1268_; 
lean_inc(v_toPure_1261_);
lean_dec_ref(v_newExpr_1259_);
lean_dec_ref(v_inst_1257_);
lean_dec_ref(v_inst_1256_);
v___x_1268_ = lean_apply_2(v_toPure_1261_, lean_box(0), v_e_1258_);
return v___x_1268_;
}
}
else
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
lean_dec_ref(v_newExpr_1259_);
lean_dec_ref(v_e_1258_);
lean_dec_ref(v_inst_1256_);
v___x_1269_ = l_Lean_instInhabitedExpr;
v___x_1270_ = l_instInhabitedOfMonad___redArg(v_inst_1257_, v___x_1269_);
v___x_1271_ = lean_obj_once(&l_Lean_Expr_updateMDataS_x21___redArg___closed__2, &l_Lean_Expr_updateMDataS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__2);
v___x_1272_ = l_panic___redArg(v___x_1270_, v___x_1271_);
lean_dec(v___x_1270_);
return v___x_1272_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateMDataS_x21(lean_object* v_m_1273_, lean_object* v_inst_1274_, lean_object* v_inst_1275_, lean_object* v_e_1276_, lean_object* v_newExpr_1277_){
_start:
{
if (lean_obj_tag(v_e_1276_) == 10)
{
lean_object* v_toApplicative_1278_; lean_object* v_toPure_1279_; lean_object* v_data_1280_; lean_object* v_expr_1281_; size_t v___x_1282_; size_t v___x_1283_; uint8_t v___x_1284_; 
v_toApplicative_1278_ = lean_ctor_get(v_inst_1275_, 0);
v_toPure_1279_ = lean_ctor_get(v_toApplicative_1278_, 1);
v_data_1280_ = lean_ctor_get(v_e_1276_, 0);
v_expr_1281_ = lean_ctor_get(v_e_1276_, 1);
v___x_1282_ = lean_ptr_addr(v_expr_1281_);
v___x_1283_ = lean_ptr_addr(v_newExpr_1277_);
v___x_1284_ = lean_usize_dec_eq(v___x_1282_, v___x_1283_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; 
lean_inc(v_data_1280_);
lean_dec_ref_known(v_e_1276_, 2);
v___x_1285_ = l_Lean_Meta_Sym_Internal_mkMDataS___redArg(v_inst_1274_, v_inst_1275_, v_data_1280_, v_newExpr_1277_);
return v___x_1285_;
}
else
{
lean_object* v___x_1286_; 
lean_inc(v_toPure_1279_);
lean_dec_ref(v_newExpr_1277_);
lean_dec_ref(v_inst_1275_);
lean_dec_ref(v_inst_1274_);
v___x_1286_ = lean_apply_2(v_toPure_1279_, lean_box(0), v_e_1276_);
return v___x_1286_;
}
}
else
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
lean_dec_ref(v_newExpr_1277_);
lean_dec_ref(v_e_1276_);
lean_dec_ref(v_inst_1274_);
v___x_1287_ = l_Lean_instInhabitedExpr;
v___x_1288_ = l_instInhabitedOfMonad___redArg(v_inst_1275_, v___x_1287_);
v___x_1289_ = lean_obj_once(&l_Lean_Expr_updateMDataS_x21___redArg___closed__2, &l_Lean_Expr_updateMDataS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateMDataS_x21___redArg___closed__2);
v___x_1290_ = l_panic___redArg(v___x_1288_, v___x_1289_);
lean_dec(v___x_1288_);
return v___x_1290_;
}
}
}
static lean_object* _init_l_Lean_Expr_updateProjS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1293_ = ((lean_object*)(l_Lean_Expr_updateProjS_x21___redArg___closed__1));
v___x_1294_ = lean_unsigned_to_nat(25u);
v___x_1295_ = lean_unsigned_to_nat(156u);
v___x_1296_ = ((lean_object*)(l_Lean_Expr_updateProjS_x21___redArg___closed__0));
v___x_1297_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0));
v___x_1298_ = l_mkPanicMessageWithDecl(v___x_1297_, v___x_1296_, v___x_1295_, v___x_1294_, v___x_1293_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateProjS_x21___redArg(lean_object* v_inst_1299_, lean_object* v_inst_1300_, lean_object* v_e_1301_, lean_object* v_newExpr_1302_){
_start:
{
if (lean_obj_tag(v_e_1301_) == 11)
{
lean_object* v_toApplicative_1303_; lean_object* v_toPure_1304_; lean_object* v_typeName_1305_; lean_object* v_idx_1306_; lean_object* v_struct_1307_; size_t v___x_1308_; size_t v___x_1309_; uint8_t v___x_1310_; 
v_toApplicative_1303_ = lean_ctor_get(v_inst_1300_, 0);
v_toPure_1304_ = lean_ctor_get(v_toApplicative_1303_, 1);
v_typeName_1305_ = lean_ctor_get(v_e_1301_, 0);
v_idx_1306_ = lean_ctor_get(v_e_1301_, 1);
v_struct_1307_ = lean_ctor_get(v_e_1301_, 2);
v___x_1308_ = lean_ptr_addr(v_struct_1307_);
v___x_1309_ = lean_ptr_addr(v_newExpr_1302_);
v___x_1310_ = lean_usize_dec_eq(v___x_1308_, v___x_1309_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; 
lean_inc(v_idx_1306_);
lean_inc(v_typeName_1305_);
lean_dec_ref_known(v_e_1301_, 3);
v___x_1311_ = l_Lean_Meta_Sym_Internal_mkProjS___redArg(v_inst_1299_, v_inst_1300_, v_typeName_1305_, v_idx_1306_, v_newExpr_1302_);
return v___x_1311_;
}
else
{
lean_object* v___x_1312_; 
lean_inc(v_toPure_1304_);
lean_dec_ref(v_newExpr_1302_);
lean_dec_ref(v_inst_1300_);
lean_dec_ref(v_inst_1299_);
v___x_1312_ = lean_apply_2(v_toPure_1304_, lean_box(0), v_e_1301_);
return v___x_1312_;
}
}
else
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
lean_dec_ref(v_newExpr_1302_);
lean_dec_ref(v_e_1301_);
lean_dec_ref(v_inst_1299_);
v___x_1313_ = l_Lean_instInhabitedExpr;
v___x_1314_ = l_instInhabitedOfMonad___redArg(v_inst_1300_, v___x_1313_);
v___x_1315_ = lean_obj_once(&l_Lean_Expr_updateProjS_x21___redArg___closed__2, &l_Lean_Expr_updateProjS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateProjS_x21___redArg___closed__2);
v___x_1316_ = l_panic___redArg(v___x_1314_, v___x_1315_);
lean_dec(v___x_1314_);
return v___x_1316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateProjS_x21(lean_object* v_m_1317_, lean_object* v_inst_1318_, lean_object* v_inst_1319_, lean_object* v_e_1320_, lean_object* v_newExpr_1321_){
_start:
{
if (lean_obj_tag(v_e_1320_) == 11)
{
lean_object* v_toApplicative_1322_; lean_object* v_toPure_1323_; lean_object* v_typeName_1324_; lean_object* v_idx_1325_; lean_object* v_struct_1326_; size_t v___x_1327_; size_t v___x_1328_; uint8_t v___x_1329_; 
v_toApplicative_1322_ = lean_ctor_get(v_inst_1319_, 0);
v_toPure_1323_ = lean_ctor_get(v_toApplicative_1322_, 1);
v_typeName_1324_ = lean_ctor_get(v_e_1320_, 0);
v_idx_1325_ = lean_ctor_get(v_e_1320_, 1);
v_struct_1326_ = lean_ctor_get(v_e_1320_, 2);
v___x_1327_ = lean_ptr_addr(v_struct_1326_);
v___x_1328_ = lean_ptr_addr(v_newExpr_1321_);
v___x_1329_ = lean_usize_dec_eq(v___x_1327_, v___x_1328_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; 
lean_inc(v_idx_1325_);
lean_inc(v_typeName_1324_);
lean_dec_ref_known(v_e_1320_, 3);
v___x_1330_ = l_Lean_Meta_Sym_Internal_mkProjS___redArg(v_inst_1318_, v_inst_1319_, v_typeName_1324_, v_idx_1325_, v_newExpr_1321_);
return v___x_1330_;
}
else
{
lean_object* v___x_1331_; 
lean_inc(v_toPure_1323_);
lean_dec_ref(v_newExpr_1321_);
lean_dec_ref(v_inst_1319_);
lean_dec_ref(v_inst_1318_);
v___x_1331_ = lean_apply_2(v_toPure_1323_, lean_box(0), v_e_1320_);
return v___x_1331_;
}
}
else
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_dec_ref(v_newExpr_1321_);
lean_dec_ref(v_e_1320_);
lean_dec_ref(v_inst_1318_);
v___x_1332_ = l_Lean_instInhabitedExpr;
v___x_1333_ = l_instInhabitedOfMonad___redArg(v_inst_1319_, v___x_1332_);
v___x_1334_ = lean_obj_once(&l_Lean_Expr_updateProjS_x21___redArg___closed__2, &l_Lean_Expr_updateProjS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateProjS_x21___redArg___closed__2);
v___x_1335_ = l_panic___redArg(v___x_1333_, v___x_1334_);
lean_dec(v___x_1333_);
return v___x_1335_;
}
}
}
static lean_object* _init_l_Lean_Expr_updateForallS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1338_ = ((lean_object*)(l_Lean_Expr_updateForallS_x21___redArg___closed__1));
v___x_1339_ = lean_unsigned_to_nat(31u);
v___x_1340_ = lean_unsigned_to_nat(160u);
v___x_1341_ = ((lean_object*)(l_Lean_Expr_updateForallS_x21___redArg___closed__0));
v___x_1342_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0));
v___x_1343_ = l_mkPanicMessageWithDecl(v___x_1342_, v___x_1341_, v___x_1340_, v___x_1339_, v___x_1338_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallS_x21___redArg(lean_object* v_inst_1344_, lean_object* v_inst_1345_, lean_object* v_e_1346_, lean_object* v_newDomain_1347_, lean_object* v_newBody_1348_){
_start:
{
if (lean_obj_tag(v_e_1346_) == 7)
{
lean_object* v_toApplicative_1349_; lean_object* v_toPure_1350_; lean_object* v_binderName_1351_; lean_object* v_binderType_1352_; lean_object* v_body_1353_; uint8_t v_binderInfo_1354_; size_t v___x_1355_; size_t v___x_1356_; uint8_t v___x_1357_; 
v_toApplicative_1349_ = lean_ctor_get(v_inst_1345_, 0);
v_toPure_1350_ = lean_ctor_get(v_toApplicative_1349_, 1);
v_binderName_1351_ = lean_ctor_get(v_e_1346_, 0);
v_binderType_1352_ = lean_ctor_get(v_e_1346_, 1);
v_body_1353_ = lean_ctor_get(v_e_1346_, 2);
v_binderInfo_1354_ = lean_ctor_get_uint8(v_e_1346_, sizeof(void*)*3 + 8);
v___x_1355_ = lean_ptr_addr(v_binderType_1352_);
v___x_1356_ = lean_ptr_addr(v_newDomain_1347_);
v___x_1357_ = lean_usize_dec_eq(v___x_1355_, v___x_1356_);
if (v___x_1357_ == 0)
{
lean_object* v___x_1358_; 
lean_inc(v_binderName_1351_);
lean_dec_ref_known(v_e_1346_, 3);
v___x_1358_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1344_, v_inst_1345_, v_binderName_1351_, v_binderInfo_1354_, v_newDomain_1347_, v_newBody_1348_);
return v___x_1358_;
}
else
{
size_t v___x_1359_; size_t v___x_1360_; uint8_t v___x_1361_; 
v___x_1359_ = lean_ptr_addr(v_body_1353_);
v___x_1360_ = lean_ptr_addr(v_newBody_1348_);
v___x_1361_ = lean_usize_dec_eq(v___x_1359_, v___x_1360_);
if (v___x_1361_ == 0)
{
lean_object* v___x_1362_; 
lean_inc(v_binderName_1351_);
lean_dec_ref_known(v_e_1346_, 3);
v___x_1362_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1344_, v_inst_1345_, v_binderName_1351_, v_binderInfo_1354_, v_newDomain_1347_, v_newBody_1348_);
return v___x_1362_;
}
else
{
lean_object* v___x_1363_; 
lean_inc(v_toPure_1350_);
lean_dec_ref(v_newBody_1348_);
lean_dec_ref(v_newDomain_1347_);
lean_dec_ref(v_inst_1345_);
lean_dec_ref(v_inst_1344_);
v___x_1363_ = lean_apply_2(v_toPure_1350_, lean_box(0), v_e_1346_);
return v___x_1363_;
}
}
}
else
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
lean_dec_ref(v_newBody_1348_);
lean_dec_ref(v_newDomain_1347_);
lean_dec_ref(v_e_1346_);
lean_dec_ref(v_inst_1344_);
v___x_1364_ = l_Lean_instInhabitedExpr;
v___x_1365_ = l_instInhabitedOfMonad___redArg(v_inst_1345_, v___x_1364_);
v___x_1366_ = lean_obj_once(&l_Lean_Expr_updateForallS_x21___redArg___closed__2, &l_Lean_Expr_updateForallS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateForallS_x21___redArg___closed__2);
v___x_1367_ = l_panic___redArg(v___x_1365_, v___x_1366_);
lean_dec(v___x_1365_);
return v___x_1367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateForallS_x21(lean_object* v_m_1368_, lean_object* v_inst_1369_, lean_object* v_inst_1370_, lean_object* v_e_1371_, lean_object* v_newDomain_1372_, lean_object* v_newBody_1373_){
_start:
{
if (lean_obj_tag(v_e_1371_) == 7)
{
lean_object* v_toApplicative_1374_; lean_object* v_toPure_1375_; lean_object* v_binderName_1376_; lean_object* v_binderType_1377_; lean_object* v_body_1378_; uint8_t v_binderInfo_1379_; size_t v___x_1380_; size_t v___x_1381_; uint8_t v___x_1382_; 
v_toApplicative_1374_ = lean_ctor_get(v_inst_1370_, 0);
v_toPure_1375_ = lean_ctor_get(v_toApplicative_1374_, 1);
v_binderName_1376_ = lean_ctor_get(v_e_1371_, 0);
v_binderType_1377_ = lean_ctor_get(v_e_1371_, 1);
v_body_1378_ = lean_ctor_get(v_e_1371_, 2);
v_binderInfo_1379_ = lean_ctor_get_uint8(v_e_1371_, sizeof(void*)*3 + 8);
v___x_1380_ = lean_ptr_addr(v_binderType_1377_);
v___x_1381_ = lean_ptr_addr(v_newDomain_1372_);
v___x_1382_ = lean_usize_dec_eq(v___x_1380_, v___x_1381_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; 
lean_inc(v_binderName_1376_);
lean_dec_ref_known(v_e_1371_, 3);
v___x_1383_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1369_, v_inst_1370_, v_binderName_1376_, v_binderInfo_1379_, v_newDomain_1372_, v_newBody_1373_);
return v___x_1383_;
}
else
{
size_t v___x_1384_; size_t v___x_1385_; uint8_t v___x_1386_; 
v___x_1384_ = lean_ptr_addr(v_body_1378_);
v___x_1385_ = lean_ptr_addr(v_newBody_1373_);
v___x_1386_ = lean_usize_dec_eq(v___x_1384_, v___x_1385_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; 
lean_inc(v_binderName_1376_);
lean_dec_ref_known(v_e_1371_, 3);
v___x_1387_ = l_Lean_Meta_Sym_Internal_mkForallS___redArg(v_inst_1369_, v_inst_1370_, v_binderName_1376_, v_binderInfo_1379_, v_newDomain_1372_, v_newBody_1373_);
return v___x_1387_;
}
else
{
lean_object* v___x_1388_; 
lean_inc(v_toPure_1375_);
lean_dec_ref(v_newBody_1373_);
lean_dec_ref(v_newDomain_1372_);
lean_dec_ref(v_inst_1370_);
lean_dec_ref(v_inst_1369_);
v___x_1388_ = lean_apply_2(v_toPure_1375_, lean_box(0), v_e_1371_);
return v___x_1388_;
}
}
}
else
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec_ref(v_newBody_1373_);
lean_dec_ref(v_newDomain_1372_);
lean_dec_ref(v_e_1371_);
lean_dec_ref(v_inst_1369_);
v___x_1389_ = l_Lean_instInhabitedExpr;
v___x_1390_ = l_instInhabitedOfMonad___redArg(v_inst_1370_, v___x_1389_);
v___x_1391_ = lean_obj_once(&l_Lean_Expr_updateForallS_x21___redArg___closed__2, &l_Lean_Expr_updateForallS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateForallS_x21___redArg___closed__2);
v___x_1392_ = l_panic___redArg(v___x_1390_, v___x_1391_);
lean_dec(v___x_1390_);
return v___x_1392_;
}
}
}
static lean_object* _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1395_ = ((lean_object*)(l_Lean_Expr_updateLambdaS_x21___redArg___closed__1));
v___x_1396_ = lean_unsigned_to_nat(27u);
v___x_1397_ = lean_unsigned_to_nat(167u);
v___x_1398_ = ((lean_object*)(l_Lean_Expr_updateLambdaS_x21___redArg___closed__0));
v___x_1399_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0));
v___x_1400_ = l_mkPanicMessageWithDecl(v___x_1399_, v___x_1398_, v___x_1397_, v___x_1396_, v___x_1395_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaS_x21___redArg(lean_object* v_inst_1401_, lean_object* v_inst_1402_, lean_object* v_e_1403_, lean_object* v_newDomain_1404_, lean_object* v_newBody_1405_){
_start:
{
if (lean_obj_tag(v_e_1403_) == 6)
{
lean_object* v_toApplicative_1406_; lean_object* v_toPure_1407_; lean_object* v_binderName_1408_; lean_object* v_binderType_1409_; lean_object* v_body_1410_; uint8_t v_binderInfo_1411_; size_t v___x_1412_; size_t v___x_1413_; uint8_t v___x_1414_; 
v_toApplicative_1406_ = lean_ctor_get(v_inst_1402_, 0);
v_toPure_1407_ = lean_ctor_get(v_toApplicative_1406_, 1);
v_binderName_1408_ = lean_ctor_get(v_e_1403_, 0);
v_binderType_1409_ = lean_ctor_get(v_e_1403_, 1);
v_body_1410_ = lean_ctor_get(v_e_1403_, 2);
v_binderInfo_1411_ = lean_ctor_get_uint8(v_e_1403_, sizeof(void*)*3 + 8);
v___x_1412_ = lean_ptr_addr(v_binderType_1409_);
v___x_1413_ = lean_ptr_addr(v_newDomain_1404_);
v___x_1414_ = lean_usize_dec_eq(v___x_1412_, v___x_1413_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; 
lean_inc(v_binderName_1408_);
lean_dec_ref_known(v_e_1403_, 3);
v___x_1415_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_1401_, v_inst_1402_, v_binderName_1408_, v_binderInfo_1411_, v_newDomain_1404_, v_newBody_1405_);
return v___x_1415_;
}
else
{
size_t v___x_1416_; size_t v___x_1417_; uint8_t v___x_1418_; 
v___x_1416_ = lean_ptr_addr(v_body_1410_);
v___x_1417_ = lean_ptr_addr(v_newBody_1405_);
v___x_1418_ = lean_usize_dec_eq(v___x_1416_, v___x_1417_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; 
lean_inc(v_binderName_1408_);
lean_dec_ref_known(v_e_1403_, 3);
v___x_1419_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_1401_, v_inst_1402_, v_binderName_1408_, v_binderInfo_1411_, v_newDomain_1404_, v_newBody_1405_);
return v___x_1419_;
}
else
{
lean_object* v___x_1420_; 
lean_inc(v_toPure_1407_);
lean_dec_ref(v_newBody_1405_);
lean_dec_ref(v_newDomain_1404_);
lean_dec_ref(v_inst_1402_);
lean_dec_ref(v_inst_1401_);
v___x_1420_ = lean_apply_2(v_toPure_1407_, lean_box(0), v_e_1403_);
return v___x_1420_;
}
}
}
else
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_dec_ref(v_newBody_1405_);
lean_dec_ref(v_newDomain_1404_);
lean_dec_ref(v_e_1403_);
lean_dec_ref(v_inst_1401_);
v___x_1421_ = l_Lean_instInhabitedExpr;
v___x_1422_ = l_instInhabitedOfMonad___redArg(v_inst_1402_, v___x_1421_);
v___x_1423_ = lean_obj_once(&l_Lean_Expr_updateLambdaS_x21___redArg___closed__2, &l_Lean_Expr_updateLambdaS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__2);
v___x_1424_ = l_panic___redArg(v___x_1422_, v___x_1423_);
lean_dec(v___x_1422_);
return v___x_1424_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLambdaS_x21(lean_object* v_m_1425_, lean_object* v_inst_1426_, lean_object* v_inst_1427_, lean_object* v_e_1428_, lean_object* v_newDomain_1429_, lean_object* v_newBody_1430_){
_start:
{
if (lean_obj_tag(v_e_1428_) == 6)
{
lean_object* v_toApplicative_1431_; lean_object* v_toPure_1432_; lean_object* v_binderName_1433_; lean_object* v_binderType_1434_; lean_object* v_body_1435_; uint8_t v_binderInfo_1436_; size_t v___x_1437_; size_t v___x_1438_; uint8_t v___x_1439_; 
v_toApplicative_1431_ = lean_ctor_get(v_inst_1427_, 0);
v_toPure_1432_ = lean_ctor_get(v_toApplicative_1431_, 1);
v_binderName_1433_ = lean_ctor_get(v_e_1428_, 0);
v_binderType_1434_ = lean_ctor_get(v_e_1428_, 1);
v_body_1435_ = lean_ctor_get(v_e_1428_, 2);
v_binderInfo_1436_ = lean_ctor_get_uint8(v_e_1428_, sizeof(void*)*3 + 8);
v___x_1437_ = lean_ptr_addr(v_binderType_1434_);
v___x_1438_ = lean_ptr_addr(v_newDomain_1429_);
v___x_1439_ = lean_usize_dec_eq(v___x_1437_, v___x_1438_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; 
lean_inc(v_binderName_1433_);
lean_dec_ref_known(v_e_1428_, 3);
v___x_1440_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_1426_, v_inst_1427_, v_binderName_1433_, v_binderInfo_1436_, v_newDomain_1429_, v_newBody_1430_);
return v___x_1440_;
}
else
{
size_t v___x_1441_; size_t v___x_1442_; uint8_t v___x_1443_; 
v___x_1441_ = lean_ptr_addr(v_body_1435_);
v___x_1442_ = lean_ptr_addr(v_newBody_1430_);
v___x_1443_ = lean_usize_dec_eq(v___x_1441_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1444_; 
lean_inc(v_binderName_1433_);
lean_dec_ref_known(v_e_1428_, 3);
v___x_1444_ = l_Lean_Meta_Sym_Internal_mkLambdaS___redArg(v_inst_1426_, v_inst_1427_, v_binderName_1433_, v_binderInfo_1436_, v_newDomain_1429_, v_newBody_1430_);
return v___x_1444_;
}
else
{
lean_object* v___x_1445_; 
lean_inc(v_toPure_1432_);
lean_dec_ref(v_newBody_1430_);
lean_dec_ref(v_newDomain_1429_);
lean_dec_ref(v_inst_1427_);
lean_dec_ref(v_inst_1426_);
v___x_1445_ = lean_apply_2(v_toPure_1432_, lean_box(0), v_e_1428_);
return v___x_1445_;
}
}
}
else
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
lean_dec_ref(v_newBody_1430_);
lean_dec_ref(v_newDomain_1429_);
lean_dec_ref(v_e_1428_);
lean_dec_ref(v_inst_1426_);
v___x_1446_ = l_Lean_instInhabitedExpr;
v___x_1447_ = l_instInhabitedOfMonad___redArg(v_inst_1427_, v___x_1446_);
v___x_1448_ = lean_obj_once(&l_Lean_Expr_updateLambdaS_x21___redArg___closed__2, &l_Lean_Expr_updateLambdaS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateLambdaS_x21___redArg___closed__2);
v___x_1449_ = l_panic___redArg(v___x_1447_, v___x_1448_);
lean_dec(v___x_1447_);
return v___x_1449_;
}
}
}
static lean_object* _init_l_Lean_Expr_updateLetS_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1452_ = ((lean_object*)(l_Lean_Expr_updateLetS_x21___redArg___closed__1));
v___x_1453_ = lean_unsigned_to_nat(34u);
v___x_1454_ = lean_unsigned_to_nat(174u);
v___x_1455_ = ((lean_object*)(l_Lean_Expr_updateLetS_x21___redArg___closed__0));
v___x_1456_ = ((lean_object*)(l_Lean_Meta_Sym_Internal_Sym_assertShared___closed__0));
v___x_1457_ = l_mkPanicMessageWithDecl(v___x_1456_, v___x_1455_, v___x_1454_, v___x_1453_, v___x_1452_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetS_x21___redArg(lean_object* v_inst_1458_, lean_object* v_inst_1459_, lean_object* v_e_1460_, lean_object* v_newType_1461_, lean_object* v_newVal_1462_, lean_object* v_newBody_1463_){
_start:
{
if (lean_obj_tag(v_e_1460_) == 8)
{
lean_object* v_toApplicative_1464_; lean_object* v_toPure_1465_; lean_object* v_declName_1466_; lean_object* v_type_1467_; lean_object* v_value_1468_; lean_object* v_body_1469_; uint8_t v_nondep_1470_; size_t v___x_1471_; size_t v___x_1472_; uint8_t v___x_1473_; 
v_toApplicative_1464_ = lean_ctor_get(v_inst_1459_, 0);
v_toPure_1465_ = lean_ctor_get(v_toApplicative_1464_, 1);
v_declName_1466_ = lean_ctor_get(v_e_1460_, 0);
v_type_1467_ = lean_ctor_get(v_e_1460_, 1);
v_value_1468_ = lean_ctor_get(v_e_1460_, 2);
v_body_1469_ = lean_ctor_get(v_e_1460_, 3);
v_nondep_1470_ = lean_ctor_get_uint8(v_e_1460_, sizeof(void*)*4 + 8);
v___x_1471_ = lean_ptr_addr(v_type_1467_);
v___x_1472_ = lean_ptr_addr(v_newType_1461_);
v___x_1473_ = lean_usize_dec_eq(v___x_1471_, v___x_1472_);
if (v___x_1473_ == 0)
{
lean_object* v___x_1474_; 
lean_inc(v_declName_1466_);
lean_dec_ref_known(v_e_1460_, 4);
v___x_1474_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1458_, v_inst_1459_, v_declName_1466_, v_newType_1461_, v_newVal_1462_, v_newBody_1463_, v_nondep_1470_);
return v___x_1474_;
}
else
{
size_t v___x_1475_; size_t v___x_1476_; uint8_t v___x_1477_; 
v___x_1475_ = lean_ptr_addr(v_value_1468_);
v___x_1476_ = lean_ptr_addr(v_newVal_1462_);
v___x_1477_ = lean_usize_dec_eq(v___x_1475_, v___x_1476_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; 
lean_inc(v_declName_1466_);
lean_dec_ref_known(v_e_1460_, 4);
v___x_1478_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1458_, v_inst_1459_, v_declName_1466_, v_newType_1461_, v_newVal_1462_, v_newBody_1463_, v_nondep_1470_);
return v___x_1478_;
}
else
{
size_t v___x_1479_; size_t v___x_1480_; uint8_t v___x_1481_; 
v___x_1479_ = lean_ptr_addr(v_body_1469_);
v___x_1480_ = lean_ptr_addr(v_newBody_1463_);
v___x_1481_ = lean_usize_dec_eq(v___x_1479_, v___x_1480_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1482_; 
lean_inc(v_declName_1466_);
lean_dec_ref_known(v_e_1460_, 4);
v___x_1482_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1458_, v_inst_1459_, v_declName_1466_, v_newType_1461_, v_newVal_1462_, v_newBody_1463_, v_nondep_1470_);
return v___x_1482_;
}
else
{
lean_object* v___x_1483_; 
lean_inc(v_toPure_1465_);
lean_dec_ref(v_newBody_1463_);
lean_dec_ref(v_newVal_1462_);
lean_dec_ref(v_newType_1461_);
lean_dec_ref(v_inst_1459_);
lean_dec_ref(v_inst_1458_);
v___x_1483_ = lean_apply_2(v_toPure_1465_, lean_box(0), v_e_1460_);
return v___x_1483_;
}
}
}
}
else
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
lean_dec_ref(v_newBody_1463_);
lean_dec_ref(v_newVal_1462_);
lean_dec_ref(v_newType_1461_);
lean_dec_ref(v_e_1460_);
lean_dec_ref(v_inst_1458_);
v___x_1484_ = l_Lean_instInhabitedExpr;
v___x_1485_ = l_instInhabitedOfMonad___redArg(v_inst_1459_, v___x_1484_);
v___x_1486_ = lean_obj_once(&l_Lean_Expr_updateLetS_x21___redArg___closed__2, &l_Lean_Expr_updateLetS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateLetS_x21___redArg___closed__2);
v___x_1487_ = l_panic___redArg(v___x_1485_, v___x_1486_);
lean_dec(v___x_1485_);
return v___x_1487_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_updateLetS_x21(lean_object* v_m_1488_, lean_object* v_inst_1489_, lean_object* v_inst_1490_, lean_object* v_e_1491_, lean_object* v_newType_1492_, lean_object* v_newVal_1493_, lean_object* v_newBody_1494_){
_start:
{
if (lean_obj_tag(v_e_1491_) == 8)
{
lean_object* v_toApplicative_1495_; lean_object* v_toPure_1496_; lean_object* v_declName_1497_; lean_object* v_type_1498_; lean_object* v_value_1499_; lean_object* v_body_1500_; uint8_t v_nondep_1501_; size_t v___x_1502_; size_t v___x_1503_; uint8_t v___x_1504_; 
v_toApplicative_1495_ = lean_ctor_get(v_inst_1490_, 0);
v_toPure_1496_ = lean_ctor_get(v_toApplicative_1495_, 1);
v_declName_1497_ = lean_ctor_get(v_e_1491_, 0);
v_type_1498_ = lean_ctor_get(v_e_1491_, 1);
v_value_1499_ = lean_ctor_get(v_e_1491_, 2);
v_body_1500_ = lean_ctor_get(v_e_1491_, 3);
v_nondep_1501_ = lean_ctor_get_uint8(v_e_1491_, sizeof(void*)*4 + 8);
v___x_1502_ = lean_ptr_addr(v_type_1498_);
v___x_1503_ = lean_ptr_addr(v_newType_1492_);
v___x_1504_ = lean_usize_dec_eq(v___x_1502_, v___x_1503_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; 
lean_inc(v_declName_1497_);
lean_dec_ref_known(v_e_1491_, 4);
v___x_1505_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1489_, v_inst_1490_, v_declName_1497_, v_newType_1492_, v_newVal_1493_, v_newBody_1494_, v_nondep_1501_);
return v___x_1505_;
}
else
{
size_t v___x_1506_; size_t v___x_1507_; uint8_t v___x_1508_; 
v___x_1506_ = lean_ptr_addr(v_value_1499_);
v___x_1507_ = lean_ptr_addr(v_newVal_1493_);
v___x_1508_ = lean_usize_dec_eq(v___x_1506_, v___x_1507_);
if (v___x_1508_ == 0)
{
lean_object* v___x_1509_; 
lean_inc(v_declName_1497_);
lean_dec_ref_known(v_e_1491_, 4);
v___x_1509_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1489_, v_inst_1490_, v_declName_1497_, v_newType_1492_, v_newVal_1493_, v_newBody_1494_, v_nondep_1501_);
return v___x_1509_;
}
else
{
size_t v___x_1510_; size_t v___x_1511_; uint8_t v___x_1512_; 
v___x_1510_ = lean_ptr_addr(v_body_1500_);
v___x_1511_ = lean_ptr_addr(v_newBody_1494_);
v___x_1512_ = lean_usize_dec_eq(v___x_1510_, v___x_1511_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; 
lean_inc(v_declName_1497_);
lean_dec_ref_known(v_e_1491_, 4);
v___x_1513_ = l_Lean_Meta_Sym_Internal_mkLetS___redArg(v_inst_1489_, v_inst_1490_, v_declName_1497_, v_newType_1492_, v_newVal_1493_, v_newBody_1494_, v_nondep_1501_);
return v___x_1513_;
}
else
{
lean_object* v___x_1514_; 
lean_inc(v_toPure_1496_);
lean_dec_ref(v_newBody_1494_);
lean_dec_ref(v_newVal_1493_);
lean_dec_ref(v_newType_1492_);
lean_dec_ref(v_inst_1490_);
lean_dec_ref(v_inst_1489_);
v___x_1514_ = lean_apply_2(v_toPure_1496_, lean_box(0), v_e_1491_);
return v___x_1514_;
}
}
}
}
else
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
lean_dec_ref(v_newBody_1494_);
lean_dec_ref(v_newVal_1493_);
lean_dec_ref(v_newType_1492_);
lean_dec_ref(v_e_1491_);
lean_dec_ref(v_inst_1489_);
v___x_1515_ = l_Lean_instInhabitedExpr;
v___x_1516_ = l_instInhabitedOfMonad___redArg(v_inst_1490_, v___x_1515_);
v___x_1517_ = lean_obj_once(&l_Lean_Expr_updateLetS_x21___redArg___closed__2, &l_Lean_Expr_updateLetS_x21___redArg___closed__2_once, _init_l_Lean_Expr_updateLetS_x21___redArg___closed__2);
v___x_1518_ = l_panic___redArg(v___x_1516_, v___x_1517_);
lean_dec(v___x_1516_);
return v___x_1518_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg___lam__0(lean_object* v_inst_1519_, lean_object* v_inst_1520_, lean_object* v_a_u2082_1521_, lean_object* v_____do__lift_1522_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1519_, v_inst_1520_, v_____do__lift_1522_, v_a_u2082_1521_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg(lean_object* v_inst_1524_, lean_object* v_inst_1525_, lean_object* v_f_1526_, lean_object* v_a_u2081_1527_, lean_object* v_a_u2082_1528_){
_start:
{
lean_object* v_toBind_1529_; lean_object* v___f_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_toBind_1529_ = lean_ctor_get(v_inst_1525_, 1);
lean_inc(v_toBind_1529_);
lean_inc_ref(v_inst_1525_);
lean_inc_ref(v_inst_1524_);
v___f_1530_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1530_, 0, v_inst_1524_);
lean_closure_set(v___f_1530_, 1, v_inst_1525_);
lean_closure_set(v___f_1530_, 2, v_a_u2082_1528_);
v___x_1531_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1524_, v_inst_1525_, v_f_1526_, v_a_u2081_1527_);
v___x_1532_ = lean_apply_4(v_toBind_1529_, lean_box(0), lean_box(0), v___x_1531_, v___f_1530_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082(lean_object* v_m_1533_, lean_object* v_inst_1534_, lean_object* v_inst_1535_, lean_object* v_f_1536_, lean_object* v_a_u2081_1537_, lean_object* v_a_u2082_1538_){
_start:
{
lean_object* v___x_1539_; 
v___x_1539_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg(v_inst_1534_, v_inst_1535_, v_f_1536_, v_a_u2081_1537_, v_a_u2082_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg___lam__0(lean_object* v_inst_1540_, lean_object* v_inst_1541_, lean_object* v_a_u2083_1542_, lean_object* v_____do__lift_1543_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1540_, v_inst_1541_, v_____do__lift_1543_, v_a_u2083_1542_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg(lean_object* v_inst_1545_, lean_object* v_inst_1546_, lean_object* v_f_1547_, lean_object* v_a_u2081_1548_, lean_object* v_a_u2082_1549_, lean_object* v_a_u2083_1550_){
_start:
{
lean_object* v_toBind_1551_; lean_object* v___f_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v_toBind_1551_ = lean_ctor_get(v_inst_1546_, 1);
lean_inc(v_toBind_1551_);
lean_inc_ref(v_inst_1546_);
lean_inc_ref(v_inst_1545_);
v___f_1552_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1552_, 0, v_inst_1545_);
lean_closure_set(v___f_1552_, 1, v_inst_1546_);
lean_closure_set(v___f_1552_, 2, v_a_u2083_1550_);
v___x_1553_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___redArg(v_inst_1545_, v_inst_1546_, v_f_1547_, v_a_u2081_1548_, v_a_u2082_1549_);
v___x_1554_ = lean_apply_4(v_toBind_1551_, lean_box(0), lean_box(0), v___x_1553_, v___f_1552_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083(lean_object* v_m_1555_, lean_object* v_inst_1556_, lean_object* v_inst_1557_, lean_object* v_f_1558_, lean_object* v_a_u2081_1559_, lean_object* v_a_u2082_1560_, lean_object* v_a_u2083_1561_){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg(v_inst_1556_, v_inst_1557_, v_f_1558_, v_a_u2081_1559_, v_a_u2082_1560_, v_a_u2083_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg___lam__0(lean_object* v_inst_1563_, lean_object* v_inst_1564_, lean_object* v_a_u2084_1565_, lean_object* v_____do__lift_1566_){
_start:
{
lean_object* v___x_1567_; 
v___x_1567_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1563_, v_inst_1564_, v_____do__lift_1566_, v_a_u2084_1565_);
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg(lean_object* v_inst_1568_, lean_object* v_inst_1569_, lean_object* v_f_1570_, lean_object* v_a_u2081_1571_, lean_object* v_a_u2082_1572_, lean_object* v_a_u2083_1573_, lean_object* v_a_u2084_1574_){
_start:
{
lean_object* v_toBind_1575_; lean_object* v___f_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v_toBind_1575_ = lean_ctor_get(v_inst_1569_, 1);
lean_inc(v_toBind_1575_);
lean_inc_ref(v_inst_1569_);
lean_inc_ref(v_inst_1568_);
v___f_1576_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1576_, 0, v_inst_1568_);
lean_closure_set(v___f_1576_, 1, v_inst_1569_);
lean_closure_set(v___f_1576_, 2, v_a_u2084_1574_);
v___x_1577_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___redArg(v_inst_1568_, v_inst_1569_, v_f_1570_, v_a_u2081_1571_, v_a_u2082_1572_, v_a_u2083_1573_);
v___x_1578_ = lean_apply_4(v_toBind_1575_, lean_box(0), lean_box(0), v___x_1577_, v___f_1576_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084(lean_object* v_m_1579_, lean_object* v_inst_1580_, lean_object* v_inst_1581_, lean_object* v_f_1582_, lean_object* v_a_u2081_1583_, lean_object* v_a_u2082_1584_, lean_object* v_a_u2083_1585_, lean_object* v_a_u2084_1586_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg(v_inst_1580_, v_inst_1581_, v_f_1582_, v_a_u2081_1583_, v_a_u2082_1584_, v_a_u2083_1585_, v_a_u2084_1586_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg___lam__0(lean_object* v_inst_1588_, lean_object* v_inst_1589_, lean_object* v_a_u2085_1590_, lean_object* v_____do__lift_1591_){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1588_, v_inst_1589_, v_____do__lift_1591_, v_a_u2085_1590_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg(lean_object* v_inst_1593_, lean_object* v_inst_1594_, lean_object* v_f_1595_, lean_object* v_a_u2081_1596_, lean_object* v_a_u2082_1597_, lean_object* v_a_u2083_1598_, lean_object* v_a_u2084_1599_, lean_object* v_a_u2085_1600_){
_start:
{
lean_object* v_toBind_1601_; lean_object* v___f_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v_toBind_1601_ = lean_ctor_get(v_inst_1594_, 1);
lean_inc(v_toBind_1601_);
lean_inc_ref(v_inst_1594_);
lean_inc_ref(v_inst_1593_);
v___f_1602_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1602_, 0, v_inst_1593_);
lean_closure_set(v___f_1602_, 1, v_inst_1594_);
lean_closure_set(v___f_1602_, 2, v_a_u2085_1600_);
v___x_1603_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___redArg(v_inst_1593_, v_inst_1594_, v_f_1595_, v_a_u2081_1596_, v_a_u2082_1597_, v_a_u2083_1598_, v_a_u2084_1599_);
v___x_1604_ = lean_apply_4(v_toBind_1601_, lean_box(0), lean_box(0), v___x_1603_, v___f_1602_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085(lean_object* v_m_1605_, lean_object* v_inst_1606_, lean_object* v_inst_1607_, lean_object* v_f_1608_, lean_object* v_a_u2081_1609_, lean_object* v_a_u2082_1610_, lean_object* v_a_u2083_1611_, lean_object* v_a_u2084_1612_, lean_object* v_a_u2085_1613_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg(v_inst_1606_, v_inst_1607_, v_f_1608_, v_a_u2081_1609_, v_a_u2082_1610_, v_a_u2083_1611_, v_a_u2084_1612_, v_a_u2085_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg___lam__0(lean_object* v_inst_1615_, lean_object* v_inst_1616_, lean_object* v_a_u2086_1617_, lean_object* v_____do__lift_1618_){
_start:
{
lean_object* v___x_1619_; 
v___x_1619_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1615_, v_inst_1616_, v_____do__lift_1618_, v_a_u2086_1617_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg(lean_object* v_inst_1620_, lean_object* v_inst_1621_, lean_object* v_f_1622_, lean_object* v_a_u2081_1623_, lean_object* v_a_u2082_1624_, lean_object* v_a_u2083_1625_, lean_object* v_a_u2084_1626_, lean_object* v_a_u2085_1627_, lean_object* v_a_u2086_1628_){
_start:
{
lean_object* v_toBind_1629_; lean_object* v___f_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v_toBind_1629_ = lean_ctor_get(v_inst_1621_, 1);
lean_inc(v_toBind_1629_);
lean_inc_ref(v_inst_1621_);
lean_inc_ref(v_inst_1620_);
v___f_1630_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1630_, 0, v_inst_1620_);
lean_closure_set(v___f_1630_, 1, v_inst_1621_);
lean_closure_set(v___f_1630_, 2, v_a_u2086_1628_);
v___x_1631_ = l_Lean_Meta_Sym_Internal_mkAppS_u2085___redArg(v_inst_1620_, v_inst_1621_, v_f_1622_, v_a_u2081_1623_, v_a_u2082_1624_, v_a_u2083_1625_, v_a_u2084_1626_, v_a_u2085_1627_);
v___x_1632_ = lean_apply_4(v_toBind_1629_, lean_box(0), lean_box(0), v___x_1631_, v___f_1630_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086(lean_object* v_m_1633_, lean_object* v_inst_1634_, lean_object* v_inst_1635_, lean_object* v_f_1636_, lean_object* v_a_u2081_1637_, lean_object* v_a_u2082_1638_, lean_object* v_a_u2083_1639_, lean_object* v_a_u2084_1640_, lean_object* v_a_u2085_1641_, lean_object* v_a_u2086_1642_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg(v_inst_1634_, v_inst_1635_, v_f_1636_, v_a_u2081_1637_, v_a_u2082_1638_, v_a_u2083_1639_, v_a_u2084_1640_, v_a_u2085_1641_, v_a_u2086_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg___lam__0(lean_object* v_inst_1644_, lean_object* v_inst_1645_, lean_object* v_a_u2087_1646_, lean_object* v_____do__lift_1647_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1644_, v_inst_1645_, v_____do__lift_1647_, v_a_u2087_1646_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg(lean_object* v_inst_1649_, lean_object* v_inst_1650_, lean_object* v_f_1651_, lean_object* v_a_u2081_1652_, lean_object* v_a_u2082_1653_, lean_object* v_a_u2083_1654_, lean_object* v_a_u2084_1655_, lean_object* v_a_u2085_1656_, lean_object* v_a_u2086_1657_, lean_object* v_a_u2087_1658_){
_start:
{
lean_object* v_toBind_1659_; lean_object* v___f_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v_toBind_1659_ = lean_ctor_get(v_inst_1650_, 1);
lean_inc(v_toBind_1659_);
lean_inc_ref(v_inst_1650_);
lean_inc_ref(v_inst_1649_);
v___f_1660_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1660_, 0, v_inst_1649_);
lean_closure_set(v___f_1660_, 1, v_inst_1650_);
lean_closure_set(v___f_1660_, 2, v_a_u2087_1658_);
v___x_1661_ = l_Lean_Meta_Sym_Internal_mkAppS_u2086___redArg(v_inst_1649_, v_inst_1650_, v_f_1651_, v_a_u2081_1652_, v_a_u2082_1653_, v_a_u2083_1654_, v_a_u2084_1655_, v_a_u2085_1656_, v_a_u2086_1657_);
v___x_1662_ = lean_apply_4(v_toBind_1659_, lean_box(0), lean_box(0), v___x_1661_, v___f_1660_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2087(lean_object* v_m_1663_, lean_object* v_inst_1664_, lean_object* v_inst_1665_, lean_object* v_f_1666_, lean_object* v_a_u2081_1667_, lean_object* v_a_u2082_1668_, lean_object* v_a_u2083_1669_, lean_object* v_a_u2084_1670_, lean_object* v_a_u2085_1671_, lean_object* v_a_u2086_1672_, lean_object* v_a_u2087_1673_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg(v_inst_1664_, v_inst_1665_, v_f_1666_, v_a_u2081_1667_, v_a_u2082_1668_, v_a_u2083_1669_, v_a_u2084_1670_, v_a_u2085_1671_, v_a_u2086_1672_, v_a_u2087_1673_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg___lam__0(lean_object* v_inst_1675_, lean_object* v_inst_1676_, lean_object* v_a_u2088_1677_, lean_object* v_____do__lift_1678_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1675_, v_inst_1676_, v_____do__lift_1678_, v_a_u2088_1677_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg(lean_object* v_inst_1680_, lean_object* v_inst_1681_, lean_object* v_f_1682_, lean_object* v_a_u2081_1683_, lean_object* v_a_u2082_1684_, lean_object* v_a_u2083_1685_, lean_object* v_a_u2084_1686_, lean_object* v_a_u2085_1687_, lean_object* v_a_u2086_1688_, lean_object* v_a_u2087_1689_, lean_object* v_a_u2088_1690_){
_start:
{
lean_object* v_toBind_1691_; lean_object* v___f_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v_toBind_1691_ = lean_ctor_get(v_inst_1681_, 1);
lean_inc(v_toBind_1691_);
lean_inc_ref(v_inst_1681_);
lean_inc_ref(v_inst_1680_);
v___f_1692_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1692_, 0, v_inst_1680_);
lean_closure_set(v___f_1692_, 1, v_inst_1681_);
lean_closure_set(v___f_1692_, 2, v_a_u2088_1690_);
v___x_1693_ = l_Lean_Meta_Sym_Internal_mkAppS_u2087___redArg(v_inst_1680_, v_inst_1681_, v_f_1682_, v_a_u2081_1683_, v_a_u2082_1684_, v_a_u2083_1685_, v_a_u2084_1686_, v_a_u2085_1687_, v_a_u2086_1688_, v_a_u2087_1689_);
v___x_1694_ = lean_apply_4(v_toBind_1691_, lean_box(0), lean_box(0), v___x_1693_, v___f_1692_);
return v___x_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2088(lean_object* v_m_1695_, lean_object* v_inst_1696_, lean_object* v_inst_1697_, lean_object* v_f_1698_, lean_object* v_a_u2081_1699_, lean_object* v_a_u2082_1700_, lean_object* v_a_u2083_1701_, lean_object* v_a_u2084_1702_, lean_object* v_a_u2085_1703_, lean_object* v_a_u2086_1704_, lean_object* v_a_u2087_1705_, lean_object* v_a_u2088_1706_){
_start:
{
lean_object* v___x_1707_; 
v___x_1707_ = l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg(v_inst_1696_, v_inst_1697_, v_f_1698_, v_a_u2081_1699_, v_a_u2082_1700_, v_a_u2083_1701_, v_a_u2084_1702_, v_a_u2085_1703_, v_a_u2086_1704_, v_a_u2087_1705_, v_a_u2088_1706_);
return v___x_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg___lam__0(lean_object* v_inst_1708_, lean_object* v_inst_1709_, lean_object* v_a_u2089_1710_, lean_object* v_____do__lift_1711_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1708_, v_inst_1709_, v_____do__lift_1711_, v_a_u2089_1710_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg(lean_object* v_inst_1713_, lean_object* v_inst_1714_, lean_object* v_f_1715_, lean_object* v_a_u2081_1716_, lean_object* v_a_u2082_1717_, lean_object* v_a_u2083_1718_, lean_object* v_a_u2084_1719_, lean_object* v_a_u2085_1720_, lean_object* v_a_u2086_1721_, lean_object* v_a_u2087_1722_, lean_object* v_a_u2088_1723_, lean_object* v_a_u2089_1724_){
_start:
{
lean_object* v_toBind_1725_; lean_object* v___f_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v_toBind_1725_ = lean_ctor_get(v_inst_1714_, 1);
lean_inc(v_toBind_1725_);
lean_inc_ref(v_inst_1714_);
lean_inc_ref(v_inst_1713_);
v___f_1726_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1726_, 0, v_inst_1713_);
lean_closure_set(v___f_1726_, 1, v_inst_1714_);
lean_closure_set(v___f_1726_, 2, v_a_u2089_1724_);
v___x_1727_ = l_Lean_Meta_Sym_Internal_mkAppS_u2088___redArg(v_inst_1713_, v_inst_1714_, v_f_1715_, v_a_u2081_1716_, v_a_u2082_1717_, v_a_u2083_1718_, v_a_u2084_1719_, v_a_u2085_1720_, v_a_u2086_1721_, v_a_u2087_1722_, v_a_u2088_1723_);
v___x_1728_ = lean_apply_4(v_toBind_1725_, lean_box(0), lean_box(0), v___x_1727_, v___f_1726_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2089(lean_object* v_m_1729_, lean_object* v_inst_1730_, lean_object* v_inst_1731_, lean_object* v_f_1732_, lean_object* v_a_u2081_1733_, lean_object* v_a_u2082_1734_, lean_object* v_a_u2083_1735_, lean_object* v_a_u2084_1736_, lean_object* v_a_u2085_1737_, lean_object* v_a_u2086_1738_, lean_object* v_a_u2087_1739_, lean_object* v_a_u2088_1740_, lean_object* v_a_u2089_1741_){
_start:
{
lean_object* v___x_1742_; 
v___x_1742_ = l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg(v_inst_1730_, v_inst_1731_, v_f_1732_, v_a_u2081_1733_, v_a_u2082_1734_, v_a_u2083_1735_, v_a_u2084_1736_, v_a_u2085_1737_, v_a_u2086_1738_, v_a_u2087_1739_, v_a_u2088_1740_, v_a_u2089_1741_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg___lam__0(lean_object* v_inst_1743_, lean_object* v_inst_1744_, lean_object* v_a_u2081_u2080_1745_, lean_object* v_____do__lift_1746_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1743_, v_inst_1744_, v_____do__lift_1746_, v_a_u2081_u2080_1745_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg(lean_object* v_inst_1748_, lean_object* v_inst_1749_, lean_object* v_f_1750_, lean_object* v_a_u2081_1751_, lean_object* v_a_u2082_1752_, lean_object* v_a_u2083_1753_, lean_object* v_a_u2084_1754_, lean_object* v_a_u2085_1755_, lean_object* v_a_u2086_1756_, lean_object* v_a_u2087_1757_, lean_object* v_a_u2088_1758_, lean_object* v_a_u2089_1759_, lean_object* v_a_u2081_u2080_1760_){
_start:
{
lean_object* v_toBind_1761_; lean_object* v___f_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v_toBind_1761_ = lean_ctor_get(v_inst_1749_, 1);
lean_inc(v_toBind_1761_);
lean_inc_ref(v_inst_1749_);
lean_inc_ref(v_inst_1748_);
v___f_1762_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1762_, 0, v_inst_1748_);
lean_closure_set(v___f_1762_, 1, v_inst_1749_);
lean_closure_set(v___f_1762_, 2, v_a_u2081_u2080_1760_);
v___x_1763_ = l_Lean_Meta_Sym_Internal_mkAppS_u2089___redArg(v_inst_1748_, v_inst_1749_, v_f_1750_, v_a_u2081_1751_, v_a_u2082_1752_, v_a_u2083_1753_, v_a_u2084_1754_, v_a_u2085_1755_, v_a_u2086_1756_, v_a_u2087_1757_, v_a_u2088_1758_, v_a_u2089_1759_);
v___x_1764_ = lean_apply_4(v_toBind_1761_, lean_box(0), lean_box(0), v___x_1763_, v___f_1762_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080(lean_object* v_m_1765_, lean_object* v_inst_1766_, lean_object* v_inst_1767_, lean_object* v_f_1768_, lean_object* v_a_u2081_1769_, lean_object* v_a_u2082_1770_, lean_object* v_a_u2083_1771_, lean_object* v_a_u2084_1772_, lean_object* v_a_u2085_1773_, lean_object* v_a_u2086_1774_, lean_object* v_a_u2087_1775_, lean_object* v_a_u2088_1776_, lean_object* v_a_u2089_1777_, lean_object* v_a_u2081_u2080_1778_){
_start:
{
lean_object* v___x_1779_; 
v___x_1779_ = l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg(v_inst_1766_, v_inst_1767_, v_f_1768_, v_a_u2081_1769_, v_a_u2082_1770_, v_a_u2083_1771_, v_a_u2084_1772_, v_a_u2085_1773_, v_a_u2086_1774_, v_a_u2087_1775_, v_a_u2088_1776_, v_a_u2089_1777_, v_a_u2081_u2080_1778_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg___lam__0(lean_object* v_inst_1780_, lean_object* v_inst_1781_, lean_object* v_a_u2081_u2081_1782_, lean_object* v_____do__lift_1783_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1780_, v_inst_1781_, v_____do__lift_1783_, v_a_u2081_u2081_1782_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg(lean_object* v_inst_1785_, lean_object* v_inst_1786_, lean_object* v_f_1787_, lean_object* v_a_u2081_1788_, lean_object* v_a_u2082_1789_, lean_object* v_a_u2083_1790_, lean_object* v_a_u2084_1791_, lean_object* v_a_u2085_1792_, lean_object* v_a_u2086_1793_, lean_object* v_a_u2087_1794_, lean_object* v_a_u2088_1795_, lean_object* v_a_u2089_1796_, lean_object* v_a_u2081_u2080_1797_, lean_object* v_a_u2081_u2081_1798_){
_start:
{
lean_object* v_toBind_1799_; lean_object* v___f_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
v_toBind_1799_ = lean_ctor_get(v_inst_1786_, 1);
lean_inc(v_toBind_1799_);
lean_inc_ref(v_inst_1786_);
lean_inc_ref(v_inst_1785_);
v___f_1800_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1800_, 0, v_inst_1785_);
lean_closure_set(v___f_1800_, 1, v_inst_1786_);
lean_closure_set(v___f_1800_, 2, v_a_u2081_u2081_1798_);
v___x_1801_ = l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2080___redArg(v_inst_1785_, v_inst_1786_, v_f_1787_, v_a_u2081_1788_, v_a_u2082_1789_, v_a_u2083_1790_, v_a_u2084_1791_, v_a_u2085_1792_, v_a_u2086_1793_, v_a_u2087_1794_, v_a_u2088_1795_, v_a_u2089_1796_, v_a_u2081_u2080_1797_);
v___x_1802_ = lean_apply_4(v_toBind_1799_, lean_box(0), lean_box(0), v___x_1801_, v___f_1800_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081(lean_object* v_m_1803_, lean_object* v_inst_1804_, lean_object* v_inst_1805_, lean_object* v_f_1806_, lean_object* v_a_u2081_1807_, lean_object* v_a_u2082_1808_, lean_object* v_a_u2083_1809_, lean_object* v_a_u2084_1810_, lean_object* v_a_u2085_1811_, lean_object* v_a_u2086_1812_, lean_object* v_a_u2087_1813_, lean_object* v_a_u2088_1814_, lean_object* v_a_u2089_1815_, lean_object* v_a_u2081_u2080_1816_, lean_object* v_a_u2081_u2081_1817_){
_start:
{
lean_object* v___x_1818_; 
v___x_1818_ = l_Lean_Meta_Sym_Internal_mkAppS_u2081_u2081___redArg(v_inst_1804_, v_inst_1805_, v_f_1806_, v_a_u2081_1807_, v_a_u2082_1808_, v_a_u2083_1809_, v_a_u2084_1810_, v_a_u2085_1811_, v_a_u2086_1812_, v_a_u2087_1813_, v_a_u2088_1814_, v_a_u2089_1815_, v_a_u2081_u2080_1816_, v_a_u2081_u2081_1817_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0___boxed(lean_object* v_i_1819_, lean_object* v_inst_1820_, lean_object* v_inst_1821_, lean_object* v_args_1822_, lean_object* v_endIdx_1823_, lean_object* v_____do__lift_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0(v_i_1819_, v_inst_1820_, v_inst_1821_, v_args_1822_, v_endIdx_1823_, v_____do__lift_1824_);
lean_dec(v_i_1819_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(lean_object* v_inst_1826_, lean_object* v_inst_1827_, lean_object* v_args_1828_, lean_object* v_endIdx_1829_, lean_object* v_b_1830_, lean_object* v_i_1831_){
_start:
{
lean_object* v_toApplicative_1832_; lean_object* v_toBind_1833_; lean_object* v_toPure_1834_; uint8_t v___x_1835_; 
v_toApplicative_1832_ = lean_ctor_get(v_inst_1827_, 0);
v_toBind_1833_ = lean_ctor_get(v_inst_1827_, 1);
lean_inc(v_toBind_1833_);
v_toPure_1834_ = lean_ctor_get(v_toApplicative_1832_, 1);
v___x_1835_ = lean_nat_dec_le(v_endIdx_1829_, v_i_1831_);
if (v___x_1835_ == 0)
{
lean_object* v___f_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
lean_inc_ref(v_args_1828_);
lean_inc_ref(v_inst_1827_);
lean_inc_ref(v_inst_1826_);
lean_inc(v_i_1831_);
v___f_1836_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1836_, 0, v_i_1831_);
lean_closure_set(v___f_1836_, 1, v_inst_1826_);
lean_closure_set(v___f_1836_, 2, v_inst_1827_);
lean_closure_set(v___f_1836_, 3, v_args_1828_);
lean_closure_set(v___f_1836_, 4, v_endIdx_1829_);
v___x_1837_ = l_Lean_instInhabitedExpr;
v___x_1838_ = lean_array_get(v___x_1837_, v_args_1828_, v_i_1831_);
lean_dec(v_i_1831_);
lean_dec_ref(v_args_1828_);
v___x_1839_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1826_, v_inst_1827_, v_b_1830_, v___x_1838_);
v___x_1840_ = lean_apply_4(v_toBind_1833_, lean_box(0), lean_box(0), v___x_1839_, v___f_1836_);
return v___x_1840_;
}
else
{
lean_object* v___x_1841_; 
lean_inc(v_toPure_1834_);
lean_dec(v_toBind_1833_);
lean_dec(v_i_1831_);
lean_dec(v_endIdx_1829_);
lean_dec_ref(v_args_1828_);
lean_dec_ref(v_inst_1827_);
lean_dec_ref(v_inst_1826_);
v___x_1841_ = lean_apply_2(v_toPure_1834_, lean_box(0), v_b_1830_);
return v___x_1841_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg___lam__0(lean_object* v_i_1842_, lean_object* v_inst_1843_, lean_object* v_inst_1844_, lean_object* v_args_1845_, lean_object* v_endIdx_1846_, lean_object* v_____do__lift_1847_){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1848_ = lean_unsigned_to_nat(1u);
v___x_1849_ = lean_nat_add(v_i_1842_, v___x_1848_);
v___x_1850_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1843_, v_inst_1844_, v_args_1845_, v_endIdx_1846_, v_____do__lift_1847_, v___x_1849_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go(lean_object* v_m_1851_, lean_object* v_inst_1852_, lean_object* v_inst_1853_, lean_object* v_args_1854_, lean_object* v_endIdx_1855_, lean_object* v_b_1856_, lean_object* v_i_1857_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1852_, v_inst_1853_, v_args_1854_, v_endIdx_1855_, v_b_1856_, v_i_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRangeS___redArg(lean_object* v_inst_1859_, lean_object* v_inst_1860_, lean_object* v_f_1861_, lean_object* v_beginIdx_1862_, lean_object* v_endIdx_1863_, lean_object* v_args_1864_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1859_, v_inst_1860_, v_args_1864_, v_endIdx_1863_, v_f_1861_, v_beginIdx_1862_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRangeS(lean_object* v_m_1866_, lean_object* v_inst_1867_, lean_object* v_inst_1868_, lean_object* v_f_1869_, lean_object* v_beginIdx_1870_, lean_object* v_endIdx_1871_, lean_object* v_args_1872_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1867_, v_inst_1868_, v_args_1872_, v_endIdx_1871_, v_f_1869_, v_beginIdx_1870_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___redArg(lean_object* v_inst_1874_, lean_object* v_inst_1875_, lean_object* v_f_1876_, lean_object* v_args_1877_){
_start:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1878_ = lean_unsigned_to_nat(0u);
v___x_1879_ = lean_array_get_size(v_args_1877_);
v___x_1880_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___redArg(v_inst_1874_, v_inst_1875_, v_args_1877_, v___x_1879_, v_f_1876_, v___x_1878_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS(lean_object* v_m_1881_, lean_object* v_inst_1882_, lean_object* v_inst_1883_, lean_object* v_f_1884_, lean_object* v_args_1885_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Lean_Meta_Sym_Internal_mkAppNS___redArg(v_inst_1882_, v_inst_1883_, v_f_1884_, v_args_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0___boxed(lean_object* v_inst_1887_, lean_object* v_inst_1888_, lean_object* v_revArgs_1889_, lean_object* v_start_1890_, lean_object* v_i_1891_, lean_object* v_____do__lift_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0(v_inst_1887_, v_inst_1888_, v_revArgs_1889_, v_start_1890_, v_i_1891_, v_____do__lift_1892_);
lean_dec(v_i_1891_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(lean_object* v_inst_1894_, lean_object* v_inst_1895_, lean_object* v_revArgs_1896_, lean_object* v_start_1897_, lean_object* v_b_1898_, lean_object* v_i_1899_){
_start:
{
lean_object* v_toApplicative_1900_; lean_object* v_toBind_1901_; lean_object* v_toPure_1902_; uint8_t v___x_1903_; 
v_toApplicative_1900_ = lean_ctor_get(v_inst_1895_, 0);
v_toBind_1901_ = lean_ctor_get(v_inst_1895_, 1);
lean_inc(v_toBind_1901_);
v_toPure_1902_ = lean_ctor_get(v_toApplicative_1900_, 1);
v___x_1903_ = lean_nat_dec_le(v_i_1899_, v_start_1897_);
if (v___x_1903_ == 0)
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v_i_1906_; lean_object* v___f_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1904_ = l_Lean_instInhabitedExpr;
v___x_1905_ = lean_unsigned_to_nat(1u);
v_i_1906_ = lean_nat_sub(v_i_1899_, v___x_1905_);
lean_inc(v_i_1906_);
lean_inc_ref(v_revArgs_1896_);
lean_inc_ref(v_inst_1895_);
lean_inc_ref(v_inst_1894_);
v___f_1907_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1907_, 0, v_inst_1894_);
lean_closure_set(v___f_1907_, 1, v_inst_1895_);
lean_closure_set(v___f_1907_, 2, v_revArgs_1896_);
lean_closure_set(v___f_1907_, 3, v_start_1897_);
lean_closure_set(v___f_1907_, 4, v_i_1906_);
v___x_1908_ = lean_array_get(v___x_1904_, v_revArgs_1896_, v_i_1906_);
lean_dec(v_i_1906_);
lean_dec_ref(v_revArgs_1896_);
v___x_1909_ = l_Lean_Meta_Sym_Internal_mkAppS___redArg(v_inst_1894_, v_inst_1895_, v_b_1898_, v___x_1908_);
v___x_1910_ = lean_apply_4(v_toBind_1901_, lean_box(0), lean_box(0), v___x_1909_, v___f_1907_);
return v___x_1910_;
}
else
{
lean_object* v___x_1911_; 
lean_inc(v_toPure_1902_);
lean_dec(v_toBind_1901_);
lean_dec(v_start_1897_);
lean_dec_ref(v_revArgs_1896_);
lean_dec_ref(v_inst_1895_);
lean_dec_ref(v_inst_1894_);
v___x_1911_ = lean_apply_2(v_toPure_1902_, lean_box(0), v_b_1898_);
return v___x_1911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___lam__0(lean_object* v_inst_1912_, lean_object* v_inst_1913_, lean_object* v_revArgs_1914_, lean_object* v_start_1915_, lean_object* v_i_1916_, lean_object* v_____do__lift_1917_){
_start:
{
lean_object* v___x_1918_; 
v___x_1918_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1912_, v_inst_1913_, v_revArgs_1914_, v_start_1915_, v_____do__lift_1917_, v_i_1916_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg___boxed(lean_object* v_inst_1919_, lean_object* v_inst_1920_, lean_object* v_revArgs_1921_, lean_object* v_start_1922_, lean_object* v_b_1923_, lean_object* v_i_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1919_, v_inst_1920_, v_revArgs_1921_, v_start_1922_, v_b_1923_, v_i_1924_);
lean_dec(v_i_1924_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go(lean_object* v_m_1926_, lean_object* v_inst_1927_, lean_object* v_inst_1928_, lean_object* v_revArgs_1929_, lean_object* v_start_1930_, lean_object* v_b_1931_, lean_object* v_i_1932_){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1927_, v_inst_1928_, v_revArgs_1929_, v_start_1930_, v_b_1931_, v_i_1932_);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___boxed(lean_object* v_m_1934_, lean_object* v_inst_1935_, lean_object* v_inst_1936_, lean_object* v_revArgs_1937_, lean_object* v_start_1938_, lean_object* v_b_1939_, lean_object* v_i_1940_){
_start:
{
lean_object* v_res_1941_; 
v_res_1941_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go(v_m_1934_, v_inst_1935_, v_inst_1936_, v_revArgs_1937_, v_start_1938_, v_b_1939_, v_i_1940_);
lean_dec(v_i_1940_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg(lean_object* v_inst_1942_, lean_object* v_inst_1943_, lean_object* v_f_1944_, lean_object* v_beginIdx_1945_, lean_object* v_endIdx_1946_, lean_object* v_revArgs_1947_){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1942_, v_inst_1943_, v_revArgs_1947_, v_beginIdx_1945_, v_f_1944_, v_endIdx_1946_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg___boxed(lean_object* v_inst_1949_, lean_object* v_inst_1950_, lean_object* v_f_1951_, lean_object* v_beginIdx_1952_, lean_object* v_endIdx_1953_, lean_object* v_revArgs_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Lean_Meta_Sym_Internal_mkAppRevRangeS___redArg(v_inst_1949_, v_inst_1950_, v_f_1951_, v_beginIdx_1952_, v_endIdx_1953_, v_revArgs_1954_);
lean_dec(v_endIdx_1953_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS(lean_object* v_m_1956_, lean_object* v_inst_1957_, lean_object* v_inst_1958_, lean_object* v_f_1959_, lean_object* v_beginIdx_1960_, lean_object* v_endIdx_1961_, lean_object* v_revArgs_1962_){
_start:
{
lean_object* v___x_1963_; 
v___x_1963_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1957_, v_inst_1958_, v_revArgs_1962_, v_beginIdx_1960_, v_f_1959_, v_endIdx_1961_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevRangeS___boxed(lean_object* v_m_1964_, lean_object* v_inst_1965_, lean_object* v_inst_1966_, lean_object* v_f_1967_, lean_object* v_beginIdx_1968_, lean_object* v_endIdx_1969_, lean_object* v_revArgs_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_Lean_Meta_Sym_Internal_mkAppRevRangeS(v_m_1964_, v_inst_1965_, v_inst_1966_, v_f_1967_, v_beginIdx_1968_, v_endIdx_1969_, v_revArgs_1970_);
lean_dec(v_endIdx_1969_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___redArg(lean_object* v_inst_1972_, lean_object* v_inst_1973_, lean_object* v_f_1974_, lean_object* v_revArgs_1975_){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1976_ = lean_unsigned_to_nat(0u);
v___x_1977_ = lean_array_get_size(v_revArgs_1975_);
v___x_1978_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___redArg(v_inst_1972_, v_inst_1973_, v_revArgs_1975_, v___x_1976_, v_f_1974_, v___x_1977_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS(lean_object* v_m_1979_, lean_object* v_inst_1980_, lean_object* v_inst_1981_, lean_object* v_f_1982_, lean_object* v_revArgs_1983_){
_start:
{
lean_object* v___x_1984_; 
v___x_1984_ = l_Lean_Meta_Sym_Internal_mkAppRevS___redArg(v_inst_1980_, v_inst_1981_, v_f_1982_, v_revArgs_1983_);
return v___x_1984_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy = _init_l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy();
lean_mark_persistent(l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_dummy);
l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM = _init_l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM();
lean_mark_persistent(l_Lean_Meta_Sym_Internal_instMonadShareCommonAlphaShareBuilderM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
}
#ifdef __cplusplus
}
#endif
