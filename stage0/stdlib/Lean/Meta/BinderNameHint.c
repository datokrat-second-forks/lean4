// Lean compiler output
// Module: Lean.Meta.BinderNameHint
// Imports: public import Lean.Meta.Basic
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
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg();
static const lean_string_object l_Lean_Expr_hasBinderNameHint___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "binderNameHint"};
static const lean_object* l_Lean_Expr_hasBinderNameHint___lam__0___closed__0 = (const lean_object*)&l_Lean_Expr_hasBinderNameHint___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Expr_hasBinderNameHint___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_hasBinderNameHint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(51, 69, 86, 160, 190, 96, 121, 153)}};
static const lean_object* l_Lean_Expr_hasBinderNameHint___lam__0___closed__1 = (const lean_object*)&l_Lean_Expr_hasBinderNameHint___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Expr_hasBinderNameHint___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasBinderNameHint___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Expr_hasBinderNameHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hasBinderNameHint___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_hasBinderNameHint___closed__0 = (const lean_object*)&l_Lean_Expr_hasBinderNameHint___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Expr_hasBinderNameHint(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_hasBinderNameHint___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_enterScope(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Meta.BinderNameHint"};
static const lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0 = (const lean_object*)&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0_value;
static const lean_string_object l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "_private.Lean.Meta.BinderNameHint.0.Lean.exitScope"};
static const lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1 = (const lean_object*)&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1_value;
static const lean_string_object l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "assertion violation: xs.size > 0\n    "};
static const lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2 = (const lean_object*)&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_rememberName_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "_private.Lean.Meta.BinderNameHint.0.Lean.rememberName"};
static const lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0 = (const lean_object*)&l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0_value;
static const lean_string_object l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "assertion violation: xs.size > bidx\n    "};
static const lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1 = (const lean_object*)&l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "_private.Lean.Meta.BinderNameHint.0.Lean.makeFresh"};
static const lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0 = (const lean_object*)&l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "_private.Lean.Meta.BinderNameHint.0.Lean.Expr.resolveBinderNameHint.go"};
static const lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "assertion violation: xs.size > bidx\n          "};
static const lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_resolveBinderNameHint___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_resolveBinderNameHint___closed__0;
static lean_once_cell_t l_Lean_Expr_resolveBinderNameHint___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_resolveBinderNameHint___closed__1;
static const lean_array_object l_Lean_Expr_resolveBinderNameHint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_resolveBinderNameHint___closed__2 = (const lean_object*)&l_Lean_Expr_resolveBinderNameHint___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_hasBinderNameHint___lam__0(lean_object* v_e_4_){
_start:
{
lean_object* v___x_5_; uint8_t v___x_6_; 
v___x_5_ = ((lean_object*)(l_Lean_Expr_hasBinderNameHint___lam__0___closed__1));
v___x_6_ = l_Lean_Expr_isConstOf(v_e_4_, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasBinderNameHint___lam__0___boxed(lean_object* v_e_7_){
_start:
{
uint8_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_Lean_Expr_hasBinderNameHint___lam__0(v_e_7_);
lean_dec_ref(v_e_7_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_hasBinderNameHint(lean_object* v_e_11_){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; 
v___f_12_ = ((lean_object*)(l_Lean_Expr_hasBinderNameHint___closed__0));
v___x_13_ = lean_find_expr(v___f_12_, v_e_11_);
if (lean_obj_tag(v___x_13_) == 0)
{
uint8_t v___x_14_; 
v___x_14_ = 0;
return v___x_14_;
}
else
{
uint8_t v___x_15_; 
lean_dec_ref_known(v___x_13_, 1);
v___x_15_ = 1;
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_hasBinderNameHint___boxed(lean_object* v_e_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Lean_Expr_hasBinderNameHint(v_e_16_);
lean_dec_ref(v_e_16_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_enterScope(lean_object* v_name_19_, lean_object* v_xs_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_array_push(v_xs_20_, v_name_19_);
return v___x_21_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = l_Array_instInhabited___redArg();
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0(lean_object* v_msg_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_24_ = lean_box(0);
v___x_25_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0);
v___x_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_26_, 0, v___x_24_);
lean_ctor_set(v___x_26_, 1, v___x_25_);
v___x_27_ = lean_panic_fn_borrowed(v___x_26_, v_msg_23_);
lean_dec_ref_known(v___x_26_, 2);
return v___x_27_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_31_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__2));
v___x_32_ = lean_unsigned_to_nat(4u);
v___x_33_ = lean_unsigned_to_nat(26u);
v___x_34_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__1));
v___x_35_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0));
v___x_36_ = l_mkPanicMessageWithDecl(v___x_35_, v___x_34_, v___x_33_, v___x_32_, v___x_31_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(lean_object* v_xs_37_){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_38_ = lean_unsigned_to_nat(0u);
v___x_39_ = lean_array_get_size(v_xs_37_);
v___x_40_ = lean_nat_dec_lt(v___x_38_, v___x_39_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec_ref(v_xs_37_);
v___x_41_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3, &l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__3);
v___x_42_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0(v___x_41_);
return v___x_42_;
}
else
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_43_ = lean_box(0);
v___x_44_ = lean_unsigned_to_nat(1u);
v___x_45_ = lean_nat_sub(v___x_39_, v___x_44_);
v___x_46_ = lean_array_get(v___x_43_, v_xs_37_, v___x_45_);
lean_dec(v___x_45_);
v___x_47_ = lean_array_pop(v_xs_37_);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_46_);
lean_ctor_set(v___x_48_, 1, v___x_47_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_rememberName_spec__0(lean_object* v_msg_49_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_exitScope_spec__0___closed__0);
v___x_51_ = lean_panic_fn_borrowed(v___x_50_, v_msg_49_);
return v___x_51_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_54_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1));
v___x_55_ = lean_unsigned_to_nat(4u);
v___x_56_ = lean_unsigned_to_nat(30u);
v___x_57_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__0));
v___x_58_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0));
v___x_59_ = l_mkPanicMessageWithDecl(v___x_58_, v___x_57_, v___x_56_, v___x_55_, v___x_54_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(lean_object* v_bidx_60_, lean_object* v_name_61_, lean_object* v_xs_62_){
_start:
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = lean_array_get_size(v_xs_62_);
v___x_64_ = lean_nat_dec_lt(v_bidx_60_, v___x_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; lean_object* v___x_66_; 
lean_dec_ref(v_xs_62_);
lean_dec(v_name_61_);
v___x_65_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2, &l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__2);
v___x_66_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_rememberName_spec__0(v___x_65_);
return v___x_66_;
}
else
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_67_ = lean_nat_sub(v___x_63_, v_bidx_60_);
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lean_nat_sub(v___x_67_, v___x_68_);
lean_dec(v___x_67_);
v___x_70_ = lean_array_set(v_xs_62_, v___x_69_, v_name_61_);
lean_dec(v___x_69_);
return v___x_70_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___boxed(lean_object* v_bidx_71_, lean_object* v_name_72_, lean_object* v_xs_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(v_bidx_71_, v_name_72_, v_xs_73_);
lean_dec(v_bidx_71_);
return v_res_74_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Core_instInhabitedCoreM___redArg();
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0(lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_291__overap_81_; lean_object* v___x_82_; 
v___x_80_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0);
v___x_291__overap_81_ = lean_panic_fn_borrowed(v___x_80_, v_msg_76_);
lean_inc(v___y_78_);
lean_inc_ref(v___y_77_);
v___x_82_ = lean_apply_3(v___x_291__overap_81_, v___y_77_, v___y_78_, lean_box(0));
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___boxed(lean_object* v_msg_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0(v_msg_83_, v___y_84_, v___y_85_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
return v_res_87_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_89_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName___closed__1));
v___x_90_ = lean_unsigned_to_nat(4u);
v___x_91_ = lean_unsigned_to_nat(34u);
v___x_92_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__0));
v___x_93_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0));
v___x_94_ = l_mkPanicMessageWithDecl(v___x_93_, v___x_92_, v___x_91_, v___x_90_, v___x_89_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh(lean_object* v_bidx_95_, lean_object* v_xs_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = lean_array_get_size(v_xs_96_);
v___x_101_ = lean_nat_dec_lt(v_bidx_95_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec_ref(v_xs_96_);
v___x_102_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1, &l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___closed__1);
v___x_103_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0(v___x_102_, v___y_97_, v___y_98_);
return v___x_103_;
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v_name_108_; lean_object* v___x_109_; 
v___x_104_ = lean_box(0);
v___x_105_ = lean_nat_sub(v___x_100_, v_bidx_95_);
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_nat_sub(v___x_105_, v___x_106_);
lean_dec(v___x_105_);
v_name_108_ = lean_array_get_borrowed(v___x_104_, v_xs_96_, v___x_107_);
lean_inc(v_name_108_);
v___x_109_ = l_Lean_Core_mkFreshUserName(v_name_108_, v___y_97_, v___y_98_);
if (lean_obj_tag(v___x_109_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_118_; 
v_a_110_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_118_ == 0)
{
v___x_112_ = v___x_109_;
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___x_109_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_114_ = lean_array_set(v_xs_96_, v___x_107_, v_a_110_);
lean_dec(v___x_107_);
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 0, v___x_114_);
v___x_116_ = v___x_112_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec(v___x_107_);
lean_dec_ref(v_xs_96_);
v_a_119_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_109_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_109_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh___boxed(lean_object* v_bidx_127_, lean_object* v_xs_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l___private_Lean_Meta_BinderNameHint_0__Lean_makeFresh(v_bidx_127_, v_xs_128_, v___y_129_, v___y_130_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v_bidx_127_);
return v_res_132_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_instMonadEIO___redArg();
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(lean_object* v_msg_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v_toApplicative_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_186_; 
v___x_142_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0);
v___x_143_ = l_StateRefT_x27_instMonad___redArg(v___x_142_);
v_toApplicative_144_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_186_ == 0)
{
lean_object* v_unused_187_; 
v_unused_187_ = lean_ctor_get(v___x_143_, 1);
lean_dec(v_unused_187_);
v___x_146_ = v___x_143_;
v_isShared_147_ = v_isSharedCheck_186_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_toApplicative_144_);
lean_dec(v___x_143_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_186_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v_toFunctor_148_; lean_object* v_toSeq_149_; lean_object* v_toSeqLeft_150_; lean_object* v_toSeqRight_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_184_; 
v_toFunctor_148_ = lean_ctor_get(v_toApplicative_144_, 0);
v_toSeq_149_ = lean_ctor_get(v_toApplicative_144_, 2);
v_toSeqLeft_150_ = lean_ctor_get(v_toApplicative_144_, 3);
v_toSeqRight_151_ = lean_ctor_get(v_toApplicative_144_, 4);
v_isSharedCheck_184_ = !lean_is_exclusive(v_toApplicative_144_);
if (v_isSharedCheck_184_ == 0)
{
lean_object* v_unused_185_; 
v_unused_185_ = lean_ctor_get(v_toApplicative_144_, 1);
lean_dec(v_unused_185_);
v___x_153_ = v_toApplicative_144_;
v_isShared_154_ = v_isSharedCheck_184_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_toSeqRight_151_);
lean_inc(v_toSeqLeft_150_);
lean_inc(v_toSeq_149_);
lean_inc(v_toFunctor_148_);
lean_dec(v_toApplicative_144_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_184_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___f_155_; lean_object* v___f_156_; lean_object* v___f_157_; lean_object* v___f_158_; lean_object* v___x_159_; lean_object* v___f_160_; lean_object* v___f_161_; lean_object* v___f_162_; lean_object* v___x_164_; 
v___f_155_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1));
v___f_156_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2));
lean_inc_ref(v_toFunctor_148_);
v___f_157_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_157_, 0, v_toFunctor_148_);
v___f_158_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_158_, 0, v_toFunctor_148_);
v___x_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_159_, 0, v___f_157_);
lean_ctor_set(v___x_159_, 1, v___f_158_);
v___f_160_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_160_, 0, v_toSeqRight_151_);
v___f_161_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_161_, 0, v_toSeqLeft_150_);
v___f_162_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_162_, 0, v_toSeq_149_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 4, v___f_160_);
lean_ctor_set(v___x_153_, 3, v___f_161_);
lean_ctor_set(v___x_153_, 2, v___f_162_);
lean_ctor_set(v___x_153_, 1, v___f_155_);
lean_ctor_set(v___x_153_, 0, v___x_159_);
v___x_164_ = v___x_153_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_159_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___f_155_);
lean_ctor_set(v_reuseFailAlloc_183_, 2, v___f_162_);
lean_ctor_set(v_reuseFailAlloc_183_, 3, v___f_161_);
lean_ctor_set(v_reuseFailAlloc_183_, 4, v___f_160_);
v___x_164_ = v_reuseFailAlloc_183_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_166_; 
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 1, v___f_156_);
lean_ctor_set(v___x_146_, 0, v___x_164_);
v___x_166_ = v___x_146_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v___f_156_);
v___x_166_ = v_reuseFailAlloc_182_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___f_167_; lean_object* v___f_168_; lean_object* v___f_169_; lean_object* v___f_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_15274__overap_180_; lean_object* v___x_181_; 
lean_inc_ref_n(v___x_166_, 6);
v___f_167_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_167_, 0, v___x_166_);
v___f_168_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_168_, 0, v___x_166_);
v___f_169_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_169_, 0, v___x_166_);
v___f_170_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_170_, 0, v___x_166_);
v___x_171_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_171_, 0, lean_box(0));
lean_closure_set(v___x_171_, 1, lean_box(0));
lean_closure_set(v___x_171_, 2, v___x_166_);
v___x_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v___f_167_);
v___x_173_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_173_, 0, lean_box(0));
lean_closure_set(v___x_173_, 1, lean_box(0));
lean_closure_set(v___x_173_, 2, v___x_166_);
v___x_174_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_174_, 0, v___x_172_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
lean_ctor_set(v___x_174_, 2, v___f_168_);
lean_ctor_set(v___x_174_, 3, v___f_169_);
lean_ctor_set(v___x_174_, 4, v___f_170_);
v___x_175_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_175_, 0, lean_box(0));
lean_closure_set(v___x_175_, 1, lean_box(0));
lean_closure_set(v___x_175_, 2, v___x_166_);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = l_Lean_MonadCacheT_instMonad___redArg(v___x_176_);
v___x_178_ = l_Lean_instInhabitedExpr;
v___x_179_ = l_instInhabitedOfMonad___redArg(v___x_177_, v___x_178_);
v___x_15274__overap_180_ = lean_panic_fn_borrowed(v___x_179_, v_msg_136_);
lean_dec(v___x_179_);
lean_inc(v___y_140_);
lean_inc_ref(v___y_139_);
lean_inc(v___y_137_);
v___x_181_ = lean_apply_5(v___x_15274__overap_180_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, lean_box(0));
return v___x_181_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___boxed(lean_object* v_msg_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(v_msg_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec(v___y_189_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(lean_object* v_fst_195_, lean_object* v_____r_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v_fst_195_);
lean_ctor_set(v___x_202_, 1, v___y_198_);
v___x_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0___boxed(lean_object* v_fst_204_, lean_object* v_____r_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(v_fst_204_, v_____r_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_206_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(lean_object* v___f_212_, lean_object* v_bidx_213_, lean_object* v_n_214_, lean_object* v_binderType_215_, lean_object* v_body_216_, uint8_t v_binderInfo_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = lean_box(0);
v___x_224_ = l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(v_bidx_213_, v_n_214_, v___y_219_);
lean_inc(v___y_221_);
lean_inc_ref(v___y_220_);
lean_inc(v___y_218_);
v___x_225_ = lean_apply_6(v___f_212_, v___x_223_, v___y_218_, v___x_224_, v___y_220_, v___y_221_, lean_box(0));
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1___boxed(lean_object* v___f_226_, lean_object* v_bidx_227_, lean_object* v_n_228_, lean_object* v_binderType_229_, lean_object* v_body_230_, lean_object* v_binderInfo_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
uint8_t v_binderInfo_15803__boxed_237_; lean_object* v_res_238_; 
v_binderInfo_15803__boxed_237_ = lean_unbox(v_binderInfo_231_);
v_res_238_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(v___f_226_, v_bidx_227_, v_n_228_, v_binderType_229_, v_body_230_, v_binderInfo_15803__boxed_237_, v___y_232_, v___y_233_, v___y_234_, v___y_235_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec(v___y_232_);
lean_dec_ref(v_body_230_);
lean_dec_ref(v_binderType_229_);
lean_dec(v_bidx_227_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_x_239_, lean_object* v_x_240_){
_start:
{
if (lean_obj_tag(v_x_240_) == 0)
{
return v_x_239_;
}
else
{
lean_object* v_key_241_; lean_object* v_value_242_; lean_object* v_tail_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_266_; 
v_key_241_ = lean_ctor_get(v_x_240_, 0);
v_value_242_ = lean_ctor_get(v_x_240_, 1);
v_tail_243_ = lean_ctor_get(v_x_240_, 2);
v_isSharedCheck_266_ = !lean_is_exclusive(v_x_240_);
if (v_isSharedCheck_266_ == 0)
{
v___x_245_ = v_x_240_;
v_isShared_246_ = v_isSharedCheck_266_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_tail_243_);
lean_inc(v_value_242_);
lean_inc(v_key_241_);
lean_dec(v_x_240_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_266_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; uint64_t v___x_248_; uint64_t v___x_249_; uint64_t v___x_250_; uint64_t v_fold_251_; uint64_t v___x_252_; uint64_t v___x_253_; uint64_t v___x_254_; size_t v___x_255_; size_t v___x_256_; size_t v___x_257_; size_t v___x_258_; size_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_247_ = lean_array_get_size(v_x_239_);
v___x_248_ = l_Lean_ExprStructEq_hash(v_key_241_);
v___x_249_ = 32ULL;
v___x_250_ = lean_uint64_shift_right(v___x_248_, v___x_249_);
v_fold_251_ = lean_uint64_xor(v___x_248_, v___x_250_);
v___x_252_ = 16ULL;
v___x_253_ = lean_uint64_shift_right(v_fold_251_, v___x_252_);
v___x_254_ = lean_uint64_xor(v_fold_251_, v___x_253_);
v___x_255_ = lean_uint64_to_usize(v___x_254_);
v___x_256_ = lean_usize_of_nat(v___x_247_);
v___x_257_ = ((size_t)1ULL);
v___x_258_ = lean_usize_sub(v___x_256_, v___x_257_);
v___x_259_ = lean_usize_land(v___x_255_, v___x_258_);
v___x_260_ = lean_array_uget_borrowed(v_x_239_, v___x_259_);
lean_inc(v___x_260_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 2, v___x_260_);
v___x_262_ = v___x_245_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_key_241_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_value_242_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v___x_260_);
v___x_262_ = v_reuseFailAlloc_265_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_263_; 
v___x_263_ = lean_array_uset(v_x_239_, v___x_259_, v___x_262_);
v_x_239_ = v___x_263_;
v_x_240_ = v_tail_243_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(lean_object* v_i_267_, lean_object* v_source_268_, lean_object* v_target_269_){
_start:
{
lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_270_ = lean_array_get_size(v_source_268_);
v___x_271_ = lean_nat_dec_lt(v_i_267_, v___x_270_);
if (v___x_271_ == 0)
{
lean_dec_ref(v_source_268_);
lean_dec(v_i_267_);
return v_target_269_;
}
else
{
lean_object* v_es_272_; lean_object* v___x_273_; lean_object* v_source_274_; lean_object* v_target_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_es_272_ = lean_array_fget(v_source_268_, v_i_267_);
v___x_273_ = lean_box(0);
v_source_274_ = lean_array_fset(v_source_268_, v_i_267_, v___x_273_);
v_target_275_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(v_target_269_, v_es_272_);
v___x_276_ = lean_unsigned_to_nat(1u);
v___x_277_ = lean_nat_add(v_i_267_, v___x_276_);
lean_dec(v_i_267_);
v_i_267_ = v___x_277_;
v_source_268_ = v_source_274_;
v_target_269_ = v_target_275_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(lean_object* v_data_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_nbuckets_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_280_ = lean_array_get_size(v_data_279_);
v___x_281_ = lean_unsigned_to_nat(2u);
v_nbuckets_282_ = lean_nat_mul(v___x_280_, v___x_281_);
v___x_283_ = lean_unsigned_to_nat(0u);
v___x_284_ = lean_box(0);
v___x_285_ = lean_mk_array(v_nbuckets_282_, v___x_284_);
v___x_286_ = lean_array_propagate_mark(v_data_279_, v___x_285_);
v___x_287_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(v___x_283_, v_data_279_, v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(lean_object* v_a_288_, lean_object* v_x_289_){
_start:
{
if (lean_obj_tag(v_x_289_) == 0)
{
uint8_t v___x_290_; 
v___x_290_ = 0;
return v___x_290_;
}
else
{
lean_object* v_key_291_; lean_object* v_tail_292_; uint8_t v___x_293_; 
v_key_291_ = lean_ctor_get(v_x_289_, 0);
v_tail_292_ = lean_ctor_get(v_x_289_, 2);
v___x_293_ = l_Lean_ExprStructEq_beq(v_key_291_, v_a_288_);
if (v___x_293_ == 0)
{
v_x_289_ = v_tail_292_;
goto _start;
}
else
{
return v___x_293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_295_, lean_object* v_x_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(v_a_295_, v_x_296_);
lean_dec(v_x_296_);
lean_dec_ref(v_a_295_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(lean_object* v_a_299_, lean_object* v_b_300_, lean_object* v_x_301_){
_start:
{
if (lean_obj_tag(v_x_301_) == 0)
{
lean_dec(v_b_300_);
lean_dec_ref(v_a_299_);
return v_x_301_;
}
else
{
lean_object* v_key_302_; lean_object* v_value_303_; lean_object* v_tail_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_316_; 
v_key_302_ = lean_ctor_get(v_x_301_, 0);
v_value_303_ = lean_ctor_get(v_x_301_, 1);
v_tail_304_ = lean_ctor_get(v_x_301_, 2);
v_isSharedCheck_316_ = !lean_is_exclusive(v_x_301_);
if (v_isSharedCheck_316_ == 0)
{
v___x_306_ = v_x_301_;
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_tail_304_);
lean_inc(v_value_303_);
lean_inc(v_key_302_);
lean_dec(v_x_301_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
uint8_t v___x_308_; 
v___x_308_ = l_Lean_ExprStructEq_beq(v_key_302_, v_a_299_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v___x_311_; 
v___x_309_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(v_a_299_, v_b_300_, v_tail_304_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 2, v___x_309_);
v___x_311_ = v___x_306_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_key_302_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_value_303_);
lean_ctor_set(v_reuseFailAlloc_312_, 2, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
else
{
lean_object* v___x_314_; 
lean_dec(v_value_303_);
lean_dec(v_key_302_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 1, v_b_300_);
lean_ctor_set(v___x_306_, 0, v_a_299_);
v___x_314_ = v___x_306_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_299_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v_b_300_);
lean_ctor_set(v_reuseFailAlloc_315_, 2, v_tail_304_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(lean_object* v_m_317_, lean_object* v_a_318_, lean_object* v_b_319_){
_start:
{
lean_object* v_size_320_; lean_object* v_buckets_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_364_; 
v_size_320_ = lean_ctor_get(v_m_317_, 0);
v_buckets_321_ = lean_ctor_get(v_m_317_, 1);
v_isSharedCheck_364_ = !lean_is_exclusive(v_m_317_);
if (v_isSharedCheck_364_ == 0)
{
v___x_323_ = v_m_317_;
v_isShared_324_ = v_isSharedCheck_364_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_buckets_321_);
lean_inc(v_size_320_);
lean_dec(v_m_317_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_364_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; uint64_t v___x_326_; uint64_t v___x_327_; uint64_t v___x_328_; uint64_t v_fold_329_; uint64_t v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; size_t v___x_333_; size_t v___x_334_; size_t v___x_335_; size_t v___x_336_; size_t v___x_337_; lean_object* v_bkt_338_; uint8_t v___x_339_; 
v___x_325_ = lean_array_get_size(v_buckets_321_);
v___x_326_ = l_Lean_ExprStructEq_hash(v_a_318_);
v___x_327_ = 32ULL;
v___x_328_ = lean_uint64_shift_right(v___x_326_, v___x_327_);
v_fold_329_ = lean_uint64_xor(v___x_326_, v___x_328_);
v___x_330_ = 16ULL;
v___x_331_ = lean_uint64_shift_right(v_fold_329_, v___x_330_);
v___x_332_ = lean_uint64_xor(v_fold_329_, v___x_331_);
v___x_333_ = lean_uint64_to_usize(v___x_332_);
v___x_334_ = lean_usize_of_nat(v___x_325_);
v___x_335_ = ((size_t)1ULL);
v___x_336_ = lean_usize_sub(v___x_334_, v___x_335_);
v___x_337_ = lean_usize_land(v___x_333_, v___x_336_);
v_bkt_338_ = lean_array_uget_borrowed(v_buckets_321_, v___x_337_);
v___x_339_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(v_a_318_, v_bkt_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; lean_object* v_size_x27_341_; lean_object* v___x_342_; lean_object* v_buckets_x27_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_340_ = lean_unsigned_to_nat(1u);
v_size_x27_341_ = lean_nat_add(v_size_320_, v___x_340_);
lean_dec(v_size_320_);
lean_inc(v_bkt_338_);
v___x_342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_342_, 0, v_a_318_);
lean_ctor_set(v___x_342_, 1, v_b_319_);
lean_ctor_set(v___x_342_, 2, v_bkt_338_);
v_buckets_x27_343_ = lean_array_uset(v_buckets_321_, v___x_337_, v___x_342_);
v___x_344_ = lean_unsigned_to_nat(4u);
v___x_345_ = lean_nat_mul(v_size_x27_341_, v___x_344_);
v___x_346_ = lean_unsigned_to_nat(3u);
v___x_347_ = lean_nat_div(v___x_345_, v___x_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_array_get_size(v_buckets_x27_343_);
v___x_349_ = lean_nat_dec_le(v___x_347_, v___x_348_);
lean_dec(v___x_347_);
if (v___x_349_ == 0)
{
lean_object* v_val_350_; lean_object* v___x_352_; 
v_val_350_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(v_buckets_x27_343_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v_val_350_);
lean_ctor_set(v___x_323_, 0, v_size_x27_341_);
v___x_352_ = v___x_323_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_size_x27_341_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_val_350_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
else
{
lean_object* v___x_355_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v_buckets_x27_343_);
lean_ctor_set(v___x_323_, 0, v_size_x27_341_);
v___x_355_ = v___x_323_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_size_x27_341_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_buckets_x27_343_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
else
{
lean_object* v___x_357_; lean_object* v_buckets_x27_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
lean_inc(v_bkt_338_);
v___x_357_ = lean_box(0);
v_buckets_x27_358_ = lean_array_uset(v_buckets_321_, v___x_337_, v___x_357_);
v___x_359_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(v_a_318_, v_b_319_, v_bkt_338_);
v___x_360_ = lean_array_uset(v_buckets_x27_358_, v___x_337_, v___x_359_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v___x_360_);
v___x_362_ = v___x_323_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_size_320_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v___x_360_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(lean_object* v_a_365_, lean_object* v_x_366_){
_start:
{
if (lean_obj_tag(v_x_366_) == 0)
{
lean_object* v___x_367_; 
v___x_367_ = lean_box(0);
return v___x_367_;
}
else
{
lean_object* v_key_368_; lean_object* v_value_369_; lean_object* v_tail_370_; uint8_t v___x_371_; 
v_key_368_ = lean_ctor_get(v_x_366_, 0);
v_value_369_ = lean_ctor_get(v_x_366_, 1);
v_tail_370_ = lean_ctor_get(v_x_366_, 2);
v___x_371_ = l_Lean_ExprStructEq_beq(v_key_368_, v_a_365_);
if (v___x_371_ == 0)
{
v_x_366_ = v_tail_370_;
goto _start;
}
else
{
lean_object* v___x_373_; 
lean_inc(v_value_369_);
v___x_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_373_, 0, v_value_369_);
return v___x_373_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg___boxed(lean_object* v_a_374_, lean_object* v_x_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(v_a_374_, v_x_375_);
lean_dec(v_x_375_);
lean_dec_ref(v_a_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(lean_object* v_m_377_, lean_object* v_a_378_){
_start:
{
lean_object* v_buckets_379_; lean_object* v___x_380_; uint64_t v___x_381_; uint64_t v___x_382_; uint64_t v___x_383_; uint64_t v_fold_384_; uint64_t v___x_385_; uint64_t v___x_386_; uint64_t v___x_387_; size_t v___x_388_; size_t v___x_389_; size_t v___x_390_; size_t v___x_391_; size_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v_buckets_379_ = lean_ctor_get(v_m_377_, 1);
v___x_380_ = lean_array_get_size(v_buckets_379_);
v___x_381_ = l_Lean_ExprStructEq_hash(v_a_378_);
v___x_382_ = 32ULL;
v___x_383_ = lean_uint64_shift_right(v___x_381_, v___x_382_);
v_fold_384_ = lean_uint64_xor(v___x_381_, v___x_383_);
v___x_385_ = 16ULL;
v___x_386_ = lean_uint64_shift_right(v_fold_384_, v___x_385_);
v___x_387_ = lean_uint64_xor(v_fold_384_, v___x_386_);
v___x_388_ = lean_uint64_to_usize(v___x_387_);
v___x_389_ = lean_usize_of_nat(v___x_380_);
v___x_390_ = ((size_t)1ULL);
v___x_391_ = lean_usize_sub(v___x_389_, v___x_390_);
v___x_392_ = lean_usize_land(v___x_388_, v___x_391_);
v___x_393_ = lean_array_uget_borrowed(v_buckets_379_, v___x_392_);
v___x_394_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(v_a_378_, v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg___boxed(lean_object* v_m_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(v_m_395_, v_a_396_);
lean_dec_ref(v_a_396_);
lean_dec_ref(v_m_395_);
return v_res_397_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_400_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1));
v___x_401_ = lean_unsigned_to_nat(10u);
v___x_402_ = lean_unsigned_to_nat(72u);
v___x_403_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0));
v___x_404_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0));
v___x_405_ = l_mkPanicMessageWithDecl(v___x_404_, v___x_403_, v___x_402_, v___x_401_, v___x_400_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(lean_object* v_e_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v_a_413_; lean_object* v_fst_414_; lean_object* v___y_420_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_423_ = lean_box(0);
v___x_424_ = lean_st_ref_get(v___y_407_);
v___x_425_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(v___x_424_, v_e_406_);
lean_dec(v___x_424_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_426_ = ((lean_object*)(l_Lean_Expr_hasBinderNameHint___lam__0___closed__1));
v___x_427_ = lean_unsigned_to_nat(6u);
v___x_428_ = l_Lean_Expr_isAppOfArity(v_e_406_, v___x_426_, v___x_427_);
if (v___x_428_ == 0)
{
switch(lean_obj_tag(v_e_406_))
{
case 7:
{
lean_object* v_binderName_429_; lean_object* v_binderType_430_; lean_object* v_body_431_; uint8_t v_binderInfo_432_; lean_object* v___x_433_; 
v_binderName_429_ = lean_ctor_get(v_e_406_, 0);
v_binderType_430_ = lean_ctor_get(v_e_406_, 1);
v_body_431_ = lean_ctor_get(v_e_406_, 2);
v_binderInfo_432_ = lean_ctor_get_uint8(v_e_406_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_430_);
v___x_433_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_binderType_430_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v_fst_435_; lean_object* v_snd_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_434_);
lean_dec_ref_known(v___x_433_, 1);
v_fst_435_ = lean_ctor_get(v_a_434_, 0);
lean_inc(v_fst_435_);
v_snd_436_ = lean_ctor_get(v_a_434_, 1);
lean_inc(v_snd_436_);
lean_dec(v_a_434_);
lean_inc(v_binderName_429_);
v___x_437_ = lean_array_push(v_snd_436_, v_binderName_429_);
lean_inc_ref(v_body_431_);
v___x_438_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_body_431_, v___y_407_, v___x_437_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v_fst_440_; lean_object* v_snd_441_; lean_object* v___x_442_; lean_object* v_fst_443_; lean_object* v_snd_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_452_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_a_439_);
lean_dec_ref_known(v___x_438_, 1);
v_fst_440_ = lean_ctor_get(v_a_439_, 0);
lean_inc(v_fst_440_);
v_snd_441_ = lean_ctor_get(v_a_439_, 1);
lean_inc(v_snd_441_);
lean_dec(v_a_439_);
v___x_442_ = l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(v_snd_441_);
v_fst_443_ = lean_ctor_get(v___x_442_, 0);
v_snd_444_ = lean_ctor_get(v___x_442_, 1);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_452_ == 0)
{
v___x_446_ = v___x_442_;
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_snd_444_);
lean_inc(v_fst_443_);
lean_dec(v___x_442_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_448_ = l_Lean_Expr_forallE___override(v_fst_443_, v_fst_435_, v_fst_440_, v_binderInfo_432_);
lean_inc_ref(v___x_448_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_448_);
v___x_450_ = v___x_446_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_snd_444_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
v_a_413_ = v___x_450_;
v_fst_414_ = v___x_448_;
goto v___jp_412_;
}
}
}
else
{
lean_dec(v_fst_435_);
v___y_420_ = v___x_438_;
goto v___jp_419_;
}
}
else
{
v___y_420_ = v___x_433_;
goto v___jp_419_;
}
}
case 6:
{
lean_object* v_binderName_453_; lean_object* v_binderType_454_; lean_object* v_body_455_; uint8_t v_binderInfo_456_; lean_object* v___x_457_; 
v_binderName_453_ = lean_ctor_get(v_e_406_, 0);
v_binderType_454_ = lean_ctor_get(v_e_406_, 1);
v_body_455_ = lean_ctor_get(v_e_406_, 2);
v_binderInfo_456_ = lean_ctor_get_uint8(v_e_406_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_454_);
v___x_457_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_binderType_454_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v_fst_459_; lean_object* v_snd_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_a_458_);
lean_dec_ref_known(v___x_457_, 1);
v_fst_459_ = lean_ctor_get(v_a_458_, 0);
lean_inc(v_fst_459_);
v_snd_460_ = lean_ctor_get(v_a_458_, 1);
lean_inc(v_snd_460_);
lean_dec(v_a_458_);
lean_inc(v_binderName_453_);
v___x_461_ = lean_array_push(v_snd_460_, v_binderName_453_);
lean_inc_ref(v_body_455_);
v___x_462_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_body_455_, v___y_407_, v___x_461_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v_fst_464_; lean_object* v_snd_465_; lean_object* v___x_466_; lean_object* v_fst_467_; lean_object* v_snd_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_476_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_a_463_);
lean_dec_ref_known(v___x_462_, 1);
v_fst_464_ = lean_ctor_get(v_a_463_, 0);
lean_inc(v_fst_464_);
v_snd_465_ = lean_ctor_get(v_a_463_, 1);
lean_inc(v_snd_465_);
lean_dec(v_a_463_);
v___x_466_ = l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(v_snd_465_);
v_fst_467_ = lean_ctor_get(v___x_466_, 0);
v_snd_468_ = lean_ctor_get(v___x_466_, 1);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_476_ == 0)
{
v___x_470_ = v___x_466_;
v_isShared_471_ = v_isSharedCheck_476_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_snd_468_);
lean_inc(v_fst_467_);
lean_dec(v___x_466_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_476_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_472_; lean_object* v___x_474_; 
v___x_472_ = l_Lean_Expr_lam___override(v_fst_467_, v_fst_459_, v_fst_464_, v_binderInfo_456_);
lean_inc_ref(v___x_472_);
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 0, v___x_472_);
v___x_474_ = v___x_470_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
lean_ctor_set(v_reuseFailAlloc_475_, 1, v_snd_468_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
v_a_413_ = v___x_474_;
v_fst_414_ = v___x_472_;
goto v___jp_412_;
}
}
}
else
{
lean_dec(v_fst_459_);
v___y_420_ = v___x_462_;
goto v___jp_419_;
}
}
else
{
v___y_420_ = v___x_457_;
goto v___jp_419_;
}
}
case 8:
{
lean_object* v_declName_477_; lean_object* v_type_478_; lean_object* v_value_479_; lean_object* v_body_480_; uint8_t v_nondep_481_; lean_object* v___x_482_; 
v_declName_477_ = lean_ctor_get(v_e_406_, 0);
v_type_478_ = lean_ctor_get(v_e_406_, 1);
v_value_479_ = lean_ctor_get(v_e_406_, 2);
v_body_480_ = lean_ctor_get(v_e_406_, 3);
v_nondep_481_ = lean_ctor_get_uint8(v_e_406_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_478_);
v___x_482_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_type_478_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v_fst_484_; lean_object* v_snd_485_; lean_object* v___x_486_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
v_fst_484_ = lean_ctor_get(v_a_483_, 0);
lean_inc(v_fst_484_);
v_snd_485_ = lean_ctor_get(v_a_483_, 1);
lean_inc(v_snd_485_);
lean_dec(v_a_483_);
lean_inc_ref(v_value_479_);
v___x_486_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_value_479_, v___y_407_, v_snd_485_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v_fst_488_; lean_object* v_snd_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v___x_486_, 1);
v_fst_488_ = lean_ctor_get(v_a_487_, 0);
lean_inc(v_fst_488_);
v_snd_489_ = lean_ctor_get(v_a_487_, 1);
lean_inc(v_snd_489_);
lean_dec(v_a_487_);
lean_inc(v_declName_477_);
v___x_490_ = lean_array_push(v_snd_489_, v_declName_477_);
lean_inc_ref(v_body_480_);
v___x_491_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_body_480_, v___y_407_, v___x_490_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v_a_492_; lean_object* v_fst_493_; lean_object* v_snd_494_; lean_object* v___x_495_; lean_object* v_fst_496_; lean_object* v_snd_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_505_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc(v_a_492_);
lean_dec_ref_known(v___x_491_, 1);
v_fst_493_ = lean_ctor_get(v_a_492_, 0);
lean_inc(v_fst_493_);
v_snd_494_ = lean_ctor_get(v_a_492_, 1);
lean_inc(v_snd_494_);
lean_dec(v_a_492_);
v___x_495_ = l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(v_snd_494_);
v_fst_496_ = lean_ctor_get(v___x_495_, 0);
v_snd_497_ = lean_ctor_get(v___x_495_, 1);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_505_ == 0)
{
v___x_499_ = v___x_495_;
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_snd_497_);
lean_inc(v_fst_496_);
lean_dec(v___x_495_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_501_ = l_Lean_Expr_letE___override(v_fst_496_, v_fst_484_, v_fst_488_, v_fst_493_, v_nondep_481_);
lean_inc_ref(v___x_501_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_501_);
v___x_503_ = v___x_499_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
lean_ctor_set(v_reuseFailAlloc_504_, 1, v_snd_497_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
v_a_413_ = v___x_503_;
v_fst_414_ = v___x_501_;
goto v___jp_412_;
}
}
}
else
{
lean_dec(v_fst_488_);
lean_dec(v_fst_484_);
v___y_420_ = v___x_491_;
goto v___jp_419_;
}
}
else
{
lean_dec(v_fst_484_);
v___y_420_ = v___x_486_;
goto v___jp_419_;
}
}
else
{
v___y_420_ = v___x_482_;
goto v___jp_419_;
}
}
case 5:
{
lean_object* v_fn_506_; lean_object* v_arg_507_; lean_object* v___x_508_; 
v_fn_506_ = lean_ctor_get(v_e_406_, 0);
v_arg_507_ = lean_ctor_get(v_e_406_, 1);
lean_inc_ref(v_fn_506_);
v___x_508_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_fn_506_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v_fst_510_; lean_object* v_snd_511_; lean_object* v___x_512_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_a_509_);
lean_dec_ref_known(v___x_508_, 1);
v_fst_510_ = lean_ctor_get(v_a_509_, 0);
lean_inc(v_fst_510_);
v_snd_511_ = lean_ctor_get(v_a_509_, 1);
lean_inc(v_snd_511_);
lean_dec(v_a_509_);
lean_inc_ref(v_arg_507_);
v___x_512_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_arg_507_, v___y_407_, v_snd_511_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v_fst_514_; lean_object* v_snd_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_532_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_512_, 1);
v_fst_514_ = lean_ctor_get(v_a_513_, 0);
v_snd_515_ = lean_ctor_get(v_a_513_, 1);
v_isSharedCheck_532_ = !lean_is_exclusive(v_a_513_);
if (v_isSharedCheck_532_ == 0)
{
v___x_517_ = v_a_513_;
v_isShared_518_ = v_isSharedCheck_532_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_snd_515_);
lean_inc(v_fst_514_);
lean_dec(v_a_513_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_532_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___y_520_; size_t v___x_524_; size_t v___x_525_; uint8_t v___x_526_; 
v___x_524_ = lean_ptr_addr(v_fn_506_);
v___x_525_ = lean_ptr_addr(v_fst_510_);
v___x_526_ = lean_usize_dec_eq(v___x_524_, v___x_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; 
v___x_527_ = l_Lean_Expr_app___override(v_fst_510_, v_fst_514_);
v___y_520_ = v___x_527_;
goto v___jp_519_;
}
else
{
size_t v___x_528_; size_t v___x_529_; uint8_t v___x_530_; 
v___x_528_ = lean_ptr_addr(v_arg_507_);
v___x_529_ = lean_ptr_addr(v_fst_514_);
v___x_530_ = lean_usize_dec_eq(v___x_528_, v___x_529_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_Expr_app___override(v_fst_510_, v_fst_514_);
v___y_520_ = v___x_531_;
goto v___jp_519_;
}
else
{
lean_dec(v_fst_514_);
lean_dec(v_fst_510_);
lean_inc_ref(v_e_406_);
v___y_520_ = v_e_406_;
goto v___jp_519_;
}
}
v___jp_519_:
{
lean_object* v___x_522_; 
lean_inc_ref(v___y_520_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 0, v___y_520_);
v___x_522_ = v___x_517_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___y_520_);
lean_ctor_set(v_reuseFailAlloc_523_, 1, v_snd_515_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
v_a_413_ = v___x_522_;
v_fst_414_ = v___y_520_;
goto v___jp_412_;
}
}
}
}
else
{
lean_dec(v_fst_510_);
v___y_420_ = v___x_512_;
goto v___jp_419_;
}
}
else
{
v___y_420_ = v___x_508_;
goto v___jp_419_;
}
}
case 10:
{
lean_object* v_data_533_; lean_object* v_expr_534_; lean_object* v___x_535_; 
v_data_533_ = lean_ctor_get(v_e_406_, 0);
v_expr_534_ = lean_ctor_get(v_e_406_, 1);
lean_inc_ref(v_expr_534_);
v___x_535_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_expr_534_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v_fst_537_; lean_object* v_snd_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_551_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v_fst_537_ = lean_ctor_get(v_a_536_, 0);
v_snd_538_ = lean_ctor_get(v_a_536_, 1);
v_isSharedCheck_551_ = !lean_is_exclusive(v_a_536_);
if (v_isSharedCheck_551_ == 0)
{
v___x_540_ = v_a_536_;
v_isShared_541_ = v_isSharedCheck_551_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_snd_538_);
lean_inc(v_fst_537_);
lean_dec(v_a_536_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_551_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___y_543_; size_t v___x_547_; size_t v___x_548_; uint8_t v___x_549_; 
v___x_547_ = lean_ptr_addr(v_expr_534_);
v___x_548_ = lean_ptr_addr(v_fst_537_);
v___x_549_ = lean_usize_dec_eq(v___x_547_, v___x_548_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; 
lean_inc(v_data_533_);
v___x_550_ = l_Lean_Expr_mdata___override(v_data_533_, v_fst_537_);
v___y_543_ = v___x_550_;
goto v___jp_542_;
}
else
{
lean_dec(v_fst_537_);
lean_inc_ref(v_e_406_);
v___y_543_ = v_e_406_;
goto v___jp_542_;
}
v___jp_542_:
{
lean_object* v___x_545_; 
lean_inc_ref(v___y_543_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___y_543_);
v___x_545_ = v___x_540_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___y_543_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_snd_538_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
v_a_413_ = v___x_545_;
v_fst_414_ = v___y_543_;
goto v___jp_412_;
}
}
}
}
else
{
v___y_420_ = v___x_535_;
goto v___jp_419_;
}
}
case 11:
{
lean_object* v_typeName_552_; lean_object* v_idx_553_; lean_object* v_struct_554_; lean_object* v___x_555_; 
v_typeName_552_ = lean_ctor_get(v_e_406_, 0);
v_idx_553_ = lean_ctor_get(v_e_406_, 1);
v_struct_554_ = lean_ctor_get(v_e_406_, 2);
lean_inc_ref(v_struct_554_);
v___x_555_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_struct_554_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v_fst_557_; lean_object* v_snd_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_571_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v___x_555_, 1);
v_fst_557_ = lean_ctor_get(v_a_556_, 0);
v_snd_558_ = lean_ctor_get(v_a_556_, 1);
v_isSharedCheck_571_ = !lean_is_exclusive(v_a_556_);
if (v_isSharedCheck_571_ == 0)
{
v___x_560_ = v_a_556_;
v_isShared_561_ = v_isSharedCheck_571_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_snd_558_);
lean_inc(v_fst_557_);
lean_dec(v_a_556_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_571_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___y_563_; size_t v___x_567_; size_t v___x_568_; uint8_t v___x_569_; 
v___x_567_ = lean_ptr_addr(v_struct_554_);
v___x_568_ = lean_ptr_addr(v_fst_557_);
v___x_569_ = lean_usize_dec_eq(v___x_567_, v___x_568_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
lean_inc(v_idx_553_);
lean_inc(v_typeName_552_);
v___x_570_ = l_Lean_Expr_proj___override(v_typeName_552_, v_idx_553_, v_fst_557_);
v___y_563_ = v___x_570_;
goto v___jp_562_;
}
else
{
lean_dec(v_fst_557_);
lean_inc_ref(v_e_406_);
v___y_563_ = v_e_406_;
goto v___jp_562_;
}
v___jp_562_:
{
lean_object* v___x_565_; 
lean_inc_ref(v___y_563_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___y_563_);
v___x_565_ = v___x_560_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___y_563_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v_snd_558_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
v_a_413_ = v___x_565_;
v_fst_414_ = v___y_563_;
goto v___jp_412_;
}
}
}
}
else
{
v___y_420_ = v___x_555_;
goto v___jp_419_;
}
}
default: 
{
lean_object* v___x_572_; 
lean_inc_ref_n(v_e_406_, 2);
v___x_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_572_, 0, v_e_406_);
lean_ctor_set(v___x_572_, 1, v___y_408_);
v_a_413_ = v___x_572_;
v_fst_414_ = v_e_406_;
goto v___jp_412_;
}
}
}
else
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v_v_575_; lean_object* v_b_576_; lean_object* v_e_577_; lean_object* v___x_578_; 
v___x_573_ = l_Lean_Expr_appFn_x21(v_e_406_);
v___x_574_ = l_Lean_Expr_appFn_x21(v___x_573_);
v_v_575_ = l_Lean_Expr_appArg_x21(v___x_574_);
lean_dec_ref(v___x_574_);
v_b_576_ = l_Lean_Expr_appArg_x21(v___x_573_);
lean_dec_ref(v___x_573_);
v_e_577_ = l_Lean_Expr_appArg_x21(v_e_406_);
v___x_578_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_e_577_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v_fst_580_; lean_object* v_snd_581_; lean_object* v___f_582_; 
v_a_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_578_, 1);
v_fst_580_ = lean_ctor_get(v_a_579_, 0);
lean_inc_n(v_fst_580_, 2);
v_snd_581_ = lean_ctor_get(v_a_579_, 1);
lean_inc(v_snd_581_);
lean_dec(v_a_579_);
v___f_582_ = lean_alloc_closure((void*)(l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0___boxed), 7, 1);
lean_closure_set(v___f_582_, 0, v_fst_580_);
if (lean_obj_tag(v_v_575_) == 0)
{
lean_object* v_deBruijnIndex_583_; lean_object* v___x_584_; 
v_deBruijnIndex_583_ = lean_ctor_get(v_v_575_, 0);
lean_inc(v_deBruijnIndex_583_);
lean_dec_ref_known(v_v_575_, 1);
v___x_584_ = l_Lean_Expr_headBeta(v_b_576_);
switch(lean_obj_tag(v___x_584_))
{
case 6:
{
lean_object* v_binderName_585_; lean_object* v_binderType_586_; lean_object* v_body_587_; uint8_t v_binderInfo_588_; lean_object* v___x_589_; 
lean_dec(v_fst_580_);
v_binderName_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_binderName_585_);
v_binderType_586_ = lean_ctor_get(v___x_584_, 1);
lean_inc_ref(v_binderType_586_);
v_body_587_ = lean_ctor_get(v___x_584_, 2);
lean_inc_ref(v_body_587_);
v_binderInfo_588_ = lean_ctor_get_uint8(v___x_584_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_584_, 3);
v___x_589_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(v___f_582_, v_deBruijnIndex_583_, v_binderName_585_, v_binderType_586_, v_body_587_, v_binderInfo_588_, v___y_407_, v_snd_581_, v___y_409_, v___y_410_);
lean_dec_ref(v_body_587_);
lean_dec_ref(v_binderType_586_);
lean_dec(v_deBruijnIndex_583_);
v___y_420_ = v___x_589_;
goto v___jp_419_;
}
case 7:
{
lean_object* v_binderName_590_; lean_object* v_binderType_591_; lean_object* v_body_592_; uint8_t v_binderInfo_593_; lean_object* v___x_594_; 
lean_dec(v_fst_580_);
v_binderName_590_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_binderName_590_);
v_binderType_591_ = lean_ctor_get(v___x_584_, 1);
lean_inc_ref(v_binderType_591_);
v_body_592_ = lean_ctor_get(v___x_584_, 2);
lean_inc_ref(v_body_592_);
v_binderInfo_593_ = lean_ctor_get_uint8(v___x_584_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_584_, 3);
v___x_594_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(v___f_582_, v_deBruijnIndex_583_, v_binderName_590_, v_binderType_591_, v_body_592_, v_binderInfo_593_, v___y_407_, v_snd_581_, v___y_409_, v___y_410_);
lean_dec_ref(v_body_592_);
lean_dec_ref(v_binderType_591_);
lean_dec(v_deBruijnIndex_583_);
v___y_420_ = v___x_594_;
goto v___jp_419_;
}
default: 
{
lean_object* v___x_595_; uint8_t v___x_596_; 
lean_dec_ref(v___x_584_);
lean_dec_ref(v___f_582_);
v___x_595_ = lean_array_get_size(v_snd_581_);
v___x_596_ = lean_nat_dec_lt(v_deBruijnIndex_583_, v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; lean_object* v___x_598_; 
lean_dec(v_deBruijnIndex_583_);
lean_dec(v_fst_580_);
v___x_597_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2, &l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2);
v___x_598_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(v___x_597_, v___y_407_, v_snd_581_, v___y_409_, v___y_410_);
v___y_420_ = v___x_598_;
goto v___jp_419_;
}
else
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_599_ = lean_nat_sub(v___x_595_, v_deBruijnIndex_583_);
v___x_600_ = lean_unsigned_to_nat(1u);
v___x_601_ = lean_nat_sub(v___x_599_, v___x_600_);
lean_dec(v___x_599_);
v___x_602_ = lean_array_get_borrowed(v___x_423_, v_snd_581_, v___x_601_);
lean_dec(v___x_601_);
lean_inc(v___x_602_);
v___x_603_ = l_Lean_Core_mkFreshUserName(v___x_602_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_603_, 1);
v___x_605_ = lean_box(0);
v___x_606_ = l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(v_deBruijnIndex_583_, v_a_604_, v_snd_581_);
lean_dec(v_deBruijnIndex_583_);
v___x_607_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(v_fst_580_, v___x_605_, v___y_407_, v___x_606_, v___y_409_, v___y_410_);
v___y_420_ = v___x_607_;
goto v___jp_419_;
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
lean_dec(v_deBruijnIndex_583_);
lean_dec(v_snd_581_);
lean_dec(v_fst_580_);
lean_dec_ref(v_e_406_);
v_a_608_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_603_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_603_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; 
lean_dec_ref(v___f_582_);
lean_dec_ref(v_b_576_);
lean_dec_ref(v_v_575_);
v___x_616_ = lean_box(0);
v___x_617_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(v_fst_580_, v___x_616_, v___y_407_, v_snd_581_, v___y_409_, v___y_410_);
v___y_420_ = v___x_617_;
goto v___jp_419_;
}
}
else
{
lean_dec_ref(v_b_576_);
lean_dec_ref(v_v_575_);
v___y_420_ = v___x_578_;
goto v___jp_419_;
}
}
}
else
{
lean_object* v_val_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_626_; 
lean_dec_ref(v_e_406_);
v_val_618_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_626_ == 0)
{
v___x_620_ = v___x_425_;
v_isShared_621_ = v_isSharedCheck_626_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_val_618_);
lean_dec(v___x_425_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_626_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_622_, 0, v_val_618_);
lean_ctor_set(v___x_622_, 1, v___y_408_);
if (v_isShared_621_ == 0)
{
lean_ctor_set_tag(v___x_620_, 0);
lean_ctor_set(v___x_620_, 0, v___x_622_);
v___x_624_ = v___x_620_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_622_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
v___jp_412_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_415_ = lean_st_ref_take(v___y_407_);
v___x_416_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(v___x_415_, v_e_406_, v_fst_414_);
v___x_417_ = lean_st_ref_put(v___y_407_, v___x_416_);
v___x_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_418_, 0, v_a_413_);
return v___x_418_;
}
v___jp_419_:
{
if (lean_obj_tag(v___y_420_) == 0)
{
lean_object* v_a_421_; lean_object* v_fst_422_; 
v_a_421_ = lean_ctor_get(v___y_420_, 0);
lean_inc(v_a_421_);
lean_dec_ref_known(v___y_420_, 1);
v_fst_422_ = lean_ctor_get(v_a_421_, 0);
lean_inc(v_fst_422_);
v_a_413_ = v_a_421_;
v_fst_414_ = v_fst_422_;
goto v___jp_412_;
}
else
{
lean_dec_ref(v_e_406_);
return v___y_420_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___boxed(lean_object* v_e_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_e_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v___y_628_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0(lean_object* v_00_u03b2_634_, lean_object* v_m_635_, lean_object* v_a_636_, lean_object* v_b_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(v_m_635_, v_a_636_, v_b_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1(lean_object* v_00_u03b2_639_, lean_object* v_m_640_, lean_object* v_a_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(v_m_640_, v_a_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___boxed(lean_object* v_00_u03b2_643_, lean_object* v_m_644_, lean_object* v_a_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1(v_00_u03b2_643_, v_m_644_, v_a_645_);
lean_dec_ref(v_a_645_);
lean_dec_ref(v_m_644_);
return v_res_646_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0(lean_object* v_00_u03b2_647_, lean_object* v_a_648_, lean_object* v_x_649_){
_start:
{
uint8_t v___x_650_; 
v___x_650_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(v_a_648_, v_x_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_651_, lean_object* v_a_652_, lean_object* v_x_653_){
_start:
{
uint8_t v_res_654_; lean_object* v_r_655_; 
v_res_654_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0(v_00_u03b2_651_, v_a_652_, v_x_653_);
lean_dec(v_x_653_);
lean_dec_ref(v_a_652_);
v_r_655_ = lean_box(v_res_654_);
return v_r_655_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1(lean_object* v_00_u03b2_656_, lean_object* v_data_657_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(v_data_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2(lean_object* v_00_u03b2_659_, lean_object* v_a_660_, lean_object* v_b_661_, lean_object* v_x_662_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(v_a_660_, v_b_661_, v_x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4(lean_object* v_00_u03b2_664_, lean_object* v_a_665_, lean_object* v_x_666_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(v_a_665_, v_x_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___boxed(lean_object* v_00_u03b2_668_, lean_object* v_a_669_, lean_object* v_x_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4(v_00_u03b2_668_, v_a_669_, v_x_670_);
lean_dec(v_x_670_);
lean_dec_ref(v_a_669_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_672_, lean_object* v_i_673_, lean_object* v_source_674_, lean_object* v_target_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(v_i_673_, v_source_674_, v_target_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_677_, lean_object* v_x_678_, lean_object* v_x_679_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(v_x_678_, v_x_679_);
return v___x_680_;
}
}
static lean_object* _init_l_Lean_Expr_resolveBinderNameHint___closed__0(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_681_ = lean_box(0);
v___x_682_ = lean_unsigned_to_nat(16u);
v___x_683_ = lean_mk_array(v___x_682_, v___x_681_);
return v___x_683_;
}
}
static lean_object* _init_l_Lean_Expr_resolveBinderNameHint___closed__1(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_684_ = lean_obj_once(&l_Lean_Expr_resolveBinderNameHint___closed__0, &l_Lean_Expr_resolveBinderNameHint___closed__0_once, _init_l_Lean_Expr_resolveBinderNameHint___closed__0);
v___x_685_ = lean_unsigned_to_nat(0u);
v___x_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
lean_ctor_set(v___x_686_, 1, v___x_684_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint(lean_object* v_e_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_693_ = lean_obj_once(&l_Lean_Expr_resolveBinderNameHint___closed__1, &l_Lean_Expr_resolveBinderNameHint___closed__1_once, _init_l_Lean_Expr_resolveBinderNameHint___closed__1);
v___x_694_ = ((lean_object*)(l_Lean_Expr_resolveBinderNameHint___closed__2));
v___x_695_ = lean_st_mk_ref(v___x_693_);
v___x_696_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_e_689_, v___x_695_, v___x_694_, v___y_690_, v___y_691_);
if (lean_obj_tag(v___x_696_) == 0)
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_706_; 
v_a_697_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_706_ == 0)
{
v___x_699_ = v___x_696_;
v_isShared_700_ = v_isSharedCheck_706_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_696_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_706_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v_fst_701_; lean_object* v___x_702_; lean_object* v___x_704_; 
v_fst_701_ = lean_ctor_get(v_a_697_, 0);
lean_inc(v_fst_701_);
lean_dec(v_a_697_);
v___x_702_ = lean_st_ref_get(v___x_695_);
lean_dec(v___x_695_);
lean_dec(v___x_702_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 0, v_fst_701_);
v___x_704_ = v___x_699_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_fst_701_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
lean_dec(v___x_695_);
v_a_707_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___x_696_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_696_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_707_);
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
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint___boxed(lean_object* v_e_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_Expr_resolveBinderNameHint(v_e_715_, v___y_716_, v___y_717_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
return v_res_719_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_BinderNameHint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_BinderNameHint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_BinderNameHint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_BinderNameHint(builtin);
}
#ifdef __cplusplus
}
#endif
