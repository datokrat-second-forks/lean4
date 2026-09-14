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
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_pop___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
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
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_sanitizeName(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_foldRev___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getSanitizeNames(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_FVarIdSet_erase_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx___boxed(lean_object*);
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
static lean_once_cell_t l_Lean_LocalDecl_isAuxDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_isAuxDecl___closed__0;
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isAuxDecl___boxed(lean_object*);
static lean_once_cell_t l_Lean_LocalDecl_isImplementationDetail___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_isImplementationDetail___closed__0;
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
LEAN_EXPORT uint8_t lean_local_ctx_is_empty(lean_object*);
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
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lean_LocalDeclKind_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_LocalDeclKind_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lean_LocalDeclKind_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg(lean_object* v_default_23_){
_start:
{
lean_inc(v_default_23_);
return v_default_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg___boxed(lean_object* v_default_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_LocalDeclKind_default_elim___redArg(v_default_24_);
lean_dec(v_default_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_default_29_){
_start:
{
lean_inc(v_default_29_);
return v_default_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_default_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lean_LocalDeclKind_default_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_default_33_);
lean_dec(v_default_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg(lean_object* v_implDetail_36_){
_start:
{
lean_inc(v_implDetail_36_);
return v_implDetail_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg___boxed(lean_object* v_implDetail_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_LocalDeclKind_implDetail_elim___redArg(v_implDetail_37_);
lean_dec(v_implDetail_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_implDetail_42_){
_start:
{
lean_inc(v_implDetail_42_);
return v_implDetail_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_implDetail_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lean_LocalDeclKind_implDetail_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_implDetail_46_);
lean_dec(v_implDetail_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg(lean_object* v_auxDecl_49_){
_start:
{
lean_inc(v_auxDecl_49_);
return v_auxDecl_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg___boxed(lean_object* v_auxDecl_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_LocalDeclKind_auxDecl_elim___redArg(v_auxDecl_50_);
lean_dec(v_auxDecl_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_auxDecl_55_){
_start:
{
lean_inc(v_auxDecl_55_);
return v_auxDecl_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_auxDecl_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lean_LocalDeclKind_auxDecl_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_auxDecl_59_);
lean_dec(v_auxDecl_59_);
return v_res_61_;
}
}
static uint8_t _init_l_Lean_instInhabitedLocalDeclKind_default(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
static uint8_t _init_l_Lean_instInhabitedLocalDeclKind(void){
_start:
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
}
static lean_object* _init_l_Lean_instReprLocalDeclKind_repr___closed__6(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = lean_unsigned_to_nat(2u);
v___x_74_ = lean_nat_to_int(v___x_73_);
return v___x_74_;
}
}
static lean_object* _init_l_Lean_instReprLocalDeclKind_repr___closed__7(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_unsigned_to_nat(1u);
v___x_76_ = lean_nat_to_int(v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr(uint8_t v_x_77_, lean_object* v_prec_78_){
_start:
{
lean_object* v___y_80_; lean_object* v___y_87_; lean_object* v___y_94_; 
switch(v_x_77_)
{
case 0:
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = lean_unsigned_to_nat(1024u);
v___x_101_ = lean_nat_dec_le(v___x_100_, v_prec_78_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__6, &l_Lean_instReprLocalDeclKind_repr___closed__6_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__6);
v___y_80_ = v___x_102_;
goto v___jp_79_;
}
else
{
lean_object* v___x_103_; 
v___x_103_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__7, &l_Lean_instReprLocalDeclKind_repr___closed__7_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__7);
v___y_80_ = v___x_103_;
goto v___jp_79_;
}
}
case 1:
{
lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_104_ = lean_unsigned_to_nat(1024u);
v___x_105_ = lean_nat_dec_le(v___x_104_, v_prec_78_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__6, &l_Lean_instReprLocalDeclKind_repr___closed__6_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__6);
v___y_87_ = v___x_106_;
goto v___jp_86_;
}
else
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__7, &l_Lean_instReprLocalDeclKind_repr___closed__7_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__7);
v___y_87_ = v___x_107_;
goto v___jp_86_;
}
}
default: 
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = lean_unsigned_to_nat(1024u);
v___x_109_ = lean_nat_dec_le(v___x_108_, v_prec_78_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__6, &l_Lean_instReprLocalDeclKind_repr___closed__6_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__6);
v___y_94_ = v___x_110_;
goto v___jp_93_;
}
else
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__7, &l_Lean_instReprLocalDeclKind_repr___closed__7_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__7);
v___y_94_ = v___x_111_;
goto v___jp_93_;
}
}
}
v___jp_79_:
{
lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_81_ = ((lean_object*)(l_Lean_instReprLocalDeclKind_repr___closed__1));
lean_inc(v___y_80_);
v___x_82_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_82_, 0, v___y_80_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = 0;
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_83_);
v___x_85_ = l_Repr_addAppParen(v___x_84_, v_prec_78_);
return v___x_85_;
}
v___jp_86_:
{
lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_88_ = ((lean_object*)(l_Lean_instReprLocalDeclKind_repr___closed__3));
lean_inc(v___y_87_);
v___x_89_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_89_, 0, v___y_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = 0;
v___x_91_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set_uint8(v___x_91_, sizeof(void*)*1, v___x_90_);
v___x_92_ = l_Repr_addAppParen(v___x_91_, v_prec_78_);
return v___x_92_;
}
v___jp_93_:
{
lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_95_ = ((lean_object*)(l_Lean_instReprLocalDeclKind_repr___closed__5));
lean_inc(v___y_94_);
v___x_96_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_96_, 0, v___y_94_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = 0;
v___x_98_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_98_, 0, v___x_96_);
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*1, v___x_97_);
v___x_99_ = l_Repr_addAppParen(v___x_98_, v_prec_78_);
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr___boxed(lean_object* v_x_112_, lean_object* v_prec_113_){
_start:
{
uint8_t v_x_171__boxed_114_; lean_object* v_res_115_; 
v_x_171__boxed_114_ = lean_unbox(v_x_112_);
v_res_115_ = l_Lean_instReprLocalDeclKind_repr(v_x_171__boxed_114_, v_prec_113_);
lean_dec(v_prec_113_);
return v_res_115_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDeclKind_ofNat(lean_object* v_n_118_){
_start:
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_nat_dec_le(v_n_118_, v___x_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_nat_dec_le(v_n_118_, v___x_121_);
if (v___x_122_ == 0)
{
uint8_t v___x_123_; 
v___x_123_ = 2;
return v___x_123_;
}
else
{
uint8_t v___x_124_; 
v___x_124_ = 1;
return v___x_124_;
}
}
else
{
uint8_t v___x_125_; 
v___x_125_ = 0;
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ofNat___boxed(lean_object* v_n_126_){
_start:
{
uint8_t v_res_127_; lean_object* v_r_128_; 
v_res_127_ = l_Lean_LocalDeclKind_ofNat(v_n_126_);
lean_dec(v_n_126_);
v_r_128_ = lean_box(v_res_127_);
return v_r_128_;
}
}
LEAN_EXPORT uint8_t l_Lean_instDecidableEqLocalDeclKind(uint8_t v_x_129_, uint8_t v_y_130_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_131_ = l_Lean_LocalDeclKind_ctorIdx(v_x_129_);
v___x_132_ = l_Lean_LocalDeclKind_ctorIdx(v_y_130_);
v___x_133_ = lean_nat_dec_eq(v___x_131_, v___x_132_);
lean_dec(v___x_132_);
lean_dec(v___x_131_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_instDecidableEqLocalDeclKind___boxed(lean_object* v_x_134_, lean_object* v_y_135_){
_start:
{
uint8_t v_x_20__boxed_136_; uint8_t v_y_21__boxed_137_; uint8_t v_res_138_; lean_object* v_r_139_; 
v_x_20__boxed_136_ = lean_unbox(v_x_134_);
v_y_21__boxed_137_ = lean_unbox(v_y_135_);
v_res_138_ = l_Lean_instDecidableEqLocalDeclKind(v_x_20__boxed_136_, v_y_21__boxed_137_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableLocalDeclKind_hash(uint8_t v_x_140_){
_start:
{
switch(v_x_140_)
{
case 0:
{
uint64_t v___x_141_; 
v___x_141_ = 0ULL;
return v___x_141_;
}
case 1:
{
uint64_t v___x_142_; 
v___x_142_ = 1ULL;
return v___x_142_;
}
default: 
{
uint64_t v___x_143_; 
v___x_143_ = 2ULL;
return v___x_143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableLocalDeclKind_hash___boxed(lean_object* v_x_144_){
_start:
{
uint8_t v_x_40__boxed_145_; uint64_t v_res_146_; lean_object* v_r_147_; 
v_x_40__boxed_145_ = lean_unbox(v_x_144_);
v_res_146_ = l_Lean_instHashableLocalDeclKind_hash(v_x_40__boxed_145_);
v_r_147_ = lean_box_uint64(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx(lean_object* v_x_150_){
_start:
{
if (lean_obj_tag(v_x_150_) == 0)
{
lean_object* v___x_151_; 
v___x_151_ = lean_unsigned_to_nat(0u);
return v___x_151_;
}
else
{
lean_object* v___x_152_; 
v___x_152_ = lean_unsigned_to_nat(1u);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx___boxed(lean_object* v_x_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lean_LocalDecl_ctorIdx(v_x_153_);
lean_dec_ref(v_x_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___redArg(lean_object* v_t_155_, lean_object* v_k_156_){
_start:
{
if (lean_obj_tag(v_t_155_) == 0)
{
lean_object* v_index_157_; lean_object* v_fvarId_158_; lean_object* v_userName_159_; lean_object* v_type_160_; uint8_t v_bi_161_; uint8_t v_kind_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v_index_157_ = lean_ctor_get(v_t_155_, 0);
lean_inc(v_index_157_);
v_fvarId_158_ = lean_ctor_get(v_t_155_, 1);
lean_inc(v_fvarId_158_);
v_userName_159_ = lean_ctor_get(v_t_155_, 2);
lean_inc(v_userName_159_);
v_type_160_ = lean_ctor_get(v_t_155_, 3);
lean_inc_ref(v_type_160_);
v_bi_161_ = lean_ctor_get_uint8(v_t_155_, sizeof(void*)*4);
v_kind_162_ = lean_ctor_get_uint8(v_t_155_, sizeof(void*)*4 + 1);
lean_dec_ref_known(v_t_155_, 4);
v___x_163_ = lean_box(v_bi_161_);
v___x_164_ = lean_box(v_kind_162_);
v___x_165_ = lean_apply_6(v_k_156_, v_index_157_, v_fvarId_158_, v_userName_159_, v_type_160_, v___x_163_, v___x_164_);
return v___x_165_;
}
else
{
lean_object* v_index_166_; lean_object* v_fvarId_167_; lean_object* v_userName_168_; lean_object* v_type_169_; lean_object* v_value_170_; uint8_t v_nondep_171_; uint8_t v_kind_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_index_166_ = lean_ctor_get(v_t_155_, 0);
lean_inc(v_index_166_);
v_fvarId_167_ = lean_ctor_get(v_t_155_, 1);
lean_inc(v_fvarId_167_);
v_userName_168_ = lean_ctor_get(v_t_155_, 2);
lean_inc(v_userName_168_);
v_type_169_ = lean_ctor_get(v_t_155_, 3);
lean_inc_ref(v_type_169_);
v_value_170_ = lean_ctor_get(v_t_155_, 4);
lean_inc_ref(v_value_170_);
v_nondep_171_ = lean_ctor_get_uint8(v_t_155_, sizeof(void*)*5);
v_kind_172_ = lean_ctor_get_uint8(v_t_155_, sizeof(void*)*5 + 1);
lean_dec_ref_known(v_t_155_, 5);
v___x_173_ = lean_box(v_nondep_171_);
v___x_174_ = lean_box(v_kind_172_);
v___x_175_ = lean_apply_7(v_k_156_, v_index_166_, v_fvarId_167_, v_userName_168_, v_type_169_, v_value_170_, v___x_173_, v___x_174_);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim(lean_object* v_motive_176_, lean_object* v_ctorIdx_177_, lean_object* v_t_178_, lean_object* v_h_179_, lean_object* v_k_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_178_, v_k_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___boxed(lean_object* v_motive_182_, lean_object* v_ctorIdx_183_, lean_object* v_t_184_, lean_object* v_h_185_, lean_object* v_k_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_LocalDecl_ctorElim(v_motive_182_, v_ctorIdx_183_, v_t_184_, v_h_185_, v_k_186_);
lean_dec(v_ctorIdx_183_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim___redArg(lean_object* v_t_188_, lean_object* v_cdecl_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_188_, v_cdecl_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim(lean_object* v_motive_191_, lean_object* v_t_192_, lean_object* v_h_193_, lean_object* v_cdecl_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_192_, v_cdecl_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim___redArg(lean_object* v_t_196_, lean_object* v_ldecl_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_196_, v_ldecl_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim(lean_object* v_motive_199_, lean_object* v_t_200_, lean_object* v_h_201_, lean_object* v_ldecl_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_200_, v_ldecl_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default___closed__2(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = lean_box(0);
v___x_208_ = ((lean_object*)(l_Lean_instInhabitedLocalDecl_default___closed__1));
v___x_209_ = l_Lean_Expr_const___override(v___x_208_, v___x_207_);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default___closed__3(void){
_start:
{
uint8_t v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_210_ = 0;
v___x_211_ = 0;
v___x_212_ = lean_obj_once(&l_Lean_instInhabitedLocalDecl_default___closed__2, &l_Lean_instInhabitedLocalDecl_default___closed__2_once, _init_l_Lean_instInhabitedLocalDecl_default___closed__2);
v___x_213_ = lean_box(0);
v___x_214_ = lean_unsigned_to_nat(0u);
v___x_215_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___x_213_);
lean_ctor_set(v___x_215_, 2, v___x_213_);
lean_ctor_set(v___x_215_, 3, v___x_212_);
lean_ctor_set_uint8(v___x_215_, sizeof(void*)*4, v___x_211_);
lean_ctor_set_uint8(v___x_215_, sizeof(void*)*4 + 1, v___x_210_);
return v___x_215_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default(void){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lean_obj_once(&l_Lean_instInhabitedLocalDecl_default___closed__3, &l_Lean_instInhabitedLocalDecl_default___closed__3_once, _init_l_Lean_instInhabitedLocalDecl_default___closed__3);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl(void){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_instInhabitedLocalDecl_default;
return v___x_217_;
}
}
LEAN_EXPORT lean_object* lean_mk_local_decl(lean_object* v_index_218_, lean_object* v_fvarId_219_, lean_object* v_userName_220_, lean_object* v_type_221_, uint8_t v_bi_222_){
_start:
{
uint8_t v___x_223_; lean_object* v___x_224_; 
v___x_223_ = 0;
v___x_224_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_224_, 0, v_index_218_);
lean_ctor_set(v___x_224_, 1, v_fvarId_219_);
lean_ctor_set(v___x_224_, 2, v_userName_220_);
lean_ctor_set(v___x_224_, 3, v_type_221_);
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*4, v_bi_222_);
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*4 + 1, v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLocalDeclEx___boxed(lean_object* v_index_225_, lean_object* v_fvarId_226_, lean_object* v_userName_227_, lean_object* v_type_228_, lean_object* v_bi_229_){
_start:
{
uint8_t v_bi_boxed_230_; lean_object* v_res_231_; 
v_bi_boxed_230_ = lean_unbox(v_bi_229_);
v_res_231_ = lean_mk_local_decl(v_index_225_, v_fvarId_226_, v_userName_227_, v_type_228_, v_bi_boxed_230_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* lean_mk_let_decl(lean_object* v_index_232_, lean_object* v_fvarId_233_, lean_object* v_userName_234_, lean_object* v_type_235_, lean_object* v_val_236_){
_start:
{
uint8_t v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; 
v___x_237_ = 0;
v___x_238_ = 0;
v___x_239_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v___x_239_, 0, v_index_232_);
lean_ctor_set(v___x_239_, 1, v_fvarId_233_);
lean_ctor_set(v___x_239_, 2, v_userName_234_);
lean_ctor_set(v___x_239_, 3, v_type_235_);
lean_ctor_set(v___x_239_, 4, v_val_236_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*5, v___x_237_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*5 + 1, v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT uint8_t lean_local_decl_binder_info(lean_object* v_x_240_){
_start:
{
if (lean_obj_tag(v_x_240_) == 0)
{
uint8_t v_bi_241_; 
v_bi_241_ = lean_ctor_get_uint8(v_x_240_, sizeof(void*)*4);
lean_dec_ref_known(v_x_240_, 4);
return v_bi_241_;
}
else
{
uint8_t v___x_242_; 
lean_dec_ref(v_x_240_);
v___x_242_ = 0;
return v___x_242_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfoEx___boxed(lean_object* v_x_243_){
_start:
{
uint8_t v_res_244_; lean_object* v_r_245_; 
v_res_244_ = lean_local_decl_binder_info(v_x_243_);
v_r_245_ = lean_box(v_res_244_);
return v_r_245_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isLet(lean_object* v_x_246_, uint8_t v_x_247_){
_start:
{
if (lean_obj_tag(v_x_246_) == 0)
{
uint8_t v___x_248_; 
v___x_248_ = 0;
return v___x_248_;
}
else
{
uint8_t v_nondep_249_; 
v_nondep_249_ = lean_ctor_get_uint8(v_x_246_, sizeof(void*)*5);
if (v_nondep_249_ == 0)
{
uint8_t v___x_250_; 
v___x_250_ = 1;
return v___x_250_;
}
else
{
return v_x_247_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isLet___boxed(lean_object* v_x_251_, lean_object* v_x_252_){
_start:
{
uint8_t v_x_53__boxed_253_; uint8_t v_res_254_; lean_object* v_r_255_; 
v_x_53__boxed_253_ = lean_unbox(v_x_252_);
v_res_254_ = l_Lean_LocalDecl_isLet(v_x_251_, v_x_53__boxed_253_);
lean_dec_ref(v_x_251_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index(lean_object* v_x_256_){
_start:
{
lean_object* v_index_257_; 
v_index_257_ = lean_ctor_get(v_x_256_, 0);
lean_inc(v_index_257_);
return v_index_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index___boxed(lean_object* v_x_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Lean_LocalDecl_index(v_x_258_);
lean_dec_ref(v_x_258_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setIndex(lean_object* v_x_260_, lean_object* v_x_261_){
_start:
{
if (lean_obj_tag(v_x_260_) == 0)
{
lean_object* v_fvarId_262_; lean_object* v_userName_263_; lean_object* v_type_264_; uint8_t v_bi_265_; uint8_t v_kind_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_273_; 
v_fvarId_262_ = lean_ctor_get(v_x_260_, 1);
v_userName_263_ = lean_ctor_get(v_x_260_, 2);
v_type_264_ = lean_ctor_get(v_x_260_, 3);
v_bi_265_ = lean_ctor_get_uint8(v_x_260_, sizeof(void*)*4);
v_kind_266_ = lean_ctor_get_uint8(v_x_260_, sizeof(void*)*4 + 1);
v_isSharedCheck_273_ = !lean_is_exclusive(v_x_260_);
if (v_isSharedCheck_273_ == 0)
{
lean_object* v_unused_274_; 
v_unused_274_ = lean_ctor_get(v_x_260_, 0);
lean_dec(v_unused_274_);
v___x_268_ = v_x_260_;
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_type_264_);
lean_inc(v_userName_263_);
lean_inc(v_fvarId_262_);
lean_dec(v_x_260_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_271_; 
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 0, v_x_261_);
v___x_271_ = v___x_268_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_x_261_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_fvarId_262_);
lean_ctor_set(v_reuseFailAlloc_272_, 2, v_userName_263_);
lean_ctor_set(v_reuseFailAlloc_272_, 3, v_type_264_);
lean_ctor_set_uint8(v_reuseFailAlloc_272_, sizeof(void*)*4, v_bi_265_);
lean_ctor_set_uint8(v_reuseFailAlloc_272_, sizeof(void*)*4 + 1, v_kind_266_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
else
{
lean_object* v_fvarId_275_; lean_object* v_userName_276_; lean_object* v_type_277_; lean_object* v_value_278_; uint8_t v_nondep_279_; uint8_t v_kind_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_287_; 
v_fvarId_275_ = lean_ctor_get(v_x_260_, 1);
v_userName_276_ = lean_ctor_get(v_x_260_, 2);
v_type_277_ = lean_ctor_get(v_x_260_, 3);
v_value_278_ = lean_ctor_get(v_x_260_, 4);
v_nondep_279_ = lean_ctor_get_uint8(v_x_260_, sizeof(void*)*5);
v_kind_280_ = lean_ctor_get_uint8(v_x_260_, sizeof(void*)*5 + 1);
v_isSharedCheck_287_ = !lean_is_exclusive(v_x_260_);
if (v_isSharedCheck_287_ == 0)
{
lean_object* v_unused_288_; 
v_unused_288_ = lean_ctor_get(v_x_260_, 0);
lean_dec(v_unused_288_);
v___x_282_ = v_x_260_;
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_value_278_);
lean_inc(v_type_277_);
lean_inc(v_userName_276_);
lean_inc(v_fvarId_275_);
lean_dec(v_x_260_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_285_; 
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v_x_261_);
v___x_285_ = v___x_282_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_x_261_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_fvarId_275_);
lean_ctor_set(v_reuseFailAlloc_286_, 2, v_userName_276_);
lean_ctor_set(v_reuseFailAlloc_286_, 3, v_type_277_);
lean_ctor_set(v_reuseFailAlloc_286_, 4, v_value_278_);
lean_ctor_set_uint8(v_reuseFailAlloc_286_, sizeof(void*)*5, v_nondep_279_);
lean_ctor_set_uint8(v_reuseFailAlloc_286_, sizeof(void*)*5 + 1, v_kind_280_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId(lean_object* v_x_289_){
_start:
{
lean_object* v_fvarId_290_; 
v_fvarId_290_ = lean_ctor_get(v_x_289_, 1);
lean_inc(v_fvarId_290_);
return v_fvarId_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId___boxed(lean_object* v_x_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_LocalDecl_fvarId(v_x_291_);
lean_dec_ref(v_x_291_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName(lean_object* v_x_293_){
_start:
{
lean_object* v_userName_294_; 
v_userName_294_ = lean_ctor_get(v_x_293_, 2);
lean_inc(v_userName_294_);
return v_userName_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName___boxed(lean_object* v_x_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lean_LocalDecl_userName(v_x_295_);
lean_dec_ref(v_x_295_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type(lean_object* v_x_297_){
_start:
{
lean_object* v_type_298_; 
v_type_298_ = lean_ctor_get(v_x_297_, 3);
lean_inc_ref(v_type_298_);
return v_type_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type___boxed(lean_object* v_x_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lean_LocalDecl_type(v_x_299_);
lean_dec_ref(v_x_299_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setType(lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
if (lean_obj_tag(v_x_301_) == 0)
{
lean_object* v_index_303_; lean_object* v_fvarId_304_; lean_object* v_userName_305_; uint8_t v_bi_306_; uint8_t v_kind_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_314_; 
v_index_303_ = lean_ctor_get(v_x_301_, 0);
v_fvarId_304_ = lean_ctor_get(v_x_301_, 1);
v_userName_305_ = lean_ctor_get(v_x_301_, 2);
v_bi_306_ = lean_ctor_get_uint8(v_x_301_, sizeof(void*)*4);
v_kind_307_ = lean_ctor_get_uint8(v_x_301_, sizeof(void*)*4 + 1);
v_isSharedCheck_314_ = !lean_is_exclusive(v_x_301_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; 
v_unused_315_ = lean_ctor_get(v_x_301_, 3);
lean_dec(v_unused_315_);
v___x_309_ = v_x_301_;
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_userName_305_);
lean_inc(v_fvarId_304_);
lean_inc(v_index_303_);
lean_dec(v_x_301_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 3, v_x_302_);
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_index_303_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_fvarId_304_);
lean_ctor_set(v_reuseFailAlloc_313_, 2, v_userName_305_);
lean_ctor_set(v_reuseFailAlloc_313_, 3, v_x_302_);
lean_ctor_set_uint8(v_reuseFailAlloc_313_, sizeof(void*)*4, v_bi_306_);
lean_ctor_set_uint8(v_reuseFailAlloc_313_, sizeof(void*)*4 + 1, v_kind_307_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
else
{
lean_object* v_index_316_; lean_object* v_fvarId_317_; lean_object* v_userName_318_; lean_object* v_value_319_; uint8_t v_nondep_320_; uint8_t v_kind_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
v_index_316_ = lean_ctor_get(v_x_301_, 0);
v_fvarId_317_ = lean_ctor_get(v_x_301_, 1);
v_userName_318_ = lean_ctor_get(v_x_301_, 2);
v_value_319_ = lean_ctor_get(v_x_301_, 4);
v_nondep_320_ = lean_ctor_get_uint8(v_x_301_, sizeof(void*)*5);
v_kind_321_ = lean_ctor_get_uint8(v_x_301_, sizeof(void*)*5 + 1);
v_isSharedCheck_328_ = !lean_is_exclusive(v_x_301_);
if (v_isSharedCheck_328_ == 0)
{
lean_object* v_unused_329_; 
v_unused_329_ = lean_ctor_get(v_x_301_, 3);
lean_dec(v_unused_329_);
v___x_323_ = v_x_301_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_value_319_);
lean_inc(v_userName_318_);
lean_inc(v_fvarId_317_);
lean_inc(v_index_316_);
lean_dec(v_x_301_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 3, v_x_302_);
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_index_316_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_fvarId_317_);
lean_ctor_set(v_reuseFailAlloc_327_, 2, v_userName_318_);
lean_ctor_set(v_reuseFailAlloc_327_, 3, v_x_302_);
lean_ctor_set(v_reuseFailAlloc_327_, 4, v_value_319_);
lean_ctor_set_uint8(v_reuseFailAlloc_327_, sizeof(void*)*5, v_nondep_320_);
lean_ctor_set_uint8(v_reuseFailAlloc_327_, sizeof(void*)*5 + 1, v_kind_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_binderInfo(lean_object* v_x_330_){
_start:
{
if (lean_obj_tag(v_x_330_) == 0)
{
uint8_t v_bi_331_; 
v_bi_331_ = lean_ctor_get_uint8(v_x_330_, sizeof(void*)*4);
return v_bi_331_;
}
else
{
uint8_t v___x_332_; 
v___x_332_ = 0;
return v___x_332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfo___boxed(lean_object* v_x_333_){
_start:
{
uint8_t v_res_334_; lean_object* v_r_335_; 
v_res_334_ = l_Lean_LocalDecl_binderInfo(v_x_333_);
lean_dec_ref(v_x_333_);
v_r_335_ = lean_box(v_res_334_);
return v_r_335_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_kind(lean_object* v_x_336_){
_start:
{
if (lean_obj_tag(v_x_336_) == 0)
{
uint8_t v_kind_337_; 
v_kind_337_ = lean_ctor_get_uint8(v_x_336_, sizeof(void*)*4 + 1);
return v_kind_337_;
}
else
{
uint8_t v_kind_338_; 
v_kind_338_ = lean_ctor_get_uint8(v_x_336_, sizeof(void*)*5 + 1);
return v_kind_338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_kind___boxed(lean_object* v_x_339_){
_start:
{
uint8_t v_res_340_; lean_object* v_r_341_; 
v_res_340_ = l_Lean_LocalDecl_kind(v_x_339_);
lean_dec_ref(v_x_339_);
v_r_341_ = lean_box(v_res_340_);
return v_r_341_;
}
}
static lean_object* _init_l_Lean_LocalDecl_isAuxDecl___closed__0(void){
_start:
{
uint8_t v___x_342_; lean_object* v___x_343_; 
v___x_342_ = 2;
v___x_343_ = l_Lean_LocalDeclKind_ctorIdx(v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object* v_d_344_){
_start:
{
uint8_t v___y_346_; 
if (lean_obj_tag(v_d_344_) == 0)
{
uint8_t v_kind_350_; 
v_kind_350_ = lean_ctor_get_uint8(v_d_344_, sizeof(void*)*4 + 1);
v___y_346_ = v_kind_350_;
goto v___jp_345_;
}
else
{
uint8_t v_kind_351_; 
v_kind_351_ = lean_ctor_get_uint8(v_d_344_, sizeof(void*)*5 + 1);
v___y_346_ = v_kind_351_;
goto v___jp_345_;
}
v___jp_345_:
{
lean_object* v___x_347_; lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_347_ = l_Lean_LocalDeclKind_ctorIdx(v___y_346_);
v___x_348_ = lean_obj_once(&l_Lean_LocalDecl_isAuxDecl___closed__0, &l_Lean_LocalDecl_isAuxDecl___closed__0_once, _init_l_Lean_LocalDecl_isAuxDecl___closed__0);
v___x_349_ = lean_nat_dec_eq(v___x_347_, v___x_348_);
lean_dec(v___x_347_);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isAuxDecl___boxed(lean_object* v_d_352_){
_start:
{
uint8_t v_res_353_; lean_object* v_r_354_; 
v_res_353_ = l_Lean_LocalDecl_isAuxDecl(v_d_352_);
lean_dec_ref(v_d_352_);
v_r_354_ = lean_box(v_res_353_);
return v_r_354_;
}
}
static lean_object* _init_l_Lean_LocalDecl_isImplementationDetail___closed__0(void){
_start:
{
uint8_t v___x_355_; lean_object* v___x_356_; 
v___x_355_ = 0;
v___x_356_ = l_Lean_LocalDeclKind_ctorIdx(v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object* v_d_357_){
_start:
{
uint8_t v___y_359_; 
if (lean_obj_tag(v_d_357_) == 0)
{
uint8_t v_kind_365_; 
v_kind_365_ = lean_ctor_get_uint8(v_d_357_, sizeof(void*)*4 + 1);
v___y_359_ = v_kind_365_;
goto v___jp_358_;
}
else
{
uint8_t v_kind_366_; 
v_kind_366_ = lean_ctor_get_uint8(v_d_357_, sizeof(void*)*5 + 1);
v___y_359_ = v_kind_366_;
goto v___jp_358_;
}
v___jp_358_:
{
lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_360_ = l_Lean_LocalDeclKind_ctorIdx(v___y_359_);
v___x_361_ = lean_obj_once(&l_Lean_LocalDecl_isImplementationDetail___closed__0, &l_Lean_LocalDecl_isImplementationDetail___closed__0_once, _init_l_Lean_LocalDecl_isImplementationDetail___closed__0);
v___x_362_ = lean_nat_dec_eq(v___x_360_, v___x_361_);
lean_dec(v___x_360_);
if (v___x_362_ == 0)
{
uint8_t v___x_363_; 
v___x_363_ = 1;
return v___x_363_;
}
else
{
uint8_t v___x_364_; 
v___x_364_ = 0;
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isImplementationDetail___boxed(lean_object* v_d_367_){
_start:
{
uint8_t v_res_368_; lean_object* v_r_369_; 
v_res_368_ = l_Lean_LocalDecl_isImplementationDetail(v_d_367_);
lean_dec_ref(v_d_367_);
v_r_369_ = lean_box(v_res_368_);
return v_r_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f(lean_object* v_x_370_, uint8_t v_x_371_){
_start:
{
if (lean_obj_tag(v_x_370_) == 1)
{
uint8_t v_nondep_372_; 
v_nondep_372_ = lean_ctor_get_uint8(v_x_370_, sizeof(void*)*5);
if (v_nondep_372_ == 0)
{
lean_object* v_value_373_; lean_object* v___x_374_; 
v_value_373_ = lean_ctor_get(v_x_370_, 4);
lean_inc_ref(v_value_373_);
v___x_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_374_, 0, v_value_373_);
return v___x_374_;
}
else
{
if (v_x_371_ == 1)
{
lean_object* v_value_375_; lean_object* v___x_376_; 
v_value_375_ = lean_ctor_get(v_x_370_, 4);
lean_inc_ref(v_value_375_);
v___x_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_376_, 0, v_value_375_);
return v___x_376_;
}
else
{
lean_object* v___x_377_; 
v___x_377_ = lean_box(0);
return v___x_377_;
}
}
}
else
{
lean_object* v___x_378_; 
v___x_378_ = lean_box(0);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f___boxed(lean_object* v_x_379_, lean_object* v_x_380_){
_start:
{
uint8_t v_x_47__boxed_381_; lean_object* v_res_382_; 
v_x_47__boxed_381_ = lean_unbox(v_x_380_);
v_res_382_ = l_Lean_LocalDecl_value_x3f(v_x_379_, v_x_47__boxed_381_);
lean_dec_ref(v_x_379_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_value_spec__0(lean_object* v_msg_383_){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = l_Lean_instInhabitedExpr;
v___x_385_ = lean_panic_fn_borrowed(v___x_384_, v_msg_383_);
return v___x_385_;
}
}
static lean_object* _init_l_Lean_LocalDecl_value___closed__3(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_389_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__2));
v___x_390_ = lean_unsigned_to_nat(54u);
v___x_391_ = lean_unsigned_to_nat(172u);
v___x_392_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__1));
v___x_393_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_394_ = l_mkPanicMessageWithDecl(v___x_393_, v___x_392_, v___x_391_, v___x_390_, v___x_389_);
return v___x_394_;
}
}
static lean_object* _init_l_Lean_LocalDecl_value___closed__5(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_396_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__4));
v___x_397_ = lean_unsigned_to_nat(54u);
v___x_398_ = lean_unsigned_to_nat(175u);
v___x_399_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__1));
v___x_400_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_401_ = l_mkPanicMessageWithDecl(v___x_400_, v___x_399_, v___x_398_, v___x_397_, v___x_396_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value(lean_object* v_x_402_, uint8_t v_x_403_){
_start:
{
if (lean_obj_tag(v_x_402_) == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_obj_once(&l_Lean_LocalDecl_value___closed__3, &l_Lean_LocalDecl_value___closed__3_once, _init_l_Lean_LocalDecl_value___closed__3);
v___x_405_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_404_);
return v___x_405_;
}
else
{
uint8_t v_nondep_406_; 
v_nondep_406_ = lean_ctor_get_uint8(v_x_402_, sizeof(void*)*5);
if (v_nondep_406_ == 0)
{
lean_object* v_value_407_; 
v_value_407_ = lean_ctor_get(v_x_402_, 4);
lean_inc_ref(v_value_407_);
return v_value_407_;
}
else
{
if (v_x_403_ == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_obj_once(&l_Lean_LocalDecl_value___closed__5, &l_Lean_LocalDecl_value___closed__5_once, _init_l_Lean_LocalDecl_value___closed__5);
v___x_409_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_408_);
return v___x_409_;
}
else
{
lean_object* v_value_410_; 
v_value_410_ = lean_ctor_get(v_x_402_, 4);
lean_inc_ref(v_value_410_);
return v_value_410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value___boxed(lean_object* v_x_411_, lean_object* v_x_412_){
_start:
{
uint8_t v_x_143__boxed_413_; lean_object* v_res_414_; 
v_x_143__boxed_413_ = lean_unbox(v_x_412_);
v_res_414_ = l_Lean_LocalDecl_value(v_x_411_, v_x_143__boxed_413_);
lean_dec_ref(v_x_411_);
return v_res_414_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasValue(lean_object* v_x_415_, uint8_t v_x_416_){
_start:
{
if (lean_obj_tag(v_x_415_) == 0)
{
uint8_t v___x_417_; 
v___x_417_ = 0;
return v___x_417_;
}
else
{
uint8_t v_nondep_418_; 
v_nondep_418_ = lean_ctor_get_uint8(v_x_415_, sizeof(void*)*5);
if (v_nondep_418_ == 0)
{
uint8_t v___x_419_; 
v___x_419_ = 1;
return v___x_419_;
}
else
{
return v_x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasValue___boxed(lean_object* v_x_420_, lean_object* v_x_421_){
_start:
{
uint8_t v_x_72__boxed_422_; uint8_t v_res_423_; lean_object* v_r_424_; 
v_x_72__boxed_422_ = lean_unbox(v_x_421_);
v_res_423_ = l_Lean_LocalDecl_hasValue(v_x_420_, v_x_72__boxed_422_);
lean_dec_ref(v_x_420_);
v_r_424_ = lean_box(v_res_423_);
return v_r_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setValue(lean_object* v_x_425_, lean_object* v_x_426_){
_start:
{
if (lean_obj_tag(v_x_425_) == 1)
{
lean_object* v_index_427_; lean_object* v_fvarId_428_; lean_object* v_userName_429_; lean_object* v_type_430_; uint8_t v_nondep_431_; uint8_t v_kind_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_index_427_ = lean_ctor_get(v_x_425_, 0);
v_fvarId_428_ = lean_ctor_get(v_x_425_, 1);
v_userName_429_ = lean_ctor_get(v_x_425_, 2);
v_type_430_ = lean_ctor_get(v_x_425_, 3);
v_nondep_431_ = lean_ctor_get_uint8(v_x_425_, sizeof(void*)*5);
v_kind_432_ = lean_ctor_get_uint8(v_x_425_, sizeof(void*)*5 + 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_439_ == 0)
{
lean_object* v_unused_440_; 
v_unused_440_ = lean_ctor_get(v_x_425_, 4);
lean_dec(v_unused_440_);
v___x_434_ = v_x_425_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_type_430_);
lean_inc(v_userName_429_);
lean_inc(v_fvarId_428_);
lean_inc(v_index_427_);
lean_dec(v_x_425_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 4, v_x_426_);
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_index_427_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_fvarId_428_);
lean_ctor_set(v_reuseFailAlloc_438_, 2, v_userName_429_);
lean_ctor_set(v_reuseFailAlloc_438_, 3, v_type_430_);
lean_ctor_set(v_reuseFailAlloc_438_, 4, v_x_426_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, sizeof(void*)*5, v_nondep_431_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, sizeof(void*)*5 + 1, v_kind_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
else
{
lean_dec_ref(v_x_426_);
return v_x_425_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep(lean_object* v_x_441_, uint8_t v_x_442_){
_start:
{
if (lean_obj_tag(v_x_441_) == 1)
{
lean_object* v_index_443_; lean_object* v_fvarId_444_; lean_object* v_userName_445_; lean_object* v_type_446_; lean_object* v_value_447_; uint8_t v_kind_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
v_index_443_ = lean_ctor_get(v_x_441_, 0);
v_fvarId_444_ = lean_ctor_get(v_x_441_, 1);
v_userName_445_ = lean_ctor_get(v_x_441_, 2);
v_type_446_ = lean_ctor_get(v_x_441_, 3);
v_value_447_ = lean_ctor_get(v_x_441_, 4);
v_kind_448_ = lean_ctor_get_uint8(v_x_441_, sizeof(void*)*5 + 1);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_441_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v_x_441_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_value_447_);
lean_inc(v_type_446_);
lean_inc(v_userName_445_);
lean_inc(v_fvarId_444_);
lean_inc(v_index_443_);
lean_dec(v_x_441_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_index_443_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_fvarId_444_);
lean_ctor_set(v_reuseFailAlloc_454_, 2, v_userName_445_);
lean_ctor_set(v_reuseFailAlloc_454_, 3, v_type_446_);
lean_ctor_set(v_reuseFailAlloc_454_, 4, v_value_447_);
lean_ctor_set_uint8(v_reuseFailAlloc_454_, sizeof(void*)*5 + 1, v_kind_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
lean_ctor_set_uint8(v___x_453_, sizeof(void*)*5, v_x_442_);
return v___x_453_;
}
}
}
else
{
return v_x_441_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep___boxed(lean_object* v_x_456_, lean_object* v_x_457_){
_start:
{
uint8_t v_x_23__boxed_458_; lean_object* v_res_459_; 
v_x_23__boxed_458_ = lean_unbox(v_x_457_);
v_res_459_ = l_Lean_LocalDecl_setNondep(v_x_456_, v_x_23__boxed_458_);
return v_res_459_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isNondep(lean_object* v_x_460_){
_start:
{
if (lean_obj_tag(v_x_460_) == 1)
{
uint8_t v_nondep_461_; 
v_nondep_461_ = lean_ctor_get_uint8(v_x_460_, sizeof(void*)*5);
return v_nondep_461_;
}
else
{
uint8_t v___x_462_; 
v___x_462_ = 0;
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isNondep___boxed(lean_object* v_x_463_){
_start:
{
uint8_t v_res_464_; lean_object* v_r_465_; 
v_res_464_ = l_Lean_LocalDecl_isNondep(v_x_463_);
lean_dec_ref(v_x_463_);
v_r_465_ = lean_box(v_res_464_);
return v_r_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setUserName(lean_object* v_x_466_, lean_object* v_x_467_){
_start:
{
if (lean_obj_tag(v_x_466_) == 0)
{
lean_object* v_index_468_; lean_object* v_fvarId_469_; lean_object* v_type_470_; uint8_t v_bi_471_; uint8_t v_kind_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
v_index_468_ = lean_ctor_get(v_x_466_, 0);
v_fvarId_469_ = lean_ctor_get(v_x_466_, 1);
v_type_470_ = lean_ctor_get(v_x_466_, 3);
v_bi_471_ = lean_ctor_get_uint8(v_x_466_, sizeof(void*)*4);
v_kind_472_ = lean_ctor_get_uint8(v_x_466_, sizeof(void*)*4 + 1);
v_isSharedCheck_479_ = !lean_is_exclusive(v_x_466_);
if (v_isSharedCheck_479_ == 0)
{
lean_object* v_unused_480_; 
v_unused_480_ = lean_ctor_get(v_x_466_, 2);
lean_dec(v_unused_480_);
v___x_474_ = v_x_466_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_type_470_);
lean_inc(v_fvarId_469_);
lean_inc(v_index_468_);
lean_dec(v_x_466_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 2, v_x_467_);
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_index_468_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_fvarId_469_);
lean_ctor_set(v_reuseFailAlloc_478_, 2, v_x_467_);
lean_ctor_set(v_reuseFailAlloc_478_, 3, v_type_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_478_, sizeof(void*)*4, v_bi_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_478_, sizeof(void*)*4 + 1, v_kind_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
else
{
lean_object* v_index_481_; lean_object* v_fvarId_482_; lean_object* v_type_483_; lean_object* v_value_484_; uint8_t v_nondep_485_; uint8_t v_kind_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
v_index_481_ = lean_ctor_get(v_x_466_, 0);
v_fvarId_482_ = lean_ctor_get(v_x_466_, 1);
v_type_483_ = lean_ctor_get(v_x_466_, 3);
v_value_484_ = lean_ctor_get(v_x_466_, 4);
v_nondep_485_ = lean_ctor_get_uint8(v_x_466_, sizeof(void*)*5);
v_kind_486_ = lean_ctor_get_uint8(v_x_466_, sizeof(void*)*5 + 1);
v_isSharedCheck_493_ = !lean_is_exclusive(v_x_466_);
if (v_isSharedCheck_493_ == 0)
{
lean_object* v_unused_494_; 
v_unused_494_ = lean_ctor_get(v_x_466_, 2);
lean_dec(v_unused_494_);
v___x_488_ = v_x_466_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_value_484_);
lean_inc(v_type_483_);
lean_inc(v_fvarId_482_);
lean_inc(v_index_481_);
lean_dec(v_x_466_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 2, v_x_467_);
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_index_481_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v_fvarId_482_);
lean_ctor_set(v_reuseFailAlloc_492_, 2, v_x_467_);
lean_ctor_set(v_reuseFailAlloc_492_, 3, v_type_483_);
lean_ctor_set(v_reuseFailAlloc_492_, 4, v_value_484_);
lean_ctor_set_uint8(v_reuseFailAlloc_492_, sizeof(void*)*5, v_nondep_485_);
lean_ctor_set_uint8(v_reuseFailAlloc_492_, sizeof(void*)*5 + 1, v_kind_486_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(lean_object* v_msg_495_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = l_Lean_instInhabitedLocalDecl_default;
v___x_497_ = lean_panic_fn_borrowed(v___x_496_, v_msg_495_);
return v___x_497_;
}
}
static lean_object* _init_l_Lean_LocalDecl_setBinderInfo___closed__2(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_500_ = ((lean_object*)(l_Lean_LocalDecl_setBinderInfo___closed__1));
v___x_501_ = lean_unsigned_to_nat(38u);
v___x_502_ = lean_unsigned_to_nat(237u);
v___x_503_ = ((lean_object*)(l_Lean_LocalDecl_setBinderInfo___closed__0));
v___x_504_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_505_ = l_mkPanicMessageWithDecl(v___x_504_, v___x_503_, v___x_502_, v___x_501_, v___x_500_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo(lean_object* v_x_506_, uint8_t v_x_507_){
_start:
{
if (lean_obj_tag(v_x_506_) == 0)
{
lean_object* v_index_508_; lean_object* v_fvarId_509_; lean_object* v_userName_510_; lean_object* v_type_511_; uint8_t v_kind_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
v_index_508_ = lean_ctor_get(v_x_506_, 0);
v_fvarId_509_ = lean_ctor_get(v_x_506_, 1);
v_userName_510_ = lean_ctor_get(v_x_506_, 2);
v_type_511_ = lean_ctor_get(v_x_506_, 3);
v_kind_512_ = lean_ctor_get_uint8(v_x_506_, sizeof(void*)*4 + 1);
v_isSharedCheck_519_ = !lean_is_exclusive(v_x_506_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v_x_506_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_type_511_);
lean_inc(v_userName_510_);
lean_inc(v_fvarId_509_);
lean_inc(v_index_508_);
lean_dec(v_x_506_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_index_508_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v_fvarId_509_);
lean_ctor_set(v_reuseFailAlloc_518_, 2, v_userName_510_);
lean_ctor_set(v_reuseFailAlloc_518_, 3, v_type_511_);
lean_ctor_set_uint8(v_reuseFailAlloc_518_, sizeof(void*)*4 + 1, v_kind_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
lean_ctor_set_uint8(v___x_517_, sizeof(void*)*4, v_x_507_);
return v___x_517_;
}
}
}
else
{
lean_object* v___x_520_; lean_object* v___x_521_; 
lean_dec_ref_known(v_x_506_, 5);
v___x_520_ = lean_obj_once(&l_Lean_LocalDecl_setBinderInfo___closed__2, &l_Lean_LocalDecl_setBinderInfo___closed__2_once, _init_l_Lean_LocalDecl_setBinderInfo___closed__2);
v___x_521_ = l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(v___x_520_);
return v___x_521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo___boxed(lean_object* v_x_522_, lean_object* v_x_523_){
_start:
{
uint8_t v_x_84__boxed_524_; lean_object* v_res_525_; 
v_x_84__boxed_524_ = lean_unbox(v_x_523_);
v_res_525_ = l_Lean_LocalDecl_setBinderInfo(v_x_522_, v_x_84__boxed_524_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_toExpr(lean_object* v_decl_526_){
_start:
{
lean_object* v_fvarId_527_; lean_object* v___x_528_; 
v_fvarId_527_ = lean_ctor_get(v_decl_526_, 1);
lean_inc(v_fvarId_527_);
lean_dec_ref(v_decl_526_);
v___x_528_ = l_Lean_mkFVar(v_fvarId_527_);
return v___x_528_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasExprMVar(lean_object* v_x_529_){
_start:
{
if (lean_obj_tag(v_x_529_) == 0)
{
lean_object* v_type_530_; uint8_t v___x_531_; 
v_type_530_ = lean_ctor_get(v_x_529_, 3);
v___x_531_ = l_Lean_Expr_hasExprMVar(v_type_530_);
return v___x_531_;
}
else
{
lean_object* v_type_532_; lean_object* v_value_533_; uint8_t v___x_534_; 
v_type_532_ = lean_ctor_get(v_x_529_, 3);
v_value_533_ = lean_ctor_get(v_x_529_, 4);
v___x_534_ = l_Lean_Expr_hasExprMVar(v_type_532_);
if (v___x_534_ == 0)
{
uint8_t v___x_535_; 
v___x_535_ = l_Lean_Expr_hasExprMVar(v_value_533_);
return v___x_535_;
}
else
{
return v___x_534_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasExprMVar___boxed(lean_object* v_x_536_){
_start:
{
uint8_t v_res_537_; lean_object* v_r_538_; 
v_res_537_ = l_Lean_LocalDecl_hasExprMVar(v_x_536_);
lean_dec_ref(v_x_536_);
v_r_538_ = lean_box(v_res_537_);
return v_r_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind(lean_object* v_x_539_, uint8_t v_x_540_){
_start:
{
if (lean_obj_tag(v_x_539_) == 0)
{
lean_object* v_index_541_; lean_object* v_fvarId_542_; lean_object* v_userName_543_; lean_object* v_type_544_; uint8_t v_bi_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_552_; 
v_index_541_ = lean_ctor_get(v_x_539_, 0);
v_fvarId_542_ = lean_ctor_get(v_x_539_, 1);
v_userName_543_ = lean_ctor_get(v_x_539_, 2);
v_type_544_ = lean_ctor_get(v_x_539_, 3);
v_bi_545_ = lean_ctor_get_uint8(v_x_539_, sizeof(void*)*4);
v_isSharedCheck_552_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_552_ == 0)
{
v___x_547_ = v_x_539_;
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_type_544_);
lean_inc(v_userName_543_);
lean_inc(v_fvarId_542_);
lean_inc(v_index_541_);
lean_dec(v_x_539_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_550_; 
if (v_isShared_548_ == 0)
{
v___x_550_ = v___x_547_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_index_541_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_fvarId_542_);
lean_ctor_set(v_reuseFailAlloc_551_, 2, v_userName_543_);
lean_ctor_set(v_reuseFailAlloc_551_, 3, v_type_544_);
lean_ctor_set_uint8(v_reuseFailAlloc_551_, sizeof(void*)*4, v_bi_545_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_ctor_set_uint8(v___x_550_, sizeof(void*)*4 + 1, v_x_540_);
return v___x_550_;
}
}
}
else
{
lean_object* v_index_553_; lean_object* v_fvarId_554_; lean_object* v_userName_555_; lean_object* v_type_556_; lean_object* v_value_557_; uint8_t v_nondep_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
v_index_553_ = lean_ctor_get(v_x_539_, 0);
v_fvarId_554_ = lean_ctor_get(v_x_539_, 1);
v_userName_555_ = lean_ctor_get(v_x_539_, 2);
v_type_556_ = lean_ctor_get(v_x_539_, 3);
v_value_557_ = lean_ctor_get(v_x_539_, 4);
v_nondep_558_ = lean_ctor_get_uint8(v_x_539_, sizeof(void*)*5);
v_isSharedCheck_565_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v_x_539_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_value_557_);
lean_inc(v_type_556_);
lean_inc(v_userName_555_);
lean_inc(v_fvarId_554_);
lean_inc(v_index_553_);
lean_dec(v_x_539_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_index_553_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_fvarId_554_);
lean_ctor_set(v_reuseFailAlloc_564_, 2, v_userName_555_);
lean_ctor_set(v_reuseFailAlloc_564_, 3, v_type_556_);
lean_ctor_set(v_reuseFailAlloc_564_, 4, v_value_557_);
lean_ctor_set_uint8(v_reuseFailAlloc_564_, sizeof(void*)*5, v_nondep_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
lean_ctor_set_uint8(v___x_563_, sizeof(void*)*5 + 1, v_x_540_);
return v___x_563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind___boxed(lean_object* v_x_566_, lean_object* v_x_567_){
_start:
{
uint8_t v_x_31__boxed_568_; lean_object* v_res_569_; 
v_x_31__boxed_568_ = lean_unbox(v_x_567_);
v_res_569_ = l_Lean_LocalDecl_setKind(v_x_566_, v_x_31__boxed_568_);
return v_res_569_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__0(void){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_570_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__1(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__0, &l_Lean_instInhabitedLocalContext_default___closed__0_once, _init_l_Lean_instInhabitedLocalContext_default___closed__0);
v___x_572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
return v___x_572_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__2(void){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_573_ = lean_unsigned_to_nat(32u);
v___x_574_ = lean_mk_empty_array_with_capacity(v___x_573_);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__3(void){
_start:
{
size_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_576_ = ((size_t)5ULL);
v___x_577_ = lean_unsigned_to_nat(0u);
v___x_578_ = lean_unsigned_to_nat(32u);
v___x_579_ = lean_mk_empty_array_with_capacity(v___x_578_);
v___x_580_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__2, &l_Lean_instInhabitedLocalContext_default___closed__2_once, _init_l_Lean_instInhabitedLocalContext_default___closed__2);
v___x_581_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_581_, 0, v___x_580_);
lean_ctor_set(v___x_581_, 1, v___x_579_);
lean_ctor_set(v___x_581_, 2, v___x_577_);
lean_ctor_set(v___x_581_, 3, v___x_577_);
lean_ctor_set_usize(v___x_581_, 4, v___x_576_);
return v___x_581_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__4(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_582_ = lean_box(1);
v___x_583_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__3, &l_Lean_instInhabitedLocalContext_default___closed__3_once, _init_l_Lean_instInhabitedLocalContext_default___closed__3);
v___x_584_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__1, &l_Lean_instInhabitedLocalContext_default___closed__1_once, _init_l_Lean_instInhabitedLocalContext_default___closed__1);
v___x_585_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
lean_ctor_set(v___x_585_, 1, v___x_583_);
lean_ctor_set(v___x_585_, 2, v___x_582_);
return v___x_585_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default(void){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__4, &l_Lean_instInhabitedLocalContext_default___closed__4_once, _init_l_Lean_instInhabitedLocalContext_default___closed__4);
return v___x_586_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext(void){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_instInhabitedLocalContext_default;
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg(){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_589_ = lean_unsigned_to_nat(32u);
v___x_590_ = lean_mk_empty_array_with_capacity(v___x_589_);
lean_dec_ref(v___x_590_);
v___x_591_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__4, &l_Lean_instInhabitedLocalContext_default___closed__4_once, _init_l_Lean_instInhabitedLocalContext_default___closed__4);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg___boxed(lean_object* v___dummy_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_LocalContext_mkEmpty___redArg();
return v_res_593_;
}
}
static lean_object* _init_l_Lean_LocalContext_mkEmpty___closed__0(void){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_LocalContext_mkEmpty___redArg();
return v___x_594_;
}
}
LEAN_EXPORT lean_object* lean_mk_empty_local_ctx(lean_object* v_x_595_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = lean_obj_once(&l_Lean_LocalContext_mkEmpty___closed__0, &l_Lean_LocalContext_mkEmpty___closed__0_once, _init_l_Lean_LocalContext_mkEmpty___closed__0);
return v___x_596_;
}
}
static lean_object* _init_l_Lean_LocalContext_empty(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_597_ = lean_unsigned_to_nat(32u);
v___x_598_ = lean_mk_empty_array_with_capacity(v___x_597_);
lean_dec_ref(v___x_598_);
v___x_599_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__4, &l_Lean_instInhabitedLocalContext_default___closed__4_once, _init_l_Lean_instInhabitedLocalContext_default___closed__4);
return v___x_599_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg(lean_object* v_x_600_){
_start:
{
uint8_t v___x_601_; 
v___x_601_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg___boxed(lean_object* v_x_602_){
_start:
{
uint8_t v_res_603_; lean_object* v_r_604_; 
v_res_603_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg(v_x_602_);
lean_dec_ref(v_x_602_);
v_r_604_ = lean_box(v_res_603_);
return v_r_604_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0(lean_object* v_00_u03b2_605_, lean_object* v_x_606_){
_start:
{
uint8_t v___x_607_; 
v___x_607_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___boxed(lean_object* v_00_u03b2_608_, lean_object* v_x_609_){
_start:
{
uint8_t v_res_610_; lean_object* v_r_611_; 
v_res_610_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0(v_00_u03b2_608_, v_x_609_);
lean_dec_ref(v_x_609_);
v_r_611_ = lean_box(v_res_610_);
return v_r_611_;
}
}
LEAN_EXPORT uint8_t lean_local_ctx_is_empty(lean_object* v_lctx_612_){
_start:
{
lean_object* v_fvarIdToDecl_613_; uint8_t v___x_614_; 
v_fvarIdToDecl_613_ = lean_ctor_get(v_lctx_612_, 0);
lean_inc_ref(v_fvarIdToDecl_613_);
lean_dec_ref(v_lctx_612_);
v___x_614_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_fvarIdToDecl_613_);
lean_dec_ref(v_fvarIdToDecl_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_isEmpty___boxed(lean_object* v_lctx_615_){
_start:
{
uint8_t v_res_616_; lean_object* v_r_617_; 
v_res_616_ = lean_local_ctx_is_empty(v_lctx_615_);
v_r_617_ = lean_box(v_res_616_);
return v_r_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_618_, lean_object* v_x_619_, lean_object* v_x_620_, lean_object* v_x_621_){
_start:
{
lean_object* v_ks_622_; lean_object* v_vs_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_647_; 
v_ks_622_ = lean_ctor_get(v_x_618_, 0);
v_vs_623_ = lean_ctor_get(v_x_618_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_x_618_);
if (v_isSharedCheck_647_ == 0)
{
v___x_625_ = v_x_618_;
v_isShared_626_ = v_isSharedCheck_647_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_vs_623_);
lean_inc(v_ks_622_);
lean_dec(v_x_618_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_647_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_627_; uint8_t v___x_628_; 
v___x_627_ = lean_array_get_size(v_ks_622_);
v___x_628_ = lean_nat_dec_lt(v_x_619_, v___x_627_);
if (v___x_628_ == 0)
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_632_; 
lean_dec(v_x_619_);
v___x_629_ = lean_array_push(v_ks_622_, v_x_620_);
v___x_630_ = lean_array_push(v_vs_623_, v_x_621_);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 1, v___x_630_);
lean_ctor_set(v___x_625_, 0, v___x_629_);
v___x_632_ = v___x_625_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v___x_630_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
else
{
lean_object* v_k_x27_634_; uint8_t v___x_635_; 
v_k_x27_634_ = lean_array_fget_borrowed(v_ks_622_, v_x_619_);
v___x_635_ = l_Lean_instBEqFVarId_beq(v_x_620_, v_k_x27_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_637_; 
if (v_isShared_626_ == 0)
{
v___x_637_ = v___x_625_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_ks_622_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_vs_623_);
v___x_637_ = v_reuseFailAlloc_641_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_unsigned_to_nat(1u);
v___x_639_ = lean_nat_add(v_x_619_, v___x_638_);
lean_dec(v_x_619_);
v_x_618_ = v___x_637_;
v_x_619_ = v___x_639_;
goto _start;
}
}
else
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_645_; 
v___x_642_ = lean_array_fset(v_ks_622_, v_x_619_, v_x_620_);
v___x_643_ = lean_array_fset(v_vs_623_, v_x_619_, v_x_621_);
lean_dec(v_x_619_);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 1, v___x_643_);
lean_ctor_set(v___x_625_, 0, v___x_642_);
v___x_645_ = v___x_625_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v___x_643_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(lean_object* v_n_648_, lean_object* v_k_649_, lean_object* v_v_650_){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_unsigned_to_nat(0u);
v___x_652_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(v_n_648_, v___x_651_, v_k_649_, v_v_650_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(lean_object* v_x_654_, size_t v_x_655_, size_t v_x_656_, lean_object* v_x_657_, lean_object* v_x_658_){
_start:
{
if (lean_obj_tag(v_x_654_) == 0)
{
lean_object* v_es_659_; size_t v___x_660_; size_t v___x_661_; lean_object* v_j_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v_es_659_ = lean_ctor_get(v_x_654_, 0);
v___x_660_ = ((size_t)31ULL);
v___x_661_ = lean_usize_land(v_x_655_, v___x_660_);
v_j_662_ = lean_usize_to_nat(v___x_661_);
v___x_663_ = lean_array_get_size(v_es_659_);
v___x_664_ = lean_nat_dec_lt(v_j_662_, v___x_663_);
if (v___x_664_ == 0)
{
lean_dec(v_j_662_);
lean_dec(v_x_658_);
lean_dec(v_x_657_);
return v_x_654_;
}
else
{
lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_703_; 
lean_inc_ref(v_es_659_);
v_isSharedCheck_703_ = !lean_is_exclusive(v_x_654_);
if (v_isSharedCheck_703_ == 0)
{
lean_object* v_unused_704_; 
v_unused_704_ = lean_ctor_get(v_x_654_, 0);
lean_dec(v_unused_704_);
v___x_666_ = v_x_654_;
v_isShared_667_ = v_isSharedCheck_703_;
goto v_resetjp_665_;
}
else
{
lean_dec(v_x_654_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_703_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v_v_668_; lean_object* v___x_669_; lean_object* v_xs_x27_670_; lean_object* v___y_672_; 
v_v_668_ = lean_array_fget(v_es_659_, v_j_662_);
v___x_669_ = lean_box(0);
v_xs_x27_670_ = lean_array_fset(v_es_659_, v_j_662_, v___x_669_);
switch(lean_obj_tag(v_v_668_))
{
case 0:
{
lean_object* v_key_677_; lean_object* v_val_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_688_; 
v_key_677_ = lean_ctor_get(v_v_668_, 0);
v_val_678_ = lean_ctor_get(v_v_668_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v_v_668_);
if (v_isSharedCheck_688_ == 0)
{
v___x_680_ = v_v_668_;
v_isShared_681_ = v_isSharedCheck_688_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_val_678_);
lean_inc(v_key_677_);
lean_dec(v_v_668_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_688_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
uint8_t v___x_682_; 
v___x_682_ = l_Lean_instBEqFVarId_beq(v_x_657_, v_key_677_);
if (v___x_682_ == 0)
{
lean_object* v___x_683_; lean_object* v___x_684_; 
lean_del_object(v___x_680_);
v___x_683_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_677_, v_val_678_, v_x_657_, v_x_658_);
v___x_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
v___y_672_ = v___x_684_;
goto v___jp_671_;
}
else
{
lean_object* v___x_686_; 
lean_dec(v_val_678_);
lean_dec(v_key_677_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 1, v_x_658_);
lean_ctor_set(v___x_680_, 0, v_x_657_);
v___x_686_ = v___x_680_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_x_657_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_x_658_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
v___y_672_ = v___x_686_;
goto v___jp_671_;
}
}
}
}
case 1:
{
lean_object* v_node_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_701_; 
v_node_689_ = lean_ctor_get(v_v_668_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v_v_668_);
if (v_isSharedCheck_701_ == 0)
{
v___x_691_ = v_v_668_;
v_isShared_692_ = v_isSharedCheck_701_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_node_689_);
lean_dec(v_v_668_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_701_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
size_t v___x_693_; size_t v___x_694_; size_t v___x_695_; size_t v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_693_ = ((size_t)5ULL);
v___x_694_ = lean_usize_shift_right(v_x_655_, v___x_693_);
v___x_695_ = ((size_t)1ULL);
v___x_696_ = lean_usize_add(v_x_656_, v___x_695_);
v___x_697_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_node_689_, v___x_694_, v___x_696_, v_x_657_, v_x_658_);
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 0, v___x_697_);
v___x_699_ = v___x_691_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
v___y_672_ = v___x_699_;
goto v___jp_671_;
}
}
}
default: 
{
lean_object* v___x_702_; 
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v_x_657_);
lean_ctor_set(v___x_702_, 1, v_x_658_);
v___y_672_ = v___x_702_;
goto v___jp_671_;
}
}
v___jp_671_:
{
lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_673_ = lean_array_fset(v_xs_x27_670_, v_j_662_, v___y_672_);
lean_dec(v_j_662_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_673_);
v___x_675_ = v___x_666_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_673_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
}
else
{
lean_object* v_ks_705_; lean_object* v_vs_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_724_; 
v_ks_705_ = lean_ctor_get(v_x_654_, 0);
v_vs_706_ = lean_ctor_get(v_x_654_, 1);
v_isSharedCheck_724_ = !lean_is_exclusive(v_x_654_);
if (v_isSharedCheck_724_ == 0)
{
v___x_708_ = v_x_654_;
v_isShared_709_ = v_isSharedCheck_724_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_vs_706_);
lean_inc(v_ks_705_);
lean_dec(v_x_654_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_724_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_711_; 
if (v_isShared_709_ == 0)
{
v___x_711_ = v___x_708_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_ks_705_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_vs_706_);
v___x_711_ = v_reuseFailAlloc_723_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
lean_object* v_newNode_712_; size_t v___x_713_; uint8_t v___x_714_; 
v_newNode_712_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(v___x_711_, v_x_657_, v_x_658_);
v___x_713_ = ((size_t)7ULL);
v___x_714_ = lean_usize_dec_le(v___x_713_, v_x_656_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_715_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_712_);
v___x_716_ = lean_unsigned_to_nat(4u);
v___x_717_ = lean_nat_dec_lt(v___x_715_, v___x_716_);
lean_dec(v___x_715_);
if (v___x_717_ == 0)
{
lean_object* v_ks_718_; lean_object* v_vs_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v_ks_718_ = lean_ctor_get(v_newNode_712_, 0);
lean_inc_ref(v_ks_718_);
v_vs_719_ = lean_ctor_get(v_newNode_712_, 1);
lean_inc_ref(v_vs_719_);
lean_dec_ref(v_newNode_712_);
v___x_720_ = lean_unsigned_to_nat(0u);
v___x_721_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0);
v___x_722_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(v_x_656_, v_ks_718_, v_vs_719_, v___x_720_, v___x_721_);
lean_dec_ref(v_vs_719_);
lean_dec_ref(v_ks_718_);
return v___x_722_;
}
else
{
return v_newNode_712_;
}
}
else
{
return v_newNode_712_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(size_t v_depth_725_, lean_object* v_keys_726_, lean_object* v_vals_727_, lean_object* v_i_728_, lean_object* v_entries_729_){
_start:
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = lean_array_get_size(v_keys_726_);
v___x_731_ = lean_nat_dec_lt(v_i_728_, v___x_730_);
if (v___x_731_ == 0)
{
lean_dec(v_i_728_);
return v_entries_729_;
}
else
{
lean_object* v_k_732_; lean_object* v_v_733_; uint64_t v___x_734_; size_t v_h_735_; size_t v___x_736_; lean_object* v___x_737_; size_t v___x_738_; size_t v___x_739_; size_t v___x_740_; size_t v_h_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v_k_732_ = lean_array_fget_borrowed(v_keys_726_, v_i_728_);
v_v_733_ = lean_array_fget_borrowed(v_vals_727_, v_i_728_);
v___x_734_ = l_Lean_instHashableFVarId_hash(v_k_732_);
v_h_735_ = lean_uint64_to_usize(v___x_734_);
v___x_736_ = ((size_t)5ULL);
v___x_737_ = lean_unsigned_to_nat(1u);
v___x_738_ = ((size_t)1ULL);
v___x_739_ = lean_usize_sub(v_depth_725_, v___x_738_);
v___x_740_ = lean_usize_mul(v___x_736_, v___x_739_);
v_h_741_ = lean_usize_shift_right(v_h_735_, v___x_740_);
v___x_742_ = lean_nat_add(v_i_728_, v___x_737_);
lean_dec(v_i_728_);
lean_inc(v_v_733_);
lean_inc(v_k_732_);
v___x_743_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_entries_729_, v_h_741_, v_depth_725_, v_k_732_, v_v_733_);
v_i_728_ = v___x_742_;
v_entries_729_ = v___x_743_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_745_, lean_object* v_keys_746_, lean_object* v_vals_747_, lean_object* v_i_748_, lean_object* v_entries_749_){
_start:
{
size_t v_depth_boxed_750_; lean_object* v_res_751_; 
v_depth_boxed_750_ = lean_unbox_usize(v_depth_745_);
lean_dec(v_depth_745_);
v_res_751_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(v_depth_boxed_750_, v_keys_746_, v_vals_747_, v_i_748_, v_entries_749_);
lean_dec_ref(v_vals_747_);
lean_dec_ref(v_keys_746_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_752_, lean_object* v_x_753_, lean_object* v_x_754_, lean_object* v_x_755_, lean_object* v_x_756_){
_start:
{
size_t v_x_365__boxed_757_; size_t v_x_366__boxed_758_; lean_object* v_res_759_; 
v_x_365__boxed_757_ = lean_unbox_usize(v_x_753_);
lean_dec(v_x_753_);
v_x_366__boxed_758_ = lean_unbox_usize(v_x_754_);
lean_dec(v_x_754_);
v_res_759_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_x_752_, v_x_365__boxed_757_, v_x_366__boxed_758_, v_x_755_, v_x_756_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(lean_object* v_x_760_, lean_object* v_x_761_, lean_object* v_x_762_){
_start:
{
uint64_t v___x_763_; size_t v___x_764_; size_t v___x_765_; lean_object* v___x_766_; 
v___x_763_ = l_Lean_instHashableFVarId_hash(v_x_761_);
v___x_764_ = lean_uint64_to_usize(v___x_763_);
v___x_765_ = ((size_t)1ULL);
v___x_766_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_x_760_, v___x_764_, v___x_765_, v_x_761_, v_x_762_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object* v_lctx_767_, lean_object* v_fvarId_768_, lean_object* v_userName_769_, lean_object* v_type_770_, uint8_t v_bi_771_, uint8_t v_kind_772_){
_start:
{
lean_object* v_decls_773_; lean_object* v_fvarIdToDecl_774_; lean_object* v_auxDeclToFullName_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_787_; 
v_decls_773_ = lean_ctor_get(v_lctx_767_, 1);
v_fvarIdToDecl_774_ = lean_ctor_get(v_lctx_767_, 0);
v_auxDeclToFullName_775_ = lean_ctor_get(v_lctx_767_, 2);
v_isSharedCheck_787_ = !lean_is_exclusive(v_lctx_767_);
if (v_isSharedCheck_787_ == 0)
{
v___x_777_ = v_lctx_767_;
v_isShared_778_ = v_isSharedCheck_787_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_auxDeclToFullName_775_);
lean_inc(v_decls_773_);
lean_inc(v_fvarIdToDecl_774_);
lean_dec(v_lctx_767_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_787_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v_size_779_; lean_object* v_decl_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_785_; 
v_size_779_ = lean_ctor_get(v_decls_773_, 2);
lean_inc(v_fvarId_768_);
lean_inc(v_size_779_);
v_decl_780_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_decl_780_, 0, v_size_779_);
lean_ctor_set(v_decl_780_, 1, v_fvarId_768_);
lean_ctor_set(v_decl_780_, 2, v_userName_769_);
lean_ctor_set(v_decl_780_, 3, v_type_770_);
lean_ctor_set_uint8(v_decl_780_, sizeof(void*)*4, v_bi_771_);
lean_ctor_set_uint8(v_decl_780_, sizeof(void*)*4 + 1, v_kind_772_);
lean_inc_ref(v_decl_780_);
v___x_781_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_774_, v_fvarId_768_, v_decl_780_);
v___x_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_782_, 0, v_decl_780_);
v___x_783_ = l_Lean_PersistentArray_push___redArg(v_decls_773_, v___x_782_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 1, v___x_783_);
lean_ctor_set(v___x_777_, 0, v___x_781_);
v___x_785_ = v___x_777_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_781_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_786_, 2, v_auxDeclToFullName_775_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl___boxed(lean_object* v_lctx_788_, lean_object* v_fvarId_789_, lean_object* v_userName_790_, lean_object* v_type_791_, lean_object* v_bi_792_, lean_object* v_kind_793_){
_start:
{
uint8_t v_bi_boxed_794_; uint8_t v_kind_boxed_795_; lean_object* v_res_796_; 
v_bi_boxed_794_ = lean_unbox(v_bi_792_);
v_kind_boxed_795_ = lean_unbox(v_kind_793_);
v_res_796_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_788_, v_fvarId_789_, v_userName_790_, v_type_791_, v_bi_boxed_794_, v_kind_boxed_795_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0(lean_object* v_00_u03b2_797_, lean_object* v_x_798_, lean_object* v_x_799_, lean_object* v_x_800_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_x_798_, v_x_799_, v_x_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0(lean_object* v_00_u03b2_802_, lean_object* v_x_803_, size_t v_x_804_, size_t v_x_805_, lean_object* v_x_806_, lean_object* v_x_807_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_x_803_, v_x_804_, v_x_805_, v_x_806_, v_x_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_809_, lean_object* v_x_810_, lean_object* v_x_811_, lean_object* v_x_812_, lean_object* v_x_813_, lean_object* v_x_814_){
_start:
{
size_t v_x_565__boxed_815_; size_t v_x_566__boxed_816_; lean_object* v_res_817_; 
v_x_565__boxed_815_ = lean_unbox_usize(v_x_811_);
lean_dec(v_x_811_);
v_x_566__boxed_816_ = lean_unbox_usize(v_x_812_);
lean_dec(v_x_812_);
v_res_817_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0(v_00_u03b2_809_, v_x_810_, v_x_565__boxed_815_, v_x_566__boxed_816_, v_x_813_, v_x_814_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_818_, lean_object* v_n_819_, lean_object* v_k_820_, lean_object* v_v_821_){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(v_n_819_, v_k_820_, v_v_821_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_823_, size_t v_depth_824_, lean_object* v_keys_825_, lean_object* v_vals_826_, lean_object* v_heq_827_, lean_object* v_i_828_, lean_object* v_entries_829_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(v_depth_824_, v_keys_825_, v_vals_826_, v_i_828_, v_entries_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_831_, lean_object* v_depth_832_, lean_object* v_keys_833_, lean_object* v_vals_834_, lean_object* v_heq_835_, lean_object* v_i_836_, lean_object* v_entries_837_){
_start:
{
size_t v_depth_boxed_838_; lean_object* v_res_839_; 
v_depth_boxed_838_ = lean_unbox_usize(v_depth_832_);
lean_dec(v_depth_832_);
v_res_839_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2(v_00_u03b2_831_, v_depth_boxed_838_, v_keys_833_, v_vals_834_, v_heq_835_, v_i_836_, v_entries_837_);
lean_dec_ref(v_vals_834_);
lean_dec_ref(v_keys_833_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_840_, lean_object* v_x_841_, lean_object* v_x_842_, lean_object* v_x_843_, lean_object* v_x_844_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(v_x_841_, v_x_842_, v_x_843_, v_x_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_mk_local_decl(lean_object* v_lctx_846_, lean_object* v_fvarId_847_, lean_object* v_userName_848_, lean_object* v_type_849_, uint8_t v_bi_850_){
_start:
{
uint8_t v___x_851_; lean_object* v___x_852_; 
v___x_851_ = 0;
v___x_852_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_846_, v_fvarId_847_, v_userName_848_, v_type_849_, v_bi_850_, v___x_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLocalDeclExported___boxed(lean_object* v_lctx_853_, lean_object* v_fvarId_854_, lean_object* v_userName_855_, lean_object* v_type_856_, lean_object* v_bi_857_){
_start:
{
uint8_t v_bi_boxed_858_; lean_object* v_res_859_; 
v_bi_boxed_858_ = lean_unbox(v_bi_857_);
v_res_859_ = lean_local_ctx_mk_local_decl(v_lctx_853_, v_fvarId_854_, v_userName_855_, v_type_856_, v_bi_boxed_858_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl(lean_object* v_lctx_860_, lean_object* v_fvarId_861_, lean_object* v_userName_862_, lean_object* v_type_863_, lean_object* v_value_864_, uint8_t v_nondep_865_, uint8_t v_kind_866_){
_start:
{
lean_object* v_decls_867_; lean_object* v_fvarIdToDecl_868_; lean_object* v_auxDeclToFullName_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_881_; 
v_decls_867_ = lean_ctor_get(v_lctx_860_, 1);
v_fvarIdToDecl_868_ = lean_ctor_get(v_lctx_860_, 0);
v_auxDeclToFullName_869_ = lean_ctor_get(v_lctx_860_, 2);
v_isSharedCheck_881_ = !lean_is_exclusive(v_lctx_860_);
if (v_isSharedCheck_881_ == 0)
{
v___x_871_ = v_lctx_860_;
v_isShared_872_ = v_isSharedCheck_881_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_auxDeclToFullName_869_);
lean_inc(v_decls_867_);
lean_inc(v_fvarIdToDecl_868_);
lean_dec(v_lctx_860_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_881_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v_size_873_; lean_object* v_decl_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_879_; 
v_size_873_ = lean_ctor_get(v_decls_867_, 2);
lean_inc(v_fvarId_861_);
lean_inc(v_size_873_);
v_decl_874_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_decl_874_, 0, v_size_873_);
lean_ctor_set(v_decl_874_, 1, v_fvarId_861_);
lean_ctor_set(v_decl_874_, 2, v_userName_862_);
lean_ctor_set(v_decl_874_, 3, v_type_863_);
lean_ctor_set(v_decl_874_, 4, v_value_864_);
lean_ctor_set_uint8(v_decl_874_, sizeof(void*)*5, v_nondep_865_);
lean_ctor_set_uint8(v_decl_874_, sizeof(void*)*5 + 1, v_kind_866_);
lean_inc_ref(v_decl_874_);
v___x_875_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_868_, v_fvarId_861_, v_decl_874_);
v___x_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_876_, 0, v_decl_874_);
v___x_877_ = l_Lean_PersistentArray_push___redArg(v_decls_867_, v___x_876_);
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 1, v___x_877_);
lean_ctor_set(v___x_871_, 0, v___x_875_);
v___x_879_ = v___x_871_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_875_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v___x_877_);
lean_ctor_set(v_reuseFailAlloc_880_, 2, v_auxDeclToFullName_869_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl___boxed(lean_object* v_lctx_882_, lean_object* v_fvarId_883_, lean_object* v_userName_884_, lean_object* v_type_885_, lean_object* v_value_886_, lean_object* v_nondep_887_, lean_object* v_kind_888_){
_start:
{
uint8_t v_nondep_boxed_889_; uint8_t v_kind_boxed_890_; lean_object* v_res_891_; 
v_nondep_boxed_889_ = lean_unbox(v_nondep_887_);
v_kind_boxed_890_ = lean_unbox(v_kind_888_);
v_res_891_ = l_Lean_LocalContext_mkLetDecl(v_lctx_882_, v_fvarId_883_, v_userName_884_, v_type_885_, v_value_886_, v_nondep_boxed_889_, v_kind_boxed_890_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_mk_let_decl(lean_object* v_lctx_892_, lean_object* v_fvarId_893_, lean_object* v_userName_894_, lean_object* v_type_895_, lean_object* v_value_896_, uint8_t v_nondep_897_){
_start:
{
uint8_t v___x_898_; lean_object* v___x_899_; 
v___x_898_ = 0;
v___x_899_ = l_Lean_LocalContext_mkLetDecl(v_lctx_892_, v_fvarId_893_, v_userName_894_, v_type_895_, v_value_896_, v_nondep_897_, v___x_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLetDeclExported___boxed(lean_object* v_lctx_900_, lean_object* v_fvarId_901_, lean_object* v_userName_902_, lean_object* v_type_903_, lean_object* v_value_904_, lean_object* v_nondep_905_){
_start:
{
uint8_t v_nondep_boxed_906_; lean_object* v_res_907_; 
v_nondep_boxed_906_ = lean_unbox(v_nondep_905_);
v_res_907_ = lean_local_ctx_mk_let_decl(v_lctx_900_, v_fvarId_901_, v_userName_902_, v_type_903_, v_value_904_, v_nondep_boxed_906_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkAuxDecl(lean_object* v_lctx_908_, lean_object* v_fvarId_909_, lean_object* v_userName_910_, lean_object* v_type_911_, lean_object* v_fullName_912_){
_start:
{
lean_object* v_decls_913_; lean_object* v_fvarIdToDecl_914_; lean_object* v_auxDeclToFullName_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_930_; 
v_decls_913_ = lean_ctor_get(v_lctx_908_, 1);
v_fvarIdToDecl_914_ = lean_ctor_get(v_lctx_908_, 0);
v_auxDeclToFullName_915_ = lean_ctor_get(v_lctx_908_, 2);
v_isSharedCheck_930_ = !lean_is_exclusive(v_lctx_908_);
if (v_isSharedCheck_930_ == 0)
{
v___x_917_ = v_lctx_908_;
v_isShared_918_ = v_isSharedCheck_930_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_auxDeclToFullName_915_);
lean_inc(v_decls_913_);
lean_inc(v_fvarIdToDecl_914_);
lean_dec(v_lctx_908_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_930_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v_size_919_; uint8_t v___x_920_; uint8_t v___x_921_; lean_object* v_decl_922_; lean_object* v_auxDeclToFullName_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_928_; 
v_size_919_ = lean_ctor_get(v_decls_913_, 2);
v___x_920_ = 0;
v___x_921_ = 2;
lean_inc_n(v_fvarId_909_, 2);
lean_inc(v_size_919_);
v_decl_922_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_decl_922_, 0, v_size_919_);
lean_ctor_set(v_decl_922_, 1, v_fvarId_909_);
lean_ctor_set(v_decl_922_, 2, v_userName_910_);
lean_ctor_set(v_decl_922_, 3, v_type_911_);
lean_ctor_set_uint8(v_decl_922_, sizeof(void*)*4, v___x_920_);
lean_ctor_set_uint8(v_decl_922_, sizeof(void*)*4 + 1, v___x_921_);
v_auxDeclToFullName_923_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_909_, v_fullName_912_, v_auxDeclToFullName_915_);
lean_inc_ref(v_decl_922_);
v___x_924_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_914_, v_fvarId_909_, v_decl_922_);
v___x_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_925_, 0, v_decl_922_);
v___x_926_ = l_Lean_PersistentArray_push___redArg(v_decls_913_, v___x_925_);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 2, v_auxDeclToFullName_923_);
lean_ctor_set(v___x_917_, 1, v___x_926_);
lean_ctor_set(v___x_917_, 0, v___x_924_);
v___x_928_ = v___x_917_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_924_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v_auxDeclToFullName_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_addDecl(lean_object* v_lctx_931_, lean_object* v_newDecl_932_){
_start:
{
lean_object* v_decls_933_; lean_object* v_fvarIdToDecl_934_; lean_object* v_auxDeclToFullName_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_950_; 
v_decls_933_ = lean_ctor_get(v_lctx_931_, 1);
v_fvarIdToDecl_934_ = lean_ctor_get(v_lctx_931_, 0);
v_auxDeclToFullName_935_ = lean_ctor_get(v_lctx_931_, 2);
v_isSharedCheck_950_ = !lean_is_exclusive(v_lctx_931_);
if (v_isSharedCheck_950_ == 0)
{
v___x_937_ = v_lctx_931_;
v_isShared_938_ = v_isSharedCheck_950_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_auxDeclToFullName_935_);
lean_inc(v_decls_933_);
lean_inc(v_fvarIdToDecl_934_);
lean_dec(v_lctx_931_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_950_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v_size_939_; lean_object* v_newDecl_940_; lean_object* v___y_942_; lean_object* v_fvarId_949_; 
v_size_939_ = lean_ctor_get(v_decls_933_, 2);
lean_inc(v_size_939_);
v_newDecl_940_ = l_Lean_LocalDecl_setIndex(v_newDecl_932_, v_size_939_);
v_fvarId_949_ = lean_ctor_get(v_newDecl_940_, 1);
lean_inc(v_fvarId_949_);
v___y_942_ = v_fvarId_949_;
goto v___jp_941_;
v___jp_941_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_947_; 
lean_inc_ref(v_newDecl_940_);
v___x_943_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_934_, v___y_942_, v_newDecl_940_);
v___x_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_944_, 0, v_newDecl_940_);
v___x_945_ = l_Lean_PersistentArray_push___redArg(v_decls_933_, v___x_944_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 1, v___x_945_);
lean_ctor_set(v___x_937_, 0, v___x_943_);
v___x_947_ = v___x_937_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_948_, 2, v_auxDeclToFullName_935_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_951_, lean_object* v_vals_952_, lean_object* v_i_953_, lean_object* v_k_954_){
_start:
{
lean_object* v___x_955_; uint8_t v___x_956_; 
v___x_955_ = lean_array_get_size(v_keys_951_);
v___x_956_ = lean_nat_dec_lt(v_i_953_, v___x_955_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; 
lean_dec(v_i_953_);
v___x_957_ = lean_box(0);
return v___x_957_;
}
else
{
lean_object* v_k_x27_958_; uint8_t v___x_959_; 
v_k_x27_958_ = lean_array_fget_borrowed(v_keys_951_, v_i_953_);
v___x_959_ = l_Lean_instBEqFVarId_beq(v_k_954_, v_k_x27_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = lean_unsigned_to_nat(1u);
v___x_961_ = lean_nat_add(v_i_953_, v___x_960_);
lean_dec(v_i_953_);
v_i_953_ = v___x_961_;
goto _start;
}
else
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = lean_array_fget_borrowed(v_vals_952_, v_i_953_);
lean_dec(v_i_953_);
lean_inc(v___x_963_);
v___x_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
return v___x_964_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_965_, lean_object* v_vals_966_, lean_object* v_i_967_, lean_object* v_k_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_965_, v_vals_966_, v_i_967_, v_k_968_);
lean_dec(v_k_968_);
lean_dec_ref(v_vals_966_);
lean_dec_ref(v_keys_965_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_970_, size_t v_x_971_, lean_object* v_x_972_){
_start:
{
if (lean_obj_tag(v_x_970_) == 0)
{
lean_object* v_es_973_; lean_object* v___x_974_; size_t v___x_975_; size_t v___x_976_; lean_object* v_j_977_; lean_object* v___x_978_; 
v_es_973_ = lean_ctor_get(v_x_970_, 0);
v___x_974_ = lean_box(2);
v___x_975_ = ((size_t)31ULL);
v___x_976_ = lean_usize_land(v_x_971_, v___x_975_);
v_j_977_ = lean_usize_to_nat(v___x_976_);
v___x_978_ = lean_array_get_borrowed(v___x_974_, v_es_973_, v_j_977_);
lean_dec(v_j_977_);
switch(lean_obj_tag(v___x_978_))
{
case 0:
{
lean_object* v_key_979_; lean_object* v_val_980_; uint8_t v___x_981_; 
v_key_979_ = lean_ctor_get(v___x_978_, 0);
v_val_980_ = lean_ctor_get(v___x_978_, 1);
v___x_981_ = l_Lean_instBEqFVarId_beq(v_x_972_, v_key_979_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; 
v___x_982_ = lean_box(0);
return v___x_982_;
}
else
{
lean_object* v___x_983_; 
lean_inc(v_val_980_);
v___x_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_983_, 0, v_val_980_);
return v___x_983_;
}
}
case 1:
{
lean_object* v_node_984_; size_t v___x_985_; size_t v___x_986_; 
v_node_984_ = lean_ctor_get(v___x_978_, 0);
v___x_985_ = ((size_t)5ULL);
v___x_986_ = lean_usize_shift_right(v_x_971_, v___x_985_);
v_x_970_ = v_node_984_;
v_x_971_ = v___x_986_;
goto _start;
}
default: 
{
lean_object* v___x_988_; 
v___x_988_ = lean_box(0);
return v___x_988_;
}
}
}
else
{
lean_object* v_ks_989_; lean_object* v_vs_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v_ks_989_ = lean_ctor_get(v_x_970_, 0);
v_vs_990_ = lean_ctor_get(v_x_970_, 1);
v___x_991_ = lean_unsigned_to_nat(0u);
v___x_992_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_989_, v_vs_990_, v___x_991_, v_x_972_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_993_, lean_object* v_x_994_, lean_object* v_x_995_){
_start:
{
size_t v_x_135__boxed_996_; lean_object* v_res_997_; 
v_x_135__boxed_996_ = lean_unbox_usize(v_x_994_);
lean_dec(v_x_994_);
v_res_997_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(v_x_993_, v_x_135__boxed_996_, v_x_995_);
lean_dec(v_x_995_);
lean_dec_ref(v_x_993_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(lean_object* v_x_998_, lean_object* v_x_999_){
_start:
{
uint64_t v___x_1000_; size_t v___x_1001_; lean_object* v___x_1002_; 
v___x_1000_ = l_Lean_instHashableFVarId_hash(v_x_999_);
v___x_1001_ = lean_uint64_to_usize(v___x_1000_);
v___x_1002_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(v_x_998_, v___x_1001_, v_x_999_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg___boxed(lean_object* v_x_1003_, lean_object* v_x_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_x_1003_, v_x_1004_);
lean_dec(v_x_1004_);
lean_dec_ref(v_x_1003_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_find(lean_object* v_lctx_1006_, lean_object* v_fvarId_1007_){
_start:
{
lean_object* v_fvarIdToDecl_1008_; lean_object* v___x_1009_; 
v_fvarIdToDecl_1008_ = lean_ctor_get(v_lctx_1006_, 0);
lean_inc_ref(v_fvarIdToDecl_1008_);
lean_dec_ref(v_lctx_1006_);
v___x_1009_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_fvarIdToDecl_1008_, v_fvarId_1007_);
lean_dec(v_fvarId_1007_);
lean_dec_ref(v_fvarIdToDecl_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0(lean_object* v_00_u03b2_1010_, lean_object* v_x_1011_, lean_object* v_x_1012_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_x_1011_, v_x_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_1014_, lean_object* v_x_1015_, lean_object* v_x_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0(v_00_u03b2_1014_, v_x_1015_, v_x_1016_);
lean_dec(v_x_1016_);
lean_dec_ref(v_x_1015_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1018_, lean_object* v_x_1019_, size_t v_x_1020_, lean_object* v_x_1021_){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(v_x_1019_, v_x_1020_, v_x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1023_, lean_object* v_x_1024_, lean_object* v_x_1025_, lean_object* v_x_1026_){
_start:
{
size_t v_x_204__boxed_1027_; lean_object* v_res_1028_; 
v_x_204__boxed_1027_ = lean_unbox_usize(v_x_1025_);
lean_dec(v_x_1025_);
v_res_1028_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0(v_00_u03b2_1023_, v_x_1024_, v_x_204__boxed_1027_, v_x_1026_);
lean_dec(v_x_1026_);
lean_dec_ref(v_x_1024_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1029_, lean_object* v_keys_1030_, lean_object* v_vals_1031_, lean_object* v_heq_1032_, lean_object* v_i_1033_, lean_object* v_k_1034_){
_start:
{
lean_object* v___x_1035_; 
v___x_1035_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1030_, v_vals_1031_, v_i_1033_, v_k_1034_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1036_, lean_object* v_keys_1037_, lean_object* v_vals_1038_, lean_object* v_heq_1039_, lean_object* v_i_1040_, lean_object* v_k_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1036_, v_keys_1037_, v_vals_1038_, v_heq_1039_, v_i_1040_, v_k_1041_);
lean_dec(v_k_1041_);
lean_dec_ref(v_vals_1038_);
lean_dec_ref(v_keys_1037_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f(lean_object* v_lctx_1043_, lean_object* v_e_1044_){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = l_Lean_Expr_fvarId_x21(v_e_1044_);
v___x_1046_ = lean_local_ctx_find(v_lctx_1043_, v___x_1045_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f___boxed(lean_object* v_lctx_1047_, lean_object* v_e_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_1047_, v_e_1048_);
lean_dec_ref(v_e_1048_);
return v_res_1049_;
}
}
static lean_object* _init_l_Lean_LocalContext_get_x21___closed__2(void){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1052_ = ((lean_object*)(l_Lean_LocalContext_get_x21___closed__1));
v___x_1053_ = lean_unsigned_to_nat(14u);
v___x_1054_ = lean_unsigned_to_nat(340u);
v___x_1055_ = ((lean_object*)(l_Lean_LocalContext_get_x21___closed__0));
v___x_1056_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_1057_ = l_mkPanicMessageWithDecl(v___x_1056_, v___x_1055_, v___x_1054_, v___x_1053_, v___x_1052_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_get_x21(lean_object* v_lctx_1058_, lean_object* v_fvarId_1059_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_local_ctx_find(v_lctx_1058_, v_fvarId_1059_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = lean_obj_once(&l_Lean_LocalContext_get_x21___closed__2, &l_Lean_LocalContext_get_x21___closed__2_once, _init_l_Lean_LocalContext_get_x21___closed__2);
v___x_1062_ = l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(v___x_1061_);
return v___x_1062_;
}
else
{
lean_object* v_val_1063_; 
v_val_1063_ = lean_ctor_get(v___x_1060_, 0);
lean_inc(v_val_1063_);
lean_dec_ref_known(v___x_1060_, 1);
return v_val_1063_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21(lean_object* v_lctx_1064_, lean_object* v_e_1065_){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = l_Lean_Expr_fvarId_x21(v_e_1065_);
v___x_1067_ = l_Lean_LocalContext_get_x21(v_lctx_1064_, v___x_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21___boxed(lean_object* v_lctx_1068_, lean_object* v_e_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lean_LocalContext_getFVar_x21(v_lctx_1068_, v_e_1069_);
lean_dec_ref(v_e_1069_);
return v_res_1070_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1071_, lean_object* v_i_1072_, lean_object* v_k_1073_){
_start:
{
lean_object* v___x_1074_; uint8_t v___x_1075_; 
v___x_1074_ = lean_array_get_size(v_keys_1071_);
v___x_1075_ = lean_nat_dec_lt(v_i_1072_, v___x_1074_);
if (v___x_1075_ == 0)
{
lean_dec(v_i_1072_);
return v___x_1075_;
}
else
{
lean_object* v_k_x27_1076_; uint8_t v___x_1077_; 
v_k_x27_1076_ = lean_array_fget_borrowed(v_keys_1071_, v_i_1072_);
v___x_1077_ = l_Lean_instBEqFVarId_beq(v_k_1073_, v_k_x27_1076_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = lean_unsigned_to_nat(1u);
v___x_1079_ = lean_nat_add(v_i_1072_, v___x_1078_);
lean_dec(v_i_1072_);
v_i_1072_ = v___x_1079_;
goto _start;
}
else
{
lean_dec(v_i_1072_);
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1081_, lean_object* v_i_1082_, lean_object* v_k_1083_){
_start:
{
uint8_t v_res_1084_; lean_object* v_r_1085_; 
v_res_1084_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(v_keys_1081_, v_i_1082_, v_k_1083_);
lean_dec(v_k_1083_);
lean_dec_ref(v_keys_1081_);
v_r_1085_ = lean_box(v_res_1084_);
return v_r_1085_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(lean_object* v_x_1086_, size_t v_x_1087_, lean_object* v_x_1088_){
_start:
{
if (lean_obj_tag(v_x_1086_) == 0)
{
lean_object* v_es_1089_; lean_object* v___x_1090_; size_t v___x_1091_; size_t v___x_1092_; lean_object* v_j_1093_; lean_object* v___x_1094_; 
v_es_1089_ = lean_ctor_get(v_x_1086_, 0);
v___x_1090_ = lean_box(2);
v___x_1091_ = ((size_t)31ULL);
v___x_1092_ = lean_usize_land(v_x_1087_, v___x_1091_);
v_j_1093_ = lean_usize_to_nat(v___x_1092_);
v___x_1094_ = lean_array_get_borrowed(v___x_1090_, v_es_1089_, v_j_1093_);
lean_dec(v_j_1093_);
switch(lean_obj_tag(v___x_1094_))
{
case 0:
{
lean_object* v_key_1095_; uint8_t v___x_1096_; 
v_key_1095_ = lean_ctor_get(v___x_1094_, 0);
v___x_1096_ = l_Lean_instBEqFVarId_beq(v_x_1088_, v_key_1095_);
return v___x_1096_;
}
case 1:
{
lean_object* v_node_1097_; size_t v___x_1098_; size_t v___x_1099_; 
v_node_1097_ = lean_ctor_get(v___x_1094_, 0);
v___x_1098_ = ((size_t)5ULL);
v___x_1099_ = lean_usize_shift_right(v_x_1087_, v___x_1098_);
v_x_1086_ = v_node_1097_;
v_x_1087_ = v___x_1099_;
goto _start;
}
default: 
{
uint8_t v___x_1101_; 
v___x_1101_ = 0;
return v___x_1101_;
}
}
}
else
{
lean_object* v_ks_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; 
v_ks_1102_ = lean_ctor_get(v_x_1086_, 0);
v___x_1103_ = lean_unsigned_to_nat(0u);
v___x_1104_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(v_ks_1102_, v___x_1103_, v_x_1088_);
return v___x_1104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg___boxed(lean_object* v_x_1105_, lean_object* v_x_1106_, lean_object* v_x_1107_){
_start:
{
size_t v_x_119__boxed_1108_; uint8_t v_res_1109_; lean_object* v_r_1110_; 
v_x_119__boxed_1108_ = lean_unbox_usize(v_x_1106_);
lean_dec(v_x_1106_);
v_res_1109_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(v_x_1105_, v_x_119__boxed_1108_, v_x_1107_);
lean_dec(v_x_1107_);
lean_dec_ref(v_x_1105_);
v_r_1110_ = lean_box(v_res_1109_);
return v_r_1110_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(lean_object* v_x_1111_, lean_object* v_x_1112_){
_start:
{
uint64_t v___x_1113_; size_t v___x_1114_; uint8_t v___x_1115_; 
v___x_1113_ = l_Lean_instHashableFVarId_hash(v_x_1112_);
v___x_1114_ = lean_uint64_to_usize(v___x_1113_);
v___x_1115_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(v_x_1111_, v___x_1114_, v_x_1112_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg___boxed(lean_object* v_x_1116_, lean_object* v_x_1117_){
_start:
{
uint8_t v_res_1118_; lean_object* v_r_1119_; 
v_res_1118_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(v_x_1116_, v_x_1117_);
lean_dec(v_x_1117_);
lean_dec_ref(v_x_1116_);
v_r_1119_ = lean_box(v_res_1118_);
return v_r_1119_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_contains(lean_object* v_lctx_1120_, lean_object* v_fvarId_1121_){
_start:
{
lean_object* v_fvarIdToDecl_1122_; uint8_t v___x_1123_; 
v_fvarIdToDecl_1122_ = lean_ctor_get(v_lctx_1120_, 0);
v___x_1123_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(v_fvarIdToDecl_1122_, v_fvarId_1121_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_contains___boxed(lean_object* v_lctx_1124_, lean_object* v_fvarId_1125_){
_start:
{
uint8_t v_res_1126_; lean_object* v_r_1127_; 
v_res_1126_ = l_Lean_LocalContext_contains(v_lctx_1124_, v_fvarId_1125_);
lean_dec(v_fvarId_1125_);
lean_dec_ref(v_lctx_1124_);
v_r_1127_ = lean_box(v_res_1126_);
return v_r_1127_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0(lean_object* v_00_u03b2_1128_, lean_object* v_x_1129_, lean_object* v_x_1130_){
_start:
{
uint8_t v___x_1131_; 
v___x_1131_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(v_x_1129_, v_x_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___boxed(lean_object* v_00_u03b2_1132_, lean_object* v_x_1133_, lean_object* v_x_1134_){
_start:
{
uint8_t v_res_1135_; lean_object* v_r_1136_; 
v_res_1135_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0(v_00_u03b2_1132_, v_x_1133_, v_x_1134_);
lean_dec(v_x_1134_);
lean_dec_ref(v_x_1133_);
v_r_1136_ = lean_box(v_res_1135_);
return v_r_1136_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0(lean_object* v_00_u03b2_1137_, lean_object* v_x_1138_, size_t v_x_1139_, lean_object* v_x_1140_){
_start:
{
uint8_t v___x_1141_; 
v___x_1141_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(v_x_1138_, v_x_1139_, v_x_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1142_, lean_object* v_x_1143_, lean_object* v_x_1144_, lean_object* v_x_1145_){
_start:
{
size_t v_x_182__boxed_1146_; uint8_t v_res_1147_; lean_object* v_r_1148_; 
v_x_182__boxed_1146_ = lean_unbox_usize(v_x_1144_);
lean_dec(v_x_1144_);
v_res_1147_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0(v_00_u03b2_1142_, v_x_1143_, v_x_182__boxed_1146_, v_x_1145_);
lean_dec(v_x_1145_);
lean_dec_ref(v_x_1143_);
v_r_1148_ = lean_box(v_res_1147_);
return v_r_1148_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1149_, lean_object* v_keys_1150_, lean_object* v_vals_1151_, lean_object* v_heq_1152_, lean_object* v_i_1153_, lean_object* v_k_1154_){
_start:
{
uint8_t v___x_1155_; 
v___x_1155_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(v_keys_1150_, v_i_1153_, v_k_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1156_, lean_object* v_keys_1157_, lean_object* v_vals_1158_, lean_object* v_heq_1159_, lean_object* v_i_1160_, lean_object* v_k_1161_){
_start:
{
uint8_t v_res_1162_; lean_object* v_r_1163_; 
v_res_1162_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1(v_00_u03b2_1156_, v_keys_1157_, v_vals_1158_, v_heq_1159_, v_i_1160_, v_k_1161_);
lean_dec(v_k_1161_);
lean_dec_ref(v_vals_1158_);
lean_dec_ref(v_keys_1157_);
v_r_1163_ = lean_box(v_res_1162_);
return v_r_1163_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_containsFVar(lean_object* v_lctx_1164_, lean_object* v_e_1165_){
_start:
{
lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1166_ = l_Lean_Expr_fvarId_x21(v_e_1165_);
v___x_1167_ = l_Lean_LocalContext_contains(v_lctx_1164_, v___x_1166_);
lean_dec(v___x_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_containsFVar___boxed(lean_object* v_lctx_1168_, lean_object* v_e_1169_){
_start:
{
uint8_t v_res_1170_; lean_object* v_r_1171_; 
v_res_1170_ = l_Lean_LocalContext_containsFVar(v_lctx_1168_, v_e_1169_);
lean_dec_ref(v_e_1169_);
lean_dec_ref(v_lctx_1168_);
v_r_1171_ = lean_box(v_res_1170_);
return v_r_1171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(lean_object* v_as_1172_, size_t v_i_1173_, size_t v_stop_1174_, lean_object* v_b_1175_){
_start:
{
lean_object* v___y_1177_; uint8_t v___x_1181_; 
v___x_1181_ = lean_usize_dec_eq(v_i_1173_, v_stop_1174_);
if (v___x_1181_ == 0)
{
lean_object* v___x_1182_; 
v___x_1182_ = lean_array_uget_borrowed(v_as_1172_, v_i_1173_);
if (lean_obj_tag(v___x_1182_) == 0)
{
v___y_1177_ = v_b_1175_;
goto v___jp_1176_;
}
else
{
lean_object* v_val_1183_; lean_object* v_fvarId_1184_; lean_object* v___x_1185_; 
v_val_1183_ = lean_ctor_get(v___x_1182_, 0);
v_fvarId_1184_ = lean_ctor_get(v_val_1183_, 1);
lean_inc(v_fvarId_1184_);
v___x_1185_ = lean_array_push(v_b_1175_, v_fvarId_1184_);
v___y_1177_ = v___x_1185_;
goto v___jp_1176_;
}
}
else
{
return v_b_1175_;
}
v___jp_1176_:
{
size_t v___x_1178_; size_t v___x_1179_; 
v___x_1178_ = ((size_t)1ULL);
v___x_1179_ = lean_usize_add(v_i_1173_, v___x_1178_);
v_i_1173_ = v___x_1179_;
v_b_1175_ = v___y_1177_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1___boxed(lean_object* v_as_1186_, lean_object* v_i_1187_, lean_object* v_stop_1188_, lean_object* v_b_1189_){
_start:
{
size_t v_i_boxed_1190_; size_t v_stop_boxed_1191_; lean_object* v_res_1192_; 
v_i_boxed_1190_ = lean_unbox_usize(v_i_1187_);
lean_dec(v_i_1187_);
v_stop_boxed_1191_ = lean_unbox_usize(v_stop_1188_);
lean_dec(v_stop_1188_);
v_res_1192_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_as_1186_, v_i_boxed_1190_, v_stop_boxed_1191_, v_b_1189_);
lean_dec_ref(v_as_1186_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(lean_object* v_x_1193_, lean_object* v_x_1194_){
_start:
{
if (lean_obj_tag(v_x_1193_) == 0)
{
lean_object* v_cs_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; 
v_cs_1195_ = lean_ctor_get(v_x_1193_, 0);
v___x_1196_ = lean_unsigned_to_nat(0u);
v___x_1197_ = lean_array_get_size(v_cs_1195_);
v___x_1198_ = lean_nat_dec_lt(v___x_1196_, v___x_1197_);
if (v___x_1198_ == 0)
{
return v_x_1194_;
}
else
{
size_t v___x_1199_; size_t v___x_1200_; lean_object* v___x_1201_; 
v___x_1199_ = ((size_t)0ULL);
v___x_1200_ = lean_usize_of_nat(v___x_1197_);
v___x_1201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(v_cs_1195_, v___x_1199_, v___x_1200_, v_x_1194_);
return v___x_1201_;
}
}
else
{
lean_object* v_vs_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
v_vs_1202_ = lean_ctor_get(v_x_1193_, 0);
v___x_1203_ = lean_unsigned_to_nat(0u);
v___x_1204_ = lean_array_get_size(v_vs_1202_);
v___x_1205_ = lean_nat_dec_lt(v___x_1203_, v___x_1204_);
if (v___x_1205_ == 0)
{
return v_x_1194_;
}
else
{
size_t v___x_1206_; size_t v___x_1207_; lean_object* v___x_1208_; 
v___x_1206_ = ((size_t)0ULL);
v___x_1207_ = lean_usize_of_nat(v___x_1204_);
v___x_1208_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_vs_1202_, v___x_1206_, v___x_1207_, v_x_1194_);
return v___x_1208_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(lean_object* v_as_1209_, size_t v_i_1210_, size_t v_stop_1211_, lean_object* v_b_1212_){
_start:
{
uint8_t v___x_1213_; 
v___x_1213_ = lean_usize_dec_eq(v_i_1210_, v_stop_1211_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; lean_object* v___x_1215_; size_t v___x_1216_; size_t v___x_1217_; 
v___x_1214_ = lean_array_uget_borrowed(v_as_1209_, v_i_1210_);
v___x_1215_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(v___x_1214_, v_b_1212_);
v___x_1216_ = ((size_t)1ULL);
v___x_1217_ = lean_usize_add(v_i_1210_, v___x_1216_);
v_i_1210_ = v___x_1217_;
v_b_1212_ = v___x_1215_;
goto _start;
}
else
{
return v_b_1212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1___boxed(lean_object* v_as_1219_, lean_object* v_i_1220_, lean_object* v_stop_1221_, lean_object* v_b_1222_){
_start:
{
size_t v_i_boxed_1223_; size_t v_stop_boxed_1224_; lean_object* v_res_1225_; 
v_i_boxed_1223_ = lean_unbox_usize(v_i_1220_);
lean_dec(v_i_1220_);
v_stop_boxed_1224_ = lean_unbox_usize(v_stop_1221_);
lean_dec(v_stop_1221_);
v_res_1225_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(v_as_1219_, v_i_boxed_1223_, v_stop_boxed_1224_, v_b_1222_);
lean_dec_ref(v_as_1219_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2___boxed(lean_object* v_x_1226_, lean_object* v_x_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(v_x_1226_, v_x_1227_);
lean_dec_ref(v_x_1226_);
return v_res_1228_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(lean_object* v_x_1230_, size_t v_x_1231_, size_t v_x_1232_, lean_object* v_x_1233_){
_start:
{
if (lean_obj_tag(v_x_1230_) == 0)
{
lean_object* v_cs_1234_; lean_object* v___x_1235_; size_t v___x_1236_; lean_object* v_j_1237_; lean_object* v___x_1238_; size_t v___x_1239_; size_t v___x_1240_; size_t v___x_1241_; size_t v___x_1242_; size_t v___x_1243_; size_t v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; 
v_cs_1234_ = lean_ctor_get(v_x_1230_, 0);
v___x_1235_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0);
v___x_1236_ = lean_usize_shift_right(v_x_1231_, v_x_1232_);
v_j_1237_ = lean_usize_to_nat(v___x_1236_);
v___x_1238_ = lean_array_get_borrowed(v___x_1235_, v_cs_1234_, v_j_1237_);
v___x_1239_ = ((size_t)1ULL);
v___x_1240_ = lean_usize_shift_left(v___x_1239_, v_x_1232_);
v___x_1241_ = lean_usize_sub(v___x_1240_, v___x_1239_);
v___x_1242_ = lean_usize_land(v_x_1231_, v___x_1241_);
v___x_1243_ = ((size_t)5ULL);
v___x_1244_ = lean_usize_sub(v_x_1232_, v___x_1243_);
v___x_1245_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(v___x_1238_, v___x_1242_, v___x_1244_, v_x_1233_);
v___x_1246_ = lean_unsigned_to_nat(1u);
v___x_1247_ = lean_nat_add(v_j_1237_, v___x_1246_);
lean_dec(v_j_1237_);
v___x_1248_ = lean_array_get_size(v_cs_1234_);
v___x_1249_ = lean_nat_dec_lt(v___x_1247_, v___x_1248_);
if (v___x_1249_ == 0)
{
lean_dec(v___x_1247_);
return v___x_1245_;
}
else
{
size_t v___x_1250_; size_t v___x_1251_; lean_object* v___x_1252_; 
v___x_1250_ = lean_usize_of_nat(v___x_1247_);
lean_dec(v___x_1247_);
v___x_1251_ = lean_usize_of_nat(v___x_1248_);
v___x_1252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(v_cs_1234_, v___x_1250_, v___x_1251_, v___x_1245_);
return v___x_1252_;
}
}
else
{
lean_object* v_vs_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v_vs_1253_ = lean_ctor_get(v_x_1230_, 0);
v___x_1254_ = lean_usize_to_nat(v_x_1231_);
v___x_1255_ = lean_array_get_size(v_vs_1253_);
v___x_1256_ = lean_nat_dec_lt(v___x_1254_, v___x_1255_);
if (v___x_1256_ == 0)
{
lean_dec(v___x_1254_);
return v_x_1233_;
}
else
{
size_t v___x_1257_; size_t v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = lean_usize_of_nat(v___x_1254_);
lean_dec(v___x_1254_);
v___x_1258_ = lean_usize_of_nat(v___x_1255_);
v___x_1259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_vs_1253_, v___x_1257_, v___x_1258_, v_x_1233_);
return v___x_1259_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___boxed(lean_object* v_x_1260_, lean_object* v_x_1261_, lean_object* v_x_1262_, lean_object* v_x_1263_){
_start:
{
size_t v_x_1260__boxed_1264_; size_t v_x_1261__boxed_1265_; lean_object* v_res_1266_; 
v_x_1260__boxed_1264_ = lean_unbox_usize(v_x_1261_);
lean_dec(v_x_1261_);
v_x_1261__boxed_1265_ = lean_unbox_usize(v_x_1262_);
lean_dec(v_x_1262_);
v_res_1266_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(v_x_1260_, v_x_1260__boxed_1264_, v_x_1261__boxed_1265_, v_x_1263_);
lean_dec_ref(v_x_1260_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(lean_object* v_t_1267_, lean_object* v_init_1268_, lean_object* v_start_1269_){
_start:
{
lean_object* v___x_1270_; uint8_t v___x_1271_; 
v___x_1270_ = lean_unsigned_to_nat(0u);
v___x_1271_ = lean_nat_dec_eq(v_start_1269_, v___x_1270_);
if (v___x_1271_ == 0)
{
lean_object* v_root_1272_; lean_object* v_tail_1273_; size_t v_shift_1274_; lean_object* v_tailOff_1275_; uint8_t v___x_1276_; 
v_root_1272_ = lean_ctor_get(v_t_1267_, 0);
v_tail_1273_ = lean_ctor_get(v_t_1267_, 1);
v_shift_1274_ = lean_ctor_get_usize(v_t_1267_, 4);
v_tailOff_1275_ = lean_ctor_get(v_t_1267_, 3);
v___x_1276_ = lean_nat_dec_le(v_tailOff_1275_, v_start_1269_);
if (v___x_1276_ == 0)
{
size_t v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v___x_1277_ = lean_usize_of_nat(v_start_1269_);
v___x_1278_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(v_root_1272_, v___x_1277_, v_shift_1274_, v_init_1268_);
v___x_1279_ = lean_array_get_size(v_tail_1273_);
v___x_1280_ = lean_nat_dec_lt(v___x_1270_, v___x_1279_);
if (v___x_1280_ == 0)
{
return v___x_1278_;
}
else
{
size_t v___x_1281_; size_t v___x_1282_; lean_object* v___x_1283_; 
v___x_1281_ = ((size_t)0ULL);
v___x_1282_ = lean_usize_of_nat(v___x_1279_);
v___x_1283_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_tail_1273_, v___x_1281_, v___x_1282_, v___x_1278_);
return v___x_1283_;
}
}
else
{
lean_object* v___x_1284_; lean_object* v___x_1285_; uint8_t v___x_1286_; 
v___x_1284_ = lean_nat_sub(v_start_1269_, v_tailOff_1275_);
v___x_1285_ = lean_array_get_size(v_tail_1273_);
v___x_1286_ = lean_nat_dec_lt(v___x_1284_, v___x_1285_);
if (v___x_1286_ == 0)
{
lean_dec(v___x_1284_);
return v_init_1268_;
}
else
{
size_t v___x_1287_; size_t v___x_1288_; lean_object* v___x_1289_; 
v___x_1287_ = lean_usize_of_nat(v___x_1284_);
lean_dec(v___x_1284_);
v___x_1288_ = lean_usize_of_nat(v___x_1285_);
v___x_1289_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_tail_1273_, v___x_1287_, v___x_1288_, v_init_1268_);
return v___x_1289_;
}
}
}
else
{
lean_object* v_root_1290_; lean_object* v_tail_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; uint8_t v___x_1294_; 
v_root_1290_ = lean_ctor_get(v_t_1267_, 0);
v_tail_1291_ = lean_ctor_get(v_t_1267_, 1);
v___x_1292_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(v_root_1290_, v_init_1268_);
v___x_1293_ = lean_array_get_size(v_tail_1291_);
v___x_1294_ = lean_nat_dec_lt(v___x_1270_, v___x_1293_);
if (v___x_1294_ == 0)
{
return v___x_1292_;
}
else
{
size_t v___x_1295_; size_t v___x_1296_; lean_object* v___x_1297_; 
v___x_1295_ = ((size_t)0ULL);
v___x_1296_ = lean_usize_of_nat(v___x_1293_);
v___x_1297_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_tail_1291_, v___x_1295_, v___x_1296_, v___x_1292_);
return v___x_1297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0___boxed(lean_object* v_t_1298_, lean_object* v_init_1299_, lean_object* v_start_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(v_t_1298_, v_init_1299_, v_start_1300_);
lean_dec(v_start_1300_);
lean_dec_ref(v_t_1298_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds(lean_object* v_lctx_1304_){
_start:
{
lean_object* v_decls_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v_decls_1305_ = lean_ctor_get(v_lctx_1304_, 1);
v___x_1306_ = lean_unsigned_to_nat(0u);
v___x_1307_ = ((lean_object*)(l_Lean_LocalContext_getFVarIds___closed__0));
v___x_1308_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(v_decls_1305_, v___x_1307_, v___x_1306_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds___boxed(lean_object* v_lctx_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_Lean_LocalContext_getFVarIds(v_lctx_1309_);
lean_dec_ref(v_lctx_1309_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(size_t v_sz_1311_, size_t v_i_1312_, lean_object* v_bs_1313_){
_start:
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_usize_dec_lt(v_i_1312_, v_sz_1311_);
if (v___x_1314_ == 0)
{
return v_bs_1313_;
}
else
{
lean_object* v_v_1315_; lean_object* v___x_1316_; lean_object* v_bs_x27_1317_; lean_object* v___x_1318_; size_t v___x_1319_; size_t v___x_1320_; lean_object* v___x_1321_; 
v_v_1315_ = lean_array_uget(v_bs_1313_, v_i_1312_);
v___x_1316_ = lean_unsigned_to_nat(0u);
v_bs_x27_1317_ = lean_array_uset(v_bs_1313_, v_i_1312_, v___x_1316_);
v___x_1318_ = l_Lean_mkFVar(v_v_1315_);
v___x_1319_ = ((size_t)1ULL);
v___x_1320_ = lean_usize_add(v_i_1312_, v___x_1319_);
v___x_1321_ = lean_array_uset(v_bs_x27_1317_, v_i_1312_, v___x_1318_);
v_i_1312_ = v___x_1320_;
v_bs_1313_ = v___x_1321_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0___boxed(lean_object* v_sz_1323_, lean_object* v_i_1324_, lean_object* v_bs_1325_){
_start:
{
size_t v_sz_boxed_1326_; size_t v_i_boxed_1327_; lean_object* v_res_1328_; 
v_sz_boxed_1326_ = lean_unbox_usize(v_sz_1323_);
lean_dec(v_sz_1323_);
v_i_boxed_1327_ = lean_unbox_usize(v_i_1324_);
lean_dec(v_i_1324_);
v_res_1328_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(v_sz_boxed_1326_, v_i_boxed_1327_, v_bs_1325_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars(lean_object* v_lctx_1329_){
_start:
{
lean_object* v___x_1330_; size_t v_sz_1331_; size_t v___x_1332_; lean_object* v___x_1333_; 
v___x_1330_ = l_Lean_LocalContext_getFVarIds(v_lctx_1329_);
v_sz_1331_ = lean_array_size(v___x_1330_);
v___x_1332_ = ((size_t)0ULL);
v___x_1333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(v_sz_1331_, v___x_1332_, v___x_1330_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars___boxed(lean_object* v_lctx_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_LocalContext_getFVars(v_lctx_1334_);
lean_dec_ref(v_lctx_1334_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(lean_object* v_a_1336_){
_start:
{
lean_object* v_size_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; 
v_size_1337_ = lean_ctor_get(v_a_1336_, 2);
v___x_1338_ = lean_unsigned_to_nat(0u);
v___x_1339_ = lean_nat_dec_eq(v_size_1337_, v___x_1338_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1340_ = lean_box(0);
v___x_1341_ = lean_unsigned_to_nat(1u);
v___x_1342_ = lean_nat_sub(v_size_1337_, v___x_1341_);
v___x_1343_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1340_, v_a_1336_, v___x_1342_);
lean_dec(v___x_1342_);
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Lean_PersistentArray_pop___redArg(v_a_1336_);
v_a_1336_ = v___x_1344_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_1343_, 1);
return v_a_1336_;
}
}
else
{
return v_a_1336_;
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__2(lean_object* v_xs_1346_, lean_object* v_v_1347_, lean_object* v_i_1348_){
_start:
{
lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = lean_array_get_size(v_xs_1346_);
v___x_1350_ = lean_nat_dec_lt(v_i_1348_, v___x_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; 
lean_dec(v_i_1348_);
v___x_1351_ = lean_box(0);
return v___x_1351_;
}
else
{
lean_object* v___x_1352_; uint8_t v___x_1353_; 
v___x_1352_ = lean_array_fget_borrowed(v_xs_1346_, v_i_1348_);
v___x_1353_ = l_Lean_instBEqFVarId_beq(v___x_1352_, v_v_1347_);
if (v___x_1353_ == 0)
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = lean_unsigned_to_nat(1u);
v___x_1355_ = lean_nat_add(v_i_1348_, v___x_1354_);
lean_dec(v_i_1348_);
v_i_1348_ = v___x_1355_;
goto _start;
}
else
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1357_, 0, v_i_1348_);
return v___x_1357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_xs_1358_, lean_object* v_v_1359_, lean_object* v_i_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__2(v_xs_1358_, v_v_1359_, v_i_1360_);
lean_dec(v_v_1359_);
lean_dec_ref(v_xs_1358_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(lean_object* v_xs_1362_, lean_object* v_v_1363_){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_unsigned_to_nat(0u);
v___x_1365_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__2(v_xs_1362_, v_v_1363_, v___x_1364_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_1366_, lean_object* v_v_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(v_xs_1366_, v_v_1367_);
lean_dec(v_v_1367_);
lean_dec_ref(v_xs_1366_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(lean_object* v_x_1369_, size_t v_x_1370_, lean_object* v_x_1371_){
_start:
{
if (lean_obj_tag(v_x_1369_) == 0)
{
lean_object* v_es_1372_; lean_object* v___x_1373_; size_t v___x_1374_; size_t v___x_1375_; lean_object* v_j_1376_; lean_object* v_entry_1377_; 
v_es_1372_ = lean_ctor_get(v_x_1369_, 0);
v___x_1373_ = lean_box(2);
v___x_1374_ = ((size_t)31ULL);
v___x_1375_ = lean_usize_land(v_x_1370_, v___x_1374_);
v_j_1376_ = lean_usize_to_nat(v___x_1375_);
v_entry_1377_ = lean_array_get(v___x_1373_, v_es_1372_, v_j_1376_);
switch(lean_obj_tag(v_entry_1377_))
{
case 0:
{
lean_object* v_key_1378_; uint8_t v___x_1379_; 
v_key_1378_ = lean_ctor_get(v_entry_1377_, 0);
lean_inc(v_key_1378_);
lean_dec_ref_known(v_entry_1377_, 2);
v___x_1379_ = l_Lean_instBEqFVarId_beq(v_x_1371_, v_key_1378_);
lean_dec(v_key_1378_);
if (v___x_1379_ == 0)
{
lean_dec(v_j_1376_);
return v_x_1369_;
}
else
{
lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1387_; 
lean_inc_ref(v_es_1372_);
v_isSharedCheck_1387_ = !lean_is_exclusive(v_x_1369_);
if (v_isSharedCheck_1387_ == 0)
{
lean_object* v_unused_1388_; 
v_unused_1388_ = lean_ctor_get(v_x_1369_, 0);
lean_dec(v_unused_1388_);
v___x_1381_ = v_x_1369_;
v_isShared_1382_ = v_isSharedCheck_1387_;
goto v_resetjp_1380_;
}
else
{
lean_dec(v_x_1369_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1387_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1383_; lean_object* v___x_1385_; 
v___x_1383_ = lean_array_set(v_es_1372_, v_j_1376_, v___x_1373_);
lean_dec(v_j_1376_);
if (v_isShared_1382_ == 0)
{
lean_ctor_set(v___x_1381_, 0, v___x_1383_);
v___x_1385_ = v___x_1381_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v___x_1383_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
case 1:
{
lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1423_; 
lean_inc_ref(v_es_1372_);
v_isSharedCheck_1423_ = !lean_is_exclusive(v_x_1369_);
if (v_isSharedCheck_1423_ == 0)
{
lean_object* v_unused_1424_; 
v_unused_1424_ = lean_ctor_get(v_x_1369_, 0);
lean_dec(v_unused_1424_);
v___x_1390_ = v_x_1369_;
v_isShared_1391_ = v_isSharedCheck_1423_;
goto v_resetjp_1389_;
}
else
{
lean_dec(v_x_1369_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1423_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v_node_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1422_; 
v_node_1392_ = lean_ctor_get(v_entry_1377_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v_entry_1377_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1394_ = v_entry_1377_;
v_isShared_1395_ = v_isSharedCheck_1422_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_node_1392_);
lean_dec(v_entry_1377_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1422_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
size_t v___x_1396_; lean_object* v_entries_1397_; size_t v___x_1398_; lean_object* v_newNode_1399_; lean_object* v___x_1400_; 
v___x_1396_ = ((size_t)5ULL);
v_entries_1397_ = lean_array_set(v_es_1372_, v_j_1376_, v___x_1373_);
v___x_1398_ = lean_usize_shift_right(v_x_1370_, v___x_1396_);
v_newNode_1399_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_node_1392_, v___x_1398_, v_x_1371_);
lean_inc_ref(v_newNode_1399_);
v___x_1400_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_1399_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v___x_1402_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 0, v_newNode_1399_);
v___x_1402_ = v___x_1394_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_newNode_1399_);
v___x_1402_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
lean_object* v___x_1403_; lean_object* v___x_1405_; 
v___x_1403_ = lean_array_set(v_entries_1397_, v_j_1376_, v___x_1402_);
lean_dec(v_j_1376_);
if (v_isShared_1391_ == 0)
{
lean_ctor_set(v___x_1390_, 0, v___x_1403_);
v___x_1405_ = v___x_1390_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v___x_1403_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
else
{
lean_object* v_val_1408_; lean_object* v_fst_1409_; lean_object* v_snd_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1421_; 
lean_dec_ref(v_newNode_1399_);
lean_del_object(v___x_1394_);
v_val_1408_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_val_1408_);
lean_dec_ref_known(v___x_1400_, 1);
v_fst_1409_ = lean_ctor_get(v_val_1408_, 0);
v_snd_1410_ = lean_ctor_get(v_val_1408_, 1);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_val_1408_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1412_ = v_val_1408_;
v_isShared_1413_ = v_isSharedCheck_1421_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_snd_1410_);
lean_inc(v_fst_1409_);
lean_dec(v_val_1408_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1421_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_fst_1409_);
lean_ctor_set(v_reuseFailAlloc_1420_, 1, v_snd_1410_);
v___x_1415_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1416_ = lean_array_set(v_entries_1397_, v_j_1376_, v___x_1415_);
lean_dec(v_j_1376_);
if (v_isShared_1391_ == 0)
{
lean_ctor_set(v___x_1390_, 0, v___x_1416_);
v___x_1418_ = v___x_1390_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_1376_);
return v_x_1369_;
}
}
}
else
{
lean_object* v_ks_1425_; lean_object* v_vs_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1440_; 
v_ks_1425_ = lean_ctor_get(v_x_1369_, 0);
v_vs_1426_ = lean_ctor_get(v_x_1369_, 1);
v_isSharedCheck_1440_ = !lean_is_exclusive(v_x_1369_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1428_ = v_x_1369_;
v_isShared_1429_ = v_isSharedCheck_1440_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_vs_1426_);
lean_inc(v_ks_1425_);
lean_dec(v_x_1369_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1440_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(v_ks_1425_, v_x_1371_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v___x_1432_; 
if (v_isShared_1429_ == 0)
{
v___x_1432_ = v___x_1428_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_ks_1425_);
lean_ctor_set(v_reuseFailAlloc_1433_, 1, v_vs_1426_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
else
{
lean_object* v_val_1434_; lean_object* v_keys_x27_1435_; lean_object* v_vals_x27_1436_; lean_object* v___x_1438_; 
v_val_1434_ = lean_ctor_get(v___x_1430_, 0);
lean_inc_n(v_val_1434_, 2);
lean_dec_ref_known(v___x_1430_, 1);
v_keys_x27_1435_ = l_Array_eraseIdx___redArg(v_ks_1425_, v_val_1434_);
v_vals_x27_1436_ = l_Array_eraseIdx___redArg(v_vs_1426_, v_val_1434_);
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 1, v_vals_x27_1436_);
lean_ctor_set(v___x_1428_, 0, v_keys_x27_1435_);
v___x_1438_ = v___x_1428_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_keys_x27_1435_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_vals_x27_1436_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg___boxed(lean_object* v_x_1441_, lean_object* v_x_1442_, lean_object* v_x_1443_){
_start:
{
size_t v_x_282__boxed_1444_; lean_object* v_res_1445_; 
v_x_282__boxed_1444_ = lean_unbox_usize(v_x_1442_);
lean_dec(v_x_1442_);
v_res_1445_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_x_1441_, v_x_282__boxed_1444_, v_x_1443_);
lean_dec(v_x_1443_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(lean_object* v_x_1446_, lean_object* v_x_1447_){
_start:
{
uint64_t v___x_1448_; size_t v_h_1449_; lean_object* v___x_1450_; 
v___x_1448_ = l_Lean_instHashableFVarId_hash(v_x_1447_);
v_h_1449_ = lean_uint64_to_usize(v___x_1448_);
v___x_1450_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_x_1446_, v_h_1449_, v_x_1447_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg___boxed(lean_object* v_x_1451_, lean_object* v_x_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_x_1451_, v_x_1452_);
lean_dec(v_x_1452_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_erase(lean_object* v_lctx_1454_, lean_object* v_fvarId_1455_){
_start:
{
lean_object* v_fvarIdToDecl_1456_; lean_object* v_decls_1457_; lean_object* v_auxDeclToFullName_1458_; lean_object* v___x_1459_; 
v_fvarIdToDecl_1456_ = lean_ctor_get(v_lctx_1454_, 0);
v_decls_1457_ = lean_ctor_get(v_lctx_1454_, 1);
v_auxDeclToFullName_1458_ = lean_ctor_get(v_lctx_1454_, 2);
v___x_1459_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_fvarIdToDecl_1456_, v_fvarId_1455_);
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_dec(v_fvarId_1455_);
return v_lctx_1454_;
}
else
{
lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1479_; 
lean_inc(v_auxDeclToFullName_1458_);
lean_inc_ref(v_decls_1457_);
lean_inc_ref(v_fvarIdToDecl_1456_);
v_isSharedCheck_1479_ = !lean_is_exclusive(v_lctx_1454_);
if (v_isSharedCheck_1479_ == 0)
{
lean_object* v_unused_1480_; lean_object* v_unused_1481_; lean_object* v_unused_1482_; 
v_unused_1480_ = lean_ctor_get(v_lctx_1454_, 2);
lean_dec(v_unused_1480_);
v_unused_1481_ = lean_ctor_get(v_lctx_1454_, 1);
lean_dec(v_unused_1481_);
v_unused_1482_ = lean_ctor_get(v_lctx_1454_, 0);
lean_dec(v_unused_1482_);
v___x_1461_ = v_lctx_1454_;
v_isShared_1462_ = v_isSharedCheck_1479_;
goto v_resetjp_1460_;
}
else
{
lean_dec(v_lctx_1454_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1479_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v_val_1463_; lean_object* v___x_1464_; lean_object* v___y_1466_; lean_object* v_index_1478_; 
v_val_1463_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_val_1463_);
lean_dec_ref_known(v___x_1459_, 1);
v___x_1464_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_fvarIdToDecl_1456_, v_fvarId_1455_);
v_index_1478_ = lean_ctor_get(v_val_1463_, 0);
lean_inc(v_index_1478_);
v___y_1466_ = v_index_1478_;
goto v___jp_1465_;
v___jp_1465_:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; uint8_t v___x_1470_; 
v___x_1467_ = lean_box(0);
v___x_1468_ = l_Lean_PersistentArray_set___redArg(v_decls_1457_, v___y_1466_, v___x_1467_);
lean_dec(v___y_1466_);
v___x_1469_ = l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(v___x_1468_);
v___x_1470_ = l_Lean_LocalDecl_isAuxDecl(v_val_1463_);
lean_dec(v_val_1463_);
if (v___x_1470_ == 0)
{
lean_object* v___x_1472_; 
lean_dec(v_fvarId_1455_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 1, v___x_1469_);
lean_ctor_set(v___x_1461_, 0, v___x_1464_);
v___x_1472_ = v___x_1461_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1464_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v___x_1469_);
lean_ctor_set(v_reuseFailAlloc_1473_, 2, v_auxDeclToFullName_1458_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
else
{
lean_object* v___x_1474_; lean_object* v___x_1476_; 
v___x_1474_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_FVarIdSet_erase_spec__0___redArg(v_fvarId_1455_, v_auxDeclToFullName_1458_);
lean_dec(v_fvarId_1455_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 2, v___x_1474_);
lean_ctor_set(v___x_1461_, 1, v___x_1469_);
lean_ctor_set(v___x_1461_, 0, v___x_1464_);
v___x_1476_ = v___x_1461_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1464_);
lean_ctor_set(v_reuseFailAlloc_1477_, 1, v___x_1469_);
lean_ctor_set(v_reuseFailAlloc_1477_, 2, v___x_1474_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0(lean_object* v_00_u03b2_1483_, lean_object* v_x_1484_, lean_object* v_x_1485_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_x_1484_, v_x_1485_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___boxed(lean_object* v_00_u03b2_1487_, lean_object* v_x_1488_, lean_object* v_x_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0(v_00_u03b2_1487_, v_x_1488_, v_x_1489_);
lean_dec(v_x_1489_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0(lean_object* v_00_u03b2_1491_, lean_object* v_x_1492_, size_t v_x_1493_, lean_object* v_x_1494_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_x_1492_, v_x_1493_, v_x_1494_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1496_, lean_object* v_x_1497_, lean_object* v_x_1498_, lean_object* v_x_1499_){
_start:
{
size_t v_x_502__boxed_1500_; lean_object* v_res_1501_; 
v_x_502__boxed_1500_ = lean_unbox_usize(v_x_1498_);
lean_dec(v_x_1498_);
v_res_1501_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0(v_00_u03b2_1496_, v_x_1497_, v_x_502__boxed_1500_, v_x_1499_);
lean_dec(v_x_1499_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_pop(lean_object* v_lctx_1502_){
_start:
{
lean_object* v_decls_1503_; lean_object* v_fvarIdToDecl_1504_; lean_object* v_auxDeclToFullName_1505_; lean_object* v_size_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; 
v_decls_1503_ = lean_ctor_get(v_lctx_1502_, 1);
v_fvarIdToDecl_1504_ = lean_ctor_get(v_lctx_1502_, 0);
v_auxDeclToFullName_1505_ = lean_ctor_get(v_lctx_1502_, 2);
v_size_1506_ = lean_ctor_get(v_decls_1503_, 2);
v___x_1507_ = lean_unsigned_to_nat(0u);
v___x_1508_ = lean_nat_dec_eq(v_size_1506_, v___x_1507_);
if (v___x_1508_ == 0)
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1509_ = lean_box(0);
v___x_1510_ = lean_unsigned_to_nat(1u);
v___x_1511_ = lean_nat_sub(v_size_1506_, v___x_1510_);
v___x_1512_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1509_, v_decls_1503_, v___x_1511_);
lean_dec(v___x_1511_);
if (lean_obj_tag(v___x_1512_) == 0)
{
return v_lctx_1502_;
}
else
{
lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1531_; 
lean_inc(v_auxDeclToFullName_1505_);
lean_inc_ref(v_fvarIdToDecl_1504_);
lean_inc_ref(v_decls_1503_);
v_isSharedCheck_1531_ = !lean_is_exclusive(v_lctx_1502_);
if (v_isSharedCheck_1531_ == 0)
{
lean_object* v_unused_1532_; lean_object* v_unused_1533_; lean_object* v_unused_1534_; 
v_unused_1532_ = lean_ctor_get(v_lctx_1502_, 2);
lean_dec(v_unused_1532_);
v_unused_1533_ = lean_ctor_get(v_lctx_1502_, 1);
lean_dec(v_unused_1533_);
v_unused_1534_ = lean_ctor_get(v_lctx_1502_, 0);
lean_dec(v_unused_1534_);
v___x_1514_ = v_lctx_1502_;
v_isShared_1515_ = v_isSharedCheck_1531_;
goto v_resetjp_1513_;
}
else
{
lean_dec(v_lctx_1502_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1531_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v_val_1516_; lean_object* v___y_1518_; lean_object* v_fvarId_1530_; 
v_val_1516_ = lean_ctor_get(v___x_1512_, 0);
lean_inc(v_val_1516_);
lean_dec_ref_known(v___x_1512_, 1);
v_fvarId_1530_ = lean_ctor_get(v_val_1516_, 1);
lean_inc(v_fvarId_1530_);
v___y_1518_ = v_fvarId_1530_;
goto v___jp_1517_;
v___jp_1517_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; 
v___x_1519_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_fvarIdToDecl_1504_, v___y_1518_);
v___x_1520_ = l_Lean_PersistentArray_pop___redArg(v_decls_1503_);
v___x_1521_ = l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(v___x_1520_);
v___x_1522_ = l_Lean_LocalDecl_isAuxDecl(v_val_1516_);
lean_dec(v_val_1516_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1524_; 
lean_dec(v___y_1518_);
if (v_isShared_1515_ == 0)
{
lean_ctor_set(v___x_1514_, 1, v___x_1521_);
lean_ctor_set(v___x_1514_, 0, v___x_1519_);
v___x_1524_ = v___x_1514_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v___x_1521_);
lean_ctor_set(v_reuseFailAlloc_1525_, 2, v_auxDeclToFullName_1505_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
else
{
lean_object* v___x_1526_; lean_object* v___x_1528_; 
v___x_1526_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_FVarIdSet_erase_spec__0___redArg(v___y_1518_, v_auxDeclToFullName_1505_);
lean_dec(v___y_1518_);
if (v_isShared_1515_ == 0)
{
lean_ctor_set(v___x_1514_, 2, v___x_1526_);
lean_ctor_set(v___x_1514_, 1, v___x_1521_);
lean_ctor_set(v___x_1514_, 0, v___x_1519_);
v___x_1528_ = v___x_1514_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v___x_1521_);
lean_ctor_set(v_reuseFailAlloc_1529_, 2, v___x_1526_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
}
}
else
{
return v_lctx_1502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(lean_object* v_userName_1535_, lean_object* v_as_1536_, lean_object* v_i_1537_){
_start:
{
lean_object* v_zero_1538_; uint8_t v_isZero_1539_; 
v_zero_1538_ = lean_unsigned_to_nat(0u);
v_isZero_1539_ = lean_nat_dec_eq(v_i_1537_, v_zero_1538_);
if (v_isZero_1539_ == 1)
{
lean_object* v___x_1540_; 
lean_dec(v_i_1537_);
v___x_1540_ = lean_box(0);
return v___x_1540_;
}
else
{
lean_object* v_one_1541_; lean_object* v_n_1542_; lean_object* v___y_1544_; lean_object* v___x_1546_; lean_object* v___y_1548_; 
v_one_1541_ = lean_unsigned_to_nat(1u);
v_n_1542_ = lean_nat_sub(v_i_1537_, v_one_1541_);
lean_dec(v_i_1537_);
v___x_1546_ = lean_array_fget_borrowed(v_as_1536_, v_n_1542_);
if (lean_obj_tag(v___x_1546_) == 0)
{
v___y_1544_ = v___x_1546_;
goto v___jp_1543_;
}
else
{
lean_object* v_val_1551_; lean_object* v_userName_1552_; 
v_val_1551_ = lean_ctor_get(v___x_1546_, 0);
v_userName_1552_ = lean_ctor_get(v_val_1551_, 2);
v___y_1548_ = v_userName_1552_;
goto v___jp_1547_;
}
v___jp_1543_:
{
if (lean_obj_tag(v___y_1544_) == 0)
{
v_i_1537_ = v_n_1542_;
goto _start;
}
else
{
lean_dec(v_n_1542_);
lean_inc_ref(v___y_1544_);
return v___y_1544_;
}
}
v___jp_1547_:
{
uint8_t v___x_1549_; 
v___x_1549_ = lean_name_eq(v___y_1548_, v_userName_1535_);
if (v___x_1549_ == 0)
{
v_i_1537_ = v_n_1542_;
goto _start;
}
else
{
v___y_1544_ = v___x_1546_;
goto v___jp_1543_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_userName_1553_, lean_object* v_as_1554_, lean_object* v_i_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_1553_, v_as_1554_, v_i_1555_);
lean_dec_ref(v_as_1554_);
lean_dec(v_userName_1553_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(lean_object* v_userName_1557_, lean_object* v_as_1558_, lean_object* v_i_1559_){
_start:
{
lean_object* v_zero_1560_; uint8_t v_isZero_1561_; 
v_zero_1560_ = lean_unsigned_to_nat(0u);
v_isZero_1561_ = lean_nat_dec_eq(v_i_1559_, v_zero_1560_);
if (v_isZero_1561_ == 1)
{
lean_object* v___x_1562_; 
lean_dec(v_i_1559_);
v___x_1562_ = lean_box(0);
return v___x_1562_;
}
else
{
lean_object* v_one_1563_; lean_object* v_n_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v_one_1563_ = lean_unsigned_to_nat(1u);
v_n_1564_ = lean_nat_sub(v_i_1559_, v_one_1563_);
lean_dec(v_i_1559_);
v___x_1565_ = lean_array_fget_borrowed(v_as_1558_, v_n_1564_);
v___x_1566_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(v_userName_1557_, v___x_1565_);
if (lean_obj_tag(v___x_1566_) == 0)
{
v_i_1559_ = v_n_1564_;
goto _start;
}
else
{
lean_dec(v_n_1564_);
return v___x_1566_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(lean_object* v_userName_1568_, lean_object* v_x_1569_){
_start:
{
if (lean_obj_tag(v_x_1569_) == 0)
{
lean_object* v_cs_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v_cs_1570_ = lean_ctor_get(v_x_1569_, 0);
v___x_1571_ = lean_array_get_size(v_cs_1570_);
v___x_1572_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(v_userName_1568_, v_cs_1570_, v___x_1571_);
return v___x_1572_;
}
else
{
lean_object* v_vs_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v_vs_1573_ = lean_ctor_get(v_x_1569_, 0);
v___x_1574_ = lean_array_get_size(v_vs_1573_);
v___x_1575_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_1568_, v_vs_1573_, v___x_1574_);
return v___x_1575_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1___boxed(lean_object* v_userName_1576_, lean_object* v_x_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(v_userName_1576_, v_x_1577_);
lean_dec_ref(v_x_1577_);
lean_dec(v_userName_1576_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_userName_1579_, lean_object* v_as_1580_, lean_object* v_i_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(v_userName_1579_, v_as_1580_, v_i_1581_);
lean_dec_ref(v_as_1580_);
lean_dec(v_userName_1579_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(lean_object* v_userName_1583_, lean_object* v_t_1584_){
_start:
{
lean_object* v_root_1585_; lean_object* v_tail_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v_root_1585_ = lean_ctor_get(v_t_1584_, 0);
v_tail_1586_ = lean_ctor_get(v_t_1584_, 1);
v___x_1587_ = lean_array_get_size(v_tail_1586_);
v___x_1588_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_1583_, v_tail_1586_, v___x_1587_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(v_userName_1583_, v_root_1585_);
return v___x_1589_;
}
else
{
return v___x_1588_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0___boxed(lean_object* v_userName_1590_, lean_object* v_t_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(v_userName_1590_, v_t_1591_);
lean_dec_ref(v_t_1591_);
lean_dec(v_userName_1590_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object* v_lctx_1593_, lean_object* v_userName_1594_){
_start:
{
lean_object* v_decls_1595_; lean_object* v___x_1596_; 
v_decls_1595_ = lean_ctor_get(v_lctx_1593_, 1);
v___x_1596_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(v_userName_1594_, v_decls_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f___boxed(lean_object* v_lctx_1597_, lean_object* v_userName_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_1597_, v_userName_1598_);
lean_dec(v_userName_1598_);
lean_dec_ref(v_lctx_1597_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0(lean_object* v_userName_1600_, lean_object* v_as_1601_, lean_object* v_i_1602_, lean_object* v_a_1603_){
_start:
{
lean_object* v___x_1604_; 
v___x_1604_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_1600_, v_as_1601_, v_i_1602_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___boxed(lean_object* v_userName_1605_, lean_object* v_as_1606_, lean_object* v_i_1607_, lean_object* v_a_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0(v_userName_1605_, v_as_1606_, v_i_1607_, v_a_1608_);
lean_dec_ref(v_as_1606_);
lean_dec(v_userName_1605_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2(lean_object* v_userName_1610_, lean_object* v_as_1611_, lean_object* v_i_1612_, lean_object* v_a_1613_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(v_userName_1610_, v_as_1611_, v_i_1612_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___boxed(lean_object* v_userName_1615_, lean_object* v_as_1616_, lean_object* v_i_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2(v_userName_1615_, v_as_1616_, v_i_1617_, v_a_1618_);
lean_dec_ref(v_as_1616_);
lean_dec(v_userName_1615_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21(lean_object* v_lctx_1623_, lean_object* v_userName_1624_){
_start:
{
lean_object* v___x_1625_; 
v___x_1625_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_1623_, v_userName_1624_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1626_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_1627_ = ((lean_object*)(l_Lean_LocalContext_getFromUserName_x21___closed__0));
v___x_1628_ = lean_unsigned_to_nat(403u);
v___x_1629_ = lean_unsigned_to_nat(17u);
v___x_1630_ = ((lean_object*)(l_Lean_LocalContext_getFromUserName_x21___closed__1));
v___x_1631_ = 1;
v___x_1632_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_userName_1624_, v___x_1631_);
v___x_1633_ = lean_string_append(v___x_1630_, v___x_1632_);
lean_dec_ref(v___x_1632_);
v___x_1634_ = ((lean_object*)(l_Lean_LocalContext_getFromUserName_x21___closed__2));
v___x_1635_ = lean_string_append(v___x_1633_, v___x_1634_);
v___x_1636_ = l_mkPanicMessageWithDecl(v___x_1626_, v___x_1627_, v___x_1628_, v___x_1629_, v___x_1635_);
lean_dec_ref(v___x_1635_);
v___x_1637_ = l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(v___x_1636_);
return v___x_1637_;
}
else
{
lean_object* v_val_1638_; 
lean_dec(v_userName_1624_);
v_val_1638_ = lean_ctor_get(v___x_1625_, 0);
lean_inc(v_val_1638_);
lean_dec_ref_known(v___x_1625_, 1);
return v_val_1638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21___boxed(lean_object* v_lctx_1639_, lean_object* v_userName_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lean_LocalContext_getFromUserName_x21(v_lctx_1639_, v_userName_1640_);
lean_dec_ref(v_lctx_1639_);
return v_res_1641_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_usesUserName(lean_object* v_lctx_1642_, lean_object* v_userName_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_1642_, v_userName_1643_);
if (lean_obj_tag(v___x_1644_) == 0)
{
uint8_t v___x_1645_; 
v___x_1645_ = 0;
return v___x_1645_;
}
else
{
uint8_t v___x_1646_; 
lean_dec_ref_known(v___x_1644_, 1);
v___x_1646_ = 1;
return v___x_1646_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_usesUserName___boxed(lean_object* v_lctx_1647_, lean_object* v_userName_1648_){
_start:
{
uint8_t v_res_1649_; lean_object* v_r_1650_; 
v_res_1649_ = l_Lean_LocalContext_usesUserName(v_lctx_1647_, v_userName_1648_);
lean_dec(v_userName_1648_);
lean_dec_ref(v_lctx_1647_);
v_r_1650_ = lean_box(v_res_1649_);
return v_r_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(lean_object* v_lctx_1651_, lean_object* v_suggestion_1652_, lean_object* v_i_1653_){
_start:
{
lean_object* v_curr_1654_; uint8_t v___x_1655_; 
lean_inc(v_i_1653_);
lean_inc(v_suggestion_1652_);
v_curr_1654_ = lean_name_append_index_after(v_suggestion_1652_, v_i_1653_);
v___x_1655_ = l_Lean_LocalContext_usesUserName(v_lctx_1651_, v_curr_1654_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
lean_dec(v_suggestion_1652_);
v___x_1656_ = lean_unsigned_to_nat(1u);
v___x_1657_ = lean_nat_add(v_i_1653_, v___x_1656_);
lean_dec(v_i_1653_);
v___x_1658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1658_, 0, v_curr_1654_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
return v___x_1658_;
}
else
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
lean_dec(v_curr_1654_);
v___x_1659_ = lean_unsigned_to_nat(1u);
v___x_1660_ = lean_nat_add(v_i_1653_, v___x_1659_);
lean_dec(v_i_1653_);
v_i_1653_ = v___x_1660_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux___boxed(lean_object* v_lctx_1662_, lean_object* v_suggestion_1663_, lean_object* v_i_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(v_lctx_1662_, v_suggestion_1663_, v_i_1664_);
lean_dec_ref(v_lctx_1662_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName(lean_object* v_lctx_1666_, lean_object* v_suggestion_1667_){
_start:
{
lean_object* v_suggestion_1668_; uint8_t v___x_1669_; 
v_suggestion_1668_ = l_Lean_Name_eraseMacroScopes(v_suggestion_1667_);
v___x_1669_ = l_Lean_LocalContext_usesUserName(v_lctx_1666_, v_suggestion_1668_);
if (v___x_1669_ == 0)
{
return v_suggestion_1668_;
}
else
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v_fst_1672_; 
v___x_1670_ = lean_unsigned_to_nat(1u);
v___x_1671_ = l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(v_lctx_1666_, v_suggestion_1668_, v___x_1670_);
v_fst_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_fst_1672_);
lean_dec_ref(v___x_1671_);
return v_fst_1672_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName___boxed(lean_object* v_lctx_1673_, lean_object* v_suggestion_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lean_LocalContext_getUnusedName(v_lctx_1673_, v_suggestion_1674_);
lean_dec(v_suggestion_1674_);
lean_dec_ref(v_lctx_1673_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl(lean_object* v_lctx_1676_){
_start:
{
lean_object* v_decls_1677_; lean_object* v_size_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
v_decls_1677_ = lean_ctor_get(v_lctx_1676_, 1);
v_size_1678_ = lean_ctor_get(v_decls_1677_, 2);
v___x_1679_ = lean_box(0);
v___x_1680_ = lean_unsigned_to_nat(1u);
v___x_1681_ = lean_nat_sub(v_size_1678_, v___x_1680_);
v___x_1682_ = lean_nat_dec_lt(v___x_1681_, v_size_1678_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; 
lean_dec(v___x_1681_);
v___x_1683_ = l_outOfBounds___redArg(v___x_1679_);
return v___x_1683_;
}
else
{
lean_object* v___x_1684_; 
v___x_1684_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1679_, v_decls_1677_, v___x_1681_);
lean_dec(v___x_1681_);
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl___boxed(lean_object* v_lctx_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lean_LocalContext_lastDecl(v_lctx_1685_);
lean_dec_ref(v_lctx_1685_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setUserName(lean_object* v_lctx_1687_, lean_object* v_fvarId_1688_, lean_object* v_userName_1689_){
_start:
{
lean_object* v_fvarIdToDecl_1690_; lean_object* v_decls_1691_; lean_object* v_auxDeclToFullName_1692_; lean_object* v_decl_1693_; lean_object* v_decl_1694_; lean_object* v___y_1696_; lean_object* v___y_1697_; lean_object* v___y_1702_; lean_object* v_fvarId_1705_; 
v_fvarIdToDecl_1690_ = lean_ctor_get(v_lctx_1687_, 0);
lean_inc_ref(v_fvarIdToDecl_1690_);
v_decls_1691_ = lean_ctor_get(v_lctx_1687_, 1);
lean_inc_ref(v_decls_1691_);
v_auxDeclToFullName_1692_ = lean_ctor_get(v_lctx_1687_, 2);
lean_inc(v_auxDeclToFullName_1692_);
v_decl_1693_ = l_Lean_LocalContext_get_x21(v_lctx_1687_, v_fvarId_1688_);
v_decl_1694_ = l_Lean_LocalDecl_setUserName(v_decl_1693_, v_userName_1689_);
v_fvarId_1705_ = lean_ctor_get(v_decl_1694_, 1);
lean_inc(v_fvarId_1705_);
v___y_1702_ = v_fvarId_1705_;
goto v___jp_1701_;
v___jp_1695_:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_decl_1694_);
v___x_1699_ = l_Lean_PersistentArray_set___redArg(v_decls_1691_, v___y_1697_, v___x_1698_);
lean_dec(v___y_1697_);
v___x_1700_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1700_, 0, v___y_1696_);
lean_ctor_set(v___x_1700_, 1, v___x_1699_);
lean_ctor_set(v___x_1700_, 2, v_auxDeclToFullName_1692_);
return v___x_1700_;
}
v___jp_1701_:
{
lean_object* v___x_1703_; lean_object* v_index_1704_; 
lean_inc_ref(v_decl_1694_);
v___x_1703_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_1690_, v___y_1702_, v_decl_1694_);
v_index_1704_ = lean_ctor_get(v_decl_1694_, 0);
lean_inc(v_index_1704_);
v___y_1696_ = v___x_1703_;
v___y_1697_ = v_index_1704_;
goto v___jp_1695_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName(lean_object* v_lctx_1706_, lean_object* v_fromName_1707_, lean_object* v_toName_1708_){
_start:
{
lean_object* v_fvarIdToDecl_1709_; lean_object* v_decls_1710_; lean_object* v_auxDeclToFullName_1711_; lean_object* v___x_1712_; 
v_fvarIdToDecl_1709_ = lean_ctor_get(v_lctx_1706_, 0);
v_decls_1710_ = lean_ctor_get(v_lctx_1706_, 1);
v_auxDeclToFullName_1711_ = lean_ctor_get(v_lctx_1706_, 2);
v___x_1712_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_1706_, v_fromName_1707_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_dec(v_toName_1708_);
return v_lctx_1706_;
}
else
{
lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1737_; 
lean_inc(v_auxDeclToFullName_1711_);
lean_inc_ref(v_decls_1710_);
lean_inc_ref(v_fvarIdToDecl_1709_);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_lctx_1706_);
if (v_isSharedCheck_1737_ == 0)
{
lean_object* v_unused_1738_; lean_object* v_unused_1739_; lean_object* v_unused_1740_; 
v_unused_1738_ = lean_ctor_get(v_lctx_1706_, 2);
lean_dec(v_unused_1738_);
v_unused_1739_ = lean_ctor_get(v_lctx_1706_, 1);
lean_dec(v_unused_1739_);
v_unused_1740_ = lean_ctor_get(v_lctx_1706_, 0);
lean_dec(v_unused_1740_);
v___x_1714_ = v_lctx_1706_;
v_isShared_1715_ = v_isSharedCheck_1737_;
goto v_resetjp_1713_;
}
else
{
lean_dec(v_lctx_1706_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1737_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v_val_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1736_; 
v_val_1716_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1718_ = v___x_1712_;
v_isShared_1719_ = v_isSharedCheck_1736_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_val_1716_);
lean_dec(v___x_1712_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1736_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v_decl_1720_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1732_; lean_object* v_fvarId_1735_; 
v_decl_1720_ = l_Lean_LocalDecl_setUserName(v_val_1716_, v_toName_1708_);
v_fvarId_1735_ = lean_ctor_get(v_decl_1720_, 1);
lean_inc(v_fvarId_1735_);
v___y_1732_ = v_fvarId_1735_;
goto v___jp_1731_;
v___jp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v_decl_1720_);
v___x_1725_ = v___x_1718_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_decl_1720_);
v___x_1725_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1726_; lean_object* v___x_1728_; 
v___x_1726_ = l_Lean_PersistentArray_set___redArg(v_decls_1710_, v___y_1723_, v___x_1725_);
lean_dec(v___y_1723_);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 1, v___x_1726_);
lean_ctor_set(v___x_1714_, 0, v___y_1722_);
v___x_1728_ = v___x_1714_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v___y_1722_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v___x_1726_);
lean_ctor_set(v_reuseFailAlloc_1729_, 2, v_auxDeclToFullName_1711_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
v___jp_1731_:
{
lean_object* v___x_1733_; lean_object* v_index_1734_; 
lean_inc_ref(v_decl_1720_);
v___x_1733_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_1709_, v___y_1732_, v_decl_1720_);
v_index_1734_ = lean_ctor_get(v_decl_1720_, 0);
lean_inc(v_index_1734_);
v___y_1722_ = v___x_1733_;
v___y_1723_ = v_index_1734_;
goto v___jp_1721_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName___boxed(lean_object* v_lctx_1741_, lean_object* v_fromName_1742_, lean_object* v_toName_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lean_LocalContext_renameUserName(v_lctx_1741_, v_fromName_1742_, v_toName_1743_);
lean_dec(v_fromName_1742_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecl(lean_object* v_lctx_1747_, lean_object* v_fvarId_1748_, lean_object* v_f_1749_){
_start:
{
lean_object* v_fvarIdToDecl_1750_; lean_object* v_decls_1751_; lean_object* v_auxDeclToFullName_1752_; lean_object* v___x_1753_; 
v_fvarIdToDecl_1750_ = lean_ctor_get(v_lctx_1747_, 0);
v_decls_1751_ = lean_ctor_get(v_lctx_1747_, 1);
v_auxDeclToFullName_1752_ = lean_ctor_get(v_lctx_1747_, 2);
lean_inc_ref(v_lctx_1747_);
v___x_1753_ = lean_local_ctx_find(v_lctx_1747_, v_fvarId_1748_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_dec_ref(v_f_1749_);
return v_lctx_1747_;
}
else
{
lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1780_; 
lean_inc(v_auxDeclToFullName_1752_);
lean_inc_ref(v_decls_1751_);
lean_inc_ref(v_fvarIdToDecl_1750_);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_lctx_1747_);
if (v_isSharedCheck_1780_ == 0)
{
lean_object* v_unused_1781_; lean_object* v_unused_1782_; lean_object* v_unused_1783_; 
v_unused_1781_ = lean_ctor_get(v_lctx_1747_, 2);
lean_dec(v_unused_1781_);
v_unused_1782_ = lean_ctor_get(v_lctx_1747_, 1);
lean_dec(v_unused_1782_);
v_unused_1783_ = lean_ctor_get(v_lctx_1747_, 0);
lean_dec(v_unused_1783_);
v___x_1755_ = v_lctx_1747_;
v_isShared_1756_ = v_isSharedCheck_1780_;
goto v_resetjp_1754_;
}
else
{
lean_dec(v_lctx_1747_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1780_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v_val_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1779_; 
v_val_1757_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1759_ = v___x_1753_;
v_isShared_1760_ = v_isSharedCheck_1779_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_val_1757_);
lean_dec(v___x_1753_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1779_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v_decl_1763_; lean_object* v___y_1765_; lean_object* v___y_1766_; lean_object* v___y_1775_; lean_object* v_fvarId_1778_; 
v___x_1761_ = ((lean_object*)(l_Lean_LocalContext_modifyLocalDecl___closed__0));
v___x_1762_ = ((lean_object*)(l_Lean_LocalContext_modifyLocalDecl___closed__1));
v_decl_1763_ = lean_apply_1(v_f_1749_, v_val_1757_);
v_fvarId_1778_ = lean_ctor_get(v_decl_1763_, 1);
lean_inc(v_fvarId_1778_);
v___y_1775_ = v_fvarId_1778_;
goto v___jp_1774_;
v___jp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v_decl_1763_);
v___x_1768_ = v___x_1759_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_decl_1763_);
v___x_1768_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1769_ = l_Lean_PersistentArray_set___redArg(v_decls_1751_, v___y_1766_, v___x_1768_);
lean_dec(v___y_1766_);
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 1, v___x_1769_);
lean_ctor_set(v___x_1755_, 0, v___y_1765_);
v___x_1771_ = v___x_1755_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___y_1765_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v___x_1769_);
lean_ctor_set(v_reuseFailAlloc_1772_, 2, v_auxDeclToFullName_1752_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
v___jp_1774_:
{
lean_object* v___x_1776_; lean_object* v_index_1777_; 
lean_inc_ref(v_decl_1763_);
v___x_1776_ = l_Lean_PersistentHashMap_insert___redArg(v___x_1761_, v___x_1762_, v_fvarIdToDecl_1750_, v___y_1775_, v_decl_1763_);
v_index_1777_ = lean_ctor_get(v_decl_1763_, 0);
lean_inc(v_index_1777_);
v___y_1765_ = v___x_1776_;
v___y_1766_ = v_index_1777_;
goto v___jp_1764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(lean_object* v_f_1784_, lean_object* v_as_1785_, size_t v_i_1786_, size_t v_stop_1787_, lean_object* v_b_1788_){
_start:
{
lean_object* v___y_1790_; uint8_t v___x_1794_; 
v___x_1794_ = lean_usize_dec_eq(v_i_1786_, v_stop_1787_);
if (v___x_1794_ == 0)
{
lean_object* v___x_1795_; 
v___x_1795_ = lean_array_uget(v_as_1785_, v_i_1786_);
if (lean_obj_tag(v___x_1795_) == 0)
{
v___y_1790_ = v_b_1788_;
goto v___jp_1789_;
}
else
{
lean_object* v_val_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1823_; 
v_val_1796_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1798_ = v___x_1795_;
v_isShared_1799_ = v_isSharedCheck_1823_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_val_1796_);
lean_dec(v___x_1795_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1823_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v_fvarIdToDecl_1800_; lean_object* v_decls_1801_; lean_object* v_auxDeclToFullName_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1822_; 
v_fvarIdToDecl_1800_ = lean_ctor_get(v_b_1788_, 0);
v_decls_1801_ = lean_ctor_get(v_b_1788_, 1);
v_auxDeclToFullName_1802_ = lean_ctor_get(v_b_1788_, 2);
v_isSharedCheck_1822_ = !lean_is_exclusive(v_b_1788_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1804_ = v_b_1788_;
v_isShared_1805_ = v_isSharedCheck_1822_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_auxDeclToFullName_1802_);
lean_inc(v_decls_1801_);
lean_inc(v_fvarIdToDecl_1800_);
lean_dec(v_b_1788_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1822_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v_decl_1806_; lean_object* v___y_1808_; lean_object* v___y_1809_; lean_object* v___y_1818_; lean_object* v_fvarId_1821_; 
lean_inc_ref(v_f_1784_);
v_decl_1806_ = lean_apply_1(v_f_1784_, v_val_1796_);
v_fvarId_1821_ = lean_ctor_get(v_decl_1806_, 1);
lean_inc(v_fvarId_1821_);
v___y_1818_ = v_fvarId_1821_;
goto v___jp_1817_;
v___jp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v_decl_1806_);
v___x_1811_ = v___x_1798_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_decl_1806_);
v___x_1811_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
lean_object* v___x_1812_; lean_object* v___x_1814_; 
v___x_1812_ = l_Lean_PersistentArray_set___redArg(v_decls_1801_, v___y_1809_, v___x_1811_);
lean_dec(v___y_1809_);
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 1, v___x_1812_);
lean_ctor_set(v___x_1804_, 0, v___y_1808_);
v___x_1814_ = v___x_1804_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___y_1808_);
lean_ctor_set(v_reuseFailAlloc_1815_, 1, v___x_1812_);
lean_ctor_set(v_reuseFailAlloc_1815_, 2, v_auxDeclToFullName_1802_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
v___y_1790_ = v___x_1814_;
goto v___jp_1789_;
}
}
}
v___jp_1817_:
{
lean_object* v___x_1819_; lean_object* v_index_1820_; 
lean_inc_ref(v_decl_1806_);
v___x_1819_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_1800_, v___y_1818_, v_decl_1806_);
v_index_1820_ = lean_ctor_get(v_decl_1806_, 0);
lean_inc(v_index_1820_);
v___y_1808_ = v___x_1819_;
v___y_1809_ = v_index_1820_;
goto v___jp_1807_;
}
}
}
}
}
else
{
lean_dec_ref(v_f_1784_);
return v_b_1788_;
}
v___jp_1789_:
{
size_t v___x_1791_; size_t v___x_1792_; 
v___x_1791_ = ((size_t)1ULL);
v___x_1792_ = lean_usize_add(v_i_1786_, v___x_1791_);
v_i_1786_ = v___x_1792_;
v_b_1788_ = v___y_1790_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1___boxed(lean_object* v_f_1824_, lean_object* v_as_1825_, lean_object* v_i_1826_, lean_object* v_stop_1827_, lean_object* v_b_1828_){
_start:
{
size_t v_i_boxed_1829_; size_t v_stop_boxed_1830_; lean_object* v_res_1831_; 
v_i_boxed_1829_ = lean_unbox_usize(v_i_1826_);
lean_dec(v_i_1826_);
v_stop_boxed_1830_ = lean_unbox_usize(v_stop_1827_);
lean_dec(v_stop_1827_);
v_res_1831_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_1824_, v_as_1825_, v_i_boxed_1829_, v_stop_boxed_1830_, v_b_1828_);
lean_dec_ref(v_as_1825_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(lean_object* v_f_1832_, lean_object* v_x_1833_, lean_object* v_x_1834_){
_start:
{
if (lean_obj_tag(v_x_1833_) == 0)
{
lean_object* v_cs_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; 
v_cs_1835_ = lean_ctor_get(v_x_1833_, 0);
v___x_1836_ = lean_unsigned_to_nat(0u);
v___x_1837_ = lean_array_get_size(v_cs_1835_);
v___x_1838_ = lean_nat_dec_lt(v___x_1836_, v___x_1837_);
if (v___x_1838_ == 0)
{
lean_dec_ref(v_f_1832_);
return v_x_1834_;
}
else
{
size_t v___x_1839_; size_t v___x_1840_; lean_object* v___x_1841_; 
v___x_1839_ = ((size_t)0ULL);
v___x_1840_ = lean_usize_of_nat(v___x_1837_);
v___x_1841_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(v_f_1832_, v_cs_1835_, v___x_1839_, v___x_1840_, v_x_1834_);
return v___x_1841_;
}
}
else
{
lean_object* v_vs_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; uint8_t v___x_1845_; 
v_vs_1842_ = lean_ctor_get(v_x_1833_, 0);
v___x_1843_ = lean_unsigned_to_nat(0u);
v___x_1844_ = lean_array_get_size(v_vs_1842_);
v___x_1845_ = lean_nat_dec_lt(v___x_1843_, v___x_1844_);
if (v___x_1845_ == 0)
{
lean_dec_ref(v_f_1832_);
return v_x_1834_;
}
else
{
size_t v___x_1846_; size_t v___x_1847_; lean_object* v___x_1848_; 
v___x_1846_ = ((size_t)0ULL);
v___x_1847_ = lean_usize_of_nat(v___x_1844_);
v___x_1848_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_1832_, v_vs_1842_, v___x_1846_, v___x_1847_, v_x_1834_);
return v___x_1848_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(lean_object* v_f_1849_, lean_object* v_as_1850_, size_t v_i_1851_, size_t v_stop_1852_, lean_object* v_b_1853_){
_start:
{
uint8_t v___x_1854_; 
v___x_1854_ = lean_usize_dec_eq(v_i_1851_, v_stop_1852_);
if (v___x_1854_ == 0)
{
lean_object* v___x_1855_; lean_object* v___x_1856_; size_t v___x_1857_; size_t v___x_1858_; 
v___x_1855_ = lean_array_uget_borrowed(v_as_1850_, v_i_1851_);
lean_inc_ref(v_f_1849_);
v___x_1856_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(v_f_1849_, v___x_1855_, v_b_1853_);
v___x_1857_ = ((size_t)1ULL);
v___x_1858_ = lean_usize_add(v_i_1851_, v___x_1857_);
v_i_1851_ = v___x_1858_;
v_b_1853_ = v___x_1856_;
goto _start;
}
else
{
lean_dec_ref(v_f_1849_);
return v_b_1853_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1___boxed(lean_object* v_f_1860_, lean_object* v_as_1861_, lean_object* v_i_1862_, lean_object* v_stop_1863_, lean_object* v_b_1864_){
_start:
{
size_t v_i_boxed_1865_; size_t v_stop_boxed_1866_; lean_object* v_res_1867_; 
v_i_boxed_1865_ = lean_unbox_usize(v_i_1862_);
lean_dec(v_i_1862_);
v_stop_boxed_1866_ = lean_unbox_usize(v_stop_1863_);
lean_dec(v_stop_1863_);
v_res_1867_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(v_f_1860_, v_as_1861_, v_i_boxed_1865_, v_stop_boxed_1866_, v_b_1864_);
lean_dec_ref(v_as_1861_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2___boxed(lean_object* v_f_1868_, lean_object* v_x_1869_, lean_object* v_x_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(v_f_1868_, v_x_1869_, v_x_1870_);
lean_dec_ref(v_x_1869_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(lean_object* v_f_1872_, lean_object* v_x_1873_, size_t v_x_1874_, size_t v_x_1875_, lean_object* v_x_1876_){
_start:
{
if (lean_obj_tag(v_x_1873_) == 0)
{
lean_object* v_cs_1877_; lean_object* v___x_1878_; size_t v___x_1879_; lean_object* v_j_1880_; lean_object* v___x_1881_; size_t v___x_1882_; size_t v___x_1883_; size_t v___x_1884_; size_t v___x_1885_; size_t v___x_1886_; size_t v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; uint8_t v___x_1892_; 
v_cs_1877_ = lean_ctor_get(v_x_1873_, 0);
v___x_1878_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0);
v___x_1879_ = lean_usize_shift_right(v_x_1874_, v_x_1875_);
v_j_1880_ = lean_usize_to_nat(v___x_1879_);
v___x_1881_ = lean_array_get_borrowed(v___x_1878_, v_cs_1877_, v_j_1880_);
v___x_1882_ = ((size_t)1ULL);
v___x_1883_ = lean_usize_shift_left(v___x_1882_, v_x_1875_);
v___x_1884_ = lean_usize_sub(v___x_1883_, v___x_1882_);
v___x_1885_ = lean_usize_land(v_x_1874_, v___x_1884_);
v___x_1886_ = ((size_t)5ULL);
v___x_1887_ = lean_usize_sub(v_x_1875_, v___x_1886_);
lean_inc_ref(v_f_1872_);
v___x_1888_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(v_f_1872_, v___x_1881_, v___x_1885_, v___x_1887_, v_x_1876_);
v___x_1889_ = lean_unsigned_to_nat(1u);
v___x_1890_ = lean_nat_add(v_j_1880_, v___x_1889_);
lean_dec(v_j_1880_);
v___x_1891_ = lean_array_get_size(v_cs_1877_);
v___x_1892_ = lean_nat_dec_lt(v___x_1890_, v___x_1891_);
if (v___x_1892_ == 0)
{
lean_dec(v___x_1890_);
lean_dec_ref(v_f_1872_);
return v___x_1888_;
}
else
{
size_t v___x_1893_; size_t v___x_1894_; lean_object* v___x_1895_; 
v___x_1893_ = lean_usize_of_nat(v___x_1890_);
lean_dec(v___x_1890_);
v___x_1894_ = lean_usize_of_nat(v___x_1891_);
v___x_1895_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(v_f_1872_, v_cs_1877_, v___x_1893_, v___x_1894_, v___x_1888_);
return v___x_1895_;
}
}
else
{
lean_object* v_vs_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; uint8_t v___x_1899_; 
v_vs_1896_ = lean_ctor_get(v_x_1873_, 0);
v___x_1897_ = lean_usize_to_nat(v_x_1874_);
v___x_1898_ = lean_array_get_size(v_vs_1896_);
v___x_1899_ = lean_nat_dec_lt(v___x_1897_, v___x_1898_);
if (v___x_1899_ == 0)
{
lean_dec(v___x_1897_);
lean_dec_ref(v_f_1872_);
return v_x_1876_;
}
else
{
size_t v___x_1900_; size_t v___x_1901_; lean_object* v___x_1902_; 
v___x_1900_ = lean_usize_of_nat(v___x_1897_);
lean_dec(v___x_1897_);
v___x_1901_ = lean_usize_of_nat(v___x_1898_);
v___x_1902_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_1872_, v_vs_1896_, v___x_1900_, v___x_1901_, v_x_1876_);
return v___x_1902_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0___boxed(lean_object* v_f_1903_, lean_object* v_x_1904_, lean_object* v_x_1905_, lean_object* v_x_1906_, lean_object* v_x_1907_){
_start:
{
size_t v_x_1489__boxed_1908_; size_t v_x_1490__boxed_1909_; lean_object* v_res_1910_; 
v_x_1489__boxed_1908_ = lean_unbox_usize(v_x_1905_);
lean_dec(v_x_1905_);
v_x_1490__boxed_1909_ = lean_unbox_usize(v_x_1906_);
lean_dec(v_x_1906_);
v_res_1910_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(v_f_1903_, v_x_1904_, v_x_1489__boxed_1908_, v_x_1490__boxed_1909_, v_x_1907_);
lean_dec_ref(v_x_1904_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(lean_object* v_f_1911_, lean_object* v_t_1912_, lean_object* v_init_1913_, lean_object* v_start_1914_){
_start:
{
lean_object* v___x_1915_; uint8_t v___x_1916_; 
v___x_1915_ = lean_unsigned_to_nat(0u);
v___x_1916_ = lean_nat_dec_eq(v_start_1914_, v___x_1915_);
if (v___x_1916_ == 0)
{
lean_object* v_root_1917_; lean_object* v_tail_1918_; size_t v_shift_1919_; lean_object* v_tailOff_1920_; uint8_t v___x_1921_; 
v_root_1917_ = lean_ctor_get(v_t_1912_, 0);
v_tail_1918_ = lean_ctor_get(v_t_1912_, 1);
v_shift_1919_ = lean_ctor_get_usize(v_t_1912_, 4);
v_tailOff_1920_ = lean_ctor_get(v_t_1912_, 3);
v___x_1921_ = lean_nat_dec_le(v_tailOff_1920_, v_start_1914_);
if (v___x_1921_ == 0)
{
size_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; uint8_t v___x_1925_; 
v___x_1922_ = lean_usize_of_nat(v_start_1914_);
lean_inc_ref(v_f_1911_);
v___x_1923_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(v_f_1911_, v_root_1917_, v___x_1922_, v_shift_1919_, v_init_1913_);
v___x_1924_ = lean_array_get_size(v_tail_1918_);
v___x_1925_ = lean_nat_dec_lt(v___x_1915_, v___x_1924_);
if (v___x_1925_ == 0)
{
lean_dec_ref(v_f_1911_);
return v___x_1923_;
}
else
{
size_t v___x_1926_; size_t v___x_1927_; lean_object* v___x_1928_; 
v___x_1926_ = ((size_t)0ULL);
v___x_1927_ = lean_usize_of_nat(v___x_1924_);
v___x_1928_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_1911_, v_tail_1918_, v___x_1926_, v___x_1927_, v___x_1923_);
return v___x_1928_;
}
}
else
{
lean_object* v___x_1929_; lean_object* v___x_1930_; uint8_t v___x_1931_; 
v___x_1929_ = lean_nat_sub(v_start_1914_, v_tailOff_1920_);
v___x_1930_ = lean_array_get_size(v_tail_1918_);
v___x_1931_ = lean_nat_dec_lt(v___x_1929_, v___x_1930_);
if (v___x_1931_ == 0)
{
lean_dec(v___x_1929_);
lean_dec_ref(v_f_1911_);
return v_init_1913_;
}
else
{
size_t v___x_1932_; size_t v___x_1933_; lean_object* v___x_1934_; 
v___x_1932_ = lean_usize_of_nat(v___x_1929_);
lean_dec(v___x_1929_);
v___x_1933_ = lean_usize_of_nat(v___x_1930_);
v___x_1934_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_1911_, v_tail_1918_, v___x_1932_, v___x_1933_, v_init_1913_);
return v___x_1934_;
}
}
}
else
{
lean_object* v_root_1935_; lean_object* v_tail_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; uint8_t v___x_1939_; 
v_root_1935_ = lean_ctor_get(v_t_1912_, 0);
v_tail_1936_ = lean_ctor_get(v_t_1912_, 1);
lean_inc_ref(v_f_1911_);
v___x_1937_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(v_f_1911_, v_root_1935_, v_init_1913_);
v___x_1938_ = lean_array_get_size(v_tail_1936_);
v___x_1939_ = lean_nat_dec_lt(v___x_1915_, v___x_1938_);
if (v___x_1939_ == 0)
{
lean_dec_ref(v_f_1911_);
return v___x_1937_;
}
else
{
size_t v___x_1940_; size_t v___x_1941_; lean_object* v___x_1942_; 
v___x_1940_ = ((size_t)0ULL);
v___x_1941_ = lean_usize_of_nat(v___x_1938_);
v___x_1942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_1911_, v_tail_1936_, v___x_1940_, v___x_1941_, v___x_1937_);
return v___x_1942_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0___boxed(lean_object* v_f_1943_, lean_object* v_t_1944_, lean_object* v_init_1945_, lean_object* v_start_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(v_f_1943_, v_t_1944_, v_init_1945_, v_start_1946_);
lean_dec(v_start_1946_);
lean_dec_ref(v_t_1944_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecls(lean_object* v_lctx_1948_, lean_object* v_f_1949_){
_start:
{
lean_object* v_decls_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
v_decls_1950_ = lean_ctor_get(v_lctx_1948_, 1);
lean_inc_ref(v_decls_1950_);
v___x_1951_ = lean_unsigned_to_nat(0u);
v___x_1952_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(v_f_1949_, v_decls_1950_, v_lctx_1948_, v___x_1951_);
lean_dec_ref(v_decls_1950_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind(lean_object* v_lctx_1953_, lean_object* v_fvarId_1954_, uint8_t v_kind_1955_){
_start:
{
lean_object* v_fvarIdToDecl_1956_; lean_object* v_decls_1957_; lean_object* v_auxDeclToFullName_1958_; lean_object* v___x_1959_; 
v_fvarIdToDecl_1956_ = lean_ctor_get(v_lctx_1953_, 0);
v_decls_1957_ = lean_ctor_get(v_lctx_1953_, 1);
v_auxDeclToFullName_1958_ = lean_ctor_get(v_lctx_1953_, 2);
lean_inc_ref(v_lctx_1953_);
v___x_1959_ = lean_local_ctx_find(v_lctx_1953_, v_fvarId_1954_);
if (lean_obj_tag(v___x_1959_) == 0)
{
return v_lctx_1953_;
}
else
{
lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1984_; 
lean_inc(v_auxDeclToFullName_1958_);
lean_inc_ref(v_decls_1957_);
lean_inc_ref(v_fvarIdToDecl_1956_);
v_isSharedCheck_1984_ = !lean_is_exclusive(v_lctx_1953_);
if (v_isSharedCheck_1984_ == 0)
{
lean_object* v_unused_1985_; lean_object* v_unused_1986_; lean_object* v_unused_1987_; 
v_unused_1985_ = lean_ctor_get(v_lctx_1953_, 2);
lean_dec(v_unused_1985_);
v_unused_1986_ = lean_ctor_get(v_lctx_1953_, 1);
lean_dec(v_unused_1986_);
v_unused_1987_ = lean_ctor_get(v_lctx_1953_, 0);
lean_dec(v_unused_1987_);
v___x_1961_ = v_lctx_1953_;
v_isShared_1962_ = v_isSharedCheck_1984_;
goto v_resetjp_1960_;
}
else
{
lean_dec(v_lctx_1953_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1984_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v_val_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1983_; 
v_val_1963_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1965_ = v___x_1959_;
v_isShared_1966_ = v_isSharedCheck_1983_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_val_1963_);
lean_dec(v___x_1959_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1983_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v_decl_1967_; lean_object* v___y_1969_; lean_object* v___y_1970_; lean_object* v___y_1979_; lean_object* v_fvarId_1982_; 
v_decl_1967_ = l_Lean_LocalDecl_setKind(v_val_1963_, v_kind_1955_);
v_fvarId_1982_ = lean_ctor_get(v_decl_1967_, 1);
lean_inc(v_fvarId_1982_);
v___y_1979_ = v_fvarId_1982_;
goto v___jp_1978_;
v___jp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 0, v_decl_1967_);
v___x_1972_ = v___x_1965_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_decl_1967_);
v___x_1972_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
lean_object* v___x_1973_; lean_object* v___x_1975_; 
v___x_1973_ = l_Lean_PersistentArray_set___redArg(v_decls_1957_, v___y_1970_, v___x_1972_);
lean_dec(v___y_1970_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 1, v___x_1973_);
lean_ctor_set(v___x_1961_, 0, v___y_1969_);
v___x_1975_ = v___x_1961_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v___y_1969_);
lean_ctor_set(v_reuseFailAlloc_1976_, 1, v___x_1973_);
lean_ctor_set(v_reuseFailAlloc_1976_, 2, v_auxDeclToFullName_1958_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
v___jp_1978_:
{
lean_object* v___x_1980_; lean_object* v_index_1981_; 
lean_inc_ref(v_decl_1967_);
v___x_1980_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_1956_, v___y_1979_, v_decl_1967_);
v_index_1981_ = lean_ctor_get(v_decl_1967_, 0);
lean_inc(v_index_1981_);
v___y_1969_ = v___x_1980_;
v___y_1970_ = v_index_1981_;
goto v___jp_1968_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind___boxed(lean_object* v_lctx_1988_, lean_object* v_fvarId_1989_, lean_object* v_kind_1990_){
_start:
{
uint8_t v_kind_boxed_1991_; lean_object* v_res_1992_; 
v_kind_boxed_1991_ = lean_unbox(v_kind_1990_);
v_res_1992_ = l_Lean_LocalContext_setKind(v_lctx_1988_, v_fvarId_1989_, v_kind_boxed_1991_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo(lean_object* v_lctx_1993_, lean_object* v_fvarId_1994_, uint8_t v_bi_1995_){
_start:
{
lean_object* v_fvarIdToDecl_1996_; lean_object* v_decls_1997_; lean_object* v_auxDeclToFullName_1998_; lean_object* v___x_1999_; 
v_fvarIdToDecl_1996_ = lean_ctor_get(v_lctx_1993_, 0);
v_decls_1997_ = lean_ctor_get(v_lctx_1993_, 1);
v_auxDeclToFullName_1998_ = lean_ctor_get(v_lctx_1993_, 2);
lean_inc_ref(v_lctx_1993_);
v___x_1999_ = lean_local_ctx_find(v_lctx_1993_, v_fvarId_1994_);
if (lean_obj_tag(v___x_1999_) == 0)
{
return v_lctx_1993_;
}
else
{
lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2024_; 
lean_inc(v_auxDeclToFullName_1998_);
lean_inc_ref(v_decls_1997_);
lean_inc_ref(v_fvarIdToDecl_1996_);
v_isSharedCheck_2024_ = !lean_is_exclusive(v_lctx_1993_);
if (v_isSharedCheck_2024_ == 0)
{
lean_object* v_unused_2025_; lean_object* v_unused_2026_; lean_object* v_unused_2027_; 
v_unused_2025_ = lean_ctor_get(v_lctx_1993_, 2);
lean_dec(v_unused_2025_);
v_unused_2026_ = lean_ctor_get(v_lctx_1993_, 1);
lean_dec(v_unused_2026_);
v_unused_2027_ = lean_ctor_get(v_lctx_1993_, 0);
lean_dec(v_unused_2027_);
v___x_2001_ = v_lctx_1993_;
v_isShared_2002_ = v_isSharedCheck_2024_;
goto v_resetjp_2000_;
}
else
{
lean_dec(v_lctx_1993_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2024_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v_val_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2023_; 
v_val_2003_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2005_ = v___x_1999_;
v_isShared_2006_ = v_isSharedCheck_2023_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_val_2003_);
lean_dec(v___x_1999_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2023_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v_decl_2007_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2019_; lean_object* v_fvarId_2022_; 
v_decl_2007_ = l_Lean_LocalDecl_setBinderInfo(v_val_2003_, v_bi_1995_);
v_fvarId_2022_ = lean_ctor_get(v_decl_2007_, 1);
lean_inc(v_fvarId_2022_);
v___y_2019_ = v_fvarId_2022_;
goto v___jp_2018_;
v___jp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 0, v_decl_2007_);
v___x_2012_ = v___x_2005_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_decl_2007_);
v___x_2012_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
lean_object* v___x_2013_; lean_object* v___x_2015_; 
v___x_2013_ = l_Lean_PersistentArray_set___redArg(v_decls_1997_, v___y_2010_, v___x_2012_);
lean_dec(v___y_2010_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 1, v___x_2013_);
lean_ctor_set(v___x_2001_, 0, v___y_2009_);
v___x_2015_ = v___x_2001_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v___y_2009_);
lean_ctor_set(v_reuseFailAlloc_2016_, 1, v___x_2013_);
lean_ctor_set(v_reuseFailAlloc_2016_, 2, v_auxDeclToFullName_1998_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
return v___x_2015_;
}
}
}
v___jp_2018_:
{
lean_object* v___x_2020_; lean_object* v_index_2021_; 
lean_inc_ref(v_decl_2007_);
v___x_2020_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_1996_, v___y_2019_, v_decl_2007_);
v_index_2021_ = lean_ctor_get(v_decl_2007_, 0);
lean_inc(v_index_2021_);
v___y_2009_ = v___x_2020_;
v___y_2010_ = v_index_2021_;
goto v___jp_2008_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo___boxed(lean_object* v_lctx_2028_, lean_object* v_fvarId_2029_, lean_object* v_bi_2030_){
_start:
{
uint8_t v_bi_boxed_2031_; lean_object* v_res_2032_; 
v_bi_boxed_2031_ = lean_unbox(v_bi_2030_);
v_res_2032_ = l_Lean_LocalContext_setBinderInfo(v_lctx_2028_, v_fvarId_2029_, v_bi_boxed_2031_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setType(lean_object* v_lctx_2033_, lean_object* v_fvarId_2034_, lean_object* v_type_2035_){
_start:
{
lean_object* v_fvarIdToDecl_2036_; lean_object* v_decls_2037_; lean_object* v_auxDeclToFullName_2038_; lean_object* v___x_2039_; 
v_fvarIdToDecl_2036_ = lean_ctor_get(v_lctx_2033_, 0);
v_decls_2037_ = lean_ctor_get(v_lctx_2033_, 1);
v_auxDeclToFullName_2038_ = lean_ctor_get(v_lctx_2033_, 2);
lean_inc_ref(v_lctx_2033_);
v___x_2039_ = lean_local_ctx_find(v_lctx_2033_, v_fvarId_2034_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_dec_ref(v_type_2035_);
return v_lctx_2033_;
}
else
{
lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2064_; 
lean_inc(v_auxDeclToFullName_2038_);
lean_inc_ref(v_decls_2037_);
lean_inc_ref(v_fvarIdToDecl_2036_);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_lctx_2033_);
if (v_isSharedCheck_2064_ == 0)
{
lean_object* v_unused_2065_; lean_object* v_unused_2066_; lean_object* v_unused_2067_; 
v_unused_2065_ = lean_ctor_get(v_lctx_2033_, 2);
lean_dec(v_unused_2065_);
v_unused_2066_ = lean_ctor_get(v_lctx_2033_, 1);
lean_dec(v_unused_2066_);
v_unused_2067_ = lean_ctor_get(v_lctx_2033_, 0);
lean_dec(v_unused_2067_);
v___x_2041_ = v_lctx_2033_;
v_isShared_2042_ = v_isSharedCheck_2064_;
goto v_resetjp_2040_;
}
else
{
lean_dec(v_lctx_2033_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2064_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v_val_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2063_; 
v_val_2043_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2045_ = v___x_2039_;
v_isShared_2046_ = v_isSharedCheck_2063_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_val_2043_);
lean_dec(v___x_2039_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2063_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v_decl_2047_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2059_; lean_object* v_fvarId_2062_; 
v_decl_2047_ = l_Lean_LocalDecl_setType(v_val_2043_, v_type_2035_);
v_fvarId_2062_ = lean_ctor_get(v_decl_2047_, 1);
lean_inc(v_fvarId_2062_);
v___y_2059_ = v_fvarId_2062_;
goto v___jp_2058_;
v___jp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 0, v_decl_2047_);
v___x_2052_ = v___x_2045_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_decl_2047_);
v___x_2052_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
lean_object* v___x_2053_; lean_object* v___x_2055_; 
v___x_2053_ = l_Lean_PersistentArray_set___redArg(v_decls_2037_, v___y_2050_, v___x_2052_);
lean_dec(v___y_2050_);
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 1, v___x_2053_);
lean_ctor_set(v___x_2041_, 0, v___y_2049_);
v___x_2055_ = v___x_2041_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___y_2049_);
lean_ctor_set(v_reuseFailAlloc_2056_, 1, v___x_2053_);
lean_ctor_set(v_reuseFailAlloc_2056_, 2, v_auxDeclToFullName_2038_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
v___jp_2058_:
{
lean_object* v___x_2060_; lean_object* v_index_2061_; 
lean_inc_ref(v_decl_2047_);
v___x_2060_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2036_, v___y_2059_, v_decl_2047_);
v_index_2061_ = lean_ctor_get(v_decl_2047_, 0);
lean_inc(v_index_2061_);
v___y_2049_ = v___x_2060_;
v___y_2050_ = v_index_2061_;
goto v___jp_2048_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lean_local_ctx_num_indices(lean_object* v_lctx_2068_){
_start:
{
lean_object* v_decls_2069_; lean_object* v_size_2070_; 
v_decls_2069_ = lean_ctor_get(v_lctx_2068_, 1);
lean_inc_ref(v_decls_2069_);
lean_dec_ref(v_lctx_2068_);
v_size_2070_ = lean_ctor_get(v_decls_2069_, 2);
lean_inc(v_size_2070_);
lean_dec_ref(v_decls_2069_);
return v_size_2070_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f(lean_object* v_lctx_2071_, lean_object* v_i_2072_){
_start:
{
lean_object* v_decls_2073_; lean_object* v_size_2074_; lean_object* v___x_2075_; uint8_t v___x_2076_; 
v_decls_2073_ = lean_ctor_get(v_lctx_2071_, 1);
v_size_2074_ = lean_ctor_get(v_decls_2073_, 2);
v___x_2075_ = lean_box(0);
v___x_2076_ = lean_nat_dec_lt(v_i_2072_, v_size_2074_);
if (v___x_2076_ == 0)
{
lean_object* v___x_2077_; 
v___x_2077_ = l_outOfBounds___redArg(v___x_2075_);
return v___x_2077_;
}
else
{
lean_object* v___x_2078_; 
v___x_2078_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2075_, v_decls_2073_, v_i_2072_);
return v___x_2078_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f___boxed(lean_object* v_lctx_2079_, lean_object* v_i_2080_){
_start:
{
lean_object* v_res_2081_; 
v_res_2081_ = l_Lean_LocalContext_getAt_x3f(v_lctx_2079_, v_i_2080_);
lean_dec(v_i_2080_);
lean_dec_ref(v_lctx_2079_);
return v_res_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___lam__0(lean_object* v_toPure_2082_, lean_object* v_f_2083_, lean_object* v_b_2084_, lean_object* v_decl_2085_){
_start:
{
if (lean_obj_tag(v_decl_2085_) == 0)
{
lean_object* v___x_2086_; 
lean_dec(v_f_2083_);
v___x_2086_ = lean_apply_2(v_toPure_2082_, lean_box(0), v_b_2084_);
return v___x_2086_;
}
else
{
lean_object* v_val_2087_; lean_object* v___x_2088_; 
lean_dec(v_toPure_2082_);
v_val_2087_ = lean_ctor_get(v_decl_2085_, 0);
lean_inc(v_val_2087_);
lean_dec_ref_known(v_decl_2085_, 1);
v___x_2088_ = lean_apply_2(v_f_2083_, v_b_2084_, v_val_2087_);
return v___x_2088_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg(lean_object* v_inst_2089_, lean_object* v_lctx_2090_, lean_object* v_f_2091_, lean_object* v_init_2092_, lean_object* v_start_2093_){
_start:
{
lean_object* v_toApplicative_2094_; lean_object* v_decls_2095_; lean_object* v_toPure_2096_; lean_object* v___f_2097_; lean_object* v___x_2098_; 
v_toApplicative_2094_ = lean_ctor_get(v_inst_2089_, 0);
v_decls_2095_ = lean_ctor_get(v_lctx_2090_, 1);
lean_inc_ref(v_decls_2095_);
lean_dec_ref(v_lctx_2090_);
v_toPure_2096_ = lean_ctor_get(v_toApplicative_2094_, 1);
lean_inc(v_toPure_2096_);
v___f_2097_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2097_, 0, v_toPure_2096_);
lean_closure_set(v___f_2097_, 1, v_f_2091_);
v___x_2098_ = l_Lean_PersistentArray_foldlM___redArg(v_inst_2089_, v_decls_2095_, v___f_2097_, v_init_2092_, v_start_2093_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___boxed(lean_object* v_inst_2099_, lean_object* v_lctx_2100_, lean_object* v_f_2101_, lean_object* v_init_2102_, lean_object* v_start_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l_Lean_LocalContext_foldlM___redArg(v_inst_2099_, v_lctx_2100_, v_f_2101_, v_init_2102_, v_start_2103_);
lean_dec(v_start_2103_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM(lean_object* v_m_2105_, lean_object* v_00_u03b2_2106_, lean_object* v_inst_2107_, lean_object* v_lctx_2108_, lean_object* v_f_2109_, lean_object* v_init_2110_, lean_object* v_start_2111_){
_start:
{
lean_object* v___x_2112_; 
v___x_2112_ = l_Lean_LocalContext_foldlM___redArg(v_inst_2107_, v_lctx_2108_, v_f_2109_, v_init_2110_, v_start_2111_);
return v___x_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___boxed(lean_object* v_m_2113_, lean_object* v_00_u03b2_2114_, lean_object* v_inst_2115_, lean_object* v_lctx_2116_, lean_object* v_f_2117_, lean_object* v_init_2118_, lean_object* v_start_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l_Lean_LocalContext_foldlM(v_m_2113_, v_00_u03b2_2114_, v_inst_2115_, v_lctx_2116_, v_f_2117_, v_init_2118_, v_start_2119_);
lean_dec(v_start_2119_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg___lam__0(lean_object* v_toPure_2121_, lean_object* v_f_2122_, lean_object* v_decl_2123_, lean_object* v_b_2124_){
_start:
{
if (lean_obj_tag(v_decl_2123_) == 0)
{
lean_object* v___x_2125_; 
lean_dec(v_f_2122_);
v___x_2125_ = lean_apply_2(v_toPure_2121_, lean_box(0), v_b_2124_);
return v___x_2125_;
}
else
{
lean_object* v_val_2126_; lean_object* v___x_2127_; 
lean_dec(v_toPure_2121_);
v_val_2126_ = lean_ctor_get(v_decl_2123_, 0);
lean_inc(v_val_2126_);
lean_dec_ref_known(v_decl_2123_, 1);
v___x_2127_ = lean_apply_2(v_f_2122_, v_val_2126_, v_b_2124_);
return v___x_2127_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg(lean_object* v_inst_2128_, lean_object* v_lctx_2129_, lean_object* v_f_2130_, lean_object* v_init_2131_){
_start:
{
lean_object* v_toApplicative_2132_; lean_object* v_decls_2133_; lean_object* v_toPure_2134_; lean_object* v___f_2135_; lean_object* v___x_2136_; 
v_toApplicative_2132_ = lean_ctor_get(v_inst_2128_, 0);
v_decls_2133_ = lean_ctor_get(v_lctx_2129_, 1);
lean_inc_ref(v_decls_2133_);
lean_dec_ref(v_lctx_2129_);
v_toPure_2134_ = lean_ctor_get(v_toApplicative_2132_, 1);
lean_inc(v_toPure_2134_);
v___f_2135_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldrM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2135_, 0, v_toPure_2134_);
lean_closure_set(v___f_2135_, 1, v_f_2130_);
v___x_2136_ = l_Lean_PersistentArray_foldrM___redArg(v_inst_2128_, v_decls_2133_, v___f_2135_, v_init_2131_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM(lean_object* v_m_2137_, lean_object* v_00_u03b2_2138_, lean_object* v_inst_2139_, lean_object* v_lctx_2140_, lean_object* v_f_2141_, lean_object* v_init_2142_){
_start:
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lean_LocalContext_foldrM___redArg(v_inst_2139_, v_lctx_2140_, v_f_2141_, v_init_2142_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___lam__0(lean_object* v_toPure_2144_, lean_object* v_f_2145_, lean_object* v_decl_2146_){
_start:
{
if (lean_obj_tag(v_decl_2146_) == 0)
{
lean_object* v___x_2147_; lean_object* v___x_2148_; 
lean_dec(v_f_2145_);
v___x_2147_ = lean_box(0);
v___x_2148_ = lean_apply_2(v_toPure_2144_, lean_box(0), v___x_2147_);
return v___x_2148_;
}
else
{
lean_object* v_val_2149_; lean_object* v___x_2150_; 
lean_dec(v_toPure_2144_);
v_val_2149_ = lean_ctor_get(v_decl_2146_, 0);
lean_inc(v_val_2149_);
lean_dec_ref_known(v_decl_2146_, 1);
v___x_2150_ = lean_apply_1(v_f_2145_, v_val_2149_);
return v___x_2150_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg(lean_object* v_inst_2151_, lean_object* v_lctx_2152_, lean_object* v_f_2153_, lean_object* v_start_2154_){
_start:
{
lean_object* v_toApplicative_2155_; lean_object* v_decls_2156_; lean_object* v_toPure_2157_; lean_object* v___f_2158_; lean_object* v___x_2159_; 
v_toApplicative_2155_ = lean_ctor_get(v_inst_2151_, 0);
v_decls_2156_ = lean_ctor_get(v_lctx_2152_, 1);
lean_inc_ref(v_decls_2156_);
lean_dec_ref(v_lctx_2152_);
v_toPure_2157_ = lean_ctor_get(v_toApplicative_2155_, 1);
lean_inc(v_toPure_2157_);
v___f_2158_ = lean_alloc_closure((void*)(l_Lean_LocalContext_forM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2158_, 0, v_toPure_2157_);
lean_closure_set(v___f_2158_, 1, v_f_2153_);
v___x_2159_ = l_Lean_PersistentArray_forM___redArg(v_inst_2151_, v_decls_2156_, v___f_2158_, v_start_2154_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___boxed(lean_object* v_inst_2160_, lean_object* v_lctx_2161_, lean_object* v_f_2162_, lean_object* v_start_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l_Lean_LocalContext_forM___redArg(v_inst_2160_, v_lctx_2161_, v_f_2162_, v_start_2163_);
lean_dec(v_start_2163_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM(lean_object* v_m_2165_, lean_object* v_inst_2166_, lean_object* v_lctx_2167_, lean_object* v_f_2168_, lean_object* v_start_2169_){
_start:
{
lean_object* v___x_2170_; 
v___x_2170_ = l_Lean_LocalContext_forM___redArg(v_inst_2166_, v_lctx_2167_, v_f_2168_, v_start_2169_);
return v___x_2170_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___boxed(lean_object* v_m_2171_, lean_object* v_inst_2172_, lean_object* v_lctx_2173_, lean_object* v_f_2174_, lean_object* v_start_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l_Lean_LocalContext_forM(v_m_2171_, v_inst_2172_, v_lctx_2173_, v_f_2174_, v_start_2175_);
lean_dec(v_start_2175_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0(lean_object* v_toPure_2177_, lean_object* v_f_2178_, lean_object* v_decl_2179_){
_start:
{
if (lean_obj_tag(v_decl_2179_) == 0)
{
lean_object* v___x_2180_; lean_object* v___x_2181_; 
lean_dec(v_f_2178_);
v___x_2180_ = lean_box(0);
v___x_2181_ = lean_apply_2(v_toPure_2177_, lean_box(0), v___x_2180_);
return v___x_2181_;
}
else
{
lean_object* v_val_2182_; lean_object* v___x_2183_; 
lean_dec(v_toPure_2177_);
v_val_2182_ = lean_ctor_get(v_decl_2179_, 0);
lean_inc(v_val_2182_);
lean_dec_ref_known(v_decl_2179_, 1);
v___x_2183_ = lean_apply_1(v_f_2178_, v_val_2182_);
return v___x_2183_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg(lean_object* v_inst_2184_, lean_object* v_lctx_2185_, lean_object* v_f_2186_){
_start:
{
lean_object* v_toApplicative_2187_; lean_object* v_decls_2188_; lean_object* v_toPure_2189_; lean_object* v___f_2190_; lean_object* v___x_2191_; 
v_toApplicative_2187_ = lean_ctor_get(v_inst_2184_, 0);
v_decls_2188_ = lean_ctor_get(v_lctx_2185_, 1);
lean_inc_ref(v_decls_2188_);
lean_dec_ref(v_lctx_2185_);
v_toPure_2189_ = lean_ctor_get(v_toApplicative_2187_, 1);
lean_inc(v_toPure_2189_);
v___f_2190_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2190_, 0, v_toPure_2189_);
lean_closure_set(v___f_2190_, 1, v_f_2186_);
v___x_2191_ = l_Lean_PersistentArray_findSomeM_x3f___redArg(v_inst_2184_, v_decls_2188_, v___f_2190_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f(lean_object* v_m_2192_, lean_object* v_00_u03b2_2193_, lean_object* v_inst_2194_, lean_object* v_lctx_2195_, lean_object* v_f_2196_){
_start:
{
lean_object* v___x_2197_; 
v___x_2197_ = l_Lean_LocalContext_findDeclM_x3f___redArg(v_inst_2194_, v_lctx_2195_, v_f_2196_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___redArg(lean_object* v_inst_2198_, lean_object* v_lctx_2199_, lean_object* v_f_2200_){
_start:
{
lean_object* v_toApplicative_2201_; lean_object* v_decls_2202_; lean_object* v_toPure_2203_; lean_object* v___f_2204_; lean_object* v___x_2205_; 
v_toApplicative_2201_ = lean_ctor_get(v_inst_2198_, 0);
v_decls_2202_ = lean_ctor_get(v_lctx_2199_, 1);
lean_inc_ref(v_decls_2202_);
lean_dec_ref(v_lctx_2199_);
v_toPure_2203_ = lean_ctor_get(v_toApplicative_2201_, 1);
lean_inc(v_toPure_2203_);
v___f_2204_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2204_, 0, v_toPure_2203_);
lean_closure_set(v___f_2204_, 1, v_f_2200_);
v___x_2205_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v_inst_2198_, v_decls_2202_, v___f_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f(lean_object* v_m_2206_, lean_object* v_00_u03b2_2207_, lean_object* v_inst_2208_, lean_object* v_lctx_2209_, lean_object* v_f_2210_){
_start:
{
lean_object* v___x_2211_; 
v___x_2211_ = l_Lean_LocalContext_findDeclRevM_x3f___redArg(v_inst_2208_, v_lctx_2209_, v_f_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__0(lean_object* v_toPure_2212_, lean_object* v_f_2213_, lean_object* v_d_x3f_2214_, lean_object* v_b_2215_){
_start:
{
if (lean_obj_tag(v_d_x3f_2214_) == 0)
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
lean_dec(v_f_2213_);
v___x_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2216_, 0, v_b_2215_);
v___x_2217_ = lean_apply_2(v_toPure_2212_, lean_box(0), v___x_2216_);
return v___x_2217_;
}
else
{
lean_object* v_val_2218_; lean_object* v___x_2219_; 
lean_dec(v_toPure_2212_);
v_val_2218_ = lean_ctor_get(v_d_x3f_2214_, 0);
lean_inc(v_val_2218_);
lean_dec_ref_known(v_d_x3f_2214_, 1);
v___x_2219_ = lean_apply_2(v_f_2213_, v_val_2218_, v_b_2215_);
return v___x_2219_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1(lean_object* v_toPure_2220_, lean_object* v_inst_2221_, lean_object* v_00_u03b2_2222_, lean_object* v_lctx_2223_, lean_object* v_init_2224_, lean_object* v_f_2225_){
_start:
{
lean_object* v_decls_2226_; lean_object* v___f_2227_; lean_object* v___x_2228_; 
v_decls_2226_ = lean_ctor_get(v_lctx_2223_, 1);
v___f_2227_ = lean_alloc_closure((void*)(l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2227_, 0, v_toPure_2220_);
lean_closure_set(v___f_2227_, 1, v_f_2225_);
v___x_2228_ = l_Lean_PersistentArray_forIn___redArg(v_inst_2221_, v_decls_2226_, v_init_2224_, v___f_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1___boxed(lean_object* v_toPure_2229_, lean_object* v_inst_2230_, lean_object* v_00_u03b2_2231_, lean_object* v_lctx_2232_, lean_object* v_init_2233_, lean_object* v_f_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1(v_toPure_2229_, v_inst_2230_, v_00_u03b2_2231_, v_lctx_2232_, v_init_2233_, v_f_2234_);
lean_dec_ref(v_lctx_2232_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg(lean_object* v_inst_2236_){
_start:
{
lean_object* v_toApplicative_2237_; lean_object* v_toPure_2238_; lean_object* v___f_2239_; 
v_toApplicative_2237_ = lean_ctor_get(v_inst_2236_, 0);
v_toPure_2238_ = lean_ctor_get(v_toApplicative_2237_, 1);
lean_inc(v_toPure_2238_);
v___f_2239_ = lean_alloc_closure((void*)(l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1___boxed), 6, 2);
lean_closure_set(v___f_2239_, 0, v_toPure_2238_);
lean_closure_set(v___f_2239_, 1, v_inst_2236_);
return v___f_2239_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad(lean_object* v_m_2240_, lean_object* v_inst_2241_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg(v_inst_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___lam__0(lean_object* v_f_2243_, lean_object* v_x1_2244_, lean_object* v_x2_2245_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = lean_apply_2(v_f_2243_, v_x1_2244_, v_x2_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg(lean_object* v_lctx_2266_, lean_object* v_f_2267_, lean_object* v_init_2268_, lean_object* v_start_2269_){
_start:
{
lean_object* v___f_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___f_2270_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2270_, 0, v_f_2267_);
v___x_2271_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2272_ = l_Lean_LocalContext_foldlM___redArg(v___x_2271_, v_lctx_2266_, v___f_2270_, v_init_2268_, v_start_2269_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___boxed(lean_object* v_lctx_2273_, lean_object* v_f_2274_, lean_object* v_init_2275_, lean_object* v_start_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lean_LocalContext_foldl___redArg(v_lctx_2273_, v_f_2274_, v_init_2275_, v_start_2276_);
lean_dec(v_start_2276_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl(lean_object* v_00_u03b2_2278_, lean_object* v_lctx_2279_, lean_object* v_f_2280_, lean_object* v_init_2281_, lean_object* v_start_2282_){
_start:
{
lean_object* v___f_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___f_2283_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2283_, 0, v_f_2280_);
v___x_2284_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2285_ = l_Lean_LocalContext_foldlM___redArg(v___x_2284_, v_lctx_2279_, v___f_2283_, v_init_2281_, v_start_2282_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___boxed(lean_object* v_00_u03b2_2286_, lean_object* v_lctx_2287_, lean_object* v_f_2288_, lean_object* v_init_2289_, lean_object* v_start_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_Lean_LocalContext_foldl(v_00_u03b2_2286_, v_lctx_2287_, v_f_2288_, v_init_2289_, v_start_2290_);
lean_dec(v_start_2290_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg___lam__0(lean_object* v_f_2292_, lean_object* v_x1_2293_, lean_object* v_x2_2294_){
_start:
{
lean_object* v___x_2295_; 
v___x_2295_ = lean_apply_2(v_f_2292_, v_x1_2293_, v_x2_2294_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg(lean_object* v_lctx_2296_, lean_object* v_f_2297_, lean_object* v_init_2298_){
_start:
{
lean_object* v___f_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___f_2299_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2299_, 0, v_f_2297_);
v___x_2300_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2301_ = l_Lean_LocalContext_foldrM___redArg(v___x_2300_, v_lctx_2296_, v___f_2299_, v_init_2298_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr(lean_object* v_00_u03b2_2302_, lean_object* v_lctx_2303_, lean_object* v_f_2304_, lean_object* v_init_2305_){
_start:
{
lean_object* v___f_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___f_2306_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2306_, 0, v_f_2304_);
v___x_2307_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2308_ = l_Lean_LocalContext_foldrM___redArg(v___x_2307_, v_lctx_2303_, v___f_2306_, v_init_2305_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(lean_object* v_as_2309_, size_t v_i_2310_, size_t v_stop_2311_, lean_object* v_b_2312_){
_start:
{
lean_object* v___y_2314_; uint8_t v___x_2318_; 
v___x_2318_ = lean_usize_dec_eq(v_i_2310_, v_stop_2311_);
if (v___x_2318_ == 0)
{
lean_object* v___x_2319_; 
v___x_2319_ = lean_array_uget_borrowed(v_as_2309_, v_i_2310_);
if (lean_obj_tag(v___x_2319_) == 0)
{
v___y_2314_ = v_b_2312_;
goto v___jp_2313_;
}
else
{
lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2320_ = lean_unsigned_to_nat(1u);
v___x_2321_ = lean_nat_add(v_b_2312_, v___x_2320_);
lean_dec(v_b_2312_);
v___y_2314_ = v___x_2321_;
goto v___jp_2313_;
}
}
else
{
return v_b_2312_;
}
v___jp_2313_:
{
size_t v___x_2315_; size_t v___x_2316_; 
v___x_2315_ = ((size_t)1ULL);
v___x_2316_ = lean_usize_add(v_i_2310_, v___x_2315_);
v_i_2310_ = v___x_2316_;
v_b_2312_ = v___y_2314_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2___boxed(lean_object* v_as_2322_, lean_object* v_i_2323_, lean_object* v_stop_2324_, lean_object* v_b_2325_){
_start:
{
size_t v_i_boxed_2326_; size_t v_stop_boxed_2327_; lean_object* v_res_2328_; 
v_i_boxed_2326_ = lean_unbox_usize(v_i_2323_);
lean_dec(v_i_2323_);
v_stop_boxed_2327_ = lean_unbox_usize(v_stop_2324_);
lean_dec(v_stop_2324_);
v_res_2328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_as_2322_, v_i_boxed_2326_, v_stop_boxed_2327_, v_b_2325_);
lean_dec_ref(v_as_2322_);
return v_res_2328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(lean_object* v_x_2329_, lean_object* v_x_2330_){
_start:
{
if (lean_obj_tag(v_x_2329_) == 0)
{
lean_object* v_cs_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; 
v_cs_2331_ = lean_ctor_get(v_x_2329_, 0);
v___x_2332_ = lean_unsigned_to_nat(0u);
v___x_2333_ = lean_array_get_size(v_cs_2331_);
v___x_2334_ = lean_nat_dec_lt(v___x_2332_, v___x_2333_);
if (v___x_2334_ == 0)
{
return v_x_2330_;
}
else
{
size_t v___x_2335_; size_t v___x_2336_; lean_object* v___x_2337_; 
v___x_2335_ = ((size_t)0ULL);
v___x_2336_ = lean_usize_of_nat(v___x_2333_);
v___x_2337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(v_cs_2331_, v___x_2335_, v___x_2336_, v_x_2330_);
return v___x_2337_;
}
}
else
{
lean_object* v_vs_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; uint8_t v___x_2341_; 
v_vs_2338_ = lean_ctor_get(v_x_2329_, 0);
v___x_2339_ = lean_unsigned_to_nat(0u);
v___x_2340_ = lean_array_get_size(v_vs_2338_);
v___x_2341_ = lean_nat_dec_lt(v___x_2339_, v___x_2340_);
if (v___x_2341_ == 0)
{
return v_x_2330_;
}
else
{
size_t v___x_2342_; size_t v___x_2343_; lean_object* v___x_2344_; 
v___x_2342_ = ((size_t)0ULL);
v___x_2343_ = lean_usize_of_nat(v___x_2340_);
v___x_2344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_vs_2338_, v___x_2342_, v___x_2343_, v_x_2330_);
return v___x_2344_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(lean_object* v_as_2345_, size_t v_i_2346_, size_t v_stop_2347_, lean_object* v_b_2348_){
_start:
{
uint8_t v___x_2349_; 
v___x_2349_ = lean_usize_dec_eq(v_i_2346_, v_stop_2347_);
if (v___x_2349_ == 0)
{
lean_object* v___x_2350_; lean_object* v___x_2351_; size_t v___x_2352_; size_t v___x_2353_; 
v___x_2350_ = lean_array_uget_borrowed(v_as_2345_, v_i_2346_);
v___x_2351_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(v___x_2350_, v_b_2348_);
v___x_2352_ = ((size_t)1ULL);
v___x_2353_ = lean_usize_add(v_i_2346_, v___x_2352_);
v_i_2346_ = v___x_2353_;
v_b_2348_ = v___x_2351_;
goto _start;
}
else
{
return v_b_2348_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_as_2355_, lean_object* v_i_2356_, lean_object* v_stop_2357_, lean_object* v_b_2358_){
_start:
{
size_t v_i_boxed_2359_; size_t v_stop_boxed_2360_; lean_object* v_res_2361_; 
v_i_boxed_2359_ = lean_unbox_usize(v_i_2356_);
lean_dec(v_i_2356_);
v_stop_boxed_2360_ = lean_unbox_usize(v_stop_2357_);
lean_dec(v_stop_2357_);
v_res_2361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(v_as_2355_, v_i_boxed_2359_, v_stop_boxed_2360_, v_b_2358_);
lean_dec_ref(v_as_2355_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3___boxed(lean_object* v_x_2362_, lean_object* v_x_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(v_x_2362_, v_x_2363_);
lean_dec_ref(v_x_2362_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(lean_object* v_x_2365_, size_t v_x_2366_, size_t v_x_2367_, lean_object* v_x_2368_){
_start:
{
if (lean_obj_tag(v_x_2365_) == 0)
{
lean_object* v_cs_2369_; lean_object* v___x_2370_; size_t v___x_2371_; lean_object* v_j_2372_; lean_object* v___x_2373_; size_t v___x_2374_; size_t v___x_2375_; size_t v___x_2376_; size_t v___x_2377_; size_t v___x_2378_; size_t v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; uint8_t v___x_2384_; 
v_cs_2369_ = lean_ctor_get(v_x_2365_, 0);
v___x_2370_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0);
v___x_2371_ = lean_usize_shift_right(v_x_2366_, v_x_2367_);
v_j_2372_ = lean_usize_to_nat(v___x_2371_);
v___x_2373_ = lean_array_get_borrowed(v___x_2370_, v_cs_2369_, v_j_2372_);
v___x_2374_ = ((size_t)1ULL);
v___x_2375_ = lean_usize_shift_left(v___x_2374_, v_x_2367_);
v___x_2376_ = lean_usize_sub(v___x_2375_, v___x_2374_);
v___x_2377_ = lean_usize_land(v_x_2366_, v___x_2376_);
v___x_2378_ = ((size_t)5ULL);
v___x_2379_ = lean_usize_sub(v_x_2367_, v___x_2378_);
v___x_2380_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(v___x_2373_, v___x_2377_, v___x_2379_, v_x_2368_);
v___x_2381_ = lean_unsigned_to_nat(1u);
v___x_2382_ = lean_nat_add(v_j_2372_, v___x_2381_);
lean_dec(v_j_2372_);
v___x_2383_ = lean_array_get_size(v_cs_2369_);
v___x_2384_ = lean_nat_dec_lt(v___x_2382_, v___x_2383_);
if (v___x_2384_ == 0)
{
lean_dec(v___x_2382_);
return v___x_2380_;
}
else
{
size_t v___x_2385_; size_t v___x_2386_; lean_object* v___x_2387_; 
v___x_2385_ = lean_usize_of_nat(v___x_2382_);
lean_dec(v___x_2382_);
v___x_2386_ = lean_usize_of_nat(v___x_2383_);
v___x_2387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(v_cs_2369_, v___x_2385_, v___x_2386_, v___x_2380_);
return v___x_2387_;
}
}
else
{
lean_object* v_vs_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; uint8_t v___x_2391_; 
v_vs_2388_ = lean_ctor_get(v_x_2365_, 0);
v___x_2389_ = lean_usize_to_nat(v_x_2366_);
v___x_2390_ = lean_array_get_size(v_vs_2388_);
v___x_2391_ = lean_nat_dec_lt(v___x_2389_, v___x_2390_);
if (v___x_2391_ == 0)
{
lean_dec(v___x_2389_);
return v_x_2368_;
}
else
{
size_t v___x_2392_; size_t v___x_2393_; lean_object* v___x_2394_; 
v___x_2392_ = lean_usize_of_nat(v___x_2389_);
lean_dec(v___x_2389_);
v___x_2393_ = lean_usize_of_nat(v___x_2390_);
v___x_2394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_vs_2388_, v___x_2392_, v___x_2393_, v_x_2368_);
return v___x_2394_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1___boxed(lean_object* v_x_2395_, lean_object* v_x_2396_, lean_object* v_x_2397_, lean_object* v_x_2398_){
_start:
{
size_t v_x_1185__boxed_2399_; size_t v_x_1186__boxed_2400_; lean_object* v_res_2401_; 
v_x_1185__boxed_2399_ = lean_unbox_usize(v_x_2396_);
lean_dec(v_x_2396_);
v_x_1186__boxed_2400_ = lean_unbox_usize(v_x_2397_);
lean_dec(v_x_2397_);
v_res_2401_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(v_x_2395_, v_x_1185__boxed_2399_, v_x_1186__boxed_2400_, v_x_2398_);
lean_dec_ref(v_x_2395_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(lean_object* v_t_2402_, lean_object* v_init_2403_, lean_object* v_start_2404_){
_start:
{
lean_object* v___x_2405_; uint8_t v___x_2406_; 
v___x_2405_ = lean_unsigned_to_nat(0u);
v___x_2406_ = lean_nat_dec_eq(v_start_2404_, v___x_2405_);
if (v___x_2406_ == 0)
{
lean_object* v_root_2407_; lean_object* v_tail_2408_; size_t v_shift_2409_; lean_object* v_tailOff_2410_; uint8_t v___x_2411_; 
v_root_2407_ = lean_ctor_get(v_t_2402_, 0);
v_tail_2408_ = lean_ctor_get(v_t_2402_, 1);
v_shift_2409_ = lean_ctor_get_usize(v_t_2402_, 4);
v_tailOff_2410_ = lean_ctor_get(v_t_2402_, 3);
v___x_2411_ = lean_nat_dec_le(v_tailOff_2410_, v_start_2404_);
if (v___x_2411_ == 0)
{
size_t v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; uint8_t v___x_2415_; 
v___x_2412_ = lean_usize_of_nat(v_start_2404_);
v___x_2413_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(v_root_2407_, v___x_2412_, v_shift_2409_, v_init_2403_);
v___x_2414_ = lean_array_get_size(v_tail_2408_);
v___x_2415_ = lean_nat_dec_lt(v___x_2405_, v___x_2414_);
if (v___x_2415_ == 0)
{
return v___x_2413_;
}
else
{
size_t v___x_2416_; size_t v___x_2417_; lean_object* v___x_2418_; 
v___x_2416_ = ((size_t)0ULL);
v___x_2417_ = lean_usize_of_nat(v___x_2414_);
v___x_2418_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_tail_2408_, v___x_2416_, v___x_2417_, v___x_2413_);
return v___x_2418_;
}
}
else
{
lean_object* v___x_2419_; lean_object* v___x_2420_; uint8_t v___x_2421_; 
v___x_2419_ = lean_nat_sub(v_start_2404_, v_tailOff_2410_);
v___x_2420_ = lean_array_get_size(v_tail_2408_);
v___x_2421_ = lean_nat_dec_lt(v___x_2419_, v___x_2420_);
if (v___x_2421_ == 0)
{
lean_dec(v___x_2419_);
return v_init_2403_;
}
else
{
size_t v___x_2422_; size_t v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = lean_usize_of_nat(v___x_2419_);
lean_dec(v___x_2419_);
v___x_2423_ = lean_usize_of_nat(v___x_2420_);
v___x_2424_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_tail_2408_, v___x_2422_, v___x_2423_, v_init_2403_);
return v___x_2424_;
}
}
}
else
{
lean_object* v_root_2425_; lean_object* v_tail_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; uint8_t v___x_2429_; 
v_root_2425_ = lean_ctor_get(v_t_2402_, 0);
v_tail_2426_ = lean_ctor_get(v_t_2402_, 1);
v___x_2427_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(v_root_2425_, v_init_2403_);
v___x_2428_ = lean_array_get_size(v_tail_2426_);
v___x_2429_ = lean_nat_dec_lt(v___x_2405_, v___x_2428_);
if (v___x_2429_ == 0)
{
return v___x_2427_;
}
else
{
size_t v___x_2430_; size_t v___x_2431_; lean_object* v___x_2432_; 
v___x_2430_ = ((size_t)0ULL);
v___x_2431_ = lean_usize_of_nat(v___x_2428_);
v___x_2432_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_tail_2426_, v___x_2430_, v___x_2431_, v___x_2427_);
return v___x_2432_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0___boxed(lean_object* v_t_2433_, lean_object* v_init_2434_, lean_object* v_start_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(v_t_2433_, v_init_2434_, v_start_2435_);
lean_dec(v_start_2435_);
lean_dec_ref(v_t_2433_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(lean_object* v_lctx_2437_, lean_object* v_init_2438_, lean_object* v_start_2439_){
_start:
{
lean_object* v_decls_2440_; lean_object* v___x_2441_; 
v_decls_2440_ = lean_ctor_get(v_lctx_2437_, 1);
v___x_2441_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(v_decls_2440_, v_init_2438_, v_start_2439_);
return v___x_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0___boxed(lean_object* v_lctx_2442_, lean_object* v_init_2443_, lean_object* v_start_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(v_lctx_2442_, v_init_2443_, v_start_2444_);
lean_dec(v_start_2444_);
lean_dec_ref(v_lctx_2442_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_size(lean_object* v_lctx_2446_){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2447_ = lean_unsigned_to_nat(0u);
v___x_2448_ = l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(v_lctx_2446_, v___x_2447_, v___x_2447_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_size___boxed(lean_object* v_lctx_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lean_LocalContext_size(v_lctx_2449_);
lean_dec_ref(v_lctx_2449_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg___lam__0(lean_object* v_f_2451_, lean_object* v_x_2452_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_apply_1(v_f_2451_, v_x_2452_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg(lean_object* v_lctx_2454_, lean_object* v_f_2455_){
_start:
{
lean_object* v___f_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___f_2456_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2456_, 0, v_f_2455_);
v___x_2457_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2458_ = l_Lean_LocalContext_findDeclM_x3f___redArg(v___x_2457_, v_lctx_2454_, v___f_2456_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f(lean_object* v_00_u03b2_2459_, lean_object* v_lctx_2460_, lean_object* v_f_2461_){
_start:
{
lean_object* v___f_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___f_2462_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2462_, 0, v_f_2461_);
v___x_2463_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2464_ = l_Lean_LocalContext_findDeclM_x3f___redArg(v___x_2463_, v_lctx_2460_, v___f_2462_);
return v___x_2464_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f___redArg(lean_object* v_lctx_2465_, lean_object* v_f_2466_){
_start:
{
lean_object* v___f_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___f_2467_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2467_, 0, v_f_2466_);
v___x_2468_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2469_ = l_Lean_LocalContext_findDeclRevM_x3f___redArg(v___x_2468_, v_lctx_2465_, v___f_2467_);
return v___x_2469_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f(lean_object* v_00_u03b2_2470_, lean_object* v_lctx_2471_, lean_object* v_f_2472_){
_start:
{
lean_object* v___f_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___f_2473_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2473_, 0, v_f_2472_);
v___x_2474_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2475_ = l_Lean_LocalContext_findDeclRevM_x3f___redArg(v___x_2474_, v_lctx_2471_, v___f_2473_);
return v___x_2475_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(lean_object* v_val_2476_, lean_object* v_as_2477_, size_t v_i_2478_, size_t v_stop_2479_){
_start:
{
uint8_t v___x_2480_; 
v___x_2480_ = lean_usize_dec_eq(v_i_2478_, v_stop_2479_);
if (v___x_2480_ == 0)
{
uint8_t v___x_2481_; uint8_t v___y_2483_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v_fvarId_2489_; uint8_t v___x_2490_; 
v___x_2481_ = 1;
v___x_2487_ = lean_array_uget_borrowed(v_as_2477_, v_i_2478_);
v___x_2488_ = l_Lean_Expr_fvarId_x21(v___x_2487_);
v_fvarId_2489_ = lean_ctor_get(v_val_2476_, 1);
v___x_2490_ = l_Lean_instBEqFVarId_beq(v___x_2488_, v_fvarId_2489_);
lean_dec(v___x_2488_);
v___y_2483_ = v___x_2490_;
goto v___jp_2482_;
v___jp_2482_:
{
if (v___y_2483_ == 0)
{
size_t v___x_2484_; size_t v___x_2485_; 
v___x_2484_ = ((size_t)1ULL);
v___x_2485_ = lean_usize_add(v_i_2478_, v___x_2484_);
v_i_2478_ = v___x_2485_;
goto _start;
}
else
{
return v___x_2481_;
}
}
}
else
{
uint8_t v___x_2491_; 
v___x_2491_ = 0;
return v___x_2491_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0___boxed(lean_object* v_val_2492_, lean_object* v_as_2493_, lean_object* v_i_2494_, lean_object* v_stop_2495_){
_start:
{
size_t v_i_boxed_2496_; size_t v_stop_boxed_2497_; uint8_t v_res_2498_; lean_object* v_r_2499_; 
v_i_boxed_2496_ = lean_unbox_usize(v_i_2494_);
lean_dec(v_i_2494_);
v_stop_boxed_2497_ = lean_unbox_usize(v_stop_2495_);
lean_dec(v_stop_2495_);
v_res_2498_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(v_val_2492_, v_as_2493_, v_i_boxed_2496_, v_stop_boxed_2497_);
lean_dec_ref(v_as_2493_);
lean_dec_ref(v_val_2492_);
v_r_2499_ = lean_box(v_res_2498_);
return v_r_2499_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOfAux(lean_object* v_a_u2081_2500_, lean_object* v_a_u2082_2501_, lean_object* v_exceptFVars_2502_, lean_object* v_i_2503_, lean_object* v_j_2504_){
_start:
{
lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2517_; lean_object* v___y_2518_; lean_object* v_size_2520_; uint8_t v___x_2521_; 
v_size_2520_ = lean_ctor_get(v_a_u2081_2500_, 2);
v___x_2521_ = lean_nat_dec_lt(v_i_2503_, v_size_2520_);
if (v___x_2521_ == 0)
{
uint8_t v___x_2522_; 
lean_dec(v_j_2504_);
lean_dec(v_i_2503_);
v___x_2522_ = 1;
return v___x_2522_;
}
else
{
lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2523_ = lean_box(0);
v___x_2524_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2523_, v_a_u2081_2500_, v_i_2503_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = lean_unsigned_to_nat(1u);
v___x_2526_ = lean_nat_add(v_i_2503_, v___x_2525_);
lean_dec(v_i_2503_);
v_i_2503_ = v___x_2526_;
goto _start;
}
else
{
lean_object* v_val_2528_; lean_object* v___x_2538_; lean_object* v___x_2539_; uint8_t v___x_2540_; 
v_val_2528_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_val_2528_);
lean_dec_ref_known(v___x_2524_, 1);
v___x_2538_ = lean_unsigned_to_nat(0u);
v___x_2539_ = lean_array_get_size(v_exceptFVars_2502_);
v___x_2540_ = lean_nat_dec_lt(v___x_2538_, v___x_2539_);
if (v___x_2540_ == 0)
{
goto v___jp_2529_;
}
else
{
if (v___x_2540_ == 0)
{
goto v___jp_2529_;
}
else
{
size_t v___x_2541_; size_t v___x_2542_; uint8_t v___x_2543_; 
v___x_2541_ = ((size_t)0ULL);
v___x_2542_ = lean_usize_of_nat(v___x_2539_);
v___x_2543_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(v_val_2528_, v_exceptFVars_2502_, v___x_2541_, v___x_2542_);
if (v___x_2543_ == 0)
{
goto v___jp_2529_;
}
else
{
lean_object* v___x_2544_; lean_object* v___x_2545_; 
lean_dec(v_val_2528_);
v___x_2544_ = lean_unsigned_to_nat(1u);
v___x_2545_ = lean_nat_add(v_i_2503_, v___x_2544_);
lean_dec(v_i_2503_);
v_i_2503_ = v___x_2545_;
goto _start;
}
}
}
v___jp_2529_:
{
lean_object* v_size_2530_; uint8_t v___x_2531_; 
v_size_2530_ = lean_ctor_get(v_a_u2082_2501_, 2);
v___x_2531_ = lean_nat_dec_lt(v_j_2504_, v_size_2530_);
if (v___x_2531_ == 0)
{
lean_dec(v_val_2528_);
lean_dec(v_j_2504_);
lean_dec(v_i_2503_);
return v___x_2531_;
}
else
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2523_, v_a_u2082_2501_, v_j_2504_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
lean_dec(v_val_2528_);
v___x_2533_ = lean_unsigned_to_nat(1u);
v___x_2534_ = lean_nat_add(v_j_2504_, v___x_2533_);
lean_dec(v_j_2504_);
v_j_2504_ = v___x_2534_;
goto _start;
}
else
{
lean_object* v_val_2536_; lean_object* v_fvarId_2537_; 
v_val_2536_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_val_2536_);
lean_dec_ref_known(v___x_2532_, 1);
v_fvarId_2537_ = lean_ctor_get(v_val_2528_, 1);
lean_inc(v_fvarId_2537_);
lean_dec(v_val_2528_);
v___y_2517_ = v_val_2536_;
v___y_2518_ = v_fvarId_2537_;
goto v___jp_2516_;
}
}
}
}
}
v___jp_2505_:
{
uint8_t v___x_2508_; 
v___x_2508_ = l_Lean_instBEqFVarId_beq(v___y_2506_, v___y_2507_);
lean_dec(v___y_2507_);
lean_dec(v___y_2506_);
if (v___x_2508_ == 0)
{
lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2509_ = lean_unsigned_to_nat(1u);
v___x_2510_ = lean_nat_add(v_j_2504_, v___x_2509_);
lean_dec(v_j_2504_);
v_j_2504_ = v___x_2510_;
goto _start;
}
else
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2512_ = lean_unsigned_to_nat(1u);
v___x_2513_ = lean_nat_add(v_i_2503_, v___x_2512_);
lean_dec(v_i_2503_);
v___x_2514_ = lean_nat_add(v_j_2504_, v___x_2512_);
lean_dec(v_j_2504_);
v_i_2503_ = v___x_2513_;
v_j_2504_ = v___x_2514_;
goto _start;
}
}
v___jp_2516_:
{
lean_object* v_fvarId_2519_; 
v_fvarId_2519_ = lean_ctor_get(v___y_2517_, 1);
lean_inc(v_fvarId_2519_);
lean_dec_ref(v___y_2517_);
v___y_2506_ = v___y_2518_;
v___y_2507_ = v_fvarId_2519_;
goto v___jp_2505_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOfAux___boxed(lean_object* v_a_u2081_2547_, lean_object* v_a_u2082_2548_, lean_object* v_exceptFVars_2549_, lean_object* v_i_2550_, lean_object* v_j_2551_){
_start:
{
uint8_t v_res_2552_; lean_object* v_r_2553_; 
v_res_2552_ = l_Lean_LocalContext_isSubPrefixOfAux(v_a_u2081_2547_, v_a_u2082_2548_, v_exceptFVars_2549_, v_i_2550_, v_j_2551_);
lean_dec_ref(v_exceptFVars_2549_);
lean_dec_ref(v_a_u2082_2548_);
lean_dec_ref(v_a_u2081_2547_);
v_r_2553_ = lean_box(v_res_2552_);
return v_r_2553_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object* v_lctx_u2081_2554_, lean_object* v_lctx_u2082_2555_, lean_object* v_exceptFVars_2556_){
_start:
{
lean_object* v_decls_2557_; lean_object* v_decls_2558_; lean_object* v___x_2559_; uint8_t v___x_2560_; 
v_decls_2557_ = lean_ctor_get(v_lctx_u2081_2554_, 1);
v_decls_2558_ = lean_ctor_get(v_lctx_u2082_2555_, 1);
v___x_2559_ = lean_unsigned_to_nat(0u);
v___x_2560_ = l_Lean_LocalContext_isSubPrefixOfAux(v_decls_2557_, v_decls_2558_, v_exceptFVars_2556_, v___x_2559_, v___x_2559_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOf___boxed(lean_object* v_lctx_u2081_2561_, lean_object* v_lctx_u2082_2562_, lean_object* v_exceptFVars_2563_){
_start:
{
uint8_t v_res_2564_; lean_object* v_r_2565_; 
v_res_2564_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_u2081_2561_, v_lctx_u2082_2562_, v_exceptFVars_2563_);
lean_dec_ref(v_exceptFVars_2563_);
lean_dec_ref(v_lctx_u2082_2562_);
lean_dec_ref(v_lctx_u2081_2561_);
v_r_2565_ = lean_box(v_res_2564_);
return v_r_2565_;
}
}
static lean_object* _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2567_ = ((lean_object*)(l_Lean_LocalContext_get_x21___closed__1));
v___x_2568_ = lean_unsigned_to_nat(14u);
v___x_2569_ = lean_unsigned_to_nat(576u);
v___x_2570_ = ((lean_object*)(l_Lean_LocalContext_mkBinding___lam__0___closed__0));
v___x_2571_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_2572_ = l_mkPanicMessageWithDecl(v___x_2571_, v___x_2570_, v___x_2569_, v___x_2568_, v___x_2567_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0(lean_object* v_xs_2573_, lean_object* v_lctx_2574_, lean_object* v___x_2575_, uint8_t v_isLambda_2576_, uint8_t v_usedLetOnly_2577_, uint8_t v_generalizeNondepLet_2578_, lean_object* v_i_2579_, lean_object* v_x_2580_, lean_object* v_b_2581_){
_start:
{
lean_object* v_n_2583_; lean_object* v_ty_2584_; uint8_t v_bi_2585_; lean_object* v_x_2589_; lean_object* v___x_2590_; 
v_x_2589_ = lean_array_fget_borrowed(v_xs_2573_, v_i_2579_);
v___x_2590_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_2574_, v_x_2589_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
lean_dec_ref(v_b_2581_);
v___x_2591_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_2592_ = l_panic___redArg(v___x_2575_, v___x_2591_);
return v___x_2592_;
}
else
{
lean_object* v_val_2593_; 
v_val_2593_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_val_2593_);
lean_dec_ref_known(v___x_2590_, 1);
if (lean_obj_tag(v_val_2593_) == 0)
{
lean_object* v_userName_2594_; lean_object* v_type_2595_; uint8_t v_bi_2596_; 
v_userName_2594_ = lean_ctor_get(v_val_2593_, 2);
lean_inc(v_userName_2594_);
v_type_2595_ = lean_ctor_get(v_val_2593_, 3);
lean_inc_ref(v_type_2595_);
v_bi_2596_ = lean_ctor_get_uint8(v_val_2593_, sizeof(void*)*4);
lean_dec_ref_known(v_val_2593_, 4);
v_n_2583_ = v_userName_2594_;
v_ty_2584_ = v_type_2595_;
v_bi_2585_ = v_bi_2596_;
goto v___jp_2582_;
}
else
{
lean_object* v_userName_2597_; lean_object* v_type_2598_; lean_object* v_value_2599_; uint8_t v_nondep_2600_; uint8_t v___y_2606_; 
v_userName_2597_ = lean_ctor_get(v_val_2593_, 2);
lean_inc(v_userName_2597_);
v_type_2598_ = lean_ctor_get(v_val_2593_, 3);
lean_inc_ref(v_type_2598_);
v_value_2599_ = lean_ctor_get(v_val_2593_, 4);
lean_inc_ref(v_value_2599_);
v_nondep_2600_ = lean_ctor_get_uint8(v_val_2593_, sizeof(void*)*5);
lean_dec_ref_known(v_val_2593_, 5);
if (v_nondep_2600_ == 0)
{
v___y_2606_ = v_nondep_2600_;
goto v___jp_2605_;
}
else
{
if (v_generalizeNondepLet_2578_ == 0)
{
v___y_2606_ = v_generalizeNondepLet_2578_;
goto v___jp_2605_;
}
else
{
uint8_t v___x_2611_; 
lean_dec_ref(v_value_2599_);
v___x_2611_ = 0;
v_n_2583_ = v_userName_2597_;
v_ty_2584_ = v_type_2598_;
v_bi_2585_ = v___x_2611_;
goto v___jp_2582_;
}
}
v___jp_2601_:
{
lean_object* v_ty_2602_; lean_object* v_val_2603_; lean_object* v___x_2604_; 
v_ty_2602_ = lean_expr_abstract_range(v_type_2598_, v_i_2579_, v_xs_2573_);
lean_dec_ref(v_type_2598_);
v_val_2603_ = lean_expr_abstract_range(v_value_2599_, v_i_2579_, v_xs_2573_);
lean_dec_ref(v_value_2599_);
v___x_2604_ = l_Lean_Expr_letE___override(v_userName_2597_, v_ty_2602_, v_val_2603_, v_b_2581_, v_nondep_2600_);
return v___x_2604_;
}
v___jp_2605_:
{
if (v_usedLetOnly_2577_ == 0)
{
goto v___jp_2601_;
}
else
{
if (v___y_2606_ == 0)
{
lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2607_ = lean_unsigned_to_nat(0u);
v___x_2608_ = lean_expr_has_loose_bvar(v_b_2581_, v___x_2607_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
lean_dec_ref(v_value_2599_);
lean_dec_ref(v_type_2598_);
lean_dec(v_userName_2597_);
v___x_2609_ = lean_unsigned_to_nat(1u);
v___x_2610_ = lean_expr_lower_loose_bvars(v_b_2581_, v___x_2609_, v___x_2609_);
lean_dec_ref(v_b_2581_);
return v___x_2610_;
}
else
{
goto v___jp_2601_;
}
}
else
{
goto v___jp_2601_;
}
}
}
}
}
v___jp_2582_:
{
lean_object* v_ty_2586_; 
v_ty_2586_ = lean_expr_abstract_range(v_ty_2584_, v_i_2579_, v_xs_2573_);
lean_dec_ref(v_ty_2584_);
if (v_isLambda_2576_ == 0)
{
lean_object* v___x_2587_; 
v___x_2587_ = l_Lean_mkForall(v_n_2583_, v_bi_2585_, v_ty_2586_, v_b_2581_);
return v___x_2587_;
}
else
{
lean_object* v___x_2588_; 
v___x_2588_ = l_Lean_mkLambda(v_n_2583_, v_bi_2585_, v_ty_2586_, v_b_2581_);
return v___x_2588_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0___boxed(lean_object* v_xs_2612_, lean_object* v_lctx_2613_, lean_object* v___x_2614_, lean_object* v_isLambda_2615_, lean_object* v_usedLetOnly_2616_, lean_object* v_generalizeNondepLet_2617_, lean_object* v_i_2618_, lean_object* v_x_2619_, lean_object* v_b_2620_){
_start:
{
uint8_t v_isLambda_boxed_2621_; uint8_t v_usedLetOnly_boxed_2622_; uint8_t v_generalizeNondepLet_boxed_2623_; lean_object* v_res_2624_; 
v_isLambda_boxed_2621_ = lean_unbox(v_isLambda_2615_);
v_usedLetOnly_boxed_2622_ = lean_unbox(v_usedLetOnly_2616_);
v_generalizeNondepLet_boxed_2623_ = lean_unbox(v_generalizeNondepLet_2617_);
v_res_2624_ = l_Lean_LocalContext_mkBinding___lam__0(v_xs_2612_, v_lctx_2613_, v___x_2614_, v_isLambda_boxed_2621_, v_usedLetOnly_boxed_2622_, v_generalizeNondepLet_boxed_2623_, v_i_2618_, v_x_2619_, v_b_2620_);
lean_dec(v_i_2618_);
lean_dec_ref(v___x_2614_);
lean_dec_ref(v_xs_2612_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding(uint8_t v_isLambda_2625_, lean_object* v_lctx_2626_, lean_object* v_xs_2627_, lean_object* v_b_2628_, uint8_t v_usedLetOnly_2629_, uint8_t v_generalizeNondepLet_2630_){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___f_2635_; lean_object* v_b_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2631_ = l_Lean_instInhabitedExpr;
v___x_2632_ = lean_box(v_isLambda_2625_);
v___x_2633_ = lean_box(v_usedLetOnly_2629_);
v___x_2634_ = lean_box(v_generalizeNondepLet_2630_);
lean_inc_ref(v_xs_2627_);
v___f_2635_ = lean_alloc_closure((void*)(l_Lean_LocalContext_mkBinding___lam__0___boxed), 9, 6);
lean_closure_set(v___f_2635_, 0, v_xs_2627_);
lean_closure_set(v___f_2635_, 1, v_lctx_2626_);
lean_closure_set(v___f_2635_, 2, v___x_2631_);
lean_closure_set(v___f_2635_, 3, v___x_2632_);
lean_closure_set(v___f_2635_, 4, v___x_2633_);
lean_closure_set(v___f_2635_, 5, v___x_2634_);
v_b_2636_ = lean_expr_abstract(v_b_2628_, v_xs_2627_);
v___x_2637_ = lean_array_get_size(v_xs_2627_);
lean_dec_ref(v_xs_2627_);
v___x_2638_ = l_Nat_foldRev___redArg(v___x_2637_, v___f_2635_, v_b_2636_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___boxed(lean_object* v_isLambda_2639_, lean_object* v_lctx_2640_, lean_object* v_xs_2641_, lean_object* v_b_2642_, lean_object* v_usedLetOnly_2643_, lean_object* v_generalizeNondepLet_2644_){
_start:
{
uint8_t v_isLambda_boxed_2645_; uint8_t v_usedLetOnly_boxed_2646_; uint8_t v_generalizeNondepLet_boxed_2647_; lean_object* v_res_2648_; 
v_isLambda_boxed_2645_ = lean_unbox(v_isLambda_2639_);
v_usedLetOnly_boxed_2646_ = lean_unbox(v_usedLetOnly_2643_);
v_generalizeNondepLet_boxed_2647_ = lean_unbox(v_generalizeNondepLet_2644_);
v_res_2648_ = l_Lean_LocalContext_mkBinding(v_isLambda_boxed_2645_, v_lctx_2640_, v_xs_2641_, v_b_2642_, v_usedLetOnly_boxed_2646_, v_generalizeNondepLet_boxed_2647_);
lean_dec_ref(v_b_2642_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(lean_object* v_xs_2649_, lean_object* v_lctx_2650_, uint8_t v_usedLetOnly_2651_, uint8_t v_generalizeNondepLet_2652_, lean_object* v_x_2653_, lean_object* v_x_2654_){
_start:
{
lean_object* v_zero_2655_; uint8_t v_isZero_2656_; 
v_zero_2655_ = lean_unsigned_to_nat(0u);
v_isZero_2656_ = lean_nat_dec_eq(v_x_2653_, v_zero_2655_);
if (v_isZero_2656_ == 1)
{
lean_dec(v_x_2653_);
lean_dec_ref(v_lctx_2650_);
return v_x_2654_;
}
else
{
lean_object* v_one_2657_; lean_object* v_n_2658_; lean_object* v_n_2660_; lean_object* v_ty_2661_; uint8_t v_bi_2662_; lean_object* v_x_2666_; lean_object* v___x_2667_; 
v_one_2657_ = lean_unsigned_to_nat(1u);
v_n_2658_ = lean_nat_sub(v_x_2653_, v_one_2657_);
lean_dec(v_x_2653_);
v_x_2666_ = lean_array_fget_borrowed(v_xs_2649_, v_n_2658_);
lean_inc_ref(v_lctx_2650_);
v___x_2667_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_2650_, v_x_2666_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v___x_2668_; lean_object* v___x_2669_; 
lean_dec_ref(v_x_2654_);
v___x_2668_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_2669_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_2668_);
v_x_2653_ = v_n_2658_;
v_x_2654_ = v___x_2669_;
goto _start;
}
else
{
lean_object* v_val_2671_; 
v_val_2671_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_val_2671_);
lean_dec_ref_known(v___x_2667_, 1);
if (lean_obj_tag(v_val_2671_) == 0)
{
lean_object* v_userName_2672_; lean_object* v_type_2673_; uint8_t v_bi_2674_; 
v_userName_2672_ = lean_ctor_get(v_val_2671_, 2);
lean_inc(v_userName_2672_);
v_type_2673_ = lean_ctor_get(v_val_2671_, 3);
lean_inc_ref(v_type_2673_);
v_bi_2674_ = lean_ctor_get_uint8(v_val_2671_, sizeof(void*)*4);
lean_dec_ref_known(v_val_2671_, 4);
v_n_2660_ = v_userName_2672_;
v_ty_2661_ = v_type_2673_;
v_bi_2662_ = v_bi_2674_;
goto v___jp_2659_;
}
else
{
lean_object* v_userName_2675_; lean_object* v_type_2676_; lean_object* v_value_2677_; uint8_t v_nondep_2678_; uint8_t v___y_2685_; 
v_userName_2675_ = lean_ctor_get(v_val_2671_, 2);
lean_inc(v_userName_2675_);
v_type_2676_ = lean_ctor_get(v_val_2671_, 3);
lean_inc_ref(v_type_2676_);
v_value_2677_ = lean_ctor_get(v_val_2671_, 4);
lean_inc_ref(v_value_2677_);
v_nondep_2678_ = lean_ctor_get_uint8(v_val_2671_, sizeof(void*)*5);
lean_dec_ref_known(v_val_2671_, 5);
if (v_nondep_2678_ == 0)
{
v___y_2685_ = v_nondep_2678_;
goto v___jp_2684_;
}
else
{
if (v_generalizeNondepLet_2652_ == 0)
{
v___y_2685_ = v_generalizeNondepLet_2652_;
goto v___jp_2684_;
}
else
{
uint8_t v___x_2689_; 
lean_dec_ref(v_value_2677_);
v___x_2689_ = 0;
v_n_2660_ = v_userName_2675_;
v_ty_2661_ = v_type_2676_;
v_bi_2662_ = v___x_2689_;
goto v___jp_2659_;
}
}
v___jp_2679_:
{
lean_object* v_ty_2680_; lean_object* v_val_2681_; lean_object* v___x_2682_; 
v_ty_2680_ = lean_expr_abstract_range(v_type_2676_, v_n_2658_, v_xs_2649_);
lean_dec_ref(v_type_2676_);
v_val_2681_ = lean_expr_abstract_range(v_value_2677_, v_n_2658_, v_xs_2649_);
lean_dec_ref(v_value_2677_);
v___x_2682_ = l_Lean_Expr_letE___override(v_userName_2675_, v_ty_2680_, v_val_2681_, v_x_2654_, v_nondep_2678_);
v_x_2653_ = v_n_2658_;
v_x_2654_ = v___x_2682_;
goto _start;
}
v___jp_2684_:
{
if (v_usedLetOnly_2651_ == 0)
{
goto v___jp_2679_;
}
else
{
if (v___y_2685_ == 0)
{
uint8_t v___x_2686_; 
v___x_2686_ = lean_expr_has_loose_bvar(v_x_2654_, v_zero_2655_);
if (v___x_2686_ == 0)
{
lean_object* v___x_2687_; 
lean_dec_ref(v_value_2677_);
lean_dec_ref(v_type_2676_);
lean_dec(v_userName_2675_);
v___x_2687_ = lean_expr_lower_loose_bvars(v_x_2654_, v_one_2657_, v_one_2657_);
lean_dec_ref(v_x_2654_);
v_x_2653_ = v_n_2658_;
v_x_2654_ = v___x_2687_;
goto _start;
}
else
{
goto v___jp_2679_;
}
}
else
{
goto v___jp_2679_;
}
}
}
}
}
v___jp_2659_:
{
lean_object* v_ty_2663_; lean_object* v___x_2664_; 
v_ty_2663_ = lean_expr_abstract_range(v_ty_2661_, v_n_2658_, v_xs_2649_);
lean_dec_ref(v_ty_2661_);
v___x_2664_ = l_Lean_mkLambda(v_n_2660_, v_bi_2662_, v_ty_2663_, v_x_2654_);
v_x_2653_ = v_n_2658_;
v_x_2654_ = v___x_2664_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0___boxed(lean_object* v_xs_2690_, lean_object* v_lctx_2691_, lean_object* v_usedLetOnly_2692_, lean_object* v_generalizeNondepLet_2693_, lean_object* v_x_2694_, lean_object* v_x_2695_){
_start:
{
uint8_t v_usedLetOnly_boxed_2696_; uint8_t v_generalizeNondepLet_boxed_2697_; lean_object* v_res_2698_; 
v_usedLetOnly_boxed_2696_ = lean_unbox(v_usedLetOnly_2692_);
v_generalizeNondepLet_boxed_2697_ = lean_unbox(v_generalizeNondepLet_2693_);
v_res_2698_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_2690_, v_lctx_2691_, v_usedLetOnly_boxed_2696_, v_generalizeNondepLet_boxed_2697_, v_x_2694_, v_x_2695_);
lean_dec_ref(v_xs_2690_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(lean_object* v_xs_2699_, lean_object* v_lctx_2700_, uint8_t v_usedLetOnly_2701_, uint8_t v_generalizeNondepLet_2702_, lean_object* v_x_2703_, lean_object* v_x_2704_){
_start:
{
lean_object* v_zero_2705_; uint8_t v_isZero_2706_; 
v_zero_2705_ = lean_unsigned_to_nat(0u);
v_isZero_2706_ = lean_nat_dec_eq(v_x_2703_, v_zero_2705_);
if (v_isZero_2706_ == 1)
{
lean_dec_ref(v_lctx_2700_);
return v_x_2704_;
}
else
{
lean_object* v_one_2707_; lean_object* v_n_2708_; lean_object* v_n_2710_; lean_object* v_ty_2711_; uint8_t v_bi_2712_; lean_object* v_x_2716_; lean_object* v___x_2717_; 
v_one_2707_ = lean_unsigned_to_nat(1u);
v_n_2708_ = lean_nat_sub(v_x_2703_, v_one_2707_);
v_x_2716_ = lean_array_fget_borrowed(v_xs_2699_, v_n_2708_);
lean_inc_ref(v_lctx_2700_);
v___x_2717_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_2700_, v_x_2716_);
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
lean_dec_ref(v_x_2704_);
v___x_2718_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_2719_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_2718_);
v___x_2720_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_2699_, v_lctx_2700_, v_usedLetOnly_2701_, v_generalizeNondepLet_2702_, v_n_2708_, v___x_2719_);
return v___x_2720_;
}
else
{
lean_object* v_val_2721_; 
v_val_2721_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_val_2721_);
lean_dec_ref_known(v___x_2717_, 1);
if (lean_obj_tag(v_val_2721_) == 0)
{
lean_object* v_userName_2722_; lean_object* v_type_2723_; uint8_t v_bi_2724_; 
v_userName_2722_ = lean_ctor_get(v_val_2721_, 2);
lean_inc(v_userName_2722_);
v_type_2723_ = lean_ctor_get(v_val_2721_, 3);
lean_inc_ref(v_type_2723_);
v_bi_2724_ = lean_ctor_get_uint8(v_val_2721_, sizeof(void*)*4);
lean_dec_ref_known(v_val_2721_, 4);
v_n_2710_ = v_userName_2722_;
v_ty_2711_ = v_type_2723_;
v_bi_2712_ = v_bi_2724_;
goto v___jp_2709_;
}
else
{
lean_object* v_userName_2725_; lean_object* v_type_2726_; lean_object* v_value_2727_; uint8_t v_nondep_2728_; uint8_t v___y_2735_; 
v_userName_2725_ = lean_ctor_get(v_val_2721_, 2);
lean_inc(v_userName_2725_);
v_type_2726_ = lean_ctor_get(v_val_2721_, 3);
lean_inc_ref(v_type_2726_);
v_value_2727_ = lean_ctor_get(v_val_2721_, 4);
lean_inc_ref(v_value_2727_);
v_nondep_2728_ = lean_ctor_get_uint8(v_val_2721_, sizeof(void*)*5);
lean_dec_ref_known(v_val_2721_, 5);
if (v_nondep_2728_ == 0)
{
v___y_2735_ = v_nondep_2728_;
goto v___jp_2734_;
}
else
{
if (v_generalizeNondepLet_2702_ == 0)
{
v___y_2735_ = v_generalizeNondepLet_2702_;
goto v___jp_2734_;
}
else
{
uint8_t v___x_2739_; 
lean_dec_ref(v_value_2727_);
v___x_2739_ = 0;
v_n_2710_ = v_userName_2725_;
v_ty_2711_ = v_type_2726_;
v_bi_2712_ = v___x_2739_;
goto v___jp_2709_;
}
}
v___jp_2729_:
{
lean_object* v_ty_2730_; lean_object* v_val_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; 
v_ty_2730_ = lean_expr_abstract_range(v_type_2726_, v_n_2708_, v_xs_2699_);
lean_dec_ref(v_type_2726_);
v_val_2731_ = lean_expr_abstract_range(v_value_2727_, v_n_2708_, v_xs_2699_);
lean_dec_ref(v_value_2727_);
v___x_2732_ = l_Lean_Expr_letE___override(v_userName_2725_, v_ty_2730_, v_val_2731_, v_x_2704_, v_nondep_2728_);
v___x_2733_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_2699_, v_lctx_2700_, v_usedLetOnly_2701_, v_generalizeNondepLet_2702_, v_n_2708_, v___x_2732_);
return v___x_2733_;
}
v___jp_2734_:
{
if (v_usedLetOnly_2701_ == 0)
{
goto v___jp_2729_;
}
else
{
if (v___y_2735_ == 0)
{
uint8_t v___x_2736_; 
v___x_2736_ = lean_expr_has_loose_bvar(v_x_2704_, v_zero_2705_);
if (v___x_2736_ == 0)
{
lean_object* v___x_2737_; lean_object* v___x_2738_; 
lean_dec_ref(v_value_2727_);
lean_dec_ref(v_type_2726_);
lean_dec(v_userName_2725_);
v___x_2737_ = lean_expr_lower_loose_bvars(v_x_2704_, v_one_2707_, v_one_2707_);
lean_dec_ref(v_x_2704_);
v___x_2738_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_2699_, v_lctx_2700_, v_usedLetOnly_2701_, v_generalizeNondepLet_2702_, v_n_2708_, v___x_2737_);
return v___x_2738_;
}
else
{
goto v___jp_2729_;
}
}
else
{
goto v___jp_2729_;
}
}
}
}
}
v___jp_2709_:
{
lean_object* v_ty_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v_ty_2713_ = lean_expr_abstract_range(v_ty_2711_, v_n_2708_, v_xs_2699_);
lean_dec_ref(v_ty_2711_);
v___x_2714_ = l_Lean_mkLambda(v_n_2710_, v_bi_2712_, v_ty_2713_, v_x_2704_);
v___x_2715_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_2699_, v_lctx_2700_, v_usedLetOnly_2701_, v_generalizeNondepLet_2702_, v_n_2708_, v___x_2714_);
return v___x_2715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0___boxed(lean_object* v_xs_2740_, lean_object* v_lctx_2741_, lean_object* v_usedLetOnly_2742_, lean_object* v_generalizeNondepLet_2743_, lean_object* v_x_2744_, lean_object* v_x_2745_){
_start:
{
uint8_t v_usedLetOnly_boxed_2746_; uint8_t v_generalizeNondepLet_boxed_2747_; lean_object* v_res_2748_; 
v_usedLetOnly_boxed_2746_ = lean_unbox(v_usedLetOnly_2742_);
v_generalizeNondepLet_boxed_2747_ = lean_unbox(v_generalizeNondepLet_2743_);
v_res_2748_ = l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(v_xs_2740_, v_lctx_2741_, v_usedLetOnly_boxed_2746_, v_generalizeNondepLet_boxed_2747_, v_x_2744_, v_x_2745_);
lean_dec(v_x_2744_);
lean_dec_ref(v_xs_2740_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda(lean_object* v_lctx_2749_, lean_object* v_xs_2750_, lean_object* v_b_2751_, uint8_t v_usedLetOnly_2752_, uint8_t v_generalizeNondepLet_2753_){
_start:
{
lean_object* v_b_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v_b_2754_ = lean_expr_abstract(v_b_2751_, v_xs_2750_);
v___x_2755_ = lean_array_get_size(v_xs_2750_);
v___x_2756_ = l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(v_xs_2750_, v_lctx_2749_, v_usedLetOnly_2752_, v_generalizeNondepLet_2753_, v___x_2755_, v_b_2754_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda___boxed(lean_object* v_lctx_2757_, lean_object* v_xs_2758_, lean_object* v_b_2759_, lean_object* v_usedLetOnly_2760_, lean_object* v_generalizeNondepLet_2761_){
_start:
{
uint8_t v_usedLetOnly_boxed_2762_; uint8_t v_generalizeNondepLet_boxed_2763_; lean_object* v_res_2764_; 
v_usedLetOnly_boxed_2762_ = lean_unbox(v_usedLetOnly_2760_);
v_generalizeNondepLet_boxed_2763_ = lean_unbox(v_generalizeNondepLet_2761_);
v_res_2764_ = l_Lean_LocalContext_mkLambda(v_lctx_2757_, v_xs_2758_, v_b_2759_, v_usedLetOnly_boxed_2762_, v_generalizeNondepLet_boxed_2763_);
lean_dec_ref(v_b_2759_);
lean_dec_ref(v_xs_2758_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(lean_object* v_xs_2765_, lean_object* v_lctx_2766_, uint8_t v_usedLetOnly_2767_, uint8_t v_generalizeNondepLet_2768_, lean_object* v_x_2769_, lean_object* v_x_2770_){
_start:
{
lean_object* v_zero_2771_; uint8_t v_isZero_2772_; 
v_zero_2771_ = lean_unsigned_to_nat(0u);
v_isZero_2772_ = lean_nat_dec_eq(v_x_2769_, v_zero_2771_);
if (v_isZero_2772_ == 1)
{
lean_dec(v_x_2769_);
lean_dec_ref(v_lctx_2766_);
return v_x_2770_;
}
else
{
lean_object* v_one_2773_; lean_object* v_n_2774_; lean_object* v_n_2776_; lean_object* v_ty_2777_; uint8_t v_bi_2778_; lean_object* v_x_2782_; lean_object* v___x_2783_; 
v_one_2773_ = lean_unsigned_to_nat(1u);
v_n_2774_ = lean_nat_sub(v_x_2769_, v_one_2773_);
lean_dec(v_x_2769_);
v_x_2782_ = lean_array_fget_borrowed(v_xs_2765_, v_n_2774_);
lean_inc_ref(v_lctx_2766_);
v___x_2783_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_2766_, v_x_2782_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v___x_2784_; lean_object* v___x_2785_; 
lean_dec_ref(v_x_2770_);
v___x_2784_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_2785_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_2784_);
v_x_2769_ = v_n_2774_;
v_x_2770_ = v___x_2785_;
goto _start;
}
else
{
lean_object* v_val_2787_; 
v_val_2787_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_val_2787_);
lean_dec_ref_known(v___x_2783_, 1);
if (lean_obj_tag(v_val_2787_) == 0)
{
lean_object* v_userName_2788_; lean_object* v_type_2789_; uint8_t v_bi_2790_; 
v_userName_2788_ = lean_ctor_get(v_val_2787_, 2);
lean_inc(v_userName_2788_);
v_type_2789_ = lean_ctor_get(v_val_2787_, 3);
lean_inc_ref(v_type_2789_);
v_bi_2790_ = lean_ctor_get_uint8(v_val_2787_, sizeof(void*)*4);
lean_dec_ref_known(v_val_2787_, 4);
v_n_2776_ = v_userName_2788_;
v_ty_2777_ = v_type_2789_;
v_bi_2778_ = v_bi_2790_;
goto v___jp_2775_;
}
else
{
lean_object* v_userName_2791_; lean_object* v_type_2792_; lean_object* v_value_2793_; uint8_t v_nondep_2794_; uint8_t v___y_2801_; 
v_userName_2791_ = lean_ctor_get(v_val_2787_, 2);
lean_inc(v_userName_2791_);
v_type_2792_ = lean_ctor_get(v_val_2787_, 3);
lean_inc_ref(v_type_2792_);
v_value_2793_ = lean_ctor_get(v_val_2787_, 4);
lean_inc_ref(v_value_2793_);
v_nondep_2794_ = lean_ctor_get_uint8(v_val_2787_, sizeof(void*)*5);
lean_dec_ref_known(v_val_2787_, 5);
if (v_nondep_2794_ == 0)
{
v___y_2801_ = v_nondep_2794_;
goto v___jp_2800_;
}
else
{
if (v_generalizeNondepLet_2768_ == 0)
{
v___y_2801_ = v_generalizeNondepLet_2768_;
goto v___jp_2800_;
}
else
{
uint8_t v___x_2805_; 
lean_dec_ref(v_value_2793_);
v___x_2805_ = 0;
v_n_2776_ = v_userName_2791_;
v_ty_2777_ = v_type_2792_;
v_bi_2778_ = v___x_2805_;
goto v___jp_2775_;
}
}
v___jp_2795_:
{
lean_object* v_ty_2796_; lean_object* v_val_2797_; lean_object* v___x_2798_; 
v_ty_2796_ = lean_expr_abstract_range(v_type_2792_, v_n_2774_, v_xs_2765_);
lean_dec_ref(v_type_2792_);
v_val_2797_ = lean_expr_abstract_range(v_value_2793_, v_n_2774_, v_xs_2765_);
lean_dec_ref(v_value_2793_);
v___x_2798_ = l_Lean_Expr_letE___override(v_userName_2791_, v_ty_2796_, v_val_2797_, v_x_2770_, v_nondep_2794_);
v_x_2769_ = v_n_2774_;
v_x_2770_ = v___x_2798_;
goto _start;
}
v___jp_2800_:
{
if (v_usedLetOnly_2767_ == 0)
{
goto v___jp_2795_;
}
else
{
if (v___y_2801_ == 0)
{
uint8_t v___x_2802_; 
v___x_2802_ = lean_expr_has_loose_bvar(v_x_2770_, v_zero_2771_);
if (v___x_2802_ == 0)
{
lean_object* v___x_2803_; 
lean_dec_ref(v_value_2793_);
lean_dec_ref(v_type_2792_);
lean_dec(v_userName_2791_);
v___x_2803_ = lean_expr_lower_loose_bvars(v_x_2770_, v_one_2773_, v_one_2773_);
lean_dec_ref(v_x_2770_);
v_x_2769_ = v_n_2774_;
v_x_2770_ = v___x_2803_;
goto _start;
}
else
{
goto v___jp_2795_;
}
}
else
{
goto v___jp_2795_;
}
}
}
}
}
v___jp_2775_:
{
lean_object* v_ty_2779_; lean_object* v___x_2780_; 
v_ty_2779_ = lean_expr_abstract_range(v_ty_2777_, v_n_2774_, v_xs_2765_);
lean_dec_ref(v_ty_2777_);
v___x_2780_ = l_Lean_mkForall(v_n_2776_, v_bi_2778_, v_ty_2779_, v_x_2770_);
v_x_2769_ = v_n_2774_;
v_x_2770_ = v___x_2780_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0___boxed(lean_object* v_xs_2806_, lean_object* v_lctx_2807_, lean_object* v_usedLetOnly_2808_, lean_object* v_generalizeNondepLet_2809_, lean_object* v_x_2810_, lean_object* v_x_2811_){
_start:
{
uint8_t v_usedLetOnly_boxed_2812_; uint8_t v_generalizeNondepLet_boxed_2813_; lean_object* v_res_2814_; 
v_usedLetOnly_boxed_2812_ = lean_unbox(v_usedLetOnly_2808_);
v_generalizeNondepLet_boxed_2813_ = lean_unbox(v_generalizeNondepLet_2809_);
v_res_2814_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_2806_, v_lctx_2807_, v_usedLetOnly_boxed_2812_, v_generalizeNondepLet_boxed_2813_, v_x_2810_, v_x_2811_);
lean_dec_ref(v_xs_2806_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(lean_object* v_xs_2815_, lean_object* v_lctx_2816_, uint8_t v_usedLetOnly_2817_, uint8_t v_generalizeNondepLet_2818_, lean_object* v_x_2819_, lean_object* v_x_2820_){
_start:
{
lean_object* v_zero_2821_; uint8_t v_isZero_2822_; 
v_zero_2821_ = lean_unsigned_to_nat(0u);
v_isZero_2822_ = lean_nat_dec_eq(v_x_2819_, v_zero_2821_);
if (v_isZero_2822_ == 1)
{
lean_dec_ref(v_lctx_2816_);
return v_x_2820_;
}
else
{
lean_object* v_one_2823_; lean_object* v_n_2824_; lean_object* v_n_2826_; lean_object* v_ty_2827_; uint8_t v_bi_2828_; lean_object* v_x_2832_; lean_object* v___x_2833_; 
v_one_2823_ = lean_unsigned_to_nat(1u);
v_n_2824_ = lean_nat_sub(v_x_2819_, v_one_2823_);
v_x_2832_ = lean_array_fget_borrowed(v_xs_2815_, v_n_2824_);
lean_inc_ref(v_lctx_2816_);
v___x_2833_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_2816_, v_x_2832_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
lean_dec_ref(v_x_2820_);
v___x_2834_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_2835_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_2834_);
v___x_2836_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_2815_, v_lctx_2816_, v_usedLetOnly_2817_, v_generalizeNondepLet_2818_, v_n_2824_, v___x_2835_);
return v___x_2836_;
}
else
{
lean_object* v_val_2837_; 
v_val_2837_ = lean_ctor_get(v___x_2833_, 0);
lean_inc(v_val_2837_);
lean_dec_ref_known(v___x_2833_, 1);
if (lean_obj_tag(v_val_2837_) == 0)
{
lean_object* v_userName_2838_; lean_object* v_type_2839_; uint8_t v_bi_2840_; 
v_userName_2838_ = lean_ctor_get(v_val_2837_, 2);
lean_inc(v_userName_2838_);
v_type_2839_ = lean_ctor_get(v_val_2837_, 3);
lean_inc_ref(v_type_2839_);
v_bi_2840_ = lean_ctor_get_uint8(v_val_2837_, sizeof(void*)*4);
lean_dec_ref_known(v_val_2837_, 4);
v_n_2826_ = v_userName_2838_;
v_ty_2827_ = v_type_2839_;
v_bi_2828_ = v_bi_2840_;
goto v___jp_2825_;
}
else
{
lean_object* v_userName_2841_; lean_object* v_type_2842_; lean_object* v_value_2843_; uint8_t v_nondep_2844_; uint8_t v___y_2851_; 
v_userName_2841_ = lean_ctor_get(v_val_2837_, 2);
lean_inc(v_userName_2841_);
v_type_2842_ = lean_ctor_get(v_val_2837_, 3);
lean_inc_ref(v_type_2842_);
v_value_2843_ = lean_ctor_get(v_val_2837_, 4);
lean_inc_ref(v_value_2843_);
v_nondep_2844_ = lean_ctor_get_uint8(v_val_2837_, sizeof(void*)*5);
lean_dec_ref_known(v_val_2837_, 5);
if (v_nondep_2844_ == 0)
{
v___y_2851_ = v_nondep_2844_;
goto v___jp_2850_;
}
else
{
if (v_generalizeNondepLet_2818_ == 0)
{
v___y_2851_ = v_generalizeNondepLet_2818_;
goto v___jp_2850_;
}
else
{
uint8_t v___x_2855_; 
lean_dec_ref(v_value_2843_);
v___x_2855_ = 0;
v_n_2826_ = v_userName_2841_;
v_ty_2827_ = v_type_2842_;
v_bi_2828_ = v___x_2855_;
goto v___jp_2825_;
}
}
v___jp_2845_:
{
lean_object* v_ty_2846_; lean_object* v_val_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_ty_2846_ = lean_expr_abstract_range(v_type_2842_, v_n_2824_, v_xs_2815_);
lean_dec_ref(v_type_2842_);
v_val_2847_ = lean_expr_abstract_range(v_value_2843_, v_n_2824_, v_xs_2815_);
lean_dec_ref(v_value_2843_);
v___x_2848_ = l_Lean_Expr_letE___override(v_userName_2841_, v_ty_2846_, v_val_2847_, v_x_2820_, v_nondep_2844_);
v___x_2849_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_2815_, v_lctx_2816_, v_usedLetOnly_2817_, v_generalizeNondepLet_2818_, v_n_2824_, v___x_2848_);
return v___x_2849_;
}
v___jp_2850_:
{
if (v_usedLetOnly_2817_ == 0)
{
goto v___jp_2845_;
}
else
{
if (v___y_2851_ == 0)
{
uint8_t v___x_2852_; 
v___x_2852_ = lean_expr_has_loose_bvar(v_x_2820_, v_zero_2821_);
if (v___x_2852_ == 0)
{
lean_object* v___x_2853_; lean_object* v___x_2854_; 
lean_dec_ref(v_value_2843_);
lean_dec_ref(v_type_2842_);
lean_dec(v_userName_2841_);
v___x_2853_ = lean_expr_lower_loose_bvars(v_x_2820_, v_one_2823_, v_one_2823_);
lean_dec_ref(v_x_2820_);
v___x_2854_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_2815_, v_lctx_2816_, v_usedLetOnly_2817_, v_generalizeNondepLet_2818_, v_n_2824_, v___x_2853_);
return v___x_2854_;
}
else
{
goto v___jp_2845_;
}
}
else
{
goto v___jp_2845_;
}
}
}
}
}
v___jp_2825_:
{
lean_object* v_ty_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v_ty_2829_ = lean_expr_abstract_range(v_ty_2827_, v_n_2824_, v_xs_2815_);
lean_dec_ref(v_ty_2827_);
v___x_2830_ = l_Lean_mkForall(v_n_2826_, v_bi_2828_, v_ty_2829_, v_x_2820_);
v___x_2831_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_2815_, v_lctx_2816_, v_usedLetOnly_2817_, v_generalizeNondepLet_2818_, v_n_2824_, v___x_2830_);
return v___x_2831_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0___boxed(lean_object* v_xs_2856_, lean_object* v_lctx_2857_, lean_object* v_usedLetOnly_2858_, lean_object* v_generalizeNondepLet_2859_, lean_object* v_x_2860_, lean_object* v_x_2861_){
_start:
{
uint8_t v_usedLetOnly_boxed_2862_; uint8_t v_generalizeNondepLet_boxed_2863_; lean_object* v_res_2864_; 
v_usedLetOnly_boxed_2862_ = lean_unbox(v_usedLetOnly_2858_);
v_generalizeNondepLet_boxed_2863_ = lean_unbox(v_generalizeNondepLet_2859_);
v_res_2864_ = l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(v_xs_2856_, v_lctx_2857_, v_usedLetOnly_boxed_2862_, v_generalizeNondepLet_boxed_2863_, v_x_2860_, v_x_2861_);
lean_dec(v_x_2860_);
lean_dec_ref(v_xs_2856_);
return v_res_2864_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall(lean_object* v_lctx_2865_, lean_object* v_xs_2866_, lean_object* v_b_2867_, uint8_t v_usedLetOnly_2868_, uint8_t v_generalizeNondepLet_2869_){
_start:
{
lean_object* v_b_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v_b_2870_ = lean_expr_abstract(v_b_2867_, v_xs_2866_);
v___x_2871_ = lean_array_get_size(v_xs_2866_);
v___x_2872_ = l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(v_xs_2866_, v_lctx_2865_, v_usedLetOnly_2868_, v_generalizeNondepLet_2869_, v___x_2871_, v_b_2870_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall___boxed(lean_object* v_lctx_2873_, lean_object* v_xs_2874_, lean_object* v_b_2875_, lean_object* v_usedLetOnly_2876_, lean_object* v_generalizeNondepLet_2877_){
_start:
{
uint8_t v_usedLetOnly_boxed_2878_; uint8_t v_generalizeNondepLet_boxed_2879_; lean_object* v_res_2880_; 
v_usedLetOnly_boxed_2878_ = lean_unbox(v_usedLetOnly_2876_);
v_generalizeNondepLet_boxed_2879_ = lean_unbox(v_generalizeNondepLet_2877_);
v_res_2880_ = l_Lean_LocalContext_mkForall(v_lctx_2873_, v_xs_2874_, v_b_2875_, v_usedLetOnly_boxed_2878_, v_generalizeNondepLet_boxed_2879_);
lean_dec_ref(v_b_2875_);
lean_dec_ref(v_xs_2874_);
return v_res_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg___lam__0(lean_object* v_toPure_2881_, lean_object* v_p_2882_, lean_object* v_d_2883_){
_start:
{
if (lean_obj_tag(v_d_2883_) == 0)
{
uint8_t v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; 
lean_dec(v_p_2882_);
v___x_2884_ = 0;
v___x_2885_ = lean_box(v___x_2884_);
v___x_2886_ = lean_apply_2(v_toPure_2881_, lean_box(0), v___x_2885_);
return v___x_2886_;
}
else
{
lean_object* v_val_2887_; lean_object* v___x_2888_; 
lean_dec(v_toPure_2881_);
v_val_2887_ = lean_ctor_get(v_d_2883_, 0);
lean_inc(v_val_2887_);
lean_dec_ref_known(v_d_2883_, 1);
v___x_2888_ = lean_apply_1(v_p_2882_, v_val_2887_);
return v___x_2888_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg(lean_object* v_inst_2889_, lean_object* v_lctx_2890_, lean_object* v_p_2891_){
_start:
{
lean_object* v_toApplicative_2892_; lean_object* v_decls_2893_; lean_object* v_toPure_2894_; lean_object* v___f_2895_; lean_object* v___x_2896_; 
v_toApplicative_2892_ = lean_ctor_get(v_inst_2889_, 0);
v_decls_2893_ = lean_ctor_get(v_lctx_2890_, 1);
lean_inc_ref(v_decls_2893_);
lean_dec_ref(v_lctx_2890_);
v_toPure_2894_ = lean_ctor_get(v_toApplicative_2892_, 1);
lean_inc(v_toPure_2894_);
v___f_2895_ = lean_alloc_closure((void*)(l_Lean_LocalContext_anyM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2895_, 0, v_toPure_2894_);
lean_closure_set(v___f_2895_, 1, v_p_2891_);
v___x_2896_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2889_, v_decls_2893_, v___f_2895_);
return v___x_2896_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM(lean_object* v_m_2897_, lean_object* v_inst_2898_, lean_object* v_lctx_2899_, lean_object* v_p_2900_){
_start:
{
lean_object* v_toApplicative_2901_; lean_object* v_decls_2902_; lean_object* v_toPure_2903_; lean_object* v___f_2904_; lean_object* v___x_2905_; 
v_toApplicative_2901_ = lean_ctor_get(v_inst_2898_, 0);
v_decls_2902_ = lean_ctor_get(v_lctx_2899_, 1);
lean_inc_ref(v_decls_2902_);
lean_dec_ref(v_lctx_2899_);
v_toPure_2903_ = lean_ctor_get(v_toApplicative_2901_, 1);
lean_inc(v_toPure_2903_);
v___f_2904_ = lean_alloc_closure((void*)(l_Lean_LocalContext_anyM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2904_, 0, v_toPure_2903_);
lean_closure_set(v___f_2904_, 1, v_p_2900_);
v___x_2905_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2898_, v_decls_2902_, v___f_2904_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0(lean_object* v_toPure_2906_, uint8_t v_b_2907_){
_start:
{
if (v_b_2907_ == 0)
{
uint8_t v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2908_ = 1;
v___x_2909_ = lean_box(v___x_2908_);
v___x_2910_ = lean_apply_2(v_toPure_2906_, lean_box(0), v___x_2909_);
return v___x_2910_;
}
else
{
uint8_t v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2911_ = 0;
v___x_2912_ = lean_box(v___x_2911_);
v___x_2913_ = lean_apply_2(v_toPure_2906_, lean_box(0), v___x_2912_);
return v___x_2913_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0___boxed(lean_object* v_toPure_2914_, lean_object* v_b_2915_){
_start:
{
uint8_t v_b_boxed_2916_; lean_object* v_res_2917_; 
v_b_boxed_2916_ = lean_unbox(v_b_2915_);
v_res_2917_ = l_Lean_LocalContext_allM___redArg___lam__0(v_toPure_2914_, v_b_boxed_2916_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__2(lean_object* v_toPure_2918_, lean_object* v_toBind_2919_, lean_object* v___f_2920_, lean_object* v_p_2921_, lean_object* v_v_2922_){
_start:
{
if (lean_obj_tag(v_v_2922_) == 0)
{
uint8_t v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; 
lean_dec(v_p_2921_);
v___x_2923_ = 1;
v___x_2924_ = lean_box(v___x_2923_);
v___x_2925_ = lean_apply_2(v_toPure_2918_, lean_box(0), v___x_2924_);
v___x_2926_ = lean_apply_4(v_toBind_2919_, lean_box(0), lean_box(0), v___x_2925_, v___f_2920_);
return v___x_2926_;
}
else
{
lean_object* v_val_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; 
lean_dec(v_toPure_2918_);
v_val_2927_ = lean_ctor_get(v_v_2922_, 0);
lean_inc(v_val_2927_);
lean_dec_ref_known(v_v_2922_, 1);
v___x_2928_ = lean_apply_1(v_p_2921_, v_val_2927_);
v___x_2929_ = lean_apply_4(v_toBind_2919_, lean_box(0), lean_box(0), v___x_2928_, v___f_2920_);
return v___x_2929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg(lean_object* v_inst_2930_, lean_object* v_lctx_2931_, lean_object* v_p_2932_){
_start:
{
lean_object* v_toApplicative_2933_; lean_object* v_decls_2934_; lean_object* v_toBind_2935_; lean_object* v_toPure_2936_; lean_object* v___f_2937_; lean_object* v___f_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; 
v_toApplicative_2933_ = lean_ctor_get(v_inst_2930_, 0);
v_decls_2934_ = lean_ctor_get(v_lctx_2931_, 1);
lean_inc_ref(v_decls_2934_);
lean_dec_ref(v_lctx_2931_);
v_toBind_2935_ = lean_ctor_get(v_inst_2930_, 1);
lean_inc_n(v_toBind_2935_, 2);
v_toPure_2936_ = lean_ctor_get(v_toApplicative_2933_, 1);
lean_inc_n(v_toPure_2936_, 2);
v___f_2937_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2937_, 0, v_toPure_2936_);
lean_inc_ref(v___f_2937_);
v___f_2938_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2938_, 0, v_toPure_2936_);
lean_closure_set(v___f_2938_, 1, v_toBind_2935_);
lean_closure_set(v___f_2938_, 2, v___f_2937_);
lean_closure_set(v___f_2938_, 3, v_p_2932_);
v___x_2939_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2930_, v_decls_2934_, v___f_2938_);
v___x_2940_ = lean_apply_4(v_toBind_2935_, lean_box(0), lean_box(0), v___x_2939_, v___f_2937_);
return v___x_2940_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM(lean_object* v_m_2941_, lean_object* v_inst_2942_, lean_object* v_lctx_2943_, lean_object* v_p_2944_){
_start:
{
lean_object* v_toApplicative_2945_; lean_object* v_decls_2946_; lean_object* v_toBind_2947_; lean_object* v_toPure_2948_; lean_object* v___f_2949_; lean_object* v___f_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v_toApplicative_2945_ = lean_ctor_get(v_inst_2942_, 0);
v_decls_2946_ = lean_ctor_get(v_lctx_2943_, 1);
lean_inc_ref(v_decls_2946_);
lean_dec_ref(v_lctx_2943_);
v_toBind_2947_ = lean_ctor_get(v_inst_2942_, 1);
lean_inc_n(v_toBind_2947_, 2);
v_toPure_2948_ = lean_ctor_get(v_toApplicative_2945_, 1);
lean_inc_n(v_toPure_2948_, 2);
v___f_2949_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2949_, 0, v_toPure_2948_);
lean_inc_ref(v___f_2949_);
v___f_2950_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2950_, 0, v_toPure_2948_);
lean_closure_set(v___f_2950_, 1, v_toBind_2947_);
lean_closure_set(v___f_2950_, 2, v___f_2949_);
lean_closure_set(v___f_2950_, 3, v_p_2944_);
v___x_2951_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2942_, v_decls_2946_, v___f_2950_);
v___x_2952_ = lean_apply_4(v_toBind_2947_, lean_box(0), lean_box(0), v___x_2951_, v___f_2949_);
return v___x_2952_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_any___lam__0(lean_object* v_p_2953_, lean_object* v_d_2954_){
_start:
{
if (lean_obj_tag(v_d_2954_) == 0)
{
uint8_t v___x_2955_; 
lean_dec_ref(v_p_2953_);
v___x_2955_ = 0;
return v___x_2955_;
}
else
{
lean_object* v_val_2956_; lean_object* v___x_2957_; uint8_t v___x_2958_; 
v_val_2956_ = lean_ctor_get(v_d_2954_, 0);
lean_inc(v_val_2956_);
lean_dec_ref_known(v_d_2954_, 1);
v___x_2957_ = lean_apply_1(v_p_2953_, v_val_2956_);
v___x_2958_ = lean_unbox(v___x_2957_);
return v___x_2958_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___lam__0___boxed(lean_object* v_p_2959_, lean_object* v_d_2960_){
_start:
{
uint8_t v_res_2961_; lean_object* v_r_2962_; 
v_res_2961_ = l_Lean_LocalContext_any___lam__0(v_p_2959_, v_d_2960_);
v_r_2962_ = lean_box(v_res_2961_);
return v_r_2962_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_any(lean_object* v_lctx_2963_, lean_object* v_p_2964_){
_start:
{
lean_object* v___x_2965_; lean_object* v_decls_2966_; lean_object* v___f_2967_; lean_object* v___x_2968_; uint8_t v___x_2969_; 
v___x_2965_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v_decls_2966_ = lean_ctor_get(v_lctx_2963_, 1);
lean_inc_ref(v_decls_2966_);
lean_dec_ref(v_lctx_2963_);
v___f_2967_ = lean_alloc_closure((void*)(l_Lean_LocalContext_any___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2967_, 0, v_p_2964_);
v___x_2968_ = l_Lean_PersistentArray_anyM___redArg(v___x_2965_, v_decls_2966_, v___f_2967_);
v___x_2969_ = lean_unbox(v___x_2968_);
lean_dec(v___x_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___boxed(lean_object* v_lctx_2970_, lean_object* v_p_2971_){
_start:
{
uint8_t v_res_2972_; lean_object* v_r_2973_; 
v_res_2972_ = l_Lean_LocalContext_any(v_lctx_2970_, v_p_2971_);
v_r_2973_ = lean_box(v_res_2972_);
return v_r_2973_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_all___lam__0(lean_object* v_p_2974_, lean_object* v_v_2975_){
_start:
{
if (lean_obj_tag(v_v_2975_) == 0)
{
uint8_t v___x_2976_; 
lean_dec_ref(v_p_2974_);
v___x_2976_ = 0;
return v___x_2976_;
}
else
{
lean_object* v_val_2977_; lean_object* v___x_2978_; uint8_t v___x_2979_; 
v_val_2977_ = lean_ctor_get(v_v_2975_, 0);
lean_inc(v_val_2977_);
lean_dec_ref_known(v_v_2975_, 1);
v___x_2978_ = lean_apply_1(v_p_2974_, v_val_2977_);
v___x_2979_ = lean_unbox(v___x_2978_);
if (v___x_2979_ == 0)
{
uint8_t v___x_2980_; 
v___x_2980_ = 1;
return v___x_2980_;
}
else
{
uint8_t v___x_2981_; 
v___x_2981_ = 0;
return v___x_2981_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___lam__0___boxed(lean_object* v_p_2982_, lean_object* v_v_2983_){
_start:
{
uint8_t v_res_2984_; lean_object* v_r_2985_; 
v_res_2984_ = l_Lean_LocalContext_all___lam__0(v_p_2982_, v_v_2983_);
v_r_2985_ = lean_box(v_res_2984_);
return v_r_2985_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_all(lean_object* v_lctx_2986_, lean_object* v_p_2987_){
_start:
{
lean_object* v___x_2988_; lean_object* v_decls_2989_; lean_object* v___f_2990_; lean_object* v___x_2991_; uint8_t v___x_2992_; 
v___x_2988_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v_decls_2989_ = lean_ctor_get(v_lctx_2986_, 1);
lean_inc_ref(v_decls_2989_);
lean_dec_ref(v_lctx_2986_);
v___f_2990_ = lean_alloc_closure((void*)(l_Lean_LocalContext_all___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2990_, 0, v_p_2987_);
v___x_2991_ = l_Lean_PersistentArray_anyM___redArg(v___x_2988_, v_decls_2989_, v___f_2990_);
v___x_2992_ = lean_unbox(v___x_2991_);
lean_dec(v___x_2991_);
if (v___x_2992_ == 0)
{
uint8_t v___x_2993_; 
v___x_2993_ = 1;
return v___x_2993_;
}
else
{
uint8_t v___x_2994_; 
v___x_2994_ = 0;
return v___x_2994_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___boxed(lean_object* v_lctx_2995_, lean_object* v_p_2996_){
_start:
{
uint8_t v_res_2997_; lean_object* v_r_2998_; 
v_res_2997_ = l_Lean_LocalContext_all(v_lctx_2995_, v_p_2996_);
v_r_2998_ = lean_box(v_res_2997_);
return v_r_2998_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(lean_object* v_i_2999_, lean_object* v_a_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
lean_object* v_zero_3003_; uint8_t v_isZero_3004_; 
v_zero_3003_ = lean_unsigned_to_nat(0u);
v_isZero_3004_ = lean_nat_dec_eq(v_i_2999_, v_zero_3003_);
if (v_isZero_3004_ == 1)
{
lean_object* v___x_3005_; lean_object* v___x_3006_; 
lean_dec(v_i_2999_);
v___x_3005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3005_, 0, v_a_3000_);
lean_ctor_set(v___x_3005_, 1, v___y_3001_);
v___x_3006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3005_);
lean_ctor_set(v___x_3006_, 1, v___y_3002_);
return v___x_3006_;
}
else
{
lean_object* v_decls_3007_; lean_object* v_size_3008_; lean_object* v___x_3009_; lean_object* v_one_3010_; lean_object* v_n_3011_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3028_; lean_object* v___y_3029_; uint8_t v___y_3030_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3040_; uint8_t v___x_3044_; 
v_decls_3007_ = lean_ctor_get(v_a_3000_, 1);
v_size_3008_ = lean_ctor_get(v_decls_3007_, 2);
v___x_3009_ = lean_box(0);
v_one_3010_ = lean_unsigned_to_nat(1u);
v_n_3011_ = lean_nat_sub(v_i_2999_, v_one_3010_);
lean_dec(v_i_2999_);
v___x_3044_ = lean_nat_dec_lt(v_n_3011_, v_size_3008_);
if (v___x_3044_ == 0)
{
lean_object* v___x_3045_; 
v___x_3045_ = l_outOfBounds___redArg(v___x_3009_);
v___y_3040_ = v___x_3045_;
goto v___jp_3039_;
}
else
{
lean_object* v___x_3046_; 
v___x_3046_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3009_, v_decls_3007_, v_n_3011_);
v___y_3040_ = v___x_3046_;
goto v___jp_3039_;
}
v___jp_3012_:
{
lean_object* v___x_3017_; 
v___x_3017_ = l_Lean_LocalContext_setUserName(v_a_3000_, v___y_3016_, v___y_3014_);
v_i_2999_ = v_n_3011_;
v_a_3000_ = v___x_3017_;
v___y_3001_ = v___y_3015_;
v___y_3002_ = v___y_3013_;
goto _start;
}
v___jp_3019_:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v_fst_3024_; lean_object* v_snd_3025_; lean_object* v_fvarId_3026_; 
lean_inc(v___y_3021_);
v___x_3022_ = l_Lean_NameSet_insert(v___y_3001_, v___y_3021_);
v___x_3023_ = l_Lean_sanitizeName(v___y_3021_, v___y_3002_);
v_fst_3024_ = lean_ctor_get(v___x_3023_, 0);
lean_inc(v_fst_3024_);
v_snd_3025_ = lean_ctor_get(v___x_3023_, 1);
lean_inc(v_snd_3025_);
lean_dec_ref(v___x_3023_);
v_fvarId_3026_ = lean_ctor_get(v___y_3020_, 1);
lean_inc(v_fvarId_3026_);
lean_dec_ref(v___y_3020_);
v___y_3013_ = v_snd_3025_;
v___y_3014_ = v_fst_3024_;
v___y_3015_ = v___x_3022_;
v___y_3016_ = v_fvarId_3026_;
goto v___jp_3012_;
}
v___jp_3027_:
{
if (v___y_3030_ == 0)
{
lean_object* v___x_3031_; 
lean_dec_ref(v___y_3028_);
v___x_3031_ = l_Lean_NameSet_insert(v___y_3001_, v___y_3029_);
v_i_2999_ = v_n_3011_;
v___y_3001_ = v___x_3031_;
goto _start;
}
else
{
v___y_3020_ = v___y_3028_;
v___y_3021_ = v___y_3029_;
goto v___jp_3019_;
}
}
v___jp_3033_:
{
uint8_t v___x_3036_; 
v___x_3036_ = l_Lean_Name_hasMacroScopes(v___y_3035_);
if (v___x_3036_ == 0)
{
lean_object* v_userName_3037_; uint8_t v___x_3038_; 
v_userName_3037_ = lean_ctor_get(v___y_3034_, 2);
v___x_3038_ = l_Lean_NameSet_contains(v___y_3001_, v_userName_3037_);
v___y_3028_ = v___y_3034_;
v___y_3029_ = v___y_3035_;
v___y_3030_ = v___x_3038_;
goto v___jp_3027_;
}
else
{
v___y_3020_ = v___y_3034_;
v___y_3021_ = v___y_3035_;
goto v___jp_3019_;
}
}
v___jp_3039_:
{
if (lean_obj_tag(v___y_3040_) == 0)
{
v_i_2999_ = v_n_3011_;
goto _start;
}
else
{
lean_object* v_val_3042_; lean_object* v_userName_3043_; 
v_val_3042_ = lean_ctor_get(v___y_3040_, 0);
lean_inc(v_val_3042_);
lean_dec_ref_known(v___y_3040_, 1);
v_userName_3043_ = lean_ctor_get(v_val_3042_, 2);
lean_inc(v_userName_3043_);
v___y_3034_ = v_val_3042_;
v___y_3035_ = v_userName_3043_;
goto v___jp_3033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_sanitizeNames(lean_object* v_lctx_3047_, lean_object* v___y_3048_){
_start:
{
lean_object* v_options_3049_; uint8_t v___x_3050_; 
v_options_3049_ = lean_ctor_get(v___y_3048_, 0);
v___x_3050_ = l_Lean_getSanitizeNames(v_options_3049_);
if (v___x_3050_ == 0)
{
lean_object* v___x_3051_; 
v___x_3051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3051_, 0, v_lctx_3047_);
lean_ctor_set(v___x_3051_, 1, v___y_3048_);
return v___x_3051_;
}
else
{
lean_object* v_decls_3052_; lean_object* v_size_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v_fst_3056_; lean_object* v_snd_3057_; lean_object* v_fst_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
v_decls_3052_ = lean_ctor_get(v_lctx_3047_, 1);
v_size_3053_ = lean_ctor_get(v_decls_3052_, 2);
lean_inc(v_size_3053_);
v___x_3054_ = l_Lean_NameSet_empty;
v___x_3055_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(v_size_3053_, v_lctx_3047_, v___x_3054_, v___y_3048_);
v_fst_3056_ = lean_ctor_get(v___x_3055_, 0);
lean_inc(v_fst_3056_);
v_snd_3057_ = lean_ctor_get(v___x_3055_, 1);
lean_inc(v_snd_3057_);
lean_dec_ref(v___x_3055_);
v_fst_3058_ = lean_ctor_get(v_fst_3056_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v_fst_3056_);
if (v_isSharedCheck_3065_ == 0)
{
lean_object* v_unused_3066_; 
v_unused_3066_ = lean_ctor_get(v_fst_3056_, 1);
lean_dec(v_unused_3066_);
v___x_3060_ = v_fst_3056_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_fst_3058_);
lean_dec(v_fst_3056_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 1, v_snd_3057_);
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_fst_3058_);
lean_ctor_set(v_reuseFailAlloc_3064_, 1, v_snd_3057_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0(lean_object* v_n_3067_, lean_object* v_i_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_){
_start:
{
lean_object* v___x_3073_; 
v___x_3073_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(v_i_3068_, v_a_3070_, v___y_3071_, v___y_3072_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___boxed(lean_object* v_n_3074_, lean_object* v_i_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0(v_n_3074_, v_i_3075_, v_a_3076_, v_a_3077_, v___y_3078_, v___y_3079_);
lean_dec(v_n_3074_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getRoundtrippingUserName_x3f(lean_object* v_lctx_3081_, lean_object* v_fvarId_3082_){
_start:
{
lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3091_; lean_object* v___y_3092_; lean_object* v___y_3093_; lean_object* v___x_3095_; 
lean_inc_ref(v_lctx_3081_);
v___x_3095_ = lean_local_ctx_find(v_lctx_3081_, v_fvarId_3082_);
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v___x_3096_; 
lean_dec_ref(v_lctx_3081_);
v___x_3096_ = lean_box(0);
return v___x_3096_;
}
else
{
lean_object* v_val_3097_; lean_object* v___y_3099_; lean_object* v_userName_3104_; 
v_val_3097_ = lean_ctor_get(v___x_3095_, 0);
lean_inc(v_val_3097_);
lean_dec_ref_known(v___x_3095_, 1);
v_userName_3104_ = lean_ctor_get(v_val_3097_, 2);
lean_inc(v_userName_3104_);
v___y_3099_ = v_userName_3104_;
goto v___jp_3098_;
v___jp_3098_:
{
lean_object* v___x_3100_; 
v___x_3100_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_3081_, v___y_3099_);
lean_dec_ref(v_lctx_3081_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v___x_3101_; 
lean_dec(v___y_3099_);
lean_dec(v_val_3097_);
v___x_3101_ = lean_box(0);
return v___x_3101_;
}
else
{
lean_object* v_val_3102_; lean_object* v_fvarId_3103_; 
v_val_3102_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_val_3102_);
lean_dec_ref_known(v___x_3100_, 1);
v_fvarId_3103_ = lean_ctor_get(v_val_3097_, 1);
lean_inc(v_fvarId_3103_);
lean_dec(v_val_3097_);
v___y_3091_ = v_val_3102_;
v___y_3092_ = v___y_3099_;
v___y_3093_ = v_fvarId_3103_;
goto v___jp_3090_;
}
}
}
v___jp_3083_:
{
uint8_t v___x_3087_; 
v___x_3087_ = l_Lean_instBEqFVarId_beq(v___y_3084_, v___y_3086_);
lean_dec(v___y_3086_);
lean_dec(v___y_3084_);
if (v___x_3087_ == 0)
{
lean_object* v___x_3088_; 
lean_dec(v___y_3085_);
v___x_3088_ = lean_box(0);
return v___x_3088_;
}
else
{
lean_object* v___x_3089_; 
v___x_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3089_, 0, v___y_3085_);
return v___x_3089_;
}
}
v___jp_3090_:
{
lean_object* v_fvarId_3094_; 
v_fvarId_3094_ = lean_ctor_get(v___y_3091_, 1);
lean_inc(v_fvarId_3094_);
lean_dec_ref(v___y_3091_);
v___y_3084_ = v___y_3093_;
v___y_3085_ = v___y_3092_;
v___y_3086_ = v_fvarId_3094_;
goto v___jp_3083_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(size_t v_sz_3105_, size_t v_i_3106_, lean_object* v_bs_3107_){
_start:
{
uint8_t v___x_3108_; 
v___x_3108_ = lean_usize_dec_lt(v_i_3106_, v_sz_3105_);
if (v___x_3108_ == 0)
{
return v_bs_3107_;
}
else
{
lean_object* v_v_3109_; lean_object* v_snd_3110_; lean_object* v___x_3111_; lean_object* v_bs_x27_3112_; size_t v___x_3113_; size_t v___x_3114_; lean_object* v___x_3115_; 
v_v_3109_ = lean_array_uget_borrowed(v_bs_3107_, v_i_3106_);
v_snd_3110_ = lean_ctor_get(v_v_3109_, 1);
lean_inc(v_snd_3110_);
v___x_3111_ = lean_unsigned_to_nat(0u);
v_bs_x27_3112_ = lean_array_uset(v_bs_3107_, v_i_3106_, v___x_3111_);
v___x_3113_ = ((size_t)1ULL);
v___x_3114_ = lean_usize_add(v_i_3106_, v___x_3113_);
v___x_3115_ = lean_array_uset(v_bs_x27_3112_, v_i_3106_, v_snd_3110_);
v_i_3106_ = v___x_3114_;
v_bs_3107_ = v___x_3115_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0___boxed(lean_object* v_sz_3117_, lean_object* v_i_3118_, lean_object* v_bs_3119_){
_start:
{
size_t v_sz_boxed_3120_; size_t v_i_boxed_3121_; lean_object* v_res_3122_; 
v_sz_boxed_3120_ = lean_unbox_usize(v_sz_3117_);
lean_dec(v_sz_3117_);
v_i_boxed_3121_ = lean_unbox_usize(v_i_3118_);
lean_dec(v_i_3118_);
v_res_3122_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(v_sz_boxed_3120_, v_i_boxed_3121_, v_bs_3119_);
return v_res_3122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(lean_object* v_lctx_3123_, size_t v_sz_3124_, size_t v_i_3125_, lean_object* v_bs_3126_){
_start:
{
uint8_t v___x_3127_; 
v___x_3127_ = lean_usize_dec_lt(v_i_3125_, v_sz_3124_);
if (v___x_3127_ == 0)
{
return v_bs_3126_;
}
else
{
lean_object* v_fvarIdToDecl_3128_; lean_object* v_v_3129_; lean_object* v___x_3130_; lean_object* v_bs_x27_3131_; lean_object* v___y_3133_; lean_object* v___x_3138_; 
v_fvarIdToDecl_3128_ = lean_ctor_get(v_lctx_3123_, 0);
v_v_3129_ = lean_array_uget(v_bs_3126_, v_i_3125_);
v___x_3130_ = lean_unsigned_to_nat(0u);
v_bs_x27_3131_ = lean_array_uset(v_bs_3126_, v_i_3125_, v___x_3130_);
v___x_3138_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_fvarIdToDecl_3128_, v_v_3129_);
if (lean_obj_tag(v___x_3138_) == 0)
{
lean_object* v___x_3139_; 
v___x_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3130_);
lean_ctor_set(v___x_3139_, 1, v_v_3129_);
v___y_3133_ = v___x_3139_;
goto v___jp_3132_;
}
else
{
lean_object* v_val_3140_; lean_object* v_index_3141_; lean_object* v___x_3142_; 
v_val_3140_ = lean_ctor_get(v___x_3138_, 0);
lean_inc(v_val_3140_);
lean_dec_ref_known(v___x_3138_, 1);
v_index_3141_ = lean_ctor_get(v_val_3140_, 0);
lean_inc(v_index_3141_);
lean_dec(v_val_3140_);
v___x_3142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3142_, 0, v_index_3141_);
lean_ctor_set(v___x_3142_, 1, v_v_3129_);
v___y_3133_ = v___x_3142_;
goto v___jp_3132_;
}
v___jp_3132_:
{
size_t v___x_3134_; size_t v___x_3135_; lean_object* v___x_3136_; 
v___x_3134_ = ((size_t)1ULL);
v___x_3135_ = lean_usize_add(v_i_3125_, v___x_3134_);
v___x_3136_ = lean_array_uset(v_bs_x27_3131_, v_i_3125_, v___y_3133_);
v_i_3125_ = v___x_3135_;
v_bs_3126_ = v___x_3136_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1___boxed(lean_object* v_lctx_3143_, lean_object* v_sz_3144_, lean_object* v_i_3145_, lean_object* v_bs_3146_){
_start:
{
size_t v_sz_boxed_3147_; size_t v_i_boxed_3148_; lean_object* v_res_3149_; 
v_sz_boxed_3147_ = lean_unbox_usize(v_sz_3144_);
lean_dec(v_sz_3144_);
v_i_boxed_3148_ = lean_unbox_usize(v_i_3145_);
lean_dec(v_i_3145_);
v_res_3149_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(v_lctx_3143_, v_sz_boxed_3147_, v_i_boxed_3148_, v_bs_3146_);
lean_dec_ref(v_lctx_3143_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(lean_object* v_hi_3150_, lean_object* v_pivot_3151_, lean_object* v_as_3152_, lean_object* v_i_3153_, lean_object* v_k_3154_){
_start:
{
uint8_t v___x_3155_; 
v___x_3155_ = lean_nat_dec_lt(v_k_3154_, v_hi_3150_);
if (v___x_3155_ == 0)
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
lean_dec(v_k_3154_);
v___x_3156_ = lean_array_fswap(v_as_3152_, v_i_3153_, v_hi_3150_);
v___x_3157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3157_, 0, v_i_3153_);
lean_ctor_set(v___x_3157_, 1, v___x_3156_);
return v___x_3157_;
}
else
{
lean_object* v___x_3158_; lean_object* v_fst_3159_; lean_object* v_fst_3160_; uint8_t v___x_3161_; 
v___x_3158_ = lean_array_fget_borrowed(v_as_3152_, v_k_3154_);
v_fst_3159_ = lean_ctor_get(v___x_3158_, 0);
v_fst_3160_ = lean_ctor_get(v_pivot_3151_, 0);
v___x_3161_ = lean_nat_dec_lt(v_fst_3159_, v_fst_3160_);
if (v___x_3161_ == 0)
{
lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3162_ = lean_unsigned_to_nat(1u);
v___x_3163_ = lean_nat_add(v_k_3154_, v___x_3162_);
lean_dec(v_k_3154_);
v_k_3154_ = v___x_3163_;
goto _start;
}
else
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3165_ = lean_array_fswap(v_as_3152_, v_i_3153_, v_k_3154_);
v___x_3166_ = lean_unsigned_to_nat(1u);
v___x_3167_ = lean_nat_add(v_i_3153_, v___x_3166_);
lean_dec(v_i_3153_);
v___x_3168_ = lean_nat_add(v_k_3154_, v___x_3166_);
lean_dec(v_k_3154_);
v_as_3152_ = v___x_3165_;
v_i_3153_ = v___x_3167_;
v_k_3154_ = v___x_3168_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg___boxed(lean_object* v_hi_3170_, lean_object* v_pivot_3171_, lean_object* v_as_3172_, lean_object* v_i_3173_, lean_object* v_k_3174_){
_start:
{
lean_object* v_res_3175_; 
v_res_3175_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(v_hi_3170_, v_pivot_3171_, v_as_3172_, v_i_3173_, v_k_3174_);
lean_dec_ref(v_pivot_3171_);
lean_dec(v_hi_3170_);
return v_res_3175_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(lean_object* v_h_3176_, lean_object* v_i_3177_){
_start:
{
lean_object* v_fst_3178_; lean_object* v_fst_3179_; uint8_t v___x_3180_; 
v_fst_3178_ = lean_ctor_get(v_h_3176_, 0);
v_fst_3179_ = lean_ctor_get(v_i_3177_, 0);
v___x_3180_ = lean_nat_dec_lt(v_fst_3178_, v_fst_3179_);
return v___x_3180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0___boxed(lean_object* v_h_3181_, lean_object* v_i_3182_){
_start:
{
uint8_t v_res_3183_; lean_object* v_r_3184_; 
v_res_3183_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v_h_3181_, v_i_3182_);
lean_dec_ref(v_i_3182_);
lean_dec_ref(v_h_3181_);
v_r_3184_ = lean_box(v_res_3183_);
return v_r_3184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(lean_object* v_n_3185_, lean_object* v_as_3186_, lean_object* v_lo_3187_, lean_object* v_hi_3188_){
_start:
{
lean_object* v___y_3190_; uint8_t v___x_3200_; 
v___x_3200_ = lean_nat_dec_lt(v_lo_3187_, v_hi_3188_);
if (v___x_3200_ == 0)
{
lean_dec(v_lo_3187_);
return v_as_3186_;
}
else
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v_mid_3203_; lean_object* v___y_3205_; lean_object* v___y_3211_; lean_object* v___x_3216_; lean_object* v___x_3217_; uint8_t v___x_3218_; 
v___x_3201_ = lean_nat_add(v_lo_3187_, v_hi_3188_);
v___x_3202_ = lean_unsigned_to_nat(1u);
v_mid_3203_ = lean_nat_shiftr(v___x_3201_, v___x_3202_);
lean_dec(v___x_3201_);
v___x_3216_ = lean_array_fget_borrowed(v_as_3186_, v_mid_3203_);
v___x_3217_ = lean_array_fget_borrowed(v_as_3186_, v_lo_3187_);
v___x_3218_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v___x_3216_, v___x_3217_);
if (v___x_3218_ == 0)
{
v___y_3211_ = v_as_3186_;
goto v___jp_3210_;
}
else
{
lean_object* v___x_3219_; 
v___x_3219_ = lean_array_fswap(v_as_3186_, v_lo_3187_, v_mid_3203_);
v___y_3211_ = v___x_3219_;
goto v___jp_3210_;
}
v___jp_3204_:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; uint8_t v___x_3208_; 
v___x_3206_ = lean_array_fget_borrowed(v___y_3205_, v_mid_3203_);
v___x_3207_ = lean_array_fget_borrowed(v___y_3205_, v_hi_3188_);
v___x_3208_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v___x_3206_, v___x_3207_);
if (v___x_3208_ == 0)
{
lean_dec(v_mid_3203_);
v___y_3190_ = v___y_3205_;
goto v___jp_3189_;
}
else
{
lean_object* v___x_3209_; 
v___x_3209_ = lean_array_fswap(v___y_3205_, v_mid_3203_, v_hi_3188_);
lean_dec(v_mid_3203_);
v___y_3190_ = v___x_3209_;
goto v___jp_3189_;
}
}
v___jp_3210_:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; uint8_t v___x_3214_; 
v___x_3212_ = lean_array_fget_borrowed(v___y_3211_, v_hi_3188_);
v___x_3213_ = lean_array_fget_borrowed(v___y_3211_, v_lo_3187_);
v___x_3214_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v___x_3212_, v___x_3213_);
if (v___x_3214_ == 0)
{
v___y_3205_ = v___y_3211_;
goto v___jp_3204_;
}
else
{
lean_object* v___x_3215_; 
v___x_3215_ = lean_array_fswap(v___y_3211_, v_lo_3187_, v_hi_3188_);
v___y_3205_ = v___x_3215_;
goto v___jp_3204_;
}
}
}
v___jp_3189_:
{
lean_object* v_pivot_3191_; lean_object* v___x_3192_; lean_object* v_fst_3193_; lean_object* v_snd_3194_; uint8_t v___x_3195_; 
v_pivot_3191_ = lean_array_fget(v___y_3190_, v_hi_3188_);
lean_inc_n(v_lo_3187_, 2);
v___x_3192_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(v_hi_3188_, v_pivot_3191_, v___y_3190_, v_lo_3187_, v_lo_3187_);
lean_dec(v_pivot_3191_);
v_fst_3193_ = lean_ctor_get(v___x_3192_, 0);
lean_inc(v_fst_3193_);
v_snd_3194_ = lean_ctor_get(v___x_3192_, 1);
lean_inc(v_snd_3194_);
lean_dec_ref(v___x_3192_);
v___x_3195_ = lean_nat_dec_le(v_hi_3188_, v_fst_3193_);
if (v___x_3195_ == 0)
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3196_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v_n_3185_, v_snd_3194_, v_lo_3187_, v_fst_3193_);
v___x_3197_ = lean_unsigned_to_nat(1u);
v___x_3198_ = lean_nat_add(v_fst_3193_, v___x_3197_);
lean_dec(v_fst_3193_);
v_as_3186_ = v___x_3196_;
v_lo_3187_ = v___x_3198_;
goto _start;
}
else
{
lean_dec(v_fst_3193_);
lean_dec(v_lo_3187_);
return v_snd_3194_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___boxed(lean_object* v_n_3220_, lean_object* v_as_3221_, lean_object* v_lo_3222_, lean_object* v_hi_3223_){
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v_n_3220_, v_as_3221_, v_lo_3222_, v_hi_3223_);
lean_dec(v_hi_3223_);
lean_dec(v_n_3220_);
return v_res_3224_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder(lean_object* v_lctx_3225_, lean_object* v_hyps_3226_){
_start:
{
lean_object* v___y_3228_; size_t v_sz_3232_; size_t v___x_3233_; lean_object* v_hyps_3234_; lean_object* v___x_3235_; lean_object* v___y_3237_; lean_object* v___y_3238_; lean_object* v___x_3240_; uint8_t v___x_3241_; 
v_sz_3232_ = lean_array_size(v_hyps_3226_);
v___x_3233_ = ((size_t)0ULL);
v_hyps_3234_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(v_lctx_3225_, v_sz_3232_, v___x_3233_, v_hyps_3226_);
v___x_3235_ = lean_array_get_size(v_hyps_3234_);
v___x_3240_ = lean_unsigned_to_nat(0u);
v___x_3241_ = lean_nat_dec_eq(v___x_3235_, v___x_3240_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___y_3245_; uint8_t v___x_3247_; 
v___x_3242_ = lean_unsigned_to_nat(1u);
v___x_3243_ = lean_nat_sub(v___x_3235_, v___x_3242_);
v___x_3247_ = lean_nat_dec_le(v___x_3240_, v___x_3243_);
if (v___x_3247_ == 0)
{
lean_inc(v___x_3243_);
v___y_3245_ = v___x_3243_;
goto v___jp_3244_;
}
else
{
v___y_3245_ = v___x_3240_;
goto v___jp_3244_;
}
v___jp_3244_:
{
uint8_t v___x_3246_; 
v___x_3246_ = lean_nat_dec_le(v___y_3245_, v___x_3243_);
if (v___x_3246_ == 0)
{
lean_dec(v___x_3243_);
lean_inc(v___y_3245_);
v___y_3237_ = v___y_3245_;
v___y_3238_ = v___y_3245_;
goto v___jp_3236_;
}
else
{
v___y_3237_ = v___y_3245_;
v___y_3238_ = v___x_3243_;
goto v___jp_3236_;
}
}
}
else
{
v___y_3228_ = v_hyps_3234_;
goto v___jp_3227_;
}
v___jp_3227_:
{
size_t v_sz_3229_; size_t v___x_3230_; lean_object* v___x_3231_; 
v_sz_3229_ = lean_array_size(v___y_3228_);
v___x_3230_ = ((size_t)0ULL);
v___x_3231_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(v_sz_3229_, v___x_3230_, v___y_3228_);
return v___x_3231_;
}
v___jp_3236_:
{
lean_object* v___x_3239_; 
v___x_3239_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v___x_3235_, v_hyps_3234_, v___y_3237_, v___y_3238_);
lean_dec(v___y_3238_);
v___y_3228_ = v___x_3239_;
goto v___jp_3227_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder___boxed(lean_object* v_lctx_3248_, lean_object* v_hyps_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lean_LocalContext_sortFVarsByContextOrder(v_lctx_3248_, v_hyps_3249_);
lean_dec_ref(v_lctx_3248_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2(lean_object* v_n_3251_, lean_object* v_as_3252_, lean_object* v_lo_3253_, lean_object* v_hi_3254_, lean_object* v_w_3255_, lean_object* v_hlo_3256_, lean_object* v_hhi_3257_){
_start:
{
lean_object* v___x_3258_; 
v___x_3258_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v_n_3251_, v_as_3252_, v_lo_3253_, v_hi_3254_);
return v___x_3258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___boxed(lean_object* v_n_3259_, lean_object* v_as_3260_, lean_object* v_lo_3261_, lean_object* v_hi_3262_, lean_object* v_w_3263_, lean_object* v_hlo_3264_, lean_object* v_hhi_3265_){
_start:
{
lean_object* v_res_3266_; 
v_res_3266_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2(v_n_3259_, v_as_3260_, v_lo_3261_, v_hi_3262_, v_w_3263_, v_hlo_3264_, v_hhi_3265_);
lean_dec(v_hi_3262_);
lean_dec(v_n_3259_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2(lean_object* v_n_3267_, lean_object* v_lo_3268_, lean_object* v_hi_3269_, lean_object* v_hhi_3270_, lean_object* v_pivot_3271_, lean_object* v_as_3272_, lean_object* v_i_3273_, lean_object* v_k_3274_, lean_object* v_ilo_3275_, lean_object* v_ik_3276_, lean_object* v_w_3277_){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(v_hi_3269_, v_pivot_3271_, v_as_3272_, v_i_3273_, v_k_3274_);
return v___x_3278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___boxed(lean_object* v_n_3279_, lean_object* v_lo_3280_, lean_object* v_hi_3281_, lean_object* v_hhi_3282_, lean_object* v_pivot_3283_, lean_object* v_as_3284_, lean_object* v_i_3285_, lean_object* v_k_3286_, lean_object* v_ilo_3287_, lean_object* v_ik_3288_, lean_object* v_w_3289_){
_start:
{
lean_object* v_res_3290_; 
v_res_3290_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2(v_n_3279_, v_lo_3280_, v_hi_3281_, v_hhi_3282_, v_pivot_3283_, v_as_3284_, v_i_3285_, v_k_3286_, v_ilo_3287_, v_ik_3288_, v_w_3289_);
lean_dec_ref(v_pivot_3283_);
lean_dec(v_hi_3281_);
lean_dec(v_lo_3280_);
lean_dec(v_n_3279_);
return v_res_3290_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(lean_object* v_a_3291_, lean_object* v_x_3292_){
_start:
{
if (lean_obj_tag(v_x_3292_) == 0)
{
uint8_t v___x_3293_; 
v___x_3293_ = 0;
return v___x_3293_;
}
else
{
lean_object* v_key_3294_; lean_object* v_tail_3295_; uint8_t v___x_3296_; 
v_key_3294_ = lean_ctor_get(v_x_3292_, 0);
v_tail_3295_ = lean_ctor_get(v_x_3292_, 2);
v___x_3296_ = lean_name_eq(v_key_3294_, v_a_3291_);
if (v___x_3296_ == 0)
{
v_x_3292_ = v_tail_3295_;
goto _start;
}
else
{
return v___x_3296_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg___boxed(lean_object* v_a_3298_, lean_object* v_x_3299_){
_start:
{
uint8_t v_res_3300_; lean_object* v_r_3301_; 
v_res_3300_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_3298_, v_x_3299_);
lean_dec(v_x_3299_);
lean_dec(v_a_3298_);
v_r_3301_ = lean_box(v_res_3300_);
return v_r_3301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(lean_object* v_a_3302_, lean_object* v_x_3303_){
_start:
{
if (lean_obj_tag(v_x_3303_) == 0)
{
return v_x_3303_;
}
else
{
lean_object* v_key_3304_; lean_object* v_value_3305_; lean_object* v_tail_3306_; lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3315_; 
v_key_3304_ = lean_ctor_get(v_x_3303_, 0);
v_value_3305_ = lean_ctor_get(v_x_3303_, 1);
v_tail_3306_ = lean_ctor_get(v_x_3303_, 2);
v_isSharedCheck_3315_ = !lean_is_exclusive(v_x_3303_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3308_ = v_x_3303_;
v_isShared_3309_ = v_isSharedCheck_3315_;
goto v_resetjp_3307_;
}
else
{
lean_inc(v_tail_3306_);
lean_inc(v_value_3305_);
lean_inc(v_key_3304_);
lean_dec(v_x_3303_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3315_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
uint8_t v___x_3310_; 
v___x_3310_ = lean_name_eq(v_key_3304_, v_a_3302_);
if (v___x_3310_ == 0)
{
lean_object* v___x_3311_; lean_object* v___x_3313_; 
v___x_3311_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_3302_, v_tail_3306_);
if (v_isShared_3309_ == 0)
{
lean_ctor_set(v___x_3308_, 2, v___x_3311_);
v___x_3313_ = v___x_3308_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_key_3304_);
lean_ctor_set(v_reuseFailAlloc_3314_, 1, v_value_3305_);
lean_ctor_set(v_reuseFailAlloc_3314_, 2, v___x_3311_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
else
{
lean_del_object(v___x_3308_);
lean_dec(v_value_3305_);
lean_dec(v_key_3304_);
return v_tail_3306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg___boxed(lean_object* v_a_3316_, lean_object* v_x_3317_){
_start:
{
lean_object* v_res_3318_; 
v_res_3318_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_3316_, v_x_3317_);
lean_dec(v_a_3316_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(lean_object* v_m_3319_, lean_object* v_a_3320_){
_start:
{
lean_object* v_size_3321_; lean_object* v_buckets_3322_; lean_object* v___x_3323_; uint64_t v___y_3325_; 
v_size_3321_ = lean_ctor_get(v_m_3319_, 0);
v_buckets_3322_ = lean_ctor_get(v_m_3319_, 1);
v___x_3323_ = lean_array_get_size(v_buckets_3322_);
if (lean_obj_tag(v_a_3320_) == 0)
{
uint64_t v___x_3354_; 
v___x_3354_ = 1723ULL;
v___y_3325_ = v___x_3354_;
goto v___jp_3324_;
}
else
{
uint64_t v_hash_3355_; 
v_hash_3355_ = lean_ctor_get_uint64(v_a_3320_, sizeof(void*)*2);
v___y_3325_ = v_hash_3355_;
goto v___jp_3324_;
}
v___jp_3324_:
{
uint64_t v___x_3326_; uint64_t v___x_3327_; uint64_t v_fold_3328_; uint64_t v___x_3329_; uint64_t v___x_3330_; uint64_t v___x_3331_; size_t v___x_3332_; size_t v___x_3333_; size_t v___x_3334_; size_t v___x_3335_; size_t v___x_3336_; lean_object* v_bkt_3337_; uint8_t v___x_3338_; 
v___x_3326_ = 32ULL;
v___x_3327_ = lean_uint64_shift_right(v___y_3325_, v___x_3326_);
v_fold_3328_ = lean_uint64_xor(v___y_3325_, v___x_3327_);
v___x_3329_ = 16ULL;
v___x_3330_ = lean_uint64_shift_right(v_fold_3328_, v___x_3329_);
v___x_3331_ = lean_uint64_xor(v_fold_3328_, v___x_3330_);
v___x_3332_ = lean_uint64_to_usize(v___x_3331_);
v___x_3333_ = lean_usize_of_nat(v___x_3323_);
v___x_3334_ = ((size_t)1ULL);
v___x_3335_ = lean_usize_sub(v___x_3333_, v___x_3334_);
v___x_3336_ = lean_usize_land(v___x_3332_, v___x_3335_);
v_bkt_3337_ = lean_array_uget_borrowed(v_buckets_3322_, v___x_3336_);
v___x_3338_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_3320_, v_bkt_3337_);
if (v___x_3338_ == 0)
{
return v_m_3319_;
}
else
{
lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3351_; 
lean_inc(v_bkt_3337_);
lean_inc_ref(v_buckets_3322_);
lean_inc(v_size_3321_);
v_isSharedCheck_3351_ = !lean_is_exclusive(v_m_3319_);
if (v_isSharedCheck_3351_ == 0)
{
lean_object* v_unused_3352_; lean_object* v_unused_3353_; 
v_unused_3352_ = lean_ctor_get(v_m_3319_, 1);
lean_dec(v_unused_3352_);
v_unused_3353_ = lean_ctor_get(v_m_3319_, 0);
lean_dec(v_unused_3353_);
v___x_3340_ = v_m_3319_;
v_isShared_3341_ = v_isSharedCheck_3351_;
goto v_resetjp_3339_;
}
else
{
lean_dec(v_m_3319_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3351_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3342_; lean_object* v_buckets_x27_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3349_; 
v___x_3342_ = lean_box(0);
v_buckets_x27_3343_ = lean_array_uset(v_buckets_3322_, v___x_3336_, v___x_3342_);
v___x_3344_ = lean_unsigned_to_nat(1u);
v___x_3345_ = lean_nat_sub(v_size_3321_, v___x_3344_);
lean_dec(v_size_3321_);
v___x_3346_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_3320_, v_bkt_3337_);
v___x_3347_ = lean_array_uset(v_buckets_x27_3343_, v___x_3336_, v___x_3346_);
if (v_isShared_3341_ == 0)
{
lean_ctor_set(v___x_3340_, 1, v___x_3347_);
lean_ctor_set(v___x_3340_, 0, v___x_3345_);
v___x_3349_ = v___x_3340_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v___x_3345_);
lean_ctor_set(v_reuseFailAlloc_3350_, 1, v___x_3347_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg___boxed(lean_object* v_m_3356_, lean_object* v_a_3357_){
_start:
{
lean_object* v_res_3358_; 
v_res_3358_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_m_3356_, v_a_3357_);
lean_dec(v_a_3357_);
return v_res_3358_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(lean_object* v_m_3359_, lean_object* v_a_3360_){
_start:
{
lean_object* v_buckets_3361_; lean_object* v___x_3362_; uint64_t v___y_3364_; 
v_buckets_3361_ = lean_ctor_get(v_m_3359_, 1);
v___x_3362_ = lean_array_get_size(v_buckets_3361_);
if (lean_obj_tag(v_a_3360_) == 0)
{
uint64_t v___x_3378_; 
v___x_3378_ = 1723ULL;
v___y_3364_ = v___x_3378_;
goto v___jp_3363_;
}
else
{
uint64_t v_hash_3379_; 
v_hash_3379_ = lean_ctor_get_uint64(v_a_3360_, sizeof(void*)*2);
v___y_3364_ = v_hash_3379_;
goto v___jp_3363_;
}
v___jp_3363_:
{
uint64_t v___x_3365_; uint64_t v___x_3366_; uint64_t v_fold_3367_; uint64_t v___x_3368_; uint64_t v___x_3369_; uint64_t v___x_3370_; size_t v___x_3371_; size_t v___x_3372_; size_t v___x_3373_; size_t v___x_3374_; size_t v___x_3375_; lean_object* v___x_3376_; uint8_t v___x_3377_; 
v___x_3365_ = 32ULL;
v___x_3366_ = lean_uint64_shift_right(v___y_3364_, v___x_3365_);
v_fold_3367_ = lean_uint64_xor(v___y_3364_, v___x_3366_);
v___x_3368_ = 16ULL;
v___x_3369_ = lean_uint64_shift_right(v_fold_3367_, v___x_3368_);
v___x_3370_ = lean_uint64_xor(v_fold_3367_, v___x_3369_);
v___x_3371_ = lean_uint64_to_usize(v___x_3370_);
v___x_3372_ = lean_usize_of_nat(v___x_3362_);
v___x_3373_ = ((size_t)1ULL);
v___x_3374_ = lean_usize_sub(v___x_3372_, v___x_3373_);
v___x_3375_ = lean_usize_land(v___x_3371_, v___x_3374_);
v___x_3376_ = lean_array_uget_borrowed(v_buckets_3361_, v___x_3375_);
v___x_3377_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_3360_, v___x_3376_);
return v___x_3377_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg___boxed(lean_object* v_m_3380_, lean_object* v_a_3381_){
_start:
{
uint8_t v_res_3382_; lean_object* v_r_3383_; 
v_res_3382_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(v_m_3380_, v_a_3381_);
lean_dec(v_a_3381_);
lean_dec_ref(v_m_3380_);
v_r_3383_ = lean_box(v_res_3382_);
return v_r_3383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(lean_object* v_start_3384_, lean_object* v_as_3385_, size_t v_i_3386_, size_t v_stop_3387_, lean_object* v_b_3388_){
_start:
{
uint8_t v___x_3389_; 
v___x_3389_ = lean_usize_dec_eq(v_i_3386_, v_stop_3387_);
if (v___x_3389_ == 0)
{
size_t v___x_3390_; size_t v___x_3391_; lean_object* v___x_3392_; 
v___x_3390_ = ((size_t)1ULL);
v___x_3391_ = lean_usize_sub(v_i_3386_, v___x_3390_);
v___x_3392_ = lean_array_uget(v_as_3385_, v___x_3391_);
if (lean_obj_tag(v___x_3392_) == 0)
{
v_i_3386_ = v___x_3391_;
goto _start;
}
else
{
lean_object* v_val_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3428_; 
v_val_3394_ = lean_ctor_get(v___x_3392_, 0);
v_isSharedCheck_3428_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3396_ = v___x_3392_;
v_isShared_3397_ = v_isSharedCheck_3428_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_val_3394_);
lean_dec(v___x_3392_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3428_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v_fst_3398_; lean_object* v_snd_3399_; lean_object* v___y_3401_; lean_object* v___y_3417_; lean_object* v_size_3423_; lean_object* v___x_3424_; uint8_t v___x_3425_; 
v_fst_3398_ = lean_ctor_get(v_b_3388_, 0);
v_snd_3399_ = lean_ctor_get(v_b_3388_, 1);
v_size_3423_ = lean_ctor_get(v_fst_3398_, 0);
v___x_3424_ = lean_unsigned_to_nat(0u);
v___x_3425_ = lean_nat_dec_eq(v_size_3423_, v___x_3424_);
if (v___x_3425_ == 0)
{
lean_object* v_index_3426_; 
v_index_3426_ = lean_ctor_get(v_val_3394_, 0);
lean_inc(v_index_3426_);
v___y_3417_ = v_index_3426_;
goto v___jp_3416_;
}
else
{
lean_object* v___x_3427_; 
lean_inc(v_snd_3399_);
lean_del_object(v___x_3396_);
lean_dec(v_val_3394_);
lean_dec_ref(v_b_3388_);
v___x_3427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3427_, 0, v_snd_3399_);
return v___x_3427_;
}
v___jp_3400_:
{
uint8_t v___x_3402_; 
v___x_3402_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(v_fst_3398_, v___y_3401_);
if (v___x_3402_ == 0)
{
lean_dec(v___y_3401_);
lean_dec(v_val_3394_);
v_i_3386_ = v___x_3391_;
goto _start;
}
else
{
lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3413_; 
lean_inc(v_snd_3399_);
lean_inc(v_fst_3398_);
v_isSharedCheck_3413_ = !lean_is_exclusive(v_b_3388_);
if (v_isSharedCheck_3413_ == 0)
{
lean_object* v_unused_3414_; lean_object* v_unused_3415_; 
v_unused_3414_ = lean_ctor_get(v_b_3388_, 1);
lean_dec(v_unused_3414_);
v_unused_3415_ = lean_ctor_get(v_b_3388_, 0);
lean_dec(v_unused_3415_);
v___x_3405_ = v_b_3388_;
v_isShared_3406_ = v_isSharedCheck_3413_;
goto v_resetjp_3404_;
}
else
{
lean_dec(v_b_3388_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3413_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3410_; 
v___x_3407_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_fst_3398_, v___y_3401_);
lean_dec(v___y_3401_);
v___x_3408_ = lean_array_push(v_snd_3399_, v_val_3394_);
if (v_isShared_3406_ == 0)
{
lean_ctor_set(v___x_3405_, 1, v___x_3408_);
lean_ctor_set(v___x_3405_, 0, v___x_3407_);
v___x_3410_ = v___x_3405_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v___x_3407_);
lean_ctor_set(v_reuseFailAlloc_3412_, 1, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
v_i_3386_ = v___x_3391_;
v_b_3388_ = v___x_3410_;
goto _start;
}
}
}
}
v___jp_3416_:
{
uint8_t v___x_3418_; 
v___x_3418_ = lean_nat_dec_lt(v___y_3417_, v_start_3384_);
lean_dec(v___y_3417_);
if (v___x_3418_ == 0)
{
lean_object* v_userName_3419_; 
lean_del_object(v___x_3396_);
v_userName_3419_ = lean_ctor_get(v_val_3394_, 2);
lean_inc(v_userName_3419_);
v___y_3401_ = v_userName_3419_;
goto v___jp_3400_;
}
else
{
lean_object* v___x_3421_; 
lean_inc(v_snd_3399_);
lean_dec(v_val_3394_);
lean_dec_ref(v_b_3388_);
if (v_isShared_3397_ == 0)
{
lean_ctor_set_tag(v___x_3396_, 0);
lean_ctor_set(v___x_3396_, 0, v_snd_3399_);
v___x_3421_ = v___x_3396_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v_snd_3399_);
v___x_3421_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
return v___x_3421_;
}
}
}
}
}
}
else
{
lean_object* v___x_3429_; 
v___x_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3429_, 0, v_b_3388_);
return v___x_3429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_start_3430_, lean_object* v_as_3431_, lean_object* v_i_3432_, lean_object* v_stop_3433_, lean_object* v_b_3434_){
_start:
{
size_t v_i_boxed_3435_; size_t v_stop_boxed_3436_; lean_object* v_res_3437_; 
v_i_boxed_3435_ = lean_unbox_usize(v_i_3432_);
lean_dec(v_i_3432_);
v_stop_boxed_3436_ = lean_unbox_usize(v_stop_3433_);
lean_dec(v_stop_3433_);
v_res_3437_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_3430_, v_as_3431_, v_i_boxed_3435_, v_stop_boxed_3436_, v_b_3434_);
lean_dec_ref(v_as_3431_);
lean_dec(v_start_3430_);
return v_res_3437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(lean_object* v_start_3438_, lean_object* v_x_3439_, lean_object* v_x_3440_){
_start:
{
if (lean_obj_tag(v_x_3439_) == 0)
{
lean_object* v_cs_3441_; lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3454_; 
v_cs_3441_ = lean_ctor_get(v_x_3439_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v_x_3439_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3443_ = v_x_3439_;
v_isShared_3444_ = v_isSharedCheck_3454_;
goto v_resetjp_3442_;
}
else
{
lean_inc(v_cs_3441_);
lean_dec(v_x_3439_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3454_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; uint8_t v___x_3447_; 
v___x_3445_ = lean_array_get_size(v_cs_3441_);
v___x_3446_ = lean_unsigned_to_nat(0u);
v___x_3447_ = lean_nat_dec_lt(v___x_3446_, v___x_3445_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3449_; 
lean_dec_ref(v_cs_3441_);
if (v_isShared_3444_ == 0)
{
lean_ctor_set_tag(v___x_3443_, 1);
lean_ctor_set(v___x_3443_, 0, v_x_3440_);
v___x_3449_ = v___x_3443_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_x_3440_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
else
{
size_t v___x_3451_; size_t v___x_3452_; lean_object* v___x_3453_; 
lean_del_object(v___x_3443_);
v___x_3451_ = lean_usize_of_nat(v___x_3445_);
v___x_3452_ = ((size_t)0ULL);
v___x_3453_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(v_start_3438_, v_cs_3441_, v___x_3451_, v___x_3452_, v_x_3440_);
lean_dec_ref(v_cs_3441_);
return v___x_3453_;
}
}
}
else
{
lean_object* v_vs_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3468_; 
v_vs_3455_ = lean_ctor_get(v_x_3439_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v_x_3439_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3457_ = v_x_3439_;
v_isShared_3458_ = v_isSharedCheck_3468_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_vs_3455_);
lean_dec(v_x_3439_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3468_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; uint8_t v___x_3461_; 
v___x_3459_ = lean_array_get_size(v_vs_3455_);
v___x_3460_ = lean_unsigned_to_nat(0u);
v___x_3461_ = lean_nat_dec_lt(v___x_3460_, v___x_3459_);
if (v___x_3461_ == 0)
{
lean_object* v___x_3463_; 
lean_dec_ref(v_vs_3455_);
if (v_isShared_3458_ == 0)
{
lean_ctor_set(v___x_3457_, 0, v_x_3440_);
v___x_3463_ = v___x_3457_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v_x_3440_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
else
{
size_t v___x_3465_; size_t v___x_3466_; lean_object* v___x_3467_; 
lean_del_object(v___x_3457_);
v___x_3465_ = lean_usize_of_nat(v___x_3459_);
v___x_3466_ = ((size_t)0ULL);
v___x_3467_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_3438_, v_vs_3455_, v___x_3465_, v___x_3466_, v_x_3440_);
lean_dec_ref(v_vs_3455_);
return v___x_3467_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_start_3469_, lean_object* v_as_3470_, size_t v_i_3471_, size_t v_stop_3472_, lean_object* v_b_3473_){
_start:
{
uint8_t v___x_3474_; 
v___x_3474_ = lean_usize_dec_eq(v_i_3471_, v_stop_3472_);
if (v___x_3474_ == 0)
{
size_t v___x_3475_; size_t v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; 
v___x_3475_ = ((size_t)1ULL);
v___x_3476_ = lean_usize_sub(v_i_3471_, v___x_3475_);
v___x_3477_ = lean_array_uget_borrowed(v_as_3470_, v___x_3476_);
lean_inc(v___x_3477_);
v___x_3478_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_3469_, v___x_3477_, v_b_3473_);
if (lean_obj_tag(v___x_3478_) == 0)
{
return v___x_3478_;
}
else
{
lean_object* v_a_3479_; 
v_a_3479_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_a_3479_);
lean_dec_ref_known(v___x_3478_, 1);
v_i_3471_ = v___x_3476_;
v_b_3473_ = v_a_3479_;
goto _start;
}
}
else
{
lean_object* v___x_3481_; 
v___x_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3481_, 0, v_b_3473_);
return v___x_3481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_start_3482_, lean_object* v_as_3483_, lean_object* v_i_3484_, lean_object* v_stop_3485_, lean_object* v_b_3486_){
_start:
{
size_t v_i_boxed_3487_; size_t v_stop_boxed_3488_; lean_object* v_res_3489_; 
v_i_boxed_3487_ = lean_unbox_usize(v_i_3484_);
lean_dec(v_i_3484_);
v_stop_boxed_3488_ = lean_unbox_usize(v_stop_3485_);
lean_dec(v_stop_3485_);
v_res_3489_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(v_start_3482_, v_as_3483_, v_i_boxed_3487_, v_stop_boxed_3488_, v_b_3486_);
lean_dec_ref(v_as_3483_);
lean_dec(v_start_3482_);
return v_res_3489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg___boxed(lean_object* v_start_3490_, lean_object* v_x_3491_, lean_object* v_x_3492_){
_start:
{
lean_object* v_res_3493_; 
v_res_3493_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_3490_, v_x_3491_, v_x_3492_);
lean_dec(v_start_3490_);
return v_res_3493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(lean_object* v_start_3494_, lean_object* v_t_3495_, lean_object* v_init_3496_){
_start:
{
lean_object* v_root_3497_; lean_object* v_tail_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; 
v_root_3497_ = lean_ctor_get(v_t_3495_, 0);
lean_inc_ref(v_root_3497_);
v_tail_3498_ = lean_ctor_get(v_t_3495_, 1);
lean_inc_ref(v_tail_3498_);
lean_dec_ref(v_t_3495_);
v___x_3499_ = lean_array_get_size(v_tail_3498_);
v___x_3500_ = lean_unsigned_to_nat(0u);
v___x_3501_ = lean_nat_dec_lt(v___x_3500_, v___x_3499_);
if (v___x_3501_ == 0)
{
lean_object* v___x_3502_; 
lean_dec_ref(v_tail_3498_);
v___x_3502_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_3494_, v_root_3497_, v_init_3496_);
return v___x_3502_;
}
else
{
size_t v___x_3503_; size_t v___x_3504_; lean_object* v___x_3505_; 
v___x_3503_ = lean_usize_of_nat(v___x_3499_);
v___x_3504_ = ((size_t)0ULL);
v___x_3505_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_3494_, v_tail_3498_, v___x_3503_, v___x_3504_, v_init_3496_);
lean_dec_ref(v_tail_3498_);
if (lean_obj_tag(v___x_3505_) == 0)
{
lean_dec_ref(v_root_3497_);
return v___x_3505_;
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3507_; 
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3505_, 1);
v___x_3507_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_3494_, v_root_3497_, v_a_3506_);
return v___x_3507_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg___boxed(lean_object* v_start_3508_, lean_object* v_t_3509_, lean_object* v_init_3510_){
_start:
{
lean_object* v_res_3511_; 
v_res_3511_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(v_start_3508_, v_t_3509_, v_init_3510_);
lean_dec(v_start_3508_);
return v_res_3511_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(lean_object* v_start_3512_, lean_object* v_lctx_3513_, lean_object* v_init_3514_){
_start:
{
lean_object* v_decls_3515_; lean_object* v___x_3516_; 
v_decls_3515_ = lean_ctor_get(v_lctx_3513_, 1);
lean_inc_ref(v_decls_3515_);
lean_dec_ref(v_lctx_3513_);
v___x_3516_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(v_start_3512_, v_decls_3515_, v_init_3514_);
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg___boxed(lean_object* v_start_3517_, lean_object* v_lctx_3518_, lean_object* v_init_3519_){
_start:
{
lean_object* v_res_3520_; 
v_res_3520_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(v_start_3517_, v_lctx_3518_, v_init_3519_);
lean_dec(v_start_3517_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg(lean_object* v_lctx_3523_, lean_object* v_userNames_3524_, lean_object* v_start_3525_){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3526_ = ((lean_object*)(l_Lean_LocalContext_findFromUserNames___redArg___closed__0));
v___x_3527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3527_, 0, v_userNames_3524_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
v___x_3528_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(v_start_3525_, v_lctx_3523_, v___x_3527_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3530_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v___x_3530_ = l_Array_reverse___redArg(v_a_3529_);
return v___x_3530_;
}
else
{
lean_object* v_a_3531_; lean_object* v_snd_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v_a_3531_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3528_, 1);
v_snd_3532_ = lean_ctor_get(v_a_3531_, 1);
lean_inc(v_snd_3532_);
lean_dec(v_a_3531_);
v___x_3533_ = l_Array_reverse___redArg(v_snd_3532_);
v___x_3534_ = l_Array_reverse___redArg(v___x_3533_);
return v___x_3534_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg___boxed(lean_object* v_lctx_3535_, lean_object* v_userNames_3536_, lean_object* v_start_3537_){
_start:
{
lean_object* v_res_3538_; 
v_res_3538_ = l_Lean_LocalContext_findFromUserNames___redArg(v_lctx_3535_, v_userNames_3536_, v_start_3537_);
lean_dec(v_start_3537_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames(lean_object* v_00_u03b1_3539_, lean_object* v_lctx_3540_, lean_object* v_userNames_3541_, lean_object* v_start_3542_){
_start:
{
lean_object* v___x_3543_; 
v___x_3543_ = l_Lean_LocalContext_findFromUserNames___redArg(v_lctx_3540_, v_userNames_3541_, v_start_3542_);
return v___x_3543_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___boxed(lean_object* v_00_u03b1_3544_, lean_object* v_lctx_3545_, lean_object* v_userNames_3546_, lean_object* v_start_3547_){
_start:
{
lean_object* v_res_3548_; 
v_res_3548_ = l_Lean_LocalContext_findFromUserNames(v_00_u03b1_3544_, v_lctx_3545_, v_userNames_3546_, v_start_3547_);
lean_dec(v_start_3547_);
return v_res_3548_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0(lean_object* v_00_u03b2_3549_, lean_object* v_m_3550_, lean_object* v_a_3551_){
_start:
{
uint8_t v___x_3552_; 
v___x_3552_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(v_m_3550_, v_a_3551_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___boxed(lean_object* v_00_u03b2_3553_, lean_object* v_m_3554_, lean_object* v_a_3555_){
_start:
{
uint8_t v_res_3556_; lean_object* v_r_3557_; 
v_res_3556_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0(v_00_u03b2_3553_, v_m_3554_, v_a_3555_);
lean_dec(v_a_3555_);
lean_dec_ref(v_m_3554_);
v_r_3557_ = lean_box(v_res_3556_);
return v_r_3557_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1(lean_object* v_00_u03b2_3558_, lean_object* v_m_3559_, lean_object* v_a_3560_){
_start:
{
lean_object* v___x_3561_; 
v___x_3561_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_m_3559_, v_a_3560_);
return v___x_3561_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___boxed(lean_object* v_00_u03b2_3562_, lean_object* v_m_3563_, lean_object* v_a_3564_){
_start:
{
lean_object* v_res_3565_; 
v_res_3565_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1(v_00_u03b2_3562_, v_m_3563_, v_a_3564_);
lean_dec(v_a_3564_);
return v_res_3565_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2(lean_object* v_00_u03b1_3566_, lean_object* v_start_3567_, lean_object* v_lctx_3568_, lean_object* v_init_3569_){
_start:
{
lean_object* v___x_3570_; 
v___x_3570_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(v_start_3567_, v_lctx_3568_, v_init_3569_);
return v___x_3570_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___boxed(lean_object* v_00_u03b1_3571_, lean_object* v_start_3572_, lean_object* v_lctx_3573_, lean_object* v_init_3574_){
_start:
{
lean_object* v_res_3575_; 
v_res_3575_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2(v_00_u03b1_3571_, v_start_3572_, v_lctx_3573_, v_init_3574_);
lean_dec(v_start_3572_);
return v_res_3575_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0(lean_object* v_00_u03b2_3576_, lean_object* v_a_3577_, lean_object* v_x_3578_){
_start:
{
uint8_t v___x_3579_; 
v___x_3579_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_3577_, v_x_3578_);
return v___x_3579_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3580_, lean_object* v_a_3581_, lean_object* v_x_3582_){
_start:
{
uint8_t v_res_3583_; lean_object* v_r_3584_; 
v_res_3583_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0(v_00_u03b2_3580_, v_a_3581_, v_x_3582_);
lean_dec(v_x_3582_);
lean_dec(v_a_3581_);
v_r_3584_ = lean_box(v_res_3583_);
return v_r_3584_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2(lean_object* v_00_u03b2_3585_, lean_object* v_a_3586_, lean_object* v_x_3587_){
_start:
{
lean_object* v___x_3588_; 
v___x_3588_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_3586_, v_x_3587_);
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3589_, lean_object* v_a_3590_, lean_object* v_x_3591_){
_start:
{
lean_object* v_res_3592_; 
v_res_3592_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2(v_00_u03b2_3589_, v_a_3590_, v_x_3591_);
lean_dec(v_a_3590_);
return v_res_3592_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4(lean_object* v_00_u03b1_3593_, lean_object* v_start_3594_, lean_object* v_t_3595_, lean_object* v_init_3596_){
_start:
{
lean_object* v___x_3597_; 
v___x_3597_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(v_start_3594_, v_t_3595_, v_init_3596_);
return v___x_3597_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___boxed(lean_object* v_00_u03b1_3598_, lean_object* v_start_3599_, lean_object* v_t_3600_, lean_object* v_init_3601_){
_start:
{
lean_object* v_res_3602_; 
v_res_3602_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4(v_00_u03b1_3598_, v_start_3599_, v_t_3600_, v_init_3601_);
lean_dec(v_start_3599_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5(lean_object* v_00_u03b1_3603_, lean_object* v_start_3604_, lean_object* v_x_3605_, lean_object* v_x_3606_){
_start:
{
lean_object* v___x_3607_; 
v___x_3607_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_3604_, v_x_3605_, v_x_3606_);
return v___x_3607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___boxed(lean_object* v_00_u03b1_3608_, lean_object* v_start_3609_, lean_object* v_x_3610_, lean_object* v_x_3611_){
_start:
{
lean_object* v_res_3612_; 
v_res_3612_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5(v_00_u03b1_3608_, v_start_3609_, v_x_3610_, v_x_3611_);
lean_dec(v_start_3609_);
return v_res_3612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6(lean_object* v_00_u03b1_3613_, lean_object* v_start_3614_, lean_object* v_as_3615_, size_t v_i_3616_, size_t v_stop_3617_, lean_object* v_b_3618_){
_start:
{
lean_object* v___x_3619_; 
v___x_3619_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_3614_, v_as_3615_, v_i_3616_, v_stop_3617_, v_b_3618_);
return v___x_3619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b1_3620_, lean_object* v_start_3621_, lean_object* v_as_3622_, lean_object* v_i_3623_, lean_object* v_stop_3624_, lean_object* v_b_3625_){
_start:
{
size_t v_i_boxed_3626_; size_t v_stop_boxed_3627_; lean_object* v_res_3628_; 
v_i_boxed_3626_ = lean_unbox_usize(v_i_3623_);
lean_dec(v_i_3623_);
v_stop_boxed_3627_ = lean_unbox_usize(v_stop_3624_);
lean_dec(v_stop_3624_);
v_res_3628_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6(v_00_u03b1_3620_, v_start_3621_, v_as_3622_, v_i_boxed_3626_, v_stop_boxed_3627_, v_b_3625_);
lean_dec_ref(v_as_3622_);
lean_dec(v_start_3621_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b1_3629_, lean_object* v_start_3630_, lean_object* v_as_3631_, size_t v_i_3632_, size_t v_stop_3633_, lean_object* v_b_3634_){
_start:
{
lean_object* v___x_3635_; 
v___x_3635_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(v_start_3630_, v_as_3631_, v_i_3632_, v_stop_3633_, v_b_3634_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___boxed(lean_object* v_00_u03b1_3636_, lean_object* v_start_3637_, lean_object* v_as_3638_, lean_object* v_i_3639_, lean_object* v_stop_3640_, lean_object* v_b_3641_){
_start:
{
size_t v_i_boxed_3642_; size_t v_stop_boxed_3643_; lean_object* v_res_3644_; 
v_i_boxed_3642_ = lean_unbox_usize(v_i_3639_);
lean_dec(v_i_3639_);
v_stop_boxed_3643_ = lean_unbox_usize(v_stop_3640_);
lean_dec(v_stop_3640_);
v_res_3644_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6(v_00_u03b1_3636_, v_start_3637_, v_as_3638_, v_i_boxed_3642_, v_stop_boxed_3643_, v_b_3641_);
lean_dec_ref(v_as_3638_);
lean_dec(v_start_3637_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift___redArg(lean_object* v_inst_3645_, lean_object* v_inst_3646_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = lean_apply_2(v_inst_3645_, lean_box(0), v_inst_3646_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift(lean_object* v_m_3648_, lean_object* v_n_3649_, lean_object* v_inst_3650_, lean_object* v_inst_3651_){
_start:
{
lean_object* v___x_3652_; 
v___x_3652_ = lean_apply_2(v_inst_3650_, lean_box(0), v_inst_3651_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__0(lean_object* v_toPure_3653_, lean_object* v_d_x3f_3654_, lean_object* v_b_3655_){
_start:
{
if (lean_obj_tag(v_d_x3f_3654_) == 0)
{
lean_object* v___x_3656_; lean_object* v___x_3657_; 
v___x_3656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3656_, 0, v_b_3655_);
v___x_3657_ = lean_apply_2(v_toPure_3653_, lean_box(0), v___x_3656_);
return v___x_3657_;
}
else
{
lean_object* v_val_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3673_; 
v_val_3658_ = lean_ctor_get(v_d_x3f_3654_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v_d_x3f_3654_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3660_ = v_d_x3f_3654_;
v_isShared_3661_ = v_isSharedCheck_3673_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_val_3658_);
lean_dec(v_d_x3f_3654_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3673_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
uint8_t v___x_3662_; 
v___x_3662_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3658_);
if (v___x_3662_ == 0)
{
lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3666_; 
v___x_3663_ = l_Lean_LocalDecl_toExpr(v_val_3658_);
v___x_3664_ = lean_array_push(v_b_3655_, v___x_3663_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set(v___x_3660_, 0, v___x_3664_);
v___x_3666_ = v___x_3660_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v___x_3664_);
v___x_3666_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
lean_object* v___x_3667_; 
v___x_3667_ = lean_apply_2(v_toPure_3653_, lean_box(0), v___x_3666_);
return v___x_3667_;
}
}
else
{
lean_object* v___x_3670_; 
lean_dec(v_val_3658_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set(v___x_3660_, 0, v_b_3655_);
v___x_3670_ = v___x_3660_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_b_3655_);
v___x_3670_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
lean_object* v___x_3671_; 
v___x_3671_ = lean_apply_2(v_toPure_3653_, lean_box(0), v___x_3670_);
return v___x_3671_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__1(lean_object* v_toPure_3674_, lean_object* v_____s_3675_){
_start:
{
lean_object* v___x_3676_; 
v___x_3676_ = lean_apply_2(v_toPure_3674_, lean_box(0), v_____s_3675_);
return v___x_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2(lean_object* v_inst_3677_, lean_object* v_hs_3678_, lean_object* v___f_3679_, lean_object* v_toBind_3680_, lean_object* v___f_3681_, lean_object* v_____do__lift_3682_){
_start:
{
lean_object* v_decls_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
v_decls_3683_ = lean_ctor_get(v_____do__lift_3682_, 1);
v___x_3684_ = l_Lean_PersistentArray_forIn___redArg(v_inst_3677_, v_decls_3683_, v_hs_3678_, v___f_3679_);
v___x_3685_ = lean_apply_4(v_toBind_3680_, lean_box(0), lean_box(0), v___x_3684_, v___f_3681_);
return v___x_3685_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2___boxed(lean_object* v_inst_3686_, lean_object* v_hs_3687_, lean_object* v___f_3688_, lean_object* v_toBind_3689_, lean_object* v___f_3690_, lean_object* v_____do__lift_3691_){
_start:
{
lean_object* v_res_3692_; 
v_res_3692_ = l_Lean_getLocalHyps___redArg___lam__2(v_inst_3686_, v_hs_3687_, v___f_3688_, v_toBind_3689_, v___f_3690_, v_____do__lift_3691_);
lean_dec_ref(v_____do__lift_3691_);
return v_res_3692_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg(lean_object* v_inst_3695_, lean_object* v_inst_3696_){
_start:
{
lean_object* v_toApplicative_3697_; lean_object* v_toBind_3698_; lean_object* v_toPure_3699_; lean_object* v_hs_3700_; lean_object* v___f_3701_; lean_object* v___f_3702_; lean_object* v___f_3703_; lean_object* v___x_3704_; 
v_toApplicative_3697_ = lean_ctor_get(v_inst_3695_, 0);
v_toBind_3698_ = lean_ctor_get(v_inst_3695_, 1);
lean_inc_n(v_toBind_3698_, 2);
v_toPure_3699_ = lean_ctor_get(v_toApplicative_3697_, 1);
v_hs_3700_ = ((lean_object*)(l_Lean_getLocalHyps___redArg___closed__0));
lean_inc_n(v_toPure_3699_, 2);
v___f_3701_ = lean_alloc_closure((void*)(l_Lean_getLocalHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3701_, 0, v_toPure_3699_);
v___f_3702_ = lean_alloc_closure((void*)(l_Lean_getLocalHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3702_, 0, v_toPure_3699_);
v___f_3703_ = lean_alloc_closure((void*)(l_Lean_getLocalHyps___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_3703_, 0, v_inst_3695_);
lean_closure_set(v___f_3703_, 1, v_hs_3700_);
lean_closure_set(v___f_3703_, 2, v___f_3701_);
lean_closure_set(v___f_3703_, 3, v_toBind_3698_);
lean_closure_set(v___f_3703_, 4, v___f_3702_);
v___x_3704_ = lean_apply_4(v_toBind_3698_, lean_box(0), lean_box(0), v_inst_3696_, v___f_3703_);
return v___x_3704_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps(lean_object* v_m_3705_, lean_object* v_inst_3706_, lean_object* v_inst_3707_){
_start:
{
lean_object* v___x_3708_; 
v___x_3708_ = l_Lean_getLocalHyps___redArg(v_inst_3706_, v_inst_3707_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object* v_fvarId_3709_, lean_object* v_e_3710_, lean_object* v_d_3711_){
_start:
{
lean_object* v___y_3713_; lean_object* v_fvarId_3745_; 
v_fvarId_3745_ = lean_ctor_get(v_d_3711_, 1);
lean_inc(v_fvarId_3745_);
v___y_3713_ = v_fvarId_3745_;
goto v___jp_3712_;
v___jp_3712_:
{
uint8_t v___x_3714_; 
v___x_3714_ = l_Lean_instBEqFVarId_beq(v___y_3713_, v_fvarId_3709_);
lean_dec(v___y_3713_);
if (v___x_3714_ == 0)
{
if (lean_obj_tag(v_d_3711_) == 0)
{
lean_object* v_index_3715_; lean_object* v_fvarId_3716_; lean_object* v_userName_3717_; lean_object* v_type_3718_; uint8_t v_bi_3719_; uint8_t v_kind_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3728_; 
v_index_3715_ = lean_ctor_get(v_d_3711_, 0);
v_fvarId_3716_ = lean_ctor_get(v_d_3711_, 1);
v_userName_3717_ = lean_ctor_get(v_d_3711_, 2);
v_type_3718_ = lean_ctor_get(v_d_3711_, 3);
v_bi_3719_ = lean_ctor_get_uint8(v_d_3711_, sizeof(void*)*4);
v_kind_3720_ = lean_ctor_get_uint8(v_d_3711_, sizeof(void*)*4 + 1);
v_isSharedCheck_3728_ = !lean_is_exclusive(v_d_3711_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3722_ = v_d_3711_;
v_isShared_3723_ = v_isSharedCheck_3728_;
goto v_resetjp_3721_;
}
else
{
lean_inc(v_type_3718_);
lean_inc(v_userName_3717_);
lean_inc(v_fvarId_3716_);
lean_inc(v_index_3715_);
lean_dec(v_d_3711_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3728_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v___x_3724_; lean_object* v___x_3726_; 
v___x_3724_ = l_Lean_Expr_replaceFVarId(v_type_3718_, v_fvarId_3709_, v_e_3710_);
lean_dec_ref(v_type_3718_);
if (v_isShared_3723_ == 0)
{
lean_ctor_set(v___x_3722_, 3, v___x_3724_);
v___x_3726_ = v___x_3722_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_index_3715_);
lean_ctor_set(v_reuseFailAlloc_3727_, 1, v_fvarId_3716_);
lean_ctor_set(v_reuseFailAlloc_3727_, 2, v_userName_3717_);
lean_ctor_set(v_reuseFailAlloc_3727_, 3, v___x_3724_);
lean_ctor_set_uint8(v_reuseFailAlloc_3727_, sizeof(void*)*4, v_bi_3719_);
lean_ctor_set_uint8(v_reuseFailAlloc_3727_, sizeof(void*)*4 + 1, v_kind_3720_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
else
{
lean_object* v_index_3729_; lean_object* v_fvarId_3730_; lean_object* v_userName_3731_; lean_object* v_type_3732_; lean_object* v_value_3733_; uint8_t v_nondep_3734_; uint8_t v_kind_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3744_; 
v_index_3729_ = lean_ctor_get(v_d_3711_, 0);
v_fvarId_3730_ = lean_ctor_get(v_d_3711_, 1);
v_userName_3731_ = lean_ctor_get(v_d_3711_, 2);
v_type_3732_ = lean_ctor_get(v_d_3711_, 3);
v_value_3733_ = lean_ctor_get(v_d_3711_, 4);
v_nondep_3734_ = lean_ctor_get_uint8(v_d_3711_, sizeof(void*)*5);
v_kind_3735_ = lean_ctor_get_uint8(v_d_3711_, sizeof(void*)*5 + 1);
v_isSharedCheck_3744_ = !lean_is_exclusive(v_d_3711_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3737_ = v_d_3711_;
v_isShared_3738_ = v_isSharedCheck_3744_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_value_3733_);
lean_inc(v_type_3732_);
lean_inc(v_userName_3731_);
lean_inc(v_fvarId_3730_);
lean_inc(v_index_3729_);
lean_dec(v_d_3711_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3744_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3742_; 
lean_inc(v_fvarId_3709_);
v___x_3739_ = l_Lean_Expr_replaceFVarId(v_type_3732_, v_fvarId_3709_, v_e_3710_);
lean_dec_ref(v_type_3732_);
v___x_3740_ = l_Lean_Expr_replaceFVarId(v_value_3733_, v_fvarId_3709_, v_e_3710_);
lean_dec_ref(v_value_3733_);
if (v_isShared_3738_ == 0)
{
lean_ctor_set(v___x_3737_, 4, v___x_3740_);
lean_ctor_set(v___x_3737_, 3, v___x_3739_);
v___x_3742_ = v___x_3737_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v_index_3729_);
lean_ctor_set(v_reuseFailAlloc_3743_, 1, v_fvarId_3730_);
lean_ctor_set(v_reuseFailAlloc_3743_, 2, v_userName_3731_);
lean_ctor_set(v_reuseFailAlloc_3743_, 3, v___x_3739_);
lean_ctor_set(v_reuseFailAlloc_3743_, 4, v___x_3740_);
lean_ctor_set_uint8(v_reuseFailAlloc_3743_, sizeof(void*)*5, v_nondep_3734_);
lean_ctor_set_uint8(v_reuseFailAlloc_3743_, sizeof(void*)*5 + 1, v_kind_3735_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
}
}
else
{
lean_dec(v_fvarId_3709_);
return v_d_3711_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId___boxed(lean_object* v_fvarId_3746_, lean_object* v_e_3747_, lean_object* v_d_3748_){
_start:
{
lean_object* v_res_3749_; 
v_res_3749_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_3746_, v_e_3747_, v_d_3748_);
lean_dec_ref(v_e_3747_);
return v_res_3749_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0(lean_object* v_fvarId_3750_, lean_object* v_e_3751_, lean_object* v_x_3752_){
_start:
{
lean_object* v___x_3753_; 
v___x_3753_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_3750_, v_e_3751_, v_x_3752_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0___boxed(lean_object* v_fvarId_3754_, lean_object* v_e_3755_, lean_object* v_x_3756_){
_start:
{
lean_object* v_res_3757_; 
v_res_3757_ = l_Lean_LocalContext_replaceFVarId___lam__0(v_fvarId_3754_, v_e_3755_, v_x_3756_);
lean_dec_ref(v_e_3755_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(lean_object* v_fvarId_3758_, lean_object* v_e_3759_, size_t v_sz_3760_, size_t v_i_3761_, lean_object* v_bs_3762_){
_start:
{
uint8_t v___x_3763_; 
v___x_3763_ = lean_usize_dec_lt(v_i_3761_, v_sz_3760_);
if (v___x_3763_ == 0)
{
lean_dec(v_fvarId_3758_);
return v_bs_3762_;
}
else
{
lean_object* v_v_3764_; lean_object* v___x_3765_; lean_object* v_bs_x27_3766_; lean_object* v___y_3768_; 
v_v_3764_ = lean_array_uget(v_bs_3762_, v_i_3761_);
v___x_3765_ = lean_unsigned_to_nat(0u);
v_bs_x27_3766_ = lean_array_uset(v_bs_3762_, v_i_3761_, v___x_3765_);
if (lean_obj_tag(v_v_3764_) == 0)
{
v___y_3768_ = v_v_3764_;
goto v___jp_3767_;
}
else
{
lean_object* v_val_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3781_; 
v_val_3773_ = lean_ctor_get(v_v_3764_, 0);
v_isSharedCheck_3781_ = !lean_is_exclusive(v_v_3764_);
if (v_isSharedCheck_3781_ == 0)
{
v___x_3775_ = v_v_3764_;
v_isShared_3776_ = v_isSharedCheck_3781_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_val_3773_);
lean_dec(v_v_3764_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3781_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3777_; lean_object* v___x_3779_; 
lean_inc(v_fvarId_3758_);
v___x_3777_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_3758_, v_e_3759_, v_val_3773_);
if (v_isShared_3776_ == 0)
{
lean_ctor_set(v___x_3775_, 0, v___x_3777_);
v___x_3779_ = v___x_3775_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v___x_3777_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
v___y_3768_ = v___x_3779_;
goto v___jp_3767_;
}
}
}
v___jp_3767_:
{
size_t v___x_3769_; size_t v___x_3770_; lean_object* v___x_3771_; 
v___x_3769_ = ((size_t)1ULL);
v___x_3770_ = lean_usize_add(v_i_3761_, v___x_3769_);
v___x_3771_ = lean_array_uset(v_bs_x27_3766_, v_i_3761_, v___y_3768_);
v_i_3761_ = v___x_3770_;
v_bs_3762_ = v___x_3771_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3___boxed(lean_object* v_fvarId_3782_, lean_object* v_e_3783_, lean_object* v_sz_3784_, lean_object* v_i_3785_, lean_object* v_bs_3786_){
_start:
{
size_t v_sz_boxed_3787_; size_t v_i_boxed_3788_; lean_object* v_res_3789_; 
v_sz_boxed_3787_ = lean_unbox_usize(v_sz_3784_);
lean_dec(v_sz_3784_);
v_i_boxed_3788_ = lean_unbox_usize(v_i_3785_);
lean_dec(v_i_3785_);
v_res_3789_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(v_fvarId_3782_, v_e_3783_, v_sz_boxed_3787_, v_i_boxed_3788_, v_bs_3786_);
lean_dec_ref(v_e_3783_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(lean_object* v_fvarId_3790_, lean_object* v_e_3791_, size_t v_sz_3792_, size_t v_i_3793_, lean_object* v_bs_3794_){
_start:
{
uint8_t v___x_3795_; 
v___x_3795_ = lean_usize_dec_lt(v_i_3793_, v_sz_3792_);
if (v___x_3795_ == 0)
{
lean_dec(v_fvarId_3790_);
return v_bs_3794_;
}
else
{
lean_object* v_v_3796_; lean_object* v___x_3797_; lean_object* v_bs_x27_3798_; lean_object* v___x_3799_; size_t v___x_3800_; size_t v___x_3801_; lean_object* v___x_3802_; 
v_v_3796_ = lean_array_uget(v_bs_3794_, v_i_3793_);
v___x_3797_ = lean_unsigned_to_nat(0u);
v_bs_x27_3798_ = lean_array_uset(v_bs_3794_, v_i_3793_, v___x_3797_);
lean_inc(v_fvarId_3790_);
v___x_3799_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(v_fvarId_3790_, v_e_3791_, v_v_3796_);
v___x_3800_ = ((size_t)1ULL);
v___x_3801_ = lean_usize_add(v_i_3793_, v___x_3800_);
v___x_3802_ = lean_array_uset(v_bs_x27_3798_, v_i_3793_, v___x_3799_);
v_i_3793_ = v___x_3801_;
v_bs_3794_ = v___x_3802_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(lean_object* v_fvarId_3804_, lean_object* v_e_3805_, lean_object* v_x_3806_){
_start:
{
if (lean_obj_tag(v_x_3806_) == 0)
{
lean_object* v_cs_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3817_; 
v_cs_3807_ = lean_ctor_get(v_x_3806_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v_x_3806_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3809_ = v_x_3806_;
v_isShared_3810_ = v_isSharedCheck_3817_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_cs_3807_);
lean_dec(v_x_3806_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3817_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
size_t v_sz_3811_; size_t v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3815_; 
v_sz_3811_ = lean_array_size(v_cs_3807_);
v___x_3812_ = ((size_t)0ULL);
v___x_3813_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(v_fvarId_3804_, v_e_3805_, v_sz_3811_, v___x_3812_, v_cs_3807_);
if (v_isShared_3810_ == 0)
{
lean_ctor_set(v___x_3809_, 0, v___x_3813_);
v___x_3815_ = v___x_3809_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v___x_3813_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
else
{
lean_object* v_vs_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3828_; 
v_vs_3818_ = lean_ctor_get(v_x_3806_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v_x_3806_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3820_ = v_x_3806_;
v_isShared_3821_ = v_isSharedCheck_3828_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_vs_3818_);
lean_dec(v_x_3806_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3828_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
size_t v_sz_3822_; size_t v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3826_; 
v_sz_3822_ = lean_array_size(v_vs_3818_);
v___x_3823_ = ((size_t)0ULL);
v___x_3824_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(v_fvarId_3804_, v_e_3805_, v_sz_3822_, v___x_3823_, v_vs_3818_);
if (v_isShared_3821_ == 0)
{
lean_ctor_set(v___x_3820_, 0, v___x_3824_);
v___x_3826_ = v___x_3820_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v___x_3824_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2___boxed(lean_object* v_fvarId_3829_, lean_object* v_e_3830_, lean_object* v_x_3831_){
_start:
{
lean_object* v_res_3832_; 
v_res_3832_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(v_fvarId_3829_, v_e_3830_, v_x_3831_);
lean_dec_ref(v_e_3830_);
return v_res_3832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4___boxed(lean_object* v_fvarId_3833_, lean_object* v_e_3834_, lean_object* v_sz_3835_, lean_object* v_i_3836_, lean_object* v_bs_3837_){
_start:
{
size_t v_sz_boxed_3838_; size_t v_i_boxed_3839_; lean_object* v_res_3840_; 
v_sz_boxed_3838_ = lean_unbox_usize(v_sz_3835_);
lean_dec(v_sz_3835_);
v_i_boxed_3839_ = lean_unbox_usize(v_i_3836_);
lean_dec(v_i_3836_);
v_res_3840_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(v_fvarId_3833_, v_e_3834_, v_sz_boxed_3838_, v_i_boxed_3839_, v_bs_3837_);
lean_dec_ref(v_e_3834_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(lean_object* v_fvarId_3841_, lean_object* v_e_3842_, lean_object* v_t_3843_){
_start:
{
lean_object* v_root_3844_; lean_object* v_tail_3845_; lean_object* v_size_3846_; size_t v_shift_3847_; lean_object* v_tailOff_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3859_; 
v_root_3844_ = lean_ctor_get(v_t_3843_, 0);
v_tail_3845_ = lean_ctor_get(v_t_3843_, 1);
v_size_3846_ = lean_ctor_get(v_t_3843_, 2);
v_shift_3847_ = lean_ctor_get_usize(v_t_3843_, 4);
v_tailOff_3848_ = lean_ctor_get(v_t_3843_, 3);
v_isSharedCheck_3859_ = !lean_is_exclusive(v_t_3843_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3850_ = v_t_3843_;
v_isShared_3851_ = v_isSharedCheck_3859_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_tailOff_3848_);
lean_inc(v_size_3846_);
lean_inc(v_tail_3845_);
lean_inc(v_root_3844_);
lean_dec(v_t_3843_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3859_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3852_; size_t v_sz_3853_; size_t v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3857_; 
lean_inc(v_fvarId_3841_);
v___x_3852_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(v_fvarId_3841_, v_e_3842_, v_root_3844_);
v_sz_3853_ = lean_array_size(v_tail_3845_);
v___x_3854_ = ((size_t)0ULL);
v___x_3855_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(v_fvarId_3841_, v_e_3842_, v_sz_3853_, v___x_3854_, v_tail_3845_);
if (v_isShared_3851_ == 0)
{
lean_ctor_set(v___x_3850_, 1, v___x_3855_);
lean_ctor_set(v___x_3850_, 0, v___x_3852_);
v___x_3857_ = v___x_3850_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v___x_3852_);
lean_ctor_set(v_reuseFailAlloc_3858_, 1, v___x_3855_);
lean_ctor_set(v_reuseFailAlloc_3858_, 2, v_size_3846_);
lean_ctor_set(v_reuseFailAlloc_3858_, 3, v_tailOff_3848_);
lean_ctor_set_usize(v_reuseFailAlloc_3858_, 4, v_shift_3847_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1___boxed(lean_object* v_fvarId_3860_, lean_object* v_e_3861_, lean_object* v_t_3862_){
_start:
{
lean_object* v_res_3863_; 
v_res_3863_ = l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(v_fvarId_3860_, v_e_3861_, v_t_3862_);
lean_dec_ref(v_e_3861_);
return v_res_3863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg___lam__0(lean_object* v_f_3864_, lean_object* v_x_3865_){
_start:
{
lean_object* v___x_3866_; 
v___x_3866_ = lean_apply_1(v_f_3864_, v_x_3865_);
return v___x_3866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(lean_object* v_f_3867_, lean_object* v_as_3868_, lean_object* v_i_3869_, lean_object* v_acc_3870_){
_start:
{
lean_object* v___x_3871_; uint8_t v___x_3872_; 
v___x_3871_ = lean_array_get_size(v_as_3868_);
v___x_3872_ = lean_nat_dec_eq(v_i_3869_, v___x_3871_);
if (v___x_3872_ == 0)
{
lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; 
v___x_3873_ = lean_array_fget_borrowed(v_as_3868_, v_i_3869_);
lean_inc(v_f_3867_);
lean_inc(v___x_3873_);
v___x_3874_ = lean_apply_1(v_f_3867_, v___x_3873_);
v___x_3875_ = lean_unsigned_to_nat(1u);
v___x_3876_ = lean_nat_add(v_i_3869_, v___x_3875_);
lean_dec(v_i_3869_);
v___x_3877_ = lean_array_push(v_acc_3870_, v___x_3874_);
v_i_3869_ = v___x_3876_;
v_acc_3870_ = v___x_3877_;
goto _start;
}
else
{
lean_dec(v_i_3869_);
lean_dec(v_f_3867_);
return v_acc_3870_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg___boxed(lean_object* v_f_3879_, lean_object* v_as_3880_, lean_object* v_i_3881_, lean_object* v_acc_3882_){
_start:
{
lean_object* v_res_3883_; 
v_res_3883_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_f_3879_, v_as_3880_, v_i_3881_, v_acc_3882_);
lean_dec_ref(v_as_3880_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_f_3884_, lean_object* v_as_3885_){
_start:
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3886_ = lean_unsigned_to_nat(0u);
v___x_3887_ = lean_array_get_size(v_as_3885_);
v___x_3888_ = lean_mk_empty_array_with_capacity(v___x_3887_);
v___x_3889_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_f_3884_, v_as_3885_, v___x_3886_, v___x_3888_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_f_3890_, lean_object* v_as_3891_){
_start:
{
lean_object* v_res_3892_; 
v_res_3892_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(v_f_3890_, v_as_3891_);
lean_dec_ref(v_as_3891_);
return v_res_3892_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_3893_, size_t v_sz_3894_, size_t v_i_3895_, lean_object* v_bs_3896_){
_start:
{
uint8_t v___x_3897_; 
v___x_3897_ = lean_usize_dec_lt(v_i_3895_, v_sz_3894_);
if (v___x_3897_ == 0)
{
lean_dec(v_f_3893_);
return v_bs_3896_;
}
else
{
lean_object* v_v_3898_; lean_object* v___x_3899_; lean_object* v_bs_x27_3900_; lean_object* v___y_3902_; 
v_v_3898_ = lean_array_uget(v_bs_3896_, v_i_3895_);
v___x_3899_ = lean_unsigned_to_nat(0u);
v_bs_x27_3900_ = lean_array_uset(v_bs_3896_, v_i_3895_, v___x_3899_);
switch(lean_obj_tag(v_v_3898_))
{
case 0:
{
lean_object* v_key_3907_; lean_object* v_val_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3916_; 
v_key_3907_ = lean_ctor_get(v_v_3898_, 0);
v_val_3908_ = lean_ctor_get(v_v_3898_, 1);
v_isSharedCheck_3916_ = !lean_is_exclusive(v_v_3898_);
if (v_isSharedCheck_3916_ == 0)
{
v___x_3910_ = v_v_3898_;
v_isShared_3911_ = v_isSharedCheck_3916_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_val_3908_);
lean_inc(v_key_3907_);
lean_dec(v_v_3898_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3916_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v___x_3912_; lean_object* v___x_3914_; 
lean_inc(v_f_3893_);
v___x_3912_ = lean_apply_1(v_f_3893_, v_val_3908_);
if (v_isShared_3911_ == 0)
{
lean_ctor_set(v___x_3910_, 1, v___x_3912_);
v___x_3914_ = v___x_3910_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v_key_3907_);
lean_ctor_set(v_reuseFailAlloc_3915_, 1, v___x_3912_);
v___x_3914_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
v___y_3902_ = v___x_3914_;
goto v___jp_3901_;
}
}
}
case 1:
{
lean_object* v_node_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3925_; 
v_node_3917_ = lean_ctor_get(v_v_3898_, 0);
v_isSharedCheck_3925_ = !lean_is_exclusive(v_v_3898_);
if (v_isSharedCheck_3925_ == 0)
{
v___x_3919_ = v_v_3898_;
v_isShared_3920_ = v_isSharedCheck_3925_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_node_3917_);
lean_dec(v_v_3898_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3925_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v___x_3921_; lean_object* v___x_3923_; 
lean_inc(v_f_3893_);
v___x_3921_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_3893_, v_node_3917_);
if (v_isShared_3920_ == 0)
{
lean_ctor_set(v___x_3919_, 0, v___x_3921_);
v___x_3923_ = v___x_3919_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v___x_3921_);
v___x_3923_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
v___y_3902_ = v___x_3923_;
goto v___jp_3901_;
}
}
}
default: 
{
lean_object* v___x_3926_; 
v___x_3926_ = lean_box(2);
v___y_3902_ = v___x_3926_;
goto v___jp_3901_;
}
}
v___jp_3901_:
{
size_t v___x_3903_; size_t v___x_3904_; lean_object* v___x_3905_; 
v___x_3903_ = ((size_t)1ULL);
v___x_3904_ = lean_usize_add(v_i_3895_, v___x_3903_);
v___x_3905_ = lean_array_uset(v_bs_x27_3900_, v_i_3895_, v___y_3902_);
v_i_3895_ = v___x_3904_;
v_bs_3896_ = v___x_3905_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(lean_object* v_f_3927_, lean_object* v_n_3928_){
_start:
{
if (lean_obj_tag(v_n_3928_) == 0)
{
lean_object* v_es_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3939_; 
v_es_3929_ = lean_ctor_get(v_n_3928_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v_n_3928_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3931_ = v_n_3928_;
v_isShared_3932_ = v_isSharedCheck_3939_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_es_3929_);
lean_dec(v_n_3928_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3939_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
size_t v_sz_3933_; size_t v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3937_; 
v_sz_3933_ = lean_array_size(v_es_3929_);
v___x_3934_ = ((size_t)0ULL);
v___x_3935_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3927_, v_sz_3933_, v___x_3934_, v_es_3929_);
if (v_isShared_3932_ == 0)
{
lean_ctor_set(v___x_3931_, 0, v___x_3935_);
v___x_3937_ = v___x_3931_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v___x_3935_);
v___x_3937_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
return v___x_3937_;
}
}
}
else
{
lean_object* v_ks_3940_; lean_object* v_vs_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3949_; 
v_ks_3940_ = lean_ctor_get(v_n_3928_, 0);
v_vs_3941_ = lean_ctor_get(v_n_3928_, 1);
v_isSharedCheck_3949_ = !lean_is_exclusive(v_n_3928_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3943_ = v_n_3928_;
v_isShared_3944_ = v_isSharedCheck_3949_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_vs_3941_);
lean_inc(v_ks_3940_);
lean_dec(v_n_3928_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3949_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v_val_3945_; lean_object* v___x_3947_; 
v_val_3945_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(v_f_3927_, v_vs_3941_);
lean_dec_ref(v_vs_3941_);
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 1, v_val_3945_);
v___x_3947_ = v___x_3943_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_ks_3940_);
lean_ctor_set(v_reuseFailAlloc_3948_, 1, v_val_3945_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
return v___x_3947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_3950_, lean_object* v_sz_3951_, lean_object* v_i_3952_, lean_object* v_bs_3953_){
_start:
{
size_t v_sz_boxed_3954_; size_t v_i_boxed_3955_; lean_object* v_res_3956_; 
v_sz_boxed_3954_ = lean_unbox_usize(v_sz_3951_);
lean_dec(v_sz_3951_);
v_i_boxed_3955_ = lean_unbox_usize(v_i_3952_);
lean_dec(v_i_3952_);
v_res_3956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3950_, v_sz_boxed_3954_, v_i_boxed_3955_, v_bs_3953_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(lean_object* v_pm_3957_, lean_object* v_f_3958_){
_start:
{
lean_object* v___f_3959_; lean_object* v___x_3960_; 
v___f_3959_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3959_, 0, v_f_3958_);
v___x_3960_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v___f_3959_, v_pm_3957_);
return v___x_3960_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId(lean_object* v_fvarId_3961_, lean_object* v_e_3962_, lean_object* v_lctx_3963_){
_start:
{
lean_object* v_lctx_3964_; lean_object* v_fvarIdToDecl_3965_; lean_object* v_decls_3966_; lean_object* v_auxDeclToFullName_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3977_; 
lean_inc(v_fvarId_3961_);
v_lctx_3964_ = lean_local_ctx_erase(v_lctx_3963_, v_fvarId_3961_);
v_fvarIdToDecl_3965_ = lean_ctor_get(v_lctx_3964_, 0);
v_decls_3966_ = lean_ctor_get(v_lctx_3964_, 1);
v_auxDeclToFullName_3967_ = lean_ctor_get(v_lctx_3964_, 2);
v_isSharedCheck_3977_ = !lean_is_exclusive(v_lctx_3964_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3969_ = v_lctx_3964_;
v_isShared_3970_ = v_isSharedCheck_3977_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_auxDeclToFullName_3967_);
lean_inc(v_decls_3966_);
lean_inc(v_fvarIdToDecl_3965_);
lean_dec(v_lctx_3964_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3977_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v___f_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3975_; 
lean_inc_ref(v_e_3962_);
lean_inc(v_fvarId_3961_);
v___f_3971_ = lean_alloc_closure((void*)(l_Lean_LocalContext_replaceFVarId___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3971_, 0, v_fvarId_3961_);
lean_closure_set(v___f_3971_, 1, v_e_3962_);
v___x_3972_ = l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(v_fvarIdToDecl_3965_, v___f_3971_);
v___x_3973_ = l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(v_fvarId_3961_, v_e_3962_, v_decls_3966_);
lean_dec_ref(v_e_3962_);
if (v_isShared_3970_ == 0)
{
lean_ctor_set(v___x_3969_, 1, v___x_3973_);
lean_ctor_set(v___x_3969_, 0, v___x_3972_);
v___x_3975_ = v___x_3969_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v___x_3972_);
lean_ctor_set(v_reuseFailAlloc_3976_, 1, v___x_3973_);
lean_ctor_set(v_reuseFailAlloc_3976_, 2, v_auxDeclToFullName_3967_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0(lean_object* v_00_u03b2_3978_, lean_object* v_00_u03c3_3979_, lean_object* v_pm_3980_, lean_object* v_f_3981_){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(v_pm_3980_, v_f_3981_);
return v___x_3982_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0___redArg(lean_object* v_pm_3983_, lean_object* v_f_3984_){
_start:
{
lean_object* v___x_3985_; 
v___x_3985_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_3984_, v_pm_3983_);
return v___x_3985_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0(lean_object* v_00_u03b2_3986_, lean_object* v_00_u03c3_3987_, lean_object* v_pm_3988_, lean_object* v_f_3989_){
_start:
{
lean_object* v___x_3990_; 
v___x_3990_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_3989_, v_pm_3988_);
return v___x_3990_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3991_, lean_object* v_00_u03b2_3992_, lean_object* v_00_u03c3_3993_, lean_object* v_f_3994_, lean_object* v_n_3995_){
_start:
{
lean_object* v___x_3996_; 
v___x_3996_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_3994_, v_n_3995_);
return v___x_3996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_3997_, lean_object* v_00_u03b2_3998_, lean_object* v_00_u03c3_3999_, lean_object* v_f_4000_, size_t v_sz_4001_, size_t v_i_4002_, lean_object* v_bs_4003_){
_start:
{
lean_object* v___x_4004_; 
v___x_4004_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(v_f_4000_, v_sz_4001_, v_i_4002_, v_bs_4003_);
return v___x_4004_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4005_, lean_object* v_00_u03b2_4006_, lean_object* v_00_u03c3_4007_, lean_object* v_f_4008_, lean_object* v_sz_4009_, lean_object* v_i_4010_, lean_object* v_bs_4011_){
_start:
{
size_t v_sz_boxed_4012_; size_t v_i_boxed_4013_; lean_object* v_res_4014_; 
v_sz_boxed_4012_ = lean_unbox_usize(v_sz_4009_);
lean_dec(v_sz_4009_);
v_i_boxed_4013_ = lean_unbox_usize(v_i_4010_);
lean_dec(v_i_4010_);
v_res_4014_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3(v_00_u03b1_4005_, v_00_u03b2_4006_, v_00_u03c3_4007_, v_f_4008_, v_sz_boxed_4012_, v_i_boxed_4013_, v_bs_4011_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_4015_, lean_object* v_00_u03b2_4016_, lean_object* v_f_4017_, lean_object* v_as_4018_){
_start:
{
lean_object* v___x_4019_; 
v___x_4019_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4017_, v_as_4018_);
return v___x_4019_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_4020_, lean_object* v_00_u03b2_4021_, lean_object* v_f_4022_, lean_object* v_as_4023_){
_start:
{
lean_object* v_res_4024_; 
v_res_4024_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_4020_, v_00_u03b2_4021_, v_f_4022_, v_as_4023_);
lean_dec_ref(v_as_4023_);
return v_res_4024_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object* v_00_u03b1_4025_, lean_object* v_00_u03b2_4026_, lean_object* v_f_4027_, lean_object* v_as_4028_, lean_object* v_i_4029_, lean_object* v_acc_4030_, lean_object* v_hle_4031_){
_start:
{
lean_object* v___x_4032_; 
v___x_4032_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_f_4027_, v_as_4028_, v_i_4029_, v_acc_4030_);
return v___x_4032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___boxed(lean_object* v_00_u03b1_4033_, lean_object* v_00_u03b2_4034_, lean_object* v_f_4035_, lean_object* v_as_4036_, lean_object* v_i_4037_, lean_object* v_acc_4038_, lean_object* v_hle_4039_){
_start:
{
lean_object* v_res_4040_; 
v_res_4040_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7(v_00_u03b1_4033_, v_00_u03b2_4034_, v_f_4035_, v_as_4036_, v_i_4037_, v_acc_4038_, v_hle_4039_);
lean_dec_ref(v_as_4036_);
return v_res_4040_;
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
