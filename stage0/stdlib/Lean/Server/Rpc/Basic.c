// Lean compiler output
// Module: Lean.Server.Rpc.Basic
// Imports: public import Init.Dynamic public import Lean.Data.Json.FromToJson.Basic
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
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_USize_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Prod_toJson___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instFromJsonJson___lam__0(lean_object*);
lean_object* l_Lean_Prod_fromJson_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfExceptTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfMonadExceptOf___redArg(lean_object*);
lean_object* l_MonadExcept_ofExcept___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_of_nat(lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_USize_Internal_beq___boxed(lean_object*, lean_object*);
lean_object* l_USize_toUInt64___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_bignumToJson(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Option_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Option_toJson___redArg(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Lsp_instInhabitedRpcRef_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_Lsp_instInhabitedRpcRef_default___closed__0;
LEAN_EXPORT size_t l_Lean_Lsp_instInhabitedRpcRef_default;
LEAN_EXPORT size_t l_Lean_Lsp_instInhabitedRpcRef;
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqRpcRef_beq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqRpcRef_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Lsp_instBEqRpcRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instBEqRpcRef_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instBEqRpcRef___closed__0 = (const lean_object*)&l_Lean_Lsp_instBEqRpcRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instBEqRpcRef = (const lean_object*)&l_Lean_Lsp_instBEqRpcRef___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableRpcRef_hash(size_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableRpcRef_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instHashableRpcRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instHashableRpcRef_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instHashableRpcRef___closed__0 = (const lean_object*)&l_Lean_Lsp_instHashableRpcRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instHashableRpcRef = (const lean_object*)&l_Lean_Lsp_instHashableRpcRef___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___lam__0(size_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToStringRpcRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToStringRpcRef___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToStringRpcRef___closed__0 = (const lean_object*)&l_Lean_Lsp_instToStringRpcRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToStringRpcRef = (const lean_object*)&l_Lean_Lsp_instToStringRpcRef___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__0_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__1_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "v1"};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "v0"};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3_value;
static const lean_string_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__4 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__4_value)}};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__5 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__6 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__7 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson(lean_object*);
static const lean_closure_object l_Lean_Lsp_instFromJsonRpcWireFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat___closed__0 = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat = (const lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3_value)}};
static const lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2_value)}};
static const lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__1 = (const lean_object*)&l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_Lsp_instToJsonRpcWireFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Lsp_instToJsonRpcWireFormat_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Lsp_instToJsonRpcWireFormat___closed__0 = (const lean_object*)&l_Lean_Lsp_instToJsonRpcWireFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_instToJsonRpcWireFormat = (const lean_object*)&l_Lean_Lsp_instToJsonRpcWireFormat___closed__0_value;
static const lean_string_object l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0 = (const lean_object*)&l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0_value;
static const lean_string_object l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "__rpcref"};
static const lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1 = (const lean_object*)&l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn___boxed__const__1_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(1ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn___boxed__const__1_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn___boxed__const__1_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_freshWithRpcRefId;
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_rpcStoreRef___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_USize_Internal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__0 = (const lean_object*)&l_Lean_Server_rpcStoreRef___redArg___closed__0_value;
static const lean_closure_object l_Lean_Server_rpcStoreRef___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_USize_toUInt64___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__1 = (const lean_object*)&l_Lean_Server_rpcStoreRef___redArg___closed__1_value;
static const lean_string_object l_Lean_Server_rpcStoreRef___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Server.Rpc.Basic"};
static const lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__2 = (const lean_object*)&l_Lean_Server_rpcStoreRef___redArg___closed__2_value;
static const lean_string_object l_Lean_Server_rpcStoreRef___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Server.rpcStoreRef"};
static const lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__3 = (const lean_object*)&l_Lean_Server_rpcStoreRef___redArg___closed__3_value;
static const lean_string_object l_Lean_Server_rpcStoreRef___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Found object ID in `refsById` but not in `aliveRefs`."};
static const lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__4 = (const lean_object*)&l_Lean_Server_rpcStoreRef___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Server_rpcStoreRef___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_rpcStoreRef___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "RPC call type mismatch in reference '"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__0 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__0_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "'\nexpected '"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__1 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__1_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "', "};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__2 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__2_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "got '"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__3 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__3_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__4 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__4_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "RPC reference '"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__5 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__5_value;
static const lean_string_object l_Lean_Server_rpcGetRef___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "' is not valid"};
static const lean_object* l_Lean_Server_rpcGetRef___redArg___closed__6 = (const lean_object*)&l_Lean_Server_rpcGetRef___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(lean_object*, size_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef(size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0(lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2(lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3(lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__0_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__1 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__1_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__2 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__2_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__3 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__3_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__4 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__4_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__5 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__5_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__6 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__0_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__1_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__7 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__7_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__2_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__3_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__4_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__5_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__8 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__8_value),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__6_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9 = (const lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20;
static lean_once_cell_t l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Server_instRpcEncodableOption___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableOption___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instRpcEncodableOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Server_instRpcEncodableOption___redArg___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableOption___redArg___closed__0_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableOption___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableOption___redArg___closed__1 = (const lean_object*)&l_Lean_Server_instRpcEncodableOption___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__0_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__4, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__1 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__1_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__2 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__2_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__9, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__3 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__3_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_map, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__4 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableArray___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__4_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__0_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__5 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__5_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_pure, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__6 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableArray___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__5_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__6_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__1_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__2_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__3_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__7 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__7_value;
static const lean_closure_object l_Lean_Server_instRpcEncodableArray___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9_value)} };
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__8 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Server_instRpcEncodableArray___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__7_value),((lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__8_value)}};
static const lean_object* l_Lean_Server_instRpcEncodableArray___redArg___closed__9 = (const lean_object*)&l_Lean_Server_instRpcEncodableArray___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_USize_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___closed__0 = (const lean_object*)&l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName(lean_object*, lean_object*);
static size_t _init_l_Lean_Lsp_instInhabitedRpcRef_default___closed__0(void){
_start:
{
lean_object* v___x_1_; size_t v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_usize_of_nat(v___x_1_);
return v___x_2_;
}
}
static size_t _init_l_Lean_Lsp_instInhabitedRpcRef_default(void){
_start:
{
size_t v___x_3_; 
v___x_3_ = lean_usize_once(&l_Lean_Lsp_instInhabitedRpcRef_default___closed__0, &l_Lean_Lsp_instInhabitedRpcRef_default___closed__0_once, _init_l_Lean_Lsp_instInhabitedRpcRef_default___closed__0);
return v___x_3_;
}
}
static size_t _init_l_Lean_Lsp_instInhabitedRpcRef(void){
_start:
{
size_t v___x_4_; 
v___x_4_ = l_Lean_Lsp_instInhabitedRpcRef_default;
return v___x_4_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_instBEqRpcRef_beq(size_t v_x_5_, size_t v_x_6_){
_start:
{
uint8_t v___x_7_; 
v___x_7_ = lean_usize_dec_eq(v_x_5_, v_x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instBEqRpcRef_beq___boxed(lean_object* v_x_8_, lean_object* v_x_9_){
_start:
{
size_t v_x_19__boxed_10_; size_t v_x_20__boxed_11_; uint8_t v_res_12_; lean_object* v_r_13_; 
v_x_19__boxed_10_ = lean_unbox_usize(v_x_8_);
lean_dec(v_x_8_);
v_x_20__boxed_11_ = lean_unbox_usize(v_x_9_);
lean_dec(v_x_9_);
v_res_12_ = l_Lean_Lsp_instBEqRpcRef_beq(v_x_19__boxed_10_, v_x_20__boxed_11_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT uint64_t l_Lean_Lsp_instHashableRpcRef_hash(size_t v_x_16_){
_start:
{
uint64_t v___x_17_; uint64_t v___x_18_; uint64_t v___x_19_; 
v___x_17_ = 0ULL;
v___x_18_ = lean_usize_to_uint64(v_x_16_);
v___x_19_ = lean_uint64_mix_hash(v___x_17_, v___x_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instHashableRpcRef_hash___boxed(lean_object* v_x_20_){
_start:
{
size_t v_x_26__boxed_21_; uint64_t v_res_22_; lean_object* v_r_23_; 
v_x_26__boxed_21_ = lean_unbox_usize(v_x_20_);
lean_dec(v_x_20_);
v_res_22_ = l_Lean_Lsp_instHashableRpcRef_hash(v_x_26__boxed_21_);
v_r_23_ = lean_box_uint64(v_res_22_);
return v_r_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___lam__0(size_t v_r_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_usize_to_nat(v_r_26_);
v___x_28_ = l_Nat_reprFast(v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToStringRpcRef___lam__0___boxed(lean_object* v_r_29_){
_start:
{
size_t v_r_boxed_30_; lean_object* v_res_31_; 
v_r_boxed_30_ = lean_unbox_usize(v_r_29_);
lean_dec(v_r_29_);
v_res_31_ = l_Lean_Lsp_instToStringRpcRef___lam__0(v_r_boxed_30_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorIdx___impl(uint8_t v_x_34_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_box(v_x_34_);
v___x_36_ = lean_obj_tag_nat(v___x_35_);
lean_dec(v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorIdx___impl___boxed(lean_object* v_x_37_){
_start:
{
uint8_t v_x_4__boxed_38_; lean_object* v_res_39_; 
v_x_4__boxed_38_ = lean_unbox(v_x_37_);
v_res_39_ = l_Lean_Lsp_RpcWireFormat_ctorIdx___impl(v_x_4__boxed_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___redArg(lean_object* v_k_40_){
_start:
{
lean_inc(v_k_40_);
return v_k_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___redArg___boxed(lean_object* v_k_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lean_Lsp_RpcWireFormat_ctorElim___redArg(v_k_41_);
lean_dec(v_k_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim(lean_object* v_motive_43_, lean_object* v_ctorIdx_44_, uint8_t v_t_45_, lean_object* v_h_46_, lean_object* v_k_47_){
_start:
{
lean_inc(v_k_47_);
return v_k_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_ctorElim___boxed(lean_object* v_motive_48_, lean_object* v_ctorIdx_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_k_52_){
_start:
{
uint8_t v_t_boxed_53_; lean_object* v_res_54_; 
v_t_boxed_53_ = lean_unbox(v_t_50_);
v_res_54_ = l_Lean_Lsp_RpcWireFormat_ctorElim(v_motive_48_, v_ctorIdx_49_, v_t_boxed_53_, v_h_51_, v_k_52_);
lean_dec(v_k_52_);
lean_dec(v_ctorIdx_49_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___redArg(lean_object* v_v0_55_){
_start:
{
lean_inc(v_v0_55_);
return v_v0_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___redArg___boxed(lean_object* v_v0_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_Lsp_RpcWireFormat_v0_elim___redArg(v_v0_56_);
lean_dec(v_v0_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim(lean_object* v_motive_58_, uint8_t v_t_59_, lean_object* v_h_60_, lean_object* v_v0_61_){
_start:
{
lean_inc(v_v0_61_);
return v_v0_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v0_elim___boxed(lean_object* v_motive_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_v0_65_){
_start:
{
uint8_t v_t_boxed_66_; lean_object* v_res_67_; 
v_t_boxed_66_ = lean_unbox(v_t_63_);
v_res_67_ = l_Lean_Lsp_RpcWireFormat_v0_elim(v_motive_62_, v_t_boxed_66_, v_h_64_, v_v0_65_);
lean_dec(v_v0_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___redArg(lean_object* v_v1_68_){
_start:
{
lean_inc(v_v1_68_);
return v_v1_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___redArg___boxed(lean_object* v_v1_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Lsp_RpcWireFormat_v1_elim___redArg(v_v1_69_);
lean_dec(v_v1_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim(lean_object* v_motive_71_, uint8_t v_t_72_, lean_object* v_h_73_, lean_object* v_v1_74_){
_start:
{
lean_inc(v_v1_74_);
return v_v1_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_v1_elim___boxed(lean_object* v_motive_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_v1_78_){
_start:
{
uint8_t v_t_boxed_79_; lean_object* v_res_80_; 
v_t_boxed_79_ = lean_unbox(v_t_76_);
v_res_80_ = l_Lean_Lsp_RpcWireFormat_v1_elim(v_motive_75_, v_t_boxed_79_, v_h_77_, v_v1_78_);
lean_dec(v_v1_78_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson(lean_object* v_json_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = l_Lean_Json_getTag_x3f(v_json_95_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v___x_97_; 
v___x_97_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__1));
return v___x_97_;
}
else
{
lean_object* v_val_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v_val_98_ = lean_ctor_get(v___x_96_, 0);
lean_inc(v_val_98_);
lean_dec_ref_known(v___x_96_, 1);
v___x_99_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__2));
v___x_100_ = lean_string_dec_eq(v_val_98_, v___x_99_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__3));
v___x_102_ = lean_string_dec_eq(v_val_98_, v___x_101_);
lean_dec(v_val_98_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
v___x_103_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__5));
return v___x_103_;
}
else
{
lean_object* v___x_104_; 
v___x_104_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__6));
return v___x_104_;
}
}
else
{
lean_object* v___x_105_; 
lean_dec(v_val_98_);
v___x_105_ = ((lean_object*)(l_Lean_Lsp_instFromJsonRpcWireFormat_fromJson___closed__7));
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson(uint8_t v_x_112_){
_start:
{
if (v_x_112_ == 0)
{
lean_object* v___x_113_; 
v___x_113_ = ((lean_object*)(l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__0));
return v___x_113_;
}
else
{
lean_object* v___x_114_; 
v___x_114_ = ((lean_object*)(l_Lean_Lsp_instToJsonRpcWireFormat_toJson___closed__1));
return v___x_114_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instToJsonRpcWireFormat_toJson___boxed(lean_object* v_x_115_){
_start:
{
uint8_t v_x_44__boxed_116_; lean_object* v_res_117_; 
v_x_44__boxed_116_ = lean_unbox(v_x_115_);
v_res_117_ = l_Lean_Lsp_instToJsonRpcWireFormat_toJson(v_x_44__boxed_116_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName(uint8_t v_x_122_){
_start:
{
if (v_x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0));
return v___x_123_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1));
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RpcWireFormat_refFieldName___boxed(lean_object* v_x_125_){
_start:
{
uint8_t v_x_22__boxed_126_; lean_object* v_res_127_; 
v_x_22__boxed_126_ = lean_unbox(v_x_125_);
v_res_127_ = l_Lean_Lsp_RpcWireFormat_refFieldName(v_x_22__boxed_126_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef_default___redArg(lean_object* v_inst_128_){
_start:
{
size_t v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_usize_once(&l_Lean_Lsp_instInhabitedRpcRef_default___closed__0, &l_Lean_Lsp_instInhabitedRpcRef_default___closed__0_once, _init_l_Lean_Lsp_instInhabitedRpcRef_default___closed__0);
v___x_130_ = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(v___x_130_, 0, v_inst_128_);
lean_ctor_set_usize(v___x_130_, 1, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef_default(lean_object* v_00_u03b1_131_, lean_object* v_inst_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_Server_instInhabitedWithRpcRef_default___redArg(v_inst_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef___redArg(lean_object* v_inst_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_Server_instInhabitedWithRpcRef_default___redArg(v_inst_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedWithRpcRef(lean_object* v_a_136_, lean_object* v_inst_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Server_instInhabitedWithRpcRef_default___redArg(v_inst_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = ((lean_object*)(l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn___boxed__const__1_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_));
v___x_143_ = lean_st_mk_ref(v___x_142_);
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2____boxed(lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_();
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___redArg(lean_object* v_val_147_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; size_t v___x_151_; size_t v___x_152_; size_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; size_t v___x_157_; 
v___x_149_ = l_Lean_Server_freshWithRpcRefId;
v___x_150_ = lean_st_ref_take(v___x_149_);
v___x_151_ = ((size_t)1ULL);
v___x_152_ = lean_unbox_usize(v___x_150_);
v___x_153_ = lean_usize_add(v___x_152_, v___x_151_);
v___x_154_ = lean_box_usize(v___x_153_);
v___x_155_ = lean_st_ref_put(v___x_149_, v___x_154_);
v___x_156_ = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(v___x_156_, 0, v_val_147_);
v___x_157_ = lean_unbox_usize(v___x_150_);
lean_dec(v___x_150_);
lean_ctor_set_usize(v___x_156_, 1, v___x_157_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___redArg___boxed(lean_object* v_val_158_, lean_object* v_a_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_Server_WithRpcRef_mk___redArg(v_val_158_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk(lean_object* v_00_u03b1_161_, lean_object* v_val_162_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_Server_WithRpcRef_mk___redArg(v_val_162_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_WithRpcRef_mk___boxed(lean_object* v_00_u03b1_165_, lean_object* v_val_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_Server_WithRpcRef_mk(v_00_u03b1_165_, v_val_166_);
return v_res_168_;
}
}
static lean_object* _init_l_Lean_Server_rpcStoreRef___redArg___closed__5(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_174_ = ((lean_object*)(l_Lean_Server_rpcStoreRef___redArg___closed__4));
v___x_175_ = lean_unsigned_to_nat(15u);
v___x_176_ = lean_unsigned_to_nat(132u);
v___x_177_ = ((lean_object*)(l_Lean_Server_rpcStoreRef___redArg___closed__3));
v___x_178_ = ((lean_object*)(l_Lean_Server_rpcStoreRef___redArg___closed__2));
v___x_179_ = l_mkPanicMessageWithDecl(v___x_178_, v___x_177_, v___x_176_, v___x_175_, v___x_174_);
return v___x_179_;
}
}
static lean_object* _init_l_Lean_Server_rpcStoreRef___redArg___boxed__const__1(void){
_start:
{
size_t v___x_180_; lean_object* v___x_181_; 
v___x_180_ = l_Lean_Lsp_instInhabitedRpcRef_default;
v___x_181_ = lean_box_usize(v___x_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg(lean_object* v_inst_182_, lean_object* v_obj_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_aliveRefs_185_; lean_object* v_refsById_186_; size_t v_nextRef_187_; uint8_t v_wireFormat_188_; lean_object* v_val_189_; size_t v_id_190_; lean_object* v___x_191_; lean_object* v___f_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_aliveRefs_185_ = lean_ctor_get(v_a_184_, 0);
v_refsById_186_ = lean_ctor_get(v_a_184_, 1);
v_nextRef_187_ = lean_ctor_get_usize(v_a_184_, 2);
v_wireFormat_188_ = lean_ctor_get_uint8(v_a_184_, sizeof(void*)*3);
v_val_189_ = lean_ctor_get(v_obj_183_, 0);
v_id_190_ = lean_ctor_get_usize(v_obj_183_, 1);
v___x_191_ = ((lean_object*)(l_Lean_Server_rpcStoreRef___redArg___closed__0));
v___f_192_ = ((lean_object*)(l_Lean_Server_rpcStoreRef___redArg___closed__1));
v___x_193_ = ((lean_object*)(l_Lean_Lsp_instBEqRpcRef___closed__0));
v___x_194_ = ((lean_object*)(l_Lean_Lsp_instHashableRpcRef___closed__0));
v___x_195_ = lean_box_usize(v_id_190_);
v___x_196_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_191_, v___f_192_, v_refsById_186_, v___x_195_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_215_; 
lean_inc_ref(v_refsById_186_);
lean_inc_ref(v_aliveRefs_185_);
v_isSharedCheck_215_ = !lean_is_exclusive(v_a_184_);
if (v_isSharedCheck_215_ == 0)
{
lean_object* v_unused_216_; lean_object* v_unused_217_; 
v_unused_216_ = lean_ctor_get(v_a_184_, 1);
lean_dec(v_unused_216_);
v_unused_217_ = lean_ctor_get(v_a_184_, 0);
lean_dec(v_unused_217_);
v___x_198_ = v_a_184_;
v_isShared_199_ = v_isSharedCheck_215_;
goto v_resetjp_197_;
}
else
{
lean_dec(v_a_184_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_215_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; size_t v___x_208_; size_t v___x_209_; lean_object* v___x_211_; 
lean_inc(v_val_189_);
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v_inst_182_);
lean_ctor_set(v___x_200_, 1, v_val_189_);
v___x_201_ = lean_unsigned_to_nat(1u);
v___x_202_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
lean_ctor_set_usize(v___x_202_, 2, v_id_190_);
v___x_203_ = lean_box_usize(v_nextRef_187_);
v___x_204_ = l_Lean_PersistentHashMap_insert___redArg(v___x_193_, v___x_194_, v_aliveRefs_185_, v___x_203_, v___x_202_);
v___x_205_ = lean_box_usize(v_id_190_);
v___x_206_ = lean_box_usize(v_nextRef_187_);
v___x_207_ = l_Lean_PersistentHashMap_insert___redArg(v___x_191_, v___f_192_, v_refsById_186_, v___x_205_, v___x_206_);
v___x_208_ = ((size_t)1ULL);
v___x_209_ = lean_usize_add(v_nextRef_187_, v___x_208_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v___x_207_);
lean_ctor_set(v___x_198_, 0, v___x_204_);
v___x_211_ = v___x_198_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_204_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v___x_207_);
lean_ctor_set_uint8(v_reuseFailAlloc_214_, sizeof(void*)*3, v_wireFormat_188_);
v___x_211_ = v_reuseFailAlloc_214_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_ctor_set_usize(v___x_211_, 2, v___x_209_);
v___x_212_ = lean_box_usize(v_nextRef_187_);
v___x_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
lean_ctor_set(v___x_213_, 1, v___x_211_);
return v___x_213_;
}
}
}
else
{
lean_object* v_val_218_; lean_object* v___x_219_; 
lean_dec(v_inst_182_);
v_val_218_ = lean_ctor_get(v___x_196_, 0);
lean_inc_n(v_val_218_, 2);
lean_dec_ref_known(v___x_196_, 1);
v___x_219_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_193_, v___x_194_, v_aliveRefs_185_, v_val_218_);
if (lean_obj_tag(v___x_219_) == 1)
{
lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_241_; 
lean_inc_ref(v_refsById_186_);
lean_inc_ref(v_aliveRefs_185_);
v_isSharedCheck_241_ = !lean_is_exclusive(v_a_184_);
if (v_isSharedCheck_241_ == 0)
{
lean_object* v_unused_242_; lean_object* v_unused_243_; 
v_unused_242_ = lean_ctor_get(v_a_184_, 1);
lean_dec(v_unused_242_);
v_unused_243_ = lean_ctor_get(v_a_184_, 0);
lean_dec(v_unused_243_);
v___x_221_ = v_a_184_;
v_isShared_222_ = v_isSharedCheck_241_;
goto v_resetjp_220_;
}
else
{
lean_dec(v_a_184_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_241_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v_val_223_; lean_object* v_obj_224_; size_t v_id_225_; lean_object* v_rc_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_240_; 
v_val_223_ = lean_ctor_get(v___x_219_, 0);
lean_inc(v_val_223_);
lean_dec_ref_known(v___x_219_, 1);
v_obj_224_ = lean_ctor_get(v_val_223_, 0);
v_id_225_ = lean_ctor_get_usize(v_val_223_, 2);
v_rc_226_ = lean_ctor_get(v_val_223_, 1);
v_isSharedCheck_240_ = !lean_is_exclusive(v_val_223_);
if (v_isSharedCheck_240_ == 0)
{
v___x_228_ = v_val_223_;
v_isShared_229_ = v_isSharedCheck_240_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_rc_226_);
lean_inc(v_obj_224_);
lean_dec(v_val_223_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_240_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = lean_nat_add(v_rc_226_, v___x_230_);
lean_dec(v_rc_226_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 1, v___x_231_);
v___x_233_ = v___x_228_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_obj_224_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___x_231_);
lean_ctor_set_usize(v_reuseFailAlloc_239_, 2, v_id_225_);
v___x_233_ = v_reuseFailAlloc_239_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_234_; lean_object* v___x_236_; 
lean_inc(v_val_218_);
v___x_234_ = l_Lean_PersistentHashMap_insert___redArg(v___x_193_, v___x_194_, v_aliveRefs_185_, v_val_218_, v___x_233_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_234_);
v___x_236_ = v___x_221_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_234_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_refsById_186_);
lean_ctor_set_usize(v_reuseFailAlloc_238_, 2, v_nextRef_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_238_, sizeof(void*)*3, v_wireFormat_188_);
v___x_236_ = v_reuseFailAlloc_238_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_237_; 
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v_val_218_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
return v___x_237_;
}
}
}
}
}
else
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec(v___x_219_);
lean_dec(v_val_218_);
v___x_244_ = lean_obj_once(&l_Lean_Server_rpcStoreRef___redArg___closed__5, &l_Lean_Server_rpcStoreRef___redArg___closed__5_once, _init_l_Lean_Server_rpcStoreRef___redArg___closed__5);
v___x_245_ = l_Lean_Server_rpcStoreRef___redArg___boxed__const__1;
v___x_246_ = l_panic___redArg(v___x_245_, v___x_244_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v_a_184_);
return v___x_247_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___redArg___boxed(lean_object* v_inst_248_, lean_object* v_obj_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Server_rpcStoreRef___redArg(v_inst_248_, v_obj_249_, v_a_250_);
lean_dec_ref(v_obj_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef(lean_object* v_00_u03b1_252_, lean_object* v_inst_253_, lean_object* v_obj_254_, lean_object* v_a_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lean_Server_rpcStoreRef___redArg(v_inst_253_, v_obj_254_, v_a_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcStoreRef___boxed(lean_object* v_00_u03b1_257_, lean_object* v_inst_258_, lean_object* v_obj_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Server_rpcStoreRef(v_00_u03b1_257_, v_inst_258_, v_obj_259_, v_a_260_);
lean_dec_ref(v_obj_259_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___redArg(lean_object* v_inst_269_, size_t v_r_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_aliveRefs_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_aliveRefs_272_ = lean_ctor_get(v_a_271_, 0);
v___x_273_ = ((lean_object*)(l_Lean_Lsp_instBEqRpcRef___closed__0));
v___x_274_ = ((lean_object*)(l_Lean_Lsp_instHashableRpcRef___closed__0));
v___x_275_ = lean_box_usize(v_r_270_);
v___x_276_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_273_, v___x_274_, v_aliveRefs_272_, v___x_275_);
if (lean_obj_tag(v___x_276_) == 1)
{
lean_object* v_val_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_314_; 
v_val_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_314_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_314_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_val_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_314_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v_obj_281_; size_t v_id_282_; lean_object* v___x_283_; 
v_obj_281_ = lean_ctor_get(v_val_277_, 0);
lean_inc(v_obj_281_);
v_id_282_ = lean_ctor_get_usize(v_val_277_, 2);
lean_dec(v_val_277_);
v___x_283_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_obj_281_, v_inst_269_);
if (lean_obj_tag(v___x_283_) == 1)
{
lean_object* v_val_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_292_; 
lean_dec(v_obj_281_);
lean_del_object(v___x_279_);
lean_dec(v_inst_269_);
v_val_284_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_292_ == 0)
{
v___x_286_ = v___x_283_;
v_isShared_287_ = v_isSharedCheck_292_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_val_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_292_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_288_; lean_object* v___x_290_; 
v___x_288_ = lean_alloc_ctor(0, 1, sizeof(size_t)*1);
lean_ctor_set(v___x_288_, 0, v_val_284_);
lean_ctor_set_usize(v___x_288_, 1, v_id_282_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_288_);
v___x_290_ = v___x_286_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_288_);
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
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_312_; 
lean_dec(v___x_283_);
v___x_293_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__0));
v___x_294_ = lean_usize_to_nat(v_r_270_);
v___x_295_ = l_Nat_reprFast(v___x_294_);
v___x_296_ = lean_string_append(v___x_293_, v___x_295_);
lean_dec_ref(v___x_295_);
v___x_297_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__1));
v___x_298_ = lean_string_append(v___x_296_, v___x_297_);
v___x_299_ = 1;
v___x_300_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_inst_269_, v___x_299_);
v___x_301_ = lean_string_append(v___x_298_, v___x_300_);
lean_dec_ref(v___x_300_);
v___x_302_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__2));
v___x_303_ = lean_string_append(v___x_301_, v___x_302_);
v___x_304_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__3));
v___x_305_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_obj_281_);
lean_dec(v_obj_281_);
v___x_306_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_305_, v___x_299_);
v___x_307_ = lean_string_append(v___x_304_, v___x_306_);
lean_dec_ref(v___x_306_);
v___x_308_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__4));
v___x_309_ = lean_string_append(v___x_307_, v___x_308_);
v___x_310_ = lean_string_append(v___x_303_, v___x_309_);
lean_dec_ref(v___x_309_);
if (v_isShared_280_ == 0)
{
lean_ctor_set_tag(v___x_279_, 0);
lean_ctor_set(v___x_279_, 0, v___x_310_);
v___x_312_ = v___x_279_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_310_);
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
else
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
lean_dec(v___x_276_);
lean_dec(v_inst_269_);
v___x_315_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__5));
v___x_316_ = lean_usize_to_nat(v_r_270_);
v___x_317_ = l_Nat_reprFast(v___x_316_);
v___x_318_ = lean_string_append(v___x_315_, v___x_317_);
lean_dec_ref(v___x_317_);
v___x_319_ = ((lean_object*)(l_Lean_Server_rpcGetRef___redArg___closed__6));
v___x_320_ = lean_string_append(v___x_318_, v___x_319_);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___redArg___boxed(lean_object* v_inst_322_, lean_object* v_r_323_, lean_object* v_a_324_){
_start:
{
size_t v_r_boxed_325_; lean_object* v_res_326_; 
v_r_boxed_325_ = lean_unbox_usize(v_r_323_);
lean_dec(v_r_323_);
v_res_326_ = l_Lean_Server_rpcGetRef___redArg(v_inst_322_, v_r_boxed_325_, v_a_324_);
lean_dec_ref(v_a_324_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef(lean_object* v_00_u03b1_327_, lean_object* v_inst_328_, size_t v_r_329_, lean_object* v_a_330_){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l_Lean_Server_rpcGetRef___redArg(v_inst_328_, v_r_329_, v_a_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcGetRef___boxed(lean_object* v_00_u03b1_332_, lean_object* v_inst_333_, lean_object* v_r_334_, lean_object* v_a_335_){
_start:
{
size_t v_r_boxed_336_; lean_object* v_res_337_; 
v_r_boxed_336_ = lean_unbox_usize(v_r_334_);
lean_dec(v_r_334_);
v_res_337_ = l_Lean_Server_rpcGetRef(v_00_u03b1_332_, v_inst_333_, v_r_boxed_336_, v_a_335_);
lean_dec_ref(v_a_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11(lean_object* v_xs_338_, size_t v_v_339_, lean_object* v_i_340_){
_start:
{
lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = lean_array_get_size(v_xs_338_);
v___x_342_ = lean_nat_dec_lt(v_i_340_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; 
lean_dec(v_i_340_);
v___x_343_ = lean_box(0);
return v___x_343_;
}
else
{
lean_object* v___x_344_; size_t v___x_345_; uint8_t v___x_346_; 
v___x_344_ = lean_array_fget_borrowed(v_xs_338_, v_i_340_);
v___x_345_ = lean_unbox_usize(v___x_344_);
v___x_346_ = lean_usize_dec_eq(v___x_345_, v_v_339_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(1u);
v___x_348_ = lean_nat_add(v_i_340_, v___x_347_);
lean_dec(v_i_340_);
v_i_340_ = v___x_348_;
goto _start;
}
else
{
lean_object* v___x_350_; 
v___x_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_350_, 0, v_i_340_);
return v___x_350_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11___boxed(lean_object* v_xs_351_, lean_object* v_v_352_, lean_object* v_i_353_){
_start:
{
size_t v_v_boxed_354_; lean_object* v_res_355_; 
v_v_boxed_354_ = lean_unbox_usize(v_v_352_);
lean_dec(v_v_352_);
v_res_355_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11(v_xs_351_, v_v_boxed_354_, v_i_353_);
lean_dec_ref(v_xs_351_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8(lean_object* v_xs_356_, size_t v_v_357_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(0u);
v___x_359_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8_spec__11(v_xs_356_, v_v_357_, v___x_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8___boxed(lean_object* v_xs_360_, lean_object* v_v_361_){
_start:
{
size_t v_v_boxed_362_; lean_object* v_res_363_; 
v_v_boxed_362_ = lean_unbox_usize(v_v_361_);
lean_dec(v_v_361_);
v_res_363_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8(v_xs_360_, v_v_boxed_362_);
lean_dec_ref(v_xs_360_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(lean_object* v_x_364_, size_t v_x_365_, size_t v_x_366_){
_start:
{
if (lean_obj_tag(v_x_364_) == 0)
{
lean_object* v_es_367_; lean_object* v___x_368_; size_t v___x_369_; size_t v___x_370_; lean_object* v_j_371_; lean_object* v_entry_372_; 
v_es_367_ = lean_ctor_get(v_x_364_, 0);
v___x_368_ = lean_box(2);
v___x_369_ = ((size_t)31ULL);
v___x_370_ = lean_usize_land(v_x_365_, v___x_369_);
v_j_371_ = lean_usize_to_nat(v___x_370_);
v_entry_372_ = lean_array_get(v___x_368_, v_es_367_, v_j_371_);
switch(lean_obj_tag(v_entry_372_))
{
case 0:
{
lean_object* v_key_373_; size_t v___x_374_; uint8_t v___x_375_; 
v_key_373_ = lean_ctor_get(v_entry_372_, 0);
lean_inc(v_key_373_);
lean_dec_ref_known(v_entry_372_, 2);
v___x_374_ = lean_unbox_usize(v_key_373_);
lean_dec(v_key_373_);
v___x_375_ = lean_usize_dec_eq(v_x_366_, v___x_374_);
if (v___x_375_ == 0)
{
lean_dec(v_j_371_);
return v_x_364_;
}
else
{
lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_383_; 
lean_inc_ref(v_es_367_);
v_isSharedCheck_383_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_383_ == 0)
{
lean_object* v_unused_384_; 
v_unused_384_ = lean_ctor_get(v_x_364_, 0);
lean_dec(v_unused_384_);
v___x_377_ = v_x_364_;
v_isShared_378_ = v_isSharedCheck_383_;
goto v_resetjp_376_;
}
else
{
lean_dec(v_x_364_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_383_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_379_ = lean_array_set(v_es_367_, v_j_371_, v___x_368_);
lean_dec(v_j_371_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_379_);
v___x_381_ = v___x_377_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
case 1:
{
lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_419_; 
lean_inc_ref(v_es_367_);
v_isSharedCheck_419_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_419_ == 0)
{
lean_object* v_unused_420_; 
v_unused_420_ = lean_ctor_get(v_x_364_, 0);
lean_dec(v_unused_420_);
v___x_386_ = v_x_364_;
v_isShared_387_ = v_isSharedCheck_419_;
goto v_resetjp_385_;
}
else
{
lean_dec(v_x_364_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_419_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v_node_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_418_; 
v_node_388_ = lean_ctor_get(v_entry_372_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v_entry_372_);
if (v_isSharedCheck_418_ == 0)
{
v___x_390_ = v_entry_372_;
v_isShared_391_ = v_isSharedCheck_418_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_node_388_);
lean_dec(v_entry_372_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_418_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
size_t v___x_392_; lean_object* v_entries_393_; size_t v___x_394_; lean_object* v_newNode_395_; lean_object* v___x_396_; 
v___x_392_ = ((size_t)5ULL);
v_entries_393_ = lean_array_set(v_es_367_, v_j_371_, v___x_368_);
v___x_394_ = lean_usize_shift_right(v_x_365_, v___x_392_);
v_newNode_395_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(v_node_388_, v___x_394_, v_x_366_);
lean_inc_ref(v_newNode_395_);
v___x_396_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_395_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v___x_398_; 
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v_newNode_395_);
v___x_398_ = v___x_390_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_newNode_395_);
v___x_398_ = v_reuseFailAlloc_403_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_399_; lean_object* v___x_401_; 
v___x_399_ = lean_array_set(v_entries_393_, v_j_371_, v___x_398_);
lean_dec(v_j_371_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v___x_399_);
v___x_401_ = v___x_386_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_399_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
else
{
lean_object* v_val_404_; lean_object* v_fst_405_; lean_object* v_snd_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_417_; 
lean_dec_ref(v_newNode_395_);
lean_del_object(v___x_390_);
v_val_404_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_val_404_);
lean_dec_ref_known(v___x_396_, 1);
v_fst_405_ = lean_ctor_get(v_val_404_, 0);
v_snd_406_ = lean_ctor_get(v_val_404_, 1);
v_isSharedCheck_417_ = !lean_is_exclusive(v_val_404_);
if (v_isSharedCheck_417_ == 0)
{
v___x_408_ = v_val_404_;
v_isShared_409_ = v_isSharedCheck_417_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_snd_406_);
lean_inc(v_fst_405_);
lean_dec(v_val_404_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_417_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_411_; 
if (v_isShared_409_ == 0)
{
v___x_411_ = v___x_408_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_fst_405_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_snd_406_);
v___x_411_ = v_reuseFailAlloc_416_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_412_ = lean_array_set(v_entries_393_, v_j_371_, v___x_411_);
lean_dec(v_j_371_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v___x_412_);
v___x_414_ = v___x_386_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_371_);
return v_x_364_;
}
}
}
else
{
lean_object* v_ks_421_; lean_object* v_vs_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_436_; 
v_ks_421_ = lean_ctor_get(v_x_364_, 0);
v_vs_422_ = lean_ctor_get(v_x_364_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_436_ == 0)
{
v___x_424_ = v_x_364_;
v_isShared_425_ = v_isSharedCheck_436_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_vs_422_);
lean_inc(v_ks_421_);
lean_dec(v_x_364_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_436_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; 
v___x_426_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4_spec__8(v_ks_421_, v_x_366_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v___x_428_; 
if (v_isShared_425_ == 0)
{
v___x_428_ = v___x_424_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_ks_421_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_vs_422_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
else
{
lean_object* v_val_430_; lean_object* v_keys_x27_431_; lean_object* v_vals_x27_432_; lean_object* v___x_434_; 
v_val_430_ = lean_ctor_get(v___x_426_, 0);
lean_inc_n(v_val_430_, 2);
lean_dec_ref_known(v___x_426_, 1);
v_keys_x27_431_ = l_Array_eraseIdx___redArg(v_ks_421_, v_val_430_);
v_vals_x27_432_ = l_Array_eraseIdx___redArg(v_vs_422_, v_val_430_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v_vals_x27_432_);
lean_ctor_set(v___x_424_, 0, v_keys_x27_431_);
v___x_434_ = v___x_424_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_keys_x27_431_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_vals_x27_432_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg___boxed(lean_object* v_x_437_, lean_object* v_x_438_, lean_object* v_x_439_){
_start:
{
size_t v_x_1630__boxed_440_; size_t v_x_1631__boxed_441_; lean_object* v_res_442_; 
v_x_1630__boxed_440_ = lean_unbox_usize(v_x_438_);
lean_dec(v_x_438_);
v_x_1631__boxed_441_ = lean_unbox_usize(v_x_439_);
lean_dec(v_x_439_);
v_res_442_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(v_x_437_, v_x_1630__boxed_440_, v_x_1631__boxed_441_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(lean_object* v_x_443_, size_t v_x_444_){
_start:
{
uint64_t v___x_445_; size_t v_h_446_; lean_object* v___x_447_; 
v___x_445_ = l_Lean_Lsp_instHashableRpcRef_hash(v_x_444_);
v_h_446_ = lean_uint64_to_usize(v___x_445_);
v___x_447_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(v_x_443_, v_h_446_, v_x_444_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg___boxed(lean_object* v_x_448_, lean_object* v_x_449_){
_start:
{
size_t v_x_1768__boxed_450_; lean_object* v_res_451_; 
v_x_1768__boxed_450_ = lean_unbox_usize(v_x_449_);
lean_dec(v_x_449_);
v_res_451_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(v_x_448_, v_x_1768__boxed_450_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_452_, lean_object* v_vals_453_, lean_object* v_i_454_, size_t v_k_455_){
_start:
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = lean_array_get_size(v_keys_452_);
v___x_457_ = lean_nat_dec_lt(v_i_454_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
lean_dec(v_i_454_);
v___x_458_ = lean_box(0);
return v___x_458_;
}
else
{
lean_object* v_k_x27_459_; size_t v___x_460_; uint8_t v___x_461_; 
v_k_x27_459_ = lean_array_fget_borrowed(v_keys_452_, v_i_454_);
v___x_460_ = lean_unbox_usize(v_k_x27_459_);
v___x_461_ = lean_usize_dec_eq(v_k_455_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_unsigned_to_nat(1u);
v___x_463_ = lean_nat_add(v_i_454_, v___x_462_);
lean_dec(v_i_454_);
v_i_454_ = v___x_463_;
goto _start;
}
else
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_array_fget_borrowed(v_vals_453_, v_i_454_);
lean_dec(v_i_454_);
lean_inc(v___x_465_);
v___x_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_467_, lean_object* v_vals_468_, lean_object* v_i_469_, lean_object* v_k_470_){
_start:
{
size_t v_k_boxed_471_; lean_object* v_res_472_; 
v_k_boxed_471_ = lean_unbox_usize(v_k_470_);
lean_dec(v_k_470_);
v_res_472_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(v_keys_467_, v_vals_468_, v_i_469_, v_k_boxed_471_);
lean_dec_ref(v_vals_468_);
lean_dec_ref(v_keys_467_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(lean_object* v_x_473_, size_t v_x_474_, size_t v_x_475_){
_start:
{
if (lean_obj_tag(v_x_473_) == 0)
{
lean_object* v_es_476_; lean_object* v___x_477_; size_t v___x_478_; size_t v___x_479_; lean_object* v_j_480_; lean_object* v___x_481_; 
v_es_476_ = lean_ctor_get(v_x_473_, 0);
v___x_477_ = lean_box(2);
v___x_478_ = ((size_t)31ULL);
v___x_479_ = lean_usize_land(v_x_474_, v___x_478_);
v_j_480_ = lean_usize_to_nat(v___x_479_);
v___x_481_ = lean_array_get_borrowed(v___x_477_, v_es_476_, v_j_480_);
lean_dec(v_j_480_);
switch(lean_obj_tag(v___x_481_))
{
case 0:
{
lean_object* v_key_482_; lean_object* v_val_483_; size_t v___x_484_; uint8_t v___x_485_; 
v_key_482_ = lean_ctor_get(v___x_481_, 0);
v_val_483_ = lean_ctor_get(v___x_481_, 1);
v___x_484_ = lean_unbox_usize(v_key_482_);
v___x_485_ = lean_usize_dec_eq(v_x_475_, v___x_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; 
v___x_486_ = lean_box(0);
return v___x_486_;
}
else
{
lean_object* v___x_487_; 
lean_inc(v_val_483_);
v___x_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_487_, 0, v_val_483_);
return v___x_487_;
}
}
case 1:
{
lean_object* v_node_488_; size_t v___x_489_; size_t v___x_490_; 
v_node_488_ = lean_ctor_get(v___x_481_, 0);
v___x_489_ = ((size_t)5ULL);
v___x_490_ = lean_usize_shift_right(v_x_474_, v___x_489_);
v_x_473_ = v_node_488_;
v_x_474_ = v___x_490_;
goto _start;
}
default: 
{
lean_object* v___x_492_; 
v___x_492_ = lean_box(0);
return v___x_492_;
}
}
}
else
{
lean_object* v_ks_493_; lean_object* v_vs_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v_ks_493_ = lean_ctor_get(v_x_473_, 0);
v_vs_494_ = lean_ctor_get(v_x_473_, 1);
v___x_495_ = lean_unsigned_to_nat(0u);
v___x_496_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(v_ks_493_, v_vs_494_, v___x_495_, v_x_475_);
return v___x_496_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg___boxed(lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
size_t v_x_1798__boxed_500_; size_t v_x_1799__boxed_501_; lean_object* v_res_502_; 
v_x_1798__boxed_500_ = lean_unbox_usize(v_x_498_);
lean_dec(v_x_498_);
v_x_1799__boxed_501_ = lean_unbox_usize(v_x_499_);
lean_dec(v_x_499_);
v_res_502_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(v_x_497_, v_x_1798__boxed_500_, v_x_1799__boxed_501_);
lean_dec_ref(v_x_497_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(lean_object* v_x_503_, size_t v_x_504_){
_start:
{
uint64_t v___x_505_; size_t v___x_506_; lean_object* v___x_507_; 
v___x_505_ = l_Lean_Lsp_instHashableRpcRef_hash(v_x_504_);
v___x_506_ = lean_uint64_to_usize(v___x_505_);
v___x_507_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(v_x_503_, v___x_506_, v_x_504_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg___boxed(lean_object* v_x_508_, lean_object* v_x_509_){
_start:
{
size_t v_x_1847__boxed_510_; lean_object* v_res_511_; 
v_x_1847__boxed_510_ = lean_unbox_usize(v_x_509_);
lean_dec(v_x_509_);
v_res_511_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(v_x_508_, v_x_1847__boxed_510_);
lean_dec_ref(v_x_508_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14(lean_object* v_xs_512_, size_t v_v_513_, lean_object* v_i_514_){
_start:
{
lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_515_ = lean_array_get_size(v_xs_512_);
v___x_516_ = lean_nat_dec_lt(v_i_514_, v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
lean_dec(v_i_514_);
v___x_517_ = lean_box(0);
return v___x_517_;
}
else
{
lean_object* v___x_518_; size_t v___x_519_; uint8_t v___x_520_; 
v___x_518_ = lean_array_fget_borrowed(v_xs_512_, v_i_514_);
v___x_519_ = lean_unbox_usize(v___x_518_);
v___x_520_ = lean_usize_dec_eq(v___x_519_, v_v_513_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_unsigned_to_nat(1u);
v___x_522_ = lean_nat_add(v_i_514_, v___x_521_);
lean_dec(v_i_514_);
v_i_514_ = v___x_522_;
goto _start;
}
else
{
lean_object* v___x_524_; 
v___x_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_524_, 0, v_i_514_);
return v___x_524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14___boxed(lean_object* v_xs_525_, lean_object* v_v_526_, lean_object* v_i_527_){
_start:
{
size_t v_v_boxed_528_; lean_object* v_res_529_; 
v_v_boxed_528_ = lean_unbox_usize(v_v_526_);
lean_dec(v_v_526_);
v_res_529_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14(v_xs_525_, v_v_boxed_528_, v_i_527_);
lean_dec_ref(v_xs_525_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11(lean_object* v_xs_530_, size_t v_v_531_){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = lean_unsigned_to_nat(0u);
v___x_533_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11_spec__14(v_xs_530_, v_v_531_, v___x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11___boxed(lean_object* v_xs_534_, lean_object* v_v_535_){
_start:
{
size_t v_v_boxed_536_; lean_object* v_res_537_; 
v_v_boxed_536_ = lean_unbox_usize(v_v_535_);
lean_dec(v_v_535_);
v_res_537_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11(v_xs_534_, v_v_boxed_536_);
lean_dec_ref(v_xs_534_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(lean_object* v_x_538_, size_t v_x_539_, size_t v_x_540_){
_start:
{
if (lean_obj_tag(v_x_538_) == 0)
{
lean_object* v_es_541_; lean_object* v___x_542_; size_t v___x_543_; size_t v___x_544_; lean_object* v_j_545_; lean_object* v_entry_546_; 
v_es_541_ = lean_ctor_get(v_x_538_, 0);
v___x_542_ = lean_box(2);
v___x_543_ = ((size_t)31ULL);
v___x_544_ = lean_usize_land(v_x_539_, v___x_543_);
v_j_545_ = lean_usize_to_nat(v___x_544_);
v_entry_546_ = lean_array_get(v___x_542_, v_es_541_, v_j_545_);
switch(lean_obj_tag(v_entry_546_))
{
case 0:
{
lean_object* v_key_547_; size_t v___x_548_; uint8_t v___x_549_; 
v_key_547_ = lean_ctor_get(v_entry_546_, 0);
lean_inc(v_key_547_);
lean_dec_ref_known(v_entry_546_, 2);
v___x_548_ = lean_unbox_usize(v_key_547_);
lean_dec(v_key_547_);
v___x_549_ = lean_usize_dec_eq(v_x_540_, v___x_548_);
if (v___x_549_ == 0)
{
lean_dec(v_j_545_);
return v_x_538_;
}
else
{
lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_557_; 
lean_inc_ref(v_es_541_);
v_isSharedCheck_557_ = !lean_is_exclusive(v_x_538_);
if (v_isSharedCheck_557_ == 0)
{
lean_object* v_unused_558_; 
v_unused_558_ = lean_ctor_get(v_x_538_, 0);
lean_dec(v_unused_558_);
v___x_551_ = v_x_538_;
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
else
{
lean_dec(v_x_538_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_555_; 
v___x_553_ = lean_array_set(v_es_541_, v_j_545_, v___x_542_);
lean_dec(v_j_545_);
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
}
case 1:
{
lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_593_; 
lean_inc_ref(v_es_541_);
v_isSharedCheck_593_ = !lean_is_exclusive(v_x_538_);
if (v_isSharedCheck_593_ == 0)
{
lean_object* v_unused_594_; 
v_unused_594_ = lean_ctor_get(v_x_538_, 0);
lean_dec(v_unused_594_);
v___x_560_ = v_x_538_;
v_isShared_561_ = v_isSharedCheck_593_;
goto v_resetjp_559_;
}
else
{
lean_dec(v_x_538_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_593_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v_node_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_592_; 
v_node_562_ = lean_ctor_get(v_entry_546_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v_entry_546_);
if (v_isSharedCheck_592_ == 0)
{
v___x_564_ = v_entry_546_;
v_isShared_565_ = v_isSharedCheck_592_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_node_562_);
lean_dec(v_entry_546_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_592_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
size_t v___x_566_; lean_object* v_entries_567_; size_t v___x_568_; lean_object* v_newNode_569_; lean_object* v___x_570_; 
v___x_566_ = ((size_t)5ULL);
v_entries_567_ = lean_array_set(v_es_541_, v_j_545_, v___x_542_);
v___x_568_ = lean_usize_shift_right(v_x_539_, v___x_566_);
v_newNode_569_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(v_node_562_, v___x_568_, v_x_540_);
lean_inc_ref(v_newNode_569_);
v___x_570_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_569_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v___x_572_; 
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 0, v_newNode_569_);
v___x_572_ = v___x_564_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_newNode_569_);
v___x_572_ = v_reuseFailAlloc_577_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_573_; lean_object* v___x_575_; 
v___x_573_ = lean_array_set(v_entries_567_, v_j_545_, v___x_572_);
lean_dec(v_j_545_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_573_);
v___x_575_ = v___x_560_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
else
{
lean_object* v_val_578_; lean_object* v_fst_579_; lean_object* v_snd_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_591_; 
lean_dec_ref(v_newNode_569_);
lean_del_object(v___x_564_);
v_val_578_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_val_578_);
lean_dec_ref_known(v___x_570_, 1);
v_fst_579_ = lean_ctor_get(v_val_578_, 0);
v_snd_580_ = lean_ctor_get(v_val_578_, 1);
v_isSharedCheck_591_ = !lean_is_exclusive(v_val_578_);
if (v_isSharedCheck_591_ == 0)
{
v___x_582_ = v_val_578_;
v_isShared_583_ = v_isSharedCheck_591_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_snd_580_);
lean_inc(v_fst_579_);
lean_dec(v_val_578_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_591_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_fst_579_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v_snd_580_);
v___x_585_ = v_reuseFailAlloc_590_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_586_; lean_object* v___x_588_; 
v___x_586_ = lean_array_set(v_entries_567_, v_j_545_, v___x_585_);
lean_dec(v_j_545_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_586_);
v___x_588_ = v___x_560_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_586_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_545_);
return v_x_538_;
}
}
}
else
{
lean_object* v_ks_595_; lean_object* v_vs_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_610_; 
v_ks_595_ = lean_ctor_get(v_x_538_, 0);
v_vs_596_ = lean_ctor_get(v_x_538_, 1);
v_isSharedCheck_610_ = !lean_is_exclusive(v_x_538_);
if (v_isSharedCheck_610_ == 0)
{
v___x_598_ = v_x_538_;
v_isShared_599_ = v_isSharedCheck_610_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_vs_596_);
lean_inc(v_ks_595_);
lean_dec(v_x_538_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_610_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_600_; 
v___x_600_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6_spec__11(v_ks_595_, v_x_540_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v___x_602_; 
if (v_isShared_599_ == 0)
{
v___x_602_ = v___x_598_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_ks_595_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_vs_596_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
else
{
lean_object* v_val_604_; lean_object* v_keys_x27_605_; lean_object* v_vals_x27_606_; lean_object* v___x_608_; 
v_val_604_ = lean_ctor_get(v___x_600_, 0);
lean_inc_n(v_val_604_, 2);
lean_dec_ref_known(v___x_600_, 1);
v_keys_x27_605_ = l_Array_eraseIdx___redArg(v_ks_595_, v_val_604_);
v_vals_x27_606_ = l_Array_eraseIdx___redArg(v_vs_596_, v_val_604_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v_vals_x27_606_);
lean_ctor_set(v___x_598_, 0, v_keys_x27_605_);
v___x_608_ = v___x_598_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_keys_x27_605_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_vals_x27_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg___boxed(lean_object* v_x_611_, lean_object* v_x_612_, lean_object* v_x_613_){
_start:
{
size_t v_x_1883__boxed_614_; size_t v_x_1884__boxed_615_; lean_object* v_res_616_; 
v_x_1883__boxed_614_ = lean_unbox_usize(v_x_612_);
lean_dec(v_x_612_);
v_x_1884__boxed_615_ = lean_unbox_usize(v_x_613_);
lean_dec(v_x_613_);
v_res_616_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(v_x_611_, v_x_1883__boxed_614_, v_x_1884__boxed_615_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(lean_object* v_x_617_, size_t v_x_618_){
_start:
{
uint64_t v___x_619_; size_t v_h_620_; lean_object* v___x_621_; 
v___x_619_ = lean_usize_to_uint64(v_x_618_);
v_h_620_ = lean_uint64_to_usize(v___x_619_);
v___x_621_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(v_x_617_, v_h_620_, v_x_618_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg___boxed(lean_object* v_x_622_, lean_object* v_x_623_){
_start:
{
size_t v_x_2021__boxed_624_; lean_object* v_res_625_; 
v_x_2021__boxed_624_ = lean_unbox_usize(v_x_623_);
lean_dec(v_x_623_);
v_res_625_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(v_x_622_, v_x_2021__boxed_624_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_x_626_, lean_object* v_x_627_, size_t v_x_628_, lean_object* v_x_629_){
_start:
{
lean_object* v_ks_630_; lean_object* v_vs_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_658_; 
v_ks_630_ = lean_ctor_get(v_x_626_, 0);
v_vs_631_ = lean_ctor_get(v_x_626_, 1);
v_isSharedCheck_658_ = !lean_is_exclusive(v_x_626_);
if (v_isSharedCheck_658_ == 0)
{
v___x_633_ = v_x_626_;
v_isShared_634_ = v_isSharedCheck_658_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_vs_631_);
lean_inc(v_ks_630_);
lean_dec(v_x_626_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_658_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_635_ = lean_array_get_size(v_ks_630_);
v___x_636_ = lean_nat_dec_lt(v_x_627_, v___x_635_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_641_; 
lean_dec(v_x_627_);
v___x_637_ = lean_box_usize(v_x_628_);
v___x_638_ = lean_array_push(v_ks_630_, v___x_637_);
v___x_639_ = lean_array_push(v_vs_631_, v_x_629_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 1, v___x_639_);
lean_ctor_set(v___x_633_, 0, v___x_638_);
v___x_641_ = v___x_633_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v___x_639_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
else
{
lean_object* v_k_x27_643_; size_t v___x_644_; uint8_t v___x_645_; 
v_k_x27_643_ = lean_array_fget_borrowed(v_ks_630_, v_x_627_);
v___x_644_ = lean_unbox_usize(v_k_x27_643_);
v___x_645_ = lean_usize_dec_eq(v_x_628_, v___x_644_);
if (v___x_645_ == 0)
{
lean_object* v___x_647_; 
if (v_isShared_634_ == 0)
{
v___x_647_ = v___x_633_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_ks_630_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v_vs_631_);
v___x_647_ = v_reuseFailAlloc_651_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = lean_unsigned_to_nat(1u);
v___x_649_ = lean_nat_add(v_x_627_, v___x_648_);
lean_dec(v_x_627_);
v_x_626_ = v___x_647_;
v_x_627_ = v___x_649_;
goto _start;
}
}
else
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_656_; 
v___x_652_ = lean_box_usize(v_x_628_);
v___x_653_ = lean_array_fset(v_ks_630_, v_x_627_, v___x_652_);
v___x_654_ = lean_array_fset(v_vs_631_, v_x_627_, v_x_629_);
lean_dec(v_x_627_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 1, v___x_654_);
lean_ctor_set(v___x_633_, 0, v___x_653_);
v___x_656_ = v___x_633_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_653_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v___x_654_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_x_659_, lean_object* v_x_660_, lean_object* v_x_661_, lean_object* v_x_662_){
_start:
{
size_t v_x_2032__boxed_663_; lean_object* v_res_664_; 
v_x_2032__boxed_663_ = lean_unbox_usize(v_x_661_);
lean_dec(v_x_661_);
v_res_664_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(v_x_659_, v_x_660_, v_x_2032__boxed_663_, v_x_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(lean_object* v_n_665_, size_t v_k_666_, lean_object* v_v_667_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_unsigned_to_nat(0u);
v___x_669_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(v_n_665_, v___x_668_, v_k_666_, v_v_667_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_n_670_, lean_object* v_k_671_, lean_object* v_v_672_){
_start:
{
size_t v_k_boxed_673_; lean_object* v_res_674_; 
v_k_boxed_673_ = lean_unbox_usize(v_k_671_);
lean_dec(v_k_671_);
v_res_674_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(v_n_670_, v_k_boxed_673_, v_v_672_);
return v_res_674_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(lean_object* v_x_676_, size_t v_x_677_, size_t v_x_678_, size_t v_x_679_, lean_object* v_x_680_){
_start:
{
if (lean_obj_tag(v_x_676_) == 0)
{
lean_object* v_es_681_; size_t v___x_682_; size_t v___x_683_; lean_object* v_j_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v_es_681_ = lean_ctor_get(v_x_676_, 0);
v___x_682_ = ((size_t)31ULL);
v___x_683_ = lean_usize_land(v_x_677_, v___x_682_);
v_j_684_ = lean_usize_to_nat(v___x_683_);
v___x_685_ = lean_array_get_size(v_es_681_);
v___x_686_ = lean_nat_dec_lt(v_j_684_, v___x_685_);
if (v___x_686_ == 0)
{
lean_dec(v_j_684_);
lean_dec(v_x_680_);
return v_x_676_;
}
else
{
lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_729_; 
lean_inc_ref(v_es_681_);
v_isSharedCheck_729_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_729_ == 0)
{
lean_object* v_unused_730_; 
v_unused_730_ = lean_ctor_get(v_x_676_, 0);
lean_dec(v_unused_730_);
v___x_688_ = v_x_676_;
v_isShared_689_ = v_isSharedCheck_729_;
goto v_resetjp_687_;
}
else
{
lean_dec(v_x_676_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_729_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v_v_690_; lean_object* v___x_691_; lean_object* v_xs_x27_692_; lean_object* v___y_694_; 
v_v_690_ = lean_array_fget(v_es_681_, v_j_684_);
v___x_691_ = lean_box(0);
v_xs_x27_692_ = lean_array_fset(v_es_681_, v_j_684_, v___x_691_);
switch(lean_obj_tag(v_v_690_))
{
case 0:
{
lean_object* v_key_699_; lean_object* v_val_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_713_; 
v_key_699_ = lean_ctor_get(v_v_690_, 0);
v_val_700_ = lean_ctor_get(v_v_690_, 1);
v_isSharedCheck_713_ = !lean_is_exclusive(v_v_690_);
if (v_isSharedCheck_713_ == 0)
{
v___x_702_ = v_v_690_;
v_isShared_703_ = v_isSharedCheck_713_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_val_700_);
lean_inc(v_key_699_);
lean_dec(v_v_690_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_713_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
size_t v___x_704_; uint8_t v___x_705_; 
v___x_704_ = lean_unbox_usize(v_key_699_);
v___x_705_ = lean_usize_dec_eq(v_x_679_, v___x_704_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
lean_del_object(v___x_702_);
v___x_706_ = lean_box_usize(v_x_679_);
v___x_707_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_699_, v_val_700_, v___x_706_, v_x_680_);
v___x_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
v___y_694_ = v___x_708_;
goto v___jp_693_;
}
else
{
lean_object* v___x_709_; lean_object* v___x_711_; 
lean_dec(v_val_700_);
lean_dec(v_key_699_);
v___x_709_ = lean_box_usize(v_x_679_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 1, v_x_680_);
lean_ctor_set(v___x_702_, 0, v___x_709_);
v___x_711_ = v___x_702_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_712_, 1, v_x_680_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
v___y_694_ = v___x_711_;
goto v___jp_693_;
}
}
}
}
case 1:
{
lean_object* v_node_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_726_; 
v_node_714_ = lean_ctor_get(v_v_690_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v_v_690_);
if (v_isSharedCheck_726_ == 0)
{
v___x_716_ = v_v_690_;
v_isShared_717_ = v_isSharedCheck_726_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_node_714_);
lean_dec(v_v_690_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_726_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
size_t v___x_718_; size_t v___x_719_; size_t v___x_720_; size_t v___x_721_; lean_object* v___x_722_; lean_object* v___x_724_; 
v___x_718_ = ((size_t)5ULL);
v___x_719_ = lean_usize_shift_right(v_x_677_, v___x_718_);
v___x_720_ = ((size_t)1ULL);
v___x_721_ = lean_usize_add(v_x_678_, v___x_720_);
v___x_722_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_node_714_, v___x_719_, v___x_721_, v_x_679_, v_x_680_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 0, v___x_722_);
v___x_724_ = v___x_716_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_722_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
v___y_694_ = v___x_724_;
goto v___jp_693_;
}
}
}
default: 
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = lean_box_usize(v_x_679_);
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
lean_ctor_set(v___x_728_, 1, v_x_680_);
v___y_694_ = v___x_728_;
goto v___jp_693_;
}
}
v___jp_693_:
{
lean_object* v___x_695_; lean_object* v___x_697_; 
v___x_695_ = lean_array_fset(v_xs_x27_692_, v_j_684_, v___y_694_);
lean_dec(v_j_684_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_695_);
v___x_697_ = v___x_688_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
else
{
lean_object* v_ks_731_; lean_object* v_vs_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_750_; 
v_ks_731_ = lean_ctor_get(v_x_676_, 0);
v_vs_732_ = lean_ctor_get(v_x_676_, 1);
v_isSharedCheck_750_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_750_ == 0)
{
v___x_734_ = v_x_676_;
v_isShared_735_ = v_isSharedCheck_750_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_vs_732_);
lean_inc(v_ks_731_);
lean_dec(v_x_676_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_750_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_ks_731_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v_vs_732_);
v___x_737_ = v_reuseFailAlloc_749_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v_newNode_738_; size_t v___x_739_; uint8_t v___x_740_; 
v_newNode_738_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(v___x_737_, v_x_679_, v_x_680_);
v___x_739_ = ((size_t)7ULL);
v___x_740_ = lean_usize_dec_le(v___x_739_, v_x_678_);
if (v___x_740_ == 0)
{
lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_741_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_738_);
v___x_742_ = lean_unsigned_to_nat(4u);
v___x_743_ = lean_nat_dec_lt(v___x_741_, v___x_742_);
lean_dec(v___x_741_);
if (v___x_743_ == 0)
{
lean_object* v_ks_744_; lean_object* v_vs_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_ks_744_ = lean_ctor_get(v_newNode_738_, 0);
lean_inc_ref(v_ks_744_);
v_vs_745_ = lean_ctor_get(v_newNode_738_, 1);
lean_inc_ref(v_vs_745_);
lean_dec_ref(v_newNode_738_);
v___x_746_ = lean_unsigned_to_nat(0u);
v___x_747_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___closed__0);
v___x_748_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(v_x_678_, v_ks_744_, v_vs_745_, v___x_746_, v___x_747_);
lean_dec_ref(v_vs_745_);
lean_dec_ref(v_ks_744_);
return v___x_748_;
}
else
{
return v_newNode_738_;
}
}
else
{
return v_newNode_738_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(size_t v_depth_751_, lean_object* v_keys_752_, lean_object* v_vals_753_, lean_object* v_i_754_, lean_object* v_entries_755_){
_start:
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = lean_array_get_size(v_keys_752_);
v___x_757_ = lean_nat_dec_lt(v_i_754_, v___x_756_);
if (v___x_757_ == 0)
{
lean_dec(v_i_754_);
return v_entries_755_;
}
else
{
lean_object* v_k_758_; lean_object* v_v_759_; size_t v___x_760_; uint64_t v___x_761_; size_t v_h_762_; size_t v___x_763_; lean_object* v___x_764_; size_t v___x_765_; size_t v___x_766_; size_t v___x_767_; size_t v_h_768_; lean_object* v___x_769_; size_t v___x_770_; lean_object* v___x_771_; 
v_k_758_ = lean_array_fget_borrowed(v_keys_752_, v_i_754_);
v_v_759_ = lean_array_fget_borrowed(v_vals_753_, v_i_754_);
v___x_760_ = lean_unbox_usize(v_k_758_);
v___x_761_ = l_Lean_Lsp_instHashableRpcRef_hash(v___x_760_);
v_h_762_ = lean_uint64_to_usize(v___x_761_);
v___x_763_ = ((size_t)5ULL);
v___x_764_ = lean_unsigned_to_nat(1u);
v___x_765_ = ((size_t)1ULL);
v___x_766_ = lean_usize_sub(v_depth_751_, v___x_765_);
v___x_767_ = lean_usize_mul(v___x_763_, v___x_766_);
v_h_768_ = lean_usize_shift_right(v_h_762_, v___x_767_);
v___x_769_ = lean_nat_add(v_i_754_, v___x_764_);
lean_dec(v_i_754_);
v___x_770_ = lean_unbox_usize(v_k_758_);
lean_inc(v_v_759_);
v___x_771_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_entries_755_, v_h_768_, v_depth_751_, v___x_770_, v_v_759_);
v_i_754_ = v___x_769_;
v_entries_755_ = v___x_771_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_773_, lean_object* v_keys_774_, lean_object* v_vals_775_, lean_object* v_i_776_, lean_object* v_entries_777_){
_start:
{
size_t v_depth_boxed_778_; lean_object* v_res_779_; 
v_depth_boxed_778_ = lean_unbox_usize(v_depth_773_);
lean_dec(v_depth_773_);
v_res_779_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(v_depth_boxed_778_, v_keys_774_, v_vals_775_, v_i_776_, v_entries_777_);
lean_dec_ref(v_vals_775_);
lean_dec_ref(v_keys_774_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg___boxed(lean_object* v_x_780_, lean_object* v_x_781_, lean_object* v_x_782_, lean_object* v_x_783_, lean_object* v_x_784_){
_start:
{
size_t v_x_2117__boxed_785_; size_t v_x_2118__boxed_786_; size_t v_x_2119__boxed_787_; lean_object* v_res_788_; 
v_x_2117__boxed_785_ = lean_unbox_usize(v_x_781_);
lean_dec(v_x_781_);
v_x_2118__boxed_786_ = lean_unbox_usize(v_x_782_);
lean_dec(v_x_782_);
v_x_2119__boxed_787_ = lean_unbox_usize(v_x_783_);
lean_dec(v_x_783_);
v_res_788_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_x_780_, v_x_2117__boxed_785_, v_x_2118__boxed_786_, v_x_2119__boxed_787_, v_x_784_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(lean_object* v_x_789_, size_t v_x_790_, lean_object* v_x_791_){
_start:
{
uint64_t v___x_792_; size_t v___x_793_; size_t v___x_794_; lean_object* v___x_795_; 
v___x_792_ = l_Lean_Lsp_instHashableRpcRef_hash(v_x_790_);
v___x_793_ = lean_uint64_to_usize(v___x_792_);
v___x_794_ = ((size_t)1ULL);
v___x_795_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_x_789_, v___x_793_, v___x_794_, v_x_790_, v_x_791_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg___boxed(lean_object* v_x_796_, lean_object* v_x_797_, lean_object* v_x_798_){
_start:
{
size_t v_x_2281__boxed_799_; lean_object* v_res_800_; 
v_x_2281__boxed_799_ = lean_unbox_usize(v_x_797_);
lean_dec(v_x_797_);
v_res_800_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(v_x_796_, v_x_2281__boxed_799_, v_x_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef(size_t v_r_801_, lean_object* v_a_802_){
_start:
{
lean_object* v___y_804_; lean_object* v_aliveRefs_808_; lean_object* v_refsById_809_; size_t v_nextRef_810_; uint8_t v_wireFormat_811_; lean_object* v___x_812_; 
v_aliveRefs_808_ = lean_ctor_get(v_a_802_, 0);
v_refsById_809_ = lean_ctor_get(v_a_802_, 1);
v_nextRef_810_ = lean_ctor_get_usize(v_a_802_, 2);
v_wireFormat_811_ = lean_ctor_get_uint8(v_a_802_, sizeof(void*)*3);
v___x_812_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(v_aliveRefs_808_, v_r_801_);
if (lean_obj_tag(v___x_812_) == 1)
{
lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_840_; 
lean_inc_ref(v_refsById_809_);
lean_inc_ref(v_aliveRefs_808_);
v_isSharedCheck_840_ = !lean_is_exclusive(v_a_802_);
if (v_isSharedCheck_840_ == 0)
{
lean_object* v_unused_841_; lean_object* v_unused_842_; 
v_unused_841_ = lean_ctor_get(v_a_802_, 1);
lean_dec(v_unused_841_);
v_unused_842_ = lean_ctor_get(v_a_802_, 0);
lean_dec(v_unused_842_);
v___x_814_ = v_a_802_;
v_isShared_815_ = v_isSharedCheck_840_;
goto v_resetjp_813_;
}
else
{
lean_dec(v_a_802_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_840_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v_val_816_; lean_object* v_obj_817_; size_t v_id_818_; lean_object* v_rc_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_839_; 
v_val_816_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_val_816_);
lean_dec_ref_known(v___x_812_, 1);
v_obj_817_ = lean_ctor_get(v_val_816_, 0);
v_id_818_ = lean_ctor_get_usize(v_val_816_, 2);
v_rc_819_ = lean_ctor_get(v_val_816_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v_val_816_);
if (v_isSharedCheck_839_ == 0)
{
v___x_821_ = v_val_816_;
v_isShared_822_ = v_isSharedCheck_839_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_rc_819_);
lean_inc(v_obj_817_);
lean_dec(v_val_816_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_839_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_823_ = lean_unsigned_to_nat(1u);
v___x_824_ = lean_nat_sub(v_rc_819_, v___x_823_);
lean_dec(v_rc_819_);
v___x_825_ = lean_unsigned_to_nat(0u);
v___x_826_ = lean_nat_dec_eq(v___x_824_, v___x_825_);
if (v___x_826_ == 0)
{
lean_object* v___x_828_; 
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 1, v___x_824_);
v___x_828_ = v___x_821_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_obj_817_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v___x_824_);
lean_ctor_set_usize(v_reuseFailAlloc_833_, 2, v_id_818_);
v___x_828_ = v_reuseFailAlloc_833_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_829_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(v_aliveRefs_808_, v_r_801_, v___x_828_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_829_);
v___x_831_ = v___x_814_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_829_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_refsById_809_);
lean_ctor_set_usize(v_reuseFailAlloc_832_, 2, v_nextRef_810_);
lean_ctor_set_uint8(v_reuseFailAlloc_832_, sizeof(void*)*3, v_wireFormat_811_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
v___y_804_ = v___x_831_;
goto v___jp_803_;
}
}
}
else
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_837_; 
lean_dec(v___x_824_);
lean_del_object(v___x_821_);
lean_dec(v_obj_817_);
v___x_834_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(v_aliveRefs_808_, v_r_801_);
v___x_835_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(v_refsById_809_, v_id_818_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 1, v___x_835_);
lean_ctor_set(v___x_814_, 0, v___x_834_);
v___x_837_ = v___x_814_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 2, sizeof(size_t)*1 + 1);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v___x_835_);
lean_ctor_set_usize(v_reuseFailAlloc_838_, 2, v_nextRef_810_);
lean_ctor_set_uint8(v_reuseFailAlloc_838_, sizeof(void*)*3, v_wireFormat_811_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
v___y_804_ = v___x_837_;
goto v___jp_803_;
}
}
}
}
}
else
{
uint8_t v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
lean_dec(v___x_812_);
v___x_843_ = 0;
v___x_844_ = lean_box(v___x_843_);
v___x_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v_a_802_);
return v___x_845_;
}
v___jp_803_:
{
uint8_t v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_805_ = 1;
v___x_806_ = lean_box(v___x_805_);
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
lean_ctor_set(v___x_807_, 1, v___y_804_);
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_rpcReleaseRef___boxed(lean_object* v_r_846_, lean_object* v_a_847_){
_start:
{
size_t v_r_boxed_848_; lean_object* v_res_849_; 
v_r_boxed_848_ = lean_unbox_usize(v_r_846_);
lean_dec(v_r_846_);
v_res_849_ = l_Lean_Server_rpcReleaseRef(v_r_boxed_848_, v_a_847_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0(lean_object* v_00_u03b2_850_, lean_object* v_x_851_, size_t v_x_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___redArg(v_x_851_, v_x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0___boxed(lean_object* v_00_u03b2_854_, lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
size_t v_x_2373__boxed_857_; lean_object* v_res_858_; 
v_x_2373__boxed_857_ = lean_unbox_usize(v_x_856_);
lean_dec(v_x_856_);
v_res_858_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0(v_00_u03b2_854_, v_x_855_, v_x_2373__boxed_857_);
lean_dec_ref(v_x_855_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1(lean_object* v_00_u03b2_859_, lean_object* v_x_860_, size_t v_x_861_, lean_object* v_x_862_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___redArg(v_x_860_, v_x_861_, v_x_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1___boxed(lean_object* v_00_u03b2_864_, lean_object* v_x_865_, lean_object* v_x_866_, lean_object* v_x_867_){
_start:
{
size_t v_x_2381__boxed_868_; lean_object* v_res_869_; 
v_x_2381__boxed_868_ = lean_unbox_usize(v_x_866_);
lean_dec(v_x_866_);
v_res_869_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1(v_00_u03b2_864_, v_x_865_, v_x_2381__boxed_868_, v_x_867_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2(lean_object* v_00_u03b2_870_, lean_object* v_x_871_, size_t v_x_872_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___redArg(v_x_871_, v_x_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2___boxed(lean_object* v_00_u03b2_874_, lean_object* v_x_875_, lean_object* v_x_876_){
_start:
{
size_t v_x_2392__boxed_877_; lean_object* v_res_878_; 
v_x_2392__boxed_877_ = lean_unbox_usize(v_x_876_);
lean_dec(v_x_876_);
v_res_878_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2(v_00_u03b2_874_, v_x_875_, v_x_2392__boxed_877_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3(lean_object* v_00_u03b2_879_, lean_object* v_x_880_, size_t v_x_881_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___redArg(v_x_880_, v_x_881_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3___boxed(lean_object* v_00_u03b2_883_, lean_object* v_x_884_, lean_object* v_x_885_){
_start:
{
size_t v_x_2400__boxed_886_; lean_object* v_res_887_; 
v_x_2400__boxed_886_ = lean_unbox_usize(v_x_885_);
lean_dec(v_x_885_);
v_res_887_ = l_Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3(v_00_u03b2_883_, v_x_884_, v_x_2400__boxed_886_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0(lean_object* v_00_u03b2_888_, lean_object* v_x_889_, size_t v_x_890_, size_t v_x_891_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___redArg(v_x_889_, v_x_890_, v_x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0___boxed(lean_object* v_00_u03b2_893_, lean_object* v_x_894_, lean_object* v_x_895_, lean_object* v_x_896_){
_start:
{
size_t v_x_2408__boxed_897_; size_t v_x_2409__boxed_898_; lean_object* v_res_899_; 
v_x_2408__boxed_897_ = lean_unbox_usize(v_x_895_);
lean_dec(v_x_895_);
v_x_2409__boxed_898_ = lean_unbox_usize(v_x_896_);
lean_dec(v_x_896_);
v_res_899_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0(v_00_u03b2_893_, v_x_894_, v_x_2408__boxed_897_, v_x_2409__boxed_898_);
lean_dec_ref(v_x_894_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2(lean_object* v_00_u03b2_900_, lean_object* v_x_901_, size_t v_x_902_, size_t v_x_903_, size_t v_x_904_, lean_object* v_x_905_){
_start:
{
lean_object* v___x_906_; 
v___x_906_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___redArg(v_x_901_, v_x_902_, v_x_903_, v_x_904_, v_x_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2___boxed(lean_object* v_00_u03b2_907_, lean_object* v_x_908_, lean_object* v_x_909_, lean_object* v_x_910_, lean_object* v_x_911_, lean_object* v_x_912_){
_start:
{
size_t v_x_2419__boxed_913_; size_t v_x_2420__boxed_914_; size_t v_x_2421__boxed_915_; lean_object* v_res_916_; 
v_x_2419__boxed_913_ = lean_unbox_usize(v_x_909_);
lean_dec(v_x_909_);
v_x_2420__boxed_914_ = lean_unbox_usize(v_x_910_);
lean_dec(v_x_910_);
v_x_2421__boxed_915_ = lean_unbox_usize(v_x_911_);
lean_dec(v_x_911_);
v_res_916_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2(v_00_u03b2_907_, v_x_908_, v_x_2419__boxed_913_, v_x_2420__boxed_914_, v_x_2421__boxed_915_, v_x_912_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4(lean_object* v_00_u03b2_917_, lean_object* v_x_918_, size_t v_x_919_, size_t v_x_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___redArg(v_x_918_, v_x_919_, v_x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4___boxed(lean_object* v_00_u03b2_922_, lean_object* v_x_923_, lean_object* v_x_924_, lean_object* v_x_925_){
_start:
{
size_t v_x_2436__boxed_926_; size_t v_x_2437__boxed_927_; lean_object* v_res_928_; 
v_x_2436__boxed_926_ = lean_unbox_usize(v_x_924_);
lean_dec(v_x_924_);
v_x_2437__boxed_927_ = lean_unbox_usize(v_x_925_);
lean_dec(v_x_925_);
v_res_928_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__2_spec__4(v_00_u03b2_922_, v_x_923_, v_x_2436__boxed_926_, v_x_2437__boxed_927_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6(lean_object* v_00_u03b2_929_, lean_object* v_x_930_, size_t v_x_931_, size_t v_x_932_){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___redArg(v_x_930_, v_x_931_, v_x_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6___boxed(lean_object* v_00_u03b2_934_, lean_object* v_x_935_, lean_object* v_x_936_, lean_object* v_x_937_){
_start:
{
size_t v_x_2447__boxed_938_; size_t v_x_2448__boxed_939_; lean_object* v_res_940_; 
v_x_2447__boxed_938_ = lean_unbox_usize(v_x_936_);
lean_dec(v_x_936_);
v_x_2448__boxed_939_ = lean_unbox_usize(v_x_937_);
lean_dec(v_x_937_);
v_res_940_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Server_rpcReleaseRef_spec__3_spec__6(v_00_u03b2_934_, v_x_935_, v_x_2447__boxed_938_, v_x_2448__boxed_939_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_941_, lean_object* v_keys_942_, lean_object* v_vals_943_, lean_object* v_heq_944_, lean_object* v_i_945_, size_t v_k_946_){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___redArg(v_keys_942_, v_vals_943_, v_i_945_, v_k_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_948_, lean_object* v_keys_949_, lean_object* v_vals_950_, lean_object* v_heq_951_, lean_object* v_i_952_, lean_object* v_k_953_){
_start:
{
size_t v_k_boxed_954_; lean_object* v_res_955_; 
v_k_boxed_954_ = lean_unbox_usize(v_k_953_);
lean_dec(v_k_953_);
v_res_955_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_rpcReleaseRef_spec__0_spec__0_spec__1(v_00_u03b2_948_, v_keys_949_, v_vals_950_, v_heq_951_, v_i_952_, v_k_boxed_954_);
lean_dec_ref(v_vals_950_);
lean_dec_ref(v_keys_949_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_956_, lean_object* v_n_957_, size_t v_k_958_, lean_object* v_v_959_){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___redArg(v_n_957_, v_k_958_, v_v_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_961_, lean_object* v_n_962_, lean_object* v_k_963_, lean_object* v_v_964_){
_start:
{
size_t v_k_boxed_965_; lean_object* v_res_966_; 
v_k_boxed_965_ = lean_unbox_usize(v_k_963_);
lean_dec(v_k_963_);
v_res_966_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4(v_00_u03b2_961_, v_n_962_, v_k_boxed_965_, v_v_964_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_967_, size_t v_depth_968_, lean_object* v_keys_969_, lean_object* v_vals_970_, lean_object* v_heq_971_, lean_object* v_i_972_, lean_object* v_entries_973_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___redArg(v_depth_968_, v_keys_969_, v_vals_970_, v_i_972_, v_entries_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_975_, lean_object* v_depth_976_, lean_object* v_keys_977_, lean_object* v_vals_978_, lean_object* v_heq_979_, lean_object* v_i_980_, lean_object* v_entries_981_){
_start:
{
size_t v_depth_boxed_982_; lean_object* v_res_983_; 
v_depth_boxed_982_ = lean_unbox_usize(v_depth_976_);
lean_dec(v_depth_976_);
v_res_983_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__5(v_00_u03b2_975_, v_depth_boxed_982_, v_keys_977_, v_vals_978_, v_heq_979_, v_i_980_, v_entries_981_);
lean_dec_ref(v_vals_978_);
lean_dec_ref(v_keys_977_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_984_, lean_object* v_x_985_, lean_object* v_x_986_, size_t v_x_987_, lean_object* v_x_988_){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___redArg(v_x_985_, v_x_986_, v_x_987_, v_x_988_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03b2_990_, lean_object* v_x_991_, lean_object* v_x_992_, lean_object* v_x_993_, lean_object* v_x_994_){
_start:
{
size_t v_x_2465__boxed_995_; lean_object* v_res_996_; 
v_x_2465__boxed_995_ = lean_unbox_usize(v_x_993_);
lean_dec(v_x_993_);
v_res_996_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_rpcReleaseRef_spec__1_spec__2_spec__4_spec__7(v_00_u03b2_990_, v_x_991_, v_x_992_, v_x_2465__boxed_995_, v_x_994_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__0(lean_object* v_inst_997_, lean_object* v_a_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = lean_apply_1(v_inst_997_, v_a_998_);
v___x_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_1000_);
lean_ctor_set(v___x_1001_, 1, v___y_999_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1(lean_object* v_inst_1002_, lean_object* v___x_1003_, lean_object* v___x_1004_, lean_object* v_j_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_205__overap_1008_; lean_object* v___x_1009_; 
v___x_1007_ = lean_apply_1(v_inst_1002_, v_j_1005_);
v___x_205__overap_1008_ = l_MonadExcept_ofExcept___redArg(v___x_1003_, v___x_1004_, v___x_1007_);
lean_inc_ref(v___y_1006_);
v___x_1009_ = lean_apply_1(v___x_205__overap_1008_, v___y_1006_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1___boxed(lean_object* v_inst_1010_, lean_object* v___x_1011_, lean_object* v___x_1012_, lean_object* v_j_1013_, lean_object* v___y_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1(v_inst_1010_, v___x_1011_, v___x_1012_, v_j_1013_, v___y_1014_);
lean_dec_ref(v___y_1014_);
return v_res_1015_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10(void){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9));
v___x_1036_ = l_ReaderT_instMonad___redArg(v___x_1035_);
return v___x_1036_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11(void){
_start:
{
lean_object* v___x_1037_; lean_object* v___f_1038_; 
v___x_1037_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___f_1038_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1038_, 0, v___x_1037_);
return v___f_1038_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___f_1040_; 
v___x_1039_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___f_1040_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_1040_, 0, v___x_1039_);
return v___f_1040_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___f_1042_; 
v___x_1041_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___f_1042_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_1042_, 0, v___x_1041_);
return v___f_1042_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___f_1044_; 
v___x_1043_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___f_1044_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_1044_, 0, v___x_1043_);
return v___f_1044_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1046_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_1046_, 0, lean_box(0));
lean_closure_set(v___x_1046_, 1, lean_box(0));
lean_closure_set(v___x_1046_, 2, v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16(void){
_start:
{
lean_object* v___f_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___f_1047_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__11);
v___x_1048_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__15);
v___x_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
lean_ctor_set(v___x_1049_, 1, v___f_1047_);
return v___x_1049_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17(void){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1051_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_1051_, 0, lean_box(0));
lean_closure_set(v___x_1051_, 1, lean_box(0));
lean_closure_set(v___x_1051_, 2, v___x_1050_);
return v___x_1051_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18(void){
_start:
{
lean_object* v___f_1052_; lean_object* v___f_1053_; lean_object* v___f_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___f_1052_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__14);
v___f_1053_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__13);
v___f_1054_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__12);
v___x_1055_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__17);
v___x_1056_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__16);
v___x_1057_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
lean_ctor_set(v___x_1057_, 1, v___x_1055_);
lean_ctor_set(v___x_1057_, 2, v___f_1054_);
lean_ctor_set(v___x_1057_, 3, v___f_1053_);
lean_ctor_set(v___x_1057_, 4, v___f_1052_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1059_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_1059_, 0, lean_box(0));
lean_closure_set(v___x_1059_, 1, lean_box(0));
lean_closure_set(v___x_1059_, 2, v___x_1058_);
return v___x_1059_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1060_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__19);
v___x_1061_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__18);
v___x_1062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
lean_ctor_set(v___x_1062_, 1, v___x_1060_);
return v___x_1062_;
}
}
static lean_object* _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1064_ = lean_alloc_closure((void*)(l_ExceptT_tryCatch), 6, 3);
lean_closure_set(v___x_1064_, 0, lean_box(0));
lean_closure_set(v___x_1064_, 1, lean_box(0));
lean_closure_set(v___x_1064_, 2, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg(lean_object* v_inst_1065_, lean_object* v_inst_1066_){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v_toApplicative_1069_; lean_object* v_toPure_1070_; lean_object* v___f_1071_; lean_object* v___f_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___f_1076_; lean_object* v___x_1077_; 
v___x_1067_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__10);
v___x_1068_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20);
v_toApplicative_1069_ = lean_ctor_get(v___x_1067_, 0);
v_toPure_1070_ = lean_ctor_get(v_toApplicative_1069_, 1);
v___f_1071_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1071_, 0, v_inst_1066_);
lean_inc(v_toPure_1070_);
v___f_1072_ = lean_alloc_closure((void*)(l_instMonadExceptOfExceptTOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1072_, 0, v_toPure_1070_);
v___x_1073_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__21);
v___x_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___f_1072_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = l_instMonadExceptOfMonadExceptOf___redArg(v___x_1074_);
v___f_1076_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1076_, 0, v_inst_1065_);
lean_closure_set(v___f_1076_, 1, v___x_1068_);
lean_closure_set(v___f_1076_, 2, v___x_1075_);
v___x_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___f_1071_);
lean_ctor_set(v___x_1077_, 1, v___f_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOfFromJsonOfToJson(lean_object* v_00_u03b1_1078_, lean_object* v_inst_1079_, lean_object* v_inst_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg(v_inst_1079_, v_inst_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__0(lean_object* v_inst_1082_, lean_object* v___x_1083_, lean_object* v_v_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v_fst_1087_; lean_object* v_snd_1088_; 
if (lean_obj_tag(v_v_1084_) == 0)
{
lean_object* v___x_1091_; 
lean_dec_ref(v_inst_1082_);
v___x_1091_ = lean_box(0);
v_fst_1087_ = v___x_1091_;
v_snd_1088_ = v___y_1085_;
goto v___jp_1086_;
}
else
{
lean_object* v_rpcEncode_1092_; lean_object* v_val_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1103_; 
v_rpcEncode_1092_ = lean_ctor_get(v_inst_1082_, 0);
lean_inc_ref(v_rpcEncode_1092_);
lean_dec_ref(v_inst_1082_);
v_val_1093_ = lean_ctor_get(v_v_1084_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v_v_1084_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1095_ = v_v_1084_;
v_isShared_1096_ = v_isSharedCheck_1103_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_val_1093_);
lean_dec(v_v_1084_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1103_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v_fst_1098_; lean_object* v_snd_1099_; lean_object* v___x_1101_; 
v___x_1097_ = lean_apply_2(v_rpcEncode_1092_, v_val_1093_, v___y_1085_);
v_fst_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_fst_1098_);
v_snd_1099_ = lean_ctor_get(v___x_1097_, 1);
lean_inc(v_snd_1099_);
lean_dec_ref(v___x_1097_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v_fst_1098_);
v___x_1101_ = v___x_1095_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_fst_1098_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
v_fst_1087_ = v___x_1101_;
v_snd_1088_ = v_snd_1099_;
goto v___jp_1086_;
}
}
}
v___jp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = l_Lean_Option_toJson___redArg(v___x_1083_, v_fst_1087_);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
lean_ctor_set(v___x_1090_, 1, v_snd_1088_);
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1(lean_object* v___f_1106_, lean_object* v_inst_1107_, lean_object* v_j_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_Lean_Option_fromJson_x3f___redArg(v___f_1106_, v_j_1108_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_dec_ref(v_inst_1107_);
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1110_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1110_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
else
{
lean_object* v_a_1119_; 
v_a_1119_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1119_);
lean_dec_ref_known(v___x_1110_, 1);
if (lean_obj_tag(v_a_1119_) == 0)
{
lean_object* v___x_1120_; 
lean_dec_ref(v_inst_1107_);
v___x_1120_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___lam__1___closed__0));
return v___x_1120_;
}
else
{
lean_object* v_rpcDecode_1121_; lean_object* v_val_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1146_; 
v_rpcDecode_1121_ = lean_ctor_get(v_inst_1107_, 1);
lean_inc_ref(v_rpcDecode_1121_);
lean_dec_ref(v_inst_1107_);
v_val_1122_ = lean_ctor_get(v_a_1119_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_a_1119_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1124_ = v_a_1119_;
v_isShared_1125_ = v_isSharedCheck_1146_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_val_1122_);
lean_dec(v_a_1119_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1146_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1126_; 
lean_inc_ref(v___y_1109_);
v___x_1126_ = lean_apply_2(v_rpcDecode_1121_, v_val_1122_, v___y_1109_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_del_object(v___x_1124_);
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1126_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1126_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1145_; 
v_a_1135_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1137_ = v___x_1126_;
v_isShared_1138_ = v_isSharedCheck_1145_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1126_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1145_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1125_ == 0)
{
lean_ctor_set(v___x_1124_, 0, v_a_1135_);
v___x_1140_ = v___x_1124_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1142_; 
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 0, v___x_1140_);
v___x_1142_ = v___x_1137_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg___lam__1___boxed(lean_object* v___f_1147_, lean_object* v_inst_1148_, lean_object* v_j_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Lean_Server_instRpcEncodableOption___redArg___lam__1(v___f_1147_, v_inst_1148_, v_j_1149_, v___y_1150_);
lean_dec_ref(v___y_1150_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption___redArg(lean_object* v_inst_1154_){
_start:
{
lean_object* v___x_1155_; lean_object* v___f_1156_; lean_object* v___f_1157_; lean_object* v___f_1158_; lean_object* v___x_1159_; 
v___x_1155_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__0));
lean_inc_ref(v_inst_1154_);
v___f_1156_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOption___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1156_, 0, v_inst_1154_);
lean_closure_set(v___f_1156_, 1, v___x_1155_);
v___f_1157_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__1));
v___f_1158_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableOption___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1158_, 0, v___f_1157_);
lean_closure_set(v___f_1158_, 1, v_inst_1154_);
v___x_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___f_1156_);
lean_ctor_set(v___x_1159_, 1, v___f_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableOption(lean_object* v_00_u03b1_1160_, lean_object* v_inst_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lean_Server_instRpcEncodableOption___redArg(v_inst_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__0(lean_object* v_inst_1163_, lean_object* v___x_1164_, lean_object* v___x_1165_, lean_object* v_a_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v_rpcEncode_1168_; size_t v_sz_1169_; size_t v___x_1170_; lean_object* v___x_651__overap_1171_; lean_object* v___x_1172_; lean_object* v_fst_1173_; lean_object* v_snd_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1182_; 
v_rpcEncode_1168_ = lean_ctor_get(v_inst_1163_, 0);
lean_inc_ref(v_rpcEncode_1168_);
lean_dec_ref(v_inst_1163_);
v_sz_1169_ = lean_array_size(v_a_1166_);
v___x_1170_ = ((size_t)0ULL);
v___x_651__overap_1171_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1164_, v_rpcEncode_1168_, v_sz_1169_, v___x_1170_, v_a_1166_);
v___x_1172_ = lean_apply_1(v___x_651__overap_1171_, v___y_1167_);
v_fst_1173_ = lean_ctor_get(v___x_1172_, 0);
v_snd_1174_ = lean_ctor_get(v___x_1172_, 1);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1176_ = v___x_1172_;
v_isShared_1177_ = v_isSharedCheck_1182_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_snd_1174_);
lean_inc(v_fst_1173_);
lean_dec(v___x_1172_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1182_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1180_; 
v___x_1178_ = l_Lean_Array_toJson___redArg(v___x_1165_, v_fst_1173_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v___x_1178_);
v___x_1180_ = v___x_1176_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1178_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v_snd_1174_);
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
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__1(lean_object* v___f_1183_, lean_object* v_inst_1184_, lean_object* v___x_1185_, lean_object* v_b_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = l_Lean_Array_fromJson_x3f___redArg(v___f_1183_, v_b_1186_);
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
lean_dec_ref(v___x_1185_);
lean_dec_ref(v_inst_1184_);
v_a_1189_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___x_1188_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1188_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
else
{
lean_object* v_a_1197_; lean_object* v_rpcDecode_1198_; size_t v_sz_1199_; size_t v___x_1200_; lean_object* v___x_665__overap_1201_; lean_object* v___x_1202_; 
v_a_1197_ = lean_ctor_get(v___x_1188_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v___x_1188_, 1);
v_rpcDecode_1198_ = lean_ctor_get(v_inst_1184_, 1);
lean_inc_ref(v_rpcDecode_1198_);
lean_dec_ref(v_inst_1184_);
v_sz_1199_ = lean_array_size(v_a_1197_);
v___x_1200_ = ((size_t)0ULL);
v___x_665__overap_1201_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1185_, v_rpcDecode_1198_, v_sz_1199_, v___x_1200_, v_a_1197_);
lean_inc_ref(v___y_1187_);
v___x_1202_ = lean_apply_1(v___x_665__overap_1201_, v___y_1187_);
return v___x_1202_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg___lam__1___boxed(lean_object* v___f_1203_, lean_object* v_inst_1204_, lean_object* v___x_1205_, lean_object* v_b_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lean_Server_instRpcEncodableArray___redArg___lam__1(v___f_1203_, v_inst_1204_, v___x_1205_, v_b_1206_, v___y_1207_);
lean_dec_ref(v___y_1207_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray___redArg(lean_object* v_inst_1235_){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___f_1238_; lean_object* v___x_1239_; lean_object* v___f_1240_; lean_object* v___f_1241_; lean_object* v___x_1242_; 
v___x_1236_ = ((lean_object*)(l_Lean_Server_instRpcEncodableArray___redArg___closed__9));
v___x_1237_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__0));
lean_inc_ref(v_inst_1235_);
v___f_1238_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableArray___redArg___lam__0), 5, 3);
lean_closure_set(v___f_1238_, 0, v_inst_1235_);
lean_closure_set(v___f_1238_, 1, v___x_1236_);
lean_closure_set(v___f_1238_, 2, v___x_1237_);
v___x_1239_ = lean_obj_once(&l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20, &l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20_once, _init_l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__20);
v___f_1240_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__1));
v___f_1241_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableArray___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1241_, 0, v___f_1240_);
lean_closure_set(v___f_1241_, 1, v_inst_1235_);
lean_closure_set(v___f_1241_, 2, v___x_1239_);
v___x_1242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___f_1238_);
lean_ctor_set(v___x_1242_, 1, v___f_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableArray(lean_object* v_00_u03b1_1243_, lean_object* v_inst_1244_){
_start:
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Lean_Server_instRpcEncodableArray___redArg(v_inst_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__0(lean_object* v_inst_1246_, lean_object* v_inst_1247_, lean_object* v___x_1248_, lean_object* v_x_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_fst_1251_; lean_object* v_snd_1252_; lean_object* v_rpcEncode_1253_; lean_object* v___x_1254_; lean_object* v_fst_1255_; lean_object* v_snd_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1275_; 
v_fst_1251_ = lean_ctor_get(v_x_1249_, 0);
lean_inc(v_fst_1251_);
v_snd_1252_ = lean_ctor_get(v_x_1249_, 1);
lean_inc(v_snd_1252_);
lean_dec_ref(v_x_1249_);
v_rpcEncode_1253_ = lean_ctor_get(v_inst_1246_, 0);
lean_inc_ref(v_rpcEncode_1253_);
lean_dec_ref(v_inst_1246_);
v___x_1254_ = lean_apply_2(v_rpcEncode_1253_, v_fst_1251_, v___y_1250_);
v_fst_1255_ = lean_ctor_get(v___x_1254_, 0);
v_snd_1256_ = lean_ctor_get(v___x_1254_, 1);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1258_ = v___x_1254_;
v_isShared_1259_ = v_isSharedCheck_1275_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_snd_1256_);
lean_inc(v_fst_1255_);
lean_dec(v___x_1254_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1275_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v_rpcEncode_1260_; lean_object* v___x_1261_; lean_object* v_fst_1262_; lean_object* v_snd_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1274_; 
v_rpcEncode_1260_ = lean_ctor_get(v_inst_1247_, 0);
lean_inc_ref(v_rpcEncode_1260_);
lean_dec_ref(v_inst_1247_);
v___x_1261_ = lean_apply_2(v_rpcEncode_1260_, v_snd_1252_, v_snd_1256_);
v_fst_1262_ = lean_ctor_get(v___x_1261_, 0);
v_snd_1263_ = lean_ctor_get(v___x_1261_, 1);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1265_ = v___x_1261_;
v_isShared_1266_ = v_isSharedCheck_1274_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_snd_1263_);
lean_inc(v_fst_1262_);
lean_dec(v___x_1261_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1274_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 1, v_fst_1262_);
lean_ctor_set(v___x_1265_, 0, v_fst_1255_);
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_fst_1255_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_fst_1262_);
v___x_1268_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
lean_object* v___x_1269_; lean_object* v___x_1271_; 
lean_inc_ref(v___x_1248_);
v___x_1269_ = l_Lean_Prod_toJson___redArg(v___x_1248_, v___x_1248_, v___x_1268_);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 1, v_snd_1263_);
lean_ctor_set(v___x_1258_, 0, v___x_1269_);
v___x_1271_ = v___x_1258_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1269_);
lean_ctor_set(v_reuseFailAlloc_1272_, 1, v_snd_1263_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__1(lean_object* v___f_1276_, lean_object* v_inst_1277_, lean_object* v_inst_1278_, lean_object* v_j_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v___x_1281_; 
lean_inc_ref(v___f_1276_);
v___x_1281_ = l_Lean_Prod_fromJson_x3f___redArg(v___f_1276_, v___f_1276_, v_j_1279_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
lean_dec_ref(v_inst_1278_);
lean_dec_ref(v_inst_1277_);
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1281_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1281_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
else
{
lean_object* v_a_1290_; lean_object* v_fst_1291_; lean_object* v_snd_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1328_; 
v_a_1290_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1290_);
lean_dec_ref_known(v___x_1281_, 1);
v_fst_1291_ = lean_ctor_get(v_a_1290_, 0);
v_snd_1292_ = lean_ctor_get(v_a_1290_, 1);
v_isSharedCheck_1328_ = !lean_is_exclusive(v_a_1290_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1294_ = v_a_1290_;
v_isShared_1295_ = v_isSharedCheck_1328_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_snd_1292_);
lean_inc(v_fst_1291_);
lean_dec(v_a_1290_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1328_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v_rpcDecode_1296_; lean_object* v___x_1297_; 
v_rpcDecode_1296_ = lean_ctor_get(v_inst_1277_, 1);
lean_inc_ref(v_rpcDecode_1296_);
lean_dec_ref(v_inst_1277_);
lean_inc_ref(v___y_1280_);
v___x_1297_ = lean_apply_2(v_rpcDecode_1296_, v_fst_1291_, v___y_1280_);
if (lean_obj_tag(v___x_1297_) == 0)
{
lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1305_; 
lean_del_object(v___x_1294_);
lean_dec(v_snd_1292_);
lean_dec_ref(v_inst_1278_);
v_a_1298_ = lean_ctor_get(v___x_1297_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1297_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1300_ = v___x_1297_;
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_dec(v___x_1297_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1303_; 
if (v_isShared_1301_ == 0)
{
v___x_1303_ = v___x_1300_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_a_1298_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
else
{
lean_object* v_a_1306_; lean_object* v_rpcDecode_1307_; lean_object* v___x_1308_; 
v_a_1306_ = lean_ctor_get(v___x_1297_, 0);
lean_inc(v_a_1306_);
lean_dec_ref_known(v___x_1297_, 1);
v_rpcDecode_1307_ = lean_ctor_get(v_inst_1278_, 1);
lean_inc_ref(v_rpcDecode_1307_);
lean_dec_ref(v_inst_1278_);
lean_inc_ref(v___y_1280_);
v___x_1308_ = lean_apply_2(v_rpcDecode_1307_, v_snd_1292_, v___y_1280_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_dec(v_a_1306_);
lean_del_object(v___x_1294_);
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1308_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1308_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1327_; 
v_a_1317_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1319_ = v___x_1308_;
v_isShared_1320_ = v_isSharedCheck_1327_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1308_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1327_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 1, v_a_1317_);
lean_ctor_set(v___x_1294_, 0, v_a_1306_);
v___x_1322_ = v___x_1294_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1306_);
lean_ctor_set(v_reuseFailAlloc_1326_, 1, v_a_1317_);
v___x_1322_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
lean_object* v___x_1324_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 0, v___x_1322_);
v___x_1324_ = v___x_1319_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___x_1322_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg___lam__1___boxed(lean_object* v___f_1329_, lean_object* v_inst_1330_, lean_object* v_inst_1331_, lean_object* v_j_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Lean_Server_instRpcEncodableProd___redArg___lam__1(v___f_1329_, v_inst_1330_, v_inst_1331_, v_j_1332_, v___y_1333_);
lean_dec_ref(v___y_1333_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd___redArg(lean_object* v_inst_1335_, lean_object* v_inst_1336_){
_start:
{
lean_object* v___x_1337_; lean_object* v___f_1338_; lean_object* v___f_1339_; lean_object* v___f_1340_; lean_object* v___x_1341_; 
v___x_1337_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__0));
lean_inc_ref(v_inst_1336_);
lean_inc_ref(v_inst_1335_);
v___f_1338_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableProd___redArg___lam__0), 5, 3);
lean_closure_set(v___f_1338_, 0, v_inst_1335_);
lean_closure_set(v___f_1338_, 1, v_inst_1336_);
lean_closure_set(v___f_1338_, 2, v___x_1337_);
v___f_1339_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOption___redArg___closed__1));
v___f_1340_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableProd___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1340_, 0, v___f_1339_);
lean_closure_set(v___f_1340_, 1, v_inst_1335_);
lean_closure_set(v___f_1340_, 2, v_inst_1336_);
v___x_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___f_1338_);
lean_ctor_set(v___x_1341_, 1, v___f_1340_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableProd(lean_object* v_00_u03b1_1342_, lean_object* v_00_u03b2_1343_, lean_object* v_inst_1344_, lean_object* v_inst_1345_){
_start:
{
lean_object* v___x_1346_; 
v___x_1346_ = l_Lean_Server_instRpcEncodableProd___redArg(v_inst_1344_, v_inst_1345_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__0(lean_object* v_inst_1347_, lean_object* v_fn_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_rpcEncode_1350_; lean_object* v___x_1351_; lean_object* v_fst_1352_; lean_object* v_snd_1353_; lean_object* v___x_1354_; 
v_rpcEncode_1350_ = lean_ctor_get(v_inst_1347_, 0);
lean_inc_ref(v_rpcEncode_1350_);
lean_dec_ref(v_inst_1347_);
v___x_1351_ = lean_apply_1(v_fn_1348_, v___y_1349_);
v_fst_1352_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_fst_1352_);
v_snd_1353_ = lean_ctor_get(v___x_1351_, 1);
lean_inc(v_snd_1353_);
lean_dec_ref(v___x_1351_);
v___x_1354_ = lean_apply_2(v_rpcEncode_1350_, v_fst_1352_, v_snd_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1(lean_object* v_inst_1355_, lean_object* v___x_1356_, lean_object* v_j_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_rpcDecode_1359_; lean_object* v___x_1360_; 
v_rpcDecode_1359_ = lean_ctor_get(v_inst_1355_, 1);
lean_inc_ref(v_rpcDecode_1359_);
lean_dec_ref(v_inst_1355_);
lean_inc_ref(v___y_1358_);
v___x_1360_ = lean_apply_2(v_rpcDecode_1359_, v_j_1357_, v___y_1358_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec_ref(v___x_1356_);
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1360_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1360_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
else
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1377_; 
v_a_1369_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1371_ = v___x_1360_;
v_isShared_1372_ = v_isSharedCheck_1377_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1360_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1377_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1373_; lean_object* v___x_1375_; 
v___x_1373_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 5);
lean_closure_set(v___x_1373_, 0, lean_box(0));
lean_closure_set(v___x_1373_, 1, lean_box(0));
lean_closure_set(v___x_1373_, 2, v___x_1356_);
lean_closure_set(v___x_1373_, 3, lean_box(0));
lean_closure_set(v___x_1373_, 4, v_a_1369_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 0, v___x_1373_);
v___x_1375_ = v___x_1371_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1373_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1___boxed(lean_object* v_inst_1378_, lean_object* v___x_1379_, lean_object* v_j_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1(v_inst_1378_, v___x_1379_, v_j_1380_, v___y_1381_);
lean_dec_ref(v___y_1381_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg(lean_object* v_inst_1383_){
_start:
{
lean_object* v___f_1384_; lean_object* v___x_1385_; lean_object* v___f_1386_; lean_object* v___x_1387_; 
lean_inc_ref(v_inst_1383_);
v___f_1384_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1384_, 0, v_inst_1383_);
v___x_1385_ = ((lean_object*)(l_Lean_Server_instRpcEncodableOfFromJsonOfToJson___redArg___closed__9));
v___f_1386_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1386_, 0, v_inst_1383_);
lean_closure_set(v___f_1386_, 1, v___x_1385_);
v___x_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1387_, 0, v___f_1384_);
lean_ctor_set(v___x_1387_, 1, v___f_1386_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableStateMRpcObjectStore(lean_object* v_00_u03b1_1388_, lean_object* v_inst_1389_){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = l_Lean_Server_instRpcEncodableStateMRpcObjectStore___redArg(v_inst_1389_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(lean_object* v_inst_1391_, lean_object* v_r_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v___x_1394_; lean_object* v_fst_1395_; lean_object* v_snd_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1415_; 
v___x_1394_ = l_Lean_Server_rpcStoreRef___redArg(v_inst_1391_, v_r_1392_, v_a_1393_);
v_fst_1395_ = lean_ctor_get(v___x_1394_, 0);
v_snd_1396_ = lean_ctor_get(v___x_1394_, 1);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1398_ = v___x_1394_;
v_isShared_1399_ = v_isSharedCheck_1415_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_snd_1396_);
lean_inc(v_fst_1395_);
lean_dec(v___x_1394_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1415_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___y_1401_; uint8_t v_wireFormat_1412_; 
v_wireFormat_1412_ = lean_ctor_get_uint8(v_snd_1396_, sizeof(void*)*3);
if (v_wireFormat_1412_ == 0)
{
lean_object* v___x_1413_; 
v___x_1413_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0));
v___y_1401_ = v___x_1413_;
goto v___jp_1400_;
}
else
{
lean_object* v___x_1414_; 
v___x_1414_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1));
v___y_1401_ = v___x_1414_;
goto v___jp_1400_;
}
v___jp_1400_:
{
size_t v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1406_; 
v___x_1402_ = lean_unbox_usize(v_fst_1395_);
lean_dec(v_fst_1395_);
v___x_1403_ = lean_usize_to_nat(v___x_1402_);
v___x_1404_ = l_Lean_bignumToJson(v___x_1403_);
lean_inc_ref(v___y_1401_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 1, v___x_1404_);
lean_ctor_set(v___x_1398_, 0, v___y_1401_);
v___x_1406_ = v___x_1398_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___y_1401_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v___x_1404_);
v___x_1406_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1407_ = lean_box(0);
v___x_1408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1406_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = l_Lean_Json_mkObj(v___x_1408_);
lean_dec_ref_known(v___x_1408_, 2);
v___x_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
lean_ctor_set(v___x_1410_, 1, v_snd_1396_);
return v___x_1410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg___boxed(lean_object* v_inst_1416_, lean_object* v_r_1417_, lean_object* v_a_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(v_inst_1416_, v_r_1417_, v_a_1418_);
lean_dec_ref(v_r_1417_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode(lean_object* v_00_u03b1_1420_, lean_object* v_inst_1421_, lean_object* v_r_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v___x_1424_; 
v___x_1424_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___redArg(v_inst_1421_, v_r_1422_, v_a_1423_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___boxed(lean_object* v_00_u03b1_1425_, lean_object* v_inst_1426_, lean_object* v_r_1427_, lean_object* v_a_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode(v_00_u03b1_1425_, v_inst_1426_, v_r_1427_, v_a_1428_);
lean_dec_ref(v_r_1427_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(lean_object* v_inst_1431_, lean_object* v_j_1432_, lean_object* v_a_1433_){
_start:
{
uint8_t v_wireFormat_1434_; lean_object* v___x_1435_; lean_object* v___y_1437_; 
v_wireFormat_1434_ = lean_ctor_get_uint8(v_a_1433_, sizeof(void*)*3);
v___x_1435_ = ((lean_object*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___closed__0));
if (v_wireFormat_1434_ == 0)
{
lean_object* v___x_1450_; 
v___x_1450_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__0));
v___y_1437_ = v___x_1450_;
goto v___jp_1436_;
}
else
{
lean_object* v___x_1451_; 
v___x_1451_ = ((lean_object*)(l_Lean_Lsp_RpcWireFormat_refFieldName___closed__1));
v___y_1437_ = v___x_1451_;
goto v___jp_1436_;
}
v___jp_1436_:
{
lean_object* v___x_1438_; 
v___x_1438_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1432_, v___x_1435_, v___y_1437_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
lean_dec(v_inst_1431_);
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1438_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1438_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
else
{
lean_object* v_a_1447_; size_t v___x_1448_; lean_object* v___x_1449_; 
v_a_1447_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1438_, 1);
v___x_1448_ = lean_unbox_usize(v_a_1447_);
lean_dec(v_a_1447_);
v___x_1449_ = l_Lean_Server_rpcGetRef___redArg(v_inst_1431_, v___x_1448_, v_a_1433_);
return v___x_1449_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg___boxed(lean_object* v_inst_1452_, lean_object* v_j_1453_, lean_object* v_a_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(v_inst_1452_, v_j_1453_, v_a_1454_);
lean_dec_ref(v_a_1454_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode(lean_object* v_00_u03b1_1456_, lean_object* v_inst_1457_, lean_object* v_j_1458_, lean_object* v_a_1459_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___redArg(v_inst_1457_, v_j_1458_, v_a_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___boxed(lean_object* v_00_u03b1_1461_, lean_object* v_inst_1462_, lean_object* v_j_1463_, lean_object* v_a_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode(v_00_u03b1_1461_, v_inst_1462_, v_j_1463_, v_a_1464_);
lean_dec_ref(v_a_1464_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName___redArg(lean_object* v_inst_1466_){
_start:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
lean_inc(v_inst_1466_);
v___x_1467_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcEncode___boxed), 4, 2);
lean_closure_set(v___x_1467_, 0, lean_box(0));
lean_closure_set(v___x_1467_, 1, v_inst_1466_);
v___x_1468_ = lean_alloc_closure((void*)(l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName_rpcDecode___boxed), 4, 2);
lean_closure_set(v___x_1468_, 0, lean_box(0));
lean_closure_set(v___x_1468_, 1, v_inst_1466_);
v___x_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1467_);
lean_ctor_set(v___x_1469_, 1, v___x_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName(lean_object* v_00_u03b1_1470_, lean_object* v_inst_1471_){
_start:
{
lean_object* v___x_1472_; 
v___x_1472_ = l_Lean_Server_instRpcEncodableWithRpcRefOfTypeName___redArg(v_inst_1471_);
return v___x_1472_;
}
}
lean_object* runtime_initialize_Init_Dynamic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Rpc_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Dynamic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_instInhabitedRpcRef_default = _init_l_Lean_Lsp_instInhabitedRpcRef_default();
l_Lean_Lsp_instInhabitedRpcRef = _init_l_Lean_Lsp_instInhabitedRpcRef();
res = l___private_Lean_Server_Rpc_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_Rpc_Basic_1605303199____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_freshWithRpcRefId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_freshWithRpcRefId);
lean_dec_ref(res);
l_Lean_Server_rpcStoreRef___redArg___boxed__const__1 = _init_l_Lean_Server_rpcStoreRef___redArg___boxed__const__1();
lean_mark_persistent(l_Lean_Server_rpcStoreRef___redArg___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Rpc_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Dynamic(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Rpc_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Dynamic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Rpc_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Rpc_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Rpc_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
