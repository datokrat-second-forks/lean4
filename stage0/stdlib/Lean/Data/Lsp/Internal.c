// Lean compiler output
// Module: Lean.Data.Lsp.Internal
// Imports: public import Lean.Data.Lsp.Basic public import Lean.Data.JsonRpc public import Lean.Data.DeclarationRange public import Init.Data.Array.GetLit import Init.Omega
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
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Except_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instFromJsonJson___lam__0(lean_object*);
lean_object* l_Lean_Array_fromJson_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_fromJson_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonRange_fromJson(lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_List_toJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_toJson___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
static const lean_string_object l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Lsp_instInhabitedImportInfo_default___closed__0 = (const lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instInhabitedImportInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Lsp_instInhabitedImportInfo_default___closed__1 = (const lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedImportInfo_default = (const lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedImportInfo = (const lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonImportInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonImportInfo___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonImportInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonImportInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonImportInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonImportInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonImportInfo = (const lean_object*)&l_Lean_Lsp_instToJsonImportInfo___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Expected array, got other JSON type"};
static const lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonImportInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonImportInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonImportInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonImportInfo = (const lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_const_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqRefIdent_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqRefIdent_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instBEqRefIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instBEqRefIdent_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instBEqRefIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instBEqRefIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instBEqRefIdent = (const lean_object*)&l_Lean_Lsp_instBEqRefIdent___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableRefIdent_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableRefIdent_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instHashableRefIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instHashableRefIdent_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instHashableRefIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instHashableRefIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instHashableRefIdent = (const lean_object*)&l_Lean_Lsp_instHashableRefIdent___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instInhabitedRefIdent_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value),((lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instInhabitedRefIdent_default___closed__0 = (const lean_object*)&l_Lean_Lsp_instInhabitedRefIdent_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedRefIdent_default = (const lean_object*)&l_Lean_Lsp_instInhabitedRefIdent_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedRefIdent = (const lean_object*)&l_Lean_Lsp_instInhabitedRefIdent_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Lsp_instOrdRefIdent_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instOrdRefIdent_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instOrdRefIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instOrdRefIdent_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instOrdRefIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instOrdRefIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instOrdRefIdent = (const lean_object*)&l_Lean_Lsp_instOrdRefIdent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_c_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_c_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_f_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_f_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__5_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8_value),LEAN_SCALAR_PTR_LITERAL(85, 67, 188, 79, 172, 243, 130, 138)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__9_value;
static const lean_array_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7_value),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__9_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__10_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__11_value;
static const lean_string_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(14, 215, 4, 153, 96, 18, 167, 14)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__13_value;
static const lean_array_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__7_value),((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__13_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__14_value)}};
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr = (const lean_object*)&l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_toJsonRepr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fromJsonRepr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_RefIdent_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_RefIdent_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_RefIdent_instFromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefIdent_instFromJson = (const lean_object*)&l_Lean_Lsp_RefIdent_instFromJson___closed__0_value;
static const lean_closure_object l_Lean_Lsp_RefIdent_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_RefIdent_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_RefIdent_instToJson___closed__0 = (const lean_object*)&l_Lean_Lsp_RefIdent_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefIdent_instToJson = (const lean_object*)&l_Lean_Lsp_RefIdent_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_ofDeclarationRanges(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_ofDeclarationRanges___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_range(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_range___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_selectionRange(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_selectionRange___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDeclInfo___lam__0(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonDeclInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonDeclInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonDeclInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonDeclInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonDeclInfo = (const lean_object*)&l_Lean_Lsp_instToJsonDeclInfo___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Expected list of length 8, not length "};
static const lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Expected list"};
static const lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonDeclInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonDeclInfo___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_instFromJsonDeclInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonDeclInfo = (const lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instEmptyCollection;
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_Decls_insertMany_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_insertMany(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_Decls_toList_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_Decls_toList_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_toList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_toList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instToJson___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instToJson___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instToJson___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_Decls_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_Decls_instToJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Decls_instToJson___closed__0 = (const lean_object*)&l_Lean_Lsp_Decls_instToJson___closed__0_value;
static const lean_closure_object l_Lean_Lsp_Decls_instToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_Decls_instToJson___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_Decls_instToJson___closed__0_value)} };
static const lean_object* l_Lean_Lsp_Decls_instToJson___closed__1 = (const lean_object*)&l_Lean_Lsp_Decls_instToJson___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_Decls_instToJson = (const lean_object*)&l_Lean_Lsp_Decls_instToJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_Decls_instFromJson___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Lsp_Decls_instFromJson___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instFromJson___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instFromJson___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_Decls_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_Decls_instFromJson___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__0_value;
static const lean_closure_object l_Lean_Lsp_Decls_instFromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__1_value;
static const lean_closure_object l_Lean_Lsp_Decls_instFromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__2_value;
static const lean_closure_object l_Lean_Lsp_Decls_instFromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__2___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__3_value;
static const lean_closure_object l_Lean_Lsp_Decls_instFromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__4_value;
static const lean_closure_object l_Lean_Lsp_Decls_instFromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_Decls_instFromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__5_value),((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__1_value)}};
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__6_value;
static const lean_closure_object l_Lean_Lsp_Decls_instFromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__7_value;
static const lean_ctor_object l_Lean_Lsp_Decls_instFromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__6_value),((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__7_value),((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__2_value),((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__3_value),((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__4_value)}};
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__8_value;
static const lean_closure_object l_Lean_Lsp_Decls_instFromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_bind, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_Decls_instFromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__8_value),((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__9_value)}};
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__10_value;
static const lean_closure_object l_Lean_Lsp_Decls_instFromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_Decls_instFromJson___lam__1, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__10_value),((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__0_value)} };
static const lean_object* l_Lean_Lsp_Decls_instFromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_Decls_instFromJson = (const lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__11_value;
static const lean_ctor_object l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instInhabitedImportInfo_default___closed__0_value)}};
static const lean_object* l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0 = (const lean_object*)&l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefInfo_instInhabitedLocation_default = (const lean_object*)&l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefInfo_instInhabitedLocation = (const lean_object*)&l_Lean_Lsp_RefInfo_instInhabitedLocation_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_range(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_range___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_parentDecl_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0_value;
static const lean_string_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "usages"};
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__2_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__3_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__4 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__4_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__5 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__5_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__6 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__6_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__7 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__7_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__8 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__8_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__2_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__3_value)}};
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__9 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__9_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__4_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__5_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__6_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__7_value)}};
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__10 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__10_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__8_value)}};
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__11 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRefInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRefInfo___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRefInfo___lam__2, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__1_value)} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__2 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__2_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__3 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__3_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_List_toJson, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__3_value)} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__4 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__4_value;
static const lean_closure_object l_Lean_Lsp_instToJsonRefInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRefInfo___lam__3, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__4_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__2_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__1_value)} };
static const lean_object* l_Lean_Lsp_instToJsonRefInfo___closed__5 = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonRefInfo = (const lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__5_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Expected list of length 4 or 5, not "};
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonRefInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__0_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__1_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__1_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__2_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Option_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__2_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__3_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__2_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__4_value;
static const lean_closure_object l_Lean_Lsp_instFromJsonRefInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonRefInfo___lam__1, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__3_value),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__4_value),((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__10_value),((lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__0_value)} };
static const lean_object* l_Lean_Lsp_instFromJsonRefInfo___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonRefInfo = (const lean_object*)&l_Lean_Lsp_instFromJsonRefInfo___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instEmptyCollection;
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_getD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_getD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_foldl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_ModuleRefs_toList_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_ModuleRefs_toList_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_toList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_toList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Lsp_ModuleRefs_toArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_ModuleRefs_toArray___closed__0 = (const lean_object*)&l_Lean_Lsp_ModuleRefs_toArray___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_toArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_ModuleRefs_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_ModuleRefs_instToJson___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__0_value)} };
static const lean_object* l_Lean_Lsp_ModuleRefs_instToJson___closed__0 = (const lean_object*)&l_Lean_Lsp_ModuleRefs_instToJson___closed__0_value;
static const lean_closure_object l_Lean_Lsp_ModuleRefs_instToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_ModuleRefs_instToJson___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Lsp_ModuleRefs_instToJson___closed__0_value),((lean_object*)&l_Lean_Lsp_instToJsonRefInfo___closed__0_value)} };
static const lean_object* l_Lean_Lsp_ModuleRefs_instToJson___closed__1 = (const lean_object*)&l_Lean_Lsp_ModuleRefs_instToJson___closed__1_value;
static const lean_closure_object l_Lean_Lsp_ModuleRefs_instToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_ModuleRefs_instToJson___lam__2___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_ModuleRefs_instToJson___closed__1_value)} };
static const lean_object* l_Lean_Lsp_ModuleRefs_instToJson___closed__2 = (const lean_object*)&l_Lean_Lsp_ModuleRefs_instToJson___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_ModuleRefs_instToJson = (const lean_object*)&l_Lean_Lsp_ModuleRefs_instToJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_ModuleRefs_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_ModuleRefs_instFromJson___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_ModuleRefs_instFromJson___closed__0_value;
static const lean_closure_object l_Lean_Lsp_ModuleRefs_instFromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_ModuleRefs_instFromJson___lam__1, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Lsp_ModuleRefs_instFromJson___closed__0_value)} };
static const lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_ModuleRefs_instFromJson___closed__1_value;
static const lean_closure_object l_Lean_Lsp_ModuleRefs_instFromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_ModuleRefs_instFromJson___lam__2, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Lsp_Decls_instFromJson___closed__10_value),((lean_object*)&l_Lean_Lsp_ModuleRefs_instFromJson___closed__1_value)} };
static const lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_ModuleRefs_instFromJson___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_ModuleRefs_instFromJson = (const lean_object*)&l_Lean_Lsp_ModuleRefs_instFromJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Lsp"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanILeanHeaderSetupInfoParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 71, 232, 96, 38, 120, 115, 9)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 68, 50, 73, 160, 48, 142, 108)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "isSetupFailure"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13_value),LEAN_SCALAR_PTR_LITERAL(120, 71, 255, 216, 122, 125, 37, 209)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "directImports"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18_value),LEAN_SCALAR_PTR_LITERAL(113, 107, 65, 139, 239, 150, 173, 242)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__19 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__19_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(lean_object*, lean_object*);
static const lean_array_object l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LeanIleanInfoParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 203, 234, 116, 96, 81, 39, 191)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "references"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 234, 189, 66, 81, 216, 208, 197)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decls"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11_value),LEAN_SCALAR_PTR_LITERAL(44, 160, 58, 0, 137, 124, 237, 95)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__12_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanIleanInfoParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIleanInfoParams___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanIleanInfoParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanIleanInfoParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanIleanInfoParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanIleanInfoParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanIleanInfoParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanIleanInfoParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanIleanInfoParams___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "importClosure"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanImportClosureParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(168, 46, 39, 145, 64, 232, 10, 239)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(237, 59, 80, 112, 20, 250, 24, 1)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanImportClosureParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanImportClosureParams___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanImportClosureParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanImportClosureParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanImportClosureParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanImportClosureParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "staleDependency"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanStaleDependencyParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(9, 219, 232, 96, 172, 178, 164, 179)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 114, 98, 202, 15, 244, 42, 22)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanStaleDependencyParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanStaleDependencyParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanStaleDependencyParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanStaleDependencyParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanStaleDependencyParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanStaleDependencyParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanStaleDependencyParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanStaleDependencyParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_allExcept_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_allExcept_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_renamed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_renamed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0(lean_object*);
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "renamed"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "allExcept"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__4_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__3_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(29, 171, 189, 33, 127, 223, 44, 88)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__5_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "exceptions"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(192, 220, 58, 79, 173, 93, 125, 104)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__7_value;
static const lean_array_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__5_value),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__7_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__8 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__8_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__8_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__9_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "from"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10_value),LEAN_SCALAR_PTR_LITERAL(51, 132, 19, 107, 10, 182, 190, 14)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__11_value;
static const lean_string_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "to"};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12_value),LEAN_SCALAR_PTR_LITERAL(203, 162, 13, 215, 195, 228, 231, 139)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__13 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__13_value;
static const lean_array_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__11_value),((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__13_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__14_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonOpenNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonOpenNamespace_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonOpenNamespace = (const lean_object*)&l_Lean_Lsp_instFromJsonOpenNamespace___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonOpenNamespace_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonOpenNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonOpenNamespace_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonOpenNamespace___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonOpenNamespace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonOpenNamespace = (const lean_object*)&l_Lean_Lsp_instToJsonOpenNamespace___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "identifier"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LeanModuleQuery"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(173, 124, 7, 179, 233, 81, 44, 231)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 30, 163, 185, 99, 139, 146, 235)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "openNamespaces"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(84, 10, 255, 246, 172, 0, 163, 196)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanModuleQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanModuleQuery___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanModuleQuery_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanModuleQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanModuleQuery_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanModuleQuery___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanModuleQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanModuleQuery = (const lean_object*)&l_Lean_Lsp_instToJsonLeanModuleQuery___closed__0_value;
static const lean_string_object l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "a request id needs to be a number or a string"};
static const lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__0 = (const lean_object*)&l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__0_value)}};
static const lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__1 = (const lean_object*)&l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "sourceRequestID"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "LeanQueryModuleParams"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 1, 217, 58, 51, 228, 82, 97)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(235, 152, 164, 59, 36, 1, 26, 169)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "queries"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(67, 69, 35, 158, 6, 191, 84, 222)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanQueryModuleParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleParams___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleParams_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanQueryModuleParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanQueryModuleParams_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleParams___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanQueryModuleParams___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleParams = (const lean_object*)&l_Lean_Lsp_instToJsonLeanQueryModuleParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LeanIdentifier"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(186, 34, 237, 78, 120, 102, 249, 11)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(119, 13, 181, 135, 119, 7, 66, 71)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "decl"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9_value),LEAN_SCALAR_PTR_LITERAL(122, 197, 108, 116, 168, 105, 88, 191)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "isExactMatch"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14_value),LEAN_SCALAR_PTR_LITERAL(184, 254, 2, 171, 133, 246, 126, 123)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__15_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanIdentifier___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanIdentifier_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanIdentifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanIdentifier_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanIdentifier___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanIdentifier___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanIdentifier = (const lean_object*)&l_Lean_Lsp_instToJsonLeanIdentifier___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "queryResults"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanQueryModuleResponse"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(43, 4, 13, 130, 17, 133, 248, 128)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(208, 102, 170, 178, 152, 193, 48, 141)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanQueryModuleResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanQueryModuleResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanQueryModuleResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse = (const lean_object*)&l_Lean_Lsp_instToJsonLeanQueryModuleResponse___closed__0_value;
static const lean_array_object l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0 = (const lean_object*)&l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default = (const lean_object*)&l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instInhabitedLeanQueryModuleResponse = (const lean_object*)&l_Lean_Lsp_instInhabitedLeanQueryModuleResponse_default___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LeanDeclIdent"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 27, 219, 221, 117, 72, 148, 223)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanDeclIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanDeclIdent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanDeclIdent_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanDeclIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanDeclIdent_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanDeclIdent___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanDeclIdent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanDeclIdent = (const lean_object*)&l_Lean_Lsp_instToJsonLeanDeclIdent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "originSelectionRange"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LeanLocationLink"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__1_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 104, 224, 237, 184, 44, 1, 94)}};
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 146, 238, 203, 212, 254, 171, 194)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "originSelectionRange\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(113, 74, 194, 55, 146, 231, 63, 35)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "targetUri"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10_value),LEAN_SCALAR_PTR_LITERAL(175, 177, 170, 233, 220, 50, 208, 212)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__11 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "targetRange"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15_value),LEAN_SCALAR_PTR_LITERAL(45, 64, 248, 134, 128, 146, 245, 203)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__16 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__16_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "targetSelectionRange"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20_value),LEAN_SCALAR_PTR_LITERAL(152, 179, 191, 7, 212, 29, 154, 211)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__21 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__21_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25_value;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ident\?"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__26 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__26_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__26_value),LEAN_SCALAR_PTR_LITERAL(48, 54, 166, 138, 27, 67, 37, 23)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__27 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__27_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30;
static const lean_string_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isDefault"};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31_value),LEAN_SCALAR_PTR_LITERAL(109, 30, 229, 216, 225, 52, 237, 248)}};
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__32 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__32_value;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34;
static lean_once_cell_t l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonLeanLocationLink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink = (const lean_object*)&l_Lean_Lsp_instFromJsonLeanLocationLink___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanLocationLink_toJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonLeanLocationLink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonLeanLocationLink_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonLeanLocationLink___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonLeanLocationLink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonLeanLocationLink = (const lean_object*)&l_Lean_Lsp_instToJsonLeanLocationLink___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonImportInfo___lam__0(lean_object* v_info_7_){
_start:
{
lean_object* v_module_8_; uint8_t v_isPrivate_9_; uint8_t v_isAll_10_; uint8_t v_isMeta_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_module_8_ = lean_ctor_get(v_info_7_, 0);
v_isPrivate_9_ = lean_ctor_get_uint8(v_info_7_, sizeof(void*)*1);
v_isAll_10_ = lean_ctor_get_uint8(v_info_7_, sizeof(void*)*1 + 1);
v_isMeta_11_ = lean_ctor_get_uint8(v_info_7_, sizeof(void*)*1 + 2);
lean_inc_ref(v_module_8_);
v___x_12_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_12_, 0, v_module_8_);
v___x_13_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_13_, 0, v_isPrivate_9_);
v___x_14_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_14_, 0, v_isAll_10_);
v___x_15_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_15_, 0, v_isMeta_11_);
v___x_16_ = lean_unsigned_to_nat(4u);
v___x_17_ = lean_mk_empty_array_with_capacity(v___x_16_);
v___x_18_ = lean_array_push(v___x_17_, v___x_12_);
v___x_19_ = lean_array_push(v___x_18_, v___x_13_);
v___x_20_ = lean_array_push(v___x_19_, v___x_14_);
v___x_21_ = lean_array_push(v___x_20_, v___x_15_);
v___x_22_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonImportInfo___lam__0___boxed(lean_object* v_info_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Lsp_instToJsonImportInfo___lam__0(v_info_23_);
lean_dec_ref(v_info_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0(lean_object* v_x_30_){
_start:
{
if (lean_obj_tag(v_x_30_) == 4)
{
lean_object* v_elems_33_; lean_object* v___x_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v_elems_33_ = lean_ctor_get(v_x_30_, 0);
v___x_34_ = lean_array_get_size(v_elems_33_);
v___x_35_ = lean_unsigned_to_nat(4u);
v___x_36_ = lean_nat_dec_eq(v___x_34_, v___x_35_);
if (v___x_36_ == 0)
{
goto v___jp_31_;
}
else
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_unsigned_to_nat(0u);
v___x_38_ = lean_array_fget_borrowed(v_elems_33_, v___x_37_);
lean_inc(v___x_38_);
v___x_39_ = l_Lean_Json_getStr_x3f(v___x_38_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_object* v_a_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_47_; 
v_a_40_ = lean_ctor_get(v___x_39_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_47_ == 0)
{
v___x_42_ = v___x_39_;
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_a_40_);
lean_dec(v___x_39_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_45_; 
if (v_isShared_43_ == 0)
{
v___x_45_ = v___x_42_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_a_40_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
else
{
lean_object* v_a_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_a_48_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_a_48_);
lean_dec_ref_known(v___x_39_, 1);
v___x_49_ = lean_unsigned_to_nat(1u);
v___x_50_ = lean_array_fget_borrowed(v_elems_33_, v___x_49_);
v___x_51_ = l_Lean_Json_getBool_x3f(v___x_50_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_a_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_59_; 
lean_dec(v_a_48_);
v_a_52_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_59_ == 0)
{
v___x_54_ = v___x_51_;
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_a_52_);
lean_dec(v___x_51_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_57_; 
if (v_isShared_55_ == 0)
{
v___x_57_ = v___x_54_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_a_52_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
else
{
lean_object* v_a_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v_a_60_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_a_60_);
lean_dec_ref_known(v___x_51_, 1);
v___x_61_ = lean_unsigned_to_nat(2u);
v___x_62_ = lean_array_fget_borrowed(v_elems_33_, v___x_61_);
v___x_63_ = l_Lean_Json_getBool_x3f(v___x_62_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v_a_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_71_; 
lean_dec(v_a_60_);
lean_dec(v_a_48_);
v_a_64_ = lean_ctor_get(v___x_63_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_71_ == 0)
{
v___x_66_ = v___x_63_;
v_isShared_67_ = v_isSharedCheck_71_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_a_64_);
lean_dec(v___x_63_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_71_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_69_; 
if (v_isShared_67_ == 0)
{
v___x_69_ = v___x_66_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_a_64_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
else
{
lean_object* v_a_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_a_72_ = lean_ctor_get(v___x_63_, 0);
lean_inc(v_a_72_);
lean_dec_ref_known(v___x_63_, 1);
v___x_73_ = lean_unsigned_to_nat(3u);
v___x_74_ = lean_array_fget_borrowed(v_elems_33_, v___x_73_);
v___x_75_ = l_Lean_Json_getBool_x3f(v___x_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
lean_dec(v_a_72_);
lean_dec(v_a_60_);
lean_dec(v_a_48_);
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
else
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_95_; 
v_a_84_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_95_ == 0)
{
v___x_86_ = v___x_75_;
v_isShared_87_ = v_isSharedCheck_95_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_75_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_95_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; uint8_t v___x_89_; uint8_t v___x_90_; uint8_t v___x_91_; lean_object* v___x_93_; 
v___x_88_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_88_, 0, v_a_48_);
v___x_89_ = lean_unbox(v_a_60_);
lean_dec(v_a_60_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*1, v___x_89_);
v___x_90_ = lean_unbox(v_a_72_);
lean_dec(v_a_72_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*1 + 1, v___x_90_);
v___x_91_ = lean_unbox(v_a_84_);
lean_dec(v_a_84_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*1 + 2, v___x_91_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_88_);
v___x_93_ = v___x_86_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_88_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
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
goto v___jp_31_;
}
v___jp_31_:
{
lean_object* v___x_32_; 
v___x_32_ = ((lean_object*)(l_Lean_Lsp_instFromJsonImportInfo___lam__0___closed__1));
return v___x_32_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonImportInfo___lam__0___boxed(lean_object* v_x_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_Lsp_instFromJsonImportInfo___lam__0(v_x_96_);
lean_dec(v_x_96_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorIdx(lean_object* v_x_100_){
_start:
{
if (lean_obj_tag(v_x_100_) == 0)
{
lean_object* v___x_101_; 
v___x_101_ = lean_unsigned_to_nat(0u);
return v___x_101_;
}
else
{
lean_object* v___x_102_; 
v___x_102_ = lean_unsigned_to_nat(1u);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorIdx___boxed(lean_object* v_x_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Lsp_RefIdent_ctorIdx(v_x_103_);
lean_dec_ref(v_x_103_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim___redArg(lean_object* v_t_105_, lean_object* v_k_106_){
_start:
{
lean_object* v_moduleName_107_; lean_object* v_identName_108_; lean_object* v___x_109_; 
v_moduleName_107_ = lean_ctor_get(v_t_105_, 0);
lean_inc_ref(v_moduleName_107_);
v_identName_108_ = lean_ctor_get(v_t_105_, 1);
lean_inc_ref(v_identName_108_);
lean_dec_ref(v_t_105_);
v___x_109_ = lean_apply_2(v_k_106_, v_moduleName_107_, v_identName_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim(lean_object* v_motive_110_, lean_object* v_ctorIdx_111_, lean_object* v_t_112_, lean_object* v_h_113_, lean_object* v_k_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_112_, v_k_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_ctorElim___boxed(lean_object* v_motive_116_, lean_object* v_ctorIdx_117_, lean_object* v_t_118_, lean_object* v_h_119_, lean_object* v_k_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lean_Lsp_RefIdent_ctorElim(v_motive_116_, v_ctorIdx_117_, v_t_118_, v_h_119_, v_k_120_);
lean_dec(v_ctorIdx_117_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_const_elim___redArg(lean_object* v_t_122_, lean_object* v_const_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_122_, v_const_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_const_elim(lean_object* v_motive_125_, lean_object* v_t_126_, lean_object* v_h_127_, lean_object* v_const_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_126_, v_const_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fvar_elim___redArg(lean_object* v_t_130_, lean_object* v_fvar_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_130_, v_fvar_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fvar_elim(lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_fvar_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Lsp_RefIdent_ctorElim___redArg(v_t_134_, v_fvar_136_);
return v___x_137_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqRefIdent_beq(lean_object* v_x_138_, lean_object* v_x_139_){
_start:
{
lean_object* v_a_141_; lean_object* v_a_142_; lean_object* v_b_143_; lean_object* v_b_144_; 
if (lean_obj_tag(v_x_138_) == 0)
{
if (lean_obj_tag(v_x_139_) == 0)
{
lean_object* v_moduleName_147_; lean_object* v_identName_148_; lean_object* v_moduleName_149_; lean_object* v_identName_150_; 
v_moduleName_147_ = lean_ctor_get(v_x_138_, 0);
v_identName_148_ = lean_ctor_get(v_x_138_, 1);
v_moduleName_149_ = lean_ctor_get(v_x_139_, 0);
v_identName_150_ = lean_ctor_get(v_x_139_, 1);
v_a_141_ = v_moduleName_147_;
v_a_142_ = v_identName_148_;
v_b_143_ = v_moduleName_149_;
v_b_144_ = v_identName_150_;
goto v___jp_140_;
}
else
{
uint8_t v___x_151_; 
v___x_151_ = 0;
return v___x_151_;
}
}
else
{
if (lean_obj_tag(v_x_139_) == 1)
{
lean_object* v_moduleName_152_; lean_object* v_id_153_; lean_object* v_moduleName_154_; lean_object* v_id_155_; 
v_moduleName_152_ = lean_ctor_get(v_x_138_, 0);
v_id_153_ = lean_ctor_get(v_x_138_, 1);
v_moduleName_154_ = lean_ctor_get(v_x_139_, 0);
v_id_155_ = lean_ctor_get(v_x_139_, 1);
v_a_141_ = v_moduleName_152_;
v_a_142_ = v_id_153_;
v_b_143_ = v_moduleName_154_;
v_b_144_ = v_id_155_;
goto v___jp_140_;
}
else
{
uint8_t v___x_156_; 
v___x_156_ = 0;
return v___x_156_;
}
}
v___jp_140_:
{
uint8_t v___x_145_; 
v___x_145_ = lean_string_dec_eq(v_a_141_, v_b_143_);
if (v___x_145_ == 0)
{
return v___x_145_;
}
else
{
uint8_t v___x_146_; 
v___x_146_ = lean_string_dec_eq(v_a_142_, v_b_144_);
return v___x_146_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqRefIdent_beq___boxed(lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = l_Lean_Lsp_instBEqRefIdent_beq(v_x_157_, v_x_158_);
lean_dec_ref(v_x_158_);
lean_dec_ref(v_x_157_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableRefIdent_hash(lean_object* v_x_163_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
lean_object* v_moduleName_164_; lean_object* v_identName_165_; uint64_t v___x_166_; uint64_t v___x_167_; uint64_t v___x_168_; uint64_t v___x_169_; uint64_t v___x_170_; 
v_moduleName_164_ = lean_ctor_get(v_x_163_, 0);
v_identName_165_ = lean_ctor_get(v_x_163_, 1);
v___x_166_ = 0ULL;
v___x_167_ = lean_string_hash(v_moduleName_164_);
v___x_168_ = lean_uint64_mix_hash(v___x_166_, v___x_167_);
v___x_169_ = lean_string_hash(v_identName_165_);
v___x_170_ = lean_uint64_mix_hash(v___x_168_, v___x_169_);
return v___x_170_;
}
else
{
lean_object* v_moduleName_171_; lean_object* v_id_172_; uint64_t v___x_173_; uint64_t v___x_174_; uint64_t v___x_175_; uint64_t v___x_176_; uint64_t v___x_177_; 
v_moduleName_171_ = lean_ctor_get(v_x_163_, 0);
v_id_172_ = lean_ctor_get(v_x_163_, 1);
v___x_173_ = 1ULL;
v___x_174_ = lean_string_hash(v_moduleName_171_);
v___x_175_ = lean_uint64_mix_hash(v___x_173_, v___x_174_);
v___x_176_ = lean_string_hash(v_id_172_);
v___x_177_ = lean_uint64_mix_hash(v___x_175_, v___x_176_);
return v___x_177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableRefIdent_hash___boxed(lean_object* v_x_178_){
_start:
{
uint64_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = l_Lean_Lsp_instHashableRefIdent_hash(v_x_178_);
lean_dec_ref(v_x_178_);
v_r_180_ = lean_box_uint64(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instOrdRefIdent_ord(lean_object* v_x_187_, lean_object* v_x_188_){
_start:
{
lean_object* v_a_190_; lean_object* v_a_191_; lean_object* v_b_192_; lean_object* v_b_193_; 
if (lean_obj_tag(v_x_187_) == 0)
{
if (lean_obj_tag(v_x_188_) == 0)
{
lean_object* v_moduleName_196_; lean_object* v_identName_197_; lean_object* v_moduleName_198_; lean_object* v_identName_199_; 
v_moduleName_196_ = lean_ctor_get(v_x_187_, 0);
v_identName_197_ = lean_ctor_get(v_x_187_, 1);
v_moduleName_198_ = lean_ctor_get(v_x_188_, 0);
v_identName_199_ = lean_ctor_get(v_x_188_, 1);
v_a_190_ = v_moduleName_196_;
v_a_191_ = v_identName_197_;
v_b_192_ = v_moduleName_198_;
v_b_193_ = v_identName_199_;
goto v___jp_189_;
}
else
{
uint8_t v___x_200_; 
v___x_200_ = 0;
return v___x_200_;
}
}
else
{
if (lean_obj_tag(v_x_188_) == 0)
{
uint8_t v___x_201_; 
v___x_201_ = 2;
return v___x_201_;
}
else
{
lean_object* v_moduleName_202_; lean_object* v_id_203_; lean_object* v_moduleName_204_; lean_object* v_id_205_; 
v_moduleName_202_ = lean_ctor_get(v_x_187_, 0);
v_id_203_ = lean_ctor_get(v_x_187_, 1);
v_moduleName_204_ = lean_ctor_get(v_x_188_, 0);
v_id_205_ = lean_ctor_get(v_x_188_, 1);
v_a_190_ = v_moduleName_202_;
v_a_191_ = v_id_203_;
v_b_192_ = v_moduleName_204_;
v_b_193_ = v_id_205_;
goto v___jp_189_;
}
}
v___jp_189_:
{
uint8_t v___x_194_; 
v___x_194_ = lean_string_compare(v_a_190_, v_b_192_);
if (v___x_194_ == 1)
{
uint8_t v___x_195_; 
v___x_195_ = lean_string_compare(v_a_191_, v_b_193_);
if (v___x_195_ == 1)
{
return v___x_195_;
}
else
{
return v___x_195_;
}
}
else
{
return v___x_194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instOrdRefIdent_ord___boxed(lean_object* v_x_206_, lean_object* v_x_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_Lean_Lsp_instOrdRefIdent_ord(v_x_206_, v_x_207_);
lean_dec_ref(v_x_207_);
lean_dec_ref(v_x_206_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx(lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v___x_213_; 
v___x_213_ = lean_unsigned_to_nat(0u);
return v___x_213_;
}
else
{
lean_object* v___x_214_; 
v___x_214_ = lean_unsigned_to_nat(1u);
return v___x_214_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx___boxed(lean_object* v_x_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorIdx(v_x_215_);
lean_dec_ref(v_x_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(lean_object* v_t_217_, lean_object* v_k_218_){
_start:
{
lean_object* v_m_219_; lean_object* v_n_220_; lean_object* v___x_221_; 
v_m_219_ = lean_ctor_get(v_t_217_, 0);
lean_inc_ref(v_m_219_);
v_n_220_ = lean_ctor_get(v_t_217_, 1);
lean_inc_ref(v_n_220_);
lean_dec_ref(v_t_217_);
v___x_221_ = lean_apply_2(v_k_218_, v_m_219_, v_n_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim(lean_object* v_motive_222_, lean_object* v_ctorIdx_223_, lean_object* v_t_224_, lean_object* v_h_225_, lean_object* v_k_226_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_224_, v_k_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___boxed(lean_object* v_motive_228_, lean_object* v_ctorIdx_229_, lean_object* v_t_230_, lean_object* v_h_231_, lean_object* v_k_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim(v_motive_228_, v_ctorIdx_229_, v_t_230_, v_h_231_, v_k_232_);
lean_dec(v_ctorIdx_229_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_c_elim___redArg(lean_object* v_t_234_, lean_object* v_c_235_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_234_, v_c_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_c_elim(lean_object* v_motive_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_c_240_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_238_, v_c_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_f_elim___redArg(lean_object* v_t_242_, lean_object* v_f_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_242_, v_f_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_RefIdentJsonRepr_f_elim(lean_object* v_motive_245_, lean_object* v_t_246_, lean_object* v_h_247_, lean_object* v_f_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lean_Lsp_RefIdent_RefIdentJsonRepr_ctorElim___redArg(v_t_246_, v_f_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson(lean_object* v_json_283_){
_start:
{
lean_object* v___x_284_; 
lean_inc(v_json_283_);
v___x_284_ = l_Lean_Json_getTag_x3f(v_json_283_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v___x_285_; 
lean_dec(v_json_283_);
v___x_285_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__1));
return v___x_285_;
}
else
{
lean_object* v_val_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; 
v_val_286_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_val_286_);
lean_dec_ref_known(v___x_284_, 1);
v___x_287_ = lean_box(0);
v___x_288_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2));
v___x_289_ = lean_string_dec_eq(v_val_286_, v___x_288_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3));
v___x_291_ = lean_string_dec_eq(v_val_286_, v___x_290_);
lean_dec(v_val_286_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; 
lean_dec(v_json_283_);
v___x_292_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__5));
return v___x_292_;
}
else
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_293_ = lean_unsigned_to_nat(2u);
v___x_294_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__11));
v___x_295_ = l_Lean_Json_parseCtorFields(v_json_283_, v___x_290_, v___x_293_, v___x_294_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_295_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_295_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
else
{
lean_object* v_a_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_a_304_ = lean_ctor_get(v___x_295_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v___x_295_, 1);
v___x_305_ = lean_unsigned_to_nat(0u);
v___x_306_ = lean_array_get_borrowed(v___x_287_, v_a_304_, v___x_305_);
lean_inc(v___x_306_);
v___x_307_ = l_Lean_Json_getStr_x3f(v___x_306_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec(v_a_304_);
v_a_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_a_316_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_316_);
lean_dec_ref_known(v___x_307_, 1);
v___x_317_ = lean_unsigned_to_nat(1u);
v___x_318_ = lean_array_get(v___x_287_, v_a_304_, v___x_317_);
lean_dec(v_a_304_);
v___x_319_ = l_Lean_Json_getStr_x3f(v___x_318_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec(v_a_316_);
v_a_320_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_336_; 
v_a_328_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_336_ == 0)
{
v___x_330_ = v___x_319_;
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_319_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v___x_334_; 
v___x_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_332_, 0, v_a_316_);
lean_ctor_set(v___x_332_, 1, v_a_328_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_332_);
v___x_334_ = v___x_330_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_332_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
lean_dec(v_val_286_);
v___x_337_ = lean_unsigned_to_nat(2u);
v___x_338_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__15));
v___x_339_ = l_Lean_Json_parseCtorFields(v_json_283_, v___x_288_, v___x_337_, v___x_338_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_339_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_339_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_a_348_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_a_348_);
lean_dec_ref_known(v___x_339_, 1);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_array_get_borrowed(v___x_287_, v_a_348_, v___x_349_);
lean_inc(v___x_350_);
v___x_351_ = l_Lean_Json_getStr_x3f(v___x_350_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_dec(v_a_348_);
v_a_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v_a_360_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v___x_351_, 1);
v___x_361_ = lean_unsigned_to_nat(1u);
v___x_362_ = lean_array_get(v___x_287_, v_a_348_, v___x_361_);
lean_dec(v_a_348_);
v___x_363_ = l_Lean_Json_getStr_x3f(v___x_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec(v_a_360_);
v_a_364_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_363_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_363_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_380_; 
v_a_372_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_380_ == 0)
{
v___x_374_ = v___x_363_;
v_isShared_375_ = v_isSharedCheck_380_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_363_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_380_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_376_, 0, v_a_360_);
lean_ctor_set(v___x_376_, 1, v_a_372_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_376_);
v___x_378_ = v___x_374_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr_toJson(lean_object* v_x_383_){
_start:
{
if (lean_obj_tag(v_x_383_) == 0)
{
lean_object* v_m_384_; lean_object* v_n_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_405_; 
v_m_384_ = lean_ctor_get(v_x_383_, 0);
v_n_385_ = lean_ctor_get(v_x_383_, 1);
v_isSharedCheck_405_ = !lean_is_exclusive(v_x_383_);
if (v_isSharedCheck_405_ == 0)
{
v___x_387_ = v_x_383_;
v_isShared_388_ = v_isSharedCheck_405_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_n_385_);
lean_inc(v_m_384_);
lean_dec(v_x_383_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_405_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_389_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__3));
v___x_390_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6));
v___x_391_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_391_, 0, v_m_384_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 1, v___x_391_);
lean_ctor_set(v___x_387_, 0, v___x_390_);
v___x_393_ = v___x_387_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v___x_391_);
v___x_393_ = v_reuseFailAlloc_404_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_394_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__8));
v___x_395_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_395_, 0, v_n_385_);
v___x_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_394_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
v___x_397_ = lean_box(0);
v___x_398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
v___x_399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_393_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = l_Lean_Json_mkObj(v___x_399_);
lean_dec_ref_known(v___x_399_, 2);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_389_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set(v___x_402_, 1, v___x_397_);
v___x_403_ = l_Lean_Json_mkObj(v___x_402_);
lean_dec_ref_known(v___x_402_, 2);
return v___x_403_;
}
}
}
else
{
lean_object* v_m_406_; lean_object* v_i_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_427_; 
v_m_406_ = lean_ctor_get(v_x_383_, 0);
v_i_407_ = lean_ctor_get(v_x_383_, 1);
v_isSharedCheck_427_ = !lean_is_exclusive(v_x_383_);
if (v_isSharedCheck_427_ == 0)
{
v___x_409_ = v_x_383_;
v_isShared_410_ = v_isSharedCheck_427_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_i_407_);
lean_inc(v_m_406_);
lean_dec(v_x_383_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_427_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_411_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__2));
v___x_412_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__6));
v___x_413_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_413_, 0, v_m_406_);
if (v_isShared_410_ == 0)
{
lean_ctor_set_tag(v___x_409_, 0);
lean_ctor_set(v___x_409_, 1, v___x_413_);
lean_ctor_set(v___x_409_, 0, v___x_412_);
v___x_415_ = v___x_409_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_412_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v___x_413_);
v___x_415_ = v_reuseFailAlloc_426_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_416_ = ((lean_object*)(l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson___closed__12));
v___x_417_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_417_, 0, v_i_407_);
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = lean_box(0);
v___x_420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
v___x_421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_415_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = l_Lean_Json_mkObj(v___x_421_);
lean_dec_ref_known(v___x_421_, 2);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_411_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v___x_419_);
v___x_425_ = l_Lean_Json_mkObj(v___x_424_);
lean_dec_ref_known(v___x_424_, 2);
return v___x_425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_toJsonRepr(lean_object* v_x_430_){
_start:
{
if (lean_obj_tag(v_x_430_) == 0)
{
lean_object* v_moduleName_431_; lean_object* v_identName_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_moduleName_431_ = lean_ctor_get(v_x_430_, 0);
v_identName_432_ = lean_ctor_get(v_x_430_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_x_430_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v_x_430_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_identName_432_);
lean_inc(v_moduleName_431_);
lean_dec(v_x_430_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_moduleName_431_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_identName_432_);
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
lean_object* v_moduleName_440_; lean_object* v_id_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
v_moduleName_440_ = lean_ctor_get(v_x_430_, 0);
v_id_441_ = lean_ctor_get(v_x_430_, 1);
v_isSharedCheck_448_ = !lean_is_exclusive(v_x_430_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v_x_430_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_id_441_);
lean_inc(v_moduleName_440_);
lean_dec(v_x_430_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_moduleName_440_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v_id_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fromJsonRepr(lean_object* v_x_449_){
_start:
{
if (lean_obj_tag(v_x_449_) == 0)
{
lean_object* v_m_450_; lean_object* v_n_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_m_450_ = lean_ctor_get(v_x_449_, 0);
v_n_451_ = lean_ctor_get(v_x_449_, 1);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_449_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v_x_449_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_n_451_);
lean_inc(v_m_450_);
lean_dec(v_x_449_);
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
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_m_450_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_n_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
else
{
lean_object* v_m_459_; lean_object* v_i_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
v_m_459_ = lean_ctor_get(v_x_449_, 0);
v_i_460_ = lean_ctor_get(v_x_449_, 1);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_449_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v_x_449_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_i_460_);
lean_inc(v_m_459_);
lean_dec(v_x_449_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_m_459_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_i_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_fromJson_x3f(lean_object* v_s_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_Lsp_RefIdent_instFromJsonRefIdentJsonRepr_fromJson(v_s_468_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___x_469_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_469_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
else
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_486_; 
v_a_478_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_486_ == 0)
{
v___x_480_ = v___x_469_;
v_isShared_481_ = v_isSharedCheck_486_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_469_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_486_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_482_ = l_Lean_Lsp_RefIdent_fromJsonRepr(v_a_478_);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 0, v___x_482_);
v___x_484_ = v___x_480_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_482_);
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
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefIdent_toJson(lean_object* v_id_487_){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = l_Lean_Lsp_RefIdent_toJsonRepr(v_id_487_);
v___x_489_ = l_Lean_Lsp_RefIdent_instToJsonRefIdentJsonRepr_toJson(v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_ofDeclarationRanges(lean_object* v_r_494_){
_start:
{
lean_object* v_range_495_; lean_object* v_pos_496_; lean_object* v_endPos_497_; lean_object* v_selectionRange_498_; lean_object* v_pos_499_; lean_object* v_endPos_500_; lean_object* v_charUtf16_501_; lean_object* v_endCharUtf16_502_; lean_object* v_line_503_; lean_object* v_line_504_; lean_object* v_charUtf16_505_; lean_object* v_endCharUtf16_506_; lean_object* v_line_507_; lean_object* v_line_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_range_495_ = lean_ctor_get(v_r_494_, 0);
v_pos_496_ = lean_ctor_get(v_range_495_, 0);
v_endPos_497_ = lean_ctor_get(v_range_495_, 2);
v_selectionRange_498_ = lean_ctor_get(v_r_494_, 1);
v_pos_499_ = lean_ctor_get(v_selectionRange_498_, 0);
v_endPos_500_ = lean_ctor_get(v_selectionRange_498_, 2);
v_charUtf16_501_ = lean_ctor_get(v_range_495_, 1);
v_endCharUtf16_502_ = lean_ctor_get(v_range_495_, 3);
v_line_503_ = lean_ctor_get(v_pos_496_, 0);
v_line_504_ = lean_ctor_get(v_endPos_497_, 0);
v_charUtf16_505_ = lean_ctor_get(v_selectionRange_498_, 1);
v_endCharUtf16_506_ = lean_ctor_get(v_selectionRange_498_, 3);
v_line_507_ = lean_ctor_get(v_pos_499_, 0);
v_line_508_ = lean_ctor_get(v_endPos_500_, 0);
v___x_509_ = lean_unsigned_to_nat(1u);
v___x_510_ = lean_nat_sub(v_line_503_, v___x_509_);
v___x_511_ = lean_nat_sub(v_line_504_, v___x_509_);
v___x_512_ = lean_nat_sub(v_line_507_, v___x_509_);
v___x_513_ = lean_nat_sub(v_line_508_, v___x_509_);
lean_inc(v_endCharUtf16_506_);
lean_inc(v_charUtf16_505_);
lean_inc(v_endCharUtf16_502_);
lean_inc(v_charUtf16_501_);
v___x_514_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_514_, 0, v___x_510_);
lean_ctor_set(v___x_514_, 1, v_charUtf16_501_);
lean_ctor_set(v___x_514_, 2, v___x_511_);
lean_ctor_set(v___x_514_, 3, v_endCharUtf16_502_);
lean_ctor_set(v___x_514_, 4, v___x_512_);
lean_ctor_set(v___x_514_, 5, v_charUtf16_505_);
lean_ctor_set(v___x_514_, 6, v___x_513_);
lean_ctor_set(v___x_514_, 7, v_endCharUtf16_506_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_ofDeclarationRanges___boxed(lean_object* v_r_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_Lsp_DeclInfo_ofDeclarationRanges(v_r_515_);
lean_dec_ref(v_r_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_range(lean_object* v_i_517_){
_start:
{
lean_object* v_rangeStartPosLine_518_; lean_object* v_rangeStartPosCharacter_519_; lean_object* v_rangeEndPosLine_520_; lean_object* v_rangeEndPosCharacter_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v_rangeStartPosLine_518_ = lean_ctor_get(v_i_517_, 0);
v_rangeStartPosCharacter_519_ = lean_ctor_get(v_i_517_, 1);
v_rangeEndPosLine_520_ = lean_ctor_get(v_i_517_, 2);
v_rangeEndPosCharacter_521_ = lean_ctor_get(v_i_517_, 3);
lean_inc(v_rangeStartPosCharacter_519_);
lean_inc(v_rangeStartPosLine_518_);
v___x_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_522_, 0, v_rangeStartPosLine_518_);
lean_ctor_set(v___x_522_, 1, v_rangeStartPosCharacter_519_);
lean_inc(v_rangeEndPosCharacter_521_);
lean_inc(v_rangeEndPosLine_520_);
v___x_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_523_, 0, v_rangeEndPosLine_520_);
lean_ctor_set(v___x_523_, 1, v_rangeEndPosCharacter_521_);
v___x_524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set(v___x_524_, 1, v___x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_range___boxed(lean_object* v_i_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_Lsp_DeclInfo_range(v_i_525_);
lean_dec_ref(v_i_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_selectionRange(lean_object* v_i_527_){
_start:
{
lean_object* v_selectionRangeStartPosLine_528_; lean_object* v_selectionRangeStartPosCharacter_529_; lean_object* v_selectionRangeEndPosLine_530_; lean_object* v_selectionRangeEndPosCharacter_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_selectionRangeStartPosLine_528_ = lean_ctor_get(v_i_527_, 4);
v_selectionRangeStartPosCharacter_529_ = lean_ctor_get(v_i_527_, 5);
v_selectionRangeEndPosLine_530_ = lean_ctor_get(v_i_527_, 6);
v_selectionRangeEndPosCharacter_531_ = lean_ctor_get(v_i_527_, 7);
lean_inc(v_selectionRangeStartPosCharacter_529_);
lean_inc(v_selectionRangeStartPosLine_528_);
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v_selectionRangeStartPosLine_528_);
lean_ctor_set(v___x_532_, 1, v_selectionRangeStartPosCharacter_529_);
lean_inc(v_selectionRangeEndPosCharacter_531_);
lean_inc(v_selectionRangeEndPosLine_530_);
v___x_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_533_, 0, v_selectionRangeEndPosLine_530_);
lean_ctor_set(v___x_533_, 1, v_selectionRangeEndPosCharacter_531_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_DeclInfo_selectionRange___boxed(lean_object* v_i_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lean_Lsp_DeclInfo_selectionRange(v_i_535_);
lean_dec_ref(v_i_535_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonDeclInfo___lam__0(lean_object* v_i_537_){
_start:
{
lean_object* v_rangeStartPosLine_538_; lean_object* v_rangeStartPosCharacter_539_; lean_object* v_rangeEndPosLine_540_; lean_object* v_rangeEndPosCharacter_541_; lean_object* v_selectionRangeStartPosLine_542_; lean_object* v_selectionRangeStartPosCharacter_543_; lean_object* v_selectionRangeEndPosLine_544_; lean_object* v_selectionRangeEndPosCharacter_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_rangeStartPosLine_538_ = lean_ctor_get(v_i_537_, 0);
lean_inc(v_rangeStartPosLine_538_);
v_rangeStartPosCharacter_539_ = lean_ctor_get(v_i_537_, 1);
lean_inc(v_rangeStartPosCharacter_539_);
v_rangeEndPosLine_540_ = lean_ctor_get(v_i_537_, 2);
lean_inc(v_rangeEndPosLine_540_);
v_rangeEndPosCharacter_541_ = lean_ctor_get(v_i_537_, 3);
lean_inc(v_rangeEndPosCharacter_541_);
v_selectionRangeStartPosLine_542_ = lean_ctor_get(v_i_537_, 4);
lean_inc(v_selectionRangeStartPosLine_542_);
v_selectionRangeStartPosCharacter_543_ = lean_ctor_get(v_i_537_, 5);
lean_inc(v_selectionRangeStartPosCharacter_543_);
v_selectionRangeEndPosLine_544_ = lean_ctor_get(v_i_537_, 6);
lean_inc(v_selectionRangeEndPosLine_544_);
v_selectionRangeEndPosCharacter_545_ = lean_ctor_get(v_i_537_, 7);
lean_inc(v_selectionRangeEndPosCharacter_545_);
lean_dec_ref(v_i_537_);
v___x_546_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosLine_538_);
v___x_547_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
v___x_548_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosCharacter_539_);
v___x_549_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
v___x_550_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosLine_540_);
v___x_551_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
v___x_552_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosCharacter_541_);
v___x_553_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
v___x_554_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosLine_542_);
v___x_555_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
v___x_556_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosCharacter_543_);
v___x_557_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
v___x_558_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosLine_544_);
v___x_559_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
v___x_560_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosCharacter_545_);
v___x_561_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
v___x_562_ = lean_unsigned_to_nat(8u);
v___x_563_ = lean_mk_empty_array_with_capacity(v___x_562_);
v___x_564_ = lean_array_push(v___x_563_, v___x_547_);
v___x_565_ = lean_array_push(v___x_564_, v___x_549_);
v___x_566_ = lean_array_push(v___x_565_, v___x_551_);
v___x_567_ = lean_array_push(v___x_566_, v___x_553_);
v___x_568_ = lean_array_push(v___x_567_, v___x_555_);
v___x_569_ = lean_array_push(v___x_568_, v___x_557_);
v___x_570_ = lean_array_push(v___x_569_, v___x_559_);
v___x_571_ = lean_array_push(v___x_570_, v___x_561_);
v___x_572_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0(lean_object* v___x_579_, lean_object* v_x_580_){
_start:
{
if (lean_obj_tag(v_x_580_) == 4)
{
lean_object* v_elems_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_698_; 
v_elems_581_ = lean_ctor_get(v_x_580_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v_x_580_);
if (v_isSharedCheck_698_ == 0)
{
v___x_583_ = v_x_580_;
v_isShared_584_ = v_isSharedCheck_698_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_elems_581_);
lean_dec(v_x_580_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_698_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_585_ = lean_array_get_size(v_elems_581_);
v___x_586_ = lean_unsigned_to_nat(8u);
v___x_587_ = lean_nat_dec_eq(v___x_585_, v___x_586_);
if (v___x_587_ == 0)
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_592_; 
lean_dec_ref(v_elems_581_);
v___x_588_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0));
v___x_589_ = l_Nat_reprFast(v___x_585_);
v___x_590_ = lean_string_append(v___x_588_, v___x_589_);
lean_dec_ref(v___x_589_);
if (v_isShared_584_ == 0)
{
lean_ctor_set_tag(v___x_583_, 0);
lean_ctor_set(v___x_583_, 0, v___x_590_);
v___x_592_ = v___x_583_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_590_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
else
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
lean_del_object(v___x_583_);
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_594_);
lean_inc(v___x_595_);
v___x_596_ = l_Lean_Json_getNat_x3f(v___x_595_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec_ref(v_elems_581_);
v_a_597_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_596_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_596_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v_a_605_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_596_, 1);
v___x_606_ = lean_unsigned_to_nat(1u);
v___x_607_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_606_);
lean_inc(v___x_607_);
v___x_608_ = l_Lean_Json_getNat_x3f(v___x_607_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_609_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_608_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_608_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v_a_617_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v___x_608_, 1);
v___x_618_ = lean_unsigned_to_nat(2u);
v___x_619_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_618_);
lean_inc(v___x_619_);
v___x_620_ = l_Lean_Json_getNat_x3f(v___x_619_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_621_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_620_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_620_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v_a_629_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_620_, 1);
v___x_630_ = lean_unsigned_to_nat(3u);
v___x_631_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_630_);
lean_inc(v___x_631_);
v___x_632_ = l_Lean_Json_getNat_x3f(v___x_631_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_633_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_632_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_632_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v_a_641_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_632_, 1);
v___x_642_ = lean_unsigned_to_nat(4u);
v___x_643_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_642_);
lean_inc(v___x_643_);
v___x_644_ = l_Lean_Json_getNat_x3f(v___x_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_a_641_);
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_a_653_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_653_);
lean_dec_ref_known(v___x_644_, 1);
v___x_654_ = lean_unsigned_to_nat(5u);
v___x_655_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_654_);
lean_inc(v___x_655_);
v___x_656_ = l_Lean_Json_getNat_x3f(v___x_655_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
lean_dec(v_a_653_);
lean_dec(v_a_641_);
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_657_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_656_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_a_665_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_656_, 1);
v___x_666_ = lean_unsigned_to_nat(6u);
v___x_667_ = lean_array_get_borrowed(v___x_579_, v_elems_581_, v___x_666_);
lean_inc(v___x_667_);
v___x_668_ = l_Lean_Json_getNat_x3f(v___x_667_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec(v_a_665_);
lean_dec(v_a_653_);
lean_dec(v_a_641_);
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
lean_dec_ref(v_elems_581_);
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v_a_677_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_a_677_);
lean_dec_ref_known(v___x_668_, 1);
v___x_678_ = lean_unsigned_to_nat(7u);
v___x_679_ = lean_array_get(v___x_579_, v_elems_581_, v___x_678_);
lean_dec_ref(v_elems_581_);
v___x_680_ = l_Lean_Json_getNat_x3f(v___x_679_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_dec(v_a_677_);
lean_dec(v_a_665_);
lean_dec(v_a_653_);
lean_dec(v_a_641_);
lean_dec(v_a_629_);
lean_dec(v_a_617_);
lean_dec(v_a_605_);
v_a_681_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_680_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_680_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_697_; 
v_a_689_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_697_ == 0)
{
v___x_691_ = v___x_680_;
v_isShared_692_ = v_isSharedCheck_697_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_680_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_697_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_693_; lean_object* v___x_695_; 
v___x_693_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_693_, 0, v_a_605_);
lean_ctor_set(v___x_693_, 1, v_a_617_);
lean_ctor_set(v___x_693_, 2, v_a_629_);
lean_ctor_set(v___x_693_, 3, v_a_641_);
lean_ctor_set(v___x_693_, 4, v_a_653_);
lean_ctor_set(v___x_693_, 5, v_a_665_);
lean_ctor_set(v___x_693_, 6, v_a_677_);
lean_ctor_set(v___x_693_, 7, v_a_689_);
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 0, v___x_693_);
v___x_695_ = v___x_691_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_693_);
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
lean_object* v___x_699_; 
lean_dec(v_x_580_);
v___x_699_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__2));
return v___x_699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonDeclInfo___lam__0___boxed(lean_object* v___x_700_, lean_object* v_x_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_Lsp_instFromJsonDeclInfo___lam__0(v___x_700_, v_x_701_);
lean_dec(v___x_700_);
return v_res_702_;
}
}
static lean_object* _init_l_Lean_Lsp_Decls_instEmptyCollection(void){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lean_box(1);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__0(lean_object* v_f_707_, lean_object* v_a_708_, lean_object* v_b_709_, lean_object* v_c_710_){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v_a_708_);
lean_ctor_set(v___x_711_, 1, v_b_709_);
v___x_712_ = lean_apply_2(v_f_707_, v___x_711_, v_c_710_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__1(lean_object* v_toPure_713_, lean_object* v_____do__lift_714_){
_start:
{
lean_object* v_a_715_; lean_object* v___x_716_; 
v_a_715_ = lean_ctor_get(v_____do__lift_714_, 0);
lean_inc(v_a_715_);
lean_dec_ref(v_____do__lift_714_);
v___x_716_ = lean_apply_2(v_toPure_713_, lean_box(0), v_a_715_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__2(lean_object* v_inst_717_, lean_object* v_00_u03b2_718_, lean_object* v_ds_719_, lean_object* v_init_720_, lean_object* v_f_721_){
_start:
{
lean_object* v_toApplicative_722_; lean_object* v_toBind_723_; lean_object* v_toPure_724_; lean_object* v___f_725_; lean_object* v___x_726_; lean_object* v___f_727_; lean_object* v___x_728_; 
v_toApplicative_722_ = lean_ctor_get(v_inst_717_, 0);
v_toBind_723_ = lean_ctor_get(v_inst_717_, 1);
lean_inc(v_toBind_723_);
v_toPure_724_ = lean_ctor_get(v_toApplicative_722_, 1);
lean_inc(v_toPure_724_);
v___f_725_ = lean_alloc_closure((void*)(l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_725_, 0, v_f_721_);
v___x_726_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_717_, v___f_725_, v_init_720_, v_ds_719_);
v___f_727_ = lean_alloc_closure((void*)(l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_727_, 0, v_toPure_724_);
v___x_728_ = lean_apply_4(v_toBind_723_, lean_box(0), lean_box(0), v___x_726_, v___f_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg(lean_object* v_inst_729_){
_start:
{
lean_object* v___f_730_; 
v___f_730_ = lean_alloc_closure((void*)(l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_730_, 0, v_inst_729_);
return v___f_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad(lean_object* v_m_731_, lean_object* v_inst_732_){
_start:
{
lean_object* v___f_733_; 
v___f_733_ = lean_alloc_closure((void*)(l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_733_, 0, v_inst_732_);
return v___f_733_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0___redArg(lean_object* v_k_734_, lean_object* v_v_735_, lean_object* v_t_736_){
_start:
{
if (lean_obj_tag(v_t_736_) == 0)
{
lean_object* v_size_737_; lean_object* v_k_738_; lean_object* v_v_739_; lean_object* v_l_740_; lean_object* v_r_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_1021_; 
v_size_737_ = lean_ctor_get(v_t_736_, 0);
v_k_738_ = lean_ctor_get(v_t_736_, 1);
v_v_739_ = lean_ctor_get(v_t_736_, 2);
v_l_740_ = lean_ctor_get(v_t_736_, 3);
v_r_741_ = lean_ctor_get(v_t_736_, 4);
v_isSharedCheck_1021_ = !lean_is_exclusive(v_t_736_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_743_ = v_t_736_;
v_isShared_744_ = v_isSharedCheck_1021_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_r_741_);
lean_inc(v_l_740_);
lean_inc(v_v_739_);
lean_inc(v_k_738_);
lean_inc(v_size_737_);
lean_dec(v_t_736_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_1021_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
uint8_t v___x_745_; 
v___x_745_ = lean_string_compare(v_k_734_, v_k_738_);
switch(v___x_745_)
{
case 0:
{
lean_object* v_impl_746_; lean_object* v___x_747_; 
lean_dec(v_size_737_);
v_impl_746_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0___redArg(v_k_734_, v_v_735_, v_l_740_);
v___x_747_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_741_) == 0)
{
lean_object* v_size_748_; lean_object* v_size_749_; lean_object* v_k_750_; lean_object* v_v_751_; lean_object* v_l_752_; lean_object* v_r_753_; lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v_size_748_ = lean_ctor_get(v_r_741_, 0);
v_size_749_ = lean_ctor_get(v_impl_746_, 0);
lean_inc(v_size_749_);
v_k_750_ = lean_ctor_get(v_impl_746_, 1);
lean_inc(v_k_750_);
v_v_751_ = lean_ctor_get(v_impl_746_, 2);
lean_inc(v_v_751_);
v_l_752_ = lean_ctor_get(v_impl_746_, 3);
lean_inc(v_l_752_);
v_r_753_ = lean_ctor_get(v_impl_746_, 4);
lean_inc(v_r_753_);
v___x_754_ = lean_unsigned_to_nat(3u);
v___x_755_ = lean_nat_mul(v___x_754_, v_size_748_);
v___x_756_ = lean_nat_dec_lt(v___x_755_, v_size_749_);
lean_dec(v___x_755_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_760_; 
lean_dec(v_r_753_);
lean_dec(v_l_752_);
lean_dec(v_v_751_);
lean_dec(v_k_750_);
v___x_757_ = lean_nat_add(v___x_747_, v_size_749_);
lean_dec(v_size_749_);
v___x_758_ = lean_nat_add(v___x_757_, v_size_748_);
lean_dec(v___x_757_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 3, v_impl_746_);
lean_ctor_set(v___x_743_, 0, v___x_758_);
v___x_760_ = v___x_743_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_758_);
lean_ctor_set(v_reuseFailAlloc_761_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_761_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_761_, 3, v_impl_746_);
lean_ctor_set(v_reuseFailAlloc_761_, 4, v_r_741_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
else
{
lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_827_; 
v_isSharedCheck_827_ = !lean_is_exclusive(v_impl_746_);
if (v_isSharedCheck_827_ == 0)
{
lean_object* v_unused_828_; lean_object* v_unused_829_; lean_object* v_unused_830_; lean_object* v_unused_831_; lean_object* v_unused_832_; 
v_unused_828_ = lean_ctor_get(v_impl_746_, 4);
lean_dec(v_unused_828_);
v_unused_829_ = lean_ctor_get(v_impl_746_, 3);
lean_dec(v_unused_829_);
v_unused_830_ = lean_ctor_get(v_impl_746_, 2);
lean_dec(v_unused_830_);
v_unused_831_ = lean_ctor_get(v_impl_746_, 1);
lean_dec(v_unused_831_);
v_unused_832_ = lean_ctor_get(v_impl_746_, 0);
lean_dec(v_unused_832_);
v___x_763_ = v_impl_746_;
v_isShared_764_ = v_isSharedCheck_827_;
goto v_resetjp_762_;
}
else
{
lean_dec(v_impl_746_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_827_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v_size_765_; lean_object* v_size_766_; lean_object* v_k_767_; lean_object* v_v_768_; lean_object* v_l_769_; lean_object* v_r_770_; lean_object* v___x_771_; lean_object* v___x_772_; uint8_t v___x_773_; 
v_size_765_ = lean_ctor_get(v_l_752_, 0);
v_size_766_ = lean_ctor_get(v_r_753_, 0);
v_k_767_ = lean_ctor_get(v_r_753_, 1);
v_v_768_ = lean_ctor_get(v_r_753_, 2);
v_l_769_ = lean_ctor_get(v_r_753_, 3);
v_r_770_ = lean_ctor_get(v_r_753_, 4);
v___x_771_ = lean_unsigned_to_nat(2u);
v___x_772_ = lean_nat_mul(v___x_771_, v_size_765_);
v___x_773_ = lean_nat_dec_lt(v_size_766_, v___x_772_);
lean_dec(v___x_772_);
if (v___x_773_ == 0)
{
lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_802_; 
lean_inc(v_r_770_);
lean_inc(v_l_769_);
lean_inc(v_v_768_);
lean_inc(v_k_767_);
v_isSharedCheck_802_ = !lean_is_exclusive(v_r_753_);
if (v_isSharedCheck_802_ == 0)
{
lean_object* v_unused_803_; lean_object* v_unused_804_; lean_object* v_unused_805_; lean_object* v_unused_806_; lean_object* v_unused_807_; 
v_unused_803_ = lean_ctor_get(v_r_753_, 4);
lean_dec(v_unused_803_);
v_unused_804_ = lean_ctor_get(v_r_753_, 3);
lean_dec(v_unused_804_);
v_unused_805_ = lean_ctor_get(v_r_753_, 2);
lean_dec(v_unused_805_);
v_unused_806_ = lean_ctor_get(v_r_753_, 1);
lean_dec(v_unused_806_);
v_unused_807_ = lean_ctor_get(v_r_753_, 0);
lean_dec(v_unused_807_);
v___x_775_ = v_r_753_;
v_isShared_776_ = v_isSharedCheck_802_;
goto v_resetjp_774_;
}
else
{
lean_dec(v_r_753_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_802_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___x_790_; lean_object* v___y_792_; 
v___x_777_ = lean_nat_add(v___x_747_, v_size_749_);
lean_dec(v_size_749_);
v___x_778_ = lean_nat_add(v___x_777_, v_size_748_);
lean_dec(v___x_777_);
v___x_790_ = lean_nat_add(v___x_747_, v_size_765_);
if (lean_obj_tag(v_l_769_) == 0)
{
lean_object* v_size_800_; 
v_size_800_ = lean_ctor_get(v_l_769_, 0);
lean_inc(v_size_800_);
v___y_792_ = v_size_800_;
goto v___jp_791_;
}
else
{
lean_object* v___x_801_; 
v___x_801_ = lean_unsigned_to_nat(0u);
v___y_792_ = v___x_801_;
goto v___jp_791_;
}
v___jp_779_:
{
lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_783_ = lean_nat_add(v___y_781_, v___y_782_);
lean_dec(v___y_782_);
lean_dec(v___y_781_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 4, v_r_741_);
lean_ctor_set(v___x_775_, 3, v_r_770_);
lean_ctor_set(v___x_775_, 2, v_v_739_);
lean_ctor_set(v___x_775_, 1, v_k_738_);
lean_ctor_set(v___x_775_, 0, v___x_783_);
v___x_785_ = v___x_775_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_789_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_789_, 3, v_r_770_);
lean_ctor_set(v_reuseFailAlloc_789_, 4, v_r_741_);
v___x_785_ = v_reuseFailAlloc_789_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_787_; 
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 4, v___x_785_);
lean_ctor_set(v___x_763_, 3, v___y_780_);
lean_ctor_set(v___x_763_, 2, v_v_768_);
lean_ctor_set(v___x_763_, 1, v_k_767_);
lean_ctor_set(v___x_763_, 0, v___x_778_);
v___x_787_ = v___x_763_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_778_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_k_767_);
lean_ctor_set(v_reuseFailAlloc_788_, 2, v_v_768_);
lean_ctor_set(v_reuseFailAlloc_788_, 3, v___y_780_);
lean_ctor_set(v_reuseFailAlloc_788_, 4, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
v___jp_791_:
{
lean_object* v___x_793_; lean_object* v___x_795_; 
v___x_793_ = lean_nat_add(v___x_790_, v___y_792_);
lean_dec(v___y_792_);
lean_dec(v___x_790_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 4, v_l_769_);
lean_ctor_set(v___x_743_, 3, v_l_752_);
lean_ctor_set(v___x_743_, 2, v_v_751_);
lean_ctor_set(v___x_743_, 1, v_k_750_);
lean_ctor_set(v___x_743_, 0, v___x_793_);
v___x_795_ = v___x_743_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_793_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v_k_750_);
lean_ctor_set(v_reuseFailAlloc_799_, 2, v_v_751_);
lean_ctor_set(v_reuseFailAlloc_799_, 3, v_l_752_);
lean_ctor_set(v_reuseFailAlloc_799_, 4, v_l_769_);
v___x_795_ = v_reuseFailAlloc_799_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
lean_object* v___x_796_; 
v___x_796_ = lean_nat_add(v___x_747_, v_size_748_);
if (lean_obj_tag(v_r_770_) == 0)
{
lean_object* v_size_797_; 
v_size_797_ = lean_ctor_get(v_r_770_, 0);
lean_inc(v_size_797_);
v___y_780_ = v___x_795_;
v___y_781_ = v___x_796_;
v___y_782_ = v_size_797_;
goto v___jp_779_;
}
else
{
lean_object* v___x_798_; 
v___x_798_ = lean_unsigned_to_nat(0u);
v___y_780_ = v___x_795_;
v___y_781_ = v___x_796_;
v___y_782_ = v___x_798_;
goto v___jp_779_;
}
}
}
}
}
else
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_813_; 
lean_del_object(v___x_743_);
v___x_808_ = lean_nat_add(v___x_747_, v_size_749_);
lean_dec(v_size_749_);
v___x_809_ = lean_nat_add(v___x_808_, v_size_748_);
lean_dec(v___x_808_);
v___x_810_ = lean_nat_add(v___x_747_, v_size_748_);
v___x_811_ = lean_nat_add(v___x_810_, v_size_766_);
lean_dec(v___x_810_);
lean_inc_ref(v_r_741_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 4, v_r_741_);
lean_ctor_set(v___x_763_, 3, v_r_753_);
lean_ctor_set(v___x_763_, 2, v_v_739_);
lean_ctor_set(v___x_763_, 1, v_k_738_);
lean_ctor_set(v___x_763_, 0, v___x_811_);
v___x_813_ = v___x_763_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_811_);
lean_ctor_set(v_reuseFailAlloc_826_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_826_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_826_, 3, v_r_753_);
lean_ctor_set(v_reuseFailAlloc_826_, 4, v_r_741_);
v___x_813_ = v_reuseFailAlloc_826_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
v_isSharedCheck_820_ = !lean_is_exclusive(v_r_741_);
if (v_isSharedCheck_820_ == 0)
{
lean_object* v_unused_821_; lean_object* v_unused_822_; lean_object* v_unused_823_; lean_object* v_unused_824_; lean_object* v_unused_825_; 
v_unused_821_ = lean_ctor_get(v_r_741_, 4);
lean_dec(v_unused_821_);
v_unused_822_ = lean_ctor_get(v_r_741_, 3);
lean_dec(v_unused_822_);
v_unused_823_ = lean_ctor_get(v_r_741_, 2);
lean_dec(v_unused_823_);
v_unused_824_ = lean_ctor_get(v_r_741_, 1);
lean_dec(v_unused_824_);
v_unused_825_ = lean_ctor_get(v_r_741_, 0);
lean_dec(v_unused_825_);
v___x_815_ = v_r_741_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_dec(v_r_741_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 4, v___x_813_);
lean_ctor_set(v___x_815_, 3, v_l_752_);
lean_ctor_set(v___x_815_, 2, v_v_751_);
lean_ctor_set(v___x_815_, 1, v_k_750_);
lean_ctor_set(v___x_815_, 0, v___x_809_);
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_809_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v_k_750_);
lean_ctor_set(v_reuseFailAlloc_819_, 2, v_v_751_);
lean_ctor_set(v_reuseFailAlloc_819_, 3, v_l_752_);
lean_ctor_set(v_reuseFailAlloc_819_, 4, v___x_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_833_; 
v_l_833_ = lean_ctor_get(v_impl_746_, 3);
lean_inc(v_l_833_);
if (lean_obj_tag(v_l_833_) == 0)
{
lean_object* v_r_834_; lean_object* v_k_835_; lean_object* v_v_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_847_; 
v_r_834_ = lean_ctor_get(v_impl_746_, 4);
v_k_835_ = lean_ctor_get(v_impl_746_, 1);
v_v_836_ = lean_ctor_get(v_impl_746_, 2);
v_isSharedCheck_847_ = !lean_is_exclusive(v_impl_746_);
if (v_isSharedCheck_847_ == 0)
{
lean_object* v_unused_848_; lean_object* v_unused_849_; 
v_unused_848_ = lean_ctor_get(v_impl_746_, 3);
lean_dec(v_unused_848_);
v_unused_849_ = lean_ctor_get(v_impl_746_, 0);
lean_dec(v_unused_849_);
v___x_838_ = v_impl_746_;
v_isShared_839_ = v_isSharedCheck_847_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_r_834_);
lean_inc(v_v_836_);
lean_inc(v_k_835_);
lean_dec(v_impl_746_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_847_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_840_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_834_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 3, v_r_834_);
lean_ctor_set(v___x_838_, 2, v_v_739_);
lean_ctor_set(v___x_838_, 1, v_k_738_);
lean_ctor_set(v___x_838_, 0, v___x_747_);
v___x_842_ = v___x_838_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_747_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_846_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_846_, 3, v_r_834_);
lean_ctor_set(v_reuseFailAlloc_846_, 4, v_r_834_);
v___x_842_ = v_reuseFailAlloc_846_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_844_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 4, v___x_842_);
lean_ctor_set(v___x_743_, 3, v_l_833_);
lean_ctor_set(v___x_743_, 2, v_v_836_);
lean_ctor_set(v___x_743_, 1, v_k_835_);
lean_ctor_set(v___x_743_, 0, v___x_840_);
v___x_844_ = v___x_743_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_k_835_);
lean_ctor_set(v_reuseFailAlloc_845_, 2, v_v_836_);
lean_ctor_set(v_reuseFailAlloc_845_, 3, v_l_833_);
lean_ctor_set(v_reuseFailAlloc_845_, 4, v___x_842_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v_r_850_; 
v_r_850_ = lean_ctor_get(v_impl_746_, 4);
lean_inc(v_r_850_);
if (lean_obj_tag(v_r_850_) == 0)
{
lean_object* v_k_851_; lean_object* v_v_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_875_; 
v_k_851_ = lean_ctor_get(v_impl_746_, 1);
v_v_852_ = lean_ctor_get(v_impl_746_, 2);
v_isSharedCheck_875_ = !lean_is_exclusive(v_impl_746_);
if (v_isSharedCheck_875_ == 0)
{
lean_object* v_unused_876_; lean_object* v_unused_877_; lean_object* v_unused_878_; 
v_unused_876_ = lean_ctor_get(v_impl_746_, 4);
lean_dec(v_unused_876_);
v_unused_877_ = lean_ctor_get(v_impl_746_, 3);
lean_dec(v_unused_877_);
v_unused_878_ = lean_ctor_get(v_impl_746_, 0);
lean_dec(v_unused_878_);
v___x_854_ = v_impl_746_;
v_isShared_855_ = v_isSharedCheck_875_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_v_852_);
lean_inc(v_k_851_);
lean_dec(v_impl_746_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_875_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v_k_856_; lean_object* v_v_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_871_; 
v_k_856_ = lean_ctor_get(v_r_850_, 1);
v_v_857_ = lean_ctor_get(v_r_850_, 2);
v_isSharedCheck_871_ = !lean_is_exclusive(v_r_850_);
if (v_isSharedCheck_871_ == 0)
{
lean_object* v_unused_872_; lean_object* v_unused_873_; lean_object* v_unused_874_; 
v_unused_872_ = lean_ctor_get(v_r_850_, 4);
lean_dec(v_unused_872_);
v_unused_873_ = lean_ctor_get(v_r_850_, 3);
lean_dec(v_unused_873_);
v_unused_874_ = lean_ctor_get(v_r_850_, 0);
lean_dec(v_unused_874_);
v___x_859_ = v_r_850_;
v_isShared_860_ = v_isSharedCheck_871_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_v_857_);
lean_inc(v_k_856_);
lean_dec(v_r_850_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_871_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_863_; 
v___x_861_ = lean_unsigned_to_nat(3u);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 4, v_l_833_);
lean_ctor_set(v___x_859_, 3, v_l_833_);
lean_ctor_set(v___x_859_, 2, v_v_852_);
lean_ctor_set(v___x_859_, 1, v_k_851_);
lean_ctor_set(v___x_859_, 0, v___x_747_);
v___x_863_ = v___x_859_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v___x_747_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_k_851_);
lean_ctor_set(v_reuseFailAlloc_870_, 2, v_v_852_);
lean_ctor_set(v_reuseFailAlloc_870_, 3, v_l_833_);
lean_ctor_set(v_reuseFailAlloc_870_, 4, v_l_833_);
v___x_863_ = v_reuseFailAlloc_870_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_865_; 
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 4, v_l_833_);
lean_ctor_set(v___x_854_, 2, v_v_739_);
lean_ctor_set(v___x_854_, 1, v_k_738_);
lean_ctor_set(v___x_854_, 0, v___x_747_);
v___x_865_ = v___x_854_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_747_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_869_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_869_, 3, v_l_833_);
lean_ctor_set(v_reuseFailAlloc_869_, 4, v_l_833_);
v___x_865_ = v_reuseFailAlloc_869_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_867_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 4, v___x_865_);
lean_ctor_set(v___x_743_, 3, v___x_863_);
lean_ctor_set(v___x_743_, 2, v_v_857_);
lean_ctor_set(v___x_743_, 1, v_k_856_);
lean_ctor_set(v___x_743_, 0, v___x_861_);
v___x_867_ = v___x_743_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v_k_856_);
lean_ctor_set(v_reuseFailAlloc_868_, 2, v_v_857_);
lean_ctor_set(v_reuseFailAlloc_868_, 3, v___x_863_);
lean_ctor_set(v_reuseFailAlloc_868_, 4, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
}
}
else
{
lean_object* v___x_879_; lean_object* v___x_881_; 
v___x_879_ = lean_unsigned_to_nat(2u);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 4, v_r_850_);
lean_ctor_set(v___x_743_, 3, v_impl_746_);
lean_ctor_set(v___x_743_, 0, v___x_879_);
v___x_881_ = v___x_743_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_879_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_882_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_882_, 3, v_impl_746_);
lean_ctor_set(v_reuseFailAlloc_882_, 4, v_r_850_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
case 1:
{
lean_object* v___x_884_; 
lean_dec(v_v_739_);
lean_dec(v_k_738_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 2, v_v_735_);
lean_ctor_set(v___x_743_, 1, v_k_734_);
v___x_884_ = v___x_743_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_size_737_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_k_734_);
lean_ctor_set(v_reuseFailAlloc_885_, 2, v_v_735_);
lean_ctor_set(v_reuseFailAlloc_885_, 3, v_l_740_);
lean_ctor_set(v_reuseFailAlloc_885_, 4, v_r_741_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
default: 
{
lean_object* v_impl_886_; lean_object* v___x_887_; 
lean_dec(v_size_737_);
v_impl_886_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0___redArg(v_k_734_, v_v_735_, v_r_741_);
v___x_887_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_740_) == 0)
{
lean_object* v_size_888_; lean_object* v_size_889_; lean_object* v_k_890_; lean_object* v_v_891_; lean_object* v_l_892_; lean_object* v_r_893_; lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
v_size_888_ = lean_ctor_get(v_l_740_, 0);
v_size_889_ = lean_ctor_get(v_impl_886_, 0);
lean_inc(v_size_889_);
v_k_890_ = lean_ctor_get(v_impl_886_, 1);
lean_inc(v_k_890_);
v_v_891_ = lean_ctor_get(v_impl_886_, 2);
lean_inc(v_v_891_);
v_l_892_ = lean_ctor_get(v_impl_886_, 3);
lean_inc(v_l_892_);
v_r_893_ = lean_ctor_get(v_impl_886_, 4);
lean_inc(v_r_893_);
v___x_894_ = lean_unsigned_to_nat(3u);
v___x_895_ = lean_nat_mul(v___x_894_, v_size_888_);
v___x_896_ = lean_nat_dec_lt(v___x_895_, v_size_889_);
lean_dec(v___x_895_);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_900_; 
lean_dec(v_r_893_);
lean_dec(v_l_892_);
lean_dec(v_v_891_);
lean_dec(v_k_890_);
v___x_897_ = lean_nat_add(v___x_887_, v_size_888_);
v___x_898_ = lean_nat_add(v___x_897_, v_size_889_);
lean_dec(v_size_889_);
lean_dec(v___x_897_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 4, v_impl_886_);
lean_ctor_set(v___x_743_, 0, v___x_898_);
v___x_900_ = v___x_743_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v___x_898_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_901_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_901_, 3, v_l_740_);
lean_ctor_set(v_reuseFailAlloc_901_, 4, v_impl_886_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
else
{
lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_965_; 
v_isSharedCheck_965_ = !lean_is_exclusive(v_impl_886_);
if (v_isSharedCheck_965_ == 0)
{
lean_object* v_unused_966_; lean_object* v_unused_967_; lean_object* v_unused_968_; lean_object* v_unused_969_; lean_object* v_unused_970_; 
v_unused_966_ = lean_ctor_get(v_impl_886_, 4);
lean_dec(v_unused_966_);
v_unused_967_ = lean_ctor_get(v_impl_886_, 3);
lean_dec(v_unused_967_);
v_unused_968_ = lean_ctor_get(v_impl_886_, 2);
lean_dec(v_unused_968_);
v_unused_969_ = lean_ctor_get(v_impl_886_, 1);
lean_dec(v_unused_969_);
v_unused_970_ = lean_ctor_get(v_impl_886_, 0);
lean_dec(v_unused_970_);
v___x_903_ = v_impl_886_;
v_isShared_904_ = v_isSharedCheck_965_;
goto v_resetjp_902_;
}
else
{
lean_dec(v_impl_886_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_965_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v_size_905_; lean_object* v_k_906_; lean_object* v_v_907_; lean_object* v_l_908_; lean_object* v_r_909_; lean_object* v_size_910_; lean_object* v___x_911_; lean_object* v___x_912_; uint8_t v___x_913_; 
v_size_905_ = lean_ctor_get(v_l_892_, 0);
v_k_906_ = lean_ctor_get(v_l_892_, 1);
v_v_907_ = lean_ctor_get(v_l_892_, 2);
v_l_908_ = lean_ctor_get(v_l_892_, 3);
v_r_909_ = lean_ctor_get(v_l_892_, 4);
v_size_910_ = lean_ctor_get(v_r_893_, 0);
v___x_911_ = lean_unsigned_to_nat(2u);
v___x_912_ = lean_nat_mul(v___x_911_, v_size_910_);
v___x_913_ = lean_nat_dec_lt(v_size_905_, v___x_912_);
lean_dec(v___x_912_);
if (v___x_913_ == 0)
{
lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_941_; 
lean_inc(v_r_909_);
lean_inc(v_l_908_);
lean_inc(v_v_907_);
lean_inc(v_k_906_);
v_isSharedCheck_941_ = !lean_is_exclusive(v_l_892_);
if (v_isSharedCheck_941_ == 0)
{
lean_object* v_unused_942_; lean_object* v_unused_943_; lean_object* v_unused_944_; lean_object* v_unused_945_; lean_object* v_unused_946_; 
v_unused_942_ = lean_ctor_get(v_l_892_, 4);
lean_dec(v_unused_942_);
v_unused_943_ = lean_ctor_get(v_l_892_, 3);
lean_dec(v_unused_943_);
v_unused_944_ = lean_ctor_get(v_l_892_, 2);
lean_dec(v_unused_944_);
v_unused_945_ = lean_ctor_get(v_l_892_, 1);
lean_dec(v_unused_945_);
v_unused_946_ = lean_ctor_get(v_l_892_, 0);
lean_dec(v_unused_946_);
v___x_915_ = v_l_892_;
v_isShared_916_ = v_isSharedCheck_941_;
goto v_resetjp_914_;
}
else
{
lean_dec(v_l_892_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_941_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_931_; 
v___x_917_ = lean_nat_add(v___x_887_, v_size_888_);
v___x_918_ = lean_nat_add(v___x_917_, v_size_889_);
lean_dec(v_size_889_);
if (lean_obj_tag(v_l_908_) == 0)
{
lean_object* v_size_939_; 
v_size_939_ = lean_ctor_get(v_l_908_, 0);
lean_inc(v_size_939_);
v___y_931_ = v_size_939_;
goto v___jp_930_;
}
else
{
lean_object* v___x_940_; 
v___x_940_ = lean_unsigned_to_nat(0u);
v___y_931_ = v___x_940_;
goto v___jp_930_;
}
v___jp_919_:
{
lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_923_ = lean_nat_add(v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec(v___y_921_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 4, v_r_893_);
lean_ctor_set(v___x_915_, 3, v_r_909_);
lean_ctor_set(v___x_915_, 2, v_v_891_);
lean_ctor_set(v___x_915_, 1, v_k_890_);
lean_ctor_set(v___x_915_, 0, v___x_923_);
v___x_925_ = v___x_915_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_k_890_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v_v_891_);
lean_ctor_set(v_reuseFailAlloc_929_, 3, v_r_909_);
lean_ctor_set(v_reuseFailAlloc_929_, 4, v_r_893_);
v___x_925_ = v_reuseFailAlloc_929_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_927_; 
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 4, v___x_925_);
lean_ctor_set(v___x_903_, 3, v___y_920_);
lean_ctor_set(v___x_903_, 2, v_v_907_);
lean_ctor_set(v___x_903_, 1, v_k_906_);
lean_ctor_set(v___x_903_, 0, v___x_918_);
v___x_927_ = v___x_903_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_k_906_);
lean_ctor_set(v_reuseFailAlloc_928_, 2, v_v_907_);
lean_ctor_set(v_reuseFailAlloc_928_, 3, v___y_920_);
lean_ctor_set(v_reuseFailAlloc_928_, 4, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
v___jp_930_:
{
lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_932_ = lean_nat_add(v___x_917_, v___y_931_);
lean_dec(v___y_931_);
lean_dec(v___x_917_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 4, v_l_908_);
lean_ctor_set(v___x_743_, 0, v___x_932_);
v___x_934_ = v___x_743_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_932_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_938_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_938_, 3, v_l_740_);
lean_ctor_set(v_reuseFailAlloc_938_, 4, v_l_908_);
v___x_934_ = v_reuseFailAlloc_938_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_935_; 
v___x_935_ = lean_nat_add(v___x_887_, v_size_910_);
if (lean_obj_tag(v_r_909_) == 0)
{
lean_object* v_size_936_; 
v_size_936_ = lean_ctor_get(v_r_909_, 0);
lean_inc(v_size_936_);
v___y_920_ = v___x_934_;
v___y_921_ = v___x_935_;
v___y_922_ = v_size_936_;
goto v___jp_919_;
}
else
{
lean_object* v___x_937_; 
v___x_937_ = lean_unsigned_to_nat(0u);
v___y_920_ = v___x_934_;
v___y_921_ = v___x_935_;
v___y_922_ = v___x_937_;
goto v___jp_919_;
}
}
}
}
}
else
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_951_; 
lean_del_object(v___x_743_);
v___x_947_ = lean_nat_add(v___x_887_, v_size_888_);
v___x_948_ = lean_nat_add(v___x_947_, v_size_889_);
lean_dec(v_size_889_);
v___x_949_ = lean_nat_add(v___x_947_, v_size_905_);
lean_dec(v___x_947_);
lean_inc_ref(v_l_740_);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 4, v_l_892_);
lean_ctor_set(v___x_903_, 3, v_l_740_);
lean_ctor_set(v___x_903_, 2, v_v_739_);
lean_ctor_set(v___x_903_, 1, v_k_738_);
lean_ctor_set(v___x_903_, 0, v___x_949_);
v___x_951_ = v___x_903_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_949_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_964_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_964_, 3, v_l_740_);
lean_ctor_set(v_reuseFailAlloc_964_, 4, v_l_892_);
v___x_951_ = v_reuseFailAlloc_964_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
v_isSharedCheck_958_ = !lean_is_exclusive(v_l_740_);
if (v_isSharedCheck_958_ == 0)
{
lean_object* v_unused_959_; lean_object* v_unused_960_; lean_object* v_unused_961_; lean_object* v_unused_962_; lean_object* v_unused_963_; 
v_unused_959_ = lean_ctor_get(v_l_740_, 4);
lean_dec(v_unused_959_);
v_unused_960_ = lean_ctor_get(v_l_740_, 3);
lean_dec(v_unused_960_);
v_unused_961_ = lean_ctor_get(v_l_740_, 2);
lean_dec(v_unused_961_);
v_unused_962_ = lean_ctor_get(v_l_740_, 1);
lean_dec(v_unused_962_);
v_unused_963_ = lean_ctor_get(v_l_740_, 0);
lean_dec(v_unused_963_);
v___x_953_ = v_l_740_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_dec(v_l_740_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 4, v_r_893_);
lean_ctor_set(v___x_953_, 3, v___x_951_);
lean_ctor_set(v___x_953_, 2, v_v_891_);
lean_ctor_set(v___x_953_, 1, v_k_890_);
lean_ctor_set(v___x_953_, 0, v___x_948_);
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v_k_890_);
lean_ctor_set(v_reuseFailAlloc_957_, 2, v_v_891_);
lean_ctor_set(v_reuseFailAlloc_957_, 3, v___x_951_);
lean_ctor_set(v_reuseFailAlloc_957_, 4, v_r_893_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_971_; 
v_l_971_ = lean_ctor_get(v_impl_886_, 3);
lean_inc(v_l_971_);
if (lean_obj_tag(v_l_971_) == 0)
{
lean_object* v_r_972_; lean_object* v_k_973_; lean_object* v_v_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_997_; 
v_r_972_ = lean_ctor_get(v_impl_886_, 4);
v_k_973_ = lean_ctor_get(v_impl_886_, 1);
v_v_974_ = lean_ctor_get(v_impl_886_, 2);
v_isSharedCheck_997_ = !lean_is_exclusive(v_impl_886_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; lean_object* v_unused_999_; 
v_unused_998_ = lean_ctor_get(v_impl_886_, 3);
lean_dec(v_unused_998_);
v_unused_999_ = lean_ctor_get(v_impl_886_, 0);
lean_dec(v_unused_999_);
v___x_976_ = v_impl_886_;
v_isShared_977_ = v_isSharedCheck_997_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_r_972_);
lean_inc(v_v_974_);
lean_inc(v_k_973_);
lean_dec(v_impl_886_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_997_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v_k_978_; lean_object* v_v_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_993_; 
v_k_978_ = lean_ctor_get(v_l_971_, 1);
v_v_979_ = lean_ctor_get(v_l_971_, 2);
v_isSharedCheck_993_ = !lean_is_exclusive(v_l_971_);
if (v_isSharedCheck_993_ == 0)
{
lean_object* v_unused_994_; lean_object* v_unused_995_; lean_object* v_unused_996_; 
v_unused_994_ = lean_ctor_get(v_l_971_, 4);
lean_dec(v_unused_994_);
v_unused_995_ = lean_ctor_get(v_l_971_, 3);
lean_dec(v_unused_995_);
v_unused_996_ = lean_ctor_get(v_l_971_, 0);
lean_dec(v_unused_996_);
v___x_981_ = v_l_971_;
v_isShared_982_ = v_isSharedCheck_993_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_v_979_);
lean_inc(v_k_978_);
lean_dec(v_l_971_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_993_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_983_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_972_, 2);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 4, v_r_972_);
lean_ctor_set(v___x_981_, 3, v_r_972_);
lean_ctor_set(v___x_981_, 2, v_v_739_);
lean_ctor_set(v___x_981_, 1, v_k_738_);
lean_ctor_set(v___x_981_, 0, v___x_887_);
v___x_985_ = v___x_981_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_992_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_992_, 3, v_r_972_);
lean_ctor_set(v_reuseFailAlloc_992_, 4, v_r_972_);
v___x_985_ = v_reuseFailAlloc_992_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_987_; 
lean_inc(v_r_972_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 3, v_r_972_);
lean_ctor_set(v___x_976_, 0, v___x_887_);
v___x_987_ = v___x_976_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_k_973_);
lean_ctor_set(v_reuseFailAlloc_991_, 2, v_v_974_);
lean_ctor_set(v_reuseFailAlloc_991_, 3, v_r_972_);
lean_ctor_set(v_reuseFailAlloc_991_, 4, v_r_972_);
v___x_987_ = v_reuseFailAlloc_991_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v___x_989_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 4, v___x_987_);
lean_ctor_set(v___x_743_, 3, v___x_985_);
lean_ctor_set(v___x_743_, 2, v_v_979_);
lean_ctor_set(v___x_743_, 1, v_k_978_);
lean_ctor_set(v___x_743_, 0, v___x_983_);
v___x_989_ = v___x_743_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_983_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_k_978_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v_v_979_);
lean_ctor_set(v_reuseFailAlloc_990_, 3, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_990_, 4, v___x_987_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
}
}
else
{
lean_object* v_r_1000_; 
v_r_1000_ = lean_ctor_get(v_impl_886_, 4);
lean_inc(v_r_1000_);
if (lean_obj_tag(v_r_1000_) == 0)
{
lean_object* v_k_1001_; lean_object* v_v_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1013_; 
v_k_1001_ = lean_ctor_get(v_impl_886_, 1);
v_v_1002_ = lean_ctor_get(v_impl_886_, 2);
v_isSharedCheck_1013_ = !lean_is_exclusive(v_impl_886_);
if (v_isSharedCheck_1013_ == 0)
{
lean_object* v_unused_1014_; lean_object* v_unused_1015_; lean_object* v_unused_1016_; 
v_unused_1014_ = lean_ctor_get(v_impl_886_, 4);
lean_dec(v_unused_1014_);
v_unused_1015_ = lean_ctor_get(v_impl_886_, 3);
lean_dec(v_unused_1015_);
v_unused_1016_ = lean_ctor_get(v_impl_886_, 0);
lean_dec(v_unused_1016_);
v___x_1004_ = v_impl_886_;
v_isShared_1005_ = v_isSharedCheck_1013_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_v_1002_);
lean_inc(v_k_1001_);
lean_dec(v_impl_886_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1013_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1008_; 
v___x_1006_ = lean_unsigned_to_nat(3u);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 4, v_l_971_);
lean_ctor_set(v___x_1004_, 2, v_v_739_);
lean_ctor_set(v___x_1004_, 1, v_k_738_);
lean_ctor_set(v___x_1004_, 0, v___x_887_);
v___x_1008_ = v___x_1004_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_1012_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_1012_, 3, v_l_971_);
lean_ctor_set(v_reuseFailAlloc_1012_, 4, v_l_971_);
v___x_1008_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_object* v___x_1010_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 4, v_r_1000_);
lean_ctor_set(v___x_743_, 3, v___x_1008_);
lean_ctor_set(v___x_743_, 2, v_v_1002_);
lean_ctor_set(v___x_743_, 1, v_k_1001_);
lean_ctor_set(v___x_743_, 0, v___x_1006_);
v___x_1010_ = v___x_743_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_1006_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v_k_1001_);
lean_ctor_set(v_reuseFailAlloc_1011_, 2, v_v_1002_);
lean_ctor_set(v_reuseFailAlloc_1011_, 3, v___x_1008_);
lean_ctor_set(v_reuseFailAlloc_1011_, 4, v_r_1000_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
}
else
{
lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1017_ = lean_unsigned_to_nat(2u);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 4, v_impl_886_);
lean_ctor_set(v___x_743_, 3, v_r_1000_);
lean_ctor_set(v___x_743_, 0, v___x_1017_);
v___x_1019_ = v___x_743_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_k_738_);
lean_ctor_set(v_reuseFailAlloc_1020_, 2, v_v_739_);
lean_ctor_set(v_reuseFailAlloc_1020_, 3, v_r_1000_);
lean_ctor_set(v_reuseFailAlloc_1020_, 4, v_impl_886_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
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
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = lean_unsigned_to_nat(1u);
v___x_1023_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
lean_ctor_set(v___x_1023_, 1, v_k_734_);
lean_ctor_set(v___x_1023_, 2, v_v_735_);
lean_ctor_set(v___x_1023_, 3, v_t_736_);
lean_ctor_set(v___x_1023_, 4, v_t_736_);
return v___x_1023_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_insert(lean_object* v_ds_1024_, lean_object* v_declName_1025_, lean_object* v_info_1026_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0___redArg(v_declName_1025_, v_info_1026_, v_ds_1024_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0(lean_object* v_00_u03b2_1028_, lean_object* v_k_1029_, lean_object* v_v_1030_, lean_object* v_t_1031_, lean_object* v_hl_1032_){
_start:
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0___redArg(v_k_1029_, v_v_1030_, v_t_1031_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_Decls_insertMany_spec__0(lean_object* v_init_1034_, lean_object* v_x_1035_){
_start:
{
if (lean_obj_tag(v_x_1035_) == 0)
{
lean_object* v_k_1036_; lean_object* v_v_1037_; lean_object* v_l_1038_; lean_object* v_r_1039_; lean_object* v___x_1040_; lean_object* v_a_1041_; lean_object* v_r_1042_; 
v_k_1036_ = lean_ctor_get(v_x_1035_, 1);
lean_inc(v_k_1036_);
v_v_1037_ = lean_ctor_get(v_x_1035_, 2);
lean_inc(v_v_1037_);
v_l_1038_ = lean_ctor_get(v_x_1035_, 3);
lean_inc(v_l_1038_);
v_r_1039_ = lean_ctor_get(v_x_1035_, 4);
lean_inc(v_r_1039_);
lean_dec_ref_known(v_x_1035_, 5);
v___x_1040_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_Decls_insertMany_spec__0(v_init_1034_, v_l_1038_);
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref(v___x_1040_);
v_r_1042_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0___redArg(v_k_1036_, v_v_1037_, v_a_1041_);
v_init_1034_ = v_r_1042_;
v_x_1035_ = v_r_1039_;
goto _start;
}
else
{
lean_object* v___x_1044_; 
v___x_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1044_, 0, v_init_1034_);
return v___x_1044_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_insertMany(lean_object* v_ds_1045_, lean_object* v_other_1046_){
_start:
{
lean_object* v___x_1047_; lean_object* v_a_1048_; 
v___x_1047_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_Decls_insertMany_spec__0(v_ds_1045_, v_other_1046_);
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_a_1048_);
lean_dec_ref(v___x_1047_);
return v_a_1048_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0___redArg(lean_object* v_t_1049_, lean_object* v_k_1050_){
_start:
{
if (lean_obj_tag(v_t_1049_) == 0)
{
lean_object* v_k_1051_; lean_object* v_v_1052_; lean_object* v_l_1053_; lean_object* v_r_1054_; uint8_t v___x_1055_; 
v_k_1051_ = lean_ctor_get(v_t_1049_, 1);
v_v_1052_ = lean_ctor_get(v_t_1049_, 2);
v_l_1053_ = lean_ctor_get(v_t_1049_, 3);
v_r_1054_ = lean_ctor_get(v_t_1049_, 4);
v___x_1055_ = lean_string_compare(v_k_1050_, v_k_1051_);
switch(v___x_1055_)
{
case 0:
{
v_t_1049_ = v_l_1053_;
goto _start;
}
case 1:
{
lean_object* v___x_1057_; 
lean_inc(v_v_1052_);
v___x_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1057_, 0, v_v_1052_);
return v___x_1057_;
}
default: 
{
v_t_1049_ = v_r_1054_;
goto _start;
}
}
}
else
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_box(0);
return v___x_1059_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0___redArg___boxed(lean_object* v_t_1060_, lean_object* v_k_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0___redArg(v_t_1060_, v_k_1061_);
lean_dec_ref(v_k_1061_);
lean_dec(v_t_1060_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_get_x3f(lean_object* v_ds_1063_, lean_object* v_declName_1064_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0___redArg(v_ds_1063_, v_declName_1064_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_get_x3f___boxed(lean_object* v_ds_1066_, lean_object* v_declName_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_Lsp_Decls_get_x3f(v_ds_1066_, v_declName_1067_);
lean_dec_ref(v_declName_1067_);
lean_dec(v_ds_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0(lean_object* v_00_u03b4_1069_, lean_object* v_t_1070_, lean_object* v_k_1071_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0___redArg(v_t_1070_, v_k_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0___boxed(lean_object* v_00_u03b4_1073_, lean_object* v_t_1074_, lean_object* v_k_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_Decls_get_x3f_spec__0(v_00_u03b4_1073_, v_t_1074_, v_k_1075_);
lean_dec_ref(v_k_1075_);
lean_dec(v_t_1074_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_Decls_toList_spec__0(lean_object* v_init_1077_, lean_object* v_x_1078_){
_start:
{
if (lean_obj_tag(v_x_1078_) == 0)
{
lean_object* v_k_1079_; lean_object* v_v_1080_; lean_object* v_l_1081_; lean_object* v_r_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v_k_1079_ = lean_ctor_get(v_x_1078_, 1);
v_v_1080_ = lean_ctor_get(v_x_1078_, 2);
v_l_1081_ = lean_ctor_get(v_x_1078_, 3);
v_r_1082_ = lean_ctor_get(v_x_1078_, 4);
v___x_1083_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_Decls_toList_spec__0(v_init_1077_, v_r_1082_);
lean_inc(v_v_1080_);
lean_inc(v_k_1079_);
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v_k_1079_);
lean_ctor_set(v___x_1084_, 1, v_v_1080_);
v___x_1085_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v___x_1083_);
v_init_1077_ = v___x_1085_;
v_x_1078_ = v_l_1081_;
goto _start;
}
else
{
return v_init_1077_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_Decls_toList_spec__0___boxed(lean_object* v_init_1087_, lean_object* v_x_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_Decls_toList_spec__0(v_init_1087_, v_x_1088_);
lean_dec(v_x_1088_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_toList(lean_object* v_ds_1090_){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = lean_box(0);
v___x_1092_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_Decls_toList_spec__0(v___x_1091_, v_ds_1090_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_toList___boxed(lean_object* v_ds_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lean_Lsp_Decls_toList(v_ds_1093_);
lean_dec(v_ds_1093_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instToJson___lam__0(lean_object* v_x_1095_){
_start:
{
lean_object* v_snd_1096_; lean_object* v_fst_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1139_; 
v_snd_1096_ = lean_ctor_get(v_x_1095_, 1);
v_fst_1097_ = lean_ctor_get(v_x_1095_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_x_1095_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1099_ = v_x_1095_;
v_isShared_1100_ = v_isSharedCheck_1139_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_snd_1096_);
lean_inc(v_fst_1097_);
lean_dec(v_x_1095_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1139_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v_rangeStartPosLine_1101_; lean_object* v_rangeStartPosCharacter_1102_; lean_object* v_rangeEndPosLine_1103_; lean_object* v_rangeEndPosCharacter_1104_; lean_object* v_selectionRangeStartPosLine_1105_; lean_object* v_selectionRangeStartPosCharacter_1106_; lean_object* v_selectionRangeEndPosLine_1107_; lean_object* v_selectionRangeEndPosCharacter_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1137_; 
v_rangeStartPosLine_1101_ = lean_ctor_get(v_snd_1096_, 0);
lean_inc(v_rangeStartPosLine_1101_);
v_rangeStartPosCharacter_1102_ = lean_ctor_get(v_snd_1096_, 1);
lean_inc(v_rangeStartPosCharacter_1102_);
v_rangeEndPosLine_1103_ = lean_ctor_get(v_snd_1096_, 2);
lean_inc(v_rangeEndPosLine_1103_);
v_rangeEndPosCharacter_1104_ = lean_ctor_get(v_snd_1096_, 3);
lean_inc(v_rangeEndPosCharacter_1104_);
v_selectionRangeStartPosLine_1105_ = lean_ctor_get(v_snd_1096_, 4);
lean_inc(v_selectionRangeStartPosLine_1105_);
v_selectionRangeStartPosCharacter_1106_ = lean_ctor_get(v_snd_1096_, 5);
lean_inc(v_selectionRangeStartPosCharacter_1106_);
v_selectionRangeEndPosLine_1107_ = lean_ctor_get(v_snd_1096_, 6);
lean_inc(v_selectionRangeEndPosLine_1107_);
v_selectionRangeEndPosCharacter_1108_ = lean_ctor_get(v_snd_1096_, 7);
lean_inc(v_selectionRangeEndPosCharacter_1108_);
lean_dec(v_snd_1096_);
v___x_1109_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosLine_1101_);
v___x_1110_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
v___x_1111_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosCharacter_1102_);
v___x_1112_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
v___x_1113_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosLine_1103_);
v___x_1114_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
v___x_1115_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosCharacter_1104_);
v___x_1116_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
v___x_1117_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosLine_1105_);
v___x_1118_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
v___x_1119_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosCharacter_1106_);
v___x_1120_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
v___x_1121_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosLine_1107_);
v___x_1122_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
v___x_1123_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosCharacter_1108_);
v___x_1124_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
v___x_1125_ = lean_unsigned_to_nat(8u);
v___x_1126_ = lean_mk_empty_array_with_capacity(v___x_1125_);
v___x_1127_ = lean_array_push(v___x_1126_, v___x_1110_);
v___x_1128_ = lean_array_push(v___x_1127_, v___x_1112_);
v___x_1129_ = lean_array_push(v___x_1128_, v___x_1114_);
v___x_1130_ = lean_array_push(v___x_1129_, v___x_1116_);
v___x_1131_ = lean_array_push(v___x_1130_, v___x_1118_);
v___x_1132_ = lean_array_push(v___x_1131_, v___x_1120_);
v___x_1133_ = lean_array_push(v___x_1132_, v___x_1122_);
v___x_1134_ = lean_array_push(v___x_1133_, v___x_1124_);
v___x_1135_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 1, v___x_1135_);
v___x_1137_ = v___x_1099_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_fst_1097_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v___x_1135_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instToJson___lam__1(lean_object* v___f_1140_, lean_object* v_m_1141_){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1142_ = l_Lean_Lsp_Decls_toList(v_m_1141_);
v___x_1143_ = lean_box(0);
v___x_1144_ = l_List_mapTR_loop___redArg(v___f_1140_, v___x_1142_, v___x_1143_);
v___x_1145_ = l_Lean_Json_mkObj(v___x_1144_);
lean_dec(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instToJson___lam__1___boxed(lean_object* v___f_1146_, lean_object* v_m_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Lean_Lsp_Decls_instToJson___lam__1(v___f_1146_, v_m_1147_);
lean_dec(v_m_1147_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instFromJson___lam__0(lean_object* v_m_1155_, lean_object* v_k_1156_, lean_object* v_v_1157_){
_start:
{
if (lean_obj_tag(v_v_1157_) == 4)
{
lean_object* v_elems_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1277_; 
v_elems_1158_ = lean_ctor_get(v_v_1157_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_v_1157_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1160_ = v_v_1157_;
v_isShared_1161_ = v_isSharedCheck_1277_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_elems_1158_);
lean_dec(v_v_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1277_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; uint8_t v___x_1164_; 
v___x_1162_ = lean_array_get_size(v_elems_1158_);
v___x_1163_ = lean_unsigned_to_nat(8u);
v___x_1164_ = lean_nat_dec_eq(v___x_1162_, v___x_1163_);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1169_; 
lean_dec_ref(v_elems_1158_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v___x_1165_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0));
v___x_1166_ = l_Nat_reprFast(v___x_1162_);
v___x_1167_ = lean_string_append(v___x_1165_, v___x_1166_);
lean_dec_ref(v___x_1166_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set_tag(v___x_1160_, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1167_);
v___x_1169_ = v___x_1160_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
lean_del_object(v___x_1160_);
v___x_1171_ = lean_box(0);
v___x_1172_ = lean_unsigned_to_nat(0u);
v___x_1173_ = lean_array_get_borrowed(v___x_1171_, v_elems_1158_, v___x_1172_);
lean_inc(v___x_1173_);
v___x_1174_ = l_Lean_Json_getNat_x3f(v___x_1173_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
lean_dec_ref(v_elems_1158_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1174_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1174_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1174_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v_a_1183_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1174_, 1);
v___x_1184_ = lean_unsigned_to_nat(1u);
v___x_1185_ = lean_array_get_borrowed(v___x_1171_, v_elems_1158_, v___x_1184_);
lean_inc(v___x_1185_);
v___x_1186_ = l_Lean_Json_getNat_x3f(v___x_1185_);
if (lean_obj_tag(v___x_1186_) == 0)
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1194_; 
lean_dec(v_a_1183_);
lean_dec_ref(v_elems_1158_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v_a_1187_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1189_ = v___x_1186_;
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1186_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1192_; 
if (v_isShared_1190_ == 0)
{
v___x_1192_ = v___x_1189_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_a_1187_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v_a_1195_ = lean_ctor_get(v___x_1186_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1186_, 1);
v___x_1196_ = lean_unsigned_to_nat(2u);
v___x_1197_ = lean_array_get_borrowed(v___x_1171_, v_elems_1158_, v___x_1196_);
lean_inc(v___x_1197_);
v___x_1198_ = l_Lean_Json_getNat_x3f(v___x_1197_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_dec(v_a_1195_);
lean_dec(v_a_1183_);
lean_dec_ref(v_elems_1158_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1198_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1198_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
else
{
lean_object* v_a_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v_a_1207_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1198_, 1);
v___x_1208_ = lean_unsigned_to_nat(3u);
v___x_1209_ = lean_array_get_borrowed(v___x_1171_, v_elems_1158_, v___x_1208_);
lean_inc(v___x_1209_);
v___x_1210_ = l_Lean_Json_getNat_x3f(v___x_1209_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
lean_dec(v_a_1207_);
lean_dec(v_a_1195_);
lean_dec(v_a_1183_);
lean_dec_ref(v_elems_1158_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v_a_1211_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v___x_1210_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1210_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_a_1211_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
else
{
lean_object* v_a_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v_a_1219_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_a_1219_);
lean_dec_ref_known(v___x_1210_, 1);
v___x_1220_ = lean_unsigned_to_nat(4u);
v___x_1221_ = lean_array_get_borrowed(v___x_1171_, v_elems_1158_, v___x_1220_);
lean_inc(v___x_1221_);
v___x_1222_ = l_Lean_Json_getNat_x3f(v___x_1221_);
if (lean_obj_tag(v___x_1222_) == 0)
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec(v_a_1219_);
lean_dec(v_a_1207_);
lean_dec(v_a_1195_);
lean_dec(v_a_1183_);
lean_dec_ref(v_elems_1158_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1222_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1222_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1222_);
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
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
else
{
lean_object* v_a_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v_a_1231_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_a_1231_);
lean_dec_ref_known(v___x_1222_, 1);
v___x_1232_ = lean_unsigned_to_nat(5u);
v___x_1233_ = lean_array_get_borrowed(v___x_1171_, v_elems_1158_, v___x_1232_);
lean_inc(v___x_1233_);
v___x_1234_ = l_Lean_Json_getNat_x3f(v___x_1233_);
if (lean_obj_tag(v___x_1234_) == 0)
{
lean_object* v_a_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1242_; 
lean_dec(v_a_1231_);
lean_dec(v_a_1219_);
lean_dec(v_a_1207_);
lean_dec(v_a_1195_);
lean_dec(v_a_1183_);
lean_dec_ref(v_elems_1158_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v_a_1235_ = lean_ctor_get(v___x_1234_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1237_ = v___x_1234_;
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_a_1235_);
lean_dec(v___x_1234_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1240_; 
if (v_isShared_1238_ == 0)
{
v___x_1240_ = v___x_1237_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_a_1235_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_a_1243_ = lean_ctor_get(v___x_1234_, 0);
lean_inc(v_a_1243_);
lean_dec_ref_known(v___x_1234_, 1);
v___x_1244_ = lean_unsigned_to_nat(6u);
v___x_1245_ = lean_array_get_borrowed(v___x_1171_, v_elems_1158_, v___x_1244_);
lean_inc(v___x_1245_);
v___x_1246_ = l_Lean_Json_getNat_x3f(v___x_1245_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec(v_a_1243_);
lean_dec(v_a_1231_);
lean_dec(v_a_1219_);
lean_dec(v_a_1207_);
lean_dec(v_a_1195_);
lean_dec(v_a_1183_);
lean_dec_ref(v_elems_1158_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1246_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1246_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
else
{
lean_object* v_a_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v_a_1255_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1255_);
lean_dec_ref_known(v___x_1246_, 1);
v___x_1256_ = lean_unsigned_to_nat(7u);
v___x_1257_ = lean_array_get(v___x_1171_, v_elems_1158_, v___x_1256_);
lean_dec_ref(v_elems_1158_);
v___x_1258_ = l_Lean_Json_getNat_x3f(v___x_1257_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
lean_dec(v_a_1255_);
lean_dec(v_a_1243_);
lean_dec(v_a_1231_);
lean_dec(v_a_1219_);
lean_dec(v_a_1207_);
lean_dec(v_a_1195_);
lean_dec(v_a_1183_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1261_ = v___x_1258_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1258_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1276_; 
v_a_1267_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1269_ = v___x_1258_;
v_isShared_1270_ = v_isSharedCheck_1276_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1258_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1276_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1274_; 
v___x_1271_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1271_, 0, v_a_1183_);
lean_ctor_set(v___x_1271_, 1, v_a_1195_);
lean_ctor_set(v___x_1271_, 2, v_a_1207_);
lean_ctor_set(v___x_1271_, 3, v_a_1219_);
lean_ctor_set(v___x_1271_, 4, v_a_1231_);
lean_ctor_set(v___x_1271_, 5, v_a_1243_);
lean_ctor_set(v___x_1271_, 6, v_a_1255_);
lean_ctor_set(v___x_1271_, 7, v_a_1267_);
v___x_1272_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0___redArg(v_k_1156_, v___x_1271_, v_m_1155_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 0, v___x_1272_);
v___x_1274_ = v___x_1269_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1272_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
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
}
}
else
{
lean_object* v___x_1278_; 
lean_dec(v_v_1157_);
lean_dec_ref(v_k_1156_);
lean_dec(v_m_1155_);
v___x_1278_ = ((lean_object*)(l_Lean_Lsp_Decls_instFromJson___lam__0___closed__0));
return v___x_1278_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_Decls_instFromJson___lam__1(lean_object* v___x_1279_, lean_object* v___f_1280_, lean_object* v_j_1281_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_Json_getObj_x3f(v_j_1281_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
lean_dec_ref(v___f_1280_);
lean_dec_ref(v___x_1279_);
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1282_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1282_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v_a_1291_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1291_);
lean_dec_ref_known(v___x_1282_, 1);
v___x_1292_ = lean_box(1);
v___x_1293_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v___x_1279_, v___f_1280_, v___x_1292_, v_a_1291_);
return v___x_1293_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_mk(lean_object* v_range_1323_, lean_object* v_parentDecl_x3f_1324_){
_start:
{
if (lean_obj_tag(v_parentDecl_x3f_1324_) == 0)
{
lean_object* v_start_1325_; lean_object* v_end_1326_; lean_object* v_line_1327_; lean_object* v_character_1328_; lean_object* v_line_1329_; lean_object* v_character_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v_start_1325_ = lean_ctor_get(v_range_1323_, 0);
v_end_1326_ = lean_ctor_get(v_range_1323_, 1);
v_line_1327_ = lean_ctor_get(v_start_1325_, 0);
v_character_1328_ = lean_ctor_get(v_start_1325_, 1);
v_line_1329_ = lean_ctor_get(v_end_1326_, 0);
v_character_1330_ = lean_ctor_get(v_end_1326_, 1);
v___x_1331_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
lean_inc(v_character_1330_);
lean_inc(v_line_1329_);
lean_inc(v_character_1328_);
lean_inc(v_line_1327_);
v___x_1332_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1332_, 0, v_line_1327_);
lean_ctor_set(v___x_1332_, 1, v_character_1328_);
lean_ctor_set(v___x_1332_, 2, v_line_1329_);
lean_ctor_set(v___x_1332_, 3, v_character_1330_);
lean_ctor_set(v___x_1332_, 4, v___x_1331_);
return v___x_1332_;
}
else
{
lean_object* v_start_1333_; lean_object* v_end_1334_; lean_object* v_line_1335_; lean_object* v_character_1336_; lean_object* v_line_1337_; lean_object* v_character_1338_; lean_object* v_val_1339_; lean_object* v___x_1340_; 
v_start_1333_ = lean_ctor_get(v_range_1323_, 0);
v_end_1334_ = lean_ctor_get(v_range_1323_, 1);
v_line_1335_ = lean_ctor_get(v_start_1333_, 0);
v_character_1336_ = lean_ctor_get(v_start_1333_, 1);
v_line_1337_ = lean_ctor_get(v_end_1334_, 0);
v_character_1338_ = lean_ctor_get(v_end_1334_, 1);
v_val_1339_ = lean_ctor_get(v_parentDecl_x3f_1324_, 0);
lean_inc(v_val_1339_);
lean_inc(v_character_1338_);
lean_inc(v_line_1337_);
lean_inc(v_character_1336_);
lean_inc(v_line_1335_);
v___x_1340_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1340_, 0, v_line_1335_);
lean_ctor_set(v___x_1340_, 1, v_character_1336_);
lean_ctor_set(v___x_1340_, 2, v_line_1337_);
lean_ctor_set(v___x_1340_, 3, v_character_1338_);
lean_ctor_set(v___x_1340_, 4, v_val_1339_);
return v___x_1340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_mk___boxed(lean_object* v_range_1341_, lean_object* v_parentDecl_x3f_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_Lsp_RefInfo_Location_mk(v_range_1341_, v_parentDecl_x3f_1342_);
lean_dec(v_parentDecl_x3f_1342_);
lean_dec_ref(v_range_1341_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_range(lean_object* v_l_1344_){
_start:
{
lean_object* v_startPosLine_1345_; lean_object* v_startPosCharacter_1346_; lean_object* v_endPosLine_1347_; lean_object* v_endPosCharacter_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v_startPosLine_1345_ = lean_ctor_get(v_l_1344_, 0);
v_startPosCharacter_1346_ = lean_ctor_get(v_l_1344_, 1);
v_endPosLine_1347_ = lean_ctor_get(v_l_1344_, 2);
v_endPosCharacter_1348_ = lean_ctor_get(v_l_1344_, 3);
lean_inc(v_startPosCharacter_1346_);
lean_inc(v_startPosLine_1345_);
v___x_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1349_, 0, v_startPosLine_1345_);
lean_ctor_set(v___x_1349_, 1, v_startPosCharacter_1346_);
lean_inc(v_endPosCharacter_1348_);
lean_inc(v_endPosLine_1347_);
v___x_1350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1350_, 0, v_endPosLine_1347_);
lean_ctor_set(v___x_1350_, 1, v_endPosCharacter_1348_);
v___x_1351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1349_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_range___boxed(lean_object* v_l_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_Lean_Lsp_RefInfo_Location_range(v_l_1352_);
lean_dec_ref(v_l_1352_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(lean_object* v_l_1354_){
_start:
{
lean_object* v_parentDecl_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; uint8_t v___x_1358_; 
v_parentDecl_1355_ = lean_ctor_get(v_l_1354_, 4);
v___x_1356_ = lean_string_utf8_byte_size(v_parentDecl_1355_);
v___x_1357_ = lean_unsigned_to_nat(0u);
v___x_1358_ = lean_nat_dec_eq(v___x_1356_, v___x_1357_);
if (v___x_1358_ == 0)
{
lean_object* v___x_1359_; 
lean_inc_ref(v_parentDecl_1355_);
v___x_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1359_, 0, v_parentDecl_1355_);
return v___x_1359_;
}
else
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_box(0);
return v___x_1360_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_Location_parentDecl_x3f___boxed(lean_object* v_l_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_l_1361_);
lean_dec_ref(v_l_1361_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__0(lean_object* v_n_1363_){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = l_Lean_JsonNumber_fromNat(v_n_1363_);
v___x_1365_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__1(lean_object* v___f_1366_, lean_object* v_l_1367_){
_start:
{
lean_object* v_startPosLine_1368_; lean_object* v_startPosCharacter_1369_; lean_object* v_endPosLine_1370_; lean_object* v_endPosCharacter_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v_range_1377_; lean_object* v___x_1378_; 
v_startPosLine_1368_ = lean_ctor_get(v_l_1367_, 0);
v_startPosCharacter_1369_ = lean_ctor_get(v_l_1367_, 1);
v_endPosLine_1370_ = lean_ctor_get(v_l_1367_, 2);
v_endPosCharacter_1371_ = lean_ctor_get(v_l_1367_, 3);
v___x_1372_ = lean_box(0);
lean_inc(v_endPosCharacter_1371_);
v___x_1373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1373_, 0, v_endPosCharacter_1371_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
lean_inc(v_endPosLine_1370_);
v___x_1374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1374_, 0, v_endPosLine_1370_);
lean_ctor_set(v___x_1374_, 1, v___x_1373_);
lean_inc(v_startPosCharacter_1369_);
v___x_1375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1375_, 0, v_startPosCharacter_1369_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
lean_inc(v_startPosLine_1368_);
v___x_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1376_, 0, v_startPosLine_1368_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v_range_1377_ = l_List_mapTR_loop___redArg(v___f_1366_, v___x_1376_, v___x_1372_);
v___x_1378_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_l_1367_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v___x_1379_; 
v___x_1379_ = l_List_appendTR___redArg(v_range_1377_, v___x_1372_);
return v___x_1379_;
}
else
{
lean_object* v_val_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1389_; 
v_val_1380_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1382_ = v___x_1378_;
v_isShared_1383_ = v_isSharedCheck_1389_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_val_1380_);
lean_dec(v___x_1378_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1389_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set_tag(v___x_1382_, 3);
v___x_1385_ = v___x_1382_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_val_1380_);
v___x_1385_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1385_);
lean_ctor_set(v___x_1386_, 1, v___x_1372_);
v___x_1387_ = l_List_appendTR___redArg(v_range_1377_, v___x_1386_);
return v___x_1387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__1___boxed(lean_object* v___f_1390_, lean_object* v_l_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l_Lean_Lsp_instToJsonRefInfo___lam__1(v___f_1390_, v_l_1391_);
lean_dec_ref(v_l_1391_);
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__2(lean_object* v_locationToList_1393_, lean_object* v_x_1394_){
_start:
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_apply_1(v_locationToList_1393_, v_x_1394_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRefInfo___lam__3(lean_object* v___x_1417_, lean_object* v___f_1418_, lean_object* v_locationToList_1419_, lean_object* v_i_1420_){
_start:
{
lean_object* v_definition_x3f_1421_; lean_object* v_usages_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1454_; 
v_definition_x3f_1421_ = lean_ctor_get(v_i_1420_, 0);
v_usages_1422_ = lean_ctor_get(v_i_1420_, 1);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_i_1420_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1424_ = v_i_1420_;
v_isShared_1425_ = v_isSharedCheck_1454_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_usages_1422_);
lean_inc(v_definition_x3f_1421_);
lean_dec(v_i_1420_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1454_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1426_; lean_object* v___y_1428_; 
v___x_1426_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
if (lean_obj_tag(v_definition_x3f_1421_) == 0)
{
lean_object* v___x_1444_; 
lean_dec_ref(v_locationToList_1419_);
v___x_1444_ = lean_box(0);
v___y_1428_ = v___x_1444_;
goto v___jp_1427_;
}
else
{
lean_object* v_val_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1453_; 
v_val_1445_ = lean_ctor_get(v_definition_x3f_1421_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_definition_x3f_1421_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1447_ = v_definition_x3f_1421_;
v_isShared_1448_ = v_isSharedCheck_1453_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_val_1445_);
lean_dec(v_definition_x3f_1421_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1453_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v___x_1451_; 
v___x_1449_ = lean_apply_1(v_locationToList_1419_, v_val_1445_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set(v___x_1447_, 0, v___x_1449_);
v___x_1451_ = v___x_1447_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1449_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
v___y_1428_ = v___x_1451_;
goto v___jp_1427_;
}
}
}
v___jp_1427_:
{
lean_object* v___x_1429_; lean_object* v___x_1431_; 
lean_inc_ref(v___x_1417_);
v___x_1429_ = l_Lean_Option_toJson___redArg(v___x_1417_, v___y_1428_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 1, v___x_1429_);
lean_ctor_set(v___x_1424_, 0, v___x_1426_);
v___x_1431_ = v___x_1424_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1426_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v___x_1429_);
v___x_1431_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; size_t v_sz_1434_; size_t v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1432_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_1433_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__11));
v_sz_1434_ = lean_array_size(v_usages_1422_);
v___x_1435_ = ((size_t)0ULL);
v___x_1436_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1433_, v___f_1418_, v_sz_1434_, v___x_1435_, v_usages_1422_);
v___x_1437_ = l_Lean_Array_toJson___redArg(v___x_1417_, v___x_1436_);
v___x_1438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1432_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = lean_box(0);
v___x_1440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1438_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1431_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
v___x_1442_ = l_Lean_Json_mkObj(v___x_1441_);
lean_dec_ref_known(v___x_1441_, 2);
return v___x_1442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0(lean_object* v_a_1469_){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; uint8_t v___y_1473_; uint8_t v___y_1552_; uint8_t v___y_1553_; uint8_t v___y_1554_; uint8_t v___y_1560_; uint8_t v___x_1565_; 
v___x_1470_ = lean_array_get_size(v_a_1469_);
v___x_1471_ = lean_unsigned_to_nat(4u);
v___x_1565_ = lean_nat_dec_eq(v___x_1470_, v___x_1471_);
if (v___x_1565_ == 0)
{
uint8_t v___x_1566_; 
v___x_1566_ = 1;
v___y_1560_ = v___x_1566_;
goto v___jp_1559_;
}
else
{
uint8_t v___x_1567_; 
v___x_1567_ = 0;
v___y_1560_ = v___x_1567_;
goto v___jp_1559_;
}
v___jp_1472_:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1474_ = lean_unsigned_to_nat(0u);
v___x_1475_ = lean_array_fget_borrowed(v_a_1469_, v___x_1474_);
lean_inc(v___x_1475_);
v___x_1476_ = l_Lean_Json_getNat_x3f(v___x_1475_);
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1484_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1479_ = v___x_1476_;
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_a_1477_);
lean_dec(v___x_1476_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1482_; 
if (v_isShared_1480_ == 0)
{
v___x_1482_ = v___x_1479_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_a_1477_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v_a_1485_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1485_);
lean_dec_ref_known(v___x_1476_, 1);
v___x_1486_ = lean_unsigned_to_nat(1u);
v___x_1487_ = lean_array_fget_borrowed(v_a_1469_, v___x_1486_);
lean_inc(v___x_1487_);
v___x_1488_ = l_Lean_Json_getNat_x3f(v___x_1487_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
lean_dec(v_a_1485_);
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1488_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1488_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v_a_1497_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_a_1497_);
lean_dec_ref_known(v___x_1488_, 1);
v___x_1498_ = lean_unsigned_to_nat(2u);
v___x_1499_ = lean_array_fget_borrowed(v_a_1469_, v___x_1498_);
lean_inc(v___x_1499_);
v___x_1500_ = l_Lean_Json_getNat_x3f(v___x_1499_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1508_; 
lean_dec(v_a_1497_);
lean_dec(v_a_1485_);
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1503_ = v___x_1500_;
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1500_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1506_; 
if (v_isShared_1504_ == 0)
{
v___x_1506_ = v___x_1503_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1501_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
else
{
lean_object* v_a_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; 
v_a_1509_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_a_1509_);
lean_dec_ref_known(v___x_1500_, 1);
v___x_1510_ = lean_unsigned_to_nat(3u);
v___x_1511_ = lean_array_fget_borrowed(v_a_1469_, v___x_1510_);
lean_inc(v___x_1511_);
v___x_1512_ = l_Lean_Json_getNat_x3f(v___x_1511_);
if (lean_obj_tag(v___x_1512_) == 0)
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec(v_a_1509_);
lean_dec(v_a_1497_);
lean_dec(v_a_1485_);
v_a_1513_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1512_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1512_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
else
{
if (v___y_1473_ == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1530_; 
v_a_1521_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1523_ = v___x_1512_;
v_isShared_1524_ = v_isSharedCheck_1530_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1512_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1530_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1528_; 
v___x_1525_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
v___x_1526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1526_, 0, v_a_1485_);
lean_ctor_set(v___x_1526_, 1, v_a_1497_);
lean_ctor_set(v___x_1526_, 2, v_a_1509_);
lean_ctor_set(v___x_1526_, 3, v_a_1521_);
lean_ctor_set(v___x_1526_, 4, v___x_1525_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 0, v___x_1526_);
v___x_1528_ = v___x_1523_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1526_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v_a_1531_ = lean_ctor_get(v___x_1512_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1512_, 1);
v___x_1532_ = lean_array_fget_borrowed(v_a_1469_, v___x_1471_);
lean_inc(v___x_1532_);
v___x_1533_ = l_Lean_Json_getStr_x3f(v___x_1532_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_dec(v_a_1531_);
lean_dec(v_a_1509_);
lean_dec(v_a_1497_);
lean_dec(v_a_1485_);
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1533_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1533_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1550_; 
v_a_1542_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1544_ = v___x_1533_;
v_isShared_1545_ = v_isSharedCheck_1550_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1533_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1550_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v___x_1546_; lean_object* v___x_1548_; 
v___x_1546_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1546_, 0, v_a_1485_);
lean_ctor_set(v___x_1546_, 1, v_a_1497_);
lean_ctor_set(v___x_1546_, 2, v_a_1509_);
lean_ctor_set(v___x_1546_, 3, v_a_1531_);
lean_ctor_set(v___x_1546_, 4, v_a_1542_);
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 0, v___x_1546_);
v___x_1548_ = v___x_1544_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v___x_1546_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
}
}
}
}
}
v___jp_1551_:
{
if (v___y_1553_ == 0)
{
v___y_1473_ = v___y_1552_;
goto v___jp_1472_;
}
else
{
if (v___y_1554_ == 0)
{
v___y_1473_ = v___y_1552_;
goto v___jp_1472_;
}
else
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1555_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0));
v___x_1556_ = l_Nat_reprFast(v___x_1470_);
v___x_1557_ = lean_string_append(v___x_1555_, v___x_1556_);
lean_dec_ref(v___x_1556_);
v___x_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
return v___x_1558_;
}
}
}
v___jp_1559_:
{
lean_object* v___x_1561_; uint8_t v___x_1562_; 
v___x_1561_ = lean_unsigned_to_nat(5u);
v___x_1562_ = lean_nat_dec_eq(v___x_1470_, v___x_1561_);
if (v___x_1562_ == 0)
{
uint8_t v___x_1563_; 
v___x_1563_ = 1;
v___y_1552_ = v___x_1562_;
v___y_1553_ = v___y_1560_;
v___y_1554_ = v___x_1563_;
goto v___jp_1551_;
}
else
{
uint8_t v___x_1564_; 
v___x_1564_ = 0;
v___y_1552_ = v___x_1562_;
v___y_1553_ = v___y_1560_;
v___y_1554_ = v___x_1564_;
goto v___jp_1551_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__0___boxed(lean_object* v_a_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Lean_Lsp_instFromJsonRefInfo___lam__0(v_a_1568_);
lean_dec_ref(v_a_1568_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRefInfo___lam__1(lean_object* v___x_1570_, lean_object* v___x_1571_, lean_object* v___x_1572_, lean_object* v_toLocation_1573_, lean_object* v_j_1574_){
_start:
{
lean_object* v_definition_x3f_1576_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
lean_inc(v_j_1574_);
v___x_1609_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1574_, v___x_1570_, v___x_1608_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
lean_dec(v_j_1574_);
lean_dec_ref(v_toLocation_1573_);
lean_dec_ref(v___x_1572_);
lean_dec_ref(v___x_1571_);
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1609_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1609_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1610_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
else
{
lean_object* v_a_1618_; 
v_a_1618_ = lean_ctor_get(v___x_1609_, 0);
lean_inc(v_a_1618_);
lean_dec_ref_known(v___x_1609_, 1);
if (lean_obj_tag(v_a_1618_) == 0)
{
lean_object* v___x_1619_; 
v___x_1619_ = lean_box(0);
v_definition_x3f_1576_ = v___x_1619_;
goto v___jp_1575_;
}
else
{
lean_object* v_val_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1637_; 
v_val_1620_ = lean_ctor_get(v_a_1618_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v_a_1618_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1622_ = v_a_1618_;
v_isShared_1623_ = v_isSharedCheck_1637_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_val_1620_);
lean_dec(v_a_1618_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1637_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1624_; 
lean_inc_ref(v_toLocation_1573_);
v___x_1624_ = lean_apply_1(v_toLocation_1573_, v_val_1620_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_del_object(v___x_1622_);
lean_dec(v_j_1574_);
lean_dec_ref(v_toLocation_1573_);
lean_dec_ref(v___x_1572_);
lean_dec_ref(v___x_1571_);
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1624_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1624_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; 
v_a_1633_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_a_1633_);
lean_dec_ref_known(v___x_1624_, 1);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 0, v_a_1633_);
v___x_1635_ = v___x_1622_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1633_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
v_definition_x3f_1576_ = v___x_1635_;
goto v___jp_1575_;
}
}
}
}
}
v___jp_1575_:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_1578_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1574_, v___x_1571_, v___x_1577_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1586_; 
lean_dec(v_definition_x3f_1576_);
lean_dec_ref(v_toLocation_1573_);
lean_dec_ref(v___x_1572_);
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1581_ = v___x_1578_;
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_a_1579_);
lean_dec(v___x_1578_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1584_; 
if (v_isShared_1582_ == 0)
{
v___x_1584_ = v___x_1581_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_a_1579_);
v___x_1584_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
return v___x_1584_;
}
}
}
else
{
lean_object* v_a_1587_; size_t v_sz_1588_; size_t v___x_1589_; lean_object* v___x_1590_; 
v_a_1587_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1587_);
lean_dec_ref_known(v___x_1578_, 1);
v_sz_1588_ = lean_array_size(v_a_1587_);
v___x_1589_ = ((size_t)0ULL);
v___x_1590_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1572_, v_toLocation_1573_, v_sz_1588_, v___x_1589_, v_a_1587_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
lean_dec(v_definition_x3f_1576_);
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___x_1590_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1590_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1607_; 
v_a_1599_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1601_ = v___x_1590_;
v_isShared_1602_ = v_isSharedCheck_1607_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1590_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1607_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1603_; lean_object* v___x_1605_; 
v___x_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1603_, 0, v_definition_x3f_1576_);
lean_ctor_set(v___x_1603_, 1, v_a_1599_);
if (v_isShared_1602_ == 0)
{
lean_ctor_set(v___x_1601_, 0, v___x_1603_);
v___x_1605_ = v___x_1601_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v___x_1603_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Lsp_ModuleRefs_instEmptyCollection(void){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_box(1);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad___redArg___lam__0(lean_object* v_f_1653_, lean_object* v_a_1654_, lean_object* v_b_1655_, lean_object* v_c_1656_){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v_a_1654_);
lean_ctor_set(v___x_1657_, 1, v_b_1655_);
v___x_1658_ = lean_apply_2(v_f_1653_, v___x_1657_, v_c_1656_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad___redArg___lam__2(lean_object* v_inst_1659_, lean_object* v_00_u03b2_1660_, lean_object* v_map_1661_, lean_object* v_init_1662_, lean_object* v_f_1663_){
_start:
{
lean_object* v_toApplicative_1664_; lean_object* v_toBind_1665_; lean_object* v_toPure_1666_; lean_object* v___f_1667_; lean_object* v___x_1668_; lean_object* v___f_1669_; lean_object* v___x_1670_; 
v_toApplicative_1664_ = lean_ctor_get(v_inst_1659_, 0);
v_toBind_1665_ = lean_ctor_get(v_inst_1659_, 1);
lean_inc(v_toBind_1665_);
v_toPure_1666_ = lean_ctor_get(v_toApplicative_1664_, 1);
lean_inc(v_toPure_1666_);
v___f_1667_ = lean_alloc_closure((void*)(l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1667_, 0, v_f_1663_);
v___x_1668_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_1659_, v___f_1667_, v_init_1662_, v_map_1661_);
v___f_1669_ = lean_alloc_closure((void*)(l_Lean_Lsp_Decls_instForInProdStringDeclInfoOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1669_, 0, v_toPure_1666_);
v___x_1670_ = lean_apply_4(v_toBind_1665_, lean_box(0), lean_box(0), v___x_1668_, v___f_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad___redArg(lean_object* v_inst_1671_){
_start:
{
lean_object* v___f_1672_; 
v___f_1672_ = lean_alloc_closure((void*)(l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1672_, 0, v_inst_1671_);
return v___f_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad(lean_object* v_m_1673_, lean_object* v_inst_1674_){
_start:
{
lean_object* v___f_1675_; 
v___f_1675_ = lean_alloc_closure((void*)(l_Lean_Lsp_ModuleRefs_instForInProdRefIdentRefInfoOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1675_, 0, v_inst_1674_);
return v___f_1675_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0___redArg(lean_object* v_k_1676_, lean_object* v_v_1677_, lean_object* v_t_1678_){
_start:
{
if (lean_obj_tag(v_t_1678_) == 0)
{
lean_object* v_size_1679_; lean_object* v_k_1680_; lean_object* v_v_1681_; lean_object* v_l_1682_; lean_object* v_r_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1963_; 
v_size_1679_ = lean_ctor_get(v_t_1678_, 0);
v_k_1680_ = lean_ctor_get(v_t_1678_, 1);
v_v_1681_ = lean_ctor_get(v_t_1678_, 2);
v_l_1682_ = lean_ctor_get(v_t_1678_, 3);
v_r_1683_ = lean_ctor_get(v_t_1678_, 4);
v_isSharedCheck_1963_ = !lean_is_exclusive(v_t_1678_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1685_ = v_t_1678_;
v_isShared_1686_ = v_isSharedCheck_1963_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_r_1683_);
lean_inc(v_l_1682_);
lean_inc(v_v_1681_);
lean_inc(v_k_1680_);
lean_inc(v_size_1679_);
lean_dec(v_t_1678_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1963_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
uint8_t v___x_1687_; 
v___x_1687_ = l_Lean_Lsp_instOrdRefIdent_ord(v_k_1676_, v_k_1680_);
switch(v___x_1687_)
{
case 0:
{
lean_object* v_impl_1688_; lean_object* v___x_1689_; 
lean_dec(v_size_1679_);
v_impl_1688_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0___redArg(v_k_1676_, v_v_1677_, v_l_1682_);
v___x_1689_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1683_) == 0)
{
lean_object* v_size_1690_; lean_object* v_size_1691_; lean_object* v_k_1692_; lean_object* v_v_1693_; lean_object* v_l_1694_; lean_object* v_r_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v_size_1690_ = lean_ctor_get(v_r_1683_, 0);
v_size_1691_ = lean_ctor_get(v_impl_1688_, 0);
lean_inc(v_size_1691_);
v_k_1692_ = lean_ctor_get(v_impl_1688_, 1);
lean_inc(v_k_1692_);
v_v_1693_ = lean_ctor_get(v_impl_1688_, 2);
lean_inc(v_v_1693_);
v_l_1694_ = lean_ctor_get(v_impl_1688_, 3);
lean_inc(v_l_1694_);
v_r_1695_ = lean_ctor_get(v_impl_1688_, 4);
lean_inc(v_r_1695_);
v___x_1696_ = lean_unsigned_to_nat(3u);
v___x_1697_ = lean_nat_mul(v___x_1696_, v_size_1690_);
v___x_1698_ = lean_nat_dec_lt(v___x_1697_, v_size_1691_);
lean_dec(v___x_1697_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1702_; 
lean_dec(v_r_1695_);
lean_dec(v_l_1694_);
lean_dec(v_v_1693_);
lean_dec(v_k_1692_);
v___x_1699_ = lean_nat_add(v___x_1689_, v_size_1691_);
lean_dec(v_size_1691_);
v___x_1700_ = lean_nat_add(v___x_1699_, v_size_1690_);
lean_dec(v___x_1699_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 3, v_impl_1688_);
lean_ctor_set(v___x_1685_, 0, v___x_1700_);
v___x_1702_ = v___x_1685_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1700_);
lean_ctor_set(v_reuseFailAlloc_1703_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1703_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1703_, 3, v_impl_1688_);
lean_ctor_set(v_reuseFailAlloc_1703_, 4, v_r_1683_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
else
{
lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1769_; 
v_isSharedCheck_1769_ = !lean_is_exclusive(v_impl_1688_);
if (v_isSharedCheck_1769_ == 0)
{
lean_object* v_unused_1770_; lean_object* v_unused_1771_; lean_object* v_unused_1772_; lean_object* v_unused_1773_; lean_object* v_unused_1774_; 
v_unused_1770_ = lean_ctor_get(v_impl_1688_, 4);
lean_dec(v_unused_1770_);
v_unused_1771_ = lean_ctor_get(v_impl_1688_, 3);
lean_dec(v_unused_1771_);
v_unused_1772_ = lean_ctor_get(v_impl_1688_, 2);
lean_dec(v_unused_1772_);
v_unused_1773_ = lean_ctor_get(v_impl_1688_, 1);
lean_dec(v_unused_1773_);
v_unused_1774_ = lean_ctor_get(v_impl_1688_, 0);
lean_dec(v_unused_1774_);
v___x_1705_ = v_impl_1688_;
v_isShared_1706_ = v_isSharedCheck_1769_;
goto v_resetjp_1704_;
}
else
{
lean_dec(v_impl_1688_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1769_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v_size_1707_; lean_object* v_size_1708_; lean_object* v_k_1709_; lean_object* v_v_1710_; lean_object* v_l_1711_; lean_object* v_r_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v_size_1707_ = lean_ctor_get(v_l_1694_, 0);
v_size_1708_ = lean_ctor_get(v_r_1695_, 0);
v_k_1709_ = lean_ctor_get(v_r_1695_, 1);
v_v_1710_ = lean_ctor_get(v_r_1695_, 2);
v_l_1711_ = lean_ctor_get(v_r_1695_, 3);
v_r_1712_ = lean_ctor_get(v_r_1695_, 4);
v___x_1713_ = lean_unsigned_to_nat(2u);
v___x_1714_ = lean_nat_mul(v___x_1713_, v_size_1707_);
v___x_1715_ = lean_nat_dec_lt(v_size_1708_, v___x_1714_);
lean_dec(v___x_1714_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1744_; 
lean_inc(v_r_1712_);
lean_inc(v_l_1711_);
lean_inc(v_v_1710_);
lean_inc(v_k_1709_);
v_isSharedCheck_1744_ = !lean_is_exclusive(v_r_1695_);
if (v_isSharedCheck_1744_ == 0)
{
lean_object* v_unused_1745_; lean_object* v_unused_1746_; lean_object* v_unused_1747_; lean_object* v_unused_1748_; lean_object* v_unused_1749_; 
v_unused_1745_ = lean_ctor_get(v_r_1695_, 4);
lean_dec(v_unused_1745_);
v_unused_1746_ = lean_ctor_get(v_r_1695_, 3);
lean_dec(v_unused_1746_);
v_unused_1747_ = lean_ctor_get(v_r_1695_, 2);
lean_dec(v_unused_1747_);
v_unused_1748_ = lean_ctor_get(v_r_1695_, 1);
lean_dec(v_unused_1748_);
v_unused_1749_ = lean_ctor_get(v_r_1695_, 0);
lean_dec(v_unused_1749_);
v___x_1717_ = v_r_1695_;
v_isShared_1718_ = v_isSharedCheck_1744_;
goto v_resetjp_1716_;
}
else
{
lean_dec(v_r_1695_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1744_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1724_; lean_object* v___x_1732_; lean_object* v___y_1734_; 
v___x_1719_ = lean_nat_add(v___x_1689_, v_size_1691_);
lean_dec(v_size_1691_);
v___x_1720_ = lean_nat_add(v___x_1719_, v_size_1690_);
lean_dec(v___x_1719_);
v___x_1732_ = lean_nat_add(v___x_1689_, v_size_1707_);
if (lean_obj_tag(v_l_1711_) == 0)
{
lean_object* v_size_1742_; 
v_size_1742_ = lean_ctor_get(v_l_1711_, 0);
lean_inc(v_size_1742_);
v___y_1734_ = v_size_1742_;
goto v___jp_1733_;
}
else
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_unsigned_to_nat(0u);
v___y_1734_ = v___x_1743_;
goto v___jp_1733_;
}
v___jp_1721_:
{
lean_object* v___x_1725_; lean_object* v___x_1727_; 
v___x_1725_ = lean_nat_add(v___y_1723_, v___y_1724_);
lean_dec(v___y_1724_);
lean_dec(v___y_1723_);
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 4, v_r_1683_);
lean_ctor_set(v___x_1717_, 3, v_r_1712_);
lean_ctor_set(v___x_1717_, 2, v_v_1681_);
lean_ctor_set(v___x_1717_, 1, v_k_1680_);
lean_ctor_set(v___x_1717_, 0, v___x_1725_);
v___x_1727_ = v___x_1717_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1725_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1731_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1731_, 3, v_r_1712_);
lean_ctor_set(v_reuseFailAlloc_1731_, 4, v_r_1683_);
v___x_1727_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
lean_object* v___x_1729_; 
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 4, v___x_1727_);
lean_ctor_set(v___x_1705_, 3, v___y_1722_);
lean_ctor_set(v___x_1705_, 2, v_v_1710_);
lean_ctor_set(v___x_1705_, 1, v_k_1709_);
lean_ctor_set(v___x_1705_, 0, v___x_1720_);
v___x_1729_ = v___x_1705_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v___x_1720_);
lean_ctor_set(v_reuseFailAlloc_1730_, 1, v_k_1709_);
lean_ctor_set(v_reuseFailAlloc_1730_, 2, v_v_1710_);
lean_ctor_set(v_reuseFailAlloc_1730_, 3, v___y_1722_);
lean_ctor_set(v_reuseFailAlloc_1730_, 4, v___x_1727_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
return v___x_1729_;
}
}
}
v___jp_1733_:
{
lean_object* v___x_1735_; lean_object* v___x_1737_; 
v___x_1735_ = lean_nat_add(v___x_1732_, v___y_1734_);
lean_dec(v___y_1734_);
lean_dec(v___x_1732_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 4, v_l_1711_);
lean_ctor_set(v___x_1685_, 3, v_l_1694_);
lean_ctor_set(v___x_1685_, 2, v_v_1693_);
lean_ctor_set(v___x_1685_, 1, v_k_1692_);
lean_ctor_set(v___x_1685_, 0, v___x_1735_);
v___x_1737_ = v___x_1685_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1735_);
lean_ctor_set(v_reuseFailAlloc_1741_, 1, v_k_1692_);
lean_ctor_set(v_reuseFailAlloc_1741_, 2, v_v_1693_);
lean_ctor_set(v_reuseFailAlloc_1741_, 3, v_l_1694_);
lean_ctor_set(v_reuseFailAlloc_1741_, 4, v_l_1711_);
v___x_1737_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
lean_object* v___x_1738_; 
v___x_1738_ = lean_nat_add(v___x_1689_, v_size_1690_);
if (lean_obj_tag(v_r_1712_) == 0)
{
lean_object* v_size_1739_; 
v_size_1739_ = lean_ctor_get(v_r_1712_, 0);
lean_inc(v_size_1739_);
v___y_1722_ = v___x_1737_;
v___y_1723_ = v___x_1738_;
v___y_1724_ = v_size_1739_;
goto v___jp_1721_;
}
else
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_unsigned_to_nat(0u);
v___y_1722_ = v___x_1737_;
v___y_1723_ = v___x_1738_;
v___y_1724_ = v___x_1740_;
goto v___jp_1721_;
}
}
}
}
}
else
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1755_; 
lean_del_object(v___x_1685_);
v___x_1750_ = lean_nat_add(v___x_1689_, v_size_1691_);
lean_dec(v_size_1691_);
v___x_1751_ = lean_nat_add(v___x_1750_, v_size_1690_);
lean_dec(v___x_1750_);
v___x_1752_ = lean_nat_add(v___x_1689_, v_size_1690_);
v___x_1753_ = lean_nat_add(v___x_1752_, v_size_1708_);
lean_dec(v___x_1752_);
lean_inc_ref(v_r_1683_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 4, v_r_1683_);
lean_ctor_set(v___x_1705_, 3, v_r_1695_);
lean_ctor_set(v___x_1705_, 2, v_v_1681_);
lean_ctor_set(v___x_1705_, 1, v_k_1680_);
lean_ctor_set(v___x_1705_, 0, v___x_1753_);
v___x_1755_ = v___x_1705_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1753_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1768_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1768_, 3, v_r_1695_);
lean_ctor_set(v_reuseFailAlloc_1768_, 4, v_r_1683_);
v___x_1755_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1762_; 
v_isSharedCheck_1762_ = !lean_is_exclusive(v_r_1683_);
if (v_isSharedCheck_1762_ == 0)
{
lean_object* v_unused_1763_; lean_object* v_unused_1764_; lean_object* v_unused_1765_; lean_object* v_unused_1766_; lean_object* v_unused_1767_; 
v_unused_1763_ = lean_ctor_get(v_r_1683_, 4);
lean_dec(v_unused_1763_);
v_unused_1764_ = lean_ctor_get(v_r_1683_, 3);
lean_dec(v_unused_1764_);
v_unused_1765_ = lean_ctor_get(v_r_1683_, 2);
lean_dec(v_unused_1765_);
v_unused_1766_ = lean_ctor_get(v_r_1683_, 1);
lean_dec(v_unused_1766_);
v_unused_1767_ = lean_ctor_get(v_r_1683_, 0);
lean_dec(v_unused_1767_);
v___x_1757_ = v_r_1683_;
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
else
{
lean_dec(v_r_1683_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1760_; 
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 4, v___x_1755_);
lean_ctor_set(v___x_1757_, 3, v_l_1694_);
lean_ctor_set(v___x_1757_, 2, v_v_1693_);
lean_ctor_set(v___x_1757_, 1, v_k_1692_);
lean_ctor_set(v___x_1757_, 0, v___x_1751_);
v___x_1760_ = v___x_1757_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1761_, 1, v_k_1692_);
lean_ctor_set(v_reuseFailAlloc_1761_, 2, v_v_1693_);
lean_ctor_set(v_reuseFailAlloc_1761_, 3, v_l_1694_);
lean_ctor_set(v_reuseFailAlloc_1761_, 4, v___x_1755_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1775_; 
v_l_1775_ = lean_ctor_get(v_impl_1688_, 3);
lean_inc(v_l_1775_);
if (lean_obj_tag(v_l_1775_) == 0)
{
lean_object* v_r_1776_; lean_object* v_k_1777_; lean_object* v_v_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1789_; 
v_r_1776_ = lean_ctor_get(v_impl_1688_, 4);
v_k_1777_ = lean_ctor_get(v_impl_1688_, 1);
v_v_1778_ = lean_ctor_get(v_impl_1688_, 2);
v_isSharedCheck_1789_ = !lean_is_exclusive(v_impl_1688_);
if (v_isSharedCheck_1789_ == 0)
{
lean_object* v_unused_1790_; lean_object* v_unused_1791_; 
v_unused_1790_ = lean_ctor_get(v_impl_1688_, 3);
lean_dec(v_unused_1790_);
v_unused_1791_ = lean_ctor_get(v_impl_1688_, 0);
lean_dec(v_unused_1791_);
v___x_1780_ = v_impl_1688_;
v_isShared_1781_ = v_isSharedCheck_1789_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_r_1776_);
lean_inc(v_v_1778_);
lean_inc(v_k_1777_);
lean_dec(v_impl_1688_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1789_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1782_; lean_object* v___x_1784_; 
v___x_1782_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1776_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 3, v_r_1776_);
lean_ctor_set(v___x_1780_, 2, v_v_1681_);
lean_ctor_set(v___x_1780_, 1, v_k_1680_);
lean_ctor_set(v___x_1780_, 0, v___x_1689_);
v___x_1784_ = v___x_1780_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1788_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1788_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1788_, 3, v_r_1776_);
lean_ctor_set(v_reuseFailAlloc_1788_, 4, v_r_1776_);
v___x_1784_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
lean_object* v___x_1786_; 
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 4, v___x_1784_);
lean_ctor_set(v___x_1685_, 3, v_l_1775_);
lean_ctor_set(v___x_1685_, 2, v_v_1778_);
lean_ctor_set(v___x_1685_, 1, v_k_1777_);
lean_ctor_set(v___x_1685_, 0, v___x_1782_);
v___x_1786_ = v___x_1685_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v___x_1782_);
lean_ctor_set(v_reuseFailAlloc_1787_, 1, v_k_1777_);
lean_ctor_set(v_reuseFailAlloc_1787_, 2, v_v_1778_);
lean_ctor_set(v_reuseFailAlloc_1787_, 3, v_l_1775_);
lean_ctor_set(v_reuseFailAlloc_1787_, 4, v___x_1784_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
else
{
lean_object* v_r_1792_; 
v_r_1792_ = lean_ctor_get(v_impl_1688_, 4);
lean_inc(v_r_1792_);
if (lean_obj_tag(v_r_1792_) == 0)
{
lean_object* v_k_1793_; lean_object* v_v_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1817_; 
v_k_1793_ = lean_ctor_get(v_impl_1688_, 1);
v_v_1794_ = lean_ctor_get(v_impl_1688_, 2);
v_isSharedCheck_1817_ = !lean_is_exclusive(v_impl_1688_);
if (v_isSharedCheck_1817_ == 0)
{
lean_object* v_unused_1818_; lean_object* v_unused_1819_; lean_object* v_unused_1820_; 
v_unused_1818_ = lean_ctor_get(v_impl_1688_, 4);
lean_dec(v_unused_1818_);
v_unused_1819_ = lean_ctor_get(v_impl_1688_, 3);
lean_dec(v_unused_1819_);
v_unused_1820_ = lean_ctor_get(v_impl_1688_, 0);
lean_dec(v_unused_1820_);
v___x_1796_ = v_impl_1688_;
v_isShared_1797_ = v_isSharedCheck_1817_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_v_1794_);
lean_inc(v_k_1793_);
lean_dec(v_impl_1688_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1817_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v_k_1798_; lean_object* v_v_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1813_; 
v_k_1798_ = lean_ctor_get(v_r_1792_, 1);
v_v_1799_ = lean_ctor_get(v_r_1792_, 2);
v_isSharedCheck_1813_ = !lean_is_exclusive(v_r_1792_);
if (v_isSharedCheck_1813_ == 0)
{
lean_object* v_unused_1814_; lean_object* v_unused_1815_; lean_object* v_unused_1816_; 
v_unused_1814_ = lean_ctor_get(v_r_1792_, 4);
lean_dec(v_unused_1814_);
v_unused_1815_ = lean_ctor_get(v_r_1792_, 3);
lean_dec(v_unused_1815_);
v_unused_1816_ = lean_ctor_get(v_r_1792_, 0);
lean_dec(v_unused_1816_);
v___x_1801_ = v_r_1792_;
v_isShared_1802_ = v_isSharedCheck_1813_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_v_1799_);
lean_inc(v_k_1798_);
lean_dec(v_r_1792_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1813_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1803_; lean_object* v___x_1805_; 
v___x_1803_ = lean_unsigned_to_nat(3u);
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 4, v_l_1775_);
lean_ctor_set(v___x_1801_, 3, v_l_1775_);
lean_ctor_set(v___x_1801_, 2, v_v_1794_);
lean_ctor_set(v___x_1801_, 1, v_k_1793_);
lean_ctor_set(v___x_1801_, 0, v___x_1689_);
v___x_1805_ = v___x_1801_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1812_, 1, v_k_1793_);
lean_ctor_set(v_reuseFailAlloc_1812_, 2, v_v_1794_);
lean_ctor_set(v_reuseFailAlloc_1812_, 3, v_l_1775_);
lean_ctor_set(v_reuseFailAlloc_1812_, 4, v_l_1775_);
v___x_1805_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
lean_object* v___x_1807_; 
if (v_isShared_1797_ == 0)
{
lean_ctor_set(v___x_1796_, 4, v_l_1775_);
lean_ctor_set(v___x_1796_, 2, v_v_1681_);
lean_ctor_set(v___x_1796_, 1, v_k_1680_);
lean_ctor_set(v___x_1796_, 0, v___x_1689_);
v___x_1807_ = v___x_1796_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1811_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1811_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1811_, 3, v_l_1775_);
lean_ctor_set(v_reuseFailAlloc_1811_, 4, v_l_1775_);
v___x_1807_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1809_; 
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 4, v___x_1807_);
lean_ctor_set(v___x_1685_, 3, v___x_1805_);
lean_ctor_set(v___x_1685_, 2, v_v_1799_);
lean_ctor_set(v___x_1685_, 1, v_k_1798_);
lean_ctor_set(v___x_1685_, 0, v___x_1803_);
v___x_1809_ = v___x_1685_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1803_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v_k_1798_);
lean_ctor_set(v_reuseFailAlloc_1810_, 2, v_v_1799_);
lean_ctor_set(v_reuseFailAlloc_1810_, 3, v___x_1805_);
lean_ctor_set(v_reuseFailAlloc_1810_, 4, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
}
}
else
{
lean_object* v___x_1821_; lean_object* v___x_1823_; 
v___x_1821_ = lean_unsigned_to_nat(2u);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 4, v_r_1792_);
lean_ctor_set(v___x_1685_, 3, v_impl_1688_);
lean_ctor_set(v___x_1685_, 0, v___x_1821_);
v___x_1823_ = v___x_1685_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1824_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1824_, 3, v_impl_1688_);
lean_ctor_set(v_reuseFailAlloc_1824_, 4, v_r_1792_);
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
}
case 1:
{
lean_object* v___x_1826_; 
lean_dec(v_v_1681_);
lean_dec(v_k_1680_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 2, v_v_1677_);
lean_ctor_set(v___x_1685_, 1, v_k_1676_);
v___x_1826_ = v___x_1685_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_size_1679_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v_k_1676_);
lean_ctor_set(v_reuseFailAlloc_1827_, 2, v_v_1677_);
lean_ctor_set(v_reuseFailAlloc_1827_, 3, v_l_1682_);
lean_ctor_set(v_reuseFailAlloc_1827_, 4, v_r_1683_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
default: 
{
lean_object* v_impl_1828_; lean_object* v___x_1829_; 
lean_dec(v_size_1679_);
v_impl_1828_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0___redArg(v_k_1676_, v_v_1677_, v_r_1683_);
v___x_1829_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1682_) == 0)
{
lean_object* v_size_1830_; lean_object* v_size_1831_; lean_object* v_k_1832_; lean_object* v_v_1833_; lean_object* v_l_1834_; lean_object* v_r_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; 
v_size_1830_ = lean_ctor_get(v_l_1682_, 0);
v_size_1831_ = lean_ctor_get(v_impl_1828_, 0);
lean_inc(v_size_1831_);
v_k_1832_ = lean_ctor_get(v_impl_1828_, 1);
lean_inc(v_k_1832_);
v_v_1833_ = lean_ctor_get(v_impl_1828_, 2);
lean_inc(v_v_1833_);
v_l_1834_ = lean_ctor_get(v_impl_1828_, 3);
lean_inc(v_l_1834_);
v_r_1835_ = lean_ctor_get(v_impl_1828_, 4);
lean_inc(v_r_1835_);
v___x_1836_ = lean_unsigned_to_nat(3u);
v___x_1837_ = lean_nat_mul(v___x_1836_, v_size_1830_);
v___x_1838_ = lean_nat_dec_lt(v___x_1837_, v_size_1831_);
lean_dec(v___x_1837_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1842_; 
lean_dec(v_r_1835_);
lean_dec(v_l_1834_);
lean_dec(v_v_1833_);
lean_dec(v_k_1832_);
v___x_1839_ = lean_nat_add(v___x_1829_, v_size_1830_);
v___x_1840_ = lean_nat_add(v___x_1839_, v_size_1831_);
lean_dec(v_size_1831_);
lean_dec(v___x_1839_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 4, v_impl_1828_);
lean_ctor_set(v___x_1685_, 0, v___x_1840_);
v___x_1842_ = v___x_1685_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1840_);
lean_ctor_set(v_reuseFailAlloc_1843_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1843_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1843_, 3, v_l_1682_);
lean_ctor_set(v_reuseFailAlloc_1843_, 4, v_impl_1828_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
else
{
lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1907_; 
v_isSharedCheck_1907_ = !lean_is_exclusive(v_impl_1828_);
if (v_isSharedCheck_1907_ == 0)
{
lean_object* v_unused_1908_; lean_object* v_unused_1909_; lean_object* v_unused_1910_; lean_object* v_unused_1911_; lean_object* v_unused_1912_; 
v_unused_1908_ = lean_ctor_get(v_impl_1828_, 4);
lean_dec(v_unused_1908_);
v_unused_1909_ = lean_ctor_get(v_impl_1828_, 3);
lean_dec(v_unused_1909_);
v_unused_1910_ = lean_ctor_get(v_impl_1828_, 2);
lean_dec(v_unused_1910_);
v_unused_1911_ = lean_ctor_get(v_impl_1828_, 1);
lean_dec(v_unused_1911_);
v_unused_1912_ = lean_ctor_get(v_impl_1828_, 0);
lean_dec(v_unused_1912_);
v___x_1845_ = v_impl_1828_;
v_isShared_1846_ = v_isSharedCheck_1907_;
goto v_resetjp_1844_;
}
else
{
lean_dec(v_impl_1828_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1907_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v_size_1847_; lean_object* v_k_1848_; lean_object* v_v_1849_; lean_object* v_l_1850_; lean_object* v_r_1851_; lean_object* v_size_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; uint8_t v___x_1855_; 
v_size_1847_ = lean_ctor_get(v_l_1834_, 0);
v_k_1848_ = lean_ctor_get(v_l_1834_, 1);
v_v_1849_ = lean_ctor_get(v_l_1834_, 2);
v_l_1850_ = lean_ctor_get(v_l_1834_, 3);
v_r_1851_ = lean_ctor_get(v_l_1834_, 4);
v_size_1852_ = lean_ctor_get(v_r_1835_, 0);
v___x_1853_ = lean_unsigned_to_nat(2u);
v___x_1854_ = lean_nat_mul(v___x_1853_, v_size_1852_);
v___x_1855_ = lean_nat_dec_lt(v_size_1847_, v___x_1854_);
lean_dec(v___x_1854_);
if (v___x_1855_ == 0)
{
lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1883_; 
lean_inc(v_r_1851_);
lean_inc(v_l_1850_);
lean_inc(v_v_1849_);
lean_inc(v_k_1848_);
v_isSharedCheck_1883_ = !lean_is_exclusive(v_l_1834_);
if (v_isSharedCheck_1883_ == 0)
{
lean_object* v_unused_1884_; lean_object* v_unused_1885_; lean_object* v_unused_1886_; lean_object* v_unused_1887_; lean_object* v_unused_1888_; 
v_unused_1884_ = lean_ctor_get(v_l_1834_, 4);
lean_dec(v_unused_1884_);
v_unused_1885_ = lean_ctor_get(v_l_1834_, 3);
lean_dec(v_unused_1885_);
v_unused_1886_ = lean_ctor_get(v_l_1834_, 2);
lean_dec(v_unused_1886_);
v_unused_1887_ = lean_ctor_get(v_l_1834_, 1);
lean_dec(v_unused_1887_);
v_unused_1888_ = lean_ctor_get(v_l_1834_, 0);
lean_dec(v_unused_1888_);
v___x_1857_ = v_l_1834_;
v_isShared_1858_ = v_isSharedCheck_1883_;
goto v_resetjp_1856_;
}
else
{
lean_dec(v_l_1834_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1883_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1873_; 
v___x_1859_ = lean_nat_add(v___x_1829_, v_size_1830_);
v___x_1860_ = lean_nat_add(v___x_1859_, v_size_1831_);
lean_dec(v_size_1831_);
if (lean_obj_tag(v_l_1850_) == 0)
{
lean_object* v_size_1881_; 
v_size_1881_ = lean_ctor_get(v_l_1850_, 0);
lean_inc(v_size_1881_);
v___y_1873_ = v_size_1881_;
goto v___jp_1872_;
}
else
{
lean_object* v___x_1882_; 
v___x_1882_ = lean_unsigned_to_nat(0u);
v___y_1873_ = v___x_1882_;
goto v___jp_1872_;
}
v___jp_1861_:
{
lean_object* v___x_1865_; lean_object* v___x_1867_; 
v___x_1865_ = lean_nat_add(v___y_1862_, v___y_1864_);
lean_dec(v___y_1864_);
lean_dec(v___y_1862_);
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 4, v_r_1835_);
lean_ctor_set(v___x_1857_, 3, v_r_1851_);
lean_ctor_set(v___x_1857_, 2, v_v_1833_);
lean_ctor_set(v___x_1857_, 1, v_k_1832_);
lean_ctor_set(v___x_1857_, 0, v___x_1865_);
v___x_1867_ = v___x_1857_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1871_, 1, v_k_1832_);
lean_ctor_set(v_reuseFailAlloc_1871_, 2, v_v_1833_);
lean_ctor_set(v_reuseFailAlloc_1871_, 3, v_r_1851_);
lean_ctor_set(v_reuseFailAlloc_1871_, 4, v_r_1835_);
v___x_1867_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1869_; 
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 4, v___x_1867_);
lean_ctor_set(v___x_1845_, 3, v___y_1863_);
lean_ctor_set(v___x_1845_, 2, v_v_1849_);
lean_ctor_set(v___x_1845_, 1, v_k_1848_);
lean_ctor_set(v___x_1845_, 0, v___x_1860_);
v___x_1869_ = v___x_1845_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1860_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_k_1848_);
lean_ctor_set(v_reuseFailAlloc_1870_, 2, v_v_1849_);
lean_ctor_set(v_reuseFailAlloc_1870_, 3, v___y_1863_);
lean_ctor_set(v_reuseFailAlloc_1870_, 4, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
v___jp_1872_:
{
lean_object* v___x_1874_; lean_object* v___x_1876_; 
v___x_1874_ = lean_nat_add(v___x_1859_, v___y_1873_);
lean_dec(v___y_1873_);
lean_dec(v___x_1859_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 4, v_l_1850_);
lean_ctor_set(v___x_1685_, 0, v___x_1874_);
v___x_1876_ = v___x_1685_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v___x_1874_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1880_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1880_, 3, v_l_1682_);
lean_ctor_set(v_reuseFailAlloc_1880_, 4, v_l_1850_);
v___x_1876_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
lean_object* v___x_1877_; 
v___x_1877_ = lean_nat_add(v___x_1829_, v_size_1852_);
if (lean_obj_tag(v_r_1851_) == 0)
{
lean_object* v_size_1878_; 
v_size_1878_ = lean_ctor_get(v_r_1851_, 0);
lean_inc(v_size_1878_);
v___y_1862_ = v___x_1877_;
v___y_1863_ = v___x_1876_;
v___y_1864_ = v_size_1878_;
goto v___jp_1861_;
}
else
{
lean_object* v___x_1879_; 
v___x_1879_ = lean_unsigned_to_nat(0u);
v___y_1862_ = v___x_1877_;
v___y_1863_ = v___x_1876_;
v___y_1864_ = v___x_1879_;
goto v___jp_1861_;
}
}
}
}
}
else
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1893_; 
lean_del_object(v___x_1685_);
v___x_1889_ = lean_nat_add(v___x_1829_, v_size_1830_);
v___x_1890_ = lean_nat_add(v___x_1889_, v_size_1831_);
lean_dec(v_size_1831_);
v___x_1891_ = lean_nat_add(v___x_1889_, v_size_1847_);
lean_dec(v___x_1889_);
lean_inc_ref(v_l_1682_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 4, v_l_1834_);
lean_ctor_set(v___x_1845_, 3, v_l_1682_);
lean_ctor_set(v___x_1845_, 2, v_v_1681_);
lean_ctor_set(v___x_1845_, 1, v_k_1680_);
lean_ctor_set(v___x_1845_, 0, v___x_1891_);
v___x_1893_ = v___x_1845_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1891_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1906_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1906_, 3, v_l_1682_);
lean_ctor_set(v_reuseFailAlloc_1906_, 4, v_l_1834_);
v___x_1893_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
v_isSharedCheck_1900_ = !lean_is_exclusive(v_l_1682_);
if (v_isSharedCheck_1900_ == 0)
{
lean_object* v_unused_1901_; lean_object* v_unused_1902_; lean_object* v_unused_1903_; lean_object* v_unused_1904_; lean_object* v_unused_1905_; 
v_unused_1901_ = lean_ctor_get(v_l_1682_, 4);
lean_dec(v_unused_1901_);
v_unused_1902_ = lean_ctor_get(v_l_1682_, 3);
lean_dec(v_unused_1902_);
v_unused_1903_ = lean_ctor_get(v_l_1682_, 2);
lean_dec(v_unused_1903_);
v_unused_1904_ = lean_ctor_get(v_l_1682_, 1);
lean_dec(v_unused_1904_);
v_unused_1905_ = lean_ctor_get(v_l_1682_, 0);
lean_dec(v_unused_1905_);
v___x_1895_ = v_l_1682_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_dec(v_l_1682_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 4, v_r_1835_);
lean_ctor_set(v___x_1895_, 3, v___x_1893_);
lean_ctor_set(v___x_1895_, 2, v_v_1833_);
lean_ctor_set(v___x_1895_, 1, v_k_1832_);
lean_ctor_set(v___x_1895_, 0, v___x_1890_);
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1890_);
lean_ctor_set(v_reuseFailAlloc_1899_, 1, v_k_1832_);
lean_ctor_set(v_reuseFailAlloc_1899_, 2, v_v_1833_);
lean_ctor_set(v_reuseFailAlloc_1899_, 3, v___x_1893_);
lean_ctor_set(v_reuseFailAlloc_1899_, 4, v_r_1835_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1913_; 
v_l_1913_ = lean_ctor_get(v_impl_1828_, 3);
lean_inc(v_l_1913_);
if (lean_obj_tag(v_l_1913_) == 0)
{
lean_object* v_r_1914_; lean_object* v_k_1915_; lean_object* v_v_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1939_; 
v_r_1914_ = lean_ctor_get(v_impl_1828_, 4);
v_k_1915_ = lean_ctor_get(v_impl_1828_, 1);
v_v_1916_ = lean_ctor_get(v_impl_1828_, 2);
v_isSharedCheck_1939_ = !lean_is_exclusive(v_impl_1828_);
if (v_isSharedCheck_1939_ == 0)
{
lean_object* v_unused_1940_; lean_object* v_unused_1941_; 
v_unused_1940_ = lean_ctor_get(v_impl_1828_, 3);
lean_dec(v_unused_1940_);
v_unused_1941_ = lean_ctor_get(v_impl_1828_, 0);
lean_dec(v_unused_1941_);
v___x_1918_ = v_impl_1828_;
v_isShared_1919_ = v_isSharedCheck_1939_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_r_1914_);
lean_inc(v_v_1916_);
lean_inc(v_k_1915_);
lean_dec(v_impl_1828_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1939_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v_k_1920_; lean_object* v_v_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1935_; 
v_k_1920_ = lean_ctor_get(v_l_1913_, 1);
v_v_1921_ = lean_ctor_get(v_l_1913_, 2);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_l_1913_);
if (v_isSharedCheck_1935_ == 0)
{
lean_object* v_unused_1936_; lean_object* v_unused_1937_; lean_object* v_unused_1938_; 
v_unused_1936_ = lean_ctor_get(v_l_1913_, 4);
lean_dec(v_unused_1936_);
v_unused_1937_ = lean_ctor_get(v_l_1913_, 3);
lean_dec(v_unused_1937_);
v_unused_1938_ = lean_ctor_get(v_l_1913_, 0);
lean_dec(v_unused_1938_);
v___x_1923_ = v_l_1913_;
v_isShared_1924_ = v_isSharedCheck_1935_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_v_1921_);
lean_inc(v_k_1920_);
lean_dec(v_l_1913_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1935_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1925_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1914_, 2);
if (v_isShared_1924_ == 0)
{
lean_ctor_set(v___x_1923_, 4, v_r_1914_);
lean_ctor_set(v___x_1923_, 3, v_r_1914_);
lean_ctor_set(v___x_1923_, 2, v_v_1681_);
lean_ctor_set(v___x_1923_, 1, v_k_1680_);
lean_ctor_set(v___x_1923_, 0, v___x_1829_);
v___x_1927_ = v___x_1923_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1829_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1934_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1934_, 3, v_r_1914_);
lean_ctor_set(v_reuseFailAlloc_1934_, 4, v_r_1914_);
v___x_1927_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
lean_object* v___x_1929_; 
lean_inc(v_r_1914_);
if (v_isShared_1919_ == 0)
{
lean_ctor_set(v___x_1918_, 3, v_r_1914_);
lean_ctor_set(v___x_1918_, 0, v___x_1829_);
v___x_1929_ = v___x_1918_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v___x_1829_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_k_1915_);
lean_ctor_set(v_reuseFailAlloc_1933_, 2, v_v_1916_);
lean_ctor_set(v_reuseFailAlloc_1933_, 3, v_r_1914_);
lean_ctor_set(v_reuseFailAlloc_1933_, 4, v_r_1914_);
v___x_1929_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1931_; 
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 4, v___x_1929_);
lean_ctor_set(v___x_1685_, 3, v___x_1927_);
lean_ctor_set(v___x_1685_, 2, v_v_1921_);
lean_ctor_set(v___x_1685_, 1, v_k_1920_);
lean_ctor_set(v___x_1685_, 0, v___x_1925_);
v___x_1931_ = v___x_1685_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1925_);
lean_ctor_set(v_reuseFailAlloc_1932_, 1, v_k_1920_);
lean_ctor_set(v_reuseFailAlloc_1932_, 2, v_v_1921_);
lean_ctor_set(v_reuseFailAlloc_1932_, 3, v___x_1927_);
lean_ctor_set(v_reuseFailAlloc_1932_, 4, v___x_1929_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
}
}
else
{
lean_object* v_r_1942_; 
v_r_1942_ = lean_ctor_get(v_impl_1828_, 4);
lean_inc(v_r_1942_);
if (lean_obj_tag(v_r_1942_) == 0)
{
lean_object* v_k_1943_; lean_object* v_v_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1955_; 
v_k_1943_ = lean_ctor_get(v_impl_1828_, 1);
v_v_1944_ = lean_ctor_get(v_impl_1828_, 2);
v_isSharedCheck_1955_ = !lean_is_exclusive(v_impl_1828_);
if (v_isSharedCheck_1955_ == 0)
{
lean_object* v_unused_1956_; lean_object* v_unused_1957_; lean_object* v_unused_1958_; 
v_unused_1956_ = lean_ctor_get(v_impl_1828_, 4);
lean_dec(v_unused_1956_);
v_unused_1957_ = lean_ctor_get(v_impl_1828_, 3);
lean_dec(v_unused_1957_);
v_unused_1958_ = lean_ctor_get(v_impl_1828_, 0);
lean_dec(v_unused_1958_);
v___x_1946_ = v_impl_1828_;
v_isShared_1947_ = v_isSharedCheck_1955_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_v_1944_);
lean_inc(v_k_1943_);
lean_dec(v_impl_1828_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1955_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1948_; lean_object* v___x_1950_; 
v___x_1948_ = lean_unsigned_to_nat(3u);
if (v_isShared_1947_ == 0)
{
lean_ctor_set(v___x_1946_, 4, v_l_1913_);
lean_ctor_set(v___x_1946_, 2, v_v_1681_);
lean_ctor_set(v___x_1946_, 1, v_k_1680_);
lean_ctor_set(v___x_1946_, 0, v___x_1829_);
v___x_1950_ = v___x_1946_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v___x_1829_);
lean_ctor_set(v_reuseFailAlloc_1954_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1954_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1954_, 3, v_l_1913_);
lean_ctor_set(v_reuseFailAlloc_1954_, 4, v_l_1913_);
v___x_1950_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
lean_object* v___x_1952_; 
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 4, v_r_1942_);
lean_ctor_set(v___x_1685_, 3, v___x_1950_);
lean_ctor_set(v___x_1685_, 2, v_v_1944_);
lean_ctor_set(v___x_1685_, 1, v_k_1943_);
lean_ctor_set(v___x_1685_, 0, v___x_1948_);
v___x_1952_ = v___x_1685_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v___x_1948_);
lean_ctor_set(v_reuseFailAlloc_1953_, 1, v_k_1943_);
lean_ctor_set(v_reuseFailAlloc_1953_, 2, v_v_1944_);
lean_ctor_set(v_reuseFailAlloc_1953_, 3, v___x_1950_);
lean_ctor_set(v_reuseFailAlloc_1953_, 4, v_r_1942_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
}
else
{
lean_object* v___x_1959_; lean_object* v___x_1961_; 
v___x_1959_ = lean_unsigned_to_nat(2u);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 4, v_impl_1828_);
lean_ctor_set(v___x_1685_, 3, v_r_1942_);
lean_ctor_set(v___x_1685_, 0, v___x_1959_);
v___x_1961_ = v___x_1685_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v___x_1959_);
lean_ctor_set(v_reuseFailAlloc_1962_, 1, v_k_1680_);
lean_ctor_set(v_reuseFailAlloc_1962_, 2, v_v_1681_);
lean_ctor_set(v_reuseFailAlloc_1962_, 3, v_r_1942_);
lean_ctor_set(v_reuseFailAlloc_1962_, 4, v_impl_1828_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
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
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = lean_unsigned_to_nat(1u);
v___x_1965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1964_);
lean_ctor_set(v___x_1965_, 1, v_k_1676_);
lean_ctor_set(v___x_1965_, 2, v_v_1677_);
lean_ctor_set(v___x_1965_, 3, v_t_1678_);
lean_ctor_set(v___x_1965_, 4, v_t_1678_);
return v___x_1965_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_insert(lean_object* v_refs_1966_, lean_object* v_ident_1967_, lean_object* v_info_1968_){
_start:
{
lean_object* v___x_1969_; 
v___x_1969_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0___redArg(v_ident_1967_, v_info_1968_, v_refs_1966_);
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0(lean_object* v_00_u03b2_1970_, lean_object* v_k_1971_, lean_object* v_v_1972_, lean_object* v_t_1973_, lean_object* v_hl_1974_){
_start:
{
lean_object* v___x_1975_; 
v___x_1975_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0___redArg(v_k_1971_, v_v_1972_, v_t_1973_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0___redArg(lean_object* v_t_1976_, lean_object* v_k_1977_){
_start:
{
if (lean_obj_tag(v_t_1976_) == 0)
{
lean_object* v_k_1978_; lean_object* v_v_1979_; lean_object* v_l_1980_; lean_object* v_r_1981_; uint8_t v___x_1982_; 
v_k_1978_ = lean_ctor_get(v_t_1976_, 1);
v_v_1979_ = lean_ctor_get(v_t_1976_, 2);
v_l_1980_ = lean_ctor_get(v_t_1976_, 3);
v_r_1981_ = lean_ctor_get(v_t_1976_, 4);
v___x_1982_ = l_Lean_Lsp_instOrdRefIdent_ord(v_k_1977_, v_k_1978_);
switch(v___x_1982_)
{
case 0:
{
v_t_1976_ = v_l_1980_;
goto _start;
}
case 1:
{
lean_object* v___x_1984_; 
lean_inc(v_v_1979_);
v___x_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1984_, 0, v_v_1979_);
return v___x_1984_;
}
default: 
{
v_t_1976_ = v_r_1981_;
goto _start;
}
}
}
else
{
lean_object* v___x_1986_; 
v___x_1986_ = lean_box(0);
return v___x_1986_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0___redArg___boxed(lean_object* v_t_1987_, lean_object* v_k_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0___redArg(v_t_1987_, v_k_1988_);
lean_dec_ref(v_k_1988_);
lean_dec(v_t_1987_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_get_x3f(lean_object* v_refs_1990_, lean_object* v_ident_1991_){
_start:
{
lean_object* v___x_1992_; 
v___x_1992_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0___redArg(v_refs_1990_, v_ident_1991_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_get_x3f___boxed(lean_object* v_refs_1993_, lean_object* v_ident_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_Lean_Lsp_ModuleRefs_get_x3f(v_refs_1993_, v_ident_1994_);
lean_dec_ref(v_ident_1994_);
lean_dec(v_refs_1993_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0(lean_object* v_00_u03b4_1996_, lean_object* v_t_1997_, lean_object* v_k_1998_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0___redArg(v_t_1997_, v_k_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0___boxed(lean_object* v_00_u03b4_2000_, lean_object* v_t_2001_, lean_object* v_k_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Lsp_ModuleRefs_get_x3f_spec__0(v_00_u03b4_2000_, v_t_2001_, v_k_2002_);
lean_dec_ref(v_k_2002_);
lean_dec(v_t_2001_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0___redArg(lean_object* v_t_2004_, lean_object* v_k_2005_, lean_object* v_fallback_2006_){
_start:
{
if (lean_obj_tag(v_t_2004_) == 0)
{
lean_object* v_k_2007_; lean_object* v_v_2008_; lean_object* v_l_2009_; lean_object* v_r_2010_; uint8_t v___x_2011_; 
v_k_2007_ = lean_ctor_get(v_t_2004_, 1);
v_v_2008_ = lean_ctor_get(v_t_2004_, 2);
v_l_2009_ = lean_ctor_get(v_t_2004_, 3);
v_r_2010_ = lean_ctor_get(v_t_2004_, 4);
v___x_2011_ = l_Lean_Lsp_instOrdRefIdent_ord(v_k_2005_, v_k_2007_);
switch(v___x_2011_)
{
case 0:
{
v_t_2004_ = v_l_2009_;
goto _start;
}
case 1:
{
lean_inc(v_v_2008_);
return v_v_2008_;
}
default: 
{
v_t_2004_ = v_r_2010_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_2006_);
return v_fallback_2006_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0___redArg___boxed(lean_object* v_t_2014_, lean_object* v_k_2015_, lean_object* v_fallback_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0___redArg(v_t_2014_, v_k_2015_, v_fallback_2016_);
lean_dec(v_fallback_2016_);
lean_dec_ref(v_k_2015_);
lean_dec(v_t_2014_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_getD(lean_object* v_refs_2018_, lean_object* v_ident_2019_, lean_object* v_fallback_2020_){
_start:
{
lean_object* v___x_2021_; 
v___x_2021_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0___redArg(v_refs_2018_, v_ident_2019_, v_fallback_2020_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_getD___boxed(lean_object* v_refs_2022_, lean_object* v_ident_2023_, lean_object* v_fallback_2024_){
_start:
{
lean_object* v_res_2025_; 
v_res_2025_ = l_Lean_Lsp_ModuleRefs_getD(v_refs_2022_, v_ident_2023_, v_fallback_2024_);
lean_dec_ref(v_fallback_2024_);
lean_dec_ref(v_ident_2023_);
lean_dec(v_refs_2022_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0(lean_object* v_00_u03b4_2026_, lean_object* v_t_2027_, lean_object* v_k_2028_, lean_object* v_fallback_2029_){
_start:
{
lean_object* v___x_2030_; 
v___x_2030_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0___redArg(v_t_2027_, v_k_2028_, v_fallback_2029_);
return v___x_2030_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0___boxed(lean_object* v_00_u03b4_2031_, lean_object* v_t_2032_, lean_object* v_k_2033_, lean_object* v_fallback_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Lsp_ModuleRefs_getD_spec__0(v_00_u03b4_2031_, v_t_2032_, v_k_2033_, v_fallback_2034_);
lean_dec(v_fallback_2034_);
lean_dec_ref(v_k_2033_);
lean_dec(v_t_2032_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(lean_object* v_f_2036_, lean_object* v_init_2037_, lean_object* v_x_2038_){
_start:
{
if (lean_obj_tag(v_x_2038_) == 0)
{
lean_object* v_k_2039_; lean_object* v_v_2040_; lean_object* v_l_2041_; lean_object* v_r_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v_k_2039_ = lean_ctor_get(v_x_2038_, 1);
lean_inc(v_k_2039_);
v_v_2040_ = lean_ctor_get(v_x_2038_, 2);
lean_inc(v_v_2040_);
v_l_2041_ = lean_ctor_get(v_x_2038_, 3);
lean_inc(v_l_2041_);
v_r_2042_ = lean_ctor_get(v_x_2038_, 4);
lean_inc(v_r_2042_);
lean_dec_ref_known(v_x_2038_, 5);
lean_inc_n(v_f_2036_, 2);
v___x_2043_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(v_f_2036_, v_init_2037_, v_l_2041_);
v___x_2044_ = lean_apply_3(v_f_2036_, v___x_2043_, v_k_2039_, v_v_2040_);
v_init_2037_ = v___x_2044_;
v_x_2038_ = v_r_2042_;
goto _start;
}
else
{
lean_dec(v_f_2036_);
return v_init_2037_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_foldl___redArg(lean_object* v_f_2046_, lean_object* v_init_2047_, lean_object* v_refs_2048_){
_start:
{
lean_object* v___x_2049_; 
v___x_2049_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(v_f_2046_, v_init_2047_, v_refs_2048_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_foldl(lean_object* v_00_u03b3_2050_, lean_object* v_f_2051_, lean_object* v_init_2052_, lean_object* v_refs_2053_){
_start:
{
lean_object* v___x_2054_; 
v___x_2054_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(v_f_2051_, v_init_2052_, v_refs_2053_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0___redArg(lean_object* v_f_2055_, lean_object* v_init_2056_, lean_object* v_t_2057_){
_start:
{
lean_object* v___x_2058_; 
v___x_2058_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(v_f_2055_, v_init_2056_, v_t_2057_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0(lean_object* v_00_u03b3_2059_, lean_object* v_f_2060_, lean_object* v_init_2061_, lean_object* v_t_2062_){
_start:
{
lean_object* v___x_2063_; 
v___x_2063_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(v_f_2060_, v_init_2061_, v_t_2062_);
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0(lean_object* v_00_u03b3_2064_, lean_object* v_f_2065_, lean_object* v_init_2066_, lean_object* v_x_2067_){
_start:
{
lean_object* v___x_2068_; 
v___x_2068_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(v_f_2065_, v_init_2066_, v_x_2067_);
return v___x_2068_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_ModuleRefs_toList_spec__0(lean_object* v_init_2069_, lean_object* v_x_2070_){
_start:
{
if (lean_obj_tag(v_x_2070_) == 0)
{
lean_object* v_k_2071_; lean_object* v_v_2072_; lean_object* v_l_2073_; lean_object* v_r_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v_k_2071_ = lean_ctor_get(v_x_2070_, 1);
v_v_2072_ = lean_ctor_get(v_x_2070_, 2);
v_l_2073_ = lean_ctor_get(v_x_2070_, 3);
v_r_2074_ = lean_ctor_get(v_x_2070_, 4);
v___x_2075_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_ModuleRefs_toList_spec__0(v_init_2069_, v_r_2074_);
lean_inc(v_v_2072_);
lean_inc(v_k_2071_);
v___x_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2076_, 0, v_k_2071_);
lean_ctor_set(v___x_2076_, 1, v_v_2072_);
v___x_2077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
lean_ctor_set(v___x_2077_, 1, v___x_2075_);
v_init_2069_ = v___x_2077_;
v_x_2070_ = v_l_2073_;
goto _start;
}
else
{
return v_init_2069_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_ModuleRefs_toList_spec__0___boxed(lean_object* v_init_2079_, lean_object* v_x_2080_){
_start:
{
lean_object* v_res_2081_; 
v_res_2081_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_ModuleRefs_toList_spec__0(v_init_2079_, v_x_2080_);
lean_dec(v_x_2080_);
return v_res_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_toList(lean_object* v_refs_2082_){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = lean_box(0);
v___x_2084_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Lsp_ModuleRefs_toList_spec__0(v___x_2083_, v_refs_2082_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_toList___boxed(lean_object* v_refs_2085_){
_start:
{
lean_object* v_res_2086_; 
v_res_2086_ = l_Lean_Lsp_ModuleRefs_toList(v_refs_2085_);
lean_dec(v_refs_2085_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0_spec__0(lean_object* v_init_2087_, lean_object* v_x_2088_){
_start:
{
if (lean_obj_tag(v_x_2088_) == 0)
{
lean_object* v_k_2089_; lean_object* v_v_2090_; lean_object* v_l_2091_; lean_object* v_r_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v_k_2089_ = lean_ctor_get(v_x_2088_, 1);
v_v_2090_ = lean_ctor_get(v_x_2088_, 2);
v_l_2091_ = lean_ctor_get(v_x_2088_, 3);
v_r_2092_ = lean_ctor_get(v_x_2088_, 4);
v___x_2093_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0_spec__0(v_init_2087_, v_l_2091_);
lean_inc(v_v_2090_);
lean_inc(v_k_2089_);
v___x_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2094_, 0, v_k_2089_);
lean_ctor_set(v___x_2094_, 1, v_v_2090_);
v___x_2095_ = lean_array_push(v___x_2093_, v___x_2094_);
v_init_2087_ = v___x_2095_;
v_x_2088_ = v_r_2092_;
goto _start;
}
else
{
return v_init_2087_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0_spec__0___boxed(lean_object* v_init_2097_, lean_object* v_x_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0_spec__0(v_init_2097_, v_x_2098_);
lean_dec(v_x_2098_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_toArray(lean_object* v_refs_2102_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = ((lean_object*)(l_Lean_Lsp_ModuleRefs_toArray___closed__0));
v___x_2104_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0_spec__0(v___x_2103_, v_refs_2102_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_toArray___boxed(lean_object* v_refs_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_Lean_Lsp_ModuleRefs_toArray(v_refs_2105_);
lean_dec(v_refs_2105_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0(lean_object* v_init_2107_, lean_object* v_t_2108_){
_start:
{
lean_object* v___x_2109_; 
v___x_2109_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0_spec__0(v_init_2107_, v_t_2108_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0___boxed(lean_object* v_init_2110_, lean_object* v_t_2111_){
_start:
{
lean_object* v_res_2112_; 
v_res_2112_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_toArray_spec__0(v_init_2110_, v_t_2111_);
lean_dec(v_t_2111_);
return v_res_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__1(lean_object* v___f_2113_, lean_object* v_x_2114_){
_start:
{
lean_object* v_startPosLine_2115_; lean_object* v_startPosCharacter_2116_; lean_object* v_endPosLine_2117_; lean_object* v_endPosCharacter_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v_range_2124_; lean_object* v___x_2125_; 
v_startPosLine_2115_ = lean_ctor_get(v_x_2114_, 0);
v_startPosCharacter_2116_ = lean_ctor_get(v_x_2114_, 1);
v_endPosLine_2117_ = lean_ctor_get(v_x_2114_, 2);
v_endPosCharacter_2118_ = lean_ctor_get(v_x_2114_, 3);
v___x_2119_ = lean_box(0);
lean_inc(v_endPosCharacter_2118_);
v___x_2120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2120_, 0, v_endPosCharacter_2118_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
lean_inc(v_endPosLine_2117_);
v___x_2121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2121_, 0, v_endPosLine_2117_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
lean_inc(v_startPosCharacter_2116_);
v___x_2122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2122_, 0, v_startPosCharacter_2116_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
lean_inc(v_startPosLine_2115_);
v___x_2123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2123_, 0, v_startPosLine_2115_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v_range_2124_ = l_List_mapTR_loop___redArg(v___f_2113_, v___x_2123_, v___x_2119_);
v___x_2125_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_x_2114_);
if (lean_obj_tag(v___x_2125_) == 0)
{
lean_object* v___x_2126_; 
v___x_2126_ = l_List_appendTR___redArg(v_range_2124_, v___x_2119_);
return v___x_2126_;
}
else
{
lean_object* v_val_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2136_; 
v_val_2127_ = lean_ctor_get(v___x_2125_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2125_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2129_ = v___x_2125_;
v_isShared_2130_ = v_isSharedCheck_2136_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_val_2127_);
lean_dec(v___x_2125_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2136_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set_tag(v___x_2129_, 3);
v___x_2132_ = v___x_2129_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_val_2127_);
v___x_2132_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
lean_ctor_set(v___x_2133_, 1, v___x_2119_);
v___x_2134_ = l_List_appendTR___redArg(v_range_2124_, v___x_2133_);
return v___x_2134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__1___boxed(lean_object* v___f_2137_, lean_object* v_x_2138_){
_start:
{
lean_object* v_res_2139_; 
v_res_2139_ = l_Lean_Lsp_ModuleRefs_instToJson___lam__1(v___f_2137_, v_x_2138_);
lean_dec_ref(v_x_2138_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__0(lean_object* v___f_2140_, lean_object* v___f_2141_, lean_object* v_x_2142_){
_start:
{
lean_object* v_snd_2143_; lean_object* v_fst_2144_; lean_object* v___x_2146_; uint8_t v_isShared_2147_; uint8_t v_isSharedCheck_2205_; 
v_snd_2143_ = lean_ctor_get(v_x_2142_, 1);
v_fst_2144_ = lean_ctor_get(v_x_2142_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v_x_2142_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2146_ = v_x_2142_;
v_isShared_2147_ = v_isSharedCheck_2205_;
goto v_resetjp_2145_;
}
else
{
lean_inc(v_snd_2143_);
lean_inc(v_fst_2144_);
lean_dec(v_x_2142_);
v___x_2146_ = lean_box(0);
v_isShared_2147_ = v_isSharedCheck_2205_;
goto v_resetjp_2145_;
}
v_resetjp_2145_:
{
lean_object* v_definition_x3f_2148_; lean_object* v_usages_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2204_; 
v_definition_x3f_2148_ = lean_ctor_get(v_snd_2143_, 0);
v_usages_2149_ = lean_ctor_get(v_snd_2143_, 1);
v_isSharedCheck_2204_ = !lean_is_exclusive(v_snd_2143_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2151_ = v_snd_2143_;
v_isShared_2152_ = v_isSharedCheck_2204_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_usages_2149_);
lean_inc(v_definition_x3f_2148_);
lean_dec(v_snd_2143_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2204_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___y_2158_; lean_object* v___y_2178_; 
v___x_2153_ = l_Lean_Lsp_RefIdent_toJson(v_fst_2144_);
v___x_2154_ = l_Lean_Json_compress(v___x_2153_);
v___x_2155_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___closed__4));
v___x_2156_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
if (lean_obj_tag(v_definition_x3f_2148_) == 0)
{
lean_object* v___x_2180_; 
lean_dec_ref(v___f_2141_);
v___x_2180_ = lean_box(0);
v___y_2158_ = v___x_2180_;
goto v___jp_2157_;
}
else
{
lean_object* v_val_2181_; lean_object* v_startPosLine_2182_; lean_object* v_startPosCharacter_2183_; lean_object* v_endPosLine_2184_; lean_object* v_endPosCharacter_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v_range_2191_; lean_object* v___x_2192_; 
v_val_2181_ = lean_ctor_get(v_definition_x3f_2148_, 0);
lean_inc(v_val_2181_);
lean_dec_ref_known(v_definition_x3f_2148_, 1);
v_startPosLine_2182_ = lean_ctor_get(v_val_2181_, 0);
v_startPosCharacter_2183_ = lean_ctor_get(v_val_2181_, 1);
v_endPosLine_2184_ = lean_ctor_get(v_val_2181_, 2);
v_endPosCharacter_2185_ = lean_ctor_get(v_val_2181_, 3);
v___x_2186_ = lean_box(0);
lean_inc(v_endPosCharacter_2185_);
v___x_2187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2187_, 0, v_endPosCharacter_2185_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
lean_inc(v_endPosLine_2184_);
v___x_2188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2188_, 0, v_endPosLine_2184_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
lean_inc(v_startPosCharacter_2183_);
v___x_2189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2189_, 0, v_startPosCharacter_2183_);
lean_ctor_set(v___x_2189_, 1, v___x_2188_);
lean_inc(v_startPosLine_2182_);
v___x_2190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2190_, 0, v_startPosLine_2182_);
lean_ctor_set(v___x_2190_, 1, v___x_2189_);
v_range_2191_ = l_List_mapTR_loop___redArg(v___f_2141_, v___x_2190_, v___x_2186_);
v___x_2192_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_val_2181_);
lean_dec(v_val_2181_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v___x_2193_; 
v___x_2193_ = l_List_appendTR___redArg(v_range_2191_, v___x_2186_);
v___y_2178_ = v___x_2193_;
goto v___jp_2177_;
}
else
{
lean_object* v_val_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2203_; 
v_val_2194_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2196_ = v___x_2192_;
v_isShared_2197_ = v_isSharedCheck_2203_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_val_2194_);
lean_dec(v___x_2192_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2203_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2199_; 
if (v_isShared_2197_ == 0)
{
lean_ctor_set_tag(v___x_2196_, 3);
v___x_2199_ = v___x_2196_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_val_2194_);
v___x_2199_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2199_);
lean_ctor_set(v___x_2200_, 1, v___x_2186_);
v___x_2201_ = l_List_appendTR___redArg(v_range_2191_, v___x_2200_);
v___y_2178_ = v___x_2201_;
goto v___jp_2177_;
}
}
}
}
v___jp_2157_:
{
lean_object* v___x_2159_; lean_object* v___x_2161_; 
v___x_2159_ = l_Lean_Option_toJson___redArg(v___x_2155_, v___y_2158_);
if (v_isShared_2147_ == 0)
{
lean_ctor_set(v___x_2146_, 1, v___x_2159_);
lean_ctor_set(v___x_2146_, 0, v___x_2156_);
v___x_2161_ = v___x_2146_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2156_);
lean_ctor_set(v_reuseFailAlloc_2176_, 1, v___x_2159_);
v___x_2161_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; size_t v_sz_2164_; size_t v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2169_; 
v___x_2162_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_2163_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__11));
v_sz_2164_ = lean_array_size(v_usages_2149_);
v___x_2165_ = ((size_t)0ULL);
v___x_2166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2163_, v___f_2140_, v_sz_2164_, v___x_2165_, v_usages_2149_);
v___x_2167_ = l_Lean_Array_toJson___redArg(v___x_2155_, v___x_2166_);
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 1, v___x_2167_);
lean_ctor_set(v___x_2151_, 0, v___x_2162_);
v___x_2169_ = v___x_2151_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v___x_2162_);
lean_ctor_set(v_reuseFailAlloc_2175_, 1, v___x_2167_);
v___x_2169_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2170_ = lean_box(0);
v___x_2171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2169_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
v___x_2172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2161_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
v___x_2173_ = l_Lean_Json_mkObj(v___x_2172_);
lean_dec_ref_known(v___x_2172_, 2);
v___x_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2154_);
lean_ctor_set(v___x_2174_, 1, v___x_2173_);
return v___x_2174_;
}
}
}
v___jp_2177_:
{
lean_object* v___x_2179_; 
v___x_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2179_, 0, v___y_2178_);
v___y_2158_ = v___x_2179_;
goto v___jp_2157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__2(lean_object* v___f_2206_, lean_object* v_m_2207_){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2208_ = l_Lean_Lsp_ModuleRefs_toList(v_m_2207_);
v___x_2209_ = lean_box(0);
v___x_2210_ = l_List_mapTR_loop___redArg(v___f_2206_, v___x_2208_, v___x_2209_);
v___x_2211_ = l_Lean_Json_mkObj(v___x_2210_);
lean_dec(v___x_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instToJson___lam__2___boxed(lean_object* v___f_2212_, lean_object* v_m_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lean_Lsp_ModuleRefs_instToJson___lam__2(v___f_2212_, v_m_2213_);
lean_dec(v_m_2213_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___lam__0(lean_object* v_a_2223_){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; uint8_t v___y_2227_; uint8_t v___y_2306_; uint8_t v___y_2307_; uint8_t v___y_2308_; uint8_t v___y_2314_; uint8_t v___x_2319_; 
v___x_2224_ = lean_array_get_size(v_a_2223_);
v___x_2225_ = lean_unsigned_to_nat(4u);
v___x_2319_ = lean_nat_dec_eq(v___x_2224_, v___x_2225_);
if (v___x_2319_ == 0)
{
uint8_t v___x_2320_; 
v___x_2320_ = 1;
v___y_2314_ = v___x_2320_;
goto v___jp_2313_;
}
else
{
uint8_t v___x_2321_; 
v___x_2321_ = 0;
v___y_2314_ = v___x_2321_;
goto v___jp_2313_;
}
v___jp_2226_:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = lean_unsigned_to_nat(0u);
v___x_2229_ = lean_array_fget_borrowed(v_a_2223_, v___x_2228_);
lean_inc(v___x_2229_);
v___x_2230_ = l_Lean_Json_getNat_x3f(v___x_2229_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2230_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2230_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v_a_2239_ = lean_ctor_get(v___x_2230_, 0);
lean_inc(v_a_2239_);
lean_dec_ref_known(v___x_2230_, 1);
v___x_2240_ = lean_unsigned_to_nat(1u);
v___x_2241_ = lean_array_fget_borrowed(v_a_2223_, v___x_2240_);
lean_inc(v___x_2241_);
v___x_2242_ = l_Lean_Json_getNat_x3f(v___x_2241_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
lean_dec(v_a_2239_);
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2242_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2242_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v_a_2251_ = lean_ctor_get(v___x_2242_, 0);
lean_inc(v_a_2251_);
lean_dec_ref_known(v___x_2242_, 1);
v___x_2252_ = lean_unsigned_to_nat(2u);
v___x_2253_ = lean_array_fget_borrowed(v_a_2223_, v___x_2252_);
lean_inc(v___x_2253_);
v___x_2254_ = l_Lean_Json_getNat_x3f(v___x_2253_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2262_; 
lean_dec(v_a_2251_);
lean_dec(v_a_2239_);
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
else
{
lean_object* v_a_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v_a_2263_ = lean_ctor_get(v___x_2254_, 0);
lean_inc(v_a_2263_);
lean_dec_ref_known(v___x_2254_, 1);
v___x_2264_ = lean_unsigned_to_nat(3u);
v___x_2265_ = lean_array_fget_borrowed(v_a_2223_, v___x_2264_);
lean_inc(v___x_2265_);
v___x_2266_ = l_Lean_Json_getNat_x3f(v___x_2265_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
lean_dec(v_a_2263_);
lean_dec(v_a_2251_);
lean_dec(v_a_2239_);
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2266_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2266_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
else
{
if (v___y_2227_ == 0)
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2284_; 
v_a_2275_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2277_ = v___x_2266_;
v_isShared_2278_ = v_isSharedCheck_2284_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2266_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2284_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2282_; 
v___x_2279_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
v___x_2280_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2280_, 0, v_a_2239_);
lean_ctor_set(v___x_2280_, 1, v_a_2251_);
lean_ctor_set(v___x_2280_, 2, v_a_2263_);
lean_ctor_set(v___x_2280_, 3, v_a_2275_);
lean_ctor_set(v___x_2280_, 4, v___x_2279_);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v___x_2280_);
v___x_2282_ = v___x_2277_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2280_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v_a_2285_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2266_, 1);
v___x_2286_ = lean_array_fget_borrowed(v_a_2223_, v___x_2225_);
lean_inc(v___x_2286_);
v___x_2287_ = l_Lean_Json_getStr_x3f(v___x_2286_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
lean_dec(v_a_2285_);
lean_dec(v_a_2263_);
lean_dec(v_a_2251_);
lean_dec(v_a_2239_);
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2287_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2287_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2304_; 
v_a_2296_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2298_ = v___x_2287_;
v_isShared_2299_ = v_isSharedCheck_2304_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2287_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2304_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2300_; lean_object* v___x_2302_; 
v___x_2300_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2300_, 0, v_a_2239_);
lean_ctor_set(v___x_2300_, 1, v_a_2251_);
lean_ctor_set(v___x_2300_, 2, v_a_2263_);
lean_ctor_set(v___x_2300_, 3, v_a_2285_);
lean_ctor_set(v___x_2300_, 4, v_a_2296_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set(v___x_2298_, 0, v___x_2300_);
v___x_2302_ = v___x_2298_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v___x_2300_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
}
}
}
}
}
v___jp_2305_:
{
if (v___y_2306_ == 0)
{
v___y_2227_ = v___y_2307_;
goto v___jp_2226_;
}
else
{
if (v___y_2308_ == 0)
{
v___y_2227_ = v___y_2307_;
goto v___jp_2226_;
}
else
{
lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2309_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0));
v___x_2310_ = l_Nat_reprFast(v___x_2224_);
v___x_2311_ = lean_string_append(v___x_2309_, v___x_2310_);
lean_dec_ref(v___x_2310_);
v___x_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
return v___x_2312_;
}
}
}
v___jp_2313_:
{
lean_object* v___x_2315_; uint8_t v___x_2316_; 
v___x_2315_ = lean_unsigned_to_nat(5u);
v___x_2316_ = lean_nat_dec_eq(v___x_2224_, v___x_2315_);
if (v___x_2316_ == 0)
{
uint8_t v___x_2317_; 
v___x_2317_ = 1;
v___y_2306_ = v___y_2314_;
v___y_2307_ = v___x_2316_;
v___y_2308_ = v___x_2317_;
goto v___jp_2305_;
}
else
{
uint8_t v___x_2318_; 
v___x_2318_ = 0;
v___y_2306_ = v___y_2314_;
v___y_2307_ = v___x_2316_;
v___y_2308_ = v___x_2318_;
goto v___jp_2305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___lam__0___boxed(lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_Lsp_ModuleRefs_instFromJson___lam__0(v_a_2322_);
lean_dec_ref(v_a_2322_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___lam__1(lean_object* v_toLocation_2324_, lean_object* v_m_2325_, lean_object* v_k_2326_, lean_object* v_v_2327_){
_start:
{
lean_object* v___x_2328_; 
v___x_2328_ = l_Lean_Json_parse(v_k_2326_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
lean_dec(v_v_2327_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___x_2328_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2328_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2338_; 
v_a_2337_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2328_, 1);
v___x_2338_ = l_Lean_Lsp_RefIdent_fromJson_x3f(v_a_2337_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2346_; 
lean_dec(v_v_2327_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2341_ = v___x_2338_;
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2338_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2339_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v_a_2347_ = lean_ctor_get(v___x_2338_, 0);
lean_inc(v_a_2347_);
lean_dec_ref_known(v___x_2338_, 1);
v___x_2348_ = ((lean_object*)(l_Lean_Lsp_Decls_instFromJson___closed__10));
v___x_2349_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___closed__3));
v___x_2350_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
lean_inc(v_v_2327_);
v___x_2351_ = l_Lean_Json_getObjValAs_x3f___redArg(v_v_2327_, v___x_2349_, v___x_2350_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec(v_a_2347_);
lean_dec(v_v_2327_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2351_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2351_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2490_; 
v_a_2360_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2362_ = v___x_2351_;
v_isShared_2363_ = v_isSharedCheck_2490_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2351_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2490_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2364_; lean_object* v_definition_x3f_2366_; lean_object* v_a_2400_; 
v___x_2364_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___closed__4));
if (lean_obj_tag(v_a_2360_) == 0)
{
lean_object* v___x_2402_; 
lean_del_object(v___x_2362_);
v___x_2402_ = lean_box(0);
v_definition_x3f_2366_ = v___x_2402_;
goto v___jp_2365_;
}
else
{
lean_object* v_val_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; uint8_t v___y_2407_; uint8_t v___y_2472_; uint8_t v___y_2473_; uint8_t v___y_2474_; uint8_t v___y_2482_; uint8_t v___x_2487_; 
v_val_2403_ = lean_ctor_get(v_a_2360_, 0);
lean_inc(v_val_2403_);
lean_dec_ref_known(v_a_2360_, 1);
v___x_2404_ = lean_array_get_size(v_val_2403_);
v___x_2405_ = lean_unsigned_to_nat(4u);
v___x_2487_ = lean_nat_dec_eq(v___x_2404_, v___x_2405_);
if (v___x_2487_ == 0)
{
uint8_t v___x_2488_; 
v___x_2488_ = 1;
v___y_2482_ = v___x_2488_;
goto v___jp_2481_;
}
else
{
uint8_t v___x_2489_; 
v___x_2489_ = 0;
v___y_2482_ = v___x_2489_;
goto v___jp_2481_;
}
v___jp_2406_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2408_ = lean_unsigned_to_nat(0u);
v___x_2409_ = lean_array_fget_borrowed(v_val_2403_, v___x_2408_);
lean_inc(v___x_2409_);
v___x_2410_ = l_Lean_Json_getNat_x3f(v___x_2409_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_dec(v_val_2403_);
lean_dec(v_a_2347_);
lean_dec(v_v_2327_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2410_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2410_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
v_a_2419_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2419_);
lean_dec_ref_known(v___x_2410_, 1);
v___x_2420_ = lean_unsigned_to_nat(1u);
v___x_2421_ = lean_array_fget_borrowed(v_val_2403_, v___x_2420_);
lean_inc(v___x_2421_);
v___x_2422_ = l_Lean_Json_getNat_x3f(v___x_2421_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
lean_dec(v_a_2419_);
lean_dec(v_val_2403_);
lean_dec(v_a_2347_);
lean_dec(v_v_2327_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2422_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2422_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v_a_2431_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2422_, 1);
v___x_2432_ = lean_unsigned_to_nat(2u);
v___x_2433_ = lean_array_fget_borrowed(v_val_2403_, v___x_2432_);
lean_inc(v___x_2433_);
v___x_2434_ = l_Lean_Json_getNat_x3f(v___x_2433_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
lean_dec(v_a_2431_);
lean_dec(v_a_2419_);
lean_dec(v_val_2403_);
lean_dec(v_a_2347_);
lean_dec(v_v_2327_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2434_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2434_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2435_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v_a_2443_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_a_2443_);
lean_dec_ref_known(v___x_2434_, 1);
v___x_2444_ = lean_unsigned_to_nat(3u);
v___x_2445_ = lean_array_fget_borrowed(v_val_2403_, v___x_2444_);
lean_inc(v___x_2445_);
v___x_2446_ = l_Lean_Json_getNat_x3f(v___x_2445_);
if (lean_obj_tag(v___x_2446_) == 0)
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
lean_dec(v_a_2443_);
lean_dec(v_a_2431_);
lean_dec(v_a_2419_);
lean_dec(v_val_2403_);
lean_dec(v_a_2347_);
lean_dec(v_v_2327_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v_a_2447_ = lean_ctor_get(v___x_2446_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2446_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2446_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2450_ == 0)
{
v___x_2452_ = v___x_2449_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2447_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
}
else
{
if (v___y_2407_ == 0)
{
lean_object* v_a_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
lean_dec(v_val_2403_);
v_a_2455_ = lean_ctor_get(v___x_2446_, 0);
lean_inc(v_a_2455_);
lean_dec_ref_known(v___x_2446_, 1);
v___x_2456_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
v___x_2457_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2457_, 0, v_a_2419_);
lean_ctor_set(v___x_2457_, 1, v_a_2431_);
lean_ctor_set(v___x_2457_, 2, v_a_2443_);
lean_ctor_set(v___x_2457_, 3, v_a_2455_);
lean_ctor_set(v___x_2457_, 4, v___x_2456_);
v_a_2400_ = v___x_2457_;
goto v___jp_2399_;
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v_a_2458_ = lean_ctor_get(v___x_2446_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___x_2446_, 1);
v___x_2459_ = lean_array_fget(v_val_2403_, v___x_2405_);
lean_dec(v_val_2403_);
v___x_2460_ = l_Lean_Json_getStr_x3f(v___x_2459_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2468_; 
lean_dec(v_a_2458_);
lean_dec(v_a_2443_);
lean_dec(v_a_2431_);
lean_dec(v_a_2419_);
lean_dec(v_a_2347_);
lean_dec(v_v_2327_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2463_ = v___x_2460_;
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v___x_2460_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2466_; 
if (v_isShared_2464_ == 0)
{
v___x_2466_ = v___x_2463_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_a_2461_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2470_; 
v_a_2469_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2469_);
lean_dec_ref_known(v___x_2460_, 1);
v___x_2470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2470_, 0, v_a_2419_);
lean_ctor_set(v___x_2470_, 1, v_a_2431_);
lean_ctor_set(v___x_2470_, 2, v_a_2443_);
lean_ctor_set(v___x_2470_, 3, v_a_2458_);
lean_ctor_set(v___x_2470_, 4, v_a_2469_);
v_a_2400_ = v___x_2470_;
goto v___jp_2399_;
}
}
}
}
}
}
}
v___jp_2471_:
{
if (v___y_2472_ == 0)
{
lean_del_object(v___x_2362_);
v___y_2407_ = v___y_2473_;
goto v___jp_2406_;
}
else
{
if (v___y_2474_ == 0)
{
lean_del_object(v___x_2362_);
v___y_2407_ = v___y_2473_;
goto v___jp_2406_;
}
else
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2479_; 
lean_dec(v_val_2403_);
lean_dec(v_a_2347_);
lean_dec(v_v_2327_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v___x_2475_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0));
v___x_2476_ = l_Nat_reprFast(v___x_2404_);
v___x_2477_ = lean_string_append(v___x_2475_, v___x_2476_);
lean_dec_ref(v___x_2476_);
if (v_isShared_2363_ == 0)
{
lean_ctor_set_tag(v___x_2362_, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2477_);
v___x_2479_ = v___x_2362_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v___x_2477_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
}
v___jp_2481_:
{
lean_object* v___x_2483_; uint8_t v___x_2484_; 
v___x_2483_ = lean_unsigned_to_nat(5u);
v___x_2484_ = lean_nat_dec_eq(v___x_2404_, v___x_2483_);
if (v___x_2484_ == 0)
{
uint8_t v___x_2485_; 
v___x_2485_ = 1;
v___y_2472_ = v___y_2482_;
v___y_2473_ = v___x_2484_;
v___y_2474_ = v___x_2485_;
goto v___jp_2471_;
}
else
{
uint8_t v___x_2486_; 
v___x_2486_ = 0;
v___y_2472_ = v___y_2482_;
v___y_2473_ = v___x_2484_;
v___y_2474_ = v___x_2486_;
goto v___jp_2471_;
}
}
}
v___jp_2365_:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2367_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_2368_ = l_Lean_Json_getObjValAs_x3f___redArg(v_v_2327_, v___x_2364_, v___x_2367_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2376_; 
lean_dec(v_definition_x3f_2366_);
lean_dec(v_a_2347_);
lean_dec(v_m_2325_);
lean_dec_ref(v_toLocation_2324_);
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2371_ = v___x_2368_;
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v___x_2368_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2374_; 
if (v_isShared_2372_ == 0)
{
v___x_2374_ = v___x_2371_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2369_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
else
{
lean_object* v_a_2377_; size_t v_sz_2378_; size_t v___x_2379_; lean_object* v___x_2380_; 
v_a_2377_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2368_, 1);
v_sz_2378_ = lean_array_size(v_a_2377_);
v___x_2379_ = ((size_t)0ULL);
v___x_2380_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2348_, v_toLocation_2324_, v_sz_2378_, v___x_2379_, v_a_2377_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
lean_dec(v_definition_x3f_2366_);
lean_dec(v_a_2347_);
lean_dec(v_m_2325_);
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2380_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2380_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2398_; 
v_a_2389_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2391_ = v___x_2380_;
v_isShared_2392_ = v_isSharedCheck_2398_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2380_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2398_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2396_; 
v___x_2393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2393_, 0, v_definition_x3f_2366_);
lean_ctor_set(v___x_2393_, 1, v_a_2389_);
v___x_2394_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0___redArg(v_a_2347_, v___x_2393_, v_m_2325_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 0, v___x_2394_);
v___x_2396_ = v___x_2391_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v___x_2394_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
}
}
v___jp_2399_:
{
lean_object* v___x_2401_; 
v___x_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2401_, 0, v_a_2400_);
v_definition_x3f_2366_ = v___x_2401_;
goto v___jp_2365_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_instFromJson___lam__2(lean_object* v___x_2491_, lean_object* v___f_2492_, lean_object* v_j_2493_){
_start:
{
lean_object* v___x_2494_; 
v___x_2494_ = l_Lean_Json_getObj_x3f(v_j_2493_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
lean_dec_ref(v___f_2492_);
lean_dec_ref(v___x_2491_);
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2494_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2494_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v_a_2503_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2503_);
lean_dec_ref_known(v___x_2494_, 1);
v___x_2504_ = lean_box(1);
v___x_2505_ = l_Std_DTreeMap_Internal_Impl_foldlM___redArg(v___x_2491_, v___f_2492_, v___x_2504_, v_a_2503_);
return v___x_2505_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(lean_object* v_j_2513_, lean_object* v_k_2514_){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = l_Lean_Json_getObjValD(v_j_2513_, v_k_2514_);
v___x_2516_ = l_Lean_Json_getNat_x3f(v___x_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0___boxed(lean_object* v_j_2517_, lean_object* v_k_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(v_j_2517_, v_k_2518_);
lean_dec_ref(v_k_2518_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(lean_object* v_j_2520_, lean_object* v_k_2521_){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = l_Lean_Json_getObjValD(v_j_2520_, v_k_2521_);
v___x_2523_ = l_Lean_Json_getBool_x3f(v___x_2522_);
lean_dec(v___x_2522_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1___boxed(lean_object* v_j_2524_, lean_object* v_k_2525_){
_start:
{
lean_object* v_res_2526_; 
v_res_2526_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(v_j_2524_, v_k_2525_);
lean_dec_ref(v_k_2525_);
return v_res_2526_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3(size_t v_sz_2529_, size_t v_i_2530_, lean_object* v_bs_2531_){
_start:
{
uint8_t v___x_2534_; 
v___x_2534_ = lean_usize_dec_lt(v_i_2530_, v_sz_2529_);
if (v___x_2534_ == 0)
{
lean_object* v___x_2535_; 
v___x_2535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2535_, 0, v_bs_2531_);
return v___x_2535_;
}
else
{
lean_object* v_v_2536_; 
v_v_2536_ = lean_array_uget_borrowed(v_bs_2531_, v_i_2530_);
if (lean_obj_tag(v_v_2536_) == 4)
{
lean_object* v_elems_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; uint8_t v___x_2540_; 
v_elems_2537_ = lean_ctor_get(v_v_2536_, 0);
v___x_2538_ = lean_array_get_size(v_elems_2537_);
v___x_2539_ = lean_unsigned_to_nat(4u);
v___x_2540_ = lean_nat_dec_eq(v___x_2538_, v___x_2539_);
if (v___x_2540_ == 0)
{
lean_dec_ref(v_bs_2531_);
goto v___jp_2532_;
}
else
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2541_ = lean_unsigned_to_nat(0u);
v___x_2542_ = lean_array_fget_borrowed(v_elems_2537_, v___x_2541_);
lean_inc(v___x_2542_);
v___x_2543_ = l_Lean_Json_getStr_x3f(v___x_2542_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2551_; 
lean_dec_ref(v_bs_2531_);
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2546_ = v___x_2543_;
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2543_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2549_; 
if (v_isShared_2547_ == 0)
{
v___x_2549_ = v___x_2546_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v_a_2544_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v_a_2552_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2543_, 1);
v___x_2553_ = lean_unsigned_to_nat(1u);
v___x_2554_ = lean_array_fget_borrowed(v_elems_2537_, v___x_2553_);
v___x_2555_ = l_Lean_Json_getBool_x3f(v___x_2554_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
lean_dec(v_a_2552_);
lean_dec_ref(v_bs_2531_);
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v___x_2555_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2555_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2556_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v_a_2564_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2555_, 1);
v___x_2565_ = lean_unsigned_to_nat(2u);
v___x_2566_ = lean_array_fget_borrowed(v_elems_2537_, v___x_2565_);
v___x_2567_ = l_Lean_Json_getBool_x3f(v___x_2566_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2575_; 
lean_dec(v_a_2564_);
lean_dec(v_a_2552_);
lean_dec_ref(v_bs_2531_);
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2570_ = v___x_2567_;
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v___x_2567_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2573_; 
if (v_isShared_2571_ == 0)
{
v___x_2573_ = v___x_2570_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_a_2568_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
else
{
lean_object* v_a_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v_a_2576_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2576_);
lean_dec_ref_known(v___x_2567_, 1);
v___x_2577_ = lean_unsigned_to_nat(3u);
v___x_2578_ = lean_array_fget_borrowed(v_elems_2537_, v___x_2577_);
v___x_2579_ = l_Lean_Json_getBool_x3f(v___x_2578_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
lean_dec(v_a_2576_);
lean_dec(v_a_2564_);
lean_dec(v_a_2552_);
lean_dec_ref(v_bs_2531_);
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2582_ = v___x_2579_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2579_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2585_; 
if (v_isShared_2583_ == 0)
{
v___x_2585_ = v___x_2582_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2580_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
return v___x_2585_;
}
}
}
else
{
lean_object* v_a_2588_; lean_object* v_bs_x27_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; uint8_t v___x_2592_; uint8_t v___x_2593_; size_t v___x_2594_; size_t v___x_2595_; lean_object* v___x_2596_; 
v_a_2588_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2588_);
lean_dec_ref_known(v___x_2579_, 1);
v_bs_x27_2589_ = lean_array_uset(v_bs_2531_, v_i_2530_, v___x_2541_);
v___x_2590_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_2590_, 0, v_a_2552_);
v___x_2591_ = lean_unbox(v_a_2564_);
lean_dec(v_a_2564_);
lean_ctor_set_uint8(v___x_2590_, sizeof(void*)*1, v___x_2591_);
v___x_2592_ = lean_unbox(v_a_2576_);
lean_dec(v_a_2576_);
lean_ctor_set_uint8(v___x_2590_, sizeof(void*)*1 + 1, v___x_2592_);
v___x_2593_ = lean_unbox(v_a_2588_);
lean_dec(v_a_2588_);
lean_ctor_set_uint8(v___x_2590_, sizeof(void*)*1 + 2, v___x_2593_);
v___x_2594_ = ((size_t)1ULL);
v___x_2595_ = lean_usize_add(v_i_2530_, v___x_2594_);
v___x_2596_ = lean_array_uset(v_bs_x27_2589_, v_i_2530_, v___x_2590_);
v_i_2530_ = v___x_2595_;
v_bs_2531_ = v___x_2596_;
goto _start;
}
}
}
}
}
}
else
{
lean_dec_ref(v_bs_2531_);
goto v___jp_2532_;
}
}
v___jp_2532_:
{
lean_object* v___x_2533_; 
v___x_2533_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___closed__0));
return v___x_2533_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_2598_, lean_object* v_i_2599_, lean_object* v_bs_2600_){
_start:
{
size_t v_sz_boxed_2601_; size_t v_i_boxed_2602_; lean_object* v_res_2603_; 
v_sz_boxed_2601_ = lean_unbox_usize(v_sz_2598_);
lean_dec(v_sz_2598_);
v_i_boxed_2602_ = lean_unbox_usize(v_i_2599_);
lean_dec(v_i_2599_);
v_res_2603_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3(v_sz_boxed_2601_, v_i_boxed_2602_, v_bs_2600_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2(lean_object* v_x_2606_){
_start:
{
if (lean_obj_tag(v_x_2606_) == 4)
{
lean_object* v_elems_2607_; size_t v_sz_2608_; size_t v___x_2609_; lean_object* v___x_2610_; 
v_elems_2607_ = lean_ctor_get(v_x_2606_, 0);
lean_inc_ref(v_elems_2607_);
lean_dec_ref_known(v_x_2606_, 1);
v_sz_2608_ = lean_array_size(v_elems_2607_);
v___x_2609_ = ((size_t)0ULL);
v___x_2610_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2_spec__3(v_sz_2608_, v___x_2609_, v_elems_2607_);
return v___x_2610_;
}
else
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2611_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_2612_ = lean_unsigned_to_nat(80u);
v___x_2613_ = l_Lean_Json_pretty(v_x_2606_, v___x_2612_);
v___x_2614_ = lean_string_append(v___x_2611_, v___x_2613_);
lean_dec_ref(v___x_2613_);
v___x_2615_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_2616_ = lean_string_append(v___x_2614_, v___x_2615_);
v___x_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2616_);
return v___x_2617_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2(lean_object* v_j_2618_, lean_object* v_k_2619_){
_start:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2620_ = l_Lean_Json_getObjValD(v_j_2618_, v_k_2619_);
v___x_2621_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2(v___x_2620_);
return v___x_2621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2___boxed(lean_object* v_j_2622_, lean_object* v_k_2623_){
_start:
{
lean_object* v_res_2624_; 
v_res_2624_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2(v_j_2622_, v_k_2623_);
lean_dec_ref(v_k_2623_);
return v_res_2624_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5(void){
_start:
{
uint8_t v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2633_ = 1;
v___x_2634_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__4));
v___x_2635_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2634_, v___x_2633_);
return v___x_2635_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2637_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_2638_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__5);
v___x_2639_ = lean_string_append(v___x_2638_, v___x_2637_);
return v___x_2639_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9(void){
_start:
{
uint8_t v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2642_ = 1;
v___x_2643_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__8));
v___x_2644_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2643_, v___x_2642_);
return v___x_2644_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10(void){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2645_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9);
v___x_2646_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7);
v___x_2647_ = lean_string_append(v___x_2646_, v___x_2645_);
return v___x_2647_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12(void){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2649_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_2650_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__10);
v___x_2651_ = lean_string_append(v___x_2650_, v___x_2649_);
return v___x_2651_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15(void){
_start:
{
uint8_t v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2655_ = 1;
v___x_2656_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__14));
v___x_2657_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2656_, v___x_2655_);
return v___x_2657_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16(void){
_start:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2658_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__15);
v___x_2659_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7);
v___x_2660_ = lean_string_append(v___x_2659_, v___x_2658_);
return v___x_2660_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17(void){
_start:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2661_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_2662_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__16);
v___x_2663_ = lean_string_append(v___x_2662_, v___x_2661_);
return v___x_2663_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20(void){
_start:
{
uint8_t v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; 
v___x_2667_ = 1;
v___x_2668_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__19));
v___x_2669_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2668_, v___x_2667_);
return v___x_2669_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21(void){
_start:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2670_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__20);
v___x_2671_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__7);
v___x_2672_ = lean_string_append(v___x_2671_, v___x_2670_);
return v___x_2672_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22(void){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2673_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_2674_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__21);
v___x_2675_ = lean_string_append(v___x_2674_, v___x_2673_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson(lean_object* v_json_2676_){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2677_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0));
lean_inc(v_json_2676_);
v___x_2678_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(v_json_2676_, v___x_2677_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2688_; 
lean_dec(v_json_2676_);
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2681_ = v___x_2678_;
v_isShared_2682_ = v_isSharedCheck_2688_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2678_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2688_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2686_; 
v___x_2683_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__12);
v___x_2684_ = lean_string_append(v___x_2683_, v_a_2679_);
lean_dec(v_a_2679_);
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 0, v___x_2684_);
v___x_2686_ = v___x_2681_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
else
{
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
lean_dec(v_json_2676_);
v_a_2689_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2678_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2678_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
lean_ctor_set_tag(v___x_2691_, 0);
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
else
{
lean_object* v_a_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v_a_2697_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2697_);
lean_dec_ref_known(v___x_2678_, 1);
v___x_2698_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13));
lean_inc(v_json_2676_);
v___x_2699_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(v_json_2676_, v___x_2698_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2709_; 
lean_dec(v_a_2697_);
lean_dec(v_json_2676_);
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2702_ = v___x_2699_;
v_isShared_2703_ = v_isSharedCheck_2709_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_a_2700_);
lean_dec(v___x_2699_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2709_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2707_; 
v___x_2704_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__17);
v___x_2705_ = lean_string_append(v___x_2704_, v_a_2700_);
lean_dec(v_a_2700_);
if (v_isShared_2703_ == 0)
{
lean_ctor_set(v___x_2702_, 0, v___x_2705_);
v___x_2707_ = v___x_2702_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v___x_2705_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
else
{
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_dec(v_a_2697_);
lean_dec(v_json_2676_);
v_a_2710_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___x_2699_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2699_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
lean_ctor_set_tag(v___x_2712_, 0);
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v_a_2718_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2718_);
lean_dec_ref_known(v___x_2699_, 1);
v___x_2719_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18));
v___x_2720_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2(v_json_2676_, v___x_2719_);
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v_a_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2730_; 
lean_dec(v_a_2718_);
lean_dec(v_a_2697_);
v_a_2721_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2723_ = v___x_2720_;
v_isShared_2724_ = v_isSharedCheck_2730_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_a_2721_);
lean_dec(v___x_2720_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2730_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2728_; 
v___x_2725_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__22);
v___x_2726_ = lean_string_append(v___x_2725_, v_a_2721_);
lean_dec(v_a_2721_);
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 0, v___x_2726_);
v___x_2728_ = v___x_2723_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2726_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
else
{
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
lean_dec(v_a_2718_);
lean_dec(v_a_2697_);
v_a_2731_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2720_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2720_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
lean_ctor_set_tag(v___x_2733_, 0);
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_a_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2748_; 
v_a_2739_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2748_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2741_ = v___x_2720_;
v_isShared_2742_ = v_isSharedCheck_2748_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2720_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2748_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2743_; uint8_t v___x_2744_; lean_object* v___x_2746_; 
v___x_2743_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2743_, 0, v_a_2697_);
lean_ctor_set(v___x_2743_, 1, v_a_2739_);
v___x_2744_ = lean_unbox(v_a_2718_);
lean_dec(v_a_2718_);
lean_ctor_set_uint8(v___x_2743_, sizeof(void*)*2, v___x_2744_);
if (v_isShared_2742_ == 0)
{
lean_ctor_set(v___x_2741_, 0, v___x_2743_);
v___x_2746_ = v___x_2741_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v___x_2743_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0(size_t v_sz_2751_, size_t v_i_2752_, lean_object* v_bs_2753_){
_start:
{
uint8_t v___x_2754_; 
v___x_2754_ = lean_usize_dec_lt(v_i_2752_, v_sz_2751_);
if (v___x_2754_ == 0)
{
return v_bs_2753_;
}
else
{
lean_object* v_v_2755_; lean_object* v_module_2756_; uint8_t v_isPrivate_2757_; uint8_t v_isAll_2758_; uint8_t v_isMeta_2759_; lean_object* v___x_2760_; lean_object* v_bs_x27_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; size_t v___x_2773_; size_t v___x_2774_; lean_object* v___x_2775_; 
v_v_2755_ = lean_array_uget_borrowed(v_bs_2753_, v_i_2752_);
v_module_2756_ = lean_ctor_get(v_v_2755_, 0);
lean_inc_ref(v_module_2756_);
v_isPrivate_2757_ = lean_ctor_get_uint8(v_v_2755_, sizeof(void*)*1);
v_isAll_2758_ = lean_ctor_get_uint8(v_v_2755_, sizeof(void*)*1 + 1);
v_isMeta_2759_ = lean_ctor_get_uint8(v_v_2755_, sizeof(void*)*1 + 2);
v___x_2760_ = lean_unsigned_to_nat(0u);
v_bs_x27_2761_ = lean_array_uset(v_bs_2753_, v_i_2752_, v___x_2760_);
v___x_2762_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2762_, 0, v_module_2756_);
v___x_2763_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2763_, 0, v_isPrivate_2757_);
v___x_2764_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2764_, 0, v_isAll_2758_);
v___x_2765_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2765_, 0, v_isMeta_2759_);
v___x_2766_ = lean_unsigned_to_nat(4u);
v___x_2767_ = lean_mk_empty_array_with_capacity(v___x_2766_);
v___x_2768_ = lean_array_push(v___x_2767_, v___x_2762_);
v___x_2769_ = lean_array_push(v___x_2768_, v___x_2763_);
v___x_2770_ = lean_array_push(v___x_2769_, v___x_2764_);
v___x_2771_ = lean_array_push(v___x_2770_, v___x_2765_);
v___x_2772_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
v___x_2773_ = ((size_t)1ULL);
v___x_2774_ = lean_usize_add(v_i_2752_, v___x_2773_);
v___x_2775_ = lean_array_uset(v_bs_x27_2761_, v_i_2752_, v___x_2772_);
v_i_2752_ = v___x_2774_;
v_bs_2753_ = v___x_2775_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0___boxed(lean_object* v_sz_2777_, lean_object* v_i_2778_, lean_object* v_bs_2779_){
_start:
{
size_t v_sz_boxed_2780_; size_t v_i_boxed_2781_; lean_object* v_res_2782_; 
v_sz_boxed_2780_ = lean_unbox_usize(v_sz_2777_);
lean_dec(v_sz_2777_);
v_i_boxed_2781_ = lean_unbox_usize(v_i_2778_);
lean_dec(v_i_2778_);
v_res_2782_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0(v_sz_boxed_2780_, v_i_boxed_2781_, v_bs_2779_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0(lean_object* v_a_2783_){
_start:
{
size_t v_sz_2784_; size_t v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v_sz_2784_ = lean_array_size(v_a_2783_);
v___x_2785_ = ((size_t)0ULL);
v___x_2786_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0_spec__0(v_sz_2784_, v___x_2785_, v_a_2783_);
v___x_2787_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(lean_object* v_a_2788_, lean_object* v_a_2789_){
_start:
{
if (lean_obj_tag(v_a_2788_) == 0)
{
lean_object* v___x_2790_; 
v___x_2790_ = lean_array_to_list(v_a_2789_);
return v___x_2790_;
}
else
{
lean_object* v_head_2791_; lean_object* v_tail_2792_; lean_object* v___x_2793_; 
v_head_2791_ = lean_ctor_get(v_a_2788_, 0);
lean_inc(v_head_2791_);
v_tail_2792_ = lean_ctor_get(v_a_2788_, 1);
lean_inc(v_tail_2792_);
lean_dec_ref_known(v_a_2788_, 2);
v___x_2793_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2789_, v_head_2791_);
v_a_2788_ = v_tail_2792_;
v_a_2789_ = v___x_2793_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson(lean_object* v_x_2797_){
_start:
{
lean_object* v_version_2798_; uint8_t v_isSetupFailure_2799_; lean_object* v_directImports_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v_version_2798_ = lean_ctor_get(v_x_2797_, 0);
lean_inc(v_version_2798_);
v_isSetupFailure_2799_ = lean_ctor_get_uint8(v_x_2797_, sizeof(void*)*2);
v_directImports_2800_ = lean_ctor_get(v_x_2797_, 1);
lean_inc_ref(v_directImports_2800_);
lean_dec_ref(v_x_2797_);
v___x_2801_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0));
v___x_2802_ = l_Lean_JsonNumber_fromNat(v_version_2798_);
v___x_2803_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2802_);
v___x_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2801_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
v___x_2805_ = lean_box(0);
v___x_2806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2804_);
lean_ctor_set(v___x_2806_, 1, v___x_2805_);
v___x_2807_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__13));
v___x_2808_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2808_, 0, v_isSetupFailure_2799_);
v___x_2809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2809_, 0, v___x_2807_);
lean_ctor_set(v___x_2809_, 1, v___x_2808_);
v___x_2810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2809_);
lean_ctor_set(v___x_2810_, 1, v___x_2805_);
v___x_2811_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__18));
v___x_2812_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__0(v_directImports_2800_);
v___x_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2813_, 0, v___x_2811_);
lean_ctor_set(v___x_2813_, 1, v___x_2812_);
v___x_2814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2814_, 0, v___x_2813_);
lean_ctor_set(v___x_2814_, 1, v___x_2805_);
v___x_2815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2815_, 0, v___x_2814_);
lean_ctor_set(v___x_2815_, 1, v___x_2805_);
v___x_2816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2810_);
lean_ctor_set(v___x_2816_, 1, v___x_2815_);
v___x_2817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2806_);
lean_ctor_set(v___x_2817_, 1, v___x_2816_);
v___x_2818_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_2819_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_2817_, v___x_2818_);
v___x_2820_ = l_Lean_Json_mkObj(v___x_2819_);
lean_dec(v___x_2819_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__5(lean_object* v_init_2823_, lean_object* v_x_2824_){
_start:
{
if (lean_obj_tag(v_x_2824_) == 0)
{
lean_object* v_k_2825_; lean_object* v_v_2826_; lean_object* v_l_2827_; lean_object* v_r_2828_; lean_object* v___x_2829_; 
v_k_2825_ = lean_ctor_get(v_x_2824_, 1);
lean_inc(v_k_2825_);
v_v_2826_ = lean_ctor_get(v_x_2824_, 2);
lean_inc(v_v_2826_);
v_l_2827_ = lean_ctor_get(v_x_2824_, 3);
lean_inc(v_l_2827_);
v_r_2828_ = lean_ctor_get(v_x_2824_, 4);
lean_inc(v_r_2828_);
lean_dec_ref_known(v_x_2824_, 5);
v___x_2829_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__5(v_init_2823_, v_l_2827_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_dec(v_r_2828_);
lean_dec(v_v_2826_);
lean_dec(v_k_2825_);
return v___x_2829_;
}
else
{
if (lean_obj_tag(v_v_2826_) == 4)
{
lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2944_; 
v_a_2830_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2832_ = v___x_2829_;
v_isShared_2833_ = v_isSharedCheck_2944_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_dec(v___x_2829_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2944_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v_elems_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; uint8_t v___x_2837_; 
v_elems_2834_ = lean_ctor_get(v_v_2826_, 0);
lean_inc_ref(v_elems_2834_);
lean_dec_ref_known(v_v_2826_, 1);
v___x_2835_ = lean_array_get_size(v_elems_2834_);
v___x_2836_ = lean_unsigned_to_nat(8u);
v___x_2837_ = lean_nat_dec_eq(v___x_2835_, v___x_2836_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2842_; 
lean_dec_ref(v_elems_2834_);
lean_dec(v_a_2830_);
lean_dec(v_r_2828_);
lean_dec(v_k_2825_);
v___x_2838_ = ((lean_object*)(l_Lean_Lsp_instFromJsonDeclInfo___lam__0___closed__0));
v___x_2839_ = l_Nat_reprFast(v___x_2835_);
v___x_2840_ = lean_string_append(v___x_2838_, v___x_2839_);
lean_dec_ref(v___x_2839_);
if (v_isShared_2833_ == 0)
{
lean_ctor_set_tag(v___x_2832_, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2840_);
v___x_2842_ = v___x_2832_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
else
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; 
lean_del_object(v___x_2832_);
v___x_2844_ = lean_box(0);
v___x_2845_ = lean_unsigned_to_nat(0u);
v___x_2846_ = lean_array_get_borrowed(v___x_2844_, v_elems_2834_, v___x_2845_);
lean_inc(v___x_2846_);
v___x_2847_ = l_Lean_Json_getNat_x3f(v___x_2846_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec_ref(v_elems_2834_);
lean_dec(v_a_2830_);
lean_dec(v_r_2828_);
lean_dec(v_k_2825_);
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2847_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2847_);
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
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v_a_2856_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_a_2856_);
lean_dec_ref_known(v___x_2847_, 1);
v___x_2857_ = lean_unsigned_to_nat(1u);
v___x_2858_ = lean_array_get_borrowed(v___x_2844_, v_elems_2834_, v___x_2857_);
lean_inc(v___x_2858_);
v___x_2859_ = l_Lean_Json_getNat_x3f(v___x_2858_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec(v_a_2856_);
lean_dec_ref(v_elems_2834_);
lean_dec(v_a_2830_);
lean_dec(v_r_2828_);
lean_dec(v_k_2825_);
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2859_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2859_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
else
{
lean_object* v_a_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v_a_2868_ = lean_ctor_get(v___x_2859_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v___x_2859_, 1);
v___x_2869_ = lean_unsigned_to_nat(2u);
v___x_2870_ = lean_array_get_borrowed(v___x_2844_, v_elems_2834_, v___x_2869_);
lean_inc(v___x_2870_);
v___x_2871_ = l_Lean_Json_getNat_x3f(v___x_2870_);
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2879_; 
lean_dec(v_a_2868_);
lean_dec(v_a_2856_);
lean_dec_ref(v_elems_2834_);
lean_dec(v_a_2830_);
lean_dec(v_r_2828_);
lean_dec(v_k_2825_);
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2874_ = v___x_2871_;
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2871_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
if (v_isShared_2875_ == 0)
{
v___x_2877_ = v___x_2874_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_a_2872_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
else
{
lean_object* v_a_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; 
v_a_2880_ = lean_ctor_get(v___x_2871_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v___x_2871_, 1);
v___x_2881_ = lean_unsigned_to_nat(3u);
v___x_2882_ = lean_array_get_borrowed(v___x_2844_, v_elems_2834_, v___x_2881_);
lean_inc(v___x_2882_);
v___x_2883_ = l_Lean_Json_getNat_x3f(v___x_2882_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2891_; 
lean_dec(v_a_2880_);
lean_dec(v_a_2868_);
lean_dec(v_a_2856_);
lean_dec_ref(v_elems_2834_);
lean_dec(v_a_2830_);
lean_dec(v_r_2828_);
lean_dec(v_k_2825_);
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2883_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2886_ = v___x_2883_;
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v___x_2883_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2889_; 
if (v_isShared_2887_ == 0)
{
v___x_2889_ = v___x_2886_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v_a_2884_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
}
else
{
lean_object* v_a_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
v_a_2892_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_a_2892_);
lean_dec_ref_known(v___x_2883_, 1);
v___x_2893_ = lean_unsigned_to_nat(4u);
v___x_2894_ = lean_array_get_borrowed(v___x_2844_, v_elems_2834_, v___x_2893_);
lean_inc(v___x_2894_);
v___x_2895_ = l_Lean_Json_getNat_x3f(v___x_2894_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2903_; 
lean_dec(v_a_2892_);
lean_dec(v_a_2880_);
lean_dec(v_a_2868_);
lean_dec(v_a_2856_);
lean_dec_ref(v_elems_2834_);
lean_dec(v_a_2830_);
lean_dec(v_r_2828_);
lean_dec(v_k_2825_);
v_a_2896_ = lean_ctor_get(v___x_2895_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2895_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2898_ = v___x_2895_;
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v___x_2895_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_a_2896_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v_a_2904_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2904_);
lean_dec_ref_known(v___x_2895_, 1);
v___x_2905_ = lean_unsigned_to_nat(5u);
v___x_2906_ = lean_array_get_borrowed(v___x_2844_, v_elems_2834_, v___x_2905_);
lean_inc(v___x_2906_);
v___x_2907_ = l_Lean_Json_getNat_x3f(v___x_2906_);
if (lean_obj_tag(v___x_2907_) == 0)
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
lean_dec(v_a_2904_);
lean_dec(v_a_2892_);
lean_dec(v_a_2880_);
lean_dec(v_a_2868_);
lean_dec(v_a_2856_);
lean_dec_ref(v_elems_2834_);
lean_dec(v_a_2830_);
lean_dec(v_r_2828_);
lean_dec(v_k_2825_);
v_a_2908_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2907_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2907_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v_a_2916_ = lean_ctor_get(v___x_2907_, 0);
lean_inc(v_a_2916_);
lean_dec_ref_known(v___x_2907_, 1);
v___x_2917_ = lean_unsigned_to_nat(6u);
v___x_2918_ = lean_array_get_borrowed(v___x_2844_, v_elems_2834_, v___x_2917_);
lean_inc(v___x_2918_);
v___x_2919_ = l_Lean_Json_getNat_x3f(v___x_2918_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
lean_dec(v_a_2916_);
lean_dec(v_a_2904_);
lean_dec(v_a_2892_);
lean_dec(v_a_2880_);
lean_dec(v_a_2868_);
lean_dec(v_a_2856_);
lean_dec_ref(v_elems_2834_);
lean_dec(v_a_2830_);
lean_dec(v_r_2828_);
lean_dec(v_k_2825_);
v_a_2920_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2919_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2919_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
else
{
lean_object* v_a_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v_a_2928_ = lean_ctor_get(v___x_2919_, 0);
lean_inc(v_a_2928_);
lean_dec_ref_known(v___x_2919_, 1);
v___x_2929_ = lean_unsigned_to_nat(7u);
v___x_2930_ = lean_array_get(v___x_2844_, v_elems_2834_, v___x_2929_);
lean_dec_ref(v_elems_2834_);
v___x_2931_ = l_Lean_Json_getNat_x3f(v___x_2930_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec(v_a_2928_);
lean_dec(v_a_2916_);
lean_dec(v_a_2904_);
lean_dec(v_a_2892_);
lean_dec(v_a_2880_);
lean_dec(v_a_2868_);
lean_dec(v_a_2856_);
lean_dec(v_a_2830_);
lean_dec(v_r_2828_);
lean_dec(v_k_2825_);
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2931_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2931_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v_a_2940_ = lean_ctor_get(v___x_2931_, 0);
lean_inc(v_a_2940_);
lean_dec_ref_known(v___x_2931_, 1);
v___x_2941_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2941_, 0, v_a_2856_);
lean_ctor_set(v___x_2941_, 1, v_a_2868_);
lean_ctor_set(v___x_2941_, 2, v_a_2880_);
lean_ctor_set(v___x_2941_, 3, v_a_2892_);
lean_ctor_set(v___x_2941_, 4, v_a_2904_);
lean_ctor_set(v___x_2941_, 5, v_a_2916_);
lean_ctor_set(v___x_2941_, 6, v_a_2928_);
lean_ctor_set(v___x_2941_, 7, v_a_2940_);
v___x_2942_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_Decls_insert_spec__0___redArg(v_k_2825_, v___x_2941_, v_a_2830_);
v_init_2823_ = v___x_2942_;
v_x_2824_ = v_r_2828_;
goto _start;
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
else
{
lean_object* v___x_2945_; 
lean_dec_ref_known(v___x_2829_, 1);
lean_dec(v_r_2828_);
lean_dec(v_v_2826_);
lean_dec(v_k_2825_);
v___x_2945_ = ((lean_object*)(l_Lean_Lsp_Decls_instFromJson___lam__0___closed__0));
return v___x_2945_;
}
}
}
else
{
lean_object* v___x_2946_; 
v___x_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2946_, 0, v_init_2823_);
return v___x_2946_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1(lean_object* v_j_2947_, lean_object* v_k_2948_){
_start:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2949_ = l_Lean_Json_getObjValD(v_j_2947_, v_k_2948_);
v___x_2950_ = l_Lean_Json_getObj_x3f(v___x_2949_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2958_; 
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2953_ = v___x_2950_;
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2950_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2954_ == 0)
{
v___x_2956_ = v___x_2953_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_a_2951_);
v___x_2956_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
return v___x_2956_;
}
}
}
else
{
lean_object* v_a_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v_a_2959_ = lean_ctor_get(v___x_2950_, 0);
lean_inc(v_a_2959_);
lean_dec_ref_known(v___x_2950_, 1);
v___x_2960_ = lean_box(1);
v___x_2961_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1_spec__5(v___x_2960_, v_a_2959_);
return v___x_2961_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1___boxed(lean_object* v_j_2962_, lean_object* v_k_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1(v_j_2962_, v_k_2963_);
lean_dec_ref(v_k_2963_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1(size_t v_sz_2965_, size_t v_i_2966_, lean_object* v_bs_2967_){
_start:
{
uint8_t v___x_2968_; 
v___x_2968_ = lean_usize_dec_lt(v_i_2966_, v_sz_2965_);
if (v___x_2968_ == 0)
{
lean_object* v___x_2969_; 
v___x_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2969_, 0, v_bs_2967_);
return v___x_2969_;
}
else
{
lean_object* v_v_2970_; lean_object* v___x_2971_; lean_object* v_bs_x27_2972_; lean_object* v_a_2974_; lean_object* v___x_2979_; lean_object* v___x_2980_; uint8_t v___y_2982_; uint8_t v___y_3046_; uint8_t v___y_3047_; uint8_t v___y_3048_; uint8_t v___y_3054_; uint8_t v___x_3058_; 
v_v_2970_ = lean_array_uget(v_bs_2967_, v_i_2966_);
v___x_2971_ = lean_unsigned_to_nat(0u);
v_bs_x27_2972_ = lean_array_uset(v_bs_2967_, v_i_2966_, v___x_2971_);
v___x_2979_ = lean_array_get_size(v_v_2970_);
v___x_2980_ = lean_unsigned_to_nat(4u);
v___x_3058_ = lean_nat_dec_eq(v___x_2979_, v___x_2980_);
if (v___x_3058_ == 0)
{
v___y_3054_ = v___x_2968_;
goto v___jp_3053_;
}
else
{
uint8_t v___x_3059_; 
v___x_3059_ = 0;
v___y_3054_ = v___x_3059_;
goto v___jp_3053_;
}
v___jp_2973_:
{
size_t v___x_2975_; size_t v___x_2976_; lean_object* v___x_2977_; 
v___x_2975_ = ((size_t)1ULL);
v___x_2976_ = lean_usize_add(v_i_2966_, v___x_2975_);
v___x_2977_ = lean_array_uset(v_bs_x27_2972_, v_i_2966_, v_a_2974_);
v_i_2966_ = v___x_2976_;
v_bs_2967_ = v___x_2977_;
goto _start;
}
v___jp_2981_:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2983_ = lean_array_fget_borrowed(v_v_2970_, v___x_2971_);
lean_inc(v___x_2983_);
v___x_2984_ = l_Lean_Json_getNat_x3f(v___x_2983_);
if (lean_obj_tag(v___x_2984_) == 0)
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_dec_ref(v_bs_x27_2972_);
lean_dec(v_v_2970_);
v_a_2985_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2984_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2984_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
else
{
lean_object* v_a_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; 
v_a_2993_ = lean_ctor_get(v___x_2984_, 0);
lean_inc(v_a_2993_);
lean_dec_ref_known(v___x_2984_, 1);
v___x_2994_ = lean_unsigned_to_nat(1u);
v___x_2995_ = lean_array_fget_borrowed(v_v_2970_, v___x_2994_);
lean_inc(v___x_2995_);
v___x_2996_ = l_Lean_Json_getNat_x3f(v___x_2995_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3004_; 
lean_dec(v_a_2993_);
lean_dec_ref(v_bs_x27_2972_);
lean_dec(v_v_2970_);
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2999_ = v___x_2996_;
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2996_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_a_2997_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
return v___x_3002_;
}
}
}
else
{
lean_object* v_a_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; 
v_a_3005_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_a_3005_);
lean_dec_ref_known(v___x_2996_, 1);
v___x_3006_ = lean_unsigned_to_nat(2u);
v___x_3007_ = lean_array_fget_borrowed(v_v_2970_, v___x_3006_);
lean_inc(v___x_3007_);
v___x_3008_ = l_Lean_Json_getNat_x3f(v___x_3007_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3016_; 
lean_dec(v_a_3005_);
lean_dec(v_a_2993_);
lean_dec_ref(v_bs_x27_2972_);
lean_dec(v_v_2970_);
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3011_ = v___x_3008_;
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3008_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_3012_ == 0)
{
v___x_3014_ = v___x_3011_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
}
else
{
lean_object* v_a_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v_a_3017_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_a_3017_);
lean_dec_ref_known(v___x_3008_, 1);
v___x_3018_ = lean_unsigned_to_nat(3u);
v___x_3019_ = lean_array_fget_borrowed(v_v_2970_, v___x_3018_);
lean_inc(v___x_3019_);
v___x_3020_ = l_Lean_Json_getNat_x3f(v___x_3019_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
lean_dec(v_a_3017_);
lean_dec(v_a_3005_);
lean_dec(v_a_2993_);
lean_dec_ref(v_bs_x27_2972_);
lean_dec(v_v_2970_);
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3023_ = v___x_3020_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___x_3020_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3021_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
else
{
if (v___y_2982_ == 0)
{
lean_object* v_a_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; 
lean_dec(v_v_2970_);
v_a_3029_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3029_);
lean_dec_ref_known(v___x_3020_, 1);
v___x_3030_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
v___x_3031_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3031_, 0, v_a_2993_);
lean_ctor_set(v___x_3031_, 1, v_a_3005_);
lean_ctor_set(v___x_3031_, 2, v_a_3017_);
lean_ctor_set(v___x_3031_, 3, v_a_3029_);
lean_ctor_set(v___x_3031_, 4, v___x_3030_);
v_a_2974_ = v___x_3031_;
goto v___jp_2973_;
}
else
{
lean_object* v_a_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v_a_3032_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3032_);
lean_dec_ref_known(v___x_3020_, 1);
v___x_3033_ = lean_array_fget(v_v_2970_, v___x_2980_);
lean_dec(v_v_2970_);
v___x_3034_ = l_Lean_Json_getStr_x3f(v___x_3033_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3042_; 
lean_dec(v_a_3032_);
lean_dec(v_a_3017_);
lean_dec(v_a_3005_);
lean_dec(v_a_2993_);
lean_dec_ref(v_bs_x27_2972_);
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_3034_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3037_ = v___x_3034_;
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_a_3035_);
lean_dec(v___x_3034_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3040_; 
if (v_isShared_3038_ == 0)
{
v___x_3040_ = v___x_3037_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_a_3035_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
}
else
{
lean_object* v_a_3043_; lean_object* v___x_3044_; 
v_a_3043_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3034_, 1);
v___x_3044_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3044_, 0, v_a_2993_);
lean_ctor_set(v___x_3044_, 1, v_a_3005_);
lean_ctor_set(v___x_3044_, 2, v_a_3017_);
lean_ctor_set(v___x_3044_, 3, v_a_3032_);
lean_ctor_set(v___x_3044_, 4, v_a_3043_);
v_a_2974_ = v___x_3044_;
goto v___jp_2973_;
}
}
}
}
}
}
}
v___jp_3045_:
{
if (v___y_3046_ == 0)
{
v___y_2982_ = v___y_3047_;
goto v___jp_2981_;
}
else
{
if (v___y_3048_ == 0)
{
v___y_2982_ = v___y_3047_;
goto v___jp_2981_;
}
else
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
lean_dec_ref(v_bs_x27_2972_);
lean_dec(v_v_2970_);
v___x_3049_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0));
v___x_3050_ = l_Nat_reprFast(v___x_2979_);
v___x_3051_ = lean_string_append(v___x_3049_, v___x_3050_);
lean_dec_ref(v___x_3050_);
v___x_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
return v___x_3052_;
}
}
}
v___jp_3053_:
{
lean_object* v___x_3055_; uint8_t v___x_3056_; 
v___x_3055_ = lean_unsigned_to_nat(5u);
v___x_3056_ = lean_nat_dec_eq(v___x_2979_, v___x_3055_);
if (v___x_3056_ == 0)
{
v___y_3046_ = v___y_3054_;
v___y_3047_ = v___x_3056_;
v___y_3048_ = v___x_2968_;
goto v___jp_3045_;
}
else
{
uint8_t v___x_3057_; 
v___x_3057_ = 0;
v___y_3046_ = v___y_3054_;
v___y_3047_ = v___x_3056_;
v___y_3048_ = v___x_3057_;
goto v___jp_3045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1___boxed(lean_object* v_sz_3060_, lean_object* v_i_3061_, lean_object* v_bs_3062_){
_start:
{
size_t v_sz_boxed_3063_; size_t v_i_boxed_3064_; lean_object* v_res_3065_; 
v_sz_boxed_3063_ = lean_unbox_usize(v_sz_3060_);
lean_dec(v_sz_3060_);
v_i_boxed_3064_ = lean_unbox_usize(v_i_3061_);
lean_dec(v_i_3061_);
v_res_3065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1(v_sz_boxed_3063_, v_i_boxed_3064_, v_bs_3062_);
return v_res_3065_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__8(size_t v_sz_3066_, size_t v_i_3067_, lean_object* v_bs_3068_){
_start:
{
uint8_t v___x_3069_; 
v___x_3069_ = lean_usize_dec_lt(v_i_3067_, v_sz_3066_);
if (v___x_3069_ == 0)
{
lean_object* v___x_3070_; 
v___x_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3070_, 0, v_bs_3068_);
return v___x_3070_;
}
else
{
lean_object* v_v_3071_; lean_object* v___x_3072_; lean_object* v_bs_x27_3073_; size_t v___x_3074_; size_t v___x_3075_; lean_object* v___x_3076_; 
v_v_3071_ = lean_array_uget(v_bs_3068_, v_i_3067_);
v___x_3072_ = lean_unsigned_to_nat(0u);
v_bs_x27_3073_ = lean_array_uset(v_bs_3068_, v_i_3067_, v___x_3072_);
v___x_3074_ = ((size_t)1ULL);
v___x_3075_ = lean_usize_add(v_i_3067_, v___x_3074_);
v___x_3076_ = lean_array_uset(v_bs_x27_3073_, v_i_3067_, v_v_3071_);
v_i_3067_ = v___x_3075_;
v_bs_3068_ = v___x_3076_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__8___boxed(lean_object* v_sz_3078_, lean_object* v_i_3079_, lean_object* v_bs_3080_){
_start:
{
size_t v_sz_boxed_3081_; size_t v_i_boxed_3082_; lean_object* v_res_3083_; 
v_sz_boxed_3081_ = lean_unbox_usize(v_sz_3078_);
lean_dec(v_sz_3078_);
v_i_boxed_3082_ = lean_unbox_usize(v_i_3079_);
lean_dec(v_i_3079_);
v_res_3083_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__8(v_sz_boxed_3081_, v_i_boxed_3082_, v_bs_3080_);
return v_res_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_3084_){
_start:
{
if (lean_obj_tag(v_x_3084_) == 4)
{
lean_object* v_elems_3085_; size_t v_sz_3086_; size_t v___x_3087_; lean_object* v___x_3088_; 
v_elems_3085_ = lean_ctor_get(v_x_3084_, 0);
lean_inc_ref(v_elems_3085_);
lean_dec_ref_known(v_x_3084_, 1);
v_sz_3086_ = lean_array_size(v_elems_3085_);
v___x_3087_ = ((size_t)0ULL);
v___x_3088_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3_spec__8(v_sz_3086_, v___x_3087_, v_elems_3085_);
return v___x_3088_;
}
else
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3089_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_3090_ = lean_unsigned_to_nat(80u);
v___x_3091_ = l_Lean_Json_pretty(v_x_3084_, v___x_3090_);
v___x_3092_ = lean_string_append(v___x_3089_, v___x_3091_);
lean_dec_ref(v___x_3091_);
v___x_3093_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_3094_ = lean_string_append(v___x_3092_, v___x_3093_);
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
return v___x_3095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2_spec__4(lean_object* v_x_3098_){
_start:
{
if (lean_obj_tag(v_x_3098_) == 0)
{
lean_object* v___x_3099_; 
v___x_3099_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2_spec__4___closed__0));
return v___x_3099_;
}
else
{
lean_object* v___x_3100_; 
v___x_3100_ = l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3(v_x_3098_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3108_; 
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3103_ = v___x_3100_;
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3100_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3106_; 
if (v_isShared_3104_ == 0)
{
v___x_3106_ = v___x_3103_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_a_3101_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
return v___x_3106_;
}
}
}
else
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3117_; 
v_a_3109_ = lean_ctor_get(v___x_3100_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3111_ = v___x_3100_;
v_isShared_3112_ = v_isSharedCheck_3117_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v___x_3100_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3117_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3113_; lean_object* v___x_3115_; 
v___x_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3113_, 0, v_a_3109_);
if (v_isShared_3112_ == 0)
{
lean_ctor_set(v___x_3111_, 0, v___x_3113_);
v___x_3115_ = v___x_3111_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v___x_3113_);
v___x_3115_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
return v___x_3115_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2(lean_object* v_j_3118_, lean_object* v_k_3119_){
_start:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3120_ = l_Lean_Json_getObjValD(v_j_3118_, v_k_3119_);
v___x_3121_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2_spec__4(v___x_3120_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2___boxed(lean_object* v_j_3122_, lean_object* v_k_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2(v_j_3122_, v_k_3123_);
lean_dec_ref(v_k_3123_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4(size_t v_sz_3125_, size_t v_i_3126_, lean_object* v_bs_3127_){
_start:
{
uint8_t v___x_3128_; 
v___x_3128_ = lean_usize_dec_lt(v_i_3126_, v_sz_3125_);
if (v___x_3128_ == 0)
{
lean_object* v___x_3129_; 
v___x_3129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3129_, 0, v_bs_3127_);
return v___x_3129_;
}
else
{
lean_object* v_v_3130_; lean_object* v___x_3131_; 
v_v_3130_ = lean_array_uget_borrowed(v_bs_3127_, v_i_3126_);
lean_inc(v_v_3130_);
v___x_3131_ = l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__3(v_v_3130_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
lean_dec_ref(v_bs_3127_);
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_3131_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3131_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3137_; 
if (v_isShared_3135_ == 0)
{
v___x_3137_ = v___x_3134_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_a_3132_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3141_; lean_object* v_bs_x27_3142_; size_t v___x_3143_; size_t v___x_3144_; lean_object* v___x_3145_; 
v_a_3140_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_a_3140_);
lean_dec_ref_known(v___x_3131_, 1);
v___x_3141_ = lean_unsigned_to_nat(0u);
v_bs_x27_3142_ = lean_array_uset(v_bs_3127_, v_i_3126_, v___x_3141_);
v___x_3143_ = ((size_t)1ULL);
v___x_3144_ = lean_usize_add(v_i_3126_, v___x_3143_);
v___x_3145_ = lean_array_uset(v_bs_x27_3142_, v_i_3126_, v_a_3140_);
v_i_3126_ = v___x_3144_;
v_bs_3127_ = v___x_3145_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_sz_3147_, lean_object* v_i_3148_, lean_object* v_bs_3149_){
_start:
{
size_t v_sz_boxed_3150_; size_t v_i_boxed_3151_; lean_object* v_res_3152_; 
v_sz_boxed_3150_ = lean_unbox_usize(v_sz_3147_);
lean_dec(v_sz_3147_);
v_i_boxed_3151_ = lean_unbox_usize(v_i_3148_);
lean_dec(v_i_3148_);
v_res_3152_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4(v_sz_boxed_3150_, v_i_boxed_3151_, v_bs_3149_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_3153_){
_start:
{
if (lean_obj_tag(v_x_3153_) == 4)
{
lean_object* v_elems_3154_; size_t v_sz_3155_; size_t v___x_3156_; lean_object* v___x_3157_; 
v_elems_3154_ = lean_ctor_get(v_x_3153_, 0);
lean_inc_ref(v_elems_3154_);
lean_dec_ref_known(v_x_3153_, 1);
v_sz_3155_ = lean_array_size(v_elems_3154_);
v___x_3156_ = ((size_t)0ULL);
v___x_3157_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1_spec__4(v_sz_3155_, v___x_3156_, v_elems_3154_);
return v___x_3157_;
}
else
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3158_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_3159_ = lean_unsigned_to_nat(80u);
v___x_3160_ = l_Lean_Json_pretty(v_x_3153_, v___x_3159_);
v___x_3161_ = lean_string_append(v___x_3158_, v___x_3160_);
lean_dec_ref(v___x_3160_);
v___x_3162_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_3163_ = lean_string_append(v___x_3161_, v___x_3162_);
v___x_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
return v___x_3164_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0(lean_object* v_j_3165_, lean_object* v_k_3166_){
_start:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3167_ = l_Lean_Json_getObjValD(v_j_3165_, v_k_3166_);
v___x_3168_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0_spec__1(v___x_3167_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0___boxed(lean_object* v_j_3169_, lean_object* v_k_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0(v_j_3169_, v_k_3170_);
lean_dec_ref(v_k_3170_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3(lean_object* v_init_3172_, lean_object* v_x_3173_){
_start:
{
if (lean_obj_tag(v_x_3173_) == 0)
{
lean_object* v_k_3174_; lean_object* v_v_3175_; lean_object* v_l_3176_; lean_object* v_r_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3347_; 
v_k_3174_ = lean_ctor_get(v_x_3173_, 1);
v_v_3175_ = lean_ctor_get(v_x_3173_, 2);
v_l_3176_ = lean_ctor_get(v_x_3173_, 3);
v_r_3177_ = lean_ctor_get(v_x_3173_, 4);
v_isSharedCheck_3347_ = !lean_is_exclusive(v_x_3173_);
if (v_isSharedCheck_3347_ == 0)
{
lean_object* v_unused_3348_; 
v_unused_3348_ = lean_ctor_get(v_x_3173_, 0);
lean_dec(v_unused_3348_);
v___x_3179_ = v_x_3173_;
v_isShared_3180_ = v_isSharedCheck_3347_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_r_3177_);
lean_inc(v_l_3176_);
lean_inc(v_v_3175_);
lean_inc(v_k_3174_);
lean_dec(v_x_3173_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3347_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3181_; 
v___x_3181_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3(v_init_3172_, v_l_3176_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
lean_dec(v_k_3174_);
return v___x_3181_;
}
else
{
lean_object* v_a_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3346_; 
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3181_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3184_ = v___x_3181_;
v_isShared_3185_ = v_isSharedCheck_3346_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_a_3182_);
lean_dec(v___x_3181_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3346_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3186_; 
v___x_3186_ = l_Lean_Json_parse(v_k_3174_);
if (lean_obj_tag(v___x_3186_) == 0)
{
lean_object* v_a_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3194_; 
lean_del_object(v___x_3184_);
lean_dec(v_a_3182_);
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
v_a_3187_ = lean_ctor_get(v___x_3186_, 0);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3189_ = v___x_3186_;
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_a_3187_);
lean_dec(v___x_3186_);
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
v_reuseFailAlloc_3193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_a_3187_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
else
{
lean_object* v_a_3195_; lean_object* v___x_3196_; 
v_a_3195_ = lean_ctor_get(v___x_3186_, 0);
lean_inc(v_a_3195_);
lean_dec_ref_known(v___x_3186_, 1);
v___x_3196_ = l_Lean_Lsp_RefIdent_fromJson_x3f(v_a_3195_);
if (lean_obj_tag(v___x_3196_) == 0)
{
lean_object* v_a_3197_; lean_object* v___x_3199_; uint8_t v_isShared_3200_; uint8_t v_isSharedCheck_3204_; 
lean_del_object(v___x_3184_);
lean_dec(v_a_3182_);
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
v_a_3197_ = lean_ctor_get(v___x_3196_, 0);
v_isSharedCheck_3204_ = !lean_is_exclusive(v___x_3196_);
if (v_isSharedCheck_3204_ == 0)
{
v___x_3199_ = v___x_3196_;
v_isShared_3200_ = v_isSharedCheck_3204_;
goto v_resetjp_3198_;
}
else
{
lean_inc(v_a_3197_);
lean_dec(v___x_3196_);
v___x_3199_ = lean_box(0);
v_isShared_3200_ = v_isSharedCheck_3204_;
goto v_resetjp_3198_;
}
v_resetjp_3198_:
{
lean_object* v___x_3202_; 
if (v_isShared_3200_ == 0)
{
v___x_3202_ = v___x_3199_;
goto v_reusejp_3201_;
}
else
{
lean_object* v_reuseFailAlloc_3203_; 
v_reuseFailAlloc_3203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3203_, 0, v_a_3197_);
v___x_3202_ = v_reuseFailAlloc_3203_;
goto v_reusejp_3201_;
}
v_reusejp_3201_:
{
return v___x_3202_;
}
}
}
else
{
lean_object* v_a_3205_; lean_object* v_definition_x3f_3207_; lean_object* v_a_3235_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v_a_3205_ = lean_ctor_get(v___x_3196_, 0);
lean_inc(v_a_3205_);
lean_dec_ref_known(v___x_3196_, 1);
v___x_3239_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
lean_inc(v_v_3175_);
v___x_3240_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__2(v_v_3175_, v___x_3239_);
if (lean_obj_tag(v___x_3240_) == 0)
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3248_; 
lean_dec(v_a_3205_);
lean_del_object(v___x_3184_);
lean_dec(v_a_3182_);
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
v_a_3241_ = lean_ctor_get(v___x_3240_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3240_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3243_ = v___x_3240_;
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v___x_3240_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_a_3241_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3345_; 
v_a_3249_ = lean_ctor_get(v___x_3240_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3240_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3251_ = v___x_3240_;
v_isShared_3252_ = v_isSharedCheck_3345_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3240_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3345_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
if (lean_obj_tag(v_a_3249_) == 0)
{
lean_object* v___x_3253_; 
lean_del_object(v___x_3251_);
lean_del_object(v___x_3184_);
lean_del_object(v___x_3179_);
v___x_3253_ = lean_box(0);
v_definition_x3f_3207_ = v___x_3253_;
goto v___jp_3206_;
}
else
{
lean_object* v_val_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; uint8_t v___y_3258_; uint8_t v___y_3327_; uint8_t v___y_3328_; uint8_t v___y_3329_; uint8_t v___y_3337_; uint8_t v___x_3342_; 
v_val_3254_ = lean_ctor_get(v_a_3249_, 0);
lean_inc(v_val_3254_);
lean_dec_ref_known(v_a_3249_, 1);
v___x_3255_ = lean_array_get_size(v_val_3254_);
v___x_3256_ = lean_unsigned_to_nat(4u);
v___x_3342_ = lean_nat_dec_eq(v___x_3255_, v___x_3256_);
if (v___x_3342_ == 0)
{
uint8_t v___x_3343_; 
v___x_3343_ = 1;
v___y_3337_ = v___x_3343_;
goto v___jp_3336_;
}
else
{
uint8_t v___x_3344_; 
v___x_3344_ = 0;
v___y_3337_ = v___x_3344_;
goto v___jp_3336_;
}
v___jp_3257_:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3259_ = lean_unsigned_to_nat(0u);
v___x_3260_ = lean_array_fget_borrowed(v_val_3254_, v___x_3259_);
lean_inc(v___x_3260_);
v___x_3261_ = l_Lean_Json_getNat_x3f(v___x_3260_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
lean_dec(v_val_3254_);
lean_dec(v_a_3205_);
lean_del_object(v___x_3184_);
lean_dec(v_a_3182_);
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3261_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3261_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
else
{
lean_object* v_a_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; 
v_a_3270_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3270_);
lean_dec_ref_known(v___x_3261_, 1);
v___x_3271_ = lean_unsigned_to_nat(1u);
v___x_3272_ = lean_array_fget_borrowed(v_val_3254_, v___x_3271_);
lean_inc(v___x_3272_);
v___x_3273_ = l_Lean_Json_getNat_x3f(v___x_3272_);
if (lean_obj_tag(v___x_3273_) == 0)
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
lean_dec(v_a_3270_);
lean_dec(v_val_3254_);
lean_dec(v_a_3205_);
lean_del_object(v___x_3184_);
lean_dec(v_a_3182_);
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
v_a_3274_ = lean_ctor_get(v___x_3273_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3273_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3273_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
v_a_3282_ = lean_ctor_get(v___x_3273_, 0);
lean_inc(v_a_3282_);
lean_dec_ref_known(v___x_3273_, 1);
v___x_3283_ = lean_unsigned_to_nat(2u);
v___x_3284_ = lean_array_fget_borrowed(v_val_3254_, v___x_3283_);
lean_inc(v___x_3284_);
v___x_3285_ = l_Lean_Json_getNat_x3f(v___x_3284_);
if (lean_obj_tag(v___x_3285_) == 0)
{
lean_object* v_a_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3293_; 
lean_dec(v_a_3282_);
lean_dec(v_a_3270_);
lean_dec(v_val_3254_);
lean_dec(v_a_3205_);
lean_del_object(v___x_3184_);
lean_dec(v_a_3182_);
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
v_a_3286_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3288_ = v___x_3285_;
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_a_3286_);
lean_dec(v___x_3285_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3291_; 
if (v_isShared_3289_ == 0)
{
v___x_3291_ = v___x_3288_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_a_3286_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
else
{
lean_object* v_a_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v_a_3294_ = lean_ctor_get(v___x_3285_, 0);
lean_inc(v_a_3294_);
lean_dec_ref_known(v___x_3285_, 1);
v___x_3295_ = lean_unsigned_to_nat(3u);
v___x_3296_ = lean_array_fget_borrowed(v_val_3254_, v___x_3295_);
lean_inc(v___x_3296_);
v___x_3297_ = l_Lean_Json_getNat_x3f(v___x_3296_);
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3305_; 
lean_dec(v_a_3294_);
lean_dec(v_a_3282_);
lean_dec(v_a_3270_);
lean_dec(v_val_3254_);
lean_dec(v_a_3205_);
lean_del_object(v___x_3184_);
lean_dec(v_a_3182_);
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
v_a_3298_ = lean_ctor_get(v___x_3297_, 0);
v_isSharedCheck_3305_ = !lean_is_exclusive(v___x_3297_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3300_ = v___x_3297_;
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v___x_3297_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3303_; 
if (v_isShared_3301_ == 0)
{
v___x_3303_ = v___x_3300_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v_a_3298_);
v___x_3303_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
return v___x_3303_;
}
}
}
else
{
if (v___y_3258_ == 0)
{
lean_object* v_a_3306_; lean_object* v___x_3307_; lean_object* v___x_3309_; 
lean_dec(v_val_3254_);
v_a_3306_ = lean_ctor_get(v___x_3297_, 0);
lean_inc(v_a_3306_);
lean_dec_ref_known(v___x_3297_, 1);
v___x_3307_ = ((lean_object*)(l_Lean_Lsp_instInhabitedImportInfo_default___closed__0));
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 4, v___x_3307_);
lean_ctor_set(v___x_3179_, 3, v_a_3306_);
lean_ctor_set(v___x_3179_, 2, v_a_3294_);
lean_ctor_set(v___x_3179_, 1, v_a_3282_);
lean_ctor_set(v___x_3179_, 0, v_a_3270_);
v___x_3309_ = v___x_3179_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v_a_3270_);
lean_ctor_set(v_reuseFailAlloc_3310_, 1, v_a_3282_);
lean_ctor_set(v_reuseFailAlloc_3310_, 2, v_a_3294_);
lean_ctor_set(v_reuseFailAlloc_3310_, 3, v_a_3306_);
lean_ctor_set(v_reuseFailAlloc_3310_, 4, v___x_3307_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
v_a_3235_ = v___x_3309_;
goto v___jp_3234_;
}
}
else
{
lean_object* v_a_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
v_a_3311_ = lean_ctor_get(v___x_3297_, 0);
lean_inc(v_a_3311_);
lean_dec_ref_known(v___x_3297_, 1);
v___x_3312_ = lean_array_fget(v_val_3254_, v___x_3256_);
lean_dec(v_val_3254_);
v___x_3313_ = l_Lean_Json_getStr_x3f(v___x_3312_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v_a_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3321_; 
lean_dec(v_a_3311_);
lean_dec(v_a_3294_);
lean_dec(v_a_3282_);
lean_dec(v_a_3270_);
lean_dec(v_a_3205_);
lean_del_object(v___x_3184_);
lean_dec(v_a_3182_);
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3316_ = v___x_3313_;
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_a_3314_);
lean_dec(v___x_3313_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3319_; 
if (v_isShared_3317_ == 0)
{
v___x_3319_ = v___x_3316_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_a_3314_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; 
v_a_3322_ = lean_ctor_get(v___x_3313_, 0);
lean_inc(v_a_3322_);
lean_dec_ref_known(v___x_3313_, 1);
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 4, v_a_3322_);
lean_ctor_set(v___x_3179_, 3, v_a_3311_);
lean_ctor_set(v___x_3179_, 2, v_a_3294_);
lean_ctor_set(v___x_3179_, 1, v_a_3282_);
lean_ctor_set(v___x_3179_, 0, v_a_3270_);
v___x_3324_ = v___x_3179_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3270_);
lean_ctor_set(v_reuseFailAlloc_3325_, 1, v_a_3282_);
lean_ctor_set(v_reuseFailAlloc_3325_, 2, v_a_3294_);
lean_ctor_set(v_reuseFailAlloc_3325_, 3, v_a_3311_);
lean_ctor_set(v_reuseFailAlloc_3325_, 4, v_a_3322_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
v_a_3235_ = v___x_3324_;
goto v___jp_3234_;
}
}
}
}
}
}
}
}
v___jp_3326_:
{
if (v___y_3327_ == 0)
{
lean_del_object(v___x_3251_);
v___y_3258_ = v___y_3328_;
goto v___jp_3257_;
}
else
{
if (v___y_3329_ == 0)
{
lean_del_object(v___x_3251_);
v___y_3258_ = v___y_3328_;
goto v___jp_3257_;
}
else
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3334_; 
lean_dec(v_val_3254_);
lean_dec(v_a_3205_);
lean_del_object(v___x_3184_);
lean_dec(v_a_3182_);
lean_del_object(v___x_3179_);
lean_dec(v_r_3177_);
lean_dec(v_v_3175_);
v___x_3330_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRefInfo___lam__0___closed__0));
v___x_3331_ = l_Nat_reprFast(v___x_3255_);
v___x_3332_ = lean_string_append(v___x_3330_, v___x_3331_);
lean_dec_ref(v___x_3331_);
if (v_isShared_3252_ == 0)
{
lean_ctor_set_tag(v___x_3251_, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3332_);
v___x_3334_ = v___x_3251_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v___x_3332_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
}
v___jp_3336_:
{
lean_object* v___x_3338_; uint8_t v___x_3339_; 
v___x_3338_ = lean_unsigned_to_nat(5u);
v___x_3339_ = lean_nat_dec_eq(v___x_3255_, v___x_3338_);
if (v___x_3339_ == 0)
{
uint8_t v___x_3340_; 
v___x_3340_ = 1;
v___y_3327_ = v___y_3337_;
v___y_3328_ = v___x_3339_;
v___y_3329_ = v___x_3340_;
goto v___jp_3326_;
}
else
{
uint8_t v___x_3341_; 
v___x_3341_ = 0;
v___y_3327_ = v___y_3337_;
v___y_3328_ = v___x_3339_;
v___y_3329_ = v___x_3341_;
goto v___jp_3326_;
}
}
}
}
}
v___jp_3206_:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3208_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v___x_3209_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__0(v_v_3175_, v___x_3208_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v_a_3210_; lean_object* v___x_3212_; uint8_t v_isShared_3213_; uint8_t v_isSharedCheck_3217_; 
lean_dec(v_definition_x3f_3207_);
lean_dec(v_a_3205_);
lean_dec(v_a_3182_);
lean_dec(v_r_3177_);
v_a_3210_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3217_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3217_ == 0)
{
v___x_3212_ = v___x_3209_;
v_isShared_3213_ = v_isSharedCheck_3217_;
goto v_resetjp_3211_;
}
else
{
lean_inc(v_a_3210_);
lean_dec(v___x_3209_);
v___x_3212_ = lean_box(0);
v_isShared_3213_ = v_isSharedCheck_3217_;
goto v_resetjp_3211_;
}
v_resetjp_3211_:
{
lean_object* v___x_3215_; 
if (v_isShared_3213_ == 0)
{
v___x_3215_ = v___x_3212_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_a_3210_);
v___x_3215_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
return v___x_3215_;
}
}
}
else
{
lean_object* v_a_3218_; size_t v_sz_3219_; size_t v___x_3220_; lean_object* v___x_3221_; 
v_a_3218_ = lean_ctor_get(v___x_3209_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3209_, 1);
v_sz_3219_ = lean_array_size(v_a_3218_);
v___x_3220_ = ((size_t)0ULL);
v___x_3221_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__1(v_sz_3219_, v___x_3220_, v_a_3218_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3229_; 
lean_dec(v_definition_x3f_3207_);
lean_dec(v_a_3205_);
lean_dec(v_a_3182_);
lean_dec(v_r_3177_);
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3224_ = v___x_3221_;
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v___x_3221_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3227_; 
if (v_isShared_3225_ == 0)
{
v___x_3227_ = v___x_3224_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3222_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v_a_3230_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3230_);
lean_dec_ref_known(v___x_3221_, 1);
v___x_3231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3231_, 0, v_definition_x3f_3207_);
lean_ctor_set(v___x_3231_, 1, v_a_3230_);
v___x_3232_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Lsp_ModuleRefs_insert_spec__0___redArg(v_a_3205_, v___x_3231_, v_a_3182_);
v_init_3172_ = v___x_3232_;
v_x_3173_ = v_r_3177_;
goto _start;
}
}
}
v___jp_3234_:
{
lean_object* v___x_3237_; 
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 0, v_a_3235_);
v___x_3237_ = v___x_3184_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v_a_3235_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
v_definition_x3f_3207_ = v___x_3237_;
goto v___jp_3206_;
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
lean_object* v___x_3349_; 
v___x_3349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3349_, 0, v_init_3172_);
return v___x_3349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0(lean_object* v_j_3350_, lean_object* v_k_3351_){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3352_ = l_Lean_Json_getObjValD(v_j_3350_, v_k_3351_);
v___x_3353_ = l_Lean_Json_getObj_x3f(v___x_3352_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3361_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3356_ = v___x_3353_;
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3353_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3359_; 
if (v_isShared_3357_ == 0)
{
v___x_3359_ = v___x_3356_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3354_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v_a_3362_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3362_);
lean_dec_ref_known(v___x_3353_, 1);
v___x_3363_ = lean_box(1);
v___x_3364_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0_spec__3(v___x_3363_, v_a_3362_);
return v___x_3364_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0___boxed(lean_object* v_j_3365_, lean_object* v_k_3366_){
_start:
{
lean_object* v_res_3367_; 
v_res_3367_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0(v_j_3365_, v_k_3366_);
lean_dec_ref(v_k_3366_);
return v_res_3367_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2(void){
_start:
{
uint8_t v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3373_ = 1;
v___x_3374_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__1));
v___x_3375_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3374_, v___x_3373_);
return v___x_3375_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3(void){
_start:
{
lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v___x_3376_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_3377_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__2);
v___x_3378_ = lean_string_append(v___x_3377_, v___x_3376_);
return v___x_3378_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3379_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__9);
v___x_3380_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3);
v___x_3381_ = lean_string_append(v___x_3380_, v___x_3379_);
return v___x_3381_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5(void){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3382_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3383_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__4);
v___x_3384_ = lean_string_append(v___x_3383_, v___x_3382_);
return v___x_3384_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8(void){
_start:
{
uint8_t v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; 
v___x_3388_ = 1;
v___x_3389_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__7));
v___x_3390_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3389_, v___x_3388_);
return v___x_3390_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9(void){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3391_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__8);
v___x_3392_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3);
v___x_3393_ = lean_string_append(v___x_3392_, v___x_3391_);
return v___x_3393_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10(void){
_start:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3394_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3395_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__9);
v___x_3396_ = lean_string_append(v___x_3395_, v___x_3394_);
return v___x_3396_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13(void){
_start:
{
uint8_t v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3400_ = 1;
v___x_3401_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__12));
v___x_3402_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3401_, v___x_3400_);
return v___x_3402_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14(void){
_start:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3403_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__13);
v___x_3404_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__3);
v___x_3405_ = lean_string_append(v___x_3404_, v___x_3403_);
return v___x_3405_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15(void){
_start:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3406_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3407_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__14);
v___x_3408_ = lean_string_append(v___x_3407_, v___x_3406_);
return v___x_3408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson(lean_object* v_json_3409_){
_start:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3410_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0));
lean_inc(v_json_3409_);
v___x_3411_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__0(v_json_3409_, v___x_3410_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3421_; 
lean_dec(v_json_3409_);
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3414_ = v___x_3411_;
v_isShared_3415_ = v_isSharedCheck_3421_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3411_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3421_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3419_; 
v___x_3416_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__5);
v___x_3417_ = lean_string_append(v___x_3416_, v_a_3412_);
lean_dec(v_a_3412_);
if (v_isShared_3415_ == 0)
{
lean_ctor_set(v___x_3414_, 0, v___x_3417_);
v___x_3419_ = v___x_3414_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v___x_3417_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
else
{
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3429_; 
lean_dec(v_json_3409_);
v_a_3422_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3424_ = v___x_3411_;
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3411_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
if (v_isShared_3425_ == 0)
{
lean_ctor_set_tag(v___x_3424_, 0);
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v_a_3422_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
else
{
lean_object* v_a_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v_a_3430_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3430_);
lean_dec_ref_known(v___x_3411_, 1);
v___x_3431_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6));
lean_inc(v_json_3409_);
v___x_3432_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__0(v_json_3409_, v___x_3431_);
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3442_; 
lean_dec(v_a_3430_);
lean_dec(v_json_3409_);
v_a_3433_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3435_ = v___x_3432_;
v_isShared_3436_ = v_isSharedCheck_3442_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3432_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3442_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3440_; 
v___x_3437_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__10);
v___x_3438_ = lean_string_append(v___x_3437_, v_a_3433_);
lean_dec(v_a_3433_);
if (v_isShared_3436_ == 0)
{
lean_ctor_set(v___x_3435_, 0, v___x_3438_);
v___x_3440_ = v___x_3435_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v___x_3438_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
return v___x_3440_;
}
}
}
else
{
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v_a_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3450_; 
lean_dec(v_a_3430_);
lean_dec(v_json_3409_);
v_a_3443_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3445_ = v___x_3432_;
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_a_3443_);
lean_dec(v___x_3432_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3448_; 
if (v_isShared_3446_ == 0)
{
lean_ctor_set_tag(v___x_3445_, 0);
v___x_3448_ = v___x_3445_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_a_3443_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
else
{
lean_object* v_a_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v_a_3451_ = lean_ctor_get(v___x_3432_, 0);
lean_inc(v_a_3451_);
lean_dec_ref_known(v___x_3432_, 1);
v___x_3452_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11));
v___x_3453_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson_spec__1(v_json_3409_, v___x_3452_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v_a_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3463_; 
lean_dec(v_a_3451_);
lean_dec(v_a_3430_);
v_a_3454_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3456_ = v___x_3453_;
v_isShared_3457_ = v_isSharedCheck_3463_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_a_3454_);
lean_dec(v___x_3453_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3463_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3461_; 
v___x_3458_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15, &l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15_once, _init_l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__15);
v___x_3459_ = lean_string_append(v___x_3458_, v_a_3454_);
lean_dec(v_a_3454_);
if (v_isShared_3457_ == 0)
{
lean_ctor_set(v___x_3456_, 0, v___x_3459_);
v___x_3461_ = v___x_3456_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v___x_3459_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
}
else
{
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3471_; 
lean_dec(v_a_3451_);
lean_dec(v_a_3430_);
v_a_3464_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3466_ = v___x_3453_;
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v___x_3453_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
lean_ctor_set_tag(v___x_3466_, 0);
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_a_3464_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
else
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3480_; 
v_a_3472_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3474_ = v___x_3453_;
v_isShared_3475_ = v_isSharedCheck_3480_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3453_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3480_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3476_; lean_object* v___x_3478_; 
v___x_3476_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3476_, 0, v_a_3430_);
lean_ctor_set(v___x_3476_, 1, v_a_3451_);
lean_ctor_set(v___x_3476_, 2, v_a_3472_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3476_);
v___x_3478_ = v___x_3474_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v___x_3476_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
return v___x_3478_;
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__5(lean_object* v_a_3483_, lean_object* v_a_3484_){
_start:
{
if (lean_obj_tag(v_a_3483_) == 0)
{
lean_object* v___x_3485_; 
v___x_3485_ = l_List_reverse___redArg(v_a_3484_);
return v___x_3485_;
}
else
{
lean_object* v_head_3486_; lean_object* v_snd_3487_; lean_object* v_tail_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3540_; 
v_head_3486_ = lean_ctor_get(v_a_3483_, 0);
lean_inc(v_head_3486_);
v_snd_3487_ = lean_ctor_get(v_head_3486_, 1);
lean_inc(v_snd_3487_);
v_tail_3488_ = lean_ctor_get(v_a_3483_, 1);
v_isSharedCheck_3540_ = !lean_is_exclusive(v_a_3483_);
if (v_isSharedCheck_3540_ == 0)
{
lean_object* v_unused_3541_; 
v_unused_3541_ = lean_ctor_get(v_a_3483_, 0);
lean_dec(v_unused_3541_);
v___x_3490_ = v_a_3483_;
v_isShared_3491_ = v_isSharedCheck_3540_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_tail_3488_);
lean_dec(v_a_3483_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3540_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
lean_object* v_fst_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3538_; 
v_fst_3492_ = lean_ctor_get(v_head_3486_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v_head_3486_);
if (v_isSharedCheck_3538_ == 0)
{
lean_object* v_unused_3539_; 
v_unused_3539_ = lean_ctor_get(v_head_3486_, 1);
lean_dec(v_unused_3539_);
v___x_3494_ = v_head_3486_;
v_isShared_3495_ = v_isSharedCheck_3538_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_fst_3492_);
lean_dec(v_head_3486_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3538_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v_rangeStartPosLine_3496_; lean_object* v_rangeStartPosCharacter_3497_; lean_object* v_rangeEndPosLine_3498_; lean_object* v_rangeEndPosCharacter_3499_; lean_object* v_selectionRangeStartPosLine_3500_; lean_object* v_selectionRangeStartPosCharacter_3501_; lean_object* v_selectionRangeEndPosLine_3502_; lean_object* v_selectionRangeEndPosCharacter_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3532_; 
v_rangeStartPosLine_3496_ = lean_ctor_get(v_snd_3487_, 0);
lean_inc(v_rangeStartPosLine_3496_);
v_rangeStartPosCharacter_3497_ = lean_ctor_get(v_snd_3487_, 1);
lean_inc(v_rangeStartPosCharacter_3497_);
v_rangeEndPosLine_3498_ = lean_ctor_get(v_snd_3487_, 2);
lean_inc(v_rangeEndPosLine_3498_);
v_rangeEndPosCharacter_3499_ = lean_ctor_get(v_snd_3487_, 3);
lean_inc(v_rangeEndPosCharacter_3499_);
v_selectionRangeStartPosLine_3500_ = lean_ctor_get(v_snd_3487_, 4);
lean_inc(v_selectionRangeStartPosLine_3500_);
v_selectionRangeStartPosCharacter_3501_ = lean_ctor_get(v_snd_3487_, 5);
lean_inc(v_selectionRangeStartPosCharacter_3501_);
v_selectionRangeEndPosLine_3502_ = lean_ctor_get(v_snd_3487_, 6);
lean_inc(v_selectionRangeEndPosLine_3502_);
v_selectionRangeEndPosCharacter_3503_ = lean_ctor_get(v_snd_3487_, 7);
lean_inc(v_selectionRangeEndPosCharacter_3503_);
lean_dec(v_snd_3487_);
v___x_3504_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosLine_3496_);
v___x_3505_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
v___x_3506_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosCharacter_3497_);
v___x_3507_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
v___x_3508_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosLine_3498_);
v___x_3509_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
v___x_3510_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosCharacter_3499_);
v___x_3511_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3510_);
v___x_3512_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosLine_3500_);
v___x_3513_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
v___x_3514_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosCharacter_3501_);
v___x_3515_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
v___x_3516_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosLine_3502_);
v___x_3517_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3516_);
v___x_3518_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosCharacter_3503_);
v___x_3519_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3518_);
v___x_3520_ = lean_unsigned_to_nat(8u);
v___x_3521_ = lean_mk_empty_array_with_capacity(v___x_3520_);
v___x_3522_ = lean_array_push(v___x_3521_, v___x_3505_);
v___x_3523_ = lean_array_push(v___x_3522_, v___x_3507_);
v___x_3524_ = lean_array_push(v___x_3523_, v___x_3509_);
v___x_3525_ = lean_array_push(v___x_3524_, v___x_3511_);
v___x_3526_ = lean_array_push(v___x_3525_, v___x_3513_);
v___x_3527_ = lean_array_push(v___x_3526_, v___x_3515_);
v___x_3528_ = lean_array_push(v___x_3527_, v___x_3517_);
v___x_3529_ = lean_array_push(v___x_3528_, v___x_3519_);
v___x_3530_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3529_);
if (v_isShared_3495_ == 0)
{
lean_ctor_set(v___x_3494_, 1, v___x_3530_);
v___x_3532_ = v___x_3494_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_fst_3492_);
lean_ctor_set(v_reuseFailAlloc_3537_, 1, v___x_3530_);
v___x_3532_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
lean_object* v___x_3534_; 
if (v_isShared_3491_ == 0)
{
lean_ctor_set(v___x_3490_, 1, v_a_3484_);
lean_ctor_set(v___x_3490_, 0, v___x_3532_);
v___x_3534_ = v___x_3490_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v___x_3532_);
lean_ctor_set(v_reuseFailAlloc_3536_, 1, v_a_3484_);
v___x_3534_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
v_a_3483_ = v_tail_3488_;
v_a_3484_ = v___x_3534_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__7(size_t v_sz_3542_, size_t v_i_3543_, lean_object* v_bs_3544_){
_start:
{
uint8_t v___x_3545_; 
v___x_3545_ = lean_usize_dec_lt(v_i_3543_, v_sz_3542_);
if (v___x_3545_ == 0)
{
return v_bs_3544_;
}
else
{
lean_object* v_v_3546_; lean_object* v___x_3547_; lean_object* v_bs_x27_3548_; size_t v___x_3549_; size_t v___x_3550_; lean_object* v___x_3551_; 
v_v_3546_ = lean_array_uget(v_bs_3544_, v_i_3543_);
v___x_3547_ = lean_unsigned_to_nat(0u);
v_bs_x27_3548_ = lean_array_uset(v_bs_3544_, v_i_3543_, v___x_3547_);
v___x_3549_ = ((size_t)1ULL);
v___x_3550_ = lean_usize_add(v_i_3543_, v___x_3549_);
v___x_3551_ = lean_array_uset(v_bs_x27_3548_, v_i_3543_, v_v_3546_);
v_i_3543_ = v___x_3550_;
v_bs_3544_ = v___x_3551_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__7___boxed(lean_object* v_sz_3553_, lean_object* v_i_3554_, lean_object* v_bs_3555_){
_start:
{
size_t v_sz_boxed_3556_; size_t v_i_boxed_3557_; lean_object* v_res_3558_; 
v_sz_boxed_3556_ = lean_unbox_usize(v_sz_3553_);
lean_dec(v_sz_3553_);
v_i_boxed_3557_ = lean_unbox_usize(v_i_3554_);
lean_dec(v_i_3554_);
v_res_3558_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__7(v_sz_boxed_3556_, v_i_boxed_3557_, v_bs_3555_);
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2(lean_object* v_a_3559_){
_start:
{
size_t v_sz_3560_; size_t v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v_sz_3560_ = lean_array_size(v_a_3559_);
v___x_3561_ = ((size_t)0ULL);
v___x_3562_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2_spec__7(v_sz_3560_, v___x_3561_, v_a_3559_);
v___x_3563_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3562_);
return v___x_3563_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1(lean_object* v_a_3564_){
_start:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = lean_array_mk(v_a_3564_);
v___x_3566_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1_spec__2(v___x_3565_);
return v___x_3566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1(lean_object* v_x_3567_){
_start:
{
if (lean_obj_tag(v_x_3567_) == 0)
{
lean_object* v___x_3568_; 
v___x_3568_ = lean_box(0);
return v___x_3568_;
}
else
{
lean_object* v_val_3569_; lean_object* v___x_3570_; 
v_val_3569_ = lean_ctor_get(v_x_3567_, 0);
lean_inc(v_val_3569_);
lean_dec_ref_known(v_x_3567_, 1);
v___x_3570_ = l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1(v_val_3569_);
return v___x_3570_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__0(lean_object* v_a_3571_, lean_object* v_a_3572_){
_start:
{
if (lean_obj_tag(v_a_3571_) == 0)
{
lean_object* v___x_3573_; 
v___x_3573_ = l_List_reverse___redArg(v_a_3572_);
return v___x_3573_;
}
else
{
lean_object* v_head_3574_; lean_object* v_tail_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3585_; 
v_head_3574_ = lean_ctor_get(v_a_3571_, 0);
v_tail_3575_ = lean_ctor_get(v_a_3571_, 1);
v_isSharedCheck_3585_ = !lean_is_exclusive(v_a_3571_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3577_ = v_a_3571_;
v_isShared_3578_ = v_isSharedCheck_3585_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_tail_3575_);
lean_inc(v_head_3574_);
lean_dec(v_a_3571_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3585_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3582_; 
v___x_3579_ = l_Lean_JsonNumber_fromNat(v_head_3574_);
v___x_3580_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3579_);
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 1, v_a_3572_);
lean_ctor_set(v___x_3577_, 0, v___x_3580_);
v___x_3582_ = v___x_3577_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v___x_3580_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v_a_3572_);
v___x_3582_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
v_a_3571_ = v_tail_3575_;
v_a_3572_ = v___x_3582_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2(size_t v_sz_3586_, size_t v_i_3587_, lean_object* v_bs_3588_){
_start:
{
uint8_t v___x_3589_; 
v___x_3589_ = lean_usize_dec_lt(v_i_3587_, v_sz_3586_);
if (v___x_3589_ == 0)
{
return v_bs_3588_;
}
else
{
lean_object* v_v_3590_; lean_object* v_startPosLine_3591_; lean_object* v_startPosCharacter_3592_; lean_object* v_endPosLine_3593_; lean_object* v_endPosCharacter_3594_; lean_object* v___x_3595_; lean_object* v_bs_x27_3596_; lean_object* v___y_3598_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v_range_3608_; lean_object* v___x_3609_; 
v_v_3590_ = lean_array_uget(v_bs_3588_, v_i_3587_);
v_startPosLine_3591_ = lean_ctor_get(v_v_3590_, 0);
v_startPosCharacter_3592_ = lean_ctor_get(v_v_3590_, 1);
v_endPosLine_3593_ = lean_ctor_get(v_v_3590_, 2);
v_endPosCharacter_3594_ = lean_ctor_get(v_v_3590_, 3);
v___x_3595_ = lean_unsigned_to_nat(0u);
v_bs_x27_3596_ = lean_array_uset(v_bs_3588_, v_i_3587_, v___x_3595_);
v___x_3603_ = lean_box(0);
lean_inc(v_endPosCharacter_3594_);
v___x_3604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3604_, 0, v_endPosCharacter_3594_);
lean_ctor_set(v___x_3604_, 1, v___x_3603_);
lean_inc(v_endPosLine_3593_);
v___x_3605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3605_, 0, v_endPosLine_3593_);
lean_ctor_set(v___x_3605_, 1, v___x_3604_);
lean_inc(v_startPosCharacter_3592_);
v___x_3606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3606_, 0, v_startPosCharacter_3592_);
lean_ctor_set(v___x_3606_, 1, v___x_3605_);
lean_inc(v_startPosLine_3591_);
v___x_3607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3607_, 0, v_startPosLine_3591_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
v_range_3608_ = l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__0(v___x_3607_, v___x_3603_);
v___x_3609_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_v_3590_);
lean_dec(v_v_3590_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_object* v___x_3610_; 
v___x_3610_ = l_List_appendTR___redArg(v_range_3608_, v___x_3603_);
v___y_3598_ = v___x_3610_;
goto v___jp_3597_;
}
else
{
lean_object* v_val_3611_; lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3620_; 
v_val_3611_ = lean_ctor_get(v___x_3609_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3609_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3613_ = v___x_3609_;
v_isShared_3614_ = v_isSharedCheck_3620_;
goto v_resetjp_3612_;
}
else
{
lean_inc(v_val_3611_);
lean_dec(v___x_3609_);
v___x_3613_ = lean_box(0);
v_isShared_3614_ = v_isSharedCheck_3620_;
goto v_resetjp_3612_;
}
v_resetjp_3612_:
{
lean_object* v___x_3616_; 
if (v_isShared_3614_ == 0)
{
lean_ctor_set_tag(v___x_3613_, 3);
v___x_3616_ = v___x_3613_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_val_3611_);
v___x_3616_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; 
v___x_3617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3616_);
lean_ctor_set(v___x_3617_, 1, v___x_3603_);
v___x_3618_ = l_List_appendTR___redArg(v_range_3608_, v___x_3617_);
v___y_3598_ = v___x_3618_;
goto v___jp_3597_;
}
}
}
v___jp_3597_:
{
size_t v___x_3599_; size_t v___x_3600_; lean_object* v___x_3601_; 
v___x_3599_ = ((size_t)1ULL);
v___x_3600_ = lean_usize_add(v_i_3587_, v___x_3599_);
v___x_3601_ = lean_array_uset(v_bs_x27_3596_, v_i_3587_, v___y_3598_);
v_i_3587_ = v___x_3600_;
v_bs_3588_ = v___x_3601_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2___boxed(lean_object* v_sz_3621_, lean_object* v_i_3622_, lean_object* v_bs_3623_){
_start:
{
size_t v_sz_boxed_3624_; size_t v_i_boxed_3625_; lean_object* v_res_3626_; 
v_sz_boxed_3624_ = lean_unbox_usize(v_sz_3621_);
lean_dec(v_sz_3621_);
v_i_boxed_3625_ = lean_unbox_usize(v_i_3622_);
lean_dec(v_i_3622_);
v_res_3626_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2(v_sz_boxed_3624_, v_i_boxed_3625_, v_bs_3623_);
return v_res_3626_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4(size_t v_sz_3627_, size_t v_i_3628_, lean_object* v_bs_3629_){
_start:
{
uint8_t v___x_3630_; 
v___x_3630_ = lean_usize_dec_lt(v_i_3628_, v_sz_3627_);
if (v___x_3630_ == 0)
{
return v_bs_3629_;
}
else
{
lean_object* v_v_3631_; lean_object* v___x_3632_; lean_object* v_bs_x27_3633_; lean_object* v___x_3634_; size_t v___x_3635_; size_t v___x_3636_; lean_object* v___x_3637_; 
v_v_3631_ = lean_array_uget(v_bs_3629_, v_i_3628_);
v___x_3632_ = lean_unsigned_to_nat(0u);
v_bs_x27_3633_ = lean_array_uset(v_bs_3629_, v_i_3628_, v___x_3632_);
v___x_3634_ = l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1_spec__1(v_v_3631_);
v___x_3635_ = ((size_t)1ULL);
v___x_3636_ = lean_usize_add(v_i_3628_, v___x_3635_);
v___x_3637_ = lean_array_uset(v_bs_x27_3633_, v_i_3628_, v___x_3634_);
v_i_3628_ = v___x_3636_;
v_bs_3629_ = v___x_3637_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4___boxed(lean_object* v_sz_3639_, lean_object* v_i_3640_, lean_object* v_bs_3641_){
_start:
{
size_t v_sz_boxed_3642_; size_t v_i_boxed_3643_; lean_object* v_res_3644_; 
v_sz_boxed_3642_ = lean_unbox_usize(v_sz_3639_);
lean_dec(v_sz_3639_);
v_i_boxed_3643_ = lean_unbox_usize(v_i_3640_);
lean_dec(v_i_3640_);
v_res_3644_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4(v_sz_boxed_3642_, v_i_boxed_3643_, v_bs_3641_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3(lean_object* v_a_3645_){
_start:
{
size_t v_sz_3646_; size_t v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; 
v_sz_3646_ = lean_array_size(v_a_3645_);
v___x_3647_ = ((size_t)0ULL);
v___x_3648_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3_spec__4(v_sz_3646_, v___x_3647_, v_a_3645_);
v___x_3649_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3649_, 0, v___x_3648_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4(lean_object* v_a_3650_, lean_object* v_a_3651_){
_start:
{
if (lean_obj_tag(v_a_3650_) == 0)
{
lean_object* v___x_3652_; 
v___x_3652_ = l_List_reverse___redArg(v_a_3651_);
return v___x_3652_;
}
else
{
lean_object* v_head_3653_; lean_object* v_snd_3654_; lean_object* v_tail_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3724_; 
v_head_3653_ = lean_ctor_get(v_a_3650_, 0);
lean_inc(v_head_3653_);
v_snd_3654_ = lean_ctor_get(v_head_3653_, 1);
lean_inc(v_snd_3654_);
v_tail_3655_ = lean_ctor_get(v_a_3650_, 1);
v_isSharedCheck_3724_ = !lean_is_exclusive(v_a_3650_);
if (v_isSharedCheck_3724_ == 0)
{
lean_object* v_unused_3725_; 
v_unused_3725_ = lean_ctor_get(v_a_3650_, 0);
lean_dec(v_unused_3725_);
v___x_3657_ = v_a_3650_;
v_isShared_3658_ = v_isSharedCheck_3724_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_tail_3655_);
lean_dec(v_a_3650_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3724_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v_fst_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3722_; 
v_fst_3659_ = lean_ctor_get(v_head_3653_, 0);
v_isSharedCheck_3722_ = !lean_is_exclusive(v_head_3653_);
if (v_isSharedCheck_3722_ == 0)
{
lean_object* v_unused_3723_; 
v_unused_3723_ = lean_ctor_get(v_head_3653_, 1);
lean_dec(v_unused_3723_);
v___x_3661_ = v_head_3653_;
v_isShared_3662_ = v_isSharedCheck_3722_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_fst_3659_);
lean_dec(v_head_3653_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3722_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v_definition_x3f_3663_; lean_object* v_usages_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3721_; 
v_definition_x3f_3663_ = lean_ctor_get(v_snd_3654_, 0);
v_usages_3664_ = lean_ctor_get(v_snd_3654_, 1);
v_isSharedCheck_3721_ = !lean_is_exclusive(v_snd_3654_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3666_ = v_snd_3654_;
v_isShared_3667_ = v_isSharedCheck_3721_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_usages_3664_);
lean_inc(v_definition_x3f_3663_);
lean_dec(v_snd_3654_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3721_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___y_3672_; lean_object* v___y_3695_; 
v___x_3668_ = l_Lean_Lsp_RefIdent_toJson(v_fst_3659_);
v___x_3669_ = l_Lean_Json_compress(v___x_3668_);
v___x_3670_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__0));
if (lean_obj_tag(v_definition_x3f_3663_) == 0)
{
lean_object* v___x_3697_; 
v___x_3697_ = lean_box(0);
v___y_3672_ = v___x_3697_;
goto v___jp_3671_;
}
else
{
lean_object* v_val_3698_; lean_object* v_startPosLine_3699_; lean_object* v_startPosCharacter_3700_; lean_object* v_endPosLine_3701_; lean_object* v_endPosCharacter_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v_range_3708_; lean_object* v___x_3709_; 
v_val_3698_ = lean_ctor_get(v_definition_x3f_3663_, 0);
lean_inc(v_val_3698_);
lean_dec_ref_known(v_definition_x3f_3663_, 1);
v_startPosLine_3699_ = lean_ctor_get(v_val_3698_, 0);
v_startPosCharacter_3700_ = lean_ctor_get(v_val_3698_, 1);
v_endPosLine_3701_ = lean_ctor_get(v_val_3698_, 2);
v_endPosCharacter_3702_ = lean_ctor_get(v_val_3698_, 3);
v___x_3703_ = lean_box(0);
lean_inc(v_endPosCharacter_3702_);
v___x_3704_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3704_, 0, v_endPosCharacter_3702_);
lean_ctor_set(v___x_3704_, 1, v___x_3703_);
lean_inc(v_endPosLine_3701_);
v___x_3705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3705_, 0, v_endPosLine_3701_);
lean_ctor_set(v___x_3705_, 1, v___x_3704_);
lean_inc(v_startPosCharacter_3700_);
v___x_3706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3706_, 0, v_startPosCharacter_3700_);
lean_ctor_set(v___x_3706_, 1, v___x_3705_);
lean_inc(v_startPosLine_3699_);
v___x_3707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3707_, 0, v_startPosLine_3699_);
lean_ctor_set(v___x_3707_, 1, v___x_3706_);
v_range_3708_ = l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__0(v___x_3707_, v___x_3703_);
v___x_3709_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_val_3698_);
lean_dec(v_val_3698_);
if (lean_obj_tag(v___x_3709_) == 0)
{
lean_object* v___x_3710_; 
v___x_3710_ = l_List_appendTR___redArg(v_range_3708_, v___x_3703_);
v___y_3695_ = v___x_3710_;
goto v___jp_3694_;
}
else
{
lean_object* v_val_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3720_; 
v_val_3711_ = lean_ctor_get(v___x_3709_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3709_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3713_ = v___x_3709_;
v_isShared_3714_ = v_isSharedCheck_3720_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_val_3711_);
lean_dec(v___x_3709_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3720_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3716_; 
if (v_isShared_3714_ == 0)
{
lean_ctor_set_tag(v___x_3713_, 3);
v___x_3716_ = v___x_3713_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_val_3711_);
v___x_3716_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3716_);
lean_ctor_set(v___x_3717_, 1, v___x_3703_);
v___x_3718_ = l_List_appendTR___redArg(v_range_3708_, v___x_3717_);
v___y_3695_ = v___x_3718_;
goto v___jp_3694_;
}
}
}
}
v___jp_3671_:
{
lean_object* v___x_3673_; lean_object* v___x_3675_; 
v___x_3673_ = l_Lean_Option_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__1(v___y_3672_);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 1, v___x_3673_);
lean_ctor_set(v___x_3661_, 0, v___x_3670_);
v___x_3675_ = v___x_3661_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v___x_3670_);
lean_ctor_set(v_reuseFailAlloc_3693_, 1, v___x_3673_);
v___x_3675_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
lean_object* v___x_3676_; size_t v_sz_3677_; size_t v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3682_; 
v___x_3676_ = ((lean_object*)(l_Lean_Lsp_instToJsonRefInfo___lam__3___closed__1));
v_sz_3677_ = lean_array_size(v_usages_3664_);
v___x_3678_ = ((size_t)0ULL);
v___x_3679_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__2(v_sz_3677_, v___x_3678_, v_usages_3664_);
v___x_3680_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__3(v___x_3679_);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 1, v___x_3680_);
lean_ctor_set(v___x_3666_, 0, v___x_3676_);
v___x_3682_ = v___x_3666_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v___x_3676_);
lean_ctor_set(v_reuseFailAlloc_3692_, 1, v___x_3680_);
v___x_3682_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
lean_object* v___x_3683_; lean_object* v___x_3685_; 
v___x_3683_ = lean_box(0);
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 1, v___x_3683_);
lean_ctor_set(v___x_3657_, 0, v___x_3682_);
v___x_3685_ = v___x_3657_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v___x_3682_);
lean_ctor_set(v_reuseFailAlloc_3691_, 1, v___x_3683_);
v___x_3685_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; 
v___x_3686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3675_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v___x_3687_ = l_Lean_Json_mkObj(v___x_3686_);
lean_dec_ref_known(v___x_3686_, 2);
v___x_3688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3669_);
lean_ctor_set(v___x_3688_, 1, v___x_3687_);
v___x_3689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3688_);
lean_ctor_set(v___x_3689_, 1, v_a_3651_);
v_a_3650_ = v_tail_3655_;
v_a_3651_ = v___x_3689_;
goto _start;
}
}
}
}
v___jp_3694_:
{
lean_object* v___x_3696_; 
v___x_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3696_, 0, v___y_3695_);
v___y_3672_ = v___x_3696_;
goto v___jp_3671_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanIleanInfoParams_toJson(lean_object* v_x_3726_){
_start:
{
lean_object* v_version_3727_; lean_object* v_references_3728_; lean_object* v_decls_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v_version_3727_ = lean_ctor_get(v_x_3726_, 0);
lean_inc(v_version_3727_);
v_references_3728_ = lean_ctor_get(v_x_3726_, 1);
lean_inc(v_references_3728_);
v_decls_3729_ = lean_ctor_get(v_x_3726_, 2);
lean_inc(v_decls_3729_);
lean_dec_ref(v_x_3726_);
v___x_3730_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__0));
v___x_3731_ = l_Lean_JsonNumber_fromNat(v_version_3727_);
v___x_3732_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
v___x_3733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3730_);
lean_ctor_set(v___x_3733_, 1, v___x_3732_);
v___x_3734_ = lean_box(0);
v___x_3735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3733_);
lean_ctor_set(v___x_3735_, 1, v___x_3734_);
v___x_3736_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__6));
v___x_3737_ = l_Lean_Lsp_ModuleRefs_toList(v_references_3728_);
lean_dec(v_references_3728_);
v___x_3738_ = l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__4(v___x_3737_, v___x_3734_);
v___x_3739_ = l_Lean_Json_mkObj(v___x_3738_);
lean_dec(v___x_3738_);
v___x_3740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3736_);
lean_ctor_set(v___x_3740_, 1, v___x_3739_);
v___x_3741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3741_, 0, v___x_3740_);
lean_ctor_set(v___x_3741_, 1, v___x_3734_);
v___x_3742_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIleanInfoParams_fromJson___closed__11));
v___x_3743_ = l_Lean_Lsp_Decls_toList(v_decls_3729_);
lean_dec(v_decls_3729_);
v___x_3744_ = l_List_mapTR_loop___at___00Lean_Lsp_instToJsonLeanIleanInfoParams_toJson_spec__5(v___x_3743_, v___x_3734_);
v___x_3745_ = l_Lean_Json_mkObj(v___x_3744_);
lean_dec(v___x_3744_);
v___x_3746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3746_, 0, v___x_3742_);
lean_ctor_set(v___x_3746_, 1, v___x_3745_);
v___x_3747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3746_);
lean_ctor_set(v___x_3747_, 1, v___x_3734_);
v___x_3748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3747_);
lean_ctor_set(v___x_3748_, 1, v___x_3734_);
v___x_3749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3749_, 0, v___x_3741_);
lean_ctor_set(v___x_3749_, 1, v___x_3748_);
v___x_3750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3735_);
lean_ctor_set(v___x_3750_, 1, v___x_3749_);
v___x_3751_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_3752_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_3750_, v___x_3751_);
v___x_3753_ = l_Lean_Json_mkObj(v___x_3752_);
lean_dec(v___x_3752_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1(size_t v_sz_3756_, size_t v_i_3757_, lean_object* v_bs_3758_){
_start:
{
uint8_t v___x_3759_; 
v___x_3759_ = lean_usize_dec_lt(v_i_3757_, v_sz_3756_);
if (v___x_3759_ == 0)
{
lean_object* v___x_3760_; 
v___x_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3760_, 0, v_bs_3758_);
return v___x_3760_;
}
else
{
lean_object* v_v_3761_; lean_object* v___x_3762_; 
v_v_3761_ = lean_array_uget_borrowed(v_bs_3758_, v_i_3757_);
lean_inc(v_v_3761_);
v___x_3762_ = l_Lean_Json_getStr_x3f(v_v_3761_);
if (lean_obj_tag(v___x_3762_) == 0)
{
lean_object* v_a_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3770_; 
lean_dec_ref(v_bs_3758_);
v_a_3763_ = lean_ctor_get(v___x_3762_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v___x_3762_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3765_ = v___x_3762_;
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_a_3763_);
lean_dec(v___x_3762_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3768_; 
if (v_isShared_3766_ == 0)
{
v___x_3768_ = v___x_3765_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_a_3763_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
}
else
{
lean_object* v_a_3771_; lean_object* v___x_3772_; lean_object* v_bs_x27_3773_; size_t v___x_3774_; size_t v___x_3775_; lean_object* v___x_3776_; 
v_a_3771_ = lean_ctor_get(v___x_3762_, 0);
lean_inc(v_a_3771_);
lean_dec_ref_known(v___x_3762_, 1);
v___x_3772_ = lean_unsigned_to_nat(0u);
v_bs_x27_3773_ = lean_array_uset(v_bs_3758_, v_i_3757_, v___x_3772_);
v___x_3774_ = ((size_t)1ULL);
v___x_3775_ = lean_usize_add(v_i_3757_, v___x_3774_);
v___x_3776_ = lean_array_uset(v_bs_x27_3773_, v_i_3757_, v_a_3771_);
v_i_3757_ = v___x_3775_;
v_bs_3758_ = v___x_3776_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3778_, lean_object* v_i_3779_, lean_object* v_bs_3780_){
_start:
{
size_t v_sz_boxed_3781_; size_t v_i_boxed_3782_; lean_object* v_res_3783_; 
v_sz_boxed_3781_ = lean_unbox_usize(v_sz_3778_);
lean_dec(v_sz_3778_);
v_i_boxed_3782_ = lean_unbox_usize(v_i_3779_);
lean_dec(v_i_3779_);
v_res_3783_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1(v_sz_boxed_3781_, v_i_boxed_3782_, v_bs_3780_);
return v_res_3783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0(lean_object* v_x_3784_){
_start:
{
if (lean_obj_tag(v_x_3784_) == 4)
{
lean_object* v_elems_3785_; size_t v_sz_3786_; size_t v___x_3787_; lean_object* v___x_3788_; 
v_elems_3785_ = lean_ctor_get(v_x_3784_, 0);
lean_inc_ref(v_elems_3785_);
lean_dec_ref_known(v_x_3784_, 1);
v_sz_3786_ = lean_array_size(v_elems_3785_);
v___x_3787_ = ((size_t)0ULL);
v___x_3788_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0_spec__1(v_sz_3786_, v___x_3787_, v_elems_3785_);
return v___x_3788_;
}
else
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3789_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_3790_ = lean_unsigned_to_nat(80u);
v___x_3791_ = l_Lean_Json_pretty(v_x_3784_, v___x_3790_);
v___x_3792_ = lean_string_append(v___x_3789_, v___x_3791_);
lean_dec_ref(v___x_3791_);
v___x_3793_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_3794_ = lean_string_append(v___x_3792_, v___x_3793_);
v___x_3795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3794_);
return v___x_3795_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0(lean_object* v_j_3796_, lean_object* v_k_3797_){
_start:
{
lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3798_ = l_Lean_Json_getObjValD(v_j_3796_, v_k_3797_);
v___x_3799_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0_spec__0(v___x_3798_);
return v___x_3799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0___boxed(lean_object* v_j_3800_, lean_object* v_k_3801_){
_start:
{
lean_object* v_res_3802_; 
v_res_3802_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0(v_j_3800_, v_k_3801_);
lean_dec_ref(v_k_3801_);
return v_res_3802_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3(void){
_start:
{
uint8_t v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3809_ = 1;
v___x_3810_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__2));
v___x_3811_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3810_, v___x_3809_);
return v___x_3811_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3812_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_3813_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__3);
v___x_3814_ = lean_string_append(v___x_3813_, v___x_3812_);
return v___x_3814_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; 
v___x_3817_ = 1;
v___x_3818_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__5));
v___x_3819_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3818_, v___x_3817_);
return v___x_3819_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; 
v___x_3820_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__6);
v___x_3821_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__4);
v___x_3822_ = lean_string_append(v___x_3821_, v___x_3820_);
return v___x_3822_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; 
v___x_3823_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3824_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__7);
v___x_3825_ = lean_string_append(v___x_3824_, v___x_3823_);
return v___x_3825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson(lean_object* v_json_3826_){
_start:
{
lean_object* v___x_3827_; lean_object* v___x_3828_; 
v___x_3827_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0));
v___x_3828_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson_spec__0(v_json_3826_, v___x_3827_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_a_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3838_; 
v_a_3829_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3838_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3831_ = v___x_3828_;
v_isShared_3832_ = v_isSharedCheck_3838_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_a_3829_);
lean_dec(v___x_3828_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3838_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3836_; 
v___x_3833_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__8);
v___x_3834_ = lean_string_append(v___x_3833_, v_a_3829_);
lean_dec(v_a_3829_);
if (v_isShared_3832_ == 0)
{
lean_ctor_set(v___x_3831_, 0, v___x_3834_);
v___x_3836_ = v___x_3831_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v___x_3834_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
return v___x_3836_;
}
}
}
else
{
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3846_; 
v_a_3839_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3841_ = v___x_3828_;
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3828_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3844_; 
if (v_isShared_3842_ == 0)
{
lean_ctor_set_tag(v___x_3841_, 0);
v___x_3844_ = v___x_3841_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_a_3839_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
else
{
lean_object* v_a_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3854_; 
v_a_3847_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3849_ = v___x_3828_;
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_a_3847_);
lean_dec(v___x_3828_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3852_; 
if (v_isShared_3850_ == 0)
{
v___x_3852_ = v___x_3849_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v_a_3847_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0(size_t v_sz_3857_, size_t v_i_3858_, lean_object* v_bs_3859_){
_start:
{
uint8_t v___x_3860_; 
v___x_3860_ = lean_usize_dec_lt(v_i_3858_, v_sz_3857_);
if (v___x_3860_ == 0)
{
return v_bs_3859_;
}
else
{
lean_object* v_v_3861_; lean_object* v___x_3862_; lean_object* v_bs_x27_3863_; lean_object* v___x_3864_; size_t v___x_3865_; size_t v___x_3866_; lean_object* v___x_3867_; 
v_v_3861_ = lean_array_uget(v_bs_3859_, v_i_3858_);
v___x_3862_ = lean_unsigned_to_nat(0u);
v_bs_x27_3863_ = lean_array_uset(v_bs_3859_, v_i_3858_, v___x_3862_);
v___x_3864_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3864_, 0, v_v_3861_);
v___x_3865_ = ((size_t)1ULL);
v___x_3866_ = lean_usize_add(v_i_3858_, v___x_3865_);
v___x_3867_ = lean_array_uset(v_bs_x27_3863_, v_i_3858_, v___x_3864_);
v_i_3858_ = v___x_3866_;
v_bs_3859_ = v___x_3867_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0___boxed(lean_object* v_sz_3869_, lean_object* v_i_3870_, lean_object* v_bs_3871_){
_start:
{
size_t v_sz_boxed_3872_; size_t v_i_boxed_3873_; lean_object* v_res_3874_; 
v_sz_boxed_3872_ = lean_unbox_usize(v_sz_3869_);
lean_dec(v_sz_3869_);
v_i_boxed_3873_ = lean_unbox_usize(v_i_3870_);
lean_dec(v_i_3870_);
v_res_3874_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0(v_sz_boxed_3872_, v_i_boxed_3873_, v_bs_3871_);
return v_res_3874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0(lean_object* v_a_3875_){
_start:
{
size_t v_sz_3876_; size_t v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v_sz_3876_ = lean_array_size(v_a_3875_);
v___x_3877_ = ((size_t)0ULL);
v___x_3878_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0_spec__0(v_sz_3876_, v___x_3877_, v_a_3875_);
v___x_3879_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3879_, 0, v___x_3878_);
return v___x_3879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanImportClosureParams_toJson(lean_object* v_x_3880_){
_start:
{
lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3881_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanImportClosureParams_fromJson___closed__0));
v___x_3882_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanImportClosureParams_toJson_spec__0(v_x_3880_);
v___x_3883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3881_);
lean_ctor_set(v___x_3883_, 1, v___x_3882_);
v___x_3884_ = lean_box(0);
v___x_3885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3885_, 0, v___x_3883_);
lean_ctor_set(v___x_3885_, 1, v___x_3884_);
v___x_3886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3885_);
lean_ctor_set(v___x_3886_, 1, v___x_3884_);
v___x_3887_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_3888_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_3886_, v___x_3887_);
v___x_3889_ = l_Lean_Json_mkObj(v___x_3888_);
lean_dec(v___x_3888_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(lean_object* v_j_3892_, lean_object* v_k_3893_){
_start:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = l_Lean_Json_getObjValD(v_j_3892_, v_k_3893_);
v___x_3895_ = l_Lean_Json_getStr_x3f(v___x_3894_);
return v___x_3895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0___boxed(lean_object* v_j_3896_, lean_object* v_k_3897_){
_start:
{
lean_object* v_res_3898_; 
v_res_3898_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(v_j_3896_, v_k_3897_);
lean_dec_ref(v_k_3897_);
return v_res_3898_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3(void){
_start:
{
uint8_t v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; 
v___x_3905_ = 1;
v___x_3906_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__2));
v___x_3907_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3906_, v___x_3905_);
return v___x_3907_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
v___x_3908_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_3909_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__3);
v___x_3910_ = lean_string_append(v___x_3909_, v___x_3908_);
return v___x_3910_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3913_ = 1;
v___x_3914_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__5));
v___x_3915_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3914_, v___x_3913_);
return v___x_3915_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; 
v___x_3916_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__6);
v___x_3917_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__4);
v___x_3918_ = lean_string_append(v___x_3917_, v___x_3916_);
return v___x_3918_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3919_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_3920_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__7);
v___x_3921_ = lean_string_append(v___x_3920_, v___x_3919_);
return v___x_3921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson(lean_object* v_json_3922_){
_start:
{
lean_object* v___x_3923_; lean_object* v___x_3924_; 
v___x_3923_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0));
v___x_3924_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(v_json_3922_, v___x_3923_);
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v_a_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3934_; 
v_a_3925_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3927_ = v___x_3924_;
v_isShared_3928_ = v_isSharedCheck_3934_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_a_3925_);
lean_dec(v___x_3924_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3934_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3932_; 
v___x_3929_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__8);
v___x_3930_ = lean_string_append(v___x_3929_, v_a_3925_);
lean_dec(v_a_3925_);
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 0, v___x_3930_);
v___x_3932_ = v___x_3927_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v___x_3930_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
else
{
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3942_; 
v_a_3935_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3937_ = v___x_3924_;
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v___x_3924_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3940_; 
if (v_isShared_3938_ == 0)
{
lean_ctor_set_tag(v___x_3937_, 0);
v___x_3940_ = v___x_3937_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v_a_3935_);
v___x_3940_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
return v___x_3940_;
}
}
}
else
{
lean_object* v_a_3943_; lean_object* v___x_3945_; uint8_t v_isShared_3946_; uint8_t v_isSharedCheck_3950_; 
v_a_3943_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3945_ = v___x_3924_;
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
else
{
lean_inc(v_a_3943_);
lean_dec(v___x_3924_);
v___x_3945_ = lean_box(0);
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
v_resetjp_3944_:
{
lean_object* v___x_3948_; 
if (v_isShared_3946_ == 0)
{
v___x_3948_ = v___x_3945_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3943_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
return v___x_3948_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanStaleDependencyParams_toJson(lean_object* v_x_3953_){
_start:
{
lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3954_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson___closed__0));
v___x_3955_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3955_, 0, v_x_3953_);
v___x_3956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3956_, 0, v___x_3954_);
lean_ctor_set(v___x_3956_, 1, v___x_3955_);
v___x_3957_ = lean_box(0);
v___x_3958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3956_);
lean_ctor_set(v___x_3958_, 1, v___x_3957_);
v___x_3959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3958_);
lean_ctor_set(v___x_3959_, 1, v___x_3957_);
v___x_3960_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_3961_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_3959_, v___x_3960_);
v___x_3962_ = l_Lean_Json_mkObj(v___x_3961_);
lean_dec(v___x_3961_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorIdx(lean_object* v_x_3965_){
_start:
{
if (lean_obj_tag(v_x_3965_) == 0)
{
lean_object* v___x_3966_; 
v___x_3966_ = lean_unsigned_to_nat(0u);
return v___x_3966_;
}
else
{
lean_object* v___x_3967_; 
v___x_3967_ = lean_unsigned_to_nat(1u);
return v___x_3967_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorIdx___boxed(lean_object* v_x_3968_){
_start:
{
lean_object* v_res_3969_; 
v_res_3969_ = l_Lean_Lsp_OpenNamespace_ctorIdx(v_x_3968_);
lean_dec_ref(v_x_3968_);
return v_res_3969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim___redArg(lean_object* v_t_3970_, lean_object* v_k_3971_){
_start:
{
if (lean_obj_tag(v_t_3970_) == 0)
{
lean_object* v_namespace_3972_; lean_object* v_exceptions_3973_; lean_object* v___x_3974_; 
v_namespace_3972_ = lean_ctor_get(v_t_3970_, 0);
lean_inc(v_namespace_3972_);
v_exceptions_3973_ = lean_ctor_get(v_t_3970_, 1);
lean_inc_ref(v_exceptions_3973_);
lean_dec_ref_known(v_t_3970_, 2);
v___x_3974_ = lean_apply_2(v_k_3971_, v_namespace_3972_, v_exceptions_3973_);
return v___x_3974_;
}
else
{
lean_object* v_from_3975_; lean_object* v_to_3976_; lean_object* v___x_3977_; 
v_from_3975_ = lean_ctor_get(v_t_3970_, 0);
lean_inc(v_from_3975_);
v_to_3976_ = lean_ctor_get(v_t_3970_, 1);
lean_inc(v_to_3976_);
lean_dec_ref_known(v_t_3970_, 2);
v___x_3977_ = lean_apply_2(v_k_3971_, v_from_3975_, v_to_3976_);
return v___x_3977_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim(lean_object* v_motive_3978_, lean_object* v_ctorIdx_3979_, lean_object* v_t_3980_, lean_object* v_h_3981_, lean_object* v_k_3982_){
_start:
{
lean_object* v___x_3983_; 
v___x_3983_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_3980_, v_k_3982_);
return v___x_3983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_ctorElim___boxed(lean_object* v_motive_3984_, lean_object* v_ctorIdx_3985_, lean_object* v_t_3986_, lean_object* v_h_3987_, lean_object* v_k_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l_Lean_Lsp_OpenNamespace_ctorElim(v_motive_3984_, v_ctorIdx_3985_, v_t_3986_, v_h_3987_, v_k_3988_);
lean_dec(v_ctorIdx_3985_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_allExcept_elim___redArg(lean_object* v_t_3990_, lean_object* v_allExcept_3991_){
_start:
{
lean_object* v___x_3992_; 
v___x_3992_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_3990_, v_allExcept_3991_);
return v___x_3992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_allExcept_elim(lean_object* v_motive_3993_, lean_object* v_t_3994_, lean_object* v_h_3995_, lean_object* v_allExcept_3996_){
_start:
{
lean_object* v___x_3997_; 
v___x_3997_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_3994_, v_allExcept_3996_);
return v___x_3997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_renamed_elim___redArg(lean_object* v_t_3998_, lean_object* v_renamed_3999_){
_start:
{
lean_object* v___x_4000_; 
v___x_4000_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_3998_, v_renamed_3999_);
return v___x_4000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_OpenNamespace_renamed_elim(lean_object* v_motive_4001_, lean_object* v_t_4002_, lean_object* v_h_4003_, lean_object* v_renamed_4004_){
_start:
{
lean_object* v___x_4005_; 
v___x_4005_ = l_Lean_Lsp_OpenNamespace_ctorElim___redArg(v_t_4002_, v_renamed_4004_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0(size_t v_sz_4006_, size_t v_i_4007_, lean_object* v_bs_4008_){
_start:
{
uint8_t v___x_4009_; 
v___x_4009_ = lean_usize_dec_lt(v_i_4007_, v_sz_4006_);
if (v___x_4009_ == 0)
{
lean_object* v___x_4010_; 
v___x_4010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4010_, 0, v_bs_4008_);
return v___x_4010_;
}
else
{
lean_object* v_v_4011_; lean_object* v___x_4012_; 
v_v_4011_ = lean_array_uget_borrowed(v_bs_4008_, v_i_4007_);
lean_inc(v_v_4011_);
v___x_4012_ = l_Lean_Name_fromJson_x3f(v_v_4011_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4020_; 
lean_dec_ref(v_bs_4008_);
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4020_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4020_ == 0)
{
v___x_4015_ = v___x_4012_;
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_4012_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4018_; 
if (v_isShared_4016_ == 0)
{
v___x_4018_ = v___x_4015_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4019_; 
v_reuseFailAlloc_4019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4019_, 0, v_a_4013_);
v___x_4018_ = v_reuseFailAlloc_4019_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
return v___x_4018_;
}
}
}
else
{
lean_object* v_a_4021_; lean_object* v___x_4022_; lean_object* v_bs_x27_4023_; size_t v___x_4024_; size_t v___x_4025_; lean_object* v___x_4026_; 
v_a_4021_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_a_4021_);
lean_dec_ref_known(v___x_4012_, 1);
v___x_4022_ = lean_unsigned_to_nat(0u);
v_bs_x27_4023_ = lean_array_uset(v_bs_4008_, v_i_4007_, v___x_4022_);
v___x_4024_ = ((size_t)1ULL);
v___x_4025_ = lean_usize_add(v_i_4007_, v___x_4024_);
v___x_4026_ = lean_array_uset(v_bs_x27_4023_, v_i_4007_, v_a_4021_);
v_i_4007_ = v___x_4025_;
v_bs_4008_ = v___x_4026_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0___boxed(lean_object* v_sz_4028_, lean_object* v_i_4029_, lean_object* v_bs_4030_){
_start:
{
size_t v_sz_boxed_4031_; size_t v_i_boxed_4032_; lean_object* v_res_4033_; 
v_sz_boxed_4031_ = lean_unbox_usize(v_sz_4028_);
lean_dec(v_sz_4028_);
v_i_boxed_4032_ = lean_unbox_usize(v_i_4029_);
lean_dec(v_i_4029_);
v_res_4033_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0(v_sz_boxed_4031_, v_i_boxed_4032_, v_bs_4030_);
return v_res_4033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0(lean_object* v_x_4034_){
_start:
{
if (lean_obj_tag(v_x_4034_) == 4)
{
lean_object* v_elems_4035_; size_t v_sz_4036_; size_t v___x_4037_; lean_object* v___x_4038_; 
v_elems_4035_ = lean_ctor_get(v_x_4034_, 0);
lean_inc_ref(v_elems_4035_);
lean_dec_ref_known(v_x_4034_, 1);
v_sz_4036_ = lean_array_size(v_elems_4035_);
v___x_4037_ = ((size_t)0ULL);
v___x_4038_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0_spec__0(v_sz_4036_, v___x_4037_, v_elems_4035_);
return v___x_4038_;
}
else
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4039_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_4040_ = lean_unsigned_to_nat(80u);
v___x_4041_ = l_Lean_Json_pretty(v_x_4034_, v___x_4040_);
v___x_4042_ = lean_string_append(v___x_4039_, v___x_4041_);
lean_dec_ref(v___x_4041_);
v___x_4043_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_4044_ = lean_string_append(v___x_4042_, v___x_4043_);
v___x_4045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4044_);
return v___x_4045_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonOpenNamespace_fromJson(lean_object* v_json_4080_){
_start:
{
lean_object* v___x_4081_; 
lean_inc(v_json_4080_);
v___x_4081_ = l_Lean_Json_getTag_x3f(v_json_4080_);
if (lean_obj_tag(v___x_4081_) == 0)
{
lean_object* v___x_4082_; 
lean_dec(v_json_4080_);
v___x_4082_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__0));
return v___x_4082_;
}
else
{
lean_object* v_val_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; uint8_t v___x_4086_; 
v_val_4083_ = lean_ctor_get(v___x_4081_, 0);
lean_inc(v_val_4083_);
lean_dec_ref_known(v___x_4081_, 1);
v___x_4084_ = lean_box(0);
v___x_4085_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1));
v___x_4086_ = lean_string_dec_eq(v_val_4083_, v___x_4085_);
if (v___x_4086_ == 0)
{
lean_object* v___x_4087_; uint8_t v___x_4088_; 
v___x_4087_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2));
v___x_4088_ = lean_string_dec_eq(v_val_4083_, v___x_4087_);
lean_dec(v_val_4083_);
if (v___x_4088_ == 0)
{
lean_object* v___x_4089_; 
lean_dec(v_json_4080_);
v___x_4089_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__3));
return v___x_4089_;
}
else
{
lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
v___x_4090_ = lean_unsigned_to_nat(2u);
v___x_4091_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__9));
v___x_4092_ = l_Lean_Json_parseCtorFields(v_json_4080_, v___x_4087_, v___x_4090_, v___x_4091_);
if (lean_obj_tag(v___x_4092_) == 0)
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4100_; 
v_a_4093_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4095_ = v___x_4092_;
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4092_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4098_; 
if (v_isShared_4096_ == 0)
{
v___x_4098_ = v___x_4095_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_a_4093_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
else
{
lean_object* v_a_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; 
v_a_4101_ = lean_ctor_get(v___x_4092_, 0);
lean_inc(v_a_4101_);
lean_dec_ref_known(v___x_4092_, 1);
v___x_4102_ = lean_unsigned_to_nat(0u);
v___x_4103_ = lean_array_get_borrowed(v___x_4084_, v_a_4101_, v___x_4102_);
lean_inc(v___x_4103_);
v___x_4104_ = l_Lean_Name_fromJson_x3f(v___x_4103_);
if (lean_obj_tag(v___x_4104_) == 0)
{
lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4112_; 
lean_dec(v_a_4101_);
v_a_4105_ = lean_ctor_get(v___x_4104_, 0);
v_isSharedCheck_4112_ = !lean_is_exclusive(v___x_4104_);
if (v_isSharedCheck_4112_ == 0)
{
v___x_4107_ = v___x_4104_;
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v___x_4104_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4110_; 
if (v_isShared_4108_ == 0)
{
v___x_4110_ = v___x_4107_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4111_; 
v_reuseFailAlloc_4111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4111_, 0, v_a_4105_);
v___x_4110_ = v_reuseFailAlloc_4111_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
return v___x_4110_;
}
}
}
else
{
lean_object* v_a_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; 
v_a_4113_ = lean_ctor_get(v___x_4104_, 0);
lean_inc(v_a_4113_);
lean_dec_ref_known(v___x_4104_, 1);
v___x_4114_ = lean_unsigned_to_nat(1u);
v___x_4115_ = lean_array_get(v___x_4084_, v_a_4101_, v___x_4114_);
lean_dec(v_a_4101_);
v___x_4116_ = l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_instFromJsonOpenNamespace_fromJson_spec__0(v___x_4115_);
if (lean_obj_tag(v___x_4116_) == 0)
{
lean_object* v_a_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4124_; 
lean_dec(v_a_4113_);
v_a_4117_ = lean_ctor_get(v___x_4116_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v___x_4116_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4119_ = v___x_4116_;
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_a_4117_);
lean_dec(v___x_4116_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
lean_object* v___x_4122_; 
if (v_isShared_4120_ == 0)
{
v___x_4122_ = v___x_4119_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_a_4117_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
}
else
{
lean_object* v_a_4125_; lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4133_; 
v_a_4125_ = lean_ctor_get(v___x_4116_, 0);
v_isSharedCheck_4133_ = !lean_is_exclusive(v___x_4116_);
if (v_isSharedCheck_4133_ == 0)
{
v___x_4127_ = v___x_4116_;
v_isShared_4128_ = v_isSharedCheck_4133_;
goto v_resetjp_4126_;
}
else
{
lean_inc(v_a_4125_);
lean_dec(v___x_4116_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4133_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
lean_object* v___x_4129_; lean_object* v___x_4131_; 
v___x_4129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4129_, 0, v_a_4113_);
lean_ctor_set(v___x_4129_, 1, v_a_4125_);
if (v_isShared_4128_ == 0)
{
lean_ctor_set(v___x_4127_, 0, v___x_4129_);
v___x_4131_ = v___x_4127_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v___x_4129_);
v___x_4131_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
return v___x_4131_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; 
lean_dec(v_val_4083_);
v___x_4134_ = lean_unsigned_to_nat(2u);
v___x_4135_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__15));
v___x_4136_ = l_Lean_Json_parseCtorFields(v_json_4080_, v___x_4085_, v___x_4134_, v___x_4135_);
if (lean_obj_tag(v___x_4136_) == 0)
{
lean_object* v_a_4137_; lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4144_; 
v_a_4137_ = lean_ctor_get(v___x_4136_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v___x_4136_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4139_ = v___x_4136_;
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
else
{
lean_inc(v_a_4137_);
lean_dec(v___x_4136_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4142_; 
if (v_isShared_4140_ == 0)
{
v___x_4142_ = v___x_4139_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v_a_4137_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
else
{
lean_object* v_a_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; 
v_a_4145_ = lean_ctor_get(v___x_4136_, 0);
lean_inc(v_a_4145_);
lean_dec_ref_known(v___x_4136_, 1);
v___x_4146_ = lean_unsigned_to_nat(0u);
v___x_4147_ = lean_array_get_borrowed(v___x_4084_, v_a_4145_, v___x_4146_);
lean_inc(v___x_4147_);
v___x_4148_ = l_Lean_Name_fromJson_x3f(v___x_4147_);
if (lean_obj_tag(v___x_4148_) == 0)
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4156_; 
lean_dec(v_a_4145_);
v_a_4149_ = lean_ctor_get(v___x_4148_, 0);
v_isSharedCheck_4156_ = !lean_is_exclusive(v___x_4148_);
if (v_isSharedCheck_4156_ == 0)
{
v___x_4151_ = v___x_4148_;
v_isShared_4152_ = v_isSharedCheck_4156_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v___x_4148_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4156_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4154_; 
if (v_isShared_4152_ == 0)
{
v___x_4154_ = v___x_4151_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v_a_4149_);
v___x_4154_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
return v___x_4154_;
}
}
}
else
{
lean_object* v_a_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
v_a_4157_ = lean_ctor_get(v___x_4148_, 0);
lean_inc(v_a_4157_);
lean_dec_ref_known(v___x_4148_, 1);
v___x_4158_ = lean_unsigned_to_nat(1u);
v___x_4159_ = lean_array_get(v___x_4084_, v_a_4145_, v___x_4158_);
lean_dec(v_a_4145_);
v___x_4160_ = l_Lean_Name_fromJson_x3f(v___x_4159_);
if (lean_obj_tag(v___x_4160_) == 0)
{
lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4168_; 
lean_dec(v_a_4157_);
v_a_4161_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4163_ = v___x_4160_;
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v___x_4160_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4166_; 
if (v_isShared_4164_ == 0)
{
v___x_4166_ = v___x_4163_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4167_; 
v_reuseFailAlloc_4167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4167_, 0, v_a_4161_);
v___x_4166_ = v_reuseFailAlloc_4167_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
return v___x_4166_;
}
}
}
else
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4177_; 
v_a_4169_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4177_ == 0)
{
v___x_4171_ = v___x_4160_;
v_isShared_4172_ = v_isSharedCheck_4177_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v___x_4160_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4177_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
lean_object* v___x_4173_; lean_object* v___x_4175_; 
v___x_4173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4173_, 0, v_a_4157_);
lean_ctor_set(v___x_4173_, 1, v_a_4169_);
if (v_isShared_4172_ == 0)
{
lean_ctor_set(v___x_4171_, 0, v___x_4173_);
v___x_4175_ = v___x_4171_;
goto v_reusejp_4174_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v___x_4173_);
v___x_4175_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4174_;
}
v_reusejp_4174_:
{
return v___x_4175_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0(size_t v_sz_4180_, size_t v_i_4181_, lean_object* v_bs_4182_){
_start:
{
uint8_t v___x_4183_; 
v___x_4183_ = lean_usize_dec_lt(v_i_4181_, v_sz_4180_);
if (v___x_4183_ == 0)
{
return v_bs_4182_;
}
else
{
lean_object* v_v_4184_; lean_object* v___x_4185_; lean_object* v_bs_x27_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; size_t v___x_4189_; size_t v___x_4190_; lean_object* v___x_4191_; 
v_v_4184_ = lean_array_uget(v_bs_4182_, v_i_4181_);
v___x_4185_ = lean_unsigned_to_nat(0u);
v_bs_x27_4186_ = lean_array_uset(v_bs_4182_, v_i_4181_, v___x_4185_);
v___x_4187_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_4184_, v___x_4183_);
v___x_4188_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4188_, 0, v___x_4187_);
v___x_4189_ = ((size_t)1ULL);
v___x_4190_ = lean_usize_add(v_i_4181_, v___x_4189_);
v___x_4191_ = lean_array_uset(v_bs_x27_4186_, v_i_4181_, v___x_4188_);
v_i_4181_ = v___x_4190_;
v_bs_4182_ = v___x_4191_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0___boxed(lean_object* v_sz_4193_, lean_object* v_i_4194_, lean_object* v_bs_4195_){
_start:
{
size_t v_sz_boxed_4196_; size_t v_i_boxed_4197_; lean_object* v_res_4198_; 
v_sz_boxed_4196_ = lean_unbox_usize(v_sz_4193_);
lean_dec(v_sz_4193_);
v_i_boxed_4197_ = lean_unbox_usize(v_i_4194_);
lean_dec(v_i_4194_);
v_res_4198_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0(v_sz_boxed_4196_, v_i_boxed_4197_, v_bs_4195_);
return v_res_4198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0(lean_object* v_a_4199_){
_start:
{
size_t v_sz_4200_; size_t v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
v_sz_4200_ = lean_array_size(v_a_4199_);
v___x_4201_ = ((size_t)0ULL);
v___x_4202_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0_spec__0(v_sz_4200_, v___x_4201_, v_a_4199_);
v___x_4203_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4203_, 0, v___x_4202_);
return v___x_4203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonOpenNamespace_toJson(lean_object* v_x_4204_){
_start:
{
if (lean_obj_tag(v_x_4204_) == 0)
{
lean_object* v_namespace_4205_; lean_object* v_exceptions_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4228_; 
v_namespace_4205_ = lean_ctor_get(v_x_4204_, 0);
v_exceptions_4206_ = lean_ctor_get(v_x_4204_, 1);
v_isSharedCheck_4228_ = !lean_is_exclusive(v_x_4204_);
if (v_isSharedCheck_4228_ == 0)
{
v___x_4208_ = v_x_4204_;
v_isShared_4209_ = v_isSharedCheck_4228_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_exceptions_4206_);
lean_inc(v_namespace_4205_);
lean_dec(v_x_4204_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4228_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4210_; lean_object* v___x_4211_; uint8_t v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4216_; 
v___x_4210_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__2));
v___x_4211_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__4));
v___x_4212_ = 1;
v___x_4213_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_namespace_4205_, v___x_4212_);
v___x_4214_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4214_, 0, v___x_4213_);
if (v_isShared_4209_ == 0)
{
lean_ctor_set(v___x_4208_, 1, v___x_4214_);
lean_ctor_set(v___x_4208_, 0, v___x_4211_);
v___x_4216_ = v___x_4208_;
goto v_reusejp_4215_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v___x_4211_);
lean_ctor_set(v_reuseFailAlloc_4227_, 1, v___x_4214_);
v___x_4216_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4215_;
}
v_reusejp_4215_:
{
lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; 
v___x_4217_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__6));
v___x_4218_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonOpenNamespace_toJson_spec__0(v_exceptions_4206_);
v___x_4219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4219_, 0, v___x_4217_);
lean_ctor_set(v___x_4219_, 1, v___x_4218_);
v___x_4220_ = lean_box(0);
v___x_4221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4221_, 0, v___x_4219_);
lean_ctor_set(v___x_4221_, 1, v___x_4220_);
v___x_4222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4222_, 0, v___x_4216_);
lean_ctor_set(v___x_4222_, 1, v___x_4221_);
v___x_4223_ = l_Lean_Json_mkObj(v___x_4222_);
lean_dec_ref_known(v___x_4222_, 2);
v___x_4224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4210_);
lean_ctor_set(v___x_4224_, 1, v___x_4223_);
v___x_4225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4225_, 0, v___x_4224_);
lean_ctor_set(v___x_4225_, 1, v___x_4220_);
v___x_4226_ = l_Lean_Json_mkObj(v___x_4225_);
lean_dec_ref_known(v___x_4225_, 2);
return v___x_4226_;
}
}
}
else
{
lean_object* v_from_4229_; lean_object* v_to_4230_; lean_object* v___x_4232_; uint8_t v_isShared_4233_; uint8_t v_isSharedCheck_4253_; 
v_from_4229_ = lean_ctor_get(v_x_4204_, 0);
v_to_4230_ = lean_ctor_get(v_x_4204_, 1);
v_isSharedCheck_4253_ = !lean_is_exclusive(v_x_4204_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4232_ = v_x_4204_;
v_isShared_4233_ = v_isSharedCheck_4253_;
goto v_resetjp_4231_;
}
else
{
lean_inc(v_to_4230_);
lean_inc(v_from_4229_);
lean_dec(v_x_4204_);
v___x_4232_ = lean_box(0);
v_isShared_4233_ = v_isSharedCheck_4253_;
goto v_resetjp_4231_;
}
v_resetjp_4231_:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; uint8_t v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4240_; 
v___x_4234_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__1));
v___x_4235_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__10));
v___x_4236_ = 1;
v___x_4237_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_from_4229_, v___x_4236_);
v___x_4238_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4237_);
if (v_isShared_4233_ == 0)
{
lean_ctor_set_tag(v___x_4232_, 0);
lean_ctor_set(v___x_4232_, 1, v___x_4238_);
lean_ctor_set(v___x_4232_, 0, v___x_4235_);
v___x_4240_ = v___x_4232_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v___x_4235_);
lean_ctor_set(v_reuseFailAlloc_4252_, 1, v___x_4238_);
v___x_4240_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; 
v___x_4241_ = ((lean_object*)(l_Lean_Lsp_instFromJsonOpenNamespace_fromJson___closed__12));
v___x_4242_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_to_4230_, v___x_4236_);
v___x_4243_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4242_);
v___x_4244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4244_, 0, v___x_4241_);
lean_ctor_set(v___x_4244_, 1, v___x_4243_);
v___x_4245_ = lean_box(0);
v___x_4246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4246_, 0, v___x_4244_);
lean_ctor_set(v___x_4246_, 1, v___x_4245_);
v___x_4247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4247_, 0, v___x_4240_);
lean_ctor_set(v___x_4247_, 1, v___x_4246_);
v___x_4248_ = l_Lean_Json_mkObj(v___x_4247_);
lean_dec_ref_known(v___x_4247_, 2);
v___x_4249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4249_, 0, v___x_4234_);
lean_ctor_set(v___x_4249_, 1, v___x_4248_);
v___x_4250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4250_, 0, v___x_4249_);
lean_ctor_set(v___x_4250_, 1, v___x_4245_);
v___x_4251_ = l_Lean_Json_mkObj(v___x_4250_);
lean_dec_ref_known(v___x_4250_, 2);
return v___x_4251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1(size_t v_sz_4256_, size_t v_i_4257_, lean_object* v_bs_4258_){
_start:
{
uint8_t v___x_4259_; 
v___x_4259_ = lean_usize_dec_lt(v_i_4257_, v_sz_4256_);
if (v___x_4259_ == 0)
{
lean_object* v___x_4260_; 
v___x_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4260_, 0, v_bs_4258_);
return v___x_4260_;
}
else
{
lean_object* v_v_4261_; lean_object* v___x_4262_; 
v_v_4261_ = lean_array_uget_borrowed(v_bs_4258_, v_i_4257_);
lean_inc(v_v_4261_);
v___x_4262_ = l_Lean_Lsp_instFromJsonOpenNamespace_fromJson(v_v_4261_);
if (lean_obj_tag(v___x_4262_) == 0)
{
lean_object* v_a_4263_; lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4270_; 
lean_dec_ref(v_bs_4258_);
v_a_4263_ = lean_ctor_get(v___x_4262_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4262_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4265_ = v___x_4262_;
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
else
{
lean_inc(v_a_4263_);
lean_dec(v___x_4262_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
lean_object* v___x_4268_; 
if (v_isShared_4266_ == 0)
{
v___x_4268_ = v___x_4265_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_a_4263_);
v___x_4268_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
return v___x_4268_;
}
}
}
else
{
lean_object* v_a_4271_; lean_object* v___x_4272_; lean_object* v_bs_x27_4273_; size_t v___x_4274_; size_t v___x_4275_; lean_object* v___x_4276_; 
v_a_4271_ = lean_ctor_get(v___x_4262_, 0);
lean_inc(v_a_4271_);
lean_dec_ref_known(v___x_4262_, 1);
v___x_4272_ = lean_unsigned_to_nat(0u);
v_bs_x27_4273_ = lean_array_uset(v_bs_4258_, v_i_4257_, v___x_4272_);
v___x_4274_ = ((size_t)1ULL);
v___x_4275_ = lean_usize_add(v_i_4257_, v___x_4274_);
v___x_4276_ = lean_array_uset(v_bs_x27_4273_, v_i_4257_, v_a_4271_);
v_i_4257_ = v___x_4275_;
v_bs_4258_ = v___x_4276_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4278_, lean_object* v_i_4279_, lean_object* v_bs_4280_){
_start:
{
size_t v_sz_boxed_4281_; size_t v_i_boxed_4282_; lean_object* v_res_4283_; 
v_sz_boxed_4281_ = lean_unbox_usize(v_sz_4278_);
lean_dec(v_sz_4278_);
v_i_boxed_4282_ = lean_unbox_usize(v_i_4279_);
lean_dec(v_i_4279_);
v_res_4283_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1(v_sz_boxed_4281_, v_i_boxed_4282_, v_bs_4280_);
return v_res_4283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0(lean_object* v_x_4284_){
_start:
{
if (lean_obj_tag(v_x_4284_) == 4)
{
lean_object* v_elems_4285_; size_t v_sz_4286_; size_t v___x_4287_; lean_object* v___x_4288_; 
v_elems_4285_ = lean_ctor_get(v_x_4284_, 0);
lean_inc_ref(v_elems_4285_);
lean_dec_ref_known(v_x_4284_, 1);
v_sz_4286_ = lean_array_size(v_elems_4285_);
v___x_4287_ = ((size_t)0ULL);
v___x_4288_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0_spec__1(v_sz_4286_, v___x_4287_, v_elems_4285_);
return v___x_4288_;
}
else
{
lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; 
v___x_4289_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_4290_ = lean_unsigned_to_nat(80u);
v___x_4291_ = l_Lean_Json_pretty(v_x_4284_, v___x_4290_);
v___x_4292_ = lean_string_append(v___x_4289_, v___x_4291_);
lean_dec_ref(v___x_4291_);
v___x_4293_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_4294_ = lean_string_append(v___x_4292_, v___x_4293_);
v___x_4295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4295_, 0, v___x_4294_);
return v___x_4295_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0(lean_object* v_j_4296_, lean_object* v_k_4297_){
_start:
{
lean_object* v___x_4298_; lean_object* v___x_4299_; 
v___x_4298_ = l_Lean_Json_getObjValD(v_j_4296_, v_k_4297_);
v___x_4299_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0_spec__0(v___x_4298_);
return v___x_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0___boxed(lean_object* v_j_4300_, lean_object* v_k_4301_){
_start:
{
lean_object* v_res_4302_; 
v_res_4302_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0(v_j_4300_, v_k_4301_);
lean_dec_ref(v_k_4301_);
return v_res_4302_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; 
v___x_4309_ = 1;
v___x_4310_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__2));
v___x_4311_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4310_, v___x_4309_);
return v___x_4311_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4312_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_4313_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__3);
v___x_4314_ = lean_string_append(v___x_4313_, v___x_4312_);
return v___x_4314_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; 
v___x_4317_ = 1;
v___x_4318_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__5));
v___x_4319_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4318_, v___x_4317_);
return v___x_4319_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
v___x_4320_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__6);
v___x_4321_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4);
v___x_4322_ = lean_string_append(v___x_4321_, v___x_4320_);
return v___x_4322_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; 
v___x_4323_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4324_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__7);
v___x_4325_ = lean_string_append(v___x_4324_, v___x_4323_);
return v___x_4325_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11(void){
_start:
{
uint8_t v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4329_ = 1;
v___x_4330_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__10));
v___x_4331_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4330_, v___x_4329_);
return v___x_4331_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12(void){
_start:
{
lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; 
v___x_4332_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__11);
v___x_4333_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__4);
v___x_4334_ = lean_string_append(v___x_4333_, v___x_4332_);
return v___x_4334_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13(void){
_start:
{
lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; 
v___x_4335_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4336_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__12);
v___x_4337_ = lean_string_append(v___x_4336_, v___x_4335_);
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson(lean_object* v_json_4338_){
_start:
{
lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___x_4339_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0));
lean_inc(v_json_4338_);
v___x_4340_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(v_json_4338_, v___x_4339_);
if (lean_obj_tag(v___x_4340_) == 0)
{
lean_object* v_a_4341_; lean_object* v___x_4343_; uint8_t v_isShared_4344_; uint8_t v_isSharedCheck_4350_; 
lean_dec(v_json_4338_);
v_a_4341_ = lean_ctor_get(v___x_4340_, 0);
v_isSharedCheck_4350_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4343_ = v___x_4340_;
v_isShared_4344_ = v_isSharedCheck_4350_;
goto v_resetjp_4342_;
}
else
{
lean_inc(v_a_4341_);
lean_dec(v___x_4340_);
v___x_4343_ = lean_box(0);
v_isShared_4344_ = v_isSharedCheck_4350_;
goto v_resetjp_4342_;
}
v_resetjp_4342_:
{
lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4348_; 
v___x_4345_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__8);
v___x_4346_ = lean_string_append(v___x_4345_, v_a_4341_);
lean_dec(v_a_4341_);
if (v_isShared_4344_ == 0)
{
lean_ctor_set(v___x_4343_, 0, v___x_4346_);
v___x_4348_ = v___x_4343_;
goto v_reusejp_4347_;
}
else
{
lean_object* v_reuseFailAlloc_4349_; 
v_reuseFailAlloc_4349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4349_, 0, v___x_4346_);
v___x_4348_ = v_reuseFailAlloc_4349_;
goto v_reusejp_4347_;
}
v_reusejp_4347_:
{
return v___x_4348_;
}
}
}
else
{
if (lean_obj_tag(v___x_4340_) == 0)
{
lean_object* v_a_4351_; lean_object* v___x_4353_; uint8_t v_isShared_4354_; uint8_t v_isSharedCheck_4358_; 
lean_dec(v_json_4338_);
v_a_4351_ = lean_ctor_get(v___x_4340_, 0);
v_isSharedCheck_4358_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4358_ == 0)
{
v___x_4353_ = v___x_4340_;
v_isShared_4354_ = v_isSharedCheck_4358_;
goto v_resetjp_4352_;
}
else
{
lean_inc(v_a_4351_);
lean_dec(v___x_4340_);
v___x_4353_ = lean_box(0);
v_isShared_4354_ = v_isSharedCheck_4358_;
goto v_resetjp_4352_;
}
v_resetjp_4352_:
{
lean_object* v___x_4356_; 
if (v_isShared_4354_ == 0)
{
lean_ctor_set_tag(v___x_4353_, 0);
v___x_4356_ = v___x_4353_;
goto v_reusejp_4355_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v_a_4351_);
v___x_4356_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4355_;
}
v_reusejp_4355_:
{
return v___x_4356_;
}
}
}
else
{
lean_object* v_a_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v_a_4359_ = lean_ctor_get(v___x_4340_, 0);
lean_inc(v_a_4359_);
lean_dec_ref_known(v___x_4340_, 1);
v___x_4360_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9));
v___x_4361_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanModuleQuery_fromJson_spec__0(v_json_4338_, v___x_4360_);
if (lean_obj_tag(v___x_4361_) == 0)
{
lean_object* v_a_4362_; lean_object* v___x_4364_; uint8_t v_isShared_4365_; uint8_t v_isSharedCheck_4371_; 
lean_dec(v_a_4359_);
v_a_4362_ = lean_ctor_get(v___x_4361_, 0);
v_isSharedCheck_4371_ = !lean_is_exclusive(v___x_4361_);
if (v_isSharedCheck_4371_ == 0)
{
v___x_4364_ = v___x_4361_;
v_isShared_4365_ = v_isSharedCheck_4371_;
goto v_resetjp_4363_;
}
else
{
lean_inc(v_a_4362_);
lean_dec(v___x_4361_);
v___x_4364_ = lean_box(0);
v_isShared_4365_ = v_isSharedCheck_4371_;
goto v_resetjp_4363_;
}
v_resetjp_4363_:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4369_; 
v___x_4366_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__13);
v___x_4367_ = lean_string_append(v___x_4366_, v_a_4362_);
lean_dec(v_a_4362_);
if (v_isShared_4365_ == 0)
{
lean_ctor_set(v___x_4364_, 0, v___x_4367_);
v___x_4369_ = v___x_4364_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4370_; 
v_reuseFailAlloc_4370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4370_, 0, v___x_4367_);
v___x_4369_ = v_reuseFailAlloc_4370_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
return v___x_4369_;
}
}
}
else
{
if (lean_obj_tag(v___x_4361_) == 0)
{
lean_object* v_a_4372_; lean_object* v___x_4374_; uint8_t v_isShared_4375_; uint8_t v_isSharedCheck_4379_; 
lean_dec(v_a_4359_);
v_a_4372_ = lean_ctor_get(v___x_4361_, 0);
v_isSharedCheck_4379_ = !lean_is_exclusive(v___x_4361_);
if (v_isSharedCheck_4379_ == 0)
{
v___x_4374_ = v___x_4361_;
v_isShared_4375_ = v_isSharedCheck_4379_;
goto v_resetjp_4373_;
}
else
{
lean_inc(v_a_4372_);
lean_dec(v___x_4361_);
v___x_4374_ = lean_box(0);
v_isShared_4375_ = v_isSharedCheck_4379_;
goto v_resetjp_4373_;
}
v_resetjp_4373_:
{
lean_object* v___x_4377_; 
if (v_isShared_4375_ == 0)
{
lean_ctor_set_tag(v___x_4374_, 0);
v___x_4377_ = v___x_4374_;
goto v_reusejp_4376_;
}
else
{
lean_object* v_reuseFailAlloc_4378_; 
v_reuseFailAlloc_4378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4378_, 0, v_a_4372_);
v___x_4377_ = v_reuseFailAlloc_4378_;
goto v_reusejp_4376_;
}
v_reusejp_4376_:
{
return v___x_4377_;
}
}
}
else
{
lean_object* v_a_4380_; lean_object* v___x_4382_; uint8_t v_isShared_4383_; uint8_t v_isSharedCheck_4388_; 
v_a_4380_ = lean_ctor_get(v___x_4361_, 0);
v_isSharedCheck_4388_ = !lean_is_exclusive(v___x_4361_);
if (v_isSharedCheck_4388_ == 0)
{
v___x_4382_ = v___x_4361_;
v_isShared_4383_ = v_isSharedCheck_4388_;
goto v_resetjp_4381_;
}
else
{
lean_inc(v_a_4380_);
lean_dec(v___x_4361_);
v___x_4382_ = lean_box(0);
v_isShared_4383_ = v_isSharedCheck_4388_;
goto v_resetjp_4381_;
}
v_resetjp_4381_:
{
lean_object* v___x_4384_; lean_object* v___x_4386_; 
v___x_4384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4384_, 0, v_a_4359_);
lean_ctor_set(v___x_4384_, 1, v_a_4380_);
if (v_isShared_4383_ == 0)
{
lean_ctor_set(v___x_4382_, 0, v___x_4384_);
v___x_4386_ = v___x_4382_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4387_; 
v_reuseFailAlloc_4387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4387_, 0, v___x_4384_);
v___x_4386_ = v_reuseFailAlloc_4387_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
return v___x_4386_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0(size_t v_sz_4391_, size_t v_i_4392_, lean_object* v_bs_4393_){
_start:
{
uint8_t v___x_4394_; 
v___x_4394_ = lean_usize_dec_lt(v_i_4392_, v_sz_4391_);
if (v___x_4394_ == 0)
{
return v_bs_4393_;
}
else
{
lean_object* v_v_4395_; lean_object* v___x_4396_; lean_object* v_bs_x27_4397_; lean_object* v___x_4398_; size_t v___x_4399_; size_t v___x_4400_; lean_object* v___x_4401_; 
v_v_4395_ = lean_array_uget(v_bs_4393_, v_i_4392_);
v___x_4396_ = lean_unsigned_to_nat(0u);
v_bs_x27_4397_ = lean_array_uset(v_bs_4393_, v_i_4392_, v___x_4396_);
v___x_4398_ = l_Lean_Lsp_instToJsonOpenNamespace_toJson(v_v_4395_);
v___x_4399_ = ((size_t)1ULL);
v___x_4400_ = lean_usize_add(v_i_4392_, v___x_4399_);
v___x_4401_ = lean_array_uset(v_bs_x27_4397_, v_i_4392_, v___x_4398_);
v_i_4392_ = v___x_4400_;
v_bs_4393_ = v___x_4401_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0___boxed(lean_object* v_sz_4403_, lean_object* v_i_4404_, lean_object* v_bs_4405_){
_start:
{
size_t v_sz_boxed_4406_; size_t v_i_boxed_4407_; lean_object* v_res_4408_; 
v_sz_boxed_4406_ = lean_unbox_usize(v_sz_4403_);
lean_dec(v_sz_4403_);
v_i_boxed_4407_ = lean_unbox_usize(v_i_4404_);
lean_dec(v_i_4404_);
v_res_4408_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0(v_sz_boxed_4406_, v_i_boxed_4407_, v_bs_4405_);
return v_res_4408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0(lean_object* v_a_4409_){
_start:
{
size_t v_sz_4410_; size_t v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; 
v_sz_4410_ = lean_array_size(v_a_4409_);
v___x_4411_ = ((size_t)0ULL);
v___x_4412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0_spec__0(v_sz_4410_, v___x_4411_, v_a_4409_);
v___x_4413_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4413_, 0, v___x_4412_);
return v___x_4413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanModuleQuery_toJson(lean_object* v_x_4414_){
_start:
{
lean_object* v_identifier_4415_; lean_object* v_openNamespaces_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4436_; 
v_identifier_4415_ = lean_ctor_get(v_x_4414_, 0);
v_openNamespaces_4416_ = lean_ctor_get(v_x_4414_, 1);
v_isSharedCheck_4436_ = !lean_is_exclusive(v_x_4414_);
if (v_isSharedCheck_4436_ == 0)
{
v___x_4418_ = v_x_4414_;
v_isShared_4419_ = v_isSharedCheck_4436_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_openNamespaces_4416_);
lean_inc(v_identifier_4415_);
lean_dec(v_x_4414_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4436_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4423_; 
v___x_4420_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__0));
v___x_4421_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4421_, 0, v_identifier_4415_);
if (v_isShared_4419_ == 0)
{
lean_ctor_set(v___x_4418_, 1, v___x_4421_);
lean_ctor_set(v___x_4418_, 0, v___x_4420_);
v___x_4423_ = v___x_4418_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4435_; 
v_reuseFailAlloc_4435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4435_, 0, v___x_4420_);
lean_ctor_set(v_reuseFailAlloc_4435_, 1, v___x_4421_);
v___x_4423_ = v_reuseFailAlloc_4435_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
v___x_4424_ = lean_box(0);
v___x_4425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4425_, 0, v___x_4423_);
lean_ctor_set(v___x_4425_, 1, v___x_4424_);
v___x_4426_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson___closed__9));
v___x_4427_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanModuleQuery_toJson_spec__0(v_openNamespaces_4416_);
v___x_4428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4428_, 0, v___x_4426_);
lean_ctor_set(v___x_4428_, 1, v___x_4427_);
v___x_4429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4429_, 0, v___x_4428_);
lean_ctor_set(v___x_4429_, 1, v___x_4424_);
v___x_4430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4430_, 0, v___x_4429_);
lean_ctor_set(v___x_4430_, 1, v___x_4424_);
v___x_4431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4425_);
lean_ctor_set(v___x_4431_, 1, v___x_4430_);
v___x_4432_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_4433_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_4431_, v___x_4432_);
v___x_4434_ = l_Lean_Json_mkObj(v___x_4433_);
lean_dec(v___x_4433_);
return v___x_4434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0(lean_object* v_j_4442_, lean_object* v_k_4443_){
_start:
{
lean_object* v___x_4444_; 
v___x_4444_ = l_Lean_Json_getObjValD(v_j_4442_, v_k_4443_);
switch(lean_obj_tag(v___x_4444_))
{
case 3:
{
lean_object* v_s_4445_; lean_object* v___x_4447_; uint8_t v_isShared_4448_; uint8_t v_isSharedCheck_4453_; 
v_s_4445_ = lean_ctor_get(v___x_4444_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4447_ = v___x_4444_;
v_isShared_4448_ = v_isSharedCheck_4453_;
goto v_resetjp_4446_;
}
else
{
lean_inc(v_s_4445_);
lean_dec(v___x_4444_);
v___x_4447_ = lean_box(0);
v_isShared_4448_ = v_isSharedCheck_4453_;
goto v_resetjp_4446_;
}
v_resetjp_4446_:
{
lean_object* v___x_4450_; 
if (v_isShared_4448_ == 0)
{
lean_ctor_set_tag(v___x_4447_, 0);
v___x_4450_ = v___x_4447_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_s_4445_);
v___x_4450_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
lean_object* v___x_4451_; 
v___x_4451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4451_, 0, v___x_4450_);
return v___x_4451_;
}
}
}
case 2:
{
lean_object* v_n_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4462_; 
v_n_4454_ = lean_ctor_get(v___x_4444_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4456_ = v___x_4444_;
v_isShared_4457_ = v_isSharedCheck_4462_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_n_4454_);
lean_dec(v___x_4444_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4462_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4459_; 
if (v_isShared_4457_ == 0)
{
lean_ctor_set_tag(v___x_4456_, 1);
v___x_4459_ = v___x_4456_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_n_4454_);
v___x_4459_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
lean_object* v___x_4460_; 
v___x_4460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4460_, 0, v___x_4459_);
return v___x_4460_;
}
}
}
default: 
{
lean_object* v___x_4463_; 
lean_dec(v___x_4444_);
v___x_4463_ = ((lean_object*)(l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___closed__1));
return v___x_4463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0___boxed(lean_object* v_j_4464_, lean_object* v_k_4465_){
_start:
{
lean_object* v_res_4466_; 
v_res_4466_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0(v_j_4464_, v_k_4465_);
lean_dec_ref(v_k_4465_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2(size_t v_sz_4467_, size_t v_i_4468_, lean_object* v_bs_4469_){
_start:
{
uint8_t v___x_4470_; 
v___x_4470_ = lean_usize_dec_lt(v_i_4468_, v_sz_4467_);
if (v___x_4470_ == 0)
{
lean_object* v___x_4471_; 
v___x_4471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4471_, 0, v_bs_4469_);
return v___x_4471_;
}
else
{
lean_object* v_v_4472_; lean_object* v___x_4473_; 
v_v_4472_ = lean_array_uget_borrowed(v_bs_4469_, v_i_4468_);
lean_inc(v_v_4472_);
v___x_4473_ = l_Lean_Lsp_instFromJsonLeanModuleQuery_fromJson(v_v_4472_);
if (lean_obj_tag(v___x_4473_) == 0)
{
lean_object* v_a_4474_; lean_object* v___x_4476_; uint8_t v_isShared_4477_; uint8_t v_isSharedCheck_4481_; 
lean_dec_ref(v_bs_4469_);
v_a_4474_ = lean_ctor_get(v___x_4473_, 0);
v_isSharedCheck_4481_ = !lean_is_exclusive(v___x_4473_);
if (v_isSharedCheck_4481_ == 0)
{
v___x_4476_ = v___x_4473_;
v_isShared_4477_ = v_isSharedCheck_4481_;
goto v_resetjp_4475_;
}
else
{
lean_inc(v_a_4474_);
lean_dec(v___x_4473_);
v___x_4476_ = lean_box(0);
v_isShared_4477_ = v_isSharedCheck_4481_;
goto v_resetjp_4475_;
}
v_resetjp_4475_:
{
lean_object* v___x_4479_; 
if (v_isShared_4477_ == 0)
{
v___x_4479_ = v___x_4476_;
goto v_reusejp_4478_;
}
else
{
lean_object* v_reuseFailAlloc_4480_; 
v_reuseFailAlloc_4480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4480_, 0, v_a_4474_);
v___x_4479_ = v_reuseFailAlloc_4480_;
goto v_reusejp_4478_;
}
v_reusejp_4478_:
{
return v___x_4479_;
}
}
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4483_; lean_object* v_bs_x27_4484_; size_t v___x_4485_; size_t v___x_4486_; lean_object* v___x_4487_; 
v_a_4482_ = lean_ctor_get(v___x_4473_, 0);
lean_inc(v_a_4482_);
lean_dec_ref_known(v___x_4473_, 1);
v___x_4483_ = lean_unsigned_to_nat(0u);
v_bs_x27_4484_ = lean_array_uset(v_bs_4469_, v_i_4468_, v___x_4483_);
v___x_4485_ = ((size_t)1ULL);
v___x_4486_ = lean_usize_add(v_i_4468_, v___x_4485_);
v___x_4487_ = lean_array_uset(v_bs_x27_4484_, v_i_4468_, v_a_4482_);
v_i_4468_ = v___x_4486_;
v_bs_4469_ = v___x_4487_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_4489_, lean_object* v_i_4490_, lean_object* v_bs_4491_){
_start:
{
size_t v_sz_boxed_4492_; size_t v_i_boxed_4493_; lean_object* v_res_4494_; 
v_sz_boxed_4492_ = lean_unbox_usize(v_sz_4489_);
lean_dec(v_sz_4489_);
v_i_boxed_4493_ = lean_unbox_usize(v_i_4490_);
lean_dec(v_i_4490_);
v_res_4494_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2(v_sz_boxed_4492_, v_i_boxed_4493_, v_bs_4491_);
return v_res_4494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1(lean_object* v_x_4495_){
_start:
{
if (lean_obj_tag(v_x_4495_) == 4)
{
lean_object* v_elems_4496_; size_t v_sz_4497_; size_t v___x_4498_; lean_object* v___x_4499_; 
v_elems_4496_ = lean_ctor_get(v_x_4495_, 0);
lean_inc_ref(v_elems_4496_);
lean_dec_ref_known(v_x_4495_, 1);
v_sz_4497_ = lean_array_size(v_elems_4496_);
v___x_4498_ = ((size_t)0ULL);
v___x_4499_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1_spec__2(v_sz_4497_, v___x_4498_, v_elems_4496_);
return v___x_4499_;
}
else
{
lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; 
v___x_4500_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_4501_ = lean_unsigned_to_nat(80u);
v___x_4502_ = l_Lean_Json_pretty(v_x_4495_, v___x_4501_);
v___x_4503_ = lean_string_append(v___x_4500_, v___x_4502_);
lean_dec_ref(v___x_4502_);
v___x_4504_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_4505_ = lean_string_append(v___x_4503_, v___x_4504_);
v___x_4506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4506_, 0, v___x_4505_);
return v___x_4506_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1(lean_object* v_j_4507_, lean_object* v_k_4508_){
_start:
{
lean_object* v___x_4509_; lean_object* v___x_4510_; 
v___x_4509_ = l_Lean_Json_getObjValD(v_j_4507_, v_k_4508_);
v___x_4510_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1_spec__1(v___x_4509_);
return v___x_4510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1___boxed(lean_object* v_j_4511_, lean_object* v_k_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1(v_j_4511_, v_k_4512_);
lean_dec_ref(v_k_4512_);
return v_res_4513_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4520_ = 1;
v___x_4521_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__2));
v___x_4522_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4521_, v___x_4520_);
return v___x_4522_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4523_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_4524_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__3);
v___x_4525_ = lean_string_append(v___x_4524_, v___x_4523_);
return v___x_4525_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; 
v___x_4528_ = 1;
v___x_4529_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__5));
v___x_4530_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4529_, v___x_4528_);
return v___x_4530_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; 
v___x_4531_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__6);
v___x_4532_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4);
v___x_4533_ = lean_string_append(v___x_4532_, v___x_4531_);
return v___x_4533_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; 
v___x_4534_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4535_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__7);
v___x_4536_ = lean_string_append(v___x_4535_, v___x_4534_);
return v___x_4536_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11(void){
_start:
{
uint8_t v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v___x_4540_ = 1;
v___x_4541_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__10));
v___x_4542_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4541_, v___x_4540_);
return v___x_4542_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12(void){
_start:
{
lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; 
v___x_4543_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__11);
v___x_4544_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__4);
v___x_4545_ = lean_string_append(v___x_4544_, v___x_4543_);
return v___x_4545_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13(void){
_start:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4546_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4547_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__12);
v___x_4548_ = lean_string_append(v___x_4547_, v___x_4546_);
return v___x_4548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson(lean_object* v_json_4549_){
_start:
{
lean_object* v___x_4550_; lean_object* v___x_4551_; 
v___x_4550_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0));
lean_inc(v_json_4549_);
v___x_4551_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__0(v_json_4549_, v___x_4550_);
if (lean_obj_tag(v___x_4551_) == 0)
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4561_; 
lean_dec(v_json_4549_);
v_a_4552_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4561_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4561_ == 0)
{
v___x_4554_ = v___x_4551_;
v_isShared_4555_ = v_isSharedCheck_4561_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4551_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4561_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4559_; 
v___x_4556_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__8);
v___x_4557_ = lean_string_append(v___x_4556_, v_a_4552_);
lean_dec(v_a_4552_);
if (v_isShared_4555_ == 0)
{
lean_ctor_set(v___x_4554_, 0, v___x_4557_);
v___x_4559_ = v___x_4554_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4560_; 
v_reuseFailAlloc_4560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4560_, 0, v___x_4557_);
v___x_4559_ = v_reuseFailAlloc_4560_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
return v___x_4559_;
}
}
}
else
{
if (lean_obj_tag(v___x_4551_) == 0)
{
lean_object* v_a_4562_; lean_object* v___x_4564_; uint8_t v_isShared_4565_; uint8_t v_isSharedCheck_4569_; 
lean_dec(v_json_4549_);
v_a_4562_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4569_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4569_ == 0)
{
v___x_4564_ = v___x_4551_;
v_isShared_4565_ = v_isSharedCheck_4569_;
goto v_resetjp_4563_;
}
else
{
lean_inc(v_a_4562_);
lean_dec(v___x_4551_);
v___x_4564_ = lean_box(0);
v_isShared_4565_ = v_isSharedCheck_4569_;
goto v_resetjp_4563_;
}
v_resetjp_4563_:
{
lean_object* v___x_4567_; 
if (v_isShared_4565_ == 0)
{
lean_ctor_set_tag(v___x_4564_, 0);
v___x_4567_ = v___x_4564_;
goto v_reusejp_4566_;
}
else
{
lean_object* v_reuseFailAlloc_4568_; 
v_reuseFailAlloc_4568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4568_, 0, v_a_4562_);
v___x_4567_ = v_reuseFailAlloc_4568_;
goto v_reusejp_4566_;
}
v_reusejp_4566_:
{
return v___x_4567_;
}
}
}
else
{
lean_object* v_a_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; 
v_a_4570_ = lean_ctor_get(v___x_4551_, 0);
lean_inc(v_a_4570_);
lean_dec_ref_known(v___x_4551_, 1);
v___x_4571_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9));
v___x_4572_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson_spec__1(v_json_4549_, v___x_4571_);
if (lean_obj_tag(v___x_4572_) == 0)
{
lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4582_; 
lean_dec(v_a_4570_);
v_a_4573_ = lean_ctor_get(v___x_4572_, 0);
v_isSharedCheck_4582_ = !lean_is_exclusive(v___x_4572_);
if (v_isSharedCheck_4582_ == 0)
{
v___x_4575_ = v___x_4572_;
v_isShared_4576_ = v_isSharedCheck_4582_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v___x_4572_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4582_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4580_; 
v___x_4577_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__13);
v___x_4578_ = lean_string_append(v___x_4577_, v_a_4573_);
lean_dec(v_a_4573_);
if (v_isShared_4576_ == 0)
{
lean_ctor_set(v___x_4575_, 0, v___x_4578_);
v___x_4580_ = v___x_4575_;
goto v_reusejp_4579_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v___x_4578_);
v___x_4580_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4579_;
}
v_reusejp_4579_:
{
return v___x_4580_;
}
}
}
else
{
if (lean_obj_tag(v___x_4572_) == 0)
{
lean_object* v_a_4583_; lean_object* v___x_4585_; uint8_t v_isShared_4586_; uint8_t v_isSharedCheck_4590_; 
lean_dec(v_a_4570_);
v_a_4583_ = lean_ctor_get(v___x_4572_, 0);
v_isSharedCheck_4590_ = !lean_is_exclusive(v___x_4572_);
if (v_isSharedCheck_4590_ == 0)
{
v___x_4585_ = v___x_4572_;
v_isShared_4586_ = v_isSharedCheck_4590_;
goto v_resetjp_4584_;
}
else
{
lean_inc(v_a_4583_);
lean_dec(v___x_4572_);
v___x_4585_ = lean_box(0);
v_isShared_4586_ = v_isSharedCheck_4590_;
goto v_resetjp_4584_;
}
v_resetjp_4584_:
{
lean_object* v___x_4588_; 
if (v_isShared_4586_ == 0)
{
lean_ctor_set_tag(v___x_4585_, 0);
v___x_4588_ = v___x_4585_;
goto v_reusejp_4587_;
}
else
{
lean_object* v_reuseFailAlloc_4589_; 
v_reuseFailAlloc_4589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4589_, 0, v_a_4583_);
v___x_4588_ = v_reuseFailAlloc_4589_;
goto v_reusejp_4587_;
}
v_reusejp_4587_:
{
return v___x_4588_;
}
}
}
else
{
lean_object* v_a_4591_; lean_object* v___x_4593_; uint8_t v_isShared_4594_; uint8_t v_isSharedCheck_4599_; 
v_a_4591_ = lean_ctor_get(v___x_4572_, 0);
v_isSharedCheck_4599_ = !lean_is_exclusive(v___x_4572_);
if (v_isSharedCheck_4599_ == 0)
{
v___x_4593_ = v___x_4572_;
v_isShared_4594_ = v_isSharedCheck_4599_;
goto v_resetjp_4592_;
}
else
{
lean_inc(v_a_4591_);
lean_dec(v___x_4572_);
v___x_4593_ = lean_box(0);
v_isShared_4594_ = v_isSharedCheck_4599_;
goto v_resetjp_4592_;
}
v_resetjp_4592_:
{
lean_object* v___x_4595_; lean_object* v___x_4597_; 
v___x_4595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4595_, 0, v_a_4570_);
lean_ctor_set(v___x_4595_, 1, v_a_4591_);
if (v_isShared_4594_ == 0)
{
lean_ctor_set(v___x_4593_, 0, v___x_4595_);
v___x_4597_ = v___x_4593_;
goto v_reusejp_4596_;
}
else
{
lean_object* v_reuseFailAlloc_4598_; 
v_reuseFailAlloc_4598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4598_, 0, v___x_4595_);
v___x_4597_ = v_reuseFailAlloc_4598_;
goto v_reusejp_4596_;
}
v_reusejp_4596_:
{
return v___x_4597_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0(size_t v_sz_4602_, size_t v_i_4603_, lean_object* v_bs_4604_){
_start:
{
uint8_t v___x_4605_; 
v___x_4605_ = lean_usize_dec_lt(v_i_4603_, v_sz_4602_);
if (v___x_4605_ == 0)
{
return v_bs_4604_;
}
else
{
lean_object* v_v_4606_; lean_object* v___x_4607_; lean_object* v_bs_x27_4608_; lean_object* v___x_4609_; size_t v___x_4610_; size_t v___x_4611_; lean_object* v___x_4612_; 
v_v_4606_ = lean_array_uget(v_bs_4604_, v_i_4603_);
v___x_4607_ = lean_unsigned_to_nat(0u);
v_bs_x27_4608_ = lean_array_uset(v_bs_4604_, v_i_4603_, v___x_4607_);
v___x_4609_ = l_Lean_Lsp_instToJsonLeanModuleQuery_toJson(v_v_4606_);
v___x_4610_ = ((size_t)1ULL);
v___x_4611_ = lean_usize_add(v_i_4603_, v___x_4610_);
v___x_4612_ = lean_array_uset(v_bs_x27_4608_, v_i_4603_, v___x_4609_);
v_i_4603_ = v___x_4611_;
v_bs_4604_ = v___x_4612_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0___boxed(lean_object* v_sz_4614_, lean_object* v_i_4615_, lean_object* v_bs_4616_){
_start:
{
size_t v_sz_boxed_4617_; size_t v_i_boxed_4618_; lean_object* v_res_4619_; 
v_sz_boxed_4617_ = lean_unbox_usize(v_sz_4614_);
lean_dec(v_sz_4614_);
v_i_boxed_4618_ = lean_unbox_usize(v_i_4615_);
lean_dec(v_i_4615_);
v_res_4619_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0(v_sz_boxed_4617_, v_i_boxed_4618_, v_bs_4616_);
return v_res_4619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0(lean_object* v_a_4620_){
_start:
{
size_t v_sz_4621_; size_t v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
v_sz_4621_ = lean_array_size(v_a_4620_);
v___x_4622_ = ((size_t)0ULL);
v___x_4623_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0_spec__0(v_sz_4621_, v___x_4622_, v_a_4620_);
v___x_4624_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4624_, 0, v___x_4623_);
return v___x_4624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleParams_toJson(lean_object* v_x_4625_){
_start:
{
lean_object* v_sourceRequestID_4626_; lean_object* v_queries_4627_; lean_object* v___x_4629_; uint8_t v_isShared_4630_; uint8_t v_isSharedCheck_4665_; 
v_sourceRequestID_4626_ = lean_ctor_get(v_x_4625_, 0);
v_queries_4627_ = lean_ctor_get(v_x_4625_, 1);
v_isSharedCheck_4665_ = !lean_is_exclusive(v_x_4625_);
if (v_isSharedCheck_4665_ == 0)
{
v___x_4629_ = v_x_4625_;
v_isShared_4630_ = v_isSharedCheck_4665_;
goto v_resetjp_4628_;
}
else
{
lean_inc(v_queries_4627_);
lean_inc(v_sourceRequestID_4626_);
lean_dec(v_x_4625_);
v___x_4629_ = lean_box(0);
v_isShared_4630_ = v_isSharedCheck_4665_;
goto v_resetjp_4628_;
}
v_resetjp_4628_:
{
lean_object* v___x_4631_; lean_object* v___y_4633_; 
v___x_4631_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__0));
switch(lean_obj_tag(v_sourceRequestID_4626_))
{
case 0:
{
lean_object* v_s_4648_; lean_object* v___x_4650_; uint8_t v_isShared_4651_; uint8_t v_isSharedCheck_4655_; 
v_s_4648_ = lean_ctor_get(v_sourceRequestID_4626_, 0);
v_isSharedCheck_4655_ = !lean_is_exclusive(v_sourceRequestID_4626_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4650_ = v_sourceRequestID_4626_;
v_isShared_4651_ = v_isSharedCheck_4655_;
goto v_resetjp_4649_;
}
else
{
lean_inc(v_s_4648_);
lean_dec(v_sourceRequestID_4626_);
v___x_4650_ = lean_box(0);
v_isShared_4651_ = v_isSharedCheck_4655_;
goto v_resetjp_4649_;
}
v_resetjp_4649_:
{
lean_object* v___x_4653_; 
if (v_isShared_4651_ == 0)
{
lean_ctor_set_tag(v___x_4650_, 3);
v___x_4653_ = v___x_4650_;
goto v_reusejp_4652_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v_s_4648_);
v___x_4653_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4652_;
}
v_reusejp_4652_:
{
v___y_4633_ = v___x_4653_;
goto v___jp_4632_;
}
}
}
case 1:
{
lean_object* v_n_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4663_; 
v_n_4656_ = lean_ctor_get(v_sourceRequestID_4626_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v_sourceRequestID_4626_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4658_ = v_sourceRequestID_4626_;
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_n_4656_);
lean_dec(v_sourceRequestID_4626_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4661_; 
if (v_isShared_4659_ == 0)
{
lean_ctor_set_tag(v___x_4658_, 2);
v___x_4661_ = v___x_4658_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_n_4656_);
v___x_4661_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
v___y_4633_ = v___x_4661_;
goto v___jp_4632_;
}
}
}
default: 
{
lean_object* v___x_4664_; 
v___x_4664_ = lean_box(0);
v___y_4633_ = v___x_4664_;
goto v___jp_4632_;
}
}
v___jp_4632_:
{
lean_object* v___x_4635_; 
if (v_isShared_4630_ == 0)
{
lean_ctor_set(v___x_4629_, 1, v___y_4633_);
lean_ctor_set(v___x_4629_, 0, v___x_4631_);
v___x_4635_ = v___x_4629_;
goto v_reusejp_4634_;
}
else
{
lean_object* v_reuseFailAlloc_4647_; 
v_reuseFailAlloc_4647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4647_, 0, v___x_4631_);
lean_ctor_set(v_reuseFailAlloc_4647_, 1, v___y_4633_);
v___x_4635_ = v_reuseFailAlloc_4647_;
goto v_reusejp_4634_;
}
v_reusejp_4634_:
{
lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; 
v___x_4636_ = lean_box(0);
v___x_4637_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4637_, 0, v___x_4635_);
lean_ctor_set(v___x_4637_, 1, v___x_4636_);
v___x_4638_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleParams_fromJson___closed__9));
v___x_4639_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleParams_toJson_spec__0(v_queries_4627_);
v___x_4640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4640_, 0, v___x_4638_);
lean_ctor_set(v___x_4640_, 1, v___x_4639_);
v___x_4641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4641_, 0, v___x_4640_);
lean_ctor_set(v___x_4641_, 1, v___x_4636_);
v___x_4642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4642_, 0, v___x_4641_);
lean_ctor_set(v___x_4642_, 1, v___x_4636_);
v___x_4643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4643_, 0, v___x_4637_);
lean_ctor_set(v___x_4643_, 1, v___x_4642_);
v___x_4644_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_4645_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_4643_, v___x_4644_);
v___x_4646_ = l_Lean_Json_mkObj(v___x_4645_);
lean_dec(v___x_4645_);
return v___x_4646_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(lean_object* v_j_4668_, lean_object* v_k_4669_){
_start:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; 
v___x_4670_ = l_Lean_Json_getObjValD(v_j_4668_, v_k_4669_);
v___x_4671_ = l_Lean_Name_fromJson_x3f(v___x_4670_);
return v___x_4671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0___boxed(lean_object* v_j_4672_, lean_object* v_k_4673_){
_start:
{
lean_object* v_res_4674_; 
v_res_4674_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_j_4672_, v_k_4673_);
lean_dec_ref(v_k_4673_);
return v_res_4674_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; 
v___x_4681_ = 1;
v___x_4682_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__2));
v___x_4683_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4682_, v___x_4681_);
return v___x_4683_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; 
v___x_4684_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_4685_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__3);
v___x_4686_ = lean_string_append(v___x_4685_, v___x_4684_);
return v___x_4686_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4689_ = 1;
v___x_4690_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__5));
v___x_4691_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4690_, v___x_4689_);
return v___x_4691_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
v___x_4692_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6);
v___x_4693_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4);
v___x_4694_ = lean_string_append(v___x_4693_, v___x_4692_);
return v___x_4694_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; 
v___x_4695_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4696_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__7);
v___x_4697_ = lean_string_append(v___x_4696_, v___x_4695_);
return v___x_4697_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11(void){
_start:
{
uint8_t v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
v___x_4701_ = 1;
v___x_4702_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__10));
v___x_4703_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4702_, v___x_4701_);
return v___x_4703_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12(void){
_start:
{
lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; 
v___x_4704_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11);
v___x_4705_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4);
v___x_4706_ = lean_string_append(v___x_4705_, v___x_4704_);
return v___x_4706_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13(void){
_start:
{
lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; 
v___x_4707_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4708_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__12);
v___x_4709_ = lean_string_append(v___x_4708_, v___x_4707_);
return v___x_4709_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16(void){
_start:
{
uint8_t v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; 
v___x_4713_ = 1;
v___x_4714_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__15));
v___x_4715_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4714_, v___x_4713_);
return v___x_4715_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17(void){
_start:
{
lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; 
v___x_4716_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__16);
v___x_4717_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__4);
v___x_4718_ = lean_string_append(v___x_4717_, v___x_4716_);
return v___x_4718_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18(void){
_start:
{
lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; 
v___x_4719_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4720_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__17);
v___x_4721_ = lean_string_append(v___x_4720_, v___x_4719_);
return v___x_4721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson(lean_object* v_json_4722_){
_start:
{
lean_object* v___x_4723_; lean_object* v___x_4724_; 
v___x_4723_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0));
lean_inc(v_json_4722_);
v___x_4724_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_json_4722_, v___x_4723_);
if (lean_obj_tag(v___x_4724_) == 0)
{
lean_object* v_a_4725_; lean_object* v___x_4727_; uint8_t v_isShared_4728_; uint8_t v_isSharedCheck_4734_; 
lean_dec(v_json_4722_);
v_a_4725_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4727_ = v___x_4724_;
v_isShared_4728_ = v_isSharedCheck_4734_;
goto v_resetjp_4726_;
}
else
{
lean_inc(v_a_4725_);
lean_dec(v___x_4724_);
v___x_4727_ = lean_box(0);
v_isShared_4728_ = v_isSharedCheck_4734_;
goto v_resetjp_4726_;
}
v_resetjp_4726_:
{
lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4732_; 
v___x_4729_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__8);
v___x_4730_ = lean_string_append(v___x_4729_, v_a_4725_);
lean_dec(v_a_4725_);
if (v_isShared_4728_ == 0)
{
lean_ctor_set(v___x_4727_, 0, v___x_4730_);
v___x_4732_ = v___x_4727_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v___x_4730_);
v___x_4732_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
return v___x_4732_;
}
}
}
else
{
if (lean_obj_tag(v___x_4724_) == 0)
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4742_; 
lean_dec(v_json_4722_);
v_a_4735_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4742_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4742_ == 0)
{
v___x_4737_ = v___x_4724_;
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4724_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4740_; 
if (v_isShared_4738_ == 0)
{
lean_ctor_set_tag(v___x_4737_, 0);
v___x_4740_ = v___x_4737_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v_a_4735_);
v___x_4740_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
return v___x_4740_;
}
}
}
else
{
lean_object* v_a_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; 
v_a_4743_ = lean_ctor_get(v___x_4724_, 0);
lean_inc(v_a_4743_);
lean_dec_ref_known(v___x_4724_, 1);
v___x_4744_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9));
lean_inc(v_json_4722_);
v___x_4745_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_json_4722_, v___x_4744_);
if (lean_obj_tag(v___x_4745_) == 0)
{
lean_object* v_a_4746_; lean_object* v___x_4748_; uint8_t v_isShared_4749_; uint8_t v_isSharedCheck_4755_; 
lean_dec(v_a_4743_);
lean_dec(v_json_4722_);
v_a_4746_ = lean_ctor_get(v___x_4745_, 0);
v_isSharedCheck_4755_ = !lean_is_exclusive(v___x_4745_);
if (v_isSharedCheck_4755_ == 0)
{
v___x_4748_ = v___x_4745_;
v_isShared_4749_ = v_isSharedCheck_4755_;
goto v_resetjp_4747_;
}
else
{
lean_inc(v_a_4746_);
lean_dec(v___x_4745_);
v___x_4748_ = lean_box(0);
v_isShared_4749_ = v_isSharedCheck_4755_;
goto v_resetjp_4747_;
}
v_resetjp_4747_:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4753_; 
v___x_4750_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__13);
v___x_4751_ = lean_string_append(v___x_4750_, v_a_4746_);
lean_dec(v_a_4746_);
if (v_isShared_4749_ == 0)
{
lean_ctor_set(v___x_4748_, 0, v___x_4751_);
v___x_4753_ = v___x_4748_;
goto v_reusejp_4752_;
}
else
{
lean_object* v_reuseFailAlloc_4754_; 
v_reuseFailAlloc_4754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4754_, 0, v___x_4751_);
v___x_4753_ = v_reuseFailAlloc_4754_;
goto v_reusejp_4752_;
}
v_reusejp_4752_:
{
return v___x_4753_;
}
}
}
else
{
if (lean_obj_tag(v___x_4745_) == 0)
{
lean_object* v_a_4756_; lean_object* v___x_4758_; uint8_t v_isShared_4759_; uint8_t v_isSharedCheck_4763_; 
lean_dec(v_a_4743_);
lean_dec(v_json_4722_);
v_a_4756_ = lean_ctor_get(v___x_4745_, 0);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___x_4745_);
if (v_isSharedCheck_4763_ == 0)
{
v___x_4758_ = v___x_4745_;
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
else
{
lean_inc(v_a_4756_);
lean_dec(v___x_4745_);
v___x_4758_ = lean_box(0);
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
v_resetjp_4757_:
{
lean_object* v___x_4761_; 
if (v_isShared_4759_ == 0)
{
lean_ctor_set_tag(v___x_4758_, 0);
v___x_4761_ = v___x_4758_;
goto v_reusejp_4760_;
}
else
{
lean_object* v_reuseFailAlloc_4762_; 
v_reuseFailAlloc_4762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4762_, 0, v_a_4756_);
v___x_4761_ = v_reuseFailAlloc_4762_;
goto v_reusejp_4760_;
}
v_reusejp_4760_:
{
return v___x_4761_;
}
}
}
else
{
lean_object* v_a_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; 
v_a_4764_ = lean_ctor_get(v___x_4745_, 0);
lean_inc(v_a_4764_);
lean_dec_ref_known(v___x_4745_, 1);
v___x_4765_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14));
v___x_4766_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(v_json_4722_, v___x_4765_);
if (lean_obj_tag(v___x_4766_) == 0)
{
lean_object* v_a_4767_; lean_object* v___x_4769_; uint8_t v_isShared_4770_; uint8_t v_isSharedCheck_4776_; 
lean_dec(v_a_4764_);
lean_dec(v_a_4743_);
v_a_4767_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4776_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4776_ == 0)
{
v___x_4769_ = v___x_4766_;
v_isShared_4770_ = v_isSharedCheck_4776_;
goto v_resetjp_4768_;
}
else
{
lean_inc(v_a_4767_);
lean_dec(v___x_4766_);
v___x_4769_ = lean_box(0);
v_isShared_4770_ = v_isSharedCheck_4776_;
goto v_resetjp_4768_;
}
v_resetjp_4768_:
{
lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4774_; 
v___x_4771_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__18);
v___x_4772_ = lean_string_append(v___x_4771_, v_a_4767_);
lean_dec(v_a_4767_);
if (v_isShared_4770_ == 0)
{
lean_ctor_set(v___x_4769_, 0, v___x_4772_);
v___x_4774_ = v___x_4769_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v___x_4772_);
v___x_4774_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
return v___x_4774_;
}
}
}
else
{
if (lean_obj_tag(v___x_4766_) == 0)
{
lean_object* v_a_4777_; lean_object* v___x_4779_; uint8_t v_isShared_4780_; uint8_t v_isSharedCheck_4784_; 
lean_dec(v_a_4764_);
lean_dec(v_a_4743_);
v_a_4777_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4784_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4784_ == 0)
{
v___x_4779_ = v___x_4766_;
v_isShared_4780_ = v_isSharedCheck_4784_;
goto v_resetjp_4778_;
}
else
{
lean_inc(v_a_4777_);
lean_dec(v___x_4766_);
v___x_4779_ = lean_box(0);
v_isShared_4780_ = v_isSharedCheck_4784_;
goto v_resetjp_4778_;
}
v_resetjp_4778_:
{
lean_object* v___x_4782_; 
if (v_isShared_4780_ == 0)
{
lean_ctor_set_tag(v___x_4779_, 0);
v___x_4782_ = v___x_4779_;
goto v_reusejp_4781_;
}
else
{
lean_object* v_reuseFailAlloc_4783_; 
v_reuseFailAlloc_4783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4783_, 0, v_a_4777_);
v___x_4782_ = v_reuseFailAlloc_4783_;
goto v_reusejp_4781_;
}
v_reusejp_4781_:
{
return v___x_4782_;
}
}
}
else
{
lean_object* v_a_4785_; lean_object* v___x_4787_; uint8_t v_isShared_4788_; uint8_t v_isSharedCheck_4794_; 
v_a_4785_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4794_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4794_ == 0)
{
v___x_4787_ = v___x_4766_;
v_isShared_4788_ = v_isSharedCheck_4794_;
goto v_resetjp_4786_;
}
else
{
lean_inc(v_a_4785_);
lean_dec(v___x_4766_);
v___x_4787_ = lean_box(0);
v_isShared_4788_ = v_isSharedCheck_4794_;
goto v_resetjp_4786_;
}
v_resetjp_4786_:
{
lean_object* v___x_4789_; uint8_t v___x_4790_; lean_object* v___x_4792_; 
v___x_4789_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4789_, 0, v_a_4743_);
lean_ctor_set(v___x_4789_, 1, v_a_4764_);
v___x_4790_ = lean_unbox(v_a_4785_);
lean_dec(v_a_4785_);
lean_ctor_set_uint8(v___x_4789_, sizeof(void*)*2, v___x_4790_);
if (v_isShared_4788_ == 0)
{
lean_ctor_set(v___x_4787_, 0, v___x_4789_);
v___x_4792_ = v___x_4787_;
goto v_reusejp_4791_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v___x_4789_);
v___x_4792_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4791_;
}
v_reusejp_4791_:
{
return v___x_4792_;
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
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanIdentifier_toJson(lean_object* v_x_4797_){
_start:
{
lean_object* v_module_4798_; lean_object* v_decl_4799_; uint8_t v_isExactMatch_4800_; lean_object* v___x_4801_; uint8_t v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; 
v_module_4798_ = lean_ctor_get(v_x_4797_, 0);
lean_inc(v_module_4798_);
v_decl_4799_ = lean_ctor_get(v_x_4797_, 1);
lean_inc(v_decl_4799_);
v_isExactMatch_4800_ = lean_ctor_get_uint8(v_x_4797_, sizeof(void*)*2);
lean_dec_ref(v_x_4797_);
v___x_4801_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0));
v___x_4802_ = 1;
v___x_4803_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_4798_, v___x_4802_);
v___x_4804_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4804_, 0, v___x_4803_);
v___x_4805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4805_, 0, v___x_4801_);
lean_ctor_set(v___x_4805_, 1, v___x_4804_);
v___x_4806_ = lean_box(0);
v___x_4807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4805_);
lean_ctor_set(v___x_4807_, 1, v___x_4806_);
v___x_4808_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9));
v___x_4809_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_4799_, v___x_4802_);
v___x_4810_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4810_, 0, v___x_4809_);
v___x_4811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4811_, 0, v___x_4808_);
lean_ctor_set(v___x_4811_, 1, v___x_4810_);
v___x_4812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4812_, 0, v___x_4811_);
lean_ctor_set(v___x_4812_, 1, v___x_4806_);
v___x_4813_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__14));
v___x_4814_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4814_, 0, v_isExactMatch_4800_);
v___x_4815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4815_, 0, v___x_4813_);
lean_ctor_set(v___x_4815_, 1, v___x_4814_);
v___x_4816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4816_, 0, v___x_4815_);
lean_ctor_set(v___x_4816_, 1, v___x_4806_);
v___x_4817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4817_, 0, v___x_4816_);
lean_ctor_set(v___x_4817_, 1, v___x_4806_);
v___x_4818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4818_, 0, v___x_4812_);
lean_ctor_set(v___x_4818_, 1, v___x_4817_);
v___x_4819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4819_, 0, v___x_4807_);
lean_ctor_set(v___x_4819_, 1, v___x_4818_);
v___x_4820_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_4821_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_4819_, v___x_4820_);
v___x_4822_ = l_Lean_Json_mkObj(v___x_4821_);
lean_dec(v___x_4821_);
return v___x_4822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2(size_t v_sz_4825_, size_t v_i_4826_, lean_object* v_bs_4827_){
_start:
{
uint8_t v___x_4828_; 
v___x_4828_ = lean_usize_dec_lt(v_i_4826_, v_sz_4825_);
if (v___x_4828_ == 0)
{
lean_object* v___x_4829_; 
v___x_4829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4829_, 0, v_bs_4827_);
return v___x_4829_;
}
else
{
lean_object* v_v_4830_; lean_object* v___x_4831_; 
v_v_4830_ = lean_array_uget_borrowed(v_bs_4827_, v_i_4826_);
lean_inc(v_v_4830_);
v___x_4831_ = l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson(v_v_4830_);
if (lean_obj_tag(v___x_4831_) == 0)
{
lean_object* v_a_4832_; lean_object* v___x_4834_; uint8_t v_isShared_4835_; uint8_t v_isSharedCheck_4839_; 
lean_dec_ref(v_bs_4827_);
v_a_4832_ = lean_ctor_get(v___x_4831_, 0);
v_isSharedCheck_4839_ = !lean_is_exclusive(v___x_4831_);
if (v_isSharedCheck_4839_ == 0)
{
v___x_4834_ = v___x_4831_;
v_isShared_4835_ = v_isSharedCheck_4839_;
goto v_resetjp_4833_;
}
else
{
lean_inc(v_a_4832_);
lean_dec(v___x_4831_);
v___x_4834_ = lean_box(0);
v_isShared_4835_ = v_isSharedCheck_4839_;
goto v_resetjp_4833_;
}
v_resetjp_4833_:
{
lean_object* v___x_4837_; 
if (v_isShared_4835_ == 0)
{
v___x_4837_ = v___x_4834_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v_a_4832_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
return v___x_4837_;
}
}
}
else
{
lean_object* v_a_4840_; lean_object* v___x_4841_; lean_object* v_bs_x27_4842_; size_t v___x_4843_; size_t v___x_4844_; lean_object* v___x_4845_; 
v_a_4840_ = lean_ctor_get(v___x_4831_, 0);
lean_inc(v_a_4840_);
lean_dec_ref_known(v___x_4831_, 1);
v___x_4841_ = lean_unsigned_to_nat(0u);
v_bs_x27_4842_ = lean_array_uset(v_bs_4827_, v_i_4826_, v___x_4841_);
v___x_4843_ = ((size_t)1ULL);
v___x_4844_ = lean_usize_add(v_i_4826_, v___x_4843_);
v___x_4845_ = lean_array_uset(v_bs_x27_4842_, v_i_4826_, v_a_4840_);
v_i_4826_ = v___x_4844_;
v_bs_4827_ = v___x_4845_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_4847_, lean_object* v_i_4848_, lean_object* v_bs_4849_){
_start:
{
size_t v_sz_boxed_4850_; size_t v_i_boxed_4851_; lean_object* v_res_4852_; 
v_sz_boxed_4850_ = lean_unbox_usize(v_sz_4847_);
lean_dec(v_sz_4847_);
v_i_boxed_4851_ = lean_unbox_usize(v_i_4848_);
lean_dec(v_i_4848_);
v_res_4852_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_4850_, v_i_boxed_4851_, v_bs_4849_);
return v_res_4852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1(lean_object* v_x_4853_){
_start:
{
if (lean_obj_tag(v_x_4853_) == 4)
{
lean_object* v_elems_4854_; size_t v_sz_4855_; size_t v___x_4856_; lean_object* v___x_4857_; 
v_elems_4854_ = lean_ctor_get(v_x_4853_, 0);
lean_inc_ref(v_elems_4854_);
lean_dec_ref_known(v_x_4853_, 1);
v_sz_4855_ = lean_array_size(v_elems_4854_);
v___x_4856_ = ((size_t)0ULL);
v___x_4857_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1_spec__2(v_sz_4855_, v___x_4856_, v_elems_4854_);
return v___x_4857_;
}
else
{
lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; 
v___x_4858_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_4859_ = lean_unsigned_to_nat(80u);
v___x_4860_ = l_Lean_Json_pretty(v_x_4853_, v___x_4859_);
v___x_4861_ = lean_string_append(v___x_4858_, v___x_4860_);
lean_dec_ref(v___x_4860_);
v___x_4862_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_4863_ = lean_string_append(v___x_4861_, v___x_4862_);
v___x_4864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4864_, 0, v___x_4863_);
return v___x_4864_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2(size_t v_sz_4865_, size_t v_i_4866_, lean_object* v_bs_4867_){
_start:
{
uint8_t v___x_4868_; 
v___x_4868_ = lean_usize_dec_lt(v_i_4866_, v_sz_4865_);
if (v___x_4868_ == 0)
{
lean_object* v___x_4869_; 
v___x_4869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4869_, 0, v_bs_4867_);
return v___x_4869_;
}
else
{
lean_object* v_v_4870_; lean_object* v___x_4871_; 
v_v_4870_ = lean_array_uget_borrowed(v_bs_4867_, v_i_4866_);
lean_inc(v_v_4870_);
v___x_4871_ = l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__1(v_v_4870_);
if (lean_obj_tag(v___x_4871_) == 0)
{
lean_object* v_a_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4879_; 
lean_dec_ref(v_bs_4867_);
v_a_4872_ = lean_ctor_get(v___x_4871_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v___x_4871_);
if (v_isSharedCheck_4879_ == 0)
{
v___x_4874_ = v___x_4871_;
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_a_4872_);
lean_dec(v___x_4871_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v___x_4877_; 
if (v_isShared_4875_ == 0)
{
v___x_4877_ = v___x_4874_;
goto v_reusejp_4876_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v_a_4872_);
v___x_4877_ = v_reuseFailAlloc_4878_;
goto v_reusejp_4876_;
}
v_reusejp_4876_:
{
return v___x_4877_;
}
}
}
else
{
lean_object* v_a_4880_; lean_object* v___x_4881_; lean_object* v_bs_x27_4882_; size_t v___x_4883_; size_t v___x_4884_; lean_object* v___x_4885_; 
v_a_4880_ = lean_ctor_get(v___x_4871_, 0);
lean_inc(v_a_4880_);
lean_dec_ref_known(v___x_4871_, 1);
v___x_4881_ = lean_unsigned_to_nat(0u);
v_bs_x27_4882_ = lean_array_uset(v_bs_4867_, v_i_4866_, v___x_4881_);
v___x_4883_ = ((size_t)1ULL);
v___x_4884_ = lean_usize_add(v_i_4866_, v___x_4883_);
v___x_4885_ = lean_array_uset(v_bs_x27_4882_, v_i_4866_, v_a_4880_);
v_i_4866_ = v___x_4884_;
v_bs_4867_ = v___x_4885_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2___boxed(lean_object* v_sz_4887_, lean_object* v_i_4888_, lean_object* v_bs_4889_){
_start:
{
size_t v_sz_boxed_4890_; size_t v_i_boxed_4891_; lean_object* v_res_4892_; 
v_sz_boxed_4890_ = lean_unbox_usize(v_sz_4887_);
lean_dec(v_sz_4887_);
v_i_boxed_4891_ = lean_unbox_usize(v_i_4888_);
lean_dec(v_i_4888_);
v_res_4892_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2(v_sz_boxed_4890_, v_i_boxed_4891_, v_bs_4889_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0(lean_object* v_x_4893_){
_start:
{
if (lean_obj_tag(v_x_4893_) == 4)
{
lean_object* v_elems_4894_; size_t v_sz_4895_; size_t v___x_4896_; lean_object* v___x_4897_; 
v_elems_4894_ = lean_ctor_get(v_x_4893_, 0);
lean_inc_ref(v_elems_4894_);
lean_dec_ref_known(v_x_4893_, 1);
v_sz_4895_ = lean_array_size(v_elems_4894_);
v___x_4896_ = ((size_t)0ULL);
v___x_4897_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0_spec__2(v_sz_4895_, v___x_4896_, v_elems_4894_);
return v___x_4897_;
}
else
{
lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; 
v___x_4898_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__0));
v___x_4899_ = lean_unsigned_to_nat(80u);
v___x_4900_ = l_Lean_Json_pretty(v_x_4893_, v___x_4899_);
v___x_4901_ = lean_string_append(v___x_4898_, v___x_4900_);
lean_dec_ref(v___x_4900_);
v___x_4902_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__2_spec__2___closed__1));
v___x_4903_ = lean_string_append(v___x_4901_, v___x_4902_);
v___x_4904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4904_, 0, v___x_4903_);
return v___x_4904_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0(lean_object* v_j_4905_, lean_object* v_k_4906_){
_start:
{
lean_object* v___x_4907_; lean_object* v___x_4908_; 
v___x_4907_ = l_Lean_Json_getObjValD(v_j_4905_, v_k_4906_);
v___x_4908_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0_spec__0(v___x_4907_);
return v___x_4908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0___boxed(lean_object* v_j_4909_, lean_object* v_k_4910_){
_start:
{
lean_object* v_res_4911_; 
v_res_4911_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0(v_j_4909_, v_k_4910_);
lean_dec_ref(v_k_4910_);
return v_res_4911_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3(void){
_start:
{
uint8_t v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; 
v___x_4918_ = 1;
v___x_4919_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__2));
v___x_4920_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4919_, v___x_4918_);
return v___x_4920_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4(void){
_start:
{
lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; 
v___x_4921_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_4922_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__3);
v___x_4923_ = lean_string_append(v___x_4922_, v___x_4921_);
return v___x_4923_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6(void){
_start:
{
uint8_t v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; 
v___x_4926_ = 1;
v___x_4927_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__5));
v___x_4928_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_4927_, v___x_4926_);
return v___x_4928_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7(void){
_start:
{
lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; 
v___x_4929_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__6);
v___x_4930_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__4);
v___x_4931_ = lean_string_append(v___x_4930_, v___x_4929_);
return v___x_4931_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8(void){
_start:
{
lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; 
v___x_4932_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_4933_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__7);
v___x_4934_ = lean_string_append(v___x_4933_, v___x_4932_);
return v___x_4934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson(lean_object* v_json_4935_){
_start:
{
lean_object* v___x_4936_; lean_object* v___x_4937_; 
v___x_4936_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0));
v___x_4937_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson_spec__0(v_json_4935_, v___x_4936_);
if (lean_obj_tag(v___x_4937_) == 0)
{
lean_object* v_a_4938_; lean_object* v___x_4940_; uint8_t v_isShared_4941_; uint8_t v_isSharedCheck_4947_; 
v_a_4938_ = lean_ctor_get(v___x_4937_, 0);
v_isSharedCheck_4947_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_4947_ == 0)
{
v___x_4940_ = v___x_4937_;
v_isShared_4941_ = v_isSharedCheck_4947_;
goto v_resetjp_4939_;
}
else
{
lean_inc(v_a_4938_);
lean_dec(v___x_4937_);
v___x_4940_ = lean_box(0);
v_isShared_4941_ = v_isSharedCheck_4947_;
goto v_resetjp_4939_;
}
v_resetjp_4939_:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4945_; 
v___x_4942_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__8);
v___x_4943_ = lean_string_append(v___x_4942_, v_a_4938_);
lean_dec(v_a_4938_);
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 0, v___x_4943_);
v___x_4945_ = v___x_4940_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v___x_4943_);
v___x_4945_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
return v___x_4945_;
}
}
}
else
{
if (lean_obj_tag(v___x_4937_) == 0)
{
lean_object* v_a_4948_; lean_object* v___x_4950_; uint8_t v_isShared_4951_; uint8_t v_isSharedCheck_4955_; 
v_a_4948_ = lean_ctor_get(v___x_4937_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4950_ = v___x_4937_;
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
else
{
lean_inc(v_a_4948_);
lean_dec(v___x_4937_);
v___x_4950_ = lean_box(0);
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
v_resetjp_4949_:
{
lean_object* v___x_4953_; 
if (v_isShared_4951_ == 0)
{
lean_ctor_set_tag(v___x_4950_, 0);
v___x_4953_ = v___x_4950_;
goto v_reusejp_4952_;
}
else
{
lean_object* v_reuseFailAlloc_4954_; 
v_reuseFailAlloc_4954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4954_, 0, v_a_4948_);
v___x_4953_ = v_reuseFailAlloc_4954_;
goto v_reusejp_4952_;
}
v_reusejp_4952_:
{
return v___x_4953_;
}
}
}
else
{
lean_object* v_a_4956_; lean_object* v___x_4958_; uint8_t v_isShared_4959_; uint8_t v_isSharedCheck_4963_; 
v_a_4956_ = lean_ctor_get(v___x_4937_, 0);
v_isSharedCheck_4963_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4958_ = v___x_4937_;
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
else
{
lean_inc(v_a_4956_);
lean_dec(v___x_4937_);
v___x_4958_ = lean_box(0);
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
v_resetjp_4957_:
{
lean_object* v___x_4961_; 
if (v_isShared_4959_ == 0)
{
v___x_4961_ = v___x_4958_;
goto v_reusejp_4960_;
}
else
{
lean_object* v_reuseFailAlloc_4962_; 
v_reuseFailAlloc_4962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4962_, 0, v_a_4956_);
v___x_4961_ = v_reuseFailAlloc_4962_;
goto v_reusejp_4960_;
}
v_reusejp_4960_:
{
return v___x_4961_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1(size_t v_sz_4966_, size_t v_i_4967_, lean_object* v_bs_4968_){
_start:
{
uint8_t v___x_4969_; 
v___x_4969_ = lean_usize_dec_lt(v_i_4967_, v_sz_4966_);
if (v___x_4969_ == 0)
{
return v_bs_4968_;
}
else
{
lean_object* v_v_4970_; lean_object* v___x_4971_; lean_object* v_bs_x27_4972_; lean_object* v___x_4973_; size_t v___x_4974_; size_t v___x_4975_; lean_object* v___x_4976_; 
v_v_4970_ = lean_array_uget(v_bs_4968_, v_i_4967_);
v___x_4971_ = lean_unsigned_to_nat(0u);
v_bs_x27_4972_ = lean_array_uset(v_bs_4968_, v_i_4967_, v___x_4971_);
v___x_4973_ = l_Lean_Lsp_instToJsonLeanIdentifier_toJson(v_v_4970_);
v___x_4974_ = ((size_t)1ULL);
v___x_4975_ = lean_usize_add(v_i_4967_, v___x_4974_);
v___x_4976_ = lean_array_uset(v_bs_x27_4972_, v_i_4967_, v___x_4973_);
v_i_4967_ = v___x_4975_;
v_bs_4968_ = v___x_4976_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4978_, lean_object* v_i_4979_, lean_object* v_bs_4980_){
_start:
{
size_t v_sz_boxed_4981_; size_t v_i_boxed_4982_; lean_object* v_res_4983_; 
v_sz_boxed_4981_ = lean_unbox_usize(v_sz_4978_);
lean_dec(v_sz_4978_);
v_i_boxed_4982_ = lean_unbox_usize(v_i_4979_);
lean_dec(v_i_4979_);
v_res_4983_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1(v_sz_boxed_4981_, v_i_boxed_4982_, v_bs_4980_);
return v_res_4983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0(lean_object* v_a_4984_){
_start:
{
size_t v_sz_4985_; size_t v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; 
v_sz_4985_ = lean_array_size(v_a_4984_);
v___x_4986_ = ((size_t)0ULL);
v___x_4987_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0_spec__1(v_sz_4985_, v___x_4986_, v_a_4984_);
v___x_4988_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4988_, 0, v___x_4987_);
return v___x_4988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1(size_t v_sz_4989_, size_t v_i_4990_, lean_object* v_bs_4991_){
_start:
{
uint8_t v___x_4992_; 
v___x_4992_ = lean_usize_dec_lt(v_i_4990_, v_sz_4989_);
if (v___x_4992_ == 0)
{
return v_bs_4991_;
}
else
{
lean_object* v_v_4993_; lean_object* v___x_4994_; lean_object* v_bs_x27_4995_; lean_object* v___x_4996_; size_t v___x_4997_; size_t v___x_4998_; lean_object* v___x_4999_; 
v_v_4993_ = lean_array_uget(v_bs_4991_, v_i_4990_);
v___x_4994_ = lean_unsigned_to_nat(0u);
v_bs_x27_4995_ = lean_array_uset(v_bs_4991_, v_i_4990_, v___x_4994_);
v___x_4996_ = l_Lean_Array_toJson___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__0(v_v_4993_);
v___x_4997_ = ((size_t)1ULL);
v___x_4998_ = lean_usize_add(v_i_4990_, v___x_4997_);
v___x_4999_ = lean_array_uset(v_bs_x27_4995_, v_i_4990_, v___x_4996_);
v_i_4990_ = v___x_4998_;
v_bs_4991_ = v___x_4999_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1___boxed(lean_object* v_sz_5001_, lean_object* v_i_5002_, lean_object* v_bs_5003_){
_start:
{
size_t v_sz_boxed_5004_; size_t v_i_boxed_5005_; lean_object* v_res_5006_; 
v_sz_boxed_5004_ = lean_unbox_usize(v_sz_5001_);
lean_dec(v_sz_5001_);
v_i_boxed_5005_ = lean_unbox_usize(v_i_5002_);
lean_dec(v_i_5002_);
v_res_5006_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1(v_sz_boxed_5004_, v_i_boxed_5005_, v_bs_5003_);
return v_res_5006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0(lean_object* v_a_5007_){
_start:
{
size_t v_sz_5008_; size_t v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; 
v_sz_5008_ = lean_array_size(v_a_5007_);
v___x_5009_ = ((size_t)0ULL);
v___x_5010_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0_spec__1(v_sz_5008_, v___x_5009_, v_a_5007_);
v___x_5011_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5011_, 0, v___x_5010_);
return v___x_5011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson(lean_object* v_x_5012_){
_start:
{
lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; 
v___x_5013_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanQueryModuleResponse_fromJson___closed__0));
v___x_5014_ = l_Lean_Array_toJson___at___00Lean_Lsp_instToJsonLeanQueryModuleResponse_toJson_spec__0(v_x_5012_);
v___x_5015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5015_, 0, v___x_5013_);
lean_ctor_set(v___x_5015_, 1, v___x_5014_);
v___x_5016_ = lean_box(0);
v___x_5017_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5017_, 0, v___x_5015_);
lean_ctor_set(v___x_5017_, 1, v___x_5016_);
v___x_5018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5018_, 0, v___x_5017_);
lean_ctor_set(v___x_5018_, 1, v___x_5016_);
v___x_5019_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_5020_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_5018_, v___x_5019_);
v___x_5021_ = l_Lean_Json_mkObj(v___x_5020_);
lean_dec(v___x_5020_);
return v___x_5021_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2(void){
_start:
{
uint8_t v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; 
v___x_5033_ = 1;
v___x_5034_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__1));
v___x_5035_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5034_, v___x_5033_);
return v___x_5035_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3(void){
_start:
{
lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; 
v___x_5036_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_5037_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__2);
v___x_5038_ = lean_string_append(v___x_5037_, v___x_5036_);
return v___x_5038_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4(void){
_start:
{
lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; 
v___x_5039_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__6);
v___x_5040_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3);
v___x_5041_ = lean_string_append(v___x_5040_, v___x_5039_);
return v___x_5041_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5(void){
_start:
{
lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; 
v___x_5042_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5043_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__4);
v___x_5044_ = lean_string_append(v___x_5043_, v___x_5042_);
return v___x_5044_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6(void){
_start:
{
lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; 
v___x_5045_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11, &l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11_once, _init_l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__11);
v___x_5046_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__3);
v___x_5047_ = lean_string_append(v___x_5046_, v___x_5045_);
return v___x_5047_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7(void){
_start:
{
lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; 
v___x_5048_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5049_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__6);
v___x_5050_ = lean_string_append(v___x_5049_, v___x_5048_);
return v___x_5050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson(lean_object* v_json_5051_){
_start:
{
lean_object* v___x_5052_; lean_object* v___x_5053_; 
v___x_5052_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0));
lean_inc(v_json_5051_);
v___x_5053_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_json_5051_, v___x_5052_);
if (lean_obj_tag(v___x_5053_) == 0)
{
lean_object* v_a_5054_; lean_object* v___x_5056_; uint8_t v_isShared_5057_; uint8_t v_isSharedCheck_5063_; 
lean_dec(v_json_5051_);
v_a_5054_ = lean_ctor_get(v___x_5053_, 0);
v_isSharedCheck_5063_ = !lean_is_exclusive(v___x_5053_);
if (v_isSharedCheck_5063_ == 0)
{
v___x_5056_ = v___x_5053_;
v_isShared_5057_ = v_isSharedCheck_5063_;
goto v_resetjp_5055_;
}
else
{
lean_inc(v_a_5054_);
lean_dec(v___x_5053_);
v___x_5056_ = lean_box(0);
v_isShared_5057_ = v_isSharedCheck_5063_;
goto v_resetjp_5055_;
}
v_resetjp_5055_:
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5061_; 
v___x_5058_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__5);
v___x_5059_ = lean_string_append(v___x_5058_, v_a_5054_);
lean_dec(v_a_5054_);
if (v_isShared_5057_ == 0)
{
lean_ctor_set(v___x_5056_, 0, v___x_5059_);
v___x_5061_ = v___x_5056_;
goto v_reusejp_5060_;
}
else
{
lean_object* v_reuseFailAlloc_5062_; 
v_reuseFailAlloc_5062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5062_, 0, v___x_5059_);
v___x_5061_ = v_reuseFailAlloc_5062_;
goto v_reusejp_5060_;
}
v_reusejp_5060_:
{
return v___x_5061_;
}
}
}
else
{
if (lean_obj_tag(v___x_5053_) == 0)
{
lean_object* v_a_5064_; lean_object* v___x_5066_; uint8_t v_isShared_5067_; uint8_t v_isSharedCheck_5071_; 
lean_dec(v_json_5051_);
v_a_5064_ = lean_ctor_get(v___x_5053_, 0);
v_isSharedCheck_5071_ = !lean_is_exclusive(v___x_5053_);
if (v_isSharedCheck_5071_ == 0)
{
v___x_5066_ = v___x_5053_;
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
else
{
lean_inc(v_a_5064_);
lean_dec(v___x_5053_);
v___x_5066_ = lean_box(0);
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
v_resetjp_5065_:
{
lean_object* v___x_5069_; 
if (v_isShared_5067_ == 0)
{
lean_ctor_set_tag(v___x_5066_, 0);
v___x_5069_ = v___x_5066_;
goto v_reusejp_5068_;
}
else
{
lean_object* v_reuseFailAlloc_5070_; 
v_reuseFailAlloc_5070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5070_, 0, v_a_5064_);
v___x_5069_ = v_reuseFailAlloc_5070_;
goto v_reusejp_5068_;
}
v_reusejp_5068_:
{
return v___x_5069_;
}
}
}
else
{
lean_object* v_a_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; 
v_a_5072_ = lean_ctor_get(v___x_5053_, 0);
lean_inc(v_a_5072_);
lean_dec_ref_known(v___x_5053_, 1);
v___x_5073_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9));
v___x_5074_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanIdentifier_fromJson_spec__0(v_json_5051_, v___x_5073_);
if (lean_obj_tag(v___x_5074_) == 0)
{
lean_object* v_a_5075_; lean_object* v___x_5077_; uint8_t v_isShared_5078_; uint8_t v_isSharedCheck_5084_; 
lean_dec(v_a_5072_);
v_a_5075_ = lean_ctor_get(v___x_5074_, 0);
v_isSharedCheck_5084_ = !lean_is_exclusive(v___x_5074_);
if (v_isSharedCheck_5084_ == 0)
{
v___x_5077_ = v___x_5074_;
v_isShared_5078_ = v_isSharedCheck_5084_;
goto v_resetjp_5076_;
}
else
{
lean_inc(v_a_5075_);
lean_dec(v___x_5074_);
v___x_5077_ = lean_box(0);
v_isShared_5078_ = v_isSharedCheck_5084_;
goto v_resetjp_5076_;
}
v_resetjp_5076_:
{
lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5082_; 
v___x_5079_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson___closed__7);
v___x_5080_ = lean_string_append(v___x_5079_, v_a_5075_);
lean_dec(v_a_5075_);
if (v_isShared_5078_ == 0)
{
lean_ctor_set(v___x_5077_, 0, v___x_5080_);
v___x_5082_ = v___x_5077_;
goto v_reusejp_5081_;
}
else
{
lean_object* v_reuseFailAlloc_5083_; 
v_reuseFailAlloc_5083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5083_, 0, v___x_5080_);
v___x_5082_ = v_reuseFailAlloc_5083_;
goto v_reusejp_5081_;
}
v_reusejp_5081_:
{
return v___x_5082_;
}
}
}
else
{
if (lean_obj_tag(v___x_5074_) == 0)
{
lean_object* v_a_5085_; lean_object* v___x_5087_; uint8_t v_isShared_5088_; uint8_t v_isSharedCheck_5092_; 
lean_dec(v_a_5072_);
v_a_5085_ = lean_ctor_get(v___x_5074_, 0);
v_isSharedCheck_5092_ = !lean_is_exclusive(v___x_5074_);
if (v_isSharedCheck_5092_ == 0)
{
v___x_5087_ = v___x_5074_;
v_isShared_5088_ = v_isSharedCheck_5092_;
goto v_resetjp_5086_;
}
else
{
lean_inc(v_a_5085_);
lean_dec(v___x_5074_);
v___x_5087_ = lean_box(0);
v_isShared_5088_ = v_isSharedCheck_5092_;
goto v_resetjp_5086_;
}
v_resetjp_5086_:
{
lean_object* v___x_5090_; 
if (v_isShared_5088_ == 0)
{
lean_ctor_set_tag(v___x_5087_, 0);
v___x_5090_ = v___x_5087_;
goto v_reusejp_5089_;
}
else
{
lean_object* v_reuseFailAlloc_5091_; 
v_reuseFailAlloc_5091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5091_, 0, v_a_5085_);
v___x_5090_ = v_reuseFailAlloc_5091_;
goto v_reusejp_5089_;
}
v_reusejp_5089_:
{
return v___x_5090_;
}
}
}
else
{
lean_object* v_a_5093_; lean_object* v___x_5095_; uint8_t v_isShared_5096_; uint8_t v_isSharedCheck_5101_; 
v_a_5093_ = lean_ctor_get(v___x_5074_, 0);
v_isSharedCheck_5101_ = !lean_is_exclusive(v___x_5074_);
if (v_isSharedCheck_5101_ == 0)
{
v___x_5095_ = v___x_5074_;
v_isShared_5096_ = v_isSharedCheck_5101_;
goto v_resetjp_5094_;
}
else
{
lean_inc(v_a_5093_);
lean_dec(v___x_5074_);
v___x_5095_ = lean_box(0);
v_isShared_5096_ = v_isSharedCheck_5101_;
goto v_resetjp_5094_;
}
v_resetjp_5094_:
{
lean_object* v___x_5097_; lean_object* v___x_5099_; 
v___x_5097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5097_, 0, v_a_5072_);
lean_ctor_set(v___x_5097_, 1, v_a_5093_);
if (v_isShared_5096_ == 0)
{
lean_ctor_set(v___x_5095_, 0, v___x_5097_);
v___x_5099_ = v___x_5095_;
goto v_reusejp_5098_;
}
else
{
lean_object* v_reuseFailAlloc_5100_; 
v_reuseFailAlloc_5100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5100_, 0, v___x_5097_);
v___x_5099_ = v_reuseFailAlloc_5100_;
goto v_reusejp_5098_;
}
v_reusejp_5098_:
{
return v___x_5099_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanDeclIdent_toJson(lean_object* v_x_5104_){
_start:
{
lean_object* v_module_5105_; lean_object* v_decl_5106_; lean_object* v___x_5108_; uint8_t v_isShared_5109_; uint8_t v_isSharedCheck_5129_; 
v_module_5105_ = lean_ctor_get(v_x_5104_, 0);
v_decl_5106_ = lean_ctor_get(v_x_5104_, 1);
v_isSharedCheck_5129_ = !lean_is_exclusive(v_x_5104_);
if (v_isSharedCheck_5129_ == 0)
{
v___x_5108_ = v_x_5104_;
v_isShared_5109_ = v_isSharedCheck_5129_;
goto v_resetjp_5107_;
}
else
{
lean_inc(v_decl_5106_);
lean_inc(v_module_5105_);
lean_dec(v_x_5104_);
v___x_5108_ = lean_box(0);
v_isShared_5109_ = v_isSharedCheck_5129_;
goto v_resetjp_5107_;
}
v_resetjp_5107_:
{
lean_object* v___x_5110_; uint8_t v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5115_; 
v___x_5110_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__0));
v___x_5111_ = 1;
v___x_5112_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_5105_, v___x_5111_);
v___x_5113_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5113_, 0, v___x_5112_);
if (v_isShared_5109_ == 0)
{
lean_ctor_set(v___x_5108_, 1, v___x_5113_);
lean_ctor_set(v___x_5108_, 0, v___x_5110_);
v___x_5115_ = v___x_5108_;
goto v_reusejp_5114_;
}
else
{
lean_object* v_reuseFailAlloc_5128_; 
v_reuseFailAlloc_5128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5128_, 0, v___x_5110_);
lean_ctor_set(v_reuseFailAlloc_5128_, 1, v___x_5113_);
v___x_5115_ = v_reuseFailAlloc_5128_;
goto v_reusejp_5114_;
}
v_reusejp_5114_:
{
lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; 
v___x_5116_ = lean_box(0);
v___x_5117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5117_, 0, v___x_5115_);
lean_ctor_set(v___x_5117_, 1, v___x_5116_);
v___x_5118_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanIdentifier_fromJson___closed__9));
v___x_5119_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_5106_, v___x_5111_);
v___x_5120_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5120_, 0, v___x_5119_);
v___x_5121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5121_, 0, v___x_5118_);
lean_ctor_set(v___x_5121_, 1, v___x_5120_);
v___x_5122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5122_, 0, v___x_5121_);
lean_ctor_set(v___x_5122_, 1, v___x_5116_);
v___x_5123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5123_, 0, v___x_5122_);
lean_ctor_set(v___x_5123_, 1, v___x_5116_);
v___x_5124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5124_, 0, v___x_5117_);
lean_ctor_set(v___x_5124_, 1, v___x_5123_);
v___x_5125_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_5126_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_5124_, v___x_5125_);
v___x_5127_ = l_Lean_Json_mkObj(v___x_5126_);
lean_dec(v___x_5126_);
return v___x_5127_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(lean_object* v_j_5132_, lean_object* v_k_5133_){
_start:
{
lean_object* v___x_5134_; lean_object* v___x_5135_; 
v___x_5134_ = l_Lean_Json_getObjValD(v_j_5132_, v_k_5133_);
v___x_5135_ = l_Lean_Lsp_instFromJsonRange_fromJson(v___x_5134_);
return v___x_5135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1___boxed(lean_object* v_j_5136_, lean_object* v_k_5137_){
_start:
{
lean_object* v_res_5138_; 
v_res_5138_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(v_j_5136_, v_k_5137_);
lean_dec_ref(v_k_5137_);
return v_res_5138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3(lean_object* v_x_5141_){
_start:
{
if (lean_obj_tag(v_x_5141_) == 0)
{
lean_object* v___x_5142_; 
v___x_5142_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3___closed__0));
return v___x_5142_;
}
else
{
lean_object* v___x_5143_; 
v___x_5143_ = l_Lean_Lsp_instFromJsonLeanDeclIdent_fromJson(v_x_5141_);
if (lean_obj_tag(v___x_5143_) == 0)
{
lean_object* v_a_5144_; lean_object* v___x_5146_; uint8_t v_isShared_5147_; uint8_t v_isSharedCheck_5151_; 
v_a_5144_ = lean_ctor_get(v___x_5143_, 0);
v_isSharedCheck_5151_ = !lean_is_exclusive(v___x_5143_);
if (v_isSharedCheck_5151_ == 0)
{
v___x_5146_ = v___x_5143_;
v_isShared_5147_ = v_isSharedCheck_5151_;
goto v_resetjp_5145_;
}
else
{
lean_inc(v_a_5144_);
lean_dec(v___x_5143_);
v___x_5146_ = lean_box(0);
v_isShared_5147_ = v_isSharedCheck_5151_;
goto v_resetjp_5145_;
}
v_resetjp_5145_:
{
lean_object* v___x_5149_; 
if (v_isShared_5147_ == 0)
{
v___x_5149_ = v___x_5146_;
goto v_reusejp_5148_;
}
else
{
lean_object* v_reuseFailAlloc_5150_; 
v_reuseFailAlloc_5150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5150_, 0, v_a_5144_);
v___x_5149_ = v_reuseFailAlloc_5150_;
goto v_reusejp_5148_;
}
v_reusejp_5148_:
{
return v___x_5149_;
}
}
}
else
{
lean_object* v_a_5152_; lean_object* v___x_5154_; uint8_t v_isShared_5155_; uint8_t v_isSharedCheck_5160_; 
v_a_5152_ = lean_ctor_get(v___x_5143_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___x_5143_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5154_ = v___x_5143_;
v_isShared_5155_ = v_isSharedCheck_5160_;
goto v_resetjp_5153_;
}
else
{
lean_inc(v_a_5152_);
lean_dec(v___x_5143_);
v___x_5154_ = lean_box(0);
v_isShared_5155_ = v_isSharedCheck_5160_;
goto v_resetjp_5153_;
}
v_resetjp_5153_:
{
lean_object* v___x_5156_; lean_object* v___x_5158_; 
v___x_5156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5156_, 0, v_a_5152_);
if (v_isShared_5155_ == 0)
{
lean_ctor_set(v___x_5154_, 0, v___x_5156_);
v___x_5158_ = v___x_5154_;
goto v_reusejp_5157_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v___x_5156_);
v___x_5158_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5157_;
}
v_reusejp_5157_:
{
return v___x_5158_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2(lean_object* v_j_5161_, lean_object* v_k_5162_){
_start:
{
lean_object* v___x_5163_; lean_object* v___x_5164_; 
v___x_5163_ = l_Lean_Json_getObjValD(v_j_5161_, v_k_5162_);
v___x_5164_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2_spec__3(v___x_5163_);
return v___x_5164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2___boxed(lean_object* v_j_5165_, lean_object* v_k_5166_){
_start:
{
lean_object* v_res_5167_; 
v_res_5167_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2(v_j_5165_, v_k_5166_);
lean_dec_ref(v_k_5166_);
return v_res_5167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0(lean_object* v_x_5170_){
_start:
{
if (lean_obj_tag(v_x_5170_) == 0)
{
lean_object* v___x_5171_; 
v___x_5171_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0___closed__0));
return v___x_5171_;
}
else
{
lean_object* v___x_5172_; 
v___x_5172_ = l_Lean_Lsp_instFromJsonRange_fromJson(v_x_5170_);
if (lean_obj_tag(v___x_5172_) == 0)
{
lean_object* v_a_5173_; lean_object* v___x_5175_; uint8_t v_isShared_5176_; uint8_t v_isSharedCheck_5180_; 
v_a_5173_ = lean_ctor_get(v___x_5172_, 0);
v_isSharedCheck_5180_ = !lean_is_exclusive(v___x_5172_);
if (v_isSharedCheck_5180_ == 0)
{
v___x_5175_ = v___x_5172_;
v_isShared_5176_ = v_isSharedCheck_5180_;
goto v_resetjp_5174_;
}
else
{
lean_inc(v_a_5173_);
lean_dec(v___x_5172_);
v___x_5175_ = lean_box(0);
v_isShared_5176_ = v_isSharedCheck_5180_;
goto v_resetjp_5174_;
}
v_resetjp_5174_:
{
lean_object* v___x_5178_; 
if (v_isShared_5176_ == 0)
{
v___x_5178_ = v___x_5175_;
goto v_reusejp_5177_;
}
else
{
lean_object* v_reuseFailAlloc_5179_; 
v_reuseFailAlloc_5179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5179_, 0, v_a_5173_);
v___x_5178_ = v_reuseFailAlloc_5179_;
goto v_reusejp_5177_;
}
v_reusejp_5177_:
{
return v___x_5178_;
}
}
}
else
{
lean_object* v_a_5181_; lean_object* v___x_5183_; uint8_t v_isShared_5184_; uint8_t v_isSharedCheck_5189_; 
v_a_5181_ = lean_ctor_get(v___x_5172_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v___x_5172_);
if (v_isSharedCheck_5189_ == 0)
{
v___x_5183_ = v___x_5172_;
v_isShared_5184_ = v_isSharedCheck_5189_;
goto v_resetjp_5182_;
}
else
{
lean_inc(v_a_5181_);
lean_dec(v___x_5172_);
v___x_5183_ = lean_box(0);
v_isShared_5184_ = v_isSharedCheck_5189_;
goto v_resetjp_5182_;
}
v_resetjp_5182_:
{
lean_object* v___x_5185_; lean_object* v___x_5187_; 
v___x_5185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5185_, 0, v_a_5181_);
if (v_isShared_5184_ == 0)
{
lean_ctor_set(v___x_5183_, 0, v___x_5185_);
v___x_5187_ = v___x_5183_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v___x_5185_);
v___x_5187_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
return v___x_5187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0(lean_object* v_j_5190_, lean_object* v_k_5191_){
_start:
{
lean_object* v___x_5192_; lean_object* v___x_5193_; 
v___x_5192_ = l_Lean_Json_getObjValD(v_j_5190_, v_k_5191_);
v___x_5193_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0_spec__0(v___x_5192_);
return v___x_5193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0___boxed(lean_object* v_j_5194_, lean_object* v_k_5195_){
_start:
{
lean_object* v_res_5196_; 
v_res_5196_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0(v_j_5194_, v_k_5195_);
lean_dec_ref(v_k_5195_);
return v_res_5196_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3(void){
_start:
{
uint8_t v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; 
v___x_5203_ = 1;
v___x_5204_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__2));
v___x_5205_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5204_, v___x_5203_);
return v___x_5205_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4(void){
_start:
{
lean_object* v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; 
v___x_5206_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__6));
v___x_5207_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__3);
v___x_5208_ = lean_string_append(v___x_5207_, v___x_5206_);
return v___x_5208_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7(void){
_start:
{
uint8_t v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; 
v___x_5212_ = 1;
v___x_5213_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__6));
v___x_5214_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5213_, v___x_5212_);
return v___x_5214_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8(void){
_start:
{
lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; 
v___x_5215_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__7);
v___x_5216_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5217_ = lean_string_append(v___x_5216_, v___x_5215_);
return v___x_5217_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9(void){
_start:
{
lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; 
v___x_5218_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5219_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__8);
v___x_5220_ = lean_string_append(v___x_5219_, v___x_5218_);
return v___x_5220_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12(void){
_start:
{
uint8_t v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; 
v___x_5224_ = 1;
v___x_5225_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__11));
v___x_5226_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5225_, v___x_5224_);
return v___x_5226_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13(void){
_start:
{
lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; 
v___x_5227_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__12);
v___x_5228_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5229_ = lean_string_append(v___x_5228_, v___x_5227_);
return v___x_5229_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14(void){
_start:
{
lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; 
v___x_5230_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5231_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__13);
v___x_5232_ = lean_string_append(v___x_5231_, v___x_5230_);
return v___x_5232_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17(void){
_start:
{
uint8_t v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; 
v___x_5236_ = 1;
v___x_5237_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__16));
v___x_5238_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5237_, v___x_5236_);
return v___x_5238_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18(void){
_start:
{
lean_object* v___x_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; 
v___x_5239_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__17);
v___x_5240_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5241_ = lean_string_append(v___x_5240_, v___x_5239_);
return v___x_5241_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19(void){
_start:
{
lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; 
v___x_5242_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5243_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__18);
v___x_5244_ = lean_string_append(v___x_5243_, v___x_5242_);
return v___x_5244_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22(void){
_start:
{
uint8_t v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; 
v___x_5248_ = 1;
v___x_5249_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__21));
v___x_5250_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5249_, v___x_5248_);
return v___x_5250_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23(void){
_start:
{
lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; 
v___x_5251_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__22);
v___x_5252_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5253_ = lean_string_append(v___x_5252_, v___x_5251_);
return v___x_5253_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24(void){
_start:
{
lean_object* v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; 
v___x_5254_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5255_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__23);
v___x_5256_ = lean_string_append(v___x_5255_, v___x_5254_);
return v___x_5256_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28(void){
_start:
{
uint8_t v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5261_ = 1;
v___x_5262_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__27));
v___x_5263_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5262_, v___x_5261_);
return v___x_5263_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29(void){
_start:
{
lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; 
v___x_5264_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__28);
v___x_5265_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5266_ = lean_string_append(v___x_5265_, v___x_5264_);
return v___x_5266_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30(void){
_start:
{
lean_object* v___x_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; 
v___x_5267_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5268_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__29);
v___x_5269_ = lean_string_append(v___x_5268_, v___x_5267_);
return v___x_5269_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33(void){
_start:
{
uint8_t v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; 
v___x_5273_ = 1;
v___x_5274_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__32));
v___x_5275_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_5274_, v___x_5273_);
return v___x_5275_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34(void){
_start:
{
lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; 
v___x_5276_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__33);
v___x_5277_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__4);
v___x_5278_ = lean_string_append(v___x_5277_, v___x_5276_);
return v___x_5278_;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35(void){
_start:
{
lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5279_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson___closed__11));
v___x_5280_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__34);
v___x_5281_ = lean_string_append(v___x_5280_, v___x_5279_);
return v___x_5281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson(lean_object* v_json_5282_){
_start:
{
lean_object* v___x_5283_; lean_object* v___x_5284_; 
v___x_5283_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0));
lean_inc(v_json_5282_);
v___x_5284_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__0(v_json_5282_, v___x_5283_);
if (lean_obj_tag(v___x_5284_) == 0)
{
lean_object* v_a_5285_; lean_object* v___x_5287_; uint8_t v_isShared_5288_; uint8_t v_isSharedCheck_5294_; 
lean_dec(v_json_5282_);
v_a_5285_ = lean_ctor_get(v___x_5284_, 0);
v_isSharedCheck_5294_ = !lean_is_exclusive(v___x_5284_);
if (v_isSharedCheck_5294_ == 0)
{
v___x_5287_ = v___x_5284_;
v_isShared_5288_ = v_isSharedCheck_5294_;
goto v_resetjp_5286_;
}
else
{
lean_inc(v_a_5285_);
lean_dec(v___x_5284_);
v___x_5287_ = lean_box(0);
v_isShared_5288_ = v_isSharedCheck_5294_;
goto v_resetjp_5286_;
}
v_resetjp_5286_:
{
lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5292_; 
v___x_5289_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__9);
v___x_5290_ = lean_string_append(v___x_5289_, v_a_5285_);
lean_dec(v_a_5285_);
if (v_isShared_5288_ == 0)
{
lean_ctor_set(v___x_5287_, 0, v___x_5290_);
v___x_5292_ = v___x_5287_;
goto v_reusejp_5291_;
}
else
{
lean_object* v_reuseFailAlloc_5293_; 
v_reuseFailAlloc_5293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5293_, 0, v___x_5290_);
v___x_5292_ = v_reuseFailAlloc_5293_;
goto v_reusejp_5291_;
}
v_reusejp_5291_:
{
return v___x_5292_;
}
}
}
else
{
if (lean_obj_tag(v___x_5284_) == 0)
{
lean_object* v_a_5295_; lean_object* v___x_5297_; uint8_t v_isShared_5298_; uint8_t v_isSharedCheck_5302_; 
lean_dec(v_json_5282_);
v_a_5295_ = lean_ctor_get(v___x_5284_, 0);
v_isSharedCheck_5302_ = !lean_is_exclusive(v___x_5284_);
if (v_isSharedCheck_5302_ == 0)
{
v___x_5297_ = v___x_5284_;
v_isShared_5298_ = v_isSharedCheck_5302_;
goto v_resetjp_5296_;
}
else
{
lean_inc(v_a_5295_);
lean_dec(v___x_5284_);
v___x_5297_ = lean_box(0);
v_isShared_5298_ = v_isSharedCheck_5302_;
goto v_resetjp_5296_;
}
v_resetjp_5296_:
{
lean_object* v___x_5300_; 
if (v_isShared_5298_ == 0)
{
lean_ctor_set_tag(v___x_5297_, 0);
v___x_5300_ = v___x_5297_;
goto v_reusejp_5299_;
}
else
{
lean_object* v_reuseFailAlloc_5301_; 
v_reuseFailAlloc_5301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5301_, 0, v_a_5295_);
v___x_5300_ = v_reuseFailAlloc_5301_;
goto v_reusejp_5299_;
}
v_reusejp_5299_:
{
return v___x_5300_;
}
}
}
else
{
lean_object* v_a_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; 
v_a_5303_ = lean_ctor_get(v___x_5284_, 0);
lean_inc(v_a_5303_);
lean_dec_ref_known(v___x_5284_, 1);
v___x_5304_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10));
lean_inc(v_json_5282_);
v___x_5305_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanStaleDependencyParams_fromJson_spec__0(v_json_5282_, v___x_5304_);
if (lean_obj_tag(v___x_5305_) == 0)
{
lean_object* v_a_5306_; lean_object* v___x_5308_; uint8_t v_isShared_5309_; uint8_t v_isSharedCheck_5315_; 
lean_dec(v_a_5303_);
lean_dec(v_json_5282_);
v_a_5306_ = lean_ctor_get(v___x_5305_, 0);
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5305_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5308_ = v___x_5305_;
v_isShared_5309_ = v_isSharedCheck_5315_;
goto v_resetjp_5307_;
}
else
{
lean_inc(v_a_5306_);
lean_dec(v___x_5305_);
v___x_5308_ = lean_box(0);
v_isShared_5309_ = v_isSharedCheck_5315_;
goto v_resetjp_5307_;
}
v_resetjp_5307_:
{
lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5313_; 
v___x_5310_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__14);
v___x_5311_ = lean_string_append(v___x_5310_, v_a_5306_);
lean_dec(v_a_5306_);
if (v_isShared_5309_ == 0)
{
lean_ctor_set(v___x_5308_, 0, v___x_5311_);
v___x_5313_ = v___x_5308_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v___x_5311_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
return v___x_5313_;
}
}
}
else
{
if (lean_obj_tag(v___x_5305_) == 0)
{
lean_object* v_a_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5323_; 
lean_dec(v_a_5303_);
lean_dec(v_json_5282_);
v_a_5316_ = lean_ctor_get(v___x_5305_, 0);
v_isSharedCheck_5323_ = !lean_is_exclusive(v___x_5305_);
if (v_isSharedCheck_5323_ == 0)
{
v___x_5318_ = v___x_5305_;
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_a_5316_);
lean_dec(v___x_5305_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5321_; 
if (v_isShared_5319_ == 0)
{
lean_ctor_set_tag(v___x_5318_, 0);
v___x_5321_ = v___x_5318_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_a_5316_);
v___x_5321_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
return v___x_5321_;
}
}
}
else
{
lean_object* v_a_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; 
v_a_5324_ = lean_ctor_get(v___x_5305_, 0);
lean_inc(v_a_5324_);
lean_dec_ref_known(v___x_5305_, 1);
v___x_5325_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15));
lean_inc(v_json_5282_);
v___x_5326_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(v_json_5282_, v___x_5325_);
if (lean_obj_tag(v___x_5326_) == 0)
{
lean_object* v_a_5327_; lean_object* v___x_5329_; uint8_t v_isShared_5330_; uint8_t v_isSharedCheck_5336_; 
lean_dec(v_a_5324_);
lean_dec(v_a_5303_);
lean_dec(v_json_5282_);
v_a_5327_ = lean_ctor_get(v___x_5326_, 0);
v_isSharedCheck_5336_ = !lean_is_exclusive(v___x_5326_);
if (v_isSharedCheck_5336_ == 0)
{
v___x_5329_ = v___x_5326_;
v_isShared_5330_ = v_isSharedCheck_5336_;
goto v_resetjp_5328_;
}
else
{
lean_inc(v_a_5327_);
lean_dec(v___x_5326_);
v___x_5329_ = lean_box(0);
v_isShared_5330_ = v_isSharedCheck_5336_;
goto v_resetjp_5328_;
}
v_resetjp_5328_:
{
lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5334_; 
v___x_5331_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__19);
v___x_5332_ = lean_string_append(v___x_5331_, v_a_5327_);
lean_dec(v_a_5327_);
if (v_isShared_5330_ == 0)
{
lean_ctor_set(v___x_5329_, 0, v___x_5332_);
v___x_5334_ = v___x_5329_;
goto v_reusejp_5333_;
}
else
{
lean_object* v_reuseFailAlloc_5335_; 
v_reuseFailAlloc_5335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5335_, 0, v___x_5332_);
v___x_5334_ = v_reuseFailAlloc_5335_;
goto v_reusejp_5333_;
}
v_reusejp_5333_:
{
return v___x_5334_;
}
}
}
else
{
if (lean_obj_tag(v___x_5326_) == 0)
{
lean_object* v_a_5337_; lean_object* v___x_5339_; uint8_t v_isShared_5340_; uint8_t v_isSharedCheck_5344_; 
lean_dec(v_a_5324_);
lean_dec(v_a_5303_);
lean_dec(v_json_5282_);
v_a_5337_ = lean_ctor_get(v___x_5326_, 0);
v_isSharedCheck_5344_ = !lean_is_exclusive(v___x_5326_);
if (v_isSharedCheck_5344_ == 0)
{
v___x_5339_ = v___x_5326_;
v_isShared_5340_ = v_isSharedCheck_5344_;
goto v_resetjp_5338_;
}
else
{
lean_inc(v_a_5337_);
lean_dec(v___x_5326_);
v___x_5339_ = lean_box(0);
v_isShared_5340_ = v_isSharedCheck_5344_;
goto v_resetjp_5338_;
}
v_resetjp_5338_:
{
lean_object* v___x_5342_; 
if (v_isShared_5340_ == 0)
{
lean_ctor_set_tag(v___x_5339_, 0);
v___x_5342_ = v___x_5339_;
goto v_reusejp_5341_;
}
else
{
lean_object* v_reuseFailAlloc_5343_; 
v_reuseFailAlloc_5343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5343_, 0, v_a_5337_);
v___x_5342_ = v_reuseFailAlloc_5343_;
goto v_reusejp_5341_;
}
v_reusejp_5341_:
{
return v___x_5342_;
}
}
}
else
{
lean_object* v_a_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; 
v_a_5345_ = lean_ctor_get(v___x_5326_, 0);
lean_inc(v_a_5345_);
lean_dec_ref_known(v___x_5326_, 1);
v___x_5346_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20));
lean_inc(v_json_5282_);
v___x_5347_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__1(v_json_5282_, v___x_5346_);
if (lean_obj_tag(v___x_5347_) == 0)
{
lean_object* v_a_5348_; lean_object* v___x_5350_; uint8_t v_isShared_5351_; uint8_t v_isSharedCheck_5357_; 
lean_dec(v_a_5345_);
lean_dec(v_a_5324_);
lean_dec(v_a_5303_);
lean_dec(v_json_5282_);
v_a_5348_ = lean_ctor_get(v___x_5347_, 0);
v_isSharedCheck_5357_ = !lean_is_exclusive(v___x_5347_);
if (v_isSharedCheck_5357_ == 0)
{
v___x_5350_ = v___x_5347_;
v_isShared_5351_ = v_isSharedCheck_5357_;
goto v_resetjp_5349_;
}
else
{
lean_inc(v_a_5348_);
lean_dec(v___x_5347_);
v___x_5350_ = lean_box(0);
v_isShared_5351_ = v_isSharedCheck_5357_;
goto v_resetjp_5349_;
}
v_resetjp_5349_:
{
lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5355_; 
v___x_5352_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__24);
v___x_5353_ = lean_string_append(v___x_5352_, v_a_5348_);
lean_dec(v_a_5348_);
if (v_isShared_5351_ == 0)
{
lean_ctor_set(v___x_5350_, 0, v___x_5353_);
v___x_5355_ = v___x_5350_;
goto v_reusejp_5354_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v___x_5353_);
v___x_5355_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5354_;
}
v_reusejp_5354_:
{
return v___x_5355_;
}
}
}
else
{
if (lean_obj_tag(v___x_5347_) == 0)
{
lean_object* v_a_5358_; lean_object* v___x_5360_; uint8_t v_isShared_5361_; uint8_t v_isSharedCheck_5365_; 
lean_dec(v_a_5345_);
lean_dec(v_a_5324_);
lean_dec(v_a_5303_);
lean_dec(v_json_5282_);
v_a_5358_ = lean_ctor_get(v___x_5347_, 0);
v_isSharedCheck_5365_ = !lean_is_exclusive(v___x_5347_);
if (v_isSharedCheck_5365_ == 0)
{
v___x_5360_ = v___x_5347_;
v_isShared_5361_ = v_isSharedCheck_5365_;
goto v_resetjp_5359_;
}
else
{
lean_inc(v_a_5358_);
lean_dec(v___x_5347_);
v___x_5360_ = lean_box(0);
v_isShared_5361_ = v_isSharedCheck_5365_;
goto v_resetjp_5359_;
}
v_resetjp_5359_:
{
lean_object* v___x_5363_; 
if (v_isShared_5361_ == 0)
{
lean_ctor_set_tag(v___x_5360_, 0);
v___x_5363_ = v___x_5360_;
goto v_reusejp_5362_;
}
else
{
lean_object* v_reuseFailAlloc_5364_; 
v_reuseFailAlloc_5364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5364_, 0, v_a_5358_);
v___x_5363_ = v_reuseFailAlloc_5364_;
goto v_reusejp_5362_;
}
v_reusejp_5362_:
{
return v___x_5363_;
}
}
}
else
{
lean_object* v_a_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; 
v_a_5366_ = lean_ctor_get(v___x_5347_, 0);
lean_inc(v_a_5366_);
lean_dec_ref_known(v___x_5347_, 1);
v___x_5367_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25));
lean_inc(v_json_5282_);
v___x_5368_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanLocationLink_fromJson_spec__2(v_json_5282_, v___x_5367_);
if (lean_obj_tag(v___x_5368_) == 0)
{
lean_object* v_a_5369_; lean_object* v___x_5371_; uint8_t v_isShared_5372_; uint8_t v_isSharedCheck_5378_; 
lean_dec(v_a_5366_);
lean_dec(v_a_5345_);
lean_dec(v_a_5324_);
lean_dec(v_a_5303_);
lean_dec(v_json_5282_);
v_a_5369_ = lean_ctor_get(v___x_5368_, 0);
v_isSharedCheck_5378_ = !lean_is_exclusive(v___x_5368_);
if (v_isSharedCheck_5378_ == 0)
{
v___x_5371_ = v___x_5368_;
v_isShared_5372_ = v_isSharedCheck_5378_;
goto v_resetjp_5370_;
}
else
{
lean_inc(v_a_5369_);
lean_dec(v___x_5368_);
v___x_5371_ = lean_box(0);
v_isShared_5372_ = v_isSharedCheck_5378_;
goto v_resetjp_5370_;
}
v_resetjp_5370_:
{
lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5376_; 
v___x_5373_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__30);
v___x_5374_ = lean_string_append(v___x_5373_, v_a_5369_);
lean_dec(v_a_5369_);
if (v_isShared_5372_ == 0)
{
lean_ctor_set(v___x_5371_, 0, v___x_5374_);
v___x_5376_ = v___x_5371_;
goto v_reusejp_5375_;
}
else
{
lean_object* v_reuseFailAlloc_5377_; 
v_reuseFailAlloc_5377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5377_, 0, v___x_5374_);
v___x_5376_ = v_reuseFailAlloc_5377_;
goto v_reusejp_5375_;
}
v_reusejp_5375_:
{
return v___x_5376_;
}
}
}
else
{
if (lean_obj_tag(v___x_5368_) == 0)
{
lean_object* v_a_5379_; lean_object* v___x_5381_; uint8_t v_isShared_5382_; uint8_t v_isSharedCheck_5386_; 
lean_dec(v_a_5366_);
lean_dec(v_a_5345_);
lean_dec(v_a_5324_);
lean_dec(v_a_5303_);
lean_dec(v_json_5282_);
v_a_5379_ = lean_ctor_get(v___x_5368_, 0);
v_isSharedCheck_5386_ = !lean_is_exclusive(v___x_5368_);
if (v_isSharedCheck_5386_ == 0)
{
v___x_5381_ = v___x_5368_;
v_isShared_5382_ = v_isSharedCheck_5386_;
goto v_resetjp_5380_;
}
else
{
lean_inc(v_a_5379_);
lean_dec(v___x_5368_);
v___x_5381_ = lean_box(0);
v_isShared_5382_ = v_isSharedCheck_5386_;
goto v_resetjp_5380_;
}
v_resetjp_5380_:
{
lean_object* v___x_5384_; 
if (v_isShared_5382_ == 0)
{
lean_ctor_set_tag(v___x_5381_, 0);
v___x_5384_ = v___x_5381_;
goto v_reusejp_5383_;
}
else
{
lean_object* v_reuseFailAlloc_5385_; 
v_reuseFailAlloc_5385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5385_, 0, v_a_5379_);
v___x_5384_ = v_reuseFailAlloc_5385_;
goto v_reusejp_5383_;
}
v_reusejp_5383_:
{
return v___x_5384_;
}
}
}
else
{
lean_object* v_a_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; 
v_a_5387_ = lean_ctor_get(v___x_5368_, 0);
lean_inc(v_a_5387_);
lean_dec_ref_known(v___x_5368_, 1);
v___x_5388_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31));
v___x_5389_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLeanILeanHeaderSetupInfoParams_fromJson_spec__1(v_json_5282_, v___x_5388_);
if (lean_obj_tag(v___x_5389_) == 0)
{
lean_object* v_a_5390_; lean_object* v___x_5392_; uint8_t v_isShared_5393_; uint8_t v_isSharedCheck_5399_; 
lean_dec(v_a_5387_);
lean_dec(v_a_5366_);
lean_dec(v_a_5345_);
lean_dec(v_a_5324_);
lean_dec(v_a_5303_);
v_a_5390_ = lean_ctor_get(v___x_5389_, 0);
v_isSharedCheck_5399_ = !lean_is_exclusive(v___x_5389_);
if (v_isSharedCheck_5399_ == 0)
{
v___x_5392_ = v___x_5389_;
v_isShared_5393_ = v_isSharedCheck_5399_;
goto v_resetjp_5391_;
}
else
{
lean_inc(v_a_5390_);
lean_dec(v___x_5389_);
v___x_5392_ = lean_box(0);
v_isShared_5393_ = v_isSharedCheck_5399_;
goto v_resetjp_5391_;
}
v_resetjp_5391_:
{
lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5397_; 
v___x_5394_ = lean_obj_once(&l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35, &l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35_once, _init_l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__35);
v___x_5395_ = lean_string_append(v___x_5394_, v_a_5390_);
lean_dec(v_a_5390_);
if (v_isShared_5393_ == 0)
{
lean_ctor_set(v___x_5392_, 0, v___x_5395_);
v___x_5397_ = v___x_5392_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5398_; 
v_reuseFailAlloc_5398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5398_, 0, v___x_5395_);
v___x_5397_ = v_reuseFailAlloc_5398_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
return v___x_5397_;
}
}
}
else
{
if (lean_obj_tag(v___x_5389_) == 0)
{
lean_object* v_a_5400_; lean_object* v___x_5402_; uint8_t v_isShared_5403_; uint8_t v_isSharedCheck_5407_; 
lean_dec(v_a_5387_);
lean_dec(v_a_5366_);
lean_dec(v_a_5345_);
lean_dec(v_a_5324_);
lean_dec(v_a_5303_);
v_a_5400_ = lean_ctor_get(v___x_5389_, 0);
v_isSharedCheck_5407_ = !lean_is_exclusive(v___x_5389_);
if (v_isSharedCheck_5407_ == 0)
{
v___x_5402_ = v___x_5389_;
v_isShared_5403_ = v_isSharedCheck_5407_;
goto v_resetjp_5401_;
}
else
{
lean_inc(v_a_5400_);
lean_dec(v___x_5389_);
v___x_5402_ = lean_box(0);
v_isShared_5403_ = v_isSharedCheck_5407_;
goto v_resetjp_5401_;
}
v_resetjp_5401_:
{
lean_object* v___x_5405_; 
if (v_isShared_5403_ == 0)
{
lean_ctor_set_tag(v___x_5402_, 0);
v___x_5405_ = v___x_5402_;
goto v_reusejp_5404_;
}
else
{
lean_object* v_reuseFailAlloc_5406_; 
v_reuseFailAlloc_5406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5406_, 0, v_a_5400_);
v___x_5405_ = v_reuseFailAlloc_5406_;
goto v_reusejp_5404_;
}
v_reusejp_5404_:
{
return v___x_5405_;
}
}
}
else
{
lean_object* v_a_5408_; lean_object* v___x_5410_; uint8_t v_isShared_5411_; uint8_t v_isSharedCheck_5418_; 
v_a_5408_ = lean_ctor_get(v___x_5389_, 0);
v_isSharedCheck_5418_ = !lean_is_exclusive(v___x_5389_);
if (v_isSharedCheck_5418_ == 0)
{
v___x_5410_ = v___x_5389_;
v_isShared_5411_ = v_isSharedCheck_5418_;
goto v_resetjp_5409_;
}
else
{
lean_inc(v_a_5408_);
lean_dec(v___x_5389_);
v___x_5410_ = lean_box(0);
v_isShared_5411_ = v_isSharedCheck_5418_;
goto v_resetjp_5409_;
}
v_resetjp_5409_:
{
lean_object* v___x_5412_; lean_object* v___x_5413_; uint8_t v___x_5414_; lean_object* v___x_5416_; 
v___x_5412_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5412_, 0, v_a_5303_);
lean_ctor_set(v___x_5412_, 1, v_a_5324_);
lean_ctor_set(v___x_5412_, 2, v_a_5345_);
lean_ctor_set(v___x_5412_, 3, v_a_5366_);
v___x_5413_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5413_, 0, v___x_5412_);
lean_ctor_set(v___x_5413_, 1, v_a_5387_);
v___x_5414_ = lean_unbox(v_a_5408_);
lean_dec(v_a_5408_);
lean_ctor_set_uint8(v___x_5413_, sizeof(void*)*2, v___x_5414_);
if (v_isShared_5411_ == 0)
{
lean_ctor_set(v___x_5410_, 0, v___x_5413_);
v___x_5416_ = v___x_5410_;
goto v_reusejp_5415_;
}
else
{
lean_object* v_reuseFailAlloc_5417_; 
v_reuseFailAlloc_5417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5417_, 0, v___x_5413_);
v___x_5416_ = v_reuseFailAlloc_5417_;
goto v_reusejp_5415_;
}
v_reusejp_5415_:
{
return v___x_5416_;
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__0(lean_object* v_k_5421_, lean_object* v_x_5422_){
_start:
{
if (lean_obj_tag(v_x_5422_) == 0)
{
lean_object* v___x_5423_; 
lean_dec_ref(v_k_5421_);
v___x_5423_ = lean_box(0);
return v___x_5423_;
}
else
{
lean_object* v_val_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; 
v_val_5424_ = lean_ctor_get(v_x_5422_, 0);
lean_inc(v_val_5424_);
lean_dec_ref_known(v_x_5422_, 1);
v___x_5425_ = l_Lean_Lsp_instToJsonRange_toJson(v_val_5424_);
v___x_5426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5426_, 0, v_k_5421_);
lean_ctor_set(v___x_5426_, 1, v___x_5425_);
v___x_5427_ = lean_box(0);
v___x_5428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5428_, 0, v___x_5426_);
lean_ctor_set(v___x_5428_, 1, v___x_5427_);
return v___x_5428_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__1(lean_object* v_k_5429_, lean_object* v_x_5430_){
_start:
{
if (lean_obj_tag(v_x_5430_) == 0)
{
lean_object* v___x_5431_; 
lean_dec_ref(v_k_5429_);
v___x_5431_ = lean_box(0);
return v___x_5431_;
}
else
{
lean_object* v_val_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; 
v_val_5432_ = lean_ctor_get(v_x_5430_, 0);
lean_inc(v_val_5432_);
lean_dec_ref_known(v_x_5430_, 1);
v___x_5433_ = l_Lean_Lsp_instToJsonLeanDeclIdent_toJson(v_val_5432_);
v___x_5434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5434_, 0, v_k_5429_);
lean_ctor_set(v___x_5434_, 1, v___x_5433_);
v___x_5435_ = lean_box(0);
v___x_5436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5436_, 0, v___x_5434_);
lean_ctor_set(v___x_5436_, 1, v___x_5435_);
return v___x_5436_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonLeanLocationLink_toJson(lean_object* v_x_5437_){
_start:
{
lean_object* v_toLocationLink_5438_; lean_object* v_ident_x3f_5439_; uint8_t v_isDefault_5440_; lean_object* v_originSelectionRange_x3f_5441_; lean_object* v_targetUri_5442_; lean_object* v_targetRange_5443_; lean_object* v_targetSelectionRange_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; lean_object* v___x_5474_; 
v_toLocationLink_5438_ = lean_ctor_get(v_x_5437_, 0);
lean_inc_ref(v_toLocationLink_5438_);
v_ident_x3f_5439_ = lean_ctor_get(v_x_5437_, 1);
lean_inc(v_ident_x3f_5439_);
v_isDefault_5440_ = lean_ctor_get_uint8(v_x_5437_, sizeof(void*)*2);
lean_dec_ref(v_x_5437_);
v_originSelectionRange_x3f_5441_ = lean_ctor_get(v_toLocationLink_5438_, 0);
lean_inc(v_originSelectionRange_x3f_5441_);
v_targetUri_5442_ = lean_ctor_get(v_toLocationLink_5438_, 1);
lean_inc_ref(v_targetUri_5442_);
v_targetRange_5443_ = lean_ctor_get(v_toLocationLink_5438_, 2);
lean_inc_ref(v_targetRange_5443_);
v_targetSelectionRange_5444_ = lean_ctor_get(v_toLocationLink_5438_, 3);
lean_inc_ref(v_targetSelectionRange_5444_);
lean_dec_ref(v_toLocationLink_5438_);
v___x_5445_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__0));
v___x_5446_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__0(v___x_5445_, v_originSelectionRange_x3f_5441_);
v___x_5447_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__10));
v___x_5448_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5448_, 0, v_targetUri_5442_);
v___x_5449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5449_, 0, v___x_5447_);
lean_ctor_set(v___x_5449_, 1, v___x_5448_);
v___x_5450_ = lean_box(0);
v___x_5451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5451_, 0, v___x_5449_);
lean_ctor_set(v___x_5451_, 1, v___x_5450_);
v___x_5452_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__15));
v___x_5453_ = l_Lean_Lsp_instToJsonRange_toJson(v_targetRange_5443_);
v___x_5454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5454_, 0, v___x_5452_);
lean_ctor_set(v___x_5454_, 1, v___x_5453_);
v___x_5455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5455_, 0, v___x_5454_);
lean_ctor_set(v___x_5455_, 1, v___x_5450_);
v___x_5456_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__20));
v___x_5457_ = l_Lean_Lsp_instToJsonRange_toJson(v_targetSelectionRange_5444_);
v___x_5458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5458_, 0, v___x_5456_);
lean_ctor_set(v___x_5458_, 1, v___x_5457_);
v___x_5459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5459_, 0, v___x_5458_);
lean_ctor_set(v___x_5459_, 1, v___x_5450_);
v___x_5460_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__25));
v___x_5461_ = l_Lean_Json_opt___at___00Lean_Lsp_instToJsonLeanLocationLink_toJson_spec__1(v___x_5460_, v_ident_x3f_5439_);
v___x_5462_ = ((lean_object*)(l_Lean_Lsp_instFromJsonLeanLocationLink_fromJson___closed__31));
v___x_5463_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5463_, 0, v_isDefault_5440_);
v___x_5464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5464_, 0, v___x_5462_);
lean_ctor_set(v___x_5464_, 1, v___x_5463_);
v___x_5465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5465_, 0, v___x_5464_);
lean_ctor_set(v___x_5465_, 1, v___x_5450_);
v___x_5466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5466_, 0, v___x_5465_);
lean_ctor_set(v___x_5466_, 1, v___x_5450_);
v___x_5467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5467_, 0, v___x_5461_);
lean_ctor_set(v___x_5467_, 1, v___x_5466_);
v___x_5468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5468_, 0, v___x_5459_);
lean_ctor_set(v___x_5468_, 1, v___x_5467_);
v___x_5469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5469_, 0, v___x_5455_);
lean_ctor_set(v___x_5469_, 1, v___x_5468_);
v___x_5470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5470_, 0, v___x_5451_);
lean_ctor_set(v___x_5470_, 1, v___x_5469_);
v___x_5471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5471_, 0, v___x_5446_);
lean_ctor_set(v___x_5471_, 1, v___x_5470_);
v___x_5472_ = ((lean_object*)(l_Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson___closed__0));
v___x_5473_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Lsp_instToJsonLeanILeanHeaderSetupInfoParams_toJson_spec__1(v___x_5471_, v___x_5472_);
v___x_5474_ = l_Lean_Json_mkObj(v___x_5473_);
lean_dec(v___x_5473_);
return v___x_5474_;
}
}
lean_object* runtime_initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_JsonRpc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Lsp_Internal(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_JsonRpc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_Decls_instEmptyCollection = _init_l_Lean_Lsp_Decls_instEmptyCollection();
lean_mark_persistent(l_Lean_Lsp_Decls_instEmptyCollection);
l_Lean_Lsp_ModuleRefs_instEmptyCollection = _init_l_Lean_Lsp_ModuleRefs_instEmptyCollection();
lean_mark_persistent(l_Lean_Lsp_ModuleRefs_instEmptyCollection);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Lsp_Internal(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp_Basic(uint8_t builtin);
lean_object* initialize_Lean_Data_JsonRpc(uint8_t builtin);
lean_object* initialize_Lean_Data_DeclarationRange(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Lsp_Internal(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_JsonRpc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Lsp_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Lsp_Internal(builtin);
}
#ifdef __cplusplus
}
#endif
