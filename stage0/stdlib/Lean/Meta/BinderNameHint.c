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
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
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
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__7_value;
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
lean_object* v___x_80_; lean_object* v___x_392__overap_81_; lean_object* v___x_82_; 
v___x_80_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_makeFresh_spec__0___closed__0);
v___x_392__overap_81_ = lean_panic_fn_borrowed(v___x_80_, v_msg_76_);
lean_inc(v___y_78_);
lean_inc_ref(v___y_77_);
v___x_82_ = lean_apply_3(v___x_392__overap_81_, v___y_77_, v___y_78_, lean_box(0));
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(lean_object* v_msg_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___f_147_; lean_object* v___f_148_; lean_object* v___f_149_; lean_object* v___f_150_; lean_object* v___f_151_; lean_object* v___f_152_; lean_object* v___f_153_; lean_object* v___f_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v_toApplicative_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_201_; 
v___f_147_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__0));
v___f_148_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__1));
v___f_149_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__2));
v___f_150_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__3));
v___f_151_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__4));
v___f_152_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_152_, 0, v___f_151_);
lean_closure_set(v___f_152_, 1, v___f_150_);
v___f_153_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_153_, 0, v___f_150_);
v___f_154_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__5));
v___x_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_155_, 0, v___f_147_);
lean_ctor_set(v___x_155_, 1, v___f_148_);
v___x_156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v___f_149_);
lean_ctor_set(v___x_156_, 2, v___f_152_);
lean_ctor_set(v___x_156_, 3, v___f_153_);
lean_ctor_set(v___x_156_, 4, v___f_154_);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___f_150_);
v___x_158_ = l_StateRefT_x27_instMonad___redArg(v___x_157_);
v_toApplicative_159_ = lean_ctor_get(v___x_158_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; 
v_unused_202_ = lean_ctor_get(v___x_158_, 1);
lean_dec(v_unused_202_);
v___x_161_ = v___x_158_;
v_isShared_162_ = v_isSharedCheck_201_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_toApplicative_159_);
lean_dec(v___x_158_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_201_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v_toFunctor_163_; lean_object* v_toSeq_164_; lean_object* v_toSeqLeft_165_; lean_object* v_toSeqRight_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_199_; 
v_toFunctor_163_ = lean_ctor_get(v_toApplicative_159_, 0);
v_toSeq_164_ = lean_ctor_get(v_toApplicative_159_, 2);
v_toSeqLeft_165_ = lean_ctor_get(v_toApplicative_159_, 3);
v_toSeqRight_166_ = lean_ctor_get(v_toApplicative_159_, 4);
v_isSharedCheck_199_ = !lean_is_exclusive(v_toApplicative_159_);
if (v_isSharedCheck_199_ == 0)
{
lean_object* v_unused_200_; 
v_unused_200_ = lean_ctor_get(v_toApplicative_159_, 1);
lean_dec(v_unused_200_);
v___x_168_ = v_toApplicative_159_;
v_isShared_169_ = v_isSharedCheck_199_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_toSeqRight_166_);
lean_inc(v_toSeqLeft_165_);
lean_inc(v_toSeq_164_);
lean_inc(v_toFunctor_163_);
lean_dec(v_toApplicative_159_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_199_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___f_170_; lean_object* v___f_171_; lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___x_174_; lean_object* v___f_175_; lean_object* v___f_176_; lean_object* v___f_177_; lean_object* v___x_179_; 
v___f_170_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__6));
v___f_171_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___closed__7));
lean_inc_ref(v_toFunctor_163_);
v___f_172_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_172_, 0, v_toFunctor_163_);
v___f_173_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_173_, 0, v_toFunctor_163_);
v___x_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_174_, 0, v___f_172_);
lean_ctor_set(v___x_174_, 1, v___f_173_);
v___f_175_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_175_, 0, v_toSeqRight_166_);
v___f_176_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_176_, 0, v_toSeqLeft_165_);
v___f_177_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_177_, 0, v_toSeq_164_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 4, v___f_175_);
lean_ctor_set(v___x_168_, 3, v___f_176_);
lean_ctor_set(v___x_168_, 2, v___f_177_);
lean_ctor_set(v___x_168_, 1, v___f_170_);
lean_ctor_set(v___x_168_, 0, v___x_174_);
v___x_179_ = v___x_168_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___f_170_);
lean_ctor_set(v_reuseFailAlloc_198_, 2, v___f_177_);
lean_ctor_set(v_reuseFailAlloc_198_, 3, v___f_176_);
lean_ctor_set(v_reuseFailAlloc_198_, 4, v___f_175_);
v___x_179_ = v_reuseFailAlloc_198_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_181_; 
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 1, v___f_171_);
lean_ctor_set(v___x_161_, 0, v___x_179_);
v___x_181_ = v___x_161_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___f_171_);
v___x_181_ = v_reuseFailAlloc_197_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
lean_object* v___f_182_; lean_object* v___f_183_; lean_object* v___f_184_; lean_object* v___f_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_15274__overap_195_; lean_object* v___x_196_; 
lean_inc_ref_n(v___x_181_, 6);
v___f_182_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_182_, 0, v___x_181_);
v___f_183_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_183_, 0, v___x_181_);
v___f_184_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_184_, 0, v___x_181_);
v___f_185_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_185_, 0, v___x_181_);
v___x_186_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_186_, 0, lean_box(0));
lean_closure_set(v___x_186_, 1, lean_box(0));
lean_closure_set(v___x_186_, 2, v___x_181_);
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v___f_182_);
v___x_188_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_188_, 0, lean_box(0));
lean_closure_set(v___x_188_, 1, lean_box(0));
lean_closure_set(v___x_188_, 2, v___x_181_);
v___x_189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_189_, 0, v___x_187_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
lean_ctor_set(v___x_189_, 2, v___f_183_);
lean_ctor_set(v___x_189_, 3, v___f_184_);
lean_ctor_set(v___x_189_, 4, v___f_185_);
v___x_190_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_190_, 0, lean_box(0));
lean_closure_set(v___x_190_, 1, lean_box(0));
lean_closure_set(v___x_190_, 2, v___x_181_);
v___x_191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_189_);
lean_ctor_set(v___x_191_, 1, v___x_190_);
v___x_192_ = l_Lean_MonadCacheT_instMonad___redArg(v___x_191_);
v___x_193_ = l_Lean_instInhabitedExpr;
v___x_194_ = l_instInhabitedOfMonad___redArg(v___x_192_, v___x_193_);
v___x_15274__overap_195_ = lean_panic_fn_borrowed(v___x_194_, v_msg_141_);
lean_dec(v___x_194_);
lean_inc(v___y_145_);
lean_inc_ref(v___y_144_);
lean_inc(v___y_142_);
v___x_196_ = lean_apply_5(v___x_15274__overap_195_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, lean_box(0));
return v___x_196_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2___boxed(lean_object* v_msg_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(v_msg_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec(v___y_204_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(lean_object* v_fst_210_, lean_object* v_____r_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v_fst_210_);
lean_ctor_set(v___x_217_, 1, v___y_213_);
v___x_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0___boxed(lean_object* v_fst_219_, lean_object* v_____r_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(v_fst_219_, v_____r_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
lean_dec(v___y_221_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(lean_object* v___f_227_, lean_object* v_bidx_228_, lean_object* v_n_229_, lean_object* v_binderType_230_, lean_object* v_body_231_, uint8_t v_binderInfo_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_box(0);
v___x_239_ = l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(v_bidx_228_, v_n_229_, v___y_234_);
lean_inc(v___y_236_);
lean_inc_ref(v___y_235_);
lean_inc(v___y_233_);
v___x_240_ = lean_apply_6(v___f_227_, v___x_238_, v___y_233_, v___x_239_, v___y_235_, v___y_236_, lean_box(0));
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1___boxed(lean_object* v___f_241_, lean_object* v_bidx_242_, lean_object* v_n_243_, lean_object* v_binderType_244_, lean_object* v_body_245_, lean_object* v_binderInfo_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
uint8_t v_binderInfo_15848__boxed_252_; lean_object* v_res_253_; 
v_binderInfo_15848__boxed_252_ = lean_unbox(v_binderInfo_246_);
v_res_253_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(v___f_241_, v_bidx_242_, v_n_243_, v_binderType_244_, v_body_245_, v_binderInfo_15848__boxed_252_, v___y_247_, v___y_248_, v___y_249_, v___y_250_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_247_);
lean_dec_ref(v_body_245_);
lean_dec_ref(v_binderType_244_);
lean_dec(v_bidx_242_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_x_254_, lean_object* v_x_255_){
_start:
{
if (lean_obj_tag(v_x_255_) == 0)
{
return v_x_254_;
}
else
{
lean_object* v_key_256_; lean_object* v_value_257_; lean_object* v_tail_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_281_; 
v_key_256_ = lean_ctor_get(v_x_255_, 0);
v_value_257_ = lean_ctor_get(v_x_255_, 1);
v_tail_258_ = lean_ctor_get(v_x_255_, 2);
v_isSharedCheck_281_ = !lean_is_exclusive(v_x_255_);
if (v_isSharedCheck_281_ == 0)
{
v___x_260_ = v_x_255_;
v_isShared_261_ = v_isSharedCheck_281_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_tail_258_);
lean_inc(v_value_257_);
lean_inc(v_key_256_);
lean_dec(v_x_255_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_281_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; uint64_t v___x_263_; uint64_t v___x_264_; uint64_t v___x_265_; uint64_t v_fold_266_; uint64_t v___x_267_; uint64_t v___x_268_; uint64_t v___x_269_; size_t v___x_270_; size_t v___x_271_; size_t v___x_272_; size_t v___x_273_; size_t v___x_274_; lean_object* v___x_275_; lean_object* v___x_277_; 
v___x_262_ = lean_array_get_size(v_x_254_);
v___x_263_ = l_Lean_ExprStructEq_hash(v_key_256_);
v___x_264_ = 32ULL;
v___x_265_ = lean_uint64_shift_right(v___x_263_, v___x_264_);
v_fold_266_ = lean_uint64_xor(v___x_263_, v___x_265_);
v___x_267_ = 16ULL;
v___x_268_ = lean_uint64_shift_right(v_fold_266_, v___x_267_);
v___x_269_ = lean_uint64_xor(v_fold_266_, v___x_268_);
v___x_270_ = lean_uint64_to_usize(v___x_269_);
v___x_271_ = lean_usize_of_nat(v___x_262_);
v___x_272_ = ((size_t)1ULL);
v___x_273_ = lean_usize_sub(v___x_271_, v___x_272_);
v___x_274_ = lean_usize_land(v___x_270_, v___x_273_);
v___x_275_ = lean_array_uget_borrowed(v_x_254_, v___x_274_);
lean_inc(v___x_275_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 2, v___x_275_);
v___x_277_ = v___x_260_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_key_256_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v_value_257_);
lean_ctor_set(v_reuseFailAlloc_280_, 2, v___x_275_);
v___x_277_ = v_reuseFailAlloc_280_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
lean_object* v___x_278_; 
v___x_278_ = lean_array_uset(v_x_254_, v___x_274_, v___x_277_);
v_x_254_ = v___x_278_;
v_x_255_ = v_tail_258_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(lean_object* v_i_282_, lean_object* v_source_283_, lean_object* v_target_284_){
_start:
{
lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_285_ = lean_array_get_size(v_source_283_);
v___x_286_ = lean_nat_dec_lt(v_i_282_, v___x_285_);
if (v___x_286_ == 0)
{
lean_dec_ref(v_source_283_);
lean_dec(v_i_282_);
return v_target_284_;
}
else
{
lean_object* v_es_287_; lean_object* v___x_288_; lean_object* v_source_289_; lean_object* v_target_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_es_287_ = lean_array_fget(v_source_283_, v_i_282_);
v___x_288_ = lean_box(0);
v_source_289_ = lean_array_fset(v_source_283_, v_i_282_, v___x_288_);
v_target_290_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(v_target_284_, v_es_287_);
v___x_291_ = lean_unsigned_to_nat(1u);
v___x_292_ = lean_nat_add(v_i_282_, v___x_291_);
lean_dec(v_i_282_);
v_i_282_ = v___x_292_;
v_source_283_ = v_source_289_;
v_target_284_ = v_target_290_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(lean_object* v_data_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v_nbuckets_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_295_ = lean_array_get_size(v_data_294_);
v___x_296_ = lean_unsigned_to_nat(2u);
v_nbuckets_297_ = lean_nat_mul(v___x_295_, v___x_296_);
v___x_298_ = lean_unsigned_to_nat(0u);
v___x_299_ = lean_box(0);
v___x_300_ = lean_mk_array(v_nbuckets_297_, v___x_299_);
v___x_301_ = lean_array_propagate_mark(v_data_294_, v___x_300_);
v___x_302_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(v___x_298_, v_data_294_, v___x_301_);
return v___x_302_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(lean_object* v_a_303_, lean_object* v_x_304_){
_start:
{
if (lean_obj_tag(v_x_304_) == 0)
{
uint8_t v___x_305_; 
v___x_305_ = 0;
return v___x_305_;
}
else
{
lean_object* v_key_306_; lean_object* v_tail_307_; uint8_t v___x_308_; 
v_key_306_ = lean_ctor_get(v_x_304_, 0);
v_tail_307_ = lean_ctor_get(v_x_304_, 2);
v___x_308_ = l_Lean_ExprStructEq_beq(v_key_306_, v_a_303_);
if (v___x_308_ == 0)
{
v_x_304_ = v_tail_307_;
goto _start;
}
else
{
return v___x_308_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_310_, lean_object* v_x_311_){
_start:
{
uint8_t v_res_312_; lean_object* v_r_313_; 
v_res_312_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(v_a_310_, v_x_311_);
lean_dec(v_x_311_);
lean_dec_ref(v_a_310_);
v_r_313_ = lean_box(v_res_312_);
return v_r_313_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(lean_object* v_a_314_, lean_object* v_b_315_, lean_object* v_x_316_){
_start:
{
if (lean_obj_tag(v_x_316_) == 0)
{
lean_dec(v_b_315_);
lean_dec_ref(v_a_314_);
return v_x_316_;
}
else
{
lean_object* v_key_317_; lean_object* v_value_318_; lean_object* v_tail_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_331_; 
v_key_317_ = lean_ctor_get(v_x_316_, 0);
v_value_318_ = lean_ctor_get(v_x_316_, 1);
v_tail_319_ = lean_ctor_get(v_x_316_, 2);
v_isSharedCheck_331_ = !lean_is_exclusive(v_x_316_);
if (v_isSharedCheck_331_ == 0)
{
v___x_321_ = v_x_316_;
v_isShared_322_ = v_isSharedCheck_331_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_tail_319_);
lean_inc(v_value_318_);
lean_inc(v_key_317_);
lean_dec(v_x_316_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_331_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
uint8_t v___x_323_; 
v___x_323_ = l_Lean_ExprStructEq_beq(v_key_317_, v_a_314_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; lean_object* v___x_326_; 
v___x_324_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(v_a_314_, v_b_315_, v_tail_319_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 2, v___x_324_);
v___x_326_ = v___x_321_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_key_317_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_value_318_);
lean_ctor_set(v_reuseFailAlloc_327_, 2, v___x_324_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
else
{
lean_object* v___x_329_; 
lean_dec(v_value_318_);
lean_dec(v_key_317_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 1, v_b_315_);
lean_ctor_set(v___x_321_, 0, v_a_314_);
v___x_329_ = v___x_321_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_314_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_b_315_);
lean_ctor_set(v_reuseFailAlloc_330_, 2, v_tail_319_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(lean_object* v_m_332_, lean_object* v_a_333_, lean_object* v_b_334_){
_start:
{
lean_object* v_size_335_; lean_object* v_buckets_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_379_; 
v_size_335_ = lean_ctor_get(v_m_332_, 0);
v_buckets_336_ = lean_ctor_get(v_m_332_, 1);
v_isSharedCheck_379_ = !lean_is_exclusive(v_m_332_);
if (v_isSharedCheck_379_ == 0)
{
v___x_338_ = v_m_332_;
v_isShared_339_ = v_isSharedCheck_379_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_buckets_336_);
lean_inc(v_size_335_);
lean_dec(v_m_332_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_379_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; uint64_t v___x_341_; uint64_t v___x_342_; uint64_t v___x_343_; uint64_t v_fold_344_; uint64_t v___x_345_; uint64_t v___x_346_; uint64_t v___x_347_; size_t v___x_348_; size_t v___x_349_; size_t v___x_350_; size_t v___x_351_; size_t v___x_352_; lean_object* v_bkt_353_; uint8_t v___x_354_; 
v___x_340_ = lean_array_get_size(v_buckets_336_);
v___x_341_ = l_Lean_ExprStructEq_hash(v_a_333_);
v___x_342_ = 32ULL;
v___x_343_ = lean_uint64_shift_right(v___x_341_, v___x_342_);
v_fold_344_ = lean_uint64_xor(v___x_341_, v___x_343_);
v___x_345_ = 16ULL;
v___x_346_ = lean_uint64_shift_right(v_fold_344_, v___x_345_);
v___x_347_ = lean_uint64_xor(v_fold_344_, v___x_346_);
v___x_348_ = lean_uint64_to_usize(v___x_347_);
v___x_349_ = lean_usize_of_nat(v___x_340_);
v___x_350_ = ((size_t)1ULL);
v___x_351_ = lean_usize_sub(v___x_349_, v___x_350_);
v___x_352_ = lean_usize_land(v___x_348_, v___x_351_);
v_bkt_353_ = lean_array_uget_borrowed(v_buckets_336_, v___x_352_);
v___x_354_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(v_a_333_, v_bkt_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v_size_x27_356_; lean_object* v___x_357_; lean_object* v_buckets_x27_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_355_ = lean_unsigned_to_nat(1u);
v_size_x27_356_ = lean_nat_add(v_size_335_, v___x_355_);
lean_dec(v_size_335_);
lean_inc(v_bkt_353_);
v___x_357_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_357_, 0, v_a_333_);
lean_ctor_set(v___x_357_, 1, v_b_334_);
lean_ctor_set(v___x_357_, 2, v_bkt_353_);
v_buckets_x27_358_ = lean_array_uset(v_buckets_336_, v___x_352_, v___x_357_);
v___x_359_ = lean_unsigned_to_nat(4u);
v___x_360_ = lean_nat_mul(v_size_x27_356_, v___x_359_);
v___x_361_ = lean_unsigned_to_nat(3u);
v___x_362_ = lean_nat_div(v___x_360_, v___x_361_);
lean_dec(v___x_360_);
v___x_363_ = lean_array_get_size(v_buckets_x27_358_);
v___x_364_ = lean_nat_dec_le(v___x_362_, v___x_363_);
lean_dec(v___x_362_);
if (v___x_364_ == 0)
{
lean_object* v_val_365_; lean_object* v___x_367_; 
v_val_365_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(v_buckets_x27_358_);
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 1, v_val_365_);
lean_ctor_set(v___x_338_, 0, v_size_x27_356_);
v___x_367_ = v___x_338_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_size_x27_356_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_val_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
else
{
lean_object* v___x_370_; 
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 1, v_buckets_x27_358_);
lean_ctor_set(v___x_338_, 0, v_size_x27_356_);
v___x_370_ = v___x_338_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_size_x27_356_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_buckets_x27_358_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
else
{
lean_object* v___x_372_; lean_object* v_buckets_x27_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_377_; 
lean_inc(v_bkt_353_);
v___x_372_ = lean_box(0);
v_buckets_x27_373_ = lean_array_uset(v_buckets_336_, v___x_352_, v___x_372_);
v___x_374_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(v_a_333_, v_b_334_, v_bkt_353_);
v___x_375_ = lean_array_uset(v_buckets_x27_373_, v___x_352_, v___x_374_);
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 1, v___x_375_);
v___x_377_ = v___x_338_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_size_335_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v___x_375_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(lean_object* v_a_380_, lean_object* v_x_381_){
_start:
{
if (lean_obj_tag(v_x_381_) == 0)
{
lean_object* v___x_382_; 
v___x_382_ = lean_box(0);
return v___x_382_;
}
else
{
lean_object* v_key_383_; lean_object* v_value_384_; lean_object* v_tail_385_; uint8_t v___x_386_; 
v_key_383_ = lean_ctor_get(v_x_381_, 0);
v_value_384_ = lean_ctor_get(v_x_381_, 1);
v_tail_385_ = lean_ctor_get(v_x_381_, 2);
v___x_386_ = l_Lean_ExprStructEq_beq(v_key_383_, v_a_380_);
if (v___x_386_ == 0)
{
v_x_381_ = v_tail_385_;
goto _start;
}
else
{
lean_object* v___x_388_; 
lean_inc(v_value_384_);
v___x_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_388_, 0, v_value_384_);
return v___x_388_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg___boxed(lean_object* v_a_389_, lean_object* v_x_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(v_a_389_, v_x_390_);
lean_dec(v_x_390_);
lean_dec_ref(v_a_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(lean_object* v_m_392_, lean_object* v_a_393_){
_start:
{
lean_object* v_buckets_394_; lean_object* v___x_395_; uint64_t v___x_396_; uint64_t v___x_397_; uint64_t v___x_398_; uint64_t v_fold_399_; uint64_t v___x_400_; uint64_t v___x_401_; uint64_t v___x_402_; size_t v___x_403_; size_t v___x_404_; size_t v___x_405_; size_t v___x_406_; size_t v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v_buckets_394_ = lean_ctor_get(v_m_392_, 1);
v___x_395_ = lean_array_get_size(v_buckets_394_);
v___x_396_ = l_Lean_ExprStructEq_hash(v_a_393_);
v___x_397_ = 32ULL;
v___x_398_ = lean_uint64_shift_right(v___x_396_, v___x_397_);
v_fold_399_ = lean_uint64_xor(v___x_396_, v___x_398_);
v___x_400_ = 16ULL;
v___x_401_ = lean_uint64_shift_right(v_fold_399_, v___x_400_);
v___x_402_ = lean_uint64_xor(v_fold_399_, v___x_401_);
v___x_403_ = lean_uint64_to_usize(v___x_402_);
v___x_404_ = lean_usize_of_nat(v___x_395_);
v___x_405_ = ((size_t)1ULL);
v___x_406_ = lean_usize_sub(v___x_404_, v___x_405_);
v___x_407_ = lean_usize_land(v___x_403_, v___x_406_);
v___x_408_ = lean_array_uget_borrowed(v_buckets_394_, v___x_407_);
v___x_409_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(v_a_393_, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg___boxed(lean_object* v_m_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(v_m_410_, v_a_411_);
lean_dec_ref(v_a_411_);
lean_dec_ref(v_m_410_);
return v_res_412_;
}
}
static lean_object* _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_415_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__1));
v___x_416_ = lean_unsigned_to_nat(10u);
v___x_417_ = lean_unsigned_to_nat(72u);
v___x_418_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__0));
v___x_419_ = ((lean_object*)(l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope___closed__0));
v___x_420_ = l_mkPanicMessageWithDecl(v___x_419_, v___x_418_, v___x_417_, v___x_416_, v___x_415_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(lean_object* v_e_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_a_428_; lean_object* v_fst_429_; lean_object* v___y_435_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = lean_box(0);
v___x_439_ = lean_st_ref_get(v___y_422_);
v___x_440_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(v___x_439_, v_e_421_);
lean_dec(v___x_439_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v___x_441_; lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_441_ = ((lean_object*)(l_Lean_Expr_hasBinderNameHint___lam__0___closed__1));
v___x_442_ = lean_unsigned_to_nat(6u);
v___x_443_ = l_Lean_Expr_isAppOfArity(v_e_421_, v___x_441_, v___x_442_);
if (v___x_443_ == 0)
{
switch(lean_obj_tag(v_e_421_))
{
case 7:
{
lean_object* v_binderName_444_; lean_object* v_binderType_445_; lean_object* v_body_446_; uint8_t v_binderInfo_447_; lean_object* v___x_448_; 
v_binderName_444_ = lean_ctor_get(v_e_421_, 0);
v_binderType_445_ = lean_ctor_get(v_e_421_, 1);
v_body_446_ = lean_ctor_get(v_e_421_, 2);
v_binderInfo_447_ = lean_ctor_get_uint8(v_e_421_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_445_);
v___x_448_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_binderType_445_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v_fst_450_; lean_object* v_snd_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref_known(v___x_448_, 1);
v_fst_450_ = lean_ctor_get(v_a_449_, 0);
lean_inc(v_fst_450_);
v_snd_451_ = lean_ctor_get(v_a_449_, 1);
lean_inc(v_snd_451_);
lean_dec(v_a_449_);
lean_inc(v_binderName_444_);
v___x_452_ = lean_array_push(v_snd_451_, v_binderName_444_);
lean_inc_ref(v_body_446_);
v___x_453_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_body_446_, v___y_422_, v___x_452_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v_a_454_; lean_object* v_fst_455_; lean_object* v_snd_456_; lean_object* v___x_457_; lean_object* v_fst_458_; lean_object* v_snd_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_467_; 
v_a_454_ = lean_ctor_get(v___x_453_, 0);
lean_inc(v_a_454_);
lean_dec_ref_known(v___x_453_, 1);
v_fst_455_ = lean_ctor_get(v_a_454_, 0);
lean_inc(v_fst_455_);
v_snd_456_ = lean_ctor_get(v_a_454_, 1);
lean_inc(v_snd_456_);
lean_dec(v_a_454_);
v___x_457_ = l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(v_snd_456_);
v_fst_458_ = lean_ctor_get(v___x_457_, 0);
v_snd_459_ = lean_ctor_get(v___x_457_, 1);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_467_ == 0)
{
v___x_461_ = v___x_457_;
v_isShared_462_ = v_isSharedCheck_467_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_snd_459_);
lean_inc(v_fst_458_);
lean_dec(v___x_457_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_467_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_463_ = l_Lean_Expr_forallE___override(v_fst_458_, v_fst_450_, v_fst_455_, v_binderInfo_447_);
lean_inc_ref(v___x_463_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 0, v___x_463_);
v___x_465_ = v___x_461_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_463_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_snd_459_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
v_a_428_ = v___x_465_;
v_fst_429_ = v___x_463_;
goto v___jp_427_;
}
}
}
else
{
lean_dec(v_fst_450_);
v___y_435_ = v___x_453_;
goto v___jp_434_;
}
}
else
{
v___y_435_ = v___x_448_;
goto v___jp_434_;
}
}
case 6:
{
lean_object* v_binderName_468_; lean_object* v_binderType_469_; lean_object* v_body_470_; uint8_t v_binderInfo_471_; lean_object* v___x_472_; 
v_binderName_468_ = lean_ctor_get(v_e_421_, 0);
v_binderType_469_ = lean_ctor_get(v_e_421_, 1);
v_body_470_ = lean_ctor_get(v_e_421_, 2);
v_binderInfo_471_ = lean_ctor_get_uint8(v_e_421_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_469_);
v___x_472_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_binderType_469_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v_fst_474_; lean_object* v_snd_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_472_, 1);
v_fst_474_ = lean_ctor_get(v_a_473_, 0);
lean_inc(v_fst_474_);
v_snd_475_ = lean_ctor_get(v_a_473_, 1);
lean_inc(v_snd_475_);
lean_dec(v_a_473_);
lean_inc(v_binderName_468_);
v___x_476_ = lean_array_push(v_snd_475_, v_binderName_468_);
lean_inc_ref(v_body_470_);
v___x_477_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_body_470_, v___y_422_, v___x_476_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; lean_object* v_fst_479_; lean_object* v_snd_480_; lean_object* v___x_481_; lean_object* v_fst_482_; lean_object* v_snd_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_491_; 
v_a_478_ = lean_ctor_get(v___x_477_, 0);
lean_inc(v_a_478_);
lean_dec_ref_known(v___x_477_, 1);
v_fst_479_ = lean_ctor_get(v_a_478_, 0);
lean_inc(v_fst_479_);
v_snd_480_ = lean_ctor_get(v_a_478_, 1);
lean_inc(v_snd_480_);
lean_dec(v_a_478_);
v___x_481_ = l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(v_snd_480_);
v_fst_482_ = lean_ctor_get(v___x_481_, 0);
v_snd_483_ = lean_ctor_get(v___x_481_, 1);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_491_ == 0)
{
v___x_485_ = v___x_481_;
v_isShared_486_ = v_isSharedCheck_491_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_snd_483_);
lean_inc(v_fst_482_);
lean_dec(v___x_481_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_491_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_487_; lean_object* v___x_489_; 
v___x_487_ = l_Lean_Expr_lam___override(v_fst_482_, v_fst_474_, v_fst_479_, v_binderInfo_471_);
lean_inc_ref(v___x_487_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v___x_487_);
v___x_489_ = v___x_485_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_490_, 1, v_snd_483_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
v_a_428_ = v___x_489_;
v_fst_429_ = v___x_487_;
goto v___jp_427_;
}
}
}
else
{
lean_dec(v_fst_474_);
v___y_435_ = v___x_477_;
goto v___jp_434_;
}
}
else
{
v___y_435_ = v___x_472_;
goto v___jp_434_;
}
}
case 8:
{
lean_object* v_declName_492_; lean_object* v_type_493_; lean_object* v_value_494_; lean_object* v_body_495_; uint8_t v_nondep_496_; lean_object* v___x_497_; 
v_declName_492_ = lean_ctor_get(v_e_421_, 0);
v_type_493_ = lean_ctor_get(v_e_421_, 1);
v_value_494_ = lean_ctor_get(v_e_421_, 2);
v_body_495_ = lean_ctor_get(v_e_421_, 3);
v_nondep_496_ = lean_ctor_get_uint8(v_e_421_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_493_);
v___x_497_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_type_493_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; lean_object* v_fst_499_; lean_object* v_snd_500_; lean_object* v___x_501_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_a_498_);
lean_dec_ref_known(v___x_497_, 1);
v_fst_499_ = lean_ctor_get(v_a_498_, 0);
lean_inc(v_fst_499_);
v_snd_500_ = lean_ctor_get(v_a_498_, 1);
lean_inc(v_snd_500_);
lean_dec(v_a_498_);
lean_inc_ref(v_value_494_);
v___x_501_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_value_494_, v___y_422_, v_snd_500_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v_fst_503_; lean_object* v_snd_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
v_fst_503_ = lean_ctor_get(v_a_502_, 0);
lean_inc(v_fst_503_);
v_snd_504_ = lean_ctor_get(v_a_502_, 1);
lean_inc(v_snd_504_);
lean_dec(v_a_502_);
lean_inc(v_declName_492_);
v___x_505_ = lean_array_push(v_snd_504_, v_declName_492_);
lean_inc_ref(v_body_495_);
v___x_506_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_body_495_, v___y_422_, v___x_505_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v_fst_508_; lean_object* v_snd_509_; lean_object* v___x_510_; lean_object* v_fst_511_; lean_object* v_snd_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_520_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_507_);
lean_dec_ref_known(v___x_506_, 1);
v_fst_508_ = lean_ctor_get(v_a_507_, 0);
lean_inc(v_fst_508_);
v_snd_509_ = lean_ctor_get(v_a_507_, 1);
lean_inc(v_snd_509_);
lean_dec(v_a_507_);
v___x_510_ = l___private_Lean_Meta_BinderNameHint_0__Lean_exitScope(v_snd_509_);
v_fst_511_ = lean_ctor_get(v___x_510_, 0);
v_snd_512_ = lean_ctor_get(v___x_510_, 1);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_520_ == 0)
{
v___x_514_ = v___x_510_;
v_isShared_515_ = v_isSharedCheck_520_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_snd_512_);
lean_inc(v_fst_511_);
lean_dec(v___x_510_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_520_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v___x_518_; 
v___x_516_ = l_Lean_Expr_letE___override(v_fst_511_, v_fst_499_, v_fst_503_, v_fst_508_, v_nondep_496_);
lean_inc_ref(v___x_516_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_516_);
v___x_518_ = v___x_514_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v___x_516_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_snd_512_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
v_a_428_ = v___x_518_;
v_fst_429_ = v___x_516_;
goto v___jp_427_;
}
}
}
else
{
lean_dec(v_fst_503_);
lean_dec(v_fst_499_);
v___y_435_ = v___x_506_;
goto v___jp_434_;
}
}
else
{
lean_dec(v_fst_499_);
v___y_435_ = v___x_501_;
goto v___jp_434_;
}
}
else
{
v___y_435_ = v___x_497_;
goto v___jp_434_;
}
}
case 5:
{
lean_object* v_fn_521_; lean_object* v_arg_522_; lean_object* v___x_523_; 
v_fn_521_ = lean_ctor_get(v_e_421_, 0);
v_arg_522_ = lean_ctor_get(v_e_421_, 1);
lean_inc_ref(v_fn_521_);
v___x_523_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_fn_521_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; lean_object* v_fst_525_; lean_object* v_snd_526_; lean_object* v___x_527_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_a_524_);
lean_dec_ref_known(v___x_523_, 1);
v_fst_525_ = lean_ctor_get(v_a_524_, 0);
lean_inc(v_fst_525_);
v_snd_526_ = lean_ctor_get(v_a_524_, 1);
lean_inc(v_snd_526_);
lean_dec(v_a_524_);
lean_inc_ref(v_arg_522_);
v___x_527_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_arg_522_, v___y_422_, v_snd_526_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v_fst_529_; lean_object* v_snd_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_547_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v___x_527_, 1);
v_fst_529_ = lean_ctor_get(v_a_528_, 0);
v_snd_530_ = lean_ctor_get(v_a_528_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v_a_528_);
if (v_isSharedCheck_547_ == 0)
{
v___x_532_ = v_a_528_;
v_isShared_533_ = v_isSharedCheck_547_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_snd_530_);
lean_inc(v_fst_529_);
lean_dec(v_a_528_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_547_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___y_535_; size_t v___x_539_; size_t v___x_540_; uint8_t v___x_541_; 
v___x_539_ = lean_ptr_addr(v_fn_521_);
v___x_540_ = lean_ptr_addr(v_fst_525_);
v___x_541_ = lean_usize_dec_eq(v___x_539_, v___x_540_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_Expr_app___override(v_fst_525_, v_fst_529_);
v___y_535_ = v___x_542_;
goto v___jp_534_;
}
else
{
size_t v___x_543_; size_t v___x_544_; uint8_t v___x_545_; 
v___x_543_ = lean_ptr_addr(v_arg_522_);
v___x_544_ = lean_ptr_addr(v_fst_529_);
v___x_545_ = lean_usize_dec_eq(v___x_543_, v___x_544_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
v___x_546_ = l_Lean_Expr_app___override(v_fst_525_, v_fst_529_);
v___y_535_ = v___x_546_;
goto v___jp_534_;
}
else
{
lean_dec(v_fst_529_);
lean_dec(v_fst_525_);
lean_inc_ref(v_e_421_);
v___y_535_ = v_e_421_;
goto v___jp_534_;
}
}
v___jp_534_:
{
lean_object* v___x_537_; 
lean_inc_ref(v___y_535_);
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 0, v___y_535_);
v___x_537_ = v___x_532_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___y_535_);
lean_ctor_set(v_reuseFailAlloc_538_, 1, v_snd_530_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
v_a_428_ = v___x_537_;
v_fst_429_ = v___y_535_;
goto v___jp_427_;
}
}
}
}
else
{
lean_dec(v_fst_525_);
v___y_435_ = v___x_527_;
goto v___jp_434_;
}
}
else
{
v___y_435_ = v___x_523_;
goto v___jp_434_;
}
}
case 10:
{
lean_object* v_data_548_; lean_object* v_expr_549_; lean_object* v___x_550_; 
v_data_548_ = lean_ctor_get(v_e_421_, 0);
v_expr_549_ = lean_ctor_get(v_e_421_, 1);
lean_inc_ref(v_expr_549_);
v___x_550_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_expr_549_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; lean_object* v_fst_552_; lean_object* v_snd_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_566_; 
v_a_551_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_a_551_);
lean_dec_ref_known(v___x_550_, 1);
v_fst_552_ = lean_ctor_get(v_a_551_, 0);
v_snd_553_ = lean_ctor_get(v_a_551_, 1);
v_isSharedCheck_566_ = !lean_is_exclusive(v_a_551_);
if (v_isSharedCheck_566_ == 0)
{
v___x_555_ = v_a_551_;
v_isShared_556_ = v_isSharedCheck_566_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_snd_553_);
lean_inc(v_fst_552_);
lean_dec(v_a_551_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_566_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___y_558_; size_t v___x_562_; size_t v___x_563_; uint8_t v___x_564_; 
v___x_562_ = lean_ptr_addr(v_expr_549_);
v___x_563_ = lean_ptr_addr(v_fst_552_);
v___x_564_ = lean_usize_dec_eq(v___x_562_, v___x_563_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; 
lean_inc(v_data_548_);
v___x_565_ = l_Lean_Expr_mdata___override(v_data_548_, v_fst_552_);
v___y_558_ = v___x_565_;
goto v___jp_557_;
}
else
{
lean_dec(v_fst_552_);
lean_inc_ref(v_e_421_);
v___y_558_ = v_e_421_;
goto v___jp_557_;
}
v___jp_557_:
{
lean_object* v___x_560_; 
lean_inc_ref(v___y_558_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___y_558_);
v___x_560_ = v___x_555_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___y_558_);
lean_ctor_set(v_reuseFailAlloc_561_, 1, v_snd_553_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
v_a_428_ = v___x_560_;
v_fst_429_ = v___y_558_;
goto v___jp_427_;
}
}
}
}
else
{
v___y_435_ = v___x_550_;
goto v___jp_434_;
}
}
case 11:
{
lean_object* v_typeName_567_; lean_object* v_idx_568_; lean_object* v_struct_569_; lean_object* v___x_570_; 
v_typeName_567_ = lean_ctor_get(v_e_421_, 0);
v_idx_568_ = lean_ctor_get(v_e_421_, 1);
v_struct_569_ = lean_ctor_get(v_e_421_, 2);
lean_inc_ref(v_struct_569_);
v___x_570_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_struct_569_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v_fst_572_; lean_object* v_snd_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_586_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v___x_570_, 1);
v_fst_572_ = lean_ctor_get(v_a_571_, 0);
v_snd_573_ = lean_ctor_get(v_a_571_, 1);
v_isSharedCheck_586_ = !lean_is_exclusive(v_a_571_);
if (v_isSharedCheck_586_ == 0)
{
v___x_575_ = v_a_571_;
v_isShared_576_ = v_isSharedCheck_586_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_snd_573_);
lean_inc(v_fst_572_);
lean_dec(v_a_571_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_586_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___y_578_; size_t v___x_582_; size_t v___x_583_; uint8_t v___x_584_; 
v___x_582_ = lean_ptr_addr(v_struct_569_);
v___x_583_ = lean_ptr_addr(v_fst_572_);
v___x_584_ = lean_usize_dec_eq(v___x_582_, v___x_583_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; 
lean_inc(v_idx_568_);
lean_inc(v_typeName_567_);
v___x_585_ = l_Lean_Expr_proj___override(v_typeName_567_, v_idx_568_, v_fst_572_);
v___y_578_ = v___x_585_;
goto v___jp_577_;
}
else
{
lean_dec(v_fst_572_);
lean_inc_ref(v_e_421_);
v___y_578_ = v_e_421_;
goto v___jp_577_;
}
v___jp_577_:
{
lean_object* v___x_580_; 
lean_inc_ref(v___y_578_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___y_578_);
v___x_580_ = v___x_575_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___y_578_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_snd_573_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
v_a_428_ = v___x_580_;
v_fst_429_ = v___y_578_;
goto v___jp_427_;
}
}
}
}
else
{
v___y_435_ = v___x_570_;
goto v___jp_434_;
}
}
default: 
{
lean_object* v___x_587_; 
lean_inc_ref_n(v_e_421_, 2);
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v_e_421_);
lean_ctor_set(v___x_587_, 1, v___y_423_);
v_a_428_ = v___x_587_;
v_fst_429_ = v_e_421_;
goto v___jp_427_;
}
}
}
else
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v_v_590_; lean_object* v_b_591_; lean_object* v_e_592_; lean_object* v___x_593_; 
v___x_588_ = l_Lean_Expr_appFn_x21(v_e_421_);
v___x_589_ = l_Lean_Expr_appFn_x21(v___x_588_);
v_v_590_ = l_Lean_Expr_appArg_x21(v___x_589_);
lean_dec_ref(v___x_589_);
v_b_591_ = l_Lean_Expr_appArg_x21(v___x_588_);
lean_dec_ref(v___x_588_);
v_e_592_ = l_Lean_Expr_appArg_x21(v_e_421_);
v___x_593_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_e_592_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v_fst_595_; lean_object* v_snd_596_; lean_object* v___f_597_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_593_, 1);
v_fst_595_ = lean_ctor_get(v_a_594_, 0);
lean_inc_n(v_fst_595_, 2);
v_snd_596_ = lean_ctor_get(v_a_594_, 1);
lean_inc(v_snd_596_);
lean_dec(v_a_594_);
v___f_597_ = lean_alloc_closure((void*)(l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0___boxed), 7, 1);
lean_closure_set(v___f_597_, 0, v_fst_595_);
if (lean_obj_tag(v_v_590_) == 0)
{
lean_object* v_deBruijnIndex_598_; lean_object* v___x_599_; 
v_deBruijnIndex_598_ = lean_ctor_get(v_v_590_, 0);
lean_inc(v_deBruijnIndex_598_);
lean_dec_ref_known(v_v_590_, 1);
v___x_599_ = l_Lean_Expr_headBeta(v_b_591_);
switch(lean_obj_tag(v___x_599_))
{
case 6:
{
lean_object* v_binderName_600_; lean_object* v_binderType_601_; lean_object* v_body_602_; uint8_t v_binderInfo_603_; lean_object* v___x_604_; 
lean_dec(v_fst_595_);
v_binderName_600_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_binderName_600_);
v_binderType_601_ = lean_ctor_get(v___x_599_, 1);
lean_inc_ref(v_binderType_601_);
v_body_602_ = lean_ctor_get(v___x_599_, 2);
lean_inc_ref(v_body_602_);
v_binderInfo_603_ = lean_ctor_get_uint8(v___x_599_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_599_, 3);
v___x_604_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(v___f_597_, v_deBruijnIndex_598_, v_binderName_600_, v_binderType_601_, v_body_602_, v_binderInfo_603_, v___y_422_, v_snd_596_, v___y_424_, v___y_425_);
lean_dec_ref(v_body_602_);
lean_dec_ref(v_binderType_601_);
lean_dec(v_deBruijnIndex_598_);
v___y_435_ = v___x_604_;
goto v___jp_434_;
}
case 7:
{
lean_object* v_binderName_605_; lean_object* v_binderType_606_; lean_object* v_body_607_; uint8_t v_binderInfo_608_; lean_object* v___x_609_; 
lean_dec(v_fst_595_);
v_binderName_605_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_binderName_605_);
v_binderType_606_ = lean_ctor_get(v___x_599_, 1);
lean_inc_ref(v_binderType_606_);
v_body_607_ = lean_ctor_get(v___x_599_, 2);
lean_inc_ref(v_body_607_);
v_binderInfo_608_ = lean_ctor_get_uint8(v___x_599_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_599_, 3);
v___x_609_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__1(v___f_597_, v_deBruijnIndex_598_, v_binderName_605_, v_binderType_606_, v_body_607_, v_binderInfo_608_, v___y_422_, v_snd_596_, v___y_424_, v___y_425_);
lean_dec_ref(v_body_607_);
lean_dec_ref(v_binderType_606_);
lean_dec(v_deBruijnIndex_598_);
v___y_435_ = v___x_609_;
goto v___jp_434_;
}
default: 
{
lean_object* v___x_610_; uint8_t v___x_611_; 
lean_dec_ref(v___x_599_);
lean_dec_ref(v___f_597_);
v___x_610_ = lean_array_get_size(v_snd_596_);
v___x_611_ = lean_nat_dec_lt(v_deBruijnIndex_598_, v___x_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; 
lean_dec(v_deBruijnIndex_598_);
lean_dec(v_fst_595_);
v___x_612_ = lean_obj_once(&l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2, &l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2_once, _init_l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___closed__2);
v___x_613_ = l_panic___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__2(v___x_612_, v___y_422_, v_snd_596_, v___y_424_, v___y_425_);
v___y_435_ = v___x_613_;
goto v___jp_434_;
}
else
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_614_ = lean_nat_sub(v___x_610_, v_deBruijnIndex_598_);
v___x_615_ = lean_unsigned_to_nat(1u);
v___x_616_ = lean_nat_sub(v___x_614_, v___x_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_array_get_borrowed(v___x_438_, v_snd_596_, v___x_616_);
lean_dec(v___x_616_);
lean_inc(v___x_617_);
v___x_618_ = l_Lean_Core_mkFreshUserName(v___x_617_, v___y_424_, v___y_425_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_object* v_a_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v_a_619_ = lean_ctor_get(v___x_618_, 0);
lean_inc(v_a_619_);
lean_dec_ref_known(v___x_618_, 1);
v___x_620_ = lean_box(0);
v___x_621_ = l___private_Lean_Meta_BinderNameHint_0__Lean_rememberName(v_deBruijnIndex_598_, v_a_619_, v_snd_596_);
lean_dec(v_deBruijnIndex_598_);
v___x_622_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(v_fst_595_, v___x_620_, v___y_422_, v___x_621_, v___y_424_, v___y_425_);
v___y_435_ = v___x_622_;
goto v___jp_434_;
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
lean_dec(v_deBruijnIndex_598_);
lean_dec(v_snd_596_);
lean_dec(v_fst_595_);
lean_dec_ref(v_e_421_);
v_a_623_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_618_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_618_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; 
lean_dec_ref(v___f_597_);
lean_dec_ref(v_b_591_);
lean_dec_ref(v_v_590_);
v___x_631_ = lean_box(0);
v___x_632_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___lam__0(v_fst_595_, v___x_631_, v___y_422_, v_snd_596_, v___y_424_, v___y_425_);
v___y_435_ = v___x_632_;
goto v___jp_434_;
}
}
else
{
lean_dec_ref(v_b_591_);
lean_dec_ref(v_v_590_);
v___y_435_ = v___x_593_;
goto v___jp_434_;
}
}
}
else
{
lean_object* v_val_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref(v_e_421_);
v_val_633_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_641_ == 0)
{
v___x_635_ = v___x_440_;
v_isShared_636_ = v_isSharedCheck_641_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_val_633_);
lean_dec(v___x_440_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_641_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v_val_633_);
lean_ctor_set(v___x_637_, 1, v___y_423_);
if (v_isShared_636_ == 0)
{
lean_ctor_set_tag(v___x_635_, 0);
lean_ctor_set(v___x_635_, 0, v___x_637_);
v___x_639_ = v___x_635_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_637_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
v___jp_427_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_430_ = lean_st_ref_take(v___y_422_);
v___x_431_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(v___x_430_, v_e_421_, v_fst_429_);
v___x_432_ = lean_st_ref_put(v___y_422_, v___x_431_);
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v_a_428_);
return v___x_433_;
}
v___jp_434_:
{
if (lean_obj_tag(v___y_435_) == 0)
{
lean_object* v_a_436_; lean_object* v_fst_437_; 
v_a_436_ = lean_ctor_get(v___y_435_, 0);
lean_inc(v_a_436_);
lean_dec_ref_known(v___y_435_, 1);
v_fst_437_ = lean_ctor_get(v_a_436_, 0);
lean_inc(v_fst_437_);
v_a_428_ = v_a_436_;
v_fst_429_ = v_fst_437_;
goto v___jp_427_;
}
else
{
lean_dec_ref(v_e_421_);
return v___y_435_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go___boxed(lean_object* v_e_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_e_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_);
lean_dec(v___y_646_);
lean_dec_ref(v___y_645_);
lean_dec(v___y_643_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0(lean_object* v_00_u03b2_649_, lean_object* v_m_650_, lean_object* v_a_651_, lean_object* v_b_652_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0___redArg(v_m_650_, v_a_651_, v_b_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1(lean_object* v_00_u03b2_654_, lean_object* v_m_655_, lean_object* v_a_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___redArg(v_m_655_, v_a_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1___boxed(lean_object* v_00_u03b2_658_, lean_object* v_m_659_, lean_object* v_a_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1(v_00_u03b2_658_, v_m_659_, v_a_660_);
lean_dec_ref(v_a_660_);
lean_dec_ref(v_m_659_);
return v_res_661_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0(lean_object* v_00_u03b2_662_, lean_object* v_a_663_, lean_object* v_x_664_){
_start:
{
uint8_t v___x_665_; 
v___x_665_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___redArg(v_a_663_, v_x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_666_, lean_object* v_a_667_, lean_object* v_x_668_){
_start:
{
uint8_t v_res_669_; lean_object* v_r_670_; 
v_res_669_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__0(v_00_u03b2_666_, v_a_667_, v_x_668_);
lean_dec(v_x_668_);
lean_dec_ref(v_a_667_);
v_r_670_ = lean_box(v_res_669_);
return v_r_670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1(lean_object* v_00_u03b2_671_, lean_object* v_data_672_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1___redArg(v_data_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2(lean_object* v_00_u03b2_674_, lean_object* v_a_675_, lean_object* v_b_676_, lean_object* v_x_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__2___redArg(v_a_675_, v_b_676_, v_x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4(lean_object* v_00_u03b2_679_, lean_object* v_a_680_, lean_object* v_x_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___redArg(v_a_680_, v_x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4___boxed(lean_object* v_00_u03b2_683_, lean_object* v_a_684_, lean_object* v_x_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__1_spec__4(v_00_u03b2_683_, v_a_684_, v_x_685_);
lean_dec(v_x_685_);
lean_dec_ref(v_a_684_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_687_, lean_object* v_i_688_, lean_object* v_source_689_, lean_object* v_target_690_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3___redArg(v_i_688_, v_source_689_, v_target_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_692_, lean_object* v_x_693_, lean_object* v_x_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go_spec__0_spec__1_spec__3_spec__5___redArg(v_x_693_, v_x_694_);
return v___x_695_;
}
}
static lean_object* _init_l_Lean_Expr_resolveBinderNameHint___closed__0(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_box(0);
v___x_697_ = lean_unsigned_to_nat(16u);
v___x_698_ = lean_mk_array(v___x_697_, v___x_696_);
return v___x_698_;
}
}
static lean_object* _init_l_Lean_Expr_resolveBinderNameHint___closed__1(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_699_ = lean_obj_once(&l_Lean_Expr_resolveBinderNameHint___closed__0, &l_Lean_Expr_resolveBinderNameHint___closed__0_once, _init_l_Lean_Expr_resolveBinderNameHint___closed__0);
v___x_700_ = lean_unsigned_to_nat(0u);
v___x_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_700_);
lean_ctor_set(v___x_701_, 1, v___x_699_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint(lean_object* v_e_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_708_ = lean_obj_once(&l_Lean_Expr_resolveBinderNameHint___closed__1, &l_Lean_Expr_resolveBinderNameHint___closed__1_once, _init_l_Lean_Expr_resolveBinderNameHint___closed__1);
v___x_709_ = ((lean_object*)(l_Lean_Expr_resolveBinderNameHint___closed__2));
v___x_710_ = lean_st_mk_ref(v___x_708_);
v___x_711_ = l___private_Lean_Meta_BinderNameHint_0__Lean_Expr_resolveBinderNameHint_go(v_e_704_, v___x_710_, v___x_709_, v___y_705_, v___y_706_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_721_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_721_ == 0)
{
v___x_714_ = v___x_711_;
v_isShared_715_ = v_isSharedCheck_721_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_711_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_721_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v_fst_716_; lean_object* v___x_717_; lean_object* v___x_719_; 
v_fst_716_ = lean_ctor_get(v_a_712_, 0);
lean_inc(v_fst_716_);
lean_dec(v_a_712_);
v___x_717_ = lean_st_ref_get(v___x_710_);
lean_dec(v___x_710_);
lean_dec(v___x_717_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v_fst_716_);
v___x_719_ = v___x_714_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_fst_716_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec(v___x_710_);
v_a_722_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_711_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_711_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_resolveBinderNameHint___boxed(lean_object* v_e_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lean_Expr_resolveBinderNameHint(v_e_730_, v___y_731_, v___y_732_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
return v_res_734_;
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
