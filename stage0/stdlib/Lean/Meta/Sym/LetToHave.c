// Lean compiler output
// Module: Lean.Meta.Sym.LetToHave
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.InferType import Lean.Meta.Sym.ReplaceS import Lean.Meta.Sym.AlphaShareBuilder
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
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_seqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Sym_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVar_x21(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaDeltaFVarIds___redArg(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_map, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_seqRight, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_bind, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "_private.Lean.Meta.Sym.ReplaceS.0.Lean.Meta.Sym.visit"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.Sym.ReplaceS"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Sym.AlphaShareBuilder"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.Sym.Internal.liftBuilderM"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "`Sym.letToHave` failed, type error"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__1;
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "\nis not definitionally equal to"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`Sym.letToHave` failed, function expected"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_isClean(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_isClean___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeFallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeFallback___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.Sym.LetToHave"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "_private.Lean.Meta.Sym.LetToHave.0.Lean.Meta.Sym.LetToHave.inferTypeO"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Meta.Sym.LetToHave.0.Lean.Meta.Sym.LetToHave.checkFun"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Meta.Sym.LetToHave.0.Lean.Meta.Sym.LetToHave.checkApp"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__1___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Meta.Sym.LetToHave.0.Lean.Meta.Sym.LetToHave.visitCore"};
static const lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_letToHave___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_letToHave___lam__2___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_letToHave___lam__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_letToHave___lam__5___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_letToHave___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_letToHave___lam__5___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_letToHave___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_letToHave___lam__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_letToHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_letToHave___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_letToHave___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_letToHave___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_letToHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "`Sym.letToHave` internal error, input term has loose bound variables"};
static const lean_object* l_Lean_Meta_Sym_letToHave___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_letToHave___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_letToHave___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_letToHave___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0(lean_object* v___y_1_, lean_object* v_visited_2_, lean_object* v_types_3_, lean_object* v_subst_4_, lean_object* v_a_x3f_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_visitedClosed_8_; lean_object* v_hasDepLetCache_9_; lean_object* v_numConverted_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_20_; 
v___x_7_ = lean_st_ref_take(v___y_1_);
v_visitedClosed_8_ = lean_ctor_get(v___x_7_, 3);
v_hasDepLetCache_9_ = lean_ctor_get(v___x_7_, 4);
v_numConverted_10_ = lean_ctor_get(v___x_7_, 5);
v_isSharedCheck_20_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_20_ == 0)
{
lean_object* v_unused_21_; lean_object* v_unused_22_; lean_object* v_unused_23_; 
v_unused_21_ = lean_ctor_get(v___x_7_, 2);
lean_dec(v_unused_21_);
v_unused_22_ = lean_ctor_get(v___x_7_, 1);
lean_dec(v_unused_22_);
v_unused_23_ = lean_ctor_get(v___x_7_, 0);
lean_dec(v_unused_23_);
v___x_12_ = v___x_7_;
v_isShared_13_ = v_isSharedCheck_20_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_numConverted_10_);
lean_inc(v_hasDepLetCache_9_);
lean_inc(v_visitedClosed_8_);
lean_dec(v___x_7_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_20_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_14_; lean_object* v___x_16_; 
v___x_14_ = lean_box(0);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 2, v_subst_4_);
lean_ctor_set(v___x_12_, 1, v_types_3_);
lean_ctor_set(v___x_12_, 0, v_visited_2_);
v___x_16_ = v___x_12_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_19_; 
v_reuseFailAlloc_19_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_19_, 0, v_visited_2_);
lean_ctor_set(v_reuseFailAlloc_19_, 1, v_types_3_);
lean_ctor_set(v_reuseFailAlloc_19_, 2, v_subst_4_);
lean_ctor_set(v_reuseFailAlloc_19_, 3, v_visitedClosed_8_);
lean_ctor_set(v_reuseFailAlloc_19_, 4, v_hasDepLetCache_9_);
lean_ctor_set(v_reuseFailAlloc_19_, 5, v_numConverted_10_);
v___x_16_ = v_reuseFailAlloc_19_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_st_ref_put(v___y_1_, v___x_16_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_14_);
return v___x_18_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0___boxed(lean_object* v___y_24_, lean_object* v_visited_25_, lean_object* v_types_26_, lean_object* v_subst_27_, lean_object* v_a_x3f_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0(v___y_24_, v_visited_25_, v_types_26_, v_subst_27_, v_a_x3f_28_);
lean_dec(v_a_x3f_28_);
lean_dec(v___y_24_);
return v_res_30_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__0(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = lean_box(0);
v___x_32_ = lean_unsigned_to_nat(16u);
v___x_33_ = lean_mk_array(v___x_32_, v___x_31_);
return v___x_33_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__0, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__0);
v___x_35_ = lean_unsigned_to_nat(0u);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg(lean_object* v_x_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v___x_47_; lean_object* v_visited_48_; lean_object* v_types_49_; lean_object* v_subst_50_; lean_object* v_visitedClosed_51_; lean_object* v_hasDepLetCache_52_; lean_object* v_numConverted_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_91_; 
v___x_47_ = lean_st_ref_take(v___y_39_);
v_visited_48_ = lean_ctor_get(v___x_47_, 0);
v_types_49_ = lean_ctor_get(v___x_47_, 1);
v_subst_50_ = lean_ctor_get(v___x_47_, 2);
v_visitedClosed_51_ = lean_ctor_get(v___x_47_, 3);
v_hasDepLetCache_52_ = lean_ctor_get(v___x_47_, 4);
v_numConverted_53_ = lean_ctor_get(v___x_47_, 5);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_47_);
if (v_isSharedCheck_91_ == 0)
{
v___x_55_ = v___x_47_;
v_isShared_56_ = v_isSharedCheck_91_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_numConverted_53_);
lean_inc(v_hasDepLetCache_52_);
lean_inc(v_visitedClosed_51_);
lean_inc(v_subst_50_);
lean_inc(v_types_49_);
lean_inc(v_visited_48_);
lean_dec(v___x_47_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_91_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 2, v___x_57_);
lean_ctor_set(v___x_55_, 1, v___x_57_);
lean_ctor_set(v___x_55_, 0, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_57_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v___x_57_);
lean_ctor_set(v_reuseFailAlloc_90_, 2, v___x_57_);
lean_ctor_set(v_reuseFailAlloc_90_, 3, v_visitedClosed_51_);
lean_ctor_set(v_reuseFailAlloc_90_, 4, v_hasDepLetCache_52_);
lean_ctor_set(v_reuseFailAlloc_90_, 5, v_numConverted_53_);
v___x_59_ = v_reuseFailAlloc_90_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_st_ref_put(v___y_39_, v___x_59_);
lean_inc(v___y_45_);
lean_inc_ref(v___y_44_);
lean_inc(v___y_43_);
lean_inc_ref(v___y_42_);
lean_inc(v___y_41_);
lean_inc_ref(v___y_40_);
lean_inc(v___y_39_);
lean_inc_ref(v___y_38_);
v___x_61_ = lean_apply_9(v_x_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, lean_box(0));
if (lean_obj_tag(v___x_61_) == 0)
{
lean_object* v_a_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_78_; 
v_a_62_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_78_ == 0)
{
v___x_64_ = v___x_61_;
v_isShared_65_ = v_isSharedCheck_78_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_a_62_);
lean_dec(v___x_61_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_78_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_67_; 
lean_inc(v_a_62_);
if (v_isShared_65_ == 0)
{
lean_ctor_set_tag(v___x_64_, 1);
v___x_67_ = v___x_64_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_a_62_);
v___x_67_ = v_reuseFailAlloc_77_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
lean_object* v___x_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_75_; 
v___x_68_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0(v___y_39_, v_visited_48_, v_types_49_, v_subst_50_, v___x_67_);
lean_dec_ref(v___x_67_);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_75_ == 0)
{
lean_object* v_unused_76_; 
v_unused_76_ = lean_ctor_get(v___x_68_, 0);
lean_dec(v_unused_76_);
v___x_70_ = v___x_68_;
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
else
{
lean_dec(v___x_68_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_73_; 
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v_a_62_);
v___x_73_ = v___x_70_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_a_62_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
else
{
lean_object* v_a_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_88_; 
v_a_79_ = lean_ctor_get(v___x_61_, 0);
lean_inc(v_a_79_);
lean_dec_ref_known(v___x_61_, 1);
v___x_80_ = lean_box(0);
v___x_81_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0(v___y_39_, v_visited_48_, v_types_49_, v_subst_50_, v___x_80_);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_88_ == 0)
{
lean_object* v_unused_89_; 
v_unused_89_ = lean_ctor_get(v___x_81_, 0);
lean_dec(v_unused_89_);
v___x_83_ = v___x_81_;
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
else
{
lean_dec(v___x_81_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_86_; 
if (v_isShared_84_ == 0)
{
lean_ctor_set_tag(v___x_83_, 1);
lean_ctor_set(v___x_83_, 0, v_a_79_);
v___x_86_ = v___x_83_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_a_79_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___boxed(lean_object* v_x_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg(v_x_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope(lean_object* v_00_u03b1_103_, lean_object* v_x_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v___x_114_; lean_object* v_visited_115_; lean_object* v_types_116_; lean_object* v_subst_117_; lean_object* v_visitedClosed_118_; lean_object* v_hasDepLetCache_119_; lean_object* v_numConverted_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_158_; 
v___x_114_ = lean_st_ref_take(v___y_106_);
v_visited_115_ = lean_ctor_get(v___x_114_, 0);
v_types_116_ = lean_ctor_get(v___x_114_, 1);
v_subst_117_ = lean_ctor_get(v___x_114_, 2);
v_visitedClosed_118_ = lean_ctor_get(v___x_114_, 3);
v_hasDepLetCache_119_ = lean_ctor_get(v___x_114_, 4);
v_numConverted_120_ = lean_ctor_get(v___x_114_, 5);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_158_ == 0)
{
v___x_122_ = v___x_114_;
v_isShared_123_ = v_isSharedCheck_158_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_numConverted_120_);
lean_inc(v_hasDepLetCache_119_);
lean_inc(v_visitedClosed_118_);
lean_inc(v_subst_117_);
lean_inc(v_types_116_);
lean_inc(v_visited_115_);
lean_dec(v___x_114_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_158_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_124_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 2, v___x_124_);
lean_ctor_set(v___x_122_, 1, v___x_124_);
lean_ctor_set(v___x_122_, 0, v___x_124_);
v___x_126_ = v___x_122_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_124_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v___x_124_);
lean_ctor_set(v_reuseFailAlloc_157_, 2, v___x_124_);
lean_ctor_set(v_reuseFailAlloc_157_, 3, v_visitedClosed_118_);
lean_ctor_set(v_reuseFailAlloc_157_, 4, v_hasDepLetCache_119_);
lean_ctor_set(v_reuseFailAlloc_157_, 5, v_numConverted_120_);
v___x_126_ = v_reuseFailAlloc_157_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_st_ref_put(v___y_106_, v___x_126_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
lean_inc(v___y_110_);
lean_inc_ref(v___y_109_);
lean_inc(v___y_108_);
lean_inc_ref(v___y_107_);
lean_inc(v___y_106_);
lean_inc_ref(v___y_105_);
v___x_128_ = lean_apply_9(v_x_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, lean_box(0));
if (lean_obj_tag(v___x_128_) == 0)
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_145_; 
v_a_129_ = lean_ctor_get(v___x_128_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_128_);
if (v_isSharedCheck_145_ == 0)
{
v___x_131_ = v___x_128_;
v_isShared_132_ = v_isSharedCheck_145_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_128_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_145_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
lean_inc(v_a_129_);
if (v_isShared_132_ == 0)
{
lean_ctor_set_tag(v___x_131_, 1);
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_129_);
v___x_134_ = v_reuseFailAlloc_144_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_142_; 
v___x_135_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0(v___y_106_, v_visited_115_, v_types_116_, v_subst_117_, v___x_134_);
lean_dec_ref(v___x_134_);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_142_ == 0)
{
lean_object* v_unused_143_; 
v_unused_143_ = lean_ctor_get(v___x_135_, 0);
lean_dec(v_unused_143_);
v___x_137_ = v___x_135_;
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
else
{
lean_dec(v___x_135_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_140_; 
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 0, v_a_129_);
v___x_140_ = v___x_137_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_a_129_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
}
else
{
lean_object* v_a_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
v_a_146_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_a_146_);
lean_dec_ref_known(v___x_128_, 1);
v___x_147_ = lean_box(0);
v___x_148_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0(v___y_106_, v_visited_115_, v_types_116_, v_subst_117_, v___x_147_);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; 
v_unused_156_ = lean_ctor_get(v___x_148_, 0);
lean_dec(v_unused_156_);
v___x_150_ = v___x_148_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_dec(v___x_148_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
lean_ctor_set_tag(v___x_150_, 1);
lean_ctor_set(v___x_150_, 0, v_a_146_);
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_146_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___boxed(lean_object* v_00_u03b1_159_, lean_object* v_x_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope(v_00_u03b1_159_, v_x_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_171_, lean_object* v_x_172_){
_start:
{
if (lean_obj_tag(v_x_172_) == 0)
{
return v_x_171_;
}
else
{
lean_object* v_key_173_; lean_object* v_value_174_; lean_object* v_tail_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_201_; 
v_key_173_ = lean_ctor_get(v_x_172_, 0);
v_value_174_ = lean_ctor_get(v_x_172_, 1);
v_tail_175_ = lean_ctor_get(v_x_172_, 2);
v_isSharedCheck_201_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_201_ == 0)
{
v___x_177_ = v_x_172_;
v_isShared_178_ = v_isSharedCheck_201_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_tail_175_);
lean_inc(v_value_174_);
lean_inc(v_key_173_);
lean_dec(v_x_172_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_201_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_179_; size_t v___x_180_; size_t v___x_181_; size_t v___x_182_; uint64_t v___x_183_; uint64_t v___x_184_; uint64_t v___x_185_; uint64_t v_fold_186_; uint64_t v___x_187_; uint64_t v___x_188_; uint64_t v___x_189_; size_t v___x_190_; size_t v___x_191_; size_t v___x_192_; size_t v___x_193_; size_t v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_179_ = lean_array_get_size(v_x_171_);
v___x_180_ = lean_ptr_addr(v_key_173_);
v___x_181_ = ((size_t)3ULL);
v___x_182_ = lean_usize_shift_right(v___x_180_, v___x_181_);
v___x_183_ = lean_usize_to_uint64(v___x_182_);
v___x_184_ = 32ULL;
v___x_185_ = lean_uint64_shift_right(v___x_183_, v___x_184_);
v_fold_186_ = lean_uint64_xor(v___x_183_, v___x_185_);
v___x_187_ = 16ULL;
v___x_188_ = lean_uint64_shift_right(v_fold_186_, v___x_187_);
v___x_189_ = lean_uint64_xor(v_fold_186_, v___x_188_);
v___x_190_ = lean_uint64_to_usize(v___x_189_);
v___x_191_ = lean_usize_of_nat(v___x_179_);
v___x_192_ = ((size_t)1ULL);
v___x_193_ = lean_usize_sub(v___x_191_, v___x_192_);
v___x_194_ = lean_usize_land(v___x_190_, v___x_193_);
v___x_195_ = lean_array_uget_borrowed(v_x_171_, v___x_194_);
lean_inc(v___x_195_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 2, v___x_195_);
v___x_197_ = v___x_177_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_key_173_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_value_174_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v___x_195_);
v___x_197_ = v_reuseFailAlloc_200_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_198_; 
v___x_198_ = lean_array_uset(v_x_171_, v___x_194_, v___x_197_);
v_x_171_ = v___x_198_;
v_x_172_ = v_tail_175_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4___redArg(lean_object* v_i_202_, lean_object* v_source_203_, lean_object* v_target_204_){
_start:
{
lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_205_ = lean_array_get_size(v_source_203_);
v___x_206_ = lean_nat_dec_lt(v_i_202_, v___x_205_);
if (v___x_206_ == 0)
{
lean_dec_ref(v_source_203_);
lean_dec(v_i_202_);
return v_target_204_;
}
else
{
lean_object* v_es_207_; lean_object* v___x_208_; lean_object* v_source_209_; lean_object* v_target_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_es_207_ = lean_array_fget(v_source_203_, v_i_202_);
v___x_208_ = lean_box(0);
v_source_209_ = lean_array_fset(v_source_203_, v_i_202_, v___x_208_);
v_target_210_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4_spec__5___redArg(v_target_204_, v_es_207_);
v___x_211_ = lean_unsigned_to_nat(1u);
v___x_212_ = lean_nat_add(v_i_202_, v___x_211_);
lean_dec(v_i_202_);
v_i_202_ = v___x_212_;
v_source_203_ = v_source_209_;
v_target_204_ = v_target_210_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3___redArg(lean_object* v_data_214_){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v_nbuckets_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_215_ = lean_array_get_size(v_data_214_);
v___x_216_ = lean_unsigned_to_nat(2u);
v_nbuckets_217_ = lean_nat_mul(v___x_215_, v___x_216_);
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_219_ = lean_box(0);
v___x_220_ = lean_mk_array(v_nbuckets_217_, v___x_219_);
v___x_221_ = lean_array_propagate_mark(v_data_214_, v___x_220_);
v___x_222_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4___redArg(v___x_218_, v_data_214_, v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__4___redArg(lean_object* v_a_223_, lean_object* v_b_224_, lean_object* v_x_225_){
_start:
{
if (lean_obj_tag(v_x_225_) == 0)
{
lean_dec(v_b_224_);
lean_dec_ref(v_a_223_);
return v_x_225_;
}
else
{
lean_object* v_key_226_; lean_object* v_value_227_; lean_object* v_tail_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_242_; 
v_key_226_ = lean_ctor_get(v_x_225_, 0);
v_value_227_ = lean_ctor_get(v_x_225_, 1);
v_tail_228_ = lean_ctor_get(v_x_225_, 2);
v_isSharedCheck_242_ = !lean_is_exclusive(v_x_225_);
if (v_isSharedCheck_242_ == 0)
{
v___x_230_ = v_x_225_;
v_isShared_231_ = v_isSharedCheck_242_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_tail_228_);
lean_inc(v_value_227_);
lean_inc(v_key_226_);
lean_dec(v_x_225_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_242_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
size_t v___x_232_; size_t v___x_233_; uint8_t v___x_234_; 
v___x_232_ = lean_ptr_addr(v_key_226_);
v___x_233_ = lean_ptr_addr(v_a_223_);
v___x_234_ = lean_usize_dec_eq(v___x_232_, v___x_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; lean_object* v___x_237_; 
v___x_235_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__4___redArg(v_a_223_, v_b_224_, v_tail_228_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 2, v___x_235_);
v___x_237_ = v___x_230_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_key_226_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_value_227_);
lean_ctor_set(v_reuseFailAlloc_238_, 2, v___x_235_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
else
{
lean_object* v___x_240_; 
lean_dec(v_value_227_);
lean_dec(v_key_226_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v_b_224_);
lean_ctor_set(v___x_230_, 0, v_a_223_);
v___x_240_ = v___x_230_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_223_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v_b_224_);
lean_ctor_set(v_reuseFailAlloc_241_, 2, v_tail_228_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2___redArg(lean_object* v_a_243_, lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
uint8_t v___x_245_; 
v___x_245_ = 0;
return v___x_245_;
}
else
{
lean_object* v_key_246_; lean_object* v_tail_247_; size_t v___x_248_; size_t v___x_249_; uint8_t v___x_250_; 
v_key_246_ = lean_ctor_get(v_x_244_, 0);
v_tail_247_ = lean_ctor_get(v_x_244_, 2);
v___x_248_ = lean_ptr_addr(v_key_246_);
v___x_249_ = lean_ptr_addr(v_a_243_);
v___x_250_ = lean_usize_dec_eq(v___x_248_, v___x_249_);
if (v___x_250_ == 0)
{
v_x_244_ = v_tail_247_;
goto _start;
}
else
{
return v___x_250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2___redArg___boxed(lean_object* v_a_252_, lean_object* v_x_253_){
_start:
{
uint8_t v_res_254_; lean_object* v_r_255_; 
v_res_254_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2___redArg(v_a_252_, v_x_253_);
lean_dec(v_x_253_);
lean_dec_ref(v_a_252_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1___redArg(lean_object* v_m_256_, lean_object* v_a_257_, lean_object* v_b_258_){
_start:
{
lean_object* v_size_259_; lean_object* v_buckets_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_306_; 
v_size_259_ = lean_ctor_get(v_m_256_, 0);
v_buckets_260_ = lean_ctor_get(v_m_256_, 1);
v_isSharedCheck_306_ = !lean_is_exclusive(v_m_256_);
if (v_isSharedCheck_306_ == 0)
{
v___x_262_ = v_m_256_;
v_isShared_263_ = v_isSharedCheck_306_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_buckets_260_);
lean_inc(v_size_259_);
lean_dec(v_m_256_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_306_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_264_; size_t v___x_265_; size_t v___x_266_; size_t v___x_267_; uint64_t v___x_268_; uint64_t v___x_269_; uint64_t v___x_270_; uint64_t v_fold_271_; uint64_t v___x_272_; uint64_t v___x_273_; uint64_t v___x_274_; size_t v___x_275_; size_t v___x_276_; size_t v___x_277_; size_t v___x_278_; size_t v___x_279_; lean_object* v_bkt_280_; uint8_t v___x_281_; 
v___x_264_ = lean_array_get_size(v_buckets_260_);
v___x_265_ = lean_ptr_addr(v_a_257_);
v___x_266_ = ((size_t)3ULL);
v___x_267_ = lean_usize_shift_right(v___x_265_, v___x_266_);
v___x_268_ = lean_usize_to_uint64(v___x_267_);
v___x_269_ = 32ULL;
v___x_270_ = lean_uint64_shift_right(v___x_268_, v___x_269_);
v_fold_271_ = lean_uint64_xor(v___x_268_, v___x_270_);
v___x_272_ = 16ULL;
v___x_273_ = lean_uint64_shift_right(v_fold_271_, v___x_272_);
v___x_274_ = lean_uint64_xor(v_fold_271_, v___x_273_);
v___x_275_ = lean_uint64_to_usize(v___x_274_);
v___x_276_ = lean_usize_of_nat(v___x_264_);
v___x_277_ = ((size_t)1ULL);
v___x_278_ = lean_usize_sub(v___x_276_, v___x_277_);
v___x_279_ = lean_usize_land(v___x_275_, v___x_278_);
v_bkt_280_ = lean_array_uget_borrowed(v_buckets_260_, v___x_279_);
v___x_281_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2___redArg(v_a_257_, v_bkt_280_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; lean_object* v_size_x27_283_; lean_object* v___x_284_; lean_object* v_buckets_x27_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_282_ = lean_unsigned_to_nat(1u);
v_size_x27_283_ = lean_nat_add(v_size_259_, v___x_282_);
lean_dec(v_size_259_);
lean_inc(v_bkt_280_);
v___x_284_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_284_, 0, v_a_257_);
lean_ctor_set(v___x_284_, 1, v_b_258_);
lean_ctor_set(v___x_284_, 2, v_bkt_280_);
v_buckets_x27_285_ = lean_array_uset(v_buckets_260_, v___x_279_, v___x_284_);
v___x_286_ = lean_unsigned_to_nat(4u);
v___x_287_ = lean_nat_mul(v_size_x27_283_, v___x_286_);
v___x_288_ = lean_unsigned_to_nat(3u);
v___x_289_ = lean_nat_div(v___x_287_, v___x_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_array_get_size(v_buckets_x27_285_);
v___x_291_ = lean_nat_dec_le(v___x_289_, v___x_290_);
lean_dec(v___x_289_);
if (v___x_291_ == 0)
{
lean_object* v_val_292_; lean_object* v___x_294_; 
v_val_292_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3___redArg(v_buckets_x27_285_);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 1, v_val_292_);
lean_ctor_set(v___x_262_, 0, v_size_x27_283_);
v___x_294_ = v___x_262_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_size_x27_283_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v_val_292_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
else
{
lean_object* v___x_297_; 
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 1, v_buckets_x27_285_);
lean_ctor_set(v___x_262_, 0, v_size_x27_283_);
v___x_297_ = v___x_262_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_size_x27_283_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v_buckets_x27_285_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
else
{
lean_object* v___x_299_; lean_object* v_buckets_x27_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_304_; 
lean_inc(v_bkt_280_);
v___x_299_ = lean_box(0);
v_buckets_x27_300_ = lean_array_uset(v_buckets_260_, v___x_279_, v___x_299_);
v___x_301_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__4___redArg(v_a_257_, v_b_258_, v_bkt_280_);
v___x_302_ = lean_array_uset(v_buckets_x27_300_, v___x_279_, v___x_301_);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 1, v___x_302_);
v___x_304_ = v___x_262_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_size_259_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0___redArg(lean_object* v_a_307_, lean_object* v_x_308_){
_start:
{
if (lean_obj_tag(v_x_308_) == 0)
{
lean_object* v___x_309_; 
v___x_309_ = lean_box(0);
return v___x_309_;
}
else
{
lean_object* v_key_310_; lean_object* v_value_311_; lean_object* v_tail_312_; size_t v___x_313_; size_t v___x_314_; uint8_t v___x_315_; 
v_key_310_ = lean_ctor_get(v_x_308_, 0);
v_value_311_ = lean_ctor_get(v_x_308_, 1);
v_tail_312_ = lean_ctor_get(v_x_308_, 2);
v___x_313_ = lean_ptr_addr(v_key_310_);
v___x_314_ = lean_ptr_addr(v_a_307_);
v___x_315_ = lean_usize_dec_eq(v___x_313_, v___x_314_);
if (v___x_315_ == 0)
{
v_x_308_ = v_tail_312_;
goto _start;
}
else
{
lean_object* v___x_317_; 
lean_inc(v_value_311_);
v___x_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_317_, 0, v_value_311_);
return v___x_317_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0___redArg___boxed(lean_object* v_a_318_, lean_object* v_x_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0___redArg(v_a_318_, v_x_319_);
lean_dec(v_x_319_);
lean_dec_ref(v_a_318_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg(lean_object* v_m_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_buckets_323_; lean_object* v___x_324_; size_t v___x_325_; size_t v___x_326_; size_t v___x_327_; uint64_t v___x_328_; uint64_t v___x_329_; uint64_t v___x_330_; uint64_t v_fold_331_; uint64_t v___x_332_; uint64_t v___x_333_; uint64_t v___x_334_; size_t v___x_335_; size_t v___x_336_; size_t v___x_337_; size_t v___x_338_; size_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_buckets_323_ = lean_ctor_get(v_m_321_, 1);
v___x_324_ = lean_array_get_size(v_buckets_323_);
v___x_325_ = lean_ptr_addr(v_a_322_);
v___x_326_ = ((size_t)3ULL);
v___x_327_ = lean_usize_shift_right(v___x_325_, v___x_326_);
v___x_328_ = lean_usize_to_uint64(v___x_327_);
v___x_329_ = 32ULL;
v___x_330_ = lean_uint64_shift_right(v___x_328_, v___x_329_);
v_fold_331_ = lean_uint64_xor(v___x_328_, v___x_330_);
v___x_332_ = 16ULL;
v___x_333_ = lean_uint64_shift_right(v_fold_331_, v___x_332_);
v___x_334_ = lean_uint64_xor(v_fold_331_, v___x_333_);
v___x_335_ = lean_uint64_to_usize(v___x_334_);
v___x_336_ = lean_usize_of_nat(v___x_324_);
v___x_337_ = ((size_t)1ULL);
v___x_338_ = lean_usize_sub(v___x_336_, v___x_337_);
v___x_339_ = lean_usize_land(v___x_335_, v___x_338_);
v___x_340_ = lean_array_uget_borrowed(v_buckets_323_, v___x_339_);
v___x_341_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0___redArg(v_a_322_, v___x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg___boxed(lean_object* v_m_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg(v_m_342_, v_a_343_);
lean_dec_ref(v_a_343_);
lean_dec_ref(v_m_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached(lean_object* v_e_345_, lean_object* v_k_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v___x_356_; lean_object* v_hasDepLetCache_357_; lean_object* v___x_358_; 
v___x_356_ = lean_st_ref_get(v___y_348_);
v_hasDepLetCache_357_ = lean_ctor_get(v___x_356_, 4);
lean_inc_ref(v_hasDepLetCache_357_);
lean_dec(v___x_356_);
v___x_358_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg(v_hasDepLetCache_357_, v_e_345_);
lean_dec_ref(v_hasDepLetCache_357_);
if (lean_obj_tag(v___x_358_) == 1)
{
lean_object* v_val_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref(v_k_346_);
lean_dec_ref(v_e_345_);
v_val_359_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_358_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_val_359_);
lean_dec(v___x_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
lean_ctor_set_tag(v___x_361_, 0);
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_val_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
else
{
lean_object* v___x_367_; 
lean_dec(v___x_358_);
lean_inc(v___y_354_);
lean_inc_ref(v___y_353_);
lean_inc(v___y_352_);
lean_inc_ref(v___y_351_);
lean_inc(v___y_350_);
lean_inc_ref(v___y_349_);
lean_inc(v___y_348_);
lean_inc_ref(v___y_347_);
v___x_367_ = lean_apply_9(v_k_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, lean_box(0));
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_391_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_391_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_391_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_391_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v_visited_373_; lean_object* v_types_374_; lean_object* v_subst_375_; lean_object* v_visitedClosed_376_; lean_object* v_hasDepLetCache_377_; lean_object* v_numConverted_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_390_; 
v___x_372_ = lean_st_ref_take(v___y_348_);
v_visited_373_ = lean_ctor_get(v___x_372_, 0);
v_types_374_ = lean_ctor_get(v___x_372_, 1);
v_subst_375_ = lean_ctor_get(v___x_372_, 2);
v_visitedClosed_376_ = lean_ctor_get(v___x_372_, 3);
v_hasDepLetCache_377_ = lean_ctor_get(v___x_372_, 4);
v_numConverted_378_ = lean_ctor_get(v___x_372_, 5);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_390_ == 0)
{
v___x_380_ = v___x_372_;
v_isShared_381_ = v_isSharedCheck_390_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_numConverted_378_);
lean_inc(v_hasDepLetCache_377_);
lean_inc(v_visitedClosed_376_);
lean_inc(v_subst_375_);
lean_inc(v_types_374_);
lean_inc(v_visited_373_);
lean_dec(v___x_372_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_390_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_382_; lean_object* v___x_384_; 
lean_inc(v_a_368_);
v___x_382_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1___redArg(v_hasDepLetCache_377_, v_e_345_, v_a_368_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 4, v___x_382_);
v___x_384_ = v___x_380_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_visited_373_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_types_374_);
lean_ctor_set(v_reuseFailAlloc_389_, 2, v_subst_375_);
lean_ctor_set(v_reuseFailAlloc_389_, 3, v_visitedClosed_376_);
lean_ctor_set(v_reuseFailAlloc_389_, 4, v___x_382_);
lean_ctor_set(v_reuseFailAlloc_389_, 5, v_numConverted_378_);
v___x_384_ = v_reuseFailAlloc_389_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_385_ = lean_st_ref_put(v___y_348_, v___x_384_);
if (v_isShared_371_ == 0)
{
v___x_387_ = v___x_370_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_368_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_345_);
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached___boxed(lean_object* v_e_392_, lean_object* v_k_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached(v_e_392_, v_k_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0(lean_object* v_00_u03b2_404_, lean_object* v_m_405_, lean_object* v_a_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg(v_m_405_, v_a_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___boxed(lean_object* v_00_u03b2_408_, lean_object* v_m_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0(v_00_u03b2_408_, v_m_409_, v_a_410_);
lean_dec_ref(v_a_410_);
lean_dec_ref(v_m_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1(lean_object* v_00_u03b2_412_, lean_object* v_m_413_, lean_object* v_a_414_, lean_object* v_b_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1___redArg(v_m_413_, v_a_414_, v_b_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0(lean_object* v_00_u03b2_417_, lean_object* v_a_418_, lean_object* v_x_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0___redArg(v_a_418_, v_x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0___boxed(lean_object* v_00_u03b2_421_, lean_object* v_a_422_, lean_object* v_x_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0_spec__0(v_00_u03b2_421_, v_a_422_, v_x_423_);
lean_dec(v_x_423_);
lean_dec_ref(v_a_422_);
return v_res_424_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2(lean_object* v_00_u03b2_425_, lean_object* v_a_426_, lean_object* v_x_427_){
_start:
{
uint8_t v___x_428_; 
v___x_428_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2___redArg(v_a_426_, v_x_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2___boxed(lean_object* v_00_u03b2_429_, lean_object* v_a_430_, lean_object* v_x_431_){
_start:
{
uint8_t v_res_432_; lean_object* v_r_433_; 
v_res_432_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__2(v_00_u03b2_429_, v_a_430_, v_x_431_);
lean_dec(v_x_431_);
lean_dec_ref(v_a_430_);
v_r_433_ = lean_box(v_res_432_);
return v_r_433_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3(lean_object* v_00_u03b2_434_, lean_object* v_data_435_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3___redArg(v_data_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__4(lean_object* v_00_u03b2_437_, lean_object* v_a_438_, lean_object* v_b_439_, lean_object* v_x_440_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__4___redArg(v_a_438_, v_b_439_, v_x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_442_, lean_object* v_i_443_, lean_object* v_source_444_, lean_object* v_target_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4___redArg(v_i_443_, v_source_444_, v_target_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_447_, lean_object* v_x_448_, lean_object* v_x_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1_spec__3_spec__4_spec__5___redArg(v_x_448_, v_x_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__0___boxed(lean_object* v_t_451_, lean_object* v_b_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__0(v_t_451_, v_b_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__1(lean_object* v_type_463_, lean_object* v_value_464_, lean_object* v_body_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_type_463_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; uint8_t v___x_477_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_a_476_);
v___x_477_ = lean_unbox(v_a_476_);
lean_dec(v_a_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; 
lean_dec_ref_known(v___x_475_, 1);
v___x_478_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_value_464_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; uint8_t v___x_480_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_a_479_);
v___x_480_ = lean_unbox(v_a_479_);
lean_dec(v_a_479_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; 
lean_dec_ref_known(v___x_478_, 1);
v___x_481_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_body_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
return v___x_481_;
}
else
{
lean_dec_ref(v_body_465_);
return v___x_478_;
}
}
else
{
lean_dec_ref(v_body_465_);
return v___x_478_;
}
}
else
{
lean_dec_ref(v_body_465_);
lean_dec_ref(v_value_464_);
return v___x_475_;
}
}
else
{
lean_dec_ref(v_body_465_);
lean_dec_ref(v_value_464_);
return v___x_475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__1___boxed(lean_object* v_type_482_, lean_object* v_value_483_, lean_object* v_body_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__1(v_type_482_, v_value_483_, v_body_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__2(lean_object* v_fn_495_, lean_object* v_arg_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_fn_495_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; uint8_t v___x_508_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_507_);
v___x_508_ = lean_unbox(v_a_507_);
lean_dec(v_a_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; 
lean_dec_ref_known(v___x_506_, 1);
v___x_509_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_arg_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
return v___x_509_;
}
else
{
lean_dec_ref(v_arg_496_);
return v___x_506_;
}
}
else
{
lean_dec_ref(v_arg_496_);
return v___x_506_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__2___boxed(lean_object* v_fn_510_, lean_object* v_arg_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__2(v_fn_510_, v_arg_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec_ref(v___y_516_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___boxed(lean_object* v_e_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_e_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(lean_object* v_e_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_){
_start:
{
lean_object* v_t_544_; lean_object* v_b_545_; lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v___y_548_; lean_object* v___y_549_; lean_object* v___y_550_; lean_object* v___y_551_; lean_object* v___y_552_; lean_object* v___y_553_; 
switch(lean_obj_tag(v_e_533_))
{
case 8:
{
uint8_t v_nondep_556_; 
v_nondep_556_ = lean_ctor_get_uint8(v_e_533_, sizeof(void*)*4 + 8);
if (v_nondep_556_ == 0)
{
uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
lean_dec_ref_known(v_e_533_, 4);
v___x_557_ = 1;
v___x_558_ = lean_box(v___x_557_);
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
return v___x_559_;
}
else
{
lean_object* v_type_560_; lean_object* v_value_561_; lean_object* v_body_562_; lean_object* v___f_563_; lean_object* v___x_564_; 
v_type_560_ = lean_ctor_get(v_e_533_, 1);
v_value_561_ = lean_ctor_get(v_e_533_, 2);
v_body_562_ = lean_ctor_get(v_e_533_, 3);
lean_inc_ref(v_body_562_);
lean_inc_ref(v_value_561_);
lean_inc_ref(v_type_560_);
v___f_563_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__1___boxed), 12, 3);
lean_closure_set(v___f_563_, 0, v_type_560_);
lean_closure_set(v___f_563_, 1, v_value_561_);
lean_closure_set(v___f_563_, 2, v_body_562_);
v___x_564_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached(v_e_533_, v___f_563_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_);
return v___x_564_;
}
}
case 5:
{
lean_object* v_fn_565_; lean_object* v_arg_566_; lean_object* v___f_567_; lean_object* v___x_568_; 
v_fn_565_ = lean_ctor_get(v_e_533_, 0);
v_arg_566_ = lean_ctor_get(v_e_533_, 1);
lean_inc_ref(v_arg_566_);
lean_inc_ref(v_fn_565_);
v___f_567_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__2___boxed), 11, 2);
lean_closure_set(v___f_567_, 0, v_fn_565_);
lean_closure_set(v___f_567_, 1, v_arg_566_);
v___x_568_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached(v_e_533_, v___f_567_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_);
return v___x_568_;
}
case 6:
{
lean_object* v_binderType_569_; lean_object* v_body_570_; 
v_binderType_569_ = lean_ctor_get(v_e_533_, 1);
v_body_570_ = lean_ctor_get(v_e_533_, 2);
lean_inc_ref(v_body_570_);
lean_inc_ref(v_binderType_569_);
v_t_544_ = v_binderType_569_;
v_b_545_ = v_body_570_;
v___y_546_ = v___y_534_;
v___y_547_ = v___y_535_;
v___y_548_ = v___y_536_;
v___y_549_ = v___y_537_;
v___y_550_ = v___y_538_;
v___y_551_ = v___y_539_;
v___y_552_ = v___y_540_;
v___y_553_ = v___y_541_;
goto v___jp_543_;
}
case 7:
{
lean_object* v_binderType_571_; lean_object* v_body_572_; 
v_binderType_571_ = lean_ctor_get(v_e_533_, 1);
v_body_572_ = lean_ctor_get(v_e_533_, 2);
lean_inc_ref(v_body_572_);
lean_inc_ref(v_binderType_571_);
v_t_544_ = v_binderType_571_;
v_b_545_ = v_body_572_;
v___y_546_ = v___y_534_;
v___y_547_ = v___y_535_;
v___y_548_ = v___y_536_;
v___y_549_ = v___y_537_;
v___y_550_ = v___y_538_;
v___y_551_ = v___y_539_;
v___y_552_ = v___y_540_;
v___y_553_ = v___y_541_;
goto v___jp_543_;
}
case 10:
{
lean_object* v_expr_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_expr_573_ = lean_ctor_get(v_e_533_, 1);
lean_inc_ref(v_expr_573_);
v___x_574_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___boxed), 10, 1);
lean_closure_set(v___x_574_, 0, v_expr_573_);
v___x_575_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached(v_e_533_, v___x_574_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_);
return v___x_575_;
}
case 11:
{
lean_object* v_struct_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_struct_576_ = lean_ctor_get(v_e_533_, 2);
lean_inc_ref(v_struct_576_);
v___x_577_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___boxed), 10, 1);
lean_closure_set(v___x_577_, 0, v_struct_576_);
v___x_578_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached(v_e_533_, v___x_577_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_);
return v___x_578_;
}
default: 
{
uint8_t v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
lean_dec_ref(v_e_533_);
v___x_579_ = 0;
v___x_580_ = lean_box(v___x_579_);
v___x_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
return v___x_581_;
}
}
v___jp_543_:
{
lean_object* v___f_554_; lean_object* v___x_555_; 
v___f_554_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__0___boxed), 11, 2);
lean_closure_set(v___f_554_, 0, v_t_544_);
lean_closure_set(v___f_554_, 1, v_b_545_);
v___x_555_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached(v_e_533_, v___f_554_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
return v___x_555_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet___lam__0(lean_object* v_t_582_, lean_object* v_b_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_t_582_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; uint8_t v___x_595_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
v___x_595_ = lean_unbox(v_a_594_);
lean_dec(v_a_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; 
lean_dec_ref_known(v___x_593_, 1);
v___x_596_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_b_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
return v___x_596_;
}
else
{
lean_dec_ref(v_b_583_);
return v___x_593_;
}
}
else
{
lean_dec_ref(v_b_583_);
return v___x_593_;
}
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1___closed__0(void){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1(lean_object* v_msg_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
lean_object* v___x_606_; lean_object* v___x_11771__overap_607_; lean_object* v___x_608_; 
v___x_606_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1___closed__0);
v___x_11771__overap_607_ = lean_panic_fn_borrowed(v___x_606_, v_msg_598_);
lean_inc(v___y_604_);
lean_inc_ref(v___y_603_);
lean_inc(v___y_602_);
lean_inc_ref(v___y_601_);
lean_inc(v___y_600_);
lean_inc_ref(v___y_599_);
v___x_608_ = lean_apply_7(v___x_11771__overap_607_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, lean_box(0));
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1___boxed(lean_object* v_msg_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1(v_msg_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__1(lean_object* v_f_618_, lean_object* v_a_619_, lean_object* v___y_620_, uint8_t v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
lean_object* v___y_625_; lean_object* v___y_626_; 
if (v___y_621_ == 0)
{
v___y_625_ = v___y_620_;
v___y_626_ = v___y_623_;
goto v___jp_624_;
}
else
{
lean_object* v___x_648_; 
v___x_648_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_f_618_, v___y_621_, v___y_622_, v___y_623_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_650_; 
v_a_649_ = lean_ctor_get(v___x_648_, 1);
lean_inc(v_a_649_);
lean_dec_ref_known(v___x_648_, 2);
v___x_650_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_a_619_, v___y_621_, v___y_622_, v_a_649_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; 
v_a_651_ = lean_ctor_get(v___x_650_, 1);
lean_inc(v_a_651_);
lean_dec_ref_known(v___x_650_, 2);
v___y_625_ = v___y_620_;
v___y_626_ = v_a_651_;
goto v___jp_624_;
}
else
{
lean_object* v_a_652_; lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
lean_dec_ref(v___y_620_);
lean_dec_ref(v_a_619_);
lean_dec_ref(v_f_618_);
v_a_652_ = lean_ctor_get(v___x_650_, 0);
v_a_653_ = lean_ctor_get(v___x_650_, 1);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_650_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_inc(v_a_652_);
lean_dec(v___x_650_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_652_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
else
{
lean_object* v_a_661_; lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec_ref(v___y_620_);
lean_dec_ref(v_a_619_);
lean_dec_ref(v_f_618_);
v_a_661_ = lean_ctor_get(v___x_648_, 0);
v_a_662_ = lean_ctor_get(v___x_648_, 1);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_648_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_inc(v_a_661_);
lean_dec(v___x_648_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_661_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
v___jp_624_:
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = l_Lean_Expr_app___override(v_f_618_, v_a_619_);
v___x_628_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_627_, v___y_626_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_638_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
v_a_630_ = lean_ctor_get(v___x_628_, 1);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_638_ == 0)
{
v___x_632_ = v___x_628_;
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_inc(v_a_629_);
lean_dec(v___x_628_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_634_, 0, v_a_629_);
lean_ctor_set(v___x_634_, 1, v___y_625_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_634_);
v___x_636_ = v___x_632_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_634_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_a_630_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
else
{
lean_object* v_a_639_; lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
lean_dec_ref(v___y_625_);
v_a_639_ = lean_ctor_get(v___x_628_, 0);
v_a_640_ = lean_ctor_get(v___x_628_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v___x_628_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_inc(v_a_639_);
lean_dec(v___x_628_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_639_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_a_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__1___boxed(lean_object* v_f_670_, lean_object* v_a_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
uint8_t v___y_35089__boxed_676_; lean_object* v_res_677_; 
v___y_35089__boxed_676_ = lean_unbox(v___y_673_);
v_res_677_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__1(v_f_670_, v_a_671_, v___y_672_, v___y_35089__boxed_676_, v___y_674_, v___y_675_);
lean_dec_ref(v___y_674_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(lean_object* v_a_678_, lean_object* v_x_679_){
_start:
{
if (lean_obj_tag(v_x_679_) == 0)
{
lean_object* v___x_680_; 
v___x_680_ = lean_box(0);
return v___x_680_;
}
else
{
lean_object* v_key_681_; lean_object* v_value_682_; lean_object* v_tail_683_; lean_object* v_fst_684_; lean_object* v_snd_685_; lean_object* v_fst_686_; lean_object* v_snd_687_; size_t v___x_688_; size_t v___x_689_; uint8_t v___x_690_; 
v_key_681_ = lean_ctor_get(v_x_679_, 0);
v_value_682_ = lean_ctor_get(v_x_679_, 1);
v_tail_683_ = lean_ctor_get(v_x_679_, 2);
v_fst_684_ = lean_ctor_get(v_key_681_, 0);
v_snd_685_ = lean_ctor_get(v_key_681_, 1);
v_fst_686_ = lean_ctor_get(v_a_678_, 0);
v_snd_687_ = lean_ctor_get(v_a_678_, 1);
v___x_688_ = lean_ptr_addr(v_fst_684_);
v___x_689_ = lean_ptr_addr(v_fst_686_);
v___x_690_ = lean_usize_dec_eq(v___x_688_, v___x_689_);
if (v___x_690_ == 0)
{
v_x_679_ = v_tail_683_;
goto _start;
}
else
{
uint8_t v___x_692_; 
v___x_692_ = lean_nat_dec_eq(v_snd_685_, v_snd_687_);
if (v___x_692_ == 0)
{
v_x_679_ = v_tail_683_;
goto _start;
}
else
{
lean_object* v___x_694_; 
lean_inc(v_value_682_);
v___x_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_694_, 0, v_value_682_);
return v___x_694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10___redArg___boxed(lean_object* v_a_695_, lean_object* v_x_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(v_a_695_, v_x_696_);
lean_dec(v_x_696_);
lean_dec_ref(v_a_695_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2___redArg(lean_object* v_m_698_, lean_object* v_a_699_){
_start:
{
lean_object* v_buckets_700_; lean_object* v_fst_701_; lean_object* v_snd_702_; lean_object* v___x_703_; size_t v___x_704_; size_t v___x_705_; size_t v___x_706_; uint64_t v___x_707_; uint64_t v___x_708_; uint64_t v___x_709_; uint64_t v___x_710_; uint64_t v___x_711_; uint64_t v_fold_712_; uint64_t v___x_713_; uint64_t v___x_714_; uint64_t v___x_715_; size_t v___x_716_; size_t v___x_717_; size_t v___x_718_; size_t v___x_719_; size_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v_buckets_700_ = lean_ctor_get(v_m_698_, 1);
v_fst_701_ = lean_ctor_get(v_a_699_, 0);
v_snd_702_ = lean_ctor_get(v_a_699_, 1);
v___x_703_ = lean_array_get_size(v_buckets_700_);
v___x_704_ = lean_ptr_addr(v_fst_701_);
v___x_705_ = ((size_t)3ULL);
v___x_706_ = lean_usize_shift_right(v___x_704_, v___x_705_);
v___x_707_ = lean_usize_to_uint64(v___x_706_);
v___x_708_ = lean_uint64_of_nat(v_snd_702_);
v___x_709_ = lean_uint64_mix_hash(v___x_707_, v___x_708_);
v___x_710_ = 32ULL;
v___x_711_ = lean_uint64_shift_right(v___x_709_, v___x_710_);
v_fold_712_ = lean_uint64_xor(v___x_709_, v___x_711_);
v___x_713_ = 16ULL;
v___x_714_ = lean_uint64_shift_right(v_fold_712_, v___x_713_);
v___x_715_ = lean_uint64_xor(v_fold_712_, v___x_714_);
v___x_716_ = lean_uint64_to_usize(v___x_715_);
v___x_717_ = lean_usize_of_nat(v___x_703_);
v___x_718_ = ((size_t)1ULL);
v___x_719_ = lean_usize_sub(v___x_717_, v___x_718_);
v___x_720_ = lean_usize_land(v___x_716_, v___x_719_);
v___x_721_ = lean_array_uget_borrowed(v_buckets_700_, v___x_720_);
v___x_722_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(v_a_699_, v___x_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_m_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2___redArg(v_m_723_, v_a_724_);
lean_dec_ref(v_a_724_);
lean_dec_ref(v_m_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7(lean_object* v_msg_733_, lean_object* v___y_734_, uint8_t v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v___f_738_; lean_object* v___f_739_; lean_object* v___f_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___f_750_; lean_object* v___f_751_; lean_object* v___f_752_; lean_object* v___f_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_34603__overap_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___f_738_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__0));
v___f_739_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__1));
v___f_740_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__2));
v___x_741_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__3));
v___x_742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
lean_ctor_set(v___x_742_, 1, v___f_738_);
v___x_743_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__4));
v___x_744_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__5));
v___x_745_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_745_, 0, v___x_742_);
lean_ctor_set(v___x_745_, 1, v___x_743_);
lean_ctor_set(v___x_745_, 2, v___f_739_);
lean_ctor_set(v___x_745_, 3, v___f_740_);
lean_ctor_set(v___x_745_, 4, v___x_744_);
v___x_746_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___closed__6));
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_745_);
lean_ctor_set(v___x_747_, 1, v___x_746_);
v___x_748_ = l_ReaderT_instMonad___redArg(v___x_747_);
v___x_749_ = l_ReaderT_instMonad___redArg(v___x_748_);
lean_inc_ref_n(v___x_749_, 6);
v___f_750_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_750_, 0, v___x_749_);
v___f_751_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_751_, 0, v___x_749_);
v___f_752_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_752_, 0, v___x_749_);
v___f_753_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_753_, 0, v___x_749_);
v___x_754_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_754_, 0, lean_box(0));
lean_closure_set(v___x_754_, 1, lean_box(0));
lean_closure_set(v___x_754_, 2, v___x_749_);
v___x_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
lean_ctor_set(v___x_755_, 1, v___f_750_);
v___x_756_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_756_, 0, lean_box(0));
lean_closure_set(v___x_756_, 1, lean_box(0));
lean_closure_set(v___x_756_, 2, v___x_749_);
v___x_757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_757_, 0, v___x_755_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
lean_ctor_set(v___x_757_, 2, v___f_751_);
lean_ctor_set(v___x_757_, 3, v___f_752_);
lean_ctor_set(v___x_757_, 4, v___f_753_);
v___x_758_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_758_, 0, lean_box(0));
lean_closure_set(v___x_758_, 1, lean_box(0));
lean_closure_set(v___x_758_, 2, v___x_749_);
v___x_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_757_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = l_Lean_instInhabitedExpr;
v___x_761_ = l_instInhabitedOfMonad___redArg(v___x_759_, v___x_760_);
v___x_34603__overap_762_ = lean_panic_fn_borrowed(v___x_761_, v_msg_733_);
lean_dec(v___x_761_);
v___x_763_ = lean_box(v___y_735_);
lean_inc_ref(v___y_736_);
v___x_764_ = lean_apply_4(v___x_34603__overap_762_, v___y_734_, v___x_763_, v___y_736_, v___y_737_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7___boxed(lean_object* v_msg_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
uint8_t v___y_35286__boxed_770_; lean_object* v_res_771_; 
v___y_35286__boxed_770_ = lean_unbox(v___y_767_);
v_res_771_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7(v_msg_765_, v___y_766_, v___y_35286__boxed_770_, v___y_768_, v___y_769_);
lean_dec_ref(v___y_768_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__6(lean_object* v_structName_772_, lean_object* v_idx_773_, lean_object* v_struct_774_, lean_object* v___y_775_, uint8_t v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v___y_780_; lean_object* v___y_781_; 
if (v___y_776_ == 0)
{
v___y_780_ = v___y_775_;
v___y_781_ = v___y_778_;
goto v___jp_779_;
}
else
{
lean_object* v___x_803_; 
v___x_803_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_struct_774_, v___y_776_, v___y_777_, v___y_778_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; 
v_a_804_ = lean_ctor_get(v___x_803_, 1);
lean_inc(v_a_804_);
lean_dec_ref_known(v___x_803_, 2);
v___y_780_ = v___y_775_;
v___y_781_ = v_a_804_;
goto v___jp_779_;
}
else
{
lean_object* v_a_805_; lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_813_; 
lean_dec_ref(v___y_775_);
lean_dec_ref(v_struct_774_);
lean_dec(v_idx_773_);
lean_dec(v_structName_772_);
v_a_805_ = lean_ctor_get(v___x_803_, 0);
v_a_806_ = lean_ctor_get(v___x_803_, 1);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_813_ == 0)
{
v___x_808_ = v___x_803_;
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_inc(v_a_805_);
lean_dec(v___x_803_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_805_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v_a_806_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
v___jp_779_:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = l_Lean_Expr_proj___override(v_structName_772_, v_idx_773_, v_struct_774_);
v___x_783_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_782_, v___y_781_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_793_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
v_a_785_ = lean_ctor_get(v___x_783_, 1);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_793_ == 0)
{
v___x_787_ = v___x_783_;
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_inc(v_a_784_);
lean_dec(v___x_783_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_789_, 0, v_a_784_);
lean_ctor_set(v___x_789_, 1, v___y_780_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_789_);
v___x_791_ = v___x_787_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_789_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_a_785_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
else
{
lean_object* v_a_794_; lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
lean_dec_ref(v___y_780_);
v_a_794_ = lean_ctor_get(v___x_783_, 0);
v_a_795_ = lean_ctor_get(v___x_783_, 1);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_783_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_inc(v_a_794_);
lean_dec(v___x_783_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_794_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__6___boxed(lean_object* v_structName_814_, lean_object* v_idx_815_, lean_object* v_struct_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
uint8_t v___y_35357__boxed_821_; lean_object* v_res_822_; 
v___y_35357__boxed_821_ = lean_unbox(v___y_818_);
v_res_822_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__6(v_structName_814_, v_idx_815_, v_struct_816_, v___y_817_, v___y_35357__boxed_821_, v___y_819_, v___y_820_);
lean_dec_ref(v___y_819_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__4(lean_object* v_x_823_, lean_object* v_t_824_, lean_object* v_v_825_, lean_object* v_b_826_, uint8_t v_nondep_827_, lean_object* v___y_828_, uint8_t v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v___y_833_; lean_object* v___y_834_; 
if (v___y_829_ == 0)
{
v___y_833_ = v___y_828_;
v___y_834_ = v___y_831_;
goto v___jp_832_;
}
else
{
lean_object* v___x_856_; 
v___x_856_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_824_, v___y_829_, v___y_830_, v___y_831_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_858_; 
v_a_857_ = lean_ctor_get(v___x_856_, 1);
lean_inc(v_a_857_);
lean_dec_ref_known(v___x_856_, 2);
v___x_858_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_v_825_, v___y_829_, v___y_830_, v_a_857_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_860_; 
v_a_859_ = lean_ctor_get(v___x_858_, 1);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_858_, 2);
v___x_860_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_826_, v___y_829_, v___y_830_, v_a_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; 
v_a_861_ = lean_ctor_get(v___x_860_, 1);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 2);
v___y_833_ = v___y_828_;
v___y_834_ = v_a_861_;
goto v___jp_832_;
}
else
{
lean_object* v_a_862_; lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
lean_dec_ref(v___y_828_);
lean_dec_ref(v_b_826_);
lean_dec_ref(v_v_825_);
lean_dec_ref(v_t_824_);
lean_dec(v_x_823_);
v_a_862_ = lean_ctor_get(v___x_860_, 0);
v_a_863_ = lean_ctor_get(v___x_860_, 1);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_860_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_inc(v_a_862_);
lean_dec(v___x_860_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_862_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
else
{
lean_object* v_a_871_; lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec_ref(v___y_828_);
lean_dec_ref(v_b_826_);
lean_dec_ref(v_v_825_);
lean_dec_ref(v_t_824_);
lean_dec(v_x_823_);
v_a_871_ = lean_ctor_get(v___x_858_, 0);
v_a_872_ = lean_ctor_get(v___x_858_, 1);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_858_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_inc(v_a_871_);
lean_dec(v___x_858_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_871_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_a_872_);
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
lean_object* v_a_880_; lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_dec_ref(v___y_828_);
lean_dec_ref(v_b_826_);
lean_dec_ref(v_v_825_);
lean_dec_ref(v_t_824_);
lean_dec(v_x_823_);
v_a_880_ = lean_ctor_get(v___x_856_, 0);
v_a_881_ = lean_ctor_get(v___x_856_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_856_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_inc(v_a_880_);
lean_dec(v___x_856_);
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
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_880_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_a_881_);
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
v___jp_832_:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = l_Lean_Expr_letE___override(v_x_823_, v_t_824_, v_v_825_, v_b_826_, v_nondep_827_);
v___x_836_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_835_, v___y_834_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_846_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
v_a_838_ = lean_ctor_get(v___x_836_, 1);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_846_ == 0)
{
v___x_840_ = v___x_836_;
v_isShared_841_ = v_isSharedCheck_846_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_inc(v_a_837_);
lean_dec(v___x_836_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_846_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_842_; lean_object* v___x_844_; 
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v_a_837_);
lean_ctor_set(v___x_842_, 1, v___y_833_);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 0, v___x_842_);
v___x_844_ = v___x_840_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_a_838_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
else
{
lean_object* v_a_847_; lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec_ref(v___y_833_);
v_a_847_ = lean_ctor_get(v___x_836_, 0);
v_a_848_ = lean_ctor_get(v___x_836_, 1);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_836_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_inc(v_a_847_);
lean_dec(v___x_836_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_847_);
lean_ctor_set(v_reuseFailAlloc_854_, 1, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__4___boxed(lean_object* v_x_889_, lean_object* v_t_890_, lean_object* v_v_891_, lean_object* v_b_892_, lean_object* v_nondep_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
uint8_t v_nondep_boxed_898_; uint8_t v___y_35440__boxed_899_; lean_object* v_res_900_; 
v_nondep_boxed_898_ = lean_unbox(v_nondep_893_);
v___y_35440__boxed_899_ = lean_unbox(v___y_895_);
v_res_900_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__4(v_x_889_, v_t_890_, v_v_891_, v_b_892_, v_nondep_boxed_898_, v___y_894_, v___y_35440__boxed_899_, v___y_896_, v___y_897_);
lean_dec_ref(v___y_896_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__2(lean_object* v_x_901_, uint8_t v_bi_902_, lean_object* v_t_903_, lean_object* v_b_904_, lean_object* v___y_905_, uint8_t v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__2___boxed(lean_object* v_x_955_, lean_object* v_bi_956_, lean_object* v_t_957_, lean_object* v_b_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
uint8_t v_bi_boxed_963_; uint8_t v___y_35569__boxed_964_; lean_object* v_res_965_; 
v_bi_boxed_963_ = lean_unbox(v_bi_956_);
v___y_35569__boxed_964_ = lean_unbox(v___y_960_);
v_res_965_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__2(v_x_955_, v_bi_boxed_963_, v_t_957_, v_b_958_, v___y_959_, v___y_35569__boxed_964_, v___y_961_, v___y_962_);
lean_dec_ref(v___y_961_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__5(lean_object* v_d_966_, lean_object* v_e_967_, lean_object* v___y_968_, uint8_t v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v___y_973_; lean_object* v___y_974_; 
if (v___y_969_ == 0)
{
v___y_973_ = v___y_968_;
v___y_974_ = v___y_971_;
goto v___jp_972_;
}
else
{
lean_object* v___x_996_; 
v___x_996_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_e_967_, v___y_969_, v___y_970_, v___y_971_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; 
v_a_997_ = lean_ctor_get(v___x_996_, 1);
lean_inc(v_a_997_);
lean_dec_ref_known(v___x_996_, 2);
v___y_973_ = v___y_968_;
v___y_974_ = v_a_997_;
goto v___jp_972_;
}
else
{
lean_object* v_a_998_; lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_dec_ref(v___y_968_);
lean_dec_ref(v_e_967_);
lean_dec(v_d_966_);
v_a_998_ = lean_ctor_get(v___x_996_, 0);
v_a_999_ = lean_ctor_get(v___x_996_, 1);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_996_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_inc(v_a_998_);
lean_dec(v___x_996_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_998_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
v___jp_972_:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = l_Lean_Expr_mdata___override(v_d_966_, v_e_967_);
v___x_976_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_975_, v___y_974_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_986_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
v_a_978_ = lean_ctor_get(v___x_976_, 1);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_986_ == 0)
{
v___x_980_ = v___x_976_;
v_isShared_981_ = v_isSharedCheck_986_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_inc(v_a_977_);
lean_dec(v___x_976_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_986_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_982_, 0, v_a_977_);
lean_ctor_set(v___x_982_, 1, v___y_973_);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 0, v___x_982_);
v___x_984_ = v___x_980_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_982_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v_a_978_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
else
{
lean_object* v_a_987_; lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec_ref(v___y_973_);
v_a_987_ = lean_ctor_get(v___x_976_, 0);
v_a_988_ = lean_ctor_get(v___x_976_, 1);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_976_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_inc(v_a_987_);
lean_dec(v___x_976_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_987_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__5___boxed(lean_object* v_d_1007_, lean_object* v_e_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
uint8_t v___y_35675__boxed_1013_; lean_object* v_res_1014_; 
v___y_35675__boxed_1013_ = lean_unbox(v___y_1010_);
v_res_1014_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__5(v_d_1007_, v_e_1008_, v___y_1009_, v___y_35675__boxed_1013_, v___y_1011_, v___y_1012_);
lean_dec_ref(v___y_1011_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__3(lean_object* v_x_1015_, uint8_t v_bi_1016_, lean_object* v_t_1017_, lean_object* v_b_1018_, lean_object* v___y_1019_, uint8_t v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
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
v___x_1047_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_1017_, v___y_1020_, v___y_1021_, v___y_1022_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1049_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 1);
lean_inc(v_a_1048_);
lean_dec_ref_known(v___x_1047_, 2);
v___x_1049_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_1018_, v___y_1020_, v___y_1021_, v_a_1048_);
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
lean_dec_ref(v_b_1018_);
lean_dec_ref(v_t_1017_);
lean_dec(v_x_1015_);
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
lean_dec_ref(v_b_1018_);
lean_dec_ref(v_t_1017_);
lean_dec(v_x_1015_);
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
v___x_1026_ = l_Lean_Expr_forallE___override(v_x_1015_, v_t_1017_, v_b_1018_, v_bi_1016_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__3___boxed(lean_object* v_x_1069_, lean_object* v_bi_1070_, lean_object* v_t_1071_, lean_object* v_b_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
uint8_t v_bi_boxed_1077_; uint8_t v___y_35758__boxed_1078_; lean_object* v_res_1079_; 
v_bi_boxed_1077_ = lean_unbox(v_bi_1070_);
v___y_35758__boxed_1078_ = lean_unbox(v___y_1074_);
v_res_1079_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__3(v_x_1069_, v_bi_boxed_1077_, v_t_1071_, v_b_1072_, v___y_1073_, v___y_35758__boxed_1078_, v___y_1075_, v___y_1076_);
lean_dec_ref(v___y_1075_);
return v_res_1079_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1083_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__2));
v___x_1084_ = lean_unsigned_to_nat(67u);
v___x_1085_ = lean_unsigned_to_nat(35u);
v___x_1086_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__1));
v___x_1087_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__0));
v___x_1088_ = l_mkPanicMessageWithDecl(v___x_1087_, v___x_1086_, v___x_1085_, v___x_1084_, v___x_1083_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0(lean_object* v___x_1089_, lean_object* v___x_1090_, lean_object* v_e_1091_, lean_object* v_offset_1092_, lean_object* v___y_1093_, uint8_t v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
switch(lean_obj_tag(v_e_1091_))
{
case 5:
{
lean_object* v_fn_1097_; lean_object* v_arg_1098_; lean_object* v___x_1099_; 
v_fn_1097_ = lean_ctor_get(v_e_1091_, 0);
v_arg_1098_ = lean_ctor_get(v_e_1091_, 1);
lean_inc(v_offset_1092_);
lean_inc_ref(v_fn_1097_);
v___x_1099_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_fn_1097_, v_offset_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v_a_1101_; lean_object* v_fst_1102_; lean_object* v_snd_1103_; lean_object* v___x_1104_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1100_);
v_a_1101_ = lean_ctor_get(v___x_1099_, 1);
lean_inc(v_a_1101_);
lean_dec_ref_known(v___x_1099_, 2);
v_fst_1102_ = lean_ctor_get(v_a_1100_, 0);
lean_inc(v_fst_1102_);
v_snd_1103_ = lean_ctor_get(v_a_1100_, 1);
lean_inc(v_snd_1103_);
lean_dec(v_a_1100_);
lean_inc_ref(v_arg_1098_);
v___x_1104_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_arg_1098_, v_offset_1092_, v_snd_1103_, v___y_1094_, v___y_1095_, v_a_1101_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1130_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
v_a_1106_ = lean_ctor_get(v___x_1104_, 1);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1108_ = v___x_1104_;
v_isShared_1109_ = v_isSharedCheck_1130_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_inc(v_a_1105_);
lean_dec(v___x_1104_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1130_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v_fst_1110_; lean_object* v_snd_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1129_; 
v_fst_1110_ = lean_ctor_get(v_a_1105_, 0);
v_snd_1111_ = lean_ctor_get(v_a_1105_, 1);
v_isSharedCheck_1129_ = !lean_is_exclusive(v_a_1105_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1113_ = v_a_1105_;
v_isShared_1114_ = v_isSharedCheck_1129_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_snd_1111_);
lean_inc(v_fst_1110_);
lean_dec(v_a_1105_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1129_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
size_t v___x_1115_; size_t v___x_1116_; uint8_t v___x_1117_; 
v___x_1115_ = lean_ptr_addr(v_fn_1097_);
v___x_1116_ = lean_ptr_addr(v_fst_1102_);
v___x_1117_ = lean_usize_dec_eq(v___x_1115_, v___x_1116_);
if (v___x_1117_ == 0)
{
lean_object* v___x_1118_; 
lean_del_object(v___x_1113_);
lean_del_object(v___x_1108_);
lean_dec_ref_known(v_e_1091_, 2);
v___x_1118_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__1(v_fst_1102_, v_fst_1110_, v_snd_1111_, v___y_1094_, v___y_1095_, v_a_1106_);
return v___x_1118_;
}
else
{
size_t v___x_1119_; size_t v___x_1120_; uint8_t v___x_1121_; 
v___x_1119_ = lean_ptr_addr(v_arg_1098_);
v___x_1120_ = lean_ptr_addr(v_fst_1110_);
v___x_1121_ = lean_usize_dec_eq(v___x_1119_, v___x_1120_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; 
lean_del_object(v___x_1113_);
lean_del_object(v___x_1108_);
lean_dec_ref_known(v_e_1091_, 2);
v___x_1122_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__1(v_fst_1102_, v_fst_1110_, v_snd_1111_, v___y_1094_, v___y_1095_, v_a_1106_);
return v___x_1122_;
}
else
{
lean_object* v___x_1124_; 
lean_dec(v_fst_1110_);
lean_dec(v_fst_1102_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 0, v_e_1091_);
v___x_1124_ = v___x_1113_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_e_1091_);
lean_ctor_set(v_reuseFailAlloc_1128_, 1, v_snd_1111_);
v___x_1124_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1126_; 
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1124_);
v___x_1126_ = v___x_1108_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1124_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_a_1106_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1102_);
lean_dec_ref_known(v_e_1091_, 2);
return v___x_1104_;
}
}
else
{
lean_dec_ref_known(v_e_1091_, 2);
lean_dec(v_offset_1092_);
return v___x_1099_;
}
}
case 6:
{
lean_object* v_binderName_1131_; lean_object* v_binderType_1132_; lean_object* v_body_1133_; uint8_t v_binderInfo_1134_; lean_object* v___x_1135_; 
v_binderName_1131_ = lean_ctor_get(v_e_1091_, 0);
v_binderType_1132_ = lean_ctor_get(v_e_1091_, 1);
v_body_1133_ = lean_ctor_get(v_e_1091_, 2);
v_binderInfo_1134_ = lean_ctor_get_uint8(v_e_1091_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1092_);
lean_inc_ref(v_binderType_1132_);
v___x_1135_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_binderType_1132_, v_offset_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v_a_1136_; lean_object* v_a_1137_; lean_object* v_fst_1138_; lean_object* v_snd_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc(v_a_1136_);
v_a_1137_ = lean_ctor_get(v___x_1135_, 1);
lean_inc(v_a_1137_);
lean_dec_ref_known(v___x_1135_, 2);
v_fst_1138_ = lean_ctor_get(v_a_1136_, 0);
lean_inc(v_fst_1138_);
v_snd_1139_ = lean_ctor_get(v_a_1136_, 1);
lean_inc(v_snd_1139_);
lean_dec(v_a_1136_);
v___x_1140_ = lean_unsigned_to_nat(1u);
v___x_1141_ = lean_nat_add(v_offset_1092_, v___x_1140_);
lean_dec(v_offset_1092_);
lean_inc_ref(v_body_1133_);
v___x_1142_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_body_1133_, v___x_1141_, v_snd_1139_, v___y_1094_, v___y_1095_, v_a_1137_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1168_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_a_1144_ = lean_ctor_get(v___x_1142_, 1);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1146_ = v___x_1142_;
v_isShared_1147_ = v_isSharedCheck_1168_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1168_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v_fst_1148_; lean_object* v_snd_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1167_; 
v_fst_1148_ = lean_ctor_get(v_a_1143_, 0);
v_snd_1149_ = lean_ctor_get(v_a_1143_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_a_1143_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1151_ = v_a_1143_;
v_isShared_1152_ = v_isSharedCheck_1167_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_snd_1149_);
lean_inc(v_fst_1148_);
lean_dec(v_a_1143_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1167_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
size_t v___x_1153_; size_t v___x_1154_; uint8_t v___x_1155_; 
v___x_1153_ = lean_ptr_addr(v_binderType_1132_);
v___x_1154_ = lean_ptr_addr(v_fst_1138_);
v___x_1155_ = lean_usize_dec_eq(v___x_1153_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; 
lean_inc(v_binderName_1131_);
lean_del_object(v___x_1151_);
lean_del_object(v___x_1146_);
lean_dec_ref_known(v_e_1091_, 3);
v___x_1156_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__2(v_binderName_1131_, v_binderInfo_1134_, v_fst_1138_, v_fst_1148_, v_snd_1149_, v___y_1094_, v___y_1095_, v_a_1144_);
return v___x_1156_;
}
else
{
size_t v___x_1157_; size_t v___x_1158_; uint8_t v___x_1159_; 
v___x_1157_ = lean_ptr_addr(v_body_1133_);
v___x_1158_ = lean_ptr_addr(v_fst_1148_);
v___x_1159_ = lean_usize_dec_eq(v___x_1157_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; 
lean_inc(v_binderName_1131_);
lean_del_object(v___x_1151_);
lean_del_object(v___x_1146_);
lean_dec_ref_known(v_e_1091_, 3);
v___x_1160_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__2(v_binderName_1131_, v_binderInfo_1134_, v_fst_1138_, v_fst_1148_, v_snd_1149_, v___y_1094_, v___y_1095_, v_a_1144_);
return v___x_1160_;
}
else
{
lean_object* v___x_1162_; 
lean_dec(v_fst_1148_);
lean_dec(v_fst_1138_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v_e_1091_);
v___x_1162_ = v___x_1151_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_e_1091_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_snd_1149_);
v___x_1162_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
lean_object* v___x_1164_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1162_);
v___x_1164_ = v___x_1146_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1162_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_a_1144_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1138_);
lean_dec_ref_known(v_e_1091_, 3);
return v___x_1142_;
}
}
else
{
lean_dec_ref_known(v_e_1091_, 3);
lean_dec(v_offset_1092_);
return v___x_1135_;
}
}
case 7:
{
lean_object* v_binderName_1169_; lean_object* v_binderType_1170_; lean_object* v_body_1171_; uint8_t v_binderInfo_1172_; lean_object* v___x_1173_; 
v_binderName_1169_ = lean_ctor_get(v_e_1091_, 0);
v_binderType_1170_ = lean_ctor_get(v_e_1091_, 1);
v_body_1171_ = lean_ctor_get(v_e_1091_, 2);
v_binderInfo_1172_ = lean_ctor_get_uint8(v_e_1091_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1092_);
lean_inc_ref(v_binderType_1170_);
v___x_1173_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_binderType_1170_, v_offset_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v_a_1175_; lean_object* v_fst_1176_; lean_object* v_snd_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
v_a_1175_ = lean_ctor_get(v___x_1173_, 1);
lean_inc(v_a_1175_);
lean_dec_ref_known(v___x_1173_, 2);
v_fst_1176_ = lean_ctor_get(v_a_1174_, 0);
lean_inc(v_fst_1176_);
v_snd_1177_ = lean_ctor_get(v_a_1174_, 1);
lean_inc(v_snd_1177_);
lean_dec(v_a_1174_);
v___x_1178_ = lean_unsigned_to_nat(1u);
v___x_1179_ = lean_nat_add(v_offset_1092_, v___x_1178_);
lean_dec(v_offset_1092_);
lean_inc_ref(v_body_1171_);
v___x_1180_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_body_1171_, v___x_1179_, v_snd_1177_, v___y_1094_, v___y_1095_, v_a_1175_);
if (lean_obj_tag(v___x_1180_) == 0)
{
lean_object* v_a_1181_; lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1206_; 
v_a_1181_ = lean_ctor_get(v___x_1180_, 0);
v_a_1182_ = lean_ctor_get(v___x_1180_, 1);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1184_ = v___x_1180_;
v_isShared_1185_ = v_isSharedCheck_1206_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_inc(v_a_1181_);
lean_dec(v___x_1180_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1206_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v_fst_1186_; lean_object* v_snd_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1205_; 
v_fst_1186_ = lean_ctor_get(v_a_1181_, 0);
v_snd_1187_ = lean_ctor_get(v_a_1181_, 1);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_a_1181_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1189_ = v_a_1181_;
v_isShared_1190_ = v_isSharedCheck_1205_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_snd_1187_);
lean_inc(v_fst_1186_);
lean_dec(v_a_1181_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1205_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
size_t v___x_1191_; size_t v___x_1192_; uint8_t v___x_1193_; 
v___x_1191_ = lean_ptr_addr(v_binderType_1170_);
v___x_1192_ = lean_ptr_addr(v_fst_1176_);
v___x_1193_ = lean_usize_dec_eq(v___x_1191_, v___x_1192_);
if (v___x_1193_ == 0)
{
lean_object* v___x_1194_; 
lean_inc(v_binderName_1169_);
lean_del_object(v___x_1189_);
lean_del_object(v___x_1184_);
lean_dec_ref_known(v_e_1091_, 3);
v___x_1194_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__3(v_binderName_1169_, v_binderInfo_1172_, v_fst_1176_, v_fst_1186_, v_snd_1187_, v___y_1094_, v___y_1095_, v_a_1182_);
return v___x_1194_;
}
else
{
size_t v___x_1195_; size_t v___x_1196_; uint8_t v___x_1197_; 
v___x_1195_ = lean_ptr_addr(v_body_1171_);
v___x_1196_ = lean_ptr_addr(v_fst_1186_);
v___x_1197_ = lean_usize_dec_eq(v___x_1195_, v___x_1196_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; 
lean_inc(v_binderName_1169_);
lean_del_object(v___x_1189_);
lean_del_object(v___x_1184_);
lean_dec_ref_known(v_e_1091_, 3);
v___x_1198_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__3(v_binderName_1169_, v_binderInfo_1172_, v_fst_1176_, v_fst_1186_, v_snd_1187_, v___y_1094_, v___y_1095_, v_a_1182_);
return v___x_1198_;
}
else
{
lean_object* v___x_1200_; 
lean_dec(v_fst_1186_);
lean_dec(v_fst_1176_);
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 0, v_e_1091_);
v___x_1200_ = v___x_1189_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_e_1091_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_snd_1187_);
v___x_1200_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1202_; 
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1200_);
v___x_1202_ = v___x_1184_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v_a_1182_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1176_);
lean_dec_ref_known(v_e_1091_, 3);
return v___x_1180_;
}
}
else
{
lean_dec_ref_known(v_e_1091_, 3);
lean_dec(v_offset_1092_);
return v___x_1173_;
}
}
case 8:
{
lean_object* v_declName_1207_; lean_object* v_type_1208_; lean_object* v_value_1209_; lean_object* v_body_1210_; uint8_t v_nondep_1211_; lean_object* v___x_1212_; 
v_declName_1207_ = lean_ctor_get(v_e_1091_, 0);
v_type_1208_ = lean_ctor_get(v_e_1091_, 1);
v_value_1209_ = lean_ctor_get(v_e_1091_, 2);
v_body_1210_ = lean_ctor_get(v_e_1091_, 3);
v_nondep_1211_ = lean_ctor_get_uint8(v_e_1091_, sizeof(void*)*4 + 8);
lean_inc(v_offset_1092_);
lean_inc_ref(v_type_1208_);
v___x_1212_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_type_1208_, v_offset_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; lean_object* v_a_1214_; lean_object* v_fst_1215_; lean_object* v_snd_1216_; lean_object* v___x_1217_; 
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1213_);
v_a_1214_ = lean_ctor_get(v___x_1212_, 1);
lean_inc(v_a_1214_);
lean_dec_ref_known(v___x_1212_, 2);
v_fst_1215_ = lean_ctor_get(v_a_1213_, 0);
lean_inc(v_fst_1215_);
v_snd_1216_ = lean_ctor_get(v_a_1213_, 1);
lean_inc(v_snd_1216_);
lean_dec(v_a_1213_);
lean_inc(v_offset_1092_);
lean_inc_ref(v_value_1209_);
v___x_1217_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_value_1209_, v_offset_1092_, v_snd_1216_, v___y_1094_, v___y_1095_, v_a_1214_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v_a_1219_; lean_object* v_fst_1220_; lean_object* v_snd_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1218_);
v_a_1219_ = lean_ctor_get(v___x_1217_, 1);
lean_inc(v_a_1219_);
lean_dec_ref_known(v___x_1217_, 2);
v_fst_1220_ = lean_ctor_get(v_a_1218_, 0);
lean_inc(v_fst_1220_);
v_snd_1221_ = lean_ctor_get(v_a_1218_, 1);
lean_inc(v_snd_1221_);
lean_dec(v_a_1218_);
v___x_1222_ = lean_unsigned_to_nat(1u);
v___x_1223_ = lean_nat_add(v_offset_1092_, v___x_1222_);
lean_dec(v_offset_1092_);
lean_inc_ref(v_body_1210_);
v___x_1224_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_body_1210_, v___x_1223_, v_snd_1221_, v___y_1094_, v___y_1095_, v_a_1219_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v_a_1225_; lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1254_; 
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
v_a_1226_ = lean_ctor_get(v___x_1224_, 1);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1228_ = v___x_1224_;
v_isShared_1229_ = v_isSharedCheck_1254_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_inc(v_a_1225_);
lean_dec(v___x_1224_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1254_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v_fst_1230_; lean_object* v_snd_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1253_; 
v_fst_1230_ = lean_ctor_get(v_a_1225_, 0);
v_snd_1231_ = lean_ctor_get(v_a_1225_, 1);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_a_1225_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1233_ = v_a_1225_;
v_isShared_1234_ = v_isSharedCheck_1253_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_snd_1231_);
lean_inc(v_fst_1230_);
lean_dec(v_a_1225_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1253_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
size_t v___x_1235_; size_t v___x_1236_; uint8_t v___x_1237_; 
v___x_1235_ = lean_ptr_addr(v_type_1208_);
v___x_1236_ = lean_ptr_addr(v_fst_1215_);
v___x_1237_ = lean_usize_dec_eq(v___x_1235_, v___x_1236_);
if (v___x_1237_ == 0)
{
lean_object* v___x_1238_; 
lean_inc(v_declName_1207_);
lean_del_object(v___x_1233_);
lean_del_object(v___x_1228_);
lean_dec_ref_known(v_e_1091_, 4);
v___x_1238_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__4(v_declName_1207_, v_fst_1215_, v_fst_1220_, v_fst_1230_, v_nondep_1211_, v_snd_1231_, v___y_1094_, v___y_1095_, v_a_1226_);
return v___x_1238_;
}
else
{
size_t v___x_1239_; size_t v___x_1240_; uint8_t v___x_1241_; 
v___x_1239_ = lean_ptr_addr(v_value_1209_);
v___x_1240_ = lean_ptr_addr(v_fst_1220_);
v___x_1241_ = lean_usize_dec_eq(v___x_1239_, v___x_1240_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; 
lean_inc(v_declName_1207_);
lean_del_object(v___x_1233_);
lean_del_object(v___x_1228_);
lean_dec_ref_known(v_e_1091_, 4);
v___x_1242_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__4(v_declName_1207_, v_fst_1215_, v_fst_1220_, v_fst_1230_, v_nondep_1211_, v_snd_1231_, v___y_1094_, v___y_1095_, v_a_1226_);
return v___x_1242_;
}
else
{
size_t v___x_1243_; size_t v___x_1244_; uint8_t v___x_1245_; 
v___x_1243_ = lean_ptr_addr(v_body_1210_);
v___x_1244_ = lean_ptr_addr(v_fst_1230_);
v___x_1245_ = lean_usize_dec_eq(v___x_1243_, v___x_1244_);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; 
lean_inc(v_declName_1207_);
lean_del_object(v___x_1233_);
lean_del_object(v___x_1228_);
lean_dec_ref_known(v_e_1091_, 4);
v___x_1246_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__4(v_declName_1207_, v_fst_1215_, v_fst_1220_, v_fst_1230_, v_nondep_1211_, v_snd_1231_, v___y_1094_, v___y_1095_, v_a_1226_);
return v___x_1246_;
}
else
{
lean_object* v___x_1248_; 
lean_dec(v_fst_1230_);
lean_dec(v_fst_1220_);
lean_dec(v_fst_1215_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 0, v_e_1091_);
v___x_1248_ = v___x_1233_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_e_1091_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_snd_1231_);
v___x_1248_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
lean_object* v___x_1250_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v___x_1248_);
v___x_1250_ = v___x_1228_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v___x_1248_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_a_1226_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
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
lean_dec(v_fst_1220_);
lean_dec(v_fst_1215_);
lean_dec_ref_known(v_e_1091_, 4);
return v___x_1224_;
}
}
else
{
lean_dec(v_fst_1215_);
lean_dec_ref_known(v_e_1091_, 4);
lean_dec(v_offset_1092_);
return v___x_1217_;
}
}
else
{
lean_dec_ref_known(v_e_1091_, 4);
lean_dec(v_offset_1092_);
return v___x_1212_;
}
}
case 10:
{
lean_object* v_data_1255_; lean_object* v_expr_1256_; lean_object* v___x_1257_; 
v_data_1255_ = lean_ctor_get(v_e_1091_, 0);
v_expr_1256_ = lean_ctor_get(v_e_1091_, 1);
lean_inc_ref(v_expr_1256_);
v___x_1257_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_expr_1256_, v_offset_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1279_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
v_a_1259_ = lean_ctor_get(v___x_1257_, 1);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1261_ = v___x_1257_;
v_isShared_1262_ = v_isSharedCheck_1279_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_inc(v_a_1258_);
lean_dec(v___x_1257_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1279_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v_fst_1263_; lean_object* v_snd_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1278_; 
v_fst_1263_ = lean_ctor_get(v_a_1258_, 0);
v_snd_1264_ = lean_ctor_get(v_a_1258_, 1);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_a_1258_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1266_ = v_a_1258_;
v_isShared_1267_ = v_isSharedCheck_1278_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_snd_1264_);
lean_inc(v_fst_1263_);
lean_dec(v_a_1258_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1278_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
size_t v___x_1268_; size_t v___x_1269_; uint8_t v___x_1270_; 
v___x_1268_ = lean_ptr_addr(v_expr_1256_);
v___x_1269_ = lean_ptr_addr(v_fst_1263_);
v___x_1270_ = lean_usize_dec_eq(v___x_1268_, v___x_1269_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; 
lean_inc(v_data_1255_);
lean_del_object(v___x_1266_);
lean_del_object(v___x_1261_);
lean_dec_ref_known(v_e_1091_, 2);
v___x_1271_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__5(v_data_1255_, v_fst_1263_, v_snd_1264_, v___y_1094_, v___y_1095_, v_a_1259_);
return v___x_1271_;
}
else
{
lean_object* v___x_1273_; 
lean_dec(v_fst_1263_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v_e_1091_);
v___x_1273_ = v___x_1266_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_e_1091_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v_snd_1264_);
v___x_1273_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
lean_object* v___x_1275_; 
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v___x_1273_);
v___x_1275_ = v___x_1261_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1273_);
lean_ctor_set(v_reuseFailAlloc_1276_, 1, v_a_1259_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_1091_, 2);
return v___x_1257_;
}
}
case 11:
{
lean_object* v_typeName_1280_; lean_object* v_idx_1281_; lean_object* v_struct_1282_; lean_object* v___x_1283_; 
v_typeName_1280_ = lean_ctor_get(v_e_1091_, 0);
v_idx_1281_ = lean_ctor_get(v_e_1091_, 1);
v_struct_1282_ = lean_ctor_get(v_e_1091_, 2);
lean_inc_ref(v_struct_1282_);
v___x_1283_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1089_, v___x_1090_, v_struct_1282_, v_offset_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1305_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
v_a_1285_ = lean_ctor_get(v___x_1283_, 1);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1287_ = v___x_1283_;
v_isShared_1288_ = v_isSharedCheck_1305_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_inc(v_a_1284_);
lean_dec(v___x_1283_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1305_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v_fst_1289_; lean_object* v_snd_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1304_; 
v_fst_1289_ = lean_ctor_get(v_a_1284_, 0);
v_snd_1290_ = lean_ctor_get(v_a_1284_, 1);
v_isSharedCheck_1304_ = !lean_is_exclusive(v_a_1284_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1292_ = v_a_1284_;
v_isShared_1293_ = v_isSharedCheck_1304_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_snd_1290_);
lean_inc(v_fst_1289_);
lean_dec(v_a_1284_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1304_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
size_t v___x_1294_; size_t v___x_1295_; uint8_t v___x_1296_; 
v___x_1294_ = lean_ptr_addr(v_struct_1282_);
v___x_1295_ = lean_ptr_addr(v_fst_1289_);
v___x_1296_ = lean_usize_dec_eq(v___x_1294_, v___x_1295_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; 
lean_inc(v_idx_1281_);
lean_inc(v_typeName_1280_);
lean_del_object(v___x_1292_);
lean_del_object(v___x_1287_);
lean_dec_ref_known(v_e_1091_, 3);
v___x_1297_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__6(v_typeName_1280_, v_idx_1281_, v_fst_1289_, v_snd_1290_, v___y_1094_, v___y_1095_, v_a_1285_);
return v___x_1297_;
}
else
{
lean_object* v___x_1299_; 
lean_dec(v_fst_1289_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v_e_1091_);
v___x_1299_ = v___x_1292_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_e_1091_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v_snd_1290_);
v___x_1299_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
lean_object* v___x_1301_; 
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 0, v___x_1299_);
v___x_1301_ = v___x_1287_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v___x_1299_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v_a_1285_);
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
}
}
else
{
lean_dec_ref_known(v_e_1091_, 3);
return v___x_1283_;
}
}
default: 
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
lean_dec(v_offset_1092_);
lean_dec_ref(v_e_1091_);
v___x_1306_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__3);
v___x_1307_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__7(v___x_1306_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
return v___x_1307_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(lean_object* v___x_1308_, lean_object* v___x_1309_, lean_object* v_e_1310_, lean_object* v_offset_1311_, lean_object* v___y_1312_, uint8_t v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
lean_object* v_key_1316_; lean_object* v___x_1317_; 
lean_inc(v_offset_1311_);
lean_inc_ref(v_e_1310_);
v_key_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_1316_, 0, v_e_1310_);
lean_ctor_set(v_key_1316_, 1, v_offset_1311_);
v___x_1317_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2___redArg(v___y_1312_, v_key_1316_);
if (lean_obj_tag(v___x_1317_) == 1)
{
lean_object* v_val_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
lean_dec_ref_known(v_key_1316_, 2);
lean_dec(v_offset_1311_);
lean_dec_ref(v_e_1310_);
v_val_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_val_1318_);
lean_dec_ref_known(v___x_1317_, 1);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v_val_1318_);
lean_ctor_set(v___x_1319_, 1, v___y_1312_);
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
lean_ctor_set(v___x_1320_, 1, v___y_1315_);
return v___x_1320_;
}
else
{
lean_dec(v___x_1317_);
switch(lean_obj_tag(v_e_1310_))
{
case 0:
{
lean_object* v_deBruijnIndex_1321_; uint8_t v___x_1322_; 
v_deBruijnIndex_1321_ = lean_ctor_get(v_e_1310_, 0);
v___x_1322_ = lean_nat_dec_le(v_offset_1311_, v_deBruijnIndex_1321_);
if (v___x_1322_ == 0)
{
lean_object* v___x_1323_; 
lean_dec(v_offset_1311_);
v___x_1323_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1323_;
}
else
{
lean_object* v_size_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; 
lean_inc(v_deBruijnIndex_1321_);
lean_dec_ref_known(v_e_1310_, 1);
v_size_1324_ = lean_ctor_get(v___x_1309_, 2);
v___x_1325_ = l_Lean_instInhabitedExpr;
v___x_1326_ = lean_nat_sub(v_deBruijnIndex_1321_, v_offset_1311_);
lean_dec(v_offset_1311_);
lean_dec(v_deBruijnIndex_1321_);
v___x_1327_ = lean_nat_sub(v___x_1308_, v___x_1326_);
lean_dec(v___x_1326_);
v___x_1328_ = lean_unsigned_to_nat(1u);
v___x_1329_ = lean_nat_sub(v___x_1327_, v___x_1328_);
lean_dec(v___x_1327_);
v___x_1330_ = lean_nat_dec_lt(v___x_1329_, v_size_1324_);
if (v___x_1330_ == 0)
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
lean_dec(v___x_1329_);
v___x_1331_ = l_outOfBounds___redArg(v___x_1325_);
v___x_1332_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v___x_1331_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1332_;
}
else
{
lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1325_, v___x_1309_, v___x_1329_);
lean_dec(v___x_1329_);
v___x_1334_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v___x_1333_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1334_;
}
}
}
case 9:
{
lean_object* v___x_1335_; 
lean_dec(v_offset_1311_);
v___x_1335_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1335_;
}
case 2:
{
lean_object* v___x_1336_; 
lean_dec(v_offset_1311_);
v___x_1336_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1336_;
}
case 1:
{
lean_object* v___x_1337_; 
lean_dec(v_offset_1311_);
v___x_1337_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1337_;
}
case 4:
{
lean_object* v___x_1338_; 
lean_dec(v_offset_1311_);
v___x_1338_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1338_;
}
case 3:
{
lean_object* v___x_1339_; 
lean_dec(v_offset_1311_);
v___x_1339_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1339_;
}
default: 
{
lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1340_ = l_Lean_Expr_looseBVarRange(v_e_1310_);
v___x_1341_ = lean_nat_dec_le(v___x_1340_, v_offset_1311_);
lean_dec(v___x_1340_);
if (v___x_1341_ == 0)
{
switch(lean_obj_tag(v_e_1310_))
{
case 9:
{
lean_object* v___x_1342_; 
lean_dec(v_offset_1311_);
v___x_1342_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1342_;
}
case 2:
{
lean_object* v___x_1343_; 
lean_dec(v_offset_1311_);
v___x_1343_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1343_;
}
case 0:
{
lean_object* v___x_1344_; 
lean_dec(v_offset_1311_);
v___x_1344_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1344_;
}
case 1:
{
lean_object* v___x_1345_; 
lean_dec(v_offset_1311_);
v___x_1345_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1345_;
}
case 4:
{
lean_object* v___x_1346_; 
lean_dec(v_offset_1311_);
v___x_1346_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1346_;
}
case 3:
{
lean_object* v___x_1347_; 
lean_dec(v_offset_1311_);
v___x_1347_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1347_;
}
default: 
{
lean_object* v___x_1348_; 
v___x_1348_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0(v___x_1308_, v___x_1309_, v_e_1310_, v_offset_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v_a_1350_; lean_object* v_fst_1351_; lean_object* v_snd_1352_; lean_object* v___x_1353_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
v_a_1350_ = lean_ctor_get(v___x_1348_, 1);
lean_inc(v_a_1350_);
lean_dec_ref_known(v___x_1348_, 2);
v_fst_1351_ = lean_ctor_get(v_a_1349_, 0);
lean_inc(v_fst_1351_);
v_snd_1352_ = lean_ctor_get(v_a_1349_, 1);
lean_inc(v_snd_1352_);
lean_dec(v_a_1349_);
v___x_1353_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_fst_1351_, v_snd_1352_, v___y_1313_, v___y_1314_, v_a_1350_);
return v___x_1353_;
}
else
{
lean_dec_ref_known(v_key_1316_, 2);
return v___x_1348_;
}
}
}
}
else
{
lean_object* v___x_1354_; 
lean_dec(v_offset_1311_);
v___x_1354_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1316_, v_e_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
return v___x_1354_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0___boxed(lean_object* v___x_1355_, lean_object* v___x_1356_, lean_object* v_e_1357_, lean_object* v_offset_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
uint8_t v___y_35875__boxed_1363_; lean_object* v_res_1364_; 
v___y_35875__boxed_1363_ = lean_unbox(v___y_1360_);
v_res_1364_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0(v___x_1355_, v___x_1356_, v_e_1357_, v_offset_1358_, v___y_1359_, v___y_35875__boxed_1363_, v___y_1361_, v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec_ref(v___x_1356_);
lean_dec(v___x_1355_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___boxed(lean_object* v___x_1365_, lean_object* v___x_1366_, lean_object* v_e_1367_, lean_object* v_offset_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
uint8_t v___y_35942__boxed_1373_; lean_object* v_res_1374_; 
v___y_35942__boxed_1373_ = lean_unbox(v___y_1370_);
v_res_1374_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0(v___x_1365_, v___x_1366_, v_e_1367_, v_offset_1368_, v___y_1369_, v___y_35942__boxed_1373_, v___y_1371_, v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec_ref(v___x_1366_);
lean_dec(v___x_1365_);
return v_res_1374_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1375_ = lean_box(0);
v___x_1376_ = lean_unsigned_to_nat(16u);
v___x_1377_ = lean_mk_array(v___x_1376_, v___x_1375_);
return v___x_1377_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1378_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__0, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__0);
v___x_1379_ = lean_unsigned_to_nat(0u);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
lean_ctor_set(v___x_1380_, 1, v___x_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0(lean_object* v_e_1381_, lean_object* v_size_1382_, lean_object* v___x_1383_, lean_object* v_xs_1384_, uint8_t v_debug_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = lean_unsigned_to_nat(0u);
switch(lean_obj_tag(v_e_1381_))
{
case 0:
{
lean_object* v_deBruijnIndex_1389_; uint8_t v___x_1390_; 
v_deBruijnIndex_1389_ = lean_ctor_get(v_e_1381_, 0);
v___x_1390_ = lean_nat_dec_le(v___x_1388_, v_deBruijnIndex_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1391_, 0, v_e_1381_);
lean_ctor_set(v___x_1391_, 1, v___y_1387_);
return v___x_1391_;
}
else
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; 
lean_inc(v_deBruijnIndex_1389_);
lean_dec_ref_known(v_e_1381_, 1);
v___x_1392_ = lean_nat_sub(v_size_1382_, v_deBruijnIndex_1389_);
lean_dec(v_deBruijnIndex_1389_);
v___x_1393_ = lean_unsigned_to_nat(1u);
v___x_1394_ = lean_nat_sub(v___x_1392_, v___x_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_nat_dec_lt(v___x_1394_, v_size_1382_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
lean_dec(v___x_1394_);
v___x_1396_ = l_outOfBounds___redArg(v___x_1383_);
v___x_1397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1396_);
lean_ctor_set(v___x_1397_, 1, v___y_1387_);
return v___x_1397_;
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1398_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1383_, v_xs_1384_, v___x_1394_);
lean_dec(v___x_1394_);
v___x_1399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
lean_ctor_set(v___x_1399_, 1, v___y_1387_);
return v___x_1399_;
}
}
}
case 9:
{
lean_object* v___x_1400_; 
v___x_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1400_, 0, v_e_1381_);
lean_ctor_set(v___x_1400_, 1, v___y_1387_);
return v___x_1400_;
}
case 2:
{
lean_object* v___x_1401_; 
v___x_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1401_, 0, v_e_1381_);
lean_ctor_set(v___x_1401_, 1, v___y_1387_);
return v___x_1401_;
}
case 1:
{
lean_object* v___x_1402_; 
v___x_1402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1402_, 0, v_e_1381_);
lean_ctor_set(v___x_1402_, 1, v___y_1387_);
return v___x_1402_;
}
case 4:
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1403_, 0, v_e_1381_);
lean_ctor_set(v___x_1403_, 1, v___y_1387_);
return v___x_1403_;
}
case 3:
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1404_, 0, v_e_1381_);
lean_ctor_set(v___x_1404_, 1, v___y_1387_);
return v___x_1404_;
}
default: 
{
lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = l_Lean_Expr_looseBVarRange(v_e_1381_);
v___x_1406_ = lean_nat_dec_le(v___x_1405_, v___x_1388_);
lean_dec(v___x_1405_);
if (v___x_1406_ == 0)
{
switch(lean_obj_tag(v_e_1381_))
{
case 9:
{
lean_object* v___x_1407_; 
v___x_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1407_, 0, v_e_1381_);
lean_ctor_set(v___x_1407_, 1, v___y_1387_);
return v___x_1407_;
}
case 2:
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1408_, 0, v_e_1381_);
lean_ctor_set(v___x_1408_, 1, v___y_1387_);
return v___x_1408_;
}
case 0:
{
lean_object* v___x_1409_; 
v___x_1409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1409_, 0, v_e_1381_);
lean_ctor_set(v___x_1409_, 1, v___y_1387_);
return v___x_1409_;
}
case 1:
{
lean_object* v___x_1410_; 
v___x_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1410_, 0, v_e_1381_);
lean_ctor_set(v___x_1410_, 1, v___y_1387_);
return v___x_1410_;
}
case 4:
{
lean_object* v___x_1411_; 
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v_e_1381_);
lean_ctor_set(v___x_1411_, 1, v___y_1387_);
return v___x_1411_;
}
case 3:
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1412_, 0, v_e_1381_);
lean_ctor_set(v___x_1412_, 1, v___y_1387_);
return v___x_1412_;
}
default: 
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1413_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___closed__1);
v___x_1414_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0(v_size_1382_, v_xs_1384_, v_e_1381_, v___x_1388_, v___x_1413_, v_debug_1385_, v___y_1386_, v___y_1387_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1424_; 
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
v_a_1416_ = lean_ctor_get(v___x_1414_, 1);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1418_ = v___x_1414_;
v_isShared_1419_ = v_isSharedCheck_1424_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_inc(v_a_1415_);
lean_dec(v___x_1414_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1424_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v_fst_1420_; lean_object* v___x_1422_; 
v_fst_1420_ = lean_ctor_get(v_a_1415_, 0);
lean_inc(v_fst_1420_);
lean_dec(v_a_1415_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 0, v_fst_1420_);
v___x_1422_ = v___x_1418_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_fst_1420_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v_a_1416_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
else
{
lean_object* v_a_1425_; lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
v_a_1425_ = lean_ctor_get(v___x_1414_, 0);
v_a_1426_ = lean_ctor_get(v___x_1414_, 1);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1414_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_inc(v_a_1425_);
lean_dec(v___x_1414_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1425_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
}
}
else
{
lean_object* v___x_1434_; 
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v_e_1381_);
lean_ctor_set(v___x_1434_, 1, v___y_1387_);
return v___x_1434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___boxed(lean_object* v_e_1435_, lean_object* v_size_1436_, lean_object* v___x_1437_, lean_object* v_xs_1438_, lean_object* v_debug_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_){
_start:
{
uint8_t v_debug_boxed_1442_; lean_object* v_res_1443_; 
v_debug_boxed_1442_ = lean_unbox(v_debug_1439_);
v_res_1443_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0(v_e_1435_, v_size_1436_, v___x_1437_, v_xs_1438_, v_debug_boxed_1442_, v___y_1440_, v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_xs_1438_);
lean_dec_ref(v___x_1437_);
lean_dec(v_size_1436_);
return v_res_1443_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__2(void){
_start:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1446_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__2));
v___x_1447_ = lean_unsigned_to_nat(16u);
v___x_1448_ = lean_unsigned_to_nat(62u);
v___x_1449_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__1));
v___x_1450_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__0));
v___x_1451_ = l_mkPanicMessageWithDecl(v___x_1450_, v___x_1449_, v___x_1448_, v___x_1447_, v___x_1446_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(lean_object* v_e_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v_a_1463_; uint8_t v___x_1481_; 
v___x_1481_ = l_Lean_Expr_hasLooseBVars(v_e_1452_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1482_; 
v___x_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1482_, 0, v_e_1452_);
return v___x_1482_;
}
else
{
lean_object* v___x_1483_; uint8_t v___x_1484_; lean_object* v___x_1485_; lean_object* v_subst_1486_; lean_object* v___x_1487_; 
v___x_1483_ = l_Lean_instInhabitedExpr;
v___x_1484_ = 0;
v___x_1485_ = lean_st_ref_get(v___y_1454_);
v_subst_1486_ = lean_ctor_get(v___x_1485_, 2);
lean_inc_ref(v_subst_1486_);
lean_dec(v___x_1485_);
v___x_1487_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg(v_subst_1486_, v_e_1452_);
lean_dec_ref(v_subst_1486_);
if (lean_obj_tag(v___x_1487_) == 1)
{
lean_object* v_val_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
lean_dec_ref(v_e_1452_);
v_val_1488_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1490_ = v___x_1487_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_val_1488_);
lean_dec(v___x_1487_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set_tag(v___x_1490_, 0);
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_val_1488_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
else
{
lean_object* v_xs_1496_; lean_object* v_size_1497_; lean_object* v___x_1498_; uint8_t v_debug_1499_; lean_object* v___x_1500_; lean_object* v___f_1501_; lean_object* v___x_1502_; lean_object* v_env_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
lean_dec(v___x_1487_);
v_xs_1496_ = lean_ctor_get(v___y_1453_, 0);
v_size_1497_ = lean_ctor_get(v_xs_1496_, 2);
v___x_1498_ = lean_st_ref_get(v___y_1456_);
v_debug_1499_ = lean_ctor_get_uint8(v___x_1498_, sizeof(void*)*11);
lean_dec(v___x_1498_);
v___x_1500_ = lean_box(v_debug_1499_);
lean_inc_ref(v_xs_1496_);
lean_inc(v_size_1497_);
lean_inc_ref(v_e_1452_);
v___f_1501_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1501_, 0, v_e_1452_);
lean_closure_set(v___f_1501_, 1, v_size_1497_);
lean_closure_set(v___f_1501_, 2, v___x_1483_);
lean_closure_set(v___f_1501_, 3, v_xs_1496_);
lean_closure_set(v___f_1501_, 4, v___x_1500_);
v___x_1502_ = lean_st_ref_get(v___y_1460_);
v_env_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc_ref(v_env_1503_);
lean_dec(v___x_1502_);
v___x_1504_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1504_, 0, v_env_1503_);
lean_ctor_set_uint8(v___x_1504_, sizeof(void*)*1, v___x_1484_);
lean_ctor_set_uint8(v___x_1504_, sizeof(void*)*1 + 1, v___x_1484_);
v___x_1505_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_1501_, v___x_1504_, v___y_1456_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1505_, 1);
if (lean_obj_tag(v_a_1506_) == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_dec_ref_known(v_a_1506_, 1);
v___x_1507_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__2, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__2_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___closed__2);
v___x_1508_ = l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__1(v___x_1507_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_a_1509_);
lean_dec_ref_known(v___x_1508_, 1);
v_a_1463_ = v_a_1509_;
goto v___jp_1462_;
}
else
{
lean_dec_ref(v_e_1452_);
return v___x_1508_;
}
}
else
{
lean_object* v_a_1510_; 
v_a_1510_ = lean_ctor_get(v_a_1506_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v_a_1506_, 1);
v_a_1463_ = v_a_1510_;
goto v___jp_1462_;
}
}
else
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1518_; 
lean_dec_ref(v_e_1452_);
v_a_1511_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1513_ = v___x_1505_;
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1505_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_a_1511_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
}
}
v___jp_1462_:
{
lean_object* v___x_1464_; lean_object* v_visited_1465_; lean_object* v_types_1466_; lean_object* v_subst_1467_; lean_object* v_visitedClosed_1468_; lean_object* v_hasDepLetCache_1469_; lean_object* v_numConverted_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1480_; 
v___x_1464_ = lean_st_ref_take(v___y_1454_);
v_visited_1465_ = lean_ctor_get(v___x_1464_, 0);
v_types_1466_ = lean_ctor_get(v___x_1464_, 1);
v_subst_1467_ = lean_ctor_get(v___x_1464_, 2);
v_visitedClosed_1468_ = lean_ctor_get(v___x_1464_, 3);
v_hasDepLetCache_1469_ = lean_ctor_get(v___x_1464_, 4);
v_numConverted_1470_ = lean_ctor_get(v___x_1464_, 5);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1472_ = v___x_1464_;
v_isShared_1473_ = v_isSharedCheck_1480_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_numConverted_1470_);
lean_inc(v_hasDepLetCache_1469_);
lean_inc(v_visitedClosed_1468_);
lean_inc(v_subst_1467_);
lean_inc(v_types_1466_);
lean_inc(v_visited_1465_);
lean_dec(v___x_1464_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1480_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; lean_object* v___x_1476_; 
lean_inc_ref(v_a_1463_);
v___x_1474_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1___redArg(v_subst_1467_, v_e_1452_, v_a_1463_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 2, v___x_1474_);
v___x_1476_ = v___x_1472_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_visited_1465_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v_types_1466_);
lean_ctor_set(v_reuseFailAlloc_1479_, 2, v___x_1474_);
lean_ctor_set(v_reuseFailAlloc_1479_, 3, v_visitedClosed_1468_);
lean_ctor_set(v_reuseFailAlloc_1479_, 4, v_hasDepLetCache_1469_);
lean_ctor_set(v_reuseFailAlloc_1479_, 5, v_numConverted_1470_);
v___x_1476_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = lean_st_ref_put(v___y_1454_, v___x_1476_);
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v_a_1463_);
return v___x_1478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv___boxed(lean_object* v_e_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(v_e_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1530_, lean_object* v_m_1531_, lean_object* v_a_1532_){
_start:
{
lean_object* v___x_1533_; 
v___x_1533_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2___redArg(v_m_1531_, v_a_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1534_, lean_object* v_m_1535_, lean_object* v_a_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2(v_00_u03b2_1534_, v_m_1535_, v_a_1536_);
lean_dec_ref(v_a_1536_);
lean_dec_ref(v_m_1535_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10(lean_object* v_00_u03b2_1538_, lean_object* v_a_1539_, lean_object* v_x_1540_){
_start:
{
lean_object* v___x_1541_; 
v___x_1541_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(v_a_1539_, v_x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10___boxed(lean_object* v_00_u03b2_1542_, lean_object* v_a_1543_, lean_object* v_x_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0_spec__0_spec__2_spec__10(v_00_u03b2_1542_, v_a_1543_, v_x_1544_);
lean_dec(v_x_1544_);
lean_dec_ref(v_a_1543_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0_spec__0(lean_object* v_msgData_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v___x_1552_; lean_object* v_env_1553_; lean_object* v___x_1554_; lean_object* v_toCold_1555_; lean_object* v_mctx_1556_; lean_object* v_lctx_1557_; lean_object* v_options_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1552_ = lean_st_ref_get(v___y_1550_);
v_env_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc_ref(v_env_1553_);
lean_dec(v___x_1552_);
v___x_1554_ = lean_st_ref_get(v___y_1548_);
v_toCold_1555_ = lean_ctor_get(v___y_1549_, 0);
v_mctx_1556_ = lean_ctor_get(v___x_1554_, 0);
lean_inc_ref(v_mctx_1556_);
lean_dec(v___x_1554_);
v_lctx_1557_ = lean_ctor_get(v___y_1547_, 2);
v_options_1558_ = lean_ctor_get(v_toCold_1555_, 2);
lean_inc_ref(v_options_1558_);
lean_inc_ref(v_lctx_1557_);
v___x_1559_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1559_, 0, v_env_1553_);
lean_ctor_set(v___x_1559_, 1, v_mctx_1556_);
lean_ctor_set(v___x_1559_, 2, v_lctx_1557_);
lean_ctor_set(v___x_1559_, 3, v_options_1558_);
v___x_1560_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
lean_ctor_set(v___x_1560_, 1, v_msgData_1546_);
v___x_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1560_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0_spec__0___boxed(lean_object* v_msgData_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0_spec__0(v_msgData_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___redArg(lean_object* v_msg_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v_ref_1575_; lean_object* v___x_1576_; lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1585_; 
v_ref_1575_ = lean_ctor_get(v___y_1572_, 2);
v___x_1576_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0_spec__0(v_msg_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1579_ = v___x_1576_;
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1576_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
lean_inc(v_ref_1575_);
v___x_1581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1581_, 0, v_ref_1575_);
lean_ctor_set(v___x_1581_, 1, v_a_1577_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set_tag(v___x_1579_, 1);
lean_ctor_set(v___x_1579_, 0, v___x_1581_);
v___x_1583_ = v___x_1579_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___redArg___boxed(lean_object* v_msg_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___redArg(v_msg_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
return v_res_1592_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__1(void){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__0));
v___x_1595_ = l_Lean_stringToMessageData(v___x_1594_);
return v___x_1595_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__3(void){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__2));
v___x_1598_ = l_Lean_stringToMessageData(v___x_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq(lean_object* v_t_1599_, lean_object* v_s_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
size_t v___x_1610_; size_t v___x_1611_; uint8_t v___x_1612_; 
v___x_1610_ = lean_ptr_addr(v_t_1599_);
v___x_1611_ = lean_ptr_addr(v_s_1600_);
v___x_1612_ = lean_usize_dec_eq(v___x_1610_, v___x_1611_);
if (v___x_1612_ == 0)
{
lean_object* v___x_1613_; 
lean_inc_ref(v_s_1600_);
lean_inc_ref(v_t_1599_);
v___x_1613_ = l_Lean_Meta_isExprDefEq(v_t_1599_, v_s_1600_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1631_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1616_ = v___x_1613_;
v_isShared_1617_ = v_isSharedCheck_1631_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1613_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1631_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
uint8_t v___x_1618_; 
v___x_1618_ = lean_unbox(v_a_1614_);
lean_dec(v_a_1614_);
if (v___x_1618_ == 0)
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
lean_del_object(v___x_1616_);
v___x_1619_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__1);
v___x_1620_ = l_Lean_indentExpr(v_t_1599_);
v___x_1621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1619_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
v___x_1622_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__3, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__3_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___closed__3);
v___x_1623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = l_Lean_indentExpr(v_s_1600_);
v___x_1625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1623_);
lean_ctor_set(v___x_1625_, 1, v___x_1624_);
v___x_1626_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___redArg(v___x_1625_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
return v___x_1626_;
}
else
{
lean_object* v___x_1627_; lean_object* v___x_1629_; 
lean_dec_ref(v_s_1600_);
lean_dec_ref(v_t_1599_);
v___x_1627_ = lean_box(0);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 0, v___x_1627_);
v___x_1629_ = v___x_1616_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v___x_1627_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
lean_dec_ref(v_s_1600_);
lean_dec_ref(v_t_1599_);
v_a_1632_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1613_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1613_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
else
{
lean_object* v___x_1640_; lean_object* v___x_1641_; 
lean_dec_ref(v_s_1600_);
lean_dec_ref(v_t_1599_);
v___x_1640_ = lean_box(0);
v___x_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
return v___x_1641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq___boxed(lean_object* v_t_1642_, lean_object* v_s_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq(v_t_1642_, v_s_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_);
lean_dec(v___y_1651_);
lean_dec_ref(v___y_1650_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0(lean_object* v_00_u03b1_1654_, lean_object* v_msg_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___redArg(v_msg_1655_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___boxed(lean_object* v_00_u03b1_1666_, lean_object* v_msg_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0(v_00_u03b1_1666_, v_msg_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
return v_res_1677_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__1(void){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__0));
v___x_1680_ = l_Lean_stringToMessageData(v___x_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg(lean_object* v_type_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
uint8_t v___x_1689_; 
v___x_1689_ = l_Lean_Expr_isForall(v_type_1681_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; 
lean_inc(v___y_1687_);
lean_inc_ref(v___y_1686_);
lean_inc(v___y_1685_);
lean_inc_ref(v___y_1684_);
v___x_1690_ = lean_whnf(v_type_1681_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; uint8_t v___x_1692_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v___x_1692_ = l_Lean_Expr_isForall(v_a_1691_);
if (v___x_1692_ == 0)
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
v___x_1693_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___closed__1);
v___x_1694_ = l_Lean_indentExpr(v_a_1691_);
v___x_1695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1693_);
lean_ctor_set(v___x_1695_, 1, v___x_1694_);
v___x_1696_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0___redArg(v___x_1695_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1696_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1696_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
else
{
lean_object* v___x_1705_; 
v___x_1705_ = l_Lean_Meta_Sym_shareCommon(v_a_1691_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
return v___x_1705_;
}
}
else
{
return v___x_1690_;
}
}
else
{
lean_object* v___x_1706_; 
v___x_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1706_, 0, v_type_1681_);
return v___x_1706_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg___boxed(lean_object* v_type_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg(v_type_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall(lean_object* v_type_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_){
_start:
{
lean_object* v___x_1726_; 
v___x_1726_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg(v_type_1716_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___boxed(lean_object* v_type_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v_res_1737_; 
v_res_1737_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall(v_type_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
return v_res_1737_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_isClean(lean_object* v_e_1738_, lean_object* v_ctx_1739_){
_start:
{
lean_object* v_cleanSuffix_1740_; lean_object* v___x_1741_; uint8_t v___x_1742_; 
v_cleanSuffix_1740_ = lean_ctor_get(v_ctx_1739_, 2);
v___x_1741_ = l_Lean_Expr_looseBVarRange(v_e_1738_);
v___x_1742_ = lean_nat_dec_le(v___x_1741_, v_cleanSuffix_1740_);
lean_dec(v___x_1741_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_isClean___boxed(lean_object* v_e_1743_, lean_object* v_ctx_1744_){
_start:
{
uint8_t v_res_1745_; lean_object* v_r_1746_; 
v_res_1745_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_isClean(v_e_1743_, v_ctx_1744_);
lean_dec_ref(v_ctx_1744_);
lean_dec_ref(v_e_1743_);
v_r_1746_ = lean_box(v_res_1745_);
return v_r_1746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeFallback(lean_object* v_e_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(v_e_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; lean_object* v_keyedConfig_1759_; uint8_t v_trackZetaDelta_1760_; lean_object* v_zetaDeltaSet_1761_; lean_object* v_lctx_1762_; lean_object* v_localInstances_1763_; lean_object* v_defEqCtx_x3f_1764_; lean_object* v_synthPendingDepth_1765_; lean_object* v_customCanUnfoldPredicate_x3f_1766_; uint8_t v_univApprox_1767_; uint8_t v_inTypeClassResolution_1768_; uint8_t v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_a_1758_);
lean_dec_ref_known(v___x_1757_, 1);
v_keyedConfig_1759_ = lean_ctor_get(v___y_1752_, 0);
v_trackZetaDelta_1760_ = lean_ctor_get_uint8(v___y_1752_, sizeof(void*)*7);
v_zetaDeltaSet_1761_ = lean_ctor_get(v___y_1752_, 1);
v_lctx_1762_ = lean_ctor_get(v___y_1752_, 2);
v_localInstances_1763_ = lean_ctor_get(v___y_1752_, 3);
v_defEqCtx_x3f_1764_ = lean_ctor_get(v___y_1752_, 4);
v_synthPendingDepth_1765_ = lean_ctor_get(v___y_1752_, 5);
v_customCanUnfoldPredicate_x3f_1766_ = lean_ctor_get(v___y_1752_, 6);
v_univApprox_1767_ = lean_ctor_get_uint8(v___y_1752_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1768_ = lean_ctor_get_uint8(v___y_1752_, sizeof(void*)*7 + 2);
v___x_1769_ = 0;
lean_inc(v_customCanUnfoldPredicate_x3f_1766_);
lean_inc(v_synthPendingDepth_1765_);
lean_inc(v_defEqCtx_x3f_1764_);
lean_inc_ref(v_localInstances_1763_);
lean_inc_ref(v_lctx_1762_);
lean_inc(v_zetaDeltaSet_1761_);
lean_inc_ref(v_keyedConfig_1759_);
v___x_1770_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1770_, 0, v_keyedConfig_1759_);
lean_ctor_set(v___x_1770_, 1, v_zetaDeltaSet_1761_);
lean_ctor_set(v___x_1770_, 2, v_lctx_1762_);
lean_ctor_set(v___x_1770_, 3, v_localInstances_1763_);
lean_ctor_set(v___x_1770_, 4, v_defEqCtx_x3f_1764_);
lean_ctor_set(v___x_1770_, 5, v_synthPendingDepth_1765_);
lean_ctor_set(v___x_1770_, 6, v_customCanUnfoldPredicate_x3f_1766_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*7, v_trackZetaDelta_1760_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*7 + 1, v_univApprox_1767_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1768_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*7 + 3, v___x_1769_);
lean_inc(v___y_1755_);
lean_inc_ref(v___y_1754_);
lean_inc(v___y_1753_);
v___x_1771_ = lean_infer_type(v_a_1758_, v___x_1770_, v___y_1753_, v___y_1754_, v___y_1755_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1773_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
v___x_1773_ = l_Lean_Meta_Sym_shareCommon(v_a_1772_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
return v___x_1773_;
}
else
{
return v___x_1771_;
}
}
else
{
return v___x_1757_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeFallback___boxed(lean_object* v_e_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeFallback(v_e_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0(lean_object* v_msg_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v___f_1805_; lean_object* v___f_1806_; lean_object* v___f_1807_; lean_object* v___f_1808_; lean_object* v___f_1809_; lean_object* v___f_1810_; lean_object* v___f_1811_; lean_object* v___f_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v_toApplicative_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1882_; 
v___f_1805_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__0));
v___f_1806_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__1));
v___f_1807_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__2));
v___f_1808_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__3));
v___f_1809_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__4));
v___f_1810_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1810_, 0, v___f_1809_);
lean_closure_set(v___f_1810_, 1, v___f_1808_);
v___f_1811_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1811_, 0, v___f_1808_);
v___f_1812_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__5));
v___x_1813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1813_, 0, v___f_1805_);
lean_ctor_set(v___x_1813_, 1, v___f_1806_);
v___x_1814_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
lean_ctor_set(v___x_1814_, 1, v___f_1807_);
lean_ctor_set(v___x_1814_, 2, v___f_1810_);
lean_ctor_set(v___x_1814_, 3, v___f_1811_);
lean_ctor_set(v___x_1814_, 4, v___f_1812_);
v___x_1815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1814_);
lean_ctor_set(v___x_1815_, 1, v___f_1808_);
v___x_1816_ = l_StateRefT_x27_instMonad___redArg(v___x_1815_);
v_toApplicative_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1882_ == 0)
{
lean_object* v_unused_1883_; 
v_unused_1883_ = lean_ctor_get(v___x_1816_, 1);
lean_dec(v_unused_1883_);
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1882_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_toApplicative_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1882_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v_toFunctor_1821_; lean_object* v_toSeq_1822_; lean_object* v_toSeqLeft_1823_; lean_object* v_toSeqRight_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1880_; 
v_toFunctor_1821_ = lean_ctor_get(v_toApplicative_1817_, 0);
v_toSeq_1822_ = lean_ctor_get(v_toApplicative_1817_, 2);
v_toSeqLeft_1823_ = lean_ctor_get(v_toApplicative_1817_, 3);
v_toSeqRight_1824_ = lean_ctor_get(v_toApplicative_1817_, 4);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_toApplicative_1817_);
if (v_isSharedCheck_1880_ == 0)
{
lean_object* v_unused_1881_; 
v_unused_1881_ = lean_ctor_get(v_toApplicative_1817_, 1);
lean_dec(v_unused_1881_);
v___x_1826_ = v_toApplicative_1817_;
v_isShared_1827_ = v_isSharedCheck_1880_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_toSeqRight_1824_);
lean_inc(v_toSeqLeft_1823_);
lean_inc(v_toSeq_1822_);
lean_inc(v_toFunctor_1821_);
lean_dec(v_toApplicative_1817_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1880_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___f_1828_; lean_object* v___f_1829_; lean_object* v___f_1830_; lean_object* v___f_1831_; lean_object* v___x_1832_; lean_object* v___f_1833_; lean_object* v___f_1834_; lean_object* v___f_1835_; lean_object* v___x_1837_; 
v___f_1828_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__6));
v___f_1829_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__7));
lean_inc_ref(v_toFunctor_1821_);
v___f_1830_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1830_, 0, v_toFunctor_1821_);
v___f_1831_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1831_, 0, v_toFunctor_1821_);
v___x_1832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1832_, 0, v___f_1830_);
lean_ctor_set(v___x_1832_, 1, v___f_1831_);
v___f_1833_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1833_, 0, v_toSeqRight_1824_);
v___f_1834_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1834_, 0, v_toSeqLeft_1823_);
v___f_1835_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1835_, 0, v_toSeq_1822_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 4, v___f_1833_);
lean_ctor_set(v___x_1826_, 3, v___f_1834_);
lean_ctor_set(v___x_1826_, 2, v___f_1835_);
lean_ctor_set(v___x_1826_, 1, v___f_1828_);
lean_ctor_set(v___x_1826_, 0, v___x_1832_);
v___x_1837_ = v___x_1826_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1832_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v___f_1828_);
lean_ctor_set(v_reuseFailAlloc_1879_, 2, v___f_1835_);
lean_ctor_set(v_reuseFailAlloc_1879_, 3, v___f_1834_);
lean_ctor_set(v_reuseFailAlloc_1879_, 4, v___f_1833_);
v___x_1837_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
lean_object* v___x_1839_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 1, v___f_1829_);
lean_ctor_set(v___x_1819_, 0, v___x_1837_);
v___x_1839_ = v___x_1819_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v___x_1837_);
lean_ctor_set(v_reuseFailAlloc_1878_, 1, v___f_1829_);
v___x_1839_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
lean_object* v___x_1840_; lean_object* v_toApplicative_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1876_; 
v___x_1840_ = l_StateRefT_x27_instMonad___redArg(v___x_1839_);
v_toApplicative_1841_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1876_ == 0)
{
lean_object* v_unused_1877_; 
v_unused_1877_ = lean_ctor_get(v___x_1840_, 1);
lean_dec(v_unused_1877_);
v___x_1843_ = v___x_1840_;
v_isShared_1844_ = v_isSharedCheck_1876_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_toApplicative_1841_);
lean_dec(v___x_1840_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1876_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v_toFunctor_1845_; lean_object* v_toSeq_1846_; lean_object* v_toSeqLeft_1847_; lean_object* v_toSeqRight_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1874_; 
v_toFunctor_1845_ = lean_ctor_get(v_toApplicative_1841_, 0);
v_toSeq_1846_ = lean_ctor_get(v_toApplicative_1841_, 2);
v_toSeqLeft_1847_ = lean_ctor_get(v_toApplicative_1841_, 3);
v_toSeqRight_1848_ = lean_ctor_get(v_toApplicative_1841_, 4);
v_isSharedCheck_1874_ = !lean_is_exclusive(v_toApplicative_1841_);
if (v_isSharedCheck_1874_ == 0)
{
lean_object* v_unused_1875_; 
v_unused_1875_ = lean_ctor_get(v_toApplicative_1841_, 1);
lean_dec(v_unused_1875_);
v___x_1850_ = v_toApplicative_1841_;
v_isShared_1851_ = v_isSharedCheck_1874_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_toSeqRight_1848_);
lean_inc(v_toSeqLeft_1847_);
lean_inc(v_toSeq_1846_);
lean_inc(v_toFunctor_1845_);
lean_dec(v_toApplicative_1841_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1874_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___f_1852_; lean_object* v___f_1853_; lean_object* v___f_1854_; lean_object* v___f_1855_; lean_object* v___x_1856_; lean_object* v___f_1857_; lean_object* v___f_1858_; lean_object* v___f_1859_; lean_object* v___x_1861_; 
v___f_1852_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__8));
v___f_1853_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__9));
lean_inc_ref(v_toFunctor_1845_);
v___f_1854_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1854_, 0, v_toFunctor_1845_);
v___f_1855_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1855_, 0, v_toFunctor_1845_);
v___x_1856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1856_, 0, v___f_1854_);
lean_ctor_set(v___x_1856_, 1, v___f_1855_);
v___f_1857_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1857_, 0, v_toSeqRight_1848_);
v___f_1858_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1858_, 0, v_toSeqLeft_1847_);
v___f_1859_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1859_, 0, v_toSeq_1846_);
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 4, v___f_1857_);
lean_ctor_set(v___x_1850_, 3, v___f_1858_);
lean_ctor_set(v___x_1850_, 2, v___f_1859_);
lean_ctor_set(v___x_1850_, 1, v___f_1852_);
lean_ctor_set(v___x_1850_, 0, v___x_1856_);
v___x_1861_ = v___x_1850_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v___x_1856_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v___f_1852_);
lean_ctor_set(v_reuseFailAlloc_1873_, 2, v___f_1859_);
lean_ctor_set(v_reuseFailAlloc_1873_, 3, v___f_1858_);
lean_ctor_set(v_reuseFailAlloc_1873_, 4, v___f_1857_);
v___x_1861_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
lean_object* v___x_1863_; 
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 1, v___f_1853_);
lean_ctor_set(v___x_1843_, 0, v___x_1861_);
v___x_1863_ = v___x_1843_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1861_);
lean_ctor_set(v_reuseFailAlloc_1872_, 1, v___f_1853_);
v___x_1863_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_13460__overap_1870_; lean_object* v___x_1871_; 
v___x_1864_ = l_StateRefT_x27_instMonad___redArg(v___x_1863_);
v___x_1865_ = l_ReaderT_instMonad___redArg(v___x_1864_);
v___x_1866_ = l_StateRefT_x27_instMonad___redArg(v___x_1865_);
v___x_1867_ = l_Lean_instInhabitedExpr;
v___x_1868_ = l_instInhabitedOfMonad___redArg(v___x_1866_, v___x_1867_);
v___x_1869_ = l_instInhabitedReaderT___redArg(v___x_1868_);
v___x_13460__overap_1870_ = lean_panic_fn_borrowed(v___x_1869_, v_msg_1795_);
lean_dec(v___x_1869_);
lean_inc(v___y_1803_);
lean_inc_ref(v___y_1802_);
lean_inc(v___y_1801_);
lean_inc_ref(v___y_1800_);
lean_inc(v___y_1799_);
lean_inc_ref(v___y_1798_);
lean_inc(v___y_1797_);
lean_inc_ref(v___y_1796_);
v___x_1871_ = lean_apply_9(v___x_13460__overap_1870_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, lean_box(0));
return v___x_1871_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___boxed(lean_object* v_msg_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0(v_msg_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
return v_res_1894_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__2(void){
_start:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1897_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__2));
v___x_1898_ = lean_unsigned_to_nat(44u);
v___x_1899_ = lean_unsigned_to_nat(367u);
v___x_1900_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__1));
v___x_1901_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__0));
v___x_1902_ = l_mkPanicMessageWithDecl(v___x_1901_, v___x_1900_, v___x_1899_, v___x_1898_, v___x_1897_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO(lean_object* v_e_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v_type_1914_; lean_object* v___y_1915_; uint8_t v___x_1933_; 
v___x_1933_ = l_Lean_Expr_hasLooseBVars(v_e_1903_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Lean_Meta_Sym_inferType(v_e_1903_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
return v___x_1934_;
}
else
{
lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___y_1938_; lean_object* v_types_1942_; lean_object* v___x_1943_; 
v___x_1935_ = l_Lean_instInhabitedExpr;
v___x_1936_ = lean_st_ref_get(v___y_1905_);
v_types_1942_ = lean_ctor_get(v___x_1936_, 1);
lean_inc_ref(v_types_1942_);
lean_dec(v___x_1936_);
v___x_1943_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg(v_types_1942_, v_e_1903_);
lean_dec_ref(v_types_1942_);
if (lean_obj_tag(v___x_1943_) == 1)
{
lean_object* v_val_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec_ref(v_e_1903_);
v_val_1944_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1943_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_val_1944_);
lean_dec(v___x_1943_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
lean_ctor_set_tag(v___x_1946_, 0);
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_val_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
else
{
lean_dec(v___x_1943_);
switch(lean_obj_tag(v_e_1903_))
{
case 0:
{
lean_object* v_xs_1952_; lean_object* v_deBruijnIndex_1953_; lean_object* v_size_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; 
v_xs_1952_ = lean_ctor_get(v___y_1904_, 0);
v_deBruijnIndex_1953_ = lean_ctor_get(v_e_1903_, 0);
v_size_1954_ = lean_ctor_get(v_xs_1952_, 2);
v___x_1955_ = lean_nat_sub(v_size_1954_, v_deBruijnIndex_1953_);
v___x_1956_ = lean_unsigned_to_nat(1u);
v___x_1957_ = lean_nat_sub(v___x_1955_, v___x_1956_);
lean_dec(v___x_1955_);
v___x_1958_ = lean_nat_dec_lt(v___x_1957_, v_size_1954_);
if (v___x_1958_ == 0)
{
lean_object* v___x_1959_; 
lean_dec(v___x_1957_);
v___x_1959_ = l_outOfBounds___redArg(v___x_1935_);
v___y_1938_ = v___x_1959_;
goto v___jp_1937_;
}
else
{
lean_object* v___x_1960_; 
v___x_1960_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1935_, v_xs_1952_, v___x_1957_);
lean_dec(v___x_1957_);
v___y_1938_ = v___x_1960_;
goto v___jp_1937_;
}
}
case 10:
{
lean_object* v_expr_1961_; lean_object* v___x_1962_; 
v_expr_1961_ = lean_ctor_get(v_e_1903_, 1);
lean_inc_ref(v_expr_1961_);
v___x_1962_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO(v_expr_1961_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_object* v_a_1963_; 
v_a_1963_ = lean_ctor_get(v___x_1962_, 0);
lean_inc(v_a_1963_);
lean_dec_ref_known(v___x_1962_, 1);
v_type_1914_ = v_a_1963_;
v___y_1915_ = v___y_1905_;
goto v___jp_1913_;
}
else
{
lean_dec_ref_known(v_e_1903_, 2);
return v___x_1962_;
}
}
case 5:
{
lean_object* v_fn_1964_; lean_object* v_arg_1965_; lean_object* v___x_1966_; 
v_fn_1964_ = lean_ctor_get(v_e_1903_, 0);
v_arg_1965_ = lean_ctor_get(v_e_1903_, 1);
lean_inc_ref(v_fn_1964_);
v___x_1966_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO(v_fn_1964_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
if (lean_obj_tag(v___x_1966_) == 0)
{
lean_object* v_a_1967_; lean_object* v___x_1968_; 
v_a_1967_ = lean_ctor_get(v___x_1966_, 0);
lean_inc(v_a_1967_);
lean_dec_ref_known(v___x_1966_, 1);
v___x_1968_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg(v_a_1967_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1968_, 1);
if (lean_obj_tag(v_a_1969_) == 7)
{
lean_object* v_body_1970_; uint8_t v___x_1971_; 
v_body_1970_ = lean_ctor_get(v_a_1969_, 2);
lean_inc_ref(v_body_1970_);
lean_dec_ref_known(v_a_1969_, 3);
v___x_1971_ = l_Lean_Expr_hasLooseBVars(v_body_1970_);
if (v___x_1971_ == 0)
{
v_type_1914_ = v_body_1970_;
v___y_1915_ = v___y_1905_;
goto v___jp_1913_;
}
else
{
lean_object* v___x_1972_; 
lean_inc_ref(v_arg_1965_);
v___x_1972_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(v_arg_1965_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v_a_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc(v_a_1973_);
lean_dec_ref_known(v___x_1972_, 1);
v___x_1974_ = lean_expr_instantiate1(v_body_1970_, v_a_1973_);
lean_dec(v_a_1973_);
lean_dec_ref(v_body_1970_);
v___x_1975_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1974_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1976_);
lean_dec_ref_known(v___x_1975_, 1);
v_type_1914_ = v_a_1976_;
v___y_1915_ = v___y_1905_;
goto v___jp_1913_;
}
else
{
lean_dec_ref_known(v_e_1903_, 2);
return v___x_1975_;
}
}
else
{
lean_dec_ref(v_body_1970_);
lean_dec_ref_known(v_e_1903_, 2);
return v___x_1972_;
}
}
}
else
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
lean_dec(v_a_1969_);
v___x_1977_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__2, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__2_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__2);
v___x_1978_ = l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0(v___x_1977_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_a_1979_);
lean_dec_ref_known(v___x_1978_, 1);
v_type_1914_ = v_a_1979_;
v___y_1915_ = v___y_1905_;
goto v___jp_1913_;
}
else
{
lean_dec_ref_known(v_e_1903_, 2);
return v___x_1978_;
}
}
}
else
{
lean_dec_ref_known(v_e_1903_, 2);
return v___x_1968_;
}
}
else
{
lean_dec_ref_known(v_e_1903_, 2);
return v___x_1966_;
}
}
default: 
{
lean_object* v___x_1980_; 
lean_inc_ref(v_e_1903_);
v___x_1980_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeFallback(v_e_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref_known(v___x_1980_, 1);
v_type_1914_ = v_a_1981_;
v___y_1915_ = v___y_1905_;
goto v___jp_1913_;
}
else
{
lean_dec_ref(v_e_1903_);
return v___x_1980_;
}
}
}
}
v___jp_1937_:
{
lean_object* v_lctx_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v_lctx_1939_ = lean_ctor_get(v___y_1908_, 2);
lean_inc_ref(v_lctx_1939_);
v___x_1940_ = l_Lean_LocalContext_getFVar_x21(v_lctx_1939_, v___y_1938_);
lean_dec_ref(v___y_1938_);
v___x_1941_ = l_Lean_LocalDecl_type(v___x_1940_);
lean_dec_ref(v___x_1940_);
v_type_1914_ = v___x_1941_;
v___y_1915_ = v___y_1905_;
goto v___jp_1913_;
}
}
v___jp_1913_:
{
lean_object* v___x_1916_; lean_object* v_visited_1917_; lean_object* v_types_1918_; lean_object* v_subst_1919_; lean_object* v_visitedClosed_1920_; lean_object* v_hasDepLetCache_1921_; lean_object* v_numConverted_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1932_; 
v___x_1916_ = lean_st_ref_take(v___y_1915_);
v_visited_1917_ = lean_ctor_get(v___x_1916_, 0);
v_types_1918_ = lean_ctor_get(v___x_1916_, 1);
v_subst_1919_ = lean_ctor_get(v___x_1916_, 2);
v_visitedClosed_1920_ = lean_ctor_get(v___x_1916_, 3);
v_hasDepLetCache_1921_ = lean_ctor_get(v___x_1916_, 4);
v_numConverted_1922_ = lean_ctor_get(v___x_1916_, 5);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1924_ = v___x_1916_;
v_isShared_1925_ = v_isSharedCheck_1932_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_numConverted_1922_);
lean_inc(v_hasDepLetCache_1921_);
lean_inc(v_visitedClosed_1920_);
lean_inc(v_subst_1919_);
lean_inc(v_types_1918_);
lean_inc(v_visited_1917_);
lean_dec(v___x_1916_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1932_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1926_; lean_object* v___x_1928_; 
lean_inc_ref(v_type_1914_);
v___x_1926_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1___redArg(v_types_1918_, v_e_1903_, v_type_1914_);
if (v_isShared_1925_ == 0)
{
lean_ctor_set(v___x_1924_, 1, v___x_1926_);
v___x_1928_ = v___x_1924_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_visited_1917_);
lean_ctor_set(v_reuseFailAlloc_1931_, 1, v___x_1926_);
lean_ctor_set(v_reuseFailAlloc_1931_, 2, v_subst_1919_);
lean_ctor_set(v_reuseFailAlloc_1931_, 3, v_visitedClosed_1920_);
lean_ctor_set(v_reuseFailAlloc_1931_, 4, v_hasDepLetCache_1921_);
lean_ctor_set(v_reuseFailAlloc_1931_, 5, v_numConverted_1922_);
v___x_1928_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = lean_st_ref_put(v___y_1915_, v___x_1928_);
v___x_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1930_, 0, v_type_1914_);
return v___x_1930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___boxed(lean_object* v_e_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO(v_e_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1___redArg(lean_object* v_fvarId_1993_, lean_object* v___y_1994_){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1996_ = l_Lean_Expr_fvar___override(v_fvarId_1993_);
v___x_1997_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1996_, v___y_1994_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1___redArg___boxed(lean_object* v_fvarId_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v_res_2001_; 
v_res_2001_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1___redArg(v_fvarId_1998_, v___y_1999_);
lean_dec(v___y_1999_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1(lean_object* v_fvarId_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
lean_object* v___x_2012_; 
v___x_2012_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1___redArg(v_fvarId_2002_, v___y_2006_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1___boxed(lean_object* v_fvarId_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1(v_fvarId_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
lean_dec(v___y_2019_);
lean_dec_ref(v___y_2018_);
lean_dec(v___y_2017_);
lean_dec_ref(v___y_2016_);
lean_dec(v___y_2015_);
lean_dec_ref(v___y_2014_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg___lam__0(lean_object* v_x_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v___x_2034_; 
lean_inc(v___y_2028_);
lean_inc_ref(v___y_2027_);
lean_inc(v___y_2026_);
lean_inc_ref(v___y_2025_);
v___x_2034_ = lean_apply_9(v_x_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, lean_box(0));
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg___lam__0___boxed(lean_object* v_x_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg___lam__0(v_x_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_);
lean_dec(v___y_2039_);
lean_dec_ref(v___y_2038_);
lean_dec(v___y_2037_);
lean_dec_ref(v___y_2036_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg(lean_object* v_lctx_2046_, lean_object* v_localInsts_2047_, lean_object* v_x_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v___f_2058_; lean_object* v___x_2059_; 
lean_inc(v___y_2052_);
lean_inc_ref(v___y_2051_);
lean_inc(v___y_2050_);
lean_inc_ref(v___y_2049_);
v___f_2058_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2058_, 0, v_x_2048_);
lean_closure_set(v___f_2058_, 1, v___y_2049_);
lean_closure_set(v___f_2058_, 2, v___y_2050_);
lean_closure_set(v___f_2058_, 3, v___y_2051_);
lean_closure_set(v___f_2058_, 4, v___y_2052_);
v___x_2059_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2046_, v_localInsts_2047_, v___f_2058_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_);
if (lean_obj_tag(v___x_2059_) == 0)
{
return v___x_2059_;
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2059_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2059_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg___boxed(lean_object* v_lctx_2068_, lean_object* v_localInsts_2069_, lean_object* v_x_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg(v_lctx_2068_, v_localInsts_2069_, v_x_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2(lean_object* v_00_u03b1_2081_, lean_object* v_lctx_2082_, lean_object* v_localInsts_2083_, lean_object* v_x_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
lean_object* v___x_2094_; 
v___x_2094_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg(v_lctx_2082_, v_localInsts_2083_, v_x_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___boxed(lean_object* v_00_u03b1_2095_, lean_object* v_lctx_2096_, lean_object* v_localInsts_2097_, lean_object* v_x_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
lean_object* v_res_2108_; 
v_res_2108_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2(v_00_u03b1_2095_, v_lctx_2096_, v_localInsts_2097_, v_x_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
lean_dec(v___y_2106_);
lean_dec_ref(v___y_2105_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
return v_res_2108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___lam__1(lean_object* v_k_2109_, lean_object* v_a_2110_, uint8_t v_tainted_2111_, uint8_t v_isCandidate_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_){
_start:
{
lean_object* v___y_2123_; lean_object* v_xs_2169_; lean_object* v_numCandidates_2170_; lean_object* v_cleanSuffix_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2190_; 
v_xs_2169_ = lean_ctor_get(v___y_2113_, 0);
v_numCandidates_2170_ = lean_ctor_get(v___y_2113_, 1);
v_cleanSuffix_2171_ = lean_ctor_get(v___y_2113_, 2);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___y_2113_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2173_ = v___y_2113_;
v_isShared_2174_ = v_isSharedCheck_2190_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_cleanSuffix_2171_);
lean_inc(v_numCandidates_2170_);
lean_inc(v_xs_2169_);
lean_dec(v___y_2113_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2190_;
goto v_resetjp_2172_;
}
v___jp_2122_:
{
lean_object* v___x_2124_; lean_object* v_visited_2125_; lean_object* v_types_2126_; lean_object* v_subst_2127_; lean_object* v_visitedClosed_2128_; lean_object* v_hasDepLetCache_2129_; lean_object* v_numConverted_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2168_; 
v___x_2124_ = lean_st_ref_take(v___y_2114_);
v_visited_2125_ = lean_ctor_get(v___x_2124_, 0);
v_types_2126_ = lean_ctor_get(v___x_2124_, 1);
v_subst_2127_ = lean_ctor_get(v___x_2124_, 2);
v_visitedClosed_2128_ = lean_ctor_get(v___x_2124_, 3);
v_hasDepLetCache_2129_ = lean_ctor_get(v___x_2124_, 4);
v_numConverted_2130_ = lean_ctor_get(v___x_2124_, 5);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2132_ = v___x_2124_;
v_isShared_2133_ = v_isSharedCheck_2168_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_numConverted_2130_);
lean_inc(v_hasDepLetCache_2129_);
lean_inc(v_visitedClosed_2128_);
lean_inc(v_subst_2127_);
lean_inc(v_types_2126_);
lean_inc(v_visited_2125_);
lean_dec(v___x_2124_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2168_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2134_; lean_object* v___x_2136_; 
v___x_2134_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 2, v___x_2134_);
lean_ctor_set(v___x_2132_, 1, v___x_2134_);
lean_ctor_set(v___x_2132_, 0, v___x_2134_);
v___x_2136_ = v___x_2132_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2134_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v___x_2134_);
lean_ctor_set(v_reuseFailAlloc_2167_, 2, v___x_2134_);
lean_ctor_set(v_reuseFailAlloc_2167_, 3, v_visitedClosed_2128_);
lean_ctor_set(v_reuseFailAlloc_2167_, 4, v_hasDepLetCache_2129_);
lean_ctor_set(v_reuseFailAlloc_2167_, 5, v_numConverted_2130_);
v___x_2136_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2137_ = lean_st_ref_put(v___y_2114_, v___x_2136_);
lean_inc(v___y_2120_);
lean_inc_ref(v___y_2119_);
lean_inc(v___y_2118_);
lean_inc_ref(v___y_2117_);
lean_inc(v___y_2116_);
lean_inc_ref(v___y_2115_);
lean_inc(v___y_2114_);
v___x_2138_ = lean_apply_10(v_k_2109_, v_a_2110_, v___y_2123_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, lean_box(0));
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2155_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2141_ = v___x_2138_;
v_isShared_2142_ = v_isSharedCheck_2155_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2138_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2155_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
lean_inc(v_a_2139_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set_tag(v___x_2141_, 1);
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
lean_object* v___x_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
v___x_2145_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0(v___y_2114_, v_visited_2125_, v_types_2126_, v_subst_2127_, v___x_2144_);
lean_dec_ref(v___x_2144_);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2152_ == 0)
{
lean_object* v_unused_2153_; 
v_unused_2153_ = lean_ctor_get(v___x_2145_, 0);
lean_dec(v_unused_2153_);
v___x_2147_ = v___x_2145_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_dec(v___x_2145_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 0, v_a_2139_);
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2139_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2165_; 
v_a_2156_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_a_2156_);
lean_dec_ref_known(v___x_2138_, 1);
v___x_2157_ = lean_box(0);
v___x_2158_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___lam__0(v___y_2114_, v_visited_2125_, v_types_2126_, v_subst_2127_, v___x_2157_);
v_isSharedCheck_2165_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2165_ == 0)
{
lean_object* v_unused_2166_; 
v_unused_2166_ = lean_ctor_get(v___x_2158_, 0);
lean_dec(v_unused_2166_);
v___x_2160_ = v___x_2158_;
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
else
{
lean_dec(v___x_2158_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2163_; 
if (v_isShared_2161_ == 0)
{
lean_ctor_set_tag(v___x_2160_, 1);
lean_ctor_set(v___x_2160_, 0, v_a_2156_);
v___x_2163_ = v___x_2160_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_a_2156_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
}
}
}
v_resetjp_2172_:
{
lean_object* v___x_2175_; lean_object* v___y_2177_; 
lean_inc_ref(v_a_2110_);
v___x_2175_ = l_Lean_PersistentArray_push___redArg(v_xs_2169_, v_a_2110_);
if (v_isCandidate_2112_ == 0)
{
lean_object* v___x_2188_; 
v___x_2188_ = lean_unsigned_to_nat(0u);
v___y_2177_ = v___x_2188_;
goto v___jp_2176_;
}
else
{
lean_object* v___x_2189_; 
v___x_2189_ = lean_unsigned_to_nat(1u);
v___y_2177_ = v___x_2189_;
goto v___jp_2176_;
}
v___jp_2176_:
{
lean_object* v___x_2178_; 
v___x_2178_ = lean_nat_add(v_numCandidates_2170_, v___y_2177_);
lean_dec(v_numCandidates_2170_);
if (v_tainted_2111_ == 0)
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2182_; 
v___x_2179_ = lean_unsigned_to_nat(1u);
v___x_2180_ = lean_nat_add(v_cleanSuffix_2171_, v___x_2179_);
lean_dec(v_cleanSuffix_2171_);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 2, v___x_2180_);
lean_ctor_set(v___x_2173_, 1, v___x_2178_);
lean_ctor_set(v___x_2173_, 0, v___x_2175_);
v___x_2182_ = v___x_2173_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v___x_2175_);
lean_ctor_set(v_reuseFailAlloc_2183_, 1, v___x_2178_);
lean_ctor_set(v_reuseFailAlloc_2183_, 2, v___x_2180_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
v___y_2123_ = v___x_2182_;
goto v___jp_2122_;
}
}
else
{
lean_object* v___x_2184_; lean_object* v___x_2186_; 
lean_dec(v_cleanSuffix_2171_);
v___x_2184_ = lean_unsigned_to_nat(0u);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 2, v___x_2184_);
lean_ctor_set(v___x_2173_, 1, v___x_2178_);
lean_ctor_set(v___x_2173_, 0, v___x_2175_);
v___x_2186_ = v___x_2173_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v___x_2175_);
lean_ctor_set(v_reuseFailAlloc_2187_, 1, v___x_2178_);
lean_ctor_set(v_reuseFailAlloc_2187_, 2, v___x_2184_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
v___y_2123_ = v___x_2186_;
goto v___jp_2122_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___lam__1___boxed(lean_object* v_k_2191_, lean_object* v_a_2192_, lean_object* v_tainted_2193_, lean_object* v_isCandidate_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
uint8_t v_tainted_boxed_2204_; uint8_t v_isCandidate_boxed_2205_; lean_object* v_res_2206_; 
v_tainted_boxed_2204_ = lean_unbox(v_tainted_2193_);
v_isCandidate_boxed_2205_ = lean_unbox(v_isCandidate_2194_);
v_res_2206_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___lam__1(v_k_2191_, v_a_2192_, v_tainted_boxed_2204_, v_isCandidate_boxed_2205_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec(v___y_2196_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0___redArg(lean_object* v___y_2207_){
_start:
{
lean_object* v___x_2209_; lean_object* v_ngen_2210_; lean_object* v_namePrefix_2211_; lean_object* v_idx_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2241_; 
v___x_2209_ = lean_st_ref_get(v___y_2207_);
v_ngen_2210_ = lean_ctor_get(v___x_2209_, 2);
lean_inc_ref(v_ngen_2210_);
lean_dec(v___x_2209_);
v_namePrefix_2211_ = lean_ctor_get(v_ngen_2210_, 0);
v_idx_2212_ = lean_ctor_get(v_ngen_2210_, 1);
v_isSharedCheck_2241_ = !lean_is_exclusive(v_ngen_2210_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2214_ = v_ngen_2210_;
v_isShared_2215_ = v_isSharedCheck_2241_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_idx_2212_);
lean_inc(v_namePrefix_2211_);
lean_dec(v_ngen_2210_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2241_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v_r_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2220_; 
lean_inc(v_idx_2212_);
lean_inc(v_namePrefix_2211_);
v_r_2216_ = l_Lean_Name_num___override(v_namePrefix_2211_, v_idx_2212_);
v___x_2217_ = lean_unsigned_to_nat(1u);
v___x_2218_ = lean_nat_add(v_idx_2212_, v___x_2217_);
lean_dec(v_idx_2212_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 1, v___x_2218_);
v___x_2220_ = v___x_2214_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_namePrefix_2211_);
lean_ctor_set(v_reuseFailAlloc_2240_, 1, v___x_2218_);
v___x_2220_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
lean_object* v___x_2221_; lean_object* v_env_2222_; lean_object* v_nextMacroScope_2223_; lean_object* v_auxDeclNGen_2224_; lean_object* v_traceState_2225_; lean_object* v_cache_2226_; lean_object* v_messages_2227_; lean_object* v_infoState_2228_; lean_object* v_snapshotTasks_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2238_; 
v___x_2221_ = lean_st_ref_take(v___y_2207_);
v_env_2222_ = lean_ctor_get(v___x_2221_, 0);
v_nextMacroScope_2223_ = lean_ctor_get(v___x_2221_, 1);
v_auxDeclNGen_2224_ = lean_ctor_get(v___x_2221_, 3);
v_traceState_2225_ = lean_ctor_get(v___x_2221_, 4);
v_cache_2226_ = lean_ctor_get(v___x_2221_, 5);
v_messages_2227_ = lean_ctor_get(v___x_2221_, 6);
v_infoState_2228_ = lean_ctor_get(v___x_2221_, 7);
v_snapshotTasks_2229_ = lean_ctor_get(v___x_2221_, 8);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2221_);
if (v_isSharedCheck_2238_ == 0)
{
lean_object* v_unused_2239_; 
v_unused_2239_ = lean_ctor_get(v___x_2221_, 2);
lean_dec(v_unused_2239_);
v___x_2231_ = v___x_2221_;
v_isShared_2232_ = v_isSharedCheck_2238_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_snapshotTasks_2229_);
lean_inc(v_infoState_2228_);
lean_inc(v_messages_2227_);
lean_inc(v_cache_2226_);
lean_inc(v_traceState_2225_);
lean_inc(v_auxDeclNGen_2224_);
lean_inc(v_nextMacroScope_2223_);
lean_inc(v_env_2222_);
lean_dec(v___x_2221_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2238_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 2, v___x_2220_);
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_env_2222_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v_nextMacroScope_2223_);
lean_ctor_set(v_reuseFailAlloc_2237_, 2, v___x_2220_);
lean_ctor_set(v_reuseFailAlloc_2237_, 3, v_auxDeclNGen_2224_);
lean_ctor_set(v_reuseFailAlloc_2237_, 4, v_traceState_2225_);
lean_ctor_set(v_reuseFailAlloc_2237_, 5, v_cache_2226_);
lean_ctor_set(v_reuseFailAlloc_2237_, 6, v_messages_2227_);
lean_ctor_set(v_reuseFailAlloc_2237_, 7, v_infoState_2228_);
lean_ctor_set(v_reuseFailAlloc_2237_, 8, v_snapshotTasks_2229_);
v___x_2234_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = lean_st_ref_put(v___y_2207_, v___x_2234_);
v___x_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2236_, 0, v_r_2216_);
return v___x_2236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0___redArg___boxed(lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0___redArg(v___y_2242_);
lean_dec(v___y_2242_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0(lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v___x_2254_; lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2262_; 
v___x_2254_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0___redArg(v___y_2252_);
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2262_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2262_ == 0)
{
v___x_2257_ = v___x_2254_;
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_a_2255_);
lean_dec(v___x_2254_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2260_; 
if (v_isShared_2258_ == 0)
{
v___x_2260_ = v___x_2257_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v_a_2255_);
v___x_2260_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
return v___x_2260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0___boxed(lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0(v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2268_);
lean_dec_ref(v___y_2267_);
lean_dec(v___y_2266_);
lean_dec_ref(v___y_2265_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(lean_object* v_n_2275_, lean_object* v_type_2276_, lean_object* v_value_x3f_2277_, uint8_t v_tainted_2278_, uint8_t v_isCandidate_2279_, lean_object* v_k_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
lean_object* v___x_2290_; 
v___x_2290_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0(v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_);
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; lean_object* v___x_2292_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc_n(v_a_2291_, 2);
lean_dec_ref_known(v___x_2290_, 1);
v___x_2292_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__1___redArg(v_a_2291_, v___y_2284_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; lean_object* v_lctx_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___f_2297_; lean_object* v___y_2299_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v_lctx_2294_ = lean_ctor_get(v___y_2285_, 2);
v___x_2295_ = lean_box(v_tainted_2278_);
v___x_2296_ = lean_box(v_isCandidate_2279_);
v___f_2297_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___lam__1___boxed), 13, 4);
lean_closure_set(v___f_2297_, 0, v_k_2280_);
lean_closure_set(v___f_2297_, 1, v_a_2293_);
lean_closure_set(v___f_2297_, 2, v___x_2295_);
lean_closure_set(v___f_2297_, 3, v___x_2296_);
if (lean_obj_tag(v_value_x3f_2277_) == 0)
{
uint8_t v___x_2302_; uint8_t v___x_2303_; lean_object* v___x_2304_; 
v___x_2302_ = 0;
v___x_2303_ = 0;
lean_inc_ref(v_lctx_2294_);
v___x_2304_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_2294_, v_a_2291_, v_n_2275_, v_type_2276_, v___x_2302_, v___x_2303_);
v___y_2299_ = v___x_2304_;
goto v___jp_2298_;
}
else
{
lean_object* v_val_2305_; lean_object* v_fst_2306_; lean_object* v_snd_2307_; uint8_t v___x_2308_; uint8_t v___x_2309_; lean_object* v___x_2310_; 
v_val_2305_ = lean_ctor_get(v_value_x3f_2277_, 0);
lean_inc(v_val_2305_);
lean_dec_ref_known(v_value_x3f_2277_, 1);
v_fst_2306_ = lean_ctor_get(v_val_2305_, 0);
lean_inc(v_fst_2306_);
v_snd_2307_ = lean_ctor_get(v_val_2305_, 1);
lean_inc(v_snd_2307_);
lean_dec(v_val_2305_);
v___x_2308_ = 0;
v___x_2309_ = lean_unbox(v_snd_2307_);
lean_dec(v_snd_2307_);
lean_inc_ref(v_lctx_2294_);
v___x_2310_ = l_Lean_LocalContext_mkLetDecl(v_lctx_2294_, v_a_2291_, v_n_2275_, v_type_2276_, v_fst_2306_, v___x_2309_, v___x_2308_);
v___y_2299_ = v___x_2310_;
goto v___jp_2298_;
}
v___jp_2298_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2300_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___closed__0));
v___x_2301_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__2___redArg(v___y_2299_, v___x_2300_, v___f_2297_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_);
return v___x_2301_;
}
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
lean_dec(v_a_2291_);
lean_dec_ref(v_k_2280_);
lean_dec(v_value_x3f_2277_);
lean_dec_ref(v_type_2276_);
lean_dec(v_n_2275_);
v_a_2311_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2292_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2292_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
else
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2326_; 
lean_dec_ref(v_k_2280_);
lean_dec(v_value_x3f_2277_);
lean_dec_ref(v_type_2276_);
lean_dec(v_n_2275_);
v_a_2319_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2321_ = v___x_2290_;
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2290_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2322_ == 0)
{
v___x_2324_ = v___x_2321_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2319_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___boxed(lean_object* v_n_2327_, lean_object* v_type_2328_, lean_object* v_value_x3f_2329_, lean_object* v_tainted_2330_, lean_object* v_isCandidate_2331_, lean_object* v_k_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_){
_start:
{
uint8_t v_tainted_boxed_2342_; uint8_t v_isCandidate_boxed_2343_; lean_object* v_res_2344_; 
v_tainted_boxed_2342_ = lean_unbox(v_tainted_2330_);
v_isCandidate_boxed_2343_ = lean_unbox(v_isCandidate_2331_);
v_res_2344_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(v_n_2327_, v_type_2328_, v_value_x3f_2329_, v_tainted_boxed_2342_, v_isCandidate_boxed_2343_, v_k_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_);
lean_dec(v___y_2340_);
lean_dec_ref(v___y_2339_);
lean_dec(v___y_2338_);
lean_dec_ref(v___y_2337_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder(lean_object* v_00_u03b1_2345_, lean_object* v_n_2346_, lean_object* v_type_2347_, lean_object* v_value_x3f_2348_, uint8_t v_tainted_2349_, uint8_t v_isCandidate_2350_, lean_object* v_k_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(v_n_2346_, v_type_2347_, v_value_x3f_2348_, v_tainted_2349_, v_isCandidate_2350_, v_k_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___boxed(lean_object* v_00_u03b1_2362_, lean_object* v_n_2363_, lean_object* v_type_2364_, lean_object* v_value_x3f_2365_, lean_object* v_tainted_2366_, lean_object* v_isCandidate_2367_, lean_object* v_k_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
uint8_t v_tainted_boxed_2378_; uint8_t v_isCandidate_boxed_2379_; lean_object* v_res_2380_; 
v_tainted_boxed_2378_ = lean_unbox(v_tainted_2366_);
v_isCandidate_boxed_2379_ = lean_unbox(v_isCandidate_2367_);
v_res_2380_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder(v_00_u03b1_2362_, v_n_2363_, v_type_2364_, v_value_x3f_2365_, v_tainted_boxed_2378_, v_isCandidate_boxed_2379_, v_k_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_);
lean_dec(v___y_2376_);
lean_dec_ref(v___y_2375_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
lean_dec(v___y_2370_);
lean_dec_ref(v___y_2369_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0(lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0___redArg(v___y_2388_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0___boxed(lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder_spec__0_spec__0(v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___y_2394_);
lean_dec_ref(v___y_2393_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun_spec__0(lean_object* v_msg_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v___f_2411_; lean_object* v___f_2412_; lean_object* v___f_2413_; lean_object* v___f_2414_; lean_object* v___f_2415_; lean_object* v___f_2416_; lean_object* v___f_2417_; lean_object* v___f_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v_toApplicative_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2488_; 
v___f_2411_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__0));
v___f_2412_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__1));
v___f_2413_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__2));
v___f_2414_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__3));
v___f_2415_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__4));
v___f_2416_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2416_, 0, v___f_2415_);
lean_closure_set(v___f_2416_, 1, v___f_2414_);
v___f_2417_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2417_, 0, v___f_2414_);
v___f_2418_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__5));
v___x_2419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2419_, 0, v___f_2411_);
lean_ctor_set(v___x_2419_, 1, v___f_2412_);
v___x_2420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
lean_ctor_set(v___x_2420_, 1, v___f_2413_);
lean_ctor_set(v___x_2420_, 2, v___f_2416_);
lean_ctor_set(v___x_2420_, 3, v___f_2417_);
lean_ctor_set(v___x_2420_, 4, v___f_2418_);
v___x_2421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
lean_ctor_set(v___x_2421_, 1, v___f_2414_);
v___x_2422_ = l_StateRefT_x27_instMonad___redArg(v___x_2421_);
v_toApplicative_2423_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2488_ == 0)
{
lean_object* v_unused_2489_; 
v_unused_2489_ = lean_ctor_get(v___x_2422_, 1);
lean_dec(v_unused_2489_);
v___x_2425_ = v___x_2422_;
v_isShared_2426_ = v_isSharedCheck_2488_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_toApplicative_2423_);
lean_dec(v___x_2422_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2488_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v_toFunctor_2427_; lean_object* v_toSeq_2428_; lean_object* v_toSeqLeft_2429_; lean_object* v_toSeqRight_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2486_; 
v_toFunctor_2427_ = lean_ctor_get(v_toApplicative_2423_, 0);
v_toSeq_2428_ = lean_ctor_get(v_toApplicative_2423_, 2);
v_toSeqLeft_2429_ = lean_ctor_get(v_toApplicative_2423_, 3);
v_toSeqRight_2430_ = lean_ctor_get(v_toApplicative_2423_, 4);
v_isSharedCheck_2486_ = !lean_is_exclusive(v_toApplicative_2423_);
if (v_isSharedCheck_2486_ == 0)
{
lean_object* v_unused_2487_; 
v_unused_2487_ = lean_ctor_get(v_toApplicative_2423_, 1);
lean_dec(v_unused_2487_);
v___x_2432_ = v_toApplicative_2423_;
v_isShared_2433_ = v_isSharedCheck_2486_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_toSeqRight_2430_);
lean_inc(v_toSeqLeft_2429_);
lean_inc(v_toSeq_2428_);
lean_inc(v_toFunctor_2427_);
lean_dec(v_toApplicative_2423_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2486_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___f_2434_; lean_object* v___f_2435_; lean_object* v___f_2436_; lean_object* v___f_2437_; lean_object* v___x_2438_; lean_object* v___f_2439_; lean_object* v___f_2440_; lean_object* v___f_2441_; lean_object* v___x_2443_; 
v___f_2434_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__6));
v___f_2435_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__7));
lean_inc_ref(v_toFunctor_2427_);
v___f_2436_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2436_, 0, v_toFunctor_2427_);
v___f_2437_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2437_, 0, v_toFunctor_2427_);
v___x_2438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2438_, 0, v___f_2436_);
lean_ctor_set(v___x_2438_, 1, v___f_2437_);
v___f_2439_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2439_, 0, v_toSeqRight_2430_);
v___f_2440_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2440_, 0, v_toSeqLeft_2429_);
v___f_2441_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2441_, 0, v_toSeq_2428_);
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 4, v___f_2439_);
lean_ctor_set(v___x_2432_, 3, v___f_2440_);
lean_ctor_set(v___x_2432_, 2, v___f_2441_);
lean_ctor_set(v___x_2432_, 1, v___f_2434_);
lean_ctor_set(v___x_2432_, 0, v___x_2438_);
v___x_2443_ = v___x_2432_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v___x_2438_);
lean_ctor_set(v_reuseFailAlloc_2485_, 1, v___f_2434_);
lean_ctor_set(v_reuseFailAlloc_2485_, 2, v___f_2441_);
lean_ctor_set(v_reuseFailAlloc_2485_, 3, v___f_2440_);
lean_ctor_set(v_reuseFailAlloc_2485_, 4, v___f_2439_);
v___x_2443_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
lean_object* v___x_2445_; 
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 1, v___f_2435_);
lean_ctor_set(v___x_2425_, 0, v___x_2443_);
v___x_2445_ = v___x_2425_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v___x_2443_);
lean_ctor_set(v_reuseFailAlloc_2484_, 1, v___f_2435_);
v___x_2445_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
lean_object* v___x_2446_; lean_object* v_toApplicative_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2482_; 
v___x_2446_ = l_StateRefT_x27_instMonad___redArg(v___x_2445_);
v_toApplicative_2447_ = lean_ctor_get(v___x_2446_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_2482_ == 0)
{
lean_object* v_unused_2483_; 
v_unused_2483_ = lean_ctor_get(v___x_2446_, 1);
lean_dec(v_unused_2483_);
v___x_2449_ = v___x_2446_;
v_isShared_2450_ = v_isSharedCheck_2482_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_toApplicative_2447_);
lean_dec(v___x_2446_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2482_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v_toFunctor_2451_; lean_object* v_toSeq_2452_; lean_object* v_toSeqLeft_2453_; lean_object* v_toSeqRight_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2480_; 
v_toFunctor_2451_ = lean_ctor_get(v_toApplicative_2447_, 0);
v_toSeq_2452_ = lean_ctor_get(v_toApplicative_2447_, 2);
v_toSeqLeft_2453_ = lean_ctor_get(v_toApplicative_2447_, 3);
v_toSeqRight_2454_ = lean_ctor_get(v_toApplicative_2447_, 4);
v_isSharedCheck_2480_ = !lean_is_exclusive(v_toApplicative_2447_);
if (v_isSharedCheck_2480_ == 0)
{
lean_object* v_unused_2481_; 
v_unused_2481_ = lean_ctor_get(v_toApplicative_2447_, 1);
lean_dec(v_unused_2481_);
v___x_2456_ = v_toApplicative_2447_;
v_isShared_2457_ = v_isSharedCheck_2480_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_toSeqRight_2454_);
lean_inc(v_toSeqLeft_2453_);
lean_inc(v_toSeq_2452_);
lean_inc(v_toFunctor_2451_);
lean_dec(v_toApplicative_2447_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2480_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___f_2458_; lean_object* v___f_2459_; lean_object* v___f_2460_; lean_object* v___f_2461_; lean_object* v___x_2462_; lean_object* v___f_2463_; lean_object* v___f_2464_; lean_object* v___f_2465_; lean_object* v___x_2467_; 
v___f_2458_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__8));
v___f_2459_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0___closed__9));
lean_inc_ref(v_toFunctor_2451_);
v___f_2460_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2460_, 0, v_toFunctor_2451_);
v___f_2461_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2461_, 0, v_toFunctor_2451_);
v___x_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2462_, 0, v___f_2460_);
lean_ctor_set(v___x_2462_, 1, v___f_2461_);
v___f_2463_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2463_, 0, v_toSeqRight_2454_);
v___f_2464_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2464_, 0, v_toSeqLeft_2453_);
v___f_2465_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2465_, 0, v_toSeq_2452_);
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 4, v___f_2463_);
lean_ctor_set(v___x_2456_, 3, v___f_2464_);
lean_ctor_set(v___x_2456_, 2, v___f_2465_);
lean_ctor_set(v___x_2456_, 1, v___f_2458_);
lean_ctor_set(v___x_2456_, 0, v___x_2462_);
v___x_2467_ = v___x_2456_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2462_);
lean_ctor_set(v_reuseFailAlloc_2479_, 1, v___f_2458_);
lean_ctor_set(v_reuseFailAlloc_2479_, 2, v___f_2465_);
lean_ctor_set(v_reuseFailAlloc_2479_, 3, v___f_2464_);
lean_ctor_set(v_reuseFailAlloc_2479_, 4, v___f_2463_);
v___x_2467_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
lean_object* v___x_2469_; 
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 1, v___f_2459_);
lean_ctor_set(v___x_2449_, 0, v___x_2467_);
v___x_2469_ = v___x_2449_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v___x_2467_);
lean_ctor_set(v_reuseFailAlloc_2478_, 1, v___f_2459_);
v___x_2469_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_6580__overap_2476_; lean_object* v___x_2477_; 
v___x_2470_ = l_StateRefT_x27_instMonad___redArg(v___x_2469_);
v___x_2471_ = l_ReaderT_instMonad___redArg(v___x_2470_);
v___x_2472_ = l_StateRefT_x27_instMonad___redArg(v___x_2471_);
v___x_2473_ = lean_box(0);
v___x_2474_ = l_instInhabitedOfMonad___redArg(v___x_2472_, v___x_2473_);
v___x_2475_ = l_instInhabitedReaderT___redArg(v___x_2474_);
v___x_6580__overap_2476_ = lean_panic_fn_borrowed(v___x_2475_, v_msg_2401_);
lean_dec(v___x_2475_);
lean_inc(v___y_2409_);
lean_inc_ref(v___y_2408_);
lean_inc(v___y_2407_);
lean_inc_ref(v___y_2406_);
lean_inc(v___y_2405_);
lean_inc_ref(v___y_2404_);
lean_inc(v___y_2403_);
lean_inc_ref(v___y_2402_);
v___x_2477_ = lean_apply_9(v___x_6580__overap_2476_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_, lean_box(0));
return v___x_2477_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun_spec__0___boxed(lean_object* v_msg_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_){
_start:
{
lean_object* v_res_2500_; 
v_res_2500_ = l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun_spec__0(v_msg_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_);
lean_dec(v___y_2498_);
lean_dec_ref(v___y_2497_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
lean_dec(v___y_2494_);
lean_dec_ref(v___y_2493_);
lean_dec(v___y_2492_);
lean_dec_ref(v___y_2491_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___lam__0___boxed(lean_object* v_body_2501_, lean_object* v_body_2502_, lean_object* v_x_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___lam__0(v_body_2501_, v_body_2502_, v_x_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
lean_dec_ref(v_x_2503_);
return v_res_2513_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__1(void){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2515_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__2));
v___x_2516_ = lean_unsigned_to_nat(42u);
v___x_2517_ = lean_unsigned_to_nat(340u);
v___x_2518_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__0));
v___x_2519_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__0));
v___x_2520_ = l_mkPanicMessageWithDecl(v___x_2519_, v___x_2518_, v___x_2517_, v___x_2516_, v___x_2515_);
return v___x_2520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun(lean_object* v_e_2521_, lean_object* v_expected_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_){
_start:
{
if (lean_obj_tag(v_e_2521_) == 6)
{
lean_object* v_binderName_2532_; lean_object* v_binderType_2533_; lean_object* v_body_2534_; lean_object* v___x_2535_; 
v_binderName_2532_ = lean_ctor_get(v_e_2521_, 0);
lean_inc(v_binderName_2532_);
v_binderType_2533_ = lean_ctor_get(v_e_2521_, 1);
lean_inc_ref(v_binderType_2533_);
v_body_2534_ = lean_ctor_get(v_e_2521_, 2);
lean_inc_ref(v_body_2534_);
lean_dec_ref_known(v_e_2521_, 3);
v___x_2535_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg(v_expected_2522_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2536_);
lean_dec_ref_known(v___x_2535_, 1);
if (lean_obj_tag(v_a_2536_) == 7)
{
lean_object* v_binderType_2537_; lean_object* v_body_2538_; lean_object* v___f_2539_; lean_object* v___x_2540_; 
v_binderType_2537_ = lean_ctor_get(v_a_2536_, 1);
lean_inc_ref(v_binderType_2537_);
v_body_2538_ = lean_ctor_get(v_a_2536_, 2);
lean_inc_ref(v_body_2538_);
lean_dec_ref_known(v_a_2536_, 3);
v___f_2539_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___lam__0___boxed), 12, 2);
lean_closure_set(v___f_2539_, 0, v_body_2538_);
lean_closure_set(v___f_2539_, 1, v_body_2534_);
lean_inc_ref(v_binderType_2533_);
v___x_2540_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(v_binderType_2533_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; lean_object* v___x_2542_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc_n(v_a_2541_, 2);
lean_dec_ref_known(v___x_2540_, 1);
v___x_2542_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq(v_a_2541_, v_binderType_2537_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2542_) == 0)
{
lean_object* v_cleanSuffix_2543_; lean_object* v___x_2544_; uint8_t v___y_2546_; lean_object* v___x_2549_; uint8_t v___x_2550_; 
lean_dec_ref_known(v___x_2542_, 1);
v_cleanSuffix_2543_ = lean_ctor_get(v___y_2523_, 2);
v___x_2544_ = lean_box(0);
v___x_2549_ = l_Lean_Expr_looseBVarRange(v_binderType_2533_);
lean_dec_ref(v_binderType_2533_);
v___x_2550_ = lean_nat_dec_le(v___x_2549_, v_cleanSuffix_2543_);
lean_dec(v___x_2549_);
if (v___x_2550_ == 0)
{
uint8_t v___x_2551_; 
v___x_2551_ = 1;
v___y_2546_ = v___x_2551_;
goto v___jp_2545_;
}
else
{
uint8_t v___x_2552_; 
v___x_2552_ = 0;
v___y_2546_ = v___x_2552_;
goto v___jp_2545_;
}
v___jp_2545_:
{
uint8_t v___x_2547_; lean_object* v___x_2548_; 
v___x_2547_ = 0;
v___x_2548_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(v_binderName_2532_, v_a_2541_, v___x_2544_, v___y_2546_, v___x_2547_, v___f_2539_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
return v___x_2548_;
}
}
else
{
lean_dec(v_a_2541_);
lean_dec_ref(v___f_2539_);
lean_dec_ref(v_binderType_2533_);
lean_dec(v_binderName_2532_);
return v___x_2542_;
}
}
else
{
lean_object* v_a_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2560_; 
lean_dec_ref(v___f_2539_);
lean_dec_ref(v_binderType_2537_);
lean_dec_ref(v_binderType_2533_);
lean_dec(v_binderName_2532_);
v_a_2553_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2560_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2555_ = v___x_2540_;
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_a_2553_);
lean_dec(v___x_2540_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2558_; 
if (v_isShared_2556_ == 0)
{
v___x_2558_ = v___x_2555_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_a_2553_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
return v___x_2558_;
}
}
}
}
else
{
lean_object* v___x_2561_; lean_object* v___x_2562_; 
lean_dec(v_a_2536_);
lean_dec_ref(v_body_2534_);
lean_dec_ref(v_binderType_2533_);
lean_dec(v_binderName_2532_);
v___x_2561_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___closed__1);
v___x_2562_ = l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun_spec__0(v___x_2561_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
return v___x_2562_;
}
}
else
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2570_; 
lean_dec_ref(v_body_2534_);
lean_dec_ref(v_binderType_2533_);
lean_dec(v_binderName_2532_);
v_a_2563_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2565_ = v___x_2535_;
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___x_2535_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2568_; 
if (v_isShared_2566_ == 0)
{
v___x_2568_ = v___x_2565_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2563_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
return v___x_2568_;
}
}
}
}
else
{
lean_object* v___x_2571_; 
v___x_2571_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO(v_e_2521_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2571_) == 0)
{
lean_object* v_a_2572_; lean_object* v___x_2573_; 
v_a_2572_ = lean_ctor_get(v___x_2571_, 0);
lean_inc(v_a_2572_);
lean_dec_ref_known(v___x_2571_, 1);
v___x_2573_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq(v_a_2572_, v_expected_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
return v___x_2573_;
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
lean_dec_ref(v_expected_2522_);
v_a_2574_ = lean_ctor_get(v___x_2571_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2571_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2571_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___lam__0(lean_object* v_body_2582_, lean_object* v_body_2583_, lean_object* v_x_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
uint8_t v___x_2594_; 
v___x_2594_ = l_Lean_Expr_hasLooseBVars(v_body_2582_);
if (v___x_2594_ == 0)
{
lean_object* v___x_2595_; 
v___x_2595_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun(v_body_2583_, v_body_2582_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_);
return v___x_2595_;
}
else
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2596_ = lean_expr_instantiate1(v_body_2582_, v_x_2584_);
lean_dec_ref(v_body_2582_);
v___x_2597_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2596_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2599_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2597_, 1);
v___x_2599_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun(v_body_2583_, v_a_2598_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_);
return v___x_2599_;
}
else
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2607_; 
lean_dec_ref(v_body_2583_);
v_a_2600_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2602_ = v___x_2597_;
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2597_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2605_; 
if (v_isShared_2603_ == 0)
{
v___x_2605_ = v___x_2602_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_a_2600_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun___boxed(lean_object* v_e_2608_, lean_object* v_expected_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_){
_start:
{
lean_object* v_res_2619_; 
v_res_2619_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun(v_e_2608_, v_expected_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
lean_dec(v___y_2617_);
lean_dec_ref(v___y_2616_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec(v___y_2611_);
lean_dec_ref(v___y_2610_);
return v_res_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___redArg(lean_object* v_t_2620_, lean_object* v_tf_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
lean_object* v_numCandidates_2631_; lean_object* v_cleanSuffix_2632_; lean_object* v___x_2633_; uint8_t v___x_2634_; 
v_numCandidates_2631_ = lean_ctor_get(v___y_2622_, 1);
v_cleanSuffix_2632_ = lean_ctor_get(v___y_2622_, 2);
v___x_2633_ = lean_unsigned_to_nat(0u);
v___x_2634_ = lean_nat_dec_lt(v___x_2633_, v_numCandidates_2631_);
if (v___x_2634_ == 0)
{
lean_dec_ref(v_tf_2621_);
goto v___jp_2628_;
}
else
{
lean_object* v___x_2635_; uint8_t v___x_2636_; 
v___x_2635_ = l_Lean_Expr_looseBVarRange(v_t_2620_);
v___x_2636_ = lean_nat_dec_le(v___x_2635_, v_cleanSuffix_2632_);
lean_dec(v___x_2635_);
if (v___x_2636_ == 0)
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2637_ = lean_box(0);
v___x_2638_ = l_Lean_Meta_getLevel(v_tf_2621_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_);
if (lean_obj_tag(v___x_2638_) == 0)
{
lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2645_ == 0)
{
lean_object* v_unused_2646_; 
v_unused_2646_ = lean_ctor_get(v___x_2638_, 0);
lean_dec(v_unused_2646_);
v___x_2640_ = v___x_2638_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_dec(v___x_2638_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 0, v___x_2637_);
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v___x_2637_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
else
{
lean_object* v_a_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2654_; 
v_a_2647_ = lean_ctor_get(v___x_2638_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2649_ = v___x_2638_;
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_a_2647_);
lean_dec(v___x_2638_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v___x_2652_; 
if (v_isShared_2650_ == 0)
{
v___x_2652_ = v___x_2649_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_a_2647_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
return v___x_2652_;
}
}
}
}
else
{
lean_dec_ref(v_tf_2621_);
goto v___jp_2628_;
}
}
v___jp_2628_:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2629_ = lean_box(0);
v___x_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2629_);
return v___x_2630_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___redArg___boxed(lean_object* v_t_2655_, lean_object* v_tf_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___redArg(v_t_2655_, v_tf_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec(v___y_2659_);
lean_dec_ref(v___y_2658_);
lean_dec_ref(v___y_2657_);
lean_dec_ref(v_t_2655_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain(lean_object* v_t_2664_, lean_object* v_tf_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___redArg(v_t_2664_, v_tf_2665_, v___y_2666_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___boxed(lean_object* v_t_2676_, lean_object* v_tf_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain(v_t_2676_, v_tf_2677_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
lean_dec_ref(v_t_2676_);
return v_res_2687_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__1(void){
_start:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2689_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__2));
v___x_2690_ = lean_unsigned_to_nat(35u);
v___x_2691_ = lean_unsigned_to_nat(322u);
v___x_2692_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__0));
v___x_2693_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__0));
v___x_2694_ = l_mkPanicMessageWithDecl(v___x_2693_, v___x_2692_, v___x_2691_, v___x_2690_, v___x_2689_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp(lean_object* v_f_2695_, lean_object* v_a_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_){
_start:
{
lean_object* v___x_2706_; 
v___x_2706_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO(v_f_2695_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v_a_2707_; lean_object* v___x_2708_; 
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
lean_inc(v_a_2707_);
lean_dec_ref_known(v___x_2706_, 1);
v___x_2708_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_ensureForall___redArg(v_a_2707_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2736_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2711_ = v___x_2708_;
v_isShared_2712_ = v_isSharedCheck_2736_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2708_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2736_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
if (lean_obj_tag(v_a_2709_) == 7)
{
lean_object* v_binderType_2713_; uint8_t v___x_2728_; 
v_binderType_2713_ = lean_ctor_get(v_a_2709_, 1);
lean_inc_ref(v_binderType_2713_);
lean_dec_ref_known(v_a_2709_, 3);
v___x_2728_ = l_Lean_Expr_hasLooseBVars(v_a_2696_);
if (v___x_2728_ == 0)
{
uint8_t v___x_2729_; 
v___x_2729_ = l_Lean_Expr_hasFVar(v_binderType_2713_);
if (v___x_2729_ == 0)
{
lean_object* v___x_2730_; lean_object* v___x_2732_; 
lean_dec_ref(v_binderType_2713_);
lean_dec_ref(v_a_2696_);
v___x_2730_ = lean_box(0);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 0, v___x_2730_);
v___x_2732_ = v___x_2711_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
else
{
lean_del_object(v___x_2711_);
goto v___jp_2714_;
}
}
else
{
lean_del_object(v___x_2711_);
goto v___jp_2714_;
}
v___jp_2714_:
{
uint8_t v___x_2715_; 
v___x_2715_ = l_Lean_Expr_isLambda(v_a_2696_);
if (v___x_2715_ == 0)
{
lean_object* v___x_2716_; 
v___x_2716_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO(v_a_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v_a_2717_; lean_object* v___x_2718_; 
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_a_2717_);
lean_dec_ref_known(v___x_2716_, 1);
v___x_2718_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq(v_a_2717_, v_binderType_2713_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
return v___x_2718_;
}
else
{
lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2726_; 
lean_dec_ref(v_binderType_2713_);
v_a_2719_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2721_ = v___x_2716_;
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2716_);
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
else
{
lean_object* v___x_2727_; 
v___x_2727_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun(v_a_2696_, v_binderType_2713_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
return v___x_2727_;
}
}
}
else
{
lean_object* v___x_2734_; lean_object* v___x_2735_; 
lean_del_object(v___x_2711_);
lean_dec(v_a_2709_);
lean_dec_ref(v_a_2696_);
v___x_2734_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___closed__1);
v___x_2735_ = l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun_spec__0(v___x_2734_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
return v___x_2735_;
}
}
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
lean_dec_ref(v_a_2696_);
v_a_2737_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___x_2708_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2708_);
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
lean_dec_ref(v_a_2696_);
v_a_2745_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2747_ = v___x_2706_;
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2706_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp___boxed(lean_object* v_f_2753_, lean_object* v_a_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp(v_f_2753_, v_a_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_);
lean_dec(v___y_2762_);
lean_dec_ref(v___y_2761_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___redArg(lean_object* v_x_2765_, uint8_t v_bi_2766_, lean_object* v_t_2767_, lean_object* v_b_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_){
_start:
{
lean_object* v___y_2777_; lean_object* v___x_2780_; uint8_t v_debug_2781_; 
v___x_2780_ = lean_st_ref_get(v___y_2770_);
v_debug_2781_ = lean_ctor_get_uint8(v___x_2780_, sizeof(void*)*11);
lean_dec(v___x_2780_);
if (v_debug_2781_ == 0)
{
v___y_2777_ = v___y_2770_;
goto v___jp_2776_;
}
else
{
lean_object* v___x_2782_; 
v___x_2782_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_2767_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v___x_2783_; 
lean_dec_ref_known(v___x_2782_, 1);
v___x_2783_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_dec_ref_known(v___x_2783_, 1);
v___y_2777_ = v___y_2770_;
goto v___jp_2776_;
}
else
{
lean_object* v_a_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2791_; 
lean_dec_ref(v_b_2768_);
lean_dec_ref(v_t_2767_);
lean_dec(v_x_2765_);
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2786_ = v___x_2783_;
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_a_2784_);
lean_dec(v___x_2783_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v___x_2789_; 
if (v_isShared_2787_ == 0)
{
v___x_2789_ = v___x_2786_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_a_2784_);
v___x_2789_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
return v___x_2789_;
}
}
}
}
else
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2799_; 
lean_dec_ref(v_b_2768_);
lean_dec_ref(v_t_2767_);
lean_dec(v_x_2765_);
v_a_2792_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2794_ = v___x_2782_;
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2782_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_a_2792_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
v___jp_2776_:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___x_2778_ = l_Lean_Expr_lam___override(v_x_2765_, v_t_2767_, v_b_2768_, v_bi_2766_);
v___x_2779_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2778_, v___y_2777_);
return v___x_2779_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___redArg___boxed(lean_object* v_x_2800_, lean_object* v_bi_2801_, lean_object* v_t_2802_, lean_object* v_b_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
uint8_t v_bi_boxed_2811_; lean_object* v_res_2812_; 
v_bi_boxed_2811_ = lean_unbox(v_bi_2801_);
v_res_2812_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___redArg(v_x_2800_, v_bi_boxed_2811_, v_t_2802_, v_b_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec(v___y_2805_);
lean_dec_ref(v___y_2804_);
return v_res_2812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg(lean_object* v_x_2813_, lean_object* v_t_2814_, lean_object* v_v_2815_, lean_object* v_b_2816_, uint8_t v_nondep_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_){
_start:
{
lean_object* v___y_2826_; lean_object* v___x_2829_; uint8_t v_debug_2830_; 
v___x_2829_ = lean_st_ref_get(v___y_2819_);
v_debug_2830_ = lean_ctor_get_uint8(v___x_2829_, sizeof(void*)*11);
lean_dec(v___x_2829_);
if (v_debug_2830_ == 0)
{
v___y_2826_ = v___y_2819_;
goto v___jp_2825_;
}
else
{
lean_object* v___x_2831_; 
v___x_2831_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_2814_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v___x_2832_; 
lean_dec_ref_known(v___x_2831_, 1);
v___x_2832_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_v_2815_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_object* v___x_2833_; 
lean_dec_ref_known(v___x_2832_, 1);
v___x_2833_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_2816_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_dec_ref_known(v___x_2833_, 1);
v___y_2826_ = v___y_2819_;
goto v___jp_2825_;
}
else
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
lean_dec_ref(v_b_2816_);
lean_dec_ref(v_v_2815_);
lean_dec_ref(v_t_2814_);
lean_dec(v_x_2813_);
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2833_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2833_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
else
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2849_; 
lean_dec_ref(v_b_2816_);
lean_dec_ref(v_v_2815_);
lean_dec_ref(v_t_2814_);
lean_dec(v_x_2813_);
v_a_2842_ = lean_ctor_get(v___x_2832_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2844_ = v___x_2832_;
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2832_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2847_; 
if (v_isShared_2845_ == 0)
{
v___x_2847_ = v___x_2844_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v_a_2842_);
v___x_2847_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
return v___x_2847_;
}
}
}
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
lean_dec_ref(v_b_2816_);
lean_dec_ref(v_v_2815_);
lean_dec_ref(v_t_2814_);
lean_dec(v_x_2813_);
v_a_2850_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2831_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2831_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
v___jp_2825_:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2827_ = l_Lean_Expr_letE___override(v_x_2813_, v_t_2814_, v_v_2815_, v_b_2816_, v_nondep_2817_);
v___x_2828_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2827_, v___y_2826_);
return v___x_2828_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg___boxed(lean_object* v_x_2858_, lean_object* v_t_2859_, lean_object* v_v_2860_, lean_object* v_b_2861_, lean_object* v_nondep_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
uint8_t v_nondep_boxed_2870_; lean_object* v_res_2871_; 
v_nondep_boxed_2870_ = lean_unbox(v_nondep_2862_);
v_res_2871_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg(v_x_2858_, v_t_2859_, v_v_2860_, v_b_2861_, v_nondep_boxed_2870_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
lean_dec(v___y_2866_);
lean_dec_ref(v___y_2865_);
lean_dec(v___y_2864_);
lean_dec_ref(v___y_2863_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___redArg(lean_object* v_x_2872_, uint8_t v_bi_2873_, lean_object* v_t_2874_, lean_object* v_b_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_){
_start:
{
lean_object* v___y_2884_; lean_object* v___x_2887_; uint8_t v_debug_2888_; 
v___x_2887_ = lean_st_ref_get(v___y_2877_);
v_debug_2888_ = lean_ctor_get_uint8(v___x_2887_, sizeof(void*)*11);
lean_dec(v___x_2887_);
if (v_debug_2888_ == 0)
{
v___y_2884_ = v___y_2877_;
goto v___jp_2883_;
}
else
{
lean_object* v___x_2889_; 
v___x_2889_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_2874_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_object* v___x_2890_; 
lean_dec_ref_known(v___x_2889_, 1);
v___x_2890_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_2875_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_dec_ref_known(v___x_2890_, 1);
v___y_2884_ = v___y_2877_;
goto v___jp_2883_;
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
lean_dec_ref(v_b_2875_);
lean_dec_ref(v_t_2874_);
lean_dec(v_x_2872_);
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2890_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2890_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
else
{
lean_object* v_a_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2906_; 
lean_dec_ref(v_b_2875_);
lean_dec_ref(v_t_2874_);
lean_dec(v_x_2872_);
v_a_2899_ = lean_ctor_get(v___x_2889_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2889_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2901_ = v___x_2889_;
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_a_2899_);
lean_dec(v___x_2889_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2904_; 
if (v_isShared_2902_ == 0)
{
v___x_2904_ = v___x_2901_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_a_2899_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
return v___x_2904_;
}
}
}
}
v___jp_2883_:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2885_ = l_Lean_Expr_forallE___override(v_x_2872_, v_t_2874_, v_b_2875_, v_bi_2873_);
v___x_2886_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2885_, v___y_2884_);
return v___x_2886_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___redArg___boxed(lean_object* v_x_2907_, lean_object* v_bi_2908_, lean_object* v_t_2909_, lean_object* v_b_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_){
_start:
{
uint8_t v_bi_boxed_2918_; lean_object* v_res_2919_; 
v_bi_boxed_2918_ = lean_unbox(v_bi_2908_);
v_res_2919_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___redArg(v_x_2907_, v_bi_boxed_2918_, v_t_2909_, v_b_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec(v___y_2912_);
lean_dec_ref(v___y_2911_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2___redArg(lean_object* v_d_2920_, lean_object* v_e_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v___y_2930_; lean_object* v___x_2933_; uint8_t v_debug_2934_; 
v___x_2933_ = lean_st_ref_get(v___y_2923_);
v_debug_2934_ = lean_ctor_get_uint8(v___x_2933_, sizeof(void*)*11);
lean_dec(v___x_2933_);
if (v_debug_2934_ == 0)
{
v___y_2930_ = v___y_2923_;
goto v___jp_2929_;
}
else
{
lean_object* v___x_2935_; 
v___x_2935_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_e_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_dec_ref_known(v___x_2935_, 1);
v___y_2930_ = v___y_2923_;
goto v___jp_2929_;
}
else
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2943_; 
lean_dec_ref(v_e_2921_);
lean_dec(v_d_2920_);
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2935_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2938_ = v___x_2935_;
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2935_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
}
v___jp_2929_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = l_Lean_Expr_mdata___override(v_d_2920_, v_e_2921_);
v___x_2932_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2931_, v___y_2930_);
return v___x_2932_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2___redArg___boxed(lean_object* v_d_2944_, lean_object* v_e_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2___redArg(v_d_2944_, v_e_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_);
lean_dec(v___y_2951_);
lean_dec_ref(v___y_2950_);
lean_dec(v___y_2949_);
lean_dec_ref(v___y_2948_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3___redArg(lean_object* v_structName_2954_, lean_object* v_idx_2955_, lean_object* v_struct_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
lean_object* v___y_2965_; lean_object* v___x_2968_; uint8_t v_debug_2969_; 
v___x_2968_ = lean_st_ref_get(v___y_2958_);
v_debug_2969_ = lean_ctor_get_uint8(v___x_2968_, sizeof(void*)*11);
lean_dec(v___x_2968_);
if (v_debug_2969_ == 0)
{
v___y_2965_ = v___y_2958_;
goto v___jp_2964_;
}
else
{
lean_object* v___x_2970_; 
v___x_2970_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_struct_2956_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_dec_ref_known(v___x_2970_, 1);
v___y_2965_ = v___y_2958_;
goto v___jp_2964_;
}
else
{
lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2978_; 
lean_dec_ref(v_struct_2956_);
lean_dec(v_idx_2955_);
lean_dec(v_structName_2954_);
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_2978_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2973_ = v___x_2970_;
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_dec(v___x_2970_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2976_; 
if (v_isShared_2974_ == 0)
{
v___x_2976_ = v___x_2973_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_a_2971_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
return v___x_2976_;
}
}
}
}
v___jp_2964_:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2966_ = l_Lean_Expr_proj___override(v_structName_2954_, v_idx_2955_, v_struct_2956_);
v___x_2967_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2966_, v___y_2965_);
return v___x_2967_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3___redArg___boxed(lean_object* v_structName_2979_, lean_object* v_idx_2980_, lean_object* v_struct_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_){
_start:
{
lean_object* v_res_2989_; 
v_res_2989_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3___redArg(v_structName_2979_, v_idx_2980_, v_struct_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_, v___y_2987_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec(v___y_2985_);
lean_dec_ref(v___y_2984_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___redArg(lean_object* v_f_2990_, lean_object* v_a_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v___y_3000_; lean_object* v___x_3003_; uint8_t v_debug_3004_; 
v___x_3003_ = lean_st_ref_get(v___y_2993_);
v_debug_3004_ = lean_ctor_get_uint8(v___x_3003_, sizeof(void*)*11);
lean_dec(v___x_3003_);
if (v_debug_3004_ == 0)
{
v___y_3000_ = v___y_2993_;
goto v___jp_2999_;
}
else
{
lean_object* v___x_3005_; 
v___x_3005_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_2990_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v___x_3006_; 
lean_dec_ref_known(v___x_3005_, 1);
v___x_3006_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_dec_ref_known(v___x_3006_, 1);
v___y_3000_ = v___y_2993_;
goto v___jp_2999_;
}
else
{
lean_object* v_a_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3014_; 
lean_dec_ref(v_a_2991_);
lean_dec_ref(v_f_2990_);
v_a_3007_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3009_ = v___x_3006_;
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_a_3007_);
lean_dec(v___x_3006_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3012_; 
if (v_isShared_3010_ == 0)
{
v___x_3012_ = v___x_3009_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_a_3007_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
lean_dec_ref(v_a_2991_);
lean_dec_ref(v_f_2990_);
v_a_3015_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_3005_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v___x_3005_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
}
v___jp_2999_:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3001_ = l_Lean_Expr_app___override(v_f_2990_, v_a_2991_);
v___x_3002_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_3001_, v___y_3000_);
return v___x_3002_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___redArg___boxed(lean_object* v_f_3023_, lean_object* v_a_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_){
_start:
{
lean_object* v_res_3032_; 
v_res_3032_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___redArg(v_f_3023_, v_a_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_);
lean_dec(v___y_3030_);
lean_dec_ref(v___y_3029_);
lean_dec(v___y_3028_);
lean_dec_ref(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
return v_res_3032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___lam__0(lean_object* v___y_3033_, lean_object* v_visited_3034_, lean_object* v_types_3035_, lean_object* v_subst_3036_, lean_object* v_a_x3f_3037_){
_start:
{
lean_object* v___x_3039_; lean_object* v_visitedClosed_3040_; lean_object* v_hasDepLetCache_3041_; lean_object* v_numConverted_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3052_; 
v___x_3039_ = lean_st_ref_take(v___y_3033_);
v_visitedClosed_3040_ = lean_ctor_get(v___x_3039_, 3);
v_hasDepLetCache_3041_ = lean_ctor_get(v___x_3039_, 4);
v_numConverted_3042_ = lean_ctor_get(v___x_3039_, 5);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3052_ == 0)
{
lean_object* v_unused_3053_; lean_object* v_unused_3054_; lean_object* v_unused_3055_; 
v_unused_3053_ = lean_ctor_get(v___x_3039_, 2);
lean_dec(v_unused_3053_);
v_unused_3054_ = lean_ctor_get(v___x_3039_, 1);
lean_dec(v_unused_3054_);
v_unused_3055_ = lean_ctor_get(v___x_3039_, 0);
lean_dec(v_unused_3055_);
v___x_3044_ = v___x_3039_;
v_isShared_3045_ = v_isSharedCheck_3052_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_numConverted_3042_);
lean_inc(v_hasDepLetCache_3041_);
lean_inc(v_visitedClosed_3040_);
lean_dec(v___x_3039_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3052_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3046_; lean_object* v___x_3048_; 
v___x_3046_ = lean_box(0);
if (v_isShared_3045_ == 0)
{
lean_ctor_set(v___x_3044_, 2, v_subst_3036_);
lean_ctor_set(v___x_3044_, 1, v_types_3035_);
lean_ctor_set(v___x_3044_, 0, v_visited_3034_);
v___x_3048_ = v___x_3044_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_visited_3034_);
lean_ctor_set(v_reuseFailAlloc_3051_, 1, v_types_3035_);
lean_ctor_set(v_reuseFailAlloc_3051_, 2, v_subst_3036_);
lean_ctor_set(v_reuseFailAlloc_3051_, 3, v_visitedClosed_3040_);
lean_ctor_set(v_reuseFailAlloc_3051_, 4, v_hasDepLetCache_3041_);
lean_ctor_set(v_reuseFailAlloc_3051_, 5, v_numConverted_3042_);
v___x_3048_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3049_ = lean_st_ref_put(v___y_3033_, v___x_3048_);
v___x_3050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3046_);
return v___x_3050_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___lam__0___boxed(lean_object* v___y_3056_, lean_object* v_visited_3057_, lean_object* v_types_3058_, lean_object* v_subst_3059_, lean_object* v_a_x3f_3060_, lean_object* v___y_3061_){
_start:
{
lean_object* v_res_3062_; 
v_res_3062_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___lam__0(v___y_3056_, v_visited_3057_, v_types_3058_, v_subst_3059_, v_a_x3f_3060_);
lean_dec(v_a_x3f_3060_);
lean_dec(v___y_3056_);
return v_res_3062_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__0(void){
_start:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3063_ = lean_unsigned_to_nat(32u);
v___x_3064_ = lean_mk_empty_array_with_capacity(v___x_3063_);
v___x_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3064_);
return v___x_3065_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__1(void){
_start:
{
size_t v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3066_ = ((size_t)5ULL);
v___x_3067_ = lean_unsigned_to_nat(0u);
v___x_3068_ = lean_unsigned_to_nat(32u);
v___x_3069_ = lean_mk_empty_array_with_capacity(v___x_3068_);
v___x_3070_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__0, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__0);
v___x_3071_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3071_, 0, v___x_3070_);
lean_ctor_set(v___x_3071_, 1, v___x_3069_);
lean_ctor_set(v___x_3071_, 2, v___x_3067_);
lean_ctor_set(v___x_3071_, 3, v___x_3067_);
lean_ctor_set_usize(v___x_3071_, 4, v___x_3066_);
return v___x_3071_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__2(void){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3072_ = lean_unsigned_to_nat(0u);
v___x_3073_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__1);
v___x_3074_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3073_);
lean_ctor_set(v___x_3074_, 1, v___x_3072_);
lean_ctor_set(v___x_3074_, 2, v___x_3072_);
return v___x_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__0___boxed(lean_object* v_body_3075_, lean_object* v_binderType_3076_, lean_object* v_a_3077_, lean_object* v_binderName_3078_, lean_object* v_binderInfo_3079_, lean_object* v_e_3080_, lean_object* v_x_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_){
_start:
{
uint8_t v_binderInfo_85922__boxed_3091_; lean_object* v_res_3092_; 
v_binderInfo_85922__boxed_3091_ = lean_unbox(v_binderInfo_3079_);
v_res_3092_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__0(v_body_3075_, v_binderType_3076_, v_a_3077_, v_binderName_3078_, v_binderInfo_85922__boxed_3091_, v_e_3080_, v_x_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_);
lean_dec(v___y_3089_);
lean_dec_ref(v___y_3088_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
lean_dec(v___y_3083_);
lean_dec_ref(v___y_3082_);
lean_dec_ref(v_x_3081_);
lean_dec_ref(v_binderType_3076_);
return v_res_3092_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall___lam__0(lean_object* v_body_3093_, lean_object* v_binderType_3094_, lean_object* v_a_3095_, lean_object* v_binderName_3096_, uint8_t v_binderInfo_3097_, lean_object* v_e_3098_, lean_object* v_x_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v___x_3109_; 
lean_inc_ref(v_body_3093_);
v___x_3109_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall(v_body_3093_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3125_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3112_ = v___x_3109_;
v_isShared_3113_ = v_isSharedCheck_3125_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3109_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3125_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
size_t v___x_3114_; size_t v___x_3115_; uint8_t v___x_3116_; 
v___x_3114_ = lean_ptr_addr(v_binderType_3094_);
v___x_3115_ = lean_ptr_addr(v_a_3095_);
v___x_3116_ = lean_usize_dec_eq(v___x_3114_, v___x_3115_);
if (v___x_3116_ == 0)
{
lean_object* v___x_3117_; 
lean_del_object(v___x_3112_);
lean_dec_ref(v_e_3098_);
lean_dec_ref(v_body_3093_);
v___x_3117_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___redArg(v_binderName_3096_, v_binderInfo_3097_, v_a_3095_, v_a_3110_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
return v___x_3117_;
}
else
{
size_t v___x_3118_; size_t v___x_3119_; uint8_t v___x_3120_; 
v___x_3118_ = lean_ptr_addr(v_body_3093_);
lean_dec_ref(v_body_3093_);
v___x_3119_ = lean_ptr_addr(v_a_3110_);
v___x_3120_ = lean_usize_dec_eq(v___x_3118_, v___x_3119_);
if (v___x_3120_ == 0)
{
lean_object* v___x_3121_; 
lean_del_object(v___x_3112_);
lean_dec_ref(v_e_3098_);
v___x_3121_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___redArg(v_binderName_3096_, v_binderInfo_3097_, v_a_3095_, v_a_3110_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
return v___x_3121_;
}
else
{
lean_object* v___x_3123_; 
lean_dec(v_a_3110_);
lean_dec(v_binderName_3096_);
lean_dec_ref(v_a_3095_);
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v_e_3098_);
v___x_3123_ = v___x_3112_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_e_3098_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_3098_);
lean_dec(v_binderName_3096_);
lean_dec_ref(v_a_3095_);
lean_dec_ref(v_body_3093_);
return v___x_3109_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall___lam__0___boxed(lean_object* v_body_3126_, lean_object* v_binderType_3127_, lean_object* v_a_3128_, lean_object* v_binderName_3129_, lean_object* v_binderInfo_3130_, lean_object* v_e_3131_, lean_object* v_x_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_){
_start:
{
uint8_t v_binderInfo_85949__boxed_3142_; lean_object* v_res_3143_; 
v_binderInfo_85949__boxed_3142_ = lean_unbox(v_binderInfo_3130_);
v_res_3143_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall___lam__0(v_body_3126_, v_binderType_3127_, v_a_3128_, v_binderName_3129_, v_binderInfo_85949__boxed_3142_, v_e_3131_, v_x_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_);
lean_dec(v___y_3140_);
lean_dec_ref(v___y_3139_);
lean_dec(v___y_3138_);
lean_dec_ref(v___y_3137_);
lean_dec(v___y_3136_);
lean_dec_ref(v___y_3135_);
lean_dec(v___y_3134_);
lean_dec_ref(v___y_3133_);
lean_dec_ref(v_x_3132_);
lean_dec_ref(v_binderType_3127_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall(lean_object* v_e_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_){
_start:
{
if (lean_obj_tag(v_e_3144_) == 7)
{
lean_object* v_binderName_3154_; lean_object* v_binderType_3155_; lean_object* v_body_3156_; uint8_t v_binderInfo_3157_; lean_object* v___x_3158_; 
v_binderName_3154_ = lean_ctor_get(v_e_3144_, 0);
lean_inc(v_binderName_3154_);
v_binderType_3155_ = lean_ctor_get(v_e_3144_, 1);
lean_inc_ref_n(v_binderType_3155_, 2);
v_body_3156_ = lean_ctor_get(v_e_3144_, 2);
lean_inc_ref(v_body_3156_);
v_binderInfo_3157_ = lean_ctor_get_uint8(v_e_3144_, sizeof(void*)*3 + 8);
v___x_3158_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_binderType_3155_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
if (lean_obj_tag(v___x_3158_) == 0)
{
lean_object* v_a_3159_; lean_object* v___x_3160_; lean_object* v___f_3161_; lean_object* v___x_3162_; 
v_a_3159_ = lean_ctor_get(v___x_3158_, 0);
lean_inc_n(v_a_3159_, 2);
lean_dec_ref_known(v___x_3158_, 1);
v___x_3160_ = lean_box(v_binderInfo_3157_);
lean_inc(v_binderName_3154_);
lean_inc_ref(v_binderType_3155_);
v___f_3161_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall___lam__0___boxed), 16, 6);
lean_closure_set(v___f_3161_, 0, v_body_3156_);
lean_closure_set(v___f_3161_, 1, v_binderType_3155_);
lean_closure_set(v___f_3161_, 2, v_a_3159_);
lean_closure_set(v___f_3161_, 3, v_binderName_3154_);
lean_closure_set(v___f_3161_, 4, v___x_3160_);
lean_closure_set(v___f_3161_, 5, v_e_3144_);
v___x_3162_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(v_a_3159_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
if (lean_obj_tag(v___x_3162_) == 0)
{
lean_object* v_a_3163_; lean_object* v___x_3164_; 
v_a_3163_ = lean_ctor_get(v___x_3162_, 0);
lean_inc_n(v_a_3163_, 2);
lean_dec_ref_known(v___x_3162_, 1);
v___x_3164_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___redArg(v_binderType_3155_, v_a_3163_, v___y_3145_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_cleanSuffix_3165_; lean_object* v___x_3166_; uint8_t v___y_3168_; lean_object* v___x_3171_; uint8_t v___x_3172_; 
lean_dec_ref_known(v___x_3164_, 1);
v_cleanSuffix_3165_ = lean_ctor_get(v___y_3145_, 2);
v___x_3166_ = lean_box(0);
v___x_3171_ = l_Lean_Expr_looseBVarRange(v_binderType_3155_);
lean_dec_ref(v_binderType_3155_);
v___x_3172_ = lean_nat_dec_le(v___x_3171_, v_cleanSuffix_3165_);
lean_dec(v___x_3171_);
if (v___x_3172_ == 0)
{
uint8_t v___x_3173_; 
v___x_3173_ = 1;
v___y_3168_ = v___x_3173_;
goto v___jp_3167_;
}
else
{
uint8_t v___x_3174_; 
v___x_3174_ = 0;
v___y_3168_ = v___x_3174_;
goto v___jp_3167_;
}
v___jp_3167_:
{
uint8_t v___x_3169_; lean_object* v___x_3170_; 
v___x_3169_ = 0;
v___x_3170_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(v_binderName_3154_, v_a_3163_, v___x_3166_, v___y_3168_, v___x_3169_, v___f_3161_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
return v___x_3170_;
}
}
else
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
lean_dec(v_a_3163_);
lean_dec_ref(v___f_3161_);
lean_dec_ref(v_binderType_3155_);
lean_dec(v_binderName_3154_);
v_a_3175_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3164_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3164_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
else
{
lean_dec_ref(v___f_3161_);
lean_dec_ref(v_binderType_3155_);
lean_dec(v_binderName_3154_);
return v___x_3162_;
}
}
else
{
lean_dec_ref(v_body_3156_);
lean_dec_ref(v_binderType_3155_);
lean_dec(v_binderName_3154_);
lean_dec_ref_known(v_e_3144_, 3);
return v___x_3158_;
}
}
else
{
lean_object* v___x_3183_; 
lean_inc_ref(v_e_3144_);
v___x_3183_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_e_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
if (lean_obj_tag(v___x_3183_) == 0)
{
lean_object* v_a_3184_; lean_object* v_numCandidates_3185_; lean_object* v_cleanSuffix_3186_; lean_object* v___x_3187_; uint8_t v___x_3188_; 
v_a_3184_ = lean_ctor_get(v___x_3183_, 0);
lean_inc(v_a_3184_);
v_numCandidates_3185_ = lean_ctor_get(v___y_3145_, 1);
v_cleanSuffix_3186_ = lean_ctor_get(v___y_3145_, 2);
v___x_3187_ = lean_unsigned_to_nat(0u);
v___x_3188_ = lean_nat_dec_lt(v___x_3187_, v_numCandidates_3185_);
if (v___x_3188_ == 0)
{
lean_dec(v_a_3184_);
lean_dec_ref(v_e_3144_);
return v___x_3183_;
}
else
{
lean_object* v___x_3189_; uint8_t v___x_3190_; 
v___x_3189_ = l_Lean_Expr_looseBVarRange(v_e_3144_);
lean_dec_ref(v_e_3144_);
v___x_3190_ = lean_nat_dec_le(v___x_3189_, v_cleanSuffix_3186_);
lean_dec(v___x_3189_);
if (v___x_3190_ == 0)
{
lean_object* v___x_3191_; 
lean_dec_ref_known(v___x_3183_, 1);
lean_inc(v_a_3184_);
v___x_3191_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(v_a_3184_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v_a_3192_; lean_object* v___x_3193_; 
v_a_3192_ = lean_ctor_get(v___x_3191_, 0);
lean_inc(v_a_3192_);
lean_dec_ref_known(v___x_3191_, 1);
v___x_3193_ = l_Lean_Meta_getLevel(v_a_3192_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
if (lean_obj_tag(v___x_3193_) == 0)
{
lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3200_; 
v_isSharedCheck_3200_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3200_ == 0)
{
lean_object* v_unused_3201_; 
v_unused_3201_ = lean_ctor_get(v___x_3193_, 0);
lean_dec(v_unused_3201_);
v___x_3195_ = v___x_3193_;
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
else
{
lean_dec(v___x_3193_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3198_; 
if (v_isShared_3196_ == 0)
{
lean_ctor_set(v___x_3195_, 0, v_a_3184_);
v___x_3198_ = v___x_3195_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_a_3184_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
}
else
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3209_; 
lean_dec(v_a_3184_);
v_a_3202_ = lean_ctor_get(v___x_3193_, 0);
v_isSharedCheck_3209_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3209_ == 0)
{
v___x_3204_ = v___x_3193_;
v_isShared_3205_ = v_isSharedCheck_3209_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3193_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3209_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3207_; 
if (v_isShared_3205_ == 0)
{
v___x_3207_ = v___x_3204_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v_a_3202_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
}
}
else
{
lean_dec(v_a_3184_);
return v___x_3191_;
}
}
else
{
lean_dec(v_a_3184_);
return v___x_3183_;
}
}
}
else
{
lean_dec_ref(v_e_3144_);
return v___x_3183_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__1(lean_object* v_body_3210_, lean_object* v_type_3211_, lean_object* v_a_3212_, lean_object* v_declName_3213_, lean_object* v_a_3214_, uint8_t v_nondep_3215_, lean_object* v_value_3216_, lean_object* v_e_3217_, uint8_t v___y_3218_, lean_object* v_x_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v___x_3229_; 
lean_inc_ref(v_body_3210_);
v___x_3229_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_body_3210_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
if (lean_obj_tag(v___x_3229_) == 0)
{
lean_object* v_a_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3296_; 
v_a_3230_ = lean_ctor_get(v___x_3229_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3229_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3232_ = v___x_3229_;
v_isShared_3233_ = v_isSharedCheck_3296_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_a_3230_);
lean_dec(v___x_3229_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3296_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___y_3235_; lean_object* v___y_3236_; lean_object* v___y_3237_; lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; uint8_t v_nondep_x27_3257_; lean_object* v___y_3258_; lean_object* v___y_3259_; lean_object* v___y_3260_; lean_object* v___y_3261_; lean_object* v___y_3262_; lean_object* v___y_3263_; lean_object* v___x_3266_; 
v___x_3266_ = l_Lean_Meta_getZetaDeltaFVarIds___redArg(v___y_3225_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; uint8_t v___x_3268_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref_known(v___x_3266_, 1);
v___x_3268_ = 1;
if (v_nondep_3215_ == 0)
{
if (v___y_3218_ == 0)
{
lean_dec(v_a_3267_);
v_nondep_x27_3257_ = v_nondep_3215_;
v___y_3258_ = v___y_3222_;
v___y_3259_ = v___y_3223_;
v___y_3260_ = v___y_3224_;
v___y_3261_ = v___y_3225_;
v___y_3262_ = v___y_3226_;
v___y_3263_ = v___y_3227_;
goto v___jp_3256_;
}
else
{
lean_object* v___x_3269_; uint8_t v___x_3270_; 
v___x_3269_ = l_Lean_Expr_fvarId_x21(v_x_3219_);
v___x_3270_ = l_Lean_FVarIdSet_contains(v_a_3267_, v___x_3269_);
lean_dec(v___x_3269_);
lean_dec(v_a_3267_);
if (v___x_3270_ == 0)
{
lean_object* v___x_3271_; lean_object* v_visited_3272_; lean_object* v_types_3273_; lean_object* v_subst_3274_; lean_object* v_visitedClosed_3275_; lean_object* v_hasDepLetCache_3276_; lean_object* v_numConverted_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3287_; 
v___x_3271_ = lean_st_ref_take(v___y_3221_);
v_visited_3272_ = lean_ctor_get(v___x_3271_, 0);
v_types_3273_ = lean_ctor_get(v___x_3271_, 1);
v_subst_3274_ = lean_ctor_get(v___x_3271_, 2);
v_visitedClosed_3275_ = lean_ctor_get(v___x_3271_, 3);
v_hasDepLetCache_3276_ = lean_ctor_get(v___x_3271_, 4);
v_numConverted_3277_ = lean_ctor_get(v___x_3271_, 5);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3279_ = v___x_3271_;
v_isShared_3280_ = v_isSharedCheck_3287_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_numConverted_3277_);
lean_inc(v_hasDepLetCache_3276_);
lean_inc(v_visitedClosed_3275_);
lean_inc(v_subst_3274_);
lean_inc(v_types_3273_);
lean_inc(v_visited_3272_);
lean_dec(v___x_3271_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3287_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3284_; 
v___x_3281_ = lean_unsigned_to_nat(1u);
v___x_3282_ = lean_nat_add(v_numConverted_3277_, v___x_3281_);
lean_dec(v_numConverted_3277_);
if (v_isShared_3280_ == 0)
{
lean_ctor_set(v___x_3279_, 5, v___x_3282_);
v___x_3284_ = v___x_3279_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_visited_3272_);
lean_ctor_set(v_reuseFailAlloc_3286_, 1, v_types_3273_);
lean_ctor_set(v_reuseFailAlloc_3286_, 2, v_subst_3274_);
lean_ctor_set(v_reuseFailAlloc_3286_, 3, v_visitedClosed_3275_);
lean_ctor_set(v_reuseFailAlloc_3286_, 4, v_hasDepLetCache_3276_);
lean_ctor_set(v_reuseFailAlloc_3286_, 5, v___x_3282_);
v___x_3284_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
lean_object* v___x_3285_; 
v___x_3285_ = lean_st_ref_put(v___y_3221_, v___x_3284_);
v_nondep_x27_3257_ = v___x_3268_;
v___y_3258_ = v___y_3222_;
v___y_3259_ = v___y_3223_;
v___y_3260_ = v___y_3224_;
v___y_3261_ = v___y_3225_;
v___y_3262_ = v___y_3226_;
v___y_3263_ = v___y_3227_;
goto v___jp_3256_;
}
}
}
else
{
v_nondep_x27_3257_ = v_nondep_3215_;
v___y_3258_ = v___y_3222_;
v___y_3259_ = v___y_3223_;
v___y_3260_ = v___y_3224_;
v___y_3261_ = v___y_3225_;
v___y_3262_ = v___y_3226_;
v___y_3263_ = v___y_3227_;
goto v___jp_3256_;
}
}
}
else
{
lean_dec(v_a_3267_);
v_nondep_x27_3257_ = v___x_3268_;
v___y_3258_ = v___y_3222_;
v___y_3259_ = v___y_3223_;
v___y_3260_ = v___y_3224_;
v___y_3261_ = v___y_3225_;
v___y_3262_ = v___y_3226_;
v___y_3263_ = v___y_3227_;
goto v___jp_3256_;
}
}
else
{
lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3295_; 
lean_del_object(v___x_3232_);
lean_dec(v_a_3230_);
lean_dec_ref(v_e_3217_);
lean_dec_ref(v_a_3214_);
lean_dec(v_declName_3213_);
lean_dec_ref(v_a_3212_);
lean_dec_ref(v_body_3210_);
v_a_3288_ = lean_ctor_get(v___x_3266_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3290_ = v___x_3266_;
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_dec(v___x_3266_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3293_; 
if (v_isShared_3291_ == 0)
{
v___x_3293_ = v___x_3290_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_a_3288_);
v___x_3293_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
return v___x_3293_;
}
}
}
v___jp_3234_:
{
size_t v___x_3241_; size_t v___x_3242_; uint8_t v___x_3243_; 
v___x_3241_ = lean_ptr_addr(v_type_3211_);
v___x_3242_ = lean_ptr_addr(v_a_3212_);
v___x_3243_ = lean_usize_dec_eq(v___x_3241_, v___x_3242_);
if (v___x_3243_ == 0)
{
lean_object* v___x_3244_; 
lean_del_object(v___x_3232_);
lean_dec_ref(v_e_3217_);
lean_dec_ref(v_body_3210_);
v___x_3244_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg(v_declName_3213_, v_a_3212_, v_a_3214_, v_a_3230_, v_nondep_3215_, v___y_3236_, v___y_3235_, v___y_3238_, v___y_3239_, v___y_3237_, v___y_3240_);
return v___x_3244_;
}
else
{
size_t v___x_3245_; size_t v___x_3246_; uint8_t v___x_3247_; 
v___x_3245_ = lean_ptr_addr(v_value_3216_);
v___x_3246_ = lean_ptr_addr(v_a_3214_);
v___x_3247_ = lean_usize_dec_eq(v___x_3245_, v___x_3246_);
if (v___x_3247_ == 0)
{
lean_object* v___x_3248_; 
lean_del_object(v___x_3232_);
lean_dec_ref(v_e_3217_);
lean_dec_ref(v_body_3210_);
v___x_3248_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg(v_declName_3213_, v_a_3212_, v_a_3214_, v_a_3230_, v_nondep_3215_, v___y_3236_, v___y_3235_, v___y_3238_, v___y_3239_, v___y_3237_, v___y_3240_);
return v___x_3248_;
}
else
{
size_t v___x_3249_; size_t v___x_3250_; uint8_t v___x_3251_; 
v___x_3249_ = lean_ptr_addr(v_body_3210_);
lean_dec_ref(v_body_3210_);
v___x_3250_ = lean_ptr_addr(v_a_3230_);
v___x_3251_ = lean_usize_dec_eq(v___x_3249_, v___x_3250_);
if (v___x_3251_ == 0)
{
lean_object* v___x_3252_; 
lean_del_object(v___x_3232_);
lean_dec_ref(v_e_3217_);
v___x_3252_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg(v_declName_3213_, v_a_3212_, v_a_3214_, v_a_3230_, v_nondep_3215_, v___y_3236_, v___y_3235_, v___y_3238_, v___y_3239_, v___y_3237_, v___y_3240_);
return v___x_3252_;
}
else
{
lean_object* v___x_3254_; 
lean_dec(v_a_3230_);
lean_dec_ref(v_a_3214_);
lean_dec(v_declName_3213_);
lean_dec_ref(v_a_3212_);
if (v_isShared_3233_ == 0)
{
lean_ctor_set(v___x_3232_, 0, v_e_3217_);
v___x_3254_ = v___x_3232_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_e_3217_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
}
v___jp_3256_:
{
if (v_nondep_3215_ == 0)
{
if (v_nondep_x27_3257_ == 0)
{
v___y_3235_ = v___y_3259_;
v___y_3236_ = v___y_3258_;
v___y_3237_ = v___y_3262_;
v___y_3238_ = v___y_3260_;
v___y_3239_ = v___y_3261_;
v___y_3240_ = v___y_3263_;
goto v___jp_3234_;
}
else
{
lean_object* v___x_3264_; 
lean_del_object(v___x_3232_);
lean_dec_ref(v_e_3217_);
lean_dec_ref(v_body_3210_);
v___x_3264_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg(v_declName_3213_, v_a_3212_, v_a_3214_, v_a_3230_, v_nondep_x27_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_);
return v___x_3264_;
}
}
else
{
if (v_nondep_x27_3257_ == 0)
{
lean_object* v___x_3265_; 
lean_del_object(v___x_3232_);
lean_dec_ref(v_e_3217_);
lean_dec_ref(v_body_3210_);
v___x_3265_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg(v_declName_3213_, v_a_3212_, v_a_3214_, v_a_3230_, v_nondep_x27_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_);
return v___x_3265_;
}
else
{
v___y_3235_ = v___y_3259_;
v___y_3236_ = v___y_3258_;
v___y_3237_ = v___y_3262_;
v___y_3238_ = v___y_3260_;
v___y_3239_ = v___y_3261_;
v___y_3240_ = v___y_3263_;
goto v___jp_3234_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_3217_);
lean_dec_ref(v_a_3214_);
lean_dec(v_declName_3213_);
lean_dec_ref(v_a_3212_);
lean_dec_ref(v_body_3210_);
return v___x_3229_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__1___boxed(lean_object** _args){
lean_object* v_body_3297_ = _args[0];
lean_object* v_type_3298_ = _args[1];
lean_object* v_a_3299_ = _args[2];
lean_object* v_declName_3300_ = _args[3];
lean_object* v_a_3301_ = _args[4];
lean_object* v_nondep_3302_ = _args[5];
lean_object* v_value_3303_ = _args[6];
lean_object* v_e_3304_ = _args[7];
lean_object* v___y_3305_ = _args[8];
lean_object* v_x_3306_ = _args[9];
lean_object* v___y_3307_ = _args[10];
lean_object* v___y_3308_ = _args[11];
lean_object* v___y_3309_ = _args[12];
lean_object* v___y_3310_ = _args[13];
lean_object* v___y_3311_ = _args[14];
lean_object* v___y_3312_ = _args[15];
lean_object* v___y_3313_ = _args[16];
lean_object* v___y_3314_ = _args[17];
lean_object* v___y_3315_ = _args[18];
_start:
{
uint8_t v_nondep_86129__boxed_3316_; uint8_t v___y_86131__boxed_3317_; lean_object* v_res_3318_; 
v_nondep_86129__boxed_3316_ = lean_unbox(v_nondep_3302_);
v___y_86131__boxed_3317_ = lean_unbox(v___y_3305_);
v_res_3318_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__1(v_body_3297_, v_type_3298_, v_a_3299_, v_declName_3300_, v_a_3301_, v_nondep_86129__boxed_3316_, v_value_3303_, v_e_3304_, v___y_86131__boxed_3317_, v_x_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
lean_dec_ref(v_x_3306_);
lean_dec_ref(v_value_3303_);
lean_dec_ref(v_type_3298_);
return v_res_3318_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__1(void){
_start:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___x_3320_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv_spec__0___closed__2));
v___x_3321_ = lean_unsigned_to_nat(9u);
v___x_3322_ = lean_unsigned_to_nat(263u);
v___x_3323_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__0));
v___x_3324_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO___closed__0));
v___x_3325_ = l_mkPanicMessageWithDecl(v___x_3324_, v___x_3323_, v___x_3322_, v___x_3321_, v___x_3320_);
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore(lean_object* v_e_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_){
_start:
{
switch(lean_obj_tag(v_e_3326_))
{
case 5:
{
lean_object* v_fn_3336_; lean_object* v_arg_3337_; lean_object* v___y_3339_; lean_object* v_a_3340_; lean_object* v___y_3362_; lean_object* v___x_3364_; 
v_fn_3336_ = lean_ctor_get(v_e_3326_, 0);
lean_inc_ref_n(v_fn_3336_, 2);
v_arg_3337_ = lean_ctor_get(v_e_3326_, 1);
lean_inc_ref(v_arg_3337_);
v___x_3364_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_fn_3336_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v_a_3365_; lean_object* v___x_3366_; 
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_a_3365_);
lean_dec_ref_known(v___x_3364_, 1);
lean_inc_ref(v_arg_3337_);
v___x_3366_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_arg_3337_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3366_) == 0)
{
lean_object* v_a_3367_; lean_object* v___x_3369_; uint8_t v_isShared_3370_; uint8_t v_isSharedCheck_3382_; 
v_a_3367_ = lean_ctor_get(v___x_3366_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v___x_3366_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3369_ = v___x_3366_;
v_isShared_3370_ = v_isSharedCheck_3382_;
goto v_resetjp_3368_;
}
else
{
lean_inc(v_a_3367_);
lean_dec(v___x_3366_);
v___x_3369_ = lean_box(0);
v_isShared_3370_ = v_isSharedCheck_3382_;
goto v_resetjp_3368_;
}
v_resetjp_3368_:
{
size_t v___x_3371_; size_t v___x_3372_; uint8_t v___x_3373_; 
v___x_3371_ = lean_ptr_addr(v_fn_3336_);
v___x_3372_ = lean_ptr_addr(v_a_3365_);
v___x_3373_ = lean_usize_dec_eq(v___x_3371_, v___x_3372_);
if (v___x_3373_ == 0)
{
lean_object* v___x_3374_; 
lean_del_object(v___x_3369_);
lean_dec_ref_known(v_e_3326_, 2);
v___x_3374_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___redArg(v_a_3365_, v_a_3367_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
v___y_3362_ = v___x_3374_;
goto v___jp_3361_;
}
else
{
size_t v___x_3375_; size_t v___x_3376_; uint8_t v___x_3377_; 
v___x_3375_ = lean_ptr_addr(v_arg_3337_);
v___x_3376_ = lean_ptr_addr(v_a_3367_);
v___x_3377_ = lean_usize_dec_eq(v___x_3375_, v___x_3376_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; 
lean_del_object(v___x_3369_);
lean_dec_ref_known(v_e_3326_, 2);
v___x_3378_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___redArg(v_a_3365_, v_a_3367_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
v___y_3362_ = v___x_3378_;
goto v___jp_3361_;
}
else
{
lean_object* v___x_3380_; 
lean_dec(v_a_3367_);
lean_dec(v_a_3365_);
lean_inc_ref(v_e_3326_);
if (v_isShared_3370_ == 0)
{
lean_ctor_set(v___x_3369_, 0, v_e_3326_);
v___x_3380_ = v___x_3369_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_e_3326_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
v___y_3339_ = v___x_3380_;
v_a_3340_ = v_e_3326_;
goto v___jp_3338_;
}
}
}
}
}
else
{
lean_dec(v_a_3365_);
lean_dec_ref(v_arg_3337_);
lean_dec_ref(v_fn_3336_);
lean_dec_ref_known(v_e_3326_, 2);
return v___x_3366_;
}
}
else
{
lean_dec_ref(v_arg_3337_);
lean_dec_ref(v_fn_3336_);
lean_dec_ref_known(v_e_3326_, 2);
return v___x_3364_;
}
v___jp_3338_:
{
lean_object* v_numCandidates_3341_; lean_object* v___x_3342_; uint8_t v___x_3343_; 
v_numCandidates_3341_ = lean_ctor_get(v___y_3327_, 1);
v___x_3342_ = lean_unsigned_to_nat(0u);
v___x_3343_ = lean_nat_dec_lt(v___x_3342_, v_numCandidates_3341_);
if (v___x_3343_ == 0)
{
lean_dec_ref(v_a_3340_);
lean_dec_ref(v_arg_3337_);
lean_dec_ref(v_fn_3336_);
return v___y_3339_;
}
else
{
lean_object* v___x_3344_; 
lean_dec_ref(v___y_3339_);
v___x_3344_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkApp(v_fn_3336_, v_arg_3337_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3351_; 
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3351_ == 0)
{
lean_object* v_unused_3352_; 
v_unused_3352_ = lean_ctor_get(v___x_3344_, 0);
lean_dec(v_unused_3352_);
v___x_3346_ = v___x_3344_;
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
else
{
lean_dec(v___x_3344_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3349_; 
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 0, v_a_3340_);
v___x_3349_ = v___x_3346_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_a_3340_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
else
{
lean_object* v_a_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3360_; 
lean_dec_ref(v_a_3340_);
v_a_3353_ = lean_ctor_get(v___x_3344_, 0);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3355_ = v___x_3344_;
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_a_3353_);
lean_dec(v___x_3344_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
lean_object* v___x_3358_; 
if (v_isShared_3356_ == 0)
{
v___x_3358_ = v___x_3355_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_a_3353_);
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
}
v___jp_3361_:
{
if (lean_obj_tag(v___y_3362_) == 0)
{
lean_object* v_a_3363_; 
v_a_3363_ = lean_ctor_get(v___y_3362_, 0);
lean_inc(v_a_3363_);
v___y_3339_ = v___y_3362_;
v_a_3340_ = v_a_3363_;
goto v___jp_3338_;
}
else
{
lean_dec_ref(v_arg_3337_);
lean_dec_ref(v_fn_3336_);
return v___y_3362_;
}
}
}
case 10:
{
lean_object* v_data_3383_; lean_object* v_expr_3384_; lean_object* v___x_3385_; 
v_data_3383_ = lean_ctor_get(v_e_3326_, 0);
v_expr_3384_ = lean_ctor_get(v_e_3326_, 1);
lean_inc_ref(v_expr_3384_);
v___x_3385_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_expr_3384_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_a_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3397_; 
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3388_ = v___x_3385_;
v_isShared_3389_ = v_isSharedCheck_3397_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3385_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3397_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
size_t v___x_3390_; size_t v___x_3391_; uint8_t v___x_3392_; 
v___x_3390_ = lean_ptr_addr(v_expr_3384_);
v___x_3391_ = lean_ptr_addr(v_a_3386_);
v___x_3392_ = lean_usize_dec_eq(v___x_3390_, v___x_3391_);
if (v___x_3392_ == 0)
{
lean_object* v___x_3393_; 
lean_inc(v_data_3383_);
lean_del_object(v___x_3388_);
lean_dec_ref_known(v_e_3326_, 2);
v___x_3393_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2___redArg(v_data_3383_, v_a_3386_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
return v___x_3393_;
}
else
{
lean_object* v___x_3395_; 
lean_dec(v_a_3386_);
if (v_isShared_3389_ == 0)
{
lean_ctor_set(v___x_3388_, 0, v_e_3326_);
v___x_3395_ = v___x_3388_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_e_3326_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3326_, 2);
return v___x_3385_;
}
}
case 11:
{
lean_object* v_typeName_3398_; lean_object* v_idx_3399_; lean_object* v_struct_3400_; lean_object* v___y_3402_; lean_object* v_a_3403_; lean_object* v___x_3419_; 
v_typeName_3398_ = lean_ctor_get(v_e_3326_, 0);
v_idx_3399_ = lean_ctor_get(v_e_3326_, 1);
v_struct_3400_ = lean_ctor_get(v_e_3326_, 2);
lean_inc_ref(v_struct_3400_);
v___x_3419_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_struct_3400_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3432_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3422_ = v___x_3419_;
v_isShared_3423_ = v_isSharedCheck_3432_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3419_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3432_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
size_t v___x_3424_; size_t v___x_3425_; uint8_t v___x_3426_; 
v___x_3424_ = lean_ptr_addr(v_struct_3400_);
v___x_3425_ = lean_ptr_addr(v_a_3420_);
v___x_3426_ = lean_usize_dec_eq(v___x_3424_, v___x_3425_);
if (v___x_3426_ == 0)
{
lean_object* v___x_3427_; 
lean_del_object(v___x_3422_);
lean_inc(v_idx_3399_);
lean_inc(v_typeName_3398_);
v___x_3427_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3___redArg(v_typeName_3398_, v_idx_3399_, v_a_3420_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_object* v_a_3428_; 
v_a_3428_ = lean_ctor_get(v___x_3427_, 0);
lean_inc(v_a_3428_);
v___y_3402_ = v___x_3427_;
v_a_3403_ = v_a_3428_;
goto v___jp_3401_;
}
else
{
lean_dec_ref_known(v_e_3326_, 3);
return v___x_3427_;
}
}
else
{
lean_object* v___x_3430_; 
lean_dec(v_a_3420_);
lean_inc_ref(v_e_3326_);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 0, v_e_3326_);
v___x_3430_ = v___x_3422_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_e_3326_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
lean_inc_ref(v_e_3326_);
v___y_3402_ = v___x_3430_;
v_a_3403_ = v_e_3326_;
goto v___jp_3401_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3326_, 3);
return v___x_3419_;
}
v___jp_3401_:
{
lean_object* v_numCandidates_3404_; lean_object* v_cleanSuffix_3405_; lean_object* v___x_3406_; uint8_t v___x_3407_; 
v_numCandidates_3404_ = lean_ctor_get(v___y_3327_, 1);
v_cleanSuffix_3405_ = lean_ctor_get(v___y_3327_, 2);
v___x_3406_ = lean_unsigned_to_nat(0u);
v___x_3407_ = lean_nat_dec_lt(v___x_3406_, v_numCandidates_3404_);
if (v___x_3407_ == 0)
{
lean_dec_ref(v_a_3403_);
lean_dec_ref_known(v_e_3326_, 3);
return v___y_3402_;
}
else
{
lean_object* v___x_3408_; uint8_t v___x_3409_; 
v___x_3408_ = l_Lean_Expr_looseBVarRange(v_struct_3400_);
v___x_3409_ = lean_nat_dec_le(v___x_3408_, v_cleanSuffix_3405_);
lean_dec(v___x_3408_);
if (v___x_3409_ == 0)
{
lean_object* v___x_3410_; 
lean_dec_ref(v___y_3402_);
v___x_3410_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeFallback(v_e_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3410_) == 0)
{
lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3410_);
if (v_isSharedCheck_3417_ == 0)
{
lean_object* v_unused_3418_; 
v_unused_3418_ = lean_ctor_get(v___x_3410_, 0);
lean_dec(v_unused_3418_);
v___x_3412_ = v___x_3410_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_dec(v___x_3410_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
lean_ctor_set(v___x_3412_, 0, v_a_3403_);
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3403_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
else
{
lean_dec_ref(v_a_3403_);
return v___x_3410_;
}
}
else
{
lean_dec_ref(v_a_3403_);
lean_dec_ref_known(v_e_3326_, 3);
return v___y_3402_;
}
}
}
}
case 6:
{
lean_object* v_binderName_3433_; lean_object* v_binderType_3434_; lean_object* v_body_3435_; uint8_t v_binderInfo_3436_; lean_object* v___x_3437_; 
v_binderName_3433_ = lean_ctor_get(v_e_3326_, 0);
lean_inc(v_binderName_3433_);
v_binderType_3434_ = lean_ctor_get(v_e_3326_, 1);
lean_inc_ref_n(v_binderType_3434_, 2);
v_body_3435_ = lean_ctor_get(v_e_3326_, 2);
lean_inc_ref(v_body_3435_);
v_binderInfo_3436_ = lean_ctor_get_uint8(v_e_3326_, sizeof(void*)*3 + 8);
v___x_3437_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_binderType_3434_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_object* v_a_3438_; lean_object* v___x_3439_; lean_object* v___f_3440_; lean_object* v___x_3441_; 
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
lean_inc_n(v_a_3438_, 2);
lean_dec_ref_known(v___x_3437_, 1);
v___x_3439_ = lean_box(v_binderInfo_3436_);
lean_inc(v_binderName_3433_);
lean_inc_ref(v_binderType_3434_);
v___f_3440_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__0___boxed), 16, 6);
lean_closure_set(v___f_3440_, 0, v_body_3435_);
lean_closure_set(v___f_3440_, 1, v_binderType_3434_);
lean_closure_set(v___f_3440_, 2, v_a_3438_);
lean_closure_set(v___f_3440_, 3, v_binderName_3433_);
lean_closure_set(v___f_3440_, 4, v___x_3439_);
lean_closure_set(v___f_3440_, 5, v_e_3326_);
v___x_3441_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(v_a_3438_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3441_) == 0)
{
lean_object* v_a_3442_; lean_object* v___x_3443_; 
v_a_3442_ = lean_ctor_get(v___x_3441_, 0);
lean_inc_n(v_a_3442_, 2);
lean_dec_ref_known(v___x_3441_, 1);
v___x_3443_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___redArg(v_binderType_3434_, v_a_3442_, v___y_3327_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_cleanSuffix_3444_; lean_object* v___x_3445_; uint8_t v___y_3447_; lean_object* v___x_3450_; uint8_t v___x_3451_; 
lean_dec_ref_known(v___x_3443_, 1);
v_cleanSuffix_3444_ = lean_ctor_get(v___y_3327_, 2);
v___x_3445_ = lean_box(0);
v___x_3450_ = l_Lean_Expr_looseBVarRange(v_binderType_3434_);
lean_dec_ref(v_binderType_3434_);
v___x_3451_ = lean_nat_dec_le(v___x_3450_, v_cleanSuffix_3444_);
lean_dec(v___x_3450_);
if (v___x_3451_ == 0)
{
uint8_t v___x_3452_; 
v___x_3452_ = 1;
v___y_3447_ = v___x_3452_;
goto v___jp_3446_;
}
else
{
uint8_t v___x_3453_; 
v___x_3453_ = 0;
v___y_3447_ = v___x_3453_;
goto v___jp_3446_;
}
v___jp_3446_:
{
uint8_t v___x_3448_; lean_object* v___x_3449_; 
v___x_3448_ = 0;
v___x_3449_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(v_binderName_3433_, v_a_3442_, v___x_3445_, v___y_3447_, v___x_3448_, v___f_3440_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
return v___x_3449_;
}
}
else
{
lean_object* v_a_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3461_; 
lean_dec(v_a_3442_);
lean_dec_ref(v___f_3440_);
lean_dec_ref(v_binderType_3434_);
lean_dec(v_binderName_3433_);
v_a_3454_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3461_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3456_ = v___x_3443_;
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_a_3454_);
lean_dec(v___x_3443_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3459_; 
if (v_isShared_3457_ == 0)
{
v___x_3459_ = v___x_3456_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v_a_3454_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
return v___x_3459_;
}
}
}
}
else
{
lean_dec_ref(v___f_3440_);
lean_dec_ref(v_binderType_3434_);
lean_dec(v_binderName_3433_);
return v___x_3441_;
}
}
else
{
lean_dec_ref(v_body_3435_);
lean_dec_ref(v_binderType_3434_);
lean_dec_ref_known(v_e_3326_, 3);
lean_dec(v_binderName_3433_);
return v___x_3437_;
}
}
case 7:
{
lean_object* v___x_3462_; 
v___x_3462_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall(v_e_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
return v___x_3462_;
}
case 8:
{
lean_object* v_declName_3463_; lean_object* v_type_3464_; lean_object* v_value_3465_; lean_object* v_body_3466_; uint8_t v_nondep_3467_; lean_object* v___x_3468_; 
v_declName_3463_ = lean_ctor_get(v_e_3326_, 0);
lean_inc(v_declName_3463_);
v_type_3464_ = lean_ctor_get(v_e_3326_, 1);
lean_inc_ref_n(v_type_3464_, 2);
v_value_3465_ = lean_ctor_get(v_e_3326_, 2);
lean_inc_ref(v_value_3465_);
v_body_3466_ = lean_ctor_get(v_e_3326_, 3);
lean_inc_ref(v_body_3466_);
v_nondep_3467_ = lean_ctor_get_uint8(v_e_3326_, sizeof(void*)*4 + 8);
v___x_3468_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_type_3464_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3468_) == 0)
{
lean_object* v_a_3469_; lean_object* v___x_3470_; 
v_a_3469_ = lean_ctor_get(v___x_3468_, 0);
lean_inc(v_a_3469_);
lean_dec_ref_known(v___x_3468_, 1);
lean_inc_ref(v_value_3465_);
v___x_3470_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_value_3465_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v_a_3471_; lean_object* v___x_3472_; 
v_a_3471_ = lean_ctor_get(v___x_3470_, 0);
lean_inc(v_a_3471_);
lean_dec_ref_known(v___x_3470_, 1);
lean_inc(v_a_3469_);
v___x_3472_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(v_a_3469_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3557_; 
v_a_3473_ = lean_ctor_get(v___x_3472_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3475_ = v___x_3472_;
v_isShared_3476_ = v_isSharedCheck_3557_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v___x_3472_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3557_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v_numCandidates_3477_; lean_object* v_cleanSuffix_3478_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; uint8_t v___y_3488_; lean_object* v___y_3489_; uint8_t v___y_3490_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3509_; lean_object* v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___x_3520_; uint8_t v___x_3521_; 
v_numCandidates_3477_ = lean_ctor_get(v___y_3327_, 1);
v_cleanSuffix_3478_ = lean_ctor_get(v___y_3327_, 2);
v___x_3520_ = lean_unsigned_to_nat(0u);
v___x_3521_ = lean_nat_dec_lt(v___x_3520_, v_numCandidates_3477_);
if (v___x_3521_ == 0)
{
v___y_3506_ = v___y_3327_;
v___y_3507_ = v___y_3328_;
v___y_3508_ = v___y_3329_;
v___y_3509_ = v___y_3330_;
v___y_3510_ = v___y_3331_;
v___y_3511_ = v___y_3332_;
v___y_3512_ = v___y_3333_;
v___y_3513_ = v___y_3334_;
goto v___jp_3505_;
}
else
{
lean_object* v___x_3522_; 
lean_inc(v_a_3473_);
v___x_3522_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDomain___redArg(v_type_3464_, v_a_3473_, v___y_3327_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v___x_3545_; uint8_t v___x_3546_; 
lean_dec_ref_known(v___x_3522_, 1);
v___x_3545_ = l_Lean_Expr_looseBVarRange(v_type_3464_);
v___x_3546_ = lean_nat_dec_le(v___x_3545_, v_cleanSuffix_3478_);
lean_dec(v___x_3545_);
if (v___x_3546_ == 0)
{
goto v___jp_3523_;
}
else
{
lean_object* v___x_3547_; uint8_t v___x_3548_; 
v___x_3547_ = l_Lean_Expr_looseBVarRange(v_value_3465_);
v___x_3548_ = lean_nat_dec_le(v___x_3547_, v_cleanSuffix_3478_);
lean_dec(v___x_3547_);
if (v___x_3548_ == 0)
{
goto v___jp_3523_;
}
else
{
v___y_3506_ = v___y_3327_;
v___y_3507_ = v___y_3328_;
v___y_3508_ = v___y_3329_;
v___y_3509_ = v___y_3330_;
v___y_3510_ = v___y_3331_;
v___y_3511_ = v___y_3332_;
v___y_3512_ = v___y_3333_;
v___y_3513_ = v___y_3334_;
goto v___jp_3505_;
}
}
v___jp_3523_:
{
uint8_t v___x_3524_; 
v___x_3524_ = l_Lean_Expr_isLambda(v_value_3465_);
if (v___x_3524_ == 0)
{
lean_object* v___x_3525_; 
lean_inc_ref(v_value_3465_);
v___x_3525_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO(v_value_3465_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v_a_3526_; lean_object* v___x_3527_; 
v_a_3526_ = lean_ctor_get(v___x_3525_, 0);
lean_inc(v_a_3526_);
lean_dec_ref_known(v___x_3525_, 1);
lean_inc(v_a_3473_);
v___x_3527_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq(v_a_3526_, v_a_3473_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3527_) == 0)
{
lean_dec_ref_known(v___x_3527_, 1);
v___y_3506_ = v___y_3327_;
v___y_3507_ = v___y_3328_;
v___y_3508_ = v___y_3329_;
v___y_3509_ = v___y_3330_;
v___y_3510_ = v___y_3331_;
v___y_3511_ = v___y_3332_;
v___y_3512_ = v___y_3333_;
v___y_3513_ = v___y_3334_;
goto v___jp_3505_;
}
else
{
lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3535_; 
lean_del_object(v___x_3475_);
lean_dec(v_a_3473_);
lean_dec(v_a_3471_);
lean_dec(v_a_3469_);
lean_dec_ref(v_body_3466_);
lean_dec_ref(v_value_3465_);
lean_dec_ref(v_type_3464_);
lean_dec_ref_known(v_e_3326_, 4);
lean_dec(v_declName_3463_);
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3530_ = v___x_3527_;
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3527_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3533_; 
if (v_isShared_3531_ == 0)
{
v___x_3533_ = v___x_3530_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3528_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
else
{
lean_del_object(v___x_3475_);
lean_dec(v_a_3473_);
lean_dec(v_a_3471_);
lean_dec(v_a_3469_);
lean_dec_ref(v_body_3466_);
lean_dec_ref(v_value_3465_);
lean_dec_ref(v_type_3464_);
lean_dec_ref_known(v_e_3326_, 4);
lean_dec(v_declName_3463_);
return v___x_3525_;
}
}
else
{
lean_object* v___x_3536_; 
lean_inc(v_a_3473_);
lean_inc_ref(v_value_3465_);
v___x_3536_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkFun(v_value_3465_, v_a_3473_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_dec_ref_known(v___x_3536_, 1);
v___y_3506_ = v___y_3327_;
v___y_3507_ = v___y_3328_;
v___y_3508_ = v___y_3329_;
v___y_3509_ = v___y_3330_;
v___y_3510_ = v___y_3331_;
v___y_3511_ = v___y_3332_;
v___y_3512_ = v___y_3333_;
v___y_3513_ = v___y_3334_;
goto v___jp_3505_;
}
else
{
lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3544_; 
lean_del_object(v___x_3475_);
lean_dec(v_a_3473_);
lean_dec(v_a_3471_);
lean_dec(v_a_3469_);
lean_dec_ref(v_body_3466_);
lean_dec_ref(v_value_3465_);
lean_dec_ref(v_type_3464_);
lean_dec_ref_known(v_e_3326_, 4);
lean_dec(v_declName_3463_);
v_a_3537_ = lean_ctor_get(v___x_3536_, 0);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3536_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3539_ = v___x_3536_;
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_dec(v___x_3536_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3542_; 
if (v_isShared_3540_ == 0)
{
v___x_3542_ = v___x_3539_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_a_3537_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
return v___x_3542_;
}
}
}
}
}
}
else
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3556_; 
lean_del_object(v___x_3475_);
lean_dec(v_a_3473_);
lean_dec(v_a_3471_);
lean_dec(v_a_3469_);
lean_dec_ref(v_body_3466_);
lean_dec_ref(v_value_3465_);
lean_dec_ref(v_type_3464_);
lean_dec_ref_known(v_e_3326_, 4);
lean_dec(v_declName_3463_);
v_a_3549_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3556_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3556_ == 0)
{
v___x_3551_ = v___x_3522_;
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v___x_3522_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3554_; 
if (v_isShared_3552_ == 0)
{
v___x_3554_ = v___x_3551_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_a_3549_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
}
v___jp_3479_:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___f_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3497_; 
v___x_3491_ = lean_box(v_nondep_3467_);
v___x_3492_ = lean_box(v___y_3490_);
lean_inc(v_declName_3463_);
lean_inc_ref(v_type_3464_);
v___f_3493_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__1___boxed), 19, 9);
lean_closure_set(v___f_3493_, 0, v_body_3466_);
lean_closure_set(v___f_3493_, 1, v_type_3464_);
lean_closure_set(v___f_3493_, 2, v_a_3469_);
lean_closure_set(v___f_3493_, 3, v_declName_3463_);
lean_closure_set(v___f_3493_, 4, v_a_3471_);
lean_closure_set(v___f_3493_, 5, v___x_3491_);
lean_closure_set(v___f_3493_, 6, v_value_3465_);
lean_closure_set(v___f_3493_, 7, v_e_3326_);
lean_closure_set(v___f_3493_, 8, v___x_3492_);
v___x_3494_ = lean_box(v_nondep_3467_);
v___x_3495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3495_, 0, v___y_3485_);
lean_ctor_set(v___x_3495_, 1, v___x_3494_);
if (v_isShared_3476_ == 0)
{
lean_ctor_set_tag(v___x_3475_, 1);
lean_ctor_set(v___x_3475_, 0, v___x_3495_);
v___x_3497_ = v___x_3475_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v___x_3495_);
v___x_3497_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
if (v___y_3488_ == 0)
{
lean_object* v___x_3498_; uint8_t v___x_3499_; 
v___x_3498_ = l_Lean_Expr_looseBVarRange(v_type_3464_);
lean_dec_ref(v_type_3464_);
v___x_3499_ = lean_nat_dec_le(v___x_3498_, v_cleanSuffix_3478_);
lean_dec(v___x_3498_);
if (v___x_3499_ == 0)
{
uint8_t v___x_3500_; lean_object* v___x_3501_; 
v___x_3500_ = 1;
v___x_3501_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(v_declName_3463_, v_a_3473_, v___x_3497_, v___x_3500_, v___y_3490_, v___f_3493_, v___y_3484_, v___y_3481_, v___y_3483_, v___y_3480_, v___y_3482_, v___y_3489_, v___y_3487_, v___y_3486_);
return v___x_3501_;
}
else
{
lean_object* v___x_3502_; 
v___x_3502_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(v_declName_3463_, v_a_3473_, v___x_3497_, v___y_3488_, v___y_3490_, v___f_3493_, v___y_3484_, v___y_3481_, v___y_3483_, v___y_3480_, v___y_3482_, v___y_3489_, v___y_3487_, v___y_3486_);
return v___x_3502_;
}
}
else
{
lean_object* v___x_3503_; 
lean_dec_ref(v_type_3464_);
v___x_3503_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg(v_declName_3463_, v_a_3473_, v___x_3497_, v___y_3488_, v___y_3490_, v___f_3493_, v___y_3484_, v___y_3481_, v___y_3483_, v___y_3480_, v___y_3482_, v___y_3489_, v___y_3487_, v___y_3486_);
return v___x_3503_;
}
}
}
v___jp_3505_:
{
lean_object* v___x_3514_; 
lean_inc(v_a_3471_);
v___x_3514_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_substEnv(v_a_3471_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
if (lean_obj_tag(v___x_3514_) == 0)
{
if (v_nondep_3467_ == 0)
{
lean_object* v_a_3515_; uint8_t v___x_3516_; uint8_t v___x_3517_; 
v_a_3515_ = lean_ctor_get(v___x_3514_, 0);
lean_inc(v_a_3515_);
lean_dec_ref_known(v___x_3514_, 1);
v___x_3516_ = 1;
v___x_3517_ = l_Lean_Expr_hasExprMVar(v_e_3326_);
if (v___x_3517_ == 0)
{
v___y_3480_ = v___y_3509_;
v___y_3481_ = v___y_3507_;
v___y_3482_ = v___y_3510_;
v___y_3483_ = v___y_3508_;
v___y_3484_ = v___y_3506_;
v___y_3485_ = v_a_3515_;
v___y_3486_ = v___y_3513_;
v___y_3487_ = v___y_3512_;
v___y_3488_ = v___x_3516_;
v___y_3489_ = v___y_3511_;
v___y_3490_ = v___x_3516_;
goto v___jp_3479_;
}
else
{
v___y_3480_ = v___y_3509_;
v___y_3481_ = v___y_3507_;
v___y_3482_ = v___y_3510_;
v___y_3483_ = v___y_3508_;
v___y_3484_ = v___y_3506_;
v___y_3485_ = v_a_3515_;
v___y_3486_ = v___y_3513_;
v___y_3487_ = v___y_3512_;
v___y_3488_ = v___x_3516_;
v___y_3489_ = v___y_3511_;
v___y_3490_ = v_nondep_3467_;
goto v___jp_3479_;
}
}
else
{
lean_object* v_a_3518_; uint8_t v___x_3519_; 
v_a_3518_ = lean_ctor_get(v___x_3514_, 0);
lean_inc(v_a_3518_);
lean_dec_ref_known(v___x_3514_, 1);
v___x_3519_ = 0;
v___y_3480_ = v___y_3509_;
v___y_3481_ = v___y_3507_;
v___y_3482_ = v___y_3510_;
v___y_3483_ = v___y_3508_;
v___y_3484_ = v___y_3506_;
v___y_3485_ = v_a_3518_;
v___y_3486_ = v___y_3513_;
v___y_3487_ = v___y_3512_;
v___y_3488_ = v___x_3519_;
v___y_3489_ = v___y_3511_;
v___y_3490_ = v___x_3519_;
goto v___jp_3479_;
}
}
else
{
lean_del_object(v___x_3475_);
lean_dec(v_a_3473_);
lean_dec(v_a_3471_);
lean_dec(v_a_3469_);
lean_dec_ref(v_body_3466_);
lean_dec_ref(v_value_3465_);
lean_dec_ref(v_type_3464_);
lean_dec_ref_known(v_e_3326_, 4);
lean_dec(v_declName_3463_);
return v___x_3514_;
}
}
}
}
else
{
lean_dec(v_a_3471_);
lean_dec(v_a_3469_);
lean_dec_ref(v_body_3466_);
lean_dec_ref(v_value_3465_);
lean_dec_ref(v_type_3464_);
lean_dec_ref_known(v_e_3326_, 4);
lean_dec(v_declName_3463_);
return v___x_3472_;
}
}
else
{
lean_dec(v_a_3469_);
lean_dec_ref(v_body_3466_);
lean_dec_ref(v_value_3465_);
lean_dec_ref(v_type_3464_);
lean_dec_ref_known(v_e_3326_, 4);
lean_dec(v_declName_3463_);
return v___x_3470_;
}
}
else
{
lean_dec_ref(v_body_3466_);
lean_dec_ref(v_value_3465_);
lean_dec_ref(v_type_3464_);
lean_dec_ref_known(v_e_3326_, 4);
lean_dec(v_declName_3463_);
return v___x_3468_;
}
}
default: 
{
lean_object* v___x_3558_; lean_object* v___x_3559_; 
lean_dec_ref(v_e_3326_);
v___x_3558_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___closed__1);
v___x_3559_ = l_panic___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_inferTypeO_spec__0(v___x_3558_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
return v___x_3559_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg(lean_object* v_e_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v___x_3569_; lean_object* v_visitedClosed_3570_; lean_object* v___x_3571_; 
v___x_3569_ = lean_st_ref_get(v___y_3561_);
v_visitedClosed_3570_ = lean_ctor_get(v___x_3569_, 3);
lean_inc_ref(v_visitedClosed_3570_);
lean_dec(v___x_3569_);
v___x_3571_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg(v_visitedClosed_3570_, v_e_3560_);
lean_dec_ref(v_visitedClosed_3570_);
if (lean_obj_tag(v___x_3571_) == 1)
{
lean_object* v_val_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3579_; 
lean_dec_ref(v_e_3560_);
v_val_3572_ = lean_ctor_get(v___x_3571_, 0);
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_3571_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3574_ = v___x_3571_;
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_val_3572_);
lean_dec(v___x_3571_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3577_; 
if (v_isShared_3575_ == 0)
{
lean_ctor_set_tag(v___x_3574_, 0);
v___x_3577_ = v___x_3574_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v_val_3572_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
else
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v_visited_3582_; lean_object* v_types_3583_; lean_object* v_subst_3584_; lean_object* v_visitedClosed_3585_; lean_object* v_hasDepLetCache_3586_; lean_object* v_numConverted_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3657_; 
lean_dec(v___x_3571_);
v___x_3580_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__2, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__2);
v___x_3581_ = lean_st_ref_take(v___y_3561_);
v_visited_3582_ = lean_ctor_get(v___x_3581_, 0);
v_types_3583_ = lean_ctor_get(v___x_3581_, 1);
v_subst_3584_ = lean_ctor_get(v___x_3581_, 2);
v_visitedClosed_3585_ = lean_ctor_get(v___x_3581_, 3);
v_hasDepLetCache_3586_ = lean_ctor_get(v___x_3581_, 4);
v_numConverted_3587_ = lean_ctor_get(v___x_3581_, 5);
v_isSharedCheck_3657_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3589_ = v___x_3581_;
v_isShared_3590_ = v_isSharedCheck_3657_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_numConverted_3587_);
lean_inc(v_hasDepLetCache_3586_);
lean_inc(v_visitedClosed_3585_);
lean_inc(v_subst_3584_);
lean_inc(v_types_3583_);
lean_inc(v_visited_3582_);
lean_dec(v___x_3581_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3657_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3591_; lean_object* v___x_3593_; 
v___x_3591_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1);
if (v_isShared_3590_ == 0)
{
lean_ctor_set(v___x_3589_, 2, v___x_3591_);
lean_ctor_set(v___x_3589_, 1, v___x_3591_);
lean_ctor_set(v___x_3589_, 0, v___x_3591_);
v___x_3593_ = v___x_3589_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v___x_3591_);
lean_ctor_set(v_reuseFailAlloc_3656_, 1, v___x_3591_);
lean_ctor_set(v_reuseFailAlloc_3656_, 2, v___x_3591_);
lean_ctor_set(v_reuseFailAlloc_3656_, 3, v_visitedClosed_3585_);
lean_ctor_set(v_reuseFailAlloc_3656_, 4, v_hasDepLetCache_3586_);
lean_ctor_set(v_reuseFailAlloc_3656_, 5, v_numConverted_3587_);
v___x_3593_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3594_ = lean_st_ref_put(v___y_3561_, v___x_3593_);
lean_inc_ref(v_e_3560_);
v___x_3595_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore(v_e_3560_, v___x_3580_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_);
if (lean_obj_tag(v___x_3595_) == 0)
{
lean_object* v_a_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3636_; 
v_a_3596_ = lean_ctor_get(v___x_3595_, 0);
v_isSharedCheck_3636_ = !lean_is_exclusive(v___x_3595_);
if (v_isSharedCheck_3636_ == 0)
{
v___x_3598_ = v___x_3595_;
v_isShared_3599_ = v_isSharedCheck_3636_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_a_3596_);
lean_dec(v___x_3595_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3636_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3601_; 
lean_inc(v_a_3596_);
if (v_isShared_3599_ == 0)
{
lean_ctor_set_tag(v___x_3598_, 1);
v___x_3601_ = v___x_3598_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_a_3596_);
v___x_3601_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
lean_object* v___x_3602_; 
v___x_3602_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___lam__0(v___y_3561_, v_visited_3582_, v_types_3583_, v_subst_3584_, v___x_3601_);
lean_dec_ref(v___x_3601_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3625_; 
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3625_ == 0)
{
lean_object* v_unused_3626_; 
v_unused_3626_ = lean_ctor_get(v___x_3602_, 0);
lean_dec(v_unused_3626_);
v___x_3604_ = v___x_3602_;
v_isShared_3605_ = v_isSharedCheck_3625_;
goto v_resetjp_3603_;
}
else
{
lean_dec(v___x_3602_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3625_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v___x_3606_; lean_object* v_visited_3607_; lean_object* v_types_3608_; lean_object* v_subst_3609_; lean_object* v_visitedClosed_3610_; lean_object* v_hasDepLetCache_3611_; lean_object* v_numConverted_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3624_; 
v___x_3606_ = lean_st_ref_take(v___y_3561_);
v_visited_3607_ = lean_ctor_get(v___x_3606_, 0);
v_types_3608_ = lean_ctor_get(v___x_3606_, 1);
v_subst_3609_ = lean_ctor_get(v___x_3606_, 2);
v_visitedClosed_3610_ = lean_ctor_get(v___x_3606_, 3);
v_hasDepLetCache_3611_ = lean_ctor_get(v___x_3606_, 4);
v_numConverted_3612_ = lean_ctor_get(v___x_3606_, 5);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3614_ = v___x_3606_;
v_isShared_3615_ = v_isSharedCheck_3624_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_numConverted_3612_);
lean_inc(v_hasDepLetCache_3611_);
lean_inc(v_visitedClosed_3610_);
lean_inc(v_subst_3609_);
lean_inc(v_types_3608_);
lean_inc(v_visited_3607_);
lean_dec(v___x_3606_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3624_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3616_; lean_object* v___x_3618_; 
lean_inc(v_a_3596_);
v___x_3616_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1___redArg(v_visitedClosed_3610_, v_e_3560_, v_a_3596_);
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 3, v___x_3616_);
v___x_3618_ = v___x_3614_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_visited_3607_);
lean_ctor_set(v_reuseFailAlloc_3623_, 1, v_types_3608_);
lean_ctor_set(v_reuseFailAlloc_3623_, 2, v_subst_3609_);
lean_ctor_set(v_reuseFailAlloc_3623_, 3, v___x_3616_);
lean_ctor_set(v_reuseFailAlloc_3623_, 4, v_hasDepLetCache_3611_);
lean_ctor_set(v_reuseFailAlloc_3623_, 5, v_numConverted_3612_);
v___x_3618_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
lean_object* v___x_3619_; lean_object* v___x_3621_; 
v___x_3619_ = lean_st_ref_put(v___y_3561_, v___x_3618_);
if (v_isShared_3605_ == 0)
{
lean_ctor_set(v___x_3604_, 0, v_a_3596_);
v___x_3621_ = v___x_3604_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_a_3596_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_dec(v_a_3596_);
lean_dec_ref(v_e_3560_);
v_a_3627_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3602_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3602_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
}
}
else
{
lean_object* v_a_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; 
lean_dec_ref(v_e_3560_);
v_a_3637_ = lean_ctor_get(v___x_3595_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3595_, 1);
v___x_3638_ = lean_box(0);
v___x_3639_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___lam__0(v___y_3561_, v_visited_3582_, v_types_3583_, v_subst_3584_, v___x_3638_);
if (lean_obj_tag(v___x_3639_) == 0)
{
lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3646_; 
v_isSharedCheck_3646_ = !lean_is_exclusive(v___x_3639_);
if (v_isSharedCheck_3646_ == 0)
{
lean_object* v_unused_3647_; 
v_unused_3647_ = lean_ctor_get(v___x_3639_, 0);
lean_dec(v_unused_3647_);
v___x_3641_ = v___x_3639_;
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
else
{
lean_dec(v___x_3639_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3644_; 
if (v_isShared_3642_ == 0)
{
lean_ctor_set_tag(v___x_3641_, 1);
lean_ctor_set(v___x_3641_, 0, v_a_3637_);
v___x_3644_ = v___x_3641_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_a_3637_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
return v___x_3644_;
}
}
}
else
{
lean_object* v_a_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3655_; 
lean_dec(v_a_3637_);
v_a_3648_ = lean_ctor_get(v___x_3639_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v___x_3639_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3650_ = v___x_3639_;
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_a_3648_);
lean_dec(v___x_3639_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3653_; 
if (v_isShared_3651_ == 0)
{
v___x_3653_ = v___x_3650_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_a_3648_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(lean_object* v_e_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_){
_start:
{
lean_object* v___y_3669_; lean_object* v___y_3670_; lean_object* v___y_3671_; lean_object* v___y_3672_; lean_object* v___y_3673_; lean_object* v___y_3674_; lean_object* v___y_3675_; lean_object* v___y_3676_; 
switch(lean_obj_tag(v_e_3658_))
{
case 0:
{
lean_object* v___x_3734_; 
v___x_3734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3734_, 0, v_e_3658_);
return v___x_3734_;
}
case 1:
{
lean_object* v___x_3735_; 
v___x_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3735_, 0, v_e_3658_);
return v___x_3735_;
}
case 2:
{
lean_object* v___x_3736_; 
v___x_3736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3736_, 0, v_e_3658_);
return v___x_3736_;
}
case 3:
{
lean_object* v___x_3737_; 
v___x_3737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3737_, 0, v_e_3658_);
return v___x_3737_;
}
case 4:
{
lean_object* v___x_3738_; 
v___x_3738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3738_, 0, v_e_3658_);
return v___x_3738_;
}
case 9:
{
lean_object* v___x_3739_; 
v___x_3739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3739_, 0, v_e_3658_);
return v___x_3739_;
}
default: 
{
lean_object* v_numCandidates_3740_; lean_object* v_cleanSuffix_3741_; lean_object* v___x_3742_; uint8_t v___x_3743_; 
v_numCandidates_3740_ = lean_ctor_get(v___y_3659_, 1);
v_cleanSuffix_3741_ = lean_ctor_get(v___y_3659_, 2);
v___x_3742_ = lean_unsigned_to_nat(0u);
v___x_3743_ = lean_nat_dec_eq(v_numCandidates_3740_, v___x_3742_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; uint8_t v___x_3745_; 
v___x_3744_ = l_Lean_Expr_looseBVarRange(v_e_3658_);
v___x_3745_ = lean_nat_dec_le(v___x_3744_, v_cleanSuffix_3741_);
lean_dec(v___x_3744_);
if (v___x_3745_ == 0)
{
v___y_3669_ = v___y_3659_;
v___y_3670_ = v___y_3660_;
v___y_3671_ = v___y_3661_;
v___y_3672_ = v___y_3662_;
v___y_3673_ = v___y_3663_;
v___y_3674_ = v___y_3664_;
v___y_3675_ = v___y_3665_;
v___y_3676_ = v___y_3666_;
goto v___jp_3668_;
}
else
{
goto v___jp_3715_;
}
}
else
{
goto v___jp_3715_;
}
}
}
v___jp_3668_:
{
uint8_t v___x_3677_; 
v___x_3677_ = l_Lean_Expr_hasLooseBVars(v_e_3658_);
if (v___x_3677_ == 0)
{
lean_object* v___x_3678_; 
v___x_3678_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg(v_e_3658_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_, v___y_3676_);
return v___x_3678_;
}
else
{
lean_object* v___x_3679_; lean_object* v_visited_3680_; lean_object* v___x_3681_; 
v___x_3679_ = lean_st_ref_get(v___y_3670_);
v_visited_3680_ = lean_ctor_get(v___x_3679_, 0);
lean_inc_ref(v_visited_3680_);
lean_dec(v___x_3679_);
v___x_3681_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__0___redArg(v_visited_3680_, v_e_3658_);
lean_dec_ref(v_visited_3680_);
if (lean_obj_tag(v___x_3681_) == 1)
{
lean_object* v_val_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_dec_ref(v_e_3658_);
v_val_3682_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3681_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_val_3682_);
lean_dec(v___x_3681_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
lean_ctor_set_tag(v___x_3684_, 0);
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_val_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
else
{
lean_object* v___x_3690_; 
lean_dec(v___x_3681_);
lean_inc_ref(v_e_3658_);
v___x_3690_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore(v_e_3658_, v___y_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_, v___y_3676_);
if (lean_obj_tag(v___x_3690_) == 0)
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3714_; 
v_a_3691_ = lean_ctor_get(v___x_3690_, 0);
v_isSharedCheck_3714_ = !lean_is_exclusive(v___x_3690_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3693_ = v___x_3690_;
v_isShared_3694_ = v_isSharedCheck_3714_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3690_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3714_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3695_; lean_object* v_visited_3696_; lean_object* v_types_3697_; lean_object* v_subst_3698_; lean_object* v_visitedClosed_3699_; lean_object* v_hasDepLetCache_3700_; lean_object* v_numConverted_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3713_; 
v___x_3695_ = lean_st_ref_take(v___y_3670_);
v_visited_3696_ = lean_ctor_get(v___x_3695_, 0);
v_types_3697_ = lean_ctor_get(v___x_3695_, 1);
v_subst_3698_ = lean_ctor_get(v___x_3695_, 2);
v_visitedClosed_3699_ = lean_ctor_get(v___x_3695_, 3);
v_hasDepLetCache_3700_ = lean_ctor_get(v___x_3695_, 4);
v_numConverted_3701_ = lean_ctor_get(v___x_3695_, 5);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3713_ == 0)
{
v___x_3703_ = v___x_3695_;
v_isShared_3704_ = v_isSharedCheck_3713_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_numConverted_3701_);
lean_inc(v_hasDepLetCache_3700_);
lean_inc(v_visitedClosed_3699_);
lean_inc(v_subst_3698_);
lean_inc(v_types_3697_);
lean_inc(v_visited_3696_);
lean_dec(v___x_3695_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3713_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3705_; lean_object* v___x_3707_; 
lean_inc(v_a_3691_);
v___x_3705_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet_cached_spec__1___redArg(v_visited_3696_, v_e_3658_, v_a_3691_);
if (v_isShared_3704_ == 0)
{
lean_ctor_set(v___x_3703_, 0, v___x_3705_);
v___x_3707_ = v___x_3703_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3705_);
lean_ctor_set(v_reuseFailAlloc_3712_, 1, v_types_3697_);
lean_ctor_set(v_reuseFailAlloc_3712_, 2, v_subst_3698_);
lean_ctor_set(v_reuseFailAlloc_3712_, 3, v_visitedClosed_3699_);
lean_ctor_set(v_reuseFailAlloc_3712_, 4, v_hasDepLetCache_3700_);
lean_ctor_set(v_reuseFailAlloc_3712_, 5, v_numConverted_3701_);
v___x_3707_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
lean_object* v___x_3708_; lean_object* v___x_3710_; 
v___x_3708_ = lean_st_ref_put(v___y_3670_, v___x_3707_);
if (v_isShared_3694_ == 0)
{
v___x_3710_ = v___x_3693_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3691_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_3658_);
return v___x_3690_;
}
}
}
}
v___jp_3715_:
{
lean_object* v___x_3716_; 
lean_inc_ref(v_e_3658_);
v___x_3716_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_e_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
if (lean_obj_tag(v___x_3716_) == 0)
{
lean_object* v_a_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3725_; 
v_a_3717_ = lean_ctor_get(v___x_3716_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3719_ = v___x_3716_;
v_isShared_3720_ = v_isSharedCheck_3725_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_a_3717_);
lean_dec(v___x_3716_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3725_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
uint8_t v___x_3721_; 
v___x_3721_ = lean_unbox(v_a_3717_);
lean_dec(v_a_3717_);
if (v___x_3721_ == 0)
{
lean_object* v___x_3723_; 
if (v_isShared_3720_ == 0)
{
lean_ctor_set(v___x_3719_, 0, v_e_3658_);
v___x_3723_ = v___x_3719_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_e_3658_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
else
{
lean_del_object(v___x_3719_);
v___y_3669_ = v___y_3659_;
v___y_3670_ = v___y_3660_;
v___y_3671_ = v___y_3661_;
v___y_3672_ = v___y_3662_;
v___y_3673_ = v___y_3663_;
v___y_3674_ = v___y_3664_;
v___y_3675_ = v___y_3665_;
v___y_3676_ = v___y_3666_;
goto v___jp_3668_;
}
}
}
else
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
lean_dec_ref(v_e_3658_);
v_a_3726_ = lean_ctor_get(v___x_3716_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3728_ = v___x_3716_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3716_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___lam__0(lean_object* v_body_3746_, lean_object* v_binderType_3747_, lean_object* v_a_3748_, lean_object* v_binderName_3749_, uint8_t v_binderInfo_3750_, lean_object* v_e_3751_, lean_object* v_x_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_){
_start:
{
lean_object* v___x_3762_; 
lean_inc_ref(v_body_3746_);
v___x_3762_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_body_3746_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_);
if (lean_obj_tag(v___x_3762_) == 0)
{
lean_object* v_a_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3778_; 
v_a_3763_ = lean_ctor_get(v___x_3762_, 0);
v_isSharedCheck_3778_ = !lean_is_exclusive(v___x_3762_);
if (v_isSharedCheck_3778_ == 0)
{
v___x_3765_ = v___x_3762_;
v_isShared_3766_ = v_isSharedCheck_3778_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_a_3763_);
lean_dec(v___x_3762_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3778_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
size_t v___x_3767_; size_t v___x_3768_; uint8_t v___x_3769_; 
v___x_3767_ = lean_ptr_addr(v_binderType_3747_);
v___x_3768_ = lean_ptr_addr(v_a_3748_);
v___x_3769_ = lean_usize_dec_eq(v___x_3767_, v___x_3768_);
if (v___x_3769_ == 0)
{
lean_object* v___x_3770_; 
lean_del_object(v___x_3765_);
lean_dec_ref(v_e_3751_);
lean_dec_ref(v_body_3746_);
v___x_3770_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___redArg(v_binderName_3749_, v_binderInfo_3750_, v_a_3748_, v_a_3763_, v___y_3755_, v___y_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_);
return v___x_3770_;
}
else
{
size_t v___x_3771_; size_t v___x_3772_; uint8_t v___x_3773_; 
v___x_3771_ = lean_ptr_addr(v_body_3746_);
lean_dec_ref(v_body_3746_);
v___x_3772_ = lean_ptr_addr(v_a_3763_);
v___x_3773_ = lean_usize_dec_eq(v___x_3771_, v___x_3772_);
if (v___x_3773_ == 0)
{
lean_object* v___x_3774_; 
lean_del_object(v___x_3765_);
lean_dec_ref(v_e_3751_);
v___x_3774_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___redArg(v_binderName_3749_, v_binderInfo_3750_, v_a_3748_, v_a_3763_, v___y_3755_, v___y_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_);
return v___x_3774_;
}
else
{
lean_object* v___x_3776_; 
lean_dec(v_a_3763_);
lean_dec(v_binderName_3749_);
lean_dec_ref(v_a_3748_);
if (v_isShared_3766_ == 0)
{
lean_ctor_set(v___x_3765_, 0, v_e_3751_);
v___x_3776_ = v___x_3765_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3777_; 
v_reuseFailAlloc_3777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3777_, 0, v_e_3751_);
v___x_3776_ = v_reuseFailAlloc_3777_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
return v___x_3776_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_3751_);
lean_dec(v_binderName_3749_);
lean_dec_ref(v_a_3748_);
lean_dec_ref(v_body_3746_);
return v___x_3762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall___boxed(lean_object* v_e_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall(v_e_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec(v___y_3781_);
lean_dec_ref(v___y_3780_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___boxed(lean_object* v_e_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_){
_start:
{
lean_object* v_res_3799_; 
v_res_3799_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg(v_e_3790_, v___y_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_, v___y_3797_);
lean_dec(v___y_3797_);
lean_dec_ref(v___y_3796_);
lean_dec(v___y_3795_);
lean_dec_ref(v___y_3794_);
lean_dec(v___y_3793_);
lean_dec_ref(v___y_3792_);
lean_dec(v___y_3791_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit___boxed(lean_object* v_e_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_){
_start:
{
lean_object* v_res_3810_; 
v_res_3810_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_e_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_, v___y_3807_, v___y_3808_);
lean_dec(v___y_3808_);
lean_dec_ref(v___y_3807_);
lean_dec(v___y_3806_);
lean_dec_ref(v___y_3805_);
lean_dec(v___y_3804_);
lean_dec_ref(v___y_3803_);
lean_dec(v___y_3802_);
lean_dec_ref(v___y_3801_);
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore___boxed(lean_object* v_e_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_){
_start:
{
lean_object* v_res_3821_; 
v_res_3821_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore(v_e_3811_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_);
lean_dec(v___y_3819_);
lean_dec_ref(v___y_3818_);
lean_dec(v___y_3817_);
lean_dec_ref(v___y_3816_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
return v_res_3821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1(lean_object* v_f_3822_, lean_object* v_a_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_){
_start:
{
lean_object* v___x_3833_; 
v___x_3833_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___redArg(v_f_3822_, v_a_3823_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_);
return v___x_3833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1___boxed(lean_object* v_f_3834_, lean_object* v_a_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_){
_start:
{
lean_object* v_res_3845_; 
v_res_3845_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__1(v_f_3834_, v_a_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_);
lean_dec(v___y_3843_);
lean_dec_ref(v___y_3842_);
lean_dec(v___y_3841_);
lean_dec_ref(v___y_3840_);
lean_dec(v___y_3839_);
lean_dec_ref(v___y_3838_);
lean_dec(v___y_3837_);
lean_dec_ref(v___y_3836_);
return v_res_3845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2(lean_object* v_d_3846_, lean_object* v_e_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_){
_start:
{
lean_object* v___x_3857_; 
v___x_3857_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2___redArg(v_d_3846_, v_e_3847_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
return v___x_3857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2___boxed(lean_object* v_d_3858_, lean_object* v_e_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_){
_start:
{
lean_object* v_res_3869_; 
v_res_3869_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__2(v_d_3858_, v_e_3859_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_, v___y_3866_, v___y_3867_);
lean_dec(v___y_3867_);
lean_dec_ref(v___y_3866_);
lean_dec(v___y_3865_);
lean_dec_ref(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
return v_res_3869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3(lean_object* v_structName_3870_, lean_object* v_idx_3871_, lean_object* v_struct_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_){
_start:
{
lean_object* v___x_3882_; 
v___x_3882_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3___redArg(v_structName_3870_, v_idx_3871_, v_struct_3872_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_);
return v___x_3882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3___boxed(lean_object* v_structName_3883_, lean_object* v_idx_3884_, lean_object* v_struct_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_){
_start:
{
lean_object* v_res_3895_; 
v_res_3895_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__3(v_structName_3883_, v_idx_3884_, v_struct_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
return v_res_3895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4(lean_object* v_x_3896_, uint8_t v_bi_3897_, lean_object* v_t_3898_, lean_object* v_b_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_){
_start:
{
lean_object* v___x_3909_; 
v___x_3909_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___redArg(v_x_3896_, v_bi_3897_, v_t_3898_, v_b_3899_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_, v___y_3906_, v___y_3907_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4___boxed(lean_object* v_x_3910_, lean_object* v_bi_3911_, lean_object* v_t_3912_, lean_object* v_b_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_){
_start:
{
uint8_t v_bi_boxed_3923_; lean_object* v_res_3924_; 
v_bi_boxed_3923_ = lean_unbox(v_bi_3911_);
v_res_3924_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__4(v_x_3910_, v_bi_boxed_3923_, v_t_3912_, v_b_3913_, v___y_3914_, v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_);
lean_dec(v___y_3921_);
lean_dec_ref(v___y_3920_);
lean_dec(v___y_3919_);
lean_dec_ref(v___y_3918_);
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
lean_dec(v___y_3915_);
lean_dec_ref(v___y_3914_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5(lean_object* v_x_3925_, lean_object* v_t_3926_, lean_object* v_v_3927_, lean_object* v_b_3928_, uint8_t v_nondep_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_){
_start:
{
lean_object* v___x_3939_; 
v___x_3939_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___redArg(v_x_3925_, v_t_3926_, v_v_3927_, v_b_3928_, v_nondep_3929_, v___y_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_);
return v___x_3939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5___boxed(lean_object* v_x_3940_, lean_object* v_t_3941_, lean_object* v_v_3942_, lean_object* v_b_3943_, lean_object* v_nondep_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_){
_start:
{
uint8_t v_nondep_boxed_3954_; lean_object* v_res_3955_; 
v_nondep_boxed_3954_ = lean_unbox(v_nondep_3944_);
v_res_3955_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitCore_spec__5(v_x_3940_, v_t_3941_, v_v_3942_, v_b_3943_, v_nondep_boxed_3954_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
lean_dec(v___y_3950_);
lean_dec_ref(v___y_3949_);
lean_dec(v___y_3948_);
lean_dec_ref(v___y_3947_);
lean_dec(v___y_3946_);
lean_dec_ref(v___y_3945_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7(lean_object* v_x_3956_, uint8_t v_bi_3957_, lean_object* v_t_3958_, lean_object* v_b_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_){
_start:
{
lean_object* v___x_3969_; 
v___x_3969_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___redArg(v_x_3956_, v_bi_3957_, v_t_3958_, v_b_3959_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7___boxed(lean_object* v_x_3970_, lean_object* v_bi_3971_, lean_object* v_t_3972_, lean_object* v_b_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_){
_start:
{
uint8_t v_bi_boxed_3983_; lean_object* v_res_3984_; 
v_bi_boxed_3983_ = lean_unbox(v_bi_3971_);
v_res_3984_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitForall_spec__7(v_x_3970_, v_bi_boxed_3983_, v_t_3972_, v_b_3973_, v___y_3974_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_, v___y_3981_);
lean_dec(v___y_3981_);
lean_dec_ref(v___y_3980_);
lean_dec(v___y_3979_);
lean_dec_ref(v___y_3978_);
lean_dec(v___y_3977_);
lean_dec_ref(v___y_3976_);
lean_dec(v___y_3975_);
lean_dec_ref(v___y_3974_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed(lean_object* v_e_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_){
_start:
{
lean_object* v___x_3995_; 
v___x_3995_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg(v_e_3985_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_);
return v___x_3995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___boxed(lean_object* v_e_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_){
_start:
{
lean_object* v_res_4006_; 
v_res_4006_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed(v_e_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_);
lean_dec(v___y_4004_);
lean_dec_ref(v___y_4003_);
lean_dec(v___y_4002_);
lean_dec_ref(v___y_4001_);
lean_dec(v___y_4000_);
lean_dec_ref(v___y_3999_);
lean_dec(v___y_3998_);
lean_dec_ref(v___y_3997_);
return v_res_4006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg___lam__0(lean_object* v_x_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_){
_start:
{
lean_object* v___x_4015_; 
lean_inc(v___y_4009_);
lean_inc_ref(v___y_4008_);
v___x_4015_ = lean_apply_7(v_x_4007_, v___y_4008_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_, lean_box(0));
return v___x_4015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg___lam__0___boxed(lean_object* v_x_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_){
_start:
{
lean_object* v_res_4024_; 
v_res_4024_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg___lam__0(v_x_4016_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_, v___y_4021_, v___y_4022_);
lean_dec(v___y_4018_);
lean_dec_ref(v___y_4017_);
return v_res_4024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg(lean_object* v_lctx_4025_, lean_object* v_localInsts_4026_, lean_object* v_x_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_){
_start:
{
lean_object* v___f_4035_; lean_object* v___x_4036_; 
lean_inc(v___y_4029_);
lean_inc_ref(v___y_4028_);
v___f_4035_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4035_, 0, v_x_4027_);
lean_closure_set(v___f_4035_, 1, v___y_4028_);
lean_closure_set(v___f_4035_, 2, v___y_4029_);
v___x_4036_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_4025_, v_localInsts_4026_, v___f_4035_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
if (lean_obj_tag(v___x_4036_) == 0)
{
return v___x_4036_;
}
else
{
lean_object* v_a_4037_; lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4044_; 
v_a_4037_ = lean_ctor_get(v___x_4036_, 0);
v_isSharedCheck_4044_ = !lean_is_exclusive(v___x_4036_);
if (v_isSharedCheck_4044_ == 0)
{
v___x_4039_ = v___x_4036_;
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
else
{
lean_inc(v_a_4037_);
lean_dec(v___x_4036_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v___x_4042_; 
if (v_isShared_4040_ == 0)
{
v___x_4042_ = v___x_4039_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v_a_4037_);
v___x_4042_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
return v___x_4042_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg___boxed(lean_object* v_lctx_4045_, lean_object* v_localInsts_4046_, lean_object* v_x_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_){
_start:
{
lean_object* v_res_4055_; 
v_res_4055_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg(v_lctx_4045_, v_localInsts_4046_, v_x_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_);
lean_dec(v___y_4053_);
lean_dec_ref(v___y_4052_);
lean_dec(v___y_4051_);
lean_dec_ref(v___y_4050_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
return v_res_4055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0(lean_object* v_00_u03b1_4056_, lean_object* v_lctx_4057_, lean_object* v_localInsts_4058_, lean_object* v_x_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_){
_start:
{
lean_object* v___x_4067_; 
v___x_4067_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg(v_lctx_4057_, v_localInsts_4058_, v_x_4059_, v___y_4060_, v___y_4061_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_);
return v___x_4067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___boxed(lean_object* v_00_u03b1_4068_, lean_object* v_lctx_4069_, lean_object* v_localInsts_4070_, lean_object* v_x_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_){
_start:
{
lean_object* v_res_4079_; 
v_res_4079_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0(v_00_u03b1_4068_, v_lctx_4069_, v_localInsts_4070_, v_x_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
lean_dec(v___y_4077_);
lean_dec_ref(v___y_4076_);
lean_dec(v___y_4075_);
lean_dec_ref(v___y_4074_);
lean_dec(v___y_4073_);
lean_dec_ref(v___y_4072_);
return v_res_4079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg___lam__0(lean_object* v_k_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_){
_start:
{
lean_object* v___x_4088_; 
lean_inc(v___y_4082_);
lean_inc_ref(v___y_4081_);
v___x_4088_ = lean_apply_7(v_k_4080_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, lean_box(0));
return v___x_4088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg___lam__0___boxed(lean_object* v_k_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v_res_4097_; 
v_res_4097_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg___lam__0(v_k_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_, v___y_4095_);
lean_dec(v___y_4091_);
lean_dec_ref(v___y_4090_);
return v_res_4097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg(lean_object* v_k_4098_, uint8_t v_allowLevelAssignments_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_){
_start:
{
lean_object* v___f_4107_; lean_object* v___x_4108_; 
lean_inc(v___y_4101_);
lean_inc_ref(v___y_4100_);
v___f_4107_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4107_, 0, v_k_4098_);
lean_closure_set(v___f_4107_, 1, v___y_4100_);
lean_closure_set(v___f_4107_, 2, v___y_4101_);
v___x_4108_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_4099_, v___f_4107_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_);
if (lean_obj_tag(v___x_4108_) == 0)
{
return v___x_4108_;
}
else
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4116_; 
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4111_ = v___x_4108_;
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v___x_4108_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4112_ == 0)
{
v___x_4114_ = v___x_4111_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg___boxed(lean_object* v_k_4117_, lean_object* v_allowLevelAssignments_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_4126_; lean_object* v_res_4127_; 
v_allowLevelAssignments_boxed_4126_ = lean_unbox(v_allowLevelAssignments_4118_);
v_res_4127_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg(v_k_4117_, v_allowLevelAssignments_boxed_4126_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
lean_dec(v___y_4124_);
lean_dec_ref(v___y_4123_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
return v_res_4127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1(lean_object* v_00_u03b1_4128_, lean_object* v_k_4129_, uint8_t v_allowLevelAssignments_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_){
_start:
{
lean_object* v___x_4138_; 
v___x_4138_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___redArg(v_k_4129_, v_allowLevelAssignments_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
return v___x_4138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___boxed(lean_object* v_00_u03b1_4139_, lean_object* v_k_4140_, lean_object* v_allowLevelAssignments_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_4149_; lean_object* v_res_4150_; 
v_allowLevelAssignments_boxed_4149_ = lean_unbox(v_allowLevelAssignments_4141_);
v_res_4150_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1(v_00_u03b1_4139_, v_k_4140_, v_allowLevelAssignments_boxed_4149_, v___y_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_);
lean_dec(v___y_4147_);
lean_dec_ref(v___y_4146_);
lean_dec(v___y_4145_);
lean_dec_ref(v___y_4144_);
lean_dec(v___y_4143_);
lean_dec_ref(v___y_4142_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__0(lean_object* v_cfg_4151_){
_start:
{
uint8_t v_foApprox_4152_; uint8_t v_ctxApprox_4153_; uint8_t v_quasiPatternApprox_4154_; uint8_t v_constApprox_4155_; uint8_t v_isDefEqStuckEx_4156_; uint8_t v_unificationHints_4157_; uint8_t v_proofIrrelevance_4158_; uint8_t v_assignSyntheticOpaque_4159_; uint8_t v_offsetCnstrs_4160_; uint8_t v_transparency_4161_; uint8_t v_univApprox_4162_; uint8_t v_zetaUnused_4163_; uint8_t v_canUnfoldPredicateConfig_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4174_; 
v_foApprox_4152_ = lean_ctor_get_uint8(v_cfg_4151_, 0);
v_ctxApprox_4153_ = lean_ctor_get_uint8(v_cfg_4151_, 1);
v_quasiPatternApprox_4154_ = lean_ctor_get_uint8(v_cfg_4151_, 2);
v_constApprox_4155_ = lean_ctor_get_uint8(v_cfg_4151_, 3);
v_isDefEqStuckEx_4156_ = lean_ctor_get_uint8(v_cfg_4151_, 4);
v_unificationHints_4157_ = lean_ctor_get_uint8(v_cfg_4151_, 5);
v_proofIrrelevance_4158_ = lean_ctor_get_uint8(v_cfg_4151_, 6);
v_assignSyntheticOpaque_4159_ = lean_ctor_get_uint8(v_cfg_4151_, 7);
v_offsetCnstrs_4160_ = lean_ctor_get_uint8(v_cfg_4151_, 8);
v_transparency_4161_ = lean_ctor_get_uint8(v_cfg_4151_, 9);
v_univApprox_4162_ = lean_ctor_get_uint8(v_cfg_4151_, 11);
v_zetaUnused_4163_ = lean_ctor_get_uint8(v_cfg_4151_, 17);
v_canUnfoldPredicateConfig_4164_ = lean_ctor_get_uint8(v_cfg_4151_, 19);
v_isSharedCheck_4174_ = !lean_is_exclusive(v_cfg_4151_);
if (v_isSharedCheck_4174_ == 0)
{
v___x_4166_ = v_cfg_4151_;
v_isShared_4167_ = v_isSharedCheck_4174_;
goto v_resetjp_4165_;
}
else
{
lean_dec(v_cfg_4151_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4174_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
uint8_t v___x_4168_; uint8_t v___x_4169_; uint8_t v___x_4170_; lean_object* v___x_4172_; 
v___x_4168_ = 0;
v___x_4169_ = 1;
v___x_4170_ = 2;
if (v_isShared_4167_ == 0)
{
v___x_4172_ = v___x_4166_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 0, v_foApprox_4152_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 1, v_ctxApprox_4153_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 2, v_quasiPatternApprox_4154_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 3, v_constApprox_4155_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 4, v_isDefEqStuckEx_4156_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 5, v_unificationHints_4157_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 6, v_proofIrrelevance_4158_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 7, v_assignSyntheticOpaque_4159_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 8, v_offsetCnstrs_4160_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 9, v_transparency_4161_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 11, v_univApprox_4162_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 17, v_zetaUnused_4163_);
lean_ctor_set_uint8(v_reuseFailAlloc_4173_, 19, v_canUnfoldPredicateConfig_4164_);
v___x_4172_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
lean_ctor_set_uint8(v___x_4172_, 10, v___x_4168_);
lean_ctor_set_uint8(v___x_4172_, 12, v___x_4169_);
lean_ctor_set_uint8(v___x_4172_, 13, v___x_4169_);
lean_ctor_set_uint8(v___x_4172_, 14, v___x_4170_);
lean_ctor_set_uint8(v___x_4172_, 15, v___x_4169_);
lean_ctor_set_uint8(v___x_4172_, 16, v___x_4169_);
lean_ctor_set_uint8(v___x_4172_, 18, v___x_4169_);
return v___x_4172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__1(lean_object* v___x_4175_, lean_object* v_e_4176_, lean_object* v___x_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_){
_start:
{
lean_object* v___x_4185_; lean_object* v_a_4187_; lean_object* v___x_4190_; 
v___x_4185_ = lean_st_mk_ref(v___x_4175_);
lean_inc_ref(v_e_4176_);
v___x_4190_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_hasDepLet(v_e_4176_, v___x_4177_, v___x_4185_, v___y_4178_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_);
if (lean_obj_tag(v___x_4190_) == 0)
{
lean_object* v_a_4191_; uint8_t v___x_4192_; 
v_a_4191_ = lean_ctor_get(v___x_4190_, 0);
lean_inc(v_a_4191_);
lean_dec_ref_known(v___x_4190_, 1);
v___x_4192_ = lean_unbox(v_a_4191_);
lean_dec(v_a_4191_);
if (v___x_4192_ == 0)
{
v_a_4187_ = v_e_4176_;
goto v___jp_4186_;
}
else
{
lean_object* v___x_4193_; 
v___x_4193_ = l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visit(v_e_4176_, v___x_4177_, v___x_4185_, v___y_4178_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_);
if (lean_obj_tag(v___x_4193_) == 0)
{
lean_object* v_a_4194_; 
v_a_4194_ = lean_ctor_get(v___x_4193_, 0);
lean_inc(v_a_4194_);
lean_dec_ref_known(v___x_4193_, 1);
v_a_4187_ = v_a_4194_;
goto v___jp_4186_;
}
else
{
lean_dec(v___x_4185_);
return v___x_4193_;
}
}
}
else
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4202_; 
lean_dec(v___x_4185_);
lean_dec_ref(v_e_4176_);
v_a_4195_ = lean_ctor_get(v___x_4190_, 0);
v_isSharedCheck_4202_ = !lean_is_exclusive(v___x_4190_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4197_ = v___x_4190_;
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v___x_4190_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
return v___x_4200_;
}
}
}
v___jp_4186_:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; 
v___x_4188_ = lean_st_ref_get(v___x_4185_);
lean_dec(v___x_4185_);
lean_dec(v___x_4188_);
v___x_4189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4189_, 0, v_a_4187_);
return v___x_4189_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__1___boxed(lean_object* v___x_4203_, lean_object* v_e_4204_, lean_object* v___x_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_){
_start:
{
lean_object* v_res_4213_; 
v_res_4213_ = l_Lean_Meta_Sym_letToHave___lam__1(v___x_4203_, v_e_4204_, v___x_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_);
lean_dec(v___y_4211_);
lean_dec_ref(v___y_4210_);
lean_dec(v___y_4209_);
lean_dec_ref(v___y_4208_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec_ref(v___x_4205_);
return v_res_4213_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_letToHave___lam__2___closed__0(void){
_start:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; 
v___x_4214_ = lean_unsigned_to_nat(0u);
v___x_4215_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withNewScope___redArg___closed__1);
v___x_4216_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4216_, 0, v___x_4215_);
lean_ctor_set(v___x_4216_, 1, v___x_4215_);
lean_ctor_set(v___x_4216_, 2, v___x_4215_);
lean_ctor_set(v___x_4216_, 3, v___x_4215_);
lean_ctor_set(v___x_4216_, 4, v___x_4215_);
lean_ctor_set(v___x_4216_, 5, v___x_4214_);
return v___x_4216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__2(lean_object* v_e_4217_, lean_object* v_____do__lift_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_){
_start:
{
lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___f_4229_; lean_object* v___x_4230_; 
v___x_4226_ = ((lean_object*)(l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_withBinder___redArg___closed__0));
v___x_4227_ = lean_obj_once(&l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__2, &l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_visitClosed___redArg___closed__2);
v___x_4228_ = lean_obj_once(&l_Lean_Meta_Sym_letToHave___lam__2___closed__0, &l_Lean_Meta_Sym_letToHave___lam__2___closed__0_once, _init_l_Lean_Meta_Sym_letToHave___lam__2___closed__0);
v___f_4229_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_letToHave___lam__1___boxed), 10, 3);
lean_closure_set(v___f_4229_, 0, v___x_4228_);
lean_closure_set(v___f_4229_, 1, v_e_4217_);
lean_closure_set(v___f_4229_, 2, v___x_4227_);
v___x_4230_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Sym_letToHave_spec__0___redArg(v_____do__lift_4218_, v___x_4226_, v___f_4229_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_);
return v___x_4230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__2___boxed(lean_object* v_e_4231_, lean_object* v_____do__lift_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l_Lean_Meta_Sym_letToHave___lam__2(v_e_4231_, v_____do__lift_4232_, v___y_4233_, v___y_4234_, v___y_4235_, v___y_4236_, v___y_4237_, v___y_4238_);
lean_dec(v___y_4238_);
lean_dec_ref(v___y_4237_);
lean_dec(v___y_4236_);
lean_dec_ref(v___y_4235_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4233_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__3(lean_object* v___y_4241_, lean_object* v_cache_4242_, lean_object* v_a_x3f_4243_){
_start:
{
lean_object* v___x_4245_; lean_object* v_mctx_4246_; lean_object* v_zetaDeltaFVarIds_4247_; lean_object* v_postponed_4248_; lean_object* v_diag_4249_; lean_object* v___x_4251_; uint8_t v_isShared_4252_; uint8_t v_isSharedCheck_4259_; 
v___x_4245_ = lean_st_ref_take(v___y_4241_);
v_mctx_4246_ = lean_ctor_get(v___x_4245_, 0);
v_zetaDeltaFVarIds_4247_ = lean_ctor_get(v___x_4245_, 2);
v_postponed_4248_ = lean_ctor_get(v___x_4245_, 3);
v_diag_4249_ = lean_ctor_get(v___x_4245_, 4);
v_isSharedCheck_4259_ = !lean_is_exclusive(v___x_4245_);
if (v_isSharedCheck_4259_ == 0)
{
lean_object* v_unused_4260_; 
v_unused_4260_ = lean_ctor_get(v___x_4245_, 1);
lean_dec(v_unused_4260_);
v___x_4251_ = v___x_4245_;
v_isShared_4252_ = v_isSharedCheck_4259_;
goto v_resetjp_4250_;
}
else
{
lean_inc(v_diag_4249_);
lean_inc(v_postponed_4248_);
lean_inc(v_zetaDeltaFVarIds_4247_);
lean_inc(v_mctx_4246_);
lean_dec(v___x_4245_);
v___x_4251_ = lean_box(0);
v_isShared_4252_ = v_isSharedCheck_4259_;
goto v_resetjp_4250_;
}
v_resetjp_4250_:
{
lean_object* v___x_4253_; lean_object* v___x_4255_; 
v___x_4253_ = lean_box(0);
if (v_isShared_4252_ == 0)
{
lean_ctor_set(v___x_4251_, 1, v_cache_4242_);
v___x_4255_ = v___x_4251_;
goto v_reusejp_4254_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v_mctx_4246_);
lean_ctor_set(v_reuseFailAlloc_4258_, 1, v_cache_4242_);
lean_ctor_set(v_reuseFailAlloc_4258_, 2, v_zetaDeltaFVarIds_4247_);
lean_ctor_set(v_reuseFailAlloc_4258_, 3, v_postponed_4248_);
lean_ctor_set(v_reuseFailAlloc_4258_, 4, v_diag_4249_);
v___x_4255_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4254_;
}
v_reusejp_4254_:
{
lean_object* v___x_4256_; lean_object* v___x_4257_; 
v___x_4256_ = lean_st_ref_put(v___y_4241_, v___x_4255_);
v___x_4257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4257_, 0, v___x_4253_);
return v___x_4257_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__3___boxed(lean_object* v___y_4261_, lean_object* v_cache_4262_, lean_object* v_a_x3f_4263_, lean_object* v___y_4264_){
_start:
{
lean_object* v_res_4265_; 
v_res_4265_ = l_Lean_Meta_Sym_letToHave___lam__3(v___y_4261_, v_cache_4262_, v_a_x3f_4263_);
lean_dec(v_a_x3f_4263_);
lean_dec(v___y_4261_);
return v_res_4265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__4(lean_object* v___y_4266_, lean_object* v_zetaDeltaFVarIds_4267_, lean_object* v_a_x3f_4268_){
_start:
{
lean_object* v___x_4270_; lean_object* v_mctx_4271_; lean_object* v_cache_4272_; lean_object* v_postponed_4273_; lean_object* v_diag_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4284_; 
v___x_4270_ = lean_st_ref_take(v___y_4266_);
v_mctx_4271_ = lean_ctor_get(v___x_4270_, 0);
v_cache_4272_ = lean_ctor_get(v___x_4270_, 1);
v_postponed_4273_ = lean_ctor_get(v___x_4270_, 3);
v_diag_4274_ = lean_ctor_get(v___x_4270_, 4);
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4284_ == 0)
{
lean_object* v_unused_4285_; 
v_unused_4285_ = lean_ctor_get(v___x_4270_, 2);
lean_dec(v_unused_4285_);
v___x_4276_ = v___x_4270_;
v_isShared_4277_ = v_isSharedCheck_4284_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_diag_4274_);
lean_inc(v_postponed_4273_);
lean_inc(v_cache_4272_);
lean_inc(v_mctx_4271_);
lean_dec(v___x_4270_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4284_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
lean_object* v___x_4278_; lean_object* v___x_4280_; 
v___x_4278_ = lean_box(0);
if (v_isShared_4277_ == 0)
{
lean_ctor_set(v___x_4276_, 2, v_zetaDeltaFVarIds_4267_);
v___x_4280_ = v___x_4276_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_mctx_4271_);
lean_ctor_set(v_reuseFailAlloc_4283_, 1, v_cache_4272_);
lean_ctor_set(v_reuseFailAlloc_4283_, 2, v_zetaDeltaFVarIds_4267_);
lean_ctor_set(v_reuseFailAlloc_4283_, 3, v_postponed_4273_);
lean_ctor_set(v_reuseFailAlloc_4283_, 4, v_diag_4274_);
v___x_4280_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; 
v___x_4281_ = lean_st_ref_put(v___y_4266_, v___x_4280_);
v___x_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4282_, 0, v___x_4278_);
return v___x_4282_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__4___boxed(lean_object* v___y_4286_, lean_object* v_zetaDeltaFVarIds_4287_, lean_object* v_a_x3f_4288_, lean_object* v___y_4289_){
_start:
{
lean_object* v_res_4290_; 
v_res_4290_ = l_Lean_Meta_Sym_letToHave___lam__4(v___y_4286_, v_zetaDeltaFVarIds_4287_, v_a_x3f_4288_);
lean_dec(v_a_x3f_4288_);
lean_dec(v___y_4286_);
return v_res_4290_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_letToHave___lam__5___closed__0(void){
_start:
{
lean_object* v___x_4291_; 
v___x_4291_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4291_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_letToHave___lam__5___closed__1(void){
_start:
{
lean_object* v___x_4292_; lean_object* v___x_4293_; 
v___x_4292_ = lean_obj_once(&l_Lean_Meta_Sym_letToHave___lam__5___closed__0, &l_Lean_Meta_Sym_letToHave___lam__5___closed__0_once, _init_l_Lean_Meta_Sym_letToHave___lam__5___closed__0);
v___x_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4292_);
return v___x_4293_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_letToHave___lam__5___closed__2(void){
_start:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; 
v___x_4294_ = lean_obj_once(&l_Lean_Meta_Sym_letToHave___lam__5___closed__1, &l_Lean_Meta_Sym_letToHave___lam__5___closed__1_once, _init_l_Lean_Meta_Sym_letToHave___lam__5___closed__1);
v___x_4295_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4295_, 0, v___x_4294_);
lean_ctor_set(v___x_4295_, 1, v___x_4294_);
lean_ctor_set(v___x_4295_, 2, v___x_4294_);
lean_ctor_set(v___x_4295_, 3, v___x_4294_);
lean_ctor_set(v___x_4295_, 4, v___x_4294_);
lean_ctor_set(v___x_4295_, 5, v___x_4294_);
return v___x_4295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__5(uint8_t v___x_4296_, lean_object* v___f_4297_, lean_object* v___f_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_){
_start:
{
lean_object* v___x_4306_; lean_object* v_cache_4307_; lean_object* v_a_4309_; lean_object* v___x_4320_; lean_object* v_mctx_4321_; lean_object* v_zetaDeltaFVarIds_4322_; lean_object* v_postponed_4323_; lean_object* v_diag_4324_; lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4397_; 
v___x_4306_ = lean_st_ref_get(v___y_4302_);
v_cache_4307_ = lean_ctor_get(v___x_4306_, 1);
lean_inc_ref(v_cache_4307_);
lean_dec(v___x_4306_);
v___x_4320_ = lean_st_ref_take(v___y_4302_);
v_mctx_4321_ = lean_ctor_get(v___x_4320_, 0);
v_zetaDeltaFVarIds_4322_ = lean_ctor_get(v___x_4320_, 2);
v_postponed_4323_ = lean_ctor_get(v___x_4320_, 3);
v_diag_4324_ = lean_ctor_get(v___x_4320_, 4);
v_isSharedCheck_4397_ = !lean_is_exclusive(v___x_4320_);
if (v_isSharedCheck_4397_ == 0)
{
lean_object* v_unused_4398_; 
v_unused_4398_ = lean_ctor_get(v___x_4320_, 1);
lean_dec(v_unused_4398_);
v___x_4326_ = v___x_4320_;
v_isShared_4327_ = v_isSharedCheck_4397_;
goto v_resetjp_4325_;
}
else
{
lean_inc(v_diag_4324_);
lean_inc(v_postponed_4323_);
lean_inc(v_zetaDeltaFVarIds_4322_);
lean_inc(v_mctx_4321_);
lean_dec(v___x_4320_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4397_;
goto v_resetjp_4325_;
}
v___jp_4308_:
{
lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4313_; uint8_t v_isShared_4314_; uint8_t v_isSharedCheck_4318_; 
v___x_4310_ = lean_box(0);
v___x_4311_ = l_Lean_Meta_Sym_letToHave___lam__3(v___y_4302_, v_cache_4307_, v___x_4310_);
v_isSharedCheck_4318_ = !lean_is_exclusive(v___x_4311_);
if (v_isSharedCheck_4318_ == 0)
{
lean_object* v_unused_4319_; 
v_unused_4319_ = lean_ctor_get(v___x_4311_, 0);
lean_dec(v_unused_4319_);
v___x_4313_ = v___x_4311_;
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
else
{
lean_dec(v___x_4311_);
v___x_4313_ = lean_box(0);
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
v_resetjp_4312_:
{
lean_object* v___x_4316_; 
if (v_isShared_4314_ == 0)
{
lean_ctor_set_tag(v___x_4313_, 1);
lean_ctor_set(v___x_4313_, 0, v_a_4309_);
v___x_4316_ = v___x_4313_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v_a_4309_);
v___x_4316_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
return v___x_4316_;
}
}
}
v_resetjp_4325_:
{
lean_object* v___x_4328_; lean_object* v___x_4330_; 
v___x_4328_ = lean_obj_once(&l_Lean_Meta_Sym_letToHave___lam__5___closed__2, &l_Lean_Meta_Sym_letToHave___lam__5___closed__2_once, _init_l_Lean_Meta_Sym_letToHave___lam__5___closed__2);
if (v_isShared_4327_ == 0)
{
lean_ctor_set(v___x_4326_, 1, v___x_4328_);
v___x_4330_ = v___x_4326_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4396_; 
v_reuseFailAlloc_4396_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4396_, 0, v_mctx_4321_);
lean_ctor_set(v_reuseFailAlloc_4396_, 1, v___x_4328_);
lean_ctor_set(v_reuseFailAlloc_4396_, 2, v_zetaDeltaFVarIds_4322_);
lean_ctor_set(v_reuseFailAlloc_4396_, 3, v_postponed_4323_);
lean_ctor_set(v_reuseFailAlloc_4396_, 4, v_diag_4324_);
v___x_4330_ = v_reuseFailAlloc_4396_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
lean_object* v___x_4331_; lean_object* v_keyedConfig_4332_; lean_object* v_zetaDeltaSet_4333_; lean_object* v_lctx_4334_; lean_object* v_localInstances_4335_; lean_object* v_defEqCtx_x3f_4336_; lean_object* v_synthPendingDepth_4337_; lean_object* v_customCanUnfoldPredicate_x3f_4338_; uint8_t v_univApprox_4339_; uint8_t v_inTypeClassResolution_4340_; uint8_t v_cacheInferType_4341_; uint8_t v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v_mctx_4345_; lean_object* v_cache_4346_; lean_object* v_zetaDeltaFVarIds_4347_; lean_object* v_postponed_4348_; lean_object* v_diag_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4395_; 
v___x_4331_ = lean_st_ref_put(v___y_4302_, v___x_4330_);
v_keyedConfig_4332_ = lean_ctor_get(v___y_4301_, 0);
v_zetaDeltaSet_4333_ = lean_ctor_get(v___y_4301_, 1);
v_lctx_4334_ = lean_ctor_get(v___y_4301_, 2);
v_localInstances_4335_ = lean_ctor_get(v___y_4301_, 3);
v_defEqCtx_x3f_4336_ = lean_ctor_get(v___y_4301_, 4);
v_synthPendingDepth_4337_ = lean_ctor_get(v___y_4301_, 5);
v_customCanUnfoldPredicate_x3f_4338_ = lean_ctor_get(v___y_4301_, 6);
v_univApprox_4339_ = lean_ctor_get_uint8(v___y_4301_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4340_ = lean_ctor_get_uint8(v___y_4301_, sizeof(void*)*7 + 2);
v_cacheInferType_4341_ = lean_ctor_get_uint8(v___y_4301_, sizeof(void*)*7 + 3);
v___x_4342_ = 1;
lean_inc(v_customCanUnfoldPredicate_x3f_4338_);
lean_inc(v_synthPendingDepth_4337_);
lean_inc(v_defEqCtx_x3f_4336_);
lean_inc_ref(v_localInstances_4335_);
lean_inc_ref(v_lctx_4334_);
lean_inc(v_zetaDeltaSet_4333_);
lean_inc_ref(v_keyedConfig_4332_);
v___x_4343_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4343_, 0, v_keyedConfig_4332_);
lean_ctor_set(v___x_4343_, 1, v_zetaDeltaSet_4333_);
lean_ctor_set(v___x_4343_, 2, v_lctx_4334_);
lean_ctor_set(v___x_4343_, 3, v_localInstances_4335_);
lean_ctor_set(v___x_4343_, 4, v_defEqCtx_x3f_4336_);
lean_ctor_set(v___x_4343_, 5, v_synthPendingDepth_4337_);
lean_ctor_set(v___x_4343_, 6, v_customCanUnfoldPredicate_x3f_4338_);
lean_ctor_set_uint8(v___x_4343_, sizeof(void*)*7, v___x_4342_);
lean_ctor_set_uint8(v___x_4343_, sizeof(void*)*7 + 1, v_univApprox_4339_);
lean_ctor_set_uint8(v___x_4343_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4340_);
lean_ctor_set_uint8(v___x_4343_, sizeof(void*)*7 + 3, v_cacheInferType_4341_);
v___x_4344_ = lean_st_ref_take(v___y_4302_);
v_mctx_4345_ = lean_ctor_get(v___x_4344_, 0);
v_cache_4346_ = lean_ctor_get(v___x_4344_, 1);
v_zetaDeltaFVarIds_4347_ = lean_ctor_get(v___x_4344_, 2);
v_postponed_4348_ = lean_ctor_get(v___x_4344_, 3);
v_diag_4349_ = lean_ctor_get(v___x_4344_, 4);
v_isSharedCheck_4395_ = !lean_is_exclusive(v___x_4344_);
if (v_isSharedCheck_4395_ == 0)
{
v___x_4351_ = v___x_4344_;
v_isShared_4352_ = v_isSharedCheck_4395_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_diag_4349_);
lean_inc(v_postponed_4348_);
lean_inc(v_zetaDeltaFVarIds_4347_);
lean_inc(v_cache_4346_);
lean_inc(v_mctx_4345_);
lean_dec(v___x_4344_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4395_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v_a_4354_; lean_object* v_a_4358_; lean_object* v___x_4370_; lean_object* v___x_4372_; 
v___x_4370_ = lean_box(1);
if (v_isShared_4352_ == 0)
{
lean_ctor_set(v___x_4351_, 2, v___x_4370_);
v___x_4372_ = v___x_4351_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4394_; 
v_reuseFailAlloc_4394_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4394_, 0, v_mctx_4345_);
lean_ctor_set(v_reuseFailAlloc_4394_, 1, v_cache_4346_);
lean_ctor_set(v_reuseFailAlloc_4394_, 2, v___x_4370_);
lean_ctor_set(v_reuseFailAlloc_4394_, 3, v_postponed_4348_);
lean_ctor_set(v_reuseFailAlloc_4394_, 4, v_diag_4349_);
v___x_4372_ = v_reuseFailAlloc_4394_;
goto v_reusejp_4371_;
}
v___jp_4353_:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; 
v___x_4355_ = lean_box(0);
v___x_4356_ = l_Lean_Meta_Sym_letToHave___lam__4(v___y_4302_, v_zetaDeltaFVarIds_4347_, v___x_4355_);
lean_dec_ref(v___x_4356_);
v_a_4309_ = v_a_4354_;
goto v___jp_4308_;
}
v___jp_4357_:
{
lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
lean_inc(v_a_4358_);
v___x_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4359_, 0, v_a_4358_);
v___x_4360_ = l_Lean_Meta_Sym_letToHave___lam__4(v___y_4302_, v_zetaDeltaFVarIds_4347_, v___x_4359_);
lean_dec_ref(v___x_4360_);
v___x_4361_ = l_Lean_Meta_Sym_letToHave___lam__3(v___y_4302_, v_cache_4307_, v___x_4359_);
lean_dec_ref_known(v___x_4359_, 1);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4361_);
if (v_isSharedCheck_4368_ == 0)
{
lean_object* v_unused_4369_; 
v_unused_4369_ = lean_ctor_get(v___x_4361_, 0);
lean_dec(v_unused_4369_);
v___x_4363_ = v___x_4361_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_dec(v___x_4361_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
lean_ctor_set(v___x_4363_, 0, v_a_4358_);
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_a_4358_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
}
v_reusejp_4371_:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; uint8_t v_transparency_4375_; uint8_t v___x_4376_; 
v___x_4373_ = lean_st_ref_put(v___y_4302_, v___x_4372_);
v___x_4374_ = l_Lean_Meta_Context_config(v___x_4343_);
lean_dec_ref_known(v___x_4343_, 7);
v_transparency_4375_ = lean_ctor_get_uint8(v___x_4374_, 9);
v___x_4376_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4375_, v___x_4296_);
if (v___x_4376_ == 0)
{
lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; uint64_t v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; 
lean_dec_ref(v___x_4374_);
lean_inc_ref(v_keyedConfig_4332_);
v___x_4377_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4296_, v_keyedConfig_4332_);
lean_inc_n(v_customCanUnfoldPredicate_x3f_4338_, 2);
lean_inc_n(v_synthPendingDepth_4337_, 2);
lean_inc_n(v_defEqCtx_x3f_4336_, 2);
lean_inc_ref_n(v_localInstances_4335_, 2);
lean_inc_ref_n(v_lctx_4334_, 3);
lean_inc_n(v_zetaDeltaSet_4333_, 2);
v___x_4378_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4378_, 0, v___x_4377_);
lean_ctor_set(v___x_4378_, 1, v_zetaDeltaSet_4333_);
lean_ctor_set(v___x_4378_, 2, v_lctx_4334_);
lean_ctor_set(v___x_4378_, 3, v_localInstances_4335_);
lean_ctor_set(v___x_4378_, 4, v_defEqCtx_x3f_4336_);
lean_ctor_set(v___x_4378_, 5, v_synthPendingDepth_4337_);
lean_ctor_set(v___x_4378_, 6, v_customCanUnfoldPredicate_x3f_4338_);
lean_ctor_set_uint8(v___x_4378_, sizeof(void*)*7, v___x_4342_);
lean_ctor_set_uint8(v___x_4378_, sizeof(void*)*7 + 1, v_univApprox_4339_);
lean_ctor_set_uint8(v___x_4378_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4340_);
lean_ctor_set_uint8(v___x_4378_, sizeof(void*)*7 + 3, v_cacheInferType_4341_);
v___x_4379_ = l_Lean_Meta_Context_config(v___x_4378_);
lean_dec_ref_known(v___x_4378_, 7);
v___x_4380_ = lean_apply_1(v___f_4297_, v___x_4379_);
v___x_4381_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_4380_);
v___x_4382_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4382_, 0, v___x_4380_);
lean_ctor_set_uint64(v___x_4382_, sizeof(void*)*1, v___x_4381_);
v___x_4383_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4383_, 0, v___x_4382_);
lean_ctor_set(v___x_4383_, 1, v_zetaDeltaSet_4333_);
lean_ctor_set(v___x_4383_, 2, v_lctx_4334_);
lean_ctor_set(v___x_4383_, 3, v_localInstances_4335_);
lean_ctor_set(v___x_4383_, 4, v_defEqCtx_x3f_4336_);
lean_ctor_set(v___x_4383_, 5, v_synthPendingDepth_4337_);
lean_ctor_set(v___x_4383_, 6, v_customCanUnfoldPredicate_x3f_4338_);
lean_ctor_set_uint8(v___x_4383_, sizeof(void*)*7, v___x_4342_);
lean_ctor_set_uint8(v___x_4383_, sizeof(void*)*7 + 1, v_univApprox_4339_);
lean_ctor_set_uint8(v___x_4383_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4340_);
lean_ctor_set_uint8(v___x_4383_, sizeof(void*)*7 + 3, v_cacheInferType_4341_);
lean_inc(v___y_4304_);
lean_inc_ref(v___y_4303_);
lean_inc(v___y_4302_);
lean_inc(v___y_4300_);
lean_inc_ref(v___y_4299_);
v___x_4384_ = lean_apply_8(v___f_4298_, v_lctx_4334_, v___y_4299_, v___y_4300_, v___x_4383_, v___y_4302_, v___y_4303_, v___y_4304_, lean_box(0));
if (lean_obj_tag(v___x_4384_) == 0)
{
lean_object* v_a_4385_; 
v_a_4385_ = lean_ctor_get(v___x_4384_, 0);
lean_inc(v_a_4385_);
lean_dec_ref_known(v___x_4384_, 1);
v_a_4358_ = v_a_4385_;
goto v___jp_4357_;
}
else
{
lean_object* v_a_4386_; 
v_a_4386_ = lean_ctor_get(v___x_4384_, 0);
lean_inc(v_a_4386_);
lean_dec_ref_known(v___x_4384_, 1);
v_a_4354_ = v_a_4386_;
goto v___jp_4353_;
}
}
else
{
lean_object* v___x_4387_; uint64_t v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; 
v___x_4387_ = lean_apply_1(v___f_4297_, v___x_4374_);
v___x_4388_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_4387_);
v___x_4389_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4389_, 0, v___x_4387_);
lean_ctor_set_uint64(v___x_4389_, sizeof(void*)*1, v___x_4388_);
lean_inc(v_customCanUnfoldPredicate_x3f_4338_);
lean_inc(v_synthPendingDepth_4337_);
lean_inc(v_defEqCtx_x3f_4336_);
lean_inc_ref(v_localInstances_4335_);
lean_inc_ref_n(v_lctx_4334_, 2);
lean_inc(v_zetaDeltaSet_4333_);
v___x_4390_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4390_, 0, v___x_4389_);
lean_ctor_set(v___x_4390_, 1, v_zetaDeltaSet_4333_);
lean_ctor_set(v___x_4390_, 2, v_lctx_4334_);
lean_ctor_set(v___x_4390_, 3, v_localInstances_4335_);
lean_ctor_set(v___x_4390_, 4, v_defEqCtx_x3f_4336_);
lean_ctor_set(v___x_4390_, 5, v_synthPendingDepth_4337_);
lean_ctor_set(v___x_4390_, 6, v_customCanUnfoldPredicate_x3f_4338_);
lean_ctor_set_uint8(v___x_4390_, sizeof(void*)*7, v___x_4342_);
lean_ctor_set_uint8(v___x_4390_, sizeof(void*)*7 + 1, v_univApprox_4339_);
lean_ctor_set_uint8(v___x_4390_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4340_);
lean_ctor_set_uint8(v___x_4390_, sizeof(void*)*7 + 3, v_cacheInferType_4341_);
lean_inc(v___y_4304_);
lean_inc_ref(v___y_4303_);
lean_inc(v___y_4302_);
lean_inc(v___y_4300_);
lean_inc_ref(v___y_4299_);
v___x_4391_ = lean_apply_8(v___f_4298_, v_lctx_4334_, v___y_4299_, v___y_4300_, v___x_4390_, v___y_4302_, v___y_4303_, v___y_4304_, lean_box(0));
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v_a_4392_; 
v_a_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4392_);
lean_dec_ref_known(v___x_4391_, 1);
v_a_4358_ = v_a_4392_;
goto v___jp_4357_;
}
else
{
lean_object* v_a_4393_; 
v_a_4393_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4393_);
lean_dec_ref_known(v___x_4391_, 1);
v_a_4354_ = v_a_4393_;
goto v___jp_4353_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___lam__5___boxed(lean_object* v___x_4399_, lean_object* v___f_4400_, lean_object* v___f_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_){
_start:
{
uint8_t v___x_20409__boxed_4409_; lean_object* v_res_4410_; 
v___x_20409__boxed_4409_ = lean_unbox(v___x_4399_);
v_res_4410_ = l_Lean_Meta_Sym_letToHave___lam__5(v___x_20409__boxed_4409_, v___f_4400_, v___f_4401_, v___y_4402_, v___y_4403_, v___y_4404_, v___y_4405_, v___y_4406_, v___y_4407_);
lean_dec(v___y_4407_);
lean_dec_ref(v___y_4406_);
lean_dec(v___y_4405_);
lean_dec_ref(v___y_4404_);
lean_dec(v___y_4403_);
lean_dec_ref(v___y_4402_);
return v_res_4410_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3___redArg(lean_object* v_msg_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_){
_start:
{
lean_object* v_ref_4417_; lean_object* v___x_4418_; lean_object* v_a_4419_; lean_object* v___x_4421_; uint8_t v_isShared_4422_; uint8_t v_isSharedCheck_4427_; 
v_ref_4417_ = lean_ctor_get(v___y_4414_, 2);
v___x_4418_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LetToHave_0__Lean_Meta_Sym_LetToHave_checkDefEq_spec__0_spec__0(v_msg_4411_, v___y_4412_, v___y_4413_, v___y_4414_, v___y_4415_);
v_a_4419_ = lean_ctor_get(v___x_4418_, 0);
v_isSharedCheck_4427_ = !lean_is_exclusive(v___x_4418_);
if (v_isSharedCheck_4427_ == 0)
{
v___x_4421_ = v___x_4418_;
v_isShared_4422_ = v_isSharedCheck_4427_;
goto v_resetjp_4420_;
}
else
{
lean_inc(v_a_4419_);
lean_dec(v___x_4418_);
v___x_4421_ = lean_box(0);
v_isShared_4422_ = v_isSharedCheck_4427_;
goto v_resetjp_4420_;
}
v_resetjp_4420_:
{
lean_object* v___x_4423_; lean_object* v___x_4425_; 
lean_inc(v_ref_4417_);
v___x_4423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4423_, 0, v_ref_4417_);
lean_ctor_set(v___x_4423_, 1, v_a_4419_);
if (v_isShared_4422_ == 0)
{
lean_ctor_set_tag(v___x_4421_, 1);
lean_ctor_set(v___x_4421_, 0, v___x_4423_);
v___x_4425_ = v___x_4421_;
goto v_reusejp_4424_;
}
else
{
lean_object* v_reuseFailAlloc_4426_; 
v_reuseFailAlloc_4426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4426_, 0, v___x_4423_);
v___x_4425_ = v_reuseFailAlloc_4426_;
goto v_reusejp_4424_;
}
v_reusejp_4424_:
{
return v___x_4425_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3___redArg___boxed(lean_object* v_msg_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
lean_object* v_res_4434_; 
v_res_4434_ = l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3___redArg(v_msg_4428_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_);
lean_dec(v___y_4432_);
lean_dec_ref(v___y_4431_);
lean_dec(v___y_4430_);
lean_dec_ref(v___y_4429_);
return v_res_4434_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___lam__0(lean_object* v___y_4435_, uint8_t v_isExporting_4436_, lean_object* v___x_4437_, lean_object* v___y_4438_, lean_object* v___x_4439_, lean_object* v_a_x3f_4440_){
_start:
{
lean_object* v___x_4442_; lean_object* v_env_4443_; lean_object* v_nextMacroScope_4444_; lean_object* v_ngen_4445_; lean_object* v_auxDeclNGen_4446_; lean_object* v_traceState_4447_; lean_object* v_messages_4448_; lean_object* v_infoState_4449_; lean_object* v_snapshotTasks_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4475_; 
v___x_4442_ = lean_st_ref_take(v___y_4435_);
v_env_4443_ = lean_ctor_get(v___x_4442_, 0);
v_nextMacroScope_4444_ = lean_ctor_get(v___x_4442_, 1);
v_ngen_4445_ = lean_ctor_get(v___x_4442_, 2);
v_auxDeclNGen_4446_ = lean_ctor_get(v___x_4442_, 3);
v_traceState_4447_ = lean_ctor_get(v___x_4442_, 4);
v_messages_4448_ = lean_ctor_get(v___x_4442_, 6);
v_infoState_4449_ = lean_ctor_get(v___x_4442_, 7);
v_snapshotTasks_4450_ = lean_ctor_get(v___x_4442_, 8);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4475_ == 0)
{
lean_object* v_unused_4476_; 
v_unused_4476_ = lean_ctor_get(v___x_4442_, 5);
lean_dec(v_unused_4476_);
v___x_4452_ = v___x_4442_;
v_isShared_4453_ = v_isSharedCheck_4475_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_snapshotTasks_4450_);
lean_inc(v_infoState_4449_);
lean_inc(v_messages_4448_);
lean_inc(v_traceState_4447_);
lean_inc(v_auxDeclNGen_4446_);
lean_inc(v_ngen_4445_);
lean_inc(v_nextMacroScope_4444_);
lean_inc(v_env_4443_);
lean_dec(v___x_4442_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4475_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4454_; lean_object* v___x_4456_; 
v___x_4454_ = l_Lean_Environment_setExporting(v_env_4443_, v_isExporting_4436_);
if (v_isShared_4453_ == 0)
{
lean_ctor_set(v___x_4452_, 5, v___x_4437_);
lean_ctor_set(v___x_4452_, 0, v___x_4454_);
v___x_4456_ = v___x_4452_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v___x_4454_);
lean_ctor_set(v_reuseFailAlloc_4474_, 1, v_nextMacroScope_4444_);
lean_ctor_set(v_reuseFailAlloc_4474_, 2, v_ngen_4445_);
lean_ctor_set(v_reuseFailAlloc_4474_, 3, v_auxDeclNGen_4446_);
lean_ctor_set(v_reuseFailAlloc_4474_, 4, v_traceState_4447_);
lean_ctor_set(v_reuseFailAlloc_4474_, 5, v___x_4437_);
lean_ctor_set(v_reuseFailAlloc_4474_, 6, v_messages_4448_);
lean_ctor_set(v_reuseFailAlloc_4474_, 7, v_infoState_4449_);
lean_ctor_set(v_reuseFailAlloc_4474_, 8, v_snapshotTasks_4450_);
v___x_4456_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4455_;
}
v_reusejp_4455_:
{
lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v_mctx_4459_; lean_object* v_zetaDeltaFVarIds_4460_; lean_object* v_postponed_4461_; lean_object* v_diag_4462_; lean_object* v___x_4464_; uint8_t v_isShared_4465_; uint8_t v_isSharedCheck_4472_; 
v___x_4457_ = lean_st_ref_put(v___y_4435_, v___x_4456_);
v___x_4458_ = lean_st_ref_take(v___y_4438_);
v_mctx_4459_ = lean_ctor_get(v___x_4458_, 0);
v_zetaDeltaFVarIds_4460_ = lean_ctor_get(v___x_4458_, 2);
v_postponed_4461_ = lean_ctor_get(v___x_4458_, 3);
v_diag_4462_ = lean_ctor_get(v___x_4458_, 4);
v_isSharedCheck_4472_ = !lean_is_exclusive(v___x_4458_);
if (v_isSharedCheck_4472_ == 0)
{
lean_object* v_unused_4473_; 
v_unused_4473_ = lean_ctor_get(v___x_4458_, 1);
lean_dec(v_unused_4473_);
v___x_4464_ = v___x_4458_;
v_isShared_4465_ = v_isSharedCheck_4472_;
goto v_resetjp_4463_;
}
else
{
lean_inc(v_diag_4462_);
lean_inc(v_postponed_4461_);
lean_inc(v_zetaDeltaFVarIds_4460_);
lean_inc(v_mctx_4459_);
lean_dec(v___x_4458_);
v___x_4464_ = lean_box(0);
v_isShared_4465_ = v_isSharedCheck_4472_;
goto v_resetjp_4463_;
}
v_resetjp_4463_:
{
lean_object* v___x_4466_; lean_object* v___x_4468_; 
v___x_4466_ = lean_box(0);
if (v_isShared_4465_ == 0)
{
lean_ctor_set(v___x_4464_, 1, v___x_4439_);
v___x_4468_ = v___x_4464_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4471_; 
v_reuseFailAlloc_4471_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4471_, 0, v_mctx_4459_);
lean_ctor_set(v_reuseFailAlloc_4471_, 1, v___x_4439_);
lean_ctor_set(v_reuseFailAlloc_4471_, 2, v_zetaDeltaFVarIds_4460_);
lean_ctor_set(v_reuseFailAlloc_4471_, 3, v_postponed_4461_);
lean_ctor_set(v_reuseFailAlloc_4471_, 4, v_diag_4462_);
v___x_4468_ = v_reuseFailAlloc_4471_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4469_ = lean_st_ref_put(v___y_4438_, v___x_4468_);
v___x_4470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4470_, 0, v___x_4466_);
return v___x_4470_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v___y_4477_, lean_object* v_isExporting_4478_, lean_object* v___x_4479_, lean_object* v___y_4480_, lean_object* v___x_4481_, lean_object* v_a_x3f_4482_, lean_object* v___y_4483_){
_start:
{
uint8_t v_isExporting_boxed_4484_; lean_object* v_res_4485_; 
v_isExporting_boxed_4484_ = lean_unbox(v_isExporting_4478_);
v_res_4485_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___lam__0(v___y_4477_, v_isExporting_boxed_4484_, v___x_4479_, v___y_4480_, v___x_4481_, v_a_x3f_4482_);
lean_dec(v_a_x3f_4482_);
lean_dec(v___y_4480_);
lean_dec(v___y_4477_);
return v_res_4485_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_4486_; lean_object* v___x_4487_; 
v___x_4486_ = lean_obj_once(&l_Lean_Meta_Sym_letToHave___lam__5___closed__0, &l_Lean_Meta_Sym_letToHave___lam__5___closed__0_once, _init_l_Lean_Meta_Sym_letToHave___lam__5___closed__0);
v___x_4487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4487_, 0, v___x_4486_);
return v___x_4487_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; 
v___x_4488_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__0);
v___x_4489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4489_, 0, v___x_4488_);
lean_ctor_set(v___x_4489_, 1, v___x_4488_);
return v___x_4489_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; 
v___x_4490_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__0);
v___x_4491_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4491_, 0, v___x_4490_);
lean_ctor_set(v___x_4491_, 1, v___x_4490_);
lean_ctor_set(v___x_4491_, 2, v___x_4490_);
lean_ctor_set(v___x_4491_, 3, v___x_4490_);
lean_ctor_set(v___x_4491_, 4, v___x_4490_);
lean_ctor_set(v___x_4491_, 5, v___x_4490_);
return v___x_4491_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg(lean_object* v_x_4492_, uint8_t v_isExporting_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_){
_start:
{
lean_object* v___x_4501_; lean_object* v_env_4502_; lean_object* v___x_4503_; uint8_t v_isModule_4504_; 
v___x_4501_ = lean_st_ref_get(v___y_4499_);
v_env_4502_ = lean_ctor_get(v___x_4501_, 0);
lean_inc_ref(v_env_4502_);
lean_dec(v___x_4501_);
v___x_4503_ = l_Lean_Environment_header(v_env_4502_);
v_isModule_4504_ = lean_ctor_get_uint8(v___x_4503_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4503_);
if (v_isModule_4504_ == 0)
{
lean_object* v___x_4505_; 
lean_dec_ref(v_env_4502_);
lean_inc(v___y_4499_);
lean_inc_ref(v___y_4498_);
lean_inc(v___y_4497_);
lean_inc_ref(v___y_4496_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
v___x_4505_ = lean_apply_7(v_x_4492_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, lean_box(0));
return v___x_4505_;
}
else
{
uint8_t v_isExporting_4506_; 
v_isExporting_4506_ = lean_ctor_get_uint8(v_env_4502_, sizeof(void*)*8);
lean_dec_ref(v_env_4502_);
if (v_isExporting_4493_ == 0)
{
if (v_isExporting_4506_ == 0)
{
lean_object* v___x_4572_; 
lean_inc(v___y_4499_);
lean_inc_ref(v___y_4498_);
lean_inc(v___y_4497_);
lean_inc_ref(v___y_4496_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
v___x_4572_ = lean_apply_7(v_x_4492_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, lean_box(0));
return v___x_4572_;
}
else
{
goto v___jp_4507_;
}
}
else
{
if (v_isExporting_4506_ == 0)
{
goto v___jp_4507_;
}
else
{
lean_object* v___x_4573_; 
lean_inc(v___y_4499_);
lean_inc_ref(v___y_4498_);
lean_inc(v___y_4497_);
lean_inc_ref(v___y_4496_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
v___x_4573_ = lean_apply_7(v_x_4492_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, lean_box(0));
return v___x_4573_;
}
}
v___jp_4507_:
{
lean_object* v___x_4508_; lean_object* v_env_4509_; lean_object* v_nextMacroScope_4510_; lean_object* v_ngen_4511_; lean_object* v_auxDeclNGen_4512_; lean_object* v_traceState_4513_; lean_object* v_messages_4514_; lean_object* v_infoState_4515_; lean_object* v_snapshotTasks_4516_; lean_object* v___x_4518_; uint8_t v_isShared_4519_; uint8_t v_isSharedCheck_4570_; 
v___x_4508_ = lean_st_ref_take(v___y_4499_);
v_env_4509_ = lean_ctor_get(v___x_4508_, 0);
v_nextMacroScope_4510_ = lean_ctor_get(v___x_4508_, 1);
v_ngen_4511_ = lean_ctor_get(v___x_4508_, 2);
v_auxDeclNGen_4512_ = lean_ctor_get(v___x_4508_, 3);
v_traceState_4513_ = lean_ctor_get(v___x_4508_, 4);
v_messages_4514_ = lean_ctor_get(v___x_4508_, 6);
v_infoState_4515_ = lean_ctor_get(v___x_4508_, 7);
v_snapshotTasks_4516_ = lean_ctor_get(v___x_4508_, 8);
v_isSharedCheck_4570_ = !lean_is_exclusive(v___x_4508_);
if (v_isSharedCheck_4570_ == 0)
{
lean_object* v_unused_4571_; 
v_unused_4571_ = lean_ctor_get(v___x_4508_, 5);
lean_dec(v_unused_4571_);
v___x_4518_ = v___x_4508_;
v_isShared_4519_ = v_isSharedCheck_4570_;
goto v_resetjp_4517_;
}
else
{
lean_inc(v_snapshotTasks_4516_);
lean_inc(v_infoState_4515_);
lean_inc(v_messages_4514_);
lean_inc(v_traceState_4513_);
lean_inc(v_auxDeclNGen_4512_);
lean_inc(v_ngen_4511_);
lean_inc(v_nextMacroScope_4510_);
lean_inc(v_env_4509_);
lean_dec(v___x_4508_);
v___x_4518_ = lean_box(0);
v_isShared_4519_ = v_isSharedCheck_4570_;
goto v_resetjp_4517_;
}
v_resetjp_4517_:
{
lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4523_; 
v___x_4520_ = l_Lean_Environment_setExporting(v_env_4509_, v_isExporting_4493_);
v___x_4521_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__1);
if (v_isShared_4519_ == 0)
{
lean_ctor_set(v___x_4518_, 5, v___x_4521_);
lean_ctor_set(v___x_4518_, 0, v___x_4520_);
v___x_4523_ = v___x_4518_;
goto v_reusejp_4522_;
}
else
{
lean_object* v_reuseFailAlloc_4569_; 
v_reuseFailAlloc_4569_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4569_, 0, v___x_4520_);
lean_ctor_set(v_reuseFailAlloc_4569_, 1, v_nextMacroScope_4510_);
lean_ctor_set(v_reuseFailAlloc_4569_, 2, v_ngen_4511_);
lean_ctor_set(v_reuseFailAlloc_4569_, 3, v_auxDeclNGen_4512_);
lean_ctor_set(v_reuseFailAlloc_4569_, 4, v_traceState_4513_);
lean_ctor_set(v_reuseFailAlloc_4569_, 5, v___x_4521_);
lean_ctor_set(v_reuseFailAlloc_4569_, 6, v_messages_4514_);
lean_ctor_set(v_reuseFailAlloc_4569_, 7, v_infoState_4515_);
lean_ctor_set(v_reuseFailAlloc_4569_, 8, v_snapshotTasks_4516_);
v___x_4523_ = v_reuseFailAlloc_4569_;
goto v_reusejp_4522_;
}
v_reusejp_4522_:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v_mctx_4526_; lean_object* v_zetaDeltaFVarIds_4527_; lean_object* v_postponed_4528_; lean_object* v_diag_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4567_; 
v___x_4524_ = lean_st_ref_put(v___y_4499_, v___x_4523_);
v___x_4525_ = lean_st_ref_take(v___y_4497_);
v_mctx_4526_ = lean_ctor_get(v___x_4525_, 0);
v_zetaDeltaFVarIds_4527_ = lean_ctor_get(v___x_4525_, 2);
v_postponed_4528_ = lean_ctor_get(v___x_4525_, 3);
v_diag_4529_ = lean_ctor_get(v___x_4525_, 4);
v_isSharedCheck_4567_ = !lean_is_exclusive(v___x_4525_);
if (v_isSharedCheck_4567_ == 0)
{
lean_object* v_unused_4568_; 
v_unused_4568_ = lean_ctor_get(v___x_4525_, 1);
lean_dec(v_unused_4568_);
v___x_4531_ = v___x_4525_;
v_isShared_4532_ = v_isSharedCheck_4567_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_diag_4529_);
lean_inc(v_postponed_4528_);
lean_inc(v_zetaDeltaFVarIds_4527_);
lean_inc(v_mctx_4526_);
lean_dec(v___x_4525_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4567_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4533_; lean_object* v___x_4535_; 
v___x_4533_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___closed__2);
if (v_isShared_4532_ == 0)
{
lean_ctor_set(v___x_4531_, 1, v___x_4533_);
v___x_4535_ = v___x_4531_;
goto v_reusejp_4534_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v_mctx_4526_);
lean_ctor_set(v_reuseFailAlloc_4566_, 1, v___x_4533_);
lean_ctor_set(v_reuseFailAlloc_4566_, 2, v_zetaDeltaFVarIds_4527_);
lean_ctor_set(v_reuseFailAlloc_4566_, 3, v_postponed_4528_);
lean_ctor_set(v_reuseFailAlloc_4566_, 4, v_diag_4529_);
v___x_4535_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4534_;
}
v_reusejp_4534_:
{
lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4536_ = lean_st_ref_put(v___y_4497_, v___x_4535_);
lean_inc(v___y_4499_);
lean_inc_ref(v___y_4498_);
lean_inc(v___y_4497_);
lean_inc_ref(v___y_4496_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
v___x_4537_ = lean_apply_7(v_x_4492_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, lean_box(0));
if (lean_obj_tag(v___x_4537_) == 0)
{
lean_object* v_a_4538_; lean_object* v___x_4540_; uint8_t v_isShared_4541_; uint8_t v_isSharedCheck_4554_; 
v_a_4538_ = lean_ctor_get(v___x_4537_, 0);
v_isSharedCheck_4554_ = !lean_is_exclusive(v___x_4537_);
if (v_isSharedCheck_4554_ == 0)
{
v___x_4540_ = v___x_4537_;
v_isShared_4541_ = v_isSharedCheck_4554_;
goto v_resetjp_4539_;
}
else
{
lean_inc(v_a_4538_);
lean_dec(v___x_4537_);
v___x_4540_ = lean_box(0);
v_isShared_4541_ = v_isSharedCheck_4554_;
goto v_resetjp_4539_;
}
v_resetjp_4539_:
{
lean_object* v___x_4543_; 
lean_inc(v_a_4538_);
if (v_isShared_4541_ == 0)
{
lean_ctor_set_tag(v___x_4540_, 1);
v___x_4543_ = v___x_4540_;
goto v_reusejp_4542_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v_a_4538_);
v___x_4543_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4542_;
}
v_reusejp_4542_:
{
lean_object* v___x_4544_; lean_object* v___x_4546_; uint8_t v_isShared_4547_; uint8_t v_isSharedCheck_4551_; 
v___x_4544_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___lam__0(v___y_4499_, v_isExporting_4506_, v___x_4521_, v___y_4497_, v___x_4533_, v___x_4543_);
lean_dec_ref(v___x_4543_);
v_isSharedCheck_4551_ = !lean_is_exclusive(v___x_4544_);
if (v_isSharedCheck_4551_ == 0)
{
lean_object* v_unused_4552_; 
v_unused_4552_ = lean_ctor_get(v___x_4544_, 0);
lean_dec(v_unused_4552_);
v___x_4546_ = v___x_4544_;
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
else
{
lean_dec(v___x_4544_);
v___x_4546_ = lean_box(0);
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
v_resetjp_4545_:
{
lean_object* v___x_4549_; 
if (v_isShared_4547_ == 0)
{
lean_ctor_set(v___x_4546_, 0, v_a_4538_);
v___x_4549_ = v___x_4546_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v_a_4538_);
v___x_4549_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
return v___x_4549_;
}
}
}
}
}
else
{
lean_object* v_a_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4564_; 
v_a_4555_ = lean_ctor_get(v___x_4537_, 0);
lean_inc(v_a_4555_);
lean_dec_ref_known(v___x_4537_, 1);
v___x_4556_ = lean_box(0);
v___x_4557_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___lam__0(v___y_4499_, v_isExporting_4506_, v___x_4521_, v___y_4497_, v___x_4533_, v___x_4556_);
v_isSharedCheck_4564_ = !lean_is_exclusive(v___x_4557_);
if (v_isSharedCheck_4564_ == 0)
{
lean_object* v_unused_4565_; 
v_unused_4565_ = lean_ctor_get(v___x_4557_, 0);
lean_dec(v_unused_4565_);
v___x_4559_ = v___x_4557_;
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
else
{
lean_dec(v___x_4557_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4562_; 
if (v_isShared_4560_ == 0)
{
lean_ctor_set_tag(v___x_4559_, 1);
lean_ctor_set(v___x_4559_, 0, v_a_4555_);
v___x_4562_ = v___x_4559_;
goto v_reusejp_4561_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v_a_4555_);
v___x_4562_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4561_;
}
v_reusejp_4561_:
{
return v___x_4562_;
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
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg___boxed(lean_object* v_x_4574_, lean_object* v_isExporting_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_){
_start:
{
uint8_t v_isExporting_boxed_4583_; lean_object* v_res_4584_; 
v_isExporting_boxed_4583_ = lean_unbox(v_isExporting_4575_);
v_res_4584_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg(v_x_4574_, v_isExporting_boxed_4583_, v___y_4576_, v___y_4577_, v___y_4578_, v___y_4579_, v___y_4580_, v___y_4581_);
lean_dec(v___y_4581_);
lean_dec_ref(v___y_4580_);
lean_dec(v___y_4579_);
lean_dec_ref(v___y_4578_);
lean_dec(v___y_4577_);
lean_dec_ref(v___y_4576_);
return v_res_4584_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2___redArg(lean_object* v_x_4585_, uint8_t v_when_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_){
_start:
{
if (v_when_4586_ == 0)
{
lean_object* v___x_4594_; 
lean_inc(v___y_4592_);
lean_inc_ref(v___y_4591_);
lean_inc(v___y_4590_);
lean_inc_ref(v___y_4589_);
lean_inc(v___y_4588_);
lean_inc_ref(v___y_4587_);
v___x_4594_ = lean_apply_7(v_x_4585_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_, v___y_4591_, v___y_4592_, lean_box(0));
return v___x_4594_;
}
else
{
uint8_t v___x_4595_; lean_object* v___x_4596_; 
v___x_4595_ = 0;
v___x_4596_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg(v_x_4585_, v___x_4595_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_, v___y_4591_, v___y_4592_);
return v___x_4596_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2___redArg___boxed(lean_object* v_x_4597_, lean_object* v_when_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_){
_start:
{
uint8_t v_when_boxed_4606_; lean_object* v_res_4607_; 
v_when_boxed_4606_ = lean_unbox(v_when_4598_);
v_res_4607_ = l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2___redArg(v_x_4597_, v_when_boxed_4606_, v___y_4599_, v___y_4600_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_);
lean_dec(v___y_4604_);
lean_dec_ref(v___y_4603_);
lean_dec(v___y_4602_);
lean_dec_ref(v___y_4601_);
lean_dec(v___y_4600_);
lean_dec_ref(v___y_4599_);
return v_res_4607_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_letToHave___closed__2(void){
_start:
{
lean_object* v___x_4610_; lean_object* v___x_4611_; 
v___x_4610_ = ((lean_object*)(l_Lean_Meta_Sym_letToHave___closed__1));
v___x_4611_ = l_Lean_stringToMessageData(v___x_4610_);
return v___x_4611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave(lean_object* v_e_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_){
_start:
{
lean_object* v___f_4620_; lean_object* v___f_4621_; lean_object* v___y_4623_; lean_object* v___y_4624_; lean_object* v___y_4625_; lean_object* v___y_4626_; lean_object* v___y_4627_; lean_object* v___y_4628_; uint8_t v___x_4637_; 
v___f_4620_ = ((lean_object*)(l_Lean_Meta_Sym_letToHave___closed__0));
lean_inc_ref(v_e_4612_);
v___f_4621_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_letToHave___lam__2___boxed), 9, 1);
lean_closure_set(v___f_4621_, 0, v_e_4612_);
v___x_4637_ = l_Lean_Expr_hasLooseBVars(v_e_4612_);
lean_dec_ref(v_e_4612_);
if (v___x_4637_ == 0)
{
v___y_4623_ = v___y_4613_;
v___y_4624_ = v___y_4614_;
v___y_4625_ = v___y_4615_;
v___y_4626_ = v___y_4616_;
v___y_4627_ = v___y_4617_;
v___y_4628_ = v___y_4618_;
goto v___jp_4622_;
}
else
{
lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v_a_4640_; lean_object* v___x_4642_; uint8_t v_isShared_4643_; uint8_t v_isSharedCheck_4647_; 
lean_dec_ref(v___f_4621_);
v___x_4638_ = lean_obj_once(&l_Lean_Meta_Sym_letToHave___closed__2, &l_Lean_Meta_Sym_letToHave___closed__2_once, _init_l_Lean_Meta_Sym_letToHave___closed__2);
v___x_4639_ = l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3___redArg(v___x_4638_, v___y_4615_, v___y_4616_, v___y_4617_, v___y_4618_);
v_a_4640_ = lean_ctor_get(v___x_4639_, 0);
v_isSharedCheck_4647_ = !lean_is_exclusive(v___x_4639_);
if (v_isSharedCheck_4647_ == 0)
{
v___x_4642_ = v___x_4639_;
v_isShared_4643_ = v_isSharedCheck_4647_;
goto v_resetjp_4641_;
}
else
{
lean_inc(v_a_4640_);
lean_dec(v___x_4639_);
v___x_4642_ = lean_box(0);
v_isShared_4643_ = v_isSharedCheck_4647_;
goto v_resetjp_4641_;
}
v_resetjp_4641_:
{
lean_object* v___x_4645_; 
if (v_isShared_4643_ == 0)
{
v___x_4645_ = v___x_4642_;
goto v_reusejp_4644_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v_a_4640_);
v___x_4645_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4644_;
}
v_reusejp_4644_:
{
return v___x_4645_;
}
}
}
v___jp_4622_:
{
uint8_t v___x_4629_; lean_object* v___x_4630_; lean_object* v___f_4631_; uint8_t v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; uint8_t v___x_4635_; lean_object* v___x_4636_; 
v___x_4629_ = 0;
v___x_4630_ = lean_box(v___x_4629_);
v___f_4631_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_letToHave___lam__5___boxed), 10, 3);
lean_closure_set(v___f_4631_, 0, v___x_4630_);
lean_closure_set(v___f_4631_, 1, v___f_4620_);
lean_closure_set(v___f_4631_, 2, v___f_4621_);
v___x_4632_ = 0;
v___x_4633_ = lean_box(v___x_4632_);
v___x_4634_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_letToHave_spec__1___boxed), 10, 3);
lean_closure_set(v___x_4634_, 0, lean_box(0));
lean_closure_set(v___x_4634_, 1, v___f_4631_);
lean_closure_set(v___x_4634_, 2, v___x_4633_);
v___x_4635_ = 1;
v___x_4636_ = l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2___redArg(v___x_4634_, v___x_4635_, v___y_4623_, v___y_4624_, v___y_4625_, v___y_4626_, v___y_4627_, v___y_4628_);
return v___x_4636_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_letToHave___boxed(lean_object* v_e_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_){
_start:
{
lean_object* v_res_4656_; 
v_res_4656_ = l_Lean_Meta_Sym_letToHave(v_e_4648_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_, v___y_4654_);
lean_dec(v___y_4654_);
lean_dec_ref(v___y_4653_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
return v_res_4656_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2(lean_object* v_00_u03b1_4657_, lean_object* v_x_4658_, uint8_t v_isExporting_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_){
_start:
{
lean_object* v___x_4667_; 
v___x_4667_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___redArg(v_x_4658_, v_isExporting_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_);
return v___x_4667_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2___boxed(lean_object* v_00_u03b1_4668_, lean_object* v_x_4669_, lean_object* v_isExporting_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_){
_start:
{
uint8_t v_isExporting_boxed_4678_; lean_object* v_res_4679_; 
v_isExporting_boxed_4678_ = lean_unbox(v_isExporting_4670_);
v_res_4679_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2_spec__2(v_00_u03b1_4668_, v_x_4669_, v_isExporting_boxed_4678_, v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_, v___y_4676_);
lean_dec(v___y_4676_);
lean_dec_ref(v___y_4675_);
lean_dec(v___y_4674_);
lean_dec_ref(v___y_4673_);
lean_dec(v___y_4672_);
lean_dec_ref(v___y_4671_);
return v_res_4679_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2(lean_object* v_00_u03b1_4680_, lean_object* v_x_4681_, uint8_t v_when_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_){
_start:
{
lean_object* v___x_4690_; 
v___x_4690_ = l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2___redArg(v_x_4681_, v_when_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_);
return v___x_4690_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2___boxed(lean_object* v_00_u03b1_4691_, lean_object* v_x_4692_, lean_object* v_when_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_){
_start:
{
uint8_t v_when_boxed_4701_; lean_object* v_res_4702_; 
v_when_boxed_4701_ = lean_unbox(v_when_4693_);
v_res_4702_ = l_Lean_withoutExporting___at___00Lean_Meta_Sym_letToHave_spec__2(v_00_u03b1_4691_, v_x_4692_, v_when_boxed_4701_, v___y_4694_, v___y_4695_, v___y_4696_, v___y_4697_, v___y_4698_, v___y_4699_);
lean_dec(v___y_4699_);
lean_dec_ref(v___y_4698_);
lean_dec(v___y_4697_);
lean_dec_ref(v___y_4696_);
lean_dec(v___y_4695_);
lean_dec_ref(v___y_4694_);
return v_res_4702_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3(lean_object* v_00_u03b1_4703_, lean_object* v_msg_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_){
_start:
{
lean_object* v___x_4712_; 
v___x_4712_ = l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3___redArg(v_msg_4704_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
return v___x_4712_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3___boxed(lean_object* v_00_u03b1_4713_, lean_object* v_msg_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_){
_start:
{
lean_object* v_res_4722_; 
v_res_4722_ = l_Lean_throwError___at___00Lean_Meta_Sym_letToHave_spec__3(v_00_u03b1_4713_, v_msg_4714_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_, v___y_4720_);
lean_dec(v___y_4720_);
lean_dec_ref(v___y_4719_);
lean_dec(v___y_4718_);
lean_dec_ref(v___y_4717_);
lean_dec(v___y_4716_);
lean_dec_ref(v___y_4715_);
return v_res_4722_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_LetToHave(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_LetToHave(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_LetToHave(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_LetToHave(builtin);
}
#ifdef __cplusplus
}
#endif
