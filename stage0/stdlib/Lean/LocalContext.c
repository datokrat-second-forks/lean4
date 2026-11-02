// Lean compiler output
// Module: Lean.LocalContext
// Imports: public import Init.Data.Nat.Control public import Lean.Data.PersistentArray public import Lean.Expr import Init.Data.ToString.Macro import Init.Omega
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_PersistentArray_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVarId(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_anyM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t l_Lean_Name_isImplementationDetail(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_pop___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_sanitizeName(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_foldRev___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getSanitizeNames(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedLocalDeclKind_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedLocalDeclKind;
static const lean_string_object l_Lean_instReprLocalDeclKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.LocalDeclKind.default"};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__0 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprLocalDeclKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__1 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__1_value;
static const lean_string_object l_Lean_instReprLocalDeclKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.LocalDeclKind.implDetail"};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__2 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprLocalDeclKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__3 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__3_value;
static const lean_string_object l_Lean_instReprLocalDeclKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.LocalDeclKind.auxDecl"};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__4 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprLocalDeclKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__5 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__5_value;
static lean_once_cell_t l_Lean_instReprLocalDeclKind_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLocalDeclKind_repr___closed__6;
static lean_once_cell_t l_Lean_instReprLocalDeclKind_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLocalDeclKind_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLocalDeclKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLocalDeclKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLocalDeclKind___closed__0 = (const lean_object*)&l_Lean_instReprLocalDeclKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLocalDeclKind = (const lean_object*)&l_Lean_instReprLocalDeclKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_LocalDeclKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instDecidableEqLocalDeclKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instDecidableEqLocalDeclKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_instHashableLocalDeclKind_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instHashableLocalDeclKind_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableLocalDeclKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableLocalDeclKind_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableLocalDeclKind___closed__0 = (const lean_object*)&l_Lean_instHashableLocalDeclKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableLocalDeclKind = (const lean_object*)&l_Lean_instHashableLocalDeclKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_LocalDeclKind_ofBinderName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ofBinderName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedLocalDecl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_instInhabitedLocalDecl_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedLocalDecl_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedLocalDecl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedLocalDecl_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_instInhabitedLocalDecl_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedLocalDecl_default___closed__1_value;
static lean_once_cell_t l_Lean_instInhabitedLocalDecl_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalDecl_default___closed__2;
static lean_once_cell_t l_Lean_instInhabitedLocalDecl_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalDecl_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLocalDecl_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLocalDecl;
LEAN_EXPORT lean_object* lean_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkLocalDeclEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_mk_let_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_local_decl_binder_info(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfoEx___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isLet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setType(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfo___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_kind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_kind___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isAuxDecl___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isImplementationDetail___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_value_spec__0(lean_object*);
static const lean_string_object l_Lean_LocalDecl_value___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.LocalContext"};
static const lean_object* l_Lean_LocalDecl_value___closed__0 = (const lean_object*)&l_Lean_LocalDecl_value___closed__0_value;
static const lean_string_object l_Lean_LocalDecl_value___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.LocalDecl.value"};
static const lean_object* l_Lean_LocalDecl_value___closed__1 = (const lean_object*)&l_Lean_LocalDecl_value___closed__1_value;
static const lean_string_object l_Lean_LocalDecl_value___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "let declaration expected"};
static const lean_object* l_Lean_LocalDecl_value___closed__2 = (const lean_object*)&l_Lean_LocalDecl_value___closed__2_value;
static lean_once_cell_t l_Lean_LocalDecl_value___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_value___closed__3;
static const lean_string_object l_Lean_LocalDecl_value___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "dependent let declaration expected"};
static const lean_object* l_Lean_LocalDecl_value___closed__4 = (const lean_object*)&l_Lean_LocalDecl_value___closed__4_value;
static lean_once_cell_t l_Lean_LocalDecl_value___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_value___closed__5;
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasValue(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isNondep(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isNondep___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setUserName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(lean_object*);
static const lean_string_object l_Lean_LocalDecl_setBinderInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.LocalDecl.setBinderInfo"};
static const lean_object* l_Lean_LocalDecl_setBinderInfo___closed__0 = (const lean_object*)&l_Lean_LocalDecl_setBinderInfo___closed__0_value;
static const lean_string_object l_Lean_LocalDecl_setBinderInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected let declaration"};
static const lean_object* l_Lean_LocalDecl_setBinderInfo___closed__1 = (const lean_object*)&l_Lean_LocalDecl_setBinderInfo___closed__1_value;
static lean_once_cell_t l_Lean_LocalDecl_setBinderInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_setBinderInfo___closed__2;
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasExprMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasExprMVar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__2;
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__3;
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLocalContext_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLocalContext;
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg();
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_LocalContext_mkEmpty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalContext_mkEmpty___closed__0;
LEAN_EXPORT lean_object* lean_mk_empty_local_ctx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_empty;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLocalDeclExported___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_mk_let_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLetDeclExported___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_find(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_LocalContext_get_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.LocalContext.get!"};
static const lean_object* l_Lean_LocalContext_get_x21___closed__0 = (const lean_object*)&l_Lean_LocalContext_get_x21___closed__0_value;
static const lean_string_object l_Lean_LocalContext_get_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown free variable"};
static const lean_object* l_Lean_LocalContext_get_x21___closed__1 = (const lean_object*)&l_Lean_LocalContext_get_x21___closed__1_value;
static lean_once_cell_t l_Lean_LocalContext_get_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalContext_get_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_containsFVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_containsFVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_LocalContext_getFVarIds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_LocalContext_getFVarIds___closed__0 = (const lean_object*)&l_Lean_LocalContext_getFVarIds___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_erase___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_pop(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_LocalContext_getFromUserName_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.LocalContext.getFromUserName!"};
static const lean_object* l_Lean_LocalContext_getFromUserName_x21___closed__0 = (const lean_object*)&l_Lean_LocalContext_getFromUserName_x21___closed__0_value;
static const lean_string_object l_Lean_LocalContext_getFromUserName_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unknown local declaration `"};
static const lean_object* l_Lean_LocalContext_getFromUserName_x21___closed__1 = (const lean_object*)&l_Lean_LocalContext_getFromUserName_x21___closed__1_value;
static const lean_string_object l_Lean_LocalContext_getFromUserName_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_LocalContext_getFromUserName_x21___closed__2 = (const lean_object*)&l_Lean_LocalContext_getFromUserName_x21___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_usesUserName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_usesUserName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_LocalContext_modifyLocalDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_modifyLocalDecl___closed__0 = (const lean_object*)&l_Lean_LocalContext_modifyLocalDecl___closed__0_value;
static const lean_closure_object l_Lean_LocalContext_modifyLocalDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_modifyLocalDecl___closed__1 = (const lean_object*)&l_Lean_LocalContext_modifyLocalDecl___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_num_indices(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__0 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__0_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__1 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__1_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__2 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__2_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__3 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__3_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__4 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__4_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__5 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__5_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__6 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Lean_LocalContext_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__0_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__1_value)}};
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__7 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Lean_LocalContext_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__7_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__2_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__3_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__4_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__5_value)}};
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__8 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Lean_LocalContext_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__8_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__6_value)}};
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__9 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_size___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOf___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_LocalContext_mkBinding___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.LocalContext.mkBinding"};
static const lean_object* l_Lean_LocalContext_mkBinding___lam__0___closed__0 = (const lean_object*)&l_Lean_LocalContext_mkBinding___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_LocalContext_mkBinding___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalContext_mkBinding___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_any___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_any(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_all___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_all(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getRoundtrippingUserName_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_LocalContext_findFromUserNames___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_LocalContext_findFromUserNames___redArg___closed__0 = (const lean_object*)&l_Lean_LocalContext_findFromUserNames___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_getLocalHyps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getLocalHyps___redArg___closed__0 = (const lean_object*)&l_Lean_getLocalHyps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_LocalDeclKind_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_LocalDeclKind_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_LocalDeclKind_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg(lean_object* v_default_22_){
_start:
{
lean_inc(v_default_22_);
return v_default_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg___boxed(lean_object* v_default_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_LocalDeclKind_default_elim___redArg(v_default_23_);
lean_dec(v_default_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_default_28_){
_start:
{
lean_inc(v_default_28_);
return v_default_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_default_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_LocalDeclKind_default_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_default_32_);
lean_dec(v_default_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg(lean_object* v_implDetail_35_){
_start:
{
lean_inc(v_implDetail_35_);
return v_implDetail_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg___boxed(lean_object* v_implDetail_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_LocalDeclKind_implDetail_elim___redArg(v_implDetail_36_);
lean_dec(v_implDetail_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_implDetail_41_){
_start:
{
lean_inc(v_implDetail_41_);
return v_implDetail_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_implDetail_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_LocalDeclKind_implDetail_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_implDetail_45_);
lean_dec(v_implDetail_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg(lean_object* v_auxDecl_48_){
_start:
{
lean_inc(v_auxDecl_48_);
return v_auxDecl_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg___boxed(lean_object* v_auxDecl_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_LocalDeclKind_auxDecl_elim___redArg(v_auxDecl_49_);
lean_dec(v_auxDecl_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_auxDecl_54_){
_start:
{
lean_inc(v_auxDecl_54_);
return v_auxDecl_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_auxDecl_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_LocalDeclKind_auxDecl_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_auxDecl_58_);
lean_dec(v_auxDecl_58_);
return v_res_60_;
}
}
static uint8_t _init_l_Lean_instInhabitedLocalDeclKind_default(void){
_start:
{
uint8_t v___x_61_; 
v___x_61_ = 0;
return v___x_61_;
}
}
static uint8_t _init_l_Lean_instInhabitedLocalDeclKind(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
static lean_object* _init_l_Lean_instReprLocalDeclKind_repr___closed__6(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_unsigned_to_nat(2u);
v___x_73_ = lean_nat_to_int(v___x_72_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_instReprLocalDeclKind_repr___closed__7(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(1u);
v___x_75_ = lean_nat_to_int(v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr(uint8_t v_x_76_, lean_object* v_prec_77_){
_start:
{
lean_object* v___y_79_; lean_object* v___y_86_; lean_object* v___y_93_; 
switch(v_x_76_)
{
case 0:
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_unsigned_to_nat(1024u);
v___x_100_ = lean_nat_dec_le(v___x_99_, v_prec_77_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__6, &l_Lean_instReprLocalDeclKind_repr___closed__6_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__6);
v___y_79_ = v___x_101_;
goto v___jp_78_;
}
else
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__7, &l_Lean_instReprLocalDeclKind_repr___closed__7_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__7);
v___y_79_ = v___x_102_;
goto v___jp_78_;
}
}
case 1:
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(1024u);
v___x_104_ = lean_nat_dec_le(v___x_103_, v_prec_77_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__6, &l_Lean_instReprLocalDeclKind_repr___closed__6_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__6);
v___y_86_ = v___x_105_;
goto v___jp_85_;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__7, &l_Lean_instReprLocalDeclKind_repr___closed__7_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__7);
v___y_86_ = v___x_106_;
goto v___jp_85_;
}
}
default: 
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = lean_unsigned_to_nat(1024u);
v___x_108_ = lean_nat_dec_le(v___x_107_, v_prec_77_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__6, &l_Lean_instReprLocalDeclKind_repr___closed__6_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__6);
v___y_93_ = v___x_109_;
goto v___jp_92_;
}
else
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__7, &l_Lean_instReprLocalDeclKind_repr___closed__7_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__7);
v___y_93_ = v___x_110_;
goto v___jp_92_;
}
}
}
v___jp_78_:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_80_ = ((lean_object*)(l_Lean_instReprLocalDeclKind_repr___closed__1));
lean_inc(v___y_79_);
v___x_81_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_81_, 0, v___y_79_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = 0;
v___x_83_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*1, v___x_82_);
v___x_84_ = l_Repr_addAppParen(v___x_83_, v_prec_77_);
return v___x_84_;
}
v___jp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_87_ = ((lean_object*)(l_Lean_instReprLocalDeclKind_repr___closed__3));
lean_inc(v___y_86_);
v___x_88_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_88_, 0, v___y_86_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = 0;
v___x_90_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set_uint8(v___x_90_, sizeof(void*)*1, v___x_89_);
v___x_91_ = l_Repr_addAppParen(v___x_90_, v_prec_77_);
return v___x_91_;
}
v___jp_92_:
{
lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_94_ = ((lean_object*)(l_Lean_instReprLocalDeclKind_repr___closed__5));
lean_inc(v___y_93_);
v___x_95_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_95_, 0, v___y_93_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = 0;
v___x_97_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_97_, 0, v___x_95_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*1, v___x_96_);
v___x_98_ = l_Repr_addAppParen(v___x_97_, v_prec_77_);
return v___x_98_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr___boxed(lean_object* v_x_111_, lean_object* v_prec_112_){
_start:
{
uint8_t v_x_171__boxed_113_; lean_object* v_res_114_; 
v_x_171__boxed_113_ = lean_unbox(v_x_111_);
v_res_114_ = l_Lean_instReprLocalDeclKind_repr(v_x_171__boxed_113_, v_prec_112_);
lean_dec(v_prec_112_);
return v_res_114_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDeclKind_ofNat(lean_object* v_n_117_){
_start:
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_nat_dec_le(v_n_117_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_unsigned_to_nat(1u);
v___x_121_ = lean_nat_dec_le(v_n_117_, v___x_120_);
if (v___x_121_ == 0)
{
uint8_t v___x_122_; 
v___x_122_ = 2;
return v___x_122_;
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 1;
return v___x_123_;
}
}
else
{
uint8_t v___x_124_; 
v___x_124_ = 0;
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ofNat___boxed(lean_object* v_n_125_){
_start:
{
uint8_t v_res_126_; lean_object* v_r_127_; 
v_res_126_ = l_Lean_LocalDeclKind_ofNat(v_n_125_);
lean_dec(v_n_125_);
v_r_127_ = lean_box(v_res_126_);
return v_r_127_;
}
}
LEAN_EXPORT uint8_t l_Lean_instDecidableEqLocalDeclKind(uint8_t v_x_128_, uint8_t v_y_129_){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_130_ = lean_box(v_x_128_);
v___x_131_ = lean_obj_tag_nat(v___x_130_);
lean_dec(v___x_130_);
v___x_132_ = lean_box(v_y_129_);
v___x_133_ = lean_obj_tag_nat(v___x_132_);
lean_dec(v___x_132_);
v___x_134_ = lean_nat_dec_eq(v___x_131_, v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_instDecidableEqLocalDeclKind___boxed(lean_object* v_x_135_, lean_object* v_y_136_){
_start:
{
uint8_t v_x_23__boxed_137_; uint8_t v_y_24__boxed_138_; uint8_t v_res_139_; lean_object* v_r_140_; 
v_x_23__boxed_137_ = lean_unbox(v_x_135_);
v_y_24__boxed_138_ = lean_unbox(v_y_136_);
v_res_139_ = l_Lean_instDecidableEqLocalDeclKind(v_x_23__boxed_137_, v_y_24__boxed_138_);
v_r_140_ = lean_box(v_res_139_);
return v_r_140_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableLocalDeclKind_hash(uint8_t v_x_141_){
_start:
{
switch(v_x_141_)
{
case 0:
{
uint64_t v___x_142_; 
v___x_142_ = 0ULL;
return v___x_142_;
}
case 1:
{
uint64_t v___x_143_; 
v___x_143_ = 1ULL;
return v___x_143_;
}
default: 
{
uint64_t v___x_144_; 
v___x_144_ = 2ULL;
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableLocalDeclKind_hash___boxed(lean_object* v_x_145_){
_start:
{
uint8_t v_x_40__boxed_146_; uint64_t v_res_147_; lean_object* v_r_148_; 
v_x_40__boxed_146_ = lean_unbox(v_x_145_);
v_res_147_ = l_Lean_instHashableLocalDeclKind_hash(v_x_40__boxed_146_);
v_r_148_ = lean_box_uint64(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDeclKind_ofBinderName(lean_object* v_binderName_151_){
_start:
{
uint8_t v___x_152_; 
v___x_152_ = l_Lean_Name_isImplementationDetail(v_binderName_151_);
if (v___x_152_ == 0)
{
uint8_t v___x_153_; 
v___x_153_ = 0;
return v___x_153_;
}
else
{
uint8_t v___x_154_; 
v___x_154_ = 1;
return v___x_154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ofBinderName___boxed(lean_object* v_binderName_155_){
_start:
{
uint8_t v_res_156_; lean_object* v_r_157_; 
v_res_156_ = l_Lean_LocalDeclKind_ofBinderName(v_binderName_155_);
lean_dec(v_binderName_155_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx___impl(lean_object* v_x_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_obj_tag_nat(v_x_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx___impl___boxed(lean_object* v_x_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_LocalDecl_ctorIdx___impl(v_x_160_);
lean_dec_ref(v_x_160_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___redArg(lean_object* v_t_162_, lean_object* v_k_163_){
_start:
{
if (lean_obj_tag(v_t_162_) == 0)
{
lean_object* v_index_164_; lean_object* v_fvarId_165_; lean_object* v_userName_166_; lean_object* v_type_167_; uint8_t v_bi_168_; uint8_t v_kind_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v_index_164_ = lean_ctor_get(v_t_162_, 0);
lean_inc(v_index_164_);
v_fvarId_165_ = lean_ctor_get(v_t_162_, 1);
lean_inc(v_fvarId_165_);
v_userName_166_ = lean_ctor_get(v_t_162_, 2);
lean_inc(v_userName_166_);
v_type_167_ = lean_ctor_get(v_t_162_, 3);
lean_inc_ref(v_type_167_);
v_bi_168_ = lean_ctor_get_uint8(v_t_162_, sizeof(void*)*4);
v_kind_169_ = lean_ctor_get_uint8(v_t_162_, sizeof(void*)*4 + 1);
lean_dec_ref_known(v_t_162_, 4);
v___x_170_ = lean_box(v_bi_168_);
v___x_171_ = lean_box(v_kind_169_);
v___x_172_ = lean_apply_6(v_k_163_, v_index_164_, v_fvarId_165_, v_userName_166_, v_type_167_, v___x_170_, v___x_171_);
return v___x_172_;
}
else
{
lean_object* v_index_173_; lean_object* v_fvarId_174_; lean_object* v_userName_175_; lean_object* v_type_176_; lean_object* v_value_177_; uint8_t v_nondep_178_; uint8_t v_kind_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v_index_173_ = lean_ctor_get(v_t_162_, 0);
lean_inc(v_index_173_);
v_fvarId_174_ = lean_ctor_get(v_t_162_, 1);
lean_inc(v_fvarId_174_);
v_userName_175_ = lean_ctor_get(v_t_162_, 2);
lean_inc(v_userName_175_);
v_type_176_ = lean_ctor_get(v_t_162_, 3);
lean_inc_ref(v_type_176_);
v_value_177_ = lean_ctor_get(v_t_162_, 4);
lean_inc_ref(v_value_177_);
v_nondep_178_ = lean_ctor_get_uint8(v_t_162_, sizeof(void*)*5);
v_kind_179_ = lean_ctor_get_uint8(v_t_162_, sizeof(void*)*5 + 1);
lean_dec_ref_known(v_t_162_, 5);
v___x_180_ = lean_box(v_nondep_178_);
v___x_181_ = lean_box(v_kind_179_);
v___x_182_ = lean_apply_7(v_k_163_, v_index_173_, v_fvarId_174_, v_userName_175_, v_type_176_, v_value_177_, v___x_180_, v___x_181_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim(lean_object* v_motive_183_, lean_object* v_ctorIdx_184_, lean_object* v_t_185_, lean_object* v_h_186_, lean_object* v_k_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_185_, v_k_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___boxed(lean_object* v_motive_189_, lean_object* v_ctorIdx_190_, lean_object* v_t_191_, lean_object* v_h_192_, lean_object* v_k_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_LocalDecl_ctorElim(v_motive_189_, v_ctorIdx_190_, v_t_191_, v_h_192_, v_k_193_);
lean_dec(v_ctorIdx_190_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim___redArg(lean_object* v_t_195_, lean_object* v_cdecl_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_195_, v_cdecl_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim(lean_object* v_motive_198_, lean_object* v_t_199_, lean_object* v_h_200_, lean_object* v_cdecl_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_199_, v_cdecl_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim___redArg(lean_object* v_t_203_, lean_object* v_ldecl_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_203_, v_ldecl_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim(lean_object* v_motive_206_, lean_object* v_t_207_, lean_object* v_h_208_, lean_object* v_ldecl_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_207_, v_ldecl_209_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default___closed__2(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_214_ = lean_box(0);
v___x_215_ = ((lean_object*)(l_Lean_instInhabitedLocalDecl_default___closed__1));
v___x_216_ = l_Lean_Expr_const___override(v___x_215_, v___x_214_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default___closed__3(void){
_start:
{
uint8_t v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_217_ = 0;
v___x_218_ = 0;
v___x_219_ = lean_obj_once(&l_Lean_instInhabitedLocalDecl_default___closed__2, &l_Lean_instInhabitedLocalDecl_default___closed__2_once, _init_l_Lean_instInhabitedLocalDecl_default___closed__2);
v___x_220_ = lean_box(0);
v___x_221_ = lean_unsigned_to_nat(0u);
v___x_222_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_220_);
lean_ctor_set(v___x_222_, 2, v___x_220_);
lean_ctor_set(v___x_222_, 3, v___x_219_);
lean_ctor_set_uint8(v___x_222_, sizeof(void*)*4, v___x_218_);
lean_ctor_set_uint8(v___x_222_, sizeof(void*)*4 + 1, v___x_217_);
return v___x_222_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default(void){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&l_Lean_instInhabitedLocalDecl_default___closed__3, &l_Lean_instInhabitedLocalDecl_default___closed__3_once, _init_l_Lean_instInhabitedLocalDecl_default___closed__3);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl(void){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_instInhabitedLocalDecl_default;
return v___x_224_;
}
}
LEAN_EXPORT lean_object* lean_mk_local_decl(lean_object* v_index_225_, lean_object* v_fvarId_226_, lean_object* v_userName_227_, lean_object* v_type_228_, uint8_t v_bi_229_){
_start:
{
uint8_t v___x_230_; lean_object* v___x_231_; 
v___x_230_ = 0;
v___x_231_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_231_, 0, v_index_225_);
lean_ctor_set(v___x_231_, 1, v_fvarId_226_);
lean_ctor_set(v___x_231_, 2, v_userName_227_);
lean_ctor_set(v___x_231_, 3, v_type_228_);
lean_ctor_set_uint8(v___x_231_, sizeof(void*)*4, v_bi_229_);
lean_ctor_set_uint8(v___x_231_, sizeof(void*)*4 + 1, v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLocalDeclEx___boxed(lean_object* v_index_232_, lean_object* v_fvarId_233_, lean_object* v_userName_234_, lean_object* v_type_235_, lean_object* v_bi_236_){
_start:
{
uint8_t v_bi_boxed_237_; lean_object* v_res_238_; 
v_bi_boxed_237_ = lean_unbox(v_bi_236_);
v_res_238_ = lean_mk_local_decl(v_index_232_, v_fvarId_233_, v_userName_234_, v_type_235_, v_bi_boxed_237_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* lean_mk_let_decl(lean_object* v_index_239_, lean_object* v_fvarId_240_, lean_object* v_userName_241_, lean_object* v_type_242_, lean_object* v_val_243_){
_start:
{
uint8_t v___x_244_; uint8_t v___x_245_; lean_object* v___x_246_; 
v___x_244_ = 0;
v___x_245_ = 0;
v___x_246_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v___x_246_, 0, v_index_239_);
lean_ctor_set(v___x_246_, 1, v_fvarId_240_);
lean_ctor_set(v___x_246_, 2, v_userName_241_);
lean_ctor_set(v___x_246_, 3, v_type_242_);
lean_ctor_set(v___x_246_, 4, v_val_243_);
lean_ctor_set_uint8(v___x_246_, sizeof(void*)*5, v___x_244_);
lean_ctor_set_uint8(v___x_246_, sizeof(void*)*5 + 1, v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT uint8_t lean_local_decl_binder_info(lean_object* v_x_247_){
_start:
{
if (lean_obj_tag(v_x_247_) == 0)
{
uint8_t v_bi_248_; 
v_bi_248_ = lean_ctor_get_uint8(v_x_247_, sizeof(void*)*4);
lean_dec_ref_known(v_x_247_, 4);
return v_bi_248_;
}
else
{
uint8_t v___x_249_; 
lean_dec_ref(v_x_247_);
v___x_249_ = 0;
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfoEx___boxed(lean_object* v_x_250_){
_start:
{
uint8_t v_res_251_; lean_object* v_r_252_; 
v_res_251_ = lean_local_decl_binder_info(v_x_250_);
v_r_252_ = lean_box(v_res_251_);
return v_r_252_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isLet(lean_object* v_x_253_, uint8_t v_x_254_){
_start:
{
if (lean_obj_tag(v_x_253_) == 0)
{
uint8_t v___x_255_; 
v___x_255_ = 0;
return v___x_255_;
}
else
{
uint8_t v_nondep_256_; 
v_nondep_256_ = lean_ctor_get_uint8(v_x_253_, sizeof(void*)*5);
if (v_nondep_256_ == 0)
{
uint8_t v___x_257_; 
v___x_257_ = 1;
return v___x_257_;
}
else
{
return v_x_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isLet___boxed(lean_object* v_x_258_, lean_object* v_x_259_){
_start:
{
uint8_t v_x_53__boxed_260_; uint8_t v_res_261_; lean_object* v_r_262_; 
v_x_53__boxed_260_ = lean_unbox(v_x_259_);
v_res_261_ = l_Lean_LocalDecl_isLet(v_x_258_, v_x_53__boxed_260_);
lean_dec_ref(v_x_258_);
v_r_262_ = lean_box(v_res_261_);
return v_r_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index(lean_object* v_x_263_){
_start:
{
lean_object* v_index_264_; 
v_index_264_ = lean_ctor_get(v_x_263_, 0);
lean_inc(v_index_264_);
return v_index_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index___boxed(lean_object* v_x_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_LocalDecl_index(v_x_265_);
lean_dec_ref(v_x_265_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setIndex(lean_object* v_x_267_, lean_object* v_x_268_){
_start:
{
if (lean_obj_tag(v_x_267_) == 0)
{
lean_object* v_fvarId_269_; lean_object* v_userName_270_; lean_object* v_type_271_; uint8_t v_bi_272_; uint8_t v_kind_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
v_fvarId_269_ = lean_ctor_get(v_x_267_, 1);
v_userName_270_ = lean_ctor_get(v_x_267_, 2);
v_type_271_ = lean_ctor_get(v_x_267_, 3);
v_bi_272_ = lean_ctor_get_uint8(v_x_267_, sizeof(void*)*4);
v_kind_273_ = lean_ctor_get_uint8(v_x_267_, sizeof(void*)*4 + 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v_x_267_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; 
v_unused_281_ = lean_ctor_get(v_x_267_, 0);
lean_dec(v_unused_281_);
v___x_275_ = v_x_267_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_type_271_);
lean_inc(v_userName_270_);
lean_inc(v_fvarId_269_);
lean_dec(v_x_267_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v_x_268_);
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_x_268_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_fvarId_269_);
lean_ctor_set(v_reuseFailAlloc_279_, 2, v_userName_270_);
lean_ctor_set(v_reuseFailAlloc_279_, 3, v_type_271_);
lean_ctor_set_uint8(v_reuseFailAlloc_279_, sizeof(void*)*4, v_bi_272_);
lean_ctor_set_uint8(v_reuseFailAlloc_279_, sizeof(void*)*4 + 1, v_kind_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
else
{
lean_object* v_fvarId_282_; lean_object* v_userName_283_; lean_object* v_type_284_; lean_object* v_value_285_; uint8_t v_nondep_286_; uint8_t v_kind_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
v_fvarId_282_ = lean_ctor_get(v_x_267_, 1);
v_userName_283_ = lean_ctor_get(v_x_267_, 2);
v_type_284_ = lean_ctor_get(v_x_267_, 3);
v_value_285_ = lean_ctor_get(v_x_267_, 4);
v_nondep_286_ = lean_ctor_get_uint8(v_x_267_, sizeof(void*)*5);
v_kind_287_ = lean_ctor_get_uint8(v_x_267_, sizeof(void*)*5 + 1);
v_isSharedCheck_294_ = !lean_is_exclusive(v_x_267_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; 
v_unused_295_ = lean_ctor_get(v_x_267_, 0);
lean_dec(v_unused_295_);
v___x_289_ = v_x_267_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_value_285_);
lean_inc(v_type_284_);
lean_inc(v_userName_283_);
lean_inc(v_fvarId_282_);
lean_dec(v_x_267_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v_x_268_);
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_x_268_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_fvarId_282_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v_userName_283_);
lean_ctor_set(v_reuseFailAlloc_293_, 3, v_type_284_);
lean_ctor_set(v_reuseFailAlloc_293_, 4, v_value_285_);
lean_ctor_set_uint8(v_reuseFailAlloc_293_, sizeof(void*)*5, v_nondep_286_);
lean_ctor_set_uint8(v_reuseFailAlloc_293_, sizeof(void*)*5 + 1, v_kind_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId(lean_object* v_x_296_){
_start:
{
lean_object* v_fvarId_297_; 
v_fvarId_297_ = lean_ctor_get(v_x_296_, 1);
lean_inc(v_fvarId_297_);
return v_fvarId_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId___boxed(lean_object* v_x_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_LocalDecl_fvarId(v_x_298_);
lean_dec_ref(v_x_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName(lean_object* v_x_300_){
_start:
{
lean_object* v_userName_301_; 
v_userName_301_ = lean_ctor_get(v_x_300_, 2);
lean_inc(v_userName_301_);
return v_userName_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName___boxed(lean_object* v_x_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_LocalDecl_userName(v_x_302_);
lean_dec_ref(v_x_302_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type(lean_object* v_x_304_){
_start:
{
lean_object* v_type_305_; 
v_type_305_ = lean_ctor_get(v_x_304_, 3);
lean_inc_ref(v_type_305_);
return v_type_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type___boxed(lean_object* v_x_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_LocalDecl_type(v_x_306_);
lean_dec_ref(v_x_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setType(lean_object* v_x_308_, lean_object* v_x_309_){
_start:
{
if (lean_obj_tag(v_x_308_) == 0)
{
lean_object* v_index_310_; lean_object* v_fvarId_311_; lean_object* v_userName_312_; uint8_t v_bi_313_; uint8_t v_kind_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
v_index_310_ = lean_ctor_get(v_x_308_, 0);
v_fvarId_311_ = lean_ctor_get(v_x_308_, 1);
v_userName_312_ = lean_ctor_get(v_x_308_, 2);
v_bi_313_ = lean_ctor_get_uint8(v_x_308_, sizeof(void*)*4);
v_kind_314_ = lean_ctor_get_uint8(v_x_308_, sizeof(void*)*4 + 1);
v_isSharedCheck_321_ = !lean_is_exclusive(v_x_308_);
if (v_isSharedCheck_321_ == 0)
{
lean_object* v_unused_322_; 
v_unused_322_ = lean_ctor_get(v_x_308_, 3);
lean_dec(v_unused_322_);
v___x_316_ = v_x_308_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_userName_312_);
lean_inc(v_fvarId_311_);
lean_inc(v_index_310_);
lean_dec(v_x_308_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 3, v_x_309_);
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_index_310_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_fvarId_311_);
lean_ctor_set(v_reuseFailAlloc_320_, 2, v_userName_312_);
lean_ctor_set(v_reuseFailAlloc_320_, 3, v_x_309_);
lean_ctor_set_uint8(v_reuseFailAlloc_320_, sizeof(void*)*4, v_bi_313_);
lean_ctor_set_uint8(v_reuseFailAlloc_320_, sizeof(void*)*4 + 1, v_kind_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
else
{
lean_object* v_index_323_; lean_object* v_fvarId_324_; lean_object* v_userName_325_; lean_object* v_value_326_; uint8_t v_nondep_327_; uint8_t v_kind_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
v_index_323_ = lean_ctor_get(v_x_308_, 0);
v_fvarId_324_ = lean_ctor_get(v_x_308_, 1);
v_userName_325_ = lean_ctor_get(v_x_308_, 2);
v_value_326_ = lean_ctor_get(v_x_308_, 4);
v_nondep_327_ = lean_ctor_get_uint8(v_x_308_, sizeof(void*)*5);
v_kind_328_ = lean_ctor_get_uint8(v_x_308_, sizeof(void*)*5 + 1);
v_isSharedCheck_335_ = !lean_is_exclusive(v_x_308_);
if (v_isSharedCheck_335_ == 0)
{
lean_object* v_unused_336_; 
v_unused_336_ = lean_ctor_get(v_x_308_, 3);
lean_dec(v_unused_336_);
v___x_330_ = v_x_308_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_value_326_);
lean_inc(v_userName_325_);
lean_inc(v_fvarId_324_);
lean_inc(v_index_323_);
lean_dec(v_x_308_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 3, v_x_309_);
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_index_323_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_fvarId_324_);
lean_ctor_set(v_reuseFailAlloc_334_, 2, v_userName_325_);
lean_ctor_set(v_reuseFailAlloc_334_, 3, v_x_309_);
lean_ctor_set(v_reuseFailAlloc_334_, 4, v_value_326_);
lean_ctor_set_uint8(v_reuseFailAlloc_334_, sizeof(void*)*5, v_nondep_327_);
lean_ctor_set_uint8(v_reuseFailAlloc_334_, sizeof(void*)*5 + 1, v_kind_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_binderInfo(lean_object* v_x_337_){
_start:
{
if (lean_obj_tag(v_x_337_) == 0)
{
uint8_t v_bi_338_; 
v_bi_338_ = lean_ctor_get_uint8(v_x_337_, sizeof(void*)*4);
return v_bi_338_;
}
else
{
uint8_t v___x_339_; 
v___x_339_ = 0;
return v___x_339_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfo___boxed(lean_object* v_x_340_){
_start:
{
uint8_t v_res_341_; lean_object* v_r_342_; 
v_res_341_ = l_Lean_LocalDecl_binderInfo(v_x_340_);
lean_dec_ref(v_x_340_);
v_r_342_ = lean_box(v_res_341_);
return v_r_342_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_kind(lean_object* v_x_343_){
_start:
{
if (lean_obj_tag(v_x_343_) == 0)
{
uint8_t v_kind_344_; 
v_kind_344_ = lean_ctor_get_uint8(v_x_343_, sizeof(void*)*4 + 1);
return v_kind_344_;
}
else
{
uint8_t v_kind_345_; 
v_kind_345_ = lean_ctor_get_uint8(v_x_343_, sizeof(void*)*5 + 1);
return v_kind_345_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_kind___boxed(lean_object* v_x_346_){
_start:
{
uint8_t v_res_347_; lean_object* v_r_348_; 
v_res_347_ = l_Lean_LocalDecl_kind(v_x_346_);
lean_dec_ref(v_x_346_);
v_r_348_ = lean_box(v_res_347_);
return v_r_348_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object* v_d_349_){
_start:
{
uint8_t v___y_351_; 
if (lean_obj_tag(v_d_349_) == 0)
{
uint8_t v_kind_354_; 
v_kind_354_ = lean_ctor_get_uint8(v_d_349_, sizeof(void*)*4 + 1);
v___y_351_ = v_kind_354_;
goto v___jp_350_;
}
else
{
uint8_t v_kind_355_; 
v_kind_355_ = lean_ctor_get_uint8(v_d_349_, sizeof(void*)*5 + 1);
v___y_351_ = v_kind_355_;
goto v___jp_350_;
}
v___jp_350_:
{
uint8_t v___x_352_; uint8_t v___x_353_; 
v___x_352_ = 2;
v___x_353_ = l_Lean_instDecidableEqLocalDeclKind(v___y_351_, v___x_352_);
return v___x_353_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isAuxDecl___boxed(lean_object* v_d_356_){
_start:
{
uint8_t v_res_357_; lean_object* v_r_358_; 
v_res_357_ = l_Lean_LocalDecl_isAuxDecl(v_d_356_);
lean_dec_ref(v_d_356_);
v_r_358_ = lean_box(v_res_357_);
return v_r_358_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object* v_d_359_){
_start:
{
uint8_t v___y_361_; 
if (lean_obj_tag(v_d_359_) == 0)
{
uint8_t v_kind_368_; 
v_kind_368_ = lean_ctor_get_uint8(v_d_359_, sizeof(void*)*4 + 1);
v___y_361_ = v_kind_368_;
goto v___jp_360_;
}
else
{
uint8_t v_kind_369_; 
v_kind_369_ = lean_ctor_get_uint8(v_d_359_, sizeof(void*)*5 + 1);
v___y_361_ = v_kind_369_;
goto v___jp_360_;
}
v___jp_360_:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_362_ = lean_box(v___y_361_);
v___x_363_ = lean_obj_tag_nat(v___x_362_);
lean_dec(v___x_362_);
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = lean_nat_dec_eq(v___x_363_, v___x_364_);
if (v___x_365_ == 0)
{
uint8_t v___x_366_; 
v___x_366_ = 1;
return v___x_366_;
}
else
{
uint8_t v___x_367_; 
v___x_367_ = 0;
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isImplementationDetail___boxed(lean_object* v_d_370_){
_start:
{
uint8_t v_res_371_; lean_object* v_r_372_; 
v_res_371_ = l_Lean_LocalDecl_isImplementationDetail(v_d_370_);
lean_dec_ref(v_d_370_);
v_r_372_ = lean_box(v_res_371_);
return v_r_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f(lean_object* v_x_373_, uint8_t v_x_374_){
_start:
{
if (lean_obj_tag(v_x_373_) == 1)
{
uint8_t v_nondep_375_; 
v_nondep_375_ = lean_ctor_get_uint8(v_x_373_, sizeof(void*)*5);
if (v_nondep_375_ == 0)
{
lean_object* v_value_376_; lean_object* v___x_377_; 
v_value_376_ = lean_ctor_get(v_x_373_, 4);
lean_inc_ref(v_value_376_);
v___x_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_377_, 0, v_value_376_);
return v___x_377_;
}
else
{
if (v_x_374_ == 1)
{
lean_object* v_value_378_; lean_object* v___x_379_; 
v_value_378_ = lean_ctor_get(v_x_373_, 4);
lean_inc_ref(v_value_378_);
v___x_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_379_, 0, v_value_378_);
return v___x_379_;
}
else
{
lean_object* v___x_380_; 
v___x_380_ = lean_box(0);
return v___x_380_;
}
}
}
else
{
lean_object* v___x_381_; 
v___x_381_ = lean_box(0);
return v___x_381_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f___boxed(lean_object* v_x_382_, lean_object* v_x_383_){
_start:
{
uint8_t v_x_47__boxed_384_; lean_object* v_res_385_; 
v_x_47__boxed_384_ = lean_unbox(v_x_383_);
v_res_385_ = l_Lean_LocalDecl_value_x3f(v_x_382_, v_x_47__boxed_384_);
lean_dec_ref(v_x_382_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_value_spec__0(lean_object* v_msg_386_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = l_Lean_instInhabitedExpr;
v___x_388_ = lean_panic_fn_borrowed(v___x_387_, v_msg_386_);
return v___x_388_;
}
}
static lean_object* _init_l_Lean_LocalDecl_value___closed__3(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_392_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__2));
v___x_393_ = lean_unsigned_to_nat(54u);
v___x_394_ = lean_unsigned_to_nat(183u);
v___x_395_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__1));
v___x_396_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_397_ = l_mkPanicMessageWithDecl(v___x_396_, v___x_395_, v___x_394_, v___x_393_, v___x_392_);
return v___x_397_;
}
}
static lean_object* _init_l_Lean_LocalDecl_value___closed__5(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_399_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__4));
v___x_400_ = lean_unsigned_to_nat(54u);
v___x_401_ = lean_unsigned_to_nat(186u);
v___x_402_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__1));
v___x_403_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_404_ = l_mkPanicMessageWithDecl(v___x_403_, v___x_402_, v___x_401_, v___x_400_, v___x_399_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value(lean_object* v_x_405_, uint8_t v_x_406_){
_start:
{
if (lean_obj_tag(v_x_405_) == 0)
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_obj_once(&l_Lean_LocalDecl_value___closed__3, &l_Lean_LocalDecl_value___closed__3_once, _init_l_Lean_LocalDecl_value___closed__3);
v___x_408_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_407_);
return v___x_408_;
}
else
{
uint8_t v_nondep_409_; 
v_nondep_409_ = lean_ctor_get_uint8(v_x_405_, sizeof(void*)*5);
if (v_nondep_409_ == 0)
{
lean_object* v_value_410_; 
v_value_410_ = lean_ctor_get(v_x_405_, 4);
lean_inc_ref(v_value_410_);
return v_value_410_;
}
else
{
if (v_x_406_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_obj_once(&l_Lean_LocalDecl_value___closed__5, &l_Lean_LocalDecl_value___closed__5_once, _init_l_Lean_LocalDecl_value___closed__5);
v___x_412_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_411_);
return v___x_412_;
}
else
{
lean_object* v_value_413_; 
v_value_413_ = lean_ctor_get(v_x_405_, 4);
lean_inc_ref(v_value_413_);
return v_value_413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value___boxed(lean_object* v_x_414_, lean_object* v_x_415_){
_start:
{
uint8_t v_x_143__boxed_416_; lean_object* v_res_417_; 
v_x_143__boxed_416_ = lean_unbox(v_x_415_);
v_res_417_ = l_Lean_LocalDecl_value(v_x_414_, v_x_143__boxed_416_);
lean_dec_ref(v_x_414_);
return v_res_417_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasValue(lean_object* v_x_418_, uint8_t v_x_419_){
_start:
{
if (lean_obj_tag(v_x_418_) == 0)
{
uint8_t v___x_420_; 
v___x_420_ = 0;
return v___x_420_;
}
else
{
uint8_t v_nondep_421_; 
v_nondep_421_ = lean_ctor_get_uint8(v_x_418_, sizeof(void*)*5);
if (v_nondep_421_ == 0)
{
uint8_t v___x_422_; 
v___x_422_ = 1;
return v___x_422_;
}
else
{
return v_x_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasValue___boxed(lean_object* v_x_423_, lean_object* v_x_424_){
_start:
{
uint8_t v_x_72__boxed_425_; uint8_t v_res_426_; lean_object* v_r_427_; 
v_x_72__boxed_425_ = lean_unbox(v_x_424_);
v_res_426_ = l_Lean_LocalDecl_hasValue(v_x_423_, v_x_72__boxed_425_);
lean_dec_ref(v_x_423_);
v_r_427_ = lean_box(v_res_426_);
return v_r_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setValue(lean_object* v_x_428_, lean_object* v_x_429_){
_start:
{
if (lean_obj_tag(v_x_428_) == 1)
{
lean_object* v_index_430_; lean_object* v_fvarId_431_; lean_object* v_userName_432_; lean_object* v_type_433_; uint8_t v_nondep_434_; uint8_t v_kind_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
v_index_430_ = lean_ctor_get(v_x_428_, 0);
v_fvarId_431_ = lean_ctor_get(v_x_428_, 1);
v_userName_432_ = lean_ctor_get(v_x_428_, 2);
v_type_433_ = lean_ctor_get(v_x_428_, 3);
v_nondep_434_ = lean_ctor_get_uint8(v_x_428_, sizeof(void*)*5);
v_kind_435_ = lean_ctor_get_uint8(v_x_428_, sizeof(void*)*5 + 1);
v_isSharedCheck_442_ = !lean_is_exclusive(v_x_428_);
if (v_isSharedCheck_442_ == 0)
{
lean_object* v_unused_443_; 
v_unused_443_ = lean_ctor_get(v_x_428_, 4);
lean_dec(v_unused_443_);
v___x_437_ = v_x_428_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_type_433_);
lean_inc(v_userName_432_);
lean_inc(v_fvarId_431_);
lean_inc(v_index_430_);
lean_dec(v_x_428_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 4, v_x_429_);
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_index_430_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_fvarId_431_);
lean_ctor_set(v_reuseFailAlloc_441_, 2, v_userName_432_);
lean_ctor_set(v_reuseFailAlloc_441_, 3, v_type_433_);
lean_ctor_set(v_reuseFailAlloc_441_, 4, v_x_429_);
lean_ctor_set_uint8(v_reuseFailAlloc_441_, sizeof(void*)*5, v_nondep_434_);
lean_ctor_set_uint8(v_reuseFailAlloc_441_, sizeof(void*)*5 + 1, v_kind_435_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
else
{
lean_dec_ref(v_x_429_);
return v_x_428_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep(lean_object* v_x_444_, uint8_t v_x_445_){
_start:
{
if (lean_obj_tag(v_x_444_) == 1)
{
lean_object* v_index_446_; lean_object* v_fvarId_447_; lean_object* v_userName_448_; lean_object* v_type_449_; lean_object* v_value_450_; uint8_t v_kind_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_index_446_ = lean_ctor_get(v_x_444_, 0);
v_fvarId_447_ = lean_ctor_get(v_x_444_, 1);
v_userName_448_ = lean_ctor_get(v_x_444_, 2);
v_type_449_ = lean_ctor_get(v_x_444_, 3);
v_value_450_ = lean_ctor_get(v_x_444_, 4);
v_kind_451_ = lean_ctor_get_uint8(v_x_444_, sizeof(void*)*5 + 1);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_444_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v_x_444_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_value_450_);
lean_inc(v_type_449_);
lean_inc(v_userName_448_);
lean_inc(v_fvarId_447_);
lean_inc(v_index_446_);
lean_dec(v_x_444_);
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
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_index_446_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_fvarId_447_);
lean_ctor_set(v_reuseFailAlloc_457_, 2, v_userName_448_);
lean_ctor_set(v_reuseFailAlloc_457_, 3, v_type_449_);
lean_ctor_set(v_reuseFailAlloc_457_, 4, v_value_450_);
lean_ctor_set_uint8(v_reuseFailAlloc_457_, sizeof(void*)*5 + 1, v_kind_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
lean_ctor_set_uint8(v___x_456_, sizeof(void*)*5, v_x_445_);
return v___x_456_;
}
}
}
else
{
return v_x_444_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep___boxed(lean_object* v_x_459_, lean_object* v_x_460_){
_start:
{
uint8_t v_x_23__boxed_461_; lean_object* v_res_462_; 
v_x_23__boxed_461_ = lean_unbox(v_x_460_);
v_res_462_ = l_Lean_LocalDecl_setNondep(v_x_459_, v_x_23__boxed_461_);
return v_res_462_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isNondep(lean_object* v_x_463_){
_start:
{
if (lean_obj_tag(v_x_463_) == 1)
{
uint8_t v_nondep_464_; 
v_nondep_464_ = lean_ctor_get_uint8(v_x_463_, sizeof(void*)*5);
return v_nondep_464_;
}
else
{
uint8_t v___x_465_; 
v___x_465_ = 0;
return v___x_465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isNondep___boxed(lean_object* v_x_466_){
_start:
{
uint8_t v_res_467_; lean_object* v_r_468_; 
v_res_467_ = l_Lean_LocalDecl_isNondep(v_x_466_);
lean_dec_ref(v_x_466_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setUserName(lean_object* v_x_469_, lean_object* v_x_470_){
_start:
{
if (lean_obj_tag(v_x_469_) == 0)
{
lean_object* v_index_471_; lean_object* v_fvarId_472_; lean_object* v_type_473_; uint8_t v_bi_474_; uint8_t v_kind_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
v_index_471_ = lean_ctor_get(v_x_469_, 0);
v_fvarId_472_ = lean_ctor_get(v_x_469_, 1);
v_type_473_ = lean_ctor_get(v_x_469_, 3);
v_bi_474_ = lean_ctor_get_uint8(v_x_469_, sizeof(void*)*4);
v_kind_475_ = lean_ctor_get_uint8(v_x_469_, sizeof(void*)*4 + 1);
v_isSharedCheck_482_ = !lean_is_exclusive(v_x_469_);
if (v_isSharedCheck_482_ == 0)
{
lean_object* v_unused_483_; 
v_unused_483_ = lean_ctor_get(v_x_469_, 2);
lean_dec(v_unused_483_);
v___x_477_ = v_x_469_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_type_473_);
lean_inc(v_fvarId_472_);
lean_inc(v_index_471_);
lean_dec(v_x_469_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 2, v_x_470_);
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_index_471_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_fvarId_472_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_x_470_);
lean_ctor_set(v_reuseFailAlloc_481_, 3, v_type_473_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*4, v_bi_474_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*4 + 1, v_kind_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
else
{
lean_object* v_index_484_; lean_object* v_fvarId_485_; lean_object* v_type_486_; lean_object* v_value_487_; uint8_t v_nondep_488_; uint8_t v_kind_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
v_index_484_ = lean_ctor_get(v_x_469_, 0);
v_fvarId_485_ = lean_ctor_get(v_x_469_, 1);
v_type_486_ = lean_ctor_get(v_x_469_, 3);
v_value_487_ = lean_ctor_get(v_x_469_, 4);
v_nondep_488_ = lean_ctor_get_uint8(v_x_469_, sizeof(void*)*5);
v_kind_489_ = lean_ctor_get_uint8(v_x_469_, sizeof(void*)*5 + 1);
v_isSharedCheck_496_ = !lean_is_exclusive(v_x_469_);
if (v_isSharedCheck_496_ == 0)
{
lean_object* v_unused_497_; 
v_unused_497_ = lean_ctor_get(v_x_469_, 2);
lean_dec(v_unused_497_);
v___x_491_ = v_x_469_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_value_487_);
lean_inc(v_type_486_);
lean_inc(v_fvarId_485_);
lean_inc(v_index_484_);
lean_dec(v_x_469_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 2, v_x_470_);
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_index_484_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_fvarId_485_);
lean_ctor_set(v_reuseFailAlloc_495_, 2, v_x_470_);
lean_ctor_set(v_reuseFailAlloc_495_, 3, v_type_486_);
lean_ctor_set(v_reuseFailAlloc_495_, 4, v_value_487_);
lean_ctor_set_uint8(v_reuseFailAlloc_495_, sizeof(void*)*5, v_nondep_488_);
lean_ctor_set_uint8(v_reuseFailAlloc_495_, sizeof(void*)*5 + 1, v_kind_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(lean_object* v_msg_498_){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = l_Lean_instInhabitedLocalDecl_default;
v___x_500_ = lean_panic_fn_borrowed(v___x_499_, v_msg_498_);
return v___x_500_;
}
}
static lean_object* _init_l_Lean_LocalDecl_setBinderInfo___closed__2(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_503_ = ((lean_object*)(l_Lean_LocalDecl_setBinderInfo___closed__1));
v___x_504_ = lean_unsigned_to_nat(38u);
v___x_505_ = lean_unsigned_to_nat(248u);
v___x_506_ = ((lean_object*)(l_Lean_LocalDecl_setBinderInfo___closed__0));
v___x_507_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_508_ = l_mkPanicMessageWithDecl(v___x_507_, v___x_506_, v___x_505_, v___x_504_, v___x_503_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo(lean_object* v_x_509_, uint8_t v_x_510_){
_start:
{
if (lean_obj_tag(v_x_509_) == 0)
{
lean_object* v_index_511_; lean_object* v_fvarId_512_; lean_object* v_userName_513_; lean_object* v_type_514_; uint8_t v_kind_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
v_index_511_ = lean_ctor_get(v_x_509_, 0);
v_fvarId_512_ = lean_ctor_get(v_x_509_, 1);
v_userName_513_ = lean_ctor_get(v_x_509_, 2);
v_type_514_ = lean_ctor_get(v_x_509_, 3);
v_kind_515_ = lean_ctor_get_uint8(v_x_509_, sizeof(void*)*4 + 1);
v_isSharedCheck_522_ = !lean_is_exclusive(v_x_509_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v_x_509_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_type_514_);
lean_inc(v_userName_513_);
lean_inc(v_fvarId_512_);
lean_inc(v_index_511_);
lean_dec(v_x_509_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_index_511_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v_fvarId_512_);
lean_ctor_set(v_reuseFailAlloc_521_, 2, v_userName_513_);
lean_ctor_set(v_reuseFailAlloc_521_, 3, v_type_514_);
lean_ctor_set_uint8(v_reuseFailAlloc_521_, sizeof(void*)*4 + 1, v_kind_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
lean_ctor_set_uint8(v___x_520_, sizeof(void*)*4, v_x_510_);
return v___x_520_;
}
}
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; 
lean_dec_ref_known(v_x_509_, 5);
v___x_523_ = lean_obj_once(&l_Lean_LocalDecl_setBinderInfo___closed__2, &l_Lean_LocalDecl_setBinderInfo___closed__2_once, _init_l_Lean_LocalDecl_setBinderInfo___closed__2);
v___x_524_ = l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(v___x_523_);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo___boxed(lean_object* v_x_525_, lean_object* v_x_526_){
_start:
{
uint8_t v_x_84__boxed_527_; lean_object* v_res_528_; 
v_x_84__boxed_527_ = lean_unbox(v_x_526_);
v_res_528_ = l_Lean_LocalDecl_setBinderInfo(v_x_525_, v_x_84__boxed_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_toExpr(lean_object* v_decl_529_){
_start:
{
lean_object* v_fvarId_530_; lean_object* v___x_531_; 
v_fvarId_530_ = lean_ctor_get(v_decl_529_, 1);
lean_inc(v_fvarId_530_);
lean_dec_ref(v_decl_529_);
v___x_531_ = l_Lean_mkFVar(v_fvarId_530_);
return v___x_531_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasExprMVar(lean_object* v_x_532_){
_start:
{
if (lean_obj_tag(v_x_532_) == 0)
{
lean_object* v_type_533_; uint8_t v___x_534_; 
v_type_533_ = lean_ctor_get(v_x_532_, 3);
v___x_534_ = l_Lean_Expr_hasExprMVar(v_type_533_);
return v___x_534_;
}
else
{
lean_object* v_type_535_; lean_object* v_value_536_; uint8_t v___x_537_; 
v_type_535_ = lean_ctor_get(v_x_532_, 3);
v_value_536_ = lean_ctor_get(v_x_532_, 4);
v___x_537_ = l_Lean_Expr_hasExprMVar(v_type_535_);
if (v___x_537_ == 0)
{
uint8_t v___x_538_; 
v___x_538_ = l_Lean_Expr_hasExprMVar(v_value_536_);
return v___x_538_;
}
else
{
return v___x_537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasExprMVar___boxed(lean_object* v_x_539_){
_start:
{
uint8_t v_res_540_; lean_object* v_r_541_; 
v_res_540_ = l_Lean_LocalDecl_hasExprMVar(v_x_539_);
lean_dec_ref(v_x_539_);
v_r_541_ = lean_box(v_res_540_);
return v_r_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind(lean_object* v_x_542_, uint8_t v_x_543_){
_start:
{
if (lean_obj_tag(v_x_542_) == 0)
{
lean_object* v_index_544_; lean_object* v_fvarId_545_; lean_object* v_userName_546_; lean_object* v_type_547_; uint8_t v_bi_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
v_index_544_ = lean_ctor_get(v_x_542_, 0);
v_fvarId_545_ = lean_ctor_get(v_x_542_, 1);
v_userName_546_ = lean_ctor_get(v_x_542_, 2);
v_type_547_ = lean_ctor_get(v_x_542_, 3);
v_bi_548_ = lean_ctor_get_uint8(v_x_542_, sizeof(void*)*4);
v_isSharedCheck_555_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v_x_542_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_type_547_);
lean_inc(v_userName_546_);
lean_inc(v_fvarId_545_);
lean_inc(v_index_544_);
lean_dec(v_x_542_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_index_544_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_fvarId_545_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_userName_546_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v_type_547_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, sizeof(void*)*4, v_bi_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*4 + 1, v_x_543_);
return v___x_553_;
}
}
}
else
{
lean_object* v_index_556_; lean_object* v_fvarId_557_; lean_object* v_userName_558_; lean_object* v_type_559_; lean_object* v_value_560_; uint8_t v_nondep_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
v_index_556_ = lean_ctor_get(v_x_542_, 0);
v_fvarId_557_ = lean_ctor_get(v_x_542_, 1);
v_userName_558_ = lean_ctor_get(v_x_542_, 2);
v_type_559_ = lean_ctor_get(v_x_542_, 3);
v_value_560_ = lean_ctor_get(v_x_542_, 4);
v_nondep_561_ = lean_ctor_get_uint8(v_x_542_, sizeof(void*)*5);
v_isSharedCheck_568_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v_x_542_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_value_560_);
lean_inc(v_type_559_);
lean_inc(v_userName_558_);
lean_inc(v_fvarId_557_);
lean_inc(v_index_556_);
lean_dec(v_x_542_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_index_556_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v_fvarId_557_);
lean_ctor_set(v_reuseFailAlloc_567_, 2, v_userName_558_);
lean_ctor_set(v_reuseFailAlloc_567_, 3, v_type_559_);
lean_ctor_set(v_reuseFailAlloc_567_, 4, v_value_560_);
lean_ctor_set_uint8(v_reuseFailAlloc_567_, sizeof(void*)*5, v_nondep_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
lean_ctor_set_uint8(v___x_566_, sizeof(void*)*5 + 1, v_x_543_);
return v___x_566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind___boxed(lean_object* v_x_569_, lean_object* v_x_570_){
_start:
{
uint8_t v_x_31__boxed_571_; lean_object* v_res_572_; 
v_x_31__boxed_571_ = lean_unbox(v_x_570_);
v_res_572_ = l_Lean_LocalDecl_setKind(v_x_569_, v_x_31__boxed_571_);
return v_res_572_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__0(void){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_573_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__1(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__0, &l_Lean_instInhabitedLocalContext_default___closed__0_once, _init_l_Lean_instInhabitedLocalContext_default___closed__0);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__2(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_576_ = lean_unsigned_to_nat(32u);
v___x_577_ = lean_mk_empty_array_with_capacity(v___x_576_);
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
return v___x_578_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__3(void){
_start:
{
size_t v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_579_ = ((size_t)5ULL);
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = lean_unsigned_to_nat(32u);
v___x_582_ = lean_mk_empty_array_with_capacity(v___x_581_);
v___x_583_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__2, &l_Lean_instInhabitedLocalContext_default___closed__2_once, _init_l_Lean_instInhabitedLocalContext_default___closed__2);
v___x_584_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set(v___x_584_, 1, v___x_582_);
lean_ctor_set(v___x_584_, 2, v___x_580_);
lean_ctor_set(v___x_584_, 3, v___x_580_);
lean_ctor_set_usize(v___x_584_, 4, v___x_579_);
return v___x_584_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__4(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_585_ = lean_box(1);
v___x_586_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__3, &l_Lean_instInhabitedLocalContext_default___closed__3_once, _init_l_Lean_instInhabitedLocalContext_default___closed__3);
v___x_587_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__1, &l_Lean_instInhabitedLocalContext_default___closed__1_once, _init_l_Lean_instInhabitedLocalContext_default___closed__1);
v___x_588_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v___x_586_);
lean_ctor_set(v___x_588_, 2, v___x_585_);
return v___x_588_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default(void){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__4, &l_Lean_instInhabitedLocalContext_default___closed__4_once, _init_l_Lean_instInhabitedLocalContext_default___closed__4);
return v___x_589_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext(void){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_instInhabitedLocalContext_default;
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg(){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_592_ = lean_unsigned_to_nat(32u);
v___x_593_ = lean_mk_empty_array_with_capacity(v___x_592_);
lean_dec_ref(v___x_593_);
v___x_594_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__4, &l_Lean_instInhabitedLocalContext_default___closed__4_once, _init_l_Lean_instInhabitedLocalContext_default___closed__4);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg___boxed(lean_object* v___dummy_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_LocalContext_mkEmpty___redArg();
return v_res_596_;
}
}
static lean_object* _init_l_Lean_LocalContext_mkEmpty___closed__0(void){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_LocalContext_mkEmpty___redArg();
return v___x_597_;
}
}
LEAN_EXPORT lean_object* lean_mk_empty_local_ctx(lean_object* v_x_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = lean_obj_once(&l_Lean_LocalContext_mkEmpty___closed__0, &l_Lean_LocalContext_mkEmpty___closed__0_once, _init_l_Lean_LocalContext_mkEmpty___closed__0);
return v___x_599_;
}
}
static lean_object* _init_l_Lean_LocalContext_empty(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_600_ = lean_unsigned_to_nat(32u);
v___x_601_ = lean_mk_empty_array_with_capacity(v___x_600_);
lean_dec_ref(v___x_601_);
v___x_602_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__4, &l_Lean_instInhabitedLocalContext_default___closed__4_once, _init_l_Lean_instInhabitedLocalContext_default___closed__4);
return v___x_602_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg(lean_object* v_x_603_){
_start:
{
uint8_t v___x_604_; 
v___x_604_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg___boxed(lean_object* v_x_605_){
_start:
{
uint8_t v_res_606_; lean_object* v_r_607_; 
v_res_606_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg(v_x_605_);
lean_dec_ref(v_x_605_);
v_r_607_ = lean_box(v_res_606_);
return v_r_607_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0(lean_object* v_00_u03b2_608_, lean_object* v_x_609_){
_start:
{
uint8_t v___x_610_; 
v___x_610_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___boxed(lean_object* v_00_u03b2_611_, lean_object* v_x_612_){
_start:
{
uint8_t v_res_613_; lean_object* v_r_614_; 
v_res_613_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0(v_00_u03b2_611_, v_x_612_);
lean_dec_ref(v_x_612_);
v_r_614_ = lean_box(v_res_613_);
return v_r_614_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_isEmpty(lean_object* v_lctx_615_){
_start:
{
lean_object* v_fvarIdToDecl_616_; uint8_t v___x_617_; 
v_fvarIdToDecl_616_ = lean_ctor_get(v_lctx_615_, 0);
v___x_617_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_fvarIdToDecl_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_isEmpty___boxed(lean_object* v_lctx_618_){
_start:
{
uint8_t v_res_619_; lean_object* v_r_620_; 
v_res_619_ = l_Lean_LocalContext_isEmpty(v_lctx_618_);
lean_dec_ref(v_lctx_618_);
v_r_620_ = lean_box(v_res_619_);
return v_r_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_621_, lean_object* v_x_622_, lean_object* v_x_623_, lean_object* v_x_624_){
_start:
{
lean_object* v_ks_625_; lean_object* v_vs_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_650_; 
v_ks_625_ = lean_ctor_get(v_x_621_, 0);
v_vs_626_ = lean_ctor_get(v_x_621_, 1);
v_isSharedCheck_650_ = !lean_is_exclusive(v_x_621_);
if (v_isSharedCheck_650_ == 0)
{
v___x_628_ = v_x_621_;
v_isShared_629_ = v_isSharedCheck_650_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_vs_626_);
lean_inc(v_ks_625_);
lean_dec(v_x_621_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_650_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_630_ = lean_array_get_size(v_ks_625_);
v___x_631_ = lean_nat_dec_lt(v_x_622_, v___x_630_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_635_; 
lean_dec(v_x_622_);
v___x_632_ = lean_array_push(v_ks_625_, v_x_623_);
v___x_633_ = lean_array_push(v_vs_626_, v_x_624_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_633_);
lean_ctor_set(v___x_628_, 0, v___x_632_);
v___x_635_ = v___x_628_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v___x_633_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
else
{
lean_object* v_k_x27_637_; uint8_t v___x_638_; 
v_k_x27_637_ = lean_array_fget_borrowed(v_ks_625_, v_x_622_);
v___x_638_ = l_Lean_instBEqFVarId_beq(v_x_623_, v_k_x27_637_);
if (v___x_638_ == 0)
{
lean_object* v___x_640_; 
if (v_isShared_629_ == 0)
{
v___x_640_ = v___x_628_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_ks_625_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_vs_626_);
v___x_640_ = v_reuseFailAlloc_644_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_unsigned_to_nat(1u);
v___x_642_ = lean_nat_add(v_x_622_, v___x_641_);
lean_dec(v_x_622_);
v_x_621_ = v___x_640_;
v_x_622_ = v___x_642_;
goto _start;
}
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_648_; 
v___x_645_ = lean_array_fset(v_ks_625_, v_x_622_, v_x_623_);
v___x_646_ = lean_array_fset(v_vs_626_, v_x_622_, v_x_624_);
lean_dec(v_x_622_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_646_);
lean_ctor_set(v___x_628_, 0, v___x_645_);
v___x_648_ = v___x_628_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v___x_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(lean_object* v_n_651_, lean_object* v_k_652_, lean_object* v_v_653_){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lean_unsigned_to_nat(0u);
v___x_655_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(v_n_651_, v___x_654_, v_k_652_, v_v_653_);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(lean_object* v_x_657_, size_t v_x_658_, size_t v_x_659_, lean_object* v_x_660_, lean_object* v_x_661_){
_start:
{
if (lean_obj_tag(v_x_657_) == 0)
{
lean_object* v_es_662_; size_t v___x_663_; size_t v___x_664_; lean_object* v_j_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v_es_662_ = lean_ctor_get(v_x_657_, 0);
v___x_663_ = ((size_t)31ULL);
v___x_664_ = lean_usize_land(v_x_658_, v___x_663_);
v_j_665_ = lean_usize_to_nat(v___x_664_);
v___x_666_ = lean_array_get_size(v_es_662_);
v___x_667_ = lean_nat_dec_lt(v_j_665_, v___x_666_);
if (v___x_667_ == 0)
{
lean_dec(v_j_665_);
lean_dec(v_x_661_);
lean_dec(v_x_660_);
return v_x_657_;
}
else
{
lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_706_; 
lean_inc_ref(v_es_662_);
v_isSharedCheck_706_ = !lean_is_exclusive(v_x_657_);
if (v_isSharedCheck_706_ == 0)
{
lean_object* v_unused_707_; 
v_unused_707_ = lean_ctor_get(v_x_657_, 0);
lean_dec(v_unused_707_);
v___x_669_ = v_x_657_;
v_isShared_670_ = v_isSharedCheck_706_;
goto v_resetjp_668_;
}
else
{
lean_dec(v_x_657_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_706_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v_v_671_; lean_object* v___x_672_; lean_object* v_xs_x27_673_; lean_object* v___y_675_; 
v_v_671_ = lean_array_fget(v_es_662_, v_j_665_);
v___x_672_ = lean_box(0);
v_xs_x27_673_ = lean_array_fset(v_es_662_, v_j_665_, v___x_672_);
switch(lean_obj_tag(v_v_671_))
{
case 0:
{
lean_object* v_key_680_; lean_object* v_val_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_691_; 
v_key_680_ = lean_ctor_get(v_v_671_, 0);
v_val_681_ = lean_ctor_get(v_v_671_, 1);
v_isSharedCheck_691_ = !lean_is_exclusive(v_v_671_);
if (v_isSharedCheck_691_ == 0)
{
v___x_683_ = v_v_671_;
v_isShared_684_ = v_isSharedCheck_691_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_val_681_);
lean_inc(v_key_680_);
lean_dec(v_v_671_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_691_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
uint8_t v___x_685_; 
v___x_685_ = l_Lean_instBEqFVarId_beq(v_x_660_, v_key_680_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; lean_object* v___x_687_; 
lean_del_object(v___x_683_);
v___x_686_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_680_, v_val_681_, v_x_660_, v_x_661_);
v___x_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
v___y_675_ = v___x_687_;
goto v___jp_674_;
}
else
{
lean_object* v___x_689_; 
lean_dec(v_val_681_);
lean_dec(v_key_680_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 1, v_x_661_);
lean_ctor_set(v___x_683_, 0, v_x_660_);
v___x_689_ = v___x_683_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_x_660_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_x_661_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
v___y_675_ = v___x_689_;
goto v___jp_674_;
}
}
}
}
case 1:
{
lean_object* v_node_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_704_; 
v_node_692_ = lean_ctor_get(v_v_671_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v_v_671_);
if (v_isSharedCheck_704_ == 0)
{
v___x_694_ = v_v_671_;
v_isShared_695_ = v_isSharedCheck_704_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_node_692_);
lean_dec(v_v_671_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_704_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
size_t v___x_696_; size_t v___x_697_; size_t v___x_698_; size_t v___x_699_; lean_object* v___x_700_; lean_object* v___x_702_; 
v___x_696_ = ((size_t)5ULL);
v___x_697_ = lean_usize_shift_right(v_x_658_, v___x_696_);
v___x_698_ = ((size_t)1ULL);
v___x_699_ = lean_usize_add(v_x_659_, v___x_698_);
v___x_700_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_node_692_, v___x_697_, v___x_699_, v_x_660_, v_x_661_);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 0, v___x_700_);
v___x_702_ = v___x_694_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_700_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
v___y_675_ = v___x_702_;
goto v___jp_674_;
}
}
}
default: 
{
lean_object* v___x_705_; 
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v_x_660_);
lean_ctor_set(v___x_705_, 1, v_x_661_);
v___y_675_ = v___x_705_;
goto v___jp_674_;
}
}
v___jp_674_:
{
lean_object* v___x_676_; lean_object* v___x_678_; 
v___x_676_ = lean_array_fset(v_xs_x27_673_, v_j_665_, v___y_675_);
lean_dec(v_j_665_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 0, v___x_676_);
v___x_678_ = v___x_669_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_676_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
}
else
{
lean_object* v_ks_708_; lean_object* v_vs_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_727_; 
v_ks_708_ = lean_ctor_get(v_x_657_, 0);
v_vs_709_ = lean_ctor_get(v_x_657_, 1);
v_isSharedCheck_727_ = !lean_is_exclusive(v_x_657_);
if (v_isSharedCheck_727_ == 0)
{
v___x_711_ = v_x_657_;
v_isShared_712_ = v_isSharedCheck_727_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_vs_709_);
lean_inc(v_ks_708_);
lean_dec(v_x_657_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_727_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_ks_708_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_vs_709_);
v___x_714_ = v_reuseFailAlloc_726_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v_newNode_715_; size_t v___x_716_; uint8_t v___x_717_; 
v_newNode_715_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(v___x_714_, v_x_660_, v_x_661_);
v___x_716_ = ((size_t)7ULL);
v___x_717_ = lean_usize_dec_le(v___x_716_, v_x_659_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_718_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_715_);
v___x_719_ = lean_unsigned_to_nat(4u);
v___x_720_ = lean_nat_dec_lt(v___x_718_, v___x_719_);
lean_dec(v___x_718_);
if (v___x_720_ == 0)
{
lean_object* v_ks_721_; lean_object* v_vs_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v_ks_721_ = lean_ctor_get(v_newNode_715_, 0);
lean_inc_ref(v_ks_721_);
v_vs_722_ = lean_ctor_get(v_newNode_715_, 1);
lean_inc_ref(v_vs_722_);
lean_dec_ref(v_newNode_715_);
v___x_723_ = lean_unsigned_to_nat(0u);
v___x_724_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0);
v___x_725_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(v_x_659_, v_ks_721_, v_vs_722_, v___x_723_, v___x_724_);
lean_dec_ref(v_vs_722_);
lean_dec_ref(v_ks_721_);
return v___x_725_;
}
else
{
return v_newNode_715_;
}
}
else
{
return v_newNode_715_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(size_t v_depth_728_, lean_object* v_keys_729_, lean_object* v_vals_730_, lean_object* v_i_731_, lean_object* v_entries_732_){
_start:
{
lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_733_ = lean_array_get_size(v_keys_729_);
v___x_734_ = lean_nat_dec_lt(v_i_731_, v___x_733_);
if (v___x_734_ == 0)
{
lean_dec(v_i_731_);
return v_entries_732_;
}
else
{
lean_object* v_k_735_; lean_object* v_v_736_; uint64_t v___x_737_; size_t v_h_738_; size_t v___x_739_; lean_object* v___x_740_; size_t v___x_741_; size_t v___x_742_; size_t v___x_743_; size_t v_h_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_k_735_ = lean_array_fget_borrowed(v_keys_729_, v_i_731_);
v_v_736_ = lean_array_fget_borrowed(v_vals_730_, v_i_731_);
v___x_737_ = l_Lean_instHashableFVarId_hash(v_k_735_);
v_h_738_ = lean_uint64_to_usize(v___x_737_);
v___x_739_ = ((size_t)5ULL);
v___x_740_ = lean_unsigned_to_nat(1u);
v___x_741_ = ((size_t)1ULL);
v___x_742_ = lean_usize_sub(v_depth_728_, v___x_741_);
v___x_743_ = lean_usize_mul(v___x_739_, v___x_742_);
v_h_744_ = lean_usize_shift_right(v_h_738_, v___x_743_);
v___x_745_ = lean_nat_add(v_i_731_, v___x_740_);
lean_dec(v_i_731_);
lean_inc(v_v_736_);
lean_inc(v_k_735_);
v___x_746_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_entries_732_, v_h_744_, v_depth_728_, v_k_735_, v_v_736_);
v_i_731_ = v___x_745_;
v_entries_732_ = v___x_746_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_748_, lean_object* v_keys_749_, lean_object* v_vals_750_, lean_object* v_i_751_, lean_object* v_entries_752_){
_start:
{
size_t v_depth_boxed_753_; lean_object* v_res_754_; 
v_depth_boxed_753_ = lean_unbox_usize(v_depth_748_);
lean_dec(v_depth_748_);
v_res_754_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(v_depth_boxed_753_, v_keys_749_, v_vals_750_, v_i_751_, v_entries_752_);
lean_dec_ref(v_vals_750_);
lean_dec_ref(v_keys_749_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_755_, lean_object* v_x_756_, lean_object* v_x_757_, lean_object* v_x_758_, lean_object* v_x_759_){
_start:
{
size_t v_x_363__boxed_760_; size_t v_x_364__boxed_761_; lean_object* v_res_762_; 
v_x_363__boxed_760_ = lean_unbox_usize(v_x_756_);
lean_dec(v_x_756_);
v_x_364__boxed_761_ = lean_unbox_usize(v_x_757_);
lean_dec(v_x_757_);
v_res_762_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_x_755_, v_x_363__boxed_760_, v_x_364__boxed_761_, v_x_758_, v_x_759_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(lean_object* v_x_763_, lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
uint64_t v___x_766_; size_t v___x_767_; size_t v___x_768_; lean_object* v___x_769_; 
v___x_766_ = l_Lean_instHashableFVarId_hash(v_x_764_);
v___x_767_ = lean_uint64_to_usize(v___x_766_);
v___x_768_ = ((size_t)1ULL);
v___x_769_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_x_763_, v___x_767_, v___x_768_, v_x_764_, v_x_765_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object* v_lctx_770_, lean_object* v_fvarId_771_, lean_object* v_userName_772_, lean_object* v_type_773_, uint8_t v_bi_774_, uint8_t v_kind_775_){
_start:
{
lean_object* v_decls_776_; lean_object* v_fvarIdToDecl_777_; lean_object* v_auxDeclToFullName_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_790_; 
v_decls_776_ = lean_ctor_get(v_lctx_770_, 1);
v_fvarIdToDecl_777_ = lean_ctor_get(v_lctx_770_, 0);
v_auxDeclToFullName_778_ = lean_ctor_get(v_lctx_770_, 2);
v_isSharedCheck_790_ = !lean_is_exclusive(v_lctx_770_);
if (v_isSharedCheck_790_ == 0)
{
v___x_780_ = v_lctx_770_;
v_isShared_781_ = v_isSharedCheck_790_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_auxDeclToFullName_778_);
lean_inc(v_decls_776_);
lean_inc(v_fvarIdToDecl_777_);
lean_dec(v_lctx_770_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_790_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v_size_782_; lean_object* v_decl_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_788_; 
v_size_782_ = lean_ctor_get(v_decls_776_, 2);
lean_inc(v_fvarId_771_);
lean_inc(v_size_782_);
v_decl_783_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_decl_783_, 0, v_size_782_);
lean_ctor_set(v_decl_783_, 1, v_fvarId_771_);
lean_ctor_set(v_decl_783_, 2, v_userName_772_);
lean_ctor_set(v_decl_783_, 3, v_type_773_);
lean_ctor_set_uint8(v_decl_783_, sizeof(void*)*4, v_bi_774_);
lean_ctor_set_uint8(v_decl_783_, sizeof(void*)*4 + 1, v_kind_775_);
lean_inc_ref(v_decl_783_);
v___x_784_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_777_, v_fvarId_771_, v_decl_783_);
v___x_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_785_, 0, v_decl_783_);
v___x_786_ = l_Lean_PersistentArray_push___redArg(v_decls_776_, v___x_785_);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 1, v___x_786_);
lean_ctor_set(v___x_780_, 0, v___x_784_);
v___x_788_ = v___x_780_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_784_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_789_, 2, v_auxDeclToFullName_778_);
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
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl___boxed(lean_object* v_lctx_791_, lean_object* v_fvarId_792_, lean_object* v_userName_793_, lean_object* v_type_794_, lean_object* v_bi_795_, lean_object* v_kind_796_){
_start:
{
uint8_t v_bi_boxed_797_; uint8_t v_kind_boxed_798_; lean_object* v_res_799_; 
v_bi_boxed_797_ = lean_unbox(v_bi_795_);
v_kind_boxed_798_ = lean_unbox(v_kind_796_);
v_res_799_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_791_, v_fvarId_792_, v_userName_793_, v_type_794_, v_bi_boxed_797_, v_kind_boxed_798_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0(lean_object* v_00_u03b2_800_, lean_object* v_x_801_, lean_object* v_x_802_, lean_object* v_x_803_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_x_801_, v_x_802_, v_x_803_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0(lean_object* v_00_u03b2_805_, lean_object* v_x_806_, size_t v_x_807_, size_t v_x_808_, lean_object* v_x_809_, lean_object* v_x_810_){
_start:
{
lean_object* v___x_811_; 
v___x_811_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_x_806_, v_x_807_, v_x_808_, v_x_809_, v_x_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_812_, lean_object* v_x_813_, lean_object* v_x_814_, lean_object* v_x_815_, lean_object* v_x_816_, lean_object* v_x_817_){
_start:
{
size_t v_x_563__boxed_818_; size_t v_x_564__boxed_819_; lean_object* v_res_820_; 
v_x_563__boxed_818_ = lean_unbox_usize(v_x_814_);
lean_dec(v_x_814_);
v_x_564__boxed_819_ = lean_unbox_usize(v_x_815_);
lean_dec(v_x_815_);
v_res_820_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0(v_00_u03b2_812_, v_x_813_, v_x_563__boxed_818_, v_x_564__boxed_819_, v_x_816_, v_x_817_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_821_, lean_object* v_n_822_, lean_object* v_k_823_, lean_object* v_v_824_){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(v_n_822_, v_k_823_, v_v_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_826_, size_t v_depth_827_, lean_object* v_keys_828_, lean_object* v_vals_829_, lean_object* v_heq_830_, lean_object* v_i_831_, lean_object* v_entries_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(v_depth_827_, v_keys_828_, v_vals_829_, v_i_831_, v_entries_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_834_, lean_object* v_depth_835_, lean_object* v_keys_836_, lean_object* v_vals_837_, lean_object* v_heq_838_, lean_object* v_i_839_, lean_object* v_entries_840_){
_start:
{
size_t v_depth_boxed_841_; lean_object* v_res_842_; 
v_depth_boxed_841_ = lean_unbox_usize(v_depth_835_);
lean_dec(v_depth_835_);
v_res_842_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2(v_00_u03b2_834_, v_depth_boxed_841_, v_keys_836_, v_vals_837_, v_heq_838_, v_i_839_, v_entries_840_);
lean_dec_ref(v_vals_837_);
lean_dec_ref(v_keys_836_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_843_, lean_object* v_x_844_, lean_object* v_x_845_, lean_object* v_x_846_, lean_object* v_x_847_){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(v_x_844_, v_x_845_, v_x_846_, v_x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_mk_local_decl(lean_object* v_lctx_849_, lean_object* v_fvarId_850_, lean_object* v_userName_851_, lean_object* v_type_852_, uint8_t v_bi_853_){
_start:
{
uint8_t v___x_854_; lean_object* v___x_855_; 
v___x_854_ = 0;
v___x_855_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_849_, v_fvarId_850_, v_userName_851_, v_type_852_, v_bi_853_, v___x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLocalDeclExported___boxed(lean_object* v_lctx_856_, lean_object* v_fvarId_857_, lean_object* v_userName_858_, lean_object* v_type_859_, lean_object* v_bi_860_){
_start:
{
uint8_t v_bi_boxed_861_; lean_object* v_res_862_; 
v_bi_boxed_861_ = lean_unbox(v_bi_860_);
v_res_862_ = lean_local_ctx_mk_local_decl(v_lctx_856_, v_fvarId_857_, v_userName_858_, v_type_859_, v_bi_boxed_861_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl(lean_object* v_lctx_863_, lean_object* v_fvarId_864_, lean_object* v_userName_865_, lean_object* v_type_866_, lean_object* v_value_867_, uint8_t v_nondep_868_, uint8_t v_kind_869_){
_start:
{
lean_object* v_decls_870_; lean_object* v_fvarIdToDecl_871_; lean_object* v_auxDeclToFullName_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_884_; 
v_decls_870_ = lean_ctor_get(v_lctx_863_, 1);
v_fvarIdToDecl_871_ = lean_ctor_get(v_lctx_863_, 0);
v_auxDeclToFullName_872_ = lean_ctor_get(v_lctx_863_, 2);
v_isSharedCheck_884_ = !lean_is_exclusive(v_lctx_863_);
if (v_isSharedCheck_884_ == 0)
{
v___x_874_ = v_lctx_863_;
v_isShared_875_ = v_isSharedCheck_884_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_auxDeclToFullName_872_);
lean_inc(v_decls_870_);
lean_inc(v_fvarIdToDecl_871_);
lean_dec(v_lctx_863_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_884_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v_size_876_; lean_object* v_decl_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_882_; 
v_size_876_ = lean_ctor_get(v_decls_870_, 2);
lean_inc(v_fvarId_864_);
lean_inc(v_size_876_);
v_decl_877_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_decl_877_, 0, v_size_876_);
lean_ctor_set(v_decl_877_, 1, v_fvarId_864_);
lean_ctor_set(v_decl_877_, 2, v_userName_865_);
lean_ctor_set(v_decl_877_, 3, v_type_866_);
lean_ctor_set(v_decl_877_, 4, v_value_867_);
lean_ctor_set_uint8(v_decl_877_, sizeof(void*)*5, v_nondep_868_);
lean_ctor_set_uint8(v_decl_877_, sizeof(void*)*5 + 1, v_kind_869_);
lean_inc_ref(v_decl_877_);
v___x_878_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_871_, v_fvarId_864_, v_decl_877_);
v___x_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_879_, 0, v_decl_877_);
v___x_880_ = l_Lean_PersistentArray_push___redArg(v_decls_870_, v___x_879_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 1, v___x_880_);
lean_ctor_set(v___x_874_, 0, v___x_878_);
v___x_882_ = v___x_874_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_878_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v___x_880_);
lean_ctor_set(v_reuseFailAlloc_883_, 2, v_auxDeclToFullName_872_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl___boxed(lean_object* v_lctx_885_, lean_object* v_fvarId_886_, lean_object* v_userName_887_, lean_object* v_type_888_, lean_object* v_value_889_, lean_object* v_nondep_890_, lean_object* v_kind_891_){
_start:
{
uint8_t v_nondep_boxed_892_; uint8_t v_kind_boxed_893_; lean_object* v_res_894_; 
v_nondep_boxed_892_ = lean_unbox(v_nondep_890_);
v_kind_boxed_893_ = lean_unbox(v_kind_891_);
v_res_894_ = l_Lean_LocalContext_mkLetDecl(v_lctx_885_, v_fvarId_886_, v_userName_887_, v_type_888_, v_value_889_, v_nondep_boxed_892_, v_kind_boxed_893_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_mk_let_decl(lean_object* v_lctx_895_, lean_object* v_fvarId_896_, lean_object* v_userName_897_, lean_object* v_type_898_, lean_object* v_value_899_, uint8_t v_nondep_900_){
_start:
{
uint8_t v___x_901_; lean_object* v___x_902_; 
v___x_901_ = 0;
v___x_902_ = l_Lean_LocalContext_mkLetDecl(v_lctx_895_, v_fvarId_896_, v_userName_897_, v_type_898_, v_value_899_, v_nondep_900_, v___x_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLetDeclExported___boxed(lean_object* v_lctx_903_, lean_object* v_fvarId_904_, lean_object* v_userName_905_, lean_object* v_type_906_, lean_object* v_value_907_, lean_object* v_nondep_908_){
_start:
{
uint8_t v_nondep_boxed_909_; lean_object* v_res_910_; 
v_nondep_boxed_909_ = lean_unbox(v_nondep_908_);
v_res_910_ = lean_local_ctx_mk_let_decl(v_lctx_903_, v_fvarId_904_, v_userName_905_, v_type_906_, v_value_907_, v_nondep_boxed_909_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkAuxDecl(lean_object* v_lctx_911_, lean_object* v_fvarId_912_, lean_object* v_userName_913_, lean_object* v_type_914_, lean_object* v_fullName_915_){
_start:
{
lean_object* v_decls_916_; lean_object* v_fvarIdToDecl_917_; lean_object* v_auxDeclToFullName_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_933_; 
v_decls_916_ = lean_ctor_get(v_lctx_911_, 1);
v_fvarIdToDecl_917_ = lean_ctor_get(v_lctx_911_, 0);
v_auxDeclToFullName_918_ = lean_ctor_get(v_lctx_911_, 2);
v_isSharedCheck_933_ = !lean_is_exclusive(v_lctx_911_);
if (v_isSharedCheck_933_ == 0)
{
v___x_920_ = v_lctx_911_;
v_isShared_921_ = v_isSharedCheck_933_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_auxDeclToFullName_918_);
lean_inc(v_decls_916_);
lean_inc(v_fvarIdToDecl_917_);
lean_dec(v_lctx_911_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_933_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v_size_922_; uint8_t v___x_923_; uint8_t v___x_924_; lean_object* v_decl_925_; lean_object* v_auxDeclToFullName_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_931_; 
v_size_922_ = lean_ctor_get(v_decls_916_, 2);
v___x_923_ = 0;
v___x_924_ = 2;
lean_inc_n(v_fvarId_912_, 2);
lean_inc(v_size_922_);
v_decl_925_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_decl_925_, 0, v_size_922_);
lean_ctor_set(v_decl_925_, 1, v_fvarId_912_);
lean_ctor_set(v_decl_925_, 2, v_userName_913_);
lean_ctor_set(v_decl_925_, 3, v_type_914_);
lean_ctor_set_uint8(v_decl_925_, sizeof(void*)*4, v___x_923_);
lean_ctor_set_uint8(v_decl_925_, sizeof(void*)*4 + 1, v___x_924_);
v_auxDeclToFullName_926_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_912_, v_fullName_915_, v_auxDeclToFullName_918_);
lean_inc_ref(v_decl_925_);
v___x_927_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_917_, v_fvarId_912_, v_decl_925_);
v___x_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_928_, 0, v_decl_925_);
v___x_929_ = l_Lean_PersistentArray_push___redArg(v_decls_916_, v___x_928_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 2, v_auxDeclToFullName_926_);
lean_ctor_set(v___x_920_, 1, v___x_929_);
lean_ctor_set(v___x_920_, 0, v___x_927_);
v___x_931_ = v___x_920_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___x_927_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_932_, 2, v_auxDeclToFullName_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_addDecl(lean_object* v_lctx_934_, lean_object* v_newDecl_935_){
_start:
{
lean_object* v_decls_936_; lean_object* v_fvarIdToDecl_937_; lean_object* v_auxDeclToFullName_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_953_; 
v_decls_936_ = lean_ctor_get(v_lctx_934_, 1);
v_fvarIdToDecl_937_ = lean_ctor_get(v_lctx_934_, 0);
v_auxDeclToFullName_938_ = lean_ctor_get(v_lctx_934_, 2);
v_isSharedCheck_953_ = !lean_is_exclusive(v_lctx_934_);
if (v_isSharedCheck_953_ == 0)
{
v___x_940_ = v_lctx_934_;
v_isShared_941_ = v_isSharedCheck_953_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_auxDeclToFullName_938_);
lean_inc(v_decls_936_);
lean_inc(v_fvarIdToDecl_937_);
lean_dec(v_lctx_934_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_953_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v_size_942_; lean_object* v_newDecl_943_; lean_object* v___y_945_; lean_object* v_fvarId_952_; 
v_size_942_ = lean_ctor_get(v_decls_936_, 2);
lean_inc(v_size_942_);
v_newDecl_943_ = l_Lean_LocalDecl_setIndex(v_newDecl_935_, v_size_942_);
v_fvarId_952_ = lean_ctor_get(v_newDecl_943_, 1);
lean_inc(v_fvarId_952_);
v___y_945_ = v_fvarId_952_;
goto v___jp_944_;
v___jp_944_:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
lean_inc_ref(v_newDecl_943_);
v___x_946_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_937_, v___y_945_, v_newDecl_943_);
v___x_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_947_, 0, v_newDecl_943_);
v___x_948_ = l_Lean_PersistentArray_push___redArg(v_decls_936_, v___x_947_);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 1, v___x_948_);
lean_ctor_set(v___x_940_, 0, v___x_946_);
v___x_950_ = v___x_940_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_946_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v_auxDeclToFullName_938_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_954_, lean_object* v_vals_955_, lean_object* v_i_956_, lean_object* v_k_957_){
_start:
{
lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_958_ = lean_array_get_size(v_keys_954_);
v___x_959_ = lean_nat_dec_lt(v_i_956_, v___x_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; 
lean_dec(v_i_956_);
v___x_960_ = lean_box(0);
return v___x_960_;
}
else
{
lean_object* v_k_x27_961_; uint8_t v___x_962_; 
v_k_x27_961_ = lean_array_fget_borrowed(v_keys_954_, v_i_956_);
v___x_962_ = l_Lean_instBEqFVarId_beq(v_k_957_, v_k_x27_961_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = lean_unsigned_to_nat(1u);
v___x_964_ = lean_nat_add(v_i_956_, v___x_963_);
lean_dec(v_i_956_);
v_i_956_ = v___x_964_;
goto _start;
}
else
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = lean_array_fget_borrowed(v_vals_955_, v_i_956_);
lean_dec(v_i_956_);
lean_inc(v___x_966_);
v___x_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
return v___x_967_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_968_, lean_object* v_vals_969_, lean_object* v_i_970_, lean_object* v_k_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_968_, v_vals_969_, v_i_970_, v_k_971_);
lean_dec(v_k_971_);
lean_dec_ref(v_vals_969_);
lean_dec_ref(v_keys_968_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_973_, size_t v_x_974_, lean_object* v_x_975_){
_start:
{
if (lean_obj_tag(v_x_973_) == 0)
{
lean_object* v_es_976_; lean_object* v___x_977_; size_t v___x_978_; size_t v___x_979_; lean_object* v_j_980_; lean_object* v___x_981_; 
v_es_976_ = lean_ctor_get(v_x_973_, 0);
v___x_977_ = lean_box(2);
v___x_978_ = ((size_t)31ULL);
v___x_979_ = lean_usize_land(v_x_974_, v___x_978_);
v_j_980_ = lean_usize_to_nat(v___x_979_);
v___x_981_ = lean_array_get_borrowed(v___x_977_, v_es_976_, v_j_980_);
lean_dec(v_j_980_);
switch(lean_obj_tag(v___x_981_))
{
case 0:
{
lean_object* v_key_982_; lean_object* v_val_983_; uint8_t v___x_984_; 
v_key_982_ = lean_ctor_get(v___x_981_, 0);
v_val_983_ = lean_ctor_get(v___x_981_, 1);
v___x_984_ = l_Lean_instBEqFVarId_beq(v_x_975_, v_key_982_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; 
v___x_985_ = lean_box(0);
return v___x_985_;
}
else
{
lean_object* v___x_986_; 
lean_inc(v_val_983_);
v___x_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_986_, 0, v_val_983_);
return v___x_986_;
}
}
case 1:
{
lean_object* v_node_987_; size_t v___x_988_; size_t v___x_989_; 
v_node_987_ = lean_ctor_get(v___x_981_, 0);
v___x_988_ = ((size_t)5ULL);
v___x_989_ = lean_usize_shift_right(v_x_974_, v___x_988_);
v_x_973_ = v_node_987_;
v_x_974_ = v___x_989_;
goto _start;
}
default: 
{
lean_object* v___x_991_; 
v___x_991_ = lean_box(0);
return v___x_991_;
}
}
}
else
{
lean_object* v_ks_992_; lean_object* v_vs_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v_ks_992_ = lean_ctor_get(v_x_973_, 0);
v_vs_993_ = lean_ctor_get(v_x_973_, 1);
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_992_, v_vs_993_, v___x_994_, v_x_975_);
return v___x_995_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_996_, lean_object* v_x_997_, lean_object* v_x_998_){
_start:
{
size_t v_x_135__boxed_999_; lean_object* v_res_1000_; 
v_x_135__boxed_999_ = lean_unbox_usize(v_x_997_);
lean_dec(v_x_997_);
v_res_1000_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(v_x_996_, v_x_135__boxed_999_, v_x_998_);
lean_dec(v_x_998_);
lean_dec_ref(v_x_996_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(lean_object* v_x_1001_, lean_object* v_x_1002_){
_start:
{
uint64_t v___x_1003_; size_t v___x_1004_; lean_object* v___x_1005_; 
v___x_1003_ = l_Lean_instHashableFVarId_hash(v_x_1002_);
v___x_1004_ = lean_uint64_to_usize(v___x_1003_);
v___x_1005_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(v_x_1001_, v___x_1004_, v_x_1002_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg___boxed(lean_object* v_x_1006_, lean_object* v_x_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_x_1006_, v_x_1007_);
lean_dec(v_x_1007_);
lean_dec_ref(v_x_1006_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_find(lean_object* v_lctx_1009_, lean_object* v_fvarId_1010_){
_start:
{
lean_object* v_fvarIdToDecl_1011_; lean_object* v___x_1012_; 
v_fvarIdToDecl_1011_ = lean_ctor_get(v_lctx_1009_, 0);
lean_inc_ref(v_fvarIdToDecl_1011_);
lean_dec_ref(v_lctx_1009_);
v___x_1012_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_fvarIdToDecl_1011_, v_fvarId_1010_);
lean_dec(v_fvarId_1010_);
lean_dec_ref(v_fvarIdToDecl_1011_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0(lean_object* v_00_u03b2_1013_, lean_object* v_x_1014_, lean_object* v_x_1015_){
_start:
{
lean_object* v___x_1016_; 
v___x_1016_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_x_1014_, v_x_1015_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_1017_, lean_object* v_x_1018_, lean_object* v_x_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0(v_00_u03b2_1017_, v_x_1018_, v_x_1019_);
lean_dec(v_x_1019_);
lean_dec_ref(v_x_1018_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1021_, lean_object* v_x_1022_, size_t v_x_1023_, lean_object* v_x_1024_){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(v_x_1022_, v_x_1023_, v_x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1026_, lean_object* v_x_1027_, lean_object* v_x_1028_, lean_object* v_x_1029_){
_start:
{
size_t v_x_204__boxed_1030_; lean_object* v_res_1031_; 
v_x_204__boxed_1030_ = lean_unbox_usize(v_x_1028_);
lean_dec(v_x_1028_);
v_res_1031_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0(v_00_u03b2_1026_, v_x_1027_, v_x_204__boxed_1030_, v_x_1029_);
lean_dec(v_x_1029_);
lean_dec_ref(v_x_1027_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1032_, lean_object* v_keys_1033_, lean_object* v_vals_1034_, lean_object* v_heq_1035_, lean_object* v_i_1036_, lean_object* v_k_1037_){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1033_, v_vals_1034_, v_i_1036_, v_k_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1039_, lean_object* v_keys_1040_, lean_object* v_vals_1041_, lean_object* v_heq_1042_, lean_object* v_i_1043_, lean_object* v_k_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1039_, v_keys_1040_, v_vals_1041_, v_heq_1042_, v_i_1043_, v_k_1044_);
lean_dec(v_k_1044_);
lean_dec_ref(v_vals_1041_);
lean_dec_ref(v_keys_1040_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f(lean_object* v_lctx_1046_, lean_object* v_e_1047_){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = l_Lean_Expr_fvarId_x21(v_e_1047_);
v___x_1049_ = lean_local_ctx_find(v_lctx_1046_, v___x_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f___boxed(lean_object* v_lctx_1050_, lean_object* v_e_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_1050_, v_e_1051_);
lean_dec_ref(v_e_1051_);
return v_res_1052_;
}
}
static lean_object* _init_l_Lean_LocalContext_get_x21___closed__2(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1055_ = ((lean_object*)(l_Lean_LocalContext_get_x21___closed__1));
v___x_1056_ = lean_unsigned_to_nat(14u);
v___x_1057_ = lean_unsigned_to_nat(350u);
v___x_1058_ = ((lean_object*)(l_Lean_LocalContext_get_x21___closed__0));
v___x_1059_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_1060_ = l_mkPanicMessageWithDecl(v___x_1059_, v___x_1058_, v___x_1057_, v___x_1056_, v___x_1055_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_get_x21(lean_object* v_lctx_1061_, lean_object* v_fvarId_1062_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = lean_local_ctx_find(v_lctx_1061_, v_fvarId_1062_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = lean_obj_once(&l_Lean_LocalContext_get_x21___closed__2, &l_Lean_LocalContext_get_x21___closed__2_once, _init_l_Lean_LocalContext_get_x21___closed__2);
v___x_1065_ = l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(v___x_1064_);
return v___x_1065_;
}
else
{
lean_object* v_val_1066_; 
v_val_1066_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_val_1066_);
lean_dec_ref_known(v___x_1063_, 1);
return v_val_1066_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21(lean_object* v_lctx_1067_, lean_object* v_e_1068_){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1069_ = l_Lean_Expr_fvarId_x21(v_e_1068_);
v___x_1070_ = l_Lean_LocalContext_get_x21(v_lctx_1067_, v___x_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21___boxed(lean_object* v_lctx_1071_, lean_object* v_e_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lean_LocalContext_getFVar_x21(v_lctx_1071_, v_e_1072_);
lean_dec_ref(v_e_1072_);
return v_res_1073_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1074_, lean_object* v_i_1075_, lean_object* v_k_1076_){
_start:
{
lean_object* v___x_1077_; uint8_t v___x_1078_; 
v___x_1077_ = lean_array_get_size(v_keys_1074_);
v___x_1078_ = lean_nat_dec_lt(v_i_1075_, v___x_1077_);
if (v___x_1078_ == 0)
{
lean_dec(v_i_1075_);
return v___x_1078_;
}
else
{
lean_object* v_k_x27_1079_; uint8_t v___x_1080_; 
v_k_x27_1079_ = lean_array_fget_borrowed(v_keys_1074_, v_i_1075_);
v___x_1080_ = l_Lean_instBEqFVarId_beq(v_k_1076_, v_k_x27_1079_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = lean_unsigned_to_nat(1u);
v___x_1082_ = lean_nat_add(v_i_1075_, v___x_1081_);
lean_dec(v_i_1075_);
v_i_1075_ = v___x_1082_;
goto _start;
}
else
{
lean_dec(v_i_1075_);
return v___x_1078_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1084_, lean_object* v_i_1085_, lean_object* v_k_1086_){
_start:
{
uint8_t v_res_1087_; lean_object* v_r_1088_; 
v_res_1087_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(v_keys_1084_, v_i_1085_, v_k_1086_);
lean_dec(v_k_1086_);
lean_dec_ref(v_keys_1084_);
v_r_1088_ = lean_box(v_res_1087_);
return v_r_1088_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(lean_object* v_x_1089_, size_t v_x_1090_, lean_object* v_x_1091_){
_start:
{
if (lean_obj_tag(v_x_1089_) == 0)
{
lean_object* v_es_1092_; lean_object* v___x_1093_; size_t v___x_1094_; size_t v___x_1095_; lean_object* v_j_1096_; lean_object* v___x_1097_; 
v_es_1092_ = lean_ctor_get(v_x_1089_, 0);
v___x_1093_ = lean_box(2);
v___x_1094_ = ((size_t)31ULL);
v___x_1095_ = lean_usize_land(v_x_1090_, v___x_1094_);
v_j_1096_ = lean_usize_to_nat(v___x_1095_);
v___x_1097_ = lean_array_get_borrowed(v___x_1093_, v_es_1092_, v_j_1096_);
lean_dec(v_j_1096_);
switch(lean_obj_tag(v___x_1097_))
{
case 0:
{
lean_object* v_key_1098_; uint8_t v___x_1099_; 
v_key_1098_ = lean_ctor_get(v___x_1097_, 0);
v___x_1099_ = l_Lean_instBEqFVarId_beq(v_x_1091_, v_key_1098_);
return v___x_1099_;
}
case 1:
{
lean_object* v_node_1100_; size_t v___x_1101_; size_t v___x_1102_; 
v_node_1100_ = lean_ctor_get(v___x_1097_, 0);
v___x_1101_ = ((size_t)5ULL);
v___x_1102_ = lean_usize_shift_right(v_x_1090_, v___x_1101_);
v_x_1089_ = v_node_1100_;
v_x_1090_ = v___x_1102_;
goto _start;
}
default: 
{
uint8_t v___x_1104_; 
v___x_1104_ = 0;
return v___x_1104_;
}
}
}
else
{
lean_object* v_ks_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v_ks_1105_ = lean_ctor_get(v_x_1089_, 0);
v___x_1106_ = lean_unsigned_to_nat(0u);
v___x_1107_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(v_ks_1105_, v___x_1106_, v_x_1091_);
return v___x_1107_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg___boxed(lean_object* v_x_1108_, lean_object* v_x_1109_, lean_object* v_x_1110_){
_start:
{
size_t v_x_119__boxed_1111_; uint8_t v_res_1112_; lean_object* v_r_1113_; 
v_x_119__boxed_1111_ = lean_unbox_usize(v_x_1109_);
lean_dec(v_x_1109_);
v_res_1112_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(v_x_1108_, v_x_119__boxed_1111_, v_x_1110_);
lean_dec(v_x_1110_);
lean_dec_ref(v_x_1108_);
v_r_1113_ = lean_box(v_res_1112_);
return v_r_1113_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(lean_object* v_x_1114_, lean_object* v_x_1115_){
_start:
{
uint64_t v___x_1116_; size_t v___x_1117_; uint8_t v___x_1118_; 
v___x_1116_ = l_Lean_instHashableFVarId_hash(v_x_1115_);
v___x_1117_ = lean_uint64_to_usize(v___x_1116_);
v___x_1118_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(v_x_1114_, v___x_1117_, v_x_1115_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg___boxed(lean_object* v_x_1119_, lean_object* v_x_1120_){
_start:
{
uint8_t v_res_1121_; lean_object* v_r_1122_; 
v_res_1121_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(v_x_1119_, v_x_1120_);
lean_dec(v_x_1120_);
lean_dec_ref(v_x_1119_);
v_r_1122_ = lean_box(v_res_1121_);
return v_r_1122_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_contains(lean_object* v_lctx_1123_, lean_object* v_fvarId_1124_){
_start:
{
lean_object* v_fvarIdToDecl_1125_; uint8_t v___x_1126_; 
v_fvarIdToDecl_1125_ = lean_ctor_get(v_lctx_1123_, 0);
v___x_1126_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(v_fvarIdToDecl_1125_, v_fvarId_1124_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_contains___boxed(lean_object* v_lctx_1127_, lean_object* v_fvarId_1128_){
_start:
{
uint8_t v_res_1129_; lean_object* v_r_1130_; 
v_res_1129_ = l_Lean_LocalContext_contains(v_lctx_1127_, v_fvarId_1128_);
lean_dec(v_fvarId_1128_);
lean_dec_ref(v_lctx_1127_);
v_r_1130_ = lean_box(v_res_1129_);
return v_r_1130_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0(lean_object* v_00_u03b2_1131_, lean_object* v_x_1132_, lean_object* v_x_1133_){
_start:
{
uint8_t v___x_1134_; 
v___x_1134_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(v_x_1132_, v_x_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___boxed(lean_object* v_00_u03b2_1135_, lean_object* v_x_1136_, lean_object* v_x_1137_){
_start:
{
uint8_t v_res_1138_; lean_object* v_r_1139_; 
v_res_1138_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0(v_00_u03b2_1135_, v_x_1136_, v_x_1137_);
lean_dec(v_x_1137_);
lean_dec_ref(v_x_1136_);
v_r_1139_ = lean_box(v_res_1138_);
return v_r_1139_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0(lean_object* v_00_u03b2_1140_, lean_object* v_x_1141_, size_t v_x_1142_, lean_object* v_x_1143_){
_start:
{
uint8_t v___x_1144_; 
v___x_1144_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(v_x_1141_, v_x_1142_, v_x_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1145_, lean_object* v_x_1146_, lean_object* v_x_1147_, lean_object* v_x_1148_){
_start:
{
size_t v_x_182__boxed_1149_; uint8_t v_res_1150_; lean_object* v_r_1151_; 
v_x_182__boxed_1149_ = lean_unbox_usize(v_x_1147_);
lean_dec(v_x_1147_);
v_res_1150_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0(v_00_u03b2_1145_, v_x_1146_, v_x_182__boxed_1149_, v_x_1148_);
lean_dec(v_x_1148_);
lean_dec_ref(v_x_1146_);
v_r_1151_ = lean_box(v_res_1150_);
return v_r_1151_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1152_, lean_object* v_keys_1153_, lean_object* v_vals_1154_, lean_object* v_heq_1155_, lean_object* v_i_1156_, lean_object* v_k_1157_){
_start:
{
uint8_t v___x_1158_; 
v___x_1158_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(v_keys_1153_, v_i_1156_, v_k_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1159_, lean_object* v_keys_1160_, lean_object* v_vals_1161_, lean_object* v_heq_1162_, lean_object* v_i_1163_, lean_object* v_k_1164_){
_start:
{
uint8_t v_res_1165_; lean_object* v_r_1166_; 
v_res_1165_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1(v_00_u03b2_1159_, v_keys_1160_, v_vals_1161_, v_heq_1162_, v_i_1163_, v_k_1164_);
lean_dec(v_k_1164_);
lean_dec_ref(v_vals_1161_);
lean_dec_ref(v_keys_1160_);
v_r_1166_ = lean_box(v_res_1165_);
return v_r_1166_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_containsFVar(lean_object* v_lctx_1167_, lean_object* v_e_1168_){
_start:
{
lean_object* v___x_1169_; uint8_t v___x_1170_; 
v___x_1169_ = l_Lean_Expr_fvarId_x21(v_e_1168_);
v___x_1170_ = l_Lean_LocalContext_contains(v_lctx_1167_, v___x_1169_);
lean_dec(v___x_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_containsFVar___boxed(lean_object* v_lctx_1171_, lean_object* v_e_1172_){
_start:
{
uint8_t v_res_1173_; lean_object* v_r_1174_; 
v_res_1173_ = l_Lean_LocalContext_containsFVar(v_lctx_1171_, v_e_1172_);
lean_dec_ref(v_e_1172_);
lean_dec_ref(v_lctx_1171_);
v_r_1174_ = lean_box(v_res_1173_);
return v_r_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(lean_object* v_as_1175_, size_t v_i_1176_, size_t v_stop_1177_, lean_object* v_b_1178_){
_start:
{
lean_object* v___y_1180_; uint8_t v___x_1184_; 
v___x_1184_ = lean_usize_dec_eq(v_i_1176_, v_stop_1177_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; 
v___x_1185_ = lean_array_uget_borrowed(v_as_1175_, v_i_1176_);
if (lean_obj_tag(v___x_1185_) == 0)
{
v___y_1180_ = v_b_1178_;
goto v___jp_1179_;
}
else
{
lean_object* v_val_1186_; lean_object* v_fvarId_1187_; lean_object* v___x_1188_; 
v_val_1186_ = lean_ctor_get(v___x_1185_, 0);
v_fvarId_1187_ = lean_ctor_get(v_val_1186_, 1);
lean_inc(v_fvarId_1187_);
v___x_1188_ = lean_array_push(v_b_1178_, v_fvarId_1187_);
v___y_1180_ = v___x_1188_;
goto v___jp_1179_;
}
}
else
{
return v_b_1178_;
}
v___jp_1179_:
{
size_t v___x_1181_; size_t v___x_1182_; 
v___x_1181_ = ((size_t)1ULL);
v___x_1182_ = lean_usize_add(v_i_1176_, v___x_1181_);
v_i_1176_ = v___x_1182_;
v_b_1178_ = v___y_1180_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1___boxed(lean_object* v_as_1189_, lean_object* v_i_1190_, lean_object* v_stop_1191_, lean_object* v_b_1192_){
_start:
{
size_t v_i_boxed_1193_; size_t v_stop_boxed_1194_; lean_object* v_res_1195_; 
v_i_boxed_1193_ = lean_unbox_usize(v_i_1190_);
lean_dec(v_i_1190_);
v_stop_boxed_1194_ = lean_unbox_usize(v_stop_1191_);
lean_dec(v_stop_1191_);
v_res_1195_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_as_1189_, v_i_boxed_1193_, v_stop_boxed_1194_, v_b_1192_);
lean_dec_ref(v_as_1189_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(lean_object* v_x_1196_, lean_object* v_x_1197_){
_start:
{
if (lean_obj_tag(v_x_1196_) == 0)
{
lean_object* v_cs_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; uint8_t v___x_1201_; 
v_cs_1198_ = lean_ctor_get(v_x_1196_, 0);
v___x_1199_ = lean_unsigned_to_nat(0u);
v___x_1200_ = lean_array_get_size(v_cs_1198_);
v___x_1201_ = lean_nat_dec_lt(v___x_1199_, v___x_1200_);
if (v___x_1201_ == 0)
{
return v_x_1197_;
}
else
{
size_t v___x_1202_; size_t v___x_1203_; lean_object* v___x_1204_; 
v___x_1202_ = ((size_t)0ULL);
v___x_1203_ = lean_usize_of_nat(v___x_1200_);
v___x_1204_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(v_cs_1198_, v___x_1202_, v___x_1203_, v_x_1197_);
return v___x_1204_;
}
}
else
{
lean_object* v_vs_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; uint8_t v___x_1208_; 
v_vs_1205_ = lean_ctor_get(v_x_1196_, 0);
v___x_1206_ = lean_unsigned_to_nat(0u);
v___x_1207_ = lean_array_get_size(v_vs_1205_);
v___x_1208_ = lean_nat_dec_lt(v___x_1206_, v___x_1207_);
if (v___x_1208_ == 0)
{
return v_x_1197_;
}
else
{
size_t v___x_1209_; size_t v___x_1210_; lean_object* v___x_1211_; 
v___x_1209_ = ((size_t)0ULL);
v___x_1210_ = lean_usize_of_nat(v___x_1207_);
v___x_1211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_vs_1205_, v___x_1209_, v___x_1210_, v_x_1197_);
return v___x_1211_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(lean_object* v_as_1212_, size_t v_i_1213_, size_t v_stop_1214_, lean_object* v_b_1215_){
_start:
{
uint8_t v___x_1216_; 
v___x_1216_ = lean_usize_dec_eq(v_i_1213_, v_stop_1214_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; lean_object* v___x_1218_; size_t v___x_1219_; size_t v___x_1220_; 
v___x_1217_ = lean_array_uget_borrowed(v_as_1212_, v_i_1213_);
v___x_1218_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(v___x_1217_, v_b_1215_);
v___x_1219_ = ((size_t)1ULL);
v___x_1220_ = lean_usize_add(v_i_1213_, v___x_1219_);
v_i_1213_ = v___x_1220_;
v_b_1215_ = v___x_1218_;
goto _start;
}
else
{
return v_b_1215_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1___boxed(lean_object* v_as_1222_, lean_object* v_i_1223_, lean_object* v_stop_1224_, lean_object* v_b_1225_){
_start:
{
size_t v_i_boxed_1226_; size_t v_stop_boxed_1227_; lean_object* v_res_1228_; 
v_i_boxed_1226_ = lean_unbox_usize(v_i_1223_);
lean_dec(v_i_1223_);
v_stop_boxed_1227_ = lean_unbox_usize(v_stop_1224_);
lean_dec(v_stop_1224_);
v_res_1228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(v_as_1222_, v_i_boxed_1226_, v_stop_boxed_1227_, v_b_1225_);
lean_dec_ref(v_as_1222_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2___boxed(lean_object* v_x_1229_, lean_object* v_x_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(v_x_1229_, v_x_1230_);
lean_dec_ref(v_x_1229_);
return v_res_1231_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(lean_object* v_x_1233_, size_t v_x_1234_, size_t v_x_1235_, lean_object* v_x_1236_){
_start:
{
if (lean_obj_tag(v_x_1233_) == 0)
{
lean_object* v_cs_1237_; lean_object* v___x_1238_; size_t v___x_1239_; lean_object* v_j_1240_; lean_object* v___x_1241_; size_t v___x_1242_; size_t v___x_1243_; size_t v___x_1244_; size_t v___x_1245_; size_t v___x_1246_; size_t v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; uint8_t v___x_1252_; 
v_cs_1237_ = lean_ctor_get(v_x_1233_, 0);
v___x_1238_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0);
v___x_1239_ = lean_usize_shift_right(v_x_1234_, v_x_1235_);
v_j_1240_ = lean_usize_to_nat(v___x_1239_);
v___x_1241_ = lean_array_get_borrowed(v___x_1238_, v_cs_1237_, v_j_1240_);
v___x_1242_ = ((size_t)1ULL);
v___x_1243_ = lean_usize_shift_left(v___x_1242_, v_x_1235_);
v___x_1244_ = lean_usize_sub(v___x_1243_, v___x_1242_);
v___x_1245_ = lean_usize_land(v_x_1234_, v___x_1244_);
v___x_1246_ = ((size_t)5ULL);
v___x_1247_ = lean_usize_sub(v_x_1235_, v___x_1246_);
v___x_1248_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(v___x_1241_, v___x_1245_, v___x_1247_, v_x_1236_);
v___x_1249_ = lean_unsigned_to_nat(1u);
v___x_1250_ = lean_nat_add(v_j_1240_, v___x_1249_);
lean_dec(v_j_1240_);
v___x_1251_ = lean_array_get_size(v_cs_1237_);
v___x_1252_ = lean_nat_dec_lt(v___x_1250_, v___x_1251_);
if (v___x_1252_ == 0)
{
lean_dec(v___x_1250_);
return v___x_1248_;
}
else
{
size_t v___x_1253_; size_t v___x_1254_; lean_object* v___x_1255_; 
v___x_1253_ = lean_usize_of_nat(v___x_1250_);
lean_dec(v___x_1250_);
v___x_1254_ = lean_usize_of_nat(v___x_1251_);
v___x_1255_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(v_cs_1237_, v___x_1253_, v___x_1254_, v___x_1248_);
return v___x_1255_;
}
}
else
{
lean_object* v_vs_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
v_vs_1256_ = lean_ctor_get(v_x_1233_, 0);
v___x_1257_ = lean_usize_to_nat(v_x_1234_);
v___x_1258_ = lean_array_get_size(v_vs_1256_);
v___x_1259_ = lean_nat_dec_lt(v___x_1257_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_dec(v___x_1257_);
return v_x_1236_;
}
else
{
size_t v___x_1260_; size_t v___x_1261_; lean_object* v___x_1262_; 
v___x_1260_ = lean_usize_of_nat(v___x_1257_);
lean_dec(v___x_1257_);
v___x_1261_ = lean_usize_of_nat(v___x_1258_);
v___x_1262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_vs_1256_, v___x_1260_, v___x_1261_, v_x_1236_);
return v___x_1262_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___boxed(lean_object* v_x_1263_, lean_object* v_x_1264_, lean_object* v_x_1265_, lean_object* v_x_1266_){
_start:
{
size_t v_x_1242__boxed_1267_; size_t v_x_1243__boxed_1268_; lean_object* v_res_1269_; 
v_x_1242__boxed_1267_ = lean_unbox_usize(v_x_1264_);
lean_dec(v_x_1264_);
v_x_1243__boxed_1268_ = lean_unbox_usize(v_x_1265_);
lean_dec(v_x_1265_);
v_res_1269_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(v_x_1263_, v_x_1242__boxed_1267_, v_x_1243__boxed_1268_, v_x_1266_);
lean_dec_ref(v_x_1263_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(lean_object* v_t_1270_, lean_object* v_init_1271_, lean_object* v_start_1272_){
_start:
{
lean_object* v___x_1273_; uint8_t v___x_1274_; 
v___x_1273_ = lean_unsigned_to_nat(0u);
v___x_1274_ = lean_nat_dec_eq(v_start_1272_, v___x_1273_);
if (v___x_1274_ == 0)
{
lean_object* v_root_1275_; lean_object* v_tail_1276_; size_t v_shift_1277_; lean_object* v_tailOff_1278_; uint8_t v___x_1279_; 
v_root_1275_ = lean_ctor_get(v_t_1270_, 0);
v_tail_1276_ = lean_ctor_get(v_t_1270_, 1);
v_shift_1277_ = lean_ctor_get_usize(v_t_1270_, 4);
v_tailOff_1278_ = lean_ctor_get(v_t_1270_, 3);
v___x_1279_ = lean_nat_dec_le(v_tailOff_1278_, v_start_1272_);
if (v___x_1279_ == 0)
{
size_t v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v___x_1280_ = lean_usize_of_nat(v_start_1272_);
v___x_1281_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(v_root_1275_, v___x_1280_, v_shift_1277_, v_init_1271_);
v___x_1282_ = lean_array_get_size(v_tail_1276_);
v___x_1283_ = lean_nat_dec_lt(v___x_1273_, v___x_1282_);
if (v___x_1283_ == 0)
{
return v___x_1281_;
}
else
{
size_t v___x_1284_; size_t v___x_1285_; lean_object* v___x_1286_; 
v___x_1284_ = ((size_t)0ULL);
v___x_1285_ = lean_usize_of_nat(v___x_1282_);
v___x_1286_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_tail_1276_, v___x_1284_, v___x_1285_, v___x_1281_);
return v___x_1286_;
}
}
else
{
lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1287_ = lean_nat_sub(v_start_1272_, v_tailOff_1278_);
v___x_1288_ = lean_array_get_size(v_tail_1276_);
v___x_1289_ = lean_nat_dec_lt(v___x_1287_, v___x_1288_);
if (v___x_1289_ == 0)
{
lean_dec(v___x_1287_);
return v_init_1271_;
}
else
{
size_t v___x_1290_; size_t v___x_1291_; lean_object* v___x_1292_; 
v___x_1290_ = lean_usize_of_nat(v___x_1287_);
lean_dec(v___x_1287_);
v___x_1291_ = lean_usize_of_nat(v___x_1288_);
v___x_1292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_tail_1276_, v___x_1290_, v___x_1291_, v_init_1271_);
return v___x_1292_;
}
}
}
else
{
lean_object* v_root_1293_; lean_object* v_tail_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v_root_1293_ = lean_ctor_get(v_t_1270_, 0);
v_tail_1294_ = lean_ctor_get(v_t_1270_, 1);
v___x_1295_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(v_root_1293_, v_init_1271_);
v___x_1296_ = lean_array_get_size(v_tail_1294_);
v___x_1297_ = lean_nat_dec_lt(v___x_1273_, v___x_1296_);
if (v___x_1297_ == 0)
{
return v___x_1295_;
}
else
{
size_t v___x_1298_; size_t v___x_1299_; lean_object* v___x_1300_; 
v___x_1298_ = ((size_t)0ULL);
v___x_1299_ = lean_usize_of_nat(v___x_1296_);
v___x_1300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_tail_1294_, v___x_1298_, v___x_1299_, v___x_1295_);
return v___x_1300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0___boxed(lean_object* v_t_1301_, lean_object* v_init_1302_, lean_object* v_start_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(v_t_1301_, v_init_1302_, v_start_1303_);
lean_dec(v_start_1303_);
lean_dec_ref(v_t_1301_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds(lean_object* v_lctx_1307_){
_start:
{
lean_object* v_decls_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v_decls_1308_ = lean_ctor_get(v_lctx_1307_, 1);
v___x_1309_ = lean_unsigned_to_nat(0u);
v___x_1310_ = ((lean_object*)(l_Lean_LocalContext_getFVarIds___closed__0));
v___x_1311_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(v_decls_1308_, v___x_1310_, v___x_1309_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds___boxed(lean_object* v_lctx_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Lean_LocalContext_getFVarIds(v_lctx_1312_);
lean_dec_ref(v_lctx_1312_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(size_t v_sz_1314_, size_t v_i_1315_, lean_object* v_bs_1316_){
_start:
{
uint8_t v___x_1317_; 
v___x_1317_ = lean_usize_dec_lt(v_i_1315_, v_sz_1314_);
if (v___x_1317_ == 0)
{
return v_bs_1316_;
}
else
{
lean_object* v_v_1318_; lean_object* v___x_1319_; lean_object* v_bs_x27_1320_; lean_object* v___x_1321_; size_t v___x_1322_; size_t v___x_1323_; lean_object* v___x_1324_; 
v_v_1318_ = lean_array_uget(v_bs_1316_, v_i_1315_);
v___x_1319_ = lean_unsigned_to_nat(0u);
v_bs_x27_1320_ = lean_array_uset(v_bs_1316_, v_i_1315_, v___x_1319_);
v___x_1321_ = l_Lean_mkFVar(v_v_1318_);
v___x_1322_ = ((size_t)1ULL);
v___x_1323_ = lean_usize_add(v_i_1315_, v___x_1322_);
v___x_1324_ = lean_array_uset(v_bs_x27_1320_, v_i_1315_, v___x_1321_);
v_i_1315_ = v___x_1323_;
v_bs_1316_ = v___x_1324_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0___boxed(lean_object* v_sz_1326_, lean_object* v_i_1327_, lean_object* v_bs_1328_){
_start:
{
size_t v_sz_boxed_1329_; size_t v_i_boxed_1330_; lean_object* v_res_1331_; 
v_sz_boxed_1329_ = lean_unbox_usize(v_sz_1326_);
lean_dec(v_sz_1326_);
v_i_boxed_1330_ = lean_unbox_usize(v_i_1327_);
lean_dec(v_i_1327_);
v_res_1331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(v_sz_boxed_1329_, v_i_boxed_1330_, v_bs_1328_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars(lean_object* v_lctx_1332_){
_start:
{
lean_object* v___x_1333_; size_t v_sz_1334_; size_t v___x_1335_; lean_object* v___x_1336_; 
v___x_1333_ = l_Lean_LocalContext_getFVarIds(v_lctx_1332_);
v_sz_1334_ = lean_array_size(v___x_1333_);
v___x_1335_ = ((size_t)0ULL);
v___x_1336_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(v_sz_1334_, v___x_1335_, v___x_1333_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars___boxed(lean_object* v_lctx_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Lean_LocalContext_getFVars(v_lctx_1337_);
lean_dec_ref(v_lctx_1337_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(lean_object* v_a_1339_){
_start:
{
lean_object* v_size_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v_size_1340_ = lean_ctor_get(v_a_1339_, 2);
v___x_1341_ = lean_unsigned_to_nat(0u);
v___x_1342_ = lean_nat_dec_eq(v_size_1340_, v___x_1341_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1343_ = lean_box(0);
v___x_1344_ = lean_unsigned_to_nat(1u);
v___x_1345_ = lean_nat_sub(v_size_1340_, v___x_1344_);
v___x_1346_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1343_, v_a_1339_, v___x_1345_);
lean_dec(v___x_1345_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Lean_PersistentArray_pop___redArg(v_a_1339_);
v_a_1339_ = v___x_1347_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_1346_, 1);
return v_a_1339_;
}
}
else
{
return v_a_1339_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(lean_object* v_k_1349_, lean_object* v_t_1350_){
_start:
{
if (lean_obj_tag(v_t_1350_) == 0)
{
lean_object* v_k_1351_; lean_object* v_v_1352_; lean_object* v_l_1353_; lean_object* v_r_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_2008_; 
v_k_1351_ = lean_ctor_get(v_t_1350_, 1);
v_v_1352_ = lean_ctor_get(v_t_1350_, 2);
v_l_1353_ = lean_ctor_get(v_t_1350_, 3);
v_r_1354_ = lean_ctor_get(v_t_1350_, 4);
v_isSharedCheck_2008_ = !lean_is_exclusive(v_t_1350_);
if (v_isSharedCheck_2008_ == 0)
{
lean_object* v_unused_2009_; 
v_unused_2009_ = lean_ctor_get(v_t_1350_, 0);
lean_dec(v_unused_2009_);
v___x_1356_ = v_t_1350_;
v_isShared_1357_ = v_isSharedCheck_2008_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_r_1354_);
lean_inc(v_l_1353_);
lean_inc(v_v_1352_);
lean_inc(v_k_1351_);
lean_dec(v_t_1350_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_2008_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
uint8_t v___x_1358_; 
v___x_1358_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1349_, v_k_1351_);
switch(v___x_1358_)
{
case 0:
{
lean_object* v_impl_1359_; lean_object* v___x_1360_; 
v_impl_1359_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_k_1349_, v_l_1353_);
v___x_1360_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1359_) == 0)
{
if (lean_obj_tag(v_r_1354_) == 0)
{
lean_object* v_size_1361_; lean_object* v_size_1362_; lean_object* v_k_1363_; lean_object* v_v_1364_; lean_object* v_l_1365_; lean_object* v_r_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; 
v_size_1361_ = lean_ctor_get(v_impl_1359_, 0);
v_size_1362_ = lean_ctor_get(v_r_1354_, 0);
v_k_1363_ = lean_ctor_get(v_r_1354_, 1);
v_v_1364_ = lean_ctor_get(v_r_1354_, 2);
v_l_1365_ = lean_ctor_get(v_r_1354_, 3);
lean_inc(v_l_1365_);
v_r_1366_ = lean_ctor_get(v_r_1354_, 4);
v___x_1367_ = lean_unsigned_to_nat(3u);
v___x_1368_ = lean_nat_mul(v___x_1367_, v_size_1361_);
v___x_1369_ = lean_nat_dec_lt(v___x_1368_, v_size_1362_);
lean_dec(v___x_1368_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1373_; 
lean_dec(v_l_1365_);
v___x_1370_ = lean_nat_add(v___x_1360_, v_size_1361_);
v___x_1371_ = lean_nat_add(v___x_1370_, v_size_1362_);
lean_dec(v___x_1370_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 3, v_impl_1359_);
lean_ctor_set(v___x_1356_, 0, v___x_1371_);
v___x_1373_ = v___x_1356_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1374_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1374_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1374_, 3, v_impl_1359_);
lean_ctor_set(v_reuseFailAlloc_1374_, 4, v_r_1354_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
else
{
lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1438_; 
lean_inc(v_r_1366_);
lean_inc(v_v_1364_);
lean_inc(v_k_1363_);
lean_inc(v_size_1362_);
v_isSharedCheck_1438_ = !lean_is_exclusive(v_r_1354_);
if (v_isSharedCheck_1438_ == 0)
{
lean_object* v_unused_1439_; lean_object* v_unused_1440_; lean_object* v_unused_1441_; lean_object* v_unused_1442_; lean_object* v_unused_1443_; 
v_unused_1439_ = lean_ctor_get(v_r_1354_, 4);
lean_dec(v_unused_1439_);
v_unused_1440_ = lean_ctor_get(v_r_1354_, 3);
lean_dec(v_unused_1440_);
v_unused_1441_ = lean_ctor_get(v_r_1354_, 2);
lean_dec(v_unused_1441_);
v_unused_1442_ = lean_ctor_get(v_r_1354_, 1);
lean_dec(v_unused_1442_);
v_unused_1443_ = lean_ctor_get(v_r_1354_, 0);
lean_dec(v_unused_1443_);
v___x_1376_ = v_r_1354_;
v_isShared_1377_ = v_isSharedCheck_1438_;
goto v_resetjp_1375_;
}
else
{
lean_dec(v_r_1354_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1438_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v_size_1378_; lean_object* v_k_1379_; lean_object* v_v_1380_; lean_object* v_l_1381_; lean_object* v_r_1382_; lean_object* v_size_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; uint8_t v___x_1386_; 
v_size_1378_ = lean_ctor_get(v_l_1365_, 0);
v_k_1379_ = lean_ctor_get(v_l_1365_, 1);
v_v_1380_ = lean_ctor_get(v_l_1365_, 2);
v_l_1381_ = lean_ctor_get(v_l_1365_, 3);
v_r_1382_ = lean_ctor_get(v_l_1365_, 4);
v_size_1383_ = lean_ctor_get(v_r_1366_, 0);
v___x_1384_ = lean_unsigned_to_nat(2u);
v___x_1385_ = lean_nat_mul(v___x_1384_, v_size_1383_);
v___x_1386_ = lean_nat_dec_lt(v_size_1378_, v___x_1385_);
lean_dec(v___x_1385_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1414_; 
lean_inc(v_r_1382_);
lean_inc(v_l_1381_);
lean_inc(v_v_1380_);
lean_inc(v_k_1379_);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_l_1365_);
if (v_isSharedCheck_1414_ == 0)
{
lean_object* v_unused_1415_; lean_object* v_unused_1416_; lean_object* v_unused_1417_; lean_object* v_unused_1418_; lean_object* v_unused_1419_; 
v_unused_1415_ = lean_ctor_get(v_l_1365_, 4);
lean_dec(v_unused_1415_);
v_unused_1416_ = lean_ctor_get(v_l_1365_, 3);
lean_dec(v_unused_1416_);
v_unused_1417_ = lean_ctor_get(v_l_1365_, 2);
lean_dec(v_unused_1417_);
v_unused_1418_ = lean_ctor_get(v_l_1365_, 1);
lean_dec(v_unused_1418_);
v_unused_1419_ = lean_ctor_get(v_l_1365_, 0);
lean_dec(v_unused_1419_);
v___x_1388_ = v_l_1365_;
v_isShared_1389_ = v_isSharedCheck_1414_;
goto v_resetjp_1387_;
}
else
{
lean_dec(v_l_1365_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1414_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___y_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1404_; 
v___x_1390_ = lean_nat_add(v___x_1360_, v_size_1361_);
v___x_1391_ = lean_nat_add(v___x_1390_, v_size_1362_);
lean_dec(v_size_1362_);
if (lean_obj_tag(v_l_1381_) == 0)
{
lean_object* v_size_1412_; 
v_size_1412_ = lean_ctor_get(v_l_1381_, 0);
lean_inc(v_size_1412_);
v___y_1404_ = v_size_1412_;
goto v___jp_1403_;
}
else
{
lean_object* v___x_1413_; 
v___x_1413_ = lean_unsigned_to_nat(0u);
v___y_1404_ = v___x_1413_;
goto v___jp_1403_;
}
v___jp_1392_:
{
lean_object* v___x_1396_; lean_object* v___x_1398_; 
v___x_1396_ = lean_nat_add(v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec(v___y_1394_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 4, v_r_1366_);
lean_ctor_set(v___x_1388_, 3, v_r_1382_);
lean_ctor_set(v___x_1388_, 2, v_v_1364_);
lean_ctor_set(v___x_1388_, 1, v_k_1363_);
lean_ctor_set(v___x_1388_, 0, v___x_1396_);
v___x_1398_ = v___x_1388_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v___x_1396_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_k_1363_);
lean_ctor_set(v_reuseFailAlloc_1402_, 2, v_v_1364_);
lean_ctor_set(v_reuseFailAlloc_1402_, 3, v_r_1382_);
lean_ctor_set(v_reuseFailAlloc_1402_, 4, v_r_1366_);
v___x_1398_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1400_; 
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 4, v___x_1398_);
lean_ctor_set(v___x_1376_, 3, v___y_1393_);
lean_ctor_set(v___x_1376_, 2, v_v_1380_);
lean_ctor_set(v___x_1376_, 1, v_k_1379_);
lean_ctor_set(v___x_1376_, 0, v___x_1391_);
v___x_1400_ = v___x_1376_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v_k_1379_);
lean_ctor_set(v_reuseFailAlloc_1401_, 2, v_v_1380_);
lean_ctor_set(v_reuseFailAlloc_1401_, 3, v___y_1393_);
lean_ctor_set(v_reuseFailAlloc_1401_, 4, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
v___jp_1403_:
{
lean_object* v___x_1405_; lean_object* v___x_1407_; 
v___x_1405_ = lean_nat_add(v___x_1390_, v___y_1404_);
lean_dec(v___y_1404_);
lean_dec(v___x_1390_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v_l_1381_);
lean_ctor_set(v___x_1356_, 3, v_impl_1359_);
lean_ctor_set(v___x_1356_, 0, v___x_1405_);
v___x_1407_ = v___x_1356_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1405_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1411_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1411_, 3, v_impl_1359_);
lean_ctor_set(v_reuseFailAlloc_1411_, 4, v_l_1381_);
v___x_1407_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_nat_add(v___x_1360_, v_size_1383_);
if (lean_obj_tag(v_r_1382_) == 0)
{
lean_object* v_size_1409_; 
v_size_1409_ = lean_ctor_get(v_r_1382_, 0);
lean_inc(v_size_1409_);
v___y_1393_ = v___x_1407_;
v___y_1394_ = v___x_1408_;
v___y_1395_ = v_size_1409_;
goto v___jp_1392_;
}
else
{
lean_object* v___x_1410_; 
v___x_1410_ = lean_unsigned_to_nat(0u);
v___y_1393_ = v___x_1407_;
v___y_1394_ = v___x_1408_;
v___y_1395_ = v___x_1410_;
goto v___jp_1392_;
}
}
}
}
}
else
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1424_; 
lean_del_object(v___x_1356_);
v___x_1420_ = lean_nat_add(v___x_1360_, v_size_1361_);
v___x_1421_ = lean_nat_add(v___x_1420_, v_size_1362_);
lean_dec(v_size_1362_);
v___x_1422_ = lean_nat_add(v___x_1420_, v_size_1378_);
lean_dec(v___x_1420_);
lean_inc_ref(v_impl_1359_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 4, v_l_1365_);
lean_ctor_set(v___x_1376_, 3, v_impl_1359_);
lean_ctor_set(v___x_1376_, 2, v_v_1352_);
lean_ctor_set(v___x_1376_, 1, v_k_1351_);
lean_ctor_set(v___x_1376_, 0, v___x_1422_);
v___x_1424_ = v___x_1376_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1422_);
lean_ctor_set(v_reuseFailAlloc_1437_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1437_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1437_, 3, v_impl_1359_);
lean_ctor_set(v_reuseFailAlloc_1437_, 4, v_l_1365_);
v___x_1424_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1431_; 
v_isSharedCheck_1431_ = !lean_is_exclusive(v_impl_1359_);
if (v_isSharedCheck_1431_ == 0)
{
lean_object* v_unused_1432_; lean_object* v_unused_1433_; lean_object* v_unused_1434_; lean_object* v_unused_1435_; lean_object* v_unused_1436_; 
v_unused_1432_ = lean_ctor_get(v_impl_1359_, 4);
lean_dec(v_unused_1432_);
v_unused_1433_ = lean_ctor_get(v_impl_1359_, 3);
lean_dec(v_unused_1433_);
v_unused_1434_ = lean_ctor_get(v_impl_1359_, 2);
lean_dec(v_unused_1434_);
v_unused_1435_ = lean_ctor_get(v_impl_1359_, 1);
lean_dec(v_unused_1435_);
v_unused_1436_ = lean_ctor_get(v_impl_1359_, 0);
lean_dec(v_unused_1436_);
v___x_1426_ = v_impl_1359_;
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
else
{
lean_dec(v_impl_1359_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 4, v_r_1366_);
lean_ctor_set(v___x_1426_, 3, v___x_1424_);
lean_ctor_set(v___x_1426_, 2, v_v_1364_);
lean_ctor_set(v___x_1426_, 1, v_k_1363_);
lean_ctor_set(v___x_1426_, 0, v___x_1421_);
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1421_);
lean_ctor_set(v_reuseFailAlloc_1430_, 1, v_k_1363_);
lean_ctor_set(v_reuseFailAlloc_1430_, 2, v_v_1364_);
lean_ctor_set(v_reuseFailAlloc_1430_, 3, v___x_1424_);
lean_ctor_set(v_reuseFailAlloc_1430_, 4, v_r_1366_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1444_; lean_object* v___x_1445_; lean_object* v___x_1447_; 
v_size_1444_ = lean_ctor_get(v_impl_1359_, 0);
v___x_1445_ = lean_nat_add(v___x_1360_, v_size_1444_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 3, v_impl_1359_);
lean_ctor_set(v___x_1356_, 0, v___x_1445_);
v___x_1447_ = v___x_1356_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1445_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1448_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1448_, 3, v_impl_1359_);
lean_ctor_set(v_reuseFailAlloc_1448_, 4, v_r_1354_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
else
{
if (lean_obj_tag(v_r_1354_) == 0)
{
lean_object* v_l_1449_; 
v_l_1449_ = lean_ctor_get(v_r_1354_, 3);
lean_inc(v_l_1449_);
if (lean_obj_tag(v_l_1449_) == 0)
{
lean_object* v_r_1450_; 
v_r_1450_ = lean_ctor_get(v_r_1354_, 4);
lean_inc(v_r_1450_);
if (lean_obj_tag(v_r_1450_) == 0)
{
lean_object* v_size_1451_; lean_object* v_k_1452_; lean_object* v_v_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1466_; 
v_size_1451_ = lean_ctor_get(v_r_1354_, 0);
v_k_1452_ = lean_ctor_get(v_r_1354_, 1);
v_v_1453_ = lean_ctor_get(v_r_1354_, 2);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_r_1354_);
if (v_isSharedCheck_1466_ == 0)
{
lean_object* v_unused_1467_; lean_object* v_unused_1468_; 
v_unused_1467_ = lean_ctor_get(v_r_1354_, 4);
lean_dec(v_unused_1467_);
v_unused_1468_ = lean_ctor_get(v_r_1354_, 3);
lean_dec(v_unused_1468_);
v___x_1455_ = v_r_1354_;
v_isShared_1456_ = v_isSharedCheck_1466_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_v_1453_);
lean_inc(v_k_1452_);
lean_inc(v_size_1451_);
lean_dec(v_r_1354_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1466_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v_size_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1461_; 
v_size_1457_ = lean_ctor_get(v_l_1449_, 0);
v___x_1458_ = lean_nat_add(v___x_1360_, v_size_1451_);
lean_dec(v_size_1451_);
v___x_1459_ = lean_nat_add(v___x_1360_, v_size_1457_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 4, v_l_1449_);
lean_ctor_set(v___x_1455_, 3, v_impl_1359_);
lean_ctor_set(v___x_1455_, 2, v_v_1352_);
lean_ctor_set(v___x_1455_, 1, v_k_1351_);
lean_ctor_set(v___x_1455_, 0, v___x_1459_);
v___x_1461_ = v___x_1455_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v___x_1459_);
lean_ctor_set(v_reuseFailAlloc_1465_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1465_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1465_, 3, v_impl_1359_);
lean_ctor_set(v_reuseFailAlloc_1465_, 4, v_l_1449_);
v___x_1461_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
lean_object* v___x_1463_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v_r_1450_);
lean_ctor_set(v___x_1356_, 3, v___x_1461_);
lean_ctor_set(v___x_1356_, 2, v_v_1453_);
lean_ctor_set(v___x_1356_, 1, v_k_1452_);
lean_ctor_set(v___x_1356_, 0, v___x_1458_);
v___x_1463_ = v___x_1356_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1458_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_k_1452_);
lean_ctor_set(v_reuseFailAlloc_1464_, 2, v_v_1453_);
lean_ctor_set(v_reuseFailAlloc_1464_, 3, v___x_1461_);
lean_ctor_set(v_reuseFailAlloc_1464_, 4, v_r_1450_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
else
{
lean_object* v_k_1469_; lean_object* v_v_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1493_; 
v_k_1469_ = lean_ctor_get(v_r_1354_, 1);
v_v_1470_ = lean_ctor_get(v_r_1354_, 2);
v_isSharedCheck_1493_ = !lean_is_exclusive(v_r_1354_);
if (v_isSharedCheck_1493_ == 0)
{
lean_object* v_unused_1494_; lean_object* v_unused_1495_; lean_object* v_unused_1496_; 
v_unused_1494_ = lean_ctor_get(v_r_1354_, 4);
lean_dec(v_unused_1494_);
v_unused_1495_ = lean_ctor_get(v_r_1354_, 3);
lean_dec(v_unused_1495_);
v_unused_1496_ = lean_ctor_get(v_r_1354_, 0);
lean_dec(v_unused_1496_);
v___x_1472_ = v_r_1354_;
v_isShared_1473_ = v_isSharedCheck_1493_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_v_1470_);
lean_inc(v_k_1469_);
lean_dec(v_r_1354_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1493_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v_k_1474_; lean_object* v_v_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1489_; 
v_k_1474_ = lean_ctor_get(v_l_1449_, 1);
v_v_1475_ = lean_ctor_get(v_l_1449_, 2);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_l_1449_);
if (v_isSharedCheck_1489_ == 0)
{
lean_object* v_unused_1490_; lean_object* v_unused_1491_; lean_object* v_unused_1492_; 
v_unused_1490_ = lean_ctor_get(v_l_1449_, 4);
lean_dec(v_unused_1490_);
v_unused_1491_ = lean_ctor_get(v_l_1449_, 3);
lean_dec(v_unused_1491_);
v_unused_1492_ = lean_ctor_get(v_l_1449_, 0);
lean_dec(v_unused_1492_);
v___x_1477_ = v_l_1449_;
v_isShared_1478_ = v_isSharedCheck_1489_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_v_1475_);
lean_inc(v_k_1474_);
lean_dec(v_l_1449_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1489_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1479_ = lean_unsigned_to_nat(3u);
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 4, v_r_1450_);
lean_ctor_set(v___x_1477_, 3, v_r_1450_);
lean_ctor_set(v___x_1477_, 2, v_v_1352_);
lean_ctor_set(v___x_1477_, 1, v_k_1351_);
lean_ctor_set(v___x_1477_, 0, v___x_1360_);
v___x_1481_ = v___x_1477_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1488_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1488_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1488_, 3, v_r_1450_);
lean_ctor_set(v_reuseFailAlloc_1488_, 4, v_r_1450_);
v___x_1481_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
lean_object* v___x_1483_; 
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 3, v_r_1450_);
lean_ctor_set(v___x_1472_, 0, v___x_1360_);
v___x_1483_ = v___x_1472_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v_k_1469_);
lean_ctor_set(v_reuseFailAlloc_1487_, 2, v_v_1470_);
lean_ctor_set(v_reuseFailAlloc_1487_, 3, v_r_1450_);
lean_ctor_set(v_reuseFailAlloc_1487_, 4, v_r_1450_);
v___x_1483_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1485_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v___x_1483_);
lean_ctor_set(v___x_1356_, 3, v___x_1481_);
lean_ctor_set(v___x_1356_, 2, v_v_1475_);
lean_ctor_set(v___x_1356_, 1, v_k_1474_);
lean_ctor_set(v___x_1356_, 0, v___x_1479_);
v___x_1485_ = v___x_1356_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v_k_1474_);
lean_ctor_set(v_reuseFailAlloc_1486_, 2, v_v_1475_);
lean_ctor_set(v_reuseFailAlloc_1486_, 3, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1486_, 4, v___x_1483_);
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
lean_object* v_r_1497_; 
v_r_1497_ = lean_ctor_get(v_r_1354_, 4);
lean_inc(v_r_1497_);
if (lean_obj_tag(v_r_1497_) == 0)
{
lean_object* v_k_1498_; lean_object* v_v_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1510_; 
v_k_1498_ = lean_ctor_get(v_r_1354_, 1);
v_v_1499_ = lean_ctor_get(v_r_1354_, 2);
v_isSharedCheck_1510_ = !lean_is_exclusive(v_r_1354_);
if (v_isSharedCheck_1510_ == 0)
{
lean_object* v_unused_1511_; lean_object* v_unused_1512_; lean_object* v_unused_1513_; 
v_unused_1511_ = lean_ctor_get(v_r_1354_, 4);
lean_dec(v_unused_1511_);
v_unused_1512_ = lean_ctor_get(v_r_1354_, 3);
lean_dec(v_unused_1512_);
v_unused_1513_ = lean_ctor_get(v_r_1354_, 0);
lean_dec(v_unused_1513_);
v___x_1501_ = v_r_1354_;
v_isShared_1502_ = v_isSharedCheck_1510_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_v_1499_);
lean_inc(v_k_1498_);
lean_dec(v_r_1354_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1510_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1503_; lean_object* v___x_1505_; 
v___x_1503_ = lean_unsigned_to_nat(3u);
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 4, v_l_1449_);
lean_ctor_set(v___x_1501_, 2, v_v_1352_);
lean_ctor_set(v___x_1501_, 1, v_k_1351_);
lean_ctor_set(v___x_1501_, 0, v___x_1360_);
v___x_1505_ = v___x_1501_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1509_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1509_, 3, v_l_1449_);
lean_ctor_set(v_reuseFailAlloc_1509_, 4, v_l_1449_);
v___x_1505_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
lean_object* v___x_1507_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v_r_1497_);
lean_ctor_set(v___x_1356_, 3, v___x_1505_);
lean_ctor_set(v___x_1356_, 2, v_v_1499_);
lean_ctor_set(v___x_1356_, 1, v_k_1498_);
lean_ctor_set(v___x_1356_, 0, v___x_1503_);
v___x_1507_ = v___x_1356_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1503_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v_k_1498_);
lean_ctor_set(v_reuseFailAlloc_1508_, 2, v_v_1499_);
lean_ctor_set(v_reuseFailAlloc_1508_, 3, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1508_, 4, v_r_1497_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
else
{
lean_object* v_size_1514_; lean_object* v_k_1515_; lean_object* v_v_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1527_; 
v_size_1514_ = lean_ctor_get(v_r_1354_, 0);
v_k_1515_ = lean_ctor_get(v_r_1354_, 1);
v_v_1516_ = lean_ctor_get(v_r_1354_, 2);
v_isSharedCheck_1527_ = !lean_is_exclusive(v_r_1354_);
if (v_isSharedCheck_1527_ == 0)
{
lean_object* v_unused_1528_; lean_object* v_unused_1529_; 
v_unused_1528_ = lean_ctor_get(v_r_1354_, 4);
lean_dec(v_unused_1528_);
v_unused_1529_ = lean_ctor_get(v_r_1354_, 3);
lean_dec(v_unused_1529_);
v___x_1518_ = v_r_1354_;
v_isShared_1519_ = v_isSharedCheck_1527_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_v_1516_);
lean_inc(v_k_1515_);
lean_inc(v_size_1514_);
lean_dec(v_r_1354_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1527_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
lean_ctor_set(v___x_1518_, 3, v_r_1497_);
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_size_1514_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v_k_1515_);
lean_ctor_set(v_reuseFailAlloc_1526_, 2, v_v_1516_);
lean_ctor_set(v_reuseFailAlloc_1526_, 3, v_r_1497_);
lean_ctor_set(v_reuseFailAlloc_1526_, 4, v_r_1497_);
v___x_1521_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_object* v___x_1522_; lean_object* v___x_1524_; 
v___x_1522_ = lean_unsigned_to_nat(2u);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v___x_1521_);
lean_ctor_set(v___x_1356_, 3, v_r_1497_);
lean_ctor_set(v___x_1356_, 0, v___x_1522_);
v___x_1524_ = v___x_1356_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1522_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1525_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1525_, 3, v_r_1497_);
lean_ctor_set(v_reuseFailAlloc_1525_, 4, v___x_1521_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
}
}
}
}
else
{
lean_object* v___x_1531_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 3, v_r_1354_);
lean_ctor_set(v___x_1356_, 0, v___x_1360_);
v___x_1531_ = v___x_1356_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1532_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1532_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1532_, 3, v_r_1354_);
lean_ctor_set(v_reuseFailAlloc_1532_, 4, v_r_1354_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
case 1:
{
lean_del_object(v___x_1356_);
lean_dec(v_v_1352_);
lean_dec(v_k_1351_);
if (lean_obj_tag(v_l_1353_) == 0)
{
if (lean_obj_tag(v_r_1354_) == 0)
{
lean_object* v_size_1533_; lean_object* v_k_1534_; lean_object* v_v_1535_; lean_object* v_l_1536_; lean_object* v_r_1537_; lean_object* v_size_1538_; lean_object* v_k_1539_; lean_object* v_v_1540_; lean_object* v_l_1541_; lean_object* v_r_1542_; lean_object* v___x_1543_; uint8_t v___x_1544_; 
v_size_1533_ = lean_ctor_get(v_l_1353_, 0);
v_k_1534_ = lean_ctor_get(v_l_1353_, 1);
v_v_1535_ = lean_ctor_get(v_l_1353_, 2);
v_l_1536_ = lean_ctor_get(v_l_1353_, 3);
v_r_1537_ = lean_ctor_get(v_l_1353_, 4);
lean_inc(v_r_1537_);
v_size_1538_ = lean_ctor_get(v_r_1354_, 0);
v_k_1539_ = lean_ctor_get(v_r_1354_, 1);
v_v_1540_ = lean_ctor_get(v_r_1354_, 2);
v_l_1541_ = lean_ctor_get(v_r_1354_, 3);
lean_inc(v_l_1541_);
v_r_1542_ = lean_ctor_get(v_r_1354_, 4);
v___x_1543_ = lean_unsigned_to_nat(1u);
v___x_1544_ = lean_nat_dec_lt(v_size_1533_, v_size_1538_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1680_; 
lean_inc(v_l_1536_);
lean_inc(v_v_1535_);
lean_inc(v_k_1534_);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_l_1353_);
if (v_isSharedCheck_1680_ == 0)
{
lean_object* v_unused_1681_; lean_object* v_unused_1682_; lean_object* v_unused_1683_; lean_object* v_unused_1684_; lean_object* v_unused_1685_; 
v_unused_1681_ = lean_ctor_get(v_l_1353_, 4);
lean_dec(v_unused_1681_);
v_unused_1682_ = lean_ctor_get(v_l_1353_, 3);
lean_dec(v_unused_1682_);
v_unused_1683_ = lean_ctor_get(v_l_1353_, 2);
lean_dec(v_unused_1683_);
v_unused_1684_ = lean_ctor_get(v_l_1353_, 1);
lean_dec(v_unused_1684_);
v_unused_1685_ = lean_ctor_get(v_l_1353_, 0);
lean_dec(v_unused_1685_);
v___x_1546_ = v_l_1353_;
v_isShared_1547_ = v_isSharedCheck_1680_;
goto v_resetjp_1545_;
}
else
{
lean_dec(v_l_1353_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1680_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1548_; lean_object* v_tree_1549_; 
v___x_1548_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_1534_, v_v_1535_, v_l_1536_, v_r_1537_);
v_tree_1549_ = lean_ctor_get(v___x_1548_, 2);
if (lean_obj_tag(v_tree_1549_) == 0)
{
lean_object* v_k_1550_; lean_object* v_v_1551_; lean_object* v_size_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
lean_inc_ref(v_tree_1549_);
v_k_1550_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_k_1550_);
v_v_1551_ = lean_ctor_get(v___x_1548_, 1);
lean_inc(v_v_1551_);
lean_dec_ref(v___x_1548_);
v_size_1552_ = lean_ctor_get(v_tree_1549_, 0);
v___x_1553_ = lean_unsigned_to_nat(3u);
v___x_1554_ = lean_nat_mul(v___x_1553_, v_size_1552_);
v___x_1555_ = lean_nat_dec_lt(v___x_1554_, v_size_1538_);
lean_dec(v___x_1554_);
if (v___x_1555_ == 0)
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1559_; 
lean_dec(v_l_1541_);
v___x_1556_ = lean_nat_add(v___x_1543_, v_size_1552_);
v___x_1557_ = lean_nat_add(v___x_1556_, v_size_1538_);
lean_dec(v___x_1556_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v_r_1354_);
lean_ctor_set(v___x_1546_, 3, v_tree_1549_);
lean_ctor_set(v___x_1546_, 2, v_v_1551_);
lean_ctor_set(v___x_1546_, 1, v_k_1550_);
lean_ctor_set(v___x_1546_, 0, v___x_1557_);
v___x_1559_ = v___x_1546_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1557_);
lean_ctor_set(v_reuseFailAlloc_1560_, 1, v_k_1550_);
lean_ctor_set(v_reuseFailAlloc_1560_, 2, v_v_1551_);
lean_ctor_set(v_reuseFailAlloc_1560_, 3, v_tree_1549_);
lean_ctor_set(v_reuseFailAlloc_1560_, 4, v_r_1354_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
else
{
lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1615_; 
lean_inc(v_r_1542_);
lean_inc(v_v_1540_);
lean_inc(v_k_1539_);
lean_inc(v_size_1538_);
v_isSharedCheck_1615_ = !lean_is_exclusive(v_r_1354_);
if (v_isSharedCheck_1615_ == 0)
{
lean_object* v_unused_1616_; lean_object* v_unused_1617_; lean_object* v_unused_1618_; lean_object* v_unused_1619_; lean_object* v_unused_1620_; 
v_unused_1616_ = lean_ctor_get(v_r_1354_, 4);
lean_dec(v_unused_1616_);
v_unused_1617_ = lean_ctor_get(v_r_1354_, 3);
lean_dec(v_unused_1617_);
v_unused_1618_ = lean_ctor_get(v_r_1354_, 2);
lean_dec(v_unused_1618_);
v_unused_1619_ = lean_ctor_get(v_r_1354_, 1);
lean_dec(v_unused_1619_);
v_unused_1620_ = lean_ctor_get(v_r_1354_, 0);
lean_dec(v_unused_1620_);
v___x_1562_ = v_r_1354_;
v_isShared_1563_ = v_isSharedCheck_1615_;
goto v_resetjp_1561_;
}
else
{
lean_dec(v_r_1354_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1615_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v_size_1564_; lean_object* v_k_1565_; lean_object* v_v_1566_; lean_object* v_l_1567_; lean_object* v_r_1568_; lean_object* v_size_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v_size_1564_ = lean_ctor_get(v_l_1541_, 0);
v_k_1565_ = lean_ctor_get(v_l_1541_, 1);
v_v_1566_ = lean_ctor_get(v_l_1541_, 2);
v_l_1567_ = lean_ctor_get(v_l_1541_, 3);
v_r_1568_ = lean_ctor_get(v_l_1541_, 4);
v_size_1569_ = lean_ctor_get(v_r_1542_, 0);
v___x_1570_ = lean_unsigned_to_nat(2u);
v___x_1571_ = lean_nat_mul(v___x_1570_, v_size_1569_);
v___x_1572_ = lean_nat_dec_lt(v_size_1564_, v___x_1571_);
lean_dec(v___x_1571_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1600_; 
lean_inc(v_r_1568_);
lean_inc(v_l_1567_);
lean_inc(v_v_1566_);
lean_inc(v_k_1565_);
v_isSharedCheck_1600_ = !lean_is_exclusive(v_l_1541_);
if (v_isSharedCheck_1600_ == 0)
{
lean_object* v_unused_1601_; lean_object* v_unused_1602_; lean_object* v_unused_1603_; lean_object* v_unused_1604_; lean_object* v_unused_1605_; 
v_unused_1601_ = lean_ctor_get(v_l_1541_, 4);
lean_dec(v_unused_1601_);
v_unused_1602_ = lean_ctor_get(v_l_1541_, 3);
lean_dec(v_unused_1602_);
v_unused_1603_ = lean_ctor_get(v_l_1541_, 2);
lean_dec(v_unused_1603_);
v_unused_1604_ = lean_ctor_get(v_l_1541_, 1);
lean_dec(v_unused_1604_);
v_unused_1605_ = lean_ctor_get(v_l_1541_, 0);
lean_dec(v_unused_1605_);
v___x_1574_ = v_l_1541_;
v_isShared_1575_ = v_isSharedCheck_1600_;
goto v_resetjp_1573_;
}
else
{
lean_dec(v_l_1541_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1600_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___y_1579_; lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1590_; 
v___x_1576_ = lean_nat_add(v___x_1543_, v_size_1552_);
v___x_1577_ = lean_nat_add(v___x_1576_, v_size_1538_);
lean_dec(v_size_1538_);
if (lean_obj_tag(v_l_1567_) == 0)
{
lean_object* v_size_1598_; 
v_size_1598_ = lean_ctor_get(v_l_1567_, 0);
lean_inc(v_size_1598_);
v___y_1590_ = v_size_1598_;
goto v___jp_1589_;
}
else
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_unsigned_to_nat(0u);
v___y_1590_ = v___x_1599_;
goto v___jp_1589_;
}
v___jp_1578_:
{
lean_object* v___x_1582_; lean_object* v___x_1584_; 
v___x_1582_ = lean_nat_add(v___y_1579_, v___y_1581_);
lean_dec(v___y_1581_);
lean_dec(v___y_1579_);
if (v_isShared_1575_ == 0)
{
lean_ctor_set(v___x_1574_, 4, v_r_1542_);
lean_ctor_set(v___x_1574_, 3, v_r_1568_);
lean_ctor_set(v___x_1574_, 2, v_v_1540_);
lean_ctor_set(v___x_1574_, 1, v_k_1539_);
lean_ctor_set(v___x_1574_, 0, v___x_1582_);
v___x_1584_ = v___x_1574_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1582_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v_k_1539_);
lean_ctor_set(v_reuseFailAlloc_1588_, 2, v_v_1540_);
lean_ctor_set(v_reuseFailAlloc_1588_, 3, v_r_1568_);
lean_ctor_set(v_reuseFailAlloc_1588_, 4, v_r_1542_);
v___x_1584_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
lean_object* v___x_1586_; 
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 4, v___x_1584_);
lean_ctor_set(v___x_1562_, 3, v___y_1580_);
lean_ctor_set(v___x_1562_, 2, v_v_1566_);
lean_ctor_set(v___x_1562_, 1, v_k_1565_);
lean_ctor_set(v___x_1562_, 0, v___x_1577_);
v___x_1586_ = v___x_1562_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1577_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v_k_1565_);
lean_ctor_set(v_reuseFailAlloc_1587_, 2, v_v_1566_);
lean_ctor_set(v_reuseFailAlloc_1587_, 3, v___y_1580_);
lean_ctor_set(v_reuseFailAlloc_1587_, 4, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
v___jp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1593_; 
v___x_1591_ = lean_nat_add(v___x_1576_, v___y_1590_);
lean_dec(v___y_1590_);
lean_dec(v___x_1576_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v_l_1567_);
lean_ctor_set(v___x_1546_, 3, v_tree_1549_);
lean_ctor_set(v___x_1546_, 2, v_v_1551_);
lean_ctor_set(v___x_1546_, 1, v_k_1550_);
lean_ctor_set(v___x_1546_, 0, v___x_1591_);
v___x_1593_ = v___x_1546_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1591_);
lean_ctor_set(v_reuseFailAlloc_1597_, 1, v_k_1550_);
lean_ctor_set(v_reuseFailAlloc_1597_, 2, v_v_1551_);
lean_ctor_set(v_reuseFailAlloc_1597_, 3, v_tree_1549_);
lean_ctor_set(v_reuseFailAlloc_1597_, 4, v_l_1567_);
v___x_1593_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_nat_add(v___x_1543_, v_size_1569_);
if (lean_obj_tag(v_r_1568_) == 0)
{
lean_object* v_size_1595_; 
v_size_1595_ = lean_ctor_get(v_r_1568_, 0);
lean_inc(v_size_1595_);
v___y_1579_ = v___x_1594_;
v___y_1580_ = v___x_1593_;
v___y_1581_ = v_size_1595_;
goto v___jp_1578_;
}
else
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_unsigned_to_nat(0u);
v___y_1579_ = v___x_1594_;
v___y_1580_ = v___x_1593_;
v___y_1581_ = v___x_1596_;
goto v___jp_1578_;
}
}
}
}
}
else
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1610_; 
v___x_1606_ = lean_nat_add(v___x_1543_, v_size_1552_);
v___x_1607_ = lean_nat_add(v___x_1606_, v_size_1538_);
lean_dec(v_size_1538_);
v___x_1608_ = lean_nat_add(v___x_1606_, v_size_1564_);
lean_dec(v___x_1606_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 4, v_l_1541_);
lean_ctor_set(v___x_1562_, 3, v_tree_1549_);
lean_ctor_set(v___x_1562_, 2, v_v_1551_);
lean_ctor_set(v___x_1562_, 1, v_k_1550_);
lean_ctor_set(v___x_1562_, 0, v___x_1608_);
v___x_1610_ = v___x_1562_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v___x_1608_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_k_1550_);
lean_ctor_set(v_reuseFailAlloc_1614_, 2, v_v_1551_);
lean_ctor_set(v_reuseFailAlloc_1614_, 3, v_tree_1549_);
lean_ctor_set(v_reuseFailAlloc_1614_, 4, v_l_1541_);
v___x_1610_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
lean_object* v___x_1612_; 
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v_r_1542_);
lean_ctor_set(v___x_1546_, 3, v___x_1610_);
lean_ctor_set(v___x_1546_, 2, v_v_1540_);
lean_ctor_set(v___x_1546_, 1, v_k_1539_);
lean_ctor_set(v___x_1546_, 0, v___x_1607_);
v___x_1612_ = v___x_1546_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1607_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v_k_1539_);
lean_ctor_set(v_reuseFailAlloc_1613_, 2, v_v_1540_);
lean_ctor_set(v_reuseFailAlloc_1613_, 3, v___x_1610_);
lean_ctor_set(v_reuseFailAlloc_1613_, 4, v_r_1542_);
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
else
{
lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1674_; 
lean_inc(v_r_1542_);
lean_inc(v_v_1540_);
lean_inc(v_k_1539_);
lean_inc(v_size_1538_);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_r_1354_);
if (v_isSharedCheck_1674_ == 0)
{
lean_object* v_unused_1675_; lean_object* v_unused_1676_; lean_object* v_unused_1677_; lean_object* v_unused_1678_; lean_object* v_unused_1679_; 
v_unused_1675_ = lean_ctor_get(v_r_1354_, 4);
lean_dec(v_unused_1675_);
v_unused_1676_ = lean_ctor_get(v_r_1354_, 3);
lean_dec(v_unused_1676_);
v_unused_1677_ = lean_ctor_get(v_r_1354_, 2);
lean_dec(v_unused_1677_);
v_unused_1678_ = lean_ctor_get(v_r_1354_, 1);
lean_dec(v_unused_1678_);
v_unused_1679_ = lean_ctor_get(v_r_1354_, 0);
lean_dec(v_unused_1679_);
v___x_1622_ = v_r_1354_;
v_isShared_1623_ = v_isSharedCheck_1674_;
goto v_resetjp_1621_;
}
else
{
lean_dec(v_r_1354_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1674_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
if (lean_obj_tag(v_l_1541_) == 0)
{
if (lean_obj_tag(v_r_1542_) == 0)
{
lean_object* v_k_1624_; lean_object* v_v_1625_; lean_object* v_size_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1630_; 
lean_inc(v_tree_1549_);
v_k_1624_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_k_1624_);
v_v_1625_ = lean_ctor_get(v___x_1548_, 1);
lean_inc(v_v_1625_);
lean_dec_ref(v___x_1548_);
v_size_1626_ = lean_ctor_get(v_l_1541_, 0);
v___x_1627_ = lean_nat_add(v___x_1543_, v_size_1538_);
lean_dec(v_size_1538_);
v___x_1628_ = lean_nat_add(v___x_1543_, v_size_1626_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 4, v_l_1541_);
lean_ctor_set(v___x_1622_, 3, v_tree_1549_);
lean_ctor_set(v___x_1622_, 2, v_v_1625_);
lean_ctor_set(v___x_1622_, 1, v_k_1624_);
lean_ctor_set(v___x_1622_, 0, v___x_1628_);
v___x_1630_ = v___x_1622_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1628_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v_k_1624_);
lean_ctor_set(v_reuseFailAlloc_1634_, 2, v_v_1625_);
lean_ctor_set(v_reuseFailAlloc_1634_, 3, v_tree_1549_);
lean_ctor_set(v_reuseFailAlloc_1634_, 4, v_l_1541_);
v___x_1630_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
lean_object* v___x_1632_; 
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v_r_1542_);
lean_ctor_set(v___x_1546_, 3, v___x_1630_);
lean_ctor_set(v___x_1546_, 2, v_v_1540_);
lean_ctor_set(v___x_1546_, 1, v_k_1539_);
lean_ctor_set(v___x_1546_, 0, v___x_1627_);
v___x_1632_ = v___x_1546_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1627_);
lean_ctor_set(v_reuseFailAlloc_1633_, 1, v_k_1539_);
lean_ctor_set(v_reuseFailAlloc_1633_, 2, v_v_1540_);
lean_ctor_set(v_reuseFailAlloc_1633_, 3, v___x_1630_);
lean_ctor_set(v_reuseFailAlloc_1633_, 4, v_r_1542_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
else
{
lean_object* v_k_1635_; lean_object* v_v_1636_; lean_object* v_k_1637_; lean_object* v_v_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1652_; 
lean_dec(v_size_1538_);
v_k_1635_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_k_1635_);
v_v_1636_ = lean_ctor_get(v___x_1548_, 1);
lean_inc(v_v_1636_);
lean_dec_ref(v___x_1548_);
v_k_1637_ = lean_ctor_get(v_l_1541_, 1);
v_v_1638_ = lean_ctor_get(v_l_1541_, 2);
v_isSharedCheck_1652_ = !lean_is_exclusive(v_l_1541_);
if (v_isSharedCheck_1652_ == 0)
{
lean_object* v_unused_1653_; lean_object* v_unused_1654_; lean_object* v_unused_1655_; 
v_unused_1653_ = lean_ctor_get(v_l_1541_, 4);
lean_dec(v_unused_1653_);
v_unused_1654_ = lean_ctor_get(v_l_1541_, 3);
lean_dec(v_unused_1654_);
v_unused_1655_ = lean_ctor_get(v_l_1541_, 0);
lean_dec(v_unused_1655_);
v___x_1640_ = v_l_1541_;
v_isShared_1641_ = v_isSharedCheck_1652_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_v_1638_);
lean_inc(v_k_1637_);
lean_dec(v_l_1541_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1652_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1642_; lean_object* v___x_1644_; 
v___x_1642_ = lean_unsigned_to_nat(3u);
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 4, v_r_1542_);
lean_ctor_set(v___x_1640_, 3, v_r_1542_);
lean_ctor_set(v___x_1640_, 2, v_v_1636_);
lean_ctor_set(v___x_1640_, 1, v_k_1635_);
lean_ctor_set(v___x_1640_, 0, v___x_1543_);
v___x_1644_ = v___x_1640_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v_k_1635_);
lean_ctor_set(v_reuseFailAlloc_1651_, 2, v_v_1636_);
lean_ctor_set(v_reuseFailAlloc_1651_, 3, v_r_1542_);
lean_ctor_set(v_reuseFailAlloc_1651_, 4, v_r_1542_);
v___x_1644_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
lean_object* v___x_1646_; 
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 3, v_r_1542_);
lean_ctor_set(v___x_1622_, 0, v___x_1543_);
v___x_1646_ = v___x_1622_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1650_, 1, v_k_1539_);
lean_ctor_set(v_reuseFailAlloc_1650_, 2, v_v_1540_);
lean_ctor_set(v_reuseFailAlloc_1650_, 3, v_r_1542_);
lean_ctor_set(v_reuseFailAlloc_1650_, 4, v_r_1542_);
v___x_1646_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
lean_object* v___x_1648_; 
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v___x_1646_);
lean_ctor_set(v___x_1546_, 3, v___x_1644_);
lean_ctor_set(v___x_1546_, 2, v_v_1638_);
lean_ctor_set(v___x_1546_, 1, v_k_1637_);
lean_ctor_set(v___x_1546_, 0, v___x_1642_);
v___x_1648_ = v___x_1546_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v___x_1642_);
lean_ctor_set(v_reuseFailAlloc_1649_, 1, v_k_1637_);
lean_ctor_set(v_reuseFailAlloc_1649_, 2, v_v_1638_);
lean_ctor_set(v_reuseFailAlloc_1649_, 3, v___x_1644_);
lean_ctor_set(v_reuseFailAlloc_1649_, 4, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1542_) == 0)
{
lean_object* v_k_1656_; lean_object* v_v_1657_; lean_object* v___x_1658_; lean_object* v___x_1660_; 
lean_dec(v_size_1538_);
v_k_1656_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_k_1656_);
v_v_1657_ = lean_ctor_get(v___x_1548_, 1);
lean_inc(v_v_1657_);
lean_dec_ref(v___x_1548_);
v___x_1658_ = lean_unsigned_to_nat(3u);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 4, v_l_1541_);
lean_ctor_set(v___x_1622_, 2, v_v_1657_);
lean_ctor_set(v___x_1622_, 1, v_k_1656_);
lean_ctor_set(v___x_1622_, 0, v___x_1543_);
v___x_1660_ = v___x_1622_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1664_, 1, v_k_1656_);
lean_ctor_set(v_reuseFailAlloc_1664_, 2, v_v_1657_);
lean_ctor_set(v_reuseFailAlloc_1664_, 3, v_l_1541_);
lean_ctor_set(v_reuseFailAlloc_1664_, 4, v_l_1541_);
v___x_1660_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1662_; 
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v_r_1542_);
lean_ctor_set(v___x_1546_, 3, v___x_1660_);
lean_ctor_set(v___x_1546_, 2, v_v_1540_);
lean_ctor_set(v___x_1546_, 1, v_k_1539_);
lean_ctor_set(v___x_1546_, 0, v___x_1658_);
v___x_1662_ = v___x_1546_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1658_);
lean_ctor_set(v_reuseFailAlloc_1663_, 1, v_k_1539_);
lean_ctor_set(v_reuseFailAlloc_1663_, 2, v_v_1540_);
lean_ctor_set(v_reuseFailAlloc_1663_, 3, v___x_1660_);
lean_ctor_set(v_reuseFailAlloc_1663_, 4, v_r_1542_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
else
{
lean_object* v_k_1665_; lean_object* v_v_1666_; lean_object* v___x_1668_; 
v_k_1665_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_k_1665_);
v_v_1666_ = lean_ctor_get(v___x_1548_, 1);
lean_inc(v_v_1666_);
lean_dec_ref(v___x_1548_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 3, v_r_1542_);
v___x_1668_ = v___x_1622_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_size_1538_);
lean_ctor_set(v_reuseFailAlloc_1673_, 1, v_k_1539_);
lean_ctor_set(v_reuseFailAlloc_1673_, 2, v_v_1540_);
lean_ctor_set(v_reuseFailAlloc_1673_, 3, v_r_1542_);
lean_ctor_set(v_reuseFailAlloc_1673_, 4, v_r_1542_);
v___x_1668_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
lean_object* v___x_1669_; lean_object* v___x_1671_; 
v___x_1669_ = lean_unsigned_to_nat(2u);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v___x_1668_);
lean_ctor_set(v___x_1546_, 3, v_r_1542_);
lean_ctor_set(v___x_1546_, 2, v_v_1666_);
lean_ctor_set(v___x_1546_, 1, v_k_1665_);
lean_ctor_set(v___x_1546_, 0, v___x_1669_);
v___x_1671_ = v___x_1546_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1669_);
lean_ctor_set(v_reuseFailAlloc_1672_, 1, v_k_1665_);
lean_ctor_set(v_reuseFailAlloc_1672_, 2, v_v_1666_);
lean_ctor_set(v_reuseFailAlloc_1672_, 3, v_r_1542_);
lean_ctor_set(v_reuseFailAlloc_1672_, 4, v___x_1668_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
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
lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1838_; 
lean_inc(v_r_1542_);
lean_inc(v_v_1540_);
lean_inc(v_k_1539_);
v_isSharedCheck_1838_ = !lean_is_exclusive(v_r_1354_);
if (v_isSharedCheck_1838_ == 0)
{
lean_object* v_unused_1839_; lean_object* v_unused_1840_; lean_object* v_unused_1841_; lean_object* v_unused_1842_; lean_object* v_unused_1843_; 
v_unused_1839_ = lean_ctor_get(v_r_1354_, 4);
lean_dec(v_unused_1839_);
v_unused_1840_ = lean_ctor_get(v_r_1354_, 3);
lean_dec(v_unused_1840_);
v_unused_1841_ = lean_ctor_get(v_r_1354_, 2);
lean_dec(v_unused_1841_);
v_unused_1842_ = lean_ctor_get(v_r_1354_, 1);
lean_dec(v_unused_1842_);
v_unused_1843_ = lean_ctor_get(v_r_1354_, 0);
lean_dec(v_unused_1843_);
v___x_1687_ = v_r_1354_;
v_isShared_1688_ = v_isSharedCheck_1838_;
goto v_resetjp_1686_;
}
else
{
lean_dec(v_r_1354_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1838_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1689_; lean_object* v_tree_1690_; 
v___x_1689_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_1539_, v_v_1540_, v_l_1541_, v_r_1542_);
v_tree_1690_ = lean_ctor_get(v___x_1689_, 2);
lean_inc(v_tree_1690_);
if (lean_obj_tag(v_tree_1690_) == 0)
{
lean_object* v_k_1691_; lean_object* v_v_1692_; lean_object* v_size_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; uint8_t v___x_1696_; 
v_k_1691_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_k_1691_);
v_v_1692_ = lean_ctor_get(v___x_1689_, 1);
lean_inc(v_v_1692_);
lean_dec_ref(v___x_1689_);
v_size_1693_ = lean_ctor_get(v_tree_1690_, 0);
v___x_1694_ = lean_unsigned_to_nat(3u);
v___x_1695_ = lean_nat_mul(v___x_1694_, v_size_1693_);
v___x_1696_ = lean_nat_dec_lt(v___x_1695_, v_size_1533_);
lean_dec(v___x_1695_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1700_; 
lean_dec(v_r_1537_);
v___x_1697_ = lean_nat_add(v___x_1543_, v_size_1533_);
v___x_1698_ = lean_nat_add(v___x_1697_, v_size_1693_);
lean_dec(v___x_1697_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 4, v_tree_1690_);
lean_ctor_set(v___x_1687_, 3, v_l_1353_);
lean_ctor_set(v___x_1687_, 2, v_v_1692_);
lean_ctor_set(v___x_1687_, 1, v_k_1691_);
lean_ctor_set(v___x_1687_, 0, v___x_1698_);
v___x_1700_ = v___x_1687_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v___x_1698_);
lean_ctor_set(v_reuseFailAlloc_1701_, 1, v_k_1691_);
lean_ctor_set(v_reuseFailAlloc_1701_, 2, v_v_1692_);
lean_ctor_set(v_reuseFailAlloc_1701_, 3, v_l_1353_);
lean_ctor_set(v_reuseFailAlloc_1701_, 4, v_tree_1690_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
else
{
lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1767_; 
lean_inc(v_l_1536_);
lean_inc(v_v_1535_);
lean_inc(v_k_1534_);
lean_inc(v_size_1533_);
v_isSharedCheck_1767_ = !lean_is_exclusive(v_l_1353_);
if (v_isSharedCheck_1767_ == 0)
{
lean_object* v_unused_1768_; lean_object* v_unused_1769_; lean_object* v_unused_1770_; lean_object* v_unused_1771_; lean_object* v_unused_1772_; 
v_unused_1768_ = lean_ctor_get(v_l_1353_, 4);
lean_dec(v_unused_1768_);
v_unused_1769_ = lean_ctor_get(v_l_1353_, 3);
lean_dec(v_unused_1769_);
v_unused_1770_ = lean_ctor_get(v_l_1353_, 2);
lean_dec(v_unused_1770_);
v_unused_1771_ = lean_ctor_get(v_l_1353_, 1);
lean_dec(v_unused_1771_);
v_unused_1772_ = lean_ctor_get(v_l_1353_, 0);
lean_dec(v_unused_1772_);
v___x_1703_ = v_l_1353_;
v_isShared_1704_ = v_isSharedCheck_1767_;
goto v_resetjp_1702_;
}
else
{
lean_dec(v_l_1353_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1767_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v_size_1705_; lean_object* v_size_1706_; lean_object* v_k_1707_; lean_object* v_v_1708_; lean_object* v_l_1709_; lean_object* v_r_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; uint8_t v___x_1713_; 
v_size_1705_ = lean_ctor_get(v_l_1536_, 0);
v_size_1706_ = lean_ctor_get(v_r_1537_, 0);
v_k_1707_ = lean_ctor_get(v_r_1537_, 1);
v_v_1708_ = lean_ctor_get(v_r_1537_, 2);
v_l_1709_ = lean_ctor_get(v_r_1537_, 3);
v_r_1710_ = lean_ctor_get(v_r_1537_, 4);
v___x_1711_ = lean_unsigned_to_nat(2u);
v___x_1712_ = lean_nat_mul(v___x_1711_, v_size_1705_);
v___x_1713_ = lean_nat_dec_lt(v_size_1706_, v___x_1712_);
lean_dec(v___x_1712_);
if (v___x_1713_ == 0)
{
lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1751_; 
lean_inc(v_r_1710_);
lean_inc(v_l_1709_);
lean_inc(v_v_1708_);
lean_inc(v_k_1707_);
lean_del_object(v___x_1703_);
v_isSharedCheck_1751_ = !lean_is_exclusive(v_r_1537_);
if (v_isSharedCheck_1751_ == 0)
{
lean_object* v_unused_1752_; lean_object* v_unused_1753_; lean_object* v_unused_1754_; lean_object* v_unused_1755_; lean_object* v_unused_1756_; 
v_unused_1752_ = lean_ctor_get(v_r_1537_, 4);
lean_dec(v_unused_1752_);
v_unused_1753_ = lean_ctor_get(v_r_1537_, 3);
lean_dec(v_unused_1753_);
v_unused_1754_ = lean_ctor_get(v_r_1537_, 2);
lean_dec(v_unused_1754_);
v_unused_1755_ = lean_ctor_get(v_r_1537_, 1);
lean_dec(v_unused_1755_);
v_unused_1756_ = lean_ctor_get(v_r_1537_, 0);
lean_dec(v_unused_1756_);
v___x_1715_ = v_r_1537_;
v_isShared_1716_ = v_isSharedCheck_1751_;
goto v_resetjp_1714_;
}
else
{
lean_dec(v_r_1537_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1751_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___x_1739_; lean_object* v___y_1741_; 
v___x_1717_ = lean_nat_add(v___x_1543_, v_size_1533_);
lean_dec(v_size_1533_);
v___x_1718_ = lean_nat_add(v___x_1717_, v_size_1693_);
lean_dec(v___x_1717_);
v___x_1739_ = lean_nat_add(v___x_1543_, v_size_1705_);
if (lean_obj_tag(v_l_1709_) == 0)
{
lean_object* v_size_1749_; 
v_size_1749_ = lean_ctor_get(v_l_1709_, 0);
lean_inc(v_size_1749_);
v___y_1741_ = v_size_1749_;
goto v___jp_1740_;
}
else
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_unsigned_to_nat(0u);
v___y_1741_ = v___x_1750_;
goto v___jp_1740_;
}
v___jp_1719_:
{
lean_object* v___x_1723_; lean_object* v___x_1725_; 
v___x_1723_ = lean_nat_add(v___y_1720_, v___y_1722_);
lean_dec(v___y_1722_);
lean_dec(v___y_1720_);
lean_inc_ref(v_tree_1690_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 4, v_tree_1690_);
lean_ctor_set(v___x_1715_, 3, v_r_1710_);
lean_ctor_set(v___x_1715_, 2, v_v_1692_);
lean_ctor_set(v___x_1715_, 1, v_k_1691_);
lean_ctor_set(v___x_1715_, 0, v___x_1723_);
v___x_1725_ = v___x_1715_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1723_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_k_1691_);
lean_ctor_set(v_reuseFailAlloc_1738_, 2, v_v_1692_);
lean_ctor_set(v_reuseFailAlloc_1738_, 3, v_r_1710_);
lean_ctor_set(v_reuseFailAlloc_1738_, 4, v_tree_1690_);
v___x_1725_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
v_isSharedCheck_1732_ = !lean_is_exclusive(v_tree_1690_);
if (v_isSharedCheck_1732_ == 0)
{
lean_object* v_unused_1733_; lean_object* v_unused_1734_; lean_object* v_unused_1735_; lean_object* v_unused_1736_; lean_object* v_unused_1737_; 
v_unused_1733_ = lean_ctor_get(v_tree_1690_, 4);
lean_dec(v_unused_1733_);
v_unused_1734_ = lean_ctor_get(v_tree_1690_, 3);
lean_dec(v_unused_1734_);
v_unused_1735_ = lean_ctor_get(v_tree_1690_, 2);
lean_dec(v_unused_1735_);
v_unused_1736_ = lean_ctor_get(v_tree_1690_, 1);
lean_dec(v_unused_1736_);
v_unused_1737_ = lean_ctor_get(v_tree_1690_, 0);
lean_dec(v_unused_1737_);
v___x_1727_ = v_tree_1690_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_dec(v_tree_1690_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
lean_ctor_set(v___x_1727_, 4, v___x_1725_);
lean_ctor_set(v___x_1727_, 3, v___y_1721_);
lean_ctor_set(v___x_1727_, 2, v_v_1708_);
lean_ctor_set(v___x_1727_, 1, v_k_1707_);
lean_ctor_set(v___x_1727_, 0, v___x_1718_);
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v_k_1707_);
lean_ctor_set(v_reuseFailAlloc_1731_, 2, v_v_1708_);
lean_ctor_set(v_reuseFailAlloc_1731_, 3, v___y_1721_);
lean_ctor_set(v_reuseFailAlloc_1731_, 4, v___x_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
v___jp_1740_:
{
lean_object* v___x_1742_; lean_object* v___x_1744_; 
v___x_1742_ = lean_nat_add(v___x_1739_, v___y_1741_);
lean_dec(v___y_1741_);
lean_dec(v___x_1739_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 4, v_l_1709_);
lean_ctor_set(v___x_1687_, 3, v_l_1536_);
lean_ctor_set(v___x_1687_, 2, v_v_1535_);
lean_ctor_set(v___x_1687_, 1, v_k_1534_);
lean_ctor_set(v___x_1687_, 0, v___x_1742_);
v___x_1744_ = v___x_1687_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___x_1742_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_k_1534_);
lean_ctor_set(v_reuseFailAlloc_1748_, 2, v_v_1535_);
lean_ctor_set(v_reuseFailAlloc_1748_, 3, v_l_1536_);
lean_ctor_set(v_reuseFailAlloc_1748_, 4, v_l_1709_);
v___x_1744_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
lean_object* v___x_1745_; 
v___x_1745_ = lean_nat_add(v___x_1543_, v_size_1693_);
if (lean_obj_tag(v_r_1710_) == 0)
{
lean_object* v_size_1746_; 
v_size_1746_ = lean_ctor_get(v_r_1710_, 0);
lean_inc(v_size_1746_);
v___y_1720_ = v___x_1745_;
v___y_1721_ = v___x_1744_;
v___y_1722_ = v_size_1746_;
goto v___jp_1719_;
}
else
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_unsigned_to_nat(0u);
v___y_1720_ = v___x_1745_;
v___y_1721_ = v___x_1744_;
v___y_1722_ = v___x_1747_;
goto v___jp_1719_;
}
}
}
}
}
else
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1762_; 
v___x_1757_ = lean_nat_add(v___x_1543_, v_size_1533_);
lean_dec(v_size_1533_);
v___x_1758_ = lean_nat_add(v___x_1757_, v_size_1693_);
lean_dec(v___x_1757_);
v___x_1759_ = lean_nat_add(v___x_1543_, v_size_1693_);
v___x_1760_ = lean_nat_add(v___x_1759_, v_size_1706_);
lean_dec(v___x_1759_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 4, v_tree_1690_);
lean_ctor_set(v___x_1687_, 3, v_r_1537_);
lean_ctor_set(v___x_1687_, 2, v_v_1692_);
lean_ctor_set(v___x_1687_, 1, v_k_1691_);
lean_ctor_set(v___x_1687_, 0, v___x_1760_);
v___x_1762_ = v___x_1687_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v___x_1760_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v_k_1691_);
lean_ctor_set(v_reuseFailAlloc_1766_, 2, v_v_1692_);
lean_ctor_set(v_reuseFailAlloc_1766_, 3, v_r_1537_);
lean_ctor_set(v_reuseFailAlloc_1766_, 4, v_tree_1690_);
v___x_1762_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v___x_1764_; 
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 4, v___x_1762_);
lean_ctor_set(v___x_1703_, 0, v___x_1758_);
v___x_1764_ = v___x_1703_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1758_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v_k_1534_);
lean_ctor_set(v_reuseFailAlloc_1765_, 2, v_v_1535_);
lean_ctor_set(v_reuseFailAlloc_1765_, 3, v_l_1536_);
lean_ctor_set(v_reuseFailAlloc_1765_, 4, v___x_1762_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_1536_) == 0)
{
lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1796_; 
lean_inc_ref(v_l_1536_);
lean_inc(v_v_1535_);
lean_inc(v_k_1534_);
lean_inc(v_size_1533_);
v_isSharedCheck_1796_ = !lean_is_exclusive(v_l_1353_);
if (v_isSharedCheck_1796_ == 0)
{
lean_object* v_unused_1797_; lean_object* v_unused_1798_; lean_object* v_unused_1799_; lean_object* v_unused_1800_; lean_object* v_unused_1801_; 
v_unused_1797_ = lean_ctor_get(v_l_1353_, 4);
lean_dec(v_unused_1797_);
v_unused_1798_ = lean_ctor_get(v_l_1353_, 3);
lean_dec(v_unused_1798_);
v_unused_1799_ = lean_ctor_get(v_l_1353_, 2);
lean_dec(v_unused_1799_);
v_unused_1800_ = lean_ctor_get(v_l_1353_, 1);
lean_dec(v_unused_1800_);
v_unused_1801_ = lean_ctor_get(v_l_1353_, 0);
lean_dec(v_unused_1801_);
v___x_1774_ = v_l_1353_;
v_isShared_1775_ = v_isSharedCheck_1796_;
goto v_resetjp_1773_;
}
else
{
lean_dec(v_l_1353_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1796_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
if (lean_obj_tag(v_r_1537_) == 0)
{
lean_object* v_k_1776_; lean_object* v_v_1777_; lean_object* v_size_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1782_; 
v_k_1776_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_k_1776_);
v_v_1777_ = lean_ctor_get(v___x_1689_, 1);
lean_inc(v_v_1777_);
lean_dec_ref(v___x_1689_);
v_size_1778_ = lean_ctor_get(v_r_1537_, 0);
v___x_1779_ = lean_nat_add(v___x_1543_, v_size_1533_);
lean_dec(v_size_1533_);
v___x_1780_ = lean_nat_add(v___x_1543_, v_size_1778_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 4, v_tree_1690_);
lean_ctor_set(v___x_1687_, 3, v_r_1537_);
lean_ctor_set(v___x_1687_, 2, v_v_1777_);
lean_ctor_set(v___x_1687_, 1, v_k_1776_);
lean_ctor_set(v___x_1687_, 0, v___x_1780_);
v___x_1782_ = v___x_1687_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1780_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v_k_1776_);
lean_ctor_set(v_reuseFailAlloc_1786_, 2, v_v_1777_);
lean_ctor_set(v_reuseFailAlloc_1786_, 3, v_r_1537_);
lean_ctor_set(v_reuseFailAlloc_1786_, 4, v_tree_1690_);
v___x_1782_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
lean_object* v___x_1784_; 
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 4, v___x_1782_);
lean_ctor_set(v___x_1774_, 0, v___x_1779_);
v___x_1784_ = v___x_1774_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1779_);
lean_ctor_set(v_reuseFailAlloc_1785_, 1, v_k_1534_);
lean_ctor_set(v_reuseFailAlloc_1785_, 2, v_v_1535_);
lean_ctor_set(v_reuseFailAlloc_1785_, 3, v_l_1536_);
lean_ctor_set(v_reuseFailAlloc_1785_, 4, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
else
{
lean_object* v_k_1787_; lean_object* v_v_1788_; lean_object* v___x_1789_; lean_object* v___x_1791_; 
lean_dec(v_size_1533_);
v_k_1787_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_k_1787_);
v_v_1788_ = lean_ctor_get(v___x_1689_, 1);
lean_inc(v_v_1788_);
lean_dec_ref(v___x_1689_);
v___x_1789_ = lean_unsigned_to_nat(3u);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 4, v_r_1537_);
lean_ctor_set(v___x_1687_, 3, v_r_1537_);
lean_ctor_set(v___x_1687_, 2, v_v_1788_);
lean_ctor_set(v___x_1687_, 1, v_k_1787_);
lean_ctor_set(v___x_1687_, 0, v___x_1543_);
v___x_1791_ = v___x_1687_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1795_, 1, v_k_1787_);
lean_ctor_set(v_reuseFailAlloc_1795_, 2, v_v_1788_);
lean_ctor_set(v_reuseFailAlloc_1795_, 3, v_r_1537_);
lean_ctor_set(v_reuseFailAlloc_1795_, 4, v_r_1537_);
v___x_1791_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
lean_object* v___x_1793_; 
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 4, v___x_1791_);
lean_ctor_set(v___x_1774_, 0, v___x_1789_);
v___x_1793_ = v___x_1774_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1789_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v_k_1534_);
lean_ctor_set(v_reuseFailAlloc_1794_, 2, v_v_1535_);
lean_ctor_set(v_reuseFailAlloc_1794_, 3, v_l_1536_);
lean_ctor_set(v_reuseFailAlloc_1794_, 4, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1537_) == 0)
{
lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1826_; 
lean_inc(v_l_1536_);
lean_inc(v_v_1535_);
lean_inc(v_k_1534_);
v_isSharedCheck_1826_ = !lean_is_exclusive(v_l_1353_);
if (v_isSharedCheck_1826_ == 0)
{
lean_object* v_unused_1827_; lean_object* v_unused_1828_; lean_object* v_unused_1829_; lean_object* v_unused_1830_; lean_object* v_unused_1831_; 
v_unused_1827_ = lean_ctor_get(v_l_1353_, 4);
lean_dec(v_unused_1827_);
v_unused_1828_ = lean_ctor_get(v_l_1353_, 3);
lean_dec(v_unused_1828_);
v_unused_1829_ = lean_ctor_get(v_l_1353_, 2);
lean_dec(v_unused_1829_);
v_unused_1830_ = lean_ctor_get(v_l_1353_, 1);
lean_dec(v_unused_1830_);
v_unused_1831_ = lean_ctor_get(v_l_1353_, 0);
lean_dec(v_unused_1831_);
v___x_1803_ = v_l_1353_;
v_isShared_1804_ = v_isSharedCheck_1826_;
goto v_resetjp_1802_;
}
else
{
lean_dec(v_l_1353_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1826_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v_k_1805_; lean_object* v_v_1806_; lean_object* v_k_1807_; lean_object* v_v_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1822_; 
v_k_1805_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_k_1805_);
v_v_1806_ = lean_ctor_get(v___x_1689_, 1);
lean_inc(v_v_1806_);
lean_dec_ref(v___x_1689_);
v_k_1807_ = lean_ctor_get(v_r_1537_, 1);
v_v_1808_ = lean_ctor_get(v_r_1537_, 2);
v_isSharedCheck_1822_ = !lean_is_exclusive(v_r_1537_);
if (v_isSharedCheck_1822_ == 0)
{
lean_object* v_unused_1823_; lean_object* v_unused_1824_; lean_object* v_unused_1825_; 
v_unused_1823_ = lean_ctor_get(v_r_1537_, 4);
lean_dec(v_unused_1823_);
v_unused_1824_ = lean_ctor_get(v_r_1537_, 3);
lean_dec(v_unused_1824_);
v_unused_1825_ = lean_ctor_get(v_r_1537_, 0);
lean_dec(v_unused_1825_);
v___x_1810_ = v_r_1537_;
v_isShared_1811_ = v_isSharedCheck_1822_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_v_1808_);
lean_inc(v_k_1807_);
lean_dec(v_r_1537_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1822_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1812_; lean_object* v___x_1814_; 
v___x_1812_ = lean_unsigned_to_nat(3u);
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 4, v_l_1536_);
lean_ctor_set(v___x_1810_, 3, v_l_1536_);
lean_ctor_set(v___x_1810_, 2, v_v_1535_);
lean_ctor_set(v___x_1810_, 1, v_k_1534_);
lean_ctor_set(v___x_1810_, 0, v___x_1543_);
v___x_1814_ = v___x_1810_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1821_, 1, v_k_1534_);
lean_ctor_set(v_reuseFailAlloc_1821_, 2, v_v_1535_);
lean_ctor_set(v_reuseFailAlloc_1821_, 3, v_l_1536_);
lean_ctor_set(v_reuseFailAlloc_1821_, 4, v_l_1536_);
v___x_1814_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
lean_object* v___x_1816_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 4, v_l_1536_);
lean_ctor_set(v___x_1687_, 3, v_l_1536_);
lean_ctor_set(v___x_1687_, 2, v_v_1806_);
lean_ctor_set(v___x_1687_, 1, v_k_1805_);
lean_ctor_set(v___x_1687_, 0, v___x_1543_);
v___x_1816_ = v___x_1687_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1820_, 1, v_k_1805_);
lean_ctor_set(v_reuseFailAlloc_1820_, 2, v_v_1806_);
lean_ctor_set(v_reuseFailAlloc_1820_, 3, v_l_1536_);
lean_ctor_set(v_reuseFailAlloc_1820_, 4, v_l_1536_);
v___x_1816_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
lean_object* v___x_1818_; 
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 4, v___x_1816_);
lean_ctor_set(v___x_1803_, 3, v___x_1814_);
lean_ctor_set(v___x_1803_, 2, v_v_1808_);
lean_ctor_set(v___x_1803_, 1, v_k_1807_);
lean_ctor_set(v___x_1803_, 0, v___x_1812_);
v___x_1818_ = v___x_1803_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v___x_1812_);
lean_ctor_set(v_reuseFailAlloc_1819_, 1, v_k_1807_);
lean_ctor_set(v_reuseFailAlloc_1819_, 2, v_v_1808_);
lean_ctor_set(v_reuseFailAlloc_1819_, 3, v___x_1814_);
lean_ctor_set(v_reuseFailAlloc_1819_, 4, v___x_1816_);
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
}
else
{
lean_object* v_k_1832_; lean_object* v_v_1833_; lean_object* v___x_1834_; lean_object* v___x_1836_; 
v_k_1832_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_k_1832_);
v_v_1833_ = lean_ctor_get(v___x_1689_, 1);
lean_inc(v_v_1833_);
lean_dec_ref(v___x_1689_);
v___x_1834_ = lean_unsigned_to_nat(2u);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 4, v_r_1537_);
lean_ctor_set(v___x_1687_, 3, v_l_1353_);
lean_ctor_set(v___x_1687_, 2, v_v_1833_);
lean_ctor_set(v___x_1687_, 1, v_k_1832_);
lean_ctor_set(v___x_1687_, 0, v___x_1834_);
v___x_1836_ = v___x_1687_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v___x_1834_);
lean_ctor_set(v_reuseFailAlloc_1837_, 1, v_k_1832_);
lean_ctor_set(v_reuseFailAlloc_1837_, 2, v_v_1833_);
lean_ctor_set(v_reuseFailAlloc_1837_, 3, v_l_1353_);
lean_ctor_set(v_reuseFailAlloc_1837_, 4, v_r_1537_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
}
}
}
}
else
{
return v_l_1353_;
}
}
else
{
return v_r_1354_;
}
}
default: 
{
lean_object* v_impl_1844_; lean_object* v___x_1845_; 
v_impl_1844_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_k_1349_, v_r_1354_);
v___x_1845_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1844_) == 0)
{
if (lean_obj_tag(v_l_1353_) == 0)
{
lean_object* v_size_1846_; lean_object* v_size_1847_; lean_object* v_k_1848_; lean_object* v_v_1849_; lean_object* v_l_1850_; lean_object* v_r_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; uint8_t v___x_1854_; 
v_size_1846_ = lean_ctor_get(v_impl_1844_, 0);
v_size_1847_ = lean_ctor_get(v_l_1353_, 0);
v_k_1848_ = lean_ctor_get(v_l_1353_, 1);
v_v_1849_ = lean_ctor_get(v_l_1353_, 2);
v_l_1850_ = lean_ctor_get(v_l_1353_, 3);
v_r_1851_ = lean_ctor_get(v_l_1353_, 4);
lean_inc(v_r_1851_);
v___x_1852_ = lean_unsigned_to_nat(3u);
v___x_1853_ = lean_nat_mul(v___x_1852_, v_size_1846_);
v___x_1854_ = lean_nat_dec_lt(v___x_1853_, v_size_1847_);
lean_dec(v___x_1853_);
if (v___x_1854_ == 0)
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1858_; 
lean_dec(v_r_1851_);
v___x_1855_ = lean_nat_add(v___x_1845_, v_size_1847_);
v___x_1856_ = lean_nat_add(v___x_1855_, v_size_1846_);
lean_dec(v___x_1855_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v_impl_1844_);
lean_ctor_set(v___x_1356_, 0, v___x_1856_);
v___x_1858_ = v___x_1356_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v___x_1856_);
lean_ctor_set(v_reuseFailAlloc_1859_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1859_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1859_, 3, v_l_1353_);
lean_ctor_set(v_reuseFailAlloc_1859_, 4, v_impl_1844_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
else
{
lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1925_; 
lean_inc(v_l_1850_);
lean_inc(v_v_1849_);
lean_inc(v_k_1848_);
lean_inc(v_size_1847_);
v_isSharedCheck_1925_ = !lean_is_exclusive(v_l_1353_);
if (v_isSharedCheck_1925_ == 0)
{
lean_object* v_unused_1926_; lean_object* v_unused_1927_; lean_object* v_unused_1928_; lean_object* v_unused_1929_; lean_object* v_unused_1930_; 
v_unused_1926_ = lean_ctor_get(v_l_1353_, 4);
lean_dec(v_unused_1926_);
v_unused_1927_ = lean_ctor_get(v_l_1353_, 3);
lean_dec(v_unused_1927_);
v_unused_1928_ = lean_ctor_get(v_l_1353_, 2);
lean_dec(v_unused_1928_);
v_unused_1929_ = lean_ctor_get(v_l_1353_, 1);
lean_dec(v_unused_1929_);
v_unused_1930_ = lean_ctor_get(v_l_1353_, 0);
lean_dec(v_unused_1930_);
v___x_1861_ = v_l_1353_;
v_isShared_1862_ = v_isSharedCheck_1925_;
goto v_resetjp_1860_;
}
else
{
lean_dec(v_l_1353_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1925_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v_size_1863_; lean_object* v_size_1864_; lean_object* v_k_1865_; lean_object* v_v_1866_; lean_object* v_l_1867_; lean_object* v_r_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; uint8_t v___x_1871_; 
v_size_1863_ = lean_ctor_get(v_l_1850_, 0);
v_size_1864_ = lean_ctor_get(v_r_1851_, 0);
v_k_1865_ = lean_ctor_get(v_r_1851_, 1);
v_v_1866_ = lean_ctor_get(v_r_1851_, 2);
v_l_1867_ = lean_ctor_get(v_r_1851_, 3);
v_r_1868_ = lean_ctor_get(v_r_1851_, 4);
v___x_1869_ = lean_unsigned_to_nat(2u);
v___x_1870_ = lean_nat_mul(v___x_1869_, v_size_1863_);
v___x_1871_ = lean_nat_dec_lt(v_size_1864_, v___x_1870_);
lean_dec(v___x_1870_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1900_; 
lean_inc(v_r_1868_);
lean_inc(v_l_1867_);
lean_inc(v_v_1866_);
lean_inc(v_k_1865_);
v_isSharedCheck_1900_ = !lean_is_exclusive(v_r_1851_);
if (v_isSharedCheck_1900_ == 0)
{
lean_object* v_unused_1901_; lean_object* v_unused_1902_; lean_object* v_unused_1903_; lean_object* v_unused_1904_; lean_object* v_unused_1905_; 
v_unused_1901_ = lean_ctor_get(v_r_1851_, 4);
lean_dec(v_unused_1901_);
v_unused_1902_ = lean_ctor_get(v_r_1851_, 3);
lean_dec(v_unused_1902_);
v_unused_1903_ = lean_ctor_get(v_r_1851_, 2);
lean_dec(v_unused_1903_);
v_unused_1904_ = lean_ctor_get(v_r_1851_, 1);
lean_dec(v_unused_1904_);
v_unused_1905_ = lean_ctor_get(v_r_1851_, 0);
lean_dec(v_unused_1905_);
v___x_1873_ = v_r_1851_;
v_isShared_1874_ = v_isSharedCheck_1900_;
goto v_resetjp_1872_;
}
else
{
lean_dec(v_r_1851_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1900_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___y_1878_; lean_object* v___y_1879_; lean_object* v___y_1880_; lean_object* v___x_1888_; lean_object* v___y_1890_; 
v___x_1875_ = lean_nat_add(v___x_1845_, v_size_1847_);
lean_dec(v_size_1847_);
v___x_1876_ = lean_nat_add(v___x_1875_, v_size_1846_);
lean_dec(v___x_1875_);
v___x_1888_ = lean_nat_add(v___x_1845_, v_size_1863_);
if (lean_obj_tag(v_l_1867_) == 0)
{
lean_object* v_size_1898_; 
v_size_1898_ = lean_ctor_get(v_l_1867_, 0);
lean_inc(v_size_1898_);
v___y_1890_ = v_size_1898_;
goto v___jp_1889_;
}
else
{
lean_object* v___x_1899_; 
v___x_1899_ = lean_unsigned_to_nat(0u);
v___y_1890_ = v___x_1899_;
goto v___jp_1889_;
}
v___jp_1877_:
{
lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1881_ = lean_nat_add(v___y_1879_, v___y_1880_);
lean_dec(v___y_1880_);
lean_dec(v___y_1879_);
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 4, v_impl_1844_);
lean_ctor_set(v___x_1873_, 3, v_r_1868_);
lean_ctor_set(v___x_1873_, 2, v_v_1352_);
lean_ctor_set(v___x_1873_, 1, v_k_1351_);
lean_ctor_set(v___x_1873_, 0, v___x_1881_);
v___x_1883_ = v___x_1873_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1887_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1887_, 3, v_r_1868_);
lean_ctor_set(v_reuseFailAlloc_1887_, 4, v_impl_1844_);
v___x_1883_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
lean_object* v___x_1885_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v___x_1883_);
lean_ctor_set(v___x_1861_, 3, v___y_1878_);
lean_ctor_set(v___x_1861_, 2, v_v_1866_);
lean_ctor_set(v___x_1861_, 1, v_k_1865_);
lean_ctor_set(v___x_1861_, 0, v___x_1876_);
v___x_1885_ = v___x_1861_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v___x_1876_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_k_1865_);
lean_ctor_set(v_reuseFailAlloc_1886_, 2, v_v_1866_);
lean_ctor_set(v_reuseFailAlloc_1886_, 3, v___y_1878_);
lean_ctor_set(v_reuseFailAlloc_1886_, 4, v___x_1883_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
v___jp_1889_:
{
lean_object* v___x_1891_; lean_object* v___x_1893_; 
v___x_1891_ = lean_nat_add(v___x_1888_, v___y_1890_);
lean_dec(v___y_1890_);
lean_dec(v___x_1888_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v_l_1867_);
lean_ctor_set(v___x_1356_, 3, v_l_1850_);
lean_ctor_set(v___x_1356_, 2, v_v_1849_);
lean_ctor_set(v___x_1356_, 1, v_k_1848_);
lean_ctor_set(v___x_1356_, 0, v___x_1891_);
v___x_1893_ = v___x_1356_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1891_);
lean_ctor_set(v_reuseFailAlloc_1897_, 1, v_k_1848_);
lean_ctor_set(v_reuseFailAlloc_1897_, 2, v_v_1849_);
lean_ctor_set(v_reuseFailAlloc_1897_, 3, v_l_1850_);
lean_ctor_set(v_reuseFailAlloc_1897_, 4, v_l_1867_);
v___x_1893_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1894_; 
v___x_1894_ = lean_nat_add(v___x_1845_, v_size_1846_);
if (lean_obj_tag(v_r_1868_) == 0)
{
lean_object* v_size_1895_; 
v_size_1895_ = lean_ctor_get(v_r_1868_, 0);
lean_inc(v_size_1895_);
v___y_1878_ = v___x_1893_;
v___y_1879_ = v___x_1894_;
v___y_1880_ = v_size_1895_;
goto v___jp_1877_;
}
else
{
lean_object* v___x_1896_; 
v___x_1896_ = lean_unsigned_to_nat(0u);
v___y_1878_ = v___x_1893_;
v___y_1879_ = v___x_1894_;
v___y_1880_ = v___x_1896_;
goto v___jp_1877_;
}
}
}
}
}
else
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1911_; 
lean_del_object(v___x_1356_);
v___x_1906_ = lean_nat_add(v___x_1845_, v_size_1847_);
lean_dec(v_size_1847_);
v___x_1907_ = lean_nat_add(v___x_1906_, v_size_1846_);
lean_dec(v___x_1906_);
v___x_1908_ = lean_nat_add(v___x_1845_, v_size_1846_);
v___x_1909_ = lean_nat_add(v___x_1908_, v_size_1864_);
lean_dec(v___x_1908_);
lean_inc_ref(v_impl_1844_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v_impl_1844_);
lean_ctor_set(v___x_1861_, 3, v_r_1851_);
lean_ctor_set(v___x_1861_, 2, v_v_1352_);
lean_ctor_set(v___x_1861_, 1, v_k_1351_);
lean_ctor_set(v___x_1861_, 0, v___x_1909_);
v___x_1911_ = v___x_1861_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1909_);
lean_ctor_set(v_reuseFailAlloc_1924_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1924_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1924_, 3, v_r_1851_);
lean_ctor_set(v_reuseFailAlloc_1924_, 4, v_impl_1844_);
v___x_1911_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
v_isSharedCheck_1918_ = !lean_is_exclusive(v_impl_1844_);
if (v_isSharedCheck_1918_ == 0)
{
lean_object* v_unused_1919_; lean_object* v_unused_1920_; lean_object* v_unused_1921_; lean_object* v_unused_1922_; lean_object* v_unused_1923_; 
v_unused_1919_ = lean_ctor_get(v_impl_1844_, 4);
lean_dec(v_unused_1919_);
v_unused_1920_ = lean_ctor_get(v_impl_1844_, 3);
lean_dec(v_unused_1920_);
v_unused_1921_ = lean_ctor_get(v_impl_1844_, 2);
lean_dec(v_unused_1921_);
v_unused_1922_ = lean_ctor_get(v_impl_1844_, 1);
lean_dec(v_unused_1922_);
v_unused_1923_ = lean_ctor_get(v_impl_1844_, 0);
lean_dec(v_unused_1923_);
v___x_1913_ = v_impl_1844_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_dec(v_impl_1844_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 4, v___x_1911_);
lean_ctor_set(v___x_1913_, 3, v_l_1850_);
lean_ctor_set(v___x_1913_, 2, v_v_1849_);
lean_ctor_set(v___x_1913_, 1, v_k_1848_);
lean_ctor_set(v___x_1913_, 0, v___x_1907_);
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1907_);
lean_ctor_set(v_reuseFailAlloc_1917_, 1, v_k_1848_);
lean_ctor_set(v_reuseFailAlloc_1917_, 2, v_v_1849_);
lean_ctor_set(v_reuseFailAlloc_1917_, 3, v_l_1850_);
lean_ctor_set(v_reuseFailAlloc_1917_, 4, v___x_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1931_; lean_object* v___x_1932_; lean_object* v___x_1934_; 
v_size_1931_ = lean_ctor_get(v_impl_1844_, 0);
v___x_1932_ = lean_nat_add(v___x_1845_, v_size_1931_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v_impl_1844_);
lean_ctor_set(v___x_1356_, 0, v___x_1932_);
v___x_1934_ = v___x_1356_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1932_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1935_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1935_, 3, v_l_1353_);
lean_ctor_set(v_reuseFailAlloc_1935_, 4, v_impl_1844_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
else
{
if (lean_obj_tag(v_l_1353_) == 0)
{
lean_object* v_l_1936_; 
v_l_1936_ = lean_ctor_get(v_l_1353_, 3);
if (lean_obj_tag(v_l_1936_) == 0)
{
lean_object* v_r_1937_; 
lean_inc_ref(v_l_1936_);
v_r_1937_ = lean_ctor_get(v_l_1353_, 4);
lean_inc(v_r_1937_);
if (lean_obj_tag(v_r_1937_) == 0)
{
lean_object* v_size_1938_; lean_object* v_k_1939_; lean_object* v_v_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1953_; 
v_size_1938_ = lean_ctor_get(v_l_1353_, 0);
v_k_1939_ = lean_ctor_get(v_l_1353_, 1);
v_v_1940_ = lean_ctor_get(v_l_1353_, 2);
v_isSharedCheck_1953_ = !lean_is_exclusive(v_l_1353_);
if (v_isSharedCheck_1953_ == 0)
{
lean_object* v_unused_1954_; lean_object* v_unused_1955_; 
v_unused_1954_ = lean_ctor_get(v_l_1353_, 4);
lean_dec(v_unused_1954_);
v_unused_1955_ = lean_ctor_get(v_l_1353_, 3);
lean_dec(v_unused_1955_);
v___x_1942_ = v_l_1353_;
v_isShared_1943_ = v_isSharedCheck_1953_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_v_1940_);
lean_inc(v_k_1939_);
lean_inc(v_size_1938_);
lean_dec(v_l_1353_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1953_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v_size_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1948_; 
v_size_1944_ = lean_ctor_get(v_r_1937_, 0);
v___x_1945_ = lean_nat_add(v___x_1845_, v_size_1938_);
lean_dec(v_size_1938_);
v___x_1946_ = lean_nat_add(v___x_1845_, v_size_1944_);
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 4, v_impl_1844_);
lean_ctor_set(v___x_1942_, 3, v_r_1937_);
lean_ctor_set(v___x_1942_, 2, v_v_1352_);
lean_ctor_set(v___x_1942_, 1, v_k_1351_);
lean_ctor_set(v___x_1942_, 0, v___x_1946_);
v___x_1948_ = v___x_1942_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1946_);
lean_ctor_set(v_reuseFailAlloc_1952_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1952_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1952_, 3, v_r_1937_);
lean_ctor_set(v_reuseFailAlloc_1952_, 4, v_impl_1844_);
v___x_1948_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
lean_object* v___x_1950_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v___x_1948_);
lean_ctor_set(v___x_1356_, 3, v_l_1936_);
lean_ctor_set(v___x_1356_, 2, v_v_1940_);
lean_ctor_set(v___x_1356_, 1, v_k_1939_);
lean_ctor_set(v___x_1356_, 0, v___x_1945_);
v___x_1950_ = v___x_1356_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v___x_1945_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v_k_1939_);
lean_ctor_set(v_reuseFailAlloc_1951_, 2, v_v_1940_);
lean_ctor_set(v_reuseFailAlloc_1951_, 3, v_l_1936_);
lean_ctor_set(v_reuseFailAlloc_1951_, 4, v___x_1948_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
else
{
lean_object* v_k_1956_; lean_object* v_v_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1968_; 
v_k_1956_ = lean_ctor_get(v_l_1353_, 1);
v_v_1957_ = lean_ctor_get(v_l_1353_, 2);
v_isSharedCheck_1968_ = !lean_is_exclusive(v_l_1353_);
if (v_isSharedCheck_1968_ == 0)
{
lean_object* v_unused_1969_; lean_object* v_unused_1970_; lean_object* v_unused_1971_; 
v_unused_1969_ = lean_ctor_get(v_l_1353_, 4);
lean_dec(v_unused_1969_);
v_unused_1970_ = lean_ctor_get(v_l_1353_, 3);
lean_dec(v_unused_1970_);
v_unused_1971_ = lean_ctor_get(v_l_1353_, 0);
lean_dec(v_unused_1971_);
v___x_1959_ = v_l_1353_;
v_isShared_1960_ = v_isSharedCheck_1968_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_v_1957_);
lean_inc(v_k_1956_);
lean_dec(v_l_1353_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1968_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1961_; lean_object* v___x_1963_; 
v___x_1961_ = lean_unsigned_to_nat(3u);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 3, v_r_1937_);
lean_ctor_set(v___x_1959_, 2, v_v_1352_);
lean_ctor_set(v___x_1959_, 1, v_k_1351_);
lean_ctor_set(v___x_1959_, 0, v___x_1845_);
v___x_1963_ = v___x_1959_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1845_);
lean_ctor_set(v_reuseFailAlloc_1967_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1967_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1967_, 3, v_r_1937_);
lean_ctor_set(v_reuseFailAlloc_1967_, 4, v_r_1937_);
v___x_1963_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
lean_object* v___x_1965_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v___x_1963_);
lean_ctor_set(v___x_1356_, 3, v_l_1936_);
lean_ctor_set(v___x_1356_, 2, v_v_1957_);
lean_ctor_set(v___x_1356_, 1, v_k_1956_);
lean_ctor_set(v___x_1356_, 0, v___x_1961_);
v___x_1965_ = v___x_1356_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1961_);
lean_ctor_set(v_reuseFailAlloc_1966_, 1, v_k_1956_);
lean_ctor_set(v_reuseFailAlloc_1966_, 2, v_v_1957_);
lean_ctor_set(v_reuseFailAlloc_1966_, 3, v_l_1936_);
lean_ctor_set(v_reuseFailAlloc_1966_, 4, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
}
else
{
lean_object* v_r_1972_; 
v_r_1972_ = lean_ctor_get(v_l_1353_, 4);
lean_inc(v_r_1972_);
if (lean_obj_tag(v_r_1972_) == 0)
{
lean_object* v_k_1973_; lean_object* v_v_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1997_; 
lean_inc(v_l_1936_);
v_k_1973_ = lean_ctor_get(v_l_1353_, 1);
v_v_1974_ = lean_ctor_get(v_l_1353_, 2);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_l_1353_);
if (v_isSharedCheck_1997_ == 0)
{
lean_object* v_unused_1998_; lean_object* v_unused_1999_; lean_object* v_unused_2000_; 
v_unused_1998_ = lean_ctor_get(v_l_1353_, 4);
lean_dec(v_unused_1998_);
v_unused_1999_ = lean_ctor_get(v_l_1353_, 3);
lean_dec(v_unused_1999_);
v_unused_2000_ = lean_ctor_get(v_l_1353_, 0);
lean_dec(v_unused_2000_);
v___x_1976_ = v_l_1353_;
v_isShared_1977_ = v_isSharedCheck_1997_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_v_1974_);
lean_inc(v_k_1973_);
lean_dec(v_l_1353_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1997_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v_k_1978_; lean_object* v_v_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1993_; 
v_k_1978_ = lean_ctor_get(v_r_1972_, 1);
v_v_1979_ = lean_ctor_get(v_r_1972_, 2);
v_isSharedCheck_1993_ = !lean_is_exclusive(v_r_1972_);
if (v_isSharedCheck_1993_ == 0)
{
lean_object* v_unused_1994_; lean_object* v_unused_1995_; lean_object* v_unused_1996_; 
v_unused_1994_ = lean_ctor_get(v_r_1972_, 4);
lean_dec(v_unused_1994_);
v_unused_1995_ = lean_ctor_get(v_r_1972_, 3);
lean_dec(v_unused_1995_);
v_unused_1996_ = lean_ctor_get(v_r_1972_, 0);
lean_dec(v_unused_1996_);
v___x_1981_ = v_r_1972_;
v_isShared_1982_ = v_isSharedCheck_1993_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_v_1979_);
lean_inc(v_k_1978_);
lean_dec(v_r_1972_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1993_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1983_; lean_object* v___x_1985_; 
v___x_1983_ = lean_unsigned_to_nat(3u);
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 4, v_l_1936_);
lean_ctor_set(v___x_1981_, 3, v_l_1936_);
lean_ctor_set(v___x_1981_, 2, v_v_1974_);
lean_ctor_set(v___x_1981_, 1, v_k_1973_);
lean_ctor_set(v___x_1981_, 0, v___x_1845_);
v___x_1985_ = v___x_1981_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v___x_1845_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_k_1973_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v_v_1974_);
lean_ctor_set(v_reuseFailAlloc_1992_, 3, v_l_1936_);
lean_ctor_set(v_reuseFailAlloc_1992_, 4, v_l_1936_);
v___x_1985_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
lean_object* v___x_1987_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 4, v_l_1936_);
lean_ctor_set(v___x_1976_, 2, v_v_1352_);
lean_ctor_set(v___x_1976_, 1, v_k_1351_);
lean_ctor_set(v___x_1976_, 0, v___x_1845_);
v___x_1987_ = v___x_1976_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1845_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1991_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1991_, 3, v_l_1936_);
lean_ctor_set(v_reuseFailAlloc_1991_, 4, v_l_1936_);
v___x_1987_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1989_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v___x_1987_);
lean_ctor_set(v___x_1356_, 3, v___x_1985_);
lean_ctor_set(v___x_1356_, 2, v_v_1979_);
lean_ctor_set(v___x_1356_, 1, v_k_1978_);
lean_ctor_set(v___x_1356_, 0, v___x_1983_);
v___x_1989_ = v___x_1356_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1983_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v_k_1978_);
lean_ctor_set(v_reuseFailAlloc_1990_, 2, v_v_1979_);
lean_ctor_set(v_reuseFailAlloc_1990_, 3, v___x_1985_);
lean_ctor_set(v_reuseFailAlloc_1990_, 4, v___x_1987_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
}
}
else
{
lean_object* v___x_2001_; lean_object* v___x_2003_; 
v___x_2001_ = lean_unsigned_to_nat(2u);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v_r_1972_);
lean_ctor_set(v___x_1356_, 0, v___x_2001_);
v___x_2003_ = v___x_1356_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v___x_2001_);
lean_ctor_set(v_reuseFailAlloc_2004_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_2004_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_2004_, 3, v_l_1353_);
lean_ctor_set(v_reuseFailAlloc_2004_, 4, v_r_1972_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
else
{
lean_object* v___x_2006_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v_l_1353_);
lean_ctor_set(v___x_1356_, 0, v___x_1845_);
v___x_2006_ = v___x_1356_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_1845_);
lean_ctor_set(v_reuseFailAlloc_2007_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_2007_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_2007_, 3, v_l_1353_);
lean_ctor_set(v_reuseFailAlloc_2007_, 4, v_l_1353_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
}
}
}
}
else
{
return v_t_1350_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg___boxed(lean_object* v_k_2010_, lean_object* v_t_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_k_2010_, v_t_2011_);
lean_dec(v_k_2010_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3(lean_object* v_xs_2013_, lean_object* v_v_2014_, lean_object* v_i_2015_){
_start:
{
lean_object* v___x_2016_; uint8_t v___x_2017_; 
v___x_2016_ = lean_array_get_size(v_xs_2013_);
v___x_2017_ = lean_nat_dec_lt(v_i_2015_, v___x_2016_);
if (v___x_2017_ == 0)
{
lean_object* v___x_2018_; 
lean_dec(v_i_2015_);
v___x_2018_ = lean_box(0);
return v___x_2018_;
}
else
{
lean_object* v___x_2019_; uint8_t v___x_2020_; 
v___x_2019_ = lean_array_fget_borrowed(v_xs_2013_, v_i_2015_);
v___x_2020_ = l_Lean_instBEqFVarId_beq(v___x_2019_, v_v_2014_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = lean_unsigned_to_nat(1u);
v___x_2022_ = lean_nat_add(v_i_2015_, v___x_2021_);
lean_dec(v_i_2015_);
v_i_2015_ = v___x_2022_;
goto _start;
}
else
{
lean_object* v___x_2024_; 
v___x_2024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2024_, 0, v_i_2015_);
return v___x_2024_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_xs_2025_, lean_object* v_v_2026_, lean_object* v_i_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3(v_xs_2025_, v_v_2026_, v_i_2027_);
lean_dec(v_v_2026_);
lean_dec_ref(v_xs_2025_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(lean_object* v_xs_2029_, lean_object* v_v_2030_){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2031_ = lean_unsigned_to_nat(0u);
v___x_2032_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3(v_xs_2029_, v_v_2030_, v___x_2031_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_2033_, lean_object* v_v_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(v_xs_2033_, v_v_2034_);
lean_dec(v_v_2034_);
lean_dec_ref(v_xs_2033_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(lean_object* v_x_2036_, size_t v_x_2037_, lean_object* v_x_2038_){
_start:
{
if (lean_obj_tag(v_x_2036_) == 0)
{
lean_object* v_es_2039_; lean_object* v___x_2040_; size_t v___x_2041_; size_t v___x_2042_; lean_object* v_j_2043_; lean_object* v_entry_2044_; 
v_es_2039_ = lean_ctor_get(v_x_2036_, 0);
v___x_2040_ = lean_box(2);
v___x_2041_ = ((size_t)31ULL);
v___x_2042_ = lean_usize_land(v_x_2037_, v___x_2041_);
v_j_2043_ = lean_usize_to_nat(v___x_2042_);
v_entry_2044_ = lean_array_get(v___x_2040_, v_es_2039_, v_j_2043_);
switch(lean_obj_tag(v_entry_2044_))
{
case 0:
{
lean_object* v_key_2045_; uint8_t v___x_2046_; 
v_key_2045_ = lean_ctor_get(v_entry_2044_, 0);
lean_inc(v_key_2045_);
lean_dec_ref_known(v_entry_2044_, 2);
v___x_2046_ = l_Lean_instBEqFVarId_beq(v_x_2038_, v_key_2045_);
lean_dec(v_key_2045_);
if (v___x_2046_ == 0)
{
lean_dec(v_j_2043_);
return v_x_2036_;
}
else
{
lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2054_; 
lean_inc_ref(v_es_2039_);
v_isSharedCheck_2054_ = !lean_is_exclusive(v_x_2036_);
if (v_isSharedCheck_2054_ == 0)
{
lean_object* v_unused_2055_; 
v_unused_2055_ = lean_ctor_get(v_x_2036_, 0);
lean_dec(v_unused_2055_);
v___x_2048_ = v_x_2036_;
v_isShared_2049_ = v_isSharedCheck_2054_;
goto v_resetjp_2047_;
}
else
{
lean_dec(v_x_2036_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2054_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2050_; lean_object* v___x_2052_; 
v___x_2050_ = lean_array_set(v_es_2039_, v_j_2043_, v___x_2040_);
lean_dec(v_j_2043_);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v___x_2050_);
v___x_2052_ = v___x_2048_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2050_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
case 1:
{
lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2090_; 
lean_inc_ref(v_es_2039_);
v_isSharedCheck_2090_ = !lean_is_exclusive(v_x_2036_);
if (v_isSharedCheck_2090_ == 0)
{
lean_object* v_unused_2091_; 
v_unused_2091_ = lean_ctor_get(v_x_2036_, 0);
lean_dec(v_unused_2091_);
v___x_2057_ = v_x_2036_;
v_isShared_2058_ = v_isSharedCheck_2090_;
goto v_resetjp_2056_;
}
else
{
lean_dec(v_x_2036_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2090_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v_node_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2089_; 
v_node_2059_ = lean_ctor_get(v_entry_2044_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v_entry_2044_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2061_ = v_entry_2044_;
v_isShared_2062_ = v_isSharedCheck_2089_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_node_2059_);
lean_dec(v_entry_2044_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2089_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
size_t v___x_2063_; lean_object* v_entries_2064_; size_t v___x_2065_; lean_object* v_newNode_2066_; lean_object* v___x_2067_; 
v___x_2063_ = ((size_t)5ULL);
v_entries_2064_ = lean_array_set(v_es_2039_, v_j_2043_, v___x_2040_);
v___x_2065_ = lean_usize_shift_right(v_x_2037_, v___x_2063_);
v_newNode_2066_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_node_2059_, v___x_2065_, v_x_2038_);
lean_inc_ref(v_newNode_2066_);
v___x_2067_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_2066_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v___x_2069_; 
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 0, v_newNode_2066_);
v___x_2069_ = v___x_2061_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_newNode_2066_);
v___x_2069_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
lean_object* v___x_2070_; lean_object* v___x_2072_; 
v___x_2070_ = lean_array_set(v_entries_2064_, v_j_2043_, v___x_2069_);
lean_dec(v_j_2043_);
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 0, v___x_2070_);
v___x_2072_ = v___x_2057_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v___x_2070_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
}
else
{
lean_object* v_val_2075_; lean_object* v_fst_2076_; lean_object* v_snd_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2088_; 
lean_dec_ref(v_newNode_2066_);
lean_del_object(v___x_2061_);
v_val_2075_ = lean_ctor_get(v___x_2067_, 0);
lean_inc(v_val_2075_);
lean_dec_ref_known(v___x_2067_, 1);
v_fst_2076_ = lean_ctor_get(v_val_2075_, 0);
v_snd_2077_ = lean_ctor_get(v_val_2075_, 1);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_val_2075_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2079_ = v_val_2075_;
v_isShared_2080_ = v_isSharedCheck_2088_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_snd_2077_);
lean_inc(v_fst_2076_);
lean_dec(v_val_2075_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2088_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_fst_2076_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v_snd_2077_);
v___x_2082_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
lean_object* v___x_2083_; lean_object* v___x_2085_; 
v___x_2083_ = lean_array_set(v_entries_2064_, v_j_2043_, v___x_2082_);
lean_dec(v_j_2043_);
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 0, v___x_2083_);
v___x_2085_ = v___x_2057_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_2043_);
return v_x_2036_;
}
}
}
else
{
lean_object* v_ks_2092_; lean_object* v_vs_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2107_; 
v_ks_2092_ = lean_ctor_get(v_x_2036_, 0);
v_vs_2093_ = lean_ctor_get(v_x_2036_, 1);
v_isSharedCheck_2107_ = !lean_is_exclusive(v_x_2036_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2095_ = v_x_2036_;
v_isShared_2096_ = v_isSharedCheck_2107_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_vs_2093_);
lean_inc(v_ks_2092_);
lean_dec(v_x_2036_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2107_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2097_; 
v___x_2097_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(v_ks_2092_, v_x_2038_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v___x_2099_; 
if (v_isShared_2096_ == 0)
{
v___x_2099_ = v___x_2095_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_ks_2092_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v_vs_2093_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
else
{
lean_object* v_val_2101_; lean_object* v_keys_x27_2102_; lean_object* v_vals_x27_2103_; lean_object* v___x_2105_; 
v_val_2101_ = lean_ctor_get(v___x_2097_, 0);
lean_inc_n(v_val_2101_, 2);
lean_dec_ref_known(v___x_2097_, 1);
v_keys_x27_2102_ = l_Array_eraseIdx___redArg(v_ks_2092_, v_val_2101_);
v_vals_x27_2103_ = l_Array_eraseIdx___redArg(v_vs_2093_, v_val_2101_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 1, v_vals_x27_2103_);
lean_ctor_set(v___x_2095_, 0, v_keys_x27_2102_);
v___x_2105_ = v___x_2095_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_keys_x27_2102_);
lean_ctor_set(v_reuseFailAlloc_2106_, 1, v_vals_x27_2103_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg___boxed(lean_object* v_x_2108_, lean_object* v_x_2109_, lean_object* v_x_2110_){
_start:
{
size_t v_x_2640__boxed_2111_; lean_object* v_res_2112_; 
v_x_2640__boxed_2111_ = lean_unbox_usize(v_x_2109_);
lean_dec(v_x_2109_);
v_res_2112_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_x_2108_, v_x_2640__boxed_2111_, v_x_2110_);
lean_dec(v_x_2110_);
return v_res_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(lean_object* v_x_2113_, lean_object* v_x_2114_){
_start:
{
uint64_t v___x_2115_; size_t v_h_2116_; lean_object* v___x_2117_; 
v___x_2115_ = l_Lean_instHashableFVarId_hash(v_x_2114_);
v_h_2116_ = lean_uint64_to_usize(v___x_2115_);
v___x_2117_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_x_2113_, v_h_2116_, v_x_2114_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg___boxed(lean_object* v_x_2118_, lean_object* v_x_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_x_2118_, v_x_2119_);
lean_dec(v_x_2119_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_erase(lean_object* v_lctx_2121_, lean_object* v_fvarId_2122_){
_start:
{
lean_object* v_fvarIdToDecl_2123_; lean_object* v_decls_2124_; lean_object* v_auxDeclToFullName_2125_; lean_object* v___x_2126_; 
v_fvarIdToDecl_2123_ = lean_ctor_get(v_lctx_2121_, 0);
v_decls_2124_ = lean_ctor_get(v_lctx_2121_, 1);
v_auxDeclToFullName_2125_ = lean_ctor_get(v_lctx_2121_, 2);
v___x_2126_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_fvarIdToDecl_2123_, v_fvarId_2122_);
if (lean_obj_tag(v___x_2126_) == 0)
{
return v_lctx_2121_;
}
else
{
lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2146_; 
lean_inc(v_auxDeclToFullName_2125_);
lean_inc_ref(v_decls_2124_);
lean_inc_ref(v_fvarIdToDecl_2123_);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_lctx_2121_);
if (v_isSharedCheck_2146_ == 0)
{
lean_object* v_unused_2147_; lean_object* v_unused_2148_; lean_object* v_unused_2149_; 
v_unused_2147_ = lean_ctor_get(v_lctx_2121_, 2);
lean_dec(v_unused_2147_);
v_unused_2148_ = lean_ctor_get(v_lctx_2121_, 1);
lean_dec(v_unused_2148_);
v_unused_2149_ = lean_ctor_get(v_lctx_2121_, 0);
lean_dec(v_unused_2149_);
v___x_2128_ = v_lctx_2121_;
v_isShared_2129_ = v_isSharedCheck_2146_;
goto v_resetjp_2127_;
}
else
{
lean_dec(v_lctx_2121_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2146_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v_val_2130_; lean_object* v___x_2131_; lean_object* v___y_2133_; lean_object* v_index_2145_; 
v_val_2130_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_val_2130_);
lean_dec_ref_known(v___x_2126_, 1);
v___x_2131_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_fvarIdToDecl_2123_, v_fvarId_2122_);
v_index_2145_ = lean_ctor_get(v_val_2130_, 0);
lean_inc(v_index_2145_);
v___y_2133_ = v_index_2145_;
goto v___jp_2132_;
v___jp_2132_:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; uint8_t v___x_2137_; 
v___x_2134_ = lean_box(0);
v___x_2135_ = l_Lean_PersistentArray_set___redArg(v_decls_2124_, v___y_2133_, v___x_2134_);
lean_dec(v___y_2133_);
v___x_2136_ = l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(v___x_2135_);
v___x_2137_ = l_Lean_LocalDecl_isAuxDecl(v_val_2130_);
lean_dec(v_val_2130_);
if (v___x_2137_ == 0)
{
lean_object* v___x_2139_; 
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 1, v___x_2136_);
lean_ctor_set(v___x_2128_, 0, v___x_2131_);
v___x_2139_ = v___x_2128_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v___x_2131_);
lean_ctor_set(v_reuseFailAlloc_2140_, 1, v___x_2136_);
lean_ctor_set(v_reuseFailAlloc_2140_, 2, v_auxDeclToFullName_2125_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
else
{
lean_object* v___x_2141_; lean_object* v___x_2143_; 
v___x_2141_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_fvarId_2122_, v_auxDeclToFullName_2125_);
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 2, v___x_2141_);
lean_ctor_set(v___x_2128_, 1, v___x_2136_);
lean_ctor_set(v___x_2128_, 0, v___x_2131_);
v___x_2143_ = v___x_2128_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v___x_2131_);
lean_ctor_set(v_reuseFailAlloc_2144_, 1, v___x_2136_);
lean_ctor_set(v_reuseFailAlloc_2144_, 2, v___x_2141_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_erase___boxed(lean_object* v_lctx_2150_, lean_object* v_fvarId_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_LocalContext_erase(v_lctx_2150_, v_fvarId_2151_);
lean_dec(v_fvarId_2151_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0(lean_object* v_00_u03b2_2153_, lean_object* v_x_2154_, lean_object* v_x_2155_){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_x_2154_, v_x_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___boxed(lean_object* v_00_u03b2_2157_, lean_object* v_x_2158_, lean_object* v_x_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0(v_00_u03b2_2157_, v_x_2158_, v_x_2159_);
lean_dec(v_x_2159_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1(lean_object* v_00_u03b2_2161_, lean_object* v_k_2162_, lean_object* v_t_2163_, lean_object* v_h_2164_){
_start:
{
lean_object* v___x_2165_; 
v___x_2165_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_k_2162_, v_t_2163_);
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___boxed(lean_object* v_00_u03b2_2166_, lean_object* v_k_2167_, lean_object* v_t_2168_, lean_object* v_h_2169_){
_start:
{
lean_object* v_res_2170_; 
v_res_2170_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1(v_00_u03b2_2166_, v_k_2167_, v_t_2168_, v_h_2169_);
lean_dec(v_k_2167_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0(lean_object* v_00_u03b2_2171_, lean_object* v_x_2172_, size_t v_x_2173_, lean_object* v_x_2174_){
_start:
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_x_2172_, v_x_2173_, v_x_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2176_, lean_object* v_x_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_){
_start:
{
size_t v_x_2862__boxed_2180_; lean_object* v_res_2181_; 
v_x_2862__boxed_2180_ = lean_unbox_usize(v_x_2178_);
lean_dec(v_x_2178_);
v_res_2181_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0(v_00_u03b2_2176_, v_x_2177_, v_x_2862__boxed_2180_, v_x_2179_);
lean_dec(v_x_2179_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_pop(lean_object* v_lctx_2182_){
_start:
{
lean_object* v_decls_2183_; lean_object* v_fvarIdToDecl_2184_; lean_object* v_auxDeclToFullName_2185_; lean_object* v_size_2186_; lean_object* v___x_2187_; uint8_t v___x_2188_; 
v_decls_2183_ = lean_ctor_get(v_lctx_2182_, 1);
v_fvarIdToDecl_2184_ = lean_ctor_get(v_lctx_2182_, 0);
v_auxDeclToFullName_2185_ = lean_ctor_get(v_lctx_2182_, 2);
v_size_2186_ = lean_ctor_get(v_decls_2183_, 2);
v___x_2187_ = lean_unsigned_to_nat(0u);
v___x_2188_ = lean_nat_dec_eq(v_size_2186_, v___x_2187_);
if (v___x_2188_ == 0)
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2189_ = lean_box(0);
v___x_2190_ = lean_unsigned_to_nat(1u);
v___x_2191_ = lean_nat_sub(v_size_2186_, v___x_2190_);
v___x_2192_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2189_, v_decls_2183_, v___x_2191_);
lean_dec(v___x_2191_);
if (lean_obj_tag(v___x_2192_) == 0)
{
return v_lctx_2182_;
}
else
{
lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2211_; 
lean_inc(v_auxDeclToFullName_2185_);
lean_inc_ref(v_fvarIdToDecl_2184_);
lean_inc_ref(v_decls_2183_);
v_isSharedCheck_2211_ = !lean_is_exclusive(v_lctx_2182_);
if (v_isSharedCheck_2211_ == 0)
{
lean_object* v_unused_2212_; lean_object* v_unused_2213_; lean_object* v_unused_2214_; 
v_unused_2212_ = lean_ctor_get(v_lctx_2182_, 2);
lean_dec(v_unused_2212_);
v_unused_2213_ = lean_ctor_get(v_lctx_2182_, 1);
lean_dec(v_unused_2213_);
v_unused_2214_ = lean_ctor_get(v_lctx_2182_, 0);
lean_dec(v_unused_2214_);
v___x_2194_ = v_lctx_2182_;
v_isShared_2195_ = v_isSharedCheck_2211_;
goto v_resetjp_2193_;
}
else
{
lean_dec(v_lctx_2182_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2211_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v_val_2196_; lean_object* v___y_2198_; lean_object* v_fvarId_2210_; 
v_val_2196_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_val_2196_);
lean_dec_ref_known(v___x_2192_, 1);
v_fvarId_2210_ = lean_ctor_get(v_val_2196_, 1);
lean_inc(v_fvarId_2210_);
v___y_2198_ = v_fvarId_2210_;
goto v___jp_2197_;
v___jp_2197_:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; uint8_t v___x_2202_; 
v___x_2199_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_fvarIdToDecl_2184_, v___y_2198_);
v___x_2200_ = l_Lean_PersistentArray_pop___redArg(v_decls_2183_);
v___x_2201_ = l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(v___x_2200_);
v___x_2202_ = l_Lean_LocalDecl_isAuxDecl(v_val_2196_);
lean_dec(v_val_2196_);
if (v___x_2202_ == 0)
{
lean_object* v___x_2204_; 
lean_dec(v___y_2198_);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 1, v___x_2201_);
lean_ctor_set(v___x_2194_, 0, v___x_2199_);
v___x_2204_ = v___x_2194_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v___x_2199_);
lean_ctor_set(v_reuseFailAlloc_2205_, 1, v___x_2201_);
lean_ctor_set(v_reuseFailAlloc_2205_, 2, v_auxDeclToFullName_2185_);
v___x_2204_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
return v___x_2204_;
}
}
else
{
lean_object* v___x_2206_; lean_object* v___x_2208_; 
v___x_2206_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v___y_2198_, v_auxDeclToFullName_2185_);
lean_dec(v___y_2198_);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 2, v___x_2206_);
lean_ctor_set(v___x_2194_, 1, v___x_2201_);
lean_ctor_set(v___x_2194_, 0, v___x_2199_);
v___x_2208_ = v___x_2194_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2199_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v___x_2201_);
lean_ctor_set(v_reuseFailAlloc_2209_, 2, v___x_2206_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
}
}
else
{
return v_lctx_2182_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(lean_object* v_userName_2215_, lean_object* v_as_2216_, lean_object* v_i_2217_){
_start:
{
lean_object* v_zero_2218_; uint8_t v_isZero_2219_; 
v_zero_2218_ = lean_unsigned_to_nat(0u);
v_isZero_2219_ = lean_nat_dec_eq(v_i_2217_, v_zero_2218_);
if (v_isZero_2219_ == 1)
{
lean_object* v___x_2220_; 
lean_dec(v_i_2217_);
v___x_2220_ = lean_box(0);
return v___x_2220_;
}
else
{
lean_object* v_one_2221_; lean_object* v_n_2222_; lean_object* v___x_2223_; lean_object* v___y_2225_; 
v_one_2221_ = lean_unsigned_to_nat(1u);
v_n_2222_ = lean_nat_sub(v_i_2217_, v_one_2221_);
lean_dec(v_i_2217_);
v___x_2223_ = lean_array_fget_borrowed(v_as_2216_, v_n_2222_);
if (lean_obj_tag(v___x_2223_) == 0)
{
v_i_2217_ = v_n_2222_;
goto _start;
}
else
{
lean_object* v_val_2229_; lean_object* v_userName_2230_; 
v_val_2229_ = lean_ctor_get(v___x_2223_, 0);
v_userName_2230_ = lean_ctor_get(v_val_2229_, 2);
v___y_2225_ = v_userName_2230_;
goto v___jp_2224_;
}
v___jp_2224_:
{
uint8_t v___x_2226_; 
v___x_2226_ = lean_name_eq(v___y_2225_, v_userName_2215_);
if (v___x_2226_ == 0)
{
v_i_2217_ = v_n_2222_;
goto _start;
}
else
{
lean_dec(v_n_2222_);
lean_inc(v___x_2223_);
return v___x_2223_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_userName_2231_, lean_object* v_as_2232_, lean_object* v_i_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_2231_, v_as_2232_, v_i_2233_);
lean_dec_ref(v_as_2232_);
lean_dec(v_userName_2231_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(lean_object* v_userName_2235_, lean_object* v_as_2236_, lean_object* v_i_2237_){
_start:
{
lean_object* v_zero_2238_; uint8_t v_isZero_2239_; 
v_zero_2238_ = lean_unsigned_to_nat(0u);
v_isZero_2239_ = lean_nat_dec_eq(v_i_2237_, v_zero_2238_);
if (v_isZero_2239_ == 1)
{
lean_object* v___x_2240_; 
lean_dec(v_i_2237_);
v___x_2240_ = lean_box(0);
return v___x_2240_;
}
else
{
lean_object* v_one_2241_; lean_object* v_n_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v_one_2241_ = lean_unsigned_to_nat(1u);
v_n_2242_ = lean_nat_sub(v_i_2237_, v_one_2241_);
lean_dec(v_i_2237_);
v___x_2243_ = lean_array_fget_borrowed(v_as_2236_, v_n_2242_);
v___x_2244_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(v_userName_2235_, v___x_2243_);
if (lean_obj_tag(v___x_2244_) == 0)
{
v_i_2237_ = v_n_2242_;
goto _start;
}
else
{
lean_dec(v_n_2242_);
return v___x_2244_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(lean_object* v_userName_2246_, lean_object* v_x_2247_){
_start:
{
if (lean_obj_tag(v_x_2247_) == 0)
{
lean_object* v_cs_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v_cs_2248_ = lean_ctor_get(v_x_2247_, 0);
v___x_2249_ = lean_array_get_size(v_cs_2248_);
v___x_2250_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(v_userName_2246_, v_cs_2248_, v___x_2249_);
return v___x_2250_;
}
else
{
lean_object* v_vs_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v_vs_2251_ = lean_ctor_get(v_x_2247_, 0);
v___x_2252_ = lean_array_get_size(v_vs_2251_);
v___x_2253_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_2246_, v_vs_2251_, v___x_2252_);
return v___x_2253_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1___boxed(lean_object* v_userName_2254_, lean_object* v_x_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(v_userName_2254_, v_x_2255_);
lean_dec_ref(v_x_2255_);
lean_dec(v_userName_2254_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_userName_2257_, lean_object* v_as_2258_, lean_object* v_i_2259_){
_start:
{
lean_object* v_res_2260_; 
v_res_2260_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(v_userName_2257_, v_as_2258_, v_i_2259_);
lean_dec_ref(v_as_2258_);
lean_dec(v_userName_2257_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(lean_object* v_userName_2261_, lean_object* v_t_2262_){
_start:
{
lean_object* v_root_2263_; lean_object* v_tail_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v_root_2263_ = lean_ctor_get(v_t_2262_, 0);
v_tail_2264_ = lean_ctor_get(v_t_2262_, 1);
v___x_2265_ = lean_array_get_size(v_tail_2264_);
v___x_2266_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_2261_, v_tail_2264_, v___x_2265_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v___x_2267_; 
v___x_2267_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(v_userName_2261_, v_root_2263_);
return v___x_2267_;
}
else
{
return v___x_2266_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0___boxed(lean_object* v_userName_2268_, lean_object* v_t_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(v_userName_2268_, v_t_2269_);
lean_dec_ref(v_t_2269_);
lean_dec(v_userName_2268_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object* v_lctx_2271_, lean_object* v_userName_2272_){
_start:
{
lean_object* v_decls_2273_; lean_object* v___x_2274_; 
v_decls_2273_ = lean_ctor_get(v_lctx_2271_, 1);
v___x_2274_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(v_userName_2272_, v_decls_2273_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f___boxed(lean_object* v_lctx_2275_, lean_object* v_userName_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2275_, v_userName_2276_);
lean_dec(v_userName_2276_);
lean_dec_ref(v_lctx_2275_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0(lean_object* v_userName_2278_, lean_object* v_as_2279_, lean_object* v_i_2280_, lean_object* v_a_2281_){
_start:
{
lean_object* v___x_2282_; 
v___x_2282_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_2278_, v_as_2279_, v_i_2280_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___boxed(lean_object* v_userName_2283_, lean_object* v_as_2284_, lean_object* v_i_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0(v_userName_2283_, v_as_2284_, v_i_2285_, v_a_2286_);
lean_dec_ref(v_as_2284_);
lean_dec(v_userName_2283_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2(lean_object* v_userName_2288_, lean_object* v_as_2289_, lean_object* v_i_2290_, lean_object* v_a_2291_){
_start:
{
lean_object* v___x_2292_; 
v___x_2292_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(v_userName_2288_, v_as_2289_, v_i_2290_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___boxed(lean_object* v_userName_2293_, lean_object* v_as_2294_, lean_object* v_i_2295_, lean_object* v_a_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2(v_userName_2293_, v_as_2294_, v_i_2295_, v_a_2296_);
lean_dec_ref(v_as_2294_);
lean_dec(v_userName_2293_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21(lean_object* v_lctx_2301_, lean_object* v_userName_2302_){
_start:
{
lean_object* v___x_2303_; 
v___x_2303_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2301_, v_userName_2302_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; uint8_t v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2304_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_2305_ = ((lean_object*)(l_Lean_LocalContext_getFromUserName_x21___closed__0));
v___x_2306_ = lean_unsigned_to_nat(412u);
v___x_2307_ = lean_unsigned_to_nat(17u);
v___x_2308_ = ((lean_object*)(l_Lean_LocalContext_getFromUserName_x21___closed__1));
v___x_2309_ = 1;
v___x_2310_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_userName_2302_, v___x_2309_);
v___x_2311_ = lean_string_append(v___x_2308_, v___x_2310_);
lean_dec_ref(v___x_2310_);
v___x_2312_ = ((lean_object*)(l_Lean_LocalContext_getFromUserName_x21___closed__2));
v___x_2313_ = lean_string_append(v___x_2311_, v___x_2312_);
v___x_2314_ = l_mkPanicMessageWithDecl(v___x_2304_, v___x_2305_, v___x_2306_, v___x_2307_, v___x_2313_);
lean_dec_ref(v___x_2313_);
v___x_2315_ = l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(v___x_2314_);
return v___x_2315_;
}
else
{
lean_object* v_val_2316_; 
lean_dec(v_userName_2302_);
v_val_2316_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_val_2316_);
lean_dec_ref_known(v___x_2303_, 1);
return v_val_2316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21___boxed(lean_object* v_lctx_2317_, lean_object* v_userName_2318_){
_start:
{
lean_object* v_res_2319_; 
v_res_2319_ = l_Lean_LocalContext_getFromUserName_x21(v_lctx_2317_, v_userName_2318_);
lean_dec_ref(v_lctx_2317_);
return v_res_2319_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_usesUserName(lean_object* v_lctx_2320_, lean_object* v_userName_2321_){
_start:
{
lean_object* v___x_2322_; 
v___x_2322_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2320_, v_userName_2321_);
if (lean_obj_tag(v___x_2322_) == 0)
{
uint8_t v___x_2323_; 
v___x_2323_ = 0;
return v___x_2323_;
}
else
{
uint8_t v___x_2324_; 
lean_dec_ref_known(v___x_2322_, 1);
v___x_2324_ = 1;
return v___x_2324_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_usesUserName___boxed(lean_object* v_lctx_2325_, lean_object* v_userName_2326_){
_start:
{
uint8_t v_res_2327_; lean_object* v_r_2328_; 
v_res_2327_ = l_Lean_LocalContext_usesUserName(v_lctx_2325_, v_userName_2326_);
lean_dec(v_userName_2326_);
lean_dec_ref(v_lctx_2325_);
v_r_2328_ = lean_box(v_res_2327_);
return v_r_2328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(lean_object* v_lctx_2329_, lean_object* v_suggestion_2330_, lean_object* v_i_2331_){
_start:
{
lean_object* v_curr_2332_; uint8_t v___x_2333_; 
lean_inc(v_i_2331_);
lean_inc(v_suggestion_2330_);
v_curr_2332_ = lean_name_append_index_after(v_suggestion_2330_, v_i_2331_);
v___x_2333_ = l_Lean_LocalContext_usesUserName(v_lctx_2329_, v_curr_2332_);
if (v___x_2333_ == 0)
{
lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
lean_dec(v_suggestion_2330_);
v___x_2334_ = lean_unsigned_to_nat(1u);
v___x_2335_ = lean_nat_add(v_i_2331_, v___x_2334_);
lean_dec(v_i_2331_);
v___x_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2336_, 0, v_curr_2332_);
lean_ctor_set(v___x_2336_, 1, v___x_2335_);
return v___x_2336_;
}
else
{
lean_object* v___x_2337_; lean_object* v___x_2338_; 
lean_dec(v_curr_2332_);
v___x_2337_ = lean_unsigned_to_nat(1u);
v___x_2338_ = lean_nat_add(v_i_2331_, v___x_2337_);
lean_dec(v_i_2331_);
v_i_2331_ = v___x_2338_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux___boxed(lean_object* v_lctx_2340_, lean_object* v_suggestion_2341_, lean_object* v_i_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(v_lctx_2340_, v_suggestion_2341_, v_i_2342_);
lean_dec_ref(v_lctx_2340_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName(lean_object* v_lctx_2344_, lean_object* v_suggestion_2345_){
_start:
{
lean_object* v_suggestion_2346_; uint8_t v___x_2347_; 
v_suggestion_2346_ = l_Lean_Name_eraseMacroScopes(v_suggestion_2345_);
v___x_2347_ = l_Lean_LocalContext_usesUserName(v_lctx_2344_, v_suggestion_2346_);
if (v___x_2347_ == 0)
{
return v_suggestion_2346_;
}
else
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v_fst_2350_; 
v___x_2348_ = lean_unsigned_to_nat(1u);
v___x_2349_ = l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(v_lctx_2344_, v_suggestion_2346_, v___x_2348_);
v_fst_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_fst_2350_);
lean_dec_ref(v___x_2349_);
return v_fst_2350_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName___boxed(lean_object* v_lctx_2351_, lean_object* v_suggestion_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = l_Lean_LocalContext_getUnusedName(v_lctx_2351_, v_suggestion_2352_);
lean_dec(v_suggestion_2352_);
lean_dec_ref(v_lctx_2351_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl(lean_object* v_lctx_2354_){
_start:
{
lean_object* v_decls_2355_; lean_object* v_size_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; uint8_t v___x_2360_; 
v_decls_2355_ = lean_ctor_get(v_lctx_2354_, 1);
v_size_2356_ = lean_ctor_get(v_decls_2355_, 2);
v___x_2357_ = lean_box(0);
v___x_2358_ = lean_unsigned_to_nat(1u);
v___x_2359_ = lean_nat_sub(v_size_2356_, v___x_2358_);
v___x_2360_ = lean_nat_dec_lt(v___x_2359_, v_size_2356_);
if (v___x_2360_ == 0)
{
lean_object* v___x_2361_; 
lean_dec(v___x_2359_);
v___x_2361_ = l_outOfBounds___redArg(v___x_2357_);
return v___x_2361_;
}
else
{
lean_object* v___x_2362_; 
v___x_2362_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2357_, v_decls_2355_, v___x_2359_);
lean_dec(v___x_2359_);
return v___x_2362_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl___boxed(lean_object* v_lctx_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lean_LocalContext_lastDecl(v_lctx_2363_);
lean_dec_ref(v_lctx_2363_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setUserName(lean_object* v_lctx_2365_, lean_object* v_fvarId_2366_, lean_object* v_userName_2367_){
_start:
{
lean_object* v_fvarIdToDecl_2368_; lean_object* v_decls_2369_; lean_object* v_auxDeclToFullName_2370_; lean_object* v_decl_2371_; lean_object* v_decl_2372_; lean_object* v___y_2374_; lean_object* v___y_2375_; lean_object* v___y_2380_; lean_object* v_fvarId_2383_; 
v_fvarIdToDecl_2368_ = lean_ctor_get(v_lctx_2365_, 0);
lean_inc_ref(v_fvarIdToDecl_2368_);
v_decls_2369_ = lean_ctor_get(v_lctx_2365_, 1);
lean_inc_ref(v_decls_2369_);
v_auxDeclToFullName_2370_ = lean_ctor_get(v_lctx_2365_, 2);
lean_inc(v_auxDeclToFullName_2370_);
v_decl_2371_ = l_Lean_LocalContext_get_x21(v_lctx_2365_, v_fvarId_2366_);
v_decl_2372_ = l_Lean_LocalDecl_setUserName(v_decl_2371_, v_userName_2367_);
v_fvarId_2383_ = lean_ctor_get(v_decl_2372_, 1);
lean_inc(v_fvarId_2383_);
v___y_2380_ = v_fvarId_2383_;
goto v___jp_2379_;
v___jp_2373_:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2376_, 0, v_decl_2372_);
v___x_2377_ = l_Lean_PersistentArray_set___redArg(v_decls_2369_, v___y_2375_, v___x_2376_);
lean_dec(v___y_2375_);
v___x_2378_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2378_, 0, v___y_2374_);
lean_ctor_set(v___x_2378_, 1, v___x_2377_);
lean_ctor_set(v___x_2378_, 2, v_auxDeclToFullName_2370_);
return v___x_2378_;
}
v___jp_2379_:
{
lean_object* v___x_2381_; lean_object* v_index_2382_; 
lean_inc_ref(v_decl_2372_);
v___x_2381_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2368_, v___y_2380_, v_decl_2372_);
v_index_2382_ = lean_ctor_get(v_decl_2372_, 0);
lean_inc(v_index_2382_);
v___y_2374_ = v___x_2381_;
v___y_2375_ = v_index_2382_;
goto v___jp_2373_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName(lean_object* v_lctx_2384_, lean_object* v_fromName_2385_, lean_object* v_toName_2386_){
_start:
{
lean_object* v_fvarIdToDecl_2387_; lean_object* v_decls_2388_; lean_object* v_auxDeclToFullName_2389_; lean_object* v___x_2390_; 
v_fvarIdToDecl_2387_ = lean_ctor_get(v_lctx_2384_, 0);
v_decls_2388_ = lean_ctor_get(v_lctx_2384_, 1);
v_auxDeclToFullName_2389_ = lean_ctor_get(v_lctx_2384_, 2);
v___x_2390_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2384_, v_fromName_2385_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_dec(v_toName_2386_);
return v_lctx_2384_;
}
else
{
lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2415_; 
lean_inc(v_auxDeclToFullName_2389_);
lean_inc_ref(v_decls_2388_);
lean_inc_ref(v_fvarIdToDecl_2387_);
v_isSharedCheck_2415_ = !lean_is_exclusive(v_lctx_2384_);
if (v_isSharedCheck_2415_ == 0)
{
lean_object* v_unused_2416_; lean_object* v_unused_2417_; lean_object* v_unused_2418_; 
v_unused_2416_ = lean_ctor_get(v_lctx_2384_, 2);
lean_dec(v_unused_2416_);
v_unused_2417_ = lean_ctor_get(v_lctx_2384_, 1);
lean_dec(v_unused_2417_);
v_unused_2418_ = lean_ctor_get(v_lctx_2384_, 0);
lean_dec(v_unused_2418_);
v___x_2392_ = v_lctx_2384_;
v_isShared_2393_ = v_isSharedCheck_2415_;
goto v_resetjp_2391_;
}
else
{
lean_dec(v_lctx_2384_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2415_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v_val_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2414_; 
v_val_2394_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2396_ = v___x_2390_;
v_isShared_2397_ = v_isSharedCheck_2414_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_val_2394_);
lean_dec(v___x_2390_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2414_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v_decl_2398_; lean_object* v___y_2400_; lean_object* v___y_2401_; lean_object* v___y_2410_; lean_object* v_fvarId_2413_; 
v_decl_2398_ = l_Lean_LocalDecl_setUserName(v_val_2394_, v_toName_2386_);
v_fvarId_2413_ = lean_ctor_get(v_decl_2398_, 1);
lean_inc(v_fvarId_2413_);
v___y_2410_ = v_fvarId_2413_;
goto v___jp_2409_;
v___jp_2399_:
{
lean_object* v___x_2403_; 
if (v_isShared_2397_ == 0)
{
lean_ctor_set(v___x_2396_, 0, v_decl_2398_);
v___x_2403_ = v___x_2396_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_decl_2398_);
v___x_2403_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
lean_object* v___x_2404_; lean_object* v___x_2406_; 
v___x_2404_ = l_Lean_PersistentArray_set___redArg(v_decls_2388_, v___y_2401_, v___x_2403_);
lean_dec(v___y_2401_);
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 1, v___x_2404_);
lean_ctor_set(v___x_2392_, 0, v___y_2400_);
v___x_2406_ = v___x_2392_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v___y_2400_);
lean_ctor_set(v_reuseFailAlloc_2407_, 1, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2407_, 2, v_auxDeclToFullName_2389_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
v___jp_2409_:
{
lean_object* v___x_2411_; lean_object* v_index_2412_; 
lean_inc_ref(v_decl_2398_);
v___x_2411_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2387_, v___y_2410_, v_decl_2398_);
v_index_2412_ = lean_ctor_get(v_decl_2398_, 0);
lean_inc(v_index_2412_);
v___y_2400_ = v___x_2411_;
v___y_2401_ = v_index_2412_;
goto v___jp_2399_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName___boxed(lean_object* v_lctx_2419_, lean_object* v_fromName_2420_, lean_object* v_toName_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Lean_LocalContext_renameUserName(v_lctx_2419_, v_fromName_2420_, v_toName_2421_);
lean_dec(v_fromName_2420_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecl(lean_object* v_lctx_2425_, lean_object* v_fvarId_2426_, lean_object* v_f_2427_){
_start:
{
lean_object* v_fvarIdToDecl_2428_; lean_object* v_decls_2429_; lean_object* v_auxDeclToFullName_2430_; lean_object* v___x_2431_; 
v_fvarIdToDecl_2428_ = lean_ctor_get(v_lctx_2425_, 0);
v_decls_2429_ = lean_ctor_get(v_lctx_2425_, 1);
v_auxDeclToFullName_2430_ = lean_ctor_get(v_lctx_2425_, 2);
lean_inc_ref(v_lctx_2425_);
v___x_2431_ = lean_local_ctx_find(v_lctx_2425_, v_fvarId_2426_);
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_dec_ref(v_f_2427_);
return v_lctx_2425_;
}
else
{
lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2458_; 
lean_inc(v_auxDeclToFullName_2430_);
lean_inc_ref(v_decls_2429_);
lean_inc_ref(v_fvarIdToDecl_2428_);
v_isSharedCheck_2458_ = !lean_is_exclusive(v_lctx_2425_);
if (v_isSharedCheck_2458_ == 0)
{
lean_object* v_unused_2459_; lean_object* v_unused_2460_; lean_object* v_unused_2461_; 
v_unused_2459_ = lean_ctor_get(v_lctx_2425_, 2);
lean_dec(v_unused_2459_);
v_unused_2460_ = lean_ctor_get(v_lctx_2425_, 1);
lean_dec(v_unused_2460_);
v_unused_2461_ = lean_ctor_get(v_lctx_2425_, 0);
lean_dec(v_unused_2461_);
v___x_2433_ = v_lctx_2425_;
v_isShared_2434_ = v_isSharedCheck_2458_;
goto v_resetjp_2432_;
}
else
{
lean_dec(v_lctx_2425_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2458_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v_val_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2457_; 
v_val_2435_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2437_ = v___x_2431_;
v_isShared_2438_ = v_isSharedCheck_2457_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_val_2435_);
lean_dec(v___x_2431_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2457_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v_decl_2441_; lean_object* v___y_2443_; lean_object* v___y_2444_; lean_object* v___y_2453_; lean_object* v_fvarId_2456_; 
v___x_2439_ = ((lean_object*)(l_Lean_LocalContext_modifyLocalDecl___closed__0));
v___x_2440_ = ((lean_object*)(l_Lean_LocalContext_modifyLocalDecl___closed__1));
v_decl_2441_ = lean_apply_1(v_f_2427_, v_val_2435_);
v_fvarId_2456_ = lean_ctor_get(v_decl_2441_, 1);
lean_inc(v_fvarId_2456_);
v___y_2453_ = v_fvarId_2456_;
goto v___jp_2452_;
v___jp_2442_:
{
lean_object* v___x_2446_; 
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 0, v_decl_2441_);
v___x_2446_ = v___x_2437_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v_decl_2441_);
v___x_2446_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
lean_object* v___x_2447_; lean_object* v___x_2449_; 
v___x_2447_ = l_Lean_PersistentArray_set___redArg(v_decls_2429_, v___y_2444_, v___x_2446_);
lean_dec(v___y_2444_);
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 1, v___x_2447_);
lean_ctor_set(v___x_2433_, 0, v___y_2443_);
v___x_2449_ = v___x_2433_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v___y_2443_);
lean_ctor_set(v_reuseFailAlloc_2450_, 1, v___x_2447_);
lean_ctor_set(v_reuseFailAlloc_2450_, 2, v_auxDeclToFullName_2430_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
v___jp_2452_:
{
lean_object* v___x_2454_; lean_object* v_index_2455_; 
lean_inc_ref(v_decl_2441_);
v___x_2454_ = l_Lean_PersistentHashMap_insert___redArg(v___x_2439_, v___x_2440_, v_fvarIdToDecl_2428_, v___y_2453_, v_decl_2441_);
v_index_2455_ = lean_ctor_get(v_decl_2441_, 0);
lean_inc(v_index_2455_);
v___y_2443_ = v___x_2454_;
v___y_2444_ = v_index_2455_;
goto v___jp_2442_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(lean_object* v_f_2462_, lean_object* v_as_2463_, size_t v_i_2464_, size_t v_stop_2465_, lean_object* v_b_2466_){
_start:
{
lean_object* v___y_2468_; uint8_t v___x_2472_; 
v___x_2472_ = lean_usize_dec_eq(v_i_2464_, v_stop_2465_);
if (v___x_2472_ == 0)
{
lean_object* v___x_2473_; 
v___x_2473_ = lean_array_uget(v_as_2463_, v_i_2464_);
if (lean_obj_tag(v___x_2473_) == 0)
{
v___y_2468_ = v_b_2466_;
goto v___jp_2467_;
}
else
{
lean_object* v_val_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2501_; 
v_val_2474_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2476_ = v___x_2473_;
v_isShared_2477_ = v_isSharedCheck_2501_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_val_2474_);
lean_dec(v___x_2473_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2501_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v_fvarIdToDecl_2478_; lean_object* v_decls_2479_; lean_object* v_auxDeclToFullName_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2500_; 
v_fvarIdToDecl_2478_ = lean_ctor_get(v_b_2466_, 0);
v_decls_2479_ = lean_ctor_get(v_b_2466_, 1);
v_auxDeclToFullName_2480_ = lean_ctor_get(v_b_2466_, 2);
v_isSharedCheck_2500_ = !lean_is_exclusive(v_b_2466_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2482_ = v_b_2466_;
v_isShared_2483_ = v_isSharedCheck_2500_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_auxDeclToFullName_2480_);
lean_inc(v_decls_2479_);
lean_inc(v_fvarIdToDecl_2478_);
lean_dec(v_b_2466_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2500_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v_decl_2484_; lean_object* v___y_2486_; lean_object* v___y_2487_; lean_object* v___y_2496_; lean_object* v_fvarId_2499_; 
lean_inc_ref(v_f_2462_);
v_decl_2484_ = lean_apply_1(v_f_2462_, v_val_2474_);
v_fvarId_2499_ = lean_ctor_get(v_decl_2484_, 1);
lean_inc(v_fvarId_2499_);
v___y_2496_ = v_fvarId_2499_;
goto v___jp_2495_;
v___jp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 0, v_decl_2484_);
v___x_2489_ = v___x_2476_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_decl_2484_);
v___x_2489_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
lean_object* v___x_2490_; lean_object* v___x_2492_; 
v___x_2490_ = l_Lean_PersistentArray_set___redArg(v_decls_2479_, v___y_2487_, v___x_2489_);
lean_dec(v___y_2487_);
if (v_isShared_2483_ == 0)
{
lean_ctor_set(v___x_2482_, 1, v___x_2490_);
lean_ctor_set(v___x_2482_, 0, v___y_2486_);
v___x_2492_ = v___x_2482_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v___y_2486_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v___x_2490_);
lean_ctor_set(v_reuseFailAlloc_2493_, 2, v_auxDeclToFullName_2480_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
v___y_2468_ = v___x_2492_;
goto v___jp_2467_;
}
}
}
v___jp_2495_:
{
lean_object* v___x_2497_; lean_object* v_index_2498_; 
lean_inc_ref(v_decl_2484_);
v___x_2497_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2478_, v___y_2496_, v_decl_2484_);
v_index_2498_ = lean_ctor_get(v_decl_2484_, 0);
lean_inc(v_index_2498_);
v___y_2486_ = v___x_2497_;
v___y_2487_ = v_index_2498_;
goto v___jp_2485_;
}
}
}
}
}
else
{
lean_dec_ref(v_f_2462_);
return v_b_2466_;
}
v___jp_2467_:
{
size_t v___x_2469_; size_t v___x_2470_; 
v___x_2469_ = ((size_t)1ULL);
v___x_2470_ = lean_usize_add(v_i_2464_, v___x_2469_);
v_i_2464_ = v___x_2470_;
v_b_2466_ = v___y_2468_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1___boxed(lean_object* v_f_2502_, lean_object* v_as_2503_, lean_object* v_i_2504_, lean_object* v_stop_2505_, lean_object* v_b_2506_){
_start:
{
size_t v_i_boxed_2507_; size_t v_stop_boxed_2508_; lean_object* v_res_2509_; 
v_i_boxed_2507_ = lean_unbox_usize(v_i_2504_);
lean_dec(v_i_2504_);
v_stop_boxed_2508_ = lean_unbox_usize(v_stop_2505_);
lean_dec(v_stop_2505_);
v_res_2509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2502_, v_as_2503_, v_i_boxed_2507_, v_stop_boxed_2508_, v_b_2506_);
lean_dec_ref(v_as_2503_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(lean_object* v_f_2510_, lean_object* v_x_2511_, lean_object* v_x_2512_){
_start:
{
if (lean_obj_tag(v_x_2511_) == 0)
{
lean_object* v_cs_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; uint8_t v___x_2516_; 
v_cs_2513_ = lean_ctor_get(v_x_2511_, 0);
v___x_2514_ = lean_unsigned_to_nat(0u);
v___x_2515_ = lean_array_get_size(v_cs_2513_);
v___x_2516_ = lean_nat_dec_lt(v___x_2514_, v___x_2515_);
if (v___x_2516_ == 0)
{
lean_dec_ref(v_f_2510_);
return v_x_2512_;
}
else
{
size_t v___x_2517_; size_t v___x_2518_; lean_object* v___x_2519_; 
v___x_2517_ = ((size_t)0ULL);
v___x_2518_ = lean_usize_of_nat(v___x_2515_);
v___x_2519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(v_f_2510_, v_cs_2513_, v___x_2517_, v___x_2518_, v_x_2512_);
return v___x_2519_;
}
}
else
{
lean_object* v_vs_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; uint8_t v___x_2523_; 
v_vs_2520_ = lean_ctor_get(v_x_2511_, 0);
v___x_2521_ = lean_unsigned_to_nat(0u);
v___x_2522_ = lean_array_get_size(v_vs_2520_);
v___x_2523_ = lean_nat_dec_lt(v___x_2521_, v___x_2522_);
if (v___x_2523_ == 0)
{
lean_dec_ref(v_f_2510_);
return v_x_2512_;
}
else
{
size_t v___x_2524_; size_t v___x_2525_; lean_object* v___x_2526_; 
v___x_2524_ = ((size_t)0ULL);
v___x_2525_ = lean_usize_of_nat(v___x_2522_);
v___x_2526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2510_, v_vs_2520_, v___x_2524_, v___x_2525_, v_x_2512_);
return v___x_2526_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(lean_object* v_f_2527_, lean_object* v_as_2528_, size_t v_i_2529_, size_t v_stop_2530_, lean_object* v_b_2531_){
_start:
{
uint8_t v___x_2532_; 
v___x_2532_ = lean_usize_dec_eq(v_i_2529_, v_stop_2530_);
if (v___x_2532_ == 0)
{
lean_object* v___x_2533_; lean_object* v___x_2534_; size_t v___x_2535_; size_t v___x_2536_; 
v___x_2533_ = lean_array_uget_borrowed(v_as_2528_, v_i_2529_);
lean_inc_ref(v_f_2527_);
v___x_2534_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(v_f_2527_, v___x_2533_, v_b_2531_);
v___x_2535_ = ((size_t)1ULL);
v___x_2536_ = lean_usize_add(v_i_2529_, v___x_2535_);
v_i_2529_ = v___x_2536_;
v_b_2531_ = v___x_2534_;
goto _start;
}
else
{
lean_dec_ref(v_f_2527_);
return v_b_2531_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1___boxed(lean_object* v_f_2538_, lean_object* v_as_2539_, lean_object* v_i_2540_, lean_object* v_stop_2541_, lean_object* v_b_2542_){
_start:
{
size_t v_i_boxed_2543_; size_t v_stop_boxed_2544_; lean_object* v_res_2545_; 
v_i_boxed_2543_ = lean_unbox_usize(v_i_2540_);
lean_dec(v_i_2540_);
v_stop_boxed_2544_ = lean_unbox_usize(v_stop_2541_);
lean_dec(v_stop_2541_);
v_res_2545_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(v_f_2538_, v_as_2539_, v_i_boxed_2543_, v_stop_boxed_2544_, v_b_2542_);
lean_dec_ref(v_as_2539_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2___boxed(lean_object* v_f_2546_, lean_object* v_x_2547_, lean_object* v_x_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(v_f_2546_, v_x_2547_, v_x_2548_);
lean_dec_ref(v_x_2547_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(lean_object* v_f_2550_, lean_object* v_x_2551_, size_t v_x_2552_, size_t v_x_2553_, lean_object* v_x_2554_){
_start:
{
if (lean_obj_tag(v_x_2551_) == 0)
{
lean_object* v_cs_2555_; lean_object* v___x_2556_; size_t v___x_2557_; lean_object* v_j_2558_; lean_object* v___x_2559_; size_t v___x_2560_; size_t v___x_2561_; size_t v___x_2562_; size_t v___x_2563_; size_t v___x_2564_; size_t v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; uint8_t v___x_2570_; 
v_cs_2555_ = lean_ctor_get(v_x_2551_, 0);
v___x_2556_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0);
v___x_2557_ = lean_usize_shift_right(v_x_2552_, v_x_2553_);
v_j_2558_ = lean_usize_to_nat(v___x_2557_);
v___x_2559_ = lean_array_get_borrowed(v___x_2556_, v_cs_2555_, v_j_2558_);
v___x_2560_ = ((size_t)1ULL);
v___x_2561_ = lean_usize_shift_left(v___x_2560_, v_x_2553_);
v___x_2562_ = lean_usize_sub(v___x_2561_, v___x_2560_);
v___x_2563_ = lean_usize_land(v_x_2552_, v___x_2562_);
v___x_2564_ = ((size_t)5ULL);
v___x_2565_ = lean_usize_sub(v_x_2553_, v___x_2564_);
lean_inc_ref(v_f_2550_);
v___x_2566_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(v_f_2550_, v___x_2559_, v___x_2563_, v___x_2565_, v_x_2554_);
v___x_2567_ = lean_unsigned_to_nat(1u);
v___x_2568_ = lean_nat_add(v_j_2558_, v___x_2567_);
lean_dec(v_j_2558_);
v___x_2569_ = lean_array_get_size(v_cs_2555_);
v___x_2570_ = lean_nat_dec_lt(v___x_2568_, v___x_2569_);
if (v___x_2570_ == 0)
{
lean_dec(v___x_2568_);
lean_dec_ref(v_f_2550_);
return v___x_2566_;
}
else
{
size_t v___x_2571_; size_t v___x_2572_; lean_object* v___x_2573_; 
v___x_2571_ = lean_usize_of_nat(v___x_2568_);
lean_dec(v___x_2568_);
v___x_2572_ = lean_usize_of_nat(v___x_2569_);
v___x_2573_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(v_f_2550_, v_cs_2555_, v___x_2571_, v___x_2572_, v___x_2566_);
return v___x_2573_;
}
}
else
{
lean_object* v_vs_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; uint8_t v___x_2577_; 
v_vs_2574_ = lean_ctor_get(v_x_2551_, 0);
v___x_2575_ = lean_usize_to_nat(v_x_2552_);
v___x_2576_ = lean_array_get_size(v_vs_2574_);
v___x_2577_ = lean_nat_dec_lt(v___x_2575_, v___x_2576_);
if (v___x_2577_ == 0)
{
lean_dec(v___x_2575_);
lean_dec_ref(v_f_2550_);
return v_x_2554_;
}
else
{
size_t v___x_2578_; size_t v___x_2579_; lean_object* v___x_2580_; 
v___x_2578_ = lean_usize_of_nat(v___x_2575_);
lean_dec(v___x_2575_);
v___x_2579_ = lean_usize_of_nat(v___x_2576_);
v___x_2580_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2550_, v_vs_2574_, v___x_2578_, v___x_2579_, v_x_2554_);
return v___x_2580_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0___boxed(lean_object* v_f_2581_, lean_object* v_x_2582_, lean_object* v_x_2583_, lean_object* v_x_2584_, lean_object* v_x_2585_){
_start:
{
size_t v_x_1471__boxed_2586_; size_t v_x_1472__boxed_2587_; lean_object* v_res_2588_; 
v_x_1471__boxed_2586_ = lean_unbox_usize(v_x_2583_);
lean_dec(v_x_2583_);
v_x_1472__boxed_2587_ = lean_unbox_usize(v_x_2584_);
lean_dec(v_x_2584_);
v_res_2588_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(v_f_2581_, v_x_2582_, v_x_1471__boxed_2586_, v_x_1472__boxed_2587_, v_x_2585_);
lean_dec_ref(v_x_2582_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(lean_object* v_f_2589_, lean_object* v_t_2590_, lean_object* v_init_2591_, lean_object* v_start_2592_){
_start:
{
lean_object* v___x_2593_; uint8_t v___x_2594_; 
v___x_2593_ = lean_unsigned_to_nat(0u);
v___x_2594_ = lean_nat_dec_eq(v_start_2592_, v___x_2593_);
if (v___x_2594_ == 0)
{
lean_object* v_root_2595_; lean_object* v_tail_2596_; size_t v_shift_2597_; lean_object* v_tailOff_2598_; uint8_t v___x_2599_; 
v_root_2595_ = lean_ctor_get(v_t_2590_, 0);
v_tail_2596_ = lean_ctor_get(v_t_2590_, 1);
v_shift_2597_ = lean_ctor_get_usize(v_t_2590_, 4);
v_tailOff_2598_ = lean_ctor_get(v_t_2590_, 3);
v___x_2599_ = lean_nat_dec_le(v_tailOff_2598_, v_start_2592_);
if (v___x_2599_ == 0)
{
size_t v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; uint8_t v___x_2603_; 
v___x_2600_ = lean_usize_of_nat(v_start_2592_);
lean_inc_ref(v_f_2589_);
v___x_2601_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(v_f_2589_, v_root_2595_, v___x_2600_, v_shift_2597_, v_init_2591_);
v___x_2602_ = lean_array_get_size(v_tail_2596_);
v___x_2603_ = lean_nat_dec_lt(v___x_2593_, v___x_2602_);
if (v___x_2603_ == 0)
{
lean_dec_ref(v_f_2589_);
return v___x_2601_;
}
else
{
size_t v___x_2604_; size_t v___x_2605_; lean_object* v___x_2606_; 
v___x_2604_ = ((size_t)0ULL);
v___x_2605_ = lean_usize_of_nat(v___x_2602_);
v___x_2606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2589_, v_tail_2596_, v___x_2604_, v___x_2605_, v___x_2601_);
return v___x_2606_;
}
}
else
{
lean_object* v___x_2607_; lean_object* v___x_2608_; uint8_t v___x_2609_; 
v___x_2607_ = lean_nat_sub(v_start_2592_, v_tailOff_2598_);
v___x_2608_ = lean_array_get_size(v_tail_2596_);
v___x_2609_ = lean_nat_dec_lt(v___x_2607_, v___x_2608_);
if (v___x_2609_ == 0)
{
lean_dec(v___x_2607_);
lean_dec_ref(v_f_2589_);
return v_init_2591_;
}
else
{
size_t v___x_2610_; size_t v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = lean_usize_of_nat(v___x_2607_);
lean_dec(v___x_2607_);
v___x_2611_ = lean_usize_of_nat(v___x_2608_);
v___x_2612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2589_, v_tail_2596_, v___x_2610_, v___x_2611_, v_init_2591_);
return v___x_2612_;
}
}
}
else
{
lean_object* v_root_2613_; lean_object* v_tail_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; 
v_root_2613_ = lean_ctor_get(v_t_2590_, 0);
v_tail_2614_ = lean_ctor_get(v_t_2590_, 1);
lean_inc_ref(v_f_2589_);
v___x_2615_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(v_f_2589_, v_root_2613_, v_init_2591_);
v___x_2616_ = lean_array_get_size(v_tail_2614_);
v___x_2617_ = lean_nat_dec_lt(v___x_2593_, v___x_2616_);
if (v___x_2617_ == 0)
{
lean_dec_ref(v_f_2589_);
return v___x_2615_;
}
else
{
size_t v___x_2618_; size_t v___x_2619_; lean_object* v___x_2620_; 
v___x_2618_ = ((size_t)0ULL);
v___x_2619_ = lean_usize_of_nat(v___x_2616_);
v___x_2620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2589_, v_tail_2614_, v___x_2618_, v___x_2619_, v___x_2615_);
return v___x_2620_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0___boxed(lean_object* v_f_2621_, lean_object* v_t_2622_, lean_object* v_init_2623_, lean_object* v_start_2624_){
_start:
{
lean_object* v_res_2625_; 
v_res_2625_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(v_f_2621_, v_t_2622_, v_init_2623_, v_start_2624_);
lean_dec(v_start_2624_);
lean_dec_ref(v_t_2622_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecls(lean_object* v_lctx_2626_, lean_object* v_f_2627_){
_start:
{
lean_object* v_decls_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v_decls_2628_ = lean_ctor_get(v_lctx_2626_, 1);
lean_inc_ref(v_decls_2628_);
v___x_2629_ = lean_unsigned_to_nat(0u);
v___x_2630_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(v_f_2627_, v_decls_2628_, v_lctx_2626_, v___x_2629_);
lean_dec_ref(v_decls_2628_);
return v___x_2630_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind(lean_object* v_lctx_2631_, lean_object* v_fvarId_2632_, uint8_t v_kind_2633_){
_start:
{
lean_object* v_fvarIdToDecl_2634_; lean_object* v_decls_2635_; lean_object* v_auxDeclToFullName_2636_; lean_object* v___x_2637_; 
v_fvarIdToDecl_2634_ = lean_ctor_get(v_lctx_2631_, 0);
v_decls_2635_ = lean_ctor_get(v_lctx_2631_, 1);
v_auxDeclToFullName_2636_ = lean_ctor_get(v_lctx_2631_, 2);
lean_inc_ref(v_lctx_2631_);
v___x_2637_ = lean_local_ctx_find(v_lctx_2631_, v_fvarId_2632_);
if (lean_obj_tag(v___x_2637_) == 0)
{
return v_lctx_2631_;
}
else
{
lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2662_; 
lean_inc(v_auxDeclToFullName_2636_);
lean_inc_ref(v_decls_2635_);
lean_inc_ref(v_fvarIdToDecl_2634_);
v_isSharedCheck_2662_ = !lean_is_exclusive(v_lctx_2631_);
if (v_isSharedCheck_2662_ == 0)
{
lean_object* v_unused_2663_; lean_object* v_unused_2664_; lean_object* v_unused_2665_; 
v_unused_2663_ = lean_ctor_get(v_lctx_2631_, 2);
lean_dec(v_unused_2663_);
v_unused_2664_ = lean_ctor_get(v_lctx_2631_, 1);
lean_dec(v_unused_2664_);
v_unused_2665_ = lean_ctor_get(v_lctx_2631_, 0);
lean_dec(v_unused_2665_);
v___x_2639_ = v_lctx_2631_;
v_isShared_2640_ = v_isSharedCheck_2662_;
goto v_resetjp_2638_;
}
else
{
lean_dec(v_lctx_2631_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2662_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v_val_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2661_; 
v_val_2641_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2643_ = v___x_2637_;
v_isShared_2644_ = v_isSharedCheck_2661_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_val_2641_);
lean_dec(v___x_2637_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2661_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v_decl_2645_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2657_; lean_object* v_fvarId_2660_; 
v_decl_2645_ = l_Lean_LocalDecl_setKind(v_val_2641_, v_kind_2633_);
v_fvarId_2660_ = lean_ctor_get(v_decl_2645_, 1);
lean_inc(v_fvarId_2660_);
v___y_2657_ = v_fvarId_2660_;
goto v___jp_2656_;
v___jp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2644_ == 0)
{
lean_ctor_set(v___x_2643_, 0, v_decl_2645_);
v___x_2650_ = v___x_2643_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_decl_2645_);
v___x_2650_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
lean_object* v___x_2651_; lean_object* v___x_2653_; 
v___x_2651_ = l_Lean_PersistentArray_set___redArg(v_decls_2635_, v___y_2648_, v___x_2650_);
lean_dec(v___y_2648_);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 1, v___x_2651_);
lean_ctor_set(v___x_2639_, 0, v___y_2647_);
v___x_2653_ = v___x_2639_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v___y_2647_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v___x_2651_);
lean_ctor_set(v_reuseFailAlloc_2654_, 2, v_auxDeclToFullName_2636_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
return v___x_2653_;
}
}
}
v___jp_2656_:
{
lean_object* v___x_2658_; lean_object* v_index_2659_; 
lean_inc_ref(v_decl_2645_);
v___x_2658_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2634_, v___y_2657_, v_decl_2645_);
v_index_2659_ = lean_ctor_get(v_decl_2645_, 0);
lean_inc(v_index_2659_);
v___y_2647_ = v___x_2658_;
v___y_2648_ = v_index_2659_;
goto v___jp_2646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind___boxed(lean_object* v_lctx_2666_, lean_object* v_fvarId_2667_, lean_object* v_kind_2668_){
_start:
{
uint8_t v_kind_boxed_2669_; lean_object* v_res_2670_; 
v_kind_boxed_2669_ = lean_unbox(v_kind_2668_);
v_res_2670_ = l_Lean_LocalContext_setKind(v_lctx_2666_, v_fvarId_2667_, v_kind_boxed_2669_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo(lean_object* v_lctx_2671_, lean_object* v_fvarId_2672_, uint8_t v_bi_2673_){
_start:
{
lean_object* v_fvarIdToDecl_2674_; lean_object* v_decls_2675_; lean_object* v_auxDeclToFullName_2676_; lean_object* v___x_2677_; 
v_fvarIdToDecl_2674_ = lean_ctor_get(v_lctx_2671_, 0);
v_decls_2675_ = lean_ctor_get(v_lctx_2671_, 1);
v_auxDeclToFullName_2676_ = lean_ctor_get(v_lctx_2671_, 2);
lean_inc_ref(v_lctx_2671_);
v___x_2677_ = lean_local_ctx_find(v_lctx_2671_, v_fvarId_2672_);
if (lean_obj_tag(v___x_2677_) == 0)
{
return v_lctx_2671_;
}
else
{
lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2702_; 
lean_inc(v_auxDeclToFullName_2676_);
lean_inc_ref(v_decls_2675_);
lean_inc_ref(v_fvarIdToDecl_2674_);
v_isSharedCheck_2702_ = !lean_is_exclusive(v_lctx_2671_);
if (v_isSharedCheck_2702_ == 0)
{
lean_object* v_unused_2703_; lean_object* v_unused_2704_; lean_object* v_unused_2705_; 
v_unused_2703_ = lean_ctor_get(v_lctx_2671_, 2);
lean_dec(v_unused_2703_);
v_unused_2704_ = lean_ctor_get(v_lctx_2671_, 1);
lean_dec(v_unused_2704_);
v_unused_2705_ = lean_ctor_get(v_lctx_2671_, 0);
lean_dec(v_unused_2705_);
v___x_2679_ = v_lctx_2671_;
v_isShared_2680_ = v_isSharedCheck_2702_;
goto v_resetjp_2678_;
}
else
{
lean_dec(v_lctx_2671_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2702_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v_val_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2701_; 
v_val_2681_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2683_ = v___x_2677_;
v_isShared_2684_ = v_isSharedCheck_2701_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_val_2681_);
lean_dec(v___x_2677_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2701_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v_decl_2685_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v___y_2697_; lean_object* v_fvarId_2700_; 
v_decl_2685_ = l_Lean_LocalDecl_setBinderInfo(v_val_2681_, v_bi_2673_);
v_fvarId_2700_ = lean_ctor_get(v_decl_2685_, 1);
lean_inc(v_fvarId_2700_);
v___y_2697_ = v_fvarId_2700_;
goto v___jp_2696_;
v___jp_2686_:
{
lean_object* v___x_2690_; 
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 0, v_decl_2685_);
v___x_2690_ = v___x_2683_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_decl_2685_);
v___x_2690_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
lean_object* v___x_2691_; lean_object* v___x_2693_; 
v___x_2691_ = l_Lean_PersistentArray_set___redArg(v_decls_2675_, v___y_2688_, v___x_2690_);
lean_dec(v___y_2688_);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 1, v___x_2691_);
lean_ctor_set(v___x_2679_, 0, v___y_2687_);
v___x_2693_ = v___x_2679_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v___y_2687_);
lean_ctor_set(v_reuseFailAlloc_2694_, 1, v___x_2691_);
lean_ctor_set(v_reuseFailAlloc_2694_, 2, v_auxDeclToFullName_2676_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
v___jp_2696_:
{
lean_object* v___x_2698_; lean_object* v_index_2699_; 
lean_inc_ref(v_decl_2685_);
v___x_2698_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2674_, v___y_2697_, v_decl_2685_);
v_index_2699_ = lean_ctor_get(v_decl_2685_, 0);
lean_inc(v_index_2699_);
v___y_2687_ = v___x_2698_;
v___y_2688_ = v_index_2699_;
goto v___jp_2686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo___boxed(lean_object* v_lctx_2706_, lean_object* v_fvarId_2707_, lean_object* v_bi_2708_){
_start:
{
uint8_t v_bi_boxed_2709_; lean_object* v_res_2710_; 
v_bi_boxed_2709_ = lean_unbox(v_bi_2708_);
v_res_2710_ = l_Lean_LocalContext_setBinderInfo(v_lctx_2706_, v_fvarId_2707_, v_bi_boxed_2709_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setType(lean_object* v_lctx_2711_, lean_object* v_fvarId_2712_, lean_object* v_type_2713_){
_start:
{
lean_object* v_fvarIdToDecl_2714_; lean_object* v_decls_2715_; lean_object* v_auxDeclToFullName_2716_; lean_object* v___x_2717_; 
v_fvarIdToDecl_2714_ = lean_ctor_get(v_lctx_2711_, 0);
v_decls_2715_ = lean_ctor_get(v_lctx_2711_, 1);
v_auxDeclToFullName_2716_ = lean_ctor_get(v_lctx_2711_, 2);
lean_inc_ref(v_lctx_2711_);
v___x_2717_ = lean_local_ctx_find(v_lctx_2711_, v_fvarId_2712_);
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_dec_ref(v_type_2713_);
return v_lctx_2711_;
}
else
{
lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2742_; 
lean_inc(v_auxDeclToFullName_2716_);
lean_inc_ref(v_decls_2715_);
lean_inc_ref(v_fvarIdToDecl_2714_);
v_isSharedCheck_2742_ = !lean_is_exclusive(v_lctx_2711_);
if (v_isSharedCheck_2742_ == 0)
{
lean_object* v_unused_2743_; lean_object* v_unused_2744_; lean_object* v_unused_2745_; 
v_unused_2743_ = lean_ctor_get(v_lctx_2711_, 2);
lean_dec(v_unused_2743_);
v_unused_2744_ = lean_ctor_get(v_lctx_2711_, 1);
lean_dec(v_unused_2744_);
v_unused_2745_ = lean_ctor_get(v_lctx_2711_, 0);
lean_dec(v_unused_2745_);
v___x_2719_ = v_lctx_2711_;
v_isShared_2720_ = v_isSharedCheck_2742_;
goto v_resetjp_2718_;
}
else
{
lean_dec(v_lctx_2711_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2742_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v_val_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2741_; 
v_val_2721_ = lean_ctor_get(v___x_2717_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2717_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2723_ = v___x_2717_;
v_isShared_2724_ = v_isSharedCheck_2741_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_val_2721_);
lean_dec(v___x_2717_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2741_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v_decl_2725_; lean_object* v___y_2727_; lean_object* v___y_2728_; lean_object* v___y_2737_; lean_object* v_fvarId_2740_; 
v_decl_2725_ = l_Lean_LocalDecl_setType(v_val_2721_, v_type_2713_);
v_fvarId_2740_ = lean_ctor_get(v_decl_2725_, 1);
lean_inc(v_fvarId_2740_);
v___y_2737_ = v_fvarId_2740_;
goto v___jp_2736_;
v___jp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 0, v_decl_2725_);
v___x_2730_ = v___x_2723_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v_decl_2725_);
v___x_2730_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
lean_object* v___x_2731_; lean_object* v___x_2733_; 
v___x_2731_ = l_Lean_PersistentArray_set___redArg(v_decls_2715_, v___y_2728_, v___x_2730_);
lean_dec(v___y_2728_);
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 1, v___x_2731_);
lean_ctor_set(v___x_2719_, 0, v___y_2727_);
v___x_2733_ = v___x_2719_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___y_2727_);
lean_ctor_set(v_reuseFailAlloc_2734_, 1, v___x_2731_);
lean_ctor_set(v_reuseFailAlloc_2734_, 2, v_auxDeclToFullName_2716_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
v___jp_2736_:
{
lean_object* v___x_2738_; lean_object* v_index_2739_; 
lean_inc_ref(v_decl_2725_);
v___x_2738_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2714_, v___y_2737_, v_decl_2725_);
v_index_2739_ = lean_ctor_get(v_decl_2725_, 0);
lean_inc(v_index_2739_);
v___y_2727_ = v___x_2738_;
v___y_2728_ = v_index_2739_;
goto v___jp_2726_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lean_local_ctx_num_indices(lean_object* v_lctx_2746_){
_start:
{
lean_object* v_decls_2747_; lean_object* v_size_2748_; 
v_decls_2747_ = lean_ctor_get(v_lctx_2746_, 1);
lean_inc_ref(v_decls_2747_);
lean_dec_ref(v_lctx_2746_);
v_size_2748_ = lean_ctor_get(v_decls_2747_, 2);
lean_inc(v_size_2748_);
lean_dec_ref(v_decls_2747_);
return v_size_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f(lean_object* v_lctx_2749_, lean_object* v_i_2750_){
_start:
{
lean_object* v_decls_2751_; lean_object* v_size_2752_; lean_object* v___x_2753_; uint8_t v___x_2754_; 
v_decls_2751_ = lean_ctor_get(v_lctx_2749_, 1);
v_size_2752_ = lean_ctor_get(v_decls_2751_, 2);
v___x_2753_ = lean_box(0);
v___x_2754_ = lean_nat_dec_lt(v_i_2750_, v_size_2752_);
if (v___x_2754_ == 0)
{
lean_object* v___x_2755_; 
v___x_2755_ = l_outOfBounds___redArg(v___x_2753_);
return v___x_2755_;
}
else
{
lean_object* v___x_2756_; 
v___x_2756_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2753_, v_decls_2751_, v_i_2750_);
return v___x_2756_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f___boxed(lean_object* v_lctx_2757_, lean_object* v_i_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_Lean_LocalContext_getAt_x3f(v_lctx_2757_, v_i_2758_);
lean_dec(v_i_2758_);
lean_dec_ref(v_lctx_2757_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___lam__0(lean_object* v_toPure_2760_, lean_object* v_f_2761_, lean_object* v_b_2762_, lean_object* v_decl_2763_){
_start:
{
if (lean_obj_tag(v_decl_2763_) == 0)
{
lean_object* v___x_2764_; 
lean_dec(v_f_2761_);
v___x_2764_ = lean_apply_2(v_toPure_2760_, lean_box(0), v_b_2762_);
return v___x_2764_;
}
else
{
lean_object* v_val_2765_; lean_object* v___x_2766_; 
lean_dec(v_toPure_2760_);
v_val_2765_ = lean_ctor_get(v_decl_2763_, 0);
lean_inc(v_val_2765_);
lean_dec_ref_known(v_decl_2763_, 1);
v___x_2766_ = lean_apply_2(v_f_2761_, v_b_2762_, v_val_2765_);
return v___x_2766_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg(lean_object* v_inst_2767_, lean_object* v_lctx_2768_, lean_object* v_f_2769_, lean_object* v_init_2770_, lean_object* v_start_2771_){
_start:
{
lean_object* v_toApplicative_2772_; lean_object* v_decls_2773_; lean_object* v_toPure_2774_; lean_object* v___f_2775_; lean_object* v___x_2776_; 
v_toApplicative_2772_ = lean_ctor_get(v_inst_2767_, 0);
v_decls_2773_ = lean_ctor_get(v_lctx_2768_, 1);
lean_inc_ref(v_decls_2773_);
lean_dec_ref(v_lctx_2768_);
v_toPure_2774_ = lean_ctor_get(v_toApplicative_2772_, 1);
lean_inc(v_toPure_2774_);
v___f_2775_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2775_, 0, v_toPure_2774_);
lean_closure_set(v___f_2775_, 1, v_f_2769_);
v___x_2776_ = l_Lean_PersistentArray_foldlM___redArg(v_inst_2767_, v_decls_2773_, v___f_2775_, v_init_2770_, v_start_2771_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___boxed(lean_object* v_inst_2777_, lean_object* v_lctx_2778_, lean_object* v_f_2779_, lean_object* v_init_2780_, lean_object* v_start_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lean_LocalContext_foldlM___redArg(v_inst_2777_, v_lctx_2778_, v_f_2779_, v_init_2780_, v_start_2781_);
lean_dec(v_start_2781_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM(lean_object* v_m_2783_, lean_object* v_00_u03b2_2784_, lean_object* v_inst_2785_, lean_object* v_lctx_2786_, lean_object* v_f_2787_, lean_object* v_init_2788_, lean_object* v_start_2789_){
_start:
{
lean_object* v___x_2790_; 
v___x_2790_ = l_Lean_LocalContext_foldlM___redArg(v_inst_2785_, v_lctx_2786_, v_f_2787_, v_init_2788_, v_start_2789_);
return v___x_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___boxed(lean_object* v_m_2791_, lean_object* v_00_u03b2_2792_, lean_object* v_inst_2793_, lean_object* v_lctx_2794_, lean_object* v_f_2795_, lean_object* v_init_2796_, lean_object* v_start_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l_Lean_LocalContext_foldlM(v_m_2791_, v_00_u03b2_2792_, v_inst_2793_, v_lctx_2794_, v_f_2795_, v_init_2796_, v_start_2797_);
lean_dec(v_start_2797_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg___lam__0(lean_object* v_toPure_2799_, lean_object* v_f_2800_, lean_object* v_decl_2801_, lean_object* v_b_2802_){
_start:
{
if (lean_obj_tag(v_decl_2801_) == 0)
{
lean_object* v___x_2803_; 
lean_dec(v_f_2800_);
v___x_2803_ = lean_apply_2(v_toPure_2799_, lean_box(0), v_b_2802_);
return v___x_2803_;
}
else
{
lean_object* v_val_2804_; lean_object* v___x_2805_; 
lean_dec(v_toPure_2799_);
v_val_2804_ = lean_ctor_get(v_decl_2801_, 0);
lean_inc(v_val_2804_);
lean_dec_ref_known(v_decl_2801_, 1);
v___x_2805_ = lean_apply_2(v_f_2800_, v_val_2804_, v_b_2802_);
return v___x_2805_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg(lean_object* v_inst_2806_, lean_object* v_lctx_2807_, lean_object* v_f_2808_, lean_object* v_init_2809_){
_start:
{
lean_object* v_toApplicative_2810_; lean_object* v_decls_2811_; lean_object* v_toPure_2812_; lean_object* v___f_2813_; lean_object* v___x_2814_; 
v_toApplicative_2810_ = lean_ctor_get(v_inst_2806_, 0);
v_decls_2811_ = lean_ctor_get(v_lctx_2807_, 1);
lean_inc_ref(v_decls_2811_);
lean_dec_ref(v_lctx_2807_);
v_toPure_2812_ = lean_ctor_get(v_toApplicative_2810_, 1);
lean_inc(v_toPure_2812_);
v___f_2813_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldrM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2813_, 0, v_toPure_2812_);
lean_closure_set(v___f_2813_, 1, v_f_2808_);
v___x_2814_ = l_Lean_PersistentArray_foldrM___redArg(v_inst_2806_, v_decls_2811_, v___f_2813_, v_init_2809_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM(lean_object* v_m_2815_, lean_object* v_00_u03b2_2816_, lean_object* v_inst_2817_, lean_object* v_lctx_2818_, lean_object* v_f_2819_, lean_object* v_init_2820_){
_start:
{
lean_object* v___x_2821_; 
v___x_2821_ = l_Lean_LocalContext_foldrM___redArg(v_inst_2817_, v_lctx_2818_, v_f_2819_, v_init_2820_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___lam__0(lean_object* v_toPure_2822_, lean_object* v_f_2823_, lean_object* v_decl_2824_){
_start:
{
if (lean_obj_tag(v_decl_2824_) == 0)
{
lean_object* v___x_2825_; lean_object* v___x_2826_; 
lean_dec(v_f_2823_);
v___x_2825_ = lean_box(0);
v___x_2826_ = lean_apply_2(v_toPure_2822_, lean_box(0), v___x_2825_);
return v___x_2826_;
}
else
{
lean_object* v_val_2827_; lean_object* v___x_2828_; 
lean_dec(v_toPure_2822_);
v_val_2827_ = lean_ctor_get(v_decl_2824_, 0);
lean_inc(v_val_2827_);
lean_dec_ref_known(v_decl_2824_, 1);
v___x_2828_ = lean_apply_1(v_f_2823_, v_val_2827_);
return v___x_2828_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg(lean_object* v_inst_2829_, lean_object* v_lctx_2830_, lean_object* v_f_2831_, lean_object* v_start_2832_){
_start:
{
lean_object* v_toApplicative_2833_; lean_object* v_decls_2834_; lean_object* v_toPure_2835_; lean_object* v___f_2836_; lean_object* v___x_2837_; 
v_toApplicative_2833_ = lean_ctor_get(v_inst_2829_, 0);
v_decls_2834_ = lean_ctor_get(v_lctx_2830_, 1);
lean_inc_ref(v_decls_2834_);
lean_dec_ref(v_lctx_2830_);
v_toPure_2835_ = lean_ctor_get(v_toApplicative_2833_, 1);
lean_inc(v_toPure_2835_);
v___f_2836_ = lean_alloc_closure((void*)(l_Lean_LocalContext_forM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2836_, 0, v_toPure_2835_);
lean_closure_set(v___f_2836_, 1, v_f_2831_);
v___x_2837_ = l_Lean_PersistentArray_forM___redArg(v_inst_2829_, v_decls_2834_, v___f_2836_, v_start_2832_);
return v___x_2837_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___boxed(lean_object* v_inst_2838_, lean_object* v_lctx_2839_, lean_object* v_f_2840_, lean_object* v_start_2841_){
_start:
{
lean_object* v_res_2842_; 
v_res_2842_ = l_Lean_LocalContext_forM___redArg(v_inst_2838_, v_lctx_2839_, v_f_2840_, v_start_2841_);
lean_dec(v_start_2841_);
return v_res_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM(lean_object* v_m_2843_, lean_object* v_inst_2844_, lean_object* v_lctx_2845_, lean_object* v_f_2846_, lean_object* v_start_2847_){
_start:
{
lean_object* v___x_2848_; 
v___x_2848_ = l_Lean_LocalContext_forM___redArg(v_inst_2844_, v_lctx_2845_, v_f_2846_, v_start_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___boxed(lean_object* v_m_2849_, lean_object* v_inst_2850_, lean_object* v_lctx_2851_, lean_object* v_f_2852_, lean_object* v_start_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l_Lean_LocalContext_forM(v_m_2849_, v_inst_2850_, v_lctx_2851_, v_f_2852_, v_start_2853_);
lean_dec(v_start_2853_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0(lean_object* v_toPure_2855_, lean_object* v_f_2856_, lean_object* v_decl_2857_){
_start:
{
if (lean_obj_tag(v_decl_2857_) == 0)
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
lean_dec(v_f_2856_);
v___x_2858_ = lean_box(0);
v___x_2859_ = lean_apply_2(v_toPure_2855_, lean_box(0), v___x_2858_);
return v___x_2859_;
}
else
{
lean_object* v_val_2860_; lean_object* v___x_2861_; 
lean_dec(v_toPure_2855_);
v_val_2860_ = lean_ctor_get(v_decl_2857_, 0);
lean_inc(v_val_2860_);
lean_dec_ref_known(v_decl_2857_, 1);
v___x_2861_ = lean_apply_1(v_f_2856_, v_val_2860_);
return v___x_2861_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg(lean_object* v_inst_2862_, lean_object* v_lctx_2863_, lean_object* v_f_2864_){
_start:
{
lean_object* v_toApplicative_2865_; lean_object* v_decls_2866_; lean_object* v_toPure_2867_; lean_object* v___f_2868_; lean_object* v___x_2869_; 
v_toApplicative_2865_ = lean_ctor_get(v_inst_2862_, 0);
v_decls_2866_ = lean_ctor_get(v_lctx_2863_, 1);
lean_inc_ref(v_decls_2866_);
lean_dec_ref(v_lctx_2863_);
v_toPure_2867_ = lean_ctor_get(v_toApplicative_2865_, 1);
lean_inc(v_toPure_2867_);
v___f_2868_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2868_, 0, v_toPure_2867_);
lean_closure_set(v___f_2868_, 1, v_f_2864_);
v___x_2869_ = l_Lean_PersistentArray_findSomeM_x3f___redArg(v_inst_2862_, v_decls_2866_, v___f_2868_);
return v___x_2869_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f(lean_object* v_m_2870_, lean_object* v_00_u03b2_2871_, lean_object* v_inst_2872_, lean_object* v_lctx_2873_, lean_object* v_f_2874_){
_start:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lean_LocalContext_findDeclM_x3f___redArg(v_inst_2872_, v_lctx_2873_, v_f_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___redArg(lean_object* v_inst_2876_, lean_object* v_lctx_2877_, lean_object* v_f_2878_){
_start:
{
lean_object* v_toApplicative_2879_; lean_object* v_decls_2880_; lean_object* v_toPure_2881_; lean_object* v___f_2882_; lean_object* v___x_2883_; 
v_toApplicative_2879_ = lean_ctor_get(v_inst_2876_, 0);
v_decls_2880_ = lean_ctor_get(v_lctx_2877_, 1);
lean_inc_ref(v_decls_2880_);
lean_dec_ref(v_lctx_2877_);
v_toPure_2881_ = lean_ctor_get(v_toApplicative_2879_, 1);
lean_inc(v_toPure_2881_);
v___f_2882_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2882_, 0, v_toPure_2881_);
lean_closure_set(v___f_2882_, 1, v_f_2878_);
v___x_2883_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v_inst_2876_, v_decls_2880_, v___f_2882_);
return v___x_2883_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f(lean_object* v_m_2884_, lean_object* v_00_u03b2_2885_, lean_object* v_inst_2886_, lean_object* v_lctx_2887_, lean_object* v_f_2888_){
_start:
{
lean_object* v___x_2889_; 
v___x_2889_ = l_Lean_LocalContext_findDeclRevM_x3f___redArg(v_inst_2886_, v_lctx_2887_, v_f_2888_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__0(lean_object* v_toPure_2890_, lean_object* v_f_2891_, lean_object* v_d_x3f_2892_, lean_object* v_b_2893_){
_start:
{
if (lean_obj_tag(v_d_x3f_2892_) == 0)
{
lean_object* v___x_2894_; lean_object* v___x_2895_; 
lean_dec(v_f_2891_);
v___x_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2894_, 0, v_b_2893_);
v___x_2895_ = lean_apply_2(v_toPure_2890_, lean_box(0), v___x_2894_);
return v___x_2895_;
}
else
{
lean_object* v_val_2896_; lean_object* v___x_2897_; 
lean_dec(v_toPure_2890_);
v_val_2896_ = lean_ctor_get(v_d_x3f_2892_, 0);
lean_inc(v_val_2896_);
lean_dec_ref_known(v_d_x3f_2892_, 1);
v___x_2897_ = lean_apply_2(v_f_2891_, v_val_2896_, v_b_2893_);
return v___x_2897_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1(lean_object* v_toPure_2898_, lean_object* v_inst_2899_, lean_object* v_00_u03b2_2900_, lean_object* v_lctx_2901_, lean_object* v_init_2902_, lean_object* v_f_2903_){
_start:
{
lean_object* v_decls_2904_; lean_object* v___f_2905_; lean_object* v___x_2906_; 
v_decls_2904_ = lean_ctor_get(v_lctx_2901_, 1);
v___f_2905_ = lean_alloc_closure((void*)(l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2905_, 0, v_toPure_2898_);
lean_closure_set(v___f_2905_, 1, v_f_2903_);
v___x_2906_ = l_Lean_PersistentArray_forIn___redArg(v_inst_2899_, v_decls_2904_, v_init_2902_, v___f_2905_);
return v___x_2906_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1___boxed(lean_object* v_toPure_2907_, lean_object* v_inst_2908_, lean_object* v_00_u03b2_2909_, lean_object* v_lctx_2910_, lean_object* v_init_2911_, lean_object* v_f_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1(v_toPure_2907_, v_inst_2908_, v_00_u03b2_2909_, v_lctx_2910_, v_init_2911_, v_f_2912_);
lean_dec_ref(v_lctx_2910_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg(lean_object* v_inst_2914_){
_start:
{
lean_object* v_toApplicative_2915_; lean_object* v_toPure_2916_; lean_object* v___f_2917_; 
v_toApplicative_2915_ = lean_ctor_get(v_inst_2914_, 0);
v_toPure_2916_ = lean_ctor_get(v_toApplicative_2915_, 1);
lean_inc(v_toPure_2916_);
v___f_2917_ = lean_alloc_closure((void*)(l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1___boxed), 6, 2);
lean_closure_set(v___f_2917_, 0, v_toPure_2916_);
lean_closure_set(v___f_2917_, 1, v_inst_2914_);
return v___f_2917_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad(lean_object* v_m_2918_, lean_object* v_inst_2919_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg(v_inst_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___lam__0(lean_object* v_f_2921_, lean_object* v_x1_2922_, lean_object* v_x2_2923_){
_start:
{
lean_object* v___x_2924_; 
v___x_2924_ = lean_apply_2(v_f_2921_, v_x1_2922_, v_x2_2923_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg(lean_object* v_lctx_2944_, lean_object* v_f_2945_, lean_object* v_init_2946_, lean_object* v_start_2947_){
_start:
{
lean_object* v___f_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___f_2948_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2948_, 0, v_f_2945_);
v___x_2949_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2950_ = l_Lean_LocalContext_foldlM___redArg(v___x_2949_, v_lctx_2944_, v___f_2948_, v_init_2946_, v_start_2947_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___boxed(lean_object* v_lctx_2951_, lean_object* v_f_2952_, lean_object* v_init_2953_, lean_object* v_start_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Lean_LocalContext_foldl___redArg(v_lctx_2951_, v_f_2952_, v_init_2953_, v_start_2954_);
lean_dec(v_start_2954_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl(lean_object* v_00_u03b2_2956_, lean_object* v_lctx_2957_, lean_object* v_f_2958_, lean_object* v_init_2959_, lean_object* v_start_2960_){
_start:
{
lean_object* v___f_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___f_2961_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2961_, 0, v_f_2958_);
v___x_2962_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2963_ = l_Lean_LocalContext_foldlM___redArg(v___x_2962_, v_lctx_2957_, v___f_2961_, v_init_2959_, v_start_2960_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___boxed(lean_object* v_00_u03b2_2964_, lean_object* v_lctx_2965_, lean_object* v_f_2966_, lean_object* v_init_2967_, lean_object* v_start_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lean_LocalContext_foldl(v_00_u03b2_2964_, v_lctx_2965_, v_f_2966_, v_init_2967_, v_start_2968_);
lean_dec(v_start_2968_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg___lam__0(lean_object* v_f_2970_, lean_object* v_x1_2971_, lean_object* v_x2_2972_){
_start:
{
lean_object* v___x_2973_; 
v___x_2973_ = lean_apply_2(v_f_2970_, v_x1_2971_, v_x2_2972_);
return v___x_2973_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg(lean_object* v_lctx_2974_, lean_object* v_f_2975_, lean_object* v_init_2976_){
_start:
{
lean_object* v___f_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___f_2977_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2977_, 0, v_f_2975_);
v___x_2978_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2979_ = l_Lean_LocalContext_foldrM___redArg(v___x_2978_, v_lctx_2974_, v___f_2977_, v_init_2976_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr(lean_object* v_00_u03b2_2980_, lean_object* v_lctx_2981_, lean_object* v_f_2982_, lean_object* v_init_2983_){
_start:
{
lean_object* v___f_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___f_2984_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2984_, 0, v_f_2982_);
v___x_2985_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2986_ = l_Lean_LocalContext_foldrM___redArg(v___x_2985_, v_lctx_2981_, v___f_2984_, v_init_2983_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(lean_object* v_as_2987_, size_t v_i_2988_, size_t v_stop_2989_, lean_object* v_b_2990_){
_start:
{
lean_object* v___y_2992_; uint8_t v___x_2996_; 
v___x_2996_ = lean_usize_dec_eq(v_i_2988_, v_stop_2989_);
if (v___x_2996_ == 0)
{
lean_object* v___x_2997_; 
v___x_2997_ = lean_array_uget_borrowed(v_as_2987_, v_i_2988_);
if (lean_obj_tag(v___x_2997_) == 0)
{
v___y_2992_ = v_b_2990_;
goto v___jp_2991_;
}
else
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = lean_unsigned_to_nat(1u);
v___x_2999_ = lean_nat_add(v_b_2990_, v___x_2998_);
lean_dec(v_b_2990_);
v___y_2992_ = v___x_2999_;
goto v___jp_2991_;
}
}
else
{
return v_b_2990_;
}
v___jp_2991_:
{
size_t v___x_2993_; size_t v___x_2994_; 
v___x_2993_ = ((size_t)1ULL);
v___x_2994_ = lean_usize_add(v_i_2988_, v___x_2993_);
v_i_2988_ = v___x_2994_;
v_b_2990_ = v___y_2992_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2___boxed(lean_object* v_as_3000_, lean_object* v_i_3001_, lean_object* v_stop_3002_, lean_object* v_b_3003_){
_start:
{
size_t v_i_boxed_3004_; size_t v_stop_boxed_3005_; lean_object* v_res_3006_; 
v_i_boxed_3004_ = lean_unbox_usize(v_i_3001_);
lean_dec(v_i_3001_);
v_stop_boxed_3005_ = lean_unbox_usize(v_stop_3002_);
lean_dec(v_stop_3002_);
v_res_3006_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_as_3000_, v_i_boxed_3004_, v_stop_boxed_3005_, v_b_3003_);
lean_dec_ref(v_as_3000_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(lean_object* v_x_3007_, lean_object* v_x_3008_){
_start:
{
if (lean_obj_tag(v_x_3007_) == 0)
{
lean_object* v_cs_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; 
v_cs_3009_ = lean_ctor_get(v_x_3007_, 0);
v___x_3010_ = lean_unsigned_to_nat(0u);
v___x_3011_ = lean_array_get_size(v_cs_3009_);
v___x_3012_ = lean_nat_dec_lt(v___x_3010_, v___x_3011_);
if (v___x_3012_ == 0)
{
return v_x_3008_;
}
else
{
size_t v___x_3013_; size_t v___x_3014_; lean_object* v___x_3015_; 
v___x_3013_ = ((size_t)0ULL);
v___x_3014_ = lean_usize_of_nat(v___x_3011_);
v___x_3015_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(v_cs_3009_, v___x_3013_, v___x_3014_, v_x_3008_);
return v___x_3015_;
}
}
else
{
lean_object* v_vs_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; uint8_t v___x_3019_; 
v_vs_3016_ = lean_ctor_get(v_x_3007_, 0);
v___x_3017_ = lean_unsigned_to_nat(0u);
v___x_3018_ = lean_array_get_size(v_vs_3016_);
v___x_3019_ = lean_nat_dec_lt(v___x_3017_, v___x_3018_);
if (v___x_3019_ == 0)
{
return v_x_3008_;
}
else
{
size_t v___x_3020_; size_t v___x_3021_; lean_object* v___x_3022_; 
v___x_3020_ = ((size_t)0ULL);
v___x_3021_ = lean_usize_of_nat(v___x_3018_);
v___x_3022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_vs_3016_, v___x_3020_, v___x_3021_, v_x_3008_);
return v___x_3022_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(lean_object* v_as_3023_, size_t v_i_3024_, size_t v_stop_3025_, lean_object* v_b_3026_){
_start:
{
uint8_t v___x_3027_; 
v___x_3027_ = lean_usize_dec_eq(v_i_3024_, v_stop_3025_);
if (v___x_3027_ == 0)
{
lean_object* v___x_3028_; lean_object* v___x_3029_; size_t v___x_3030_; size_t v___x_3031_; 
v___x_3028_ = lean_array_uget_borrowed(v_as_3023_, v_i_3024_);
v___x_3029_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(v___x_3028_, v_b_3026_);
v___x_3030_ = ((size_t)1ULL);
v___x_3031_ = lean_usize_add(v_i_3024_, v___x_3030_);
v_i_3024_ = v___x_3031_;
v_b_3026_ = v___x_3029_;
goto _start;
}
else
{
return v_b_3026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_as_3033_, lean_object* v_i_3034_, lean_object* v_stop_3035_, lean_object* v_b_3036_){
_start:
{
size_t v_i_boxed_3037_; size_t v_stop_boxed_3038_; lean_object* v_res_3039_; 
v_i_boxed_3037_ = lean_unbox_usize(v_i_3034_);
lean_dec(v_i_3034_);
v_stop_boxed_3038_ = lean_unbox_usize(v_stop_3035_);
lean_dec(v_stop_3035_);
v_res_3039_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(v_as_3033_, v_i_boxed_3037_, v_stop_boxed_3038_, v_b_3036_);
lean_dec_ref(v_as_3033_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3___boxed(lean_object* v_x_3040_, lean_object* v_x_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(v_x_3040_, v_x_3041_);
lean_dec_ref(v_x_3040_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(lean_object* v_x_3043_, size_t v_x_3044_, size_t v_x_3045_, lean_object* v_x_3046_){
_start:
{
if (lean_obj_tag(v_x_3043_) == 0)
{
lean_object* v_cs_3047_; lean_object* v___x_3048_; size_t v___x_3049_; lean_object* v_j_3050_; lean_object* v___x_3051_; size_t v___x_3052_; size_t v___x_3053_; size_t v___x_3054_; size_t v___x_3055_; size_t v___x_3056_; size_t v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; uint8_t v___x_3062_; 
v_cs_3047_ = lean_ctor_get(v_x_3043_, 0);
v___x_3048_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0);
v___x_3049_ = lean_usize_shift_right(v_x_3044_, v_x_3045_);
v_j_3050_ = lean_usize_to_nat(v___x_3049_);
v___x_3051_ = lean_array_get_borrowed(v___x_3048_, v_cs_3047_, v_j_3050_);
v___x_3052_ = ((size_t)1ULL);
v___x_3053_ = lean_usize_shift_left(v___x_3052_, v_x_3045_);
v___x_3054_ = lean_usize_sub(v___x_3053_, v___x_3052_);
v___x_3055_ = lean_usize_land(v_x_3044_, v___x_3054_);
v___x_3056_ = ((size_t)5ULL);
v___x_3057_ = lean_usize_sub(v_x_3045_, v___x_3056_);
v___x_3058_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(v___x_3051_, v___x_3055_, v___x_3057_, v_x_3046_);
v___x_3059_ = lean_unsigned_to_nat(1u);
v___x_3060_ = lean_nat_add(v_j_3050_, v___x_3059_);
lean_dec(v_j_3050_);
v___x_3061_ = lean_array_get_size(v_cs_3047_);
v___x_3062_ = lean_nat_dec_lt(v___x_3060_, v___x_3061_);
if (v___x_3062_ == 0)
{
lean_dec(v___x_3060_);
return v___x_3058_;
}
else
{
size_t v___x_3063_; size_t v___x_3064_; lean_object* v___x_3065_; 
v___x_3063_ = lean_usize_of_nat(v___x_3060_);
lean_dec(v___x_3060_);
v___x_3064_ = lean_usize_of_nat(v___x_3061_);
v___x_3065_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(v_cs_3047_, v___x_3063_, v___x_3064_, v___x_3058_);
return v___x_3065_;
}
}
else
{
lean_object* v_vs_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; uint8_t v___x_3069_; 
v_vs_3066_ = lean_ctor_get(v_x_3043_, 0);
v___x_3067_ = lean_usize_to_nat(v_x_3044_);
v___x_3068_ = lean_array_get_size(v_vs_3066_);
v___x_3069_ = lean_nat_dec_lt(v___x_3067_, v___x_3068_);
if (v___x_3069_ == 0)
{
lean_dec(v___x_3067_);
return v_x_3046_;
}
else
{
size_t v___x_3070_; size_t v___x_3071_; lean_object* v___x_3072_; 
v___x_3070_ = lean_usize_of_nat(v___x_3067_);
lean_dec(v___x_3067_);
v___x_3071_ = lean_usize_of_nat(v___x_3068_);
v___x_3072_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_vs_3066_, v___x_3070_, v___x_3071_, v_x_3046_);
return v___x_3072_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3073_, lean_object* v_x_3074_, lean_object* v_x_3075_, lean_object* v_x_3076_){
_start:
{
size_t v_x_1167__boxed_3077_; size_t v_x_1168__boxed_3078_; lean_object* v_res_3079_; 
v_x_1167__boxed_3077_ = lean_unbox_usize(v_x_3074_);
lean_dec(v_x_3074_);
v_x_1168__boxed_3078_ = lean_unbox_usize(v_x_3075_);
lean_dec(v_x_3075_);
v_res_3079_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(v_x_3073_, v_x_1167__boxed_3077_, v_x_1168__boxed_3078_, v_x_3076_);
lean_dec_ref(v_x_3073_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(lean_object* v_t_3080_, lean_object* v_init_3081_, lean_object* v_start_3082_){
_start:
{
lean_object* v___x_3083_; uint8_t v___x_3084_; 
v___x_3083_ = lean_unsigned_to_nat(0u);
v___x_3084_ = lean_nat_dec_eq(v_start_3082_, v___x_3083_);
if (v___x_3084_ == 0)
{
lean_object* v_root_3085_; lean_object* v_tail_3086_; size_t v_shift_3087_; lean_object* v_tailOff_3088_; uint8_t v___x_3089_; 
v_root_3085_ = lean_ctor_get(v_t_3080_, 0);
v_tail_3086_ = lean_ctor_get(v_t_3080_, 1);
v_shift_3087_ = lean_ctor_get_usize(v_t_3080_, 4);
v_tailOff_3088_ = lean_ctor_get(v_t_3080_, 3);
v___x_3089_ = lean_nat_dec_le(v_tailOff_3088_, v_start_3082_);
if (v___x_3089_ == 0)
{
size_t v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; uint8_t v___x_3093_; 
v___x_3090_ = lean_usize_of_nat(v_start_3082_);
v___x_3091_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(v_root_3085_, v___x_3090_, v_shift_3087_, v_init_3081_);
v___x_3092_ = lean_array_get_size(v_tail_3086_);
v___x_3093_ = lean_nat_dec_lt(v___x_3083_, v___x_3092_);
if (v___x_3093_ == 0)
{
return v___x_3091_;
}
else
{
size_t v___x_3094_; size_t v___x_3095_; lean_object* v___x_3096_; 
v___x_3094_ = ((size_t)0ULL);
v___x_3095_ = lean_usize_of_nat(v___x_3092_);
v___x_3096_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_tail_3086_, v___x_3094_, v___x_3095_, v___x_3091_);
return v___x_3096_;
}
}
else
{
lean_object* v___x_3097_; lean_object* v___x_3098_; uint8_t v___x_3099_; 
v___x_3097_ = lean_nat_sub(v_start_3082_, v_tailOff_3088_);
v___x_3098_ = lean_array_get_size(v_tail_3086_);
v___x_3099_ = lean_nat_dec_lt(v___x_3097_, v___x_3098_);
if (v___x_3099_ == 0)
{
lean_dec(v___x_3097_);
return v_init_3081_;
}
else
{
size_t v___x_3100_; size_t v___x_3101_; lean_object* v___x_3102_; 
v___x_3100_ = lean_usize_of_nat(v___x_3097_);
lean_dec(v___x_3097_);
v___x_3101_ = lean_usize_of_nat(v___x_3098_);
v___x_3102_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_tail_3086_, v___x_3100_, v___x_3101_, v_init_3081_);
return v___x_3102_;
}
}
}
else
{
lean_object* v_root_3103_; lean_object* v_tail_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; uint8_t v___x_3107_; 
v_root_3103_ = lean_ctor_get(v_t_3080_, 0);
v_tail_3104_ = lean_ctor_get(v_t_3080_, 1);
v___x_3105_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(v_root_3103_, v_init_3081_);
v___x_3106_ = lean_array_get_size(v_tail_3104_);
v___x_3107_ = lean_nat_dec_lt(v___x_3083_, v___x_3106_);
if (v___x_3107_ == 0)
{
return v___x_3105_;
}
else
{
size_t v___x_3108_; size_t v___x_3109_; lean_object* v___x_3110_; 
v___x_3108_ = ((size_t)0ULL);
v___x_3109_ = lean_usize_of_nat(v___x_3106_);
v___x_3110_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_tail_3104_, v___x_3108_, v___x_3109_, v___x_3105_);
return v___x_3110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0___boxed(lean_object* v_t_3111_, lean_object* v_init_3112_, lean_object* v_start_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(v_t_3111_, v_init_3112_, v_start_3113_);
lean_dec(v_start_3113_);
lean_dec_ref(v_t_3111_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(lean_object* v_lctx_3115_, lean_object* v_init_3116_, lean_object* v_start_3117_){
_start:
{
lean_object* v_decls_3118_; lean_object* v___x_3119_; 
v_decls_3118_ = lean_ctor_get(v_lctx_3115_, 1);
v___x_3119_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(v_decls_3118_, v_init_3116_, v_start_3117_);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0___boxed(lean_object* v_lctx_3120_, lean_object* v_init_3121_, lean_object* v_start_3122_){
_start:
{
lean_object* v_res_3123_; 
v_res_3123_ = l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(v_lctx_3120_, v_init_3121_, v_start_3122_);
lean_dec(v_start_3122_);
lean_dec_ref(v_lctx_3120_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_size(lean_object* v_lctx_3124_){
_start:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3125_ = lean_unsigned_to_nat(0u);
v___x_3126_ = l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(v_lctx_3124_, v___x_3125_, v___x_3125_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_size___boxed(lean_object* v_lctx_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l_Lean_LocalContext_size(v_lctx_3127_);
lean_dec_ref(v_lctx_3127_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg___lam__0(lean_object* v_f_3129_, lean_object* v_x_3130_){
_start:
{
lean_object* v___x_3131_; 
v___x_3131_ = lean_apply_1(v_f_3129_, v_x_3130_);
return v___x_3131_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg(lean_object* v_lctx_3132_, lean_object* v_f_3133_){
_start:
{
lean_object* v___f_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___f_3134_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3134_, 0, v_f_3133_);
v___x_3135_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_3136_ = l_Lean_LocalContext_findDeclM_x3f___redArg(v___x_3135_, v_lctx_3132_, v___f_3134_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f(lean_object* v_00_u03b2_3137_, lean_object* v_lctx_3138_, lean_object* v_f_3139_){
_start:
{
lean_object* v___f_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___f_3140_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3140_, 0, v_f_3139_);
v___x_3141_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_3142_ = l_Lean_LocalContext_findDeclM_x3f___redArg(v___x_3141_, v_lctx_3138_, v___f_3140_);
return v___x_3142_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f___redArg(lean_object* v_lctx_3143_, lean_object* v_f_3144_){
_start:
{
lean_object* v___f_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___f_3145_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3145_, 0, v_f_3144_);
v___x_3146_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_3147_ = l_Lean_LocalContext_findDeclRevM_x3f___redArg(v___x_3146_, v_lctx_3143_, v___f_3145_);
return v___x_3147_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f(lean_object* v_00_u03b2_3148_, lean_object* v_lctx_3149_, lean_object* v_f_3150_){
_start:
{
lean_object* v___f_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___f_3151_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3151_, 0, v_f_3150_);
v___x_3152_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_3153_ = l_Lean_LocalContext_findDeclRevM_x3f___redArg(v___x_3152_, v_lctx_3149_, v___f_3151_);
return v___x_3153_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(lean_object* v_val_3154_, lean_object* v_as_3155_, size_t v_i_3156_, size_t v_stop_3157_){
_start:
{
uint8_t v___x_3158_; 
v___x_3158_ = lean_usize_dec_eq(v_i_3156_, v_stop_3157_);
if (v___x_3158_ == 0)
{
uint8_t v___x_3159_; uint8_t v___y_3161_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v_fvarId_3167_; uint8_t v___x_3168_; 
v___x_3159_ = 1;
v___x_3165_ = lean_array_uget_borrowed(v_as_3155_, v_i_3156_);
v___x_3166_ = l_Lean_Expr_fvarId_x21(v___x_3165_);
v_fvarId_3167_ = lean_ctor_get(v_val_3154_, 1);
v___x_3168_ = l_Lean_instBEqFVarId_beq(v___x_3166_, v_fvarId_3167_);
lean_dec(v___x_3166_);
v___y_3161_ = v___x_3168_;
goto v___jp_3160_;
v___jp_3160_:
{
if (v___y_3161_ == 0)
{
size_t v___x_3162_; size_t v___x_3163_; 
v___x_3162_ = ((size_t)1ULL);
v___x_3163_ = lean_usize_add(v_i_3156_, v___x_3162_);
v_i_3156_ = v___x_3163_;
goto _start;
}
else
{
return v___x_3159_;
}
}
}
else
{
uint8_t v___x_3169_; 
v___x_3169_ = 0;
return v___x_3169_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0___boxed(lean_object* v_val_3170_, lean_object* v_as_3171_, lean_object* v_i_3172_, lean_object* v_stop_3173_){
_start:
{
size_t v_i_boxed_3174_; size_t v_stop_boxed_3175_; uint8_t v_res_3176_; lean_object* v_r_3177_; 
v_i_boxed_3174_ = lean_unbox_usize(v_i_3172_);
lean_dec(v_i_3172_);
v_stop_boxed_3175_ = lean_unbox_usize(v_stop_3173_);
lean_dec(v_stop_3173_);
v_res_3176_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(v_val_3170_, v_as_3171_, v_i_boxed_3174_, v_stop_boxed_3175_);
lean_dec_ref(v_as_3171_);
lean_dec_ref(v_val_3170_);
v_r_3177_ = lean_box(v_res_3176_);
return v_r_3177_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOfAux(lean_object* v_a_u2081_3178_, lean_object* v_a_u2082_3179_, lean_object* v_exceptFVars_3180_, lean_object* v_i_3181_, lean_object* v_j_3182_){
_start:
{
lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v___y_3195_; lean_object* v___y_3196_; lean_object* v_size_3198_; uint8_t v___x_3199_; 
v_size_3198_ = lean_ctor_get(v_a_u2081_3178_, 2);
v___x_3199_ = lean_nat_dec_lt(v_i_3181_, v_size_3198_);
if (v___x_3199_ == 0)
{
uint8_t v___x_3200_; 
lean_dec(v_j_3182_);
lean_dec(v_i_3181_);
v___x_3200_ = 1;
return v___x_3200_;
}
else
{
lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3201_ = lean_box(0);
v___x_3202_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3201_, v_a_u2081_3178_, v_i_3181_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3203_ = lean_unsigned_to_nat(1u);
v___x_3204_ = lean_nat_add(v_i_3181_, v___x_3203_);
lean_dec(v_i_3181_);
v_i_3181_ = v___x_3204_;
goto _start;
}
else
{
lean_object* v_val_3206_; lean_object* v___x_3216_; lean_object* v___x_3217_; uint8_t v___x_3218_; 
v_val_3206_ = lean_ctor_get(v___x_3202_, 0);
lean_inc(v_val_3206_);
lean_dec_ref_known(v___x_3202_, 1);
v___x_3216_ = lean_unsigned_to_nat(0u);
v___x_3217_ = lean_array_get_size(v_exceptFVars_3180_);
v___x_3218_ = lean_nat_dec_lt(v___x_3216_, v___x_3217_);
if (v___x_3218_ == 0)
{
goto v___jp_3207_;
}
else
{
if (v___x_3218_ == 0)
{
goto v___jp_3207_;
}
else
{
size_t v___x_3219_; size_t v___x_3220_; uint8_t v___x_3221_; 
v___x_3219_ = ((size_t)0ULL);
v___x_3220_ = lean_usize_of_nat(v___x_3217_);
v___x_3221_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(v_val_3206_, v_exceptFVars_3180_, v___x_3219_, v___x_3220_);
if (v___x_3221_ == 0)
{
goto v___jp_3207_;
}
else
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
lean_dec(v_val_3206_);
v___x_3222_ = lean_unsigned_to_nat(1u);
v___x_3223_ = lean_nat_add(v_i_3181_, v___x_3222_);
lean_dec(v_i_3181_);
v_i_3181_ = v___x_3223_;
goto _start;
}
}
}
v___jp_3207_:
{
lean_object* v_size_3208_; uint8_t v___x_3209_; 
v_size_3208_ = lean_ctor_get(v_a_u2082_3179_, 2);
v___x_3209_ = lean_nat_dec_lt(v_j_3182_, v_size_3208_);
if (v___x_3209_ == 0)
{
lean_dec(v_val_3206_);
lean_dec(v_j_3182_);
lean_dec(v_i_3181_);
return v___x_3209_;
}
else
{
lean_object* v___x_3210_; 
v___x_3210_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3201_, v_a_u2082_3179_, v_j_3182_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v___x_3211_; lean_object* v___x_3212_; 
lean_dec(v_val_3206_);
v___x_3211_ = lean_unsigned_to_nat(1u);
v___x_3212_ = lean_nat_add(v_j_3182_, v___x_3211_);
lean_dec(v_j_3182_);
v_j_3182_ = v___x_3212_;
goto _start;
}
else
{
lean_object* v_val_3214_; lean_object* v_fvarId_3215_; 
v_val_3214_ = lean_ctor_get(v___x_3210_, 0);
lean_inc(v_val_3214_);
lean_dec_ref_known(v___x_3210_, 1);
v_fvarId_3215_ = lean_ctor_get(v_val_3206_, 1);
lean_inc(v_fvarId_3215_);
lean_dec(v_val_3206_);
v___y_3195_ = v_val_3214_;
v___y_3196_ = v_fvarId_3215_;
goto v___jp_3194_;
}
}
}
}
}
v___jp_3183_:
{
uint8_t v___x_3186_; 
v___x_3186_ = l_Lean_instBEqFVarId_beq(v___y_3184_, v___y_3185_);
lean_dec(v___y_3185_);
lean_dec(v___y_3184_);
if (v___x_3186_ == 0)
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
v___x_3187_ = lean_unsigned_to_nat(1u);
v___x_3188_ = lean_nat_add(v_j_3182_, v___x_3187_);
lean_dec(v_j_3182_);
v_j_3182_ = v___x_3188_;
goto _start;
}
else
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3190_ = lean_unsigned_to_nat(1u);
v___x_3191_ = lean_nat_add(v_i_3181_, v___x_3190_);
lean_dec(v_i_3181_);
v___x_3192_ = lean_nat_add(v_j_3182_, v___x_3190_);
lean_dec(v_j_3182_);
v_i_3181_ = v___x_3191_;
v_j_3182_ = v___x_3192_;
goto _start;
}
}
v___jp_3194_:
{
lean_object* v_fvarId_3197_; 
v_fvarId_3197_ = lean_ctor_get(v___y_3195_, 1);
lean_inc(v_fvarId_3197_);
lean_dec_ref(v___y_3195_);
v___y_3184_ = v___y_3196_;
v___y_3185_ = v_fvarId_3197_;
goto v___jp_3183_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOfAux___boxed(lean_object* v_a_u2081_3225_, lean_object* v_a_u2082_3226_, lean_object* v_exceptFVars_3227_, lean_object* v_i_3228_, lean_object* v_j_3229_){
_start:
{
uint8_t v_res_3230_; lean_object* v_r_3231_; 
v_res_3230_ = l_Lean_LocalContext_isSubPrefixOfAux(v_a_u2081_3225_, v_a_u2082_3226_, v_exceptFVars_3227_, v_i_3228_, v_j_3229_);
lean_dec_ref(v_exceptFVars_3227_);
lean_dec_ref(v_a_u2082_3226_);
lean_dec_ref(v_a_u2081_3225_);
v_r_3231_ = lean_box(v_res_3230_);
return v_r_3231_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object* v_lctx_u2081_3232_, lean_object* v_lctx_u2082_3233_, lean_object* v_exceptFVars_3234_){
_start:
{
lean_object* v_decls_3235_; lean_object* v_decls_3236_; lean_object* v___x_3237_; uint8_t v___x_3238_; 
v_decls_3235_ = lean_ctor_get(v_lctx_u2081_3232_, 1);
v_decls_3236_ = lean_ctor_get(v_lctx_u2082_3233_, 1);
v___x_3237_ = lean_unsigned_to_nat(0u);
v___x_3238_ = l_Lean_LocalContext_isSubPrefixOfAux(v_decls_3235_, v_decls_3236_, v_exceptFVars_3234_, v___x_3237_, v___x_3237_);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOf___boxed(lean_object* v_lctx_u2081_3239_, lean_object* v_lctx_u2082_3240_, lean_object* v_exceptFVars_3241_){
_start:
{
uint8_t v_res_3242_; lean_object* v_r_3243_; 
v_res_3242_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_u2081_3239_, v_lctx_u2082_3240_, v_exceptFVars_3241_);
lean_dec_ref(v_exceptFVars_3241_);
lean_dec_ref(v_lctx_u2082_3240_);
lean_dec_ref(v_lctx_u2081_3239_);
v_r_3243_ = lean_box(v_res_3242_);
return v_r_3243_;
}
}
static lean_object* _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3245_ = ((lean_object*)(l_Lean_LocalContext_get_x21___closed__1));
v___x_3246_ = lean_unsigned_to_nat(14u);
v___x_3247_ = lean_unsigned_to_nat(585u);
v___x_3248_ = ((lean_object*)(l_Lean_LocalContext_mkBinding___lam__0___closed__0));
v___x_3249_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_3250_ = l_mkPanicMessageWithDecl(v___x_3249_, v___x_3248_, v___x_3247_, v___x_3246_, v___x_3245_);
return v___x_3250_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0(lean_object* v_xs_3251_, lean_object* v_lctx_3252_, lean_object* v___x_3253_, uint8_t v_isLambda_3254_, uint8_t v_usedLetOnly_3255_, uint8_t v_generalizeNondepLet_3256_, lean_object* v_i_3257_, lean_object* v_x_3258_, lean_object* v_b_3259_){
_start:
{
lean_object* v_n_3261_; lean_object* v_ty_3262_; uint8_t v_bi_3263_; lean_object* v_x_3267_; lean_object* v___x_3268_; 
v_x_3267_ = lean_array_fget_borrowed(v_xs_3251_, v_i_3257_);
v___x_3268_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3252_, v_x_3267_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v___x_3269_; lean_object* v___x_3270_; 
lean_dec_ref(v_b_3259_);
v___x_3269_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3270_ = l_panic___redArg(v___x_3253_, v___x_3269_);
return v___x_3270_;
}
else
{
lean_object* v_val_3271_; 
v_val_3271_ = lean_ctor_get(v___x_3268_, 0);
lean_inc(v_val_3271_);
lean_dec_ref_known(v___x_3268_, 1);
if (lean_obj_tag(v_val_3271_) == 0)
{
lean_object* v_userName_3272_; lean_object* v_type_3273_; uint8_t v_bi_3274_; 
v_userName_3272_ = lean_ctor_get(v_val_3271_, 2);
lean_inc(v_userName_3272_);
v_type_3273_ = lean_ctor_get(v_val_3271_, 3);
lean_inc_ref(v_type_3273_);
v_bi_3274_ = lean_ctor_get_uint8(v_val_3271_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3271_, 4);
v_n_3261_ = v_userName_3272_;
v_ty_3262_ = v_type_3273_;
v_bi_3263_ = v_bi_3274_;
goto v___jp_3260_;
}
else
{
lean_object* v_userName_3275_; lean_object* v_type_3276_; lean_object* v_value_3277_; uint8_t v_nondep_3278_; uint8_t v___y_3284_; 
v_userName_3275_ = lean_ctor_get(v_val_3271_, 2);
lean_inc(v_userName_3275_);
v_type_3276_ = lean_ctor_get(v_val_3271_, 3);
lean_inc_ref(v_type_3276_);
v_value_3277_ = lean_ctor_get(v_val_3271_, 4);
lean_inc_ref(v_value_3277_);
v_nondep_3278_ = lean_ctor_get_uint8(v_val_3271_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3271_, 5);
if (v_nondep_3278_ == 0)
{
v___y_3284_ = v_nondep_3278_;
goto v___jp_3283_;
}
else
{
if (v_generalizeNondepLet_3256_ == 0)
{
v___y_3284_ = v_generalizeNondepLet_3256_;
goto v___jp_3283_;
}
else
{
uint8_t v___x_3289_; 
lean_dec_ref(v_value_3277_);
v___x_3289_ = 0;
v_n_3261_ = v_userName_3275_;
v_ty_3262_ = v_type_3276_;
v_bi_3263_ = v___x_3289_;
goto v___jp_3260_;
}
}
v___jp_3279_:
{
lean_object* v_ty_3280_; lean_object* v_val_3281_; lean_object* v___x_3282_; 
v_ty_3280_ = lean_expr_abstract_range(v_type_3276_, v_i_3257_, v_xs_3251_);
lean_dec_ref(v_type_3276_);
v_val_3281_ = lean_expr_abstract_range(v_value_3277_, v_i_3257_, v_xs_3251_);
lean_dec_ref(v_value_3277_);
v___x_3282_ = l_Lean_Expr_letE___override(v_userName_3275_, v_ty_3280_, v_val_3281_, v_b_3259_, v_nondep_3278_);
return v___x_3282_;
}
v___jp_3283_:
{
if (v_usedLetOnly_3255_ == 0)
{
goto v___jp_3279_;
}
else
{
if (v___y_3284_ == 0)
{
lean_object* v___x_3285_; uint8_t v___x_3286_; 
v___x_3285_ = lean_unsigned_to_nat(0u);
v___x_3286_ = lean_expr_has_loose_bvar(v_b_3259_, v___x_3285_);
if (v___x_3286_ == 0)
{
lean_object* v___x_3287_; lean_object* v___x_3288_; 
lean_dec_ref(v_value_3277_);
lean_dec_ref(v_type_3276_);
lean_dec(v_userName_3275_);
v___x_3287_ = lean_unsigned_to_nat(1u);
v___x_3288_ = lean_expr_lower_loose_bvars(v_b_3259_, v___x_3287_, v___x_3287_);
lean_dec_ref(v_b_3259_);
return v___x_3288_;
}
else
{
goto v___jp_3279_;
}
}
else
{
goto v___jp_3279_;
}
}
}
}
}
v___jp_3260_:
{
lean_object* v_ty_3264_; 
v_ty_3264_ = lean_expr_abstract_range(v_ty_3262_, v_i_3257_, v_xs_3251_);
lean_dec_ref(v_ty_3262_);
if (v_isLambda_3254_ == 0)
{
lean_object* v___x_3265_; 
v___x_3265_ = l_Lean_mkForall(v_n_3261_, v_bi_3263_, v_ty_3264_, v_b_3259_);
return v___x_3265_;
}
else
{
lean_object* v___x_3266_; 
v___x_3266_ = l_Lean_mkLambda(v_n_3261_, v_bi_3263_, v_ty_3264_, v_b_3259_);
return v___x_3266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0___boxed(lean_object* v_xs_3290_, lean_object* v_lctx_3291_, lean_object* v___x_3292_, lean_object* v_isLambda_3293_, lean_object* v_usedLetOnly_3294_, lean_object* v_generalizeNondepLet_3295_, lean_object* v_i_3296_, lean_object* v_x_3297_, lean_object* v_b_3298_){
_start:
{
uint8_t v_isLambda_boxed_3299_; uint8_t v_usedLetOnly_boxed_3300_; uint8_t v_generalizeNondepLet_boxed_3301_; lean_object* v_res_3302_; 
v_isLambda_boxed_3299_ = lean_unbox(v_isLambda_3293_);
v_usedLetOnly_boxed_3300_ = lean_unbox(v_usedLetOnly_3294_);
v_generalizeNondepLet_boxed_3301_ = lean_unbox(v_generalizeNondepLet_3295_);
v_res_3302_ = l_Lean_LocalContext_mkBinding___lam__0(v_xs_3290_, v_lctx_3291_, v___x_3292_, v_isLambda_boxed_3299_, v_usedLetOnly_boxed_3300_, v_generalizeNondepLet_boxed_3301_, v_i_3296_, v_x_3297_, v_b_3298_);
lean_dec(v_i_3296_);
lean_dec_ref(v___x_3292_);
lean_dec_ref(v_xs_3290_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding(uint8_t v_isLambda_3303_, lean_object* v_lctx_3304_, lean_object* v_xs_3305_, lean_object* v_b_3306_, uint8_t v_usedLetOnly_3307_, uint8_t v_generalizeNondepLet_3308_){
_start:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___f_3313_; lean_object* v_b_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3309_ = l_Lean_instInhabitedExpr;
v___x_3310_ = lean_box(v_isLambda_3303_);
v___x_3311_ = lean_box(v_usedLetOnly_3307_);
v___x_3312_ = lean_box(v_generalizeNondepLet_3308_);
lean_inc_ref(v_xs_3305_);
v___f_3313_ = lean_alloc_closure((void*)(l_Lean_LocalContext_mkBinding___lam__0___boxed), 9, 6);
lean_closure_set(v___f_3313_, 0, v_xs_3305_);
lean_closure_set(v___f_3313_, 1, v_lctx_3304_);
lean_closure_set(v___f_3313_, 2, v___x_3309_);
lean_closure_set(v___f_3313_, 3, v___x_3310_);
lean_closure_set(v___f_3313_, 4, v___x_3311_);
lean_closure_set(v___f_3313_, 5, v___x_3312_);
v_b_3314_ = lean_expr_abstract(v_b_3306_, v_xs_3305_);
v___x_3315_ = lean_array_get_size(v_xs_3305_);
lean_dec_ref(v_xs_3305_);
v___x_3316_ = l_Nat_foldRev___redArg(v___x_3315_, v___f_3313_, v_b_3314_);
return v___x_3316_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___boxed(lean_object* v_isLambda_3317_, lean_object* v_lctx_3318_, lean_object* v_xs_3319_, lean_object* v_b_3320_, lean_object* v_usedLetOnly_3321_, lean_object* v_generalizeNondepLet_3322_){
_start:
{
uint8_t v_isLambda_boxed_3323_; uint8_t v_usedLetOnly_boxed_3324_; uint8_t v_generalizeNondepLet_boxed_3325_; lean_object* v_res_3326_; 
v_isLambda_boxed_3323_ = lean_unbox(v_isLambda_3317_);
v_usedLetOnly_boxed_3324_ = lean_unbox(v_usedLetOnly_3321_);
v_generalizeNondepLet_boxed_3325_ = lean_unbox(v_generalizeNondepLet_3322_);
v_res_3326_ = l_Lean_LocalContext_mkBinding(v_isLambda_boxed_3323_, v_lctx_3318_, v_xs_3319_, v_b_3320_, v_usedLetOnly_boxed_3324_, v_generalizeNondepLet_boxed_3325_);
lean_dec_ref(v_b_3320_);
return v_res_3326_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(lean_object* v_xs_3327_, lean_object* v_lctx_3328_, uint8_t v_usedLetOnly_3329_, uint8_t v_generalizeNondepLet_3330_, lean_object* v_x_3331_, lean_object* v_x_3332_){
_start:
{
lean_object* v_zero_3333_; uint8_t v_isZero_3334_; 
v_zero_3333_ = lean_unsigned_to_nat(0u);
v_isZero_3334_ = lean_nat_dec_eq(v_x_3331_, v_zero_3333_);
if (v_isZero_3334_ == 1)
{
lean_dec(v_x_3331_);
lean_dec_ref(v_lctx_3328_);
return v_x_3332_;
}
else
{
lean_object* v_one_3335_; lean_object* v_n_3336_; lean_object* v_n_3338_; lean_object* v_ty_3339_; uint8_t v_bi_3340_; lean_object* v_x_3344_; lean_object* v___x_3345_; 
v_one_3335_ = lean_unsigned_to_nat(1u);
v_n_3336_ = lean_nat_sub(v_x_3331_, v_one_3335_);
lean_dec(v_x_3331_);
v_x_3344_ = lean_array_fget_borrowed(v_xs_3327_, v_n_3336_);
lean_inc_ref(v_lctx_3328_);
v___x_3345_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3328_, v_x_3344_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v___x_3346_; lean_object* v___x_3347_; 
lean_dec_ref(v_x_3332_);
v___x_3346_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3347_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_3346_);
v_x_3331_ = v_n_3336_;
v_x_3332_ = v___x_3347_;
goto _start;
}
else
{
lean_object* v_val_3349_; 
v_val_3349_ = lean_ctor_get(v___x_3345_, 0);
lean_inc(v_val_3349_);
lean_dec_ref_known(v___x_3345_, 1);
if (lean_obj_tag(v_val_3349_) == 0)
{
lean_object* v_userName_3350_; lean_object* v_type_3351_; uint8_t v_bi_3352_; 
v_userName_3350_ = lean_ctor_get(v_val_3349_, 2);
lean_inc(v_userName_3350_);
v_type_3351_ = lean_ctor_get(v_val_3349_, 3);
lean_inc_ref(v_type_3351_);
v_bi_3352_ = lean_ctor_get_uint8(v_val_3349_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3349_, 4);
v_n_3338_ = v_userName_3350_;
v_ty_3339_ = v_type_3351_;
v_bi_3340_ = v_bi_3352_;
goto v___jp_3337_;
}
else
{
lean_object* v_userName_3353_; lean_object* v_type_3354_; lean_object* v_value_3355_; uint8_t v_nondep_3356_; uint8_t v___y_3363_; 
v_userName_3353_ = lean_ctor_get(v_val_3349_, 2);
lean_inc(v_userName_3353_);
v_type_3354_ = lean_ctor_get(v_val_3349_, 3);
lean_inc_ref(v_type_3354_);
v_value_3355_ = lean_ctor_get(v_val_3349_, 4);
lean_inc_ref(v_value_3355_);
v_nondep_3356_ = lean_ctor_get_uint8(v_val_3349_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3349_, 5);
if (v_nondep_3356_ == 0)
{
v___y_3363_ = v_nondep_3356_;
goto v___jp_3362_;
}
else
{
if (v_generalizeNondepLet_3330_ == 0)
{
v___y_3363_ = v_generalizeNondepLet_3330_;
goto v___jp_3362_;
}
else
{
uint8_t v___x_3367_; 
lean_dec_ref(v_value_3355_);
v___x_3367_ = 0;
v_n_3338_ = v_userName_3353_;
v_ty_3339_ = v_type_3354_;
v_bi_3340_ = v___x_3367_;
goto v___jp_3337_;
}
}
v___jp_3357_:
{
lean_object* v_ty_3358_; lean_object* v_val_3359_; lean_object* v___x_3360_; 
v_ty_3358_ = lean_expr_abstract_range(v_type_3354_, v_n_3336_, v_xs_3327_);
lean_dec_ref(v_type_3354_);
v_val_3359_ = lean_expr_abstract_range(v_value_3355_, v_n_3336_, v_xs_3327_);
lean_dec_ref(v_value_3355_);
v___x_3360_ = l_Lean_Expr_letE___override(v_userName_3353_, v_ty_3358_, v_val_3359_, v_x_3332_, v_nondep_3356_);
v_x_3331_ = v_n_3336_;
v_x_3332_ = v___x_3360_;
goto _start;
}
v___jp_3362_:
{
if (v_usedLetOnly_3329_ == 0)
{
goto v___jp_3357_;
}
else
{
if (v___y_3363_ == 0)
{
uint8_t v___x_3364_; 
v___x_3364_ = lean_expr_has_loose_bvar(v_x_3332_, v_zero_3333_);
if (v___x_3364_ == 0)
{
lean_object* v___x_3365_; 
lean_dec_ref(v_value_3355_);
lean_dec_ref(v_type_3354_);
lean_dec(v_userName_3353_);
v___x_3365_ = lean_expr_lower_loose_bvars(v_x_3332_, v_one_3335_, v_one_3335_);
lean_dec_ref(v_x_3332_);
v_x_3331_ = v_n_3336_;
v_x_3332_ = v___x_3365_;
goto _start;
}
else
{
goto v___jp_3357_;
}
}
else
{
goto v___jp_3357_;
}
}
}
}
}
v___jp_3337_:
{
lean_object* v_ty_3341_; lean_object* v___x_3342_; 
v_ty_3341_ = lean_expr_abstract_range(v_ty_3339_, v_n_3336_, v_xs_3327_);
lean_dec_ref(v_ty_3339_);
v___x_3342_ = l_Lean_mkLambda(v_n_3338_, v_bi_3340_, v_ty_3341_, v_x_3332_);
v_x_3331_ = v_n_3336_;
v_x_3332_ = v___x_3342_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0___boxed(lean_object* v_xs_3368_, lean_object* v_lctx_3369_, lean_object* v_usedLetOnly_3370_, lean_object* v_generalizeNondepLet_3371_, lean_object* v_x_3372_, lean_object* v_x_3373_){
_start:
{
uint8_t v_usedLetOnly_boxed_3374_; uint8_t v_generalizeNondepLet_boxed_3375_; lean_object* v_res_3376_; 
v_usedLetOnly_boxed_3374_ = lean_unbox(v_usedLetOnly_3370_);
v_generalizeNondepLet_boxed_3375_ = lean_unbox(v_generalizeNondepLet_3371_);
v_res_3376_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3368_, v_lctx_3369_, v_usedLetOnly_boxed_3374_, v_generalizeNondepLet_boxed_3375_, v_x_3372_, v_x_3373_);
lean_dec_ref(v_xs_3368_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(lean_object* v_xs_3377_, lean_object* v_lctx_3378_, uint8_t v_usedLetOnly_3379_, uint8_t v_generalizeNondepLet_3380_, lean_object* v_x_3381_, lean_object* v_x_3382_){
_start:
{
lean_object* v_zero_3383_; uint8_t v_isZero_3384_; 
v_zero_3383_ = lean_unsigned_to_nat(0u);
v_isZero_3384_ = lean_nat_dec_eq(v_x_3381_, v_zero_3383_);
if (v_isZero_3384_ == 1)
{
lean_dec_ref(v_lctx_3378_);
return v_x_3382_;
}
else
{
lean_object* v_one_3385_; lean_object* v_n_3386_; lean_object* v_n_3388_; lean_object* v_ty_3389_; uint8_t v_bi_3390_; lean_object* v_x_3394_; lean_object* v___x_3395_; 
v_one_3385_ = lean_unsigned_to_nat(1u);
v_n_3386_ = lean_nat_sub(v_x_3381_, v_one_3385_);
v_x_3394_ = lean_array_fget_borrowed(v_xs_3377_, v_n_3386_);
lean_inc_ref(v_lctx_3378_);
v___x_3395_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3378_, v_x_3394_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; 
lean_dec_ref(v_x_3382_);
v___x_3396_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3397_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_3396_);
v___x_3398_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3377_, v_lctx_3378_, v_usedLetOnly_3379_, v_generalizeNondepLet_3380_, v_n_3386_, v___x_3397_);
return v___x_3398_;
}
else
{
lean_object* v_val_3399_; 
v_val_3399_ = lean_ctor_get(v___x_3395_, 0);
lean_inc(v_val_3399_);
lean_dec_ref_known(v___x_3395_, 1);
if (lean_obj_tag(v_val_3399_) == 0)
{
lean_object* v_userName_3400_; lean_object* v_type_3401_; uint8_t v_bi_3402_; 
v_userName_3400_ = lean_ctor_get(v_val_3399_, 2);
lean_inc(v_userName_3400_);
v_type_3401_ = lean_ctor_get(v_val_3399_, 3);
lean_inc_ref(v_type_3401_);
v_bi_3402_ = lean_ctor_get_uint8(v_val_3399_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3399_, 4);
v_n_3388_ = v_userName_3400_;
v_ty_3389_ = v_type_3401_;
v_bi_3390_ = v_bi_3402_;
goto v___jp_3387_;
}
else
{
lean_object* v_userName_3403_; lean_object* v_type_3404_; lean_object* v_value_3405_; uint8_t v_nondep_3406_; uint8_t v___y_3413_; 
v_userName_3403_ = lean_ctor_get(v_val_3399_, 2);
lean_inc(v_userName_3403_);
v_type_3404_ = lean_ctor_get(v_val_3399_, 3);
lean_inc_ref(v_type_3404_);
v_value_3405_ = lean_ctor_get(v_val_3399_, 4);
lean_inc_ref(v_value_3405_);
v_nondep_3406_ = lean_ctor_get_uint8(v_val_3399_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3399_, 5);
if (v_nondep_3406_ == 0)
{
v___y_3413_ = v_nondep_3406_;
goto v___jp_3412_;
}
else
{
if (v_generalizeNondepLet_3380_ == 0)
{
v___y_3413_ = v_generalizeNondepLet_3380_;
goto v___jp_3412_;
}
else
{
uint8_t v___x_3417_; 
lean_dec_ref(v_value_3405_);
v___x_3417_ = 0;
v_n_3388_ = v_userName_3403_;
v_ty_3389_ = v_type_3404_;
v_bi_3390_ = v___x_3417_;
goto v___jp_3387_;
}
}
v___jp_3407_:
{
lean_object* v_ty_3408_; lean_object* v_val_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v_ty_3408_ = lean_expr_abstract_range(v_type_3404_, v_n_3386_, v_xs_3377_);
lean_dec_ref(v_type_3404_);
v_val_3409_ = lean_expr_abstract_range(v_value_3405_, v_n_3386_, v_xs_3377_);
lean_dec_ref(v_value_3405_);
v___x_3410_ = l_Lean_Expr_letE___override(v_userName_3403_, v_ty_3408_, v_val_3409_, v_x_3382_, v_nondep_3406_);
v___x_3411_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3377_, v_lctx_3378_, v_usedLetOnly_3379_, v_generalizeNondepLet_3380_, v_n_3386_, v___x_3410_);
return v___x_3411_;
}
v___jp_3412_:
{
if (v_usedLetOnly_3379_ == 0)
{
goto v___jp_3407_;
}
else
{
if (v___y_3413_ == 0)
{
uint8_t v___x_3414_; 
v___x_3414_ = lean_expr_has_loose_bvar(v_x_3382_, v_zero_3383_);
if (v___x_3414_ == 0)
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
lean_dec_ref(v_value_3405_);
lean_dec_ref(v_type_3404_);
lean_dec(v_userName_3403_);
v___x_3415_ = lean_expr_lower_loose_bvars(v_x_3382_, v_one_3385_, v_one_3385_);
lean_dec_ref(v_x_3382_);
v___x_3416_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3377_, v_lctx_3378_, v_usedLetOnly_3379_, v_generalizeNondepLet_3380_, v_n_3386_, v___x_3415_);
return v___x_3416_;
}
else
{
goto v___jp_3407_;
}
}
else
{
goto v___jp_3407_;
}
}
}
}
}
v___jp_3387_:
{
lean_object* v_ty_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v_ty_3391_ = lean_expr_abstract_range(v_ty_3389_, v_n_3386_, v_xs_3377_);
lean_dec_ref(v_ty_3389_);
v___x_3392_ = l_Lean_mkLambda(v_n_3388_, v_bi_3390_, v_ty_3391_, v_x_3382_);
v___x_3393_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3377_, v_lctx_3378_, v_usedLetOnly_3379_, v_generalizeNondepLet_3380_, v_n_3386_, v___x_3392_);
return v___x_3393_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0___boxed(lean_object* v_xs_3418_, lean_object* v_lctx_3419_, lean_object* v_usedLetOnly_3420_, lean_object* v_generalizeNondepLet_3421_, lean_object* v_x_3422_, lean_object* v_x_3423_){
_start:
{
uint8_t v_usedLetOnly_boxed_3424_; uint8_t v_generalizeNondepLet_boxed_3425_; lean_object* v_res_3426_; 
v_usedLetOnly_boxed_3424_ = lean_unbox(v_usedLetOnly_3420_);
v_generalizeNondepLet_boxed_3425_ = lean_unbox(v_generalizeNondepLet_3421_);
v_res_3426_ = l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(v_xs_3418_, v_lctx_3419_, v_usedLetOnly_boxed_3424_, v_generalizeNondepLet_boxed_3425_, v_x_3422_, v_x_3423_);
lean_dec(v_x_3422_);
lean_dec_ref(v_xs_3418_);
return v_res_3426_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda(lean_object* v_lctx_3427_, lean_object* v_xs_3428_, lean_object* v_b_3429_, uint8_t v_usedLetOnly_3430_, uint8_t v_generalizeNondepLet_3431_){
_start:
{
lean_object* v_b_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; 
v_b_3432_ = lean_expr_abstract(v_b_3429_, v_xs_3428_);
v___x_3433_ = lean_array_get_size(v_xs_3428_);
v___x_3434_ = l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(v_xs_3428_, v_lctx_3427_, v_usedLetOnly_3430_, v_generalizeNondepLet_3431_, v___x_3433_, v_b_3432_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda___boxed(lean_object* v_lctx_3435_, lean_object* v_xs_3436_, lean_object* v_b_3437_, lean_object* v_usedLetOnly_3438_, lean_object* v_generalizeNondepLet_3439_){
_start:
{
uint8_t v_usedLetOnly_boxed_3440_; uint8_t v_generalizeNondepLet_boxed_3441_; lean_object* v_res_3442_; 
v_usedLetOnly_boxed_3440_ = lean_unbox(v_usedLetOnly_3438_);
v_generalizeNondepLet_boxed_3441_ = lean_unbox(v_generalizeNondepLet_3439_);
v_res_3442_ = l_Lean_LocalContext_mkLambda(v_lctx_3435_, v_xs_3436_, v_b_3437_, v_usedLetOnly_boxed_3440_, v_generalizeNondepLet_boxed_3441_);
lean_dec_ref(v_b_3437_);
lean_dec_ref(v_xs_3436_);
return v_res_3442_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(lean_object* v_xs_3443_, lean_object* v_lctx_3444_, uint8_t v_usedLetOnly_3445_, uint8_t v_generalizeNondepLet_3446_, lean_object* v_x_3447_, lean_object* v_x_3448_){
_start:
{
lean_object* v_zero_3449_; uint8_t v_isZero_3450_; 
v_zero_3449_ = lean_unsigned_to_nat(0u);
v_isZero_3450_ = lean_nat_dec_eq(v_x_3447_, v_zero_3449_);
if (v_isZero_3450_ == 1)
{
lean_dec(v_x_3447_);
lean_dec_ref(v_lctx_3444_);
return v_x_3448_;
}
else
{
lean_object* v_one_3451_; lean_object* v_n_3452_; lean_object* v_n_3454_; lean_object* v_ty_3455_; uint8_t v_bi_3456_; lean_object* v_x_3460_; lean_object* v___x_3461_; 
v_one_3451_ = lean_unsigned_to_nat(1u);
v_n_3452_ = lean_nat_sub(v_x_3447_, v_one_3451_);
lean_dec(v_x_3447_);
v_x_3460_ = lean_array_fget_borrowed(v_xs_3443_, v_n_3452_);
lean_inc_ref(v_lctx_3444_);
v___x_3461_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3444_, v_x_3460_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v___x_3462_; lean_object* v___x_3463_; 
lean_dec_ref(v_x_3448_);
v___x_3462_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3463_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_3462_);
v_x_3447_ = v_n_3452_;
v_x_3448_ = v___x_3463_;
goto _start;
}
else
{
lean_object* v_val_3465_; 
v_val_3465_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_val_3465_);
lean_dec_ref_known(v___x_3461_, 1);
if (lean_obj_tag(v_val_3465_) == 0)
{
lean_object* v_userName_3466_; lean_object* v_type_3467_; uint8_t v_bi_3468_; 
v_userName_3466_ = lean_ctor_get(v_val_3465_, 2);
lean_inc(v_userName_3466_);
v_type_3467_ = lean_ctor_get(v_val_3465_, 3);
lean_inc_ref(v_type_3467_);
v_bi_3468_ = lean_ctor_get_uint8(v_val_3465_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3465_, 4);
v_n_3454_ = v_userName_3466_;
v_ty_3455_ = v_type_3467_;
v_bi_3456_ = v_bi_3468_;
goto v___jp_3453_;
}
else
{
lean_object* v_userName_3469_; lean_object* v_type_3470_; lean_object* v_value_3471_; uint8_t v_nondep_3472_; uint8_t v___y_3479_; 
v_userName_3469_ = lean_ctor_get(v_val_3465_, 2);
lean_inc(v_userName_3469_);
v_type_3470_ = lean_ctor_get(v_val_3465_, 3);
lean_inc_ref(v_type_3470_);
v_value_3471_ = lean_ctor_get(v_val_3465_, 4);
lean_inc_ref(v_value_3471_);
v_nondep_3472_ = lean_ctor_get_uint8(v_val_3465_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3465_, 5);
if (v_nondep_3472_ == 0)
{
v___y_3479_ = v_nondep_3472_;
goto v___jp_3478_;
}
else
{
if (v_generalizeNondepLet_3446_ == 0)
{
v___y_3479_ = v_generalizeNondepLet_3446_;
goto v___jp_3478_;
}
else
{
uint8_t v___x_3483_; 
lean_dec_ref(v_value_3471_);
v___x_3483_ = 0;
v_n_3454_ = v_userName_3469_;
v_ty_3455_ = v_type_3470_;
v_bi_3456_ = v___x_3483_;
goto v___jp_3453_;
}
}
v___jp_3473_:
{
lean_object* v_ty_3474_; lean_object* v_val_3475_; lean_object* v___x_3476_; 
v_ty_3474_ = lean_expr_abstract_range(v_type_3470_, v_n_3452_, v_xs_3443_);
lean_dec_ref(v_type_3470_);
v_val_3475_ = lean_expr_abstract_range(v_value_3471_, v_n_3452_, v_xs_3443_);
lean_dec_ref(v_value_3471_);
v___x_3476_ = l_Lean_Expr_letE___override(v_userName_3469_, v_ty_3474_, v_val_3475_, v_x_3448_, v_nondep_3472_);
v_x_3447_ = v_n_3452_;
v_x_3448_ = v___x_3476_;
goto _start;
}
v___jp_3478_:
{
if (v_usedLetOnly_3445_ == 0)
{
goto v___jp_3473_;
}
else
{
if (v___y_3479_ == 0)
{
uint8_t v___x_3480_; 
v___x_3480_ = lean_expr_has_loose_bvar(v_x_3448_, v_zero_3449_);
if (v___x_3480_ == 0)
{
lean_object* v___x_3481_; 
lean_dec_ref(v_value_3471_);
lean_dec_ref(v_type_3470_);
lean_dec(v_userName_3469_);
v___x_3481_ = lean_expr_lower_loose_bvars(v_x_3448_, v_one_3451_, v_one_3451_);
lean_dec_ref(v_x_3448_);
v_x_3447_ = v_n_3452_;
v_x_3448_ = v___x_3481_;
goto _start;
}
else
{
goto v___jp_3473_;
}
}
else
{
goto v___jp_3473_;
}
}
}
}
}
v___jp_3453_:
{
lean_object* v_ty_3457_; lean_object* v___x_3458_; 
v_ty_3457_ = lean_expr_abstract_range(v_ty_3455_, v_n_3452_, v_xs_3443_);
lean_dec_ref(v_ty_3455_);
v___x_3458_ = l_Lean_mkForall(v_n_3454_, v_bi_3456_, v_ty_3457_, v_x_3448_);
v_x_3447_ = v_n_3452_;
v_x_3448_ = v___x_3458_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0___boxed(lean_object* v_xs_3484_, lean_object* v_lctx_3485_, lean_object* v_usedLetOnly_3486_, lean_object* v_generalizeNondepLet_3487_, lean_object* v_x_3488_, lean_object* v_x_3489_){
_start:
{
uint8_t v_usedLetOnly_boxed_3490_; uint8_t v_generalizeNondepLet_boxed_3491_; lean_object* v_res_3492_; 
v_usedLetOnly_boxed_3490_ = lean_unbox(v_usedLetOnly_3486_);
v_generalizeNondepLet_boxed_3491_ = lean_unbox(v_generalizeNondepLet_3487_);
v_res_3492_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3484_, v_lctx_3485_, v_usedLetOnly_boxed_3490_, v_generalizeNondepLet_boxed_3491_, v_x_3488_, v_x_3489_);
lean_dec_ref(v_xs_3484_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(lean_object* v_xs_3493_, lean_object* v_lctx_3494_, uint8_t v_usedLetOnly_3495_, uint8_t v_generalizeNondepLet_3496_, lean_object* v_x_3497_, lean_object* v_x_3498_){
_start:
{
lean_object* v_zero_3499_; uint8_t v_isZero_3500_; 
v_zero_3499_ = lean_unsigned_to_nat(0u);
v_isZero_3500_ = lean_nat_dec_eq(v_x_3497_, v_zero_3499_);
if (v_isZero_3500_ == 1)
{
lean_dec_ref(v_lctx_3494_);
return v_x_3498_;
}
else
{
lean_object* v_one_3501_; lean_object* v_n_3502_; lean_object* v_n_3504_; lean_object* v_ty_3505_; uint8_t v_bi_3506_; lean_object* v_x_3510_; lean_object* v___x_3511_; 
v_one_3501_ = lean_unsigned_to_nat(1u);
v_n_3502_ = lean_nat_sub(v_x_3497_, v_one_3501_);
v_x_3510_ = lean_array_fget_borrowed(v_xs_3493_, v_n_3502_);
lean_inc_ref(v_lctx_3494_);
v___x_3511_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3494_, v_x_3510_);
if (lean_obj_tag(v___x_3511_) == 0)
{
lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; 
lean_dec_ref(v_x_3498_);
v___x_3512_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3513_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_3512_);
v___x_3514_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3493_, v_lctx_3494_, v_usedLetOnly_3495_, v_generalizeNondepLet_3496_, v_n_3502_, v___x_3513_);
return v___x_3514_;
}
else
{
lean_object* v_val_3515_; 
v_val_3515_ = lean_ctor_get(v___x_3511_, 0);
lean_inc(v_val_3515_);
lean_dec_ref_known(v___x_3511_, 1);
if (lean_obj_tag(v_val_3515_) == 0)
{
lean_object* v_userName_3516_; lean_object* v_type_3517_; uint8_t v_bi_3518_; 
v_userName_3516_ = lean_ctor_get(v_val_3515_, 2);
lean_inc(v_userName_3516_);
v_type_3517_ = lean_ctor_get(v_val_3515_, 3);
lean_inc_ref(v_type_3517_);
v_bi_3518_ = lean_ctor_get_uint8(v_val_3515_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3515_, 4);
v_n_3504_ = v_userName_3516_;
v_ty_3505_ = v_type_3517_;
v_bi_3506_ = v_bi_3518_;
goto v___jp_3503_;
}
else
{
lean_object* v_userName_3519_; lean_object* v_type_3520_; lean_object* v_value_3521_; uint8_t v_nondep_3522_; uint8_t v___y_3529_; 
v_userName_3519_ = lean_ctor_get(v_val_3515_, 2);
lean_inc(v_userName_3519_);
v_type_3520_ = lean_ctor_get(v_val_3515_, 3);
lean_inc_ref(v_type_3520_);
v_value_3521_ = lean_ctor_get(v_val_3515_, 4);
lean_inc_ref(v_value_3521_);
v_nondep_3522_ = lean_ctor_get_uint8(v_val_3515_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3515_, 5);
if (v_nondep_3522_ == 0)
{
v___y_3529_ = v_nondep_3522_;
goto v___jp_3528_;
}
else
{
if (v_generalizeNondepLet_3496_ == 0)
{
v___y_3529_ = v_generalizeNondepLet_3496_;
goto v___jp_3528_;
}
else
{
uint8_t v___x_3533_; 
lean_dec_ref(v_value_3521_);
v___x_3533_ = 0;
v_n_3504_ = v_userName_3519_;
v_ty_3505_ = v_type_3520_;
v_bi_3506_ = v___x_3533_;
goto v___jp_3503_;
}
}
v___jp_3523_:
{
lean_object* v_ty_3524_; lean_object* v_val_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v_ty_3524_ = lean_expr_abstract_range(v_type_3520_, v_n_3502_, v_xs_3493_);
lean_dec_ref(v_type_3520_);
v_val_3525_ = lean_expr_abstract_range(v_value_3521_, v_n_3502_, v_xs_3493_);
lean_dec_ref(v_value_3521_);
v___x_3526_ = l_Lean_Expr_letE___override(v_userName_3519_, v_ty_3524_, v_val_3525_, v_x_3498_, v_nondep_3522_);
v___x_3527_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3493_, v_lctx_3494_, v_usedLetOnly_3495_, v_generalizeNondepLet_3496_, v_n_3502_, v___x_3526_);
return v___x_3527_;
}
v___jp_3528_:
{
if (v_usedLetOnly_3495_ == 0)
{
goto v___jp_3523_;
}
else
{
if (v___y_3529_ == 0)
{
uint8_t v___x_3530_; 
v___x_3530_ = lean_expr_has_loose_bvar(v_x_3498_, v_zero_3499_);
if (v___x_3530_ == 0)
{
lean_object* v___x_3531_; lean_object* v___x_3532_; 
lean_dec_ref(v_value_3521_);
lean_dec_ref(v_type_3520_);
lean_dec(v_userName_3519_);
v___x_3531_ = lean_expr_lower_loose_bvars(v_x_3498_, v_one_3501_, v_one_3501_);
lean_dec_ref(v_x_3498_);
v___x_3532_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3493_, v_lctx_3494_, v_usedLetOnly_3495_, v_generalizeNondepLet_3496_, v_n_3502_, v___x_3531_);
return v___x_3532_;
}
else
{
goto v___jp_3523_;
}
}
else
{
goto v___jp_3523_;
}
}
}
}
}
v___jp_3503_:
{
lean_object* v_ty_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; 
v_ty_3507_ = lean_expr_abstract_range(v_ty_3505_, v_n_3502_, v_xs_3493_);
lean_dec_ref(v_ty_3505_);
v___x_3508_ = l_Lean_mkForall(v_n_3504_, v_bi_3506_, v_ty_3507_, v_x_3498_);
v___x_3509_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3493_, v_lctx_3494_, v_usedLetOnly_3495_, v_generalizeNondepLet_3496_, v_n_3502_, v___x_3508_);
return v___x_3509_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0___boxed(lean_object* v_xs_3534_, lean_object* v_lctx_3535_, lean_object* v_usedLetOnly_3536_, lean_object* v_generalizeNondepLet_3537_, lean_object* v_x_3538_, lean_object* v_x_3539_){
_start:
{
uint8_t v_usedLetOnly_boxed_3540_; uint8_t v_generalizeNondepLet_boxed_3541_; lean_object* v_res_3542_; 
v_usedLetOnly_boxed_3540_ = lean_unbox(v_usedLetOnly_3536_);
v_generalizeNondepLet_boxed_3541_ = lean_unbox(v_generalizeNondepLet_3537_);
v_res_3542_ = l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(v_xs_3534_, v_lctx_3535_, v_usedLetOnly_boxed_3540_, v_generalizeNondepLet_boxed_3541_, v_x_3538_, v_x_3539_);
lean_dec(v_x_3538_);
lean_dec_ref(v_xs_3534_);
return v_res_3542_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall(lean_object* v_lctx_3543_, lean_object* v_xs_3544_, lean_object* v_b_3545_, uint8_t v_usedLetOnly_3546_, uint8_t v_generalizeNondepLet_3547_){
_start:
{
lean_object* v_b_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v_b_3548_ = lean_expr_abstract(v_b_3545_, v_xs_3544_);
v___x_3549_ = lean_array_get_size(v_xs_3544_);
v___x_3550_ = l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(v_xs_3544_, v_lctx_3543_, v_usedLetOnly_3546_, v_generalizeNondepLet_3547_, v___x_3549_, v_b_3548_);
return v___x_3550_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall___boxed(lean_object* v_lctx_3551_, lean_object* v_xs_3552_, lean_object* v_b_3553_, lean_object* v_usedLetOnly_3554_, lean_object* v_generalizeNondepLet_3555_){
_start:
{
uint8_t v_usedLetOnly_boxed_3556_; uint8_t v_generalizeNondepLet_boxed_3557_; lean_object* v_res_3558_; 
v_usedLetOnly_boxed_3556_ = lean_unbox(v_usedLetOnly_3554_);
v_generalizeNondepLet_boxed_3557_ = lean_unbox(v_generalizeNondepLet_3555_);
v_res_3558_ = l_Lean_LocalContext_mkForall(v_lctx_3551_, v_xs_3552_, v_b_3553_, v_usedLetOnly_boxed_3556_, v_generalizeNondepLet_boxed_3557_);
lean_dec_ref(v_b_3553_);
lean_dec_ref(v_xs_3552_);
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg___lam__0(lean_object* v_toPure_3559_, lean_object* v_p_3560_, lean_object* v_d_3561_){
_start:
{
if (lean_obj_tag(v_d_3561_) == 0)
{
uint8_t v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
lean_dec(v_p_3560_);
v___x_3562_ = 0;
v___x_3563_ = lean_box(v___x_3562_);
v___x_3564_ = lean_apply_2(v_toPure_3559_, lean_box(0), v___x_3563_);
return v___x_3564_;
}
else
{
lean_object* v_val_3565_; lean_object* v___x_3566_; 
lean_dec(v_toPure_3559_);
v_val_3565_ = lean_ctor_get(v_d_3561_, 0);
lean_inc(v_val_3565_);
lean_dec_ref_known(v_d_3561_, 1);
v___x_3566_ = lean_apply_1(v_p_3560_, v_val_3565_);
return v___x_3566_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg(lean_object* v_inst_3567_, lean_object* v_lctx_3568_, lean_object* v_p_3569_){
_start:
{
lean_object* v_toApplicative_3570_; lean_object* v_decls_3571_; lean_object* v_toPure_3572_; lean_object* v___f_3573_; lean_object* v___x_3574_; 
v_toApplicative_3570_ = lean_ctor_get(v_inst_3567_, 0);
v_decls_3571_ = lean_ctor_get(v_lctx_3568_, 1);
lean_inc_ref(v_decls_3571_);
lean_dec_ref(v_lctx_3568_);
v_toPure_3572_ = lean_ctor_get(v_toApplicative_3570_, 1);
lean_inc(v_toPure_3572_);
v___f_3573_ = lean_alloc_closure((void*)(l_Lean_LocalContext_anyM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3573_, 0, v_toPure_3572_);
lean_closure_set(v___f_3573_, 1, v_p_3569_);
v___x_3574_ = l_Lean_PersistentArray_anyM___redArg(v_inst_3567_, v_decls_3571_, v___f_3573_);
return v___x_3574_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM(lean_object* v_m_3575_, lean_object* v_inst_3576_, lean_object* v_lctx_3577_, lean_object* v_p_3578_){
_start:
{
lean_object* v_toApplicative_3579_; lean_object* v_decls_3580_; lean_object* v_toPure_3581_; lean_object* v___f_3582_; lean_object* v___x_3583_; 
v_toApplicative_3579_ = lean_ctor_get(v_inst_3576_, 0);
v_decls_3580_ = lean_ctor_get(v_lctx_3577_, 1);
lean_inc_ref(v_decls_3580_);
lean_dec_ref(v_lctx_3577_);
v_toPure_3581_ = lean_ctor_get(v_toApplicative_3579_, 1);
lean_inc(v_toPure_3581_);
v___f_3582_ = lean_alloc_closure((void*)(l_Lean_LocalContext_anyM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3582_, 0, v_toPure_3581_);
lean_closure_set(v___f_3582_, 1, v_p_3578_);
v___x_3583_ = l_Lean_PersistentArray_anyM___redArg(v_inst_3576_, v_decls_3580_, v___f_3582_);
return v___x_3583_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0(lean_object* v_toPure_3584_, uint8_t v_b_3585_){
_start:
{
if (v_b_3585_ == 0)
{
uint8_t v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3586_ = 1;
v___x_3587_ = lean_box(v___x_3586_);
v___x_3588_ = lean_apply_2(v_toPure_3584_, lean_box(0), v___x_3587_);
return v___x_3588_;
}
else
{
uint8_t v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
v___x_3589_ = 0;
v___x_3590_ = lean_box(v___x_3589_);
v___x_3591_ = lean_apply_2(v_toPure_3584_, lean_box(0), v___x_3590_);
return v___x_3591_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0___boxed(lean_object* v_toPure_3592_, lean_object* v_b_3593_){
_start:
{
uint8_t v_b_boxed_3594_; lean_object* v_res_3595_; 
v_b_boxed_3594_ = lean_unbox(v_b_3593_);
v_res_3595_ = l_Lean_LocalContext_allM___redArg___lam__0(v_toPure_3592_, v_b_boxed_3594_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__2(lean_object* v_toPure_3596_, lean_object* v_toBind_3597_, lean_object* v___f_3598_, lean_object* v_p_3599_, lean_object* v_v_3600_){
_start:
{
if (lean_obj_tag(v_v_3600_) == 0)
{
uint8_t v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
lean_dec(v_p_3599_);
v___x_3601_ = 1;
v___x_3602_ = lean_box(v___x_3601_);
v___x_3603_ = lean_apply_2(v_toPure_3596_, lean_box(0), v___x_3602_);
v___x_3604_ = lean_apply_4(v_toBind_3597_, lean_box(0), lean_box(0), v___x_3603_, v___f_3598_);
return v___x_3604_;
}
else
{
lean_object* v_val_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
lean_dec(v_toPure_3596_);
v_val_3605_ = lean_ctor_get(v_v_3600_, 0);
lean_inc(v_val_3605_);
lean_dec_ref_known(v_v_3600_, 1);
v___x_3606_ = lean_apply_1(v_p_3599_, v_val_3605_);
v___x_3607_ = lean_apply_4(v_toBind_3597_, lean_box(0), lean_box(0), v___x_3606_, v___f_3598_);
return v___x_3607_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg(lean_object* v_inst_3608_, lean_object* v_lctx_3609_, lean_object* v_p_3610_){
_start:
{
lean_object* v_toApplicative_3611_; lean_object* v_decls_3612_; lean_object* v_toBind_3613_; lean_object* v_toPure_3614_; lean_object* v___f_3615_; lean_object* v___f_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; 
v_toApplicative_3611_ = lean_ctor_get(v_inst_3608_, 0);
v_decls_3612_ = lean_ctor_get(v_lctx_3609_, 1);
lean_inc_ref(v_decls_3612_);
lean_dec_ref(v_lctx_3609_);
v_toBind_3613_ = lean_ctor_get(v_inst_3608_, 1);
lean_inc_n(v_toBind_3613_, 2);
v_toPure_3614_ = lean_ctor_get(v_toApplicative_3611_, 1);
lean_inc_n(v_toPure_3614_, 2);
v___f_3615_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3615_, 0, v_toPure_3614_);
lean_inc_ref(v___f_3615_);
v___f_3616_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3616_, 0, v_toPure_3614_);
lean_closure_set(v___f_3616_, 1, v_toBind_3613_);
lean_closure_set(v___f_3616_, 2, v___f_3615_);
lean_closure_set(v___f_3616_, 3, v_p_3610_);
v___x_3617_ = l_Lean_PersistentArray_anyM___redArg(v_inst_3608_, v_decls_3612_, v___f_3616_);
v___x_3618_ = lean_apply_4(v_toBind_3613_, lean_box(0), lean_box(0), v___x_3617_, v___f_3615_);
return v___x_3618_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM(lean_object* v_m_3619_, lean_object* v_inst_3620_, lean_object* v_lctx_3621_, lean_object* v_p_3622_){
_start:
{
lean_object* v_toApplicative_3623_; lean_object* v_decls_3624_; lean_object* v_toBind_3625_; lean_object* v_toPure_3626_; lean_object* v___f_3627_; lean_object* v___f_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v_toApplicative_3623_ = lean_ctor_get(v_inst_3620_, 0);
v_decls_3624_ = lean_ctor_get(v_lctx_3621_, 1);
lean_inc_ref(v_decls_3624_);
lean_dec_ref(v_lctx_3621_);
v_toBind_3625_ = lean_ctor_get(v_inst_3620_, 1);
lean_inc_n(v_toBind_3625_, 2);
v_toPure_3626_ = lean_ctor_get(v_toApplicative_3623_, 1);
lean_inc_n(v_toPure_3626_, 2);
v___f_3627_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3627_, 0, v_toPure_3626_);
lean_inc_ref(v___f_3627_);
v___f_3628_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3628_, 0, v_toPure_3626_);
lean_closure_set(v___f_3628_, 1, v_toBind_3625_);
lean_closure_set(v___f_3628_, 2, v___f_3627_);
lean_closure_set(v___f_3628_, 3, v_p_3622_);
v___x_3629_ = l_Lean_PersistentArray_anyM___redArg(v_inst_3620_, v_decls_3624_, v___f_3628_);
v___x_3630_ = lean_apply_4(v_toBind_3625_, lean_box(0), lean_box(0), v___x_3629_, v___f_3627_);
return v___x_3630_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_any___lam__0(lean_object* v_p_3631_, lean_object* v_d_3632_){
_start:
{
if (lean_obj_tag(v_d_3632_) == 0)
{
uint8_t v___x_3633_; 
lean_dec_ref(v_p_3631_);
v___x_3633_ = 0;
return v___x_3633_;
}
else
{
lean_object* v_val_3634_; lean_object* v___x_3635_; uint8_t v___x_3636_; 
v_val_3634_ = lean_ctor_get(v_d_3632_, 0);
lean_inc(v_val_3634_);
lean_dec_ref_known(v_d_3632_, 1);
v___x_3635_ = lean_apply_1(v_p_3631_, v_val_3634_);
v___x_3636_ = lean_unbox(v___x_3635_);
return v___x_3636_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___lam__0___boxed(lean_object* v_p_3637_, lean_object* v_d_3638_){
_start:
{
uint8_t v_res_3639_; lean_object* v_r_3640_; 
v_res_3639_ = l_Lean_LocalContext_any___lam__0(v_p_3637_, v_d_3638_);
v_r_3640_ = lean_box(v_res_3639_);
return v_r_3640_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_any(lean_object* v_lctx_3641_, lean_object* v_p_3642_){
_start:
{
lean_object* v___x_3643_; lean_object* v_decls_3644_; lean_object* v___f_3645_; lean_object* v___x_3646_; uint8_t v___x_3647_; 
v___x_3643_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v_decls_3644_ = lean_ctor_get(v_lctx_3641_, 1);
lean_inc_ref(v_decls_3644_);
lean_dec_ref(v_lctx_3641_);
v___f_3645_ = lean_alloc_closure((void*)(l_Lean_LocalContext_any___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3645_, 0, v_p_3642_);
v___x_3646_ = l_Lean_PersistentArray_anyM___redArg(v___x_3643_, v_decls_3644_, v___f_3645_);
v___x_3647_ = lean_unbox(v___x_3646_);
lean_dec(v___x_3646_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___boxed(lean_object* v_lctx_3648_, lean_object* v_p_3649_){
_start:
{
uint8_t v_res_3650_; lean_object* v_r_3651_; 
v_res_3650_ = l_Lean_LocalContext_any(v_lctx_3648_, v_p_3649_);
v_r_3651_ = lean_box(v_res_3650_);
return v_r_3651_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_all___lam__0(lean_object* v_p_3652_, lean_object* v_v_3653_){
_start:
{
if (lean_obj_tag(v_v_3653_) == 0)
{
uint8_t v___x_3654_; 
lean_dec_ref(v_p_3652_);
v___x_3654_ = 0;
return v___x_3654_;
}
else
{
lean_object* v_val_3655_; lean_object* v___x_3656_; uint8_t v___x_3657_; 
v_val_3655_ = lean_ctor_get(v_v_3653_, 0);
lean_inc(v_val_3655_);
lean_dec_ref_known(v_v_3653_, 1);
v___x_3656_ = lean_apply_1(v_p_3652_, v_val_3655_);
v___x_3657_ = lean_unbox(v___x_3656_);
if (v___x_3657_ == 0)
{
uint8_t v___x_3658_; 
v___x_3658_ = 1;
return v___x_3658_;
}
else
{
uint8_t v___x_3659_; 
v___x_3659_ = 0;
return v___x_3659_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___lam__0___boxed(lean_object* v_p_3660_, lean_object* v_v_3661_){
_start:
{
uint8_t v_res_3662_; lean_object* v_r_3663_; 
v_res_3662_ = l_Lean_LocalContext_all___lam__0(v_p_3660_, v_v_3661_);
v_r_3663_ = lean_box(v_res_3662_);
return v_r_3663_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_all(lean_object* v_lctx_3664_, lean_object* v_p_3665_){
_start:
{
lean_object* v___x_3666_; lean_object* v_decls_3667_; lean_object* v___f_3668_; lean_object* v___x_3669_; uint8_t v___x_3670_; 
v___x_3666_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v_decls_3667_ = lean_ctor_get(v_lctx_3664_, 1);
lean_inc_ref(v_decls_3667_);
lean_dec_ref(v_lctx_3664_);
v___f_3668_ = lean_alloc_closure((void*)(l_Lean_LocalContext_all___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3668_, 0, v_p_3665_);
v___x_3669_ = l_Lean_PersistentArray_anyM___redArg(v___x_3666_, v_decls_3667_, v___f_3668_);
v___x_3670_ = lean_unbox(v___x_3669_);
lean_dec(v___x_3669_);
if (v___x_3670_ == 0)
{
uint8_t v___x_3671_; 
v___x_3671_ = 1;
return v___x_3671_;
}
else
{
uint8_t v___x_3672_; 
v___x_3672_ = 0;
return v___x_3672_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___boxed(lean_object* v_lctx_3673_, lean_object* v_p_3674_){
_start:
{
uint8_t v_res_3675_; lean_object* v_r_3676_; 
v_res_3675_ = l_Lean_LocalContext_all(v_lctx_3673_, v_p_3674_);
v_r_3676_ = lean_box(v_res_3675_);
return v_r_3676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(lean_object* v_i_3677_, lean_object* v_a_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
lean_object* v_zero_3681_; uint8_t v_isZero_3682_; 
v_zero_3681_ = lean_unsigned_to_nat(0u);
v_isZero_3682_ = lean_nat_dec_eq(v_i_3677_, v_zero_3681_);
if (v_isZero_3682_ == 1)
{
lean_object* v___x_3683_; lean_object* v___x_3684_; 
lean_dec(v_i_3677_);
v___x_3683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3683_, 0, v_a_3678_);
lean_ctor_set(v___x_3683_, 1, v___y_3679_);
v___x_3684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3684_, 0, v___x_3683_);
lean_ctor_set(v___x_3684_, 1, v___y_3680_);
return v___x_3684_;
}
else
{
lean_object* v_decls_3685_; lean_object* v_size_3686_; lean_object* v___x_3687_; lean_object* v_one_3688_; lean_object* v_n_3689_; lean_object* v___y_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3694_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3706_; lean_object* v___y_3707_; uint8_t v___y_3708_; lean_object* v___y_3712_; lean_object* v___y_3713_; lean_object* v___y_3718_; uint8_t v___x_3722_; 
v_decls_3685_ = lean_ctor_get(v_a_3678_, 1);
v_size_3686_ = lean_ctor_get(v_decls_3685_, 2);
v___x_3687_ = lean_box(0);
v_one_3688_ = lean_unsigned_to_nat(1u);
v_n_3689_ = lean_nat_sub(v_i_3677_, v_one_3688_);
lean_dec(v_i_3677_);
v___x_3722_ = lean_nat_dec_lt(v_n_3689_, v_size_3686_);
if (v___x_3722_ == 0)
{
lean_object* v___x_3723_; 
v___x_3723_ = l_outOfBounds___redArg(v___x_3687_);
v___y_3718_ = v___x_3723_;
goto v___jp_3717_;
}
else
{
lean_object* v___x_3724_; 
v___x_3724_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3687_, v_decls_3685_, v_n_3689_);
v___y_3718_ = v___x_3724_;
goto v___jp_3717_;
}
v___jp_3690_:
{
lean_object* v___x_3695_; 
v___x_3695_ = l_Lean_LocalContext_setUserName(v_a_3678_, v___y_3694_, v___y_3692_);
v_i_3677_ = v_n_3689_;
v_a_3678_ = v___x_3695_;
v___y_3679_ = v___y_3693_;
v___y_3680_ = v___y_3691_;
goto _start;
}
v___jp_3697_:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v_fst_3702_; lean_object* v_snd_3703_; lean_object* v_fvarId_3704_; 
lean_inc(v___y_3698_);
v___x_3700_ = l_Lean_NameSet_insert(v___y_3679_, v___y_3698_);
v___x_3701_ = l_Lean_sanitizeName(v___y_3698_, v___y_3680_);
v_fst_3702_ = lean_ctor_get(v___x_3701_, 0);
lean_inc(v_fst_3702_);
v_snd_3703_ = lean_ctor_get(v___x_3701_, 1);
lean_inc(v_snd_3703_);
lean_dec_ref(v___x_3701_);
v_fvarId_3704_ = lean_ctor_get(v___y_3699_, 1);
lean_inc(v_fvarId_3704_);
lean_dec_ref(v___y_3699_);
v___y_3691_ = v_snd_3703_;
v___y_3692_ = v_fst_3702_;
v___y_3693_ = v___x_3700_;
v___y_3694_ = v_fvarId_3704_;
goto v___jp_3690_;
}
v___jp_3705_:
{
if (v___y_3708_ == 0)
{
lean_object* v___x_3709_; 
lean_dec_ref(v___y_3707_);
v___x_3709_ = l_Lean_NameSet_insert(v___y_3679_, v___y_3706_);
v_i_3677_ = v_n_3689_;
v___y_3679_ = v___x_3709_;
goto _start;
}
else
{
v___y_3698_ = v___y_3706_;
v___y_3699_ = v___y_3707_;
goto v___jp_3697_;
}
}
v___jp_3711_:
{
uint8_t v___x_3714_; 
v___x_3714_ = l_Lean_Name_hasMacroScopes(v___y_3713_);
if (v___x_3714_ == 0)
{
lean_object* v_userName_3715_; uint8_t v___x_3716_; 
v_userName_3715_ = lean_ctor_get(v___y_3712_, 2);
v___x_3716_ = l_Lean_NameSet_contains(v___y_3679_, v_userName_3715_);
v___y_3706_ = v___y_3713_;
v___y_3707_ = v___y_3712_;
v___y_3708_ = v___x_3716_;
goto v___jp_3705_;
}
else
{
v___y_3698_ = v___y_3713_;
v___y_3699_ = v___y_3712_;
goto v___jp_3697_;
}
}
v___jp_3717_:
{
if (lean_obj_tag(v___y_3718_) == 0)
{
v_i_3677_ = v_n_3689_;
goto _start;
}
else
{
lean_object* v_val_3720_; lean_object* v_userName_3721_; 
v_val_3720_ = lean_ctor_get(v___y_3718_, 0);
lean_inc(v_val_3720_);
lean_dec_ref_known(v___y_3718_, 1);
v_userName_3721_ = lean_ctor_get(v_val_3720_, 2);
lean_inc(v_userName_3721_);
v___y_3712_ = v_val_3720_;
v___y_3713_ = v_userName_3721_;
goto v___jp_3711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_sanitizeNames(lean_object* v_lctx_3725_, lean_object* v_a_3726_){
_start:
{
lean_object* v_options_3727_; uint8_t v___x_3728_; 
v_options_3727_ = lean_ctor_get(v_a_3726_, 0);
v___x_3728_ = l_Lean_getSanitizeNames(v_options_3727_);
if (v___x_3728_ == 0)
{
lean_object* v___x_3729_; 
v___x_3729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3729_, 0, v_lctx_3725_);
lean_ctor_set(v___x_3729_, 1, v_a_3726_);
return v___x_3729_;
}
else
{
lean_object* v_decls_3730_; lean_object* v_size_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v_fst_3734_; lean_object* v_snd_3735_; lean_object* v_fst_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3743_; 
v_decls_3730_ = lean_ctor_get(v_lctx_3725_, 1);
v_size_3731_ = lean_ctor_get(v_decls_3730_, 2);
lean_inc(v_size_3731_);
v___x_3732_ = l_Lean_NameSet_empty;
v___x_3733_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(v_size_3731_, v_lctx_3725_, v___x_3732_, v_a_3726_);
v_fst_3734_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_fst_3734_);
v_snd_3735_ = lean_ctor_get(v___x_3733_, 1);
lean_inc(v_snd_3735_);
lean_dec_ref(v___x_3733_);
v_fst_3736_ = lean_ctor_get(v_fst_3734_, 0);
v_isSharedCheck_3743_ = !lean_is_exclusive(v_fst_3734_);
if (v_isSharedCheck_3743_ == 0)
{
lean_object* v_unused_3744_; 
v_unused_3744_ = lean_ctor_get(v_fst_3734_, 1);
lean_dec(v_unused_3744_);
v___x_3738_ = v_fst_3734_;
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_fst_3736_);
lean_dec(v_fst_3734_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3741_; 
if (v_isShared_3739_ == 0)
{
lean_ctor_set(v___x_3738_, 1, v_snd_3735_);
v___x_3741_ = v___x_3738_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v_fst_3736_);
lean_ctor_set(v_reuseFailAlloc_3742_, 1, v_snd_3735_);
v___x_3741_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
return v___x_3741_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0(lean_object* v_n_3745_, lean_object* v_i_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v___x_3751_; 
v___x_3751_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(v_i_3746_, v_a_3748_, v___y_3749_, v___y_3750_);
return v___x_3751_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___boxed(lean_object* v_n_3752_, lean_object* v_i_3753_, lean_object* v_a_3754_, lean_object* v_a_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0(v_n_3752_, v_i_3753_, v_a_3754_, v_a_3755_, v___y_3756_, v___y_3757_);
lean_dec(v_n_3752_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getRoundtrippingUserName_x3f(lean_object* v_lctx_3759_, lean_object* v_fvarId_3760_){
_start:
{
lean_object* v___y_3762_; lean_object* v___y_3763_; lean_object* v___y_3764_; lean_object* v___y_3769_; lean_object* v___y_3770_; lean_object* v___y_3771_; lean_object* v___x_3773_; 
lean_inc_ref(v_lctx_3759_);
v___x_3773_ = lean_local_ctx_find(v_lctx_3759_, v_fvarId_3760_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v___x_3774_; 
lean_dec_ref(v_lctx_3759_);
v___x_3774_ = lean_box(0);
return v___x_3774_;
}
else
{
lean_object* v_val_3775_; lean_object* v___y_3777_; lean_object* v_userName_3782_; 
v_val_3775_ = lean_ctor_get(v___x_3773_, 0);
lean_inc(v_val_3775_);
lean_dec_ref_known(v___x_3773_, 1);
v_userName_3782_ = lean_ctor_get(v_val_3775_, 2);
lean_inc(v_userName_3782_);
v___y_3777_ = v_userName_3782_;
goto v___jp_3776_;
v___jp_3776_:
{
lean_object* v___x_3778_; 
v___x_3778_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_3759_, v___y_3777_);
lean_dec_ref(v_lctx_3759_);
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v___x_3779_; 
lean_dec(v___y_3777_);
lean_dec(v_val_3775_);
v___x_3779_ = lean_box(0);
return v___x_3779_;
}
else
{
lean_object* v_val_3780_; lean_object* v_fvarId_3781_; 
v_val_3780_ = lean_ctor_get(v___x_3778_, 0);
lean_inc(v_val_3780_);
lean_dec_ref_known(v___x_3778_, 1);
v_fvarId_3781_ = lean_ctor_get(v_val_3775_, 1);
lean_inc(v_fvarId_3781_);
lean_dec(v_val_3775_);
v___y_3769_ = v___y_3777_;
v___y_3770_ = v_val_3780_;
v___y_3771_ = v_fvarId_3781_;
goto v___jp_3768_;
}
}
}
v___jp_3761_:
{
uint8_t v___x_3765_; 
v___x_3765_ = l_Lean_instBEqFVarId_beq(v___y_3763_, v___y_3764_);
lean_dec(v___y_3764_);
lean_dec(v___y_3763_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; 
lean_dec(v___y_3762_);
v___x_3766_ = lean_box(0);
return v___x_3766_;
}
else
{
lean_object* v___x_3767_; 
v___x_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3767_, 0, v___y_3762_);
return v___x_3767_;
}
}
v___jp_3768_:
{
lean_object* v_fvarId_3772_; 
v_fvarId_3772_ = lean_ctor_get(v___y_3770_, 1);
lean_inc(v_fvarId_3772_);
lean_dec_ref(v___y_3770_);
v___y_3762_ = v___y_3769_;
v___y_3763_ = v___y_3771_;
v___y_3764_ = v_fvarId_3772_;
goto v___jp_3761_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(size_t v_sz_3783_, size_t v_i_3784_, lean_object* v_bs_3785_){
_start:
{
uint8_t v___x_3786_; 
v___x_3786_ = lean_usize_dec_lt(v_i_3784_, v_sz_3783_);
if (v___x_3786_ == 0)
{
return v_bs_3785_;
}
else
{
lean_object* v_v_3787_; lean_object* v_snd_3788_; lean_object* v___x_3789_; lean_object* v_bs_x27_3790_; size_t v___x_3791_; size_t v___x_3792_; lean_object* v___x_3793_; 
v_v_3787_ = lean_array_uget_borrowed(v_bs_3785_, v_i_3784_);
v_snd_3788_ = lean_ctor_get(v_v_3787_, 1);
lean_inc(v_snd_3788_);
v___x_3789_ = lean_unsigned_to_nat(0u);
v_bs_x27_3790_ = lean_array_uset(v_bs_3785_, v_i_3784_, v___x_3789_);
v___x_3791_ = ((size_t)1ULL);
v___x_3792_ = lean_usize_add(v_i_3784_, v___x_3791_);
v___x_3793_ = lean_array_uset(v_bs_x27_3790_, v_i_3784_, v_snd_3788_);
v_i_3784_ = v___x_3792_;
v_bs_3785_ = v___x_3793_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0___boxed(lean_object* v_sz_3795_, lean_object* v_i_3796_, lean_object* v_bs_3797_){
_start:
{
size_t v_sz_boxed_3798_; size_t v_i_boxed_3799_; lean_object* v_res_3800_; 
v_sz_boxed_3798_ = lean_unbox_usize(v_sz_3795_);
lean_dec(v_sz_3795_);
v_i_boxed_3799_ = lean_unbox_usize(v_i_3796_);
lean_dec(v_i_3796_);
v_res_3800_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(v_sz_boxed_3798_, v_i_boxed_3799_, v_bs_3797_);
return v_res_3800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(lean_object* v_lctx_3801_, size_t v_sz_3802_, size_t v_i_3803_, lean_object* v_bs_3804_){
_start:
{
uint8_t v___x_3805_; 
v___x_3805_ = lean_usize_dec_lt(v_i_3803_, v_sz_3802_);
if (v___x_3805_ == 0)
{
return v_bs_3804_;
}
else
{
lean_object* v_fvarIdToDecl_3806_; lean_object* v_v_3807_; lean_object* v___x_3808_; lean_object* v_bs_x27_3809_; lean_object* v___y_3811_; lean_object* v___x_3816_; 
v_fvarIdToDecl_3806_ = lean_ctor_get(v_lctx_3801_, 0);
v_v_3807_ = lean_array_uget(v_bs_3804_, v_i_3803_);
v___x_3808_ = lean_unsigned_to_nat(0u);
v_bs_x27_3809_ = lean_array_uset(v_bs_3804_, v_i_3803_, v___x_3808_);
v___x_3816_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_fvarIdToDecl_3806_, v_v_3807_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_object* v___x_3817_; 
v___x_3817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3808_);
lean_ctor_set(v___x_3817_, 1, v_v_3807_);
v___y_3811_ = v___x_3817_;
goto v___jp_3810_;
}
else
{
lean_object* v_val_3818_; lean_object* v_index_3819_; lean_object* v___x_3820_; 
v_val_3818_ = lean_ctor_get(v___x_3816_, 0);
lean_inc(v_val_3818_);
lean_dec_ref_known(v___x_3816_, 1);
v_index_3819_ = lean_ctor_get(v_val_3818_, 0);
lean_inc(v_index_3819_);
lean_dec(v_val_3818_);
v___x_3820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3820_, 0, v_index_3819_);
lean_ctor_set(v___x_3820_, 1, v_v_3807_);
v___y_3811_ = v___x_3820_;
goto v___jp_3810_;
}
v___jp_3810_:
{
size_t v___x_3812_; size_t v___x_3813_; lean_object* v___x_3814_; 
v___x_3812_ = ((size_t)1ULL);
v___x_3813_ = lean_usize_add(v_i_3803_, v___x_3812_);
v___x_3814_ = lean_array_uset(v_bs_x27_3809_, v_i_3803_, v___y_3811_);
v_i_3803_ = v___x_3813_;
v_bs_3804_ = v___x_3814_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1___boxed(lean_object* v_lctx_3821_, lean_object* v_sz_3822_, lean_object* v_i_3823_, lean_object* v_bs_3824_){
_start:
{
size_t v_sz_boxed_3825_; size_t v_i_boxed_3826_; lean_object* v_res_3827_; 
v_sz_boxed_3825_ = lean_unbox_usize(v_sz_3822_);
lean_dec(v_sz_3822_);
v_i_boxed_3826_ = lean_unbox_usize(v_i_3823_);
lean_dec(v_i_3823_);
v_res_3827_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(v_lctx_3821_, v_sz_boxed_3825_, v_i_boxed_3826_, v_bs_3824_);
lean_dec_ref(v_lctx_3821_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(lean_object* v_hi_3828_, lean_object* v_pivot_3829_, lean_object* v_as_3830_, lean_object* v_i_3831_, lean_object* v_k_3832_){
_start:
{
uint8_t v___x_3833_; 
v___x_3833_ = lean_nat_dec_lt(v_k_3832_, v_hi_3828_);
if (v___x_3833_ == 0)
{
lean_object* v___x_3834_; lean_object* v___x_3835_; 
lean_dec(v_k_3832_);
v___x_3834_ = lean_array_fswap(v_as_3830_, v_i_3831_, v_hi_3828_);
v___x_3835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3835_, 0, v_i_3831_);
lean_ctor_set(v___x_3835_, 1, v___x_3834_);
return v___x_3835_;
}
else
{
lean_object* v___x_3836_; lean_object* v_fst_3837_; lean_object* v_fst_3838_; uint8_t v___x_3839_; 
v___x_3836_ = lean_array_fget_borrowed(v_as_3830_, v_k_3832_);
v_fst_3837_ = lean_ctor_get(v___x_3836_, 0);
v_fst_3838_ = lean_ctor_get(v_pivot_3829_, 0);
v___x_3839_ = lean_nat_dec_lt(v_fst_3837_, v_fst_3838_);
if (v___x_3839_ == 0)
{
lean_object* v___x_3840_; lean_object* v___x_3841_; 
v___x_3840_ = lean_unsigned_to_nat(1u);
v___x_3841_ = lean_nat_add(v_k_3832_, v___x_3840_);
lean_dec(v_k_3832_);
v_k_3832_ = v___x_3841_;
goto _start;
}
else
{
lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; 
v___x_3843_ = lean_array_fswap(v_as_3830_, v_i_3831_, v_k_3832_);
v___x_3844_ = lean_unsigned_to_nat(1u);
v___x_3845_ = lean_nat_add(v_i_3831_, v___x_3844_);
lean_dec(v_i_3831_);
v___x_3846_ = lean_nat_add(v_k_3832_, v___x_3844_);
lean_dec(v_k_3832_);
v_as_3830_ = v___x_3843_;
v_i_3831_ = v___x_3845_;
v_k_3832_ = v___x_3846_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg___boxed(lean_object* v_hi_3848_, lean_object* v_pivot_3849_, lean_object* v_as_3850_, lean_object* v_i_3851_, lean_object* v_k_3852_){
_start:
{
lean_object* v_res_3853_; 
v_res_3853_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(v_hi_3848_, v_pivot_3849_, v_as_3850_, v_i_3851_, v_k_3852_);
lean_dec_ref(v_pivot_3849_);
lean_dec(v_hi_3848_);
return v_res_3853_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(lean_object* v_h_3854_, lean_object* v_i_3855_){
_start:
{
lean_object* v_fst_3856_; lean_object* v_fst_3857_; uint8_t v___x_3858_; 
v_fst_3856_ = lean_ctor_get(v_h_3854_, 0);
v_fst_3857_ = lean_ctor_get(v_i_3855_, 0);
v___x_3858_ = lean_nat_dec_lt(v_fst_3856_, v_fst_3857_);
return v___x_3858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0___boxed(lean_object* v_h_3859_, lean_object* v_i_3860_){
_start:
{
uint8_t v_res_3861_; lean_object* v_r_3862_; 
v_res_3861_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v_h_3859_, v_i_3860_);
lean_dec_ref(v_i_3860_);
lean_dec_ref(v_h_3859_);
v_r_3862_ = lean_box(v_res_3861_);
return v_r_3862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(lean_object* v_n_3863_, lean_object* v_as_3864_, lean_object* v_lo_3865_, lean_object* v_hi_3866_){
_start:
{
lean_object* v___y_3868_; uint8_t v___x_3878_; 
v___x_3878_ = lean_nat_dec_lt(v_lo_3865_, v_hi_3866_);
if (v___x_3878_ == 0)
{
lean_dec(v_lo_3865_);
return v_as_3864_;
}
else
{
lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v_mid_3881_; lean_object* v___y_3883_; lean_object* v___y_3889_; lean_object* v___x_3894_; lean_object* v___x_3895_; uint8_t v___x_3896_; 
v___x_3879_ = lean_nat_add(v_lo_3865_, v_hi_3866_);
v___x_3880_ = lean_unsigned_to_nat(1u);
v_mid_3881_ = lean_nat_shiftr(v___x_3879_, v___x_3880_);
lean_dec(v___x_3879_);
v___x_3894_ = lean_array_fget_borrowed(v_as_3864_, v_mid_3881_);
v___x_3895_ = lean_array_fget_borrowed(v_as_3864_, v_lo_3865_);
v___x_3896_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v___x_3894_, v___x_3895_);
if (v___x_3896_ == 0)
{
v___y_3889_ = v_as_3864_;
goto v___jp_3888_;
}
else
{
lean_object* v___x_3897_; 
v___x_3897_ = lean_array_fswap(v_as_3864_, v_lo_3865_, v_mid_3881_);
v___y_3889_ = v___x_3897_;
goto v___jp_3888_;
}
v___jp_3882_:
{
lean_object* v___x_3884_; lean_object* v___x_3885_; uint8_t v___x_3886_; 
v___x_3884_ = lean_array_fget_borrowed(v___y_3883_, v_mid_3881_);
v___x_3885_ = lean_array_fget_borrowed(v___y_3883_, v_hi_3866_);
v___x_3886_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v___x_3884_, v___x_3885_);
if (v___x_3886_ == 0)
{
lean_dec(v_mid_3881_);
v___y_3868_ = v___y_3883_;
goto v___jp_3867_;
}
else
{
lean_object* v___x_3887_; 
v___x_3887_ = lean_array_fswap(v___y_3883_, v_mid_3881_, v_hi_3866_);
lean_dec(v_mid_3881_);
v___y_3868_ = v___x_3887_;
goto v___jp_3867_;
}
}
v___jp_3888_:
{
lean_object* v___x_3890_; lean_object* v___x_3891_; uint8_t v___x_3892_; 
v___x_3890_ = lean_array_fget_borrowed(v___y_3889_, v_hi_3866_);
v___x_3891_ = lean_array_fget_borrowed(v___y_3889_, v_lo_3865_);
v___x_3892_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v___x_3890_, v___x_3891_);
if (v___x_3892_ == 0)
{
v___y_3883_ = v___y_3889_;
goto v___jp_3882_;
}
else
{
lean_object* v___x_3893_; 
v___x_3893_ = lean_array_fswap(v___y_3889_, v_lo_3865_, v_hi_3866_);
v___y_3883_ = v___x_3893_;
goto v___jp_3882_;
}
}
}
v___jp_3867_:
{
lean_object* v_pivot_3869_; lean_object* v___x_3870_; lean_object* v_fst_3871_; lean_object* v_snd_3872_; uint8_t v___x_3873_; 
v_pivot_3869_ = lean_array_fget(v___y_3868_, v_hi_3866_);
lean_inc_n(v_lo_3865_, 2);
v___x_3870_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(v_hi_3866_, v_pivot_3869_, v___y_3868_, v_lo_3865_, v_lo_3865_);
lean_dec(v_pivot_3869_);
v_fst_3871_ = lean_ctor_get(v___x_3870_, 0);
lean_inc(v_fst_3871_);
v_snd_3872_ = lean_ctor_get(v___x_3870_, 1);
lean_inc(v_snd_3872_);
lean_dec_ref(v___x_3870_);
v___x_3873_ = lean_nat_dec_le(v_hi_3866_, v_fst_3871_);
if (v___x_3873_ == 0)
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3874_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v_n_3863_, v_snd_3872_, v_lo_3865_, v_fst_3871_);
v___x_3875_ = lean_unsigned_to_nat(1u);
v___x_3876_ = lean_nat_add(v_fst_3871_, v___x_3875_);
lean_dec(v_fst_3871_);
v_as_3864_ = v___x_3874_;
v_lo_3865_ = v___x_3876_;
goto _start;
}
else
{
lean_dec(v_fst_3871_);
lean_dec(v_lo_3865_);
return v_snd_3872_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___boxed(lean_object* v_n_3898_, lean_object* v_as_3899_, lean_object* v_lo_3900_, lean_object* v_hi_3901_){
_start:
{
lean_object* v_res_3902_; 
v_res_3902_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v_n_3898_, v_as_3899_, v_lo_3900_, v_hi_3901_);
lean_dec(v_hi_3901_);
lean_dec(v_n_3898_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder(lean_object* v_lctx_3903_, lean_object* v_hyps_3904_){
_start:
{
lean_object* v___y_3906_; size_t v_sz_3910_; size_t v___x_3911_; lean_object* v_hyps_3912_; lean_object* v___x_3913_; lean_object* v___y_3915_; lean_object* v___y_3916_; lean_object* v___x_3918_; uint8_t v___x_3919_; 
v_sz_3910_ = lean_array_size(v_hyps_3904_);
v___x_3911_ = ((size_t)0ULL);
v_hyps_3912_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(v_lctx_3903_, v_sz_3910_, v___x_3911_, v_hyps_3904_);
v___x_3913_ = lean_array_get_size(v_hyps_3912_);
v___x_3918_ = lean_unsigned_to_nat(0u);
v___x_3919_ = lean_nat_dec_eq(v___x_3913_, v___x_3918_);
if (v___x_3919_ == 0)
{
lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___y_3923_; uint8_t v___x_3925_; 
v___x_3920_ = lean_unsigned_to_nat(1u);
v___x_3921_ = lean_nat_sub(v___x_3913_, v___x_3920_);
v___x_3925_ = lean_nat_dec_le(v___x_3918_, v___x_3921_);
if (v___x_3925_ == 0)
{
lean_inc(v___x_3921_);
v___y_3923_ = v___x_3921_;
goto v___jp_3922_;
}
else
{
v___y_3923_ = v___x_3918_;
goto v___jp_3922_;
}
v___jp_3922_:
{
uint8_t v___x_3924_; 
v___x_3924_ = lean_nat_dec_le(v___y_3923_, v___x_3921_);
if (v___x_3924_ == 0)
{
lean_dec(v___x_3921_);
lean_inc(v___y_3923_);
v___y_3915_ = v___y_3923_;
v___y_3916_ = v___y_3923_;
goto v___jp_3914_;
}
else
{
v___y_3915_ = v___y_3923_;
v___y_3916_ = v___x_3921_;
goto v___jp_3914_;
}
}
}
else
{
v___y_3906_ = v_hyps_3912_;
goto v___jp_3905_;
}
v___jp_3905_:
{
size_t v_sz_3907_; size_t v___x_3908_; lean_object* v___x_3909_; 
v_sz_3907_ = lean_array_size(v___y_3906_);
v___x_3908_ = ((size_t)0ULL);
v___x_3909_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(v_sz_3907_, v___x_3908_, v___y_3906_);
return v___x_3909_;
}
v___jp_3914_:
{
lean_object* v___x_3917_; 
v___x_3917_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v___x_3913_, v_hyps_3912_, v___y_3915_, v___y_3916_);
lean_dec(v___y_3916_);
v___y_3906_ = v___x_3917_;
goto v___jp_3905_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder___boxed(lean_object* v_lctx_3926_, lean_object* v_hyps_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_Lean_LocalContext_sortFVarsByContextOrder(v_lctx_3926_, v_hyps_3927_);
lean_dec_ref(v_lctx_3926_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2(lean_object* v_n_3929_, lean_object* v_as_3930_, lean_object* v_lo_3931_, lean_object* v_hi_3932_, lean_object* v_w_3933_, lean_object* v_hlo_3934_, lean_object* v_hhi_3935_){
_start:
{
lean_object* v___x_3936_; 
v___x_3936_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v_n_3929_, v_as_3930_, v_lo_3931_, v_hi_3932_);
return v___x_3936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___boxed(lean_object* v_n_3937_, lean_object* v_as_3938_, lean_object* v_lo_3939_, lean_object* v_hi_3940_, lean_object* v_w_3941_, lean_object* v_hlo_3942_, lean_object* v_hhi_3943_){
_start:
{
lean_object* v_res_3944_; 
v_res_3944_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2(v_n_3937_, v_as_3938_, v_lo_3939_, v_hi_3940_, v_w_3941_, v_hlo_3942_, v_hhi_3943_);
lean_dec(v_hi_3940_);
lean_dec(v_n_3937_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2(lean_object* v_n_3945_, lean_object* v_lo_3946_, lean_object* v_hi_3947_, lean_object* v_hhi_3948_, lean_object* v_pivot_3949_, lean_object* v_as_3950_, lean_object* v_i_3951_, lean_object* v_k_3952_, lean_object* v_ilo_3953_, lean_object* v_ik_3954_, lean_object* v_w_3955_){
_start:
{
lean_object* v___x_3956_; 
v___x_3956_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(v_hi_3947_, v_pivot_3949_, v_as_3950_, v_i_3951_, v_k_3952_);
return v___x_3956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___boxed(lean_object* v_n_3957_, lean_object* v_lo_3958_, lean_object* v_hi_3959_, lean_object* v_hhi_3960_, lean_object* v_pivot_3961_, lean_object* v_as_3962_, lean_object* v_i_3963_, lean_object* v_k_3964_, lean_object* v_ilo_3965_, lean_object* v_ik_3966_, lean_object* v_w_3967_){
_start:
{
lean_object* v_res_3968_; 
v_res_3968_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2(v_n_3957_, v_lo_3958_, v_hi_3959_, v_hhi_3960_, v_pivot_3961_, v_as_3962_, v_i_3963_, v_k_3964_, v_ilo_3965_, v_ik_3966_, v_w_3967_);
lean_dec_ref(v_pivot_3961_);
lean_dec(v_hi_3959_);
lean_dec(v_lo_3958_);
lean_dec(v_n_3957_);
return v_res_3968_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(lean_object* v_a_3969_, lean_object* v_x_3970_){
_start:
{
if (lean_obj_tag(v_x_3970_) == 0)
{
uint8_t v___x_3971_; 
v___x_3971_ = 0;
return v___x_3971_;
}
else
{
lean_object* v_key_3972_; lean_object* v_tail_3973_; uint8_t v___x_3974_; 
v_key_3972_ = lean_ctor_get(v_x_3970_, 0);
v_tail_3973_ = lean_ctor_get(v_x_3970_, 2);
v___x_3974_ = lean_name_eq(v_key_3972_, v_a_3969_);
if (v___x_3974_ == 0)
{
v_x_3970_ = v_tail_3973_;
goto _start;
}
else
{
return v___x_3974_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg___boxed(lean_object* v_a_3976_, lean_object* v_x_3977_){
_start:
{
uint8_t v_res_3978_; lean_object* v_r_3979_; 
v_res_3978_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_3976_, v_x_3977_);
lean_dec(v_x_3977_);
lean_dec(v_a_3976_);
v_r_3979_ = lean_box(v_res_3978_);
return v_r_3979_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(lean_object* v_a_3980_, lean_object* v_x_3981_){
_start:
{
if (lean_obj_tag(v_x_3981_) == 0)
{
return v_x_3981_;
}
else
{
lean_object* v_key_3982_; lean_object* v_value_3983_; lean_object* v_tail_3984_; lean_object* v___x_3986_; uint8_t v_isShared_3987_; uint8_t v_isSharedCheck_3993_; 
v_key_3982_ = lean_ctor_get(v_x_3981_, 0);
v_value_3983_ = lean_ctor_get(v_x_3981_, 1);
v_tail_3984_ = lean_ctor_get(v_x_3981_, 2);
v_isSharedCheck_3993_ = !lean_is_exclusive(v_x_3981_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3986_ = v_x_3981_;
v_isShared_3987_ = v_isSharedCheck_3993_;
goto v_resetjp_3985_;
}
else
{
lean_inc(v_tail_3984_);
lean_inc(v_value_3983_);
lean_inc(v_key_3982_);
lean_dec(v_x_3981_);
v___x_3986_ = lean_box(0);
v_isShared_3987_ = v_isSharedCheck_3993_;
goto v_resetjp_3985_;
}
v_resetjp_3985_:
{
uint8_t v___x_3988_; 
v___x_3988_ = lean_name_eq(v_key_3982_, v_a_3980_);
if (v___x_3988_ == 0)
{
lean_object* v___x_3989_; lean_object* v___x_3991_; 
v___x_3989_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_3980_, v_tail_3984_);
if (v_isShared_3987_ == 0)
{
lean_ctor_set(v___x_3986_, 2, v___x_3989_);
v___x_3991_ = v___x_3986_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_key_3982_);
lean_ctor_set(v_reuseFailAlloc_3992_, 1, v_value_3983_);
lean_ctor_set(v_reuseFailAlloc_3992_, 2, v___x_3989_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
else
{
lean_del_object(v___x_3986_);
lean_dec(v_value_3983_);
lean_dec(v_key_3982_);
return v_tail_3984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg___boxed(lean_object* v_a_3994_, lean_object* v_x_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_3994_, v_x_3995_);
lean_dec(v_a_3994_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(lean_object* v_m_3997_, lean_object* v_a_3998_){
_start:
{
lean_object* v_size_3999_; lean_object* v_buckets_4000_; lean_object* v___x_4001_; uint64_t v___y_4003_; 
v_size_3999_ = lean_ctor_get(v_m_3997_, 0);
v_buckets_4000_ = lean_ctor_get(v_m_3997_, 1);
v___x_4001_ = lean_array_get_size(v_buckets_4000_);
if (lean_obj_tag(v_a_3998_) == 0)
{
uint64_t v___x_4032_; 
v___x_4032_ = 1723ULL;
v___y_4003_ = v___x_4032_;
goto v___jp_4002_;
}
else
{
uint64_t v_hash_4033_; 
v_hash_4033_ = lean_ctor_get_uint64(v_a_3998_, sizeof(void*)*2);
v___y_4003_ = v_hash_4033_;
goto v___jp_4002_;
}
v___jp_4002_:
{
uint64_t v___x_4004_; uint64_t v___x_4005_; uint64_t v_fold_4006_; uint64_t v___x_4007_; uint64_t v___x_4008_; uint64_t v___x_4009_; size_t v___x_4010_; size_t v___x_4011_; size_t v___x_4012_; size_t v___x_4013_; size_t v___x_4014_; lean_object* v_bkt_4015_; uint8_t v___x_4016_; 
v___x_4004_ = 32ULL;
v___x_4005_ = lean_uint64_shift_right(v___y_4003_, v___x_4004_);
v_fold_4006_ = lean_uint64_xor(v___y_4003_, v___x_4005_);
v___x_4007_ = 16ULL;
v___x_4008_ = lean_uint64_shift_right(v_fold_4006_, v___x_4007_);
v___x_4009_ = lean_uint64_xor(v_fold_4006_, v___x_4008_);
v___x_4010_ = lean_uint64_to_usize(v___x_4009_);
v___x_4011_ = lean_usize_of_nat(v___x_4001_);
v___x_4012_ = ((size_t)1ULL);
v___x_4013_ = lean_usize_sub(v___x_4011_, v___x_4012_);
v___x_4014_ = lean_usize_land(v___x_4010_, v___x_4013_);
v_bkt_4015_ = lean_array_uget_borrowed(v_buckets_4000_, v___x_4014_);
v___x_4016_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_3998_, v_bkt_4015_);
if (v___x_4016_ == 0)
{
return v_m_3997_;
}
else
{
lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4029_; 
lean_inc(v_bkt_4015_);
lean_inc_ref(v_buckets_4000_);
lean_inc(v_size_3999_);
v_isSharedCheck_4029_ = !lean_is_exclusive(v_m_3997_);
if (v_isSharedCheck_4029_ == 0)
{
lean_object* v_unused_4030_; lean_object* v_unused_4031_; 
v_unused_4030_ = lean_ctor_get(v_m_3997_, 1);
lean_dec(v_unused_4030_);
v_unused_4031_ = lean_ctor_get(v_m_3997_, 0);
lean_dec(v_unused_4031_);
v___x_4018_ = v_m_3997_;
v_isShared_4019_ = v_isSharedCheck_4029_;
goto v_resetjp_4017_;
}
else
{
lean_dec(v_m_3997_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4029_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4020_; lean_object* v_buckets_x27_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4027_; 
v___x_4020_ = lean_box(0);
v_buckets_x27_4021_ = lean_array_uset(v_buckets_4000_, v___x_4014_, v___x_4020_);
v___x_4022_ = lean_unsigned_to_nat(1u);
v___x_4023_ = lean_nat_sub(v_size_3999_, v___x_4022_);
lean_dec(v_size_3999_);
v___x_4024_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_3998_, v_bkt_4015_);
v___x_4025_ = lean_array_uset(v_buckets_x27_4021_, v___x_4014_, v___x_4024_);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 1, v___x_4025_);
lean_ctor_set(v___x_4018_, 0, v___x_4023_);
v___x_4027_ = v___x_4018_;
goto v_reusejp_4026_;
}
else
{
lean_object* v_reuseFailAlloc_4028_; 
v_reuseFailAlloc_4028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4028_, 0, v___x_4023_);
lean_ctor_set(v_reuseFailAlloc_4028_, 1, v___x_4025_);
v___x_4027_ = v_reuseFailAlloc_4028_;
goto v_reusejp_4026_;
}
v_reusejp_4026_:
{
return v___x_4027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg___boxed(lean_object* v_m_4034_, lean_object* v_a_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_m_4034_, v_a_4035_);
lean_dec(v_a_4035_);
return v_res_4036_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(lean_object* v_m_4037_, lean_object* v_a_4038_){
_start:
{
lean_object* v_buckets_4039_; lean_object* v___x_4040_; uint64_t v___y_4042_; 
v_buckets_4039_ = lean_ctor_get(v_m_4037_, 1);
v___x_4040_ = lean_array_get_size(v_buckets_4039_);
if (lean_obj_tag(v_a_4038_) == 0)
{
uint64_t v___x_4056_; 
v___x_4056_ = 1723ULL;
v___y_4042_ = v___x_4056_;
goto v___jp_4041_;
}
else
{
uint64_t v_hash_4057_; 
v_hash_4057_ = lean_ctor_get_uint64(v_a_4038_, sizeof(void*)*2);
v___y_4042_ = v_hash_4057_;
goto v___jp_4041_;
}
v___jp_4041_:
{
uint64_t v___x_4043_; uint64_t v___x_4044_; uint64_t v_fold_4045_; uint64_t v___x_4046_; uint64_t v___x_4047_; uint64_t v___x_4048_; size_t v___x_4049_; size_t v___x_4050_; size_t v___x_4051_; size_t v___x_4052_; size_t v___x_4053_; lean_object* v___x_4054_; uint8_t v___x_4055_; 
v___x_4043_ = 32ULL;
v___x_4044_ = lean_uint64_shift_right(v___y_4042_, v___x_4043_);
v_fold_4045_ = lean_uint64_xor(v___y_4042_, v___x_4044_);
v___x_4046_ = 16ULL;
v___x_4047_ = lean_uint64_shift_right(v_fold_4045_, v___x_4046_);
v___x_4048_ = lean_uint64_xor(v_fold_4045_, v___x_4047_);
v___x_4049_ = lean_uint64_to_usize(v___x_4048_);
v___x_4050_ = lean_usize_of_nat(v___x_4040_);
v___x_4051_ = ((size_t)1ULL);
v___x_4052_ = lean_usize_sub(v___x_4050_, v___x_4051_);
v___x_4053_ = lean_usize_land(v___x_4049_, v___x_4052_);
v___x_4054_ = lean_array_uget_borrowed(v_buckets_4039_, v___x_4053_);
v___x_4055_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_4038_, v___x_4054_);
return v___x_4055_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg___boxed(lean_object* v_m_4058_, lean_object* v_a_4059_){
_start:
{
uint8_t v_res_4060_; lean_object* v_r_4061_; 
v_res_4060_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(v_m_4058_, v_a_4059_);
lean_dec(v_a_4059_);
lean_dec_ref(v_m_4058_);
v_r_4061_ = lean_box(v_res_4060_);
return v_r_4061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(lean_object* v_start_4062_, lean_object* v_as_4063_, size_t v_i_4064_, size_t v_stop_4065_, lean_object* v_b_4066_){
_start:
{
uint8_t v___x_4067_; 
v___x_4067_ = lean_usize_dec_eq(v_i_4064_, v_stop_4065_);
if (v___x_4067_ == 0)
{
size_t v___x_4068_; size_t v___x_4069_; lean_object* v___x_4070_; 
v___x_4068_ = ((size_t)1ULL);
v___x_4069_ = lean_usize_sub(v_i_4064_, v___x_4068_);
v___x_4070_ = lean_array_uget(v_as_4063_, v___x_4069_);
if (lean_obj_tag(v___x_4070_) == 0)
{
v_i_4064_ = v___x_4069_;
goto _start;
}
else
{
lean_object* v_val_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4106_; 
v_val_4072_ = lean_ctor_get(v___x_4070_, 0);
v_isSharedCheck_4106_ = !lean_is_exclusive(v___x_4070_);
if (v_isSharedCheck_4106_ == 0)
{
v___x_4074_ = v___x_4070_;
v_isShared_4075_ = v_isSharedCheck_4106_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_val_4072_);
lean_dec(v___x_4070_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4106_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v_fst_4076_; lean_object* v_snd_4077_; lean_object* v___y_4079_; lean_object* v___y_4095_; lean_object* v_size_4101_; lean_object* v___x_4102_; uint8_t v___x_4103_; 
v_fst_4076_ = lean_ctor_get(v_b_4066_, 0);
v_snd_4077_ = lean_ctor_get(v_b_4066_, 1);
v_size_4101_ = lean_ctor_get(v_fst_4076_, 0);
v___x_4102_ = lean_unsigned_to_nat(0u);
v___x_4103_ = lean_nat_dec_eq(v_size_4101_, v___x_4102_);
if (v___x_4103_ == 0)
{
lean_object* v_index_4104_; 
v_index_4104_ = lean_ctor_get(v_val_4072_, 0);
lean_inc(v_index_4104_);
v___y_4095_ = v_index_4104_;
goto v___jp_4094_;
}
else
{
lean_object* v___x_4105_; 
lean_inc(v_snd_4077_);
lean_del_object(v___x_4074_);
lean_dec(v_val_4072_);
lean_dec_ref(v_b_4066_);
v___x_4105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4105_, 0, v_snd_4077_);
return v___x_4105_;
}
v___jp_4078_:
{
uint8_t v___x_4080_; 
v___x_4080_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(v_fst_4076_, v___y_4079_);
if (v___x_4080_ == 0)
{
lean_dec(v___y_4079_);
lean_dec(v_val_4072_);
v_i_4064_ = v___x_4069_;
goto _start;
}
else
{
lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4091_; 
lean_inc(v_snd_4077_);
lean_inc(v_fst_4076_);
v_isSharedCheck_4091_ = !lean_is_exclusive(v_b_4066_);
if (v_isSharedCheck_4091_ == 0)
{
lean_object* v_unused_4092_; lean_object* v_unused_4093_; 
v_unused_4092_ = lean_ctor_get(v_b_4066_, 1);
lean_dec(v_unused_4092_);
v_unused_4093_ = lean_ctor_get(v_b_4066_, 0);
lean_dec(v_unused_4093_);
v___x_4083_ = v_b_4066_;
v_isShared_4084_ = v_isSharedCheck_4091_;
goto v_resetjp_4082_;
}
else
{
lean_dec(v_b_4066_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4091_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4088_; 
v___x_4085_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_fst_4076_, v___y_4079_);
lean_dec(v___y_4079_);
v___x_4086_ = lean_array_push(v_snd_4077_, v_val_4072_);
if (v_isShared_4084_ == 0)
{
lean_ctor_set(v___x_4083_, 1, v___x_4086_);
lean_ctor_set(v___x_4083_, 0, v___x_4085_);
v___x_4088_ = v___x_4083_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v___x_4085_);
lean_ctor_set(v_reuseFailAlloc_4090_, 1, v___x_4086_);
v___x_4088_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
v_i_4064_ = v___x_4069_;
v_b_4066_ = v___x_4088_;
goto _start;
}
}
}
}
v___jp_4094_:
{
uint8_t v___x_4096_; 
v___x_4096_ = lean_nat_dec_lt(v___y_4095_, v_start_4062_);
lean_dec(v___y_4095_);
if (v___x_4096_ == 0)
{
lean_object* v_userName_4097_; 
lean_del_object(v___x_4074_);
v_userName_4097_ = lean_ctor_get(v_val_4072_, 2);
lean_inc(v_userName_4097_);
v___y_4079_ = v_userName_4097_;
goto v___jp_4078_;
}
else
{
lean_object* v___x_4099_; 
lean_inc(v_snd_4077_);
lean_dec(v_val_4072_);
lean_dec_ref(v_b_4066_);
if (v_isShared_4075_ == 0)
{
lean_ctor_set_tag(v___x_4074_, 0);
lean_ctor_set(v___x_4074_, 0, v_snd_4077_);
v___x_4099_ = v___x_4074_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_snd_4077_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
}
}
else
{
lean_object* v___x_4107_; 
v___x_4107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4107_, 0, v_b_4066_);
return v___x_4107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_start_4108_, lean_object* v_as_4109_, lean_object* v_i_4110_, lean_object* v_stop_4111_, lean_object* v_b_4112_){
_start:
{
size_t v_i_boxed_4113_; size_t v_stop_boxed_4114_; lean_object* v_res_4115_; 
v_i_boxed_4113_ = lean_unbox_usize(v_i_4110_);
lean_dec(v_i_4110_);
v_stop_boxed_4114_ = lean_unbox_usize(v_stop_4111_);
lean_dec(v_stop_4111_);
v_res_4115_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_4108_, v_as_4109_, v_i_boxed_4113_, v_stop_boxed_4114_, v_b_4112_);
lean_dec_ref(v_as_4109_);
lean_dec(v_start_4108_);
return v_res_4115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(lean_object* v_start_4116_, lean_object* v_x_4117_, lean_object* v_x_4118_){
_start:
{
if (lean_obj_tag(v_x_4117_) == 0)
{
lean_object* v_cs_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4132_; 
v_cs_4119_ = lean_ctor_get(v_x_4117_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v_x_4117_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4121_ = v_x_4117_;
v_isShared_4122_ = v_isSharedCheck_4132_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_cs_4119_);
lean_dec(v_x_4117_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4132_;
goto v_resetjp_4120_;
}
v_resetjp_4120_:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; uint8_t v___x_4125_; 
v___x_4123_ = lean_array_get_size(v_cs_4119_);
v___x_4124_ = lean_unsigned_to_nat(0u);
v___x_4125_ = lean_nat_dec_lt(v___x_4124_, v___x_4123_);
if (v___x_4125_ == 0)
{
lean_object* v___x_4127_; 
lean_dec_ref(v_cs_4119_);
if (v_isShared_4122_ == 0)
{
lean_ctor_set_tag(v___x_4121_, 1);
lean_ctor_set(v___x_4121_, 0, v_x_4118_);
v___x_4127_ = v___x_4121_;
goto v_reusejp_4126_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v_x_4118_);
v___x_4127_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4126_;
}
v_reusejp_4126_:
{
return v___x_4127_;
}
}
else
{
size_t v___x_4129_; size_t v___x_4130_; lean_object* v___x_4131_; 
lean_del_object(v___x_4121_);
v___x_4129_ = lean_usize_of_nat(v___x_4123_);
v___x_4130_ = ((size_t)0ULL);
v___x_4131_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(v_start_4116_, v_cs_4119_, v___x_4129_, v___x_4130_, v_x_4118_);
lean_dec_ref(v_cs_4119_);
return v___x_4131_;
}
}
}
else
{
lean_object* v_vs_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4146_; 
v_vs_4133_ = lean_ctor_get(v_x_4117_, 0);
v_isSharedCheck_4146_ = !lean_is_exclusive(v_x_4117_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4135_ = v_x_4117_;
v_isShared_4136_ = v_isSharedCheck_4146_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_vs_4133_);
lean_dec(v_x_4117_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4146_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___x_4137_; lean_object* v___x_4138_; uint8_t v___x_4139_; 
v___x_4137_ = lean_array_get_size(v_vs_4133_);
v___x_4138_ = lean_unsigned_to_nat(0u);
v___x_4139_ = lean_nat_dec_lt(v___x_4138_, v___x_4137_);
if (v___x_4139_ == 0)
{
lean_object* v___x_4141_; 
lean_dec_ref(v_vs_4133_);
if (v_isShared_4136_ == 0)
{
lean_ctor_set(v___x_4135_, 0, v_x_4118_);
v___x_4141_ = v___x_4135_;
goto v_reusejp_4140_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v_x_4118_);
v___x_4141_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4140_;
}
v_reusejp_4140_:
{
return v___x_4141_;
}
}
else
{
size_t v___x_4143_; size_t v___x_4144_; lean_object* v___x_4145_; 
lean_del_object(v___x_4135_);
v___x_4143_ = lean_usize_of_nat(v___x_4137_);
v___x_4144_ = ((size_t)0ULL);
v___x_4145_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_4116_, v_vs_4133_, v___x_4143_, v___x_4144_, v_x_4118_);
lean_dec_ref(v_vs_4133_);
return v___x_4145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_start_4147_, lean_object* v_as_4148_, size_t v_i_4149_, size_t v_stop_4150_, lean_object* v_b_4151_){
_start:
{
uint8_t v___x_4152_; 
v___x_4152_ = lean_usize_dec_eq(v_i_4149_, v_stop_4150_);
if (v___x_4152_ == 0)
{
size_t v___x_4153_; size_t v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; 
v___x_4153_ = ((size_t)1ULL);
v___x_4154_ = lean_usize_sub(v_i_4149_, v___x_4153_);
v___x_4155_ = lean_array_uget_borrowed(v_as_4148_, v___x_4154_);
lean_inc(v___x_4155_);
v___x_4156_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4147_, v___x_4155_, v_b_4151_);
if (lean_obj_tag(v___x_4156_) == 0)
{
return v___x_4156_;
}
else
{
lean_object* v_a_4157_; 
v_a_4157_ = lean_ctor_get(v___x_4156_, 0);
lean_inc(v_a_4157_);
lean_dec_ref_known(v___x_4156_, 1);
v_i_4149_ = v___x_4154_;
v_b_4151_ = v_a_4157_;
goto _start;
}
}
else
{
lean_object* v___x_4159_; 
v___x_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4159_, 0, v_b_4151_);
return v___x_4159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_start_4160_, lean_object* v_as_4161_, lean_object* v_i_4162_, lean_object* v_stop_4163_, lean_object* v_b_4164_){
_start:
{
size_t v_i_boxed_4165_; size_t v_stop_boxed_4166_; lean_object* v_res_4167_; 
v_i_boxed_4165_ = lean_unbox_usize(v_i_4162_);
lean_dec(v_i_4162_);
v_stop_boxed_4166_ = lean_unbox_usize(v_stop_4163_);
lean_dec(v_stop_4163_);
v_res_4167_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(v_start_4160_, v_as_4161_, v_i_boxed_4165_, v_stop_boxed_4166_, v_b_4164_);
lean_dec_ref(v_as_4161_);
lean_dec(v_start_4160_);
return v_res_4167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg___boxed(lean_object* v_start_4168_, lean_object* v_x_4169_, lean_object* v_x_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4168_, v_x_4169_, v_x_4170_);
lean_dec(v_start_4168_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(lean_object* v_start_4172_, lean_object* v_t_4173_, lean_object* v_init_4174_){
_start:
{
lean_object* v_root_4175_; lean_object* v_tail_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; uint8_t v___x_4179_; 
v_root_4175_ = lean_ctor_get(v_t_4173_, 0);
lean_inc_ref(v_root_4175_);
v_tail_4176_ = lean_ctor_get(v_t_4173_, 1);
lean_inc_ref(v_tail_4176_);
lean_dec_ref(v_t_4173_);
v___x_4177_ = lean_array_get_size(v_tail_4176_);
v___x_4178_ = lean_unsigned_to_nat(0u);
v___x_4179_ = lean_nat_dec_lt(v___x_4178_, v___x_4177_);
if (v___x_4179_ == 0)
{
lean_object* v___x_4180_; 
lean_dec_ref(v_tail_4176_);
v___x_4180_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4172_, v_root_4175_, v_init_4174_);
return v___x_4180_;
}
else
{
size_t v___x_4181_; size_t v___x_4182_; lean_object* v___x_4183_; 
v___x_4181_ = lean_usize_of_nat(v___x_4177_);
v___x_4182_ = ((size_t)0ULL);
v___x_4183_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_4172_, v_tail_4176_, v___x_4181_, v___x_4182_, v_init_4174_);
lean_dec_ref(v_tail_4176_);
if (lean_obj_tag(v___x_4183_) == 0)
{
lean_dec_ref(v_root_4175_);
return v___x_4183_;
}
else
{
lean_object* v_a_4184_; lean_object* v___x_4185_; 
v_a_4184_ = lean_ctor_get(v___x_4183_, 0);
lean_inc(v_a_4184_);
lean_dec_ref_known(v___x_4183_, 1);
v___x_4185_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4172_, v_root_4175_, v_a_4184_);
return v___x_4185_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg___boxed(lean_object* v_start_4186_, lean_object* v_t_4187_, lean_object* v_init_4188_){
_start:
{
lean_object* v_res_4189_; 
v_res_4189_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(v_start_4186_, v_t_4187_, v_init_4188_);
lean_dec(v_start_4186_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(lean_object* v_start_4190_, lean_object* v_lctx_4191_, lean_object* v_init_4192_){
_start:
{
lean_object* v_decls_4193_; lean_object* v___x_4194_; 
v_decls_4193_ = lean_ctor_get(v_lctx_4191_, 1);
lean_inc_ref(v_decls_4193_);
lean_dec_ref(v_lctx_4191_);
v___x_4194_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(v_start_4190_, v_decls_4193_, v_init_4192_);
return v___x_4194_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg___boxed(lean_object* v_start_4195_, lean_object* v_lctx_4196_, lean_object* v_init_4197_){
_start:
{
lean_object* v_res_4198_; 
v_res_4198_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(v_start_4195_, v_lctx_4196_, v_init_4197_);
lean_dec(v_start_4195_);
return v_res_4198_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg(lean_object* v_lctx_4201_, lean_object* v_userNames_4202_, lean_object* v_start_4203_){
_start:
{
lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4204_ = ((lean_object*)(l_Lean_LocalContext_findFromUserNames___redArg___closed__0));
v___x_4205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4205_, 0, v_userNames_4202_);
lean_ctor_set(v___x_4205_, 1, v___x_4204_);
v___x_4206_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(v_start_4203_, v_lctx_4201_, v___x_4205_);
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_object* v_a_4207_; lean_object* v___x_4208_; 
v_a_4207_ = lean_ctor_get(v___x_4206_, 0);
lean_inc(v_a_4207_);
lean_dec_ref_known(v___x_4206_, 1);
v___x_4208_ = l_Array_reverse___redArg(v_a_4207_);
return v___x_4208_;
}
else
{
lean_object* v_a_4209_; lean_object* v_snd_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; 
v_a_4209_ = lean_ctor_get(v___x_4206_, 0);
lean_inc(v_a_4209_);
lean_dec_ref_known(v___x_4206_, 1);
v_snd_4210_ = lean_ctor_get(v_a_4209_, 1);
lean_inc(v_snd_4210_);
lean_dec(v_a_4209_);
v___x_4211_ = l_Array_reverse___redArg(v_snd_4210_);
v___x_4212_ = l_Array_reverse___redArg(v___x_4211_);
return v___x_4212_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg___boxed(lean_object* v_lctx_4213_, lean_object* v_userNames_4214_, lean_object* v_start_4215_){
_start:
{
lean_object* v_res_4216_; 
v_res_4216_ = l_Lean_LocalContext_findFromUserNames___redArg(v_lctx_4213_, v_userNames_4214_, v_start_4215_);
lean_dec(v_start_4215_);
return v_res_4216_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames(lean_object* v_00_u03b1_4217_, lean_object* v_lctx_4218_, lean_object* v_userNames_4219_, lean_object* v_start_4220_){
_start:
{
lean_object* v___x_4221_; 
v___x_4221_ = l_Lean_LocalContext_findFromUserNames___redArg(v_lctx_4218_, v_userNames_4219_, v_start_4220_);
return v___x_4221_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___boxed(lean_object* v_00_u03b1_4222_, lean_object* v_lctx_4223_, lean_object* v_userNames_4224_, lean_object* v_start_4225_){
_start:
{
lean_object* v_res_4226_; 
v_res_4226_ = l_Lean_LocalContext_findFromUserNames(v_00_u03b1_4222_, v_lctx_4223_, v_userNames_4224_, v_start_4225_);
lean_dec(v_start_4225_);
return v_res_4226_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0(lean_object* v_00_u03b2_4227_, lean_object* v_m_4228_, lean_object* v_a_4229_){
_start:
{
uint8_t v___x_4230_; 
v___x_4230_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(v_m_4228_, v_a_4229_);
return v___x_4230_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___boxed(lean_object* v_00_u03b2_4231_, lean_object* v_m_4232_, lean_object* v_a_4233_){
_start:
{
uint8_t v_res_4234_; lean_object* v_r_4235_; 
v_res_4234_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0(v_00_u03b2_4231_, v_m_4232_, v_a_4233_);
lean_dec(v_a_4233_);
lean_dec_ref(v_m_4232_);
v_r_4235_ = lean_box(v_res_4234_);
return v_r_4235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1(lean_object* v_00_u03b2_4236_, lean_object* v_m_4237_, lean_object* v_a_4238_){
_start:
{
lean_object* v___x_4239_; 
v___x_4239_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_m_4237_, v_a_4238_);
return v___x_4239_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___boxed(lean_object* v_00_u03b2_4240_, lean_object* v_m_4241_, lean_object* v_a_4242_){
_start:
{
lean_object* v_res_4243_; 
v_res_4243_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1(v_00_u03b2_4240_, v_m_4241_, v_a_4242_);
lean_dec(v_a_4242_);
return v_res_4243_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2(lean_object* v_00_u03b1_4244_, lean_object* v_start_4245_, lean_object* v_lctx_4246_, lean_object* v_init_4247_){
_start:
{
lean_object* v___x_4248_; 
v___x_4248_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(v_start_4245_, v_lctx_4246_, v_init_4247_);
return v___x_4248_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___boxed(lean_object* v_00_u03b1_4249_, lean_object* v_start_4250_, lean_object* v_lctx_4251_, lean_object* v_init_4252_){
_start:
{
lean_object* v_res_4253_; 
v_res_4253_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2(v_00_u03b1_4249_, v_start_4250_, v_lctx_4251_, v_init_4252_);
lean_dec(v_start_4250_);
return v_res_4253_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0(lean_object* v_00_u03b2_4254_, lean_object* v_a_4255_, lean_object* v_x_4256_){
_start:
{
uint8_t v___x_4257_; 
v___x_4257_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_4255_, v_x_4256_);
return v___x_4257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4258_, lean_object* v_a_4259_, lean_object* v_x_4260_){
_start:
{
uint8_t v_res_4261_; lean_object* v_r_4262_; 
v_res_4261_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0(v_00_u03b2_4258_, v_a_4259_, v_x_4260_);
lean_dec(v_x_4260_);
lean_dec(v_a_4259_);
v_r_4262_ = lean_box(v_res_4261_);
return v_r_4262_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2(lean_object* v_00_u03b2_4263_, lean_object* v_a_4264_, lean_object* v_x_4265_){
_start:
{
lean_object* v___x_4266_; 
v___x_4266_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_4264_, v_x_4265_);
return v___x_4266_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___boxed(lean_object* v_00_u03b2_4267_, lean_object* v_a_4268_, lean_object* v_x_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2(v_00_u03b2_4267_, v_a_4268_, v_x_4269_);
lean_dec(v_a_4268_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4(lean_object* v_00_u03b1_4271_, lean_object* v_start_4272_, lean_object* v_t_4273_, lean_object* v_init_4274_){
_start:
{
lean_object* v___x_4275_; 
v___x_4275_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(v_start_4272_, v_t_4273_, v_init_4274_);
return v___x_4275_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___boxed(lean_object* v_00_u03b1_4276_, lean_object* v_start_4277_, lean_object* v_t_4278_, lean_object* v_init_4279_){
_start:
{
lean_object* v_res_4280_; 
v_res_4280_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4(v_00_u03b1_4276_, v_start_4277_, v_t_4278_, v_init_4279_);
lean_dec(v_start_4277_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5(lean_object* v_00_u03b1_4281_, lean_object* v_start_4282_, lean_object* v_x_4283_, lean_object* v_x_4284_){
_start:
{
lean_object* v___x_4285_; 
v___x_4285_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4282_, v_x_4283_, v_x_4284_);
return v___x_4285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___boxed(lean_object* v_00_u03b1_4286_, lean_object* v_start_4287_, lean_object* v_x_4288_, lean_object* v_x_4289_){
_start:
{
lean_object* v_res_4290_; 
v_res_4290_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5(v_00_u03b1_4286_, v_start_4287_, v_x_4288_, v_x_4289_);
lean_dec(v_start_4287_);
return v_res_4290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6(lean_object* v_00_u03b1_4291_, lean_object* v_start_4292_, lean_object* v_as_4293_, size_t v_i_4294_, size_t v_stop_4295_, lean_object* v_b_4296_){
_start:
{
lean_object* v___x_4297_; 
v___x_4297_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_4292_, v_as_4293_, v_i_4294_, v_stop_4295_, v_b_4296_);
return v___x_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b1_4298_, lean_object* v_start_4299_, lean_object* v_as_4300_, lean_object* v_i_4301_, lean_object* v_stop_4302_, lean_object* v_b_4303_){
_start:
{
size_t v_i_boxed_4304_; size_t v_stop_boxed_4305_; lean_object* v_res_4306_; 
v_i_boxed_4304_ = lean_unbox_usize(v_i_4301_);
lean_dec(v_i_4301_);
v_stop_boxed_4305_ = lean_unbox_usize(v_stop_4302_);
lean_dec(v_stop_4302_);
v_res_4306_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6(v_00_u03b1_4298_, v_start_4299_, v_as_4300_, v_i_boxed_4304_, v_stop_boxed_4305_, v_b_4303_);
lean_dec_ref(v_as_4300_);
lean_dec(v_start_4299_);
return v_res_4306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b1_4307_, lean_object* v_start_4308_, lean_object* v_as_4309_, size_t v_i_4310_, size_t v_stop_4311_, lean_object* v_b_4312_){
_start:
{
lean_object* v___x_4313_; 
v___x_4313_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(v_start_4308_, v_as_4309_, v_i_4310_, v_stop_4311_, v_b_4312_);
return v___x_4313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___boxed(lean_object* v_00_u03b1_4314_, lean_object* v_start_4315_, lean_object* v_as_4316_, lean_object* v_i_4317_, lean_object* v_stop_4318_, lean_object* v_b_4319_){
_start:
{
size_t v_i_boxed_4320_; size_t v_stop_boxed_4321_; lean_object* v_res_4322_; 
v_i_boxed_4320_ = lean_unbox_usize(v_i_4317_);
lean_dec(v_i_4317_);
v_stop_boxed_4321_ = lean_unbox_usize(v_stop_4318_);
lean_dec(v_stop_4318_);
v_res_4322_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6(v_00_u03b1_4314_, v_start_4315_, v_as_4316_, v_i_boxed_4320_, v_stop_boxed_4321_, v_b_4319_);
lean_dec_ref(v_as_4316_);
lean_dec(v_start_4315_);
return v_res_4322_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift___redArg(lean_object* v_inst_4323_, lean_object* v_inst_4324_){
_start:
{
lean_object* v___x_4325_; 
v___x_4325_ = lean_apply_2(v_inst_4323_, lean_box(0), v_inst_4324_);
return v___x_4325_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift(lean_object* v_m_4326_, lean_object* v_n_4327_, lean_object* v_inst_4328_, lean_object* v_inst_4329_){
_start:
{
lean_object* v___x_4330_; 
v___x_4330_ = lean_apply_2(v_inst_4328_, lean_box(0), v_inst_4329_);
return v___x_4330_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__0(lean_object* v_toPure_4331_, lean_object* v_d_x3f_4332_, lean_object* v_b_4333_){
_start:
{
if (lean_obj_tag(v_d_x3f_4332_) == 0)
{
lean_object* v___x_4334_; lean_object* v___x_4335_; 
v___x_4334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4334_, 0, v_b_4333_);
v___x_4335_ = lean_apply_2(v_toPure_4331_, lean_box(0), v___x_4334_);
return v___x_4335_;
}
else
{
lean_object* v_val_4336_; lean_object* v___x_4338_; uint8_t v_isShared_4339_; uint8_t v_isSharedCheck_4351_; 
v_val_4336_ = lean_ctor_get(v_d_x3f_4332_, 0);
v_isSharedCheck_4351_ = !lean_is_exclusive(v_d_x3f_4332_);
if (v_isSharedCheck_4351_ == 0)
{
v___x_4338_ = v_d_x3f_4332_;
v_isShared_4339_ = v_isSharedCheck_4351_;
goto v_resetjp_4337_;
}
else
{
lean_inc(v_val_4336_);
lean_dec(v_d_x3f_4332_);
v___x_4338_ = lean_box(0);
v_isShared_4339_ = v_isSharedCheck_4351_;
goto v_resetjp_4337_;
}
v_resetjp_4337_:
{
uint8_t v___x_4340_; 
v___x_4340_ = l_Lean_LocalDecl_isImplementationDetail(v_val_4336_);
if (v___x_4340_ == 0)
{
lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4344_; 
v___x_4341_ = l_Lean_LocalDecl_toExpr(v_val_4336_);
v___x_4342_ = lean_array_push(v_b_4333_, v___x_4341_);
if (v_isShared_4339_ == 0)
{
lean_ctor_set(v___x_4338_, 0, v___x_4342_);
v___x_4344_ = v___x_4338_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4346_; 
v_reuseFailAlloc_4346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4346_, 0, v___x_4342_);
v___x_4344_ = v_reuseFailAlloc_4346_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
lean_object* v___x_4345_; 
v___x_4345_ = lean_apply_2(v_toPure_4331_, lean_box(0), v___x_4344_);
return v___x_4345_;
}
}
else
{
lean_object* v___x_4348_; 
lean_dec(v_val_4336_);
if (v_isShared_4339_ == 0)
{
lean_ctor_set(v___x_4338_, 0, v_b_4333_);
v___x_4348_ = v___x_4338_;
goto v_reusejp_4347_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v_b_4333_);
v___x_4348_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4347_;
}
v_reusejp_4347_:
{
lean_object* v___x_4349_; 
v___x_4349_ = lean_apply_2(v_toPure_4331_, lean_box(0), v___x_4348_);
return v___x_4349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__1(lean_object* v_toPure_4352_, lean_object* v_____s_4353_){
_start:
{
lean_object* v___x_4354_; 
v___x_4354_ = lean_apply_2(v_toPure_4352_, lean_box(0), v_____s_4353_);
return v___x_4354_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2(lean_object* v_inst_4355_, lean_object* v_hs_4356_, lean_object* v___f_4357_, lean_object* v_toBind_4358_, lean_object* v___f_4359_, lean_object* v_____do__lift_4360_){
_start:
{
lean_object* v_decls_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; 
v_decls_4361_ = lean_ctor_get(v_____do__lift_4360_, 1);
v___x_4362_ = l_Lean_PersistentArray_forIn___redArg(v_inst_4355_, v_decls_4361_, v_hs_4356_, v___f_4357_);
v___x_4363_ = lean_apply_4(v_toBind_4358_, lean_box(0), lean_box(0), v___x_4362_, v___f_4359_);
return v___x_4363_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2___boxed(lean_object* v_inst_4364_, lean_object* v_hs_4365_, lean_object* v___f_4366_, lean_object* v_toBind_4367_, lean_object* v___f_4368_, lean_object* v_____do__lift_4369_){
_start:
{
lean_object* v_res_4370_; 
v_res_4370_ = l_Lean_getLocalHyps___redArg___lam__2(v_inst_4364_, v_hs_4365_, v___f_4366_, v_toBind_4367_, v___f_4368_, v_____do__lift_4369_);
lean_dec_ref(v_____do__lift_4369_);
return v_res_4370_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg(lean_object* v_inst_4373_, lean_object* v_inst_4374_){
_start:
{
lean_object* v_toApplicative_4375_; lean_object* v_toBind_4376_; lean_object* v_toPure_4377_; lean_object* v_hs_4378_; lean_object* v___f_4379_; lean_object* v___f_4380_; lean_object* v___f_4381_; lean_object* v___x_4382_; 
v_toApplicative_4375_ = lean_ctor_get(v_inst_4373_, 0);
v_toBind_4376_ = lean_ctor_get(v_inst_4373_, 1);
lean_inc_n(v_toBind_4376_, 2);
v_toPure_4377_ = lean_ctor_get(v_toApplicative_4375_, 1);
v_hs_4378_ = ((lean_object*)(l_Lean_getLocalHyps___redArg___closed__0));
lean_inc_n(v_toPure_4377_, 2);
v___f_4379_ = lean_alloc_closure((void*)(l_Lean_getLocalHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4379_, 0, v_toPure_4377_);
v___f_4380_ = lean_alloc_closure((void*)(l_Lean_getLocalHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4380_, 0, v_toPure_4377_);
v___f_4381_ = lean_alloc_closure((void*)(l_Lean_getLocalHyps___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_4381_, 0, v_inst_4373_);
lean_closure_set(v___f_4381_, 1, v_hs_4378_);
lean_closure_set(v___f_4381_, 2, v___f_4379_);
lean_closure_set(v___f_4381_, 3, v_toBind_4376_);
lean_closure_set(v___f_4381_, 4, v___f_4380_);
v___x_4382_ = lean_apply_4(v_toBind_4376_, lean_box(0), lean_box(0), v_inst_4374_, v___f_4381_);
return v___x_4382_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps(lean_object* v_m_4383_, lean_object* v_inst_4384_, lean_object* v_inst_4385_){
_start:
{
lean_object* v___x_4386_; 
v___x_4386_ = l_Lean_getLocalHyps___redArg(v_inst_4384_, v_inst_4385_);
return v___x_4386_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object* v_fvarId_4387_, lean_object* v_e_4388_, lean_object* v_d_4389_){
_start:
{
lean_object* v___y_4391_; lean_object* v_fvarId_4423_; 
v_fvarId_4423_ = lean_ctor_get(v_d_4389_, 1);
lean_inc(v_fvarId_4423_);
v___y_4391_ = v_fvarId_4423_;
goto v___jp_4390_;
v___jp_4390_:
{
uint8_t v___x_4392_; 
v___x_4392_ = l_Lean_instBEqFVarId_beq(v___y_4391_, v_fvarId_4387_);
lean_dec(v___y_4391_);
if (v___x_4392_ == 0)
{
if (lean_obj_tag(v_d_4389_) == 0)
{
lean_object* v_index_4393_; lean_object* v_fvarId_4394_; lean_object* v_userName_4395_; lean_object* v_type_4396_; uint8_t v_bi_4397_; uint8_t v_kind_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4406_; 
v_index_4393_ = lean_ctor_get(v_d_4389_, 0);
v_fvarId_4394_ = lean_ctor_get(v_d_4389_, 1);
v_userName_4395_ = lean_ctor_get(v_d_4389_, 2);
v_type_4396_ = lean_ctor_get(v_d_4389_, 3);
v_bi_4397_ = lean_ctor_get_uint8(v_d_4389_, sizeof(void*)*4);
v_kind_4398_ = lean_ctor_get_uint8(v_d_4389_, sizeof(void*)*4 + 1);
v_isSharedCheck_4406_ = !lean_is_exclusive(v_d_4389_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4400_ = v_d_4389_;
v_isShared_4401_ = v_isSharedCheck_4406_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_type_4396_);
lean_inc(v_userName_4395_);
lean_inc(v_fvarId_4394_);
lean_inc(v_index_4393_);
lean_dec(v_d_4389_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4406_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4402_; lean_object* v___x_4404_; 
v___x_4402_ = l_Lean_Expr_replaceFVarId(v_type_4396_, v_fvarId_4387_, v_e_4388_);
lean_dec_ref(v_type_4396_);
if (v_isShared_4401_ == 0)
{
lean_ctor_set(v___x_4400_, 3, v___x_4402_);
v___x_4404_ = v___x_4400_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_index_4393_);
lean_ctor_set(v_reuseFailAlloc_4405_, 1, v_fvarId_4394_);
lean_ctor_set(v_reuseFailAlloc_4405_, 2, v_userName_4395_);
lean_ctor_set(v_reuseFailAlloc_4405_, 3, v___x_4402_);
lean_ctor_set_uint8(v_reuseFailAlloc_4405_, sizeof(void*)*4, v_bi_4397_);
lean_ctor_set_uint8(v_reuseFailAlloc_4405_, sizeof(void*)*4 + 1, v_kind_4398_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
else
{
lean_object* v_index_4407_; lean_object* v_fvarId_4408_; lean_object* v_userName_4409_; lean_object* v_type_4410_; lean_object* v_value_4411_; uint8_t v_nondep_4412_; uint8_t v_kind_4413_; lean_object* v___x_4415_; uint8_t v_isShared_4416_; uint8_t v_isSharedCheck_4422_; 
v_index_4407_ = lean_ctor_get(v_d_4389_, 0);
v_fvarId_4408_ = lean_ctor_get(v_d_4389_, 1);
v_userName_4409_ = lean_ctor_get(v_d_4389_, 2);
v_type_4410_ = lean_ctor_get(v_d_4389_, 3);
v_value_4411_ = lean_ctor_get(v_d_4389_, 4);
v_nondep_4412_ = lean_ctor_get_uint8(v_d_4389_, sizeof(void*)*5);
v_kind_4413_ = lean_ctor_get_uint8(v_d_4389_, sizeof(void*)*5 + 1);
v_isSharedCheck_4422_ = !lean_is_exclusive(v_d_4389_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4415_ = v_d_4389_;
v_isShared_4416_ = v_isSharedCheck_4422_;
goto v_resetjp_4414_;
}
else
{
lean_inc(v_value_4411_);
lean_inc(v_type_4410_);
lean_inc(v_userName_4409_);
lean_inc(v_fvarId_4408_);
lean_inc(v_index_4407_);
lean_dec(v_d_4389_);
v___x_4415_ = lean_box(0);
v_isShared_4416_ = v_isSharedCheck_4422_;
goto v_resetjp_4414_;
}
v_resetjp_4414_:
{
lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4420_; 
lean_inc(v_fvarId_4387_);
v___x_4417_ = l_Lean_Expr_replaceFVarId(v_type_4410_, v_fvarId_4387_, v_e_4388_);
lean_dec_ref(v_type_4410_);
v___x_4418_ = l_Lean_Expr_replaceFVarId(v_value_4411_, v_fvarId_4387_, v_e_4388_);
lean_dec_ref(v_value_4411_);
if (v_isShared_4416_ == 0)
{
lean_ctor_set(v___x_4415_, 4, v___x_4418_);
lean_ctor_set(v___x_4415_, 3, v___x_4417_);
v___x_4420_ = v___x_4415_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v_index_4407_);
lean_ctor_set(v_reuseFailAlloc_4421_, 1, v_fvarId_4408_);
lean_ctor_set(v_reuseFailAlloc_4421_, 2, v_userName_4409_);
lean_ctor_set(v_reuseFailAlloc_4421_, 3, v___x_4417_);
lean_ctor_set(v_reuseFailAlloc_4421_, 4, v___x_4418_);
lean_ctor_set_uint8(v_reuseFailAlloc_4421_, sizeof(void*)*5, v_nondep_4412_);
lean_ctor_set_uint8(v_reuseFailAlloc_4421_, sizeof(void*)*5 + 1, v_kind_4413_);
v___x_4420_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
return v___x_4420_;
}
}
}
}
else
{
lean_dec(v_fvarId_4387_);
return v_d_4389_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId___boxed(lean_object* v_fvarId_4424_, lean_object* v_e_4425_, lean_object* v_d_4426_){
_start:
{
lean_object* v_res_4427_; 
v_res_4427_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_4424_, v_e_4425_, v_d_4426_);
lean_dec_ref(v_e_4425_);
return v_res_4427_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0(lean_object* v_fvarId_4428_, lean_object* v_e_4429_, lean_object* v_x_4430_){
_start:
{
lean_object* v___x_4431_; 
v___x_4431_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_4428_, v_e_4429_, v_x_4430_);
return v___x_4431_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0___boxed(lean_object* v_fvarId_4432_, lean_object* v_e_4433_, lean_object* v_x_4434_){
_start:
{
lean_object* v_res_4435_; 
v_res_4435_ = l_Lean_LocalContext_replaceFVarId___lam__0(v_fvarId_4432_, v_e_4433_, v_x_4434_);
lean_dec_ref(v_e_4433_);
return v_res_4435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(lean_object* v_fvarId_4436_, lean_object* v_e_4437_, size_t v_sz_4438_, size_t v_i_4439_, lean_object* v_bs_4440_){
_start:
{
uint8_t v___x_4441_; 
v___x_4441_ = lean_usize_dec_lt(v_i_4439_, v_sz_4438_);
if (v___x_4441_ == 0)
{
lean_dec(v_fvarId_4436_);
return v_bs_4440_;
}
else
{
lean_object* v_v_4442_; lean_object* v___x_4443_; lean_object* v_bs_x27_4444_; lean_object* v___y_4446_; 
v_v_4442_ = lean_array_uget(v_bs_4440_, v_i_4439_);
v___x_4443_ = lean_unsigned_to_nat(0u);
v_bs_x27_4444_ = lean_array_uset(v_bs_4440_, v_i_4439_, v___x_4443_);
if (lean_obj_tag(v_v_4442_) == 0)
{
v___y_4446_ = v_v_4442_;
goto v___jp_4445_;
}
else
{
lean_object* v_val_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4459_; 
v_val_4451_ = lean_ctor_get(v_v_4442_, 0);
v_isSharedCheck_4459_ = !lean_is_exclusive(v_v_4442_);
if (v_isSharedCheck_4459_ == 0)
{
v___x_4453_ = v_v_4442_;
v_isShared_4454_ = v_isSharedCheck_4459_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_val_4451_);
lean_dec(v_v_4442_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4459_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v___x_4455_; lean_object* v___x_4457_; 
lean_inc(v_fvarId_4436_);
v___x_4455_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_4436_, v_e_4437_, v_val_4451_);
if (v_isShared_4454_ == 0)
{
lean_ctor_set(v___x_4453_, 0, v___x_4455_);
v___x_4457_ = v___x_4453_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v___x_4455_);
v___x_4457_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
v___y_4446_ = v___x_4457_;
goto v___jp_4445_;
}
}
}
v___jp_4445_:
{
size_t v___x_4447_; size_t v___x_4448_; lean_object* v___x_4449_; 
v___x_4447_ = ((size_t)1ULL);
v___x_4448_ = lean_usize_add(v_i_4439_, v___x_4447_);
v___x_4449_ = lean_array_uset(v_bs_x27_4444_, v_i_4439_, v___y_4446_);
v_i_4439_ = v___x_4448_;
v_bs_4440_ = v___x_4449_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3___boxed(lean_object* v_fvarId_4460_, lean_object* v_e_4461_, lean_object* v_sz_4462_, lean_object* v_i_4463_, lean_object* v_bs_4464_){
_start:
{
size_t v_sz_boxed_4465_; size_t v_i_boxed_4466_; lean_object* v_res_4467_; 
v_sz_boxed_4465_ = lean_unbox_usize(v_sz_4462_);
lean_dec(v_sz_4462_);
v_i_boxed_4466_ = lean_unbox_usize(v_i_4463_);
lean_dec(v_i_4463_);
v_res_4467_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(v_fvarId_4460_, v_e_4461_, v_sz_boxed_4465_, v_i_boxed_4466_, v_bs_4464_);
lean_dec_ref(v_e_4461_);
return v_res_4467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(lean_object* v_fvarId_4468_, lean_object* v_e_4469_, size_t v_sz_4470_, size_t v_i_4471_, lean_object* v_bs_4472_){
_start:
{
uint8_t v___x_4473_; 
v___x_4473_ = lean_usize_dec_lt(v_i_4471_, v_sz_4470_);
if (v___x_4473_ == 0)
{
lean_dec(v_fvarId_4468_);
return v_bs_4472_;
}
else
{
lean_object* v_v_4474_; lean_object* v___x_4475_; lean_object* v_bs_x27_4476_; lean_object* v___x_4477_; size_t v___x_4478_; size_t v___x_4479_; lean_object* v___x_4480_; 
v_v_4474_ = lean_array_uget(v_bs_4472_, v_i_4471_);
v___x_4475_ = lean_unsigned_to_nat(0u);
v_bs_x27_4476_ = lean_array_uset(v_bs_4472_, v_i_4471_, v___x_4475_);
lean_inc(v_fvarId_4468_);
v___x_4477_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(v_fvarId_4468_, v_e_4469_, v_v_4474_);
v___x_4478_ = ((size_t)1ULL);
v___x_4479_ = lean_usize_add(v_i_4471_, v___x_4478_);
v___x_4480_ = lean_array_uset(v_bs_x27_4476_, v_i_4471_, v___x_4477_);
v_i_4471_ = v___x_4479_;
v_bs_4472_ = v___x_4480_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(lean_object* v_fvarId_4482_, lean_object* v_e_4483_, lean_object* v_x_4484_){
_start:
{
if (lean_obj_tag(v_x_4484_) == 0)
{
lean_object* v_cs_4485_; lean_object* v___x_4487_; uint8_t v_isShared_4488_; uint8_t v_isSharedCheck_4495_; 
v_cs_4485_ = lean_ctor_get(v_x_4484_, 0);
v_isSharedCheck_4495_ = !lean_is_exclusive(v_x_4484_);
if (v_isSharedCheck_4495_ == 0)
{
v___x_4487_ = v_x_4484_;
v_isShared_4488_ = v_isSharedCheck_4495_;
goto v_resetjp_4486_;
}
else
{
lean_inc(v_cs_4485_);
lean_dec(v_x_4484_);
v___x_4487_ = lean_box(0);
v_isShared_4488_ = v_isSharedCheck_4495_;
goto v_resetjp_4486_;
}
v_resetjp_4486_:
{
size_t v_sz_4489_; size_t v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4493_; 
v_sz_4489_ = lean_array_size(v_cs_4485_);
v___x_4490_ = ((size_t)0ULL);
v___x_4491_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(v_fvarId_4482_, v_e_4483_, v_sz_4489_, v___x_4490_, v_cs_4485_);
if (v_isShared_4488_ == 0)
{
lean_ctor_set(v___x_4487_, 0, v___x_4491_);
v___x_4493_ = v___x_4487_;
goto v_reusejp_4492_;
}
else
{
lean_object* v_reuseFailAlloc_4494_; 
v_reuseFailAlloc_4494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4494_, 0, v___x_4491_);
v___x_4493_ = v_reuseFailAlloc_4494_;
goto v_reusejp_4492_;
}
v_reusejp_4492_:
{
return v___x_4493_;
}
}
}
else
{
lean_object* v_vs_4496_; lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4506_; 
v_vs_4496_ = lean_ctor_get(v_x_4484_, 0);
v_isSharedCheck_4506_ = !lean_is_exclusive(v_x_4484_);
if (v_isSharedCheck_4506_ == 0)
{
v___x_4498_ = v_x_4484_;
v_isShared_4499_ = v_isSharedCheck_4506_;
goto v_resetjp_4497_;
}
else
{
lean_inc(v_vs_4496_);
lean_dec(v_x_4484_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4506_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
size_t v_sz_4500_; size_t v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4504_; 
v_sz_4500_ = lean_array_size(v_vs_4496_);
v___x_4501_ = ((size_t)0ULL);
v___x_4502_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(v_fvarId_4482_, v_e_4483_, v_sz_4500_, v___x_4501_, v_vs_4496_);
if (v_isShared_4499_ == 0)
{
lean_ctor_set(v___x_4498_, 0, v___x_4502_);
v___x_4504_ = v___x_4498_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v___x_4502_);
v___x_4504_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4503_;
}
v_reusejp_4503_:
{
return v___x_4504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2___boxed(lean_object* v_fvarId_4507_, lean_object* v_e_4508_, lean_object* v_x_4509_){
_start:
{
lean_object* v_res_4510_; 
v_res_4510_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(v_fvarId_4507_, v_e_4508_, v_x_4509_);
lean_dec_ref(v_e_4508_);
return v_res_4510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4___boxed(lean_object* v_fvarId_4511_, lean_object* v_e_4512_, lean_object* v_sz_4513_, lean_object* v_i_4514_, lean_object* v_bs_4515_){
_start:
{
size_t v_sz_boxed_4516_; size_t v_i_boxed_4517_; lean_object* v_res_4518_; 
v_sz_boxed_4516_ = lean_unbox_usize(v_sz_4513_);
lean_dec(v_sz_4513_);
v_i_boxed_4517_ = lean_unbox_usize(v_i_4514_);
lean_dec(v_i_4514_);
v_res_4518_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(v_fvarId_4511_, v_e_4512_, v_sz_boxed_4516_, v_i_boxed_4517_, v_bs_4515_);
lean_dec_ref(v_e_4512_);
return v_res_4518_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(lean_object* v_fvarId_4519_, lean_object* v_e_4520_, lean_object* v_t_4521_){
_start:
{
lean_object* v_root_4522_; lean_object* v_tail_4523_; lean_object* v_size_4524_; size_t v_shift_4525_; lean_object* v_tailOff_4526_; lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4537_; 
v_root_4522_ = lean_ctor_get(v_t_4521_, 0);
v_tail_4523_ = lean_ctor_get(v_t_4521_, 1);
v_size_4524_ = lean_ctor_get(v_t_4521_, 2);
v_shift_4525_ = lean_ctor_get_usize(v_t_4521_, 4);
v_tailOff_4526_ = lean_ctor_get(v_t_4521_, 3);
v_isSharedCheck_4537_ = !lean_is_exclusive(v_t_4521_);
if (v_isSharedCheck_4537_ == 0)
{
v___x_4528_ = v_t_4521_;
v_isShared_4529_ = v_isSharedCheck_4537_;
goto v_resetjp_4527_;
}
else
{
lean_inc(v_tailOff_4526_);
lean_inc(v_size_4524_);
lean_inc(v_tail_4523_);
lean_inc(v_root_4522_);
lean_dec(v_t_4521_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4537_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
lean_object* v___x_4530_; size_t v_sz_4531_; size_t v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4535_; 
lean_inc(v_fvarId_4519_);
v___x_4530_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(v_fvarId_4519_, v_e_4520_, v_root_4522_);
v_sz_4531_ = lean_array_size(v_tail_4523_);
v___x_4532_ = ((size_t)0ULL);
v___x_4533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(v_fvarId_4519_, v_e_4520_, v_sz_4531_, v___x_4532_, v_tail_4523_);
if (v_isShared_4529_ == 0)
{
lean_ctor_set(v___x_4528_, 1, v___x_4533_);
lean_ctor_set(v___x_4528_, 0, v___x_4530_);
v___x_4535_ = v___x_4528_;
goto v_reusejp_4534_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v___x_4530_);
lean_ctor_set(v_reuseFailAlloc_4536_, 1, v___x_4533_);
lean_ctor_set(v_reuseFailAlloc_4536_, 2, v_size_4524_);
lean_ctor_set(v_reuseFailAlloc_4536_, 3, v_tailOff_4526_);
lean_ctor_set_usize(v_reuseFailAlloc_4536_, 4, v_shift_4525_);
v___x_4535_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4534_;
}
v_reusejp_4534_:
{
return v___x_4535_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1___boxed(lean_object* v_fvarId_4538_, lean_object* v_e_4539_, lean_object* v_t_4540_){
_start:
{
lean_object* v_res_4541_; 
v_res_4541_ = l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(v_fvarId_4538_, v_e_4539_, v_t_4540_);
lean_dec_ref(v_e_4539_);
return v_res_4541_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg___lam__0(lean_object* v_f_4542_, lean_object* v_x_4543_){
_start:
{
lean_object* v___x_4544_; 
v___x_4544_ = lean_apply_1(v_f_4542_, v_x_4543_);
return v___x_4544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(lean_object* v_f_4545_, lean_object* v_as_4546_, lean_object* v_i_4547_, lean_object* v_acc_4548_){
_start:
{
lean_object* v___x_4549_; uint8_t v___x_4550_; 
v___x_4549_ = lean_array_get_size(v_as_4546_);
v___x_4550_ = lean_nat_dec_eq(v_i_4547_, v___x_4549_);
if (v___x_4550_ == 0)
{
lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; 
v___x_4551_ = lean_array_fget_borrowed(v_as_4546_, v_i_4547_);
lean_inc(v_f_4545_);
lean_inc(v___x_4551_);
v___x_4552_ = lean_apply_1(v_f_4545_, v___x_4551_);
v___x_4553_ = lean_unsigned_to_nat(1u);
v___x_4554_ = lean_nat_add(v_i_4547_, v___x_4553_);
lean_dec(v_i_4547_);
v___x_4555_ = lean_array_push(v_acc_4548_, v___x_4552_);
v_i_4547_ = v___x_4554_;
v_acc_4548_ = v___x_4555_;
goto _start;
}
else
{
lean_dec(v_i_4547_);
lean_dec(v_f_4545_);
return v_acc_4548_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg___boxed(lean_object* v_f_4557_, lean_object* v_as_4558_, lean_object* v_i_4559_, lean_object* v_acc_4560_){
_start:
{
lean_object* v_res_4561_; 
v_res_4561_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_f_4557_, v_as_4558_, v_i_4559_, v_acc_4560_);
lean_dec_ref(v_as_4558_);
return v_res_4561_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_f_4562_, lean_object* v_as_4563_){
_start:
{
lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v___x_4564_ = lean_unsigned_to_nat(0u);
v___x_4565_ = lean_array_get_size(v_as_4563_);
v___x_4566_ = lean_mk_empty_array_with_capacity(v___x_4565_);
v___x_4567_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_f_4562_, v_as_4563_, v___x_4564_, v___x_4566_);
return v___x_4567_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_f_4568_, lean_object* v_as_4569_){
_start:
{
lean_object* v_res_4570_; 
v_res_4570_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4568_, v_as_4569_);
lean_dec_ref(v_as_4569_);
return v_res_4570_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_4571_, size_t v_sz_4572_, size_t v_i_4573_, lean_object* v_bs_4574_){
_start:
{
uint8_t v___x_4575_; 
v___x_4575_ = lean_usize_dec_lt(v_i_4573_, v_sz_4572_);
if (v___x_4575_ == 0)
{
lean_dec(v_f_4571_);
return v_bs_4574_;
}
else
{
lean_object* v_v_4576_; lean_object* v___x_4577_; lean_object* v_bs_x27_4578_; lean_object* v___y_4580_; 
v_v_4576_ = lean_array_uget(v_bs_4574_, v_i_4573_);
v___x_4577_ = lean_unsigned_to_nat(0u);
v_bs_x27_4578_ = lean_array_uset(v_bs_4574_, v_i_4573_, v___x_4577_);
switch(lean_obj_tag(v_v_4576_))
{
case 0:
{
lean_object* v_key_4585_; lean_object* v_val_4586_; lean_object* v___x_4588_; uint8_t v_isShared_4589_; uint8_t v_isSharedCheck_4594_; 
v_key_4585_ = lean_ctor_get(v_v_4576_, 0);
v_val_4586_ = lean_ctor_get(v_v_4576_, 1);
v_isSharedCheck_4594_ = !lean_is_exclusive(v_v_4576_);
if (v_isSharedCheck_4594_ == 0)
{
v___x_4588_ = v_v_4576_;
v_isShared_4589_ = v_isSharedCheck_4594_;
goto v_resetjp_4587_;
}
else
{
lean_inc(v_val_4586_);
lean_inc(v_key_4585_);
lean_dec(v_v_4576_);
v___x_4588_ = lean_box(0);
v_isShared_4589_ = v_isSharedCheck_4594_;
goto v_resetjp_4587_;
}
v_resetjp_4587_:
{
lean_object* v___x_4590_; lean_object* v___x_4592_; 
lean_inc(v_f_4571_);
v___x_4590_ = lean_apply_1(v_f_4571_, v_val_4586_);
if (v_isShared_4589_ == 0)
{
lean_ctor_set(v___x_4588_, 1, v___x_4590_);
v___x_4592_ = v___x_4588_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4593_; 
v_reuseFailAlloc_4593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4593_, 0, v_key_4585_);
lean_ctor_set(v_reuseFailAlloc_4593_, 1, v___x_4590_);
v___x_4592_ = v_reuseFailAlloc_4593_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
v___y_4580_ = v___x_4592_;
goto v___jp_4579_;
}
}
}
case 1:
{
lean_object* v_node_4595_; lean_object* v___x_4597_; uint8_t v_isShared_4598_; uint8_t v_isSharedCheck_4603_; 
v_node_4595_ = lean_ctor_get(v_v_4576_, 0);
v_isSharedCheck_4603_ = !lean_is_exclusive(v_v_4576_);
if (v_isSharedCheck_4603_ == 0)
{
v___x_4597_ = v_v_4576_;
v_isShared_4598_ = v_isSharedCheck_4603_;
goto v_resetjp_4596_;
}
else
{
lean_inc(v_node_4595_);
lean_dec(v_v_4576_);
v___x_4597_ = lean_box(0);
v_isShared_4598_ = v_isSharedCheck_4603_;
goto v_resetjp_4596_;
}
v_resetjp_4596_:
{
lean_object* v___x_4599_; lean_object* v___x_4601_; 
lean_inc(v_f_4571_);
v___x_4599_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_4571_, v_node_4595_);
if (v_isShared_4598_ == 0)
{
lean_ctor_set(v___x_4597_, 0, v___x_4599_);
v___x_4601_ = v___x_4597_;
goto v_reusejp_4600_;
}
else
{
lean_object* v_reuseFailAlloc_4602_; 
v_reuseFailAlloc_4602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4602_, 0, v___x_4599_);
v___x_4601_ = v_reuseFailAlloc_4602_;
goto v_reusejp_4600_;
}
v_reusejp_4600_:
{
v___y_4580_ = v___x_4601_;
goto v___jp_4579_;
}
}
}
default: 
{
lean_object* v___x_4604_; 
v___x_4604_ = lean_box(2);
v___y_4580_ = v___x_4604_;
goto v___jp_4579_;
}
}
v___jp_4579_:
{
size_t v___x_4581_; size_t v___x_4582_; lean_object* v___x_4583_; 
v___x_4581_ = ((size_t)1ULL);
v___x_4582_ = lean_usize_add(v_i_4573_, v___x_4581_);
v___x_4583_ = lean_array_uset(v_bs_x27_4578_, v_i_4573_, v___y_4580_);
v_i_4573_ = v___x_4582_;
v_bs_4574_ = v___x_4583_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(lean_object* v_f_4605_, lean_object* v_n_4606_){
_start:
{
if (lean_obj_tag(v_n_4606_) == 0)
{
lean_object* v_es_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4617_; 
v_es_4607_ = lean_ctor_get(v_n_4606_, 0);
v_isSharedCheck_4617_ = !lean_is_exclusive(v_n_4606_);
if (v_isSharedCheck_4617_ == 0)
{
v___x_4609_ = v_n_4606_;
v_isShared_4610_ = v_isSharedCheck_4617_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_es_4607_);
lean_dec(v_n_4606_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4617_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
size_t v_sz_4611_; size_t v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4615_; 
v_sz_4611_ = lean_array_size(v_es_4607_);
v___x_4612_ = ((size_t)0ULL);
v___x_4613_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(v_f_4605_, v_sz_4611_, v___x_4612_, v_es_4607_);
if (v_isShared_4610_ == 0)
{
lean_ctor_set(v___x_4609_, 0, v___x_4613_);
v___x_4615_ = v___x_4609_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v___x_4613_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
return v___x_4615_;
}
}
}
else
{
lean_object* v_ks_4618_; lean_object* v_vs_4619_; lean_object* v___x_4621_; uint8_t v_isShared_4622_; uint8_t v_isSharedCheck_4627_; 
v_ks_4618_ = lean_ctor_get(v_n_4606_, 0);
v_vs_4619_ = lean_ctor_get(v_n_4606_, 1);
v_isSharedCheck_4627_ = !lean_is_exclusive(v_n_4606_);
if (v_isSharedCheck_4627_ == 0)
{
v___x_4621_ = v_n_4606_;
v_isShared_4622_ = v_isSharedCheck_4627_;
goto v_resetjp_4620_;
}
else
{
lean_inc(v_vs_4619_);
lean_inc(v_ks_4618_);
lean_dec(v_n_4606_);
v___x_4621_ = lean_box(0);
v_isShared_4622_ = v_isSharedCheck_4627_;
goto v_resetjp_4620_;
}
v_resetjp_4620_:
{
lean_object* v_val_4623_; lean_object* v___x_4625_; 
v_val_4623_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4605_, v_vs_4619_);
lean_dec_ref(v_vs_4619_);
if (v_isShared_4622_ == 0)
{
lean_ctor_set(v___x_4621_, 1, v_val_4623_);
v___x_4625_ = v___x_4621_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v_ks_4618_);
lean_ctor_set(v_reuseFailAlloc_4626_, 1, v_val_4623_);
v___x_4625_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
return v___x_4625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_4628_, lean_object* v_sz_4629_, lean_object* v_i_4630_, lean_object* v_bs_4631_){
_start:
{
size_t v_sz_boxed_4632_; size_t v_i_boxed_4633_; lean_object* v_res_4634_; 
v_sz_boxed_4632_ = lean_unbox_usize(v_sz_4629_);
lean_dec(v_sz_4629_);
v_i_boxed_4633_ = lean_unbox_usize(v_i_4630_);
lean_dec(v_i_4630_);
v_res_4634_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(v_f_4628_, v_sz_boxed_4632_, v_i_boxed_4633_, v_bs_4631_);
return v_res_4634_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(lean_object* v_pm_4635_, lean_object* v_f_4636_){
_start:
{
lean_object* v___f_4637_; lean_object* v___x_4638_; 
v___f_4637_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4637_, 0, v_f_4636_);
v___x_4638_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v___f_4637_, v_pm_4635_);
return v___x_4638_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId(lean_object* v_fvarId_4639_, lean_object* v_e_4640_, lean_object* v_lctx_4641_){
_start:
{
lean_object* v_lctx_4642_; lean_object* v_fvarIdToDecl_4643_; lean_object* v_decls_4644_; lean_object* v_auxDeclToFullName_4645_; lean_object* v___x_4647_; uint8_t v_isShared_4648_; uint8_t v_isSharedCheck_4655_; 
v_lctx_4642_ = l_Lean_LocalContext_erase(v_lctx_4641_, v_fvarId_4639_);
v_fvarIdToDecl_4643_ = lean_ctor_get(v_lctx_4642_, 0);
v_decls_4644_ = lean_ctor_get(v_lctx_4642_, 1);
v_auxDeclToFullName_4645_ = lean_ctor_get(v_lctx_4642_, 2);
v_isSharedCheck_4655_ = !lean_is_exclusive(v_lctx_4642_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4647_ = v_lctx_4642_;
v_isShared_4648_ = v_isSharedCheck_4655_;
goto v_resetjp_4646_;
}
else
{
lean_inc(v_auxDeclToFullName_4645_);
lean_inc(v_decls_4644_);
lean_inc(v_fvarIdToDecl_4643_);
lean_dec(v_lctx_4642_);
v___x_4647_ = lean_box(0);
v_isShared_4648_ = v_isSharedCheck_4655_;
goto v_resetjp_4646_;
}
v_resetjp_4646_:
{
lean_object* v___f_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4653_; 
lean_inc_ref(v_e_4640_);
lean_inc(v_fvarId_4639_);
v___f_4649_ = lean_alloc_closure((void*)(l_Lean_LocalContext_replaceFVarId___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4649_, 0, v_fvarId_4639_);
lean_closure_set(v___f_4649_, 1, v_e_4640_);
v___x_4650_ = l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(v_fvarIdToDecl_4643_, v___f_4649_);
v___x_4651_ = l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(v_fvarId_4639_, v_e_4640_, v_decls_4644_);
lean_dec_ref(v_e_4640_);
if (v_isShared_4648_ == 0)
{
lean_ctor_set(v___x_4647_, 1, v___x_4651_);
lean_ctor_set(v___x_4647_, 0, v___x_4650_);
v___x_4653_ = v___x_4647_;
goto v_reusejp_4652_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v___x_4650_);
lean_ctor_set(v_reuseFailAlloc_4654_, 1, v___x_4651_);
lean_ctor_set(v_reuseFailAlloc_4654_, 2, v_auxDeclToFullName_4645_);
v___x_4653_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4652_;
}
v_reusejp_4652_:
{
return v___x_4653_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0(lean_object* v_00_u03b2_4656_, lean_object* v_00_u03c3_4657_, lean_object* v_pm_4658_, lean_object* v_f_4659_){
_start:
{
lean_object* v___x_4660_; 
v___x_4660_ = l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(v_pm_4658_, v_f_4659_);
return v___x_4660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0___redArg(lean_object* v_pm_4661_, lean_object* v_f_4662_){
_start:
{
lean_object* v___x_4663_; 
v___x_4663_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_4662_, v_pm_4661_);
return v___x_4663_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0(lean_object* v_00_u03b2_4664_, lean_object* v_00_u03c3_4665_, lean_object* v_pm_4666_, lean_object* v_f_4667_){
_start:
{
lean_object* v___x_4668_; 
v___x_4668_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_4667_, v_pm_4666_);
return v___x_4668_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4669_, lean_object* v_00_u03b2_4670_, lean_object* v_00_u03c3_4671_, lean_object* v_f_4672_, lean_object* v_n_4673_){
_start:
{
lean_object* v___x_4674_; 
v___x_4674_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_4672_, v_n_4673_);
return v___x_4674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_4675_, lean_object* v_00_u03b2_4676_, lean_object* v_00_u03c3_4677_, lean_object* v_f_4678_, size_t v_sz_4679_, size_t v_i_4680_, lean_object* v_bs_4681_){
_start:
{
lean_object* v___x_4682_; 
v___x_4682_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(v_f_4678_, v_sz_4679_, v_i_4680_, v_bs_4681_);
return v___x_4682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4683_, lean_object* v_00_u03b2_4684_, lean_object* v_00_u03c3_4685_, lean_object* v_f_4686_, lean_object* v_sz_4687_, lean_object* v_i_4688_, lean_object* v_bs_4689_){
_start:
{
size_t v_sz_boxed_4690_; size_t v_i_boxed_4691_; lean_object* v_res_4692_; 
v_sz_boxed_4690_ = lean_unbox_usize(v_sz_4687_);
lean_dec(v_sz_4687_);
v_i_boxed_4691_ = lean_unbox_usize(v_i_4688_);
lean_dec(v_i_4688_);
v_res_4692_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3(v_00_u03b1_4683_, v_00_u03b2_4684_, v_00_u03c3_4685_, v_f_4686_, v_sz_boxed_4690_, v_i_boxed_4691_, v_bs_4689_);
return v_res_4692_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_4693_, lean_object* v_00_u03b2_4694_, lean_object* v_f_4695_, lean_object* v_as_4696_){
_start:
{
lean_object* v___x_4697_; 
v___x_4697_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4695_, v_as_4696_);
return v___x_4697_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_4698_, lean_object* v_00_u03b2_4699_, lean_object* v_f_4700_, lean_object* v_as_4701_){
_start:
{
lean_object* v_res_4702_; 
v_res_4702_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_4698_, v_00_u03b2_4699_, v_f_4700_, v_as_4701_);
lean_dec_ref(v_as_4701_);
return v_res_4702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object* v_00_u03b1_4703_, lean_object* v_00_u03b2_4704_, lean_object* v_f_4705_, lean_object* v_as_4706_, lean_object* v_i_4707_, lean_object* v_acc_4708_, lean_object* v_hle_4709_){
_start:
{
lean_object* v___x_4710_; 
v___x_4710_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_f_4705_, v_as_4706_, v_i_4707_, v_acc_4708_);
return v___x_4710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___boxed(lean_object* v_00_u03b1_4711_, lean_object* v_00_u03b2_4712_, lean_object* v_f_4713_, lean_object* v_as_4714_, lean_object* v_i_4715_, lean_object* v_acc_4716_, lean_object* v_hle_4717_){
_start:
{
lean_object* v_res_4718_; 
v_res_4718_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7(v_00_u03b1_4711_, v_00_u03b2_4712_, v_f_4713_, v_as_4714_, v_i_4715_, v_acc_4716_, v_hle_4717_);
lean_dec_ref(v_as_4714_);
return v_res_4718_;
}
}
lean_object* runtime_initialize_Init_Data_Nat_Control(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_PersistentArray(uint8_t builtin);
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_LocalContext(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Nat_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedLocalDeclKind_default = _init_l_Lean_instInhabitedLocalDeclKind_default();
l_Lean_instInhabitedLocalDeclKind = _init_l_Lean_instInhabitedLocalDeclKind();
l_Lean_instInhabitedLocalDecl_default = _init_l_Lean_instInhabitedLocalDecl_default();
lean_mark_persistent(l_Lean_instInhabitedLocalDecl_default);
l_Lean_instInhabitedLocalDecl = _init_l_Lean_instInhabitedLocalDecl();
lean_mark_persistent(l_Lean_instInhabitedLocalDecl);
l_Lean_instInhabitedLocalContext_default = _init_l_Lean_instInhabitedLocalContext_default();
lean_mark_persistent(l_Lean_instInhabitedLocalContext_default);
l_Lean_instInhabitedLocalContext = _init_l_Lean_instInhabitedLocalContext();
lean_mark_persistent(l_Lean_instInhabitedLocalContext);
l_Lean_LocalContext_empty = _init_l_Lean_LocalContext_empty();
lean_mark_persistent(l_Lean_LocalContext_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_LocalContext(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Nat_Control(uint8_t builtin);
lean_object* initialize_Lean_Data_PersistentArray(uint8_t builtin);
lean_object* initialize_Lean_Expr(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_LocalContext(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Nat_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_PersistentArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LocalContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_LocalContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_LocalContext(builtin);
}
#ifdef __cplusplus
}
#endif
