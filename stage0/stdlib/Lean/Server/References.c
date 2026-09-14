// Lean compiler output
// Module: Lean.Server.References
// Imports: public import Lean.Data.Lsp.Internal public import Lean.Server.Utils public import Lean.Elab.Import
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
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Lsp_RefIdent_fromJson_x3f(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_ModuleRefs_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Lsp_RefInfo_Location_range(lean_object*);
uint8_t l_Lean_Lsp_instOrdPosition_ord(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Lsp_instHashableRange_hash(lean_object*);
uint8_t l_Lean_Lsp_instBEqRange_beq(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instBEqRefIdent_beq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_link2___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_link___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint64_t l_Lean_Lsp_instHashableRefIdent_hash(lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instOrdRange_ord(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_range_x3f(lean_object*);
lean_object* l_Lean_Elab_Info_stx(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Syntax_Range_toLspRange(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(lean_object*);
lean_object* l_Lean_Lsp_Decls_get_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_DeclInfo_range(lean_object*);
lean_object* l_Lean_Lsp_DeclInfo_selectionRange(lean_object*);
lean_object* l_Lean_Lsp_ModuleRefs_get_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instOrdRefIdent_ord(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_Decls_insert(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Server_documentUriFromModule_x3f(lean_object*);
lean_object* l_String_toName(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_ModuleRefs_getD(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_Decls_insertMany(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* lean_array_mk(lean_object*);
extern lean_object* l_Lean_instInhabitedDeclarationRanges_default;
lean_object* l_Lean_Lsp_RefInfo_Location_mk(lean_object*, lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Lsp_DeclInfo_ofDeclarationRanges(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_IO_throwServerError___redArg(lean_object*);
lean_object* l_Lean_Lsp_ModuleRefs_toList(lean_object*);
lean_object* l_Lean_Lsp_RefIdent_toJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Lsp_Decls_toList(lean_object*);
lean_object* l_Lean_Elab_HeaderSyntax_imports(lean_object*, uint8_t);
uint8_t l_IO_CancelToken_isSet(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ImportInfo_ofImport(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_collectImports_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_collectImports_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_collectImports(lean_object*);
static const lean_array_object l_Lean_Server_RefInfo_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_RefInfo_empty___closed__0 = (const lean_object*)&l_Lean_Server_RefInfo_empty___closed__0_value;
static const lean_ctor_object l_Lean_Server_RefInfo_empty___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_RefInfo_empty___closed__0_value)}};
static const lean_object* l_Lean_Server_RefInfo_empty___closed__1 = (const lean_object*)&l_Lean_Server_RefInfo_empty___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_RefInfo_empty = (const lean_object*)&l_Lean_Server_RefInfo_empty___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_addRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_RefInfo_toLspRefInfo_spec__0(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_RefInfo_toLspRefInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_toLspRefInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_toLspRefInfo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_addRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_ModuleRefs_toLspModuleRefs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_ModuleRefs_toLspModuleRefs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Lsp_RefInfo_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_RefInfo_empty___closed__0 = (const lean_object*)&l_Lean_Lsp_RefInfo_empty___closed__0_value;
static const lean_ctor_object l_Lean_Lsp_RefInfo_empty___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_RefInfo_empty___closed__0_value)}};
static const lean_object* l_Lean_Lsp_RefInfo_empty___closed__1 = (const lean_object*)&l_Lean_Lsp_RefInfo_empty___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Lsp_RefInfo_empty = (const lean_object*)&l_Lean_Lsp_RefInfo_empty___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_merge(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_References_0__Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_contains(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findAt_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Lsp_ModuleRefs_findAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_ModuleRefs_findAt___closed__0 = (const lean_object*)&l_Lean_Lsp_ModuleRefs_findAt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findRange_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findRange_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Expected list of length 8, not length "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Expected list"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__1_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__1_value)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__2_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Expected list of length 4 or 5, not "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6_spec__9___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "usages"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Expected array, got other JSON type"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__0 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__0_value;
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__1 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__1_value;
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__2 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__2_value;
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Ilean"};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__3 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_Server_instFromJsonIlean_fromJson___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_instFromJsonIlean_fromJson___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__4_value_aux_0),((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_instFromJsonIlean_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__4_value_aux_1),((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(244, 170, 53, 225, 48, 57, 13, 173)}};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__4 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__5;
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__6 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__7;
static const lean_ctor_object l_Lean_Server_instFromJsonIlean_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 68, 50, 73, 160, 48, 142, 108)}};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__8 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__9;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__10;
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__11 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__12;
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__13 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__13_value;
static const lean_ctor_object l_Lean_Server_instFromJsonIlean_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__13_value),LEAN_SCALAR_PTR_LITERAL(119, 13, 181, 135, 119, 7, 66, 71)}};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__14 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__15;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__16;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__17;
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "directImports"};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__18 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__18_value;
static const lean_ctor_object l_Lean_Server_instFromJsonIlean_fromJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__18_value),LEAN_SCALAR_PTR_LITERAL(113, 107, 65, 139, 239, 150, 173, 242)}};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__19 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__19_value;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__20;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__21;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__22;
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "references"};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__23 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__23_value;
static const lean_ctor_object l_Lean_Server_instFromJsonIlean_fromJson___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__23_value),LEAN_SCALAR_PTR_LITERAL(52, 234, 189, 66, 81, 216, 208, 197)}};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__24 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__24_value;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__25;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__26;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__27;
static const lean_string_object l_Lean_Server_instFromJsonIlean_fromJson___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decls"};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__28 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__28_value;
static const lean_ctor_object l_Lean_Server_instFromJsonIlean_fromJson___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__28_value),LEAN_SCALAR_PTR_LITERAL(44, 160, 58, 0, 137, 124, 237, 95)}};
static const lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__29 = (const lean_object*)&l_Lean_Server_instFromJsonIlean_fromJson___closed__29_value;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__30;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__31;
static lean_once_cell_t l_Lean_Server_instFromJsonIlean_fromJson___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonIlean_fromJson___closed__32;
LEAN_EXPORT lean_object* l_Lean_Server_instFromJsonIlean_fromJson(lean_object*);
static const lean_closure_object l_Lean_Server_instFromJsonIlean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_instFromJsonIlean_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instFromJsonIlean___closed__0 = (const lean_object*)&l_Lean_Server_instFromJsonIlean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instFromJsonIlean = (const lean_object*)&l_Lean_Server_instFromJsonIlean___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__4_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1_spec__2_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_instToJsonIlean_toJson_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_instToJsonIlean_toJson_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_instToJsonIlean_toJson_spec__7(lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_instToJsonIlean_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_instToJsonIlean_toJson___closed__0 = (const lean_object*)&l_Lean_Server_instToJsonIlean_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonIlean_toJson(lean_object*);
static const lean_closure_object l_Lean_Server_instToJsonIlean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_instToJsonIlean_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instToJsonIlean___closed__0 = (const lean_object*)&l_Lean_Server_instToJsonIlean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instToJsonIlean = (const lean_object*)&l_Lean_Server_instToJsonIlean___closed__0_value;
static const lean_string_object l_Lean_Server_Ilean_load___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Failed to load ilean at "};
static const lean_object* l_Lean_Server_Ilean_load___closed__0 = (const lean_object*)&l_Lean_Server_Ilean_load___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_load(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_load___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_getModuleContainingDecl_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_getModuleContainingDecl_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_identOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_identOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Server.InfoUtils.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Server.InfoUtils"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_findReferences(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_findReferences___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__0;
static lean_once_cell_t l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_insertIdMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___closed__0_value;
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_combineIdents___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_combineIdents___closed__0;
static lean_once_cell_t l_Lean_Server_combineIdents___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_combineIdents___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_combineIdents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_combineIdents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_dedupReferences_spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_dedupReferences_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_dedupReferences_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_dedupReferences_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_dedupReferences_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_dedupReferences___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_dedupReferences___closed__0;
static lean_once_cell_t l_Lean_Server_dedupReferences___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_dedupReferences___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Server_instInhabitedModuleImport_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_instInhabitedModuleImport_default___closed__0 = (const lean_object*)&l_Lean_Server_instInhabitedModuleImport_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instInhabitedModuleImport_default = (const lean_object*)&l_Lean_Server_instInhabitedModuleImport_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instInhabitedModuleImport = (const lean_object*)&l_Lean_Server_instInhabitedModuleImport_default___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Server_References_0__Lean_Server_ModuleImport_collapseIdenticalImports_x3f_collapseMetaKinds(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_ModuleImport_collapseIdenticalImports_x3f_collapseMetaKinds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ModuleImport_collapseIdenticalImports_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ModuleImport_collapseIdenticalImports_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_instEmptyCollectionDirectImports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_instEmptyCollectionDirectImports___closed__0 = (const lean_object*)&l_Lean_Server_instEmptyCollectionDirectImports___closed__0_value;
static const lean_ctor_object l_Lean_Server_instEmptyCollectionDirectImports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_instEmptyCollectionDirectImports___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Server_instEmptyCollectionDirectImports___closed__1 = (const lean_object*)&l_Lean_Server_instEmptyCollectionDirectImports___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instEmptyCollectionDirectImports = (const lean_object*)&l_Lean_Server_instEmptyCollectionDirectImports___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_DirectImports_convertImportInfos___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_DirectImports_convertImportInfos___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_DirectImports_convertImportInfos_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_DirectImports_convertImportInfos_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_DirectImports_convertImportInfos_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_DirectImports_convertImportInfos_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_DirectImports_convertImportInfos_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_DirectImports_convertImportInfos_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__0;
static lean_once_cell_t l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_DirectImports_convertImportInfos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_DirectImports_convertImportInfos___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_DirectImports_convertImportInfos___closed__0 = (const lean_object*)&l_Lean_Server_DirectImports_convertImportInfos___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_DirectImports_convertImportInfos(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_DirectImports_convertImportInfos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_TransientWorkerILean_hasRefs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_TransientWorkerILean_hasRefs___boxed(lean_object*);
static const lean_ctor_object l_Lean_Server_instInhabitedReferences_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Server_instInhabitedReferences_default___closed__0 = (const lean_object*)&l_Lean_Server_instInhabitedReferences_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instInhabitedReferences_default = (const lean_object*)&l_Lean_Server_instInhabitedReferences_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instInhabitedReferences = (const lean_object*)&l_Lean_Server_instInhabitedReferences_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_References_empty = (const lean_object*)&l_Lean_Server_instInhabitedReferences_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_References_addIlean(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_addIlean___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_removeIlean(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_removeIlean___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerSetupInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerSetupInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_References_updateWorkerRefs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_References_updateWorkerRefs___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_References_updateWorkerRefs___closed__0 = (const lean_object*)&l_Lean_Server_References_updateWorkerRefs___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_removeWorkerRefs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_removeWorkerRefs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_allRefs(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_allDirectImports_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_allDirectImports_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_allDirectImports(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_getModuleRefs_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_getModuleRefs_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_getDirectImports_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_getDirectImports_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_getDecls_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_getDecls_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_allRefsFor_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_allRefsFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1_spec__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_References_allRefsFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_References_allRefsFor___closed__0 = (const lean_object*)&l_Lean_Server_References_allRefsFor___closed__0_value;
static const lean_array_object l_Lean_Server_References_allRefsFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_References_allRefsFor___closed__1 = (const lean_object*)&l_Lean_Server_References_allRefsFor___closed__1_value;
static const lean_array_object l_Lean_Server_References_allRefsFor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_References_allRefsFor___closed__2 = (const lean_object*)&l_Lean_Server_References_allRefsFor___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Server_References_allRefsFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_findRange_x3f(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_References_findRange_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_ParentDecl_ofDecls_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_ParentDecl_ofDecls_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_References_referringTo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_References_referringTo___closed__0 = (const lean_object*)&l_Lean_Server_References_referringTo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_References_referringTo(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_References_referringTo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionOf_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_References_definitionsMatching___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_References_definitionsMatching___redArg___closed__0 = (const lean_object*)&l_Lean_Server_References_definitionsMatching___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Server_References_definitionsMatching___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_References_definitionsMatching___redArg___closed__0_value)}};
static const lean_object* l_Lean_Server_References_definitionsMatching___redArg___closed__1 = (const lean_object*)&l_Lean_Server_References_definitionsMatching___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_References_importedBy_spec__0(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_importedBy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_importedBy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ImportInfo_ofImport(lean_object* v_i_1_){
_start:
{
lean_object* v_module_2_; uint8_t v_importAll_3_; uint8_t v_isExported_4_; uint8_t v_isMeta_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_18_; 
v_module_2_ = lean_ctor_get(v_i_1_, 0);
v_importAll_3_ = lean_ctor_get_uint8(v_i_1_, sizeof(void*)*1);
v_isExported_4_ = lean_ctor_get_uint8(v_i_1_, sizeof(void*)*1 + 1);
v_isMeta_5_ = lean_ctor_get_uint8(v_i_1_, sizeof(void*)*1 + 2);
v_isSharedCheck_18_ = !lean_is_exclusive(v_i_1_);
if (v_isSharedCheck_18_ == 0)
{
v___x_7_ = v_i_1_;
v_isShared_8_ = v_isSharedCheck_18_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_module_2_);
lean_dec(v_i_1_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_18_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
uint8_t v___x_9_; lean_object* v___x_10_; 
v___x_9_ = 1;
v___x_10_ = l_Lean_Name_toString(v_module_2_, v___x_9_);
if (v_isExported_4_ == 0)
{
lean_object* v___x_12_; 
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 0, v___x_10_);
v___x_12_ = v___x_7_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v___x_10_);
lean_ctor_set_uint8(v_reuseFailAlloc_13_, sizeof(void*)*1 + 2, v_isMeta_5_);
v___x_12_ = v_reuseFailAlloc_13_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*1, v___x_9_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*1 + 1, v_importAll_3_);
return v___x_12_;
}
}
else
{
uint8_t v___x_14_; lean_object* v___x_16_; 
v___x_14_ = 0;
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 0, v___x_10_);
v___x_16_ = v___x_7_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_10_);
lean_ctor_set_uint8(v_reuseFailAlloc_17_, sizeof(void*)*1 + 2, v_isMeta_5_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
lean_ctor_set_uint8(v___x_16_, sizeof(void*)*1, v___x_14_);
lean_ctor_set_uint8(v___x_16_, sizeof(void*)*1 + 1, v_importAll_3_);
return v___x_16_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_collectImports_spec__0(size_t v_sz_19_, size_t v_i_20_, lean_object* v_bs_21_){
_start:
{
uint8_t v___x_22_; 
v___x_22_ = lean_usize_dec_lt(v_i_20_, v_sz_19_);
if (v___x_22_ == 0)
{
return v_bs_21_;
}
else
{
lean_object* v_v_23_; lean_object* v___x_24_; lean_object* v_bs_x27_25_; lean_object* v___x_26_; size_t v___x_27_; size_t v___x_28_; lean_object* v___x_29_; 
v_v_23_ = lean_array_uget(v_bs_21_, v_i_20_);
v___x_24_ = lean_unsigned_to_nat(0u);
v_bs_x27_25_ = lean_array_uset(v_bs_21_, v_i_20_, v___x_24_);
v___x_26_ = l_Lean_Server_ImportInfo_ofImport(v_v_23_);
v___x_27_ = ((size_t)1ULL);
v___x_28_ = lean_usize_add(v_i_20_, v___x_27_);
v___x_29_ = lean_array_uset(v_bs_x27_25_, v_i_20_, v___x_26_);
v_i_20_ = v___x_28_;
v_bs_21_ = v___x_29_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_collectImports_spec__0___boxed(lean_object* v_sz_31_, lean_object* v_i_32_, lean_object* v_bs_33_){
_start:
{
size_t v_sz_boxed_34_; size_t v_i_boxed_35_; lean_object* v_res_36_; 
v_sz_boxed_34_ = lean_unbox_usize(v_sz_31_);
lean_dec(v_sz_31_);
v_i_boxed_35_ = lean_unbox_usize(v_i_32_);
lean_dec(v_i_32_);
v_res_36_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_collectImports_spec__0(v_sz_boxed_34_, v_i_boxed_35_, v_bs_33_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_collectImports(lean_object* v_headerStx_37_){
_start:
{
uint8_t v___x_38_; lean_object* v___x_39_; size_t v_sz_40_; size_t v___x_41_; lean_object* v___x_42_; 
v___x_38_ = 0;
v___x_39_ = l_Lean_Elab_HeaderSyntax_imports(v_headerStx_37_, v___x_38_);
v_sz_40_ = lean_array_size(v___x_39_);
v___x_41_ = ((size_t)0ULL);
v___x_42_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_collectImports_spec__0(v_sz_40_, v___x_41_, v___x_39_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_addRef(lean_object* v_i_49_, lean_object* v_ref_50_){
_start:
{
lean_object* v_definition_51_; lean_object* v_usages_52_; 
v_definition_51_ = lean_ctor_get(v_i_49_, 0);
v_usages_52_ = lean_ctor_get(v_i_49_, 1);
if (lean_obj_tag(v_definition_51_) == 0)
{
lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_64_; 
lean_inc(v_definition_51_);
lean_inc_ref(v_usages_52_);
v_isSharedCheck_64_ = !lean_is_exclusive(v_i_49_);
if (v_isSharedCheck_64_ == 0)
{
lean_object* v_unused_65_; lean_object* v_unused_66_; 
v_unused_65_ = lean_ctor_get(v_i_49_, 1);
lean_dec(v_unused_65_);
v_unused_66_ = lean_ctor_get(v_i_49_, 0);
lean_dec(v_unused_66_);
v___x_57_ = v_i_49_;
v_isShared_58_ = v_isSharedCheck_64_;
goto v_resetjp_56_;
}
else
{
lean_dec(v_i_49_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_64_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
uint8_t v_isBinder_59_; 
v_isBinder_59_ = lean_ctor_get_uint8(v_ref_50_, sizeof(void*)*6);
if (v_isBinder_59_ == 0)
{
lean_del_object(v___x_57_);
goto v___jp_53_;
}
else
{
lean_object* v___x_60_; lean_object* v___x_62_; 
v___x_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_60_, 0, v_ref_50_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 0, v___x_60_);
v___x_62_ = v___x_57_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_60_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_usages_52_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
else
{
uint8_t v_isBinder_67_; 
v_isBinder_67_ = lean_ctor_get_uint8(v_ref_50_, sizeof(void*)*6);
if (v_isBinder_67_ == 0)
{
lean_inc_ref(v_definition_51_);
lean_inc_ref(v_usages_52_);
lean_dec_ref(v_i_49_);
goto v___jp_53_;
}
else
{
lean_dec_ref(v_ref_50_);
return v_i_49_;
}
}
v___jp_53_:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_array_push(v_usages_52_, v_ref_50_);
v___x_55_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_55_, 0, v_definition_51_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
return v___x_55_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_RefInfo_toLspRefInfo_spec__0(size_t v_sz_68_, size_t v_i_69_, lean_object* v_bs_70_, lean_object* v___y_71_){
_start:
{
uint8_t v___x_73_; 
v___x_73_ = lean_usize_dec_lt(v_i_69_, v_sz_68_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; 
v___x_74_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_74_, 0, v_bs_70_);
lean_ctor_set(v___x_74_, 1, v___y_71_);
return v___x_74_;
}
else
{
lean_object* v_v_75_; lean_object* v_ci_76_; lean_object* v_range_77_; lean_object* v_toCommandContextInfo_78_; lean_object* v_parentDecl_x3f_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v_bs_x27_82_; lean_object* v___y_84_; lean_object* v___y_85_; lean_object* v___y_92_; lean_object* v___y_93_; lean_object* v___y_98_; 
v_v_75_ = lean_array_uget_borrowed(v_bs_70_, v_i_69_);
v_ci_76_ = lean_ctor_get(v_v_75_, 4);
v_range_77_ = lean_ctor_get(v_v_75_, 2);
lean_inc_ref(v_range_77_);
v_toCommandContextInfo_78_ = lean_ctor_get(v_ci_76_, 0);
lean_inc_ref(v_toCommandContextInfo_78_);
v_parentDecl_x3f_79_ = lean_ctor_get(v_ci_76_, 1);
lean_inc(v_parentDecl_x3f_79_);
v___x_80_ = l_Lean_instInhabitedDeclarationRanges_default;
v___x_81_ = lean_unsigned_to_nat(0u);
v_bs_x27_82_ = lean_array_uset(v_bs_70_, v_i_69_, v___x_81_);
if (lean_obj_tag(v_parentDecl_x3f_79_) == 0)
{
lean_object* v___x_118_; 
v___x_118_ = lean_box(0);
v___y_98_ = v___x_118_;
goto v___jp_97_;
}
else
{
lean_object* v_val_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v_val_119_ = lean_ctor_get(v_parentDecl_x3f_79_, 0);
lean_inc(v_val_119_);
v___x_120_ = l_Lean_Name_toString(v_val_119_, v___x_73_);
v___x_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
v___y_98_ = v___x_121_;
goto v___jp_97_;
}
v___jp_83_:
{
lean_object* v___x_86_; size_t v___x_87_; size_t v___x_88_; lean_object* v___x_89_; 
v___x_86_ = l_Lean_Lsp_RefInfo_Location_mk(v_range_77_, v___y_84_);
lean_dec(v___y_84_);
lean_dec_ref(v_range_77_);
v___x_87_ = ((size_t)1ULL);
v___x_88_ = lean_usize_add(v_i_69_, v___x_87_);
v___x_89_ = lean_array_uset(v_bs_x27_82_, v_i_69_, v___x_86_);
v_i_69_ = v___x_88_;
v_bs_70_ = v___x_89_;
v___y_71_ = v___y_85_;
goto _start;
}
v___jp_91_:
{
if (lean_obj_tag(v___y_92_) == 1)
{
if (lean_obj_tag(v___y_93_) == 1)
{
lean_object* v_val_94_; lean_object* v_val_95_; lean_object* v___x_96_; 
v_val_94_ = lean_ctor_get(v___y_92_, 0);
v_val_95_ = lean_ctor_get(v___y_93_, 0);
lean_inc(v_val_95_);
lean_dec_ref_known(v___y_93_, 1);
lean_inc(v_val_94_);
v___x_96_ = l_Lean_Lsp_Decls_insert(v___y_71_, v_val_94_, v_val_95_);
v___y_84_ = v___y_92_;
v___y_85_ = v___x_96_;
goto v___jp_83_;
}
else
{
lean_dec(v___y_93_);
v___y_84_ = v___y_92_;
v___y_85_ = v___y_71_;
goto v___jp_83_;
}
}
else
{
lean_dec(v___y_93_);
v___y_84_ = v___y_92_;
v___y_85_ = v___y_71_;
goto v___jp_83_;
}
}
v___jp_97_:
{
lean_object* v_cmdEnv_x3f_99_; 
v_cmdEnv_x3f_99_ = lean_ctor_get(v_toCommandContextInfo_78_, 1);
lean_inc(v_cmdEnv_x3f_99_);
lean_dec_ref(v_toCommandContextInfo_78_);
if (lean_obj_tag(v_cmdEnv_x3f_99_) == 0)
{
lean_object* v___x_100_; 
lean_dec(v_parentDecl_x3f_79_);
v___x_100_ = lean_box(0);
v___y_92_ = v___y_98_;
v___y_93_ = v___x_100_;
goto v___jp_91_;
}
else
{
if (lean_obj_tag(v_parentDecl_x3f_79_) == 0)
{
lean_object* v___x_101_; 
lean_dec_ref_known(v_cmdEnv_x3f_99_, 1);
v___x_101_ = lean_box(0);
v___y_92_ = v___y_98_;
v___y_93_ = v___x_101_;
goto v___jp_91_;
}
else
{
lean_object* v_val_102_; lean_object* v_val_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; lean_object* v___x_107_; 
v_val_102_ = lean_ctor_get(v_cmdEnv_x3f_99_, 0);
lean_inc(v_val_102_);
lean_dec_ref_known(v_cmdEnv_x3f_99_, 1);
v_val_103_ = lean_ctor_get(v_parentDecl_x3f_79_, 0);
lean_inc(v_val_103_);
lean_dec_ref_known(v_parentDecl_x3f_79_, 1);
v___x_104_ = l_Lean_declRangeExt;
v___x_105_ = lean_box(1);
v___x_106_ = 0;
v___x_107_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_80_, v___x_104_, v_val_102_, v_val_103_, v___x_105_, v___x_106_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_box(0);
v___y_92_ = v___y_98_;
v___y_93_ = v___x_108_;
goto v___jp_91_;
}
else
{
lean_object* v_val_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_117_; 
v_val_109_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_117_ == 0)
{
v___x_111_ = v___x_107_;
v_isShared_112_ = v_isSharedCheck_117_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_val_109_);
lean_dec(v___x_107_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_117_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; lean_object* v___x_115_; 
v___x_113_ = l_Lean_Lsp_DeclInfo_ofDeclarationRanges(v_val_109_);
lean_dec(v_val_109_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_113_);
v___x_115_ = v___x_111_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_113_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
v___y_92_ = v___y_98_;
v___y_93_ = v___x_115_;
goto v___jp_91_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_RefInfo_toLspRefInfo_spec__0___boxed(lean_object* v_sz_122_, lean_object* v_i_123_, lean_object* v_bs_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
size_t v_sz_boxed_127_; size_t v_i_boxed_128_; lean_object* v_res_129_; 
v_sz_boxed_127_ = lean_unbox_usize(v_sz_122_);
lean_dec(v_sz_122_);
v_i_boxed_128_ = lean_unbox_usize(v_i_123_);
lean_dec(v_i_123_);
v_res_129_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_RefInfo_toLspRefInfo_spec__0(v_sz_boxed_127_, v_i_boxed_128_, v_bs_124_, v___y_125_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_toLspRefInfo(lean_object* v_i_130_, lean_object* v___y_131_){
_start:
{
lean_object* v_definition_133_; lean_object* v_usages_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_206_; 
v_definition_133_ = lean_ctor_get(v_i_130_, 0);
v_usages_134_ = lean_ctor_get(v_i_130_, 1);
v_isSharedCheck_206_ = !lean_is_exclusive(v_i_130_);
if (v_isSharedCheck_206_ == 0)
{
v___x_136_ = v_i_130_;
v_isShared_137_ = v_isSharedCheck_206_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_usages_134_);
lean_inc(v_definition_133_);
lean_dec(v_i_130_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_206_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v_fst_139_; lean_object* v_snd_140_; 
if (lean_obj_tag(v_definition_133_) == 0)
{
lean_object* v___x_156_; 
v___x_156_ = lean_box(0);
v_fst_139_ = v___x_156_;
v_snd_140_ = v___y_131_;
goto v___jp_138_;
}
else
{
lean_object* v_val_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_205_; 
v_val_157_ = lean_ctor_get(v_definition_133_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v_definition_133_);
if (v_isSharedCheck_205_ == 0)
{
v___x_159_ = v_definition_133_;
v_isShared_160_ = v_isSharedCheck_205_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_val_157_);
lean_dec(v_definition_133_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_205_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v_range_161_; lean_object* v_ci_162_; lean_object* v___y_164_; lean_object* v___y_165_; lean_object* v___y_171_; lean_object* v___y_172_; lean_object* v_toCommandContextInfo_176_; lean_object* v_parentDecl_x3f_177_; lean_object* v___x_178_; lean_object* v___y_180_; 
v_range_161_ = lean_ctor_get(v_val_157_, 2);
lean_inc_ref(v_range_161_);
v_ci_162_ = lean_ctor_get(v_val_157_, 4);
lean_inc_ref(v_ci_162_);
lean_dec(v_val_157_);
v_toCommandContextInfo_176_ = lean_ctor_get(v_ci_162_, 0);
lean_inc_ref(v_toCommandContextInfo_176_);
v_parentDecl_x3f_177_ = lean_ctor_get(v_ci_162_, 1);
lean_inc(v_parentDecl_x3f_177_);
lean_dec_ref(v_ci_162_);
v___x_178_ = l_Lean_instInhabitedDeclarationRanges_default;
if (lean_obj_tag(v_parentDecl_x3f_177_) == 0)
{
lean_object* v___x_200_; 
v___x_200_ = lean_box(0);
v___y_180_ = v___x_200_;
goto v___jp_179_;
}
else
{
lean_object* v_val_201_; uint8_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v_val_201_ = lean_ctor_get(v_parentDecl_x3f_177_, 0);
v___x_202_ = 1;
lean_inc(v_val_201_);
v___x_203_ = l_Lean_Name_toString(v_val_201_, v___x_202_);
v___x_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
v___y_180_ = v___x_204_;
goto v___jp_179_;
}
v___jp_163_:
{
lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_166_ = l_Lean_Lsp_RefInfo_Location_mk(v_range_161_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v_range_161_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 0, v___x_166_);
v___x_168_ = v___x_159_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
v_fst_139_ = v___x_168_;
v_snd_140_ = v___y_165_;
goto v___jp_138_;
}
}
v___jp_170_:
{
if (lean_obj_tag(v___y_171_) == 1)
{
if (lean_obj_tag(v___y_172_) == 1)
{
lean_object* v_val_173_; lean_object* v_val_174_; lean_object* v___x_175_; 
v_val_173_ = lean_ctor_get(v___y_171_, 0);
v_val_174_ = lean_ctor_get(v___y_172_, 0);
lean_inc(v_val_174_);
lean_dec_ref_known(v___y_172_, 1);
lean_inc(v_val_173_);
v___x_175_ = l_Lean_Lsp_Decls_insert(v___y_131_, v_val_173_, v_val_174_);
v___y_164_ = v___y_171_;
v___y_165_ = v___x_175_;
goto v___jp_163_;
}
else
{
lean_dec(v___y_172_);
v___y_164_ = v___y_171_;
v___y_165_ = v___y_131_;
goto v___jp_163_;
}
}
else
{
lean_dec(v___y_172_);
v___y_164_ = v___y_171_;
v___y_165_ = v___y_131_;
goto v___jp_163_;
}
}
v___jp_179_:
{
lean_object* v_cmdEnv_x3f_181_; 
v_cmdEnv_x3f_181_ = lean_ctor_get(v_toCommandContextInfo_176_, 1);
lean_inc(v_cmdEnv_x3f_181_);
lean_dec_ref(v_toCommandContextInfo_176_);
if (lean_obj_tag(v_cmdEnv_x3f_181_) == 0)
{
lean_object* v___x_182_; 
lean_dec(v_parentDecl_x3f_177_);
v___x_182_ = lean_box(0);
v___y_171_ = v___y_180_;
v___y_172_ = v___x_182_;
goto v___jp_170_;
}
else
{
if (lean_obj_tag(v_parentDecl_x3f_177_) == 0)
{
lean_object* v___x_183_; 
lean_dec_ref_known(v_cmdEnv_x3f_181_, 1);
v___x_183_ = lean_box(0);
v___y_171_ = v___y_180_;
v___y_172_ = v___x_183_;
goto v___jp_170_;
}
else
{
lean_object* v_val_184_; lean_object* v_val_185_; lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; lean_object* v___x_189_; 
v_val_184_ = lean_ctor_get(v_cmdEnv_x3f_181_, 0);
lean_inc(v_val_184_);
lean_dec_ref_known(v_cmdEnv_x3f_181_, 1);
v_val_185_ = lean_ctor_get(v_parentDecl_x3f_177_, 0);
lean_inc(v_val_185_);
lean_dec_ref_known(v_parentDecl_x3f_177_, 1);
v___x_186_ = l_Lean_declRangeExt;
v___x_187_ = lean_box(1);
v___x_188_ = 0;
v___x_189_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_178_, v___x_186_, v_val_184_, v_val_185_, v___x_187_, v___x_188_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v___x_190_; 
v___x_190_ = lean_box(0);
v___y_171_ = v___y_180_;
v___y_172_ = v___x_190_;
goto v___jp_170_;
}
else
{
lean_object* v_val_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_199_; 
v_val_191_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_199_ == 0)
{
v___x_193_ = v___x_189_;
v_isShared_194_ = v_isSharedCheck_199_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_val_191_);
lean_dec(v___x_189_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_199_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_195_ = l_Lean_Lsp_DeclInfo_ofDeclarationRanges(v_val_191_);
lean_dec(v_val_191_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v___x_195_);
v___x_197_ = v___x_193_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_195_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
v___y_171_ = v___y_180_;
v___y_172_ = v___x_197_;
goto v___jp_170_;
}
}
}
}
}
}
}
}
v___jp_138_:
{
size_t v_sz_141_; size_t v___x_142_; lean_object* v___x_143_; lean_object* v_fst_144_; lean_object* v_snd_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_155_; 
v_sz_141_ = lean_array_size(v_usages_134_);
v___x_142_ = ((size_t)0ULL);
v___x_143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_RefInfo_toLspRefInfo_spec__0(v_sz_141_, v___x_142_, v_usages_134_, v_snd_140_);
v_fst_144_ = lean_ctor_get(v___x_143_, 0);
v_snd_145_ = lean_ctor_get(v___x_143_, 1);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_155_ == 0)
{
v___x_147_ = v___x_143_;
v_isShared_148_ = v_isSharedCheck_155_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_snd_145_);
lean_inc(v_fst_144_);
lean_dec(v___x_143_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_155_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 1, v_fst_144_);
lean_ctor_set(v___x_136_, 0, v_fst_139_);
v___x_150_ = v___x_136_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_fst_139_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v_fst_144_);
v___x_150_ = v_reuseFailAlloc_154_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_152_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_150_);
v___x_152_ = v___x_147_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_150_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v_snd_145_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_toLspRefInfo___boxed(lean_object* v_i_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Server_RefInfo_toLspRefInfo(v_i_207_, v___y_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg___lam__0(lean_object* v_ref_211_, lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = ((lean_object*)(l_Lean_Server_RefInfo_empty));
v___x_214_ = l_Lean_Server_RefInfo_addRef(v___x_213_, v_ref_211_);
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
return v___x_215_;
}
else
{
lean_object* v_val_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_224_; 
v_val_216_ = lean_ctor_get(v_x_212_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v_x_212_);
if (v_isSharedCheck_224_ == 0)
{
v___x_218_ = v_x_212_;
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_val_216_);
lean_dec(v_x_212_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; lean_object* v___x_222_; 
v___x_220_ = l_Lean_Server_RefInfo_addRef(v_val_216_, v_ref_211_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v___x_220_);
v___x_222_ = v___x_218_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg(lean_object* v_ref_225_, lean_object* v_k_226_, lean_object* v_t_227_){
_start:
{
if (lean_obj_tag(v_t_227_) == 0)
{
lean_object* v_size_228_; lean_object* v_k_229_; lean_object* v_v_230_; lean_object* v_l_231_; lean_object* v_r_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_247_; 
v_size_228_ = lean_ctor_get(v_t_227_, 0);
v_k_229_ = lean_ctor_get(v_t_227_, 1);
v_v_230_ = lean_ctor_get(v_t_227_, 2);
v_l_231_ = lean_ctor_get(v_t_227_, 3);
v_r_232_ = lean_ctor_get(v_t_227_, 4);
v_isSharedCheck_247_ = !lean_is_exclusive(v_t_227_);
if (v_isSharedCheck_247_ == 0)
{
v___x_234_ = v_t_227_;
v_isShared_235_ = v_isSharedCheck_247_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_r_232_);
lean_inc(v_l_231_);
lean_inc(v_v_230_);
lean_inc(v_k_229_);
lean_inc(v_size_228_);
lean_dec(v_t_227_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_247_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
uint8_t v___x_236_; 
v___x_236_ = l_Lean_Lsp_instOrdRefIdent_ord(v_k_226_, v_k_229_);
switch(v___x_236_)
{
case 0:
{
lean_object* v_impl_237_; lean_object* v___x_238_; 
lean_del_object(v___x_234_);
lean_dec(v_size_228_);
v_impl_237_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg(v_ref_225_, v_k_226_, v_l_231_);
v___x_238_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_229_, v_v_230_, v_impl_237_, v_r_232_);
return v___x_238_;
}
case 1:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v_val_241_; lean_object* v___x_243_; 
lean_dec(v_k_229_);
v___x_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_239_, 0, v_v_230_);
v___x_240_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg___lam__0(v_ref_225_, v___x_239_);
v_val_241_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_val_241_);
lean_dec(v___x_240_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 2, v_val_241_);
lean_ctor_set(v___x_234_, 1, v_k_226_);
v___x_243_ = v___x_234_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_size_228_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_k_226_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v_val_241_);
lean_ctor_set(v_reuseFailAlloc_244_, 3, v_l_231_);
lean_ctor_set(v_reuseFailAlloc_244_, 4, v_r_232_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
default: 
{
lean_object* v_impl_245_; lean_object* v___x_246_; 
lean_del_object(v___x_234_);
lean_dec(v_size_228_);
v_impl_245_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg(v_ref_225_, v_k_226_, v_r_232_);
v___x_246_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_229_, v_v_230_, v_l_231_, v_impl_245_);
return v___x_246_;
}
}
}
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v_val_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_248_ = lean_box(0);
v___x_249_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg___lam__0(v_ref_225_, v___x_248_);
v_val_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_val_250_);
lean_dec(v___x_249_);
v___x_251_ = lean_unsigned_to_nat(1u);
v___x_252_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v_k_226_);
lean_ctor_set(v___x_252_, 2, v_val_250_);
lean_ctor_set(v___x_252_, 3, v_t_227_);
lean_ctor_set(v___x_252_, 4, v_t_227_);
return v___x_252_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_addRef(lean_object* v_self_253_, lean_object* v_ref_254_){
_start:
{
lean_object* v_ident_255_; lean_object* v___x_256_; 
v_ident_255_ = lean_ctor_get(v_ref_254_, 0);
lean_inc_ref(v_ident_255_);
v___x_256_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg(v_ref_254_, v_ident_255_, v_self_253_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0(lean_object* v_ref_257_, lean_object* v_k_258_, lean_object* v_t_259_, lean_object* v_hl_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_Server_ModuleRefs_addRef_spec__0___redArg(v_ref_257_, v_k_258_, v_t_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_ModuleRefs_toLspModuleRefs_spec__0(lean_object* v_init_262_, lean_object* v_x_263_, lean_object* v___y_264_){
_start:
{
if (lean_obj_tag(v_x_263_) == 0)
{
lean_object* v_k_266_; lean_object* v_v_267_; lean_object* v_l_268_; lean_object* v_r_269_; lean_object* v___x_270_; lean_object* v_fst_271_; lean_object* v_snd_272_; lean_object* v_a_273_; lean_object* v___x_274_; lean_object* v_fst_275_; lean_object* v_snd_276_; lean_object* v___x_277_; 
v_k_266_ = lean_ctor_get(v_x_263_, 1);
lean_inc(v_k_266_);
v_v_267_ = lean_ctor_get(v_x_263_, 2);
lean_inc(v_v_267_);
v_l_268_ = lean_ctor_get(v_x_263_, 3);
lean_inc(v_l_268_);
v_r_269_ = lean_ctor_get(v_x_263_, 4);
lean_inc(v_r_269_);
lean_dec_ref_known(v_x_263_, 5);
v___x_270_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_ModuleRefs_toLspModuleRefs_spec__0(v_init_262_, v_l_268_, v___y_264_);
v_fst_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_fst_271_);
v_snd_272_ = lean_ctor_get(v___x_270_, 1);
lean_inc(v_snd_272_);
lean_dec_ref(v___x_270_);
v_a_273_ = lean_ctor_get(v_fst_271_, 0);
lean_inc(v_a_273_);
lean_dec(v_fst_271_);
v___x_274_ = l_Lean_Server_RefInfo_toLspRefInfo(v_v_267_, v_snd_272_);
v_fst_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_fst_275_);
v_snd_276_ = lean_ctor_get(v___x_274_, 1);
lean_inc(v_snd_276_);
lean_dec_ref(v___x_274_);
v___x_277_ = l_Lean_Lsp_ModuleRefs_insert(v_a_273_, v_k_266_, v_fst_275_);
v_init_262_ = v___x_277_;
v_x_263_ = v_r_269_;
v___y_264_ = v_snd_276_;
goto _start;
}
else
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_279_, 0, v_init_262_);
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v___y_264_);
return v___x_280_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_ModuleRefs_toLspModuleRefs_spec__0___boxed(lean_object* v_init_281_, lean_object* v_x_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_ModuleRefs_toLspModuleRefs_spec__0(v_init_281_, v_x_282_, v___y_283_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs(lean_object* v_refs_286_){
_start:
{
lean_object* v_refs_x27_288_; lean_object* v___x_289_; lean_object* v_fst_290_; lean_object* v_snd_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_301_; 
v_refs_x27_288_ = lean_box(1);
v___x_289_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_ModuleRefs_toLspModuleRefs_spec__0(v_refs_x27_288_, v_refs_286_, v_refs_x27_288_);
v_fst_290_ = lean_ctor_get(v___x_289_, 0);
v_snd_291_ = lean_ctor_get(v___x_289_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_301_ == 0)
{
v___x_293_ = v___x_289_;
v_isShared_294_ = v_isSharedCheck_301_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_snd_291_);
lean_inc(v_fst_290_);
lean_dec(v___x_289_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_301_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v_d_296_; lean_object* v_a_300_; 
v_a_300_ = lean_ctor_get(v_fst_290_, 0);
lean_inc(v_a_300_);
lean_dec(v_fst_290_);
v_d_296_ = v_a_300_;
goto v___jp_295_;
v___jp_295_:
{
lean_object* v___x_298_; 
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 0, v_d_296_);
v___x_298_ = v___x_293_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_d_296_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_snd_291_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs___boxed(lean_object* v_refs_302_, lean_object* v___y_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_Server_ModuleRefs_toLspModuleRefs(v_refs_302_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_merge(lean_object* v_a_311_, lean_object* v_b_312_){
_start:
{
lean_object* v_definition_x3f_313_; lean_object* v_usages_314_; lean_object* v___y_316_; 
v_definition_x3f_313_ = lean_ctor_get(v_b_312_, 0);
lean_inc(v_definition_x3f_313_);
v_usages_314_ = lean_ctor_get(v_b_312_, 1);
lean_inc_ref(v_usages_314_);
lean_dec_ref(v_b_312_);
if (lean_obj_tag(v_definition_x3f_313_) == 0)
{
lean_object* v_definition_x3f_327_; 
v_definition_x3f_327_ = lean_ctor_get(v_a_311_, 0);
lean_inc(v_definition_x3f_327_);
v___y_316_ = v_definition_x3f_327_;
goto v___jp_315_;
}
else
{
v___y_316_ = v_definition_x3f_313_;
goto v___jp_315_;
}
v___jp_315_:
{
lean_object* v_usages_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_325_; 
v_usages_317_ = lean_ctor_get(v_a_311_, 1);
v_isSharedCheck_325_ = !lean_is_exclusive(v_a_311_);
if (v_isSharedCheck_325_ == 0)
{
lean_object* v_unused_326_; 
v_unused_326_ = lean_ctor_get(v_a_311_, 0);
lean_dec(v_unused_326_);
v___x_319_ = v_a_311_;
v_isShared_320_ = v_isSharedCheck_325_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_usages_317_);
lean_dec(v_a_311_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_325_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_321_; lean_object* v___x_323_; 
v___x_321_ = l_Array_append___redArg(v_usages_317_, v_usages_314_);
lean_dec_ref(v_usages_314_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 1, v___x_321_);
lean_ctor_set(v___x_319_, 0, v___y_316_);
v___x_323_ = v___x_319_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___y_316_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v___x_321_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_References_0__Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(uint8_t v_includeStop_328_, lean_object* v_range_329_, lean_object* v_pos_330_){
_start:
{
lean_object* v_start_331_; lean_object* v_end_332_; uint8_t v___x_333_; 
v_start_331_ = lean_ctor_get(v_range_329_, 0);
v_end_332_ = lean_ctor_get(v_range_329_, 1);
v___x_333_ = l_Lean_Lsp_instOrdPosition_ord(v_start_331_, v_pos_330_);
if (v___x_333_ == 2)
{
uint8_t v___x_334_; 
v___x_334_ = 0;
return v___x_334_;
}
else
{
if (v_includeStop_328_ == 0)
{
uint8_t v___x_335_; 
v___x_335_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_330_, v_end_332_);
if (v___x_335_ == 0)
{
uint8_t v___x_336_; 
v___x_336_ = 1;
return v___x_336_;
}
else
{
return v_includeStop_328_;
}
}
else
{
uint8_t v___x_337_; 
v___x_337_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_330_, v_end_332_);
if (v___x_337_ == 2)
{
uint8_t v___x_338_; 
v___x_338_ = 0;
return v___x_338_;
}
else
{
return v_includeStop_328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains___boxed(lean_object* v_includeStop_339_, lean_object* v_range_340_, lean_object* v_pos_341_){
_start:
{
uint8_t v_includeStop_boxed_342_; uint8_t v_res_343_; lean_object* v_r_344_; 
v_includeStop_boxed_342_ = lean_unbox(v_includeStop_339_);
v_res_343_ = l___private_Lean_Server_References_0__Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(v_includeStop_boxed_342_, v_range_340_, v_pos_341_);
lean_dec_ref(v_pos_341_);
lean_dec_ref(v_range_340_);
v_r_344_ = lean_box(v_res_343_);
return v_r_344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0(uint8_t v_includeStop_348_, lean_object* v_pos_349_, lean_object* v_as_350_, size_t v_sz_351_, size_t v_i_352_, lean_object* v_b_353_){
_start:
{
uint8_t v___x_354_; 
v___x_354_ = lean_usize_dec_lt(v_i_352_, v_sz_351_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; 
v___x_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_355_, 0, v_b_353_);
return v___x_355_;
}
else
{
lean_object* v___x_356_; lean_object* v_a_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
lean_dec_ref(v_b_353_);
v___x_356_ = lean_box(0);
v_a_357_ = lean_array_uget_borrowed(v_as_350_, v_i_352_);
v___x_358_ = l_Lean_Lsp_RefInfo_Location_range(v_a_357_);
v___x_359_ = l___private_Lean_Server_References_0__Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(v_includeStop_348_, v___x_358_, v_pos_349_);
lean_dec_ref(v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; size_t v___x_361_; size_t v___x_362_; 
v___x_360_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0___closed__0));
v___x_361_ = ((size_t)1ULL);
v___x_362_ = lean_usize_add(v_i_352_, v___x_361_);
v_i_352_ = v___x_362_;
v_b_353_ = v___x_360_;
goto _start;
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
lean_inc(v_a_357_);
v___x_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_364_, 0, v_a_357_);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v___x_356_);
v___x_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0___boxed(lean_object* v_includeStop_367_, lean_object* v_pos_368_, lean_object* v_as_369_, lean_object* v_sz_370_, lean_object* v_i_371_, lean_object* v_b_372_){
_start:
{
uint8_t v_includeStop_boxed_373_; size_t v_sz_boxed_374_; size_t v_i_boxed_375_; lean_object* v_res_376_; 
v_includeStop_boxed_373_ = lean_unbox(v_includeStop_367_);
v_sz_boxed_374_ = lean_unbox_usize(v_sz_370_);
lean_dec(v_sz_370_);
v_i_boxed_375_ = lean_unbox_usize(v_i_371_);
lean_dec(v_i_371_);
v_res_376_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0(v_includeStop_boxed_373_, v_pos_368_, v_as_369_, v_sz_boxed_374_, v_i_boxed_375_, v_b_372_);
lean_dec_ref(v_as_369_);
lean_dec_ref(v_pos_368_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(lean_object* v_self_377_, lean_object* v_pos_378_, uint8_t v_includeStop_379_){
_start:
{
lean_object* v_definition_x3f_380_; lean_object* v_usages_381_; 
v_definition_x3f_380_ = lean_ctor_get(v_self_377_, 0);
v_usages_381_ = lean_ctor_get(v_self_377_, 1);
if (lean_obj_tag(v_definition_x3f_380_) == 1)
{
lean_object* v_val_390_; lean_object* v___x_391_; uint8_t v___x_392_; 
v_val_390_ = lean_ctor_get(v_definition_x3f_380_, 0);
v___x_391_ = l_Lean_Lsp_RefInfo_Location_range(v_val_390_);
v___x_392_ = l___private_Lean_Server_References_0__Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(v_includeStop_379_, v___x_391_, v_pos_378_);
lean_dec_ref(v___x_391_);
if (v___x_392_ == 0)
{
goto v___jp_382_;
}
else
{
lean_inc_ref(v_definition_x3f_380_);
return v_definition_x3f_380_;
}
}
else
{
goto v___jp_382_;
}
v___jp_382_:
{
lean_object* v___x_383_; lean_object* v___x_384_; size_t v_sz_385_; size_t v___x_386_; lean_object* v___x_387_; 
v___x_383_ = lean_box(0);
v___x_384_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0___closed__0));
v_sz_385_ = lean_array_size(v_usages_381_);
v___x_386_ = ((size_t)0ULL);
v___x_387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_RefInfo_findReferenceLocation_x3f_spec__0(v_includeStop_379_, v_pos_378_, v_usages_381_, v_sz_385_, v___x_386_, v___x_384_);
if (lean_obj_tag(v___x_387_) == 0)
{
return v___x_383_;
}
else
{
lean_object* v_val_388_; lean_object* v_fst_389_; 
v_val_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_val_388_);
lean_dec_ref_known(v___x_387_, 1);
v_fst_389_ = lean_ctor_get(v_val_388_, 0);
lean_inc(v_fst_389_);
lean_dec(v_val_388_);
if (lean_obj_tag(v_fst_389_) == 0)
{
return v___x_383_;
}
else
{
return v_fst_389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___boxed(lean_object* v_self_393_, lean_object* v_pos_394_, lean_object* v_includeStop_395_){
_start:
{
uint8_t v_includeStop_boxed_396_; lean_object* v_res_397_; 
v_includeStop_boxed_396_ = lean_unbox(v_includeStop_395_);
v_res_397_ = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(v_self_393_, v_pos_394_, v_includeStop_boxed_396_);
lean_dec_ref(v_pos_394_);
lean_dec_ref(v_self_393_);
return v_res_397_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_contains(lean_object* v_self_398_, lean_object* v_pos_399_, uint8_t v_includeStop_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(v_self_398_, v_pos_399_, v_includeStop_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
uint8_t v___x_402_; 
v___x_402_ = 0;
return v___x_402_;
}
else
{
uint8_t v___x_403_; 
lean_dec_ref_known(v___x_401_, 1);
v___x_403_ = 1;
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___boxed(lean_object* v_self_404_, lean_object* v_pos_405_, lean_object* v_includeStop_406_){
_start:
{
uint8_t v_includeStop_boxed_407_; uint8_t v_res_408_; lean_object* v_r_409_; 
v_includeStop_boxed_407_ = lean_unbox(v_includeStop_406_);
v_res_408_ = l_Lean_Lsp_RefInfo_contains(v_self_404_, v_pos_405_, v_includeStop_boxed_407_);
lean_dec_ref(v_pos_405_);
lean_dec_ref(v_self_404_);
v_r_409_ = lean_box(v_res_408_);
return v_r_409_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findAt_spec__0(lean_object* v_pos_410_, uint8_t v_includeStop_411_, lean_object* v_init_412_, lean_object* v_x_413_){
_start:
{
if (lean_obj_tag(v_x_413_) == 0)
{
lean_object* v_k_414_; lean_object* v_v_415_; lean_object* v_l_416_; lean_object* v_r_417_; lean_object* v___x_418_; lean_object* v_a_419_; uint8_t v___x_420_; 
v_k_414_ = lean_ctor_get(v_x_413_, 1);
lean_inc(v_k_414_);
v_v_415_ = lean_ctor_get(v_x_413_, 2);
lean_inc(v_v_415_);
v_l_416_ = lean_ctor_get(v_x_413_, 3);
lean_inc(v_l_416_);
v_r_417_ = lean_ctor_get(v_x_413_, 4);
lean_inc(v_r_417_);
lean_dec_ref_known(v_x_413_, 5);
v___x_418_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findAt_spec__0(v_pos_410_, v_includeStop_411_, v_init_412_, v_l_416_);
v_a_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_419_);
v___x_420_ = l_Lean_Lsp_RefInfo_contains(v_v_415_, v_pos_410_, v_includeStop_411_);
lean_dec(v_v_415_);
if (v___x_420_ == 0)
{
lean_object* v_a_421_; 
lean_dec(v_a_419_);
lean_dec(v_k_414_);
v_a_421_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_421_);
lean_dec_ref(v___x_418_);
v_init_412_ = v_a_421_;
v_x_413_ = v_r_417_;
goto _start;
}
else
{
lean_object* v___x_423_; 
lean_dec_ref(v___x_418_);
v___x_423_ = lean_array_push(v_a_419_, v_k_414_);
v_init_412_ = v___x_423_;
v_x_413_ = v_r_417_;
goto _start;
}
}
else
{
lean_object* v___x_425_; 
v___x_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_425_, 0, v_init_412_);
return v___x_425_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findAt_spec__0___boxed(lean_object* v_pos_426_, lean_object* v_includeStop_427_, lean_object* v_init_428_, lean_object* v_x_429_){
_start:
{
uint8_t v_includeStop_boxed_430_; lean_object* v_res_431_; 
v_includeStop_boxed_430_ = lean_unbox(v_includeStop_427_);
v_res_431_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findAt_spec__0(v_pos_426_, v_includeStop_boxed_430_, v_init_428_, v_x_429_);
lean_dec_ref(v_pos_426_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt(lean_object* v_self_434_, lean_object* v_pos_435_, uint8_t v_includeStop_436_){
_start:
{
lean_object* v_result_437_; lean_object* v___x_438_; lean_object* v_a_439_; 
v_result_437_ = ((lean_object*)(l_Lean_Lsp_ModuleRefs_findAt___closed__0));
v___x_438_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findAt_spec__0(v_pos_435_, v_includeStop_436_, v_result_437_, v_self_434_);
v_a_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_a_439_);
lean_dec_ref(v___x_438_);
return v_a_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt___boxed(lean_object* v_self_440_, lean_object* v_pos_441_, lean_object* v_includeStop_442_){
_start:
{
uint8_t v_includeStop_boxed_443_; lean_object* v_res_444_; 
v_includeStop_boxed_443_ = lean_unbox(v_includeStop_442_);
v_res_444_ = l_Lean_Lsp_ModuleRefs_findAt(v_self_440_, v_pos_441_, v_includeStop_boxed_443_);
lean_dec_ref(v_pos_441_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0(lean_object* v_pos_448_, uint8_t v_includeStop_449_, lean_object* v_init_450_, lean_object* v_x_451_){
_start:
{
lean_object* v_d_453_; 
if (lean_obj_tag(v_x_451_) == 0)
{
lean_object* v_v_456_; lean_object* v_l_457_; lean_object* v_r_458_; lean_object* v___x_459_; lean_object* v_val_460_; 
v_v_456_ = lean_ctor_get(v_x_451_, 2);
v_l_457_ = lean_ctor_get(v_x_451_, 3);
v_r_458_ = lean_ctor_get(v_x_451_, 4);
v___x_459_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0(v_pos_448_, v_includeStop_449_, v_init_450_, v_l_457_);
v_val_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_val_460_);
lean_dec(v___x_459_);
if (lean_obj_tag(v_val_460_) == 0)
{
lean_object* v_a_461_; 
v_a_461_ = lean_ctor_get(v_val_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v_val_460_, 1);
v_d_453_ = v_a_461_;
goto v___jp_452_;
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec_ref_known(v_val_460_, 1);
v___x_462_ = lean_box(0);
v___x_463_ = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(v_v_456_, v_pos_448_, v_includeStop_449_);
if (lean_obj_tag(v___x_463_) == 1)
{
lean_object* v_val_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_473_; 
v_val_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_473_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_473_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_val_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_473_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_468_ = l_Lean_Lsp_RefInfo_Location_range(v_val_464_);
lean_dec(v_val_464_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_468_);
v___x_470_ = v___x_466_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_468_);
v___x_470_ = v_reuseFailAlloc_472_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
lean_object* v___x_471_; 
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
lean_ctor_set(v___x_471_, 1, v___x_462_);
v_d_453_ = v___x_471_;
goto v___jp_452_;
}
}
}
else
{
lean_object* v___x_474_; 
lean_dec(v___x_463_);
v___x_474_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0___closed__0));
v_init_450_ = v___x_474_;
v_x_451_ = v_r_458_;
goto _start;
}
}
}
else
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_476_, 0, v_init_450_);
v___x_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
return v___x_477_;
}
v___jp_452_:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v_d_453_);
v___x_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0___boxed(lean_object* v_pos_478_, lean_object* v_includeStop_479_, lean_object* v_init_480_, lean_object* v_x_481_){
_start:
{
uint8_t v_includeStop_boxed_482_; lean_object* v_res_483_; 
v_includeStop_boxed_482_ = lean_unbox(v_includeStop_479_);
v_res_483_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0(v_pos_478_, v_includeStop_boxed_482_, v_init_480_, v_x_481_);
lean_dec(v_x_481_);
lean_dec_ref(v_pos_478_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findRange_x3f(lean_object* v_self_484_, lean_object* v_pos_485_, uint8_t v_includeStop_486_){
_start:
{
lean_object* v___x_487_; lean_object* v_val_489_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v_val_493_; lean_object* v_a_494_; 
v___x_487_ = lean_box(0);
v___x_491_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0___closed__0));
v___x_492_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Lsp_ModuleRefs_findRange_x3f_spec__0(v_pos_485_, v_includeStop_486_, v___x_491_, v_self_484_);
v_val_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc(v_val_493_);
lean_dec(v___x_492_);
v_a_494_ = lean_ctor_get(v_val_493_, 0);
lean_inc(v_a_494_);
lean_dec(v_val_493_);
v_val_489_ = v_a_494_;
goto v___jp_488_;
v___jp_488_:
{
lean_object* v_fst_490_; 
v_fst_490_ = lean_ctor_get(v_val_489_, 0);
lean_inc(v_fst_490_);
lean_dec_ref(v_val_489_);
if (lean_obj_tag(v_fst_490_) == 0)
{
return v___x_487_;
}
else
{
return v_fst_490_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findRange_x3f___boxed(lean_object* v_self_495_, lean_object* v_pos_496_, lean_object* v_includeStop_497_){
_start:
{
uint8_t v_includeStop_boxed_498_; lean_object* v_res_499_; 
v_includeStop_boxed_498_ = lean_unbox(v_includeStop_497_);
v_res_499_ = l_Lean_Lsp_ModuleRefs_findRange_x3f(v_self_495_, v_pos_496_, v_includeStop_boxed_498_);
lean_dec_ref(v_pos_496_);
lean_dec(v_self_495_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__0(lean_object* v_j_500_, lean_object* v_k_501_){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = l_Lean_Json_getObjValD(v_j_500_, v_k_501_);
v___x_503_ = l_Lean_Json_getNat_x3f(v___x_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__0___boxed(lean_object* v_j_504_, lean_object* v_k_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__0(v_j_504_, v_k_505_);
lean_dec_ref(v_k_505_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__1(lean_object* v_j_507_, lean_object* v_k_508_){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = l_Lean_Json_getObjValD(v_j_507_, v_k_508_);
v___x_510_ = l_Lean_Name_fromJson_x3f(v___x_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__1___boxed(lean_object* v_j_511_, lean_object* v_k_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__1(v_j_511_, v_k_512_);
lean_dec_ref(v_k_512_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9(lean_object* v_init_518_, lean_object* v_x_519_){
_start:
{
if (lean_obj_tag(v_x_519_) == 0)
{
lean_object* v_k_520_; lean_object* v_v_521_; lean_object* v_l_522_; lean_object* v_r_523_; lean_object* v___x_524_; 
v_k_520_ = lean_ctor_get(v_x_519_, 1);
lean_inc(v_k_520_);
v_v_521_ = lean_ctor_get(v_x_519_, 2);
lean_inc(v_v_521_);
v_l_522_ = lean_ctor_get(v_x_519_, 3);
lean_inc(v_l_522_);
v_r_523_ = lean_ctor_get(v_x_519_, 4);
lean_inc(v_r_523_);
lean_dec_ref_known(v_x_519_, 5);
v___x_524_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9(v_init_518_, v_l_522_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_dec(v_r_523_);
lean_dec(v_v_521_);
lean_dec(v_k_520_);
return v___x_524_;
}
else
{
if (lean_obj_tag(v_v_521_) == 4)
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_639_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_639_ == 0)
{
v___x_527_ = v___x_524_;
v_isShared_528_ = v_isSharedCheck_639_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_524_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_639_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v_elems_529_; lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v_elems_529_ = lean_ctor_get(v_v_521_, 0);
lean_inc_ref(v_elems_529_);
lean_dec_ref_known(v_v_521_, 1);
v___x_530_ = lean_array_get_size(v_elems_529_);
v___x_531_ = lean_unsigned_to_nat(8u);
v___x_532_ = lean_nat_dec_eq(v___x_530_, v___x_531_);
if (v___x_532_ == 0)
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_537_; 
lean_dec_ref(v_elems_529_);
lean_dec(v_a_525_);
lean_dec(v_r_523_);
lean_dec(v_k_520_);
v___x_533_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__0));
v___x_534_ = l_Nat_reprFast(v___x_530_);
v___x_535_ = lean_string_append(v___x_533_, v___x_534_);
lean_dec_ref(v___x_534_);
if (v_isShared_528_ == 0)
{
lean_ctor_set_tag(v___x_527_, 0);
lean_ctor_set(v___x_527_, 0, v___x_535_);
v___x_537_ = v___x_527_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
else
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
lean_del_object(v___x_527_);
v___x_539_ = lean_box(0);
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = lean_array_get_borrowed(v___x_539_, v_elems_529_, v___x_540_);
lean_inc(v___x_541_);
v___x_542_ = l_Lean_Json_getNat_x3f(v___x_541_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec_ref(v_elems_529_);
lean_dec(v_a_525_);
lean_dec(v_r_523_);
lean_dec(v_k_520_);
v_a_543_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_542_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_542_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v_a_551_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_a_551_);
lean_dec_ref_known(v___x_542_, 1);
v___x_552_ = lean_unsigned_to_nat(1u);
v___x_553_ = lean_array_get_borrowed(v___x_539_, v_elems_529_, v___x_552_);
lean_inc(v___x_553_);
v___x_554_ = l_Lean_Json_getNat_x3f(v___x_553_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
lean_dec(v_a_551_);
lean_dec_ref(v_elems_529_);
lean_dec(v_a_525_);
lean_dec(v_r_523_);
lean_dec(v_k_520_);
v_a_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
else
{
lean_object* v_a_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v_a_563_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v___x_554_, 1);
v___x_564_ = lean_unsigned_to_nat(2u);
v___x_565_ = lean_array_get_borrowed(v___x_539_, v_elems_529_, v___x_564_);
lean_inc(v___x_565_);
v___x_566_ = l_Lean_Json_getNat_x3f(v___x_565_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
lean_dec(v_a_563_);
lean_dec(v_a_551_);
lean_dec_ref(v_elems_529_);
lean_dec(v_a_525_);
lean_dec(v_r_523_);
lean_dec(v_k_520_);
v_a_567_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_574_ == 0)
{
v___x_569_ = v___x_566_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_566_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_567_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
else
{
lean_object* v_a_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_a_575_ = lean_ctor_get(v___x_566_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v___x_566_, 1);
v___x_576_ = lean_unsigned_to_nat(3u);
v___x_577_ = lean_array_get_borrowed(v___x_539_, v_elems_529_, v___x_576_);
lean_inc(v___x_577_);
v___x_578_ = l_Lean_Json_getNat_x3f(v___x_577_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_dec(v_a_575_);
lean_dec(v_a_563_);
lean_dec(v_a_551_);
lean_dec_ref(v_elems_529_);
lean_dec(v_a_525_);
lean_dec(v_r_523_);
lean_dec(v_k_520_);
v_a_579_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_578_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_578_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
else
{
lean_object* v_a_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_a_587_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v___x_578_, 1);
v___x_588_ = lean_unsigned_to_nat(4u);
v___x_589_ = lean_array_get_borrowed(v___x_539_, v_elems_529_, v___x_588_);
lean_inc(v___x_589_);
v___x_590_ = l_Lean_Json_getNat_x3f(v___x_589_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_dec(v_a_587_);
lean_dec(v_a_575_);
lean_dec(v_a_563_);
lean_dec(v_a_551_);
lean_dec_ref(v_elems_529_);
lean_dec(v_a_525_);
lean_dec(v_r_523_);
lean_dec(v_k_520_);
v_a_591_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_590_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_590_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
else
{
lean_object* v_a_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v_a_599_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_599_);
lean_dec_ref_known(v___x_590_, 1);
v___x_600_ = lean_unsigned_to_nat(5u);
v___x_601_ = lean_array_get_borrowed(v___x_539_, v_elems_529_, v___x_600_);
lean_inc(v___x_601_);
v___x_602_ = l_Lean_Json_getNat_x3f(v___x_601_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
lean_dec(v_a_599_);
lean_dec(v_a_587_);
lean_dec(v_a_575_);
lean_dec(v_a_563_);
lean_dec(v_a_551_);
lean_dec_ref(v_elems_529_);
lean_dec(v_a_525_);
lean_dec(v_r_523_);
lean_dec(v_k_520_);
v_a_603_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_602_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_602_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
else
{
lean_object* v_a_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v_a_611_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_611_);
lean_dec_ref_known(v___x_602_, 1);
v___x_612_ = lean_unsigned_to_nat(6u);
v___x_613_ = lean_array_get_borrowed(v___x_539_, v_elems_529_, v___x_612_);
lean_inc(v___x_613_);
v___x_614_ = l_Lean_Json_getNat_x3f(v___x_613_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec(v_a_611_);
lean_dec(v_a_599_);
lean_dec(v_a_587_);
lean_dec(v_a_575_);
lean_dec(v_a_563_);
lean_dec(v_a_551_);
lean_dec_ref(v_elems_529_);
lean_dec(v_a_525_);
lean_dec(v_r_523_);
lean_dec(v_k_520_);
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v_a_623_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v___x_614_, 1);
v___x_624_ = lean_unsigned_to_nat(7u);
v___x_625_ = lean_array_get(v___x_539_, v_elems_529_, v___x_624_);
lean_dec_ref(v_elems_529_);
v___x_626_ = l_Lean_Json_getNat_x3f(v___x_625_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec(v_a_623_);
lean_dec(v_a_611_);
lean_dec(v_a_599_);
lean_dec(v_a_587_);
lean_dec(v_a_575_);
lean_dec(v_a_563_);
lean_dec(v_a_551_);
lean_dec(v_a_525_);
lean_dec(v_r_523_);
lean_dec(v_k_520_);
v_a_627_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_626_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_626_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v_a_635_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v___x_626_, 1);
v___x_636_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_636_, 0, v_a_551_);
lean_ctor_set(v___x_636_, 1, v_a_563_);
lean_ctor_set(v___x_636_, 2, v_a_575_);
lean_ctor_set(v___x_636_, 3, v_a_587_);
lean_ctor_set(v___x_636_, 4, v_a_599_);
lean_ctor_set(v___x_636_, 5, v_a_611_);
lean_ctor_set(v___x_636_, 6, v_a_623_);
lean_ctor_set(v___x_636_, 7, v_a_635_);
v___x_637_ = l_Lean_Lsp_Decls_insert(v_a_525_, v_k_520_, v___x_636_);
v_init_518_ = v___x_637_;
v_x_519_ = v_r_523_;
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
lean_object* v___x_640_; 
lean_dec_ref_known(v___x_524_, 1);
lean_dec(v_r_523_);
lean_dec(v_v_521_);
lean_dec(v_k_520_);
v___x_640_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9___closed__2));
return v___x_640_;
}
}
}
else
{
lean_object* v___x_641_; 
v___x_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_641_, 0, v_init_518_);
return v___x_641_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4(lean_object* v_j_642_, lean_object* v_k_643_){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = l_Lean_Json_getObjValD(v_j_642_, v_k_643_);
v___x_645_ = l_Lean_Json_getObj_x3f(v___x_644_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_645_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_645_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_a_654_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v___x_645_, 1);
v___x_655_ = lean_box(1);
v___x_656_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4_spec__9(v___x_655_, v_a_654_);
return v___x_656_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4___boxed(lean_object* v_j_657_, lean_object* v_k_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4(v_j_657_, v_k_658_);
lean_dec_ref(v_k_658_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8_spec__13(size_t v_sz_660_, size_t v_i_661_, lean_object* v_bs_662_){
_start:
{
uint8_t v___x_663_; 
v___x_663_ = lean_usize_dec_lt(v_i_661_, v_sz_660_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; 
v___x_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_664_, 0, v_bs_662_);
return v___x_664_;
}
else
{
lean_object* v_v_665_; lean_object* v___x_666_; lean_object* v_bs_x27_667_; size_t v___x_668_; size_t v___x_669_; lean_object* v___x_670_; 
v_v_665_ = lean_array_uget(v_bs_662_, v_i_661_);
v___x_666_ = lean_unsigned_to_nat(0u);
v_bs_x27_667_ = lean_array_uset(v_bs_662_, v_i_661_, v___x_666_);
v___x_668_ = ((size_t)1ULL);
v___x_669_ = lean_usize_add(v_i_661_, v___x_668_);
v___x_670_ = lean_array_uset(v_bs_x27_667_, v_i_661_, v_v_665_);
v_i_661_ = v___x_669_;
v_bs_662_ = v___x_670_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8_spec__13___boxed(lean_object* v_sz_672_, lean_object* v_i_673_, lean_object* v_bs_674_){
_start:
{
size_t v_sz_boxed_675_; size_t v_i_boxed_676_; lean_object* v_res_677_; 
v_sz_boxed_675_ = lean_unbox_usize(v_sz_672_);
lean_dec(v_sz_672_);
v_i_boxed_676_ = lean_unbox_usize(v_i_673_);
lean_dec(v_i_673_);
v_res_677_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8_spec__13(v_sz_boxed_675_, v_i_boxed_676_, v_bs_674_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8(lean_object* v_x_680_){
_start:
{
if (lean_obj_tag(v_x_680_) == 4)
{
lean_object* v_elems_681_; size_t v_sz_682_; size_t v___x_683_; lean_object* v___x_684_; 
v_elems_681_ = lean_ctor_get(v_x_680_, 0);
lean_inc_ref(v_elems_681_);
lean_dec_ref_known(v_x_680_, 1);
v_sz_682_ = lean_array_size(v_elems_681_);
v___x_683_ = ((size_t)0ULL);
v___x_684_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8_spec__13(v_sz_682_, v___x_683_, v_elems_681_);
return v___x_684_;
}
else
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_685_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__0));
v___x_686_ = lean_unsigned_to_nat(80u);
v___x_687_ = l_Lean_Json_pretty(v_x_680_, v___x_686_);
v___x_688_ = lean_string_append(v___x_685_, v___x_687_);
lean_dec_ref(v___x_687_);
v___x_689_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__1));
v___x_690_ = lean_string_append(v___x_688_, v___x_689_);
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__9(size_t v_sz_692_, size_t v_i_693_, lean_object* v_bs_694_){
_start:
{
uint8_t v___x_695_; 
v___x_695_ = lean_usize_dec_lt(v_i_693_, v_sz_692_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; 
v___x_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_696_, 0, v_bs_694_);
return v___x_696_;
}
else
{
lean_object* v_v_697_; lean_object* v___x_698_; 
v_v_697_ = lean_array_uget_borrowed(v_bs_694_, v_i_693_);
lean_inc(v_v_697_);
v___x_698_ = l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8(v_v_697_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
lean_dec_ref(v_bs_694_);
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
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
lean_object* v_a_707_; lean_object* v___x_708_; lean_object* v_bs_x27_709_; size_t v___x_710_; size_t v___x_711_; lean_object* v___x_712_; 
v_a_707_ = lean_ctor_get(v___x_698_, 0);
lean_inc(v_a_707_);
lean_dec_ref_known(v___x_698_, 1);
v___x_708_ = lean_unsigned_to_nat(0u);
v_bs_x27_709_ = lean_array_uset(v_bs_694_, v_i_693_, v___x_708_);
v___x_710_ = ((size_t)1ULL);
v___x_711_ = lean_usize_add(v_i_693_, v___x_710_);
v___x_712_ = lean_array_uset(v_bs_x27_709_, v_i_693_, v_a_707_);
v_i_693_ = v___x_711_;
v_bs_694_ = v___x_712_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__9___boxed(lean_object* v_sz_714_, lean_object* v_i_715_, lean_object* v_bs_716_){
_start:
{
size_t v_sz_boxed_717_; size_t v_i_boxed_718_; lean_object* v_res_719_; 
v_sz_boxed_717_ = lean_unbox_usize(v_sz_714_);
lean_dec(v_sz_714_);
v_i_boxed_718_ = lean_unbox_usize(v_i_715_);
lean_dec(v_i_715_);
v_res_719_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__9(v_sz_boxed_717_, v_i_boxed_718_, v_bs_716_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6(lean_object* v_x_720_){
_start:
{
if (lean_obj_tag(v_x_720_) == 4)
{
lean_object* v_elems_721_; size_t v_sz_722_; size_t v___x_723_; lean_object* v___x_724_; 
v_elems_721_ = lean_ctor_get(v_x_720_, 0);
lean_inc_ref(v_elems_721_);
lean_dec_ref_known(v_x_720_, 1);
v_sz_722_ = lean_array_size(v_elems_721_);
v___x_723_ = ((size_t)0ULL);
v___x_724_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__9(v_sz_722_, v___x_723_, v_elems_721_);
return v___x_724_;
}
else
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_725_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__0));
v___x_726_ = lean_unsigned_to_nat(80u);
v___x_727_ = l_Lean_Json_pretty(v_x_720_, v___x_726_);
v___x_728_ = lean_string_append(v___x_725_, v___x_727_);
lean_dec_ref(v___x_727_);
v___x_729_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__1));
v___x_730_ = lean_string_append(v___x_728_, v___x_729_);
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4(lean_object* v_j_732_, lean_object* v_k_733_){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = l_Lean_Json_getObjValD(v_j_732_, v_k_733_);
v___x_735_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6(v___x_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4___boxed(lean_object* v_j_736_, lean_object* v_k_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4(v_j_736_, v_k_737_);
lean_dec_ref(v_k_737_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5(size_t v_sz_741_, size_t v_i_742_, lean_object* v_bs_743_){
_start:
{
uint8_t v___x_744_; 
v___x_744_ = lean_usize_dec_lt(v_i_742_, v_sz_741_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; 
v___x_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_745_, 0, v_bs_743_);
return v___x_745_;
}
else
{
lean_object* v_v_746_; lean_object* v___x_747_; lean_object* v_bs_x27_748_; lean_object* v_a_750_; lean_object* v___x_755_; lean_object* v___x_756_; uint8_t v___y_758_; uint8_t v___y_822_; uint8_t v___y_823_; uint8_t v___y_824_; uint8_t v___y_830_; uint8_t v___x_834_; 
v_v_746_ = lean_array_uget(v_bs_743_, v_i_742_);
v___x_747_ = lean_unsigned_to_nat(0u);
v_bs_x27_748_ = lean_array_uset(v_bs_743_, v_i_742_, v___x_747_);
v___x_755_ = lean_array_get_size(v_v_746_);
v___x_756_ = lean_unsigned_to_nat(4u);
v___x_834_ = lean_nat_dec_eq(v___x_755_, v___x_756_);
if (v___x_834_ == 0)
{
v___y_830_ = v___x_744_;
goto v___jp_829_;
}
else
{
uint8_t v___x_835_; 
v___x_835_ = 0;
v___y_830_ = v___x_835_;
goto v___jp_829_;
}
v___jp_749_:
{
size_t v___x_751_; size_t v___x_752_; lean_object* v___x_753_; 
v___x_751_ = ((size_t)1ULL);
v___x_752_ = lean_usize_add(v_i_742_, v___x_751_);
v___x_753_ = lean_array_uset(v_bs_x27_748_, v_i_742_, v_a_750_);
v_i_742_ = v___x_752_;
v_bs_743_ = v___x_753_;
goto _start;
}
v___jp_757_:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_array_fget_borrowed(v_v_746_, v___x_747_);
lean_inc(v___x_759_);
v___x_760_ = l_Lean_Json_getNat_x3f(v___x_759_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec_ref(v_bs_x27_748_);
lean_dec(v_v_746_);
v_a_761_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_760_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_760_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v_a_769_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_a_769_);
lean_dec_ref_known(v___x_760_, 1);
v___x_770_ = lean_unsigned_to_nat(1u);
v___x_771_ = lean_array_fget_borrowed(v_v_746_, v___x_770_);
lean_inc(v___x_771_);
v___x_772_ = l_Lean_Json_getNat_x3f(v___x_771_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
lean_dec(v_a_769_);
lean_dec_ref(v_bs_x27_748_);
lean_dec(v_v_746_);
v_a_773_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_772_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v_a_781_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_781_);
lean_dec_ref_known(v___x_772_, 1);
v___x_782_ = lean_unsigned_to_nat(2u);
v___x_783_ = lean_array_fget_borrowed(v_v_746_, v___x_782_);
lean_inc(v___x_783_);
v___x_784_ = l_Lean_Json_getNat_x3f(v___x_783_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_dec(v_a_781_);
lean_dec(v_a_769_);
lean_dec_ref(v_bs_x27_748_);
lean_dec(v_v_746_);
v_a_785_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_784_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_784_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v_a_793_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_784_, 1);
v___x_794_ = lean_unsigned_to_nat(3u);
v___x_795_ = lean_array_fget_borrowed(v_v_746_, v___x_794_);
lean_inc(v___x_795_);
v___x_796_ = l_Lean_Json_getNat_x3f(v___x_795_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
lean_dec(v_a_793_);
lean_dec(v_a_781_);
lean_dec(v_a_769_);
lean_dec_ref(v_bs_x27_748_);
lean_dec(v_v_746_);
v_a_797_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_796_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_796_);
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
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
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
else
{
if (v___y_758_ == 0)
{
lean_object* v_a_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec(v_v_746_);
v_a_805_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v___x_796_, 1);
v___x_806_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__0));
v___x_807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_807_, 0, v_a_769_);
lean_ctor_set(v___x_807_, 1, v_a_781_);
lean_ctor_set(v___x_807_, 2, v_a_793_);
lean_ctor_set(v___x_807_, 3, v_a_805_);
lean_ctor_set(v___x_807_, 4, v___x_806_);
v_a_750_ = v___x_807_;
goto v___jp_749_;
}
else
{
lean_object* v_a_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_a_808_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_796_, 1);
v___x_809_ = lean_array_fget(v_v_746_, v___x_756_);
lean_dec(v_v_746_);
v___x_810_ = l_Lean_Json_getStr_x3f(v___x_809_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec(v_a_808_);
lean_dec(v_a_793_);
lean_dec(v_a_781_);
lean_dec(v_a_769_);
lean_dec_ref(v_bs_x27_748_);
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
else
{
lean_object* v_a_819_; lean_object* v___x_820_; 
v_a_819_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_819_);
lean_dec_ref_known(v___x_810_, 1);
v___x_820_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_820_, 0, v_a_769_);
lean_ctor_set(v___x_820_, 1, v_a_781_);
lean_ctor_set(v___x_820_, 2, v_a_793_);
lean_ctor_set(v___x_820_, 3, v_a_808_);
lean_ctor_set(v___x_820_, 4, v_a_819_);
v_a_750_ = v___x_820_;
goto v___jp_749_;
}
}
}
}
}
}
}
v___jp_821_:
{
if (v___y_823_ == 0)
{
v___y_758_ = v___y_822_;
goto v___jp_757_;
}
else
{
if (v___y_824_ == 0)
{
v___y_758_ = v___y_822_;
goto v___jp_757_;
}
else
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
lean_dec_ref(v_bs_x27_748_);
lean_dec(v_v_746_);
v___x_825_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__1));
v___x_826_ = l_Nat_reprFast(v___x_755_);
v___x_827_ = lean_string_append(v___x_825_, v___x_826_);
lean_dec_ref(v___x_826_);
v___x_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
return v___x_828_;
}
}
}
v___jp_829_:
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = lean_unsigned_to_nat(5u);
v___x_832_ = lean_nat_dec_eq(v___x_755_, v___x_831_);
if (v___x_832_ == 0)
{
v___y_822_ = v___x_832_;
v___y_823_ = v___y_830_;
v___y_824_ = v___x_744_;
goto v___jp_821_;
}
else
{
uint8_t v___x_833_; 
v___x_833_ = 0;
v___y_822_ = v___x_832_;
v___y_823_ = v___y_830_;
v___y_824_ = v___x_833_;
goto v___jp_821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___boxed(lean_object* v_sz_836_, lean_object* v_i_837_, lean_object* v_bs_838_){
_start:
{
size_t v_sz_boxed_839_; size_t v_i_boxed_840_; lean_object* v_res_841_; 
v_sz_boxed_839_ = lean_unbox_usize(v_sz_836_);
lean_dec(v_sz_836_);
v_i_boxed_840_ = lean_unbox_usize(v_i_837_);
lean_dec(v_i_837_);
v_res_841_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5(v_sz_boxed_839_, v_i_boxed_840_, v_bs_838_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6_spec__9(lean_object* v_x_844_){
_start:
{
if (lean_obj_tag(v_x_844_) == 0)
{
lean_object* v___x_845_; 
v___x_845_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6_spec__9___closed__0));
return v___x_845_;
}
else
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8(v_x_844_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_846_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_846_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
else
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_863_; 
v_a_855_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_863_ == 0)
{
v___x_857_ = v___x_846_;
v_isShared_858_ = v_isSharedCheck_863_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_846_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_863_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_859_; lean_object* v___x_861_; 
v___x_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_859_, 0, v_a_855_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_859_);
v___x_861_ = v___x_857_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_859_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6(lean_object* v_j_864_, lean_object* v_k_865_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = l_Lean_Json_getObjValD(v_j_864_, v_k_865_);
v___x_867_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6_spec__9(v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6___boxed(lean_object* v_j_868_, lean_object* v_k_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6(v_j_868_, v_k_869_);
lean_dec_ref(v_k_869_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7(lean_object* v_init_873_, lean_object* v_x_874_){
_start:
{
if (lean_obj_tag(v_x_874_) == 0)
{
lean_object* v_k_875_; lean_object* v_v_876_; lean_object* v_l_877_; lean_object* v_r_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_1048_; 
v_k_875_ = lean_ctor_get(v_x_874_, 1);
v_v_876_ = lean_ctor_get(v_x_874_, 2);
v_l_877_ = lean_ctor_get(v_x_874_, 3);
v_r_878_ = lean_ctor_get(v_x_874_, 4);
v_isSharedCheck_1048_ = !lean_is_exclusive(v_x_874_);
if (v_isSharedCheck_1048_ == 0)
{
lean_object* v_unused_1049_; 
v_unused_1049_ = lean_ctor_get(v_x_874_, 0);
lean_dec(v_unused_1049_);
v___x_880_ = v_x_874_;
v_isShared_881_ = v_isSharedCheck_1048_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_r_878_);
lean_inc(v_l_877_);
lean_inc(v_v_876_);
lean_inc(v_k_875_);
lean_dec(v_x_874_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_1048_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_882_; 
v___x_882_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7(v_init_873_, v_l_877_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
lean_dec(v_k_875_);
return v___x_882_;
}
else
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_1047_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_885_ = v___x_882_;
v_isShared_886_ = v_isSharedCheck_1047_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_882_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_1047_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; 
v___x_887_ = l_Lean_Json_parse(v_k_875_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_del_object(v___x_885_);
lean_dec(v_a_883_);
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
v_a_888_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_887_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_887_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_897_; 
v_a_896_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_887_, 1);
v___x_897_ = l_Lean_Lsp_RefIdent_fromJson_x3f(v_a_896_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_del_object(v___x_885_);
lean_dec(v_a_883_);
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
v_a_898_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_897_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_897_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
else
{
lean_object* v_a_906_; lean_object* v_definition_x3f_908_; lean_object* v_a_936_; lean_object* v___x_940_; lean_object* v___x_941_; 
v_a_906_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_906_);
lean_dec_ref_known(v___x_897_, 1);
v___x_940_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__1));
lean_inc(v_v_876_);
v___x_941_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__6(v_v_876_, v___x_940_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_dec(v_a_906_);
lean_del_object(v___x_885_);
lean_dec(v_a_883_);
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
v_a_942_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_941_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_941_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_1046_; 
v_a_950_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_952_ = v___x_941_;
v_isShared_953_ = v_isSharedCheck_1046_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_941_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_1046_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
if (lean_obj_tag(v_a_950_) == 0)
{
lean_object* v___x_954_; 
lean_del_object(v___x_952_);
lean_del_object(v___x_885_);
lean_del_object(v___x_880_);
v___x_954_ = lean_box(0);
v_definition_x3f_908_ = v___x_954_;
goto v___jp_907_;
}
else
{
lean_object* v_val_955_; lean_object* v___x_956_; lean_object* v___x_957_; uint8_t v___y_959_; uint8_t v___y_1028_; uint8_t v___y_1029_; uint8_t v___y_1030_; uint8_t v___y_1038_; uint8_t v___x_1043_; 
v_val_955_ = lean_ctor_get(v_a_950_, 0);
lean_inc(v_val_955_);
lean_dec_ref_known(v_a_950_, 1);
v___x_956_ = lean_array_get_size(v_val_955_);
v___x_957_ = lean_unsigned_to_nat(4u);
v___x_1043_ = lean_nat_dec_eq(v___x_956_, v___x_957_);
if (v___x_1043_ == 0)
{
uint8_t v___x_1044_; 
v___x_1044_ = 1;
v___y_1038_ = v___x_1044_;
goto v___jp_1037_;
}
else
{
uint8_t v___x_1045_; 
v___x_1045_ = 0;
v___y_1038_ = v___x_1045_;
goto v___jp_1037_;
}
v___jp_958_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_960_ = lean_unsigned_to_nat(0u);
v___x_961_ = lean_array_fget_borrowed(v_val_955_, v___x_960_);
lean_inc(v___x_961_);
v___x_962_ = l_Lean_Json_getNat_x3f(v___x_961_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
lean_dec(v_val_955_);
lean_dec(v_a_906_);
lean_del_object(v___x_885_);
lean_dec(v_a_883_);
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
v_a_963_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___x_962_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
else
{
lean_object* v_a_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v_a_971_ = lean_ctor_get(v___x_962_, 0);
lean_inc(v_a_971_);
lean_dec_ref_known(v___x_962_, 1);
v___x_972_ = lean_unsigned_to_nat(1u);
v___x_973_ = lean_array_fget_borrowed(v_val_955_, v___x_972_);
lean_inc(v___x_973_);
v___x_974_ = l_Lean_Json_getNat_x3f(v___x_973_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
lean_dec(v_a_971_);
lean_dec(v_val_955_);
lean_dec(v_a_906_);
lean_del_object(v___x_885_);
lean_dec(v_a_883_);
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
v_a_975_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_974_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_974_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v_a_983_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_974_, 1);
v___x_984_ = lean_unsigned_to_nat(2u);
v___x_985_ = lean_array_fget_borrowed(v_val_955_, v___x_984_);
lean_inc(v___x_985_);
v___x_986_ = l_Lean_Json_getNat_x3f(v___x_985_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
lean_dec(v_a_983_);
lean_dec(v_a_971_);
lean_dec(v_val_955_);
lean_dec(v_a_906_);
lean_del_object(v___x_885_);
lean_dec(v_a_883_);
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
v_a_987_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_986_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_986_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v_a_995_ = lean_ctor_get(v___x_986_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_986_, 1);
v___x_996_ = lean_unsigned_to_nat(3u);
v___x_997_ = lean_array_fget_borrowed(v_val_955_, v___x_996_);
lean_inc(v___x_997_);
v___x_998_ = l_Lean_Json_getNat_x3f(v___x_997_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_dec(v_a_995_);
lean_dec(v_a_983_);
lean_dec(v_a_971_);
lean_dec(v_val_955_);
lean_dec(v_a_906_);
lean_del_object(v___x_885_);
lean_dec(v_a_883_);
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
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
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
else
{
if (v___y_959_ == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1010_; 
lean_dec(v_val_955_);
v_a_1007_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_998_, 1);
v___x_1008_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__0));
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 4, v___x_1008_);
lean_ctor_set(v___x_880_, 3, v_a_1007_);
lean_ctor_set(v___x_880_, 2, v_a_995_);
lean_ctor_set(v___x_880_, 1, v_a_983_);
lean_ctor_set(v___x_880_, 0, v_a_971_);
v___x_1010_ = v___x_880_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_a_971_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v_a_983_);
lean_ctor_set(v_reuseFailAlloc_1011_, 2, v_a_995_);
lean_ctor_set(v_reuseFailAlloc_1011_, 3, v_a_1007_);
lean_ctor_set(v_reuseFailAlloc_1011_, 4, v___x_1008_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
v_a_936_ = v___x_1010_;
goto v___jp_935_;
}
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v_a_1012_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_a_1012_);
lean_dec_ref_known(v___x_998_, 1);
v___x_1013_ = lean_array_fget(v_val_955_, v___x_957_);
lean_dec(v_val_955_);
v___x_1014_ = l_Lean_Json_getStr_x3f(v___x_1013_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
lean_dec(v_a_1012_);
lean_dec(v_a_995_);
lean_dec(v_a_983_);
lean_dec(v_a_971_);
lean_dec(v_a_906_);
lean_del_object(v___x_885_);
lean_dec(v_a_883_);
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_1014_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1014_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1025_; 
v_a_1023_ = lean_ctor_get(v___x_1014_, 0);
lean_inc(v_a_1023_);
lean_dec_ref_known(v___x_1014_, 1);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 4, v_a_1023_);
lean_ctor_set(v___x_880_, 3, v_a_1012_);
lean_ctor_set(v___x_880_, 2, v_a_995_);
lean_ctor_set(v___x_880_, 1, v_a_983_);
lean_ctor_set(v___x_880_, 0, v_a_971_);
v___x_1025_ = v___x_880_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_971_);
lean_ctor_set(v_reuseFailAlloc_1026_, 1, v_a_983_);
lean_ctor_set(v_reuseFailAlloc_1026_, 2, v_a_995_);
lean_ctor_set(v_reuseFailAlloc_1026_, 3, v_a_1012_);
lean_ctor_set(v_reuseFailAlloc_1026_, 4, v_a_1023_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
v_a_936_ = v___x_1025_;
goto v___jp_935_;
}
}
}
}
}
}
}
}
v___jp_1027_:
{
if (v___y_1028_ == 0)
{
lean_del_object(v___x_952_);
v___y_959_ = v___y_1029_;
goto v___jp_958_;
}
else
{
if (v___y_1030_ == 0)
{
lean_del_object(v___x_952_);
v___y_959_ = v___y_1029_;
goto v___jp_958_;
}
else
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1035_; 
lean_dec(v_val_955_);
lean_dec(v_a_906_);
lean_del_object(v___x_885_);
lean_dec(v_a_883_);
lean_del_object(v___x_880_);
lean_dec(v_r_878_);
lean_dec(v_v_876_);
v___x_1031_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5___closed__1));
v___x_1032_ = l_Nat_reprFast(v___x_956_);
v___x_1033_ = lean_string_append(v___x_1031_, v___x_1032_);
lean_dec_ref(v___x_1032_);
if (v_isShared_953_ == 0)
{
lean_ctor_set_tag(v___x_952_, 0);
lean_ctor_set(v___x_952_, 0, v___x_1033_);
v___x_1035_ = v___x_952_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
v___jp_1037_:
{
lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1039_ = lean_unsigned_to_nat(5u);
v___x_1040_ = lean_nat_dec_eq(v___x_956_, v___x_1039_);
if (v___x_1040_ == 0)
{
uint8_t v___x_1041_; 
v___x_1041_ = 1;
v___y_1028_ = v___y_1038_;
v___y_1029_ = v___x_1040_;
v___y_1030_ = v___x_1041_;
goto v___jp_1027_;
}
else
{
uint8_t v___x_1042_; 
v___x_1042_ = 0;
v___y_1028_ = v___y_1038_;
v___y_1029_ = v___x_1040_;
v___y_1030_ = v___x_1042_;
goto v___jp_1027_;
}
}
}
}
}
v___jp_907_:
{
lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_909_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__0));
v___x_910_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4(v_v_876_, v___x_909_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec(v_definition_x3f_908_);
lean_dec(v_a_906_);
lean_dec(v_a_883_);
lean_dec(v_r_878_);
v_a_911_ = lean_ctor_get(v___x_910_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_910_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_910_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_a_911_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
else
{
lean_object* v_a_919_; size_t v_sz_920_; size_t v___x_921_; lean_object* v___x_922_; 
v_a_919_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_919_);
lean_dec_ref_known(v___x_910_, 1);
v_sz_920_ = lean_array_size(v_a_919_);
v___x_921_ = ((size_t)0ULL);
v___x_922_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__5(v_sz_920_, v___x_921_, v_a_919_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec(v_definition_x3f_908_);
lean_dec(v_a_906_);
lean_dec(v_a_883_);
lean_dec(v_r_878_);
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_a_931_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_931_);
lean_dec_ref_known(v___x_922_, 1);
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v_definition_x3f_908_);
lean_ctor_set(v___x_932_, 1, v_a_931_);
v___x_933_ = l_Lean_Lsp_ModuleRefs_insert(v_a_883_, v_a_906_, v___x_932_);
v_init_873_ = v___x_933_;
v_x_874_ = v_r_878_;
goto _start;
}
}
}
v___jp_935_:
{
lean_object* v___x_938_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v_a_936_);
v___x_938_ = v___x_885_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_936_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
v_definition_x3f_908_ = v___x_938_;
goto v___jp_907_;
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
lean_object* v___x_1050_; 
v___x_1050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1050_, 0, v_init_873_);
return v___x_1050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3(lean_object* v_j_1051_, lean_object* v_k_1052_){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = l_Lean_Json_getObjValD(v_j_1051_, v_k_1052_);
v___x_1054_ = l_Lean_Json_getObj_x3f(v___x_1053_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
v_a_1055_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1054_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1054_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_a_1063_ = lean_ctor_get(v___x_1054_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v___x_1054_, 1);
v___x_1064_ = lean_box(1);
v___x_1065_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7(v___x_1064_, v_a_1063_);
return v___x_1065_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3___boxed(lean_object* v_j_1066_, lean_object* v_k_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3(v_j_1066_, v_k_1067_);
lean_dec_ref(v_k_1067_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3(size_t v_sz_1072_, size_t v_i_1073_, lean_object* v_bs_1074_){
_start:
{
uint8_t v___x_1077_; 
v___x_1077_ = lean_usize_dec_lt(v_i_1073_, v_sz_1072_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; 
v___x_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1078_, 0, v_bs_1074_);
return v___x_1078_;
}
else
{
lean_object* v_v_1079_; 
v_v_1079_ = lean_array_uget_borrowed(v_bs_1074_, v_i_1073_);
if (lean_obj_tag(v_v_1079_) == 4)
{
lean_object* v_elems_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v_elems_1080_ = lean_ctor_get(v_v_1079_, 0);
v___x_1081_ = lean_array_get_size(v_elems_1080_);
v___x_1082_ = lean_unsigned_to_nat(4u);
v___x_1083_ = lean_nat_dec_eq(v___x_1081_, v___x_1082_);
if (v___x_1083_ == 0)
{
lean_dec_ref(v_bs_1074_);
goto v___jp_1075_;
}
else
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1084_ = lean_unsigned_to_nat(0u);
v___x_1085_ = lean_array_fget_borrowed(v_elems_1080_, v___x_1084_);
lean_inc(v___x_1085_);
v___x_1086_ = l_Lean_Json_getStr_x3f(v___x_1085_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
lean_dec_ref(v_bs_1074_);
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v_a_1095_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v___x_1086_, 1);
v___x_1096_ = lean_unsigned_to_nat(1u);
v___x_1097_ = lean_array_fget_borrowed(v_elems_1080_, v___x_1096_);
v___x_1098_ = l_Lean_Json_getBool_x3f(v___x_1097_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
lean_dec(v_a_1095_);
lean_dec_ref(v_bs_1074_);
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_1098_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1098_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v_a_1107_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v___x_1098_, 1);
v___x_1108_ = lean_unsigned_to_nat(2u);
v___x_1109_ = lean_array_fget_borrowed(v_elems_1080_, v___x_1108_);
v___x_1110_ = l_Lean_Json_getBool_x3f(v___x_1109_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_dec(v_a_1107_);
lean_dec(v_a_1095_);
lean_dec_ref(v_bs_1074_);
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
lean_object* v_a_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v_a_1119_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1119_);
lean_dec_ref_known(v___x_1110_, 1);
v___x_1120_ = lean_unsigned_to_nat(3u);
v___x_1121_ = lean_array_fget_borrowed(v_elems_1080_, v___x_1120_);
v___x_1122_ = l_Lean_Json_getBool_x3f(v___x_1121_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec(v_a_1119_);
lean_dec(v_a_1107_);
lean_dec(v_a_1095_);
lean_dec_ref(v_bs_1074_);
v_a_1123_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1122_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1122_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
else
{
lean_object* v_a_1131_; lean_object* v_bs_x27_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; uint8_t v___x_1135_; uint8_t v___x_1136_; size_t v___x_1137_; size_t v___x_1138_; lean_object* v___x_1139_; 
v_a_1131_ = lean_ctor_get(v___x_1122_, 0);
lean_inc(v_a_1131_);
lean_dec_ref_known(v___x_1122_, 1);
v_bs_x27_1132_ = lean_array_uset(v_bs_1074_, v_i_1073_, v___x_1084_);
v___x_1133_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1133_, 0, v_a_1095_);
v___x_1134_ = lean_unbox(v_a_1107_);
lean_dec(v_a_1107_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*1, v___x_1134_);
v___x_1135_ = lean_unbox(v_a_1119_);
lean_dec(v_a_1119_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*1 + 1, v___x_1135_);
v___x_1136_ = lean_unbox(v_a_1131_);
lean_dec(v_a_1131_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*1 + 2, v___x_1136_);
v___x_1137_ = ((size_t)1ULL);
v___x_1138_ = lean_usize_add(v_i_1073_, v___x_1137_);
v___x_1139_ = lean_array_uset(v_bs_x27_1132_, v_i_1073_, v___x_1133_);
v_i_1073_ = v___x_1138_;
v_bs_1074_ = v___x_1139_;
goto _start;
}
}
}
}
}
}
else
{
lean_dec_ref(v_bs_1074_);
goto v___jp_1075_;
}
}
v___jp_1075_:
{
lean_object* v___x_1076_; 
v___x_1076_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___closed__1));
return v___x_1076_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_1141_, lean_object* v_i_1142_, lean_object* v_bs_1143_){
_start:
{
size_t v_sz_boxed_1144_; size_t v_i_boxed_1145_; lean_object* v_res_1146_; 
v_sz_boxed_1144_ = lean_unbox_usize(v_sz_1141_);
lean_dec(v_sz_1141_);
v_i_boxed_1145_ = lean_unbox_usize(v_i_1142_);
lean_dec(v_i_1142_);
v_res_1146_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3(v_sz_boxed_1144_, v_i_boxed_1145_, v_bs_1143_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2(lean_object* v_x_1147_){
_start:
{
if (lean_obj_tag(v_x_1147_) == 4)
{
lean_object* v_elems_1148_; size_t v_sz_1149_; size_t v___x_1150_; lean_object* v___x_1151_; 
v_elems_1148_ = lean_ctor_get(v_x_1147_, 0);
lean_inc_ref(v_elems_1148_);
lean_dec_ref_known(v_x_1147_, 1);
v_sz_1149_ = lean_array_size(v_elems_1148_);
v___x_1150_ = ((size_t)0ULL);
v___x_1151_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2_spec__3(v_sz_1149_, v___x_1150_, v_elems_1148_);
return v___x_1151_;
}
else
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1152_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__0));
v___x_1153_ = lean_unsigned_to_nat(80u);
v___x_1154_ = l_Lean_Json_pretty(v_x_1147_, v___x_1153_);
v___x_1155_ = lean_string_append(v___x_1152_, v___x_1154_);
lean_dec_ref(v___x_1154_);
v___x_1156_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__4_spec__6_spec__8___closed__1));
v___x_1157_ = lean_string_append(v___x_1155_, v___x_1156_);
v___x_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
return v___x_1158_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2(lean_object* v_j_1159_, lean_object* v_k_1160_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = l_Lean_Json_getObjValD(v_j_1159_, v_k_1160_);
v___x_1162_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2_spec__2(v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2___boxed(lean_object* v_j_1163_, lean_object* v_k_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2(v_j_1163_, v_k_1164_);
lean_dec_ref(v_k_1164_);
return v_res_1165_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1174_ = 1;
v___x_1175_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__4));
v___x_1176_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1175_, v___x_1174_);
return v___x_1176_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__6));
v___x_1179_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__5, &l_Lean_Server_instFromJsonIlean_fromJson___closed__5_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__5);
v___x_1180_ = lean_string_append(v___x_1179_, v___x_1178_);
return v___x_1180_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1183_ = 1;
v___x_1184_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__8));
v___x_1185_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1184_, v___x_1183_);
return v___x_1185_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1186_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__9, &l_Lean_Server_instFromJsonIlean_fromJson___closed__9_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__9);
v___x_1187_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__7, &l_Lean_Server_instFromJsonIlean_fromJson___closed__7_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__7);
v___x_1188_ = lean_string_append(v___x_1187_, v___x_1186_);
return v___x_1188_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1190_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__11));
v___x_1191_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__10, &l_Lean_Server_instFromJsonIlean_fromJson___closed__10_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__10);
v___x_1192_ = lean_string_append(v___x_1191_, v___x_1190_);
return v___x_1192_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__15(void){
_start:
{
uint8_t v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1196_ = 1;
v___x_1197_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__14));
v___x_1198_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1197_, v___x_1196_);
return v___x_1198_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__16(void){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1199_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__15, &l_Lean_Server_instFromJsonIlean_fromJson___closed__15_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__15);
v___x_1200_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__7, &l_Lean_Server_instFromJsonIlean_fromJson___closed__7_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__7);
v___x_1201_ = lean_string_append(v___x_1200_, v___x_1199_);
return v___x_1201_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__17(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1202_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__11));
v___x_1203_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__16, &l_Lean_Server_instFromJsonIlean_fromJson___closed__16_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__16);
v___x_1204_ = lean_string_append(v___x_1203_, v___x_1202_);
return v___x_1204_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__20(void){
_start:
{
uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = 1;
v___x_1209_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__19));
v___x_1210_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1209_, v___x_1208_);
return v___x_1210_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__21(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1211_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__20, &l_Lean_Server_instFromJsonIlean_fromJson___closed__20_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__20);
v___x_1212_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__7, &l_Lean_Server_instFromJsonIlean_fromJson___closed__7_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__7);
v___x_1213_ = lean_string_append(v___x_1212_, v___x_1211_);
return v___x_1213_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__22(void){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1214_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__11));
v___x_1215_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__21, &l_Lean_Server_instFromJsonIlean_fromJson___closed__21_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__21);
v___x_1216_ = lean_string_append(v___x_1215_, v___x_1214_);
return v___x_1216_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__25(void){
_start:
{
uint8_t v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1220_ = 1;
v___x_1221_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__24));
v___x_1222_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1221_, v___x_1220_);
return v___x_1222_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__26(void){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1223_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__25, &l_Lean_Server_instFromJsonIlean_fromJson___closed__25_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__25);
v___x_1224_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__7, &l_Lean_Server_instFromJsonIlean_fromJson___closed__7_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__7);
v___x_1225_ = lean_string_append(v___x_1224_, v___x_1223_);
return v___x_1225_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__27(void){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1226_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__11));
v___x_1227_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__26, &l_Lean_Server_instFromJsonIlean_fromJson___closed__26_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__26);
v___x_1228_ = lean_string_append(v___x_1227_, v___x_1226_);
return v___x_1228_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__30(void){
_start:
{
uint8_t v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1232_ = 1;
v___x_1233_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__29));
v___x_1234_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1233_, v___x_1232_);
return v___x_1234_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__31(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1235_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__30, &l_Lean_Server_instFromJsonIlean_fromJson___closed__30_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__30);
v___x_1236_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__7, &l_Lean_Server_instFromJsonIlean_fromJson___closed__7_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__7);
v___x_1237_ = lean_string_append(v___x_1236_, v___x_1235_);
return v___x_1237_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__32(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1238_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__11));
v___x_1239_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__31, &l_Lean_Server_instFromJsonIlean_fromJson___closed__31_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__31);
v___x_1240_ = lean_string_append(v___x_1239_, v___x_1238_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instFromJsonIlean_fromJson(lean_object* v_json_1241_){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__0));
lean_inc(v_json_1241_);
v___x_1243_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__0(v_json_1241_, v___x_1242_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1253_; 
lean_dec(v_json_1241_);
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1246_ = v___x_1243_;
v_isShared_1247_ = v_isSharedCheck_1253_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1243_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1253_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1251_; 
v___x_1248_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__12, &l_Lean_Server_instFromJsonIlean_fromJson___closed__12_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__12);
v___x_1249_ = lean_string_append(v___x_1248_, v_a_1244_);
lean_dec(v_a_1244_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 0, v___x_1249_);
v___x_1251_ = v___x_1246_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v___x_1249_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
else
{
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1261_; 
lean_dec(v_json_1241_);
v_a_1254_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1256_ = v___x_1243_;
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v___x_1243_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1259_; 
if (v_isShared_1257_ == 0)
{
lean_ctor_set_tag(v___x_1256_, 0);
v___x_1259_ = v___x_1256_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_a_1254_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v_a_1262_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_1243_, 1);
v___x_1263_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__13));
lean_inc(v_json_1241_);
v___x_1264_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__1(v_json_1241_, v___x_1263_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1274_; 
lean_dec(v_a_1262_);
lean_dec(v_json_1241_);
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1267_ = v___x_1264_;
v_isShared_1268_ = v_isSharedCheck_1274_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1264_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1274_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1272_; 
v___x_1269_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__17, &l_Lean_Server_instFromJsonIlean_fromJson___closed__17_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__17);
v___x_1270_ = lean_string_append(v___x_1269_, v_a_1265_);
lean_dec(v_a_1265_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 0, v___x_1270_);
v___x_1272_ = v___x_1267_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
else
{
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
lean_dec(v_a_1262_);
lean_dec(v_json_1241_);
v_a_1275_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1264_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1264_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
lean_ctor_set_tag(v___x_1277_, 0);
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v_a_1283_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1283_);
lean_dec_ref_known(v___x_1264_, 1);
v___x_1284_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__18));
lean_inc(v_json_1241_);
v___x_1285_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__2(v_json_1241_, v___x_1284_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1295_; 
lean_dec(v_a_1283_);
lean_dec(v_a_1262_);
lean_dec(v_json_1241_);
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1295_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1295_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1290_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__22, &l_Lean_Server_instFromJsonIlean_fromJson___closed__22_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__22);
v___x_1291_ = lean_string_append(v___x_1290_, v_a_1286_);
lean_dec(v_a_1286_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1291_);
v___x_1293_ = v___x_1288_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
else
{
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec(v_a_1283_);
lean_dec(v_a_1262_);
lean_dec(v_json_1241_);
v_a_1296_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1285_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1285_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
lean_ctor_set_tag(v___x_1298_, 0);
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
else
{
lean_object* v_a_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_a_1304_ = lean_ctor_get(v___x_1285_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1285_, 1);
v___x_1305_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__23));
lean_inc(v_json_1241_);
v___x_1306_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3(v_json_1241_, v___x_1305_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1316_; 
lean_dec(v_a_1304_);
lean_dec(v_a_1283_);
lean_dec(v_a_1262_);
lean_dec(v_json_1241_);
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1309_ = v___x_1306_;
v_isShared_1310_ = v_isSharedCheck_1316_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_dec(v___x_1306_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1316_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1314_; 
v___x_1311_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__27, &l_Lean_Server_instFromJsonIlean_fromJson___closed__27_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__27);
v___x_1312_ = lean_string_append(v___x_1311_, v_a_1307_);
lean_dec(v_a_1307_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 0, v___x_1312_);
v___x_1314_ = v___x_1309_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1312_);
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
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
lean_dec(v_a_1304_);
lean_dec(v_a_1283_);
lean_dec(v_a_1262_);
lean_dec(v_json_1241_);
v_a_1317_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1306_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1306_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set_tag(v___x_1319_, 0);
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1317_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v_a_1325_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1325_);
lean_dec_ref_known(v___x_1306_, 1);
v___x_1326_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__28));
v___x_1327_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__4(v_json_1241_, v___x_1326_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1337_; 
lean_dec(v_a_1325_);
lean_dec(v_a_1304_);
lean_dec(v_a_1283_);
lean_dec(v_a_1262_);
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1330_ = v___x_1327_;
v_isShared_1331_ = v_isSharedCheck_1337_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1327_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1337_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1335_; 
v___x_1332_ = lean_obj_once(&l_Lean_Server_instFromJsonIlean_fromJson___closed__32, &l_Lean_Server_instFromJsonIlean_fromJson___closed__32_once, _init_l_Lean_Server_instFromJsonIlean_fromJson___closed__32);
v___x_1333_ = lean_string_append(v___x_1332_, v_a_1328_);
lean_dec(v_a_1328_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v___x_1333_);
v___x_1335_ = v___x_1330_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1333_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
else
{
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1345_; 
lean_dec(v_a_1325_);
lean_dec(v_a_1304_);
lean_dec(v_a_1283_);
lean_dec(v_a_1262_);
v_a_1338_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1340_ = v___x_1327_;
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1327_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
lean_ctor_set_tag(v___x_1340_, 0);
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1338_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1354_; 
v_a_1346_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1348_ = v___x_1327_;
v_isShared_1349_ = v_isSharedCheck_1354_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1327_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1354_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1350_, 0, v_a_1262_);
lean_ctor_set(v___x_1350_, 1, v_a_1283_);
lean_ctor_set(v___x_1350_, 2, v_a_1304_);
lean_ctor_set(v___x_1350_, 3, v_a_1325_);
lean_ctor_set(v___x_1350_, 4, v_a_1346_);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 0, v___x_1350_);
v___x_1352_ = v___x_1348_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__4_spec__6(size_t v_sz_1357_, size_t v_i_1358_, lean_object* v_bs_1359_){
_start:
{
uint8_t v___x_1360_; 
v___x_1360_ = lean_usize_dec_lt(v_i_1358_, v_sz_1357_);
if (v___x_1360_ == 0)
{
return v_bs_1359_;
}
else
{
lean_object* v_v_1361_; lean_object* v_module_1362_; uint8_t v_isPrivate_1363_; uint8_t v_isAll_1364_; uint8_t v_isMeta_1365_; lean_object* v___x_1366_; lean_object* v_bs_x27_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; size_t v___x_1379_; size_t v___x_1380_; lean_object* v___x_1381_; 
v_v_1361_ = lean_array_uget_borrowed(v_bs_1359_, v_i_1358_);
v_module_1362_ = lean_ctor_get(v_v_1361_, 0);
lean_inc_ref(v_module_1362_);
v_isPrivate_1363_ = lean_ctor_get_uint8(v_v_1361_, sizeof(void*)*1);
v_isAll_1364_ = lean_ctor_get_uint8(v_v_1361_, sizeof(void*)*1 + 1);
v_isMeta_1365_ = lean_ctor_get_uint8(v_v_1361_, sizeof(void*)*1 + 2);
v___x_1366_ = lean_unsigned_to_nat(0u);
v_bs_x27_1367_ = lean_array_uset(v_bs_1359_, v_i_1358_, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1368_, 0, v_module_1362_);
v___x_1369_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1369_, 0, v_isPrivate_1363_);
v___x_1370_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1370_, 0, v_isAll_1364_);
v___x_1371_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1371_, 0, v_isMeta_1365_);
v___x_1372_ = lean_unsigned_to_nat(4u);
v___x_1373_ = lean_mk_empty_array_with_capacity(v___x_1372_);
v___x_1374_ = lean_array_push(v___x_1373_, v___x_1368_);
v___x_1375_ = lean_array_push(v___x_1374_, v___x_1369_);
v___x_1376_ = lean_array_push(v___x_1375_, v___x_1370_);
v___x_1377_ = lean_array_push(v___x_1376_, v___x_1371_);
v___x_1378_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
v___x_1379_ = ((size_t)1ULL);
v___x_1380_ = lean_usize_add(v_i_1358_, v___x_1379_);
v___x_1381_ = lean_array_uset(v_bs_x27_1367_, v_i_1358_, v___x_1378_);
v_i_1358_ = v___x_1380_;
v_bs_1359_ = v___x_1381_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__4_spec__6___boxed(lean_object* v_sz_1383_, lean_object* v_i_1384_, lean_object* v_bs_1385_){
_start:
{
size_t v_sz_boxed_1386_; size_t v_i_boxed_1387_; lean_object* v_res_1388_; 
v_sz_boxed_1386_ = lean_unbox_usize(v_sz_1383_);
lean_dec(v_sz_1383_);
v_i_boxed_1387_ = lean_unbox_usize(v_i_1384_);
lean_dec(v_i_1384_);
v_res_1388_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__4_spec__6(v_sz_boxed_1386_, v_i_boxed_1387_, v_bs_1385_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__4(lean_object* v_a_1389_){
_start:
{
size_t v_sz_1390_; size_t v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v_sz_1390_ = lean_array_size(v_a_1389_);
v___x_1391_ = ((size_t)0ULL);
v___x_1392_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__4_spec__6(v_sz_1390_, v___x_1391_, v_a_1389_);
v___x_1393_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__6(lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
if (lean_obj_tag(v_a_1394_) == 0)
{
lean_object* v___x_1396_; 
v___x_1396_ = l_List_reverse___redArg(v_a_1395_);
return v___x_1396_;
}
else
{
lean_object* v_head_1397_; lean_object* v_snd_1398_; lean_object* v_tail_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1451_; 
v_head_1397_ = lean_ctor_get(v_a_1394_, 0);
lean_inc(v_head_1397_);
v_snd_1398_ = lean_ctor_get(v_head_1397_, 1);
lean_inc(v_snd_1398_);
v_tail_1399_ = lean_ctor_get(v_a_1394_, 1);
v_isSharedCheck_1451_ = !lean_is_exclusive(v_a_1394_);
if (v_isSharedCheck_1451_ == 0)
{
lean_object* v_unused_1452_; 
v_unused_1452_ = lean_ctor_get(v_a_1394_, 0);
lean_dec(v_unused_1452_);
v___x_1401_ = v_a_1394_;
v_isShared_1402_ = v_isSharedCheck_1451_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_tail_1399_);
lean_dec(v_a_1394_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1451_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v_fst_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1449_; 
v_fst_1403_ = lean_ctor_get(v_head_1397_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_head_1397_);
if (v_isSharedCheck_1449_ == 0)
{
lean_object* v_unused_1450_; 
v_unused_1450_ = lean_ctor_get(v_head_1397_, 1);
lean_dec(v_unused_1450_);
v___x_1405_ = v_head_1397_;
v_isShared_1406_ = v_isSharedCheck_1449_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_fst_1403_);
lean_dec(v_head_1397_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1449_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v_rangeStartPosLine_1407_; lean_object* v_rangeStartPosCharacter_1408_; lean_object* v_rangeEndPosLine_1409_; lean_object* v_rangeEndPosCharacter_1410_; lean_object* v_selectionRangeStartPosLine_1411_; lean_object* v_selectionRangeStartPosCharacter_1412_; lean_object* v_selectionRangeEndPosLine_1413_; lean_object* v_selectionRangeEndPosCharacter_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
v_rangeStartPosLine_1407_ = lean_ctor_get(v_snd_1398_, 0);
lean_inc(v_rangeStartPosLine_1407_);
v_rangeStartPosCharacter_1408_ = lean_ctor_get(v_snd_1398_, 1);
lean_inc(v_rangeStartPosCharacter_1408_);
v_rangeEndPosLine_1409_ = lean_ctor_get(v_snd_1398_, 2);
lean_inc(v_rangeEndPosLine_1409_);
v_rangeEndPosCharacter_1410_ = lean_ctor_get(v_snd_1398_, 3);
lean_inc(v_rangeEndPosCharacter_1410_);
v_selectionRangeStartPosLine_1411_ = lean_ctor_get(v_snd_1398_, 4);
lean_inc(v_selectionRangeStartPosLine_1411_);
v_selectionRangeStartPosCharacter_1412_ = lean_ctor_get(v_snd_1398_, 5);
lean_inc(v_selectionRangeStartPosCharacter_1412_);
v_selectionRangeEndPosLine_1413_ = lean_ctor_get(v_snd_1398_, 6);
lean_inc(v_selectionRangeEndPosLine_1413_);
v_selectionRangeEndPosCharacter_1414_ = lean_ctor_get(v_snd_1398_, 7);
lean_inc(v_selectionRangeEndPosCharacter_1414_);
lean_dec(v_snd_1398_);
v___x_1415_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosLine_1407_);
v___x_1416_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
v___x_1417_ = l_Lean_JsonNumber_fromNat(v_rangeStartPosCharacter_1408_);
v___x_1418_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1417_);
v___x_1419_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosLine_1409_);
v___x_1420_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
v___x_1421_ = l_Lean_JsonNumber_fromNat(v_rangeEndPosCharacter_1410_);
v___x_1422_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
v___x_1423_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosLine_1411_);
v___x_1424_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
v___x_1425_ = l_Lean_JsonNumber_fromNat(v_selectionRangeStartPosCharacter_1412_);
v___x_1426_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
v___x_1427_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosLine_1413_);
v___x_1428_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
v___x_1429_ = l_Lean_JsonNumber_fromNat(v_selectionRangeEndPosCharacter_1414_);
v___x_1430_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1429_);
v___x_1431_ = lean_unsigned_to_nat(8u);
v___x_1432_ = lean_mk_empty_array_with_capacity(v___x_1431_);
v___x_1433_ = lean_array_push(v___x_1432_, v___x_1416_);
v___x_1434_ = lean_array_push(v___x_1433_, v___x_1418_);
v___x_1435_ = lean_array_push(v___x_1434_, v___x_1420_);
v___x_1436_ = lean_array_push(v___x_1435_, v___x_1422_);
v___x_1437_ = lean_array_push(v___x_1436_, v___x_1424_);
v___x_1438_ = lean_array_push(v___x_1437_, v___x_1426_);
v___x_1439_ = lean_array_push(v___x_1438_, v___x_1428_);
v___x_1440_ = lean_array_push(v___x_1439_, v___x_1430_);
v___x_1441_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 1, v___x_1441_);
v___x_1443_ = v___x_1405_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_fst_1403_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1445_; 
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 1, v_a_1395_);
lean_ctor_set(v___x_1401_, 0, v___x_1443_);
v___x_1445_ = v___x_1401_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v_a_1395_);
v___x_1445_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
v_a_1394_ = v_tail_1399_;
v_a_1395_ = v___x_1445_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__0(lean_object* v_a_1453_, lean_object* v_a_1454_){
_start:
{
if (lean_obj_tag(v_a_1453_) == 0)
{
lean_object* v___x_1455_; 
v___x_1455_ = l_List_reverse___redArg(v_a_1454_);
return v___x_1455_;
}
else
{
lean_object* v_head_1456_; lean_object* v_tail_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1467_; 
v_head_1456_ = lean_ctor_get(v_a_1453_, 0);
v_tail_1457_ = lean_ctor_get(v_a_1453_, 1);
v_isSharedCheck_1467_ = !lean_is_exclusive(v_a_1453_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1459_ = v_a_1453_;
v_isShared_1460_ = v_isSharedCheck_1467_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_tail_1457_);
lean_inc(v_head_1456_);
lean_dec(v_a_1453_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1467_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1464_; 
v___x_1461_ = l_Lean_JsonNumber_fromNat(v_head_1456_);
v___x_1462_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 1, v_a_1454_);
lean_ctor_set(v___x_1459_, 0, v___x_1462_);
v___x_1464_ = v___x_1459_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1466_, 1, v_a_1454_);
v___x_1464_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
v_a_1453_ = v_tail_1457_;
v_a_1454_ = v___x_1464_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1_spec__2_spec__9(size_t v_sz_1468_, size_t v_i_1469_, lean_object* v_bs_1470_){
_start:
{
uint8_t v___x_1471_; 
v___x_1471_ = lean_usize_dec_lt(v_i_1469_, v_sz_1468_);
if (v___x_1471_ == 0)
{
return v_bs_1470_;
}
else
{
lean_object* v_v_1472_; lean_object* v___x_1473_; lean_object* v_bs_x27_1474_; size_t v___x_1475_; size_t v___x_1476_; lean_object* v___x_1477_; 
v_v_1472_ = lean_array_uget(v_bs_1470_, v_i_1469_);
v___x_1473_ = lean_unsigned_to_nat(0u);
v_bs_x27_1474_ = lean_array_uset(v_bs_1470_, v_i_1469_, v___x_1473_);
v___x_1475_ = ((size_t)1ULL);
v___x_1476_ = lean_usize_add(v_i_1469_, v___x_1475_);
v___x_1477_ = lean_array_uset(v_bs_x27_1474_, v_i_1469_, v_v_1472_);
v_i_1469_ = v___x_1476_;
v_bs_1470_ = v___x_1477_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1_spec__2_spec__9___boxed(lean_object* v_sz_1479_, lean_object* v_i_1480_, lean_object* v_bs_1481_){
_start:
{
size_t v_sz_boxed_1482_; size_t v_i_boxed_1483_; lean_object* v_res_1484_; 
v_sz_boxed_1482_ = lean_unbox_usize(v_sz_1479_);
lean_dec(v_sz_1479_);
v_i_boxed_1483_ = lean_unbox_usize(v_i_1480_);
lean_dec(v_i_1480_);
v_res_1484_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1_spec__2_spec__9(v_sz_boxed_1482_, v_i_boxed_1483_, v_bs_1481_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1_spec__2(lean_object* v_a_1485_){
_start:
{
size_t v_sz_1486_; size_t v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v_sz_1486_ = lean_array_size(v_a_1485_);
v___x_1487_ = ((size_t)0ULL);
v___x_1488_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1_spec__2_spec__9(v_sz_1486_, v___x_1487_, v_a_1485_);
v___x_1489_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1(lean_object* v_a_1490_){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1491_ = lean_array_mk(v_a_1490_);
v___x_1492_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1_spec__2(v___x_1491_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1(lean_object* v_x_1493_){
_start:
{
if (lean_obj_tag(v_x_1493_) == 0)
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_box(0);
return v___x_1494_;
}
else
{
lean_object* v_val_1495_; lean_object* v___x_1496_; 
v_val_1495_ = lean_ctor_get(v_x_1493_, 0);
lean_inc(v_val_1495_);
lean_dec_ref_known(v_x_1493_, 1);
v___x_1496_ = l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1(v_val_1495_);
return v___x_1496_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_instToJsonIlean_toJson_spec__2(size_t v_sz_1497_, size_t v_i_1498_, lean_object* v_bs_1499_){
_start:
{
uint8_t v___x_1500_; 
v___x_1500_ = lean_usize_dec_lt(v_i_1498_, v_sz_1497_);
if (v___x_1500_ == 0)
{
return v_bs_1499_;
}
else
{
lean_object* v_v_1501_; lean_object* v_startPosLine_1502_; lean_object* v_startPosCharacter_1503_; lean_object* v_endPosLine_1504_; lean_object* v_endPosCharacter_1505_; lean_object* v___x_1506_; lean_object* v_bs_x27_1507_; lean_object* v___y_1509_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v_range_1519_; lean_object* v___x_1520_; 
v_v_1501_ = lean_array_uget(v_bs_1499_, v_i_1498_);
v_startPosLine_1502_ = lean_ctor_get(v_v_1501_, 0);
v_startPosCharacter_1503_ = lean_ctor_get(v_v_1501_, 1);
v_endPosLine_1504_ = lean_ctor_get(v_v_1501_, 2);
v_endPosCharacter_1505_ = lean_ctor_get(v_v_1501_, 3);
v___x_1506_ = lean_unsigned_to_nat(0u);
v_bs_x27_1507_ = lean_array_uset(v_bs_1499_, v_i_1498_, v___x_1506_);
v___x_1514_ = lean_box(0);
lean_inc(v_endPosCharacter_1505_);
v___x_1515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1515_, 0, v_endPosCharacter_1505_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
lean_inc(v_endPosLine_1504_);
v___x_1516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1516_, 0, v_endPosLine_1504_);
lean_ctor_set(v___x_1516_, 1, v___x_1515_);
lean_inc(v_startPosCharacter_1503_);
v___x_1517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1517_, 0, v_startPosCharacter_1503_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
lean_inc(v_startPosLine_1502_);
v___x_1518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1518_, 0, v_startPosLine_1502_);
lean_ctor_set(v___x_1518_, 1, v___x_1517_);
v_range_1519_ = l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__0(v___x_1518_, v___x_1514_);
v___x_1520_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_v_1501_);
lean_dec(v_v_1501_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v___x_1521_; 
v___x_1521_ = l_List_appendTR___redArg(v_range_1519_, v___x_1514_);
v___y_1509_ = v___x_1521_;
goto v___jp_1508_;
}
else
{
lean_object* v_val_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1531_; 
v_val_1522_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1524_ = v___x_1520_;
v_isShared_1525_ = v_isSharedCheck_1531_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_val_1522_);
lean_dec(v___x_1520_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1531_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
lean_ctor_set_tag(v___x_1524_, 3);
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_val_1522_);
v___x_1527_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
lean_ctor_set(v___x_1528_, 1, v___x_1514_);
v___x_1529_ = l_List_appendTR___redArg(v_range_1519_, v___x_1528_);
v___y_1509_ = v___x_1529_;
goto v___jp_1508_;
}
}
}
v___jp_1508_:
{
size_t v___x_1510_; size_t v___x_1511_; lean_object* v___x_1512_; 
v___x_1510_ = ((size_t)1ULL);
v___x_1511_ = lean_usize_add(v_i_1498_, v___x_1510_);
v___x_1512_ = lean_array_uset(v_bs_x27_1507_, v_i_1498_, v___y_1509_);
v_i_1498_ = v___x_1511_;
v_bs_1499_ = v___x_1512_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_instToJsonIlean_toJson_spec__2___boxed(lean_object* v_sz_1532_, lean_object* v_i_1533_, lean_object* v_bs_1534_){
_start:
{
size_t v_sz_boxed_1535_; size_t v_i_boxed_1536_; lean_object* v_res_1537_; 
v_sz_boxed_1535_ = lean_unbox_usize(v_sz_1532_);
lean_dec(v_sz_1532_);
v_i_boxed_1536_ = lean_unbox_usize(v_i_1533_);
lean_dec(v_i_1533_);
v_res_1537_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_instToJsonIlean_toJson_spec__2(v_sz_boxed_1535_, v_i_boxed_1536_, v_bs_1534_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__3_spec__4(size_t v_sz_1538_, size_t v_i_1539_, lean_object* v_bs_1540_){
_start:
{
uint8_t v___x_1541_; 
v___x_1541_ = lean_usize_dec_lt(v_i_1539_, v_sz_1538_);
if (v___x_1541_ == 0)
{
return v_bs_1540_;
}
else
{
lean_object* v_v_1542_; lean_object* v___x_1543_; lean_object* v_bs_x27_1544_; lean_object* v___x_1545_; size_t v___x_1546_; size_t v___x_1547_; lean_object* v___x_1548_; 
v_v_1542_ = lean_array_uget(v_bs_1540_, v_i_1539_);
v___x_1543_ = lean_unsigned_to_nat(0u);
v_bs_x27_1544_ = lean_array_uset(v_bs_1540_, v_i_1539_, v___x_1543_);
v___x_1545_ = l_Lean_List_toJson___at___00Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1_spec__1(v_v_1542_);
v___x_1546_ = ((size_t)1ULL);
v___x_1547_ = lean_usize_add(v_i_1539_, v___x_1546_);
v___x_1548_ = lean_array_uset(v_bs_x27_1544_, v_i_1539_, v___x_1545_);
v_i_1539_ = v___x_1547_;
v_bs_1540_ = v___x_1548_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__3_spec__4___boxed(lean_object* v_sz_1550_, lean_object* v_i_1551_, lean_object* v_bs_1552_){
_start:
{
size_t v_sz_boxed_1553_; size_t v_i_boxed_1554_; lean_object* v_res_1555_; 
v_sz_boxed_1553_ = lean_unbox_usize(v_sz_1550_);
lean_dec(v_sz_1550_);
v_i_boxed_1554_ = lean_unbox_usize(v_i_1551_);
lean_dec(v_i_1551_);
v_res_1555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__3_spec__4(v_sz_boxed_1553_, v_i_boxed_1554_, v_bs_1552_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__3(lean_object* v_a_1556_){
_start:
{
size_t v_sz_1557_; size_t v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v_sz_1557_ = lean_array_size(v_a_1556_);
v___x_1558_ = ((size_t)0ULL);
v___x_1559_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__3_spec__4(v_sz_1557_, v___x_1558_, v_a_1556_);
v___x_1560_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__5(lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
if (lean_obj_tag(v_a_1561_) == 0)
{
lean_object* v___x_1563_; 
v___x_1563_ = l_List_reverse___redArg(v_a_1562_);
return v___x_1563_;
}
else
{
lean_object* v_head_1564_; lean_object* v_snd_1565_; lean_object* v_tail_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1635_; 
v_head_1564_ = lean_ctor_get(v_a_1561_, 0);
lean_inc(v_head_1564_);
v_snd_1565_ = lean_ctor_get(v_head_1564_, 1);
lean_inc(v_snd_1565_);
v_tail_1566_ = lean_ctor_get(v_a_1561_, 1);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_a_1561_);
if (v_isSharedCheck_1635_ == 0)
{
lean_object* v_unused_1636_; 
v_unused_1636_ = lean_ctor_get(v_a_1561_, 0);
lean_dec(v_unused_1636_);
v___x_1568_ = v_a_1561_;
v_isShared_1569_ = v_isSharedCheck_1635_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_tail_1566_);
lean_dec(v_a_1561_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1635_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v_fst_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1633_; 
v_fst_1570_ = lean_ctor_get(v_head_1564_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v_head_1564_);
if (v_isSharedCheck_1633_ == 0)
{
lean_object* v_unused_1634_; 
v_unused_1634_ = lean_ctor_get(v_head_1564_, 1);
lean_dec(v_unused_1634_);
v___x_1572_ = v_head_1564_;
v_isShared_1573_ = v_isSharedCheck_1633_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_fst_1570_);
lean_dec(v_head_1564_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1633_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v_definition_x3f_1574_; lean_object* v_usages_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1632_; 
v_definition_x3f_1574_ = lean_ctor_get(v_snd_1565_, 0);
v_usages_1575_ = lean_ctor_get(v_snd_1565_, 1);
v_isSharedCheck_1632_ = !lean_is_exclusive(v_snd_1565_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1577_ = v_snd_1565_;
v_isShared_1578_ = v_isSharedCheck_1632_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_usages_1575_);
lean_inc(v_definition_x3f_1574_);
lean_dec(v_snd_1565_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1632_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___y_1583_; lean_object* v___y_1606_; 
v___x_1579_ = l_Lean_Lsp_RefIdent_toJson(v_fst_1570_);
v___x_1580_ = l_Lean_Json_compress(v___x_1579_);
v___x_1581_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__1));
if (lean_obj_tag(v_definition_x3f_1574_) == 0)
{
lean_object* v___x_1608_; 
v___x_1608_ = lean_box(0);
v___y_1583_ = v___x_1608_;
goto v___jp_1582_;
}
else
{
lean_object* v_val_1609_; lean_object* v_startPosLine_1610_; lean_object* v_startPosCharacter_1611_; lean_object* v_endPosLine_1612_; lean_object* v_endPosCharacter_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v_range_1619_; lean_object* v___x_1620_; 
v_val_1609_ = lean_ctor_get(v_definition_x3f_1574_, 0);
lean_inc(v_val_1609_);
lean_dec_ref_known(v_definition_x3f_1574_, 1);
v_startPosLine_1610_ = lean_ctor_get(v_val_1609_, 0);
v_startPosCharacter_1611_ = lean_ctor_get(v_val_1609_, 1);
v_endPosLine_1612_ = lean_ctor_get(v_val_1609_, 2);
v_endPosCharacter_1613_ = lean_ctor_get(v_val_1609_, 3);
v___x_1614_ = lean_box(0);
lean_inc(v_endPosCharacter_1613_);
v___x_1615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1615_, 0, v_endPosCharacter_1613_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
lean_inc(v_endPosLine_1612_);
v___x_1616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1616_, 0, v_endPosLine_1612_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
lean_inc(v_startPosCharacter_1611_);
v___x_1617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1617_, 0, v_startPosCharacter_1611_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
lean_inc(v_startPosLine_1610_);
v___x_1618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1618_, 0, v_startPosLine_1610_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v_range_1619_ = l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__0(v___x_1618_, v___x_1614_);
v___x_1620_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_val_1609_);
lean_dec(v_val_1609_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v___x_1621_; 
v___x_1621_ = l_List_appendTR___redArg(v_range_1619_, v___x_1614_);
v___y_1606_ = v___x_1621_;
goto v___jp_1605_;
}
else
{
lean_object* v_val_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1631_; 
v_val_1622_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1624_ = v___x_1620_;
v_isShared_1625_ = v_isSharedCheck_1631_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_val_1622_);
lean_dec(v___x_1620_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1631_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
lean_ctor_set_tag(v___x_1624_, 3);
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_val_1622_);
v___x_1627_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
lean_ctor_set(v___x_1628_, 1, v___x_1614_);
v___x_1629_ = l_List_appendTR___redArg(v_range_1619_, v___x_1628_);
v___y_1606_ = v___x_1629_;
goto v___jp_1605_;
}
}
}
}
v___jp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___x_1584_ = l_Lean_Option_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__1(v___y_1583_);
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 1, v___x_1584_);
lean_ctor_set(v___x_1572_, 0, v___x_1581_);
v___x_1586_ = v___x_1572_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1604_, 1, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1587_; size_t v_sz_1588_; size_t v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1593_; 
v___x_1587_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonIlean_fromJson_spec__3_spec__7___closed__0));
v_sz_1588_ = lean_array_size(v_usages_1575_);
v___x_1589_ = ((size_t)0ULL);
v___x_1590_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_instToJsonIlean_toJson_spec__2(v_sz_1588_, v___x_1589_, v_usages_1575_);
v___x_1591_ = l_Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__3(v___x_1590_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 1, v___x_1591_);
lean_ctor_set(v___x_1577_, 0, v___x_1587_);
v___x_1593_ = v___x_1577_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1596_; 
v___x_1594_ = lean_box(0);
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 1, v___x_1594_);
lean_ctor_set(v___x_1568_, 0, v___x_1593_);
v___x_1596_ = v___x_1568_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1593_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v___x_1594_);
v___x_1596_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1586_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = l_Lean_Json_mkObj(v___x_1597_);
lean_dec_ref_known(v___x_1597_, 2);
v___x_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1580_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1599_);
lean_ctor_set(v___x_1600_, 1, v_a_1562_);
v_a_1561_ = v_tail_1566_;
v_a_1562_ = v___x_1600_;
goto _start;
}
}
}
}
v___jp_1605_:
{
lean_object* v___x_1607_; 
v___x_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1607_, 0, v___y_1606_);
v___y_1583_ = v___x_1607_;
goto v___jp_1582_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_instToJsonIlean_toJson_spec__7(lean_object* v_a_1637_, lean_object* v_a_1638_){
_start:
{
if (lean_obj_tag(v_a_1637_) == 0)
{
lean_object* v___x_1639_; 
v___x_1639_ = lean_array_to_list(v_a_1638_);
return v___x_1639_;
}
else
{
lean_object* v_head_1640_; lean_object* v_tail_1641_; lean_object* v___x_1642_; 
v_head_1640_ = lean_ctor_get(v_a_1637_, 0);
lean_inc(v_head_1640_);
v_tail_1641_ = lean_ctor_get(v_a_1637_, 1);
lean_inc(v_tail_1641_);
lean_dec_ref_known(v_a_1637_, 2);
v___x_1642_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1638_, v_head_1640_);
v_a_1637_ = v_tail_1641_;
v_a_1638_ = v___x_1642_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonIlean_toJson(lean_object* v_x_1646_){
_start:
{
lean_object* v_version_1647_; lean_object* v_module_1648_; lean_object* v_directImports_1649_; lean_object* v_references_1650_; lean_object* v_decls_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; uint8_t v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v_version_1647_ = lean_ctor_get(v_x_1646_, 0);
lean_inc(v_version_1647_);
v_module_1648_ = lean_ctor_get(v_x_1646_, 1);
lean_inc(v_module_1648_);
v_directImports_1649_ = lean_ctor_get(v_x_1646_, 2);
lean_inc_ref(v_directImports_1649_);
v_references_1650_ = lean_ctor_get(v_x_1646_, 3);
lean_inc(v_references_1650_);
v_decls_1651_ = lean_ctor_get(v_x_1646_, 4);
lean_inc(v_decls_1651_);
lean_dec_ref(v_x_1646_);
v___x_1652_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__0));
v___x_1653_ = l_Lean_JsonNumber_fromNat(v_version_1647_);
v___x_1654_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
v___x_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1652_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = lean_box(0);
v___x_1657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1655_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
v___x_1658_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__13));
v___x_1659_ = 1;
v___x_1660_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_1648_, v___x_1659_);
v___x_1661_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
v___x_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1658_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1662_);
lean_ctor_set(v___x_1663_, 1, v___x_1656_);
v___x_1664_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__18));
v___x_1665_ = l_Lean_Array_toJson___at___00Lean_Server_instToJsonIlean_toJson_spec__4(v_directImports_1649_);
v___x_1666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1666_);
lean_ctor_set(v___x_1667_, 1, v___x_1656_);
v___x_1668_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__23));
v___x_1669_ = l_Lean_Lsp_ModuleRefs_toList(v_references_1650_);
lean_dec(v_references_1650_);
v___x_1670_ = l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__5(v___x_1669_, v___x_1656_);
v___x_1671_ = l_Lean_Json_mkObj(v___x_1670_);
lean_dec(v___x_1670_);
v___x_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1668_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
lean_ctor_set(v___x_1673_, 1, v___x_1656_);
v___x_1674_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__28));
v___x_1675_ = l_Lean_Lsp_Decls_toList(v_decls_1651_);
lean_dec(v_decls_1651_);
v___x_1676_ = l_List_mapTR_loop___at___00Lean_Server_instToJsonIlean_toJson_spec__6(v___x_1675_, v___x_1656_);
v___x_1677_ = l_Lean_Json_mkObj(v___x_1676_);
lean_dec(v___x_1676_);
v___x_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1674_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
lean_ctor_set(v___x_1679_, 1, v___x_1656_);
v___x_1680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1679_);
lean_ctor_set(v___x_1680_, 1, v___x_1656_);
v___x_1681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1673_);
lean_ctor_set(v___x_1681_, 1, v___x_1680_);
v___x_1682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1667_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
v___x_1683_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1663_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1657_);
lean_ctor_set(v___x_1684_, 1, v___x_1683_);
v___x_1685_ = ((lean_object*)(l_Lean_Server_instToJsonIlean_toJson___closed__0));
v___x_1686_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_instToJsonIlean_toJson_spec__7(v___x_1684_, v___x_1685_);
v___x_1687_ = l_Lean_Json_mkObj(v___x_1686_);
lean_dec(v___x_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_load(lean_object* v_path_1691_){
_start:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_IO_FS_readFile(v_path_1691_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1715_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1696_ = v___x_1693_;
v_isShared_1697_ = v_isSharedCheck_1715_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1693_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1715_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v_a_1699_; lean_object* v___x_1706_; 
v___x_1706_ = l_Lean_Json_parse(v_a_1694_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; 
lean_del_object(v___x_1696_);
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
lean_inc(v_a_1707_);
lean_dec_ref_known(v___x_1706_, 1);
v_a_1699_ = v_a_1707_;
goto v___jp_1698_;
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1709_; 
v_a_1708_ = lean_ctor_get(v___x_1706_, 0);
lean_inc(v_a_1708_);
lean_dec_ref_known(v___x_1706_, 1);
v___x_1709_ = l_Lean_Server_instFromJsonIlean_fromJson(v_a_1708_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; 
lean_del_object(v___x_1696_);
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1710_);
lean_dec_ref_known(v___x_1709_, 1);
v_a_1699_ = v_a_1710_;
goto v___jp_1698_;
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1713_; 
v_a_1711_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1711_);
lean_dec_ref_known(v___x_1709_, 1);
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 0, v_a_1711_);
v___x_1713_ = v___x_1696_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1711_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
v___jp_1698_:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1700_ = ((lean_object*)(l_Lean_Server_Ilean_load___closed__0));
v___x_1701_ = lean_string_append(v___x_1700_, v_path_1691_);
v___x_1702_ = ((lean_object*)(l_Lean_Server_instFromJsonIlean_fromJson___closed__11));
v___x_1703_ = lean_string_append(v___x_1701_, v___x_1702_);
v___x_1704_ = lean_string_append(v___x_1703_, v_a_1699_);
lean_dec_ref(v_a_1699_);
v___x_1705_ = l_Lean_IO_throwServerError___redArg(v___x_1704_);
return v___x_1705_;
}
}
}
else
{
lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1723_; 
v_a_1716_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1718_ = v___x_1693_;
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1693_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1721_; 
if (v_isShared_1719_ == 0)
{
v___x_1721_ = v___x_1718_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_a_1716_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_load___boxed(lean_object* v_path_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_Server_Ilean_load(v_path_1724_);
lean_dec_ref(v_path_1724_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_getModuleContainingDecl_x3f(lean_object* v_env_1727_, lean_object* v_declName_1728_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1727_, v_declName_1728_);
if (lean_obj_tag(v___x_1729_) == 1)
{
lean_object* v_val_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1742_; 
v_val_1730_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1732_ = v___x_1729_;
v_isShared_1733_ = v_isSharedCheck_1742_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_val_1730_);
lean_dec(v___x_1729_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1742_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v___x_1734_ = l_Lean_Environment_allImportedModuleNames(v_env_1727_);
v___x_1735_ = lean_array_get_size(v___x_1734_);
v___x_1736_ = lean_nat_dec_lt(v_val_1730_, v___x_1735_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; 
lean_dec_ref(v___x_1734_);
lean_del_object(v___x_1732_);
lean_dec(v_val_1730_);
v___x_1737_ = lean_box(0);
return v___x_1737_;
}
else
{
lean_object* v___x_1738_; lean_object* v___x_1740_; 
v___x_1738_ = lean_array_fget(v___x_1734_, v_val_1730_);
lean_dec(v_val_1730_);
lean_dec_ref(v___x_1734_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 0, v___x_1738_);
v___x_1740_ = v___x_1732_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1738_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
}
else
{
lean_object* v___x_1743_; lean_object* v_mainModule_1744_; lean_object* v___x_1745_; 
lean_dec(v___x_1729_);
v___x_1743_ = l_Lean_Environment_header(v_env_1727_);
v_mainModule_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_mainModule_1744_);
lean_dec_ref(v___x_1743_);
v___x_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1745_, 0, v_mainModule_1744_);
return v___x_1745_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_getModuleContainingDecl_x3f___boxed(lean_object* v_env_1746_, lean_object* v_declName_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l_Lean_Server_getModuleContainingDecl_x3f(v_env_1746_, v_declName_1747_);
lean_dec(v_declName_1747_);
lean_dec_ref(v_env_1746_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_identOf(lean_object* v_ci_1749_, lean_object* v_i_1750_){
_start:
{
switch(lean_obj_tag(v_i_1750_))
{
case 1:
{
lean_object* v_i_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1792_; 
v_i_1751_ = lean_ctor_get(v_i_1750_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v_i_1750_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1753_ = v_i_1750_;
v_isShared_1754_ = v_isSharedCheck_1792_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_i_1751_);
lean_dec(v_i_1750_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1792_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v_expr_1755_; 
v_expr_1755_ = lean_ctor_get(v_i_1751_, 3);
lean_inc_ref(v_expr_1755_);
switch(lean_obj_tag(v_expr_1755_))
{
case 4:
{
lean_object* v_toCommandContextInfo_1756_; uint8_t v_isBinder_1757_; lean_object* v_declName_1758_; lean_object* v_env_1759_; lean_object* v___x_1760_; 
lean_del_object(v___x_1753_);
v_toCommandContextInfo_1756_ = lean_ctor_get(v_ci_1749_, 0);
v_isBinder_1757_ = lean_ctor_get_uint8(v_i_1751_, sizeof(void*)*4);
lean_dec_ref(v_i_1751_);
v_declName_1758_ = lean_ctor_get(v_expr_1755_, 0);
lean_inc(v_declName_1758_);
lean_dec_ref_known(v_expr_1755_, 2);
v_env_1759_ = lean_ctor_get(v_toCommandContextInfo_1756_, 0);
v___x_1760_ = l_Lean_Server_getModuleContainingDecl_x3f(v_env_1759_, v_declName_1758_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v___x_1761_; 
lean_dec(v_declName_1758_);
v___x_1761_ = lean_box(0);
return v___x_1761_;
}
else
{
lean_object* v_val_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1775_; 
v_val_1762_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1764_ = v___x_1760_;
v_isShared_1765_ = v_isSharedCheck_1775_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_val_1762_);
lean_dec(v___x_1760_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1775_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
uint8_t v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1773_; 
v___x_1766_ = 1;
v___x_1767_ = l_Lean_Name_toString(v_val_1762_, v___x_1766_);
v___x_1768_ = l_Lean_Name_toString(v_declName_1758_, v___x_1766_);
v___x_1769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1767_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v___x_1770_ = lean_box(v_isBinder_1757_);
v___x_1771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v___x_1771_);
v___x_1773_ = v___x_1764_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v___x_1771_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
case 1:
{
lean_object* v_toCommandContextInfo_1776_; uint8_t v_isBinder_1777_; lean_object* v_fvarId_1778_; lean_object* v_env_1779_; lean_object* v___x_1780_; lean_object* v_mainModule_1781_; uint8_t v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1789_; 
v_toCommandContextInfo_1776_ = lean_ctor_get(v_ci_1749_, 0);
v_isBinder_1777_ = lean_ctor_get_uint8(v_i_1751_, sizeof(void*)*4);
lean_dec_ref(v_i_1751_);
v_fvarId_1778_ = lean_ctor_get(v_expr_1755_, 0);
lean_inc(v_fvarId_1778_);
lean_dec_ref_known(v_expr_1755_, 1);
v_env_1779_ = lean_ctor_get(v_toCommandContextInfo_1776_, 0);
v___x_1780_ = l_Lean_Environment_header(v_env_1779_);
v_mainModule_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_mainModule_1781_);
lean_dec_ref(v___x_1780_);
v___x_1782_ = 1;
v___x_1783_ = l_Lean_Name_toString(v_mainModule_1781_, v___x_1782_);
v___x_1784_ = l_Lean_Name_toString(v_fvarId_1778_, v___x_1782_);
v___x_1785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1783_);
lean_ctor_set(v___x_1785_, 1, v___x_1784_);
v___x_1786_ = lean_box(v_isBinder_1777_);
v___x_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1785_);
lean_ctor_set(v___x_1787_, 1, v___x_1786_);
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v___x_1787_);
v___x_1789_ = v___x_1753_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v___x_1787_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
return v___x_1789_;
}
}
default: 
{
lean_object* v___x_1791_; 
lean_dec_ref(v_expr_1755_);
lean_del_object(v___x_1753_);
lean_dec_ref(v_i_1751_);
v___x_1791_ = lean_box(0);
return v___x_1791_;
}
}
}
}
case 7:
{
lean_object* v_toCommandContextInfo_1793_; lean_object* v_i_1794_; lean_object* v_env_1795_; lean_object* v_projName_1796_; lean_object* v___x_1797_; 
v_toCommandContextInfo_1793_ = lean_ctor_get(v_ci_1749_, 0);
v_i_1794_ = lean_ctor_get(v_i_1750_, 0);
lean_inc_ref(v_i_1794_);
lean_dec_ref_known(v_i_1750_, 1);
v_env_1795_ = lean_ctor_get(v_toCommandContextInfo_1793_, 0);
v_projName_1796_ = lean_ctor_get(v_i_1794_, 0);
lean_inc(v_projName_1796_);
lean_dec_ref(v_i_1794_);
v___x_1797_ = l_Lean_Server_getModuleContainingDecl_x3f(v_env_1795_, v_projName_1796_);
if (lean_obj_tag(v___x_1797_) == 0)
{
lean_object* v___x_1798_; 
lean_dec(v_projName_1796_);
v___x_1798_ = lean_box(0);
return v___x_1798_;
}
else
{
lean_object* v_val_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1813_; 
v_val_1799_ = lean_ctor_get(v___x_1797_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1797_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1801_ = v___x_1797_;
v_isShared_1802_ = v_isSharedCheck_1813_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_val_1799_);
lean_dec(v___x_1797_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1813_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
uint8_t v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; uint8_t v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1811_; 
v___x_1803_ = 1;
v___x_1804_ = l_Lean_Name_toString(v_val_1799_, v___x_1803_);
v___x_1805_ = l_Lean_Name_toString(v_projName_1796_, v___x_1803_);
v___x_1806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1804_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
v___x_1807_ = 0;
v___x_1808_ = lean_box(v___x_1807_);
v___x_1809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1806_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 0, v___x_1809_);
v___x_1811_ = v___x_1801_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1809_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
case 5:
{
lean_object* v_toCommandContextInfo_1814_; lean_object* v_i_1815_; lean_object* v_env_1816_; lean_object* v_declName_1817_; lean_object* v___x_1818_; 
v_toCommandContextInfo_1814_ = lean_ctor_get(v_ci_1749_, 0);
v_i_1815_ = lean_ctor_get(v_i_1750_, 0);
lean_inc_ref(v_i_1815_);
lean_dec_ref_known(v_i_1750_, 1);
v_env_1816_ = lean_ctor_get(v_toCommandContextInfo_1814_, 0);
v_declName_1817_ = lean_ctor_get(v_i_1815_, 2);
lean_inc(v_declName_1817_);
lean_dec_ref(v_i_1815_);
v___x_1818_ = l_Lean_Server_getModuleContainingDecl_x3f(v_env_1816_, v_declName_1817_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v___x_1819_; 
lean_dec(v_declName_1817_);
v___x_1819_ = lean_box(0);
return v___x_1819_;
}
else
{
lean_object* v_val_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1834_; 
v_val_1820_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1822_ = v___x_1818_;
v_isShared_1823_ = v_isSharedCheck_1834_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_val_1820_);
lean_dec(v___x_1818_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1834_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
uint8_t v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; uint8_t v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1832_; 
v___x_1824_ = 1;
v___x_1825_ = l_Lean_Name_toString(v_val_1820_, v___x_1824_);
v___x_1826_ = l_Lean_Name_toString(v_declName_1817_, v___x_1824_);
v___x_1827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1825_);
lean_ctor_set(v___x_1827_, 1, v___x_1826_);
v___x_1828_ = 0;
v___x_1829_ = lean_box(v___x_1828_);
v___x_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1827_);
lean_ctor_set(v___x_1830_, 1, v___x_1829_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 0, v___x_1830_);
v___x_1832_ = v___x_1822_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___x_1830_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
case 16:
{
lean_object* v_toCommandContextInfo_1835_; lean_object* v_i_1836_; lean_object* v_env_1837_; lean_object* v_name_1838_; lean_object* v___x_1839_; 
v_toCommandContextInfo_1835_ = lean_ctor_get(v_ci_1749_, 0);
v_i_1836_ = lean_ctor_get(v_i_1750_, 0);
lean_inc_ref(v_i_1836_);
lean_dec_ref_known(v_i_1750_, 1);
v_env_1837_ = lean_ctor_get(v_toCommandContextInfo_1835_, 0);
v_name_1838_ = lean_ctor_get(v_i_1836_, 1);
lean_inc(v_name_1838_);
lean_dec_ref(v_i_1836_);
v___x_1839_ = l_Lean_Server_getModuleContainingDecl_x3f(v_env_1837_, v_name_1838_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v___x_1840_; 
lean_dec(v_name_1838_);
v___x_1840_ = lean_box(0);
return v___x_1840_;
}
else
{
lean_object* v_val_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1855_; 
v_val_1841_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1843_ = v___x_1839_;
v_isShared_1844_ = v_isSharedCheck_1855_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_val_1841_);
lean_dec(v___x_1839_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1855_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
uint8_t v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; uint8_t v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1853_; 
v___x_1845_ = 1;
v___x_1846_ = l_Lean_Name_toString(v_val_1841_, v___x_1845_);
v___x_1847_ = l_Lean_Name_toString(v_name_1838_, v___x_1845_);
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1846_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
v___x_1849_ = 0;
v___x_1850_ = lean_box(v___x_1849_);
v___x_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1848_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 0, v___x_1851_);
v___x_1853_ = v___x_1843_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1851_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
default: 
{
lean_object* v___x_1856_; 
lean_dec_ref(v_i_1750_);
v___x_1856_ = lean_box(0);
return v___x_1856_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_identOf___boxed(lean_object* v_ci_1857_, lean_object* v_i_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lean_Server_identOf(v_ci_1857_, v_i_1858_);
lean_dec_ref(v_ci_1857_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__0(uint8_t v___x_1860_, lean_object* v_x_1861_, lean_object* v_x_1862_, lean_object* v_x_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = lean_box(v___x_1860_);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1865_);
lean_ctor_set(v___x_1866_, 1, v___y_1864_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__0___boxed(lean_object* v___x_1867_, lean_object* v_x_1868_, lean_object* v_x_1869_, lean_object* v_x_1870_, lean_object* v___y_1871_){
_start:
{
uint8_t v___x_3525__boxed_1872_; lean_object* v_res_1873_; 
v___x_3525__boxed_1872_ = lean_unbox(v___x_1867_);
v_res_1873_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__0(v___x_3525__boxed_1872_, v_x_1868_, v_x_1869_, v_x_1870_, v___y_1871_);
lean_dec_ref(v_x_1870_);
lean_dec_ref(v_x_1869_);
lean_dec_ref(v_x_1868_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__1(lean_object* v_text_1874_, lean_object* v_ci_1875_, lean_object* v_info_1876_, lean_object* v_x_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v___x_1879_; 
lean_inc_ref(v_info_1876_);
v___x_1879_ = l_Lean_Server_identOf(v_ci_1875_, v_info_1876_);
if (lean_obj_tag(v___x_1879_) == 1)
{
lean_object* v_val_1880_; lean_object* v_fst_1881_; lean_object* v_snd_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1907_; 
v_val_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_val_1880_);
lean_dec_ref_known(v___x_1879_, 1);
v_fst_1881_ = lean_ctor_get(v_val_1880_, 0);
v_snd_1882_ = lean_ctor_get(v_val_1880_, 1);
v_isSharedCheck_1907_ = !lean_is_exclusive(v_val_1880_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1884_ = v_val_1880_;
v_isShared_1885_ = v_isSharedCheck_1907_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_snd_1882_);
lean_inc(v_fst_1881_);
lean_dec(v_val_1880_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1907_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Lean_Elab_Info_range_x3f(v_info_1876_);
if (lean_obj_tag(v___x_1886_) == 1)
{
lean_object* v_val_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v_val_1887_ = lean_ctor_get(v___x_1886_, 0);
lean_inc(v_val_1887_);
lean_dec_ref_known(v___x_1886_, 1);
v___x_1888_ = l_Lean_Elab_Info_stx(v_info_1876_);
v___x_1889_ = l_Lean_Syntax_getHeadInfo(v___x_1888_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; uint8_t v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1897_; 
lean_dec_ref_known(v___x_1889_, 4);
v___x_1890_ = lean_box(0);
v___x_1891_ = ((lean_object*)(l_Lean_Lsp_ModuleRefs_findAt___closed__0));
v___x_1892_ = l_Lean_Syntax_Range_toLspRange(v_text_1874_, v_val_1887_);
v___x_1893_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_1893_, 0, v_fst_1881_);
lean_ctor_set(v___x_1893_, 1, v___x_1891_);
lean_ctor_set(v___x_1893_, 2, v___x_1892_);
lean_ctor_set(v___x_1893_, 3, v___x_1888_);
lean_ctor_set(v___x_1893_, 4, v_ci_1875_);
lean_ctor_set(v___x_1893_, 5, v_info_1876_);
v___x_1894_ = lean_unbox(v_snd_1882_);
lean_dec(v_snd_1882_);
lean_ctor_set_uint8(v___x_1893_, sizeof(void*)*6, v___x_1894_);
v___x_1895_ = lean_array_push(v___y_1878_, v___x_1893_);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 1, v___x_1895_);
lean_ctor_set(v___x_1884_, 0, v___x_1890_);
v___x_1897_ = v___x_1884_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1890_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v___x_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
else
{
lean_object* v___x_1899_; lean_object* v___x_1901_; 
lean_dec(v___x_1889_);
lean_dec(v___x_1888_);
lean_dec(v_val_1887_);
lean_dec(v_snd_1882_);
lean_dec(v_fst_1881_);
lean_dec_ref(v_info_1876_);
lean_dec_ref(v_ci_1875_);
lean_dec_ref(v_text_1874_);
v___x_1899_ = lean_box(0);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 1, v___y_1878_);
lean_ctor_set(v___x_1884_, 0, v___x_1899_);
v___x_1901_ = v___x_1884_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v___x_1899_);
lean_ctor_set(v_reuseFailAlloc_1902_, 1, v___y_1878_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
return v___x_1901_;
}
}
}
else
{
lean_object* v___x_1903_; lean_object* v___x_1905_; 
lean_dec(v___x_1886_);
lean_dec(v_snd_1882_);
lean_dec(v_fst_1881_);
lean_dec_ref(v_info_1876_);
lean_dec_ref(v_ci_1875_);
lean_dec_ref(v_text_1874_);
v___x_1903_ = lean_box(0);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 1, v___y_1878_);
lean_ctor_set(v___x_1884_, 0, v___x_1903_);
v___x_1905_ = v___x_1884_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v___y_1878_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
else
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
lean_dec(v___x_1879_);
lean_dec_ref(v_info_1876_);
lean_dec_ref(v_ci_1875_);
lean_dec_ref(v_text_1874_);
v___x_1908_ = lean_box(0);
v___x_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
lean_ctor_set(v___x_1909_, 1, v___y_1878_);
return v___x_1909_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__1___boxed(lean_object* v_text_1910_, lean_object* v_ci_1911_, lean_object* v_info_1912_, lean_object* v_x_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__1(v_text_1910_, v_ci_1911_, v_info_1912_, v_x_1913_, v___y_1914_);
lean_dec_ref(v_x_1913_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0___lam__0(lean_object* v_postNode_1916_, lean_object* v_ci_1917_, lean_object* v_i_1918_, lean_object* v_cs_1919_, lean_object* v_x_1920_, lean_object* v___y_1921_){
_start:
{
lean_object* v___x_1922_; 
v___x_1922_ = lean_apply_4(v_postNode_1916_, v_ci_1917_, v_i_1918_, v_cs_1919_, v___y_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0___lam__0___boxed(lean_object* v_postNode_1923_, lean_object* v_ci_1924_, lean_object* v_i_1925_, lean_object* v_cs_1926_, lean_object* v_x_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0___lam__0(v_postNode_1923_, v_ci_1924_, v_i_1925_, v_cs_1926_, v_x_1927_, v___y_1928_);
lean_dec(v_x_1927_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v___f_1939_; lean_object* v___f_1940_; lean_object* v___f_1941_; lean_object* v___f_1942_; lean_object* v___f_1943_; lean_object* v___f_1944_; lean_object* v___f_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___f_1949_; lean_object* v___f_1950_; lean_object* v___f_1951_; lean_object* v___f_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_3116__overap_1961_; lean_object* v___x_1962_; 
v___f_1939_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__0));
v___f_1940_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__1));
v___f_1941_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__2));
v___f_1942_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__3));
v___f_1943_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__4));
v___f_1944_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__5));
v___f_1945_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__6));
v___x_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1946_, 0, v___f_1939_);
lean_ctor_set(v___x_1946_, 1, v___f_1940_);
v___x_1947_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1946_);
lean_ctor_set(v___x_1947_, 1, v___f_1941_);
lean_ctor_set(v___x_1947_, 2, v___f_1942_);
lean_ctor_set(v___x_1947_, 3, v___f_1943_);
lean_ctor_set(v___x_1947_, 4, v___f_1944_);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1947_);
lean_ctor_set(v___x_1948_, 1, v___f_1945_);
lean_inc_ref_n(v___x_1948_, 6);
v___f_1949_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1949_, 0, v___x_1948_);
v___f_1950_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1950_, 0, v___x_1948_);
v___f_1951_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1951_, 0, v___x_1948_);
v___f_1952_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1952_, 0, v___x_1948_);
v___x_1953_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1953_, 0, lean_box(0));
lean_closure_set(v___x_1953_, 1, lean_box(0));
lean_closure_set(v___x_1953_, 2, v___x_1948_);
v___x_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1953_);
lean_ctor_set(v___x_1954_, 1, v___f_1949_);
v___x_1955_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1955_, 0, lean_box(0));
lean_closure_set(v___x_1955_, 1, lean_box(0));
lean_closure_set(v___x_1955_, 2, v___x_1948_);
v___x_1956_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1954_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
lean_ctor_set(v___x_1956_, 2, v___f_1950_);
lean_ctor_set(v___x_1956_, 3, v___f_1951_);
lean_ctor_set(v___x_1956_, 4, v___f_1952_);
v___x_1957_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1957_, 0, lean_box(0));
lean_closure_set(v___x_1957_, 1, lean_box(0));
lean_closure_set(v___x_1957_, 2, v___x_1948_);
v___x_1958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1956_);
lean_ctor_set(v___x_1958_, 1, v___x_1957_);
v___x_1959_ = lean_box(0);
v___x_1960_ = l_instInhabitedOfMonad___redArg(v___x_1958_, v___x_1959_);
v___x_3116__overap_1961_ = lean_panic_fn_borrowed(v___x_1960_, v_msg_1937_);
lean_dec(v___x_1960_);
v___x_1962_ = lean_apply_1(v___x_3116__overap_1961_, v___y_1938_);
return v___x_1962_;
}
}
static lean_object* _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1966_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__2));
v___x_1967_ = lean_unsigned_to_nat(21u);
v___x_1968_ = lean_unsigned_to_nat(65u);
v___x_1969_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__1));
v___x_1970_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__0));
v___x_1971_ = l_mkPanicMessageWithDecl(v___x_1970_, v___x_1969_, v___x_1968_, v___x_1967_, v___x_1966_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg(lean_object* v_preNode_1972_, lean_object* v_postNode_1973_, lean_object* v_x_1974_, lean_object* v_x_1975_, lean_object* v___y_1976_){
_start:
{
switch(lean_obj_tag(v_x_1975_))
{
case 0:
{
lean_object* v_i_1977_; lean_object* v_t_1978_; lean_object* v___x_1979_; 
v_i_1977_ = lean_ctor_get(v_x_1975_, 0);
lean_inc_ref(v_i_1977_);
v_t_1978_ = lean_ctor_get(v_x_1975_, 1);
lean_inc_ref(v_t_1978_);
lean_dec_ref_known(v_x_1975_, 2);
v___x_1979_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_1977_, v_x_1974_);
v_x_1974_ = v___x_1979_;
v_x_1975_ = v_t_1978_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_1974_) == 0)
{
lean_object* v___x_1981_; lean_object* v___x_1982_; 
lean_dec_ref_known(v_x_1975_, 2);
lean_dec_ref(v_postNode_1973_);
lean_dec_ref(v_preNode_1972_);
v___x_1981_ = lean_obj_once(&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__3, &l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__3_once, _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__3);
v___x_1982_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg(v___x_1981_, v___y_1976_);
return v___x_1982_;
}
else
{
lean_object* v_i_1983_; lean_object* v_children_1984_; lean_object* v_val_1985_; lean_object* v___x_1986_; lean_object* v_fst_1987_; uint8_t v___x_1988_; 
v_i_1983_ = lean_ctor_get(v_x_1975_, 0);
lean_inc_ref_n(v_i_1983_, 2);
v_children_1984_ = lean_ctor_get(v_x_1975_, 1);
lean_inc_ref_n(v_children_1984_, 2);
lean_dec_ref_known(v_x_1975_, 2);
v_val_1985_ = lean_ctor_get(v_x_1974_, 0);
lean_inc_n(v_val_1985_, 2);
lean_inc_ref(v_preNode_1972_);
v___x_1986_ = lean_apply_4(v_preNode_1972_, v_val_1985_, v_i_1983_, v_children_1984_, v___y_1976_);
v_fst_1987_ = lean_ctor_get(v___x_1986_, 0);
lean_inc(v_fst_1987_);
v___x_1988_ = lean_unbox(v_fst_1987_);
lean_dec(v_fst_1987_);
if (v___x_1988_ == 0)
{
lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_2007_; 
lean_dec_ref(v_preNode_1972_);
v_isSharedCheck_2007_ = !lean_is_exclusive(v_x_1974_);
if (v_isSharedCheck_2007_ == 0)
{
lean_object* v_unused_2008_; 
v_unused_2008_ = lean_ctor_get(v_x_1974_, 0);
lean_dec(v_unused_2008_);
v___x_1990_ = v_x_1974_;
v_isShared_1991_ = v_isSharedCheck_2007_;
goto v_resetjp_1989_;
}
else
{
lean_dec(v_x_1974_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_2007_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v_snd_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v_fst_1995_; lean_object* v_snd_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2006_; 
v_snd_1992_ = lean_ctor_get(v___x_1986_, 1);
lean_inc(v_snd_1992_);
lean_dec_ref(v___x_1986_);
v___x_1993_ = lean_box(0);
v___x_1994_ = lean_apply_5(v_postNode_1973_, v_val_1985_, v_i_1983_, v_children_1984_, v___x_1993_, v_snd_1992_);
v_fst_1995_ = lean_ctor_get(v___x_1994_, 0);
v_snd_1996_ = lean_ctor_get(v___x_1994_, 1);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_1998_ = v___x_1994_;
v_isShared_1999_ = v_isSharedCheck_2006_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_snd_1996_);
lean_inc(v_fst_1995_);
lean_dec(v___x_1994_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2006_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 0, v_fst_1995_);
v___x_2001_ = v___x_1990_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_fst_1995_);
v___x_2001_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
lean_object* v___x_2003_; 
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 0, v___x_2001_);
v___x_2003_ = v___x_1998_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v___x_2001_);
lean_ctor_set(v_reuseFailAlloc_2004_, 1, v_snd_1996_);
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
}
else
{
lean_object* v_snd_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v_fst_2014_; lean_object* v_snd_2015_; lean_object* v___x_2016_; lean_object* v_fst_2017_; lean_object* v_snd_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2026_; 
v_snd_2009_ = lean_ctor_get(v___x_1986_, 1);
lean_inc(v_snd_2009_);
lean_dec_ref(v___x_1986_);
v___x_2010_ = l_Lean_Elab_Info_updateContext_x3f(v_x_1974_, v_i_1983_);
v___x_2011_ = l_Lean_PersistentArray_toList___redArg(v_children_1984_);
v___x_2012_ = lean_box(0);
lean_inc_ref(v_postNode_1973_);
v___x_2013_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__2___redArg(v_preNode_1972_, v_postNode_1973_, v___x_2010_, v___x_2011_, v___x_2012_, v_snd_2009_);
v_fst_2014_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_fst_2014_);
v_snd_2015_ = lean_ctor_get(v___x_2013_, 1);
lean_inc(v_snd_2015_);
lean_dec_ref(v___x_2013_);
v___x_2016_ = lean_apply_5(v_postNode_1973_, v_val_1985_, v_i_1983_, v_children_1984_, v_fst_2014_, v_snd_2015_);
v_fst_2017_ = lean_ctor_get(v___x_2016_, 0);
v_snd_2018_ = lean_ctor_get(v___x_2016_, 1);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2020_ = v___x_2016_;
v_isShared_2021_ = v_isSharedCheck_2026_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_snd_2018_);
lean_inc(v_fst_2017_);
lean_dec(v___x_2016_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2026_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2022_; lean_object* v___x_2024_; 
v___x_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2022_, 0, v_fst_2017_);
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 0, v___x_2022_);
v___x_2024_ = v___x_2020_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2022_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v_snd_2018_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
}
}
default: 
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
lean_dec_ref_known(v_x_1975_, 1);
lean_dec(v_x_1974_);
lean_dec_ref(v_postNode_1973_);
lean_dec_ref(v_preNode_1972_);
v___x_2027_ = lean_box(0);
v___x_2028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2027_);
lean_ctor_set(v___x_2028_, 1, v___y_1976_);
return v___x_2028_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__2___redArg(lean_object* v_preNode_2029_, lean_object* v_postNode_2030_, lean_object* v___x_2031_, lean_object* v_x_2032_, lean_object* v_x_2033_, lean_object* v___y_2034_){
_start:
{
if (lean_obj_tag(v_x_2032_) == 0)
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
lean_dec(v___x_2031_);
lean_dec_ref(v_postNode_2030_);
lean_dec_ref(v_preNode_2029_);
v___x_2035_ = l_List_reverse___redArg(v_x_2033_);
v___x_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2035_);
lean_ctor_set(v___x_2036_, 1, v___y_2034_);
return v___x_2036_;
}
else
{
lean_object* v_head_2037_; lean_object* v_tail_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2049_; 
v_head_2037_ = lean_ctor_get(v_x_2032_, 0);
v_tail_2038_ = lean_ctor_get(v_x_2032_, 1);
v_isSharedCheck_2049_ = !lean_is_exclusive(v_x_2032_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2040_ = v_x_2032_;
v_isShared_2041_ = v_isSharedCheck_2049_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_tail_2038_);
lean_inc(v_head_2037_);
lean_dec(v_x_2032_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2049_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v_fst_2043_; lean_object* v_snd_2044_; lean_object* v___x_2046_; 
lean_inc(v___x_2031_);
lean_inc_ref(v_postNode_2030_);
lean_inc_ref(v_preNode_2029_);
v___x_2042_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg(v_preNode_2029_, v_postNode_2030_, v___x_2031_, v_head_2037_, v___y_2034_);
v_fst_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_fst_2043_);
v_snd_2044_ = lean_ctor_get(v___x_2042_, 1);
lean_inc(v_snd_2044_);
lean_dec_ref(v___x_2042_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 1, v_x_2033_);
lean_ctor_set(v___x_2040_, 0, v_fst_2043_);
v___x_2046_ = v___x_2040_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_fst_2043_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v_x_2033_);
v___x_2046_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
v_x_2032_ = v_tail_2038_;
v_x_2033_ = v___x_2046_;
v___y_2034_ = v_snd_2044_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0(lean_object* v_preNode_2050_, lean_object* v_postNode_2051_, lean_object* v_ctx_x3f_2052_, lean_object* v_t_2053_, lean_object* v___y_2054_){
_start:
{
lean_object* v___f_2055_; lean_object* v___x_2056_; lean_object* v_snd_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2065_; 
v___f_2055_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2055_, 0, v_postNode_2051_);
v___x_2056_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg(v_preNode_2050_, v___f_2055_, v_ctx_x3f_2052_, v_t_2053_, v___y_2054_);
v_snd_2057_ = lean_ctor_get(v___x_2056_, 1);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2065_ == 0)
{
lean_object* v_unused_2066_; 
v_unused_2066_ = lean_ctor_get(v___x_2056_, 0);
lean_dec(v_unused_2066_);
v___x_2059_ = v___x_2056_;
v_isShared_2060_ = v_isSharedCheck_2065_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_snd_2057_);
lean_dec(v___x_2056_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2065_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2061_; lean_object* v___x_2063_; 
v___x_2061_ = lean_box(0);
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 0, v___x_2061_);
v___x_2063_ = v___x_2059_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v___x_2061_);
lean_ctor_set(v_reuseFailAlloc_2064_, 1, v_snd_2057_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1(lean_object* v_text_2067_, lean_object* v_as_2068_, size_t v_sz_2069_, size_t v_i_2070_, lean_object* v_b_2071_, lean_object* v___y_2072_){
_start:
{
uint8_t v___x_2073_; 
v___x_2073_ = lean_usize_dec_lt(v_i_2070_, v_sz_2069_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; 
lean_dec_ref(v_text_2067_);
v___x_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2074_, 0, v_b_2071_);
lean_ctor_set(v___x_2074_, 1, v___y_2072_);
return v___x_2074_;
}
else
{
lean_object* v___x_2075_; lean_object* v___f_2076_; lean_object* v___f_2077_; lean_object* v_a_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v_snd_2081_; lean_object* v___x_2082_; size_t v___x_2083_; size_t v___x_2084_; 
v___x_2075_ = lean_box(v___x_2073_);
v___f_2076_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__0___boxed), 5, 1);
lean_closure_set(v___f_2076_, 0, v___x_2075_);
lean_inc_ref(v_text_2067_);
v___f_2077_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___lam__1___boxed), 5, 1);
lean_closure_set(v___f_2077_, 0, v_text_2067_);
v_a_2078_ = lean_array_uget_borrowed(v_as_2068_, v_i_2070_);
v___x_2079_ = lean_box(0);
lean_inc(v_a_2078_);
v___x_2080_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0(v___f_2076_, v___f_2077_, v___x_2079_, v_a_2078_, v___y_2072_);
v_snd_2081_ = lean_ctor_get(v___x_2080_, 1);
lean_inc(v_snd_2081_);
lean_dec_ref(v___x_2080_);
v___x_2082_ = lean_box(0);
v___x_2083_ = ((size_t)1ULL);
v___x_2084_ = lean_usize_add(v_i_2070_, v___x_2083_);
v_i_2070_ = v___x_2084_;
v_b_2071_ = v___x_2082_;
v___y_2072_ = v_snd_2081_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1___boxed(lean_object* v_text_2086_, lean_object* v_as_2087_, lean_object* v_sz_2088_, lean_object* v_i_2089_, lean_object* v_b_2090_, lean_object* v___y_2091_){
_start:
{
size_t v_sz_boxed_2092_; size_t v_i_boxed_2093_; lean_object* v_res_2094_; 
v_sz_boxed_2092_ = lean_unbox_usize(v_sz_2088_);
lean_dec(v_sz_2088_);
v_i_boxed_2093_ = lean_unbox_usize(v_i_2089_);
lean_dec(v_i_2089_);
v_res_2094_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1(v_text_2086_, v_as_2087_, v_sz_boxed_2092_, v_i_boxed_2093_, v_b_2090_, v___y_2091_);
lean_dec_ref(v_as_2087_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findReferences(lean_object* v_text_2095_, lean_object* v_trees_2096_){
_start:
{
lean_object* v___x_2097_; size_t v_sz_2098_; size_t v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v_snd_2102_; 
v___x_2097_ = lean_box(0);
v_sz_2098_ = lean_array_size(v_trees_2096_);
v___x_2099_ = ((size_t)0ULL);
v___x_2100_ = ((lean_object*)(l_Lean_Server_RefInfo_empty___closed__0));
v___x_2101_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_findReferences_spec__1(v_text_2095_, v_trees_2096_, v_sz_2098_, v___x_2099_, v___x_2097_, v___x_2100_);
v_snd_2102_ = lean_ctor_get(v___x_2101_, 1);
lean_inc(v_snd_2102_);
lean_dec_ref(v___x_2101_);
return v_snd_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findReferences___boxed(lean_object* v_text_2103_, lean_object* v_trees_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l_Lean_Server_findReferences(v_text_2103_, v_trees_2104_);
lean_dec_ref(v_trees_2104_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2106_, lean_object* v_msg_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v___x_2109_; 
v___x_2109_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg(v_msg_2107_, v___y_2108_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0(lean_object* v_00_u03b1_2110_, lean_object* v_preNode_2111_, lean_object* v_postNode_2112_, lean_object* v_x_2113_, lean_object* v_x_2114_, lean_object* v___y_2115_){
_start:
{
lean_object* v___x_2116_; 
v___x_2116_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg(v_preNode_2111_, v_postNode_2112_, v_x_2113_, v_x_2114_, v___y_2115_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_2117_, lean_object* v_preNode_2118_, lean_object* v_postNode_2119_, lean_object* v___x_2120_, lean_object* v_x_2121_, lean_object* v_x_2122_, lean_object* v___y_2123_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__2___redArg(v_preNode_2118_, v_postNode_2119_, v___x_2120_, v_x_2121_, v_x_2122_, v___y_2123_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2___redArg(lean_object* v_a_2125_, lean_object* v_x_2126_){
_start:
{
lean_object* v_key_2127_; lean_object* v_value_2128_; lean_object* v_tail_2129_; uint8_t v___x_2130_; 
v_key_2127_ = lean_ctor_get(v_x_2126_, 0);
v_value_2128_ = lean_ctor_get(v_x_2126_, 1);
v_tail_2129_ = lean_ctor_get(v_x_2126_, 2);
v___x_2130_ = l_Lean_Lsp_instBEqRefIdent_beq(v_key_2127_, v_a_2125_);
if (v___x_2130_ == 0)
{
v_x_2126_ = v_tail_2129_;
goto _start;
}
else
{
lean_inc(v_value_2128_);
return v_value_2128_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2___redArg___boxed(lean_object* v_a_2132_, lean_object* v_x_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2___redArg(v_a_2132_, v_x_2133_);
lean_dec(v_x_2133_);
lean_dec_ref(v_a_2132_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1___redArg(lean_object* v_m_2135_, lean_object* v_a_2136_){
_start:
{
lean_object* v_buckets_2137_; lean_object* v___x_2138_; uint64_t v___x_2139_; uint64_t v___x_2140_; uint64_t v___x_2141_; uint64_t v_fold_2142_; uint64_t v___x_2143_; uint64_t v___x_2144_; uint64_t v___x_2145_; size_t v___x_2146_; size_t v___x_2147_; size_t v___x_2148_; size_t v___x_2149_; size_t v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v_buckets_2137_ = lean_ctor_get(v_m_2135_, 1);
v___x_2138_ = lean_array_get_size(v_buckets_2137_);
v___x_2139_ = l_Lean_Lsp_instHashableRefIdent_hash(v_a_2136_);
v___x_2140_ = 32ULL;
v___x_2141_ = lean_uint64_shift_right(v___x_2139_, v___x_2140_);
v_fold_2142_ = lean_uint64_xor(v___x_2139_, v___x_2141_);
v___x_2143_ = 16ULL;
v___x_2144_ = lean_uint64_shift_right(v_fold_2142_, v___x_2143_);
v___x_2145_ = lean_uint64_xor(v_fold_2142_, v___x_2144_);
v___x_2146_ = lean_uint64_to_usize(v___x_2145_);
v___x_2147_ = lean_usize_of_nat(v___x_2138_);
v___x_2148_ = ((size_t)1ULL);
v___x_2149_ = lean_usize_sub(v___x_2147_, v___x_2148_);
v___x_2150_ = lean_usize_land(v___x_2146_, v___x_2149_);
v___x_2151_ = lean_array_uget_borrowed(v_buckets_2137_, v___x_2150_);
v___x_2152_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2___redArg(v_a_2136_, v___x_2151_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1___redArg___boxed(lean_object* v_m_2153_, lean_object* v_a_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1___redArg(v_m_2153_, v_a_2154_);
lean_dec_ref(v_a_2154_);
lean_dec_ref(v_m_2153_);
return v_res_2155_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg(lean_object* v_a_2156_, lean_object* v_x_2157_){
_start:
{
if (lean_obj_tag(v_x_2157_) == 0)
{
uint8_t v___x_2158_; 
v___x_2158_ = 0;
return v___x_2158_;
}
else
{
lean_object* v_key_2159_; lean_object* v_tail_2160_; uint8_t v___x_2161_; 
v_key_2159_ = lean_ctor_get(v_x_2157_, 0);
v_tail_2160_ = lean_ctor_get(v_x_2157_, 2);
v___x_2161_ = l_Lean_Lsp_instBEqRefIdent_beq(v_key_2159_, v_a_2156_);
if (v___x_2161_ == 0)
{
v_x_2157_ = v_tail_2160_;
goto _start;
}
else
{
return v___x_2161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg___boxed(lean_object* v_a_2163_, lean_object* v_x_2164_){
_start:
{
uint8_t v_res_2165_; lean_object* v_r_2166_; 
v_res_2165_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg(v_a_2163_, v_x_2164_);
lean_dec(v_x_2164_);
lean_dec_ref(v_a_2163_);
v_r_2166_ = lean_box(v_res_2165_);
return v_r_2166_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___redArg(lean_object* v_m_2167_, lean_object* v_a_2168_){
_start:
{
lean_object* v_buckets_2169_; lean_object* v___x_2170_; uint64_t v___x_2171_; uint64_t v___x_2172_; uint64_t v___x_2173_; uint64_t v_fold_2174_; uint64_t v___x_2175_; uint64_t v___x_2176_; uint64_t v___x_2177_; size_t v___x_2178_; size_t v___x_2179_; size_t v___x_2180_; size_t v___x_2181_; size_t v___x_2182_; lean_object* v___x_2183_; uint8_t v___x_2184_; 
v_buckets_2169_ = lean_ctor_get(v_m_2167_, 1);
v___x_2170_ = lean_array_get_size(v_buckets_2169_);
v___x_2171_ = l_Lean_Lsp_instHashableRefIdent_hash(v_a_2168_);
v___x_2172_ = 32ULL;
v___x_2173_ = lean_uint64_shift_right(v___x_2171_, v___x_2172_);
v_fold_2174_ = lean_uint64_xor(v___x_2171_, v___x_2173_);
v___x_2175_ = 16ULL;
v___x_2176_ = lean_uint64_shift_right(v_fold_2174_, v___x_2175_);
v___x_2177_ = lean_uint64_xor(v_fold_2174_, v___x_2176_);
v___x_2178_ = lean_uint64_to_usize(v___x_2177_);
v___x_2179_ = lean_usize_of_nat(v___x_2170_);
v___x_2180_ = ((size_t)1ULL);
v___x_2181_ = lean_usize_sub(v___x_2179_, v___x_2180_);
v___x_2182_ = lean_usize_land(v___x_2178_, v___x_2181_);
v___x_2183_ = lean_array_uget_borrowed(v_buckets_2169_, v___x_2182_);
v___x_2184_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg(v_a_2168_, v___x_2183_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___redArg___boxed(lean_object* v_m_2185_, lean_object* v_a_2186_){
_start:
{
uint8_t v_res_2187_; lean_object* v_r_2188_; 
v_res_2187_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___redArg(v_m_2185_, v_a_2186_);
lean_dec_ref(v_a_2186_);
lean_dec_ref(v_m_2185_);
v_r_2188_ = lean_box(v_res_2187_);
return v_r_2188_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg(lean_object* v_idMap_2189_, lean_object* v_a_2190_){
_start:
{
uint8_t v___x_2191_; 
v___x_2191_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___redArg(v_idMap_2189_, v_a_2190_);
if (v___x_2191_ == 0)
{
return v_a_2190_;
}
else
{
lean_object* v___x_2192_; 
v___x_2192_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1___redArg(v_idMap_2189_, v_a_2190_);
lean_dec_ref(v_a_2190_);
v_a_2190_ = v___x_2192_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg___boxed(lean_object* v_idMap_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg(v_idMap_2194_, v_a_2195_);
lean_dec_ref(v_idMap_2194_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative(lean_object* v_idMap_2197_, lean_object* v_id_2198_){
_start:
{
lean_object* v___x_2199_; 
v___x_2199_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg(v_idMap_2197_, v_id_2198_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative___boxed(lean_object* v_idMap_2200_, lean_object* v_id_2201_){
_start:
{
lean_object* v_res_2202_; 
v_res_2202_ = l___private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative(v_idMap_2200_, v_id_2201_);
lean_dec_ref(v_idMap_2200_);
return v_res_2202_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0(lean_object* v_00_u03b2_2203_, lean_object* v_m_2204_, lean_object* v_a_2205_){
_start:
{
uint8_t v___x_2206_; 
v___x_2206_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___redArg(v_m_2204_, v_a_2205_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___boxed(lean_object* v_00_u03b2_2207_, lean_object* v_m_2208_, lean_object* v_a_2209_){
_start:
{
uint8_t v_res_2210_; lean_object* v_r_2211_; 
v_res_2210_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0(v_00_u03b2_2207_, v_m_2208_, v_a_2209_);
lean_dec_ref(v_a_2209_);
lean_dec_ref(v_m_2208_);
v_r_2211_ = lean_box(v_res_2210_);
return v_r_2211_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1(lean_object* v_00_u03b2_2212_, lean_object* v_m_2213_, lean_object* v_a_2214_, lean_object* v_hma_2215_){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1___redArg(v_m_2213_, v_a_2214_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1___boxed(lean_object* v_00_u03b2_2217_, lean_object* v_m_2218_, lean_object* v_a_2219_, lean_object* v_hma_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1(v_00_u03b2_2217_, v_m_2218_, v_a_2219_, v_hma_2220_);
lean_dec_ref(v_a_2219_);
lean_dec_ref(v_m_2218_);
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2(lean_object* v_idMap_2222_, lean_object* v_inst_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v___x_2225_; 
v___x_2225_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg(v_idMap_2222_, v_a_2224_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___boxed(lean_object* v_idMap_2226_, lean_object* v_inst_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2(v_idMap_2226_, v_inst_2227_, v_a_2228_);
lean_dec_ref(v_idMap_2226_);
return v_res_2229_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0(lean_object* v_00_u03b2_2230_, lean_object* v_a_2231_, lean_object* v_x_2232_){
_start:
{
uint8_t v___x_2233_; 
v___x_2233_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg(v_a_2231_, v_x_2232_);
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2234_, lean_object* v_a_2235_, lean_object* v_x_2236_){
_start:
{
uint8_t v_res_2237_; lean_object* v_r_2238_; 
v_res_2237_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0(v_00_u03b2_2234_, v_a_2235_, v_x_2236_);
lean_dec(v_x_2236_);
lean_dec_ref(v_a_2235_);
v_r_2238_ = lean_box(v_res_2237_);
return v_r_2238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2(lean_object* v_00_u03b2_2239_, lean_object* v_a_2240_, lean_object* v_x_2241_, lean_object* v_x_2242_){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2___redArg(v_a_2240_, v_x_2241_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2244_, lean_object* v_a_2245_, lean_object* v_x_2246_, lean_object* v_x_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = l_Std_DHashMap_Internal_AssocList_get___at___00Std_DHashMap_Internal_Raw_u2080_Const_get___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__1_spec__2(v_00_u03b2_2244_, v_a_2245_, v_x_2246_, v_x_2247_);
lean_dec(v_x_2246_);
lean_dec_ref(v_a_2245_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__4(lean_object* v_a_2249_, lean_object* v_a_2250_){
_start:
{
if (lean_obj_tag(v_a_2249_) == 0)
{
lean_object* v___x_2251_; 
v___x_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2251_, 0, v_a_2250_);
return v___x_2251_;
}
else
{
if (lean_obj_tag(v_a_2250_) == 0)
{
lean_object* v_tail_2252_; 
v_tail_2252_ = lean_ctor_get(v_a_2249_, 2);
lean_inc(v_tail_2252_);
lean_dec_ref_known(v_a_2249_, 3);
v_a_2249_ = v_tail_2252_;
goto _start;
}
else
{
lean_object* v_key_2254_; 
v_key_2254_ = lean_ctor_get(v_a_2249_, 0);
if (lean_obj_tag(v_key_2254_) == 0)
{
lean_object* v_tail_2255_; 
lean_inc_ref(v_key_2254_);
lean_dec_ref_known(v_a_2250_, 2);
v_tail_2255_ = lean_ctor_get(v_a_2249_, 2);
lean_inc(v_tail_2255_);
lean_dec_ref_known(v_a_2249_, 3);
v_a_2249_ = v_tail_2255_;
v_a_2250_ = v_key_2254_;
goto _start;
}
else
{
lean_object* v_tail_2257_; 
v_tail_2257_ = lean_ctor_get(v_a_2249_, 2);
lean_inc(v_tail_2257_);
lean_dec_ref_known(v_a_2249_, 3);
v_a_2249_ = v_tail_2257_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__5(lean_object* v_as_2259_, size_t v_sz_2260_, size_t v_i_2261_, lean_object* v_b_2262_){
_start:
{
uint8_t v___x_2263_; 
v___x_2263_ = lean_usize_dec_lt(v_i_2261_, v_sz_2260_);
if (v___x_2263_ == 0)
{
return v_b_2262_;
}
else
{
lean_object* v_a_2264_; lean_object* v___x_2265_; 
v_a_2264_ = lean_array_uget_borrowed(v_as_2259_, v_i_2261_);
lean_inc(v_a_2264_);
v___x_2265_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__4(v_a_2264_, v_b_2262_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2266_);
lean_dec_ref_known(v___x_2265_, 1);
return v_a_2266_;
}
else
{
lean_object* v_a_2267_; size_t v___x_2268_; size_t v___x_2269_; 
v_a_2267_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2267_);
lean_dec_ref_known(v___x_2265_, 1);
v___x_2268_ = ((size_t)1ULL);
v___x_2269_ = lean_usize_add(v_i_2261_, v___x_2268_);
v_i_2261_ = v___x_2269_;
v_b_2262_ = v_a_2267_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__5___boxed(lean_object* v_as_2271_, lean_object* v_sz_2272_, lean_object* v_i_2273_, lean_object* v_b_2274_){
_start:
{
size_t v_sz_boxed_2275_; size_t v_i_boxed_2276_; lean_object* v_res_2277_; 
v_sz_boxed_2275_ = lean_unbox_usize(v_sz_2272_);
lean_dec(v_sz_2272_);
v_i_boxed_2276_ = lean_unbox_usize(v_i_2273_);
lean_dec(v_i_2273_);
v_res_2277_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__5(v_as_2271_, v_sz_boxed_2275_, v_i_boxed_2276_, v_b_2274_);
lean_dec_ref(v_as_2271_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3_spec__6___redArg(lean_object* v_a_2278_, lean_object* v_b_2279_, lean_object* v_x_2280_){
_start:
{
if (lean_obj_tag(v_x_2280_) == 0)
{
lean_dec(v_b_2279_);
lean_dec_ref(v_a_2278_);
return v_x_2280_;
}
else
{
lean_object* v_key_2281_; lean_object* v_value_2282_; lean_object* v_tail_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2295_; 
v_key_2281_ = lean_ctor_get(v_x_2280_, 0);
v_value_2282_ = lean_ctor_get(v_x_2280_, 1);
v_tail_2283_ = lean_ctor_get(v_x_2280_, 2);
v_isSharedCheck_2295_ = !lean_is_exclusive(v_x_2280_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2285_ = v_x_2280_;
v_isShared_2286_ = v_isSharedCheck_2295_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_tail_2283_);
lean_inc(v_value_2282_);
lean_inc(v_key_2281_);
lean_dec(v_x_2280_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2295_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
uint8_t v___x_2287_; 
v___x_2287_ = l_Lean_Lsp_instBEqRefIdent_beq(v_key_2281_, v_a_2278_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; lean_object* v___x_2290_; 
v___x_2288_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3_spec__6___redArg(v_a_2278_, v_b_2279_, v_tail_2283_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 2, v___x_2288_);
v___x_2290_ = v___x_2285_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_key_2281_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_value_2282_);
lean_ctor_set(v_reuseFailAlloc_2291_, 2, v___x_2288_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
else
{
lean_object* v___x_2293_; 
lean_dec(v_value_2282_);
lean_dec(v_key_2281_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 1, v_b_2279_);
lean_ctor_set(v___x_2285_, 0, v_a_2278_);
v___x_2293_ = v___x_2285_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2278_);
lean_ctor_set(v_reuseFailAlloc_2294_, 1, v_b_2279_);
lean_ctor_set(v_reuseFailAlloc_2294_, 2, v_tail_2283_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5_spec__15___redArg(lean_object* v_x_2296_, lean_object* v_x_2297_){
_start:
{
if (lean_obj_tag(v_x_2297_) == 0)
{
return v_x_2296_;
}
else
{
lean_object* v_key_2298_; lean_object* v_value_2299_; lean_object* v_tail_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2323_; 
v_key_2298_ = lean_ctor_get(v_x_2297_, 0);
v_value_2299_ = lean_ctor_get(v_x_2297_, 1);
v_tail_2300_ = lean_ctor_get(v_x_2297_, 2);
v_isSharedCheck_2323_ = !lean_is_exclusive(v_x_2297_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2302_ = v_x_2297_;
v_isShared_2303_ = v_isSharedCheck_2323_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_tail_2300_);
lean_inc(v_value_2299_);
lean_inc(v_key_2298_);
lean_dec(v_x_2297_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2323_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2304_; uint64_t v___x_2305_; uint64_t v___x_2306_; uint64_t v___x_2307_; uint64_t v_fold_2308_; uint64_t v___x_2309_; uint64_t v___x_2310_; uint64_t v___x_2311_; size_t v___x_2312_; size_t v___x_2313_; size_t v___x_2314_; size_t v___x_2315_; size_t v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2319_; 
v___x_2304_ = lean_array_get_size(v_x_2296_);
v___x_2305_ = l_Lean_Lsp_instHashableRefIdent_hash(v_key_2298_);
v___x_2306_ = 32ULL;
v___x_2307_ = lean_uint64_shift_right(v___x_2305_, v___x_2306_);
v_fold_2308_ = lean_uint64_xor(v___x_2305_, v___x_2307_);
v___x_2309_ = 16ULL;
v___x_2310_ = lean_uint64_shift_right(v_fold_2308_, v___x_2309_);
v___x_2311_ = lean_uint64_xor(v_fold_2308_, v___x_2310_);
v___x_2312_ = lean_uint64_to_usize(v___x_2311_);
v___x_2313_ = lean_usize_of_nat(v___x_2304_);
v___x_2314_ = ((size_t)1ULL);
v___x_2315_ = lean_usize_sub(v___x_2313_, v___x_2314_);
v___x_2316_ = lean_usize_land(v___x_2312_, v___x_2315_);
v___x_2317_ = lean_array_uget_borrowed(v_x_2296_, v___x_2316_);
lean_inc(v___x_2317_);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 2, v___x_2317_);
v___x_2319_ = v___x_2302_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_key_2298_);
lean_ctor_set(v_reuseFailAlloc_2322_, 1, v_value_2299_);
lean_ctor_set(v_reuseFailAlloc_2322_, 2, v___x_2317_);
v___x_2319_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
lean_object* v___x_2320_; 
v___x_2320_ = lean_array_uset(v_x_2296_, v___x_2316_, v___x_2319_);
v_x_2296_ = v___x_2320_;
v_x_2297_ = v_tail_2300_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5___redArg(lean_object* v_i_2324_, lean_object* v_source_2325_, lean_object* v_target_2326_){
_start:
{
lean_object* v___x_2327_; uint8_t v___x_2328_; 
v___x_2327_ = lean_array_get_size(v_source_2325_);
v___x_2328_ = lean_nat_dec_lt(v_i_2324_, v___x_2327_);
if (v___x_2328_ == 0)
{
lean_dec_ref(v_source_2325_);
lean_dec(v_i_2324_);
return v_target_2326_;
}
else
{
lean_object* v_es_2329_; lean_object* v___x_2330_; lean_object* v_source_2331_; lean_object* v_target_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v_es_2329_ = lean_array_fget(v_source_2325_, v_i_2324_);
v___x_2330_ = lean_box(0);
v_source_2331_ = lean_array_fset(v_source_2325_, v_i_2324_, v___x_2330_);
v_target_2332_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5_spec__15___redArg(v_target_2326_, v_es_2329_);
v___x_2333_ = lean_unsigned_to_nat(1u);
v___x_2334_ = lean_nat_add(v_i_2324_, v___x_2333_);
lean_dec(v_i_2324_);
v_i_2324_ = v___x_2334_;
v_source_2325_ = v_source_2331_;
v_target_2326_ = v_target_2332_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4___redArg(lean_object* v_data_2336_){
_start:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v_nbuckets_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2337_ = lean_array_get_size(v_data_2336_);
v___x_2338_ = lean_unsigned_to_nat(2u);
v_nbuckets_2339_ = lean_nat_mul(v___x_2337_, v___x_2338_);
v___x_2340_ = lean_unsigned_to_nat(0u);
v___x_2341_ = lean_box(0);
v___x_2342_ = lean_mk_array(v_nbuckets_2339_, v___x_2341_);
v___x_2343_ = lean_array_propagate_mark(v_data_2336_, v___x_2342_);
v___x_2344_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5___redArg(v___x_2340_, v_data_2336_, v___x_2343_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3___redArg(lean_object* v_m_2345_, lean_object* v_a_2346_, lean_object* v_b_2347_){
_start:
{
lean_object* v_size_2348_; lean_object* v_buckets_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2392_; 
v_size_2348_ = lean_ctor_get(v_m_2345_, 0);
v_buckets_2349_ = lean_ctor_get(v_m_2345_, 1);
v_isSharedCheck_2392_ = !lean_is_exclusive(v_m_2345_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2351_ = v_m_2345_;
v_isShared_2352_ = v_isSharedCheck_2392_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_buckets_2349_);
lean_inc(v_size_2348_);
lean_dec(v_m_2345_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2392_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2353_; uint64_t v___x_2354_; uint64_t v___x_2355_; uint64_t v___x_2356_; uint64_t v_fold_2357_; uint64_t v___x_2358_; uint64_t v___x_2359_; uint64_t v___x_2360_; size_t v___x_2361_; size_t v___x_2362_; size_t v___x_2363_; size_t v___x_2364_; size_t v___x_2365_; lean_object* v_bkt_2366_; uint8_t v___x_2367_; 
v___x_2353_ = lean_array_get_size(v_buckets_2349_);
v___x_2354_ = l_Lean_Lsp_instHashableRefIdent_hash(v_a_2346_);
v___x_2355_ = 32ULL;
v___x_2356_ = lean_uint64_shift_right(v___x_2354_, v___x_2355_);
v_fold_2357_ = lean_uint64_xor(v___x_2354_, v___x_2356_);
v___x_2358_ = 16ULL;
v___x_2359_ = lean_uint64_shift_right(v_fold_2357_, v___x_2358_);
v___x_2360_ = lean_uint64_xor(v_fold_2357_, v___x_2359_);
v___x_2361_ = lean_uint64_to_usize(v___x_2360_);
v___x_2362_ = lean_usize_of_nat(v___x_2353_);
v___x_2363_ = ((size_t)1ULL);
v___x_2364_ = lean_usize_sub(v___x_2362_, v___x_2363_);
v___x_2365_ = lean_usize_land(v___x_2361_, v___x_2364_);
v_bkt_2366_ = lean_array_uget_borrowed(v_buckets_2349_, v___x_2365_);
v___x_2367_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg(v_a_2346_, v_bkt_2366_);
if (v___x_2367_ == 0)
{
lean_object* v___x_2368_; lean_object* v_size_x27_2369_; lean_object* v___x_2370_; lean_object* v_buckets_x27_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; 
v___x_2368_ = lean_unsigned_to_nat(1u);
v_size_x27_2369_ = lean_nat_add(v_size_2348_, v___x_2368_);
lean_dec(v_size_2348_);
lean_inc(v_bkt_2366_);
v___x_2370_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2370_, 0, v_a_2346_);
lean_ctor_set(v___x_2370_, 1, v_b_2347_);
lean_ctor_set(v___x_2370_, 2, v_bkt_2366_);
v_buckets_x27_2371_ = lean_array_uset(v_buckets_2349_, v___x_2365_, v___x_2370_);
v___x_2372_ = lean_unsigned_to_nat(4u);
v___x_2373_ = lean_nat_mul(v_size_x27_2369_, v___x_2372_);
v___x_2374_ = lean_unsigned_to_nat(3u);
v___x_2375_ = lean_nat_div(v___x_2373_, v___x_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_array_get_size(v_buckets_x27_2371_);
v___x_2377_ = lean_nat_dec_le(v___x_2375_, v___x_2376_);
lean_dec(v___x_2375_);
if (v___x_2377_ == 0)
{
lean_object* v_val_2378_; lean_object* v___x_2380_; 
v_val_2378_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4___redArg(v_buckets_x27_2371_);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 1, v_val_2378_);
lean_ctor_set(v___x_2351_, 0, v_size_x27_2369_);
v___x_2380_ = v___x_2351_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_size_x27_2369_);
lean_ctor_set(v_reuseFailAlloc_2381_, 1, v_val_2378_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
return v___x_2380_;
}
}
else
{
lean_object* v___x_2383_; 
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 1, v_buckets_x27_2371_);
lean_ctor_set(v___x_2351_, 0, v_size_x27_2369_);
v___x_2383_ = v___x_2351_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_size_x27_2369_);
lean_ctor_set(v_reuseFailAlloc_2384_, 1, v_buckets_x27_2371_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
else
{
lean_object* v___x_2385_; lean_object* v_buckets_x27_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2390_; 
lean_inc(v_bkt_2366_);
v___x_2385_ = lean_box(0);
v_buckets_x27_2386_ = lean_array_uset(v_buckets_2349_, v___x_2365_, v___x_2385_);
v___x_2387_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3_spec__6___redArg(v_a_2346_, v_b_2347_, v_bkt_2366_);
v___x_2388_ = lean_array_uset(v_buckets_x27_2386_, v___x_2365_, v___x_2387_);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 1, v___x_2388_);
v___x_2390_ = v___x_2351_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_size_2348_);
lean_ctor_set(v_reuseFailAlloc_2391_, 1, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__6(lean_object* v___x_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
if (lean_obj_tag(v_a_2394_) == 0)
{
lean_object* v___x_2396_; 
lean_dec_ref(v___x_2393_);
v___x_2396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2396_, 0, v_a_2395_);
return v___x_2396_;
}
else
{
lean_object* v_key_2397_; lean_object* v_tail_2398_; uint8_t v___x_2399_; 
v_key_2397_ = lean_ctor_get(v_a_2394_, 0);
lean_inc(v_key_2397_);
v_tail_2398_ = lean_ctor_get(v_a_2394_, 2);
lean_inc(v_tail_2398_);
lean_dec_ref_known(v_a_2394_, 3);
v___x_2399_ = l_Lean_Lsp_instBEqRefIdent_beq(v_key_2397_, v___x_2393_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; 
lean_inc_ref(v___x_2393_);
v___x_2400_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3___redArg(v_a_2395_, v_key_2397_, v___x_2393_);
v_a_2394_ = v_tail_2398_;
v_a_2395_ = v___x_2400_;
goto _start;
}
else
{
lean_dec(v_key_2397_);
v_a_2394_ = v_tail_2398_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__7(lean_object* v___x_2403_, lean_object* v_as_2404_, size_t v_sz_2405_, size_t v_i_2406_, lean_object* v_b_2407_){
_start:
{
uint8_t v___x_2408_; 
v___x_2408_ = lean_usize_dec_lt(v_i_2406_, v_sz_2405_);
if (v___x_2408_ == 0)
{
lean_dec_ref(v___x_2403_);
return v_b_2407_;
}
else
{
lean_object* v_a_2409_; lean_object* v___x_2410_; 
v_a_2409_ = lean_array_uget_borrowed(v_as_2404_, v_i_2406_);
lean_inc(v_a_2409_);
lean_inc_ref(v___x_2403_);
v___x_2410_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__6(v___x_2403_, v_a_2409_, v_b_2407_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; 
lean_dec_ref(v___x_2403_);
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2411_);
lean_dec_ref_known(v___x_2410_, 1);
return v_a_2411_;
}
else
{
lean_object* v_a_2412_; size_t v___x_2413_; size_t v___x_2414_; 
v_a_2412_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2410_, 1);
v___x_2413_ = ((size_t)1ULL);
v___x_2414_ = lean_usize_add(v_i_2406_, v___x_2413_);
v_i_2406_ = v___x_2414_;
v_b_2407_ = v_a_2412_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__7___boxed(lean_object* v___x_2416_, lean_object* v_as_2417_, lean_object* v_sz_2418_, lean_object* v_i_2419_, lean_object* v_b_2420_){
_start:
{
size_t v_sz_boxed_2421_; size_t v_i_boxed_2422_; lean_object* v_res_2423_; 
v_sz_boxed_2421_ = lean_unbox_usize(v_sz_2418_);
lean_dec(v_sz_2418_);
v_i_boxed_2422_ = lean_unbox_usize(v_i_2419_);
lean_dec(v_i_2419_);
v_res_2423_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__7(v___x_2416_, v_as_2417_, v_sz_boxed_2421_, v_i_boxed_2422_, v_b_2420_);
lean_dec_ref(v_as_2417_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__8(lean_object* v_a_2424_, lean_object* v_a_2425_){
_start:
{
if (lean_obj_tag(v_a_2424_) == 0)
{
lean_object* v___x_2426_; 
v___x_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2426_, 0, v_a_2425_);
return v___x_2426_;
}
else
{
lean_object* v_value_2427_; lean_object* v_key_2428_; lean_object* v_tail_2429_; lean_object* v_buckets_2430_; size_t v_sz_2431_; size_t v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v_value_2427_ = lean_ctor_get(v_a_2424_, 1);
lean_inc(v_value_2427_);
v_key_2428_ = lean_ctor_get(v_a_2424_, 0);
lean_inc(v_key_2428_);
v_tail_2429_ = lean_ctor_get(v_a_2424_, 2);
lean_inc(v_tail_2429_);
lean_dec_ref_known(v_a_2424_, 3);
v_buckets_2430_ = lean_ctor_get(v_value_2427_, 1);
lean_inc_ref(v_buckets_2430_);
lean_dec(v_value_2427_);
v_sz_2431_ = lean_array_size(v_buckets_2430_);
v___x_2432_ = ((size_t)0ULL);
v___x_2433_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__5(v_buckets_2430_, v_sz_2431_, v___x_2432_, v_key_2428_);
v___x_2434_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__7(v___x_2433_, v_buckets_2430_, v_sz_2431_, v___x_2432_, v_a_2425_);
lean_dec_ref(v_buckets_2430_);
v_a_2424_ = v_tail_2429_;
v_a_2425_ = v___x_2434_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__11(lean_object* v_as_2436_, size_t v_sz_2437_, size_t v_i_2438_, lean_object* v_b_2439_){
_start:
{
uint8_t v___x_2440_; 
v___x_2440_ = lean_usize_dec_lt(v_i_2438_, v_sz_2437_);
if (v___x_2440_ == 0)
{
return v_b_2439_;
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2442_; 
v_a_2441_ = lean_array_uget_borrowed(v_as_2436_, v_i_2438_);
lean_inc(v_a_2441_);
v___x_2442_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__8(v_a_2441_, v_b_2439_);
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v_a_2443_; 
v_a_2443_ = lean_ctor_get(v___x_2442_, 0);
lean_inc(v_a_2443_);
lean_dec_ref_known(v___x_2442_, 1);
return v_a_2443_;
}
else
{
lean_object* v_a_2444_; size_t v___x_2445_; size_t v___x_2446_; 
v_a_2444_ = lean_ctor_get(v___x_2442_, 0);
lean_inc(v_a_2444_);
lean_dec_ref_known(v___x_2442_, 1);
v___x_2445_ = ((size_t)1ULL);
v___x_2446_ = lean_usize_add(v_i_2438_, v___x_2445_);
v_i_2438_ = v___x_2446_;
v_b_2439_ = v_a_2444_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__11___boxed(lean_object* v_as_2448_, lean_object* v_sz_2449_, lean_object* v_i_2450_, lean_object* v_b_2451_){
_start:
{
size_t v_sz_boxed_2452_; size_t v_i_boxed_2453_; lean_object* v_res_2454_; 
v_sz_boxed_2452_ = lean_unbox_usize(v_sz_2449_);
lean_dec(v_sz_2449_);
v_i_boxed_2453_ = lean_unbox_usize(v_i_2450_);
lean_dec(v_i_2450_);
v_res_2454_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__11(v_as_2448_, v_sz_boxed_2452_, v_i_boxed_2453_, v_b_2451_);
lean_dec_ref(v_as_2448_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___redArg(lean_object* v_a_2455_, lean_object* v_x_2456_){
_start:
{
if (lean_obj_tag(v_x_2456_) == 0)
{
return v_x_2456_;
}
else
{
lean_object* v_key_2457_; lean_object* v_value_2458_; lean_object* v_tail_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2468_; 
v_key_2457_ = lean_ctor_get(v_x_2456_, 0);
v_value_2458_ = lean_ctor_get(v_x_2456_, 1);
v_tail_2459_ = lean_ctor_get(v_x_2456_, 2);
v_isSharedCheck_2468_ = !lean_is_exclusive(v_x_2456_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2461_ = v_x_2456_;
v_isShared_2462_ = v_isSharedCheck_2468_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_tail_2459_);
lean_inc(v_value_2458_);
lean_inc(v_key_2457_);
lean_dec(v_x_2456_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2468_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
uint8_t v___x_2463_; 
v___x_2463_ = l_Lean_Lsp_instBEqRefIdent_beq(v_key_2457_, v_a_2455_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2464_; lean_object* v___x_2466_; 
v___x_2464_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___redArg(v_a_2455_, v_tail_2459_);
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 2, v___x_2464_);
v___x_2466_ = v___x_2461_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_key_2457_);
lean_ctor_set(v_reuseFailAlloc_2467_, 1, v_value_2458_);
lean_ctor_set(v_reuseFailAlloc_2467_, 2, v___x_2464_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
else
{
lean_del_object(v___x_2461_);
lean_dec(v_value_2458_);
lean_dec(v_key_2457_);
return v_tail_2459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___redArg___boxed(lean_object* v_a_2469_, lean_object* v_x_2470_){
_start:
{
lean_object* v_res_2471_; 
v_res_2471_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___redArg(v_a_2469_, v_x_2470_);
lean_dec_ref(v_a_2469_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1___redArg(lean_object* v_m_2472_, lean_object* v_a_2473_){
_start:
{
lean_object* v_size_2474_; lean_object* v_buckets_2475_; lean_object* v___x_2476_; uint64_t v___x_2477_; uint64_t v___x_2478_; uint64_t v___x_2479_; uint64_t v_fold_2480_; uint64_t v___x_2481_; uint64_t v___x_2482_; uint64_t v___x_2483_; size_t v___x_2484_; size_t v___x_2485_; size_t v___x_2486_; size_t v___x_2487_; size_t v___x_2488_; lean_object* v_bkt_2489_; uint8_t v___x_2490_; 
v_size_2474_ = lean_ctor_get(v_m_2472_, 0);
v_buckets_2475_ = lean_ctor_get(v_m_2472_, 1);
v___x_2476_ = lean_array_get_size(v_buckets_2475_);
v___x_2477_ = l_Lean_Lsp_instHashableRefIdent_hash(v_a_2473_);
v___x_2478_ = 32ULL;
v___x_2479_ = lean_uint64_shift_right(v___x_2477_, v___x_2478_);
v_fold_2480_ = lean_uint64_xor(v___x_2477_, v___x_2479_);
v___x_2481_ = 16ULL;
v___x_2482_ = lean_uint64_shift_right(v_fold_2480_, v___x_2481_);
v___x_2483_ = lean_uint64_xor(v_fold_2480_, v___x_2482_);
v___x_2484_ = lean_uint64_to_usize(v___x_2483_);
v___x_2485_ = lean_usize_of_nat(v___x_2476_);
v___x_2486_ = ((size_t)1ULL);
v___x_2487_ = lean_usize_sub(v___x_2485_, v___x_2486_);
v___x_2488_ = lean_usize_land(v___x_2484_, v___x_2487_);
v_bkt_2489_ = lean_array_uget_borrowed(v_buckets_2475_, v___x_2488_);
v___x_2490_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg(v_a_2473_, v_bkt_2489_);
if (v___x_2490_ == 0)
{
return v_m_2472_;
}
else
{
lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2503_; 
lean_inc(v_bkt_2489_);
lean_inc_ref(v_buckets_2475_);
lean_inc(v_size_2474_);
v_isSharedCheck_2503_ = !lean_is_exclusive(v_m_2472_);
if (v_isSharedCheck_2503_ == 0)
{
lean_object* v_unused_2504_; lean_object* v_unused_2505_; 
v_unused_2504_ = lean_ctor_get(v_m_2472_, 1);
lean_dec(v_unused_2504_);
v_unused_2505_ = lean_ctor_get(v_m_2472_, 0);
lean_dec(v_unused_2505_);
v___x_2492_ = v_m_2472_;
v_isShared_2493_ = v_isSharedCheck_2503_;
goto v_resetjp_2491_;
}
else
{
lean_dec(v_m_2472_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2503_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2494_; lean_object* v_buckets_x27_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2501_; 
v___x_2494_ = lean_box(0);
v_buckets_x27_2495_ = lean_array_uset(v_buckets_2475_, v___x_2488_, v___x_2494_);
v___x_2496_ = lean_unsigned_to_nat(1u);
v___x_2497_ = lean_nat_sub(v_size_2474_, v___x_2496_);
lean_dec(v_size_2474_);
v___x_2498_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___redArg(v_a_2473_, v_bkt_2489_);
v___x_2499_ = lean_array_uset(v_buckets_x27_2495_, v___x_2488_, v___x_2498_);
if (v_isShared_2493_ == 0)
{
lean_ctor_set(v___x_2492_, 1, v___x_2499_);
lean_ctor_set(v___x_2492_, 0, v___x_2497_);
v___x_2501_ = v___x_2492_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v___x_2497_);
lean_ctor_set(v_reuseFailAlloc_2502_, 1, v___x_2499_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
return v___x_2501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1___redArg___boxed(lean_object* v_m_2506_, lean_object* v_a_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1___redArg(v_m_2506_, v_a_2507_);
lean_dec_ref(v_a_2507_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2___redArg(lean_object* v_m_2509_, lean_object* v_a_2510_, lean_object* v_b_2511_){
_start:
{
lean_object* v_size_2512_; lean_object* v_buckets_2513_; lean_object* v___x_2514_; uint64_t v___x_2515_; uint64_t v___x_2516_; uint64_t v___x_2517_; uint64_t v_fold_2518_; uint64_t v___x_2519_; uint64_t v___x_2520_; uint64_t v___x_2521_; size_t v___x_2522_; size_t v___x_2523_; size_t v___x_2524_; size_t v___x_2525_; size_t v___x_2526_; lean_object* v_bkt_2527_; uint8_t v___x_2528_; 
v_size_2512_ = lean_ctor_get(v_m_2509_, 0);
v_buckets_2513_ = lean_ctor_get(v_m_2509_, 1);
v___x_2514_ = lean_array_get_size(v_buckets_2513_);
v___x_2515_ = l_Lean_Lsp_instHashableRefIdent_hash(v_a_2510_);
v___x_2516_ = 32ULL;
v___x_2517_ = lean_uint64_shift_right(v___x_2515_, v___x_2516_);
v_fold_2518_ = lean_uint64_xor(v___x_2515_, v___x_2517_);
v___x_2519_ = 16ULL;
v___x_2520_ = lean_uint64_shift_right(v_fold_2518_, v___x_2519_);
v___x_2521_ = lean_uint64_xor(v_fold_2518_, v___x_2520_);
v___x_2522_ = lean_uint64_to_usize(v___x_2521_);
v___x_2523_ = lean_usize_of_nat(v___x_2514_);
v___x_2524_ = ((size_t)1ULL);
v___x_2525_ = lean_usize_sub(v___x_2523_, v___x_2524_);
v___x_2526_ = lean_usize_land(v___x_2522_, v___x_2525_);
v_bkt_2527_ = lean_array_uget_borrowed(v_buckets_2513_, v___x_2526_);
v___x_2528_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0_spec__0___redArg(v_a_2510_, v_bkt_2527_);
if (v___x_2528_ == 0)
{
lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2549_; 
lean_inc_ref(v_buckets_2513_);
lean_inc(v_size_2512_);
v_isSharedCheck_2549_ = !lean_is_exclusive(v_m_2509_);
if (v_isSharedCheck_2549_ == 0)
{
lean_object* v_unused_2550_; lean_object* v_unused_2551_; 
v_unused_2550_ = lean_ctor_get(v_m_2509_, 1);
lean_dec(v_unused_2550_);
v_unused_2551_ = lean_ctor_get(v_m_2509_, 0);
lean_dec(v_unused_2551_);
v___x_2530_ = v_m_2509_;
v_isShared_2531_ = v_isSharedCheck_2549_;
goto v_resetjp_2529_;
}
else
{
lean_dec(v_m_2509_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2549_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2532_; lean_object* v_size_x27_2533_; lean_object* v___x_2534_; lean_object* v_buckets_x27_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; uint8_t v___x_2541_; 
v___x_2532_ = lean_unsigned_to_nat(1u);
v_size_x27_2533_ = lean_nat_add(v_size_2512_, v___x_2532_);
lean_dec(v_size_2512_);
lean_inc(v_bkt_2527_);
v___x_2534_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2534_, 0, v_a_2510_);
lean_ctor_set(v___x_2534_, 1, v_b_2511_);
lean_ctor_set(v___x_2534_, 2, v_bkt_2527_);
v_buckets_x27_2535_ = lean_array_uset(v_buckets_2513_, v___x_2526_, v___x_2534_);
v___x_2536_ = lean_unsigned_to_nat(4u);
v___x_2537_ = lean_nat_mul(v_size_x27_2533_, v___x_2536_);
v___x_2538_ = lean_unsigned_to_nat(3u);
v___x_2539_ = lean_nat_div(v___x_2537_, v___x_2538_);
lean_dec(v___x_2537_);
v___x_2540_ = lean_array_get_size(v_buckets_x27_2535_);
v___x_2541_ = lean_nat_dec_le(v___x_2539_, v___x_2540_);
lean_dec(v___x_2539_);
if (v___x_2541_ == 0)
{
lean_object* v_val_2542_; lean_object* v___x_2544_; 
v_val_2542_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4___redArg(v_buckets_x27_2535_);
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 1, v_val_2542_);
lean_ctor_set(v___x_2530_, 0, v_size_x27_2533_);
v___x_2544_ = v___x_2530_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_size_x27_2533_);
lean_ctor_set(v_reuseFailAlloc_2545_, 1, v_val_2542_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
else
{
lean_object* v___x_2547_; 
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 1, v_buckets_x27_2535_);
lean_ctor_set(v___x_2530_, 0, v_size_x27_2533_);
v___x_2547_ = v___x_2530_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_size_x27_2533_);
lean_ctor_set(v_reuseFailAlloc_2548_, 1, v_buckets_x27_2535_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
else
{
lean_dec(v_b_2511_);
lean_dec_ref(v_a_2510_);
return v_m_2509_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0___redArg(lean_object* v_a_2552_, lean_object* v_fallback_2553_, lean_object* v_x_2554_){
_start:
{
if (lean_obj_tag(v_x_2554_) == 0)
{
lean_inc(v_fallback_2553_);
return v_fallback_2553_;
}
else
{
lean_object* v_key_2555_; lean_object* v_value_2556_; lean_object* v_tail_2557_; uint8_t v___x_2558_; 
v_key_2555_ = lean_ctor_get(v_x_2554_, 0);
v_value_2556_ = lean_ctor_get(v_x_2554_, 1);
v_tail_2557_ = lean_ctor_get(v_x_2554_, 2);
v___x_2558_ = l_Lean_Lsp_instBEqRefIdent_beq(v_key_2555_, v_a_2552_);
if (v___x_2558_ == 0)
{
v_x_2554_ = v_tail_2557_;
goto _start;
}
else
{
lean_inc(v_value_2556_);
return v_value_2556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0___redArg___boxed(lean_object* v_a_2560_, lean_object* v_fallback_2561_, lean_object* v_x_2562_){
_start:
{
lean_object* v_res_2563_; 
v_res_2563_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0___redArg(v_a_2560_, v_fallback_2561_, v_x_2562_);
lean_dec(v_x_2562_);
lean_dec(v_fallback_2561_);
lean_dec_ref(v_a_2560_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0___redArg(lean_object* v_m_2564_, lean_object* v_a_2565_, lean_object* v_fallback_2566_){
_start:
{
lean_object* v_buckets_2567_; lean_object* v___x_2568_; uint64_t v___x_2569_; uint64_t v___x_2570_; uint64_t v___x_2571_; uint64_t v_fold_2572_; uint64_t v___x_2573_; uint64_t v___x_2574_; uint64_t v___x_2575_; size_t v___x_2576_; size_t v___x_2577_; size_t v___x_2578_; size_t v___x_2579_; size_t v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v_buckets_2567_ = lean_ctor_get(v_m_2564_, 1);
v___x_2568_ = lean_array_get_size(v_buckets_2567_);
v___x_2569_ = l_Lean_Lsp_instHashableRefIdent_hash(v_a_2565_);
v___x_2570_ = 32ULL;
v___x_2571_ = lean_uint64_shift_right(v___x_2569_, v___x_2570_);
v_fold_2572_ = lean_uint64_xor(v___x_2569_, v___x_2571_);
v___x_2573_ = 16ULL;
v___x_2574_ = lean_uint64_shift_right(v_fold_2572_, v___x_2573_);
v___x_2575_ = lean_uint64_xor(v_fold_2572_, v___x_2574_);
v___x_2576_ = lean_uint64_to_usize(v___x_2575_);
v___x_2577_ = lean_usize_of_nat(v___x_2568_);
v___x_2578_ = ((size_t)1ULL);
v___x_2579_ = lean_usize_sub(v___x_2577_, v___x_2578_);
v___x_2580_ = lean_usize_land(v___x_2576_, v___x_2579_);
v___x_2581_ = lean_array_uget_borrowed(v_buckets_2567_, v___x_2580_);
v___x_2582_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0___redArg(v_a_2565_, v_fallback_2566_, v___x_2581_);
return v___x_2582_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0___redArg___boxed(lean_object* v_m_2583_, lean_object* v_a_2584_, lean_object* v_fallback_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0___redArg(v_m_2583_, v_a_2584_, v_fallback_2585_);
lean_dec(v_fallback_2585_);
lean_dec_ref(v_a_2584_);
lean_dec_ref(v_m_2583_);
return v_res_2586_;
}
}
static lean_object* _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2587_ = lean_box(0);
v___x_2588_ = lean_unsigned_to_nat(16u);
v___x_2589_ = lean_mk_array(v___x_2588_, v___x_2587_);
return v___x_2589_;
}
}
static lean_object* _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2590_ = lean_obj_once(&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__0, &l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__0_once, _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__0);
v___x_2591_ = lean_unsigned_to_nat(0u);
v___x_2592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
lean_ctor_set(v___x_2592_, 1, v___x_2590_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0(lean_object* v_idMap_2593_, lean_object* v_classesById_2594_, lean_object* v_id_2595_){
_start:
{
lean_object* v_representative_2596_; lean_object* v___x_2597_; lean_object* v_class_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v_class_2601_; lean_object* v___x_2602_; 
lean_inc_ref(v_id_2595_);
v_representative_2596_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg(v_idMap_2593_, v_id_2595_);
v___x_2597_ = lean_obj_once(&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1, &l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1_once, _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1);
v_class_2598_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0___redArg(v_classesById_2594_, v_representative_2596_, v___x_2597_);
v___x_2599_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1___redArg(v_classesById_2594_, v_representative_2596_);
v___x_2600_ = lean_box(0);
v_class_2601_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2___redArg(v_class_2598_, v_id_2595_, v___x_2600_);
v___x_2602_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3___redArg(v___x_2599_, v_representative_2596_, v_class_2601_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___boxed(lean_object* v_idMap_2603_, lean_object* v_classesById_2604_, lean_object* v_id_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0(v_idMap_2603_, v_classesById_2604_, v_id_2605_);
lean_dec_ref(v_idMap_2603_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9(lean_object* v_idMap_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_){
_start:
{
if (lean_obj_tag(v_a_2608_) == 0)
{
lean_object* v___x_2610_; 
v___x_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2610_, 0, v_a_2609_);
return v___x_2610_;
}
else
{
lean_object* v_key_2611_; lean_object* v_value_2612_; lean_object* v_tail_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v_key_2611_ = lean_ctor_get(v_a_2608_, 0);
lean_inc(v_key_2611_);
v_value_2612_ = lean_ctor_get(v_a_2608_, 1);
lean_inc(v_value_2612_);
v_tail_2613_ = lean_ctor_get(v_a_2608_, 2);
lean_inc(v_tail_2613_);
lean_dec_ref_known(v_a_2608_, 3);
v___x_2614_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0(v_idMap_2607_, v_a_2609_, v_key_2611_);
v___x_2615_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0(v_idMap_2607_, v___x_2614_, v_value_2612_);
v_a_2608_ = v_tail_2613_;
v_a_2609_ = v___x_2615_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___boxed(lean_object* v_idMap_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_){
_start:
{
lean_object* v_res_2620_; 
v_res_2620_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9(v_idMap_2617_, v_a_2618_, v_a_2619_);
lean_dec_ref(v_idMap_2617_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__10(lean_object* v_idMap_2621_, lean_object* v_as_2622_, size_t v_sz_2623_, size_t v_i_2624_, lean_object* v_b_2625_){
_start:
{
uint8_t v___x_2626_; 
v___x_2626_ = lean_usize_dec_lt(v_i_2624_, v_sz_2623_);
if (v___x_2626_ == 0)
{
return v_b_2625_;
}
else
{
lean_object* v_a_2627_; lean_object* v___x_2628_; 
v_a_2627_ = lean_array_uget_borrowed(v_as_2622_, v_i_2624_);
lean_inc(v_a_2627_);
v___x_2628_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9(v_idMap_2621_, v_a_2627_, v_b_2625_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2628_, 1);
return v_a_2629_;
}
else
{
lean_object* v_a_2630_; size_t v___x_2631_; size_t v___x_2632_; 
v_a_2630_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2630_);
lean_dec_ref_known(v___x_2628_, 1);
v___x_2631_ = ((size_t)1ULL);
v___x_2632_ = lean_usize_add(v_i_2624_, v___x_2631_);
v_i_2624_ = v___x_2632_;
v_b_2625_ = v_a_2630_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__10___boxed(lean_object* v_idMap_2634_, lean_object* v_as_2635_, lean_object* v_sz_2636_, lean_object* v_i_2637_, lean_object* v_b_2638_){
_start:
{
size_t v_sz_boxed_2639_; size_t v_i_boxed_2640_; lean_object* v_res_2641_; 
v_sz_boxed_2639_ = lean_unbox_usize(v_sz_2636_);
lean_dec(v_sz_2636_);
v_i_boxed_2640_ = lean_unbox_usize(v_i_2637_);
lean_dec(v_i_2637_);
v_res_2641_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__10(v_idMap_2634_, v_as_2635_, v_sz_boxed_2639_, v_i_boxed_2640_, v_b_2638_);
lean_dec_ref(v_as_2635_);
lean_dec_ref(v_idMap_2634_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives(lean_object* v_idMap_2642_){
_start:
{
lean_object* v_buckets_2643_; lean_object* v_classesById_2644_; size_t v_sz_2645_; size_t v___x_2646_; lean_object* v___x_2647_; lean_object* v_buckets_2648_; size_t v_sz_2649_; lean_object* v___x_2650_; 
v_buckets_2643_ = lean_ctor_get(v_idMap_2642_, 1);
v_classesById_2644_ = lean_obj_once(&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1, &l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1_once, _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1);
v_sz_2645_ = lean_array_size(v_buckets_2643_);
v___x_2646_ = ((size_t)0ULL);
v___x_2647_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__10(v_idMap_2642_, v_buckets_2643_, v_sz_2645_, v___x_2646_, v_classesById_2644_);
v_buckets_2648_ = lean_ctor_get(v___x_2647_, 1);
lean_inc_ref(v_buckets_2648_);
lean_dec_ref(v___x_2647_);
v_sz_2649_ = lean_array_size(v_buckets_2648_);
v___x_2650_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__11(v_buckets_2648_, v_sz_2649_, v___x_2646_, v_classesById_2644_);
lean_dec_ref(v_buckets_2648_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives___boxed(lean_object* v_idMap_2651_){
_start:
{
lean_object* v_res_2652_; 
v_res_2652_ = l___private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives(v_idMap_2651_);
lean_dec_ref(v_idMap_2651_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0(lean_object* v_00_u03b2_2653_, lean_object* v_m_2654_, lean_object* v_a_2655_, lean_object* v_fallback_2656_){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0___redArg(v_m_2654_, v_a_2655_, v_fallback_2656_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0___boxed(lean_object* v_00_u03b2_2658_, lean_object* v_m_2659_, lean_object* v_a_2660_, lean_object* v_fallback_2661_){
_start:
{
lean_object* v_res_2662_; 
v_res_2662_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0(v_00_u03b2_2658_, v_m_2659_, v_a_2660_, v_fallback_2661_);
lean_dec(v_fallback_2661_);
lean_dec_ref(v_a_2660_);
lean_dec_ref(v_m_2659_);
return v_res_2662_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1(lean_object* v_00_u03b2_2663_, lean_object* v_m_2664_, lean_object* v_a_2665_){
_start:
{
lean_object* v___x_2666_; 
v___x_2666_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1___redArg(v_m_2664_, v_a_2665_);
return v___x_2666_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1___boxed(lean_object* v_00_u03b2_2667_, lean_object* v_m_2668_, lean_object* v_a_2669_){
_start:
{
lean_object* v_res_2670_; 
v_res_2670_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1(v_00_u03b2_2667_, v_m_2668_, v_a_2669_);
lean_dec_ref(v_a_2669_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2(lean_object* v_00_u03b2_2671_, lean_object* v_m_2672_, lean_object* v_a_2673_, lean_object* v_b_2674_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2___redArg(v_m_2672_, v_a_2673_, v_b_2674_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3(lean_object* v_00_u03b2_2676_, lean_object* v_m_2677_, lean_object* v_a_2678_, lean_object* v_b_2679_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3___redArg(v_m_2677_, v_a_2678_, v_b_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0(lean_object* v_00_u03b2_2681_, lean_object* v_a_2682_, lean_object* v_fallback_2683_, lean_object* v_x_2684_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0___redArg(v_a_2682_, v_fallback_2683_, v_x_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2686_, lean_object* v_a_2687_, lean_object* v_fallback_2688_, lean_object* v_x_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__0_spec__0(v_00_u03b2_2686_, v_a_2687_, v_fallback_2688_, v_x_2689_);
lean_dec(v_x_2689_);
lean_dec(v_fallback_2688_);
lean_dec_ref(v_a_2687_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2(lean_object* v_00_u03b2_2691_, lean_object* v_a_2692_, lean_object* v_x_2693_){
_start:
{
lean_object* v___x_2694_; 
v___x_2694_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___redArg(v_a_2692_, v_x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2695_, lean_object* v_a_2696_, lean_object* v_x_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__1_spec__2(v_00_u03b2_2695_, v_a_2696_, v_x_2697_);
lean_dec_ref(v_a_2696_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4(lean_object* v_00_u03b2_2699_, lean_object* v_data_2700_){
_start:
{
lean_object* v___x_2701_; 
v___x_2701_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4___redArg(v_data_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3_spec__6(lean_object* v_00_u03b2_2702_, lean_object* v_a_2703_, lean_object* v_b_2704_, lean_object* v_x_2705_){
_start:
{
lean_object* v___x_2706_; 
v___x_2706_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3_spec__6___redArg(v_a_2703_, v_b_2704_, v_x_2705_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_2707_, lean_object* v_i_2708_, lean_object* v_source_2709_, lean_object* v_target_2710_){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5___redArg(v_i_2708_, v_source_2709_, v_target_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5_spec__15(lean_object* v_00_u03b2_2712_, lean_object* v_x_2713_, lean_object* v_x_2714_){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__2_spec__4_spec__5_spec__15___redArg(v_x_2713_, v_x_2714_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_insertIdMap(lean_object* v_id_2716_, lean_object* v_baseId_2717_, lean_object* v___y_2718_){
_start:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; uint8_t v___x_2721_; 
v___x_2719_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg(v___y_2718_, v_id_2716_);
v___x_2720_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg(v___y_2718_, v_baseId_2717_);
v___x_2721_ = l_Lean_Lsp_instBEqRefIdent_beq(v___x_2720_, v___x_2719_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2722_ = lean_box(0);
v___x_2723_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__3___redArg(v___y_2718_, v___x_2719_, v___x_2720_);
v___x_2724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2722_);
lean_ctor_set(v___x_2724_, 1, v___x_2723_);
return v___x_2724_;
}
else
{
lean_object* v___x_2725_; lean_object* v___x_2726_; 
lean_dec_ref(v___x_2720_);
lean_dec_ref(v___x_2719_);
v___x_2725_ = lean_box(0);
v___x_2726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2725_);
lean_ctor_set(v___x_2726_, 1, v___y_2718_);
return v___x_2726_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__1(lean_object* v_ci_2727_, lean_object* v_info_2728_, lean_object* v_x_2729_, lean_object* v___y_2730_){
_start:
{
if (lean_obj_tag(v_info_2728_) == 11)
{
lean_object* v_toCommandContextInfo_2731_; lean_object* v_i_2732_; lean_object* v_env_2733_; lean_object* v___x_2734_; lean_object* v_mainModule_2735_; lean_object* v_id_2736_; lean_object* v_baseId_2737_; uint8_t v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v_toCommandContextInfo_2731_ = lean_ctor_get(v_ci_2727_, 0);
v_i_2732_ = lean_ctor_get(v_info_2728_, 0);
lean_inc_ref(v_i_2732_);
lean_dec_ref_known(v_info_2728_, 1);
v_env_2733_ = lean_ctor_get(v_toCommandContextInfo_2731_, 0);
v___x_2734_ = l_Lean_Environment_header(v_env_2733_);
v_mainModule_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_mainModule_2735_);
lean_dec_ref(v___x_2734_);
v_id_2736_ = lean_ctor_get(v_i_2732_, 1);
lean_inc(v_id_2736_);
v_baseId_2737_ = lean_ctor_get(v_i_2732_, 2);
lean_inc(v_baseId_2737_);
lean_dec_ref(v_i_2732_);
v___x_2738_ = 1;
v___x_2739_ = l_Lean_Name_toString(v_mainModule_2735_, v___x_2738_);
v___x_2740_ = l_Lean_Name_toString(v_id_2736_, v___x_2738_);
lean_inc_ref(v___x_2739_);
v___x_2741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2739_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
v___x_2742_ = l_Lean_Name_toString(v_baseId_2737_, v___x_2738_);
v___x_2743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2739_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
v___x_2744_ = l___private_Lean_Server_References_0__Lean_Server_combineIdents_insertIdMap(v___x_2741_, v___x_2743_, v___y_2730_);
return v___x_2744_;
}
else
{
lean_object* v___x_2745_; lean_object* v___x_2746_; 
lean_dec_ref(v_info_2728_);
v___x_2745_ = lean_box(0);
v___x_2746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2745_);
lean_ctor_set(v___x_2746_, 1, v___y_2730_);
return v___x_2746_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__1___boxed(lean_object* v_ci_2747_, lean_object* v_info_2748_, lean_object* v_x_2749_, lean_object* v___y_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__1(v_ci_2747_, v_info_2748_, v_x_2749_, v___y_2750_);
lean_dec_ref(v_x_2749_);
lean_dec_ref(v_ci_2747_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__0(lean_object* v_x_2752_, lean_object* v_x_2753_, lean_object* v_x_2754_, lean_object* v___y_2755_){
_start:
{
uint8_t v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2756_ = 1;
v___x_2757_ = lean_box(v___x_2756_);
v___x_2758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2757_);
lean_ctor_set(v___x_2758_, 1, v___y_2755_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__0___boxed(lean_object* v_x_2759_, lean_object* v_x_2760_, lean_object* v_x_2761_, lean_object* v___y_2762_){
_start:
{
lean_object* v_res_2763_; 
v_res_2763_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___lam__0(v_x_2759_, v_x_2760_, v_x_2761_, v___y_2762_);
lean_dec_ref(v_x_2761_);
lean_dec_ref(v_x_2760_);
lean_dec_ref(v_x_2759_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0___lam__0(lean_object* v_postNode_2764_, lean_object* v_ci_2765_, lean_object* v_i_2766_, lean_object* v_cs_2767_, lean_object* v_x_2768_, lean_object* v___y_2769_){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = lean_apply_4(v_postNode_2764_, v_ci_2765_, v_i_2766_, v_cs_2767_, v___y_2769_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0___lam__0___boxed(lean_object* v_postNode_2771_, lean_object* v_ci_2772_, lean_object* v_i_2773_, lean_object* v_cs_2774_, lean_object* v_x_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0___lam__0(v_postNode_2771_, v_ci_2772_, v_i_2773_, v_cs_2774_, v_x_2775_, v___y_2776_);
lean_dec(v_x_2775_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_2778_, lean_object* v___y_2779_){
_start:
{
lean_object* v___f_2780_; lean_object* v___f_2781_; lean_object* v___f_2782_; lean_object* v___f_2783_; lean_object* v___f_2784_; lean_object* v___f_2785_; lean_object* v___f_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___f_2790_; lean_object* v___f_2791_; lean_object* v___f_2792_; lean_object* v___f_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_3750__overap_2802_; lean_object* v___x_2803_; 
v___f_2780_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__0));
v___f_2781_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__1));
v___f_2782_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__2));
v___f_2783_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__3));
v___f_2784_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__4));
v___f_2785_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__5));
v___f_2786_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0_spec__1___redArg___closed__6));
v___x_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___f_2780_);
lean_ctor_set(v___x_2787_, 1, v___f_2781_);
v___x_2788_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
lean_ctor_set(v___x_2788_, 1, v___f_2782_);
lean_ctor_set(v___x_2788_, 2, v___f_2783_);
lean_ctor_set(v___x_2788_, 3, v___f_2784_);
lean_ctor_set(v___x_2788_, 4, v___f_2785_);
v___x_2789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2789_, 0, v___x_2788_);
lean_ctor_set(v___x_2789_, 1, v___f_2786_);
lean_inc_ref_n(v___x_2789_, 6);
v___f_2790_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2790_, 0, v___x_2789_);
v___f_2791_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2791_, 0, v___x_2789_);
v___f_2792_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2792_, 0, v___x_2789_);
v___f_2793_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2793_, 0, v___x_2789_);
v___x_2794_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2794_, 0, lean_box(0));
lean_closure_set(v___x_2794_, 1, lean_box(0));
lean_closure_set(v___x_2794_, 2, v___x_2789_);
v___x_2795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2794_);
lean_ctor_set(v___x_2795_, 1, v___f_2790_);
v___x_2796_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2796_, 0, lean_box(0));
lean_closure_set(v___x_2796_, 1, lean_box(0));
lean_closure_set(v___x_2796_, 2, v___x_2789_);
v___x_2797_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2795_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
lean_ctor_set(v___x_2797_, 2, v___f_2791_);
lean_ctor_set(v___x_2797_, 3, v___f_2792_);
lean_ctor_set(v___x_2797_, 4, v___f_2793_);
v___x_2798_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2798_, 0, lean_box(0));
lean_closure_set(v___x_2798_, 1, lean_box(0));
lean_closure_set(v___x_2798_, 2, v___x_2789_);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2797_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
v___x_2800_ = lean_box(0);
v___x_2801_ = l_instInhabitedOfMonad___redArg(v___x_2799_, v___x_2800_);
v___x_3750__overap_2802_ = lean_panic_fn_borrowed(v___x_2801_, v_msg_2778_);
lean_dec(v___x_2801_);
v___x_2803_ = lean_apply_1(v___x_3750__overap_2802_, v___y_2779_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0___redArg(lean_object* v_preNode_2804_, lean_object* v_postNode_2805_, lean_object* v_x_2806_, lean_object* v_x_2807_, lean_object* v___y_2808_){
_start:
{
switch(lean_obj_tag(v_x_2807_))
{
case 0:
{
lean_object* v_i_2809_; lean_object* v_t_2810_; lean_object* v___x_2811_; 
v_i_2809_ = lean_ctor_get(v_x_2807_, 0);
lean_inc_ref(v_i_2809_);
v_t_2810_ = lean_ctor_get(v_x_2807_, 1);
lean_inc_ref(v_t_2810_);
lean_dec_ref_known(v_x_2807_, 2);
v___x_2811_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_2809_, v_x_2806_);
v_x_2806_ = v___x_2811_;
v_x_2807_ = v_t_2810_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_2806_) == 0)
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
lean_dec_ref_known(v_x_2807_, 2);
lean_dec_ref(v_postNode_2805_);
lean_dec_ref(v_preNode_2804_);
v___x_2813_ = lean_obj_once(&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__3, &l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__3_once, _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_findReferences_spec__0_spec__0___redArg___closed__3);
v___x_2814_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__1___redArg(v___x_2813_, v___y_2808_);
return v___x_2814_;
}
else
{
lean_object* v_i_2815_; lean_object* v_children_2816_; lean_object* v_val_2817_; lean_object* v___x_2818_; lean_object* v_fst_2819_; uint8_t v___x_2820_; 
v_i_2815_ = lean_ctor_get(v_x_2807_, 0);
lean_inc_ref_n(v_i_2815_, 2);
v_children_2816_ = lean_ctor_get(v_x_2807_, 1);
lean_inc_ref_n(v_children_2816_, 2);
lean_dec_ref_known(v_x_2807_, 2);
v_val_2817_ = lean_ctor_get(v_x_2806_, 0);
lean_inc_n(v_val_2817_, 2);
lean_inc_ref(v_preNode_2804_);
v___x_2818_ = lean_apply_4(v_preNode_2804_, v_val_2817_, v_i_2815_, v_children_2816_, v___y_2808_);
v_fst_2819_ = lean_ctor_get(v___x_2818_, 0);
lean_inc(v_fst_2819_);
v___x_2820_ = lean_unbox(v_fst_2819_);
lean_dec(v_fst_2819_);
if (v___x_2820_ == 0)
{
lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2839_; 
lean_dec_ref(v_preNode_2804_);
v_isSharedCheck_2839_ = !lean_is_exclusive(v_x_2806_);
if (v_isSharedCheck_2839_ == 0)
{
lean_object* v_unused_2840_; 
v_unused_2840_ = lean_ctor_get(v_x_2806_, 0);
lean_dec(v_unused_2840_);
v___x_2822_ = v_x_2806_;
v_isShared_2823_ = v_isSharedCheck_2839_;
goto v_resetjp_2821_;
}
else
{
lean_dec(v_x_2806_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2839_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v_snd_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v_fst_2827_; lean_object* v_snd_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2838_; 
v_snd_2824_ = lean_ctor_get(v___x_2818_, 1);
lean_inc(v_snd_2824_);
lean_dec_ref(v___x_2818_);
v___x_2825_ = lean_box(0);
v___x_2826_ = lean_apply_5(v_postNode_2805_, v_val_2817_, v_i_2815_, v_children_2816_, v___x_2825_, v_snd_2824_);
v_fst_2827_ = lean_ctor_get(v___x_2826_, 0);
v_snd_2828_ = lean_ctor_get(v___x_2826_, 1);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2826_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2830_ = v___x_2826_;
v_isShared_2831_ = v_isSharedCheck_2838_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_snd_2828_);
lean_inc(v_fst_2827_);
lean_dec(v___x_2826_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2838_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2823_ == 0)
{
lean_ctor_set(v___x_2822_, 0, v_fst_2827_);
v___x_2833_ = v___x_2822_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_fst_2827_);
v___x_2833_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
lean_object* v___x_2835_; 
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 0, v___x_2833_);
v___x_2835_ = v___x_2830_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v___x_2833_);
lean_ctor_set(v_reuseFailAlloc_2836_, 1, v_snd_2828_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
}
else
{
lean_object* v_snd_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v_fst_2846_; lean_object* v_snd_2847_; lean_object* v___x_2848_; lean_object* v_fst_2849_; lean_object* v_snd_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2858_; 
v_snd_2841_ = lean_ctor_get(v___x_2818_, 1);
lean_inc(v_snd_2841_);
lean_dec_ref(v___x_2818_);
v___x_2842_ = l_Lean_Elab_Info_updateContext_x3f(v_x_2806_, v_i_2815_);
v___x_2843_ = l_Lean_PersistentArray_toList___redArg(v_children_2816_);
v___x_2844_ = lean_box(0);
lean_inc_ref(v_postNode_2805_);
v___x_2845_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__2___redArg(v_preNode_2804_, v_postNode_2805_, v___x_2842_, v___x_2843_, v___x_2844_, v_snd_2841_);
v_fst_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_fst_2846_);
v_snd_2847_ = lean_ctor_get(v___x_2845_, 1);
lean_inc(v_snd_2847_);
lean_dec_ref(v___x_2845_);
v___x_2848_ = lean_apply_5(v_postNode_2805_, v_val_2817_, v_i_2815_, v_children_2816_, v_fst_2846_, v_snd_2847_);
v_fst_2849_ = lean_ctor_get(v___x_2848_, 0);
v_snd_2850_ = lean_ctor_get(v___x_2848_, 1);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2852_ = v___x_2848_;
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_snd_2850_);
lean_inc(v_fst_2849_);
lean_dec(v___x_2848_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2854_; lean_object* v___x_2856_; 
v___x_2854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2854_, 0, v_fst_2849_);
if (v_isShared_2853_ == 0)
{
lean_ctor_set(v___x_2852_, 0, v___x_2854_);
v___x_2856_ = v___x_2852_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v___x_2854_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v_snd_2850_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
}
default: 
{
lean_object* v___x_2859_; lean_object* v___x_2860_; 
lean_dec_ref_known(v_x_2807_, 1);
lean_dec(v_x_2806_);
lean_dec_ref(v_postNode_2805_);
lean_dec_ref(v_preNode_2804_);
v___x_2859_ = lean_box(0);
v___x_2860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2859_);
lean_ctor_set(v___x_2860_, 1, v___y_2808_);
return v___x_2860_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__2___redArg(lean_object* v_preNode_2861_, lean_object* v_postNode_2862_, lean_object* v___x_2863_, lean_object* v_x_2864_, lean_object* v_x_2865_, lean_object* v___y_2866_){
_start:
{
if (lean_obj_tag(v_x_2864_) == 0)
{
lean_object* v___x_2867_; lean_object* v___x_2868_; 
lean_dec(v___x_2863_);
lean_dec_ref(v_postNode_2862_);
lean_dec_ref(v_preNode_2861_);
v___x_2867_ = l_List_reverse___redArg(v_x_2865_);
v___x_2868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
lean_ctor_set(v___x_2868_, 1, v___y_2866_);
return v___x_2868_;
}
else
{
lean_object* v_head_2869_; lean_object* v_tail_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2881_; 
v_head_2869_ = lean_ctor_get(v_x_2864_, 0);
v_tail_2870_ = lean_ctor_get(v_x_2864_, 1);
v_isSharedCheck_2881_ = !lean_is_exclusive(v_x_2864_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2872_ = v_x_2864_;
v_isShared_2873_ = v_isSharedCheck_2881_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_tail_2870_);
lean_inc(v_head_2869_);
lean_dec(v_x_2864_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2881_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2874_; lean_object* v_fst_2875_; lean_object* v_snd_2876_; lean_object* v___x_2878_; 
lean_inc(v___x_2863_);
lean_inc_ref(v_postNode_2862_);
lean_inc_ref(v_preNode_2861_);
v___x_2874_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0___redArg(v_preNode_2861_, v_postNode_2862_, v___x_2863_, v_head_2869_, v___y_2866_);
v_fst_2875_ = lean_ctor_get(v___x_2874_, 0);
lean_inc(v_fst_2875_);
v_snd_2876_ = lean_ctor_get(v___x_2874_, 1);
lean_inc(v_snd_2876_);
lean_dec_ref(v___x_2874_);
if (v_isShared_2873_ == 0)
{
lean_ctor_set(v___x_2872_, 1, v_x_2865_);
lean_ctor_set(v___x_2872_, 0, v_fst_2875_);
v___x_2878_ = v___x_2872_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_fst_2875_);
lean_ctor_set(v_reuseFailAlloc_2880_, 1, v_x_2865_);
v___x_2878_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
v_x_2864_ = v_tail_2870_;
v_x_2865_ = v___x_2878_;
v___y_2866_ = v_snd_2876_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0(lean_object* v_preNode_2882_, lean_object* v_postNode_2883_, lean_object* v_ctx_x3f_2884_, lean_object* v_t_2885_, lean_object* v___y_2886_){
_start:
{
lean_object* v___f_2887_; lean_object* v___x_2888_; lean_object* v_snd_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2897_; 
v___f_2887_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2887_, 0, v_postNode_2883_);
v___x_2888_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0___redArg(v_preNode_2882_, v___f_2887_, v_ctx_x3f_2884_, v_t_2885_, v___y_2886_);
v_snd_2889_ = lean_ctor_get(v___x_2888_, 1);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2897_ == 0)
{
lean_object* v_unused_2898_; 
v_unused_2898_ = lean_ctor_get(v___x_2888_, 0);
lean_dec(v_unused_2898_);
v___x_2891_ = v___x_2888_;
v_isShared_2892_ = v_isSharedCheck_2897_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_snd_2889_);
lean_dec(v___x_2888_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2897_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2893_; lean_object* v___x_2895_; 
v___x_2893_ = lean_box(0);
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 0, v___x_2893_);
v___x_2895_ = v___x_2891_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v___x_2893_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v_snd_2889_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3(lean_object* v_as_2901_, size_t v_i_2902_, size_t v_stop_2903_, lean_object* v_b_2904_, lean_object* v___y_2905_){
_start:
{
uint8_t v___x_2906_; 
v___x_2906_ = lean_usize_dec_eq(v_i_2902_, v_stop_2903_);
if (v___x_2906_ == 0)
{
lean_object* v___f_2907_; lean_object* v___f_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v_fst_2912_; lean_object* v_snd_2913_; size_t v___x_2914_; size_t v___x_2915_; 
v___f_2907_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___closed__0));
v___f_2908_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___closed__1));
v___x_2909_ = lean_array_uget_borrowed(v_as_2901_, v_i_2902_);
v___x_2910_ = lean_box(0);
lean_inc(v___x_2909_);
v___x_2911_ = l_Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0(v___f_2907_, v___f_2908_, v___x_2910_, v___x_2909_, v___y_2905_);
v_fst_2912_ = lean_ctor_get(v___x_2911_, 0);
lean_inc(v_fst_2912_);
v_snd_2913_ = lean_ctor_get(v___x_2911_, 1);
lean_inc(v_snd_2913_);
lean_dec_ref(v___x_2911_);
v___x_2914_ = ((size_t)1ULL);
v___x_2915_ = lean_usize_add(v_i_2902_, v___x_2914_);
v_i_2902_ = v___x_2915_;
v_b_2904_ = v_fst_2912_;
v___y_2905_ = v_snd_2913_;
goto _start;
}
else
{
lean_object* v___x_2917_; 
v___x_2917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2917_, 0, v_b_2904_);
lean_ctor_set(v___x_2917_, 1, v___y_2905_);
return v___x_2917_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3___boxed(lean_object* v_as_2918_, lean_object* v_i_2919_, lean_object* v_stop_2920_, lean_object* v_b_2921_, lean_object* v___y_2922_){
_start:
{
size_t v_i_boxed_2923_; size_t v_stop_boxed_2924_; lean_object* v_res_2925_; 
v_i_boxed_2923_ = lean_unbox_usize(v_i_2919_);
lean_dec(v_i_2919_);
v_stop_boxed_2924_ = lean_unbox_usize(v_stop_2920_);
lean_dec(v_stop_2920_);
v_res_2925_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3(v_as_2918_, v_i_boxed_2923_, v_stop_boxed_2924_, v_b_2921_, v___y_2922_);
lean_dec_ref(v_as_2918_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2___redArg(lean_object* v_a_2926_, lean_object* v_x_2927_){
_start:
{
if (lean_obj_tag(v_x_2927_) == 0)
{
lean_object* v___x_2928_; 
v___x_2928_ = lean_box(0);
return v___x_2928_;
}
else
{
lean_object* v_key_2929_; lean_object* v_value_2930_; lean_object* v_tail_2931_; uint8_t v___x_2932_; 
v_key_2929_ = lean_ctor_get(v_x_2927_, 0);
v_value_2930_ = lean_ctor_get(v_x_2927_, 1);
v_tail_2931_ = lean_ctor_get(v_x_2927_, 2);
v___x_2932_ = l_Lean_Lsp_instBEqRange_beq(v_key_2929_, v_a_2926_);
if (v___x_2932_ == 0)
{
v_x_2927_ = v_tail_2931_;
goto _start;
}
else
{
lean_object* v___x_2934_; 
lean_inc(v_value_2930_);
v___x_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2934_, 0, v_value_2930_);
return v___x_2934_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2___redArg___boxed(lean_object* v_a_2935_, lean_object* v_x_2936_){
_start:
{
lean_object* v_res_2937_; 
v_res_2937_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2___redArg(v_a_2935_, v_x_2936_);
lean_dec(v_x_2936_);
lean_dec_ref(v_a_2935_);
return v_res_2937_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1___redArg(lean_object* v_m_2938_, lean_object* v_a_2939_){
_start:
{
lean_object* v_buckets_2940_; lean_object* v___x_2941_; uint64_t v___x_2942_; uint64_t v___x_2943_; uint64_t v___x_2944_; uint64_t v_fold_2945_; uint64_t v___x_2946_; uint64_t v___x_2947_; uint64_t v___x_2948_; size_t v___x_2949_; size_t v___x_2950_; size_t v___x_2951_; size_t v___x_2952_; size_t v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v_buckets_2940_ = lean_ctor_get(v_m_2938_, 1);
v___x_2941_ = lean_array_get_size(v_buckets_2940_);
v___x_2942_ = l_Lean_Lsp_instHashableRange_hash(v_a_2939_);
v___x_2943_ = 32ULL;
v___x_2944_ = lean_uint64_shift_right(v___x_2942_, v___x_2943_);
v_fold_2945_ = lean_uint64_xor(v___x_2942_, v___x_2944_);
v___x_2946_ = 16ULL;
v___x_2947_ = lean_uint64_shift_right(v_fold_2945_, v___x_2946_);
v___x_2948_ = lean_uint64_xor(v_fold_2945_, v___x_2947_);
v___x_2949_ = lean_uint64_to_usize(v___x_2948_);
v___x_2950_ = lean_usize_of_nat(v___x_2941_);
v___x_2951_ = ((size_t)1ULL);
v___x_2952_ = lean_usize_sub(v___x_2950_, v___x_2951_);
v___x_2953_ = lean_usize_land(v___x_2949_, v___x_2952_);
v___x_2954_ = lean_array_uget_borrowed(v_buckets_2940_, v___x_2953_);
v___x_2955_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2___redArg(v_a_2939_, v___x_2954_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1___redArg___boxed(lean_object* v_m_2956_, lean_object* v_a_2957_){
_start:
{
lean_object* v_res_2958_; 
v_res_2958_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1___redArg(v_m_2956_, v_a_2957_);
lean_dec_ref(v_a_2957_);
lean_dec_ref(v_m_2956_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__2(lean_object* v_posMap_2959_, lean_object* v_as_2960_, size_t v_sz_2961_, size_t v_i_2962_, lean_object* v_b_2963_, lean_object* v___y_2964_){
_start:
{
lean_object* v_a_2966_; lean_object* v_snd_2967_; uint8_t v___x_2971_; 
v___x_2971_ = lean_usize_dec_lt(v_i_2962_, v_sz_2961_);
if (v___x_2971_ == 0)
{
lean_object* v___x_2972_; 
v___x_2972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2972_, 0, v_b_2963_);
lean_ctor_set(v___x_2972_, 1, v___y_2964_);
return v___x_2972_;
}
else
{
lean_object* v_a_2973_; lean_object* v_ident_2974_; lean_object* v_range_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
v_a_2973_ = lean_array_uget_borrowed(v_as_2960_, v_i_2962_);
v_ident_2974_ = lean_ctor_get(v_a_2973_, 0);
v_range_2975_ = lean_ctor_get(v_a_2973_, 2);
v___x_2976_ = lean_box(0);
v___x_2977_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1___redArg(v_posMap_2959_, v_range_2975_);
if (lean_obj_tag(v___x_2977_) == 1)
{
lean_object* v_val_2978_; lean_object* v___x_2979_; lean_object* v_snd_2980_; 
v_val_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc(v_val_2978_);
lean_dec_ref_known(v___x_2977_, 1);
lean_inc_ref(v_ident_2974_);
v___x_2979_ = l___private_Lean_Server_References_0__Lean_Server_combineIdents_insertIdMap(v_val_2978_, v_ident_2974_, v___y_2964_);
v_snd_2980_ = lean_ctor_get(v___x_2979_, 1);
lean_inc(v_snd_2980_);
lean_dec_ref(v___x_2979_);
v_a_2966_ = v___x_2976_;
v_snd_2967_ = v_snd_2980_;
goto v___jp_2965_;
}
else
{
lean_dec(v___x_2977_);
v_a_2966_ = v___x_2976_;
v_snd_2967_ = v___y_2964_;
goto v___jp_2965_;
}
}
v___jp_2965_:
{
size_t v___x_2968_; size_t v___x_2969_; 
v___x_2968_ = ((size_t)1ULL);
v___x_2969_ = lean_usize_add(v_i_2962_, v___x_2968_);
v_i_2962_ = v___x_2969_;
v_b_2963_ = v_a_2966_;
v___y_2964_ = v_snd_2967_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__2___boxed(lean_object* v_posMap_2981_, lean_object* v_as_2982_, lean_object* v_sz_2983_, lean_object* v_i_2984_, lean_object* v_b_2985_, lean_object* v___y_2986_){
_start:
{
size_t v_sz_boxed_2987_; size_t v_i_boxed_2988_; lean_object* v_res_2989_; 
v_sz_boxed_2987_ = lean_unbox_usize(v_sz_2983_);
lean_dec(v_sz_2983_);
v_i_boxed_2988_ = lean_unbox_usize(v_i_2984_);
lean_dec(v_i_2984_);
v_res_2989_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__2(v_posMap_2981_, v_as_2982_, v_sz_boxed_2987_, v_i_boxed_2988_, v_b_2985_, v___y_2986_);
lean_dec_ref(v_as_2982_);
lean_dec_ref(v_posMap_2981_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap(lean_object* v_trees_2990_, lean_object* v_refs_2991_, lean_object* v_posMap_2992_){
_start:
{
lean_object* v___x_2993_; size_t v_sz_2994_; size_t v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v_snd_2999_; lean_object* v___x_3000_; uint8_t v___x_3001_; 
v___x_2993_ = lean_box(0);
v_sz_2994_ = lean_array_size(v_refs_2991_);
v___x_2995_ = ((size_t)0ULL);
v___x_2996_ = lean_unsigned_to_nat(0u);
v___x_2997_ = lean_obj_once(&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1, &l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1_once, _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives_spec__9___lam__0___closed__1);
v___x_2998_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__2(v_posMap_2992_, v_refs_2991_, v_sz_2994_, v___x_2995_, v___x_2993_, v___x_2997_);
v_snd_2999_ = lean_ctor_get(v___x_2998_, 1);
lean_inc(v_snd_2999_);
lean_dec_ref(v___x_2998_);
v___x_3000_ = lean_array_get_size(v_trees_2990_);
v___x_3001_ = lean_nat_dec_lt(v___x_2996_, v___x_3000_);
if (v___x_3001_ == 0)
{
return v_snd_2999_;
}
else
{
uint8_t v___x_3002_; 
v___x_3002_ = lean_nat_dec_le(v___x_3000_, v___x_3000_);
if (v___x_3002_ == 0)
{
if (v___x_3001_ == 0)
{
return v_snd_2999_;
}
else
{
size_t v___x_3003_; lean_object* v___x_3004_; lean_object* v_snd_3005_; 
v___x_3003_ = lean_usize_of_nat(v___x_3000_);
v___x_3004_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3(v_trees_2990_, v___x_2995_, v___x_3003_, v___x_2993_, v_snd_2999_);
v_snd_3005_ = lean_ctor_get(v___x_3004_, 1);
lean_inc(v_snd_3005_);
lean_dec_ref(v___x_3004_);
return v_snd_3005_;
}
}
else
{
size_t v___x_3006_; lean_object* v___x_3007_; lean_object* v_snd_3008_; 
v___x_3006_ = lean_usize_of_nat(v___x_3000_);
v___x_3007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__3(v_trees_2990_, v___x_2995_, v___x_3006_, v___x_2993_, v_snd_2999_);
v_snd_3008_ = lean_ctor_get(v___x_3007_, 1);
lean_inc(v_snd_3008_);
lean_dec_ref(v___x_3007_);
return v_snd_3008_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap___boxed(lean_object* v_trees_3009_, lean_object* v_refs_3010_, lean_object* v_posMap_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l___private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap(v_trees_3009_, v_refs_3010_, v_posMap_3011_);
lean_dec_ref(v_posMap_3011_);
lean_dec_ref(v_refs_3010_);
lean_dec_ref(v_trees_3009_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1(lean_object* v_00_u03b2_3013_, lean_object* v_m_3014_, lean_object* v_a_3015_){
_start:
{
lean_object* v___x_3016_; 
v___x_3016_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1___redArg(v_m_3014_, v_a_3015_);
return v___x_3016_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1___boxed(lean_object* v_00_u03b2_3017_, lean_object* v_m_3018_, lean_object* v_a_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1(v_00_u03b2_3017_, v_m_3018_, v_a_3019_);
lean_dec_ref(v_a_3019_);
lean_dec_ref(v_m_3018_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3021_, lean_object* v_msg_3022_, lean_object* v___y_3023_){
_start:
{
lean_object* v___x_3024_; 
v___x_3024_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__1___redArg(v_msg_3022_, v___y_3023_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0(lean_object* v_00_u03b1_3025_, lean_object* v_preNode_3026_, lean_object* v_postNode_3027_, lean_object* v_x_3028_, lean_object* v_x_3029_, lean_object* v___y_3030_){
_start:
{
lean_object* v___x_3031_; 
v___x_3031_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0___redArg(v_preNode_3026_, v_postNode_3027_, v_x_3028_, v_x_3029_, v___y_3030_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2(lean_object* v_00_u03b2_3032_, lean_object* v_a_3033_, lean_object* v_x_3034_){
_start:
{
lean_object* v___x_3035_; 
v___x_3035_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2___redArg(v_a_3033_, v_x_3034_);
return v___x_3035_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3036_, lean_object* v_a_3037_, lean_object* v_x_3038_){
_start:
{
lean_object* v_res_3039_; 
v_res_3039_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__1_spec__2(v_00_u03b2_3036_, v_a_3037_, v_x_3038_);
lean_dec(v_x_3038_);
lean_dec_ref(v_a_3037_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3040_, lean_object* v_preNode_3041_, lean_object* v_postNode_3042_, lean_object* v___x_3043_, lean_object* v_x_3044_, lean_object* v_x_3045_, lean_object* v___y_3046_){
_start:
{
lean_object* v___x_3047_; 
v___x_3047_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap_spec__0_spec__0_spec__2___redArg(v_preNode_3041_, v_postNode_3042_, v___x_3043_, v_x_3044_, v_x_3045_, v___y_3046_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__2___redArg(lean_object* v_a_3048_, lean_object* v_b_3049_, lean_object* v_x_3050_){
_start:
{
if (lean_obj_tag(v_x_3050_) == 0)
{
lean_dec(v_b_3049_);
lean_dec_ref(v_a_3048_);
return v_x_3050_;
}
else
{
lean_object* v_key_3051_; lean_object* v_value_3052_; lean_object* v_tail_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3065_; 
v_key_3051_ = lean_ctor_get(v_x_3050_, 0);
v_value_3052_ = lean_ctor_get(v_x_3050_, 1);
v_tail_3053_ = lean_ctor_get(v_x_3050_, 2);
v_isSharedCheck_3065_ = !lean_is_exclusive(v_x_3050_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3055_ = v_x_3050_;
v_isShared_3056_ = v_isSharedCheck_3065_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_tail_3053_);
lean_inc(v_value_3052_);
lean_inc(v_key_3051_);
lean_dec(v_x_3050_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3065_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
uint8_t v___x_3057_; 
v___x_3057_ = l_Lean_Lsp_instBEqRange_beq(v_key_3051_, v_a_3048_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; lean_object* v___x_3060_; 
v___x_3058_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__2___redArg(v_a_3048_, v_b_3049_, v_tail_3053_);
if (v_isShared_3056_ == 0)
{
lean_ctor_set(v___x_3055_, 2, v___x_3058_);
v___x_3060_ = v___x_3055_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_key_3051_);
lean_ctor_set(v_reuseFailAlloc_3061_, 1, v_value_3052_);
lean_ctor_set(v_reuseFailAlloc_3061_, 2, v___x_3058_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
else
{
lean_object* v___x_3063_; 
lean_dec(v_value_3052_);
lean_dec(v_key_3051_);
if (v_isShared_3056_ == 0)
{
lean_ctor_set(v___x_3055_, 1, v_b_3049_);
lean_ctor_set(v___x_3055_, 0, v_a_3048_);
v___x_3063_ = v___x_3055_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_a_3048_);
lean_ctor_set(v_reuseFailAlloc_3064_, 1, v_b_3049_);
lean_ctor_set(v_reuseFailAlloc_3064_, 2, v_tail_3053_);
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
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_x_3066_, lean_object* v_x_3067_){
_start:
{
if (lean_obj_tag(v_x_3067_) == 0)
{
return v_x_3066_;
}
else
{
lean_object* v_key_3068_; lean_object* v_value_3069_; lean_object* v_tail_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3093_; 
v_key_3068_ = lean_ctor_get(v_x_3067_, 0);
v_value_3069_ = lean_ctor_get(v_x_3067_, 1);
v_tail_3070_ = lean_ctor_get(v_x_3067_, 2);
v_isSharedCheck_3093_ = !lean_is_exclusive(v_x_3067_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3072_ = v_x_3067_;
v_isShared_3073_ = v_isSharedCheck_3093_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_tail_3070_);
lean_inc(v_value_3069_);
lean_inc(v_key_3068_);
lean_dec(v_x_3067_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3093_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3074_; uint64_t v___x_3075_; uint64_t v___x_3076_; uint64_t v___x_3077_; uint64_t v_fold_3078_; uint64_t v___x_3079_; uint64_t v___x_3080_; uint64_t v___x_3081_; size_t v___x_3082_; size_t v___x_3083_; size_t v___x_3084_; size_t v___x_3085_; size_t v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3089_; 
v___x_3074_ = lean_array_get_size(v_x_3066_);
v___x_3075_ = l_Lean_Lsp_instHashableRange_hash(v_key_3068_);
v___x_3076_ = 32ULL;
v___x_3077_ = lean_uint64_shift_right(v___x_3075_, v___x_3076_);
v_fold_3078_ = lean_uint64_xor(v___x_3075_, v___x_3077_);
v___x_3079_ = 16ULL;
v___x_3080_ = lean_uint64_shift_right(v_fold_3078_, v___x_3079_);
v___x_3081_ = lean_uint64_xor(v_fold_3078_, v___x_3080_);
v___x_3082_ = lean_uint64_to_usize(v___x_3081_);
v___x_3083_ = lean_usize_of_nat(v___x_3074_);
v___x_3084_ = ((size_t)1ULL);
v___x_3085_ = lean_usize_sub(v___x_3083_, v___x_3084_);
v___x_3086_ = lean_usize_land(v___x_3082_, v___x_3085_);
v___x_3087_ = lean_array_uget_borrowed(v_x_3066_, v___x_3086_);
lean_inc(v___x_3087_);
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 2, v___x_3087_);
v___x_3089_ = v___x_3072_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_key_3068_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v_value_3069_);
lean_ctor_set(v_reuseFailAlloc_3092_, 2, v___x_3087_);
v___x_3089_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
lean_object* v___x_3090_; 
v___x_3090_ = lean_array_uset(v_x_3066_, v___x_3086_, v___x_3089_);
v_x_3066_ = v___x_3090_;
v_x_3067_ = v_tail_3070_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2___redArg(lean_object* v_i_3094_, lean_object* v_source_3095_, lean_object* v_target_3096_){
_start:
{
lean_object* v___x_3097_; uint8_t v___x_3098_; 
v___x_3097_ = lean_array_get_size(v_source_3095_);
v___x_3098_ = lean_nat_dec_lt(v_i_3094_, v___x_3097_);
if (v___x_3098_ == 0)
{
lean_dec_ref(v_source_3095_);
lean_dec(v_i_3094_);
return v_target_3096_;
}
else
{
lean_object* v_es_3099_; lean_object* v___x_3100_; lean_object* v_source_3101_; lean_object* v_target_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v_es_3099_ = lean_array_fget(v_source_3095_, v_i_3094_);
v___x_3100_ = lean_box(0);
v_source_3101_ = lean_array_fset(v_source_3095_, v_i_3094_, v___x_3100_);
v_target_3102_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2_spec__5___redArg(v_target_3096_, v_es_3099_);
v___x_3103_ = lean_unsigned_to_nat(1u);
v___x_3104_ = lean_nat_add(v_i_3094_, v___x_3103_);
lean_dec(v_i_3094_);
v_i_3094_ = v___x_3104_;
v_source_3095_ = v_source_3101_;
v_target_3096_ = v_target_3102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1___redArg(lean_object* v_data_3106_){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v_nbuckets_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3107_ = lean_array_get_size(v_data_3106_);
v___x_3108_ = lean_unsigned_to_nat(2u);
v_nbuckets_3109_ = lean_nat_mul(v___x_3107_, v___x_3108_);
v___x_3110_ = lean_unsigned_to_nat(0u);
v___x_3111_ = lean_box(0);
v___x_3112_ = lean_mk_array(v_nbuckets_3109_, v___x_3111_);
v___x_3113_ = lean_array_propagate_mark(v_data_3106_, v___x_3112_);
v___x_3114_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2___redArg(v___x_3110_, v_data_3106_, v___x_3113_);
return v___x_3114_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0___redArg(lean_object* v_a_3115_, lean_object* v_x_3116_){
_start:
{
if (lean_obj_tag(v_x_3116_) == 0)
{
uint8_t v___x_3117_; 
v___x_3117_ = 0;
return v___x_3117_;
}
else
{
lean_object* v_key_3118_; lean_object* v_tail_3119_; uint8_t v___x_3120_; 
v_key_3118_ = lean_ctor_get(v_x_3116_, 0);
v_tail_3119_ = lean_ctor_get(v_x_3116_, 2);
v___x_3120_ = l_Lean_Lsp_instBEqRange_beq(v_key_3118_, v_a_3115_);
if (v___x_3120_ == 0)
{
v_x_3116_ = v_tail_3119_;
goto _start;
}
else
{
return v___x_3120_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0___redArg___boxed(lean_object* v_a_3122_, lean_object* v_x_3123_){
_start:
{
uint8_t v_res_3124_; lean_object* v_r_3125_; 
v_res_3124_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0___redArg(v_a_3122_, v_x_3123_);
lean_dec(v_x_3123_);
lean_dec_ref(v_a_3122_);
v_r_3125_ = lean_box(v_res_3124_);
return v_r_3125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0___redArg(lean_object* v_m_3126_, lean_object* v_a_3127_, lean_object* v_b_3128_){
_start:
{
lean_object* v_size_3129_; lean_object* v_buckets_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3173_; 
v_size_3129_ = lean_ctor_get(v_m_3126_, 0);
v_buckets_3130_ = lean_ctor_get(v_m_3126_, 1);
v_isSharedCheck_3173_ = !lean_is_exclusive(v_m_3126_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3132_ = v_m_3126_;
v_isShared_3133_ = v_isSharedCheck_3173_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_buckets_3130_);
lean_inc(v_size_3129_);
lean_dec(v_m_3126_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3173_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3134_; uint64_t v___x_3135_; uint64_t v___x_3136_; uint64_t v___x_3137_; uint64_t v_fold_3138_; uint64_t v___x_3139_; uint64_t v___x_3140_; uint64_t v___x_3141_; size_t v___x_3142_; size_t v___x_3143_; size_t v___x_3144_; size_t v___x_3145_; size_t v___x_3146_; lean_object* v_bkt_3147_; uint8_t v___x_3148_; 
v___x_3134_ = lean_array_get_size(v_buckets_3130_);
v___x_3135_ = l_Lean_Lsp_instHashableRange_hash(v_a_3127_);
v___x_3136_ = 32ULL;
v___x_3137_ = lean_uint64_shift_right(v___x_3135_, v___x_3136_);
v_fold_3138_ = lean_uint64_xor(v___x_3135_, v___x_3137_);
v___x_3139_ = 16ULL;
v___x_3140_ = lean_uint64_shift_right(v_fold_3138_, v___x_3139_);
v___x_3141_ = lean_uint64_xor(v_fold_3138_, v___x_3140_);
v___x_3142_ = lean_uint64_to_usize(v___x_3141_);
v___x_3143_ = lean_usize_of_nat(v___x_3134_);
v___x_3144_ = ((size_t)1ULL);
v___x_3145_ = lean_usize_sub(v___x_3143_, v___x_3144_);
v___x_3146_ = lean_usize_land(v___x_3142_, v___x_3145_);
v_bkt_3147_ = lean_array_uget_borrowed(v_buckets_3130_, v___x_3146_);
v___x_3148_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0___redArg(v_a_3127_, v_bkt_3147_);
if (v___x_3148_ == 0)
{
lean_object* v___x_3149_; lean_object* v_size_x27_3150_; lean_object* v___x_3151_; lean_object* v_buckets_x27_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; uint8_t v___x_3158_; 
v___x_3149_ = lean_unsigned_to_nat(1u);
v_size_x27_3150_ = lean_nat_add(v_size_3129_, v___x_3149_);
lean_dec(v_size_3129_);
lean_inc(v_bkt_3147_);
v___x_3151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3151_, 0, v_a_3127_);
lean_ctor_set(v___x_3151_, 1, v_b_3128_);
lean_ctor_set(v___x_3151_, 2, v_bkt_3147_);
v_buckets_x27_3152_ = lean_array_uset(v_buckets_3130_, v___x_3146_, v___x_3151_);
v___x_3153_ = lean_unsigned_to_nat(4u);
v___x_3154_ = lean_nat_mul(v_size_x27_3150_, v___x_3153_);
v___x_3155_ = lean_unsigned_to_nat(3u);
v___x_3156_ = lean_nat_div(v___x_3154_, v___x_3155_);
lean_dec(v___x_3154_);
v___x_3157_ = lean_array_get_size(v_buckets_x27_3152_);
v___x_3158_ = lean_nat_dec_le(v___x_3156_, v___x_3157_);
lean_dec(v___x_3156_);
if (v___x_3158_ == 0)
{
lean_object* v_val_3159_; lean_object* v___x_3161_; 
v_val_3159_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1___redArg(v_buckets_x27_3152_);
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 1, v_val_3159_);
lean_ctor_set(v___x_3132_, 0, v_size_x27_3150_);
v___x_3161_ = v___x_3132_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v_size_x27_3150_);
lean_ctor_set(v_reuseFailAlloc_3162_, 1, v_val_3159_);
v___x_3161_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
return v___x_3161_;
}
}
else
{
lean_object* v___x_3164_; 
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 1, v_buckets_x27_3152_);
lean_ctor_set(v___x_3132_, 0, v_size_x27_3150_);
v___x_3164_ = v___x_3132_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v_size_x27_3150_);
lean_ctor_set(v_reuseFailAlloc_3165_, 1, v_buckets_x27_3152_);
v___x_3164_ = v_reuseFailAlloc_3165_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
return v___x_3164_;
}
}
}
else
{
lean_object* v___x_3166_; lean_object* v_buckets_x27_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3171_; 
lean_inc(v_bkt_3147_);
v___x_3166_ = lean_box(0);
v_buckets_x27_3167_ = lean_array_uset(v_buckets_3130_, v___x_3146_, v___x_3166_);
v___x_3168_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__2___redArg(v_a_3127_, v_b_3128_, v_bkt_3147_);
v___x_3169_ = lean_array_uset(v_buckets_x27_3167_, v___x_3146_, v___x_3168_);
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 1, v___x_3169_);
v___x_3171_ = v___x_3132_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_size_3129_);
lean_ctor_set(v_reuseFailAlloc_3172_, 1, v___x_3169_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
return v___x_3171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__1(lean_object* v_as_3174_, size_t v_sz_3175_, size_t v_i_3176_, lean_object* v_b_3177_){
_start:
{
lean_object* v_a_3179_; uint8_t v___x_3183_; 
v___x_3183_ = lean_usize_dec_lt(v_i_3176_, v_sz_3175_);
if (v___x_3183_ == 0)
{
return v_b_3177_;
}
else
{
lean_object* v_a_3184_; uint8_t v_isBinder_3185_; 
v_a_3184_ = lean_array_uget_borrowed(v_as_3174_, v_i_3176_);
v_isBinder_3185_ = lean_ctor_get_uint8(v_a_3184_, sizeof(void*)*6);
if (v_isBinder_3185_ == 1)
{
lean_object* v_ident_3186_; lean_object* v_range_3187_; lean_object* v___x_3188_; 
v_ident_3186_ = lean_ctor_get(v_a_3184_, 0);
v_range_3187_ = lean_ctor_get(v_a_3184_, 2);
lean_inc_ref(v_ident_3186_);
lean_inc_ref(v_range_3187_);
v___x_3188_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0___redArg(v_b_3177_, v_range_3187_, v_ident_3186_);
v_a_3179_ = v___x_3188_;
goto v___jp_3178_;
}
else
{
v_a_3179_ = v_b_3177_;
goto v___jp_3178_;
}
}
v___jp_3178_:
{
size_t v___x_3180_; size_t v___x_3181_; 
v___x_3180_ = ((size_t)1ULL);
v___x_3181_ = lean_usize_add(v_i_3176_, v___x_3180_);
v_i_3176_ = v___x_3181_;
v_b_3177_ = v_a_3179_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__1___boxed(lean_object* v_as_3189_, lean_object* v_sz_3190_, lean_object* v_i_3191_, lean_object* v_b_3192_){
_start:
{
size_t v_sz_boxed_3193_; size_t v_i_boxed_3194_; lean_object* v_res_3195_; 
v_sz_boxed_3193_ = lean_unbox_usize(v_sz_3190_);
lean_dec(v_sz_3190_);
v_i_boxed_3194_ = lean_unbox_usize(v_i_3191_);
lean_dec(v_i_3191_);
v_res_3195_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__1(v_as_3189_, v_sz_boxed_3193_, v_i_boxed_3194_, v_b_3192_);
lean_dec_ref(v_as_3189_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__2(lean_object* v___x_3196_, lean_object* v_as_3197_, size_t v_sz_3198_, size_t v_i_3199_, lean_object* v_b_3200_){
_start:
{
lean_object* v_a_3202_; uint8_t v___x_3206_; 
v___x_3206_ = lean_usize_dec_lt(v_i_3199_, v_sz_3198_);
if (v___x_3206_ == 0)
{
return v_b_3200_;
}
else
{
lean_object* v_a_3207_; lean_object* v_ident_3210_; lean_object* v_range_3211_; lean_object* v_stx_3212_; lean_object* v_ci_3213_; lean_object* v_info_3214_; uint8_t v_isBinder_3215_; uint8_t v___x_3216_; 
v_a_3207_ = lean_array_uget(v_as_3197_, v_i_3199_);
v_ident_3210_ = lean_ctor_get(v_a_3207_, 0);
v_range_3211_ = lean_ctor_get(v_a_3207_, 2);
v_stx_3212_ = lean_ctor_get(v_a_3207_, 3);
v_ci_3213_ = lean_ctor_get(v_a_3207_, 4);
v_info_3214_ = lean_ctor_get(v_a_3207_, 5);
v_isBinder_3215_ = lean_ctor_get_uint8(v_a_3207_, sizeof(void*)*6);
v___x_3216_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__0___redArg(v___x_3196_, v_ident_3210_);
if (v___x_3216_ == 0)
{
if (v___x_3216_ == 0)
{
goto v___jp_3208_;
}
else
{
if (v___x_3216_ == 0)
{
lean_dec(v_a_3207_);
v_a_3202_ = v_b_3200_;
goto v___jp_3201_;
}
else
{
goto v___jp_3208_;
}
}
}
else
{
lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3228_; 
lean_inc_ref(v_info_3214_);
lean_inc_ref(v_ci_3213_);
lean_inc(v_stx_3212_);
lean_inc_ref(v_range_3211_);
lean_inc_ref(v_ident_3210_);
v_isSharedCheck_3228_ = !lean_is_exclusive(v_a_3207_);
if (v_isSharedCheck_3228_ == 0)
{
lean_object* v_unused_3229_; lean_object* v_unused_3230_; lean_object* v_unused_3231_; lean_object* v_unused_3232_; lean_object* v_unused_3233_; lean_object* v_unused_3234_; 
v_unused_3229_ = lean_ctor_get(v_a_3207_, 5);
lean_dec(v_unused_3229_);
v_unused_3230_ = lean_ctor_get(v_a_3207_, 4);
lean_dec(v_unused_3230_);
v_unused_3231_ = lean_ctor_get(v_a_3207_, 3);
lean_dec(v_unused_3231_);
v_unused_3232_ = lean_ctor_get(v_a_3207_, 2);
lean_dec(v_unused_3232_);
v_unused_3233_ = lean_ctor_get(v_a_3207_, 1);
lean_dec(v_unused_3233_);
v_unused_3234_ = lean_ctor_get(v_a_3207_, 0);
lean_dec(v_unused_3234_);
v___x_3218_ = v_a_3207_;
v_isShared_3219_ = v_isSharedCheck_3228_;
goto v_resetjp_3217_;
}
else
{
lean_dec(v_a_3207_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3228_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3225_; 
lean_inc_ref(v_ident_3210_);
v___x_3220_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_References_0__Lean_Server_combineIdents_findCanonicalRepresentative_spec__2___redArg(v___x_3196_, v_ident_3210_);
v___x_3221_ = lean_unsigned_to_nat(1u);
v___x_3222_ = lean_mk_empty_array_with_capacity(v___x_3221_);
v___x_3223_ = lean_array_push(v___x_3222_, v_ident_3210_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 1, v___x_3223_);
lean_ctor_set(v___x_3218_, 0, v___x_3220_);
v___x_3225_ = v___x_3218_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v___x_3220_);
lean_ctor_set(v_reuseFailAlloc_3227_, 1, v___x_3223_);
lean_ctor_set(v_reuseFailAlloc_3227_, 2, v_range_3211_);
lean_ctor_set(v_reuseFailAlloc_3227_, 3, v_stx_3212_);
lean_ctor_set(v_reuseFailAlloc_3227_, 4, v_ci_3213_);
lean_ctor_set(v_reuseFailAlloc_3227_, 5, v_info_3214_);
lean_ctor_set_uint8(v_reuseFailAlloc_3227_, sizeof(void*)*6, v_isBinder_3215_);
v___x_3225_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
lean_object* v___x_3226_; 
v___x_3226_ = lean_array_push(v_b_3200_, v___x_3225_);
v_a_3202_ = v___x_3226_;
goto v___jp_3201_;
}
}
}
v___jp_3208_:
{
lean_object* v___x_3209_; 
v___x_3209_ = lean_array_push(v_b_3200_, v_a_3207_);
v_a_3202_ = v___x_3209_;
goto v___jp_3201_;
}
}
v___jp_3201_:
{
size_t v___x_3203_; size_t v___x_3204_; 
v___x_3203_ = ((size_t)1ULL);
v___x_3204_ = lean_usize_add(v_i_3199_, v___x_3203_);
v_i_3199_ = v___x_3204_;
v_b_3200_ = v_a_3202_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__2___boxed(lean_object* v___x_3235_, lean_object* v_as_3236_, lean_object* v_sz_3237_, lean_object* v_i_3238_, lean_object* v_b_3239_){
_start:
{
size_t v_sz_boxed_3240_; size_t v_i_boxed_3241_; lean_object* v_res_3242_; 
v_sz_boxed_3240_ = lean_unbox_usize(v_sz_3237_);
lean_dec(v_sz_3237_);
v_i_boxed_3241_ = lean_unbox_usize(v_i_3238_);
lean_dec(v_i_3238_);
v_res_3242_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__2(v___x_3235_, v_as_3236_, v_sz_boxed_3240_, v_i_boxed_3241_, v_b_3239_);
lean_dec_ref(v_as_3236_);
lean_dec_ref(v___x_3235_);
return v_res_3242_;
}
}
static lean_object* _init_l_Lean_Server_combineIdents___closed__0(void){
_start:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; 
v___x_3243_ = lean_box(0);
v___x_3244_ = lean_unsigned_to_nat(16u);
v___x_3245_ = lean_mk_array(v___x_3244_, v___x_3243_);
return v___x_3245_;
}
}
static lean_object* _init_l_Lean_Server_combineIdents___closed__1(void){
_start:
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v_posMap_3248_; 
v___x_3246_ = lean_obj_once(&l_Lean_Server_combineIdents___closed__0, &l_Lean_Server_combineIdents___closed__0_once, _init_l_Lean_Server_combineIdents___closed__0);
v___x_3247_ = lean_unsigned_to_nat(0u);
v_posMap_3248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_posMap_3248_, 0, v___x_3247_);
lean_ctor_set(v_posMap_3248_, 1, v___x_3246_);
return v_posMap_3248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_combineIdents(lean_object* v_trees_3249_, lean_object* v_refs_3250_){
_start:
{
lean_object* v_posMap_3251_; size_t v_sz_3252_; size_t v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v_posMap_3251_ = lean_obj_once(&l_Lean_Server_combineIdents___closed__1, &l_Lean_Server_combineIdents___closed__1_once, _init_l_Lean_Server_combineIdents___closed__1);
v_sz_3252_ = lean_array_size(v_refs_3250_);
v___x_3253_ = ((size_t)0ULL);
v___x_3254_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__1(v_refs_3250_, v_sz_3252_, v___x_3253_, v_posMap_3251_);
v___x_3255_ = l___private_Lean_Server_References_0__Lean_Server_combineIdents_buildIdMap(v_trees_3249_, v_refs_3250_, v___x_3254_);
lean_dec_ref(v___x_3254_);
v___x_3256_ = l___private_Lean_Server_References_0__Lean_Server_combineIdents_useConstRepresentatives(v___x_3255_);
lean_dec_ref(v___x_3255_);
v___x_3257_ = ((lean_object*)(l_Lean_Server_RefInfo_empty___closed__0));
v___x_3258_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_combineIdents_spec__2(v___x_3256_, v_refs_3250_, v_sz_3252_, v___x_3253_, v___x_3257_);
lean_dec_ref(v___x_3256_);
return v___x_3258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_combineIdents___boxed(lean_object* v_trees_3259_, lean_object* v_refs_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l_Lean_Server_combineIdents(v_trees_3259_, v_refs_3260_);
lean_dec_ref(v_refs_3260_);
lean_dec_ref(v_trees_3259_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0(lean_object* v_00_u03b2_3262_, lean_object* v_m_3263_, lean_object* v_a_3264_, lean_object* v_b_3265_){
_start:
{
lean_object* v___x_3266_; 
v___x_3266_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0___redArg(v_m_3263_, v_a_3264_, v_b_3265_);
return v___x_3266_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0(lean_object* v_00_u03b2_3267_, lean_object* v_a_3268_, lean_object* v_x_3269_){
_start:
{
uint8_t v___x_3270_; 
v___x_3270_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0___redArg(v_a_3268_, v_x_3269_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3271_, lean_object* v_a_3272_, lean_object* v_x_3273_){
_start:
{
uint8_t v_res_3274_; lean_object* v_r_3275_; 
v_res_3274_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__0(v_00_u03b2_3271_, v_a_3272_, v_x_3273_);
lean_dec(v_x_3273_);
lean_dec_ref(v_a_3272_);
v_r_3275_ = lean_box(v_res_3274_);
return v_r_3275_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1(lean_object* v_00_u03b2_3276_, lean_object* v_data_3277_){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1___redArg(v_data_3277_);
return v___x_3278_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__2(lean_object* v_00_u03b2_3279_, lean_object* v_a_3280_, lean_object* v_b_3281_, lean_object* v_x_3282_){
_start:
{
lean_object* v___x_3283_; 
v___x_3283_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__2___redArg(v_a_3280_, v_b_3281_, v_x_3282_);
return v___x_3283_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_3284_, lean_object* v_i_3285_, lean_object* v_source_3286_, lean_object* v_target_3287_){
_start:
{
lean_object* v___x_3288_; 
v___x_3288_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2___redArg(v_i_3285_, v_source_3286_, v_target_3287_);
return v___x_3288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_3289_, lean_object* v_x_3290_, lean_object* v_x_3291_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_combineIdents_spec__0_spec__1_spec__2_spec__5___redArg(v_x_3290_, v_x_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0___redArg(lean_object* v_hi_3293_, lean_object* v_pivot_3294_, lean_object* v_as_3295_, lean_object* v_i_3296_, lean_object* v_k_3297_){
_start:
{
uint8_t v___x_3302_; 
v___x_3302_ = lean_nat_dec_lt(v_k_3297_, v_hi_3293_);
if (v___x_3302_ == 0)
{
lean_object* v___x_3303_; lean_object* v___x_3304_; 
lean_dec(v_k_3297_);
v___x_3303_ = lean_array_fswap(v_as_3295_, v_i_3296_, v_hi_3293_);
v___x_3304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3304_, 0, v_i_3296_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
return v___x_3304_;
}
else
{
lean_object* v___x_3305_; lean_object* v_range_3306_; lean_object* v_range_3307_; uint8_t v___x_3308_; 
v___x_3305_ = lean_array_fget_borrowed(v_as_3295_, v_k_3297_);
v_range_3306_ = lean_ctor_get(v___x_3305_, 2);
v_range_3307_ = lean_ctor_get(v_pivot_3294_, 2);
v___x_3308_ = l_Lean_Lsp_instOrdRange_ord(v_range_3306_, v_range_3307_);
if (v___x_3308_ == 0)
{
if (v___x_3302_ == 0)
{
goto v___jp_3298_;
}
else
{
lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3309_ = lean_array_fswap(v_as_3295_, v_i_3296_, v_k_3297_);
v___x_3310_ = lean_unsigned_to_nat(1u);
v___x_3311_ = lean_nat_add(v_i_3296_, v___x_3310_);
lean_dec(v_i_3296_);
v___x_3312_ = lean_nat_add(v_k_3297_, v___x_3310_);
lean_dec(v_k_3297_);
v_as_3295_ = v___x_3309_;
v_i_3296_ = v___x_3311_;
v_k_3297_ = v___x_3312_;
goto _start;
}
}
else
{
goto v___jp_3298_;
}
}
v___jp_3298_:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3299_ = lean_unsigned_to_nat(1u);
v___x_3300_ = lean_nat_add(v_k_3297_, v___x_3299_);
lean_dec(v_k_3297_);
v_k_3297_ = v___x_3300_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0___redArg___boxed(lean_object* v_hi_3314_, lean_object* v_pivot_3315_, lean_object* v_as_3316_, lean_object* v_i_3317_, lean_object* v_k_3318_){
_start:
{
lean_object* v_res_3319_; 
v_res_3319_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0___redArg(v_hi_3314_, v_pivot_3315_, v_as_3316_, v_i_3317_, v_k_3318_);
lean_dec_ref(v_pivot_3315_);
lean_dec(v_hi_3314_);
return v_res_3319_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___lam__0(uint8_t v___x_3320_, lean_object* v_x1_3321_, lean_object* v_x2_3322_){
_start:
{
lean_object* v_range_3323_; lean_object* v_range_3324_; uint8_t v___x_3325_; 
v_range_3323_ = lean_ctor_get(v_x1_3321_, 2);
v_range_3324_ = lean_ctor_get(v_x2_3322_, 2);
v___x_3325_ = l_Lean_Lsp_instOrdRange_ord(v_range_3323_, v_range_3324_);
if (v___x_3325_ == 0)
{
return v___x_3320_;
}
else
{
uint8_t v___x_3326_; 
v___x_3326_ = 0;
return v___x_3326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___lam__0___boxed(lean_object* v___x_3327_, lean_object* v_x1_3328_, lean_object* v_x2_3329_){
_start:
{
uint8_t v___x_2120__boxed_3330_; uint8_t v_res_3331_; lean_object* v_r_3332_; 
v___x_2120__boxed_3330_ = lean_unbox(v___x_3327_);
v_res_3331_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___lam__0(v___x_2120__boxed_3330_, v_x1_3328_, v_x2_3329_);
lean_dec_ref(v_x2_3329_);
lean_dec_ref(v_x1_3328_);
v_r_3332_ = lean_box(v_res_3331_);
return v_r_3332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg(lean_object* v_n_3333_, lean_object* v_as_3334_, lean_object* v_lo_3335_, lean_object* v_hi_3336_){
_start:
{
lean_object* v___y_3338_; uint8_t v___x_3348_; 
v___x_3348_ = lean_nat_dec_lt(v_lo_3335_, v_hi_3336_);
if (v___x_3348_ == 0)
{
lean_dec(v_lo_3335_);
return v_as_3334_;
}
else
{
lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v_mid_3351_; lean_object* v___y_3353_; lean_object* v___y_3359_; lean_object* v___x_3364_; lean_object* v___x_3365_; uint8_t v___x_3366_; 
v___x_3349_ = lean_nat_add(v_lo_3335_, v_hi_3336_);
v___x_3350_ = lean_unsigned_to_nat(1u);
v_mid_3351_ = lean_nat_shiftr(v___x_3349_, v___x_3350_);
lean_dec(v___x_3349_);
v___x_3364_ = lean_array_fget_borrowed(v_as_3334_, v_mid_3351_);
v___x_3365_ = lean_array_fget_borrowed(v_as_3334_, v_lo_3335_);
v___x_3366_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___lam__0(v___x_3348_, v___x_3364_, v___x_3365_);
if (v___x_3366_ == 0)
{
v___y_3359_ = v_as_3334_;
goto v___jp_3358_;
}
else
{
lean_object* v___x_3367_; 
v___x_3367_ = lean_array_fswap(v_as_3334_, v_lo_3335_, v_mid_3351_);
v___y_3359_ = v___x_3367_;
goto v___jp_3358_;
}
v___jp_3352_:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; uint8_t v___x_3356_; 
v___x_3354_ = lean_array_fget_borrowed(v___y_3353_, v_mid_3351_);
v___x_3355_ = lean_array_fget_borrowed(v___y_3353_, v_hi_3336_);
v___x_3356_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___lam__0(v___x_3348_, v___x_3354_, v___x_3355_);
if (v___x_3356_ == 0)
{
lean_dec(v_mid_3351_);
v___y_3338_ = v___y_3353_;
goto v___jp_3337_;
}
else
{
lean_object* v___x_3357_; 
v___x_3357_ = lean_array_fswap(v___y_3353_, v_mid_3351_, v_hi_3336_);
lean_dec(v_mid_3351_);
v___y_3338_ = v___x_3357_;
goto v___jp_3337_;
}
}
v___jp_3358_:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; 
v___x_3360_ = lean_array_fget_borrowed(v___y_3359_, v_hi_3336_);
v___x_3361_ = lean_array_fget_borrowed(v___y_3359_, v_lo_3335_);
v___x_3362_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___lam__0(v___x_3348_, v___x_3360_, v___x_3361_);
if (v___x_3362_ == 0)
{
v___y_3353_ = v___y_3359_;
goto v___jp_3352_;
}
else
{
lean_object* v___x_3363_; 
v___x_3363_ = lean_array_fswap(v___y_3359_, v_lo_3335_, v_hi_3336_);
v___y_3353_ = v___x_3363_;
goto v___jp_3352_;
}
}
}
v___jp_3337_:
{
lean_object* v_pivot_3339_; lean_object* v___x_3340_; lean_object* v_fst_3341_; lean_object* v_snd_3342_; uint8_t v___x_3343_; 
v_pivot_3339_ = lean_array_fget(v___y_3338_, v_hi_3336_);
lean_inc_n(v_lo_3335_, 2);
v___x_3340_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0___redArg(v_hi_3336_, v_pivot_3339_, v___y_3338_, v_lo_3335_, v_lo_3335_);
lean_dec(v_pivot_3339_);
v_fst_3341_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_fst_3341_);
v_snd_3342_ = lean_ctor_get(v___x_3340_, 1);
lean_inc(v_snd_3342_);
lean_dec_ref(v___x_3340_);
v___x_3343_ = lean_nat_dec_le(v_hi_3336_, v_fst_3341_);
if (v___x_3343_ == 0)
{
lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3344_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg(v_n_3333_, v_snd_3342_, v_lo_3335_, v_fst_3341_);
v___x_3345_ = lean_unsigned_to_nat(1u);
v___x_3346_ = lean_nat_add(v_fst_3341_, v___x_3345_);
lean_dec(v_fst_3341_);
v_as_3334_ = v___x_3344_;
v_lo_3335_ = v___x_3346_;
goto _start;
}
else
{
lean_dec(v_fst_3341_);
lean_dec(v_lo_3335_);
return v_snd_3342_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg___boxed(lean_object* v_n_3368_, lean_object* v_as_3369_, lean_object* v_lo_3370_, lean_object* v_hi_3371_){
_start:
{
lean_object* v_res_3372_; 
v_res_3372_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg(v_n_3368_, v_as_3369_, v_lo_3370_, v_hi_3371_);
lean_dec(v_hi_3371_);
lean_dec(v_n_3368_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5_spec__9___redArg(lean_object* v_x_3373_, lean_object* v_x_3374_){
_start:
{
if (lean_obj_tag(v_x_3374_) == 0)
{
return v_x_3373_;
}
else
{
lean_object* v_key_3375_; lean_object* v_snd_3376_; lean_object* v_value_3377_; lean_object* v_tail_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3418_; 
v_key_3375_ = lean_ctor_get(v_x_3374_, 0);
lean_inc(v_key_3375_);
v_snd_3376_ = lean_ctor_get(v_key_3375_, 1);
v_value_3377_ = lean_ctor_get(v_x_3374_, 1);
v_tail_3378_ = lean_ctor_get(v_x_3374_, 2);
v_isSharedCheck_3418_ = !lean_is_exclusive(v_x_3374_);
if (v_isSharedCheck_3418_ == 0)
{
lean_object* v_unused_3419_; 
v_unused_3419_ = lean_ctor_get(v_x_3374_, 0);
lean_dec(v_unused_3419_);
v___x_3380_ = v_x_3374_;
v_isShared_3381_ = v_isSharedCheck_3418_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_tail_3378_);
lean_inc(v_value_3377_);
lean_dec(v_x_3374_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3418_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v_fst_3382_; lean_object* v_fst_3383_; lean_object* v_snd_3384_; lean_object* v___x_3385_; uint64_t v___x_3386_; uint64_t v___y_3388_; uint64_t v___y_3410_; 
v_fst_3382_ = lean_ctor_get(v_key_3375_, 0);
v_fst_3383_ = lean_ctor_get(v_snd_3376_, 0);
v_snd_3384_ = lean_ctor_get(v_snd_3376_, 1);
v___x_3385_ = lean_array_get_size(v_x_3373_);
v___x_3386_ = l_Lean_Lsp_instHashableRefIdent_hash(v_fst_3382_);
if (lean_obj_tag(v_fst_3383_) == 0)
{
uint64_t v___x_3413_; 
v___x_3413_ = 11ULL;
v___y_3388_ = v___x_3413_;
goto v___jp_3387_;
}
else
{
lean_object* v_val_3414_; uint8_t v___x_3415_; 
v_val_3414_ = lean_ctor_get(v_fst_3383_, 0);
v___x_3415_ = lean_unbox(v_val_3414_);
if (v___x_3415_ == 0)
{
uint64_t v___x_3416_; 
v___x_3416_ = 13ULL;
v___y_3410_ = v___x_3416_;
goto v___jp_3409_;
}
else
{
uint64_t v___x_3417_; 
v___x_3417_ = 11ULL;
v___y_3410_ = v___x_3417_;
goto v___jp_3409_;
}
}
v___jp_3387_:
{
uint64_t v___x_3389_; uint64_t v___x_3390_; uint64_t v___x_3391_; uint64_t v___x_3392_; uint64_t v___x_3393_; uint64_t v_fold_3394_; uint64_t v___x_3395_; uint64_t v___x_3396_; uint64_t v___x_3397_; size_t v___x_3398_; size_t v___x_3399_; size_t v___x_3400_; size_t v___x_3401_; size_t v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3405_; 
v___x_3389_ = l_Lean_Lsp_instHashableRange_hash(v_snd_3384_);
v___x_3390_ = lean_uint64_mix_hash(v___y_3388_, v___x_3389_);
v___x_3391_ = lean_uint64_mix_hash(v___x_3386_, v___x_3390_);
v___x_3392_ = 32ULL;
v___x_3393_ = lean_uint64_shift_right(v___x_3391_, v___x_3392_);
v_fold_3394_ = lean_uint64_xor(v___x_3391_, v___x_3393_);
v___x_3395_ = 16ULL;
v___x_3396_ = lean_uint64_shift_right(v_fold_3394_, v___x_3395_);
v___x_3397_ = lean_uint64_xor(v_fold_3394_, v___x_3396_);
v___x_3398_ = lean_uint64_to_usize(v___x_3397_);
v___x_3399_ = lean_usize_of_nat(v___x_3385_);
v___x_3400_ = ((size_t)1ULL);
v___x_3401_ = lean_usize_sub(v___x_3399_, v___x_3400_);
v___x_3402_ = lean_usize_land(v___x_3398_, v___x_3401_);
v___x_3403_ = lean_array_uget_borrowed(v_x_3373_, v___x_3402_);
lean_inc(v___x_3403_);
if (v_isShared_3381_ == 0)
{
lean_ctor_set(v___x_3380_, 2, v___x_3403_);
v___x_3405_ = v___x_3380_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_key_3375_);
lean_ctor_set(v_reuseFailAlloc_3408_, 1, v_value_3377_);
lean_ctor_set(v_reuseFailAlloc_3408_, 2, v___x_3403_);
v___x_3405_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
lean_object* v___x_3406_; 
v___x_3406_ = lean_array_uset(v_x_3373_, v___x_3402_, v___x_3405_);
v_x_3373_ = v___x_3406_;
v_x_3374_ = v_tail_3378_;
goto _start;
}
}
v___jp_3409_:
{
uint64_t v___x_3411_; uint64_t v___x_3412_; 
v___x_3411_ = 13ULL;
v___x_3412_ = lean_uint64_mix_hash(v___y_3410_, v___x_3411_);
v___y_3388_ = v___x_3412_;
goto v___jp_3387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5___redArg(lean_object* v_i_3420_, lean_object* v_source_3421_, lean_object* v_target_3422_){
_start:
{
lean_object* v___x_3423_; uint8_t v___x_3424_; 
v___x_3423_ = lean_array_get_size(v_source_3421_);
v___x_3424_ = lean_nat_dec_lt(v_i_3420_, v___x_3423_);
if (v___x_3424_ == 0)
{
lean_dec_ref(v_source_3421_);
lean_dec(v_i_3420_);
return v_target_3422_;
}
else
{
lean_object* v_es_3425_; lean_object* v___x_3426_; lean_object* v_source_3427_; lean_object* v_target_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v_es_3425_ = lean_array_fget(v_source_3421_, v_i_3420_);
v___x_3426_ = lean_box(0);
v_source_3427_ = lean_array_fset(v_source_3421_, v_i_3420_, v___x_3426_);
v_target_3428_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5_spec__9___redArg(v_target_3422_, v_es_3425_);
v___x_3429_ = lean_unsigned_to_nat(1u);
v___x_3430_ = lean_nat_add(v_i_3420_, v___x_3429_);
lean_dec(v_i_3420_);
v_i_3420_ = v___x_3430_;
v_source_3421_ = v_source_3427_;
v_target_3422_ = v_target_3428_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3___redArg(lean_object* v_data_3432_){
_start:
{
lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v_nbuckets_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3433_ = lean_array_get_size(v_data_3432_);
v___x_3434_ = lean_unsigned_to_nat(2u);
v_nbuckets_3435_ = lean_nat_mul(v___x_3433_, v___x_3434_);
v___x_3436_ = lean_unsigned_to_nat(0u);
v___x_3437_ = lean_box(0);
v___x_3438_ = lean_mk_array(v_nbuckets_3435_, v___x_3437_);
v___x_3439_ = lean_array_propagate_mark(v_data_3432_, v___x_3438_);
v___x_3440_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5___redArg(v___x_3436_, v_data_3432_, v___x_3439_);
return v___x_3440_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2_spec__3(lean_object* v_x_3441_, lean_object* v_x_3442_){
_start:
{
if (lean_obj_tag(v_x_3441_) == 0)
{
if (lean_obj_tag(v_x_3442_) == 0)
{
uint8_t v___x_3443_; 
v___x_3443_ = 1;
return v___x_3443_;
}
else
{
uint8_t v___x_3444_; 
v___x_3444_ = 0;
return v___x_3444_;
}
}
else
{
if (lean_obj_tag(v_x_3442_) == 0)
{
uint8_t v___x_3445_; 
v___x_3445_ = 0;
return v___x_3445_;
}
else
{
lean_object* v_val_3446_; uint8_t v___x_3447_; 
v_val_3446_ = lean_ctor_get(v_x_3442_, 0);
v___x_3447_ = lean_unbox(v_val_3446_);
if (v___x_3447_ == 0)
{
lean_object* v_val_3448_; uint8_t v___x_3449_; 
v_val_3448_ = lean_ctor_get(v_x_3441_, 0);
v___x_3449_ = lean_unbox(v_val_3448_);
if (v___x_3449_ == 0)
{
uint8_t v___x_3450_; 
v___x_3450_ = 1;
return v___x_3450_;
}
else
{
uint8_t v___x_3451_; 
v___x_3451_ = lean_unbox(v_val_3446_);
return v___x_3451_;
}
}
else
{
lean_object* v_val_3452_; uint8_t v___x_3453_; 
v_val_3452_ = lean_ctor_get(v_x_3441_, 0);
v___x_3453_ = lean_unbox(v_val_3452_);
return v___x_3453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2_spec__3___boxed(lean_object* v_x_3454_, lean_object* v_x_3455_){
_start:
{
uint8_t v_res_3456_; lean_object* v_r_3457_; 
v_res_3456_ = l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2_spec__3(v_x_3454_, v_x_3455_);
lean_dec(v_x_3455_);
lean_dec(v_x_3454_);
v_r_3457_ = lean_box(v_res_3456_);
return v_r_3457_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__4___lam__0(lean_object* v_a_3458_, lean_object* v_x_3459_){
_start:
{
if (lean_obj_tag(v_x_3459_) == 0)
{
lean_object* v___x_3460_; 
v___x_3460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3460_, 0, v_a_3458_);
return v___x_3460_;
}
else
{
lean_object* v_val_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3489_; 
v_val_3461_ = lean_ctor_get(v_x_3459_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v_x_3459_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3463_ = v_x_3459_;
v_isShared_3464_ = v_isSharedCheck_3489_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_val_3461_);
lean_dec(v_x_3459_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3489_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v_ident_3465_; lean_object* v_aliases_3466_; lean_object* v_range_3467_; lean_object* v_stx_3468_; lean_object* v_ci_3469_; lean_object* v_info_3470_; uint8_t v_isBinder_3471_; lean_object* v_aliases_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3483_; 
v_ident_3465_ = lean_ctor_get(v_val_3461_, 0);
lean_inc_ref(v_ident_3465_);
v_aliases_3466_ = lean_ctor_get(v_val_3461_, 1);
lean_inc_ref(v_aliases_3466_);
v_range_3467_ = lean_ctor_get(v_val_3461_, 2);
lean_inc_ref(v_range_3467_);
v_stx_3468_ = lean_ctor_get(v_val_3461_, 3);
lean_inc(v_stx_3468_);
v_ci_3469_ = lean_ctor_get(v_val_3461_, 4);
lean_inc_ref(v_ci_3469_);
v_info_3470_ = lean_ctor_get(v_val_3461_, 5);
lean_inc_ref(v_info_3470_);
v_isBinder_3471_ = lean_ctor_get_uint8(v_val_3461_, sizeof(void*)*6);
lean_dec(v_val_3461_);
v_aliases_3472_ = lean_ctor_get(v_a_3458_, 1);
v_isSharedCheck_3483_ = !lean_is_exclusive(v_a_3458_);
if (v_isSharedCheck_3483_ == 0)
{
lean_object* v_unused_3484_; lean_object* v_unused_3485_; lean_object* v_unused_3486_; lean_object* v_unused_3487_; lean_object* v_unused_3488_; 
v_unused_3484_ = lean_ctor_get(v_a_3458_, 5);
lean_dec(v_unused_3484_);
v_unused_3485_ = lean_ctor_get(v_a_3458_, 4);
lean_dec(v_unused_3485_);
v_unused_3486_ = lean_ctor_get(v_a_3458_, 3);
lean_dec(v_unused_3486_);
v_unused_3487_ = lean_ctor_get(v_a_3458_, 2);
lean_dec(v_unused_3487_);
v_unused_3488_ = lean_ctor_get(v_a_3458_, 0);
lean_dec(v_unused_3488_);
v___x_3474_ = v_a_3458_;
v_isShared_3475_ = v_isSharedCheck_3483_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_aliases_3472_);
lean_dec(v_a_3458_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3483_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3476_; lean_object* v___x_3478_; 
v___x_3476_ = l_Array_append___redArg(v_aliases_3466_, v_aliases_3472_);
lean_dec_ref(v_aliases_3472_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 5, v_info_3470_);
lean_ctor_set(v___x_3474_, 4, v_ci_3469_);
lean_ctor_set(v___x_3474_, 3, v_stx_3468_);
lean_ctor_set(v___x_3474_, 2, v_range_3467_);
lean_ctor_set(v___x_3474_, 1, v___x_3476_);
lean_ctor_set(v___x_3474_, 0, v_ident_3465_);
v___x_3478_ = v___x_3474_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_ident_3465_);
lean_ctor_set(v_reuseFailAlloc_3482_, 1, v___x_3476_);
lean_ctor_set(v_reuseFailAlloc_3482_, 2, v_range_3467_);
lean_ctor_set(v_reuseFailAlloc_3482_, 3, v_stx_3468_);
lean_ctor_set(v_reuseFailAlloc_3482_, 4, v_ci_3469_);
lean_ctor_set(v_reuseFailAlloc_3482_, 5, v_info_3470_);
v___x_3478_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
lean_object* v___x_3480_; 
lean_ctor_set_uint8(v___x_3478_, sizeof(void*)*6, v_isBinder_3471_);
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v___x_3478_);
v___x_3480_ = v___x_3463_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v___x_3478_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__4(lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_x_3492_){
_start:
{
if (lean_obj_tag(v_x_3492_) == 0)
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v_val_3495_; lean_object* v___x_3496_; 
v___x_3493_ = lean_box(0);
v___x_3494_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__4___lam__0(v_a_3490_, v___x_3493_);
v_val_3495_ = lean_ctor_get(v___x_3494_, 0);
lean_inc(v_val_3495_);
lean_dec(v___x_3494_);
v___x_3496_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3496_, 0, v_a_3491_);
lean_ctor_set(v___x_3496_, 1, v_val_3495_);
lean_ctor_set(v___x_3496_, 2, v_x_3492_);
return v___x_3496_;
}
else
{
lean_object* v_key_3497_; lean_object* v_value_3498_; lean_object* v_tail_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3526_; 
v_key_3497_ = lean_ctor_get(v_x_3492_, 0);
v_value_3498_ = lean_ctor_get(v_x_3492_, 1);
v_tail_3499_ = lean_ctor_get(v_x_3492_, 2);
v_isSharedCheck_3526_ = !lean_is_exclusive(v_x_3492_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3501_ = v_x_3492_;
v_isShared_3502_ = v_isSharedCheck_3526_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_tail_3499_);
lean_inc(v_value_3498_);
lean_inc(v_key_3497_);
lean_dec(v_x_3492_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3526_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
uint8_t v___y_3504_; lean_object* v_fst_3515_; lean_object* v_snd_3516_; lean_object* v_fst_3517_; lean_object* v_snd_3518_; uint8_t v___x_3519_; 
v_fst_3515_ = lean_ctor_get(v_key_3497_, 0);
v_snd_3516_ = lean_ctor_get(v_key_3497_, 1);
v_fst_3517_ = lean_ctor_get(v_a_3491_, 0);
v_snd_3518_ = lean_ctor_get(v_a_3491_, 1);
v___x_3519_ = l_Lean_Lsp_instBEqRefIdent_beq(v_fst_3515_, v_fst_3517_);
if (v___x_3519_ == 0)
{
v___y_3504_ = v___x_3519_;
goto v___jp_3503_;
}
else
{
lean_object* v_fst_3520_; lean_object* v_snd_3521_; lean_object* v_fst_3522_; lean_object* v_snd_3523_; uint8_t v___x_3524_; 
v_fst_3520_ = lean_ctor_get(v_snd_3516_, 0);
v_snd_3521_ = lean_ctor_get(v_snd_3516_, 1);
v_fst_3522_ = lean_ctor_get(v_snd_3518_, 0);
v_snd_3523_ = lean_ctor_get(v_snd_3518_, 1);
v___x_3524_ = l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2_spec__3(v_fst_3520_, v_fst_3522_);
if (v___x_3524_ == 0)
{
v___y_3504_ = v___x_3524_;
goto v___jp_3503_;
}
else
{
uint8_t v___x_3525_; 
v___x_3525_ = l_Lean_Lsp_instBEqRange_beq(v_snd_3521_, v_snd_3523_);
v___y_3504_ = v___x_3525_;
goto v___jp_3503_;
}
}
v___jp_3503_:
{
if (v___y_3504_ == 0)
{
lean_object* v_tail_3505_; lean_object* v___x_3507_; 
v_tail_3505_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__4(v_a_3490_, v_a_3491_, v_tail_3499_);
if (v_isShared_3502_ == 0)
{
lean_ctor_set(v___x_3501_, 2, v_tail_3505_);
v___x_3507_ = v___x_3501_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_key_3497_);
lean_ctor_set(v_reuseFailAlloc_3508_, 1, v_value_3498_);
lean_ctor_set(v_reuseFailAlloc_3508_, 2, v_tail_3505_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
else
{
lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v_val_3511_; lean_object* v___x_3513_; 
lean_dec(v_key_3497_);
v___x_3509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3509_, 0, v_value_3498_);
v___x_3510_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__4___lam__0(v_a_3490_, v___x_3509_);
v_val_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_val_3511_);
lean_dec(v___x_3510_);
if (v_isShared_3502_ == 0)
{
lean_ctor_set(v___x_3501_, 1, v_val_3511_);
lean_ctor_set(v___x_3501_, 0, v_a_3491_);
v___x_3513_ = v___x_3501_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_a_3491_);
lean_ctor_set(v_reuseFailAlloc_3514_, 1, v_val_3511_);
lean_ctor_set(v_reuseFailAlloc_3514_, 2, v_tail_3499_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___redArg(lean_object* v_a_3527_, lean_object* v_x_3528_){
_start:
{
if (lean_obj_tag(v_x_3528_) == 0)
{
uint8_t v___x_3529_; 
v___x_3529_ = 0;
return v___x_3529_;
}
else
{
lean_object* v_key_3530_; lean_object* v_tail_3531_; uint8_t v___y_3533_; lean_object* v_fst_3535_; lean_object* v_snd_3536_; lean_object* v_fst_3537_; lean_object* v_snd_3538_; uint8_t v___x_3539_; 
v_key_3530_ = lean_ctor_get(v_x_3528_, 0);
v_tail_3531_ = lean_ctor_get(v_x_3528_, 2);
v_fst_3535_ = lean_ctor_get(v_key_3530_, 0);
v_snd_3536_ = lean_ctor_get(v_key_3530_, 1);
v_fst_3537_ = lean_ctor_get(v_a_3527_, 0);
v_snd_3538_ = lean_ctor_get(v_a_3527_, 1);
v___x_3539_ = l_Lean_Lsp_instBEqRefIdent_beq(v_fst_3535_, v_fst_3537_);
if (v___x_3539_ == 0)
{
v___y_3533_ = v___x_3539_;
goto v___jp_3532_;
}
else
{
lean_object* v_fst_3540_; lean_object* v_snd_3541_; lean_object* v_fst_3542_; lean_object* v_snd_3543_; uint8_t v___x_3544_; 
v_fst_3540_ = lean_ctor_get(v_snd_3536_, 0);
v_snd_3541_ = lean_ctor_get(v_snd_3536_, 1);
v_fst_3542_ = lean_ctor_get(v_snd_3538_, 0);
v_snd_3543_ = lean_ctor_get(v_snd_3538_, 1);
v___x_3544_ = l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2_spec__3(v_fst_3540_, v_fst_3542_);
if (v___x_3544_ == 0)
{
v___y_3533_ = v___x_3544_;
goto v___jp_3532_;
}
else
{
uint8_t v___x_3545_; 
v___x_3545_ = l_Lean_Lsp_instBEqRange_beq(v_snd_3541_, v_snd_3543_);
v___y_3533_ = v___x_3545_;
goto v___jp_3532_;
}
}
v___jp_3532_:
{
if (v___y_3533_ == 0)
{
v_x_3528_ = v_tail_3531_;
goto _start;
}
else
{
return v___y_3533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___redArg___boxed(lean_object* v_a_3546_, lean_object* v_x_3547_){
_start:
{
uint8_t v_res_3548_; lean_object* v_r_3549_; 
v_res_3548_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___redArg(v_a_3546_, v_x_3547_);
lean_dec(v_x_3547_);
lean_dec_ref(v_a_3546_);
v_r_3549_ = lean_box(v_res_3548_);
return v_r_3549_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1(lean_object* v_a_3550_, lean_object* v_m_3551_, lean_object* v_a_3552_){
_start:
{
lean_object* v___y_3554_; size_t v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v_snd_3560_; lean_object* v_size_3561_; lean_object* v_buckets_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3621_; 
v_snd_3560_ = lean_ctor_get(v_a_3552_, 1);
v_size_3561_ = lean_ctor_get(v_m_3551_, 0);
v_buckets_3562_ = lean_ctor_get(v_m_3551_, 1);
v_isSharedCheck_3621_ = !lean_is_exclusive(v_m_3551_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3564_ = v_m_3551_;
v_isShared_3565_ = v_isSharedCheck_3621_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_buckets_3562_);
lean_inc(v_size_3561_);
lean_dec(v_m_3551_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3621_;
goto v_resetjp_3563_;
}
v___jp_3553_:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3558_ = lean_array_uset(v___y_3554_, v___y_3555_, v___y_3556_);
v___x_3559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3559_, 0, v___y_3557_);
lean_ctor_set(v___x_3559_, 1, v___x_3558_);
return v___x_3559_;
}
v_resetjp_3563_:
{
lean_object* v_fst_3566_; lean_object* v_fst_3567_; lean_object* v_snd_3568_; lean_object* v___x_3569_; uint64_t v___x_3570_; uint64_t v___y_3572_; uint64_t v___y_3613_; 
v_fst_3566_ = lean_ctor_get(v_a_3552_, 0);
v_fst_3567_ = lean_ctor_get(v_snd_3560_, 0);
v_snd_3568_ = lean_ctor_get(v_snd_3560_, 1);
v___x_3569_ = lean_array_get_size(v_buckets_3562_);
v___x_3570_ = l_Lean_Lsp_instHashableRefIdent_hash(v_fst_3566_);
if (lean_obj_tag(v_fst_3567_) == 0)
{
uint64_t v___x_3616_; 
v___x_3616_ = 11ULL;
v___y_3572_ = v___x_3616_;
goto v___jp_3571_;
}
else
{
lean_object* v_val_3617_; uint8_t v___x_3618_; 
v_val_3617_ = lean_ctor_get(v_fst_3567_, 0);
v___x_3618_ = lean_unbox(v_val_3617_);
if (v___x_3618_ == 0)
{
uint64_t v___x_3619_; 
v___x_3619_ = 13ULL;
v___y_3613_ = v___x_3619_;
goto v___jp_3612_;
}
else
{
uint64_t v___x_3620_; 
v___x_3620_ = 11ULL;
v___y_3613_ = v___x_3620_;
goto v___jp_3612_;
}
}
v___jp_3571_:
{
uint64_t v___x_3573_; uint64_t v___x_3574_; uint64_t v___x_3575_; uint64_t v___x_3576_; uint64_t v___x_3577_; uint64_t v_fold_3578_; uint64_t v___x_3579_; uint64_t v___x_3580_; uint64_t v___x_3581_; size_t v___x_3582_; size_t v___x_3583_; size_t v___x_3584_; size_t v___x_3585_; size_t v___x_3586_; lean_object* v_bkt_3587_; uint8_t v___x_3588_; 
v___x_3573_ = l_Lean_Lsp_instHashableRange_hash(v_snd_3568_);
v___x_3574_ = lean_uint64_mix_hash(v___y_3572_, v___x_3573_);
v___x_3575_ = lean_uint64_mix_hash(v___x_3570_, v___x_3574_);
v___x_3576_ = 32ULL;
v___x_3577_ = lean_uint64_shift_right(v___x_3575_, v___x_3576_);
v_fold_3578_ = lean_uint64_xor(v___x_3575_, v___x_3577_);
v___x_3579_ = 16ULL;
v___x_3580_ = lean_uint64_shift_right(v_fold_3578_, v___x_3579_);
v___x_3581_ = lean_uint64_xor(v_fold_3578_, v___x_3580_);
v___x_3582_ = lean_uint64_to_usize(v___x_3581_);
v___x_3583_ = lean_usize_of_nat(v___x_3569_);
v___x_3584_ = ((size_t)1ULL);
v___x_3585_ = lean_usize_sub(v___x_3583_, v___x_3584_);
v___x_3586_ = lean_usize_land(v___x_3582_, v___x_3585_);
v_bkt_3587_ = lean_array_uget_borrowed(v_buckets_3562_, v___x_3586_);
v___x_3588_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___redArg(v_a_3552_, v_bkt_3587_);
if (v___x_3588_ == 0)
{
lean_object* v___x_3589_; lean_object* v_size_x27_3590_; lean_object* v___x_3591_; lean_object* v_buckets_x27_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; uint8_t v___x_3598_; 
v___x_3589_ = lean_unsigned_to_nat(1u);
v_size_x27_3590_ = lean_nat_add(v_size_3561_, v___x_3589_);
lean_dec(v_size_3561_);
lean_inc(v_bkt_3587_);
v___x_3591_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3591_, 0, v_a_3552_);
lean_ctor_set(v___x_3591_, 1, v_a_3550_);
lean_ctor_set(v___x_3591_, 2, v_bkt_3587_);
v_buckets_x27_3592_ = lean_array_uset(v_buckets_3562_, v___x_3586_, v___x_3591_);
v___x_3593_ = lean_unsigned_to_nat(4u);
v___x_3594_ = lean_nat_mul(v_size_x27_3590_, v___x_3593_);
v___x_3595_ = lean_unsigned_to_nat(3u);
v___x_3596_ = lean_nat_div(v___x_3594_, v___x_3595_);
lean_dec(v___x_3594_);
v___x_3597_ = lean_array_get_size(v_buckets_x27_3592_);
v___x_3598_ = lean_nat_dec_le(v___x_3596_, v___x_3597_);
lean_dec(v___x_3596_);
if (v___x_3598_ == 0)
{
lean_object* v_val_3599_; lean_object* v___x_3601_; 
v_val_3599_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3___redArg(v_buckets_x27_3592_);
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 1, v_val_3599_);
lean_ctor_set(v___x_3564_, 0, v_size_x27_3590_);
v___x_3601_ = v___x_3564_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_size_x27_3590_);
lean_ctor_set(v_reuseFailAlloc_3602_, 1, v_val_3599_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
else
{
lean_object* v___x_3604_; 
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 1, v_buckets_x27_3592_);
lean_ctor_set(v___x_3564_, 0, v_size_x27_3590_);
v___x_3604_ = v___x_3564_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_size_x27_3590_);
lean_ctor_set(v_reuseFailAlloc_3605_, 1, v_buckets_x27_3592_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
else
{
lean_object* v___x_3606_; lean_object* v_buckets_x27_3607_; lean_object* v_bkt_x27_3608_; uint8_t v___x_3609_; 
lean_inc(v_bkt_3587_);
lean_del_object(v___x_3564_);
v___x_3606_ = lean_box(0);
v_buckets_x27_3607_ = lean_array_uset(v_buckets_3562_, v___x_3586_, v___x_3606_);
lean_inc_ref(v_a_3552_);
v_bkt_x27_3608_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__4(v_a_3550_, v_a_3552_, v_bkt_3587_);
v___x_3609_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___redArg(v_a_3552_, v_bkt_x27_3608_);
lean_dec_ref(v_a_3552_);
if (v___x_3609_ == 0)
{
lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3610_ = lean_unsigned_to_nat(1u);
v___x_3611_ = lean_nat_sub(v_size_3561_, v___x_3610_);
lean_dec(v_size_3561_);
v___y_3554_ = v_buckets_x27_3607_;
v___y_3555_ = v___x_3586_;
v___y_3556_ = v_bkt_x27_3608_;
v___y_3557_ = v___x_3611_;
goto v___jp_3553_;
}
else
{
v___y_3554_ = v_buckets_x27_3607_;
v___y_3555_ = v___x_3586_;
v___y_3556_ = v_bkt_x27_3608_;
v___y_3557_ = v_size_3561_;
goto v___jp_3553_;
}
}
}
v___jp_3612_:
{
uint64_t v___x_3614_; uint64_t v___x_3615_; 
v___x_3614_ = 13ULL;
v___x_3615_ = lean_uint64_mix_hash(v___y_3613_, v___x_3614_);
v___y_3572_ = v___x_3615_;
goto v___jp_3571_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_dedupReferences_spec__2(uint8_t v_allowSimultaneousBinderUse_3622_, lean_object* v_as_3623_, size_t v_sz_3624_, size_t v_i_3625_, lean_object* v_b_3626_){
_start:
{
uint8_t v___x_3627_; 
v___x_3627_ = lean_usize_dec_lt(v_i_3625_, v_sz_3624_);
if (v___x_3627_ == 0)
{
return v_b_3626_;
}
else
{
lean_object* v_a_3628_; lean_object* v___y_3630_; 
v_a_3628_ = lean_array_uget_borrowed(v_as_3623_, v_i_3625_);
if (v_allowSimultaneousBinderUse_3622_ == 0)
{
lean_object* v___x_3639_; 
v___x_3639_ = lean_box(0);
v___y_3630_ = v___x_3639_;
goto v___jp_3629_;
}
else
{
uint8_t v_isBinder_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; 
v_isBinder_3640_ = lean_ctor_get_uint8(v_a_3628_, sizeof(void*)*6);
v___x_3641_ = lean_box(v_isBinder_3640_);
v___x_3642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
v___y_3630_ = v___x_3642_;
goto v___jp_3629_;
}
v___jp_3629_:
{
lean_object* v_ident_3631_; lean_object* v_range_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; size_t v___x_3636_; size_t v___x_3637_; 
v_ident_3631_ = lean_ctor_get(v_a_3628_, 0);
v_range_3632_ = lean_ctor_get(v_a_3628_, 2);
lean_inc_ref(v_range_3632_);
v___x_3633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3633_, 0, v___y_3630_);
lean_ctor_set(v___x_3633_, 1, v_range_3632_);
lean_inc_ref(v_ident_3631_);
v___x_3634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3634_, 0, v_ident_3631_);
lean_ctor_set(v___x_3634_, 1, v___x_3633_);
lean_inc(v_a_3628_);
v___x_3635_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1(v_a_3628_, v_b_3626_, v___x_3634_);
v___x_3636_ = ((size_t)1ULL);
v___x_3637_ = lean_usize_add(v_i_3625_, v___x_3636_);
v_i_3625_ = v___x_3637_;
v_b_3626_ = v___x_3635_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_dedupReferences_spec__2___boxed(lean_object* v_allowSimultaneousBinderUse_3643_, lean_object* v_as_3644_, lean_object* v_sz_3645_, lean_object* v_i_3646_, lean_object* v_b_3647_){
_start:
{
uint8_t v_allowSimultaneousBinderUse_boxed_3648_; size_t v_sz_boxed_3649_; size_t v_i_boxed_3650_; lean_object* v_res_3651_; 
v_allowSimultaneousBinderUse_boxed_3648_ = lean_unbox(v_allowSimultaneousBinderUse_3643_);
v_sz_boxed_3649_ = lean_unbox_usize(v_sz_3645_);
lean_dec(v_sz_3645_);
v_i_boxed_3650_ = lean_unbox_usize(v_i_3646_);
lean_dec(v_i_3646_);
v_res_3651_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_dedupReferences_spec__2(v_allowSimultaneousBinderUse_boxed_3648_, v_as_3644_, v_sz_boxed_3649_, v_i_boxed_3650_, v_b_3647_);
lean_dec_ref(v_as_3644_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_dedupReferences_spec__3(lean_object* v_x_3652_, lean_object* v_x_3653_){
_start:
{
if (lean_obj_tag(v_x_3653_) == 0)
{
return v_x_3652_;
}
else
{
lean_object* v_value_3654_; lean_object* v_tail_3655_; lean_object* v___x_3656_; 
v_value_3654_ = lean_ctor_get(v_x_3653_, 1);
lean_inc(v_value_3654_);
v_tail_3655_ = lean_ctor_get(v_x_3653_, 2);
lean_inc(v_tail_3655_);
lean_dec_ref_known(v_x_3653_, 3);
v___x_3656_ = lean_array_push(v_x_3652_, v_value_3654_);
v_x_3652_ = v___x_3656_;
v_x_3653_ = v_tail_3655_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_dedupReferences_spec__4(lean_object* v_as_3658_, size_t v_i_3659_, size_t v_stop_3660_, lean_object* v_b_3661_){
_start:
{
uint8_t v___x_3662_; 
v___x_3662_ = lean_usize_dec_eq(v_i_3659_, v_stop_3660_);
if (v___x_3662_ == 0)
{
lean_object* v___x_3663_; lean_object* v___x_3664_; size_t v___x_3665_; size_t v___x_3666_; 
v___x_3663_ = lean_array_uget_borrowed(v_as_3658_, v_i_3659_);
lean_inc(v___x_3663_);
v___x_3664_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_dedupReferences_spec__3(v_b_3661_, v___x_3663_);
v___x_3665_ = ((size_t)1ULL);
v___x_3666_ = lean_usize_add(v_i_3659_, v___x_3665_);
v_i_3659_ = v___x_3666_;
v_b_3661_ = v___x_3664_;
goto _start;
}
else
{
return v_b_3661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_dedupReferences_spec__4___boxed(lean_object* v_as_3668_, lean_object* v_i_3669_, lean_object* v_stop_3670_, lean_object* v_b_3671_){
_start:
{
size_t v_i_boxed_3672_; size_t v_stop_boxed_3673_; lean_object* v_res_3674_; 
v_i_boxed_3672_ = lean_unbox_usize(v_i_3669_);
lean_dec(v_i_3669_);
v_stop_boxed_3673_ = lean_unbox_usize(v_stop_3670_);
lean_dec(v_stop_3670_);
v_res_3674_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_dedupReferences_spec__4(v_as_3668_, v_i_boxed_3672_, v_stop_boxed_3673_, v_b_3671_);
lean_dec_ref(v_as_3668_);
return v_res_3674_;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__0(void){
_start:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3675_ = lean_box(0);
v___x_3676_ = lean_unsigned_to_nat(16u);
v___x_3677_ = lean_mk_array(v___x_3676_, v___x_3675_);
return v___x_3677_;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__1(void){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v_refsByIdAndRange_3680_; 
v___x_3678_ = lean_obj_once(&l_Lean_Server_dedupReferences___closed__0, &l_Lean_Server_dedupReferences___closed__0_once, _init_l_Lean_Server_dedupReferences___closed__0);
v___x_3679_ = lean_unsigned_to_nat(0u);
v_refsByIdAndRange_3680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_refsByIdAndRange_3680_, 0, v___x_3679_);
lean_ctor_set(v_refsByIdAndRange_3680_, 1, v___x_3678_);
return v_refsByIdAndRange_3680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences(lean_object* v_refs_3681_, uint8_t v_allowSimultaneousBinderUse_3682_){
_start:
{
lean_object* v___y_3684_; lean_object* v___y_3685_; lean_object* v___y_3686_; lean_object* v___y_3687_; lean_object* v___y_3692_; lean_object* v___x_3699_; lean_object* v_refsByIdAndRange_3700_; size_t v_sz_3701_; size_t v___x_3702_; lean_object* v___x_3703_; lean_object* v_buckets_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; uint8_t v___x_3707_; 
v___x_3699_ = lean_unsigned_to_nat(0u);
v_refsByIdAndRange_3700_ = lean_obj_once(&l_Lean_Server_dedupReferences___closed__1, &l_Lean_Server_dedupReferences___closed__1_once, _init_l_Lean_Server_dedupReferences___closed__1);
v_sz_3701_ = lean_array_size(v_refs_3681_);
v___x_3702_ = ((size_t)0ULL);
v___x_3703_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_dedupReferences_spec__2(v_allowSimultaneousBinderUse_3682_, v_refs_3681_, v_sz_3701_, v___x_3702_, v_refsByIdAndRange_3700_);
v_buckets_3704_ = lean_ctor_get(v___x_3703_, 1);
lean_inc_ref(v_buckets_3704_);
lean_dec_ref(v___x_3703_);
v___x_3705_ = ((lean_object*)(l_Lean_Server_RefInfo_empty___closed__0));
v___x_3706_ = lean_array_get_size(v_buckets_3704_);
v___x_3707_ = lean_nat_dec_lt(v___x_3699_, v___x_3706_);
if (v___x_3707_ == 0)
{
lean_dec_ref(v_buckets_3704_);
v___y_3692_ = v___x_3705_;
goto v___jp_3691_;
}
else
{
size_t v___x_3708_; lean_object* v___x_3709_; 
v___x_3708_ = lean_usize_of_nat(v___x_3706_);
v___x_3709_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_dedupReferences_spec__4(v_buckets_3704_, v___x_3702_, v___x_3708_, v___x_3705_);
lean_dec_ref(v_buckets_3704_);
v___y_3692_ = v___x_3709_;
goto v___jp_3691_;
}
v___jp_3683_:
{
uint8_t v___x_3688_; 
v___x_3688_ = lean_nat_dec_le(v___y_3687_, v___y_3684_);
if (v___x_3688_ == 0)
{
lean_object* v___x_3689_; 
lean_dec(v___y_3684_);
lean_inc(v___y_3687_);
v___x_3689_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg(v___y_3686_, v___y_3685_, v___y_3687_, v___y_3687_);
lean_dec(v___y_3687_);
lean_dec(v___y_3686_);
return v___x_3689_;
}
else
{
lean_object* v___x_3690_; 
v___x_3690_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg(v___y_3686_, v___y_3685_, v___y_3687_, v___y_3684_);
lean_dec(v___y_3684_);
lean_dec(v___y_3686_);
return v___x_3690_;
}
}
v___jp_3691_:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; uint8_t v___x_3695_; 
v___x_3693_ = lean_array_get_size(v___y_3692_);
v___x_3694_ = lean_unsigned_to_nat(0u);
v___x_3695_ = lean_nat_dec_eq(v___x_3693_, v___x_3694_);
if (v___x_3695_ == 0)
{
lean_object* v___x_3696_; lean_object* v___x_3697_; uint8_t v___x_3698_; 
v___x_3696_ = lean_unsigned_to_nat(1u);
v___x_3697_ = lean_nat_sub(v___x_3693_, v___x_3696_);
v___x_3698_ = lean_nat_dec_le(v___x_3694_, v___x_3697_);
if (v___x_3698_ == 0)
{
lean_inc(v___x_3697_);
v___y_3684_ = v___x_3697_;
v___y_3685_ = v___y_3692_;
v___y_3686_ = v___x_3693_;
v___y_3687_ = v___x_3697_;
goto v___jp_3683_;
}
else
{
v___y_3684_ = v___x_3697_;
v___y_3685_ = v___y_3692_;
v___y_3686_ = v___x_3693_;
v___y_3687_ = v___x_3694_;
goto v___jp_3683_;
}
}
else
{
return v___y_3692_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_dedupReferences___boxed(lean_object* v_refs_3710_, lean_object* v_allowSimultaneousBinderUse_3711_){
_start:
{
uint8_t v_allowSimultaneousBinderUse_boxed_3712_; lean_object* v_res_3713_; 
v_allowSimultaneousBinderUse_boxed_3712_ = lean_unbox(v_allowSimultaneousBinderUse_3711_);
v_res_3713_ = l_Lean_Server_dedupReferences(v_refs_3710_, v_allowSimultaneousBinderUse_boxed_3712_);
lean_dec_ref(v_refs_3710_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0(lean_object* v_n_3714_, lean_object* v_as_3715_, lean_object* v_lo_3716_, lean_object* v_hi_3717_, lean_object* v_w_3718_, lean_object* v_hlo_3719_, lean_object* v_hhi_3720_){
_start:
{
lean_object* v___x_3721_; 
v___x_3721_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___redArg(v_n_3714_, v_as_3715_, v_lo_3716_, v_hi_3717_);
return v___x_3721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0___boxed(lean_object* v_n_3722_, lean_object* v_as_3723_, lean_object* v_lo_3724_, lean_object* v_hi_3725_, lean_object* v_w_3726_, lean_object* v_hlo_3727_, lean_object* v_hhi_3728_){
_start:
{
lean_object* v_res_3729_; 
v_res_3729_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0(v_n_3722_, v_as_3723_, v_lo_3724_, v_hi_3725_, v_w_3726_, v_hlo_3727_, v_hhi_3728_);
lean_dec(v_hi_3725_);
lean_dec(v_n_3722_);
return v_res_3729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0(lean_object* v_n_3730_, lean_object* v_lo_3731_, lean_object* v_hi_3732_, lean_object* v_hhi_3733_, lean_object* v_pivot_3734_, lean_object* v_as_3735_, lean_object* v_i_3736_, lean_object* v_k_3737_, lean_object* v_ilo_3738_, lean_object* v_ik_3739_, lean_object* v_w_3740_){
_start:
{
lean_object* v___x_3741_; 
v___x_3741_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0___redArg(v_hi_3732_, v_pivot_3734_, v_as_3735_, v_i_3736_, v_k_3737_);
return v___x_3741_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0___boxed(lean_object* v_n_3742_, lean_object* v_lo_3743_, lean_object* v_hi_3744_, lean_object* v_hhi_3745_, lean_object* v_pivot_3746_, lean_object* v_as_3747_, lean_object* v_i_3748_, lean_object* v_k_3749_, lean_object* v_ilo_3750_, lean_object* v_ik_3751_, lean_object* v_w_3752_){
_start:
{
lean_object* v_res_3753_; 
v_res_3753_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_dedupReferences_spec__0_spec__0(v_n_3742_, v_lo_3743_, v_hi_3744_, v_hhi_3745_, v_pivot_3746_, v_as_3747_, v_i_3748_, v_k_3749_, v_ilo_3750_, v_ik_3751_, v_w_3752_);
lean_dec_ref(v_pivot_3746_);
lean_dec(v_hi_3744_);
lean_dec(v_lo_3743_);
lean_dec(v_n_3742_);
return v_res_3753_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2(lean_object* v_00_u03b2_3754_, lean_object* v_a_3755_, lean_object* v_x_3756_){
_start:
{
uint8_t v___x_3757_; 
v___x_3757_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___redArg(v_a_3755_, v_x_3756_);
return v___x_3757_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3758_, lean_object* v_a_3759_, lean_object* v_x_3760_){
_start:
{
uint8_t v_res_3761_; lean_object* v_r_3762_; 
v_res_3761_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__2(v_00_u03b2_3758_, v_a_3759_, v_x_3760_);
lean_dec(v_x_3760_);
lean_dec_ref(v_a_3759_);
v_r_3762_ = lean_box(v_res_3761_);
return v_r_3762_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3(lean_object* v_00_u03b2_3763_, lean_object* v_data_3764_){
_start:
{
lean_object* v___x_3765_; 
v___x_3765_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3___redArg(v_data_3764_);
return v___x_3765_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_3766_, lean_object* v_i_3767_, lean_object* v_source_3768_, lean_object* v_target_3769_){
_start:
{
lean_object* v___x_3770_; 
v___x_3770_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5___redArg(v_i_3767_, v_source_3768_, v_target_3769_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_3771_, lean_object* v_x_3772_, lean_object* v_x_3773_){
_start:
{
lean_object* v___x_3774_; 
v___x_3774_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_dedupReferences_spec__1_spec__3_spec__5_spec__9___redArg(v_x_3772_, v_x_3773_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__0(lean_object* v_as_3775_, size_t v_i_3776_, size_t v_stop_3777_, lean_object* v_b_3778_){
_start:
{
uint8_t v___x_3779_; 
v___x_3779_ = lean_usize_dec_eq(v_i_3776_, v_stop_3777_);
if (v___x_3779_ == 0)
{
lean_object* v___x_3780_; lean_object* v___x_3781_; size_t v___x_3782_; size_t v___x_3783_; 
v___x_3780_ = lean_array_uget_borrowed(v_as_3775_, v_i_3776_);
lean_inc(v___x_3780_);
v___x_3781_ = l_Lean_Server_ModuleRefs_addRef(v_b_3778_, v___x_3780_);
v___x_3782_ = ((size_t)1ULL);
v___x_3783_ = lean_usize_add(v_i_3776_, v___x_3782_);
v_i_3776_ = v___x_3783_;
v_b_3778_ = v___x_3781_;
goto _start;
}
else
{
return v_b_3778_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__0___boxed(lean_object* v_as_3785_, lean_object* v_i_3786_, lean_object* v_stop_3787_, lean_object* v_b_3788_){
_start:
{
size_t v_i_boxed_3789_; size_t v_stop_boxed_3790_; lean_object* v_res_3791_; 
v_i_boxed_3789_ = lean_unbox_usize(v_i_3786_);
lean_dec(v_i_3786_);
v_stop_boxed_3790_ = lean_unbox_usize(v_stop_3787_);
lean_dec(v_stop_3787_);
v_res_3791_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__0(v_as_3785_, v_i_boxed_3789_, v_stop_boxed_3790_, v_b_3788_);
lean_dec_ref(v_as_3785_);
return v_res_3791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__1(lean_object* v_as_3792_, size_t v_i_3793_, size_t v_stop_3794_, lean_object* v_b_3795_){
_start:
{
lean_object* v___y_3797_; uint8_t v___x_3801_; 
v___x_3801_ = lean_usize_dec_eq(v_i_3793_, v_stop_3794_);
if (v___x_3801_ == 0)
{
lean_object* v___x_3802_; lean_object* v_ident_3803_; 
v___x_3802_ = lean_array_uget_borrowed(v_as_3792_, v_i_3793_);
v_ident_3803_ = lean_ctor_get(v___x_3802_, 0);
if (lean_obj_tag(v_ident_3803_) == 1)
{
v___y_3797_ = v_b_3795_;
goto v___jp_3796_;
}
else
{
lean_object* v___x_3804_; 
lean_inc(v___x_3802_);
v___x_3804_ = lean_array_push(v_b_3795_, v___x_3802_);
v___y_3797_ = v___x_3804_;
goto v___jp_3796_;
}
}
else
{
return v_b_3795_;
}
v___jp_3796_:
{
size_t v___x_3798_; size_t v___x_3799_; 
v___x_3798_ = ((size_t)1ULL);
v___x_3799_ = lean_usize_add(v_i_3793_, v___x_3798_);
v_i_3793_ = v___x_3799_;
v_b_3795_ = v___y_3797_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__1___boxed(lean_object* v_as_3805_, lean_object* v_i_3806_, lean_object* v_stop_3807_, lean_object* v_b_3808_){
_start:
{
size_t v_i_boxed_3809_; size_t v_stop_boxed_3810_; lean_object* v_res_3811_; 
v_i_boxed_3809_ = lean_unbox_usize(v_i_3806_);
lean_dec(v_i_3806_);
v_stop_boxed_3810_ = lean_unbox_usize(v_stop_3807_);
lean_dec(v_stop_3807_);
v_res_3811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__1(v_as_3805_, v_i_boxed_3809_, v_stop_boxed_3810_, v_b_3808_);
lean_dec_ref(v_as_3805_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs(lean_object* v_text_3812_, lean_object* v_trees_3813_, uint8_t v_localVars_3814_, uint8_t v_allowSimultaneousBinderUse_3815_){
_start:
{
lean_object* v_refs_3817_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v_refs_3831_; 
v___x_3829_ = l_Lean_Server_findReferences(v_text_3812_, v_trees_3813_);
v___x_3830_ = l_Lean_Server_combineIdents(v_trees_3813_, v___x_3829_);
lean_dec_ref(v___x_3829_);
v_refs_3831_ = l_Lean_Server_dedupReferences(v___x_3830_, v_allowSimultaneousBinderUse_3815_);
lean_dec_ref(v___x_3830_);
if (v_localVars_3814_ == 0)
{
lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; uint8_t v___x_3835_; 
v___x_3832_ = lean_unsigned_to_nat(0u);
v___x_3833_ = lean_array_get_size(v_refs_3831_);
v___x_3834_ = ((lean_object*)(l_Lean_Server_RefInfo_empty___closed__0));
v___x_3835_ = lean_nat_dec_lt(v___x_3832_, v___x_3833_);
if (v___x_3835_ == 0)
{
lean_dec_ref(v_refs_3831_);
v_refs_3817_ = v___x_3834_;
goto v___jp_3816_;
}
else
{
uint8_t v___x_3836_; 
v___x_3836_ = lean_nat_dec_le(v___x_3833_, v___x_3833_);
if (v___x_3836_ == 0)
{
if (v___x_3835_ == 0)
{
lean_dec_ref(v_refs_3831_);
v_refs_3817_ = v___x_3834_;
goto v___jp_3816_;
}
else
{
size_t v___x_3837_; size_t v___x_3838_; lean_object* v___x_3839_; 
v___x_3837_ = ((size_t)0ULL);
v___x_3838_ = lean_usize_of_nat(v___x_3833_);
v___x_3839_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__1(v_refs_3831_, v___x_3837_, v___x_3838_, v___x_3834_);
lean_dec_ref(v_refs_3831_);
v_refs_3817_ = v___x_3839_;
goto v___jp_3816_;
}
}
else
{
size_t v___x_3840_; size_t v___x_3841_; lean_object* v___x_3842_; 
v___x_3840_ = ((size_t)0ULL);
v___x_3841_ = lean_usize_of_nat(v___x_3833_);
v___x_3842_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__1(v_refs_3831_, v___x_3840_, v___x_3841_, v___x_3834_);
lean_dec_ref(v_refs_3831_);
v_refs_3817_ = v___x_3842_;
goto v___jp_3816_;
}
}
}
else
{
v_refs_3817_ = v_refs_3831_;
goto v___jp_3816_;
}
v___jp_3816_:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; uint8_t v___x_3821_; 
v___x_3818_ = lean_box(1);
v___x_3819_ = lean_unsigned_to_nat(0u);
v___x_3820_ = lean_array_get_size(v_refs_3817_);
v___x_3821_ = lean_nat_dec_lt(v___x_3819_, v___x_3820_);
if (v___x_3821_ == 0)
{
lean_dec_ref(v_refs_3817_);
return v___x_3818_;
}
else
{
uint8_t v___x_3822_; 
v___x_3822_ = lean_nat_dec_le(v___x_3820_, v___x_3820_);
if (v___x_3822_ == 0)
{
if (v___x_3821_ == 0)
{
lean_dec_ref(v_refs_3817_);
return v___x_3818_;
}
else
{
size_t v___x_3823_; size_t v___x_3824_; lean_object* v___x_3825_; 
v___x_3823_ = ((size_t)0ULL);
v___x_3824_ = lean_usize_of_nat(v___x_3820_);
v___x_3825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__0(v_refs_3817_, v___x_3823_, v___x_3824_, v___x_3818_);
lean_dec_ref(v_refs_3817_);
return v___x_3825_;
}
}
else
{
size_t v___x_3826_; size_t v___x_3827_; lean_object* v___x_3828_; 
v___x_3826_ = ((size_t)0ULL);
v___x_3827_ = lean_usize_of_nat(v___x_3820_);
v___x_3828_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_findModuleRefs_spec__0(v_refs_3817_, v___x_3826_, v___x_3827_, v___x_3818_);
lean_dec_ref(v_refs_3817_);
return v___x_3828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs___boxed(lean_object* v_text_3843_, lean_object* v_trees_3844_, lean_object* v_localVars_3845_, lean_object* v_allowSimultaneousBinderUse_3846_){
_start:
{
uint8_t v_localVars_boxed_3847_; uint8_t v_allowSimultaneousBinderUse_boxed_3848_; lean_object* v_res_3849_; 
v_localVars_boxed_3847_ = lean_unbox(v_localVars_3845_);
v_allowSimultaneousBinderUse_boxed_3848_ = lean_unbox(v_allowSimultaneousBinderUse_3846_);
v_res_3849_ = l_Lean_Server_findModuleRefs(v_text_3843_, v_trees_3844_, v_localVars_boxed_3847_, v_allowSimultaneousBinderUse_boxed_3848_);
lean_dec_ref(v_trees_3844_);
return v_res_3849_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_References_0__Lean_Server_ModuleImport_collapseIdenticalImports_x3f_collapseMetaKinds(uint8_t v_a_3857_, uint8_t v_a_3858_){
_start:
{
switch(v_a_3857_)
{
case 0:
{
if (v_a_3858_ == 1)
{
uint8_t v___x_3859_; 
v___x_3859_ = 2;
return v___x_3859_;
}
else
{
return v_a_3858_;
}
}
case 1:
{
if (v_a_3858_ == 0)
{
uint8_t v___x_3860_; 
v___x_3860_ = 2;
return v___x_3860_;
}
else
{
return v_a_3858_;
}
}
default: 
{
return v_a_3857_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_ModuleImport_collapseIdenticalImports_x3f_collapseMetaKinds___boxed(lean_object* v_a_3861_, lean_object* v_a_3862_){
_start:
{
uint8_t v_a_46__boxed_3863_; uint8_t v_a_47__boxed_3864_; uint8_t v_res_3865_; lean_object* v_r_3866_; 
v_a_46__boxed_3863_ = lean_unbox(v_a_3861_);
v_a_47__boxed_3864_ = lean_unbox(v_a_3862_);
v_res_3865_ = l___private_Lean_Server_References_0__Lean_Server_ModuleImport_collapseIdenticalImports_x3f_collapseMetaKinds(v_a_46__boxed_3863_, v_a_47__boxed_3864_);
v_r_3866_ = lean_box(v_res_3865_);
return v_r_3866_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0___redArg(lean_object* v_upperBound_3867_, lean_object* v_identicalImports_3868_, lean_object* v_a_3869_, lean_object* v_b_3870_){
_start:
{
uint8_t v___x_3871_; 
v___x_3871_ = lean_nat_dec_lt(v_a_3869_, v_upperBound_3867_);
if (v___x_3871_ == 0)
{
lean_object* v___x_3872_; 
lean_dec(v_a_3869_);
v___x_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3872_, 0, v_b_3870_);
return v___x_3872_;
}
else
{
lean_object* v_module_3873_; lean_object* v_uri_3874_; uint8_t v_isAll_3875_; uint8_t v_isPrivate_3876_; uint8_t v_metaKind_3877_; lean_object* v___x_3878_; lean_object* v_module_3879_; lean_object* v_uri_3880_; uint8_t v_isAll_3881_; uint8_t v_isPrivate_3882_; uint8_t v_metaKind_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3903_; 
v_module_3873_ = lean_ctor_get(v_b_3870_, 0);
lean_inc(v_module_3873_);
v_uri_3874_ = lean_ctor_get(v_b_3870_, 1);
lean_inc_ref(v_uri_3874_);
v_isAll_3875_ = lean_ctor_get_uint8(v_b_3870_, sizeof(void*)*2);
v_isPrivate_3876_ = lean_ctor_get_uint8(v_b_3870_, sizeof(void*)*2 + 1);
v_metaKind_3877_ = lean_ctor_get_uint8(v_b_3870_, sizeof(void*)*2 + 2);
lean_dec_ref(v_b_3870_);
v___x_3878_ = lean_array_fget(v_identicalImports_3868_, v_a_3869_);
v_module_3879_ = lean_ctor_get(v___x_3878_, 0);
v_uri_3880_ = lean_ctor_get(v___x_3878_, 1);
v_isAll_3881_ = lean_ctor_get_uint8(v___x_3878_, sizeof(void*)*2);
v_isPrivate_3882_ = lean_ctor_get_uint8(v___x_3878_, sizeof(void*)*2 + 1);
v_metaKind_3883_ = lean_ctor_get_uint8(v___x_3878_, sizeof(void*)*2 + 2);
v_isSharedCheck_3903_ = !lean_is_exclusive(v___x_3878_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3885_ = v___x_3878_;
v_isShared_3886_ = v_isSharedCheck_3903_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_uri_3880_);
lean_inc(v_module_3879_);
lean_dec(v___x_3878_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3903_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
uint8_t v___y_3888_; uint8_t v___y_3889_; uint8_t v___y_3898_; uint8_t v___x_3899_; 
v___x_3899_ = lean_name_eq(v_module_3873_, v_module_3879_);
lean_dec(v_module_3879_);
if (v___x_3899_ == 0)
{
lean_object* v___x_3900_; 
lean_del_object(v___x_3885_);
lean_dec_ref(v_uri_3880_);
lean_dec_ref(v_uri_3874_);
lean_dec(v_module_3873_);
lean_dec(v_a_3869_);
v___x_3900_ = lean_box(0);
return v___x_3900_;
}
else
{
uint8_t v___x_3901_; 
v___x_3901_ = lean_string_dec_eq(v_uri_3874_, v_uri_3880_);
lean_dec_ref(v_uri_3880_);
if (v___x_3901_ == 0)
{
lean_object* v___x_3902_; 
lean_del_object(v___x_3885_);
lean_dec_ref(v_uri_3874_);
lean_dec(v_module_3873_);
lean_dec(v_a_3869_);
v___x_3902_ = lean_box(0);
return v___x_3902_;
}
else
{
if (v_isAll_3875_ == 0)
{
v___y_3898_ = v_isAll_3881_;
goto v___jp_3897_;
}
else
{
v___y_3898_ = v___x_3871_;
goto v___jp_3897_;
}
}
}
v___jp_3887_:
{
uint8_t v___x_3890_; lean_object* v___x_3892_; 
v___x_3890_ = l___private_Lean_Server_References_0__Lean_Server_ModuleImport_collapseIdenticalImports_x3f_collapseMetaKinds(v_metaKind_3877_, v_metaKind_3883_);
if (v_isShared_3886_ == 0)
{
lean_ctor_set(v___x_3885_, 1, v_uri_3874_);
lean_ctor_set(v___x_3885_, 0, v_module_3873_);
v___x_3892_ = v___x_3885_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_module_3873_);
lean_ctor_set(v_reuseFailAlloc_3896_, 1, v_uri_3874_);
v___x_3892_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
lean_object* v___x_3893_; lean_object* v___x_3894_; 
lean_ctor_set_uint8(v___x_3892_, sizeof(void*)*2, v___y_3888_);
lean_ctor_set_uint8(v___x_3892_, sizeof(void*)*2 + 1, v___y_3889_);
lean_ctor_set_uint8(v___x_3892_, sizeof(void*)*2 + 2, v___x_3890_);
v___x_3893_ = lean_unsigned_to_nat(1u);
v___x_3894_ = lean_nat_add(v_a_3869_, v___x_3893_);
lean_dec(v_a_3869_);
v_a_3869_ = v___x_3894_;
v_b_3870_ = v___x_3892_;
goto _start;
}
}
v___jp_3897_:
{
if (v_isPrivate_3876_ == 0)
{
v___y_3888_ = v___y_3898_;
v___y_3889_ = v_isPrivate_3876_;
goto v___jp_3887_;
}
else
{
v___y_3888_ = v___y_3898_;
v___y_3889_ = v_isPrivate_3882_;
goto v___jp_3887_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0___redArg___boxed(lean_object* v_upperBound_3904_, lean_object* v_identicalImports_3905_, lean_object* v_a_3906_, lean_object* v_b_3907_){
_start:
{
lean_object* v_res_3908_; 
v_res_3908_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0___redArg(v_upperBound_3904_, v_identicalImports_3905_, v_a_3906_, v_b_3907_);
lean_dec_ref(v_identicalImports_3905_);
lean_dec(v_upperBound_3904_);
return v_res_3908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ModuleImport_collapseIdenticalImports_x3f(lean_object* v_identicalImports_3909_){
_start:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; uint8_t v___x_3912_; 
v___x_3910_ = lean_unsigned_to_nat(0u);
v___x_3911_ = lean_array_get_size(v_identicalImports_3909_);
v___x_3912_ = lean_nat_dec_lt(v___x_3910_, v___x_3911_);
if (v___x_3912_ == 0)
{
lean_object* v___x_3913_; 
v___x_3913_ = lean_box(0);
return v___x_3913_;
}
else
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; 
v___x_3914_ = lean_unsigned_to_nat(1u);
v___x_3915_ = lean_array_fget_borrowed(v_identicalImports_3909_, v___x_3910_);
lean_inc(v___x_3915_);
v___x_3916_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0___redArg(v___x_3911_, v_identicalImports_3909_, v___x_3914_, v___x_3915_);
return v___x_3916_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ModuleImport_collapseIdenticalImports_x3f___boxed(lean_object* v_identicalImports_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l_Lean_Server_ModuleImport_collapseIdenticalImports_x3f(v_identicalImports_3917_);
lean_dec_ref(v_identicalImports_3917_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0(lean_object* v_upperBound_3919_, lean_object* v_identicalImports_3920_, lean_object* v_inst_3921_, lean_object* v_R_3922_, lean_object* v_a_3923_, lean_object* v_b_3924_, lean_object* v_c_3925_){
_start:
{
lean_object* v___x_3926_; 
v___x_3926_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0___redArg(v_upperBound_3919_, v_identicalImports_3920_, v_a_3923_, v_b_3924_);
return v___x_3926_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0___boxed(lean_object* v_upperBound_3927_, lean_object* v_identicalImports_3928_, lean_object* v_inst_3929_, lean_object* v_R_3930_, lean_object* v_a_3931_, lean_object* v_b_3932_, lean_object* v_c_3933_){
_start:
{
lean_object* v_res_3934_; 
v_res_3934_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_ModuleImport_collapseIdenticalImports_x3f_spec__0(v_upperBound_3927_, v_identicalImports_3928_, v_inst_3929_, v_R_3930_, v_a_3931_, v_b_3932_, v_c_3933_);
lean_dec_ref(v_identicalImports_3928_);
lean_dec(v_upperBound_3927_);
return v_res_3934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_DirectImports_convertImportInfos___lam__0(lean_object* v_x_3941_){
_start:
{
lean_object* v_module_3942_; 
v_module_3942_ = lean_ctor_get(v_x_3941_, 0);
lean_inc(v_module_3942_);
return v_module_3942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_DirectImports_convertImportInfos___lam__0___boxed(lean_object* v_x_3943_){
_start:
{
lean_object* v_res_3944_; 
v_res_3944_ = l_Lean_Server_DirectImports_convertImportInfos___lam__0(v_x_3943_);
lean_dec_ref(v_x_3943_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_DirectImports_convertImportInfos_spec__4(lean_object* v_x_3945_, lean_object* v_x_3946_){
_start:
{
if (lean_obj_tag(v_x_3946_) == 0)
{
return v_x_3945_;
}
else
{
lean_object* v_key_3947_; lean_object* v_value_3948_; lean_object* v_tail_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v_key_3947_ = lean_ctor_get(v_x_3946_, 0);
v_value_3948_ = lean_ctor_get(v_x_3946_, 1);
v_tail_3949_ = lean_ctor_get(v_x_3946_, 2);
lean_inc(v_value_3948_);
lean_inc(v_key_3947_);
v___x_3950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3950_, 0, v_key_3947_);
lean_ctor_set(v___x_3950_, 1, v_value_3948_);
v___x_3951_ = lean_array_push(v_x_3945_, v___x_3950_);
v_x_3945_ = v___x_3951_;
v_x_3946_ = v_tail_3949_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_DirectImports_convertImportInfos_spec__4___boxed(lean_object* v_x_3953_, lean_object* v_x_3954_){
_start:
{
lean_object* v_res_3955_; 
v_res_3955_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_DirectImports_convertImportInfos_spec__4(v_x_3953_, v_x_3954_);
lean_dec(v_x_3954_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_DirectImports_convertImportInfos_spec__5(lean_object* v_as_3956_, size_t v_i_3957_, size_t v_stop_3958_, lean_object* v_b_3959_){
_start:
{
uint8_t v___x_3960_; 
v___x_3960_ = lean_usize_dec_eq(v_i_3957_, v_stop_3958_);
if (v___x_3960_ == 0)
{
lean_object* v___x_3961_; lean_object* v___x_3962_; size_t v___x_3963_; size_t v___x_3964_; 
v___x_3961_ = lean_array_uget_borrowed(v_as_3956_, v_i_3957_);
v___x_3962_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_DirectImports_convertImportInfos_spec__4(v_b_3959_, v___x_3961_);
v___x_3963_ = ((size_t)1ULL);
v___x_3964_ = lean_usize_add(v_i_3957_, v___x_3963_);
v_i_3957_ = v___x_3964_;
v_b_3959_ = v___x_3962_;
goto _start;
}
else
{
return v_b_3959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_DirectImports_convertImportInfos_spec__5___boxed(lean_object* v_as_3966_, lean_object* v_i_3967_, lean_object* v_stop_3968_, lean_object* v_b_3969_){
_start:
{
size_t v_i_boxed_3970_; size_t v_stop_boxed_3971_; lean_object* v_res_3972_; 
v_i_boxed_3970_ = lean_unbox_usize(v_i_3967_);
lean_dec(v_i_3967_);
v_stop_boxed_3971_ = lean_unbox_usize(v_stop_3968_);
lean_dec(v_stop_3968_);
v_res_3972_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_DirectImports_convertImportInfos_spec__5(v_as_3966_, v_i_boxed_3970_, v_stop_boxed_3971_, v_b_3969_);
lean_dec_ref(v_as_3966_);
return v_res_3972_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0_spec__0(lean_object* v_as_3973_, size_t v_i_3974_, size_t v_stop_3975_, lean_object* v_b_3976_){
_start:
{
lean_object* v_a_3979_; uint8_t v___x_3983_; 
v___x_3983_ = lean_usize_dec_eq(v_i_3974_, v_stop_3975_);
if (v___x_3983_ == 0)
{
lean_object* v___x_3984_; lean_object* v_module_3985_; uint8_t v_isPrivate_3986_; uint8_t v_isAll_3987_; uint8_t v_isMeta_3988_; lean_object* v_module_3989_; lean_object* v___x_3990_; 
v___x_3984_ = lean_array_uget_borrowed(v_as_3973_, v_i_3974_);
v_module_3985_ = lean_ctor_get(v___x_3984_, 0);
v_isPrivate_3986_ = lean_ctor_get_uint8(v___x_3984_, sizeof(void*)*1);
v_isAll_3987_ = lean_ctor_get_uint8(v___x_3984_, sizeof(void*)*1 + 1);
v_isMeta_3988_ = lean_ctor_get_uint8(v___x_3984_, sizeof(void*)*1 + 2);
lean_inc_ref(v_module_3985_);
v_module_3989_ = l_String_toName(v_module_3985_);
lean_inc(v_module_3989_);
v___x_3990_ = l_Lean_Server_documentUriFromModule_x3f(v_module_3989_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v_a_3991_; 
v_a_3991_ = lean_ctor_get(v___x_3990_, 0);
lean_inc(v_a_3991_);
lean_dec_ref_known(v___x_3990_, 1);
if (lean_obj_tag(v_a_3991_) == 1)
{
lean_object* v_val_3992_; uint8_t v___y_3994_; 
v_val_3992_ = lean_ctor_get(v_a_3991_, 0);
lean_inc(v_val_3992_);
lean_dec_ref_known(v_a_3991_, 1);
if (v_isMeta_3988_ == 0)
{
uint8_t v___x_3997_; 
v___x_3997_ = 0;
v___y_3994_ = v___x_3997_;
goto v___jp_3993_;
}
else
{
uint8_t v___x_3998_; 
v___x_3998_ = 1;
v___y_3994_ = v___x_3998_;
goto v___jp_3993_;
}
v___jp_3993_:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; 
v___x_3995_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v___x_3995_, 0, v_module_3989_);
lean_ctor_set(v___x_3995_, 1, v_val_3992_);
lean_ctor_set_uint8(v___x_3995_, sizeof(void*)*2, v_isAll_3987_);
lean_ctor_set_uint8(v___x_3995_, sizeof(void*)*2 + 1, v_isPrivate_3986_);
lean_ctor_set_uint8(v___x_3995_, sizeof(void*)*2 + 2, v___y_3994_);
v___x_3996_ = lean_array_push(v_b_3976_, v___x_3995_);
v_a_3979_ = v___x_3996_;
goto v___jp_3978_;
}
}
else
{
lean_dec(v_a_3991_);
lean_dec(v_module_3989_);
v_a_3979_ = v_b_3976_;
goto v___jp_3978_;
}
}
else
{
lean_object* v_a_3999_; lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4006_; 
lean_dec(v_module_3989_);
lean_dec_ref(v_b_3976_);
v_a_3999_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4006_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4006_ == 0)
{
v___x_4001_ = v___x_3990_;
v_isShared_4002_ = v_isSharedCheck_4006_;
goto v_resetjp_4000_;
}
else
{
lean_inc(v_a_3999_);
lean_dec(v___x_3990_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4006_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
lean_object* v___x_4004_; 
if (v_isShared_4002_ == 0)
{
v___x_4004_ = v___x_4001_;
goto v_reusejp_4003_;
}
else
{
lean_object* v_reuseFailAlloc_4005_; 
v_reuseFailAlloc_4005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4005_, 0, v_a_3999_);
v___x_4004_ = v_reuseFailAlloc_4005_;
goto v_reusejp_4003_;
}
v_reusejp_4003_:
{
return v___x_4004_;
}
}
}
}
else
{
lean_object* v___x_4007_; 
v___x_4007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4007_, 0, v_b_3976_);
return v___x_4007_;
}
v___jp_3978_:
{
size_t v___x_3980_; size_t v___x_3981_; 
v___x_3980_ = ((size_t)1ULL);
v___x_3981_ = lean_usize_add(v_i_3974_, v___x_3980_);
v_i_3974_ = v___x_3981_;
v_b_3976_ = v_a_3979_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0_spec__0___boxed(lean_object* v_as_4008_, lean_object* v_i_4009_, lean_object* v_stop_4010_, lean_object* v_b_4011_, lean_object* v___y_4012_){
_start:
{
size_t v_i_boxed_4013_; size_t v_stop_boxed_4014_; lean_object* v_res_4015_; 
v_i_boxed_4013_ = lean_unbox_usize(v_i_4009_);
lean_dec(v_i_4009_);
v_stop_boxed_4014_ = lean_unbox_usize(v_stop_4010_);
lean_dec(v_stop_4010_);
v_res_4015_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0_spec__0(v_as_4008_, v_i_boxed_4013_, v_stop_boxed_4014_, v_b_4011_);
lean_dec_ref(v_as_4008_);
return v_res_4015_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0(lean_object* v_as_4016_, lean_object* v_start_4017_, lean_object* v_stop_4018_){
_start:
{
lean_object* v___x_4020_; uint8_t v___x_4021_; 
v___x_4020_ = ((lean_object*)(l_Lean_Server_instEmptyCollectionDirectImports___closed__0));
v___x_4021_ = lean_nat_dec_lt(v_start_4017_, v_stop_4018_);
if (v___x_4021_ == 0)
{
lean_object* v___x_4022_; 
v___x_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4022_, 0, v___x_4020_);
return v___x_4022_;
}
else
{
lean_object* v___x_4023_; uint8_t v___x_4024_; 
v___x_4023_ = lean_array_get_size(v_as_4016_);
v___x_4024_ = lean_nat_dec_le(v_stop_4018_, v___x_4023_);
if (v___x_4024_ == 0)
{
uint8_t v___x_4025_; 
v___x_4025_ = lean_nat_dec_lt(v_start_4017_, v___x_4023_);
if (v___x_4025_ == 0)
{
lean_object* v___x_4026_; 
v___x_4026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4026_, 0, v___x_4020_);
return v___x_4026_;
}
else
{
size_t v___x_4027_; size_t v___x_4028_; lean_object* v___x_4029_; 
v___x_4027_ = lean_usize_of_nat(v_start_4017_);
v___x_4028_ = lean_usize_of_nat(v___x_4023_);
v___x_4029_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0_spec__0(v_as_4016_, v___x_4027_, v___x_4028_, v___x_4020_);
return v___x_4029_;
}
}
else
{
size_t v___x_4030_; size_t v___x_4031_; lean_object* v___x_4032_; 
v___x_4030_ = lean_usize_of_nat(v_start_4017_);
v___x_4031_ = lean_usize_of_nat(v_stop_4018_);
v___x_4032_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0_spec__0(v_as_4016_, v___x_4030_, v___x_4031_, v___x_4020_);
return v___x_4032_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0___boxed(lean_object* v_as_4033_, lean_object* v_start_4034_, lean_object* v_stop_4035_, lean_object* v___y_4036_){
_start:
{
lean_object* v_res_4037_; 
v_res_4037_ = l_Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0(v_as_4033_, v_start_4034_, v_stop_4035_);
lean_dec(v_stop_4035_);
lean_dec(v_start_4034_);
lean_dec_ref(v_as_4033_);
return v_res_4037_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(lean_object* v_k_4038_, lean_object* v_v_4039_, lean_object* v_t_4040_){
_start:
{
if (lean_obj_tag(v_t_4040_) == 0)
{
lean_object* v_size_4041_; lean_object* v_k_4042_; lean_object* v_v_4043_; lean_object* v_l_4044_; lean_object* v_r_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4325_; 
v_size_4041_ = lean_ctor_get(v_t_4040_, 0);
v_k_4042_ = lean_ctor_get(v_t_4040_, 1);
v_v_4043_ = lean_ctor_get(v_t_4040_, 2);
v_l_4044_ = lean_ctor_get(v_t_4040_, 3);
v_r_4045_ = lean_ctor_get(v_t_4040_, 4);
v_isSharedCheck_4325_ = !lean_is_exclusive(v_t_4040_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4047_ = v_t_4040_;
v_isShared_4048_ = v_isSharedCheck_4325_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_r_4045_);
lean_inc(v_l_4044_);
lean_inc(v_v_4043_);
lean_inc(v_k_4042_);
lean_inc(v_size_4041_);
lean_dec(v_t_4040_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4325_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
uint8_t v___x_4049_; 
v___x_4049_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_4038_, v_k_4042_);
switch(v___x_4049_)
{
case 0:
{
lean_object* v_impl_4050_; lean_object* v___x_4051_; 
lean_dec(v_size_4041_);
v_impl_4050_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_k_4038_, v_v_4039_, v_l_4044_);
v___x_4051_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_4045_) == 0)
{
lean_object* v_size_4052_; lean_object* v_size_4053_; lean_object* v_k_4054_; lean_object* v_v_4055_; lean_object* v_l_4056_; lean_object* v_r_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; uint8_t v___x_4060_; 
v_size_4052_ = lean_ctor_get(v_r_4045_, 0);
v_size_4053_ = lean_ctor_get(v_impl_4050_, 0);
lean_inc(v_size_4053_);
v_k_4054_ = lean_ctor_get(v_impl_4050_, 1);
lean_inc(v_k_4054_);
v_v_4055_ = lean_ctor_get(v_impl_4050_, 2);
lean_inc(v_v_4055_);
v_l_4056_ = lean_ctor_get(v_impl_4050_, 3);
lean_inc(v_l_4056_);
v_r_4057_ = lean_ctor_get(v_impl_4050_, 4);
lean_inc(v_r_4057_);
v___x_4058_ = lean_unsigned_to_nat(3u);
v___x_4059_ = lean_nat_mul(v___x_4058_, v_size_4052_);
v___x_4060_ = lean_nat_dec_lt(v___x_4059_, v_size_4053_);
lean_dec(v___x_4059_);
if (v___x_4060_ == 0)
{
lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4064_; 
lean_dec(v_r_4057_);
lean_dec(v_l_4056_);
lean_dec(v_v_4055_);
lean_dec(v_k_4054_);
v___x_4061_ = lean_nat_add(v___x_4051_, v_size_4053_);
lean_dec(v_size_4053_);
v___x_4062_ = lean_nat_add(v___x_4061_, v_size_4052_);
lean_dec(v___x_4061_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 3, v_impl_4050_);
lean_ctor_set(v___x_4047_, 0, v___x_4062_);
v___x_4064_ = v___x_4047_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v___x_4062_);
lean_ctor_set(v_reuseFailAlloc_4065_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4065_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4065_, 3, v_impl_4050_);
lean_ctor_set(v_reuseFailAlloc_4065_, 4, v_r_4045_);
v___x_4064_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
return v___x_4064_;
}
}
else
{
lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4131_; 
v_isSharedCheck_4131_ = !lean_is_exclusive(v_impl_4050_);
if (v_isSharedCheck_4131_ == 0)
{
lean_object* v_unused_4132_; lean_object* v_unused_4133_; lean_object* v_unused_4134_; lean_object* v_unused_4135_; lean_object* v_unused_4136_; 
v_unused_4132_ = lean_ctor_get(v_impl_4050_, 4);
lean_dec(v_unused_4132_);
v_unused_4133_ = lean_ctor_get(v_impl_4050_, 3);
lean_dec(v_unused_4133_);
v_unused_4134_ = lean_ctor_get(v_impl_4050_, 2);
lean_dec(v_unused_4134_);
v_unused_4135_ = lean_ctor_get(v_impl_4050_, 1);
lean_dec(v_unused_4135_);
v_unused_4136_ = lean_ctor_get(v_impl_4050_, 0);
lean_dec(v_unused_4136_);
v___x_4067_ = v_impl_4050_;
v_isShared_4068_ = v_isSharedCheck_4131_;
goto v_resetjp_4066_;
}
else
{
lean_dec(v_impl_4050_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4131_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v_size_4069_; lean_object* v_size_4070_; lean_object* v_k_4071_; lean_object* v_v_4072_; lean_object* v_l_4073_; lean_object* v_r_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; uint8_t v___x_4077_; 
v_size_4069_ = lean_ctor_get(v_l_4056_, 0);
v_size_4070_ = lean_ctor_get(v_r_4057_, 0);
v_k_4071_ = lean_ctor_get(v_r_4057_, 1);
v_v_4072_ = lean_ctor_get(v_r_4057_, 2);
v_l_4073_ = lean_ctor_get(v_r_4057_, 3);
v_r_4074_ = lean_ctor_get(v_r_4057_, 4);
v___x_4075_ = lean_unsigned_to_nat(2u);
v___x_4076_ = lean_nat_mul(v___x_4075_, v_size_4069_);
v___x_4077_ = lean_nat_dec_lt(v_size_4070_, v___x_4076_);
lean_dec(v___x_4076_);
if (v___x_4077_ == 0)
{
lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4106_; 
lean_inc(v_r_4074_);
lean_inc(v_l_4073_);
lean_inc(v_v_4072_);
lean_inc(v_k_4071_);
v_isSharedCheck_4106_ = !lean_is_exclusive(v_r_4057_);
if (v_isSharedCheck_4106_ == 0)
{
lean_object* v_unused_4107_; lean_object* v_unused_4108_; lean_object* v_unused_4109_; lean_object* v_unused_4110_; lean_object* v_unused_4111_; 
v_unused_4107_ = lean_ctor_get(v_r_4057_, 4);
lean_dec(v_unused_4107_);
v_unused_4108_ = lean_ctor_get(v_r_4057_, 3);
lean_dec(v_unused_4108_);
v_unused_4109_ = lean_ctor_get(v_r_4057_, 2);
lean_dec(v_unused_4109_);
v_unused_4110_ = lean_ctor_get(v_r_4057_, 1);
lean_dec(v_unused_4110_);
v_unused_4111_ = lean_ctor_get(v_r_4057_, 0);
lean_dec(v_unused_4111_);
v___x_4079_ = v_r_4057_;
v_isShared_4080_ = v_isSharedCheck_4106_;
goto v_resetjp_4078_;
}
else
{
lean_dec(v_r_4057_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4106_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___y_4084_; lean_object* v___y_4085_; lean_object* v___y_4086_; lean_object* v___x_4094_; lean_object* v___y_4096_; 
v___x_4081_ = lean_nat_add(v___x_4051_, v_size_4053_);
lean_dec(v_size_4053_);
v___x_4082_ = lean_nat_add(v___x_4081_, v_size_4052_);
lean_dec(v___x_4081_);
v___x_4094_ = lean_nat_add(v___x_4051_, v_size_4069_);
if (lean_obj_tag(v_l_4073_) == 0)
{
lean_object* v_size_4104_; 
v_size_4104_ = lean_ctor_get(v_l_4073_, 0);
lean_inc(v_size_4104_);
v___y_4096_ = v_size_4104_;
goto v___jp_4095_;
}
else
{
lean_object* v___x_4105_; 
v___x_4105_ = lean_unsigned_to_nat(0u);
v___y_4096_ = v___x_4105_;
goto v___jp_4095_;
}
v___jp_4083_:
{
lean_object* v___x_4087_; lean_object* v___x_4089_; 
v___x_4087_ = lean_nat_add(v___y_4084_, v___y_4086_);
lean_dec(v___y_4086_);
lean_dec(v___y_4084_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 4, v_r_4045_);
lean_ctor_set(v___x_4079_, 3, v_r_4074_);
lean_ctor_set(v___x_4079_, 2, v_v_4043_);
lean_ctor_set(v___x_4079_, 1, v_k_4042_);
lean_ctor_set(v___x_4079_, 0, v___x_4087_);
v___x_4089_ = v___x_4079_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v___x_4087_);
lean_ctor_set(v_reuseFailAlloc_4093_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4093_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4093_, 3, v_r_4074_);
lean_ctor_set(v_reuseFailAlloc_4093_, 4, v_r_4045_);
v___x_4089_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
lean_object* v___x_4091_; 
if (v_isShared_4068_ == 0)
{
lean_ctor_set(v___x_4067_, 4, v___x_4089_);
lean_ctor_set(v___x_4067_, 3, v___y_4085_);
lean_ctor_set(v___x_4067_, 2, v_v_4072_);
lean_ctor_set(v___x_4067_, 1, v_k_4071_);
lean_ctor_set(v___x_4067_, 0, v___x_4082_);
v___x_4091_ = v___x_4067_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v___x_4082_);
lean_ctor_set(v_reuseFailAlloc_4092_, 1, v_k_4071_);
lean_ctor_set(v_reuseFailAlloc_4092_, 2, v_v_4072_);
lean_ctor_set(v_reuseFailAlloc_4092_, 3, v___y_4085_);
lean_ctor_set(v_reuseFailAlloc_4092_, 4, v___x_4089_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
v___jp_4095_:
{
lean_object* v___x_4097_; lean_object* v___x_4099_; 
v___x_4097_ = lean_nat_add(v___x_4094_, v___y_4096_);
lean_dec(v___y_4096_);
lean_dec(v___x_4094_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 4, v_l_4073_);
lean_ctor_set(v___x_4047_, 3, v_l_4056_);
lean_ctor_set(v___x_4047_, 2, v_v_4055_);
lean_ctor_set(v___x_4047_, 1, v_k_4054_);
lean_ctor_set(v___x_4047_, 0, v___x_4097_);
v___x_4099_ = v___x_4047_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v___x_4097_);
lean_ctor_set(v_reuseFailAlloc_4103_, 1, v_k_4054_);
lean_ctor_set(v_reuseFailAlloc_4103_, 2, v_v_4055_);
lean_ctor_set(v_reuseFailAlloc_4103_, 3, v_l_4056_);
lean_ctor_set(v_reuseFailAlloc_4103_, 4, v_l_4073_);
v___x_4099_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
lean_object* v___x_4100_; 
v___x_4100_ = lean_nat_add(v___x_4051_, v_size_4052_);
if (lean_obj_tag(v_r_4074_) == 0)
{
lean_object* v_size_4101_; 
v_size_4101_ = lean_ctor_get(v_r_4074_, 0);
lean_inc(v_size_4101_);
v___y_4084_ = v___x_4100_;
v___y_4085_ = v___x_4099_;
v___y_4086_ = v_size_4101_;
goto v___jp_4083_;
}
else
{
lean_object* v___x_4102_; 
v___x_4102_ = lean_unsigned_to_nat(0u);
v___y_4084_ = v___x_4100_;
v___y_4085_ = v___x_4099_;
v___y_4086_ = v___x_4102_;
goto v___jp_4083_;
}
}
}
}
}
else
{
lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4117_; 
lean_del_object(v___x_4047_);
v___x_4112_ = lean_nat_add(v___x_4051_, v_size_4053_);
lean_dec(v_size_4053_);
v___x_4113_ = lean_nat_add(v___x_4112_, v_size_4052_);
lean_dec(v___x_4112_);
v___x_4114_ = lean_nat_add(v___x_4051_, v_size_4052_);
v___x_4115_ = lean_nat_add(v___x_4114_, v_size_4070_);
lean_dec(v___x_4114_);
lean_inc_ref(v_r_4045_);
if (v_isShared_4068_ == 0)
{
lean_ctor_set(v___x_4067_, 4, v_r_4045_);
lean_ctor_set(v___x_4067_, 3, v_r_4057_);
lean_ctor_set(v___x_4067_, 2, v_v_4043_);
lean_ctor_set(v___x_4067_, 1, v_k_4042_);
lean_ctor_set(v___x_4067_, 0, v___x_4115_);
v___x_4117_ = v___x_4067_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v___x_4115_);
lean_ctor_set(v_reuseFailAlloc_4130_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4130_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4130_, 3, v_r_4057_);
lean_ctor_set(v_reuseFailAlloc_4130_, 4, v_r_4045_);
v___x_4117_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4124_; 
v_isSharedCheck_4124_ = !lean_is_exclusive(v_r_4045_);
if (v_isSharedCheck_4124_ == 0)
{
lean_object* v_unused_4125_; lean_object* v_unused_4126_; lean_object* v_unused_4127_; lean_object* v_unused_4128_; lean_object* v_unused_4129_; 
v_unused_4125_ = lean_ctor_get(v_r_4045_, 4);
lean_dec(v_unused_4125_);
v_unused_4126_ = lean_ctor_get(v_r_4045_, 3);
lean_dec(v_unused_4126_);
v_unused_4127_ = lean_ctor_get(v_r_4045_, 2);
lean_dec(v_unused_4127_);
v_unused_4128_ = lean_ctor_get(v_r_4045_, 1);
lean_dec(v_unused_4128_);
v_unused_4129_ = lean_ctor_get(v_r_4045_, 0);
lean_dec(v_unused_4129_);
v___x_4119_ = v_r_4045_;
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
else
{
lean_dec(v_r_4045_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
lean_object* v___x_4122_; 
if (v_isShared_4120_ == 0)
{
lean_ctor_set(v___x_4119_, 4, v___x_4117_);
lean_ctor_set(v___x_4119_, 3, v_l_4056_);
lean_ctor_set(v___x_4119_, 2, v_v_4055_);
lean_ctor_set(v___x_4119_, 1, v_k_4054_);
lean_ctor_set(v___x_4119_, 0, v___x_4113_);
v___x_4122_ = v___x_4119_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v___x_4113_);
lean_ctor_set(v_reuseFailAlloc_4123_, 1, v_k_4054_);
lean_ctor_set(v_reuseFailAlloc_4123_, 2, v_v_4055_);
lean_ctor_set(v_reuseFailAlloc_4123_, 3, v_l_4056_);
lean_ctor_set(v_reuseFailAlloc_4123_, 4, v___x_4117_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4137_; 
v_l_4137_ = lean_ctor_get(v_impl_4050_, 3);
lean_inc(v_l_4137_);
if (lean_obj_tag(v_l_4137_) == 0)
{
lean_object* v_r_4138_; lean_object* v_k_4139_; lean_object* v_v_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4151_; 
v_r_4138_ = lean_ctor_get(v_impl_4050_, 4);
v_k_4139_ = lean_ctor_get(v_impl_4050_, 1);
v_v_4140_ = lean_ctor_get(v_impl_4050_, 2);
v_isSharedCheck_4151_ = !lean_is_exclusive(v_impl_4050_);
if (v_isSharedCheck_4151_ == 0)
{
lean_object* v_unused_4152_; lean_object* v_unused_4153_; 
v_unused_4152_ = lean_ctor_get(v_impl_4050_, 3);
lean_dec(v_unused_4152_);
v_unused_4153_ = lean_ctor_get(v_impl_4050_, 0);
lean_dec(v_unused_4153_);
v___x_4142_ = v_impl_4050_;
v_isShared_4143_ = v_isSharedCheck_4151_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_r_4138_);
lean_inc(v_v_4140_);
lean_inc(v_k_4139_);
lean_dec(v_impl_4050_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4151_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4144_; lean_object* v___x_4146_; 
v___x_4144_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_4138_);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 3, v_r_4138_);
lean_ctor_set(v___x_4142_, 2, v_v_4043_);
lean_ctor_set(v___x_4142_, 1, v_k_4042_);
lean_ctor_set(v___x_4142_, 0, v___x_4051_);
v___x_4146_ = v___x_4142_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v___x_4051_);
lean_ctor_set(v_reuseFailAlloc_4150_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4150_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4150_, 3, v_r_4138_);
lean_ctor_set(v_reuseFailAlloc_4150_, 4, v_r_4138_);
v___x_4146_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
lean_object* v___x_4148_; 
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 4, v___x_4146_);
lean_ctor_set(v___x_4047_, 3, v_l_4137_);
lean_ctor_set(v___x_4047_, 2, v_v_4140_);
lean_ctor_set(v___x_4047_, 1, v_k_4139_);
lean_ctor_set(v___x_4047_, 0, v___x_4144_);
v___x_4148_ = v___x_4047_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v___x_4144_);
lean_ctor_set(v_reuseFailAlloc_4149_, 1, v_k_4139_);
lean_ctor_set(v_reuseFailAlloc_4149_, 2, v_v_4140_);
lean_ctor_set(v_reuseFailAlloc_4149_, 3, v_l_4137_);
lean_ctor_set(v_reuseFailAlloc_4149_, 4, v___x_4146_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
}
}
else
{
lean_object* v_r_4154_; 
v_r_4154_ = lean_ctor_get(v_impl_4050_, 4);
lean_inc(v_r_4154_);
if (lean_obj_tag(v_r_4154_) == 0)
{
lean_object* v_k_4155_; lean_object* v_v_4156_; lean_object* v___x_4158_; uint8_t v_isShared_4159_; uint8_t v_isSharedCheck_4179_; 
v_k_4155_ = lean_ctor_get(v_impl_4050_, 1);
v_v_4156_ = lean_ctor_get(v_impl_4050_, 2);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_impl_4050_);
if (v_isSharedCheck_4179_ == 0)
{
lean_object* v_unused_4180_; lean_object* v_unused_4181_; lean_object* v_unused_4182_; 
v_unused_4180_ = lean_ctor_get(v_impl_4050_, 4);
lean_dec(v_unused_4180_);
v_unused_4181_ = lean_ctor_get(v_impl_4050_, 3);
lean_dec(v_unused_4181_);
v_unused_4182_ = lean_ctor_get(v_impl_4050_, 0);
lean_dec(v_unused_4182_);
v___x_4158_ = v_impl_4050_;
v_isShared_4159_ = v_isSharedCheck_4179_;
goto v_resetjp_4157_;
}
else
{
lean_inc(v_v_4156_);
lean_inc(v_k_4155_);
lean_dec(v_impl_4050_);
v___x_4158_ = lean_box(0);
v_isShared_4159_ = v_isSharedCheck_4179_;
goto v_resetjp_4157_;
}
v_resetjp_4157_:
{
lean_object* v_k_4160_; lean_object* v_v_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4175_; 
v_k_4160_ = lean_ctor_get(v_r_4154_, 1);
v_v_4161_ = lean_ctor_get(v_r_4154_, 2);
v_isSharedCheck_4175_ = !lean_is_exclusive(v_r_4154_);
if (v_isSharedCheck_4175_ == 0)
{
lean_object* v_unused_4176_; lean_object* v_unused_4177_; lean_object* v_unused_4178_; 
v_unused_4176_ = lean_ctor_get(v_r_4154_, 4);
lean_dec(v_unused_4176_);
v_unused_4177_ = lean_ctor_get(v_r_4154_, 3);
lean_dec(v_unused_4177_);
v_unused_4178_ = lean_ctor_get(v_r_4154_, 0);
lean_dec(v_unused_4178_);
v___x_4163_ = v_r_4154_;
v_isShared_4164_ = v_isSharedCheck_4175_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_v_4161_);
lean_inc(v_k_4160_);
lean_dec(v_r_4154_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4175_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4165_; lean_object* v___x_4167_; 
v___x_4165_ = lean_unsigned_to_nat(3u);
if (v_isShared_4164_ == 0)
{
lean_ctor_set(v___x_4163_, 4, v_l_4137_);
lean_ctor_set(v___x_4163_, 3, v_l_4137_);
lean_ctor_set(v___x_4163_, 2, v_v_4156_);
lean_ctor_set(v___x_4163_, 1, v_k_4155_);
lean_ctor_set(v___x_4163_, 0, v___x_4051_);
v___x_4167_ = v___x_4163_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v___x_4051_);
lean_ctor_set(v_reuseFailAlloc_4174_, 1, v_k_4155_);
lean_ctor_set(v_reuseFailAlloc_4174_, 2, v_v_4156_);
lean_ctor_set(v_reuseFailAlloc_4174_, 3, v_l_4137_);
lean_ctor_set(v_reuseFailAlloc_4174_, 4, v_l_4137_);
v___x_4167_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
lean_object* v___x_4169_; 
if (v_isShared_4159_ == 0)
{
lean_ctor_set(v___x_4158_, 4, v_l_4137_);
lean_ctor_set(v___x_4158_, 2, v_v_4043_);
lean_ctor_set(v___x_4158_, 1, v_k_4042_);
lean_ctor_set(v___x_4158_, 0, v___x_4051_);
v___x_4169_ = v___x_4158_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v___x_4051_);
lean_ctor_set(v_reuseFailAlloc_4173_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4173_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4173_, 3, v_l_4137_);
lean_ctor_set(v_reuseFailAlloc_4173_, 4, v_l_4137_);
v___x_4169_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
lean_object* v___x_4171_; 
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 4, v___x_4169_);
lean_ctor_set(v___x_4047_, 3, v___x_4167_);
lean_ctor_set(v___x_4047_, 2, v_v_4161_);
lean_ctor_set(v___x_4047_, 1, v_k_4160_);
lean_ctor_set(v___x_4047_, 0, v___x_4165_);
v___x_4171_ = v___x_4047_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v___x_4165_);
lean_ctor_set(v_reuseFailAlloc_4172_, 1, v_k_4160_);
lean_ctor_set(v_reuseFailAlloc_4172_, 2, v_v_4161_);
lean_ctor_set(v_reuseFailAlloc_4172_, 3, v___x_4167_);
lean_ctor_set(v_reuseFailAlloc_4172_, 4, v___x_4169_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
}
}
}
else
{
lean_object* v___x_4183_; lean_object* v___x_4185_; 
v___x_4183_ = lean_unsigned_to_nat(2u);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 4, v_r_4154_);
lean_ctor_set(v___x_4047_, 3, v_impl_4050_);
lean_ctor_set(v___x_4047_, 0, v___x_4183_);
v___x_4185_ = v___x_4047_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v___x_4183_);
lean_ctor_set(v_reuseFailAlloc_4186_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4186_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4186_, 3, v_impl_4050_);
lean_ctor_set(v_reuseFailAlloc_4186_, 4, v_r_4154_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
}
}
case 1:
{
lean_object* v___x_4188_; 
lean_dec(v_v_4043_);
lean_dec(v_k_4042_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 2, v_v_4039_);
lean_ctor_set(v___x_4047_, 1, v_k_4038_);
v___x_4188_ = v___x_4047_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v_size_4041_);
lean_ctor_set(v_reuseFailAlloc_4189_, 1, v_k_4038_);
lean_ctor_set(v_reuseFailAlloc_4189_, 2, v_v_4039_);
lean_ctor_set(v_reuseFailAlloc_4189_, 3, v_l_4044_);
lean_ctor_set(v_reuseFailAlloc_4189_, 4, v_r_4045_);
v___x_4188_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
return v___x_4188_;
}
}
default: 
{
lean_object* v_impl_4190_; lean_object* v___x_4191_; 
lean_dec(v_size_4041_);
v_impl_4190_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_k_4038_, v_v_4039_, v_r_4045_);
v___x_4191_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_4044_) == 0)
{
lean_object* v_size_4192_; lean_object* v_size_4193_; lean_object* v_k_4194_; lean_object* v_v_4195_; lean_object* v_l_4196_; lean_object* v_r_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; uint8_t v___x_4200_; 
v_size_4192_ = lean_ctor_get(v_l_4044_, 0);
v_size_4193_ = lean_ctor_get(v_impl_4190_, 0);
lean_inc(v_size_4193_);
v_k_4194_ = lean_ctor_get(v_impl_4190_, 1);
lean_inc(v_k_4194_);
v_v_4195_ = lean_ctor_get(v_impl_4190_, 2);
lean_inc(v_v_4195_);
v_l_4196_ = lean_ctor_get(v_impl_4190_, 3);
lean_inc(v_l_4196_);
v_r_4197_ = lean_ctor_get(v_impl_4190_, 4);
lean_inc(v_r_4197_);
v___x_4198_ = lean_unsigned_to_nat(3u);
v___x_4199_ = lean_nat_mul(v___x_4198_, v_size_4192_);
v___x_4200_ = lean_nat_dec_lt(v___x_4199_, v_size_4193_);
lean_dec(v___x_4199_);
if (v___x_4200_ == 0)
{
lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4204_; 
lean_dec(v_r_4197_);
lean_dec(v_l_4196_);
lean_dec(v_v_4195_);
lean_dec(v_k_4194_);
v___x_4201_ = lean_nat_add(v___x_4191_, v_size_4192_);
v___x_4202_ = lean_nat_add(v___x_4201_, v_size_4193_);
lean_dec(v_size_4193_);
lean_dec(v___x_4201_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 4, v_impl_4190_);
lean_ctor_set(v___x_4047_, 0, v___x_4202_);
v___x_4204_ = v___x_4047_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v___x_4202_);
lean_ctor_set(v_reuseFailAlloc_4205_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4205_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4205_, 3, v_l_4044_);
lean_ctor_set(v_reuseFailAlloc_4205_, 4, v_impl_4190_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
return v___x_4204_;
}
}
else
{
lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4269_; 
v_isSharedCheck_4269_ = !lean_is_exclusive(v_impl_4190_);
if (v_isSharedCheck_4269_ == 0)
{
lean_object* v_unused_4270_; lean_object* v_unused_4271_; lean_object* v_unused_4272_; lean_object* v_unused_4273_; lean_object* v_unused_4274_; 
v_unused_4270_ = lean_ctor_get(v_impl_4190_, 4);
lean_dec(v_unused_4270_);
v_unused_4271_ = lean_ctor_get(v_impl_4190_, 3);
lean_dec(v_unused_4271_);
v_unused_4272_ = lean_ctor_get(v_impl_4190_, 2);
lean_dec(v_unused_4272_);
v_unused_4273_ = lean_ctor_get(v_impl_4190_, 1);
lean_dec(v_unused_4273_);
v_unused_4274_ = lean_ctor_get(v_impl_4190_, 0);
lean_dec(v_unused_4274_);
v___x_4207_ = v_impl_4190_;
v_isShared_4208_ = v_isSharedCheck_4269_;
goto v_resetjp_4206_;
}
else
{
lean_dec(v_impl_4190_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4269_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v_size_4209_; lean_object* v_k_4210_; lean_object* v_v_4211_; lean_object* v_l_4212_; lean_object* v_r_4213_; lean_object* v_size_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; uint8_t v___x_4217_; 
v_size_4209_ = lean_ctor_get(v_l_4196_, 0);
v_k_4210_ = lean_ctor_get(v_l_4196_, 1);
v_v_4211_ = lean_ctor_get(v_l_4196_, 2);
v_l_4212_ = lean_ctor_get(v_l_4196_, 3);
v_r_4213_ = lean_ctor_get(v_l_4196_, 4);
v_size_4214_ = lean_ctor_get(v_r_4197_, 0);
v___x_4215_ = lean_unsigned_to_nat(2u);
v___x_4216_ = lean_nat_mul(v___x_4215_, v_size_4214_);
v___x_4217_ = lean_nat_dec_lt(v_size_4209_, v___x_4216_);
lean_dec(v___x_4216_);
if (v___x_4217_ == 0)
{
lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4245_; 
lean_inc(v_r_4213_);
lean_inc(v_l_4212_);
lean_inc(v_v_4211_);
lean_inc(v_k_4210_);
v_isSharedCheck_4245_ = !lean_is_exclusive(v_l_4196_);
if (v_isSharedCheck_4245_ == 0)
{
lean_object* v_unused_4246_; lean_object* v_unused_4247_; lean_object* v_unused_4248_; lean_object* v_unused_4249_; lean_object* v_unused_4250_; 
v_unused_4246_ = lean_ctor_get(v_l_4196_, 4);
lean_dec(v_unused_4246_);
v_unused_4247_ = lean_ctor_get(v_l_4196_, 3);
lean_dec(v_unused_4247_);
v_unused_4248_ = lean_ctor_get(v_l_4196_, 2);
lean_dec(v_unused_4248_);
v_unused_4249_ = lean_ctor_get(v_l_4196_, 1);
lean_dec(v_unused_4249_);
v_unused_4250_ = lean_ctor_get(v_l_4196_, 0);
lean_dec(v_unused_4250_);
v___x_4219_ = v_l_4196_;
v_isShared_4220_ = v_isSharedCheck_4245_;
goto v_resetjp_4218_;
}
else
{
lean_dec(v_l_4196_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4245_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4235_; 
v___x_4221_ = lean_nat_add(v___x_4191_, v_size_4192_);
v___x_4222_ = lean_nat_add(v___x_4221_, v_size_4193_);
lean_dec(v_size_4193_);
if (lean_obj_tag(v_l_4212_) == 0)
{
lean_object* v_size_4243_; 
v_size_4243_ = lean_ctor_get(v_l_4212_, 0);
lean_inc(v_size_4243_);
v___y_4235_ = v_size_4243_;
goto v___jp_4234_;
}
else
{
lean_object* v___x_4244_; 
v___x_4244_ = lean_unsigned_to_nat(0u);
v___y_4235_ = v___x_4244_;
goto v___jp_4234_;
}
v___jp_4223_:
{
lean_object* v___x_4227_; lean_object* v___x_4229_; 
v___x_4227_ = lean_nat_add(v___y_4225_, v___y_4226_);
lean_dec(v___y_4226_);
lean_dec(v___y_4225_);
if (v_isShared_4220_ == 0)
{
lean_ctor_set(v___x_4219_, 4, v_r_4197_);
lean_ctor_set(v___x_4219_, 3, v_r_4213_);
lean_ctor_set(v___x_4219_, 2, v_v_4195_);
lean_ctor_set(v___x_4219_, 1, v_k_4194_);
lean_ctor_set(v___x_4219_, 0, v___x_4227_);
v___x_4229_ = v___x_4219_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v___x_4227_);
lean_ctor_set(v_reuseFailAlloc_4233_, 1, v_k_4194_);
lean_ctor_set(v_reuseFailAlloc_4233_, 2, v_v_4195_);
lean_ctor_set(v_reuseFailAlloc_4233_, 3, v_r_4213_);
lean_ctor_set(v_reuseFailAlloc_4233_, 4, v_r_4197_);
v___x_4229_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
lean_object* v___x_4231_; 
if (v_isShared_4208_ == 0)
{
lean_ctor_set(v___x_4207_, 4, v___x_4229_);
lean_ctor_set(v___x_4207_, 3, v___y_4224_);
lean_ctor_set(v___x_4207_, 2, v_v_4211_);
lean_ctor_set(v___x_4207_, 1, v_k_4210_);
lean_ctor_set(v___x_4207_, 0, v___x_4222_);
v___x_4231_ = v___x_4207_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v___x_4222_);
lean_ctor_set(v_reuseFailAlloc_4232_, 1, v_k_4210_);
lean_ctor_set(v_reuseFailAlloc_4232_, 2, v_v_4211_);
lean_ctor_set(v_reuseFailAlloc_4232_, 3, v___y_4224_);
lean_ctor_set(v_reuseFailAlloc_4232_, 4, v___x_4229_);
v___x_4231_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
return v___x_4231_;
}
}
}
v___jp_4234_:
{
lean_object* v___x_4236_; lean_object* v___x_4238_; 
v___x_4236_ = lean_nat_add(v___x_4221_, v___y_4235_);
lean_dec(v___y_4235_);
lean_dec(v___x_4221_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 4, v_l_4212_);
lean_ctor_set(v___x_4047_, 0, v___x_4236_);
v___x_4238_ = v___x_4047_;
goto v_reusejp_4237_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v___x_4236_);
lean_ctor_set(v_reuseFailAlloc_4242_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4242_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4242_, 3, v_l_4044_);
lean_ctor_set(v_reuseFailAlloc_4242_, 4, v_l_4212_);
v___x_4238_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4237_;
}
v_reusejp_4237_:
{
lean_object* v___x_4239_; 
v___x_4239_ = lean_nat_add(v___x_4191_, v_size_4214_);
if (lean_obj_tag(v_r_4213_) == 0)
{
lean_object* v_size_4240_; 
v_size_4240_ = lean_ctor_get(v_r_4213_, 0);
lean_inc(v_size_4240_);
v___y_4224_ = v___x_4238_;
v___y_4225_ = v___x_4239_;
v___y_4226_ = v_size_4240_;
goto v___jp_4223_;
}
else
{
lean_object* v___x_4241_; 
v___x_4241_ = lean_unsigned_to_nat(0u);
v___y_4224_ = v___x_4238_;
v___y_4225_ = v___x_4239_;
v___y_4226_ = v___x_4241_;
goto v___jp_4223_;
}
}
}
}
}
else
{
lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4255_; 
lean_del_object(v___x_4047_);
v___x_4251_ = lean_nat_add(v___x_4191_, v_size_4192_);
v___x_4252_ = lean_nat_add(v___x_4251_, v_size_4193_);
lean_dec(v_size_4193_);
v___x_4253_ = lean_nat_add(v___x_4251_, v_size_4209_);
lean_dec(v___x_4251_);
lean_inc_ref(v_l_4044_);
if (v_isShared_4208_ == 0)
{
lean_ctor_set(v___x_4207_, 4, v_l_4196_);
lean_ctor_set(v___x_4207_, 3, v_l_4044_);
lean_ctor_set(v___x_4207_, 2, v_v_4043_);
lean_ctor_set(v___x_4207_, 1, v_k_4042_);
lean_ctor_set(v___x_4207_, 0, v___x_4253_);
v___x_4255_ = v___x_4207_;
goto v_reusejp_4254_;
}
else
{
lean_object* v_reuseFailAlloc_4268_; 
v_reuseFailAlloc_4268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4268_, 0, v___x_4253_);
lean_ctor_set(v_reuseFailAlloc_4268_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4268_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4268_, 3, v_l_4044_);
lean_ctor_set(v_reuseFailAlloc_4268_, 4, v_l_4196_);
v___x_4255_ = v_reuseFailAlloc_4268_;
goto v_reusejp_4254_;
}
v_reusejp_4254_:
{
lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4262_; 
v_isSharedCheck_4262_ = !lean_is_exclusive(v_l_4044_);
if (v_isSharedCheck_4262_ == 0)
{
lean_object* v_unused_4263_; lean_object* v_unused_4264_; lean_object* v_unused_4265_; lean_object* v_unused_4266_; lean_object* v_unused_4267_; 
v_unused_4263_ = lean_ctor_get(v_l_4044_, 4);
lean_dec(v_unused_4263_);
v_unused_4264_ = lean_ctor_get(v_l_4044_, 3);
lean_dec(v_unused_4264_);
v_unused_4265_ = lean_ctor_get(v_l_4044_, 2);
lean_dec(v_unused_4265_);
v_unused_4266_ = lean_ctor_get(v_l_4044_, 1);
lean_dec(v_unused_4266_);
v_unused_4267_ = lean_ctor_get(v_l_4044_, 0);
lean_dec(v_unused_4267_);
v___x_4257_ = v_l_4044_;
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
else
{
lean_dec(v_l_4044_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4260_; 
if (v_isShared_4258_ == 0)
{
lean_ctor_set(v___x_4257_, 4, v_r_4197_);
lean_ctor_set(v___x_4257_, 3, v___x_4255_);
lean_ctor_set(v___x_4257_, 2, v_v_4195_);
lean_ctor_set(v___x_4257_, 1, v_k_4194_);
lean_ctor_set(v___x_4257_, 0, v___x_4252_);
v___x_4260_ = v___x_4257_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v___x_4252_);
lean_ctor_set(v_reuseFailAlloc_4261_, 1, v_k_4194_);
lean_ctor_set(v_reuseFailAlloc_4261_, 2, v_v_4195_);
lean_ctor_set(v_reuseFailAlloc_4261_, 3, v___x_4255_);
lean_ctor_set(v_reuseFailAlloc_4261_, 4, v_r_4197_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
return v___x_4260_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4275_; 
v_l_4275_ = lean_ctor_get(v_impl_4190_, 3);
lean_inc(v_l_4275_);
if (lean_obj_tag(v_l_4275_) == 0)
{
lean_object* v_r_4276_; lean_object* v_k_4277_; lean_object* v_v_4278_; lean_object* v___x_4280_; uint8_t v_isShared_4281_; uint8_t v_isSharedCheck_4301_; 
v_r_4276_ = lean_ctor_get(v_impl_4190_, 4);
v_k_4277_ = lean_ctor_get(v_impl_4190_, 1);
v_v_4278_ = lean_ctor_get(v_impl_4190_, 2);
v_isSharedCheck_4301_ = !lean_is_exclusive(v_impl_4190_);
if (v_isSharedCheck_4301_ == 0)
{
lean_object* v_unused_4302_; lean_object* v_unused_4303_; 
v_unused_4302_ = lean_ctor_get(v_impl_4190_, 3);
lean_dec(v_unused_4302_);
v_unused_4303_ = lean_ctor_get(v_impl_4190_, 0);
lean_dec(v_unused_4303_);
v___x_4280_ = v_impl_4190_;
v_isShared_4281_ = v_isSharedCheck_4301_;
goto v_resetjp_4279_;
}
else
{
lean_inc(v_r_4276_);
lean_inc(v_v_4278_);
lean_inc(v_k_4277_);
lean_dec(v_impl_4190_);
v___x_4280_ = lean_box(0);
v_isShared_4281_ = v_isSharedCheck_4301_;
goto v_resetjp_4279_;
}
v_resetjp_4279_:
{
lean_object* v_k_4282_; lean_object* v_v_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4297_; 
v_k_4282_ = lean_ctor_get(v_l_4275_, 1);
v_v_4283_ = lean_ctor_get(v_l_4275_, 2);
v_isSharedCheck_4297_ = !lean_is_exclusive(v_l_4275_);
if (v_isSharedCheck_4297_ == 0)
{
lean_object* v_unused_4298_; lean_object* v_unused_4299_; lean_object* v_unused_4300_; 
v_unused_4298_ = lean_ctor_get(v_l_4275_, 4);
lean_dec(v_unused_4298_);
v_unused_4299_ = lean_ctor_get(v_l_4275_, 3);
lean_dec(v_unused_4299_);
v_unused_4300_ = lean_ctor_get(v_l_4275_, 0);
lean_dec(v_unused_4300_);
v___x_4285_ = v_l_4275_;
v_isShared_4286_ = v_isSharedCheck_4297_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_v_4283_);
lean_inc(v_k_4282_);
lean_dec(v_l_4275_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4297_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4287_; lean_object* v___x_4289_; 
v___x_4287_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_4276_, 2);
if (v_isShared_4286_ == 0)
{
lean_ctor_set(v___x_4285_, 4, v_r_4276_);
lean_ctor_set(v___x_4285_, 3, v_r_4276_);
lean_ctor_set(v___x_4285_, 2, v_v_4043_);
lean_ctor_set(v___x_4285_, 1, v_k_4042_);
lean_ctor_set(v___x_4285_, 0, v___x_4191_);
v___x_4289_ = v___x_4285_;
goto v_reusejp_4288_;
}
else
{
lean_object* v_reuseFailAlloc_4296_; 
v_reuseFailAlloc_4296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4296_, 0, v___x_4191_);
lean_ctor_set(v_reuseFailAlloc_4296_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4296_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4296_, 3, v_r_4276_);
lean_ctor_set(v_reuseFailAlloc_4296_, 4, v_r_4276_);
v___x_4289_ = v_reuseFailAlloc_4296_;
goto v_reusejp_4288_;
}
v_reusejp_4288_:
{
lean_object* v___x_4291_; 
lean_inc(v_r_4276_);
if (v_isShared_4281_ == 0)
{
lean_ctor_set(v___x_4280_, 3, v_r_4276_);
lean_ctor_set(v___x_4280_, 0, v___x_4191_);
v___x_4291_ = v___x_4280_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4295_; 
v_reuseFailAlloc_4295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4295_, 0, v___x_4191_);
lean_ctor_set(v_reuseFailAlloc_4295_, 1, v_k_4277_);
lean_ctor_set(v_reuseFailAlloc_4295_, 2, v_v_4278_);
lean_ctor_set(v_reuseFailAlloc_4295_, 3, v_r_4276_);
lean_ctor_set(v_reuseFailAlloc_4295_, 4, v_r_4276_);
v___x_4291_ = v_reuseFailAlloc_4295_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
lean_object* v___x_4293_; 
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 4, v___x_4291_);
lean_ctor_set(v___x_4047_, 3, v___x_4289_);
lean_ctor_set(v___x_4047_, 2, v_v_4283_);
lean_ctor_set(v___x_4047_, 1, v_k_4282_);
lean_ctor_set(v___x_4047_, 0, v___x_4287_);
v___x_4293_ = v___x_4047_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v___x_4287_);
lean_ctor_set(v_reuseFailAlloc_4294_, 1, v_k_4282_);
lean_ctor_set(v_reuseFailAlloc_4294_, 2, v_v_4283_);
lean_ctor_set(v_reuseFailAlloc_4294_, 3, v___x_4289_);
lean_ctor_set(v_reuseFailAlloc_4294_, 4, v___x_4291_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
return v___x_4293_;
}
}
}
}
}
}
else
{
lean_object* v_r_4304_; 
v_r_4304_ = lean_ctor_get(v_impl_4190_, 4);
lean_inc(v_r_4304_);
if (lean_obj_tag(v_r_4304_) == 0)
{
lean_object* v_k_4305_; lean_object* v_v_4306_; lean_object* v___x_4308_; uint8_t v_isShared_4309_; uint8_t v_isSharedCheck_4317_; 
v_k_4305_ = lean_ctor_get(v_impl_4190_, 1);
v_v_4306_ = lean_ctor_get(v_impl_4190_, 2);
v_isSharedCheck_4317_ = !lean_is_exclusive(v_impl_4190_);
if (v_isSharedCheck_4317_ == 0)
{
lean_object* v_unused_4318_; lean_object* v_unused_4319_; lean_object* v_unused_4320_; 
v_unused_4318_ = lean_ctor_get(v_impl_4190_, 4);
lean_dec(v_unused_4318_);
v_unused_4319_ = lean_ctor_get(v_impl_4190_, 3);
lean_dec(v_unused_4319_);
v_unused_4320_ = lean_ctor_get(v_impl_4190_, 0);
lean_dec(v_unused_4320_);
v___x_4308_ = v_impl_4190_;
v_isShared_4309_ = v_isSharedCheck_4317_;
goto v_resetjp_4307_;
}
else
{
lean_inc(v_v_4306_);
lean_inc(v_k_4305_);
lean_dec(v_impl_4190_);
v___x_4308_ = lean_box(0);
v_isShared_4309_ = v_isSharedCheck_4317_;
goto v_resetjp_4307_;
}
v_resetjp_4307_:
{
lean_object* v___x_4310_; lean_object* v___x_4312_; 
v___x_4310_ = lean_unsigned_to_nat(3u);
if (v_isShared_4309_ == 0)
{
lean_ctor_set(v___x_4308_, 4, v_l_4275_);
lean_ctor_set(v___x_4308_, 2, v_v_4043_);
lean_ctor_set(v___x_4308_, 1, v_k_4042_);
lean_ctor_set(v___x_4308_, 0, v___x_4191_);
v___x_4312_ = v___x_4308_;
goto v_reusejp_4311_;
}
else
{
lean_object* v_reuseFailAlloc_4316_; 
v_reuseFailAlloc_4316_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4316_, 0, v___x_4191_);
lean_ctor_set(v_reuseFailAlloc_4316_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4316_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4316_, 3, v_l_4275_);
lean_ctor_set(v_reuseFailAlloc_4316_, 4, v_l_4275_);
v___x_4312_ = v_reuseFailAlloc_4316_;
goto v_reusejp_4311_;
}
v_reusejp_4311_:
{
lean_object* v___x_4314_; 
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 4, v_r_4304_);
lean_ctor_set(v___x_4047_, 3, v___x_4312_);
lean_ctor_set(v___x_4047_, 2, v_v_4306_);
lean_ctor_set(v___x_4047_, 1, v_k_4305_);
lean_ctor_set(v___x_4047_, 0, v___x_4310_);
v___x_4314_ = v___x_4047_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v___x_4310_);
lean_ctor_set(v_reuseFailAlloc_4315_, 1, v_k_4305_);
lean_ctor_set(v_reuseFailAlloc_4315_, 2, v_v_4306_);
lean_ctor_set(v_reuseFailAlloc_4315_, 3, v___x_4312_);
lean_ctor_set(v_reuseFailAlloc_4315_, 4, v_r_4304_);
v___x_4314_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
return v___x_4314_;
}
}
}
}
else
{
lean_object* v___x_4321_; lean_object* v___x_4323_; 
v___x_4321_ = lean_unsigned_to_nat(2u);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 4, v_impl_4190_);
lean_ctor_set(v___x_4047_, 3, v_r_4304_);
lean_ctor_set(v___x_4047_, 0, v___x_4321_);
v___x_4323_ = v___x_4047_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v___x_4321_);
lean_ctor_set(v_reuseFailAlloc_4324_, 1, v_k_4042_);
lean_ctor_set(v_reuseFailAlloc_4324_, 2, v_v_4043_);
lean_ctor_set(v_reuseFailAlloc_4324_, 3, v_r_4304_);
lean_ctor_set(v_reuseFailAlloc_4324_, 4, v_impl_4190_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
return v___x_4323_;
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
lean_object* v___x_4326_; lean_object* v___x_4327_; 
v___x_4326_ = lean_unsigned_to_nat(1u);
v___x_4327_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4327_, 0, v___x_4326_);
lean_ctor_set(v___x_4327_, 1, v_k_4038_);
lean_ctor_set(v___x_4327_, 2, v_v_4039_);
lean_ctor_set(v___x_4327_, 3, v_t_4040_);
lean_ctor_set(v___x_4327_, 4, v_t_4040_);
return v___x_4327_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_DirectImports_convertImportInfos_spec__2(lean_object* v_as_4328_, size_t v_sz_4329_, size_t v_i_4330_, lean_object* v_b_4331_){
_start:
{
uint8_t v___x_4332_; 
v___x_4332_ = lean_usize_dec_lt(v_i_4330_, v_sz_4329_);
if (v___x_4332_ == 0)
{
return v_b_4331_;
}
else
{
lean_object* v_a_4333_; lean_object* v_fst_4334_; lean_object* v_snd_4335_; lean_object* v_r_4336_; size_t v___x_4337_; size_t v___x_4338_; 
v_a_4333_ = lean_array_uget_borrowed(v_as_4328_, v_i_4330_);
v_fst_4334_ = lean_ctor_get(v_a_4333_, 0);
v_snd_4335_ = lean_ctor_get(v_a_4333_, 1);
lean_inc(v_snd_4335_);
lean_inc(v_fst_4334_);
v_r_4336_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_fst_4334_, v_snd_4335_, v_b_4331_);
v___x_4337_ = ((size_t)1ULL);
v___x_4338_ = lean_usize_add(v_i_4330_, v___x_4337_);
v_i_4330_ = v___x_4338_;
v_b_4331_ = v_r_4336_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_DirectImports_convertImportInfos_spec__2___boxed(lean_object* v_as_4340_, lean_object* v_sz_4341_, lean_object* v_i_4342_, lean_object* v_b_4343_){
_start:
{
size_t v_sz_boxed_4344_; size_t v_i_boxed_4345_; lean_object* v_res_4346_; 
v_sz_boxed_4344_ = lean_unbox_usize(v_sz_4341_);
lean_dec(v_sz_4341_);
v_i_boxed_4345_ = lean_unbox_usize(v_i_4342_);
lean_dec(v_i_4342_);
v_res_4346_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_DirectImports_convertImportInfos_spec__2(v_as_4340_, v_sz_boxed_4344_, v_i_boxed_4345_, v_b_4343_);
lean_dec_ref(v_as_4340_);
return v_res_4346_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg___lam__0(lean_object* v_a_4349_, lean_object* v_x_4350_){
_start:
{
lean_object* v___y_4352_; 
if (lean_obj_tag(v_x_4350_) == 0)
{
lean_object* v___x_4355_; 
v___x_4355_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg___lam__0___closed__0));
v___y_4352_ = v___x_4355_;
goto v___jp_4351_;
}
else
{
lean_object* v_val_4356_; 
v_val_4356_ = lean_ctor_get(v_x_4350_, 0);
lean_inc(v_val_4356_);
lean_dec_ref_known(v_x_4350_, 1);
v___y_4352_ = v_val_4356_;
goto v___jp_4351_;
}
v___jp_4351_:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; 
v___x_4353_ = lean_array_push(v___y_4352_, v_a_4349_);
v___x_4354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4354_, 0, v___x_4353_);
return v___x_4354_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg(lean_object* v_a_4357_, lean_object* v_a_4358_, lean_object* v_x_4359_){
_start:
{
if (lean_obj_tag(v_x_4359_) == 0)
{
lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v_val_4362_; lean_object* v___x_4363_; 
v___x_4360_ = lean_box(0);
v___x_4361_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg___lam__0(v_a_4357_, v___x_4360_);
v_val_4362_ = lean_ctor_get(v___x_4361_, 0);
lean_inc(v_val_4362_);
lean_dec(v___x_4361_);
v___x_4363_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4363_, 0, v_a_4358_);
lean_ctor_set(v___x_4363_, 1, v_val_4362_);
lean_ctor_set(v___x_4363_, 2, v_x_4359_);
return v___x_4363_;
}
else
{
lean_object* v_key_4364_; lean_object* v_value_4365_; lean_object* v_tail_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4381_; 
v_key_4364_ = lean_ctor_get(v_x_4359_, 0);
v_value_4365_ = lean_ctor_get(v_x_4359_, 1);
v_tail_4366_ = lean_ctor_get(v_x_4359_, 2);
v_isSharedCheck_4381_ = !lean_is_exclusive(v_x_4359_);
if (v_isSharedCheck_4381_ == 0)
{
v___x_4368_ = v_x_4359_;
v_isShared_4369_ = v_isSharedCheck_4381_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_tail_4366_);
lean_inc(v_value_4365_);
lean_inc(v_key_4364_);
lean_dec(v_x_4359_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4381_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
uint8_t v___x_4370_; 
v___x_4370_ = lean_name_eq(v_key_4364_, v_a_4358_);
if (v___x_4370_ == 0)
{
lean_object* v_tail_4371_; lean_object* v___x_4373_; 
v_tail_4371_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg(v_a_4357_, v_a_4358_, v_tail_4366_);
if (v_isShared_4369_ == 0)
{
lean_ctor_set(v___x_4368_, 2, v_tail_4371_);
v___x_4373_ = v___x_4368_;
goto v_reusejp_4372_;
}
else
{
lean_object* v_reuseFailAlloc_4374_; 
v_reuseFailAlloc_4374_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4374_, 0, v_key_4364_);
lean_ctor_set(v_reuseFailAlloc_4374_, 1, v_value_4365_);
lean_ctor_set(v_reuseFailAlloc_4374_, 2, v_tail_4371_);
v___x_4373_ = v_reuseFailAlloc_4374_;
goto v_reusejp_4372_;
}
v_reusejp_4372_:
{
return v___x_4373_;
}
}
else
{
lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v_val_4377_; lean_object* v___x_4379_; 
lean_dec(v_key_4364_);
v___x_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4375_, 0, v_value_4365_);
v___x_4376_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg___lam__0(v_a_4357_, v___x_4375_);
v_val_4377_ = lean_ctor_get(v___x_4376_, 0);
lean_inc(v_val_4377_);
lean_dec(v___x_4376_);
if (v_isShared_4369_ == 0)
{
lean_ctor_set(v___x_4368_, 1, v_val_4377_);
lean_ctor_set(v___x_4368_, 0, v_a_4358_);
v___x_4379_ = v___x_4368_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v_a_4358_);
lean_ctor_set(v_reuseFailAlloc_4380_, 1, v_val_4377_);
lean_ctor_set(v_reuseFailAlloc_4380_, 2, v_tail_4366_);
v___x_4379_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
return v___x_4379_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9_spec__11___redArg(lean_object* v_x_4382_, lean_object* v_x_4383_){
_start:
{
if (lean_obj_tag(v_x_4383_) == 0)
{
return v_x_4382_;
}
else
{
lean_object* v_key_4384_; lean_object* v_value_4385_; lean_object* v_tail_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4412_; 
v_key_4384_ = lean_ctor_get(v_x_4383_, 0);
v_value_4385_ = lean_ctor_get(v_x_4383_, 1);
v_tail_4386_ = lean_ctor_get(v_x_4383_, 2);
v_isSharedCheck_4412_ = !lean_is_exclusive(v_x_4383_);
if (v_isSharedCheck_4412_ == 0)
{
v___x_4388_ = v_x_4383_;
v_isShared_4389_ = v_isSharedCheck_4412_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_tail_4386_);
lean_inc(v_value_4385_);
lean_inc(v_key_4384_);
lean_dec(v_x_4383_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4412_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
lean_object* v___x_4390_; uint64_t v___y_4392_; 
v___x_4390_ = lean_array_get_size(v_x_4382_);
if (lean_obj_tag(v_key_4384_) == 0)
{
uint64_t v___x_4410_; 
v___x_4410_ = 1723ULL;
v___y_4392_ = v___x_4410_;
goto v___jp_4391_;
}
else
{
uint64_t v_hash_4411_; 
v_hash_4411_ = lean_ctor_get_uint64(v_key_4384_, sizeof(void*)*2);
v___y_4392_ = v_hash_4411_;
goto v___jp_4391_;
}
v___jp_4391_:
{
uint64_t v___x_4393_; uint64_t v___x_4394_; uint64_t v_fold_4395_; uint64_t v___x_4396_; uint64_t v___x_4397_; uint64_t v___x_4398_; size_t v___x_4399_; size_t v___x_4400_; size_t v___x_4401_; size_t v___x_4402_; size_t v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4406_; 
v___x_4393_ = 32ULL;
v___x_4394_ = lean_uint64_shift_right(v___y_4392_, v___x_4393_);
v_fold_4395_ = lean_uint64_xor(v___y_4392_, v___x_4394_);
v___x_4396_ = 16ULL;
v___x_4397_ = lean_uint64_shift_right(v_fold_4395_, v___x_4396_);
v___x_4398_ = lean_uint64_xor(v_fold_4395_, v___x_4397_);
v___x_4399_ = lean_uint64_to_usize(v___x_4398_);
v___x_4400_ = lean_usize_of_nat(v___x_4390_);
v___x_4401_ = ((size_t)1ULL);
v___x_4402_ = lean_usize_sub(v___x_4400_, v___x_4401_);
v___x_4403_ = lean_usize_land(v___x_4399_, v___x_4402_);
v___x_4404_ = lean_array_uget_borrowed(v_x_4382_, v___x_4403_);
lean_inc(v___x_4404_);
if (v_isShared_4389_ == 0)
{
lean_ctor_set(v___x_4388_, 2, v___x_4404_);
v___x_4406_ = v___x_4388_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v_key_4384_);
lean_ctor_set(v_reuseFailAlloc_4409_, 1, v_value_4385_);
lean_ctor_set(v_reuseFailAlloc_4409_, 2, v___x_4404_);
v___x_4406_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
lean_object* v___x_4407_; 
v___x_4407_ = lean_array_uset(v_x_4382_, v___x_4403_, v___x_4406_);
v_x_4382_ = v___x_4407_;
v_x_4383_ = v_tail_4386_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9___redArg(lean_object* v_i_4413_, lean_object* v_source_4414_, lean_object* v_target_4415_){
_start:
{
lean_object* v___x_4416_; uint8_t v___x_4417_; 
v___x_4416_ = lean_array_get_size(v_source_4414_);
v___x_4417_ = lean_nat_dec_lt(v_i_4413_, v___x_4416_);
if (v___x_4417_ == 0)
{
lean_dec_ref(v_source_4414_);
lean_dec(v_i_4413_);
return v_target_4415_;
}
else
{
lean_object* v_es_4418_; lean_object* v___x_4419_; lean_object* v_source_4420_; lean_object* v_target_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; 
v_es_4418_ = lean_array_fget(v_source_4414_, v_i_4413_);
v___x_4419_ = lean_box(0);
v_source_4420_ = lean_array_fset(v_source_4414_, v_i_4413_, v___x_4419_);
v_target_4421_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9_spec__11___redArg(v_target_4415_, v_es_4418_);
v___x_4422_ = lean_unsigned_to_nat(1u);
v___x_4423_ = lean_nat_add(v_i_4413_, v___x_4422_);
lean_dec(v_i_4413_);
v_i_4413_ = v___x_4423_;
v_source_4414_ = v_source_4420_;
v_target_4415_ = v_target_4421_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6___redArg(lean_object* v_data_4425_){
_start:
{
lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v_nbuckets_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; 
v___x_4426_ = lean_array_get_size(v_data_4425_);
v___x_4427_ = lean_unsigned_to_nat(2u);
v_nbuckets_4428_ = lean_nat_mul(v___x_4426_, v___x_4427_);
v___x_4429_ = lean_unsigned_to_nat(0u);
v___x_4430_ = lean_box(0);
v___x_4431_ = lean_mk_array(v_nbuckets_4428_, v___x_4430_);
v___x_4432_ = lean_array_propagate_mark(v_data_4425_, v___x_4431_);
v___x_4433_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9___redArg(v___x_4429_, v_data_4425_, v___x_4432_);
return v___x_4433_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___redArg(lean_object* v_a_4434_, lean_object* v_x_4435_){
_start:
{
if (lean_obj_tag(v_x_4435_) == 0)
{
uint8_t v___x_4436_; 
v___x_4436_ = 0;
return v___x_4436_;
}
else
{
lean_object* v_key_4437_; lean_object* v_tail_4438_; uint8_t v___x_4439_; 
v_key_4437_ = lean_ctor_get(v_x_4435_, 0);
v_tail_4438_ = lean_ctor_get(v_x_4435_, 2);
v___x_4439_ = lean_name_eq(v_key_4437_, v_a_4434_);
if (v___x_4439_ == 0)
{
v_x_4435_ = v_tail_4438_;
goto _start;
}
else
{
return v___x_4439_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_a_4441_, lean_object* v_x_4442_){
_start:
{
uint8_t v_res_4443_; lean_object* v_r_4444_; 
v_res_4443_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___redArg(v_a_4441_, v_x_4442_);
lean_dec(v_x_4442_);
lean_dec(v_a_4441_);
v_r_4444_ = lean_box(v_res_4443_);
return v_r_4444_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4___redArg(lean_object* v_a_4445_, lean_object* v_m_4446_, lean_object* v_a_4447_){
_start:
{
lean_object* v___y_4449_; lean_object* v___y_4450_; size_t v___y_4451_; lean_object* v___y_4452_; lean_object* v_size_4455_; lean_object* v_buckets_4456_; lean_object* v___x_4458_; uint8_t v_isShared_4459_; uint8_t v_isSharedCheck_4503_; 
v_size_4455_ = lean_ctor_get(v_m_4446_, 0);
v_buckets_4456_ = lean_ctor_get(v_m_4446_, 1);
v_isSharedCheck_4503_ = !lean_is_exclusive(v_m_4446_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4458_ = v_m_4446_;
v_isShared_4459_ = v_isSharedCheck_4503_;
goto v_resetjp_4457_;
}
else
{
lean_inc(v_buckets_4456_);
lean_inc(v_size_4455_);
lean_dec(v_m_4446_);
v___x_4458_ = lean_box(0);
v_isShared_4459_ = v_isSharedCheck_4503_;
goto v_resetjp_4457_;
}
v___jp_4448_:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; 
v___x_4453_ = lean_array_uset(v___y_4450_, v___y_4451_, v___y_4449_);
v___x_4454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4454_, 0, v___y_4452_);
lean_ctor_set(v___x_4454_, 1, v___x_4453_);
return v___x_4454_;
}
v_resetjp_4457_:
{
lean_object* v___x_4460_; uint64_t v___y_4462_; 
v___x_4460_ = lean_array_get_size(v_buckets_4456_);
if (lean_obj_tag(v_a_4447_) == 0)
{
uint64_t v___x_4501_; 
v___x_4501_ = 1723ULL;
v___y_4462_ = v___x_4501_;
goto v___jp_4461_;
}
else
{
uint64_t v_hash_4502_; 
v_hash_4502_ = lean_ctor_get_uint64(v_a_4447_, sizeof(void*)*2);
v___y_4462_ = v_hash_4502_;
goto v___jp_4461_;
}
v___jp_4461_:
{
uint64_t v___x_4463_; uint64_t v___x_4464_; uint64_t v_fold_4465_; uint64_t v___x_4466_; uint64_t v___x_4467_; uint64_t v___x_4468_; size_t v___x_4469_; size_t v___x_4470_; size_t v___x_4471_; size_t v___x_4472_; size_t v___x_4473_; lean_object* v_bkt_4474_; uint8_t v___x_4475_; 
v___x_4463_ = 32ULL;
v___x_4464_ = lean_uint64_shift_right(v___y_4462_, v___x_4463_);
v_fold_4465_ = lean_uint64_xor(v___y_4462_, v___x_4464_);
v___x_4466_ = 16ULL;
v___x_4467_ = lean_uint64_shift_right(v_fold_4465_, v___x_4466_);
v___x_4468_ = lean_uint64_xor(v_fold_4465_, v___x_4467_);
v___x_4469_ = lean_uint64_to_usize(v___x_4468_);
v___x_4470_ = lean_usize_of_nat(v___x_4460_);
v___x_4471_ = ((size_t)1ULL);
v___x_4472_ = lean_usize_sub(v___x_4470_, v___x_4471_);
v___x_4473_ = lean_usize_land(v___x_4469_, v___x_4472_);
v_bkt_4474_ = lean_array_uget_borrowed(v_buckets_4456_, v___x_4473_);
v___x_4475_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___redArg(v_a_4447_, v_bkt_4474_);
if (v___x_4475_ == 0)
{
lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v_size_x27_4479_; lean_object* v___x_4480_; lean_object* v_buckets_x27_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; uint8_t v___x_4487_; 
v___x_4476_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg___lam__0___closed__0));
v___x_4477_ = lean_array_push(v___x_4476_, v_a_4445_);
v___x_4478_ = lean_unsigned_to_nat(1u);
v_size_x27_4479_ = lean_nat_add(v_size_4455_, v___x_4478_);
lean_dec(v_size_4455_);
lean_inc(v_bkt_4474_);
v___x_4480_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4480_, 0, v_a_4447_);
lean_ctor_set(v___x_4480_, 1, v___x_4477_);
lean_ctor_set(v___x_4480_, 2, v_bkt_4474_);
v_buckets_x27_4481_ = lean_array_uset(v_buckets_4456_, v___x_4473_, v___x_4480_);
v___x_4482_ = lean_unsigned_to_nat(4u);
v___x_4483_ = lean_nat_mul(v_size_x27_4479_, v___x_4482_);
v___x_4484_ = lean_unsigned_to_nat(3u);
v___x_4485_ = lean_nat_div(v___x_4483_, v___x_4484_);
lean_dec(v___x_4483_);
v___x_4486_ = lean_array_get_size(v_buckets_x27_4481_);
v___x_4487_ = lean_nat_dec_le(v___x_4485_, v___x_4486_);
lean_dec(v___x_4485_);
if (v___x_4487_ == 0)
{
lean_object* v_val_4488_; lean_object* v___x_4490_; 
v_val_4488_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6___redArg(v_buckets_x27_4481_);
if (v_isShared_4459_ == 0)
{
lean_ctor_set(v___x_4458_, 1, v_val_4488_);
lean_ctor_set(v___x_4458_, 0, v_size_x27_4479_);
v___x_4490_ = v___x_4458_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v_size_x27_4479_);
lean_ctor_set(v_reuseFailAlloc_4491_, 1, v_val_4488_);
v___x_4490_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
return v___x_4490_;
}
}
else
{
lean_object* v___x_4493_; 
if (v_isShared_4459_ == 0)
{
lean_ctor_set(v___x_4458_, 1, v_buckets_x27_4481_);
lean_ctor_set(v___x_4458_, 0, v_size_x27_4479_);
v___x_4493_ = v___x_4458_;
goto v_reusejp_4492_;
}
else
{
lean_object* v_reuseFailAlloc_4494_; 
v_reuseFailAlloc_4494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4494_, 0, v_size_x27_4479_);
lean_ctor_set(v_reuseFailAlloc_4494_, 1, v_buckets_x27_4481_);
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
lean_object* v___x_4495_; lean_object* v_buckets_x27_4496_; lean_object* v_bkt_x27_4497_; uint8_t v___x_4498_; 
lean_inc(v_bkt_4474_);
lean_del_object(v___x_4458_);
v___x_4495_ = lean_box(0);
v_buckets_x27_4496_ = lean_array_uset(v_buckets_4456_, v___x_4473_, v___x_4495_);
lean_inc(v_a_4447_);
v_bkt_x27_4497_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg(v_a_4445_, v_a_4447_, v_bkt_4474_);
v___x_4498_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___redArg(v_a_4447_, v_bkt_x27_4497_);
lean_dec(v_a_4447_);
if (v___x_4498_ == 0)
{
lean_object* v___x_4499_; lean_object* v___x_4500_; 
v___x_4499_ = lean_unsigned_to_nat(1u);
v___x_4500_ = lean_nat_sub(v_size_4455_, v___x_4499_);
lean_dec(v_size_4455_);
v___y_4449_ = v_bkt_x27_4497_;
v___y_4450_ = v_buckets_x27_4496_;
v___y_4451_ = v___x_4473_;
v___y_4452_ = v___x_4500_;
goto v___jp_4448_;
}
else
{
v___y_4449_ = v_bkt_x27_4497_;
v___y_4450_ = v_buckets_x27_4496_;
v___y_4451_ = v___x_4473_;
v___y_4452_ = v_size_4455_;
goto v___jp_4448_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5___redArg(lean_object* v_key_4504_, lean_object* v_as_4505_, size_t v_sz_4506_, size_t v_i_4507_, lean_object* v_b_4508_){
_start:
{
uint8_t v___x_4509_; 
v___x_4509_ = lean_usize_dec_lt(v_i_4507_, v_sz_4506_);
if (v___x_4509_ == 0)
{
lean_dec_ref(v_key_4504_);
return v_b_4508_;
}
else
{
lean_object* v_a_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; size_t v___x_4513_; size_t v___x_4514_; 
v_a_4510_ = lean_array_uget_borrowed(v_as_4505_, v_i_4507_);
lean_inc_ref(v_key_4504_);
lean_inc_n(v_a_4510_, 2);
v___x_4511_ = lean_apply_1(v_key_4504_, v_a_4510_);
v___x_4512_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4___redArg(v_a_4510_, v_b_4508_, v___x_4511_);
v___x_4513_ = ((size_t)1ULL);
v___x_4514_ = lean_usize_add(v_i_4507_, v___x_4513_);
v_i_4507_ = v___x_4514_;
v_b_4508_ = v___x_4512_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5___redArg___boxed(lean_object* v_key_4516_, lean_object* v_as_4517_, lean_object* v_sz_4518_, lean_object* v_i_4519_, lean_object* v_b_4520_){
_start:
{
size_t v_sz_boxed_4521_; size_t v_i_boxed_4522_; lean_object* v_res_4523_; 
v_sz_boxed_4521_ = lean_unbox_usize(v_sz_4518_);
lean_dec(v_sz_4518_);
v_i_boxed_4522_ = lean_unbox_usize(v_i_4519_);
lean_dec(v_i_4519_);
v_res_4523_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5___redArg(v_key_4516_, v_as_4517_, v_sz_boxed_4521_, v_i_boxed_4522_, v_b_4520_);
lean_dec_ref(v_as_4517_);
return v_res_4523_;
}
}
static lean_object* _init_l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4524_ = lean_box(0);
v___x_4525_ = lean_unsigned_to_nat(16u);
v___x_4526_ = lean_mk_array(v___x_4525_, v___x_4524_);
return v___x_4526_;
}
}
static lean_object* _init_l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v_groups_4529_; 
v___x_4527_ = lean_obj_once(&l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__0, &l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__0_once, _init_l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__0);
v___x_4528_ = lean_unsigned_to_nat(0u);
v_groups_4529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_groups_4529_, 0, v___x_4528_);
lean_ctor_set(v_groups_4529_, 1, v___x_4527_);
return v_groups_4529_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg(lean_object* v_key_4530_, lean_object* v_xs_4531_){
_start:
{
lean_object* v_groups_4532_; size_t v_sz_4533_; size_t v___x_4534_; lean_object* v___x_4535_; 
v_groups_4532_ = lean_obj_once(&l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__1, &l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__1_once, _init_l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___closed__1);
v_sz_4533_ = lean_array_size(v_xs_4531_);
v___x_4534_ = ((size_t)0ULL);
v___x_4535_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5___redArg(v_key_4530_, v_xs_4531_, v_sz_4533_, v___x_4534_, v_groups_4532_);
return v___x_4535_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg___boxed(lean_object* v_key_4536_, lean_object* v_xs_4537_){
_start:
{
lean_object* v_res_4538_; 
v_res_4538_ = l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg(v_key_4536_, v_xs_4537_);
lean_dec_ref(v_xs_4537_);
return v_res_4538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_DirectImports_convertImportInfos(lean_object* v_infos_4540_){
_start:
{
lean_object* v___f_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; 
v___f_4542_ = ((lean_object*)(l_Lean_Server_DirectImports_convertImportInfos___closed__0));
v___x_4543_ = lean_unsigned_to_nat(0u);
v___x_4544_ = lean_array_get_size(v_infos_4540_);
v___x_4545_ = l_Array_filterMapM___at___00Lean_Server_DirectImports_convertImportInfos_spec__0(v_infos_4540_, v___x_4543_, v___x_4544_);
if (lean_obj_tag(v___x_4545_) == 0)
{
lean_object* v_a_4546_; lean_object* v___x_4548_; uint8_t v_isShared_4549_; uint8_t v_isSharedCheck_4569_; 
v_a_4546_ = lean_ctor_get(v___x_4545_, 0);
v_isSharedCheck_4569_ = !lean_is_exclusive(v___x_4545_);
if (v_isSharedCheck_4569_ == 0)
{
v___x_4548_ = v___x_4545_;
v_isShared_4549_ = v_isSharedCheck_4569_;
goto v_resetjp_4547_;
}
else
{
lean_inc(v_a_4546_);
lean_dec(v___x_4545_);
v___x_4548_ = lean_box(0);
v_isShared_4549_ = v_isSharedCheck_4569_;
goto v_resetjp_4547_;
}
v_resetjp_4547_:
{
lean_object* v___y_4551_; lean_object* v___x_4560_; lean_object* v_size_4561_; lean_object* v_buckets_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; uint8_t v___x_4565_; 
v___x_4560_ = l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg(v___f_4542_, v_a_4546_);
v_size_4561_ = lean_ctor_get(v___x_4560_, 0);
lean_inc(v_size_4561_);
v_buckets_4562_ = lean_ctor_get(v___x_4560_, 1);
lean_inc_ref(v_buckets_4562_);
lean_dec_ref(v___x_4560_);
v___x_4563_ = lean_mk_empty_array_with_capacity(v_size_4561_);
lean_dec(v_size_4561_);
v___x_4564_ = lean_array_get_size(v_buckets_4562_);
v___x_4565_ = lean_nat_dec_lt(v___x_4543_, v___x_4564_);
if (v___x_4565_ == 0)
{
lean_dec_ref(v_buckets_4562_);
v___y_4551_ = v___x_4563_;
goto v___jp_4550_;
}
else
{
size_t v___x_4566_; size_t v___x_4567_; lean_object* v___x_4568_; 
v___x_4566_ = ((size_t)0ULL);
v___x_4567_ = lean_usize_of_nat(v___x_4564_);
v___x_4568_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_DirectImports_convertImportInfos_spec__5(v_buckets_4562_, v___x_4566_, v___x_4567_, v___x_4563_);
lean_dec_ref(v_buckets_4562_);
v___y_4551_ = v___x_4568_;
goto v___jp_4550_;
}
v___jp_4550_:
{
lean_object* v_r_4552_; size_t v_sz_4553_; size_t v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4558_; 
v_r_4552_ = lean_box(1);
v_sz_4553_ = lean_array_size(v___y_4551_);
v___x_4554_ = ((size_t)0ULL);
v___x_4555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_DirectImports_convertImportInfos_spec__2(v___y_4551_, v_sz_4553_, v___x_4554_, v_r_4552_);
lean_dec_ref(v___y_4551_);
v___x_4556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4556_, 0, v_a_4546_);
lean_ctor_set(v___x_4556_, 1, v___x_4555_);
if (v_isShared_4549_ == 0)
{
lean_ctor_set(v___x_4548_, 0, v___x_4556_);
v___x_4558_ = v___x_4548_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v___x_4556_);
v___x_4558_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
return v___x_4558_;
}
}
}
}
else
{
lean_object* v_a_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4577_; 
v_a_4570_ = lean_ctor_get(v___x_4545_, 0);
v_isSharedCheck_4577_ = !lean_is_exclusive(v___x_4545_);
if (v_isSharedCheck_4577_ == 0)
{
v___x_4572_ = v___x_4545_;
v_isShared_4573_ = v_isSharedCheck_4577_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_a_4570_);
lean_dec(v___x_4545_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4577_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v___x_4575_; 
if (v_isShared_4573_ == 0)
{
v___x_4575_ = v___x_4572_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v_a_4570_);
v___x_4575_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
return v___x_4575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_DirectImports_convertImportInfos___boxed(lean_object* v_infos_4578_, lean_object* v___y_4579_){
_start:
{
lean_object* v_res_4580_; 
v_res_4580_ = l_Lean_Server_DirectImports_convertImportInfos(v_infos_4578_);
lean_dec_ref(v_infos_4578_);
return v_res_4580_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1(lean_object* v_00_u03b2_4581_, lean_object* v_k_4582_, lean_object* v_v_4583_, lean_object* v_t_4584_, lean_object* v_hl_4585_){
_start:
{
lean_object* v___x_4586_; 
v___x_4586_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_k_4582_, v_v_4583_, v_t_4584_);
return v___x_4586_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3(lean_object* v_00_u03b2_4587_, lean_object* v_key_4588_, lean_object* v_xs_4589_){
_start:
{
lean_object* v___x_4590_; 
v___x_4590_ = l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___redArg(v_key_4588_, v_xs_4589_);
return v___x_4590_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3___boxed(lean_object* v_00_u03b2_4591_, lean_object* v_key_4592_, lean_object* v_xs_4593_){
_start:
{
lean_object* v_res_4594_; 
v_res_4594_ = l_Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3(v_00_u03b2_4591_, v_key_4592_, v_xs_4593_);
lean_dec_ref(v_xs_4593_);
return v_res_4594_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4(lean_object* v_00_u03b2_4595_, lean_object* v_a_4596_, lean_object* v_m_4597_, lean_object* v_a_4598_){
_start:
{
lean_object* v___x_4599_; 
v___x_4599_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4___redArg(v_a_4596_, v_m_4597_, v_a_4598_);
return v___x_4599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5(lean_object* v_00_u03b2_4600_, lean_object* v_key_4601_, lean_object* v_as_4602_, size_t v_sz_4603_, size_t v_i_4604_, lean_object* v_b_4605_){
_start:
{
lean_object* v___x_4606_; 
v___x_4606_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5___redArg(v_key_4601_, v_as_4602_, v_sz_4603_, v_i_4604_, v_b_4605_);
return v___x_4606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5___boxed(lean_object* v_00_u03b2_4607_, lean_object* v_key_4608_, lean_object* v_as_4609_, lean_object* v_sz_4610_, lean_object* v_i_4611_, lean_object* v_b_4612_){
_start:
{
size_t v_sz_boxed_4613_; size_t v_i_boxed_4614_; lean_object* v_res_4615_; 
v_sz_boxed_4613_ = lean_unbox_usize(v_sz_4610_);
lean_dec(v_sz_4610_);
v_i_boxed_4614_ = lean_unbox_usize(v_i_4611_);
lean_dec(v_i_4611_);
v_res_4615_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__5(v_00_u03b2_4607_, v_key_4608_, v_as_4609_, v_sz_boxed_4613_, v_i_boxed_4614_, v_b_4612_);
lean_dec_ref(v_as_4609_);
return v_res_4615_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_4616_, lean_object* v_a_4617_, lean_object* v_x_4618_){
_start:
{
uint8_t v___x_4619_; 
v___x_4619_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___redArg(v_a_4617_, v_x_4618_);
return v___x_4619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5___boxed(lean_object* v_00_u03b2_4620_, lean_object* v_a_4621_, lean_object* v_x_4622_){
_start:
{
uint8_t v_res_4623_; lean_object* v_r_4624_; 
v_res_4623_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__5(v_00_u03b2_4620_, v_a_4621_, v_x_4622_);
lean_dec(v_x_4622_);
lean_dec(v_a_4621_);
v_r_4624_ = lean_box(v_res_4623_);
return v_r_4624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_4625_, lean_object* v_data_4626_){
_start:
{
lean_object* v___x_4627_; 
v___x_4627_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6___redArg(v_data_4626_);
return v___x_4627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7(lean_object* v_00_u03b2_4628_, lean_object* v_a_4629_, lean_object* v_a_4630_, lean_object* v_x_4631_){
_start:
{
lean_object* v___x_4632_; 
v___x_4632_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__7___redArg(v_a_4629_, v_a_4630_, v_x_4631_);
return v___x_4632_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9(lean_object* v_00_u03b2_4633_, lean_object* v_i_4634_, lean_object* v_source_4635_, lean_object* v_target_4636_){
_start:
{
lean_object* v___x_4637_; 
v___x_4637_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9___redArg(v_i_4634_, v_source_4635_, v_target_4636_);
return v___x_4637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9_spec__11(lean_object* v_00_u03b2_4638_, lean_object* v_x_4639_, lean_object* v_x_4640_){
_start:
{
lean_object* v___x_4641_; 
v___x_4641_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00Lean_Server_DirectImports_convertImportInfos_spec__3_spec__4_spec__6_spec__9_spec__11___redArg(v_x_4639_, v_x_4640_);
return v___x_4641_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_TransientWorkerILean_hasRefs(lean_object* v_i_4642_){
_start:
{
lean_object* v_isSetupFailure_x3f_4643_; 
v_isSetupFailure_x3f_4643_ = lean_ctor_get(v_i_4642_, 3);
if (lean_obj_tag(v_isSetupFailure_x3f_4643_) == 0)
{
uint8_t v___x_4644_; 
v___x_4644_ = 0;
return v___x_4644_;
}
else
{
lean_object* v_val_4645_; uint8_t v___x_4646_; 
v_val_4645_ = lean_ctor_get(v_isSetupFailure_x3f_4643_, 0);
v___x_4646_ = lean_unbox(v_val_4645_);
if (v___x_4646_ == 0)
{
uint8_t v___x_4647_; 
v___x_4647_ = 1;
return v___x_4647_;
}
else
{
uint8_t v___x_4648_; 
v___x_4648_ = 0;
return v___x_4648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_TransientWorkerILean_hasRefs___boxed(lean_object* v_i_4649_){
_start:
{
uint8_t v_res_4650_; lean_object* v_r_4651_; 
v_res_4650_ = l_Lean_Server_TransientWorkerILean_hasRefs(v_i_4649_);
lean_dec_ref(v_i_4649_);
v_r_4651_ = lean_box(v_res_4650_);
return v_r_4651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_addIlean(lean_object* v_self_4657_, lean_object* v_path_4658_, lean_object* v_ilean_4659_){
_start:
{
lean_object* v_module_4661_; lean_object* v_directImports_4662_; lean_object* v_references_4663_; lean_object* v_decls_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4716_; 
v_module_4661_ = lean_ctor_get(v_ilean_4659_, 1);
v_directImports_4662_ = lean_ctor_get(v_ilean_4659_, 2);
v_references_4663_ = lean_ctor_get(v_ilean_4659_, 3);
v_decls_4664_ = lean_ctor_get(v_ilean_4659_, 4);
v_isSharedCheck_4716_ = !lean_is_exclusive(v_ilean_4659_);
if (v_isSharedCheck_4716_ == 0)
{
lean_object* v_unused_4717_; 
v_unused_4717_ = lean_ctor_get(v_ilean_4659_, 0);
lean_dec(v_unused_4717_);
v___x_4666_ = v_ilean_4659_;
v_isShared_4667_ = v_isSharedCheck_4716_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_decls_4664_);
lean_inc(v_references_4663_);
lean_inc(v_directImports_4662_);
lean_inc(v_module_4661_);
lean_dec(v_ilean_4659_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4716_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4668_; 
lean_inc(v_module_4661_);
v___x_4668_ = l_Lean_Server_documentUriFromModule_x3f(v_module_4661_);
if (lean_obj_tag(v___x_4668_) == 0)
{
lean_object* v_a_4669_; lean_object* v___x_4671_; uint8_t v_isShared_4672_; uint8_t v_isSharedCheck_4707_; 
v_a_4669_ = lean_ctor_get(v___x_4668_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v___x_4668_);
if (v_isSharedCheck_4707_ == 0)
{
v___x_4671_ = v___x_4668_;
v_isShared_4672_ = v_isSharedCheck_4707_;
goto v_resetjp_4670_;
}
else
{
lean_inc(v_a_4669_);
lean_dec(v___x_4668_);
v___x_4671_ = lean_box(0);
v_isShared_4672_ = v_isSharedCheck_4707_;
goto v_resetjp_4670_;
}
v_resetjp_4670_:
{
if (lean_obj_tag(v_a_4669_) == 1)
{
lean_object* v_val_4673_; lean_object* v___x_4674_; 
lean_del_object(v___x_4671_);
v_val_4673_ = lean_ctor_get(v_a_4669_, 0);
lean_inc(v_val_4673_);
lean_dec_ref_known(v_a_4669_, 1);
v___x_4674_ = l_Lean_Server_DirectImports_convertImportInfos(v_directImports_4662_);
lean_dec_ref(v_directImports_4662_);
if (lean_obj_tag(v___x_4674_) == 0)
{
lean_object* v_a_4675_; lean_object* v___x_4677_; uint8_t v_isShared_4678_; uint8_t v_isSharedCheck_4695_; 
v_a_4675_ = lean_ctor_get(v___x_4674_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4674_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4677_ = v___x_4674_;
v_isShared_4678_ = v_isSharedCheck_4695_;
goto v_resetjp_4676_;
}
else
{
lean_inc(v_a_4675_);
lean_dec(v___x_4674_);
v___x_4677_ = lean_box(0);
v_isShared_4678_ = v_isSharedCheck_4695_;
goto v_resetjp_4676_;
}
v_resetjp_4676_:
{
lean_object* v_ileans_4679_; lean_object* v_workers_4680_; lean_object* v___x_4682_; uint8_t v_isShared_4683_; uint8_t v_isSharedCheck_4694_; 
v_ileans_4679_ = lean_ctor_get(v_self_4657_, 0);
v_workers_4680_ = lean_ctor_get(v_self_4657_, 1);
v_isSharedCheck_4694_ = !lean_is_exclusive(v_self_4657_);
if (v_isSharedCheck_4694_ == 0)
{
v___x_4682_ = v_self_4657_;
v_isShared_4683_ = v_isSharedCheck_4694_;
goto v_resetjp_4681_;
}
else
{
lean_inc(v_workers_4680_);
lean_inc(v_ileans_4679_);
lean_dec(v_self_4657_);
v___x_4682_ = lean_box(0);
v_isShared_4683_ = v_isSharedCheck_4694_;
goto v_resetjp_4681_;
}
v_resetjp_4681_:
{
lean_object* v___x_4685_; 
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 2, v_a_4675_);
lean_ctor_set(v___x_4666_, 1, v_path_4658_);
lean_ctor_set(v___x_4666_, 0, v_val_4673_);
v___x_4685_ = v___x_4666_;
goto v_reusejp_4684_;
}
else
{
lean_object* v_reuseFailAlloc_4693_; 
v_reuseFailAlloc_4693_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4693_, 0, v_val_4673_);
lean_ctor_set(v_reuseFailAlloc_4693_, 1, v_path_4658_);
lean_ctor_set(v_reuseFailAlloc_4693_, 2, v_a_4675_);
lean_ctor_set(v_reuseFailAlloc_4693_, 3, v_references_4663_);
lean_ctor_set(v_reuseFailAlloc_4693_, 4, v_decls_4664_);
v___x_4685_ = v_reuseFailAlloc_4693_;
goto v_reusejp_4684_;
}
v_reusejp_4684_:
{
lean_object* v___x_4686_; lean_object* v___x_4688_; 
v___x_4686_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_module_4661_, v___x_4685_, v_ileans_4679_);
if (v_isShared_4683_ == 0)
{
lean_ctor_set(v___x_4682_, 0, v___x_4686_);
v___x_4688_ = v___x_4682_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v___x_4686_);
lean_ctor_set(v_reuseFailAlloc_4692_, 1, v_workers_4680_);
v___x_4688_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
lean_object* v___x_4690_; 
if (v_isShared_4678_ == 0)
{
lean_ctor_set(v___x_4677_, 0, v___x_4688_);
v___x_4690_ = v___x_4677_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4691_; 
v_reuseFailAlloc_4691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4691_, 0, v___x_4688_);
v___x_4690_ = v_reuseFailAlloc_4691_;
goto v_reusejp_4689_;
}
v_reusejp_4689_:
{
return v___x_4690_;
}
}
}
}
}
}
else
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
lean_dec(v_val_4673_);
lean_del_object(v___x_4666_);
lean_dec(v_decls_4664_);
lean_dec(v_references_4663_);
lean_dec(v_module_4661_);
lean_dec_ref(v_path_4658_);
lean_dec_ref(v_self_4657_);
v_a_4696_ = lean_ctor_get(v___x_4674_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4674_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v___x_4674_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4674_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
else
{
lean_object* v___x_4705_; 
lean_dec(v_a_4669_);
lean_del_object(v___x_4666_);
lean_dec(v_decls_4664_);
lean_dec(v_references_4663_);
lean_dec_ref(v_directImports_4662_);
lean_dec(v_module_4661_);
lean_dec_ref(v_path_4658_);
if (v_isShared_4672_ == 0)
{
lean_ctor_set(v___x_4671_, 0, v_self_4657_);
v___x_4705_ = v___x_4671_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v_self_4657_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
return v___x_4705_;
}
}
}
}
else
{
lean_object* v_a_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4715_; 
lean_del_object(v___x_4666_);
lean_dec(v_decls_4664_);
lean_dec(v_references_4663_);
lean_dec_ref(v_directImports_4662_);
lean_dec(v_module_4661_);
lean_dec_ref(v_path_4658_);
lean_dec_ref(v_self_4657_);
v_a_4708_ = lean_ctor_get(v___x_4668_, 0);
v_isSharedCheck_4715_ = !lean_is_exclusive(v___x_4668_);
if (v_isSharedCheck_4715_ == 0)
{
v___x_4710_ = v___x_4668_;
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
else
{
lean_inc(v_a_4708_);
lean_dec(v___x_4668_);
v___x_4710_ = lean_box(0);
v_isShared_4711_ = v_isSharedCheck_4715_;
goto v_resetjp_4709_;
}
v_resetjp_4709_:
{
lean_object* v___x_4713_; 
if (v_isShared_4711_ == 0)
{
v___x_4713_ = v___x_4710_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v_a_4708_);
v___x_4713_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
return v___x_4713_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_addIlean___boxed(lean_object* v_self_4718_, lean_object* v_path_4719_, lean_object* v_ilean_4720_, lean_object* v___y_4721_){
_start:
{
lean_object* v_res_4722_; 
v_res_4722_ = l_Lean_Server_References_addIlean(v_self_4718_, v_path_4719_, v_ilean_4720_);
return v_res_4722_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg(lean_object* v_path_4723_, lean_object* v_t_4724_){
_start:
{
if (lean_obj_tag(v_t_4724_) == 0)
{
lean_object* v_v_4725_; lean_object* v_k_4726_; lean_object* v_l_4727_; lean_object* v_r_4728_; lean_object* v_ileanPath_4729_; uint8_t v___x_4730_; 
v_v_4725_ = lean_ctor_get(v_t_4724_, 2);
lean_inc(v_v_4725_);
v_k_4726_ = lean_ctor_get(v_t_4724_, 1);
lean_inc(v_k_4726_);
v_l_4727_ = lean_ctor_get(v_t_4724_, 3);
lean_inc(v_l_4727_);
v_r_4728_ = lean_ctor_get(v_t_4724_, 4);
lean_inc(v_r_4728_);
lean_dec_ref_known(v_t_4724_, 5);
v_ileanPath_4729_ = lean_ctor_get(v_v_4725_, 1);
v___x_4730_ = lean_string_dec_eq(v_ileanPath_4729_, v_path_4723_);
if (v___x_4730_ == 0)
{
lean_object* v_impl_4731_; lean_object* v_impl_4732_; lean_object* v___x_4733_; 
lean_dec(v_k_4726_);
lean_dec(v_v_4725_);
v_impl_4731_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg(v_path_4723_, v_l_4727_);
v_impl_4732_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg(v_path_4723_, v_r_4728_);
v___x_4733_ = l_Std_DTreeMap_Internal_Impl_link2___redArg(v_impl_4731_, v_impl_4732_);
return v___x_4733_;
}
else
{
lean_object* v_impl_4734_; lean_object* v_impl_4735_; lean_object* v___x_4736_; 
v_impl_4734_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg(v_path_4723_, v_l_4727_);
v_impl_4735_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg(v_path_4723_, v_r_4728_);
v___x_4736_ = l_Std_DTreeMap_Internal_Impl_link___redArg(v_k_4726_, v_v_4725_, v_impl_4734_, v_impl_4735_);
return v___x_4736_;
}
}
else
{
return v_t_4724_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg___boxed(lean_object* v_path_4737_, lean_object* v_t_4738_){
_start:
{
lean_object* v_res_4739_; 
v_res_4739_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg(v_path_4737_, v_t_4738_);
lean_dec_ref(v_path_4737_);
return v_res_4739_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg(lean_object* v_k_4740_, lean_object* v_t_4741_){
_start:
{
if (lean_obj_tag(v_t_4741_) == 0)
{
lean_object* v_k_4742_; lean_object* v_v_4743_; lean_object* v_l_4744_; lean_object* v_r_4745_; lean_object* v___x_4747_; uint8_t v_isShared_4748_; uint8_t v_isSharedCheck_5399_; 
v_k_4742_ = lean_ctor_get(v_t_4741_, 1);
v_v_4743_ = lean_ctor_get(v_t_4741_, 2);
v_l_4744_ = lean_ctor_get(v_t_4741_, 3);
v_r_4745_ = lean_ctor_get(v_t_4741_, 4);
v_isSharedCheck_5399_ = !lean_is_exclusive(v_t_4741_);
if (v_isSharedCheck_5399_ == 0)
{
lean_object* v_unused_5400_; 
v_unused_5400_ = lean_ctor_get(v_t_4741_, 0);
lean_dec(v_unused_5400_);
v___x_4747_ = v_t_4741_;
v_isShared_4748_ = v_isSharedCheck_5399_;
goto v_resetjp_4746_;
}
else
{
lean_inc(v_r_4745_);
lean_inc(v_l_4744_);
lean_inc(v_v_4743_);
lean_inc(v_k_4742_);
lean_dec(v_t_4741_);
v___x_4747_ = lean_box(0);
v_isShared_4748_ = v_isSharedCheck_5399_;
goto v_resetjp_4746_;
}
v_resetjp_4746_:
{
uint8_t v___x_4749_; 
v___x_4749_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_4740_, v_k_4742_);
switch(v___x_4749_)
{
case 0:
{
lean_object* v_impl_4750_; lean_object* v___x_4751_; 
v_impl_4750_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg(v_k_4740_, v_l_4744_);
v___x_4751_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_4750_) == 0)
{
if (lean_obj_tag(v_r_4745_) == 0)
{
lean_object* v_size_4752_; lean_object* v_size_4753_; lean_object* v_k_4754_; lean_object* v_v_4755_; lean_object* v_l_4756_; lean_object* v_r_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; uint8_t v___x_4760_; 
v_size_4752_ = lean_ctor_get(v_impl_4750_, 0);
lean_inc(v_size_4752_);
v_size_4753_ = lean_ctor_get(v_r_4745_, 0);
v_k_4754_ = lean_ctor_get(v_r_4745_, 1);
v_v_4755_ = lean_ctor_get(v_r_4745_, 2);
v_l_4756_ = lean_ctor_get(v_r_4745_, 3);
lean_inc(v_l_4756_);
v_r_4757_ = lean_ctor_get(v_r_4745_, 4);
v___x_4758_ = lean_unsigned_to_nat(3u);
v___x_4759_ = lean_nat_mul(v___x_4758_, v_size_4752_);
v___x_4760_ = lean_nat_dec_lt(v___x_4759_, v_size_4753_);
lean_dec(v___x_4759_);
if (v___x_4760_ == 0)
{
lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4764_; 
lean_dec(v_l_4756_);
v___x_4761_ = lean_nat_add(v___x_4751_, v_size_4752_);
lean_dec(v_size_4752_);
v___x_4762_ = lean_nat_add(v___x_4761_, v_size_4753_);
lean_dec(v___x_4761_);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 3, v_impl_4750_);
lean_ctor_set(v___x_4747_, 0, v___x_4762_);
v___x_4764_ = v___x_4747_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v___x_4762_);
lean_ctor_set(v_reuseFailAlloc_4765_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_4765_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4765_, 3, v_impl_4750_);
lean_ctor_set(v_reuseFailAlloc_4765_, 4, v_r_4745_);
v___x_4764_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
return v___x_4764_;
}
}
else
{
lean_object* v___x_4767_; uint8_t v_isShared_4768_; uint8_t v_isSharedCheck_4829_; 
lean_inc(v_r_4757_);
lean_inc(v_v_4755_);
lean_inc(v_k_4754_);
lean_inc(v_size_4753_);
v_isSharedCheck_4829_ = !lean_is_exclusive(v_r_4745_);
if (v_isSharedCheck_4829_ == 0)
{
lean_object* v_unused_4830_; lean_object* v_unused_4831_; lean_object* v_unused_4832_; lean_object* v_unused_4833_; lean_object* v_unused_4834_; 
v_unused_4830_ = lean_ctor_get(v_r_4745_, 4);
lean_dec(v_unused_4830_);
v_unused_4831_ = lean_ctor_get(v_r_4745_, 3);
lean_dec(v_unused_4831_);
v_unused_4832_ = lean_ctor_get(v_r_4745_, 2);
lean_dec(v_unused_4832_);
v_unused_4833_ = lean_ctor_get(v_r_4745_, 1);
lean_dec(v_unused_4833_);
v_unused_4834_ = lean_ctor_get(v_r_4745_, 0);
lean_dec(v_unused_4834_);
v___x_4767_ = v_r_4745_;
v_isShared_4768_ = v_isSharedCheck_4829_;
goto v_resetjp_4766_;
}
else
{
lean_dec(v_r_4745_);
v___x_4767_ = lean_box(0);
v_isShared_4768_ = v_isSharedCheck_4829_;
goto v_resetjp_4766_;
}
v_resetjp_4766_:
{
lean_object* v_size_4769_; lean_object* v_k_4770_; lean_object* v_v_4771_; lean_object* v_l_4772_; lean_object* v_r_4773_; lean_object* v_size_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; uint8_t v___x_4777_; 
v_size_4769_ = lean_ctor_get(v_l_4756_, 0);
v_k_4770_ = lean_ctor_get(v_l_4756_, 1);
v_v_4771_ = lean_ctor_get(v_l_4756_, 2);
v_l_4772_ = lean_ctor_get(v_l_4756_, 3);
v_r_4773_ = lean_ctor_get(v_l_4756_, 4);
v_size_4774_ = lean_ctor_get(v_r_4757_, 0);
v___x_4775_ = lean_unsigned_to_nat(2u);
v___x_4776_ = lean_nat_mul(v___x_4775_, v_size_4774_);
v___x_4777_ = lean_nat_dec_lt(v_size_4769_, v___x_4776_);
lean_dec(v___x_4776_);
if (v___x_4777_ == 0)
{
lean_object* v___x_4779_; uint8_t v_isShared_4780_; uint8_t v_isSharedCheck_4805_; 
lean_inc(v_r_4773_);
lean_inc(v_l_4772_);
lean_inc(v_v_4771_);
lean_inc(v_k_4770_);
v_isSharedCheck_4805_ = !lean_is_exclusive(v_l_4756_);
if (v_isSharedCheck_4805_ == 0)
{
lean_object* v_unused_4806_; lean_object* v_unused_4807_; lean_object* v_unused_4808_; lean_object* v_unused_4809_; lean_object* v_unused_4810_; 
v_unused_4806_ = lean_ctor_get(v_l_4756_, 4);
lean_dec(v_unused_4806_);
v_unused_4807_ = lean_ctor_get(v_l_4756_, 3);
lean_dec(v_unused_4807_);
v_unused_4808_ = lean_ctor_get(v_l_4756_, 2);
lean_dec(v_unused_4808_);
v_unused_4809_ = lean_ctor_get(v_l_4756_, 1);
lean_dec(v_unused_4809_);
v_unused_4810_ = lean_ctor_get(v_l_4756_, 0);
lean_dec(v_unused_4810_);
v___x_4779_ = v_l_4756_;
v_isShared_4780_ = v_isSharedCheck_4805_;
goto v_resetjp_4778_;
}
else
{
lean_dec(v_l_4756_);
v___x_4779_ = lean_box(0);
v_isShared_4780_ = v_isSharedCheck_4805_;
goto v_resetjp_4778_;
}
v_resetjp_4778_:
{
lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___y_4784_; lean_object* v___y_4785_; lean_object* v___y_4786_; lean_object* v___y_4795_; 
v___x_4781_ = lean_nat_add(v___x_4751_, v_size_4752_);
lean_dec(v_size_4752_);
v___x_4782_ = lean_nat_add(v___x_4781_, v_size_4753_);
lean_dec(v_size_4753_);
if (lean_obj_tag(v_l_4772_) == 0)
{
lean_object* v_size_4803_; 
v_size_4803_ = lean_ctor_get(v_l_4772_, 0);
lean_inc(v_size_4803_);
v___y_4795_ = v_size_4803_;
goto v___jp_4794_;
}
else
{
lean_object* v___x_4804_; 
v___x_4804_ = lean_unsigned_to_nat(0u);
v___y_4795_ = v___x_4804_;
goto v___jp_4794_;
}
v___jp_4783_:
{
lean_object* v___x_4787_; lean_object* v___x_4789_; 
v___x_4787_ = lean_nat_add(v___y_4785_, v___y_4786_);
lean_dec(v___y_4786_);
lean_dec(v___y_4785_);
if (v_isShared_4780_ == 0)
{
lean_ctor_set(v___x_4779_, 4, v_r_4757_);
lean_ctor_set(v___x_4779_, 3, v_r_4773_);
lean_ctor_set(v___x_4779_, 2, v_v_4755_);
lean_ctor_set(v___x_4779_, 1, v_k_4754_);
lean_ctor_set(v___x_4779_, 0, v___x_4787_);
v___x_4789_ = v___x_4779_;
goto v_reusejp_4788_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v___x_4787_);
lean_ctor_set(v_reuseFailAlloc_4793_, 1, v_k_4754_);
lean_ctor_set(v_reuseFailAlloc_4793_, 2, v_v_4755_);
lean_ctor_set(v_reuseFailAlloc_4793_, 3, v_r_4773_);
lean_ctor_set(v_reuseFailAlloc_4793_, 4, v_r_4757_);
v___x_4789_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4788_;
}
v_reusejp_4788_:
{
lean_object* v___x_4791_; 
if (v_isShared_4768_ == 0)
{
lean_ctor_set(v___x_4767_, 4, v___x_4789_);
lean_ctor_set(v___x_4767_, 3, v___y_4784_);
lean_ctor_set(v___x_4767_, 2, v_v_4771_);
lean_ctor_set(v___x_4767_, 1, v_k_4770_);
lean_ctor_set(v___x_4767_, 0, v___x_4782_);
v___x_4791_ = v___x_4767_;
goto v_reusejp_4790_;
}
else
{
lean_object* v_reuseFailAlloc_4792_; 
v_reuseFailAlloc_4792_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4792_, 0, v___x_4782_);
lean_ctor_set(v_reuseFailAlloc_4792_, 1, v_k_4770_);
lean_ctor_set(v_reuseFailAlloc_4792_, 2, v_v_4771_);
lean_ctor_set(v_reuseFailAlloc_4792_, 3, v___y_4784_);
lean_ctor_set(v_reuseFailAlloc_4792_, 4, v___x_4789_);
v___x_4791_ = v_reuseFailAlloc_4792_;
goto v_reusejp_4790_;
}
v_reusejp_4790_:
{
return v___x_4791_;
}
}
}
v___jp_4794_:
{
lean_object* v___x_4796_; lean_object* v___x_4798_; 
v___x_4796_ = lean_nat_add(v___x_4781_, v___y_4795_);
lean_dec(v___y_4795_);
lean_dec(v___x_4781_);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v_l_4772_);
lean_ctor_set(v___x_4747_, 3, v_impl_4750_);
lean_ctor_set(v___x_4747_, 0, v___x_4796_);
v___x_4798_ = v___x_4747_;
goto v_reusejp_4797_;
}
else
{
lean_object* v_reuseFailAlloc_4802_; 
v_reuseFailAlloc_4802_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4802_, 0, v___x_4796_);
lean_ctor_set(v_reuseFailAlloc_4802_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_4802_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4802_, 3, v_impl_4750_);
lean_ctor_set(v_reuseFailAlloc_4802_, 4, v_l_4772_);
v___x_4798_ = v_reuseFailAlloc_4802_;
goto v_reusejp_4797_;
}
v_reusejp_4797_:
{
lean_object* v___x_4799_; 
v___x_4799_ = lean_nat_add(v___x_4751_, v_size_4774_);
if (lean_obj_tag(v_r_4773_) == 0)
{
lean_object* v_size_4800_; 
v_size_4800_ = lean_ctor_get(v_r_4773_, 0);
lean_inc(v_size_4800_);
v___y_4784_ = v___x_4798_;
v___y_4785_ = v___x_4799_;
v___y_4786_ = v_size_4800_;
goto v___jp_4783_;
}
else
{
lean_object* v___x_4801_; 
v___x_4801_ = lean_unsigned_to_nat(0u);
v___y_4784_ = v___x_4798_;
v___y_4785_ = v___x_4799_;
v___y_4786_ = v___x_4801_;
goto v___jp_4783_;
}
}
}
}
}
else
{
lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4815_; 
lean_del_object(v___x_4747_);
v___x_4811_ = lean_nat_add(v___x_4751_, v_size_4752_);
lean_dec(v_size_4752_);
v___x_4812_ = lean_nat_add(v___x_4811_, v_size_4753_);
lean_dec(v_size_4753_);
v___x_4813_ = lean_nat_add(v___x_4811_, v_size_4769_);
lean_dec(v___x_4811_);
lean_inc_ref(v_impl_4750_);
if (v_isShared_4768_ == 0)
{
lean_ctor_set(v___x_4767_, 4, v_l_4756_);
lean_ctor_set(v___x_4767_, 3, v_impl_4750_);
lean_ctor_set(v___x_4767_, 2, v_v_4743_);
lean_ctor_set(v___x_4767_, 1, v_k_4742_);
lean_ctor_set(v___x_4767_, 0, v___x_4813_);
v___x_4815_ = v___x_4767_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4828_; 
v_reuseFailAlloc_4828_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4828_, 0, v___x_4813_);
lean_ctor_set(v_reuseFailAlloc_4828_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_4828_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4828_, 3, v_impl_4750_);
lean_ctor_set(v_reuseFailAlloc_4828_, 4, v_l_4756_);
v___x_4815_ = v_reuseFailAlloc_4828_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
lean_object* v___x_4817_; uint8_t v_isShared_4818_; uint8_t v_isSharedCheck_4822_; 
v_isSharedCheck_4822_ = !lean_is_exclusive(v_impl_4750_);
if (v_isSharedCheck_4822_ == 0)
{
lean_object* v_unused_4823_; lean_object* v_unused_4824_; lean_object* v_unused_4825_; lean_object* v_unused_4826_; lean_object* v_unused_4827_; 
v_unused_4823_ = lean_ctor_get(v_impl_4750_, 4);
lean_dec(v_unused_4823_);
v_unused_4824_ = lean_ctor_get(v_impl_4750_, 3);
lean_dec(v_unused_4824_);
v_unused_4825_ = lean_ctor_get(v_impl_4750_, 2);
lean_dec(v_unused_4825_);
v_unused_4826_ = lean_ctor_get(v_impl_4750_, 1);
lean_dec(v_unused_4826_);
v_unused_4827_ = lean_ctor_get(v_impl_4750_, 0);
lean_dec(v_unused_4827_);
v___x_4817_ = v_impl_4750_;
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
else
{
lean_dec(v_impl_4750_);
v___x_4817_ = lean_box(0);
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
v_resetjp_4816_:
{
lean_object* v___x_4820_; 
if (v_isShared_4818_ == 0)
{
lean_ctor_set(v___x_4817_, 4, v_r_4757_);
lean_ctor_set(v___x_4817_, 3, v___x_4815_);
lean_ctor_set(v___x_4817_, 2, v_v_4755_);
lean_ctor_set(v___x_4817_, 1, v_k_4754_);
lean_ctor_set(v___x_4817_, 0, v___x_4812_);
v___x_4820_ = v___x_4817_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4821_; 
v_reuseFailAlloc_4821_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4821_, 0, v___x_4812_);
lean_ctor_set(v_reuseFailAlloc_4821_, 1, v_k_4754_);
lean_ctor_set(v_reuseFailAlloc_4821_, 2, v_v_4755_);
lean_ctor_set(v_reuseFailAlloc_4821_, 3, v___x_4815_);
lean_ctor_set(v_reuseFailAlloc_4821_, 4, v_r_4757_);
v___x_4820_ = v_reuseFailAlloc_4821_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
return v___x_4820_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_4835_; lean_object* v___x_4836_; lean_object* v___x_4838_; 
v_size_4835_ = lean_ctor_get(v_impl_4750_, 0);
lean_inc(v_size_4835_);
v___x_4836_ = lean_nat_add(v___x_4751_, v_size_4835_);
lean_dec(v_size_4835_);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 3, v_impl_4750_);
lean_ctor_set(v___x_4747_, 0, v___x_4836_);
v___x_4838_ = v___x_4747_;
goto v_reusejp_4837_;
}
else
{
lean_object* v_reuseFailAlloc_4839_; 
v_reuseFailAlloc_4839_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4839_, 0, v___x_4836_);
lean_ctor_set(v_reuseFailAlloc_4839_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_4839_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4839_, 3, v_impl_4750_);
lean_ctor_set(v_reuseFailAlloc_4839_, 4, v_r_4745_);
v___x_4838_ = v_reuseFailAlloc_4839_;
goto v_reusejp_4837_;
}
v_reusejp_4837_:
{
return v___x_4838_;
}
}
}
else
{
if (lean_obj_tag(v_r_4745_) == 0)
{
lean_object* v_l_4840_; 
v_l_4840_ = lean_ctor_get(v_r_4745_, 3);
lean_inc(v_l_4840_);
if (lean_obj_tag(v_l_4840_) == 0)
{
lean_object* v_r_4841_; 
v_r_4841_ = lean_ctor_get(v_r_4745_, 4);
lean_inc(v_r_4841_);
if (lean_obj_tag(v_r_4841_) == 0)
{
lean_object* v_size_4842_; lean_object* v_k_4843_; lean_object* v_v_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4857_; 
v_size_4842_ = lean_ctor_get(v_r_4745_, 0);
v_k_4843_ = lean_ctor_get(v_r_4745_, 1);
v_v_4844_ = lean_ctor_get(v_r_4745_, 2);
v_isSharedCheck_4857_ = !lean_is_exclusive(v_r_4745_);
if (v_isSharedCheck_4857_ == 0)
{
lean_object* v_unused_4858_; lean_object* v_unused_4859_; 
v_unused_4858_ = lean_ctor_get(v_r_4745_, 4);
lean_dec(v_unused_4858_);
v_unused_4859_ = lean_ctor_get(v_r_4745_, 3);
lean_dec(v_unused_4859_);
v___x_4846_ = v_r_4745_;
v_isShared_4847_ = v_isSharedCheck_4857_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_v_4844_);
lean_inc(v_k_4843_);
lean_inc(v_size_4842_);
lean_dec(v_r_4745_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4857_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v_size_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4852_; 
v_size_4848_ = lean_ctor_get(v_l_4840_, 0);
v___x_4849_ = lean_nat_add(v___x_4751_, v_size_4842_);
lean_dec(v_size_4842_);
v___x_4850_ = lean_nat_add(v___x_4751_, v_size_4848_);
if (v_isShared_4847_ == 0)
{
lean_ctor_set(v___x_4846_, 4, v_l_4840_);
lean_ctor_set(v___x_4846_, 3, v_impl_4750_);
lean_ctor_set(v___x_4846_, 2, v_v_4743_);
lean_ctor_set(v___x_4846_, 1, v_k_4742_);
lean_ctor_set(v___x_4846_, 0, v___x_4850_);
v___x_4852_ = v___x_4846_;
goto v_reusejp_4851_;
}
else
{
lean_object* v_reuseFailAlloc_4856_; 
v_reuseFailAlloc_4856_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4856_, 0, v___x_4850_);
lean_ctor_set(v_reuseFailAlloc_4856_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_4856_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4856_, 3, v_impl_4750_);
lean_ctor_set(v_reuseFailAlloc_4856_, 4, v_l_4840_);
v___x_4852_ = v_reuseFailAlloc_4856_;
goto v_reusejp_4851_;
}
v_reusejp_4851_:
{
lean_object* v___x_4854_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v_r_4841_);
lean_ctor_set(v___x_4747_, 3, v___x_4852_);
lean_ctor_set(v___x_4747_, 2, v_v_4844_);
lean_ctor_set(v___x_4747_, 1, v_k_4843_);
lean_ctor_set(v___x_4747_, 0, v___x_4849_);
v___x_4854_ = v___x_4747_;
goto v_reusejp_4853_;
}
else
{
lean_object* v_reuseFailAlloc_4855_; 
v_reuseFailAlloc_4855_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4855_, 0, v___x_4849_);
lean_ctor_set(v_reuseFailAlloc_4855_, 1, v_k_4843_);
lean_ctor_set(v_reuseFailAlloc_4855_, 2, v_v_4844_);
lean_ctor_set(v_reuseFailAlloc_4855_, 3, v___x_4852_);
lean_ctor_set(v_reuseFailAlloc_4855_, 4, v_r_4841_);
v___x_4854_ = v_reuseFailAlloc_4855_;
goto v_reusejp_4853_;
}
v_reusejp_4853_:
{
return v___x_4854_;
}
}
}
}
else
{
lean_object* v_k_4860_; lean_object* v_v_4861_; lean_object* v___x_4863_; uint8_t v_isShared_4864_; uint8_t v_isSharedCheck_4884_; 
v_k_4860_ = lean_ctor_get(v_r_4745_, 1);
v_v_4861_ = lean_ctor_get(v_r_4745_, 2);
v_isSharedCheck_4884_ = !lean_is_exclusive(v_r_4745_);
if (v_isSharedCheck_4884_ == 0)
{
lean_object* v_unused_4885_; lean_object* v_unused_4886_; lean_object* v_unused_4887_; 
v_unused_4885_ = lean_ctor_get(v_r_4745_, 4);
lean_dec(v_unused_4885_);
v_unused_4886_ = lean_ctor_get(v_r_4745_, 3);
lean_dec(v_unused_4886_);
v_unused_4887_ = lean_ctor_get(v_r_4745_, 0);
lean_dec(v_unused_4887_);
v___x_4863_ = v_r_4745_;
v_isShared_4864_ = v_isSharedCheck_4884_;
goto v_resetjp_4862_;
}
else
{
lean_inc(v_v_4861_);
lean_inc(v_k_4860_);
lean_dec(v_r_4745_);
v___x_4863_ = lean_box(0);
v_isShared_4864_ = v_isSharedCheck_4884_;
goto v_resetjp_4862_;
}
v_resetjp_4862_:
{
lean_object* v_k_4865_; lean_object* v_v_4866_; lean_object* v___x_4868_; uint8_t v_isShared_4869_; uint8_t v_isSharedCheck_4880_; 
v_k_4865_ = lean_ctor_get(v_l_4840_, 1);
v_v_4866_ = lean_ctor_get(v_l_4840_, 2);
v_isSharedCheck_4880_ = !lean_is_exclusive(v_l_4840_);
if (v_isSharedCheck_4880_ == 0)
{
lean_object* v_unused_4881_; lean_object* v_unused_4882_; lean_object* v_unused_4883_; 
v_unused_4881_ = lean_ctor_get(v_l_4840_, 4);
lean_dec(v_unused_4881_);
v_unused_4882_ = lean_ctor_get(v_l_4840_, 3);
lean_dec(v_unused_4882_);
v_unused_4883_ = lean_ctor_get(v_l_4840_, 0);
lean_dec(v_unused_4883_);
v___x_4868_ = v_l_4840_;
v_isShared_4869_ = v_isSharedCheck_4880_;
goto v_resetjp_4867_;
}
else
{
lean_inc(v_v_4866_);
lean_inc(v_k_4865_);
lean_dec(v_l_4840_);
v___x_4868_ = lean_box(0);
v_isShared_4869_ = v_isSharedCheck_4880_;
goto v_resetjp_4867_;
}
v_resetjp_4867_:
{
lean_object* v___x_4870_; lean_object* v___x_4872_; 
v___x_4870_ = lean_unsigned_to_nat(3u);
if (v_isShared_4869_ == 0)
{
lean_ctor_set(v___x_4868_, 4, v_r_4841_);
lean_ctor_set(v___x_4868_, 3, v_r_4841_);
lean_ctor_set(v___x_4868_, 2, v_v_4743_);
lean_ctor_set(v___x_4868_, 1, v_k_4742_);
lean_ctor_set(v___x_4868_, 0, v___x_4751_);
v___x_4872_ = v___x_4868_;
goto v_reusejp_4871_;
}
else
{
lean_object* v_reuseFailAlloc_4879_; 
v_reuseFailAlloc_4879_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4879_, 0, v___x_4751_);
lean_ctor_set(v_reuseFailAlloc_4879_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_4879_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4879_, 3, v_r_4841_);
lean_ctor_set(v_reuseFailAlloc_4879_, 4, v_r_4841_);
v___x_4872_ = v_reuseFailAlloc_4879_;
goto v_reusejp_4871_;
}
v_reusejp_4871_:
{
lean_object* v___x_4874_; 
if (v_isShared_4864_ == 0)
{
lean_ctor_set(v___x_4863_, 3, v_r_4841_);
lean_ctor_set(v___x_4863_, 0, v___x_4751_);
v___x_4874_ = v___x_4863_;
goto v_reusejp_4873_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v___x_4751_);
lean_ctor_set(v_reuseFailAlloc_4878_, 1, v_k_4860_);
lean_ctor_set(v_reuseFailAlloc_4878_, 2, v_v_4861_);
lean_ctor_set(v_reuseFailAlloc_4878_, 3, v_r_4841_);
lean_ctor_set(v_reuseFailAlloc_4878_, 4, v_r_4841_);
v___x_4874_ = v_reuseFailAlloc_4878_;
goto v_reusejp_4873_;
}
v_reusejp_4873_:
{
lean_object* v___x_4876_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v___x_4874_);
lean_ctor_set(v___x_4747_, 3, v___x_4872_);
lean_ctor_set(v___x_4747_, 2, v_v_4866_);
lean_ctor_set(v___x_4747_, 1, v_k_4865_);
lean_ctor_set(v___x_4747_, 0, v___x_4870_);
v___x_4876_ = v___x_4747_;
goto v_reusejp_4875_;
}
else
{
lean_object* v_reuseFailAlloc_4877_; 
v_reuseFailAlloc_4877_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4877_, 0, v___x_4870_);
lean_ctor_set(v_reuseFailAlloc_4877_, 1, v_k_4865_);
lean_ctor_set(v_reuseFailAlloc_4877_, 2, v_v_4866_);
lean_ctor_set(v_reuseFailAlloc_4877_, 3, v___x_4872_);
lean_ctor_set(v_reuseFailAlloc_4877_, 4, v___x_4874_);
v___x_4876_ = v_reuseFailAlloc_4877_;
goto v_reusejp_4875_;
}
v_reusejp_4875_:
{
return v___x_4876_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_4888_; 
v_r_4888_ = lean_ctor_get(v_r_4745_, 4);
lean_inc(v_r_4888_);
if (lean_obj_tag(v_r_4888_) == 0)
{
lean_object* v_k_4889_; lean_object* v_v_4890_; lean_object* v___x_4892_; uint8_t v_isShared_4893_; uint8_t v_isSharedCheck_4901_; 
v_k_4889_ = lean_ctor_get(v_r_4745_, 1);
v_v_4890_ = lean_ctor_get(v_r_4745_, 2);
v_isSharedCheck_4901_ = !lean_is_exclusive(v_r_4745_);
if (v_isSharedCheck_4901_ == 0)
{
lean_object* v_unused_4902_; lean_object* v_unused_4903_; lean_object* v_unused_4904_; 
v_unused_4902_ = lean_ctor_get(v_r_4745_, 4);
lean_dec(v_unused_4902_);
v_unused_4903_ = lean_ctor_get(v_r_4745_, 3);
lean_dec(v_unused_4903_);
v_unused_4904_ = lean_ctor_get(v_r_4745_, 0);
lean_dec(v_unused_4904_);
v___x_4892_ = v_r_4745_;
v_isShared_4893_ = v_isSharedCheck_4901_;
goto v_resetjp_4891_;
}
else
{
lean_inc(v_v_4890_);
lean_inc(v_k_4889_);
lean_dec(v_r_4745_);
v___x_4892_ = lean_box(0);
v_isShared_4893_ = v_isSharedCheck_4901_;
goto v_resetjp_4891_;
}
v_resetjp_4891_:
{
lean_object* v___x_4894_; lean_object* v___x_4896_; 
v___x_4894_ = lean_unsigned_to_nat(3u);
if (v_isShared_4893_ == 0)
{
lean_ctor_set(v___x_4892_, 4, v_l_4840_);
lean_ctor_set(v___x_4892_, 2, v_v_4743_);
lean_ctor_set(v___x_4892_, 1, v_k_4742_);
lean_ctor_set(v___x_4892_, 0, v___x_4751_);
v___x_4896_ = v___x_4892_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4900_; 
v_reuseFailAlloc_4900_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4900_, 0, v___x_4751_);
lean_ctor_set(v_reuseFailAlloc_4900_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_4900_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4900_, 3, v_l_4840_);
lean_ctor_set(v_reuseFailAlloc_4900_, 4, v_l_4840_);
v___x_4896_ = v_reuseFailAlloc_4900_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
lean_object* v___x_4898_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v_r_4888_);
lean_ctor_set(v___x_4747_, 3, v___x_4896_);
lean_ctor_set(v___x_4747_, 2, v_v_4890_);
lean_ctor_set(v___x_4747_, 1, v_k_4889_);
lean_ctor_set(v___x_4747_, 0, v___x_4894_);
v___x_4898_ = v___x_4747_;
goto v_reusejp_4897_;
}
else
{
lean_object* v_reuseFailAlloc_4899_; 
v_reuseFailAlloc_4899_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4899_, 0, v___x_4894_);
lean_ctor_set(v_reuseFailAlloc_4899_, 1, v_k_4889_);
lean_ctor_set(v_reuseFailAlloc_4899_, 2, v_v_4890_);
lean_ctor_set(v_reuseFailAlloc_4899_, 3, v___x_4896_);
lean_ctor_set(v_reuseFailAlloc_4899_, 4, v_r_4888_);
v___x_4898_ = v_reuseFailAlloc_4899_;
goto v_reusejp_4897_;
}
v_reusejp_4897_:
{
return v___x_4898_;
}
}
}
}
else
{
lean_object* v_size_4905_; lean_object* v_k_4906_; lean_object* v_v_4907_; lean_object* v___x_4909_; uint8_t v_isShared_4910_; uint8_t v_isSharedCheck_4918_; 
v_size_4905_ = lean_ctor_get(v_r_4745_, 0);
v_k_4906_ = lean_ctor_get(v_r_4745_, 1);
v_v_4907_ = lean_ctor_get(v_r_4745_, 2);
v_isSharedCheck_4918_ = !lean_is_exclusive(v_r_4745_);
if (v_isSharedCheck_4918_ == 0)
{
lean_object* v_unused_4919_; lean_object* v_unused_4920_; 
v_unused_4919_ = lean_ctor_get(v_r_4745_, 4);
lean_dec(v_unused_4919_);
v_unused_4920_ = lean_ctor_get(v_r_4745_, 3);
lean_dec(v_unused_4920_);
v___x_4909_ = v_r_4745_;
v_isShared_4910_ = v_isSharedCheck_4918_;
goto v_resetjp_4908_;
}
else
{
lean_inc(v_v_4907_);
lean_inc(v_k_4906_);
lean_inc(v_size_4905_);
lean_dec(v_r_4745_);
v___x_4909_ = lean_box(0);
v_isShared_4910_ = v_isSharedCheck_4918_;
goto v_resetjp_4908_;
}
v_resetjp_4908_:
{
lean_object* v___x_4912_; 
if (v_isShared_4910_ == 0)
{
lean_ctor_set(v___x_4909_, 3, v_r_4888_);
v___x_4912_ = v___x_4909_;
goto v_reusejp_4911_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_size_4905_);
lean_ctor_set(v_reuseFailAlloc_4917_, 1, v_k_4906_);
lean_ctor_set(v_reuseFailAlloc_4917_, 2, v_v_4907_);
lean_ctor_set(v_reuseFailAlloc_4917_, 3, v_r_4888_);
lean_ctor_set(v_reuseFailAlloc_4917_, 4, v_r_4888_);
v___x_4912_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4911_;
}
v_reusejp_4911_:
{
lean_object* v___x_4913_; lean_object* v___x_4915_; 
v___x_4913_ = lean_unsigned_to_nat(2u);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v___x_4912_);
lean_ctor_set(v___x_4747_, 3, v_r_4888_);
lean_ctor_set(v___x_4747_, 0, v___x_4913_);
v___x_4915_ = v___x_4747_;
goto v_reusejp_4914_;
}
else
{
lean_object* v_reuseFailAlloc_4916_; 
v_reuseFailAlloc_4916_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4916_, 0, v___x_4913_);
lean_ctor_set(v_reuseFailAlloc_4916_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_4916_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4916_, 3, v_r_4888_);
lean_ctor_set(v_reuseFailAlloc_4916_, 4, v___x_4912_);
v___x_4915_ = v_reuseFailAlloc_4916_;
goto v_reusejp_4914_;
}
v_reusejp_4914_:
{
return v___x_4915_;
}
}
}
}
}
}
else
{
lean_object* v___x_4922_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 3, v_r_4745_);
lean_ctor_set(v___x_4747_, 0, v___x_4751_);
v___x_4922_ = v___x_4747_;
goto v_reusejp_4921_;
}
else
{
lean_object* v_reuseFailAlloc_4923_; 
v_reuseFailAlloc_4923_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4923_, 0, v___x_4751_);
lean_ctor_set(v_reuseFailAlloc_4923_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_4923_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_4923_, 3, v_r_4745_);
lean_ctor_set(v_reuseFailAlloc_4923_, 4, v_r_4745_);
v___x_4922_ = v_reuseFailAlloc_4923_;
goto v_reusejp_4921_;
}
v_reusejp_4921_:
{
return v___x_4922_;
}
}
}
}
case 1:
{
lean_del_object(v___x_4747_);
lean_dec(v_v_4743_);
lean_dec(v_k_4742_);
if (lean_obj_tag(v_l_4744_) == 0)
{
if (lean_obj_tag(v_r_4745_) == 0)
{
lean_object* v_size_4924_; lean_object* v_k_4925_; lean_object* v_v_4926_; lean_object* v_l_4927_; lean_object* v_r_4928_; lean_object* v_size_4929_; lean_object* v_k_4930_; lean_object* v_v_4931_; lean_object* v_l_4932_; lean_object* v_r_4933_; lean_object* v___x_4934_; uint8_t v___x_4935_; 
v_size_4924_ = lean_ctor_get(v_l_4744_, 0);
v_k_4925_ = lean_ctor_get(v_l_4744_, 1);
v_v_4926_ = lean_ctor_get(v_l_4744_, 2);
v_l_4927_ = lean_ctor_get(v_l_4744_, 3);
v_r_4928_ = lean_ctor_get(v_l_4744_, 4);
lean_inc(v_r_4928_);
v_size_4929_ = lean_ctor_get(v_r_4745_, 0);
v_k_4930_ = lean_ctor_get(v_r_4745_, 1);
v_v_4931_ = lean_ctor_get(v_r_4745_, 2);
v_l_4932_ = lean_ctor_get(v_r_4745_, 3);
lean_inc(v_l_4932_);
v_r_4933_ = lean_ctor_get(v_r_4745_, 4);
v___x_4934_ = lean_unsigned_to_nat(1u);
v___x_4935_ = lean_nat_dec_lt(v_size_4924_, v_size_4929_);
if (v___x_4935_ == 0)
{
lean_object* v___x_4937_; uint8_t v_isShared_4938_; uint8_t v_isSharedCheck_5071_; 
lean_inc(v_l_4927_);
lean_inc(v_v_4926_);
lean_inc(v_k_4925_);
v_isSharedCheck_5071_ = !lean_is_exclusive(v_l_4744_);
if (v_isSharedCheck_5071_ == 0)
{
lean_object* v_unused_5072_; lean_object* v_unused_5073_; lean_object* v_unused_5074_; lean_object* v_unused_5075_; lean_object* v_unused_5076_; 
v_unused_5072_ = lean_ctor_get(v_l_4744_, 4);
lean_dec(v_unused_5072_);
v_unused_5073_ = lean_ctor_get(v_l_4744_, 3);
lean_dec(v_unused_5073_);
v_unused_5074_ = lean_ctor_get(v_l_4744_, 2);
lean_dec(v_unused_5074_);
v_unused_5075_ = lean_ctor_get(v_l_4744_, 1);
lean_dec(v_unused_5075_);
v_unused_5076_ = lean_ctor_get(v_l_4744_, 0);
lean_dec(v_unused_5076_);
v___x_4937_ = v_l_4744_;
v_isShared_4938_ = v_isSharedCheck_5071_;
goto v_resetjp_4936_;
}
else
{
lean_dec(v_l_4744_);
v___x_4937_ = lean_box(0);
v_isShared_4938_ = v_isSharedCheck_5071_;
goto v_resetjp_4936_;
}
v_resetjp_4936_:
{
lean_object* v___x_4939_; lean_object* v_tree_4940_; 
v___x_4939_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_4925_, v_v_4926_, v_l_4927_, v_r_4928_);
v_tree_4940_ = lean_ctor_get(v___x_4939_, 2);
lean_inc(v_tree_4940_);
if (lean_obj_tag(v_tree_4940_) == 0)
{
lean_object* v_k_4941_; lean_object* v_v_4942_; lean_object* v_size_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; uint8_t v___x_4946_; 
v_k_4941_ = lean_ctor_get(v___x_4939_, 0);
lean_inc(v_k_4941_);
v_v_4942_ = lean_ctor_get(v___x_4939_, 1);
lean_inc(v_v_4942_);
lean_dec_ref(v___x_4939_);
v_size_4943_ = lean_ctor_get(v_tree_4940_, 0);
v___x_4944_ = lean_unsigned_to_nat(3u);
v___x_4945_ = lean_nat_mul(v___x_4944_, v_size_4943_);
v___x_4946_ = lean_nat_dec_lt(v___x_4945_, v_size_4929_);
lean_dec(v___x_4945_);
if (v___x_4946_ == 0)
{
lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4950_; 
lean_dec(v_l_4932_);
v___x_4947_ = lean_nat_add(v___x_4934_, v_size_4943_);
v___x_4948_ = lean_nat_add(v___x_4947_, v_size_4929_);
lean_dec(v___x_4947_);
if (v_isShared_4938_ == 0)
{
lean_ctor_set(v___x_4937_, 4, v_r_4745_);
lean_ctor_set(v___x_4937_, 3, v_tree_4940_);
lean_ctor_set(v___x_4937_, 2, v_v_4942_);
lean_ctor_set(v___x_4937_, 1, v_k_4941_);
lean_ctor_set(v___x_4937_, 0, v___x_4948_);
v___x_4950_ = v___x_4937_;
goto v_reusejp_4949_;
}
else
{
lean_object* v_reuseFailAlloc_4951_; 
v_reuseFailAlloc_4951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4951_, 0, v___x_4948_);
lean_ctor_set(v_reuseFailAlloc_4951_, 1, v_k_4941_);
lean_ctor_set(v_reuseFailAlloc_4951_, 2, v_v_4942_);
lean_ctor_set(v_reuseFailAlloc_4951_, 3, v_tree_4940_);
lean_ctor_set(v_reuseFailAlloc_4951_, 4, v_r_4745_);
v___x_4950_ = v_reuseFailAlloc_4951_;
goto v_reusejp_4949_;
}
v_reusejp_4949_:
{
return v___x_4950_;
}
}
else
{
lean_object* v___x_4953_; uint8_t v_isShared_4954_; uint8_t v_isSharedCheck_5006_; 
lean_inc(v_r_4933_);
lean_inc(v_v_4931_);
lean_inc(v_k_4930_);
lean_inc(v_size_4929_);
v_isSharedCheck_5006_ = !lean_is_exclusive(v_r_4745_);
if (v_isSharedCheck_5006_ == 0)
{
lean_object* v_unused_5007_; lean_object* v_unused_5008_; lean_object* v_unused_5009_; lean_object* v_unused_5010_; lean_object* v_unused_5011_; 
v_unused_5007_ = lean_ctor_get(v_r_4745_, 4);
lean_dec(v_unused_5007_);
v_unused_5008_ = lean_ctor_get(v_r_4745_, 3);
lean_dec(v_unused_5008_);
v_unused_5009_ = lean_ctor_get(v_r_4745_, 2);
lean_dec(v_unused_5009_);
v_unused_5010_ = lean_ctor_get(v_r_4745_, 1);
lean_dec(v_unused_5010_);
v_unused_5011_ = lean_ctor_get(v_r_4745_, 0);
lean_dec(v_unused_5011_);
v___x_4953_ = v_r_4745_;
v_isShared_4954_ = v_isSharedCheck_5006_;
goto v_resetjp_4952_;
}
else
{
lean_dec(v_r_4745_);
v___x_4953_ = lean_box(0);
v_isShared_4954_ = v_isSharedCheck_5006_;
goto v_resetjp_4952_;
}
v_resetjp_4952_:
{
lean_object* v_size_4955_; lean_object* v_k_4956_; lean_object* v_v_4957_; lean_object* v_l_4958_; lean_object* v_r_4959_; lean_object* v_size_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; uint8_t v___x_4963_; 
v_size_4955_ = lean_ctor_get(v_l_4932_, 0);
v_k_4956_ = lean_ctor_get(v_l_4932_, 1);
v_v_4957_ = lean_ctor_get(v_l_4932_, 2);
v_l_4958_ = lean_ctor_get(v_l_4932_, 3);
v_r_4959_ = lean_ctor_get(v_l_4932_, 4);
v_size_4960_ = lean_ctor_get(v_r_4933_, 0);
v___x_4961_ = lean_unsigned_to_nat(2u);
v___x_4962_ = lean_nat_mul(v___x_4961_, v_size_4960_);
v___x_4963_ = lean_nat_dec_lt(v_size_4955_, v___x_4962_);
lean_dec(v___x_4962_);
if (v___x_4963_ == 0)
{
lean_object* v___x_4965_; uint8_t v_isShared_4966_; uint8_t v_isSharedCheck_4991_; 
lean_inc(v_r_4959_);
lean_inc(v_l_4958_);
lean_inc(v_v_4957_);
lean_inc(v_k_4956_);
v_isSharedCheck_4991_ = !lean_is_exclusive(v_l_4932_);
if (v_isSharedCheck_4991_ == 0)
{
lean_object* v_unused_4992_; lean_object* v_unused_4993_; lean_object* v_unused_4994_; lean_object* v_unused_4995_; lean_object* v_unused_4996_; 
v_unused_4992_ = lean_ctor_get(v_l_4932_, 4);
lean_dec(v_unused_4992_);
v_unused_4993_ = lean_ctor_get(v_l_4932_, 3);
lean_dec(v_unused_4993_);
v_unused_4994_ = lean_ctor_get(v_l_4932_, 2);
lean_dec(v_unused_4994_);
v_unused_4995_ = lean_ctor_get(v_l_4932_, 1);
lean_dec(v_unused_4995_);
v_unused_4996_ = lean_ctor_get(v_l_4932_, 0);
lean_dec(v_unused_4996_);
v___x_4965_ = v_l_4932_;
v_isShared_4966_ = v_isSharedCheck_4991_;
goto v_resetjp_4964_;
}
else
{
lean_dec(v_l_4932_);
v___x_4965_ = lean_box(0);
v_isShared_4966_ = v_isSharedCheck_4991_;
goto v_resetjp_4964_;
}
v_resetjp_4964_:
{
lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___y_4970_; lean_object* v___y_4971_; lean_object* v___y_4972_; lean_object* v___y_4981_; 
v___x_4967_ = lean_nat_add(v___x_4934_, v_size_4943_);
v___x_4968_ = lean_nat_add(v___x_4967_, v_size_4929_);
lean_dec(v_size_4929_);
if (lean_obj_tag(v_l_4958_) == 0)
{
lean_object* v_size_4989_; 
v_size_4989_ = lean_ctor_get(v_l_4958_, 0);
lean_inc(v_size_4989_);
v___y_4981_ = v_size_4989_;
goto v___jp_4980_;
}
else
{
lean_object* v___x_4990_; 
v___x_4990_ = lean_unsigned_to_nat(0u);
v___y_4981_ = v___x_4990_;
goto v___jp_4980_;
}
v___jp_4969_:
{
lean_object* v___x_4973_; lean_object* v___x_4975_; 
v___x_4973_ = lean_nat_add(v___y_4970_, v___y_4972_);
lean_dec(v___y_4972_);
lean_dec(v___y_4970_);
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 4, v_r_4933_);
lean_ctor_set(v___x_4965_, 3, v_r_4959_);
lean_ctor_set(v___x_4965_, 2, v_v_4931_);
lean_ctor_set(v___x_4965_, 1, v_k_4930_);
lean_ctor_set(v___x_4965_, 0, v___x_4973_);
v___x_4975_ = v___x_4965_;
goto v_reusejp_4974_;
}
else
{
lean_object* v_reuseFailAlloc_4979_; 
v_reuseFailAlloc_4979_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4979_, 0, v___x_4973_);
lean_ctor_set(v_reuseFailAlloc_4979_, 1, v_k_4930_);
lean_ctor_set(v_reuseFailAlloc_4979_, 2, v_v_4931_);
lean_ctor_set(v_reuseFailAlloc_4979_, 3, v_r_4959_);
lean_ctor_set(v_reuseFailAlloc_4979_, 4, v_r_4933_);
v___x_4975_ = v_reuseFailAlloc_4979_;
goto v_reusejp_4974_;
}
v_reusejp_4974_:
{
lean_object* v___x_4977_; 
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 4, v___x_4975_);
lean_ctor_set(v___x_4953_, 3, v___y_4971_);
lean_ctor_set(v___x_4953_, 2, v_v_4957_);
lean_ctor_set(v___x_4953_, 1, v_k_4956_);
lean_ctor_set(v___x_4953_, 0, v___x_4968_);
v___x_4977_ = v___x_4953_;
goto v_reusejp_4976_;
}
else
{
lean_object* v_reuseFailAlloc_4978_; 
v_reuseFailAlloc_4978_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4978_, 0, v___x_4968_);
lean_ctor_set(v_reuseFailAlloc_4978_, 1, v_k_4956_);
lean_ctor_set(v_reuseFailAlloc_4978_, 2, v_v_4957_);
lean_ctor_set(v_reuseFailAlloc_4978_, 3, v___y_4971_);
lean_ctor_set(v_reuseFailAlloc_4978_, 4, v___x_4975_);
v___x_4977_ = v_reuseFailAlloc_4978_;
goto v_reusejp_4976_;
}
v_reusejp_4976_:
{
return v___x_4977_;
}
}
}
v___jp_4980_:
{
lean_object* v___x_4982_; lean_object* v___x_4984_; 
v___x_4982_ = lean_nat_add(v___x_4967_, v___y_4981_);
lean_dec(v___y_4981_);
lean_dec(v___x_4967_);
if (v_isShared_4938_ == 0)
{
lean_ctor_set(v___x_4937_, 4, v_l_4958_);
lean_ctor_set(v___x_4937_, 3, v_tree_4940_);
lean_ctor_set(v___x_4937_, 2, v_v_4942_);
lean_ctor_set(v___x_4937_, 1, v_k_4941_);
lean_ctor_set(v___x_4937_, 0, v___x_4982_);
v___x_4984_ = v___x_4937_;
goto v_reusejp_4983_;
}
else
{
lean_object* v_reuseFailAlloc_4988_; 
v_reuseFailAlloc_4988_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4988_, 0, v___x_4982_);
lean_ctor_set(v_reuseFailAlloc_4988_, 1, v_k_4941_);
lean_ctor_set(v_reuseFailAlloc_4988_, 2, v_v_4942_);
lean_ctor_set(v_reuseFailAlloc_4988_, 3, v_tree_4940_);
lean_ctor_set(v_reuseFailAlloc_4988_, 4, v_l_4958_);
v___x_4984_ = v_reuseFailAlloc_4988_;
goto v_reusejp_4983_;
}
v_reusejp_4983_:
{
lean_object* v___x_4985_; 
v___x_4985_ = lean_nat_add(v___x_4934_, v_size_4960_);
if (lean_obj_tag(v_r_4959_) == 0)
{
lean_object* v_size_4986_; 
v_size_4986_ = lean_ctor_get(v_r_4959_, 0);
lean_inc(v_size_4986_);
v___y_4970_ = v___x_4985_;
v___y_4971_ = v___x_4984_;
v___y_4972_ = v_size_4986_;
goto v___jp_4969_;
}
else
{
lean_object* v___x_4987_; 
v___x_4987_ = lean_unsigned_to_nat(0u);
v___y_4970_ = v___x_4985_;
v___y_4971_ = v___x_4984_;
v___y_4972_ = v___x_4987_;
goto v___jp_4969_;
}
}
}
}
}
else
{
lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5001_; 
v___x_4997_ = lean_nat_add(v___x_4934_, v_size_4943_);
v___x_4998_ = lean_nat_add(v___x_4997_, v_size_4929_);
lean_dec(v_size_4929_);
v___x_4999_ = lean_nat_add(v___x_4997_, v_size_4955_);
lean_dec(v___x_4997_);
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 4, v_l_4932_);
lean_ctor_set(v___x_4953_, 3, v_tree_4940_);
lean_ctor_set(v___x_4953_, 2, v_v_4942_);
lean_ctor_set(v___x_4953_, 1, v_k_4941_);
lean_ctor_set(v___x_4953_, 0, v___x_4999_);
v___x_5001_ = v___x_4953_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5005_; 
v_reuseFailAlloc_5005_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5005_, 0, v___x_4999_);
lean_ctor_set(v_reuseFailAlloc_5005_, 1, v_k_4941_);
lean_ctor_set(v_reuseFailAlloc_5005_, 2, v_v_4942_);
lean_ctor_set(v_reuseFailAlloc_5005_, 3, v_tree_4940_);
lean_ctor_set(v_reuseFailAlloc_5005_, 4, v_l_4932_);
v___x_5001_ = v_reuseFailAlloc_5005_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
lean_object* v___x_5003_; 
if (v_isShared_4938_ == 0)
{
lean_ctor_set(v___x_4937_, 4, v_r_4933_);
lean_ctor_set(v___x_4937_, 3, v___x_5001_);
lean_ctor_set(v___x_4937_, 2, v_v_4931_);
lean_ctor_set(v___x_4937_, 1, v_k_4930_);
lean_ctor_set(v___x_4937_, 0, v___x_4998_);
v___x_5003_ = v___x_4937_;
goto v_reusejp_5002_;
}
else
{
lean_object* v_reuseFailAlloc_5004_; 
v_reuseFailAlloc_5004_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5004_, 0, v___x_4998_);
lean_ctor_set(v_reuseFailAlloc_5004_, 1, v_k_4930_);
lean_ctor_set(v_reuseFailAlloc_5004_, 2, v_v_4931_);
lean_ctor_set(v_reuseFailAlloc_5004_, 3, v___x_5001_);
lean_ctor_set(v_reuseFailAlloc_5004_, 4, v_r_4933_);
v___x_5003_ = v_reuseFailAlloc_5004_;
goto v_reusejp_5002_;
}
v_reusejp_5002_:
{
return v___x_5003_;
}
}
}
}
}
}
else
{
lean_object* v___x_5013_; uint8_t v_isShared_5014_; uint8_t v_isSharedCheck_5065_; 
lean_inc(v_r_4933_);
lean_inc(v_v_4931_);
lean_inc(v_k_4930_);
lean_inc(v_size_4929_);
v_isSharedCheck_5065_ = !lean_is_exclusive(v_r_4745_);
if (v_isSharedCheck_5065_ == 0)
{
lean_object* v_unused_5066_; lean_object* v_unused_5067_; lean_object* v_unused_5068_; lean_object* v_unused_5069_; lean_object* v_unused_5070_; 
v_unused_5066_ = lean_ctor_get(v_r_4745_, 4);
lean_dec(v_unused_5066_);
v_unused_5067_ = lean_ctor_get(v_r_4745_, 3);
lean_dec(v_unused_5067_);
v_unused_5068_ = lean_ctor_get(v_r_4745_, 2);
lean_dec(v_unused_5068_);
v_unused_5069_ = lean_ctor_get(v_r_4745_, 1);
lean_dec(v_unused_5069_);
v_unused_5070_ = lean_ctor_get(v_r_4745_, 0);
lean_dec(v_unused_5070_);
v___x_5013_ = v_r_4745_;
v_isShared_5014_ = v_isSharedCheck_5065_;
goto v_resetjp_5012_;
}
else
{
lean_dec(v_r_4745_);
v___x_5013_ = lean_box(0);
v_isShared_5014_ = v_isSharedCheck_5065_;
goto v_resetjp_5012_;
}
v_resetjp_5012_:
{
if (lean_obj_tag(v_l_4932_) == 0)
{
if (lean_obj_tag(v_r_4933_) == 0)
{
lean_object* v_k_5015_; lean_object* v_v_5016_; lean_object* v_size_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5021_; 
v_k_5015_ = lean_ctor_get(v___x_4939_, 0);
lean_inc(v_k_5015_);
v_v_5016_ = lean_ctor_get(v___x_4939_, 1);
lean_inc(v_v_5016_);
lean_dec_ref(v___x_4939_);
v_size_5017_ = lean_ctor_get(v_l_4932_, 0);
v___x_5018_ = lean_nat_add(v___x_4934_, v_size_4929_);
lean_dec(v_size_4929_);
v___x_5019_ = lean_nat_add(v___x_4934_, v_size_5017_);
if (v_isShared_5014_ == 0)
{
lean_ctor_set(v___x_5013_, 4, v_l_4932_);
lean_ctor_set(v___x_5013_, 3, v_tree_4940_);
lean_ctor_set(v___x_5013_, 2, v_v_5016_);
lean_ctor_set(v___x_5013_, 1, v_k_5015_);
lean_ctor_set(v___x_5013_, 0, v___x_5019_);
v___x_5021_ = v___x_5013_;
goto v_reusejp_5020_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v___x_5019_);
lean_ctor_set(v_reuseFailAlloc_5025_, 1, v_k_5015_);
lean_ctor_set(v_reuseFailAlloc_5025_, 2, v_v_5016_);
lean_ctor_set(v_reuseFailAlloc_5025_, 3, v_tree_4940_);
lean_ctor_set(v_reuseFailAlloc_5025_, 4, v_l_4932_);
v___x_5021_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5020_;
}
v_reusejp_5020_:
{
lean_object* v___x_5023_; 
if (v_isShared_4938_ == 0)
{
lean_ctor_set(v___x_4937_, 4, v_r_4933_);
lean_ctor_set(v___x_4937_, 3, v___x_5021_);
lean_ctor_set(v___x_4937_, 2, v_v_4931_);
lean_ctor_set(v___x_4937_, 1, v_k_4930_);
lean_ctor_set(v___x_4937_, 0, v___x_5018_);
v___x_5023_ = v___x_4937_;
goto v_reusejp_5022_;
}
else
{
lean_object* v_reuseFailAlloc_5024_; 
v_reuseFailAlloc_5024_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5024_, 0, v___x_5018_);
lean_ctor_set(v_reuseFailAlloc_5024_, 1, v_k_4930_);
lean_ctor_set(v_reuseFailAlloc_5024_, 2, v_v_4931_);
lean_ctor_set(v_reuseFailAlloc_5024_, 3, v___x_5021_);
lean_ctor_set(v_reuseFailAlloc_5024_, 4, v_r_4933_);
v___x_5023_ = v_reuseFailAlloc_5024_;
goto v_reusejp_5022_;
}
v_reusejp_5022_:
{
return v___x_5023_;
}
}
}
else
{
lean_object* v_k_5026_; lean_object* v_v_5027_; lean_object* v_k_5028_; lean_object* v_v_5029_; lean_object* v___x_5031_; uint8_t v_isShared_5032_; uint8_t v_isSharedCheck_5043_; 
lean_dec(v_size_4929_);
v_k_5026_ = lean_ctor_get(v___x_4939_, 0);
lean_inc(v_k_5026_);
v_v_5027_ = lean_ctor_get(v___x_4939_, 1);
lean_inc(v_v_5027_);
lean_dec_ref(v___x_4939_);
v_k_5028_ = lean_ctor_get(v_l_4932_, 1);
v_v_5029_ = lean_ctor_get(v_l_4932_, 2);
v_isSharedCheck_5043_ = !lean_is_exclusive(v_l_4932_);
if (v_isSharedCheck_5043_ == 0)
{
lean_object* v_unused_5044_; lean_object* v_unused_5045_; lean_object* v_unused_5046_; 
v_unused_5044_ = lean_ctor_get(v_l_4932_, 4);
lean_dec(v_unused_5044_);
v_unused_5045_ = lean_ctor_get(v_l_4932_, 3);
lean_dec(v_unused_5045_);
v_unused_5046_ = lean_ctor_get(v_l_4932_, 0);
lean_dec(v_unused_5046_);
v___x_5031_ = v_l_4932_;
v_isShared_5032_ = v_isSharedCheck_5043_;
goto v_resetjp_5030_;
}
else
{
lean_inc(v_v_5029_);
lean_inc(v_k_5028_);
lean_dec(v_l_4932_);
v___x_5031_ = lean_box(0);
v_isShared_5032_ = v_isSharedCheck_5043_;
goto v_resetjp_5030_;
}
v_resetjp_5030_:
{
lean_object* v___x_5033_; lean_object* v___x_5035_; 
v___x_5033_ = lean_unsigned_to_nat(3u);
if (v_isShared_5032_ == 0)
{
lean_ctor_set(v___x_5031_, 4, v_r_4933_);
lean_ctor_set(v___x_5031_, 3, v_r_4933_);
lean_ctor_set(v___x_5031_, 2, v_v_5027_);
lean_ctor_set(v___x_5031_, 1, v_k_5026_);
lean_ctor_set(v___x_5031_, 0, v___x_4934_);
v___x_5035_ = v___x_5031_;
goto v_reusejp_5034_;
}
else
{
lean_object* v_reuseFailAlloc_5042_; 
v_reuseFailAlloc_5042_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5042_, 0, v___x_4934_);
lean_ctor_set(v_reuseFailAlloc_5042_, 1, v_k_5026_);
lean_ctor_set(v_reuseFailAlloc_5042_, 2, v_v_5027_);
lean_ctor_set(v_reuseFailAlloc_5042_, 3, v_r_4933_);
lean_ctor_set(v_reuseFailAlloc_5042_, 4, v_r_4933_);
v___x_5035_ = v_reuseFailAlloc_5042_;
goto v_reusejp_5034_;
}
v_reusejp_5034_:
{
lean_object* v___x_5037_; 
if (v_isShared_5014_ == 0)
{
lean_ctor_set(v___x_5013_, 3, v_r_4933_);
lean_ctor_set(v___x_5013_, 0, v___x_4934_);
v___x_5037_ = v___x_5013_;
goto v_reusejp_5036_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v___x_4934_);
lean_ctor_set(v_reuseFailAlloc_5041_, 1, v_k_4930_);
lean_ctor_set(v_reuseFailAlloc_5041_, 2, v_v_4931_);
lean_ctor_set(v_reuseFailAlloc_5041_, 3, v_r_4933_);
lean_ctor_set(v_reuseFailAlloc_5041_, 4, v_r_4933_);
v___x_5037_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5036_;
}
v_reusejp_5036_:
{
lean_object* v___x_5039_; 
if (v_isShared_4938_ == 0)
{
lean_ctor_set(v___x_4937_, 4, v___x_5037_);
lean_ctor_set(v___x_4937_, 3, v___x_5035_);
lean_ctor_set(v___x_4937_, 2, v_v_5029_);
lean_ctor_set(v___x_4937_, 1, v_k_5028_);
lean_ctor_set(v___x_4937_, 0, v___x_5033_);
v___x_5039_ = v___x_4937_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v___x_5033_);
lean_ctor_set(v_reuseFailAlloc_5040_, 1, v_k_5028_);
lean_ctor_set(v_reuseFailAlloc_5040_, 2, v_v_5029_);
lean_ctor_set(v_reuseFailAlloc_5040_, 3, v___x_5035_);
lean_ctor_set(v_reuseFailAlloc_5040_, 4, v___x_5037_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_4933_) == 0)
{
lean_object* v_k_5047_; lean_object* v_v_5048_; lean_object* v___x_5049_; lean_object* v___x_5051_; 
lean_dec(v_size_4929_);
v_k_5047_ = lean_ctor_get(v___x_4939_, 0);
lean_inc(v_k_5047_);
v_v_5048_ = lean_ctor_get(v___x_4939_, 1);
lean_inc(v_v_5048_);
lean_dec_ref(v___x_4939_);
v___x_5049_ = lean_unsigned_to_nat(3u);
if (v_isShared_5014_ == 0)
{
lean_ctor_set(v___x_5013_, 4, v_l_4932_);
lean_ctor_set(v___x_5013_, 2, v_v_5048_);
lean_ctor_set(v___x_5013_, 1, v_k_5047_);
lean_ctor_set(v___x_5013_, 0, v___x_4934_);
v___x_5051_ = v___x_5013_;
goto v_reusejp_5050_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v___x_4934_);
lean_ctor_set(v_reuseFailAlloc_5055_, 1, v_k_5047_);
lean_ctor_set(v_reuseFailAlloc_5055_, 2, v_v_5048_);
lean_ctor_set(v_reuseFailAlloc_5055_, 3, v_l_4932_);
lean_ctor_set(v_reuseFailAlloc_5055_, 4, v_l_4932_);
v___x_5051_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
lean_object* v___x_5053_; 
if (v_isShared_4938_ == 0)
{
lean_ctor_set(v___x_4937_, 4, v_r_4933_);
lean_ctor_set(v___x_4937_, 3, v___x_5051_);
lean_ctor_set(v___x_4937_, 2, v_v_4931_);
lean_ctor_set(v___x_4937_, 1, v_k_4930_);
lean_ctor_set(v___x_4937_, 0, v___x_5049_);
v___x_5053_ = v___x_4937_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v___x_5049_);
lean_ctor_set(v_reuseFailAlloc_5054_, 1, v_k_4930_);
lean_ctor_set(v_reuseFailAlloc_5054_, 2, v_v_4931_);
lean_ctor_set(v_reuseFailAlloc_5054_, 3, v___x_5051_);
lean_ctor_set(v_reuseFailAlloc_5054_, 4, v_r_4933_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
return v___x_5053_;
}
}
}
else
{
lean_object* v_k_5056_; lean_object* v_v_5057_; lean_object* v___x_5059_; 
v_k_5056_ = lean_ctor_get(v___x_4939_, 0);
lean_inc(v_k_5056_);
v_v_5057_ = lean_ctor_get(v___x_4939_, 1);
lean_inc(v_v_5057_);
lean_dec_ref(v___x_4939_);
if (v_isShared_5014_ == 0)
{
lean_ctor_set(v___x_5013_, 3, v_r_4933_);
v___x_5059_ = v___x_5013_;
goto v_reusejp_5058_;
}
else
{
lean_object* v_reuseFailAlloc_5064_; 
v_reuseFailAlloc_5064_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5064_, 0, v_size_4929_);
lean_ctor_set(v_reuseFailAlloc_5064_, 1, v_k_4930_);
lean_ctor_set(v_reuseFailAlloc_5064_, 2, v_v_4931_);
lean_ctor_set(v_reuseFailAlloc_5064_, 3, v_r_4933_);
lean_ctor_set(v_reuseFailAlloc_5064_, 4, v_r_4933_);
v___x_5059_ = v_reuseFailAlloc_5064_;
goto v_reusejp_5058_;
}
v_reusejp_5058_:
{
lean_object* v___x_5060_; lean_object* v___x_5062_; 
v___x_5060_ = lean_unsigned_to_nat(2u);
if (v_isShared_4938_ == 0)
{
lean_ctor_set(v___x_4937_, 4, v___x_5059_);
lean_ctor_set(v___x_4937_, 3, v_r_4933_);
lean_ctor_set(v___x_4937_, 2, v_v_5057_);
lean_ctor_set(v___x_4937_, 1, v_k_5056_);
lean_ctor_set(v___x_4937_, 0, v___x_5060_);
v___x_5062_ = v___x_4937_;
goto v_reusejp_5061_;
}
else
{
lean_object* v_reuseFailAlloc_5063_; 
v_reuseFailAlloc_5063_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5063_, 0, v___x_5060_);
lean_ctor_set(v_reuseFailAlloc_5063_, 1, v_k_5056_);
lean_ctor_set(v_reuseFailAlloc_5063_, 2, v_v_5057_);
lean_ctor_set(v_reuseFailAlloc_5063_, 3, v_r_4933_);
lean_ctor_set(v_reuseFailAlloc_5063_, 4, v___x_5059_);
v___x_5062_ = v_reuseFailAlloc_5063_;
goto v_reusejp_5061_;
}
v_reusejp_5061_:
{
return v___x_5062_;
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
lean_object* v___x_5078_; uint8_t v_isShared_5079_; uint8_t v_isSharedCheck_5229_; 
lean_inc(v_r_4933_);
lean_inc(v_v_4931_);
lean_inc(v_k_4930_);
v_isSharedCheck_5229_ = !lean_is_exclusive(v_r_4745_);
if (v_isSharedCheck_5229_ == 0)
{
lean_object* v_unused_5230_; lean_object* v_unused_5231_; lean_object* v_unused_5232_; lean_object* v_unused_5233_; lean_object* v_unused_5234_; 
v_unused_5230_ = lean_ctor_get(v_r_4745_, 4);
lean_dec(v_unused_5230_);
v_unused_5231_ = lean_ctor_get(v_r_4745_, 3);
lean_dec(v_unused_5231_);
v_unused_5232_ = lean_ctor_get(v_r_4745_, 2);
lean_dec(v_unused_5232_);
v_unused_5233_ = lean_ctor_get(v_r_4745_, 1);
lean_dec(v_unused_5233_);
v_unused_5234_ = lean_ctor_get(v_r_4745_, 0);
lean_dec(v_unused_5234_);
v___x_5078_ = v_r_4745_;
v_isShared_5079_ = v_isSharedCheck_5229_;
goto v_resetjp_5077_;
}
else
{
lean_dec(v_r_4745_);
v___x_5078_ = lean_box(0);
v_isShared_5079_ = v_isSharedCheck_5229_;
goto v_resetjp_5077_;
}
v_resetjp_5077_:
{
lean_object* v___x_5080_; lean_object* v_tree_5081_; 
v___x_5080_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_4930_, v_v_4931_, v_l_4932_, v_r_4933_);
v_tree_5081_ = lean_ctor_get(v___x_5080_, 2);
lean_inc(v_tree_5081_);
if (lean_obj_tag(v_tree_5081_) == 0)
{
lean_object* v_k_5082_; lean_object* v_v_5083_; lean_object* v_size_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; uint8_t v___x_5087_; 
v_k_5082_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_k_5082_);
v_v_5083_ = lean_ctor_get(v___x_5080_, 1);
lean_inc(v_v_5083_);
lean_dec_ref(v___x_5080_);
v_size_5084_ = lean_ctor_get(v_tree_5081_, 0);
v___x_5085_ = lean_unsigned_to_nat(3u);
v___x_5086_ = lean_nat_mul(v___x_5085_, v_size_5084_);
v___x_5087_ = lean_nat_dec_lt(v___x_5086_, v_size_4924_);
lean_dec(v___x_5086_);
if (v___x_5087_ == 0)
{
lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5091_; 
lean_dec(v_r_4928_);
v___x_5088_ = lean_nat_add(v___x_4934_, v_size_4924_);
v___x_5089_ = lean_nat_add(v___x_5088_, v_size_5084_);
lean_dec(v___x_5088_);
if (v_isShared_5079_ == 0)
{
lean_ctor_set(v___x_5078_, 4, v_tree_5081_);
lean_ctor_set(v___x_5078_, 3, v_l_4744_);
lean_ctor_set(v___x_5078_, 2, v_v_5083_);
lean_ctor_set(v___x_5078_, 1, v_k_5082_);
lean_ctor_set(v___x_5078_, 0, v___x_5089_);
v___x_5091_ = v___x_5078_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v___x_5089_);
lean_ctor_set(v_reuseFailAlloc_5092_, 1, v_k_5082_);
lean_ctor_set(v_reuseFailAlloc_5092_, 2, v_v_5083_);
lean_ctor_set(v_reuseFailAlloc_5092_, 3, v_l_4744_);
lean_ctor_set(v_reuseFailAlloc_5092_, 4, v_tree_5081_);
v___x_5091_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
return v___x_5091_;
}
}
else
{
lean_object* v___x_5094_; uint8_t v_isShared_5095_; uint8_t v_isSharedCheck_5158_; 
lean_inc(v_l_4927_);
lean_inc(v_v_4926_);
lean_inc(v_k_4925_);
lean_inc(v_size_4924_);
v_isSharedCheck_5158_ = !lean_is_exclusive(v_l_4744_);
if (v_isSharedCheck_5158_ == 0)
{
lean_object* v_unused_5159_; lean_object* v_unused_5160_; lean_object* v_unused_5161_; lean_object* v_unused_5162_; lean_object* v_unused_5163_; 
v_unused_5159_ = lean_ctor_get(v_l_4744_, 4);
lean_dec(v_unused_5159_);
v_unused_5160_ = lean_ctor_get(v_l_4744_, 3);
lean_dec(v_unused_5160_);
v_unused_5161_ = lean_ctor_get(v_l_4744_, 2);
lean_dec(v_unused_5161_);
v_unused_5162_ = lean_ctor_get(v_l_4744_, 1);
lean_dec(v_unused_5162_);
v_unused_5163_ = lean_ctor_get(v_l_4744_, 0);
lean_dec(v_unused_5163_);
v___x_5094_ = v_l_4744_;
v_isShared_5095_ = v_isSharedCheck_5158_;
goto v_resetjp_5093_;
}
else
{
lean_dec(v_l_4744_);
v___x_5094_ = lean_box(0);
v_isShared_5095_ = v_isSharedCheck_5158_;
goto v_resetjp_5093_;
}
v_resetjp_5093_:
{
lean_object* v_size_5096_; lean_object* v_size_5097_; lean_object* v_k_5098_; lean_object* v_v_5099_; lean_object* v_l_5100_; lean_object* v_r_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; uint8_t v___x_5104_; 
v_size_5096_ = lean_ctor_get(v_l_4927_, 0);
v_size_5097_ = lean_ctor_get(v_r_4928_, 0);
v_k_5098_ = lean_ctor_get(v_r_4928_, 1);
v_v_5099_ = lean_ctor_get(v_r_4928_, 2);
v_l_5100_ = lean_ctor_get(v_r_4928_, 3);
v_r_5101_ = lean_ctor_get(v_r_4928_, 4);
v___x_5102_ = lean_unsigned_to_nat(2u);
v___x_5103_ = lean_nat_mul(v___x_5102_, v_size_5096_);
v___x_5104_ = lean_nat_dec_lt(v_size_5097_, v___x_5103_);
lean_dec(v___x_5103_);
if (v___x_5104_ == 0)
{
lean_object* v___x_5106_; uint8_t v_isShared_5107_; uint8_t v_isSharedCheck_5142_; 
lean_inc(v_r_5101_);
lean_inc(v_l_5100_);
lean_inc(v_v_5099_);
lean_inc(v_k_5098_);
lean_del_object(v___x_5094_);
v_isSharedCheck_5142_ = !lean_is_exclusive(v_r_4928_);
if (v_isSharedCheck_5142_ == 0)
{
lean_object* v_unused_5143_; lean_object* v_unused_5144_; lean_object* v_unused_5145_; lean_object* v_unused_5146_; lean_object* v_unused_5147_; 
v_unused_5143_ = lean_ctor_get(v_r_4928_, 4);
lean_dec(v_unused_5143_);
v_unused_5144_ = lean_ctor_get(v_r_4928_, 3);
lean_dec(v_unused_5144_);
v_unused_5145_ = lean_ctor_get(v_r_4928_, 2);
lean_dec(v_unused_5145_);
v_unused_5146_ = lean_ctor_get(v_r_4928_, 1);
lean_dec(v_unused_5146_);
v_unused_5147_ = lean_ctor_get(v_r_4928_, 0);
lean_dec(v_unused_5147_);
v___x_5106_ = v_r_4928_;
v_isShared_5107_ = v_isSharedCheck_5142_;
goto v_resetjp_5105_;
}
else
{
lean_dec(v_r_4928_);
v___x_5106_ = lean_box(0);
v_isShared_5107_ = v_isSharedCheck_5142_;
goto v_resetjp_5105_;
}
v_resetjp_5105_:
{
lean_object* v___x_5108_; lean_object* v___x_5109_; lean_object* v___y_5111_; lean_object* v___y_5112_; lean_object* v___y_5113_; lean_object* v___x_5130_; lean_object* v___y_5132_; 
v___x_5108_ = lean_nat_add(v___x_4934_, v_size_4924_);
lean_dec(v_size_4924_);
v___x_5109_ = lean_nat_add(v___x_5108_, v_size_5084_);
lean_dec(v___x_5108_);
v___x_5130_ = lean_nat_add(v___x_4934_, v_size_5096_);
if (lean_obj_tag(v_l_5100_) == 0)
{
lean_object* v_size_5140_; 
v_size_5140_ = lean_ctor_get(v_l_5100_, 0);
lean_inc(v_size_5140_);
v___y_5132_ = v_size_5140_;
goto v___jp_5131_;
}
else
{
lean_object* v___x_5141_; 
v___x_5141_ = lean_unsigned_to_nat(0u);
v___y_5132_ = v___x_5141_;
goto v___jp_5131_;
}
v___jp_5110_:
{
lean_object* v___x_5114_; lean_object* v___x_5116_; 
v___x_5114_ = lean_nat_add(v___y_5111_, v___y_5113_);
lean_dec(v___y_5113_);
lean_dec(v___y_5111_);
lean_inc_ref(v_tree_5081_);
if (v_isShared_5107_ == 0)
{
lean_ctor_set(v___x_5106_, 4, v_tree_5081_);
lean_ctor_set(v___x_5106_, 3, v_r_5101_);
lean_ctor_set(v___x_5106_, 2, v_v_5083_);
lean_ctor_set(v___x_5106_, 1, v_k_5082_);
lean_ctor_set(v___x_5106_, 0, v___x_5114_);
v___x_5116_ = v___x_5106_;
goto v_reusejp_5115_;
}
else
{
lean_object* v_reuseFailAlloc_5129_; 
v_reuseFailAlloc_5129_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5129_, 0, v___x_5114_);
lean_ctor_set(v_reuseFailAlloc_5129_, 1, v_k_5082_);
lean_ctor_set(v_reuseFailAlloc_5129_, 2, v_v_5083_);
lean_ctor_set(v_reuseFailAlloc_5129_, 3, v_r_5101_);
lean_ctor_set(v_reuseFailAlloc_5129_, 4, v_tree_5081_);
v___x_5116_ = v_reuseFailAlloc_5129_;
goto v_reusejp_5115_;
}
v_reusejp_5115_:
{
lean_object* v___x_5118_; uint8_t v_isShared_5119_; uint8_t v_isSharedCheck_5123_; 
v_isSharedCheck_5123_ = !lean_is_exclusive(v_tree_5081_);
if (v_isSharedCheck_5123_ == 0)
{
lean_object* v_unused_5124_; lean_object* v_unused_5125_; lean_object* v_unused_5126_; lean_object* v_unused_5127_; lean_object* v_unused_5128_; 
v_unused_5124_ = lean_ctor_get(v_tree_5081_, 4);
lean_dec(v_unused_5124_);
v_unused_5125_ = lean_ctor_get(v_tree_5081_, 3);
lean_dec(v_unused_5125_);
v_unused_5126_ = lean_ctor_get(v_tree_5081_, 2);
lean_dec(v_unused_5126_);
v_unused_5127_ = lean_ctor_get(v_tree_5081_, 1);
lean_dec(v_unused_5127_);
v_unused_5128_ = lean_ctor_get(v_tree_5081_, 0);
lean_dec(v_unused_5128_);
v___x_5118_ = v_tree_5081_;
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
else
{
lean_dec(v_tree_5081_);
v___x_5118_ = lean_box(0);
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
v_resetjp_5117_:
{
lean_object* v___x_5121_; 
if (v_isShared_5119_ == 0)
{
lean_ctor_set(v___x_5118_, 4, v___x_5116_);
lean_ctor_set(v___x_5118_, 3, v___y_5112_);
lean_ctor_set(v___x_5118_, 2, v_v_5099_);
lean_ctor_set(v___x_5118_, 1, v_k_5098_);
lean_ctor_set(v___x_5118_, 0, v___x_5109_);
v___x_5121_ = v___x_5118_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v___x_5109_);
lean_ctor_set(v_reuseFailAlloc_5122_, 1, v_k_5098_);
lean_ctor_set(v_reuseFailAlloc_5122_, 2, v_v_5099_);
lean_ctor_set(v_reuseFailAlloc_5122_, 3, v___y_5112_);
lean_ctor_set(v_reuseFailAlloc_5122_, 4, v___x_5116_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
return v___x_5121_;
}
}
}
}
v___jp_5131_:
{
lean_object* v___x_5133_; lean_object* v___x_5135_; 
v___x_5133_ = lean_nat_add(v___x_5130_, v___y_5132_);
lean_dec(v___y_5132_);
lean_dec(v___x_5130_);
if (v_isShared_5079_ == 0)
{
lean_ctor_set(v___x_5078_, 4, v_l_5100_);
lean_ctor_set(v___x_5078_, 3, v_l_4927_);
lean_ctor_set(v___x_5078_, 2, v_v_4926_);
lean_ctor_set(v___x_5078_, 1, v_k_4925_);
lean_ctor_set(v___x_5078_, 0, v___x_5133_);
v___x_5135_ = v___x_5078_;
goto v_reusejp_5134_;
}
else
{
lean_object* v_reuseFailAlloc_5139_; 
v_reuseFailAlloc_5139_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5139_, 0, v___x_5133_);
lean_ctor_set(v_reuseFailAlloc_5139_, 1, v_k_4925_);
lean_ctor_set(v_reuseFailAlloc_5139_, 2, v_v_4926_);
lean_ctor_set(v_reuseFailAlloc_5139_, 3, v_l_4927_);
lean_ctor_set(v_reuseFailAlloc_5139_, 4, v_l_5100_);
v___x_5135_ = v_reuseFailAlloc_5139_;
goto v_reusejp_5134_;
}
v_reusejp_5134_:
{
lean_object* v___x_5136_; 
v___x_5136_ = lean_nat_add(v___x_4934_, v_size_5084_);
if (lean_obj_tag(v_r_5101_) == 0)
{
lean_object* v_size_5137_; 
v_size_5137_ = lean_ctor_get(v_r_5101_, 0);
lean_inc(v_size_5137_);
v___y_5111_ = v___x_5136_;
v___y_5112_ = v___x_5135_;
v___y_5113_ = v_size_5137_;
goto v___jp_5110_;
}
else
{
lean_object* v___x_5138_; 
v___x_5138_ = lean_unsigned_to_nat(0u);
v___y_5111_ = v___x_5136_;
v___y_5112_ = v___x_5135_;
v___y_5113_ = v___x_5138_;
goto v___jp_5110_;
}
}
}
}
}
else
{
lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5153_; 
v___x_5148_ = lean_nat_add(v___x_4934_, v_size_4924_);
lean_dec(v_size_4924_);
v___x_5149_ = lean_nat_add(v___x_5148_, v_size_5084_);
lean_dec(v___x_5148_);
v___x_5150_ = lean_nat_add(v___x_4934_, v_size_5084_);
v___x_5151_ = lean_nat_add(v___x_5150_, v_size_5097_);
lean_dec(v___x_5150_);
if (v_isShared_5079_ == 0)
{
lean_ctor_set(v___x_5078_, 4, v_tree_5081_);
lean_ctor_set(v___x_5078_, 3, v_r_4928_);
lean_ctor_set(v___x_5078_, 2, v_v_5083_);
lean_ctor_set(v___x_5078_, 1, v_k_5082_);
lean_ctor_set(v___x_5078_, 0, v___x_5151_);
v___x_5153_ = v___x_5078_;
goto v_reusejp_5152_;
}
else
{
lean_object* v_reuseFailAlloc_5157_; 
v_reuseFailAlloc_5157_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5157_, 0, v___x_5151_);
lean_ctor_set(v_reuseFailAlloc_5157_, 1, v_k_5082_);
lean_ctor_set(v_reuseFailAlloc_5157_, 2, v_v_5083_);
lean_ctor_set(v_reuseFailAlloc_5157_, 3, v_r_4928_);
lean_ctor_set(v_reuseFailAlloc_5157_, 4, v_tree_5081_);
v___x_5153_ = v_reuseFailAlloc_5157_;
goto v_reusejp_5152_;
}
v_reusejp_5152_:
{
lean_object* v___x_5155_; 
if (v_isShared_5095_ == 0)
{
lean_ctor_set(v___x_5094_, 4, v___x_5153_);
lean_ctor_set(v___x_5094_, 0, v___x_5149_);
v___x_5155_ = v___x_5094_;
goto v_reusejp_5154_;
}
else
{
lean_object* v_reuseFailAlloc_5156_; 
v_reuseFailAlloc_5156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5156_, 0, v___x_5149_);
lean_ctor_set(v_reuseFailAlloc_5156_, 1, v_k_4925_);
lean_ctor_set(v_reuseFailAlloc_5156_, 2, v_v_4926_);
lean_ctor_set(v_reuseFailAlloc_5156_, 3, v_l_4927_);
lean_ctor_set(v_reuseFailAlloc_5156_, 4, v___x_5153_);
v___x_5155_ = v_reuseFailAlloc_5156_;
goto v_reusejp_5154_;
}
v_reusejp_5154_:
{
return v___x_5155_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_4927_) == 0)
{
lean_object* v___x_5165_; uint8_t v_isShared_5166_; uint8_t v_isSharedCheck_5187_; 
lean_inc_ref(v_l_4927_);
lean_inc(v_v_4926_);
lean_inc(v_k_4925_);
lean_inc(v_size_4924_);
v_isSharedCheck_5187_ = !lean_is_exclusive(v_l_4744_);
if (v_isSharedCheck_5187_ == 0)
{
lean_object* v_unused_5188_; lean_object* v_unused_5189_; lean_object* v_unused_5190_; lean_object* v_unused_5191_; lean_object* v_unused_5192_; 
v_unused_5188_ = lean_ctor_get(v_l_4744_, 4);
lean_dec(v_unused_5188_);
v_unused_5189_ = lean_ctor_get(v_l_4744_, 3);
lean_dec(v_unused_5189_);
v_unused_5190_ = lean_ctor_get(v_l_4744_, 2);
lean_dec(v_unused_5190_);
v_unused_5191_ = lean_ctor_get(v_l_4744_, 1);
lean_dec(v_unused_5191_);
v_unused_5192_ = lean_ctor_get(v_l_4744_, 0);
lean_dec(v_unused_5192_);
v___x_5165_ = v_l_4744_;
v_isShared_5166_ = v_isSharedCheck_5187_;
goto v_resetjp_5164_;
}
else
{
lean_dec(v_l_4744_);
v___x_5165_ = lean_box(0);
v_isShared_5166_ = v_isSharedCheck_5187_;
goto v_resetjp_5164_;
}
v_resetjp_5164_:
{
if (lean_obj_tag(v_r_4928_) == 0)
{
lean_object* v_k_5167_; lean_object* v_v_5168_; lean_object* v_size_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5173_; 
v_k_5167_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_k_5167_);
v_v_5168_ = lean_ctor_get(v___x_5080_, 1);
lean_inc(v_v_5168_);
lean_dec_ref(v___x_5080_);
v_size_5169_ = lean_ctor_get(v_r_4928_, 0);
v___x_5170_ = lean_nat_add(v___x_4934_, v_size_4924_);
lean_dec(v_size_4924_);
v___x_5171_ = lean_nat_add(v___x_4934_, v_size_5169_);
if (v_isShared_5079_ == 0)
{
lean_ctor_set(v___x_5078_, 4, v_tree_5081_);
lean_ctor_set(v___x_5078_, 3, v_r_4928_);
lean_ctor_set(v___x_5078_, 2, v_v_5168_);
lean_ctor_set(v___x_5078_, 1, v_k_5167_);
lean_ctor_set(v___x_5078_, 0, v___x_5171_);
v___x_5173_ = v___x_5078_;
goto v_reusejp_5172_;
}
else
{
lean_object* v_reuseFailAlloc_5177_; 
v_reuseFailAlloc_5177_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5177_, 0, v___x_5171_);
lean_ctor_set(v_reuseFailAlloc_5177_, 1, v_k_5167_);
lean_ctor_set(v_reuseFailAlloc_5177_, 2, v_v_5168_);
lean_ctor_set(v_reuseFailAlloc_5177_, 3, v_r_4928_);
lean_ctor_set(v_reuseFailAlloc_5177_, 4, v_tree_5081_);
v___x_5173_ = v_reuseFailAlloc_5177_;
goto v_reusejp_5172_;
}
v_reusejp_5172_:
{
lean_object* v___x_5175_; 
if (v_isShared_5166_ == 0)
{
lean_ctor_set(v___x_5165_, 4, v___x_5173_);
lean_ctor_set(v___x_5165_, 0, v___x_5170_);
v___x_5175_ = v___x_5165_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5176_; 
v_reuseFailAlloc_5176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5176_, 0, v___x_5170_);
lean_ctor_set(v_reuseFailAlloc_5176_, 1, v_k_4925_);
lean_ctor_set(v_reuseFailAlloc_5176_, 2, v_v_4926_);
lean_ctor_set(v_reuseFailAlloc_5176_, 3, v_l_4927_);
lean_ctor_set(v_reuseFailAlloc_5176_, 4, v___x_5173_);
v___x_5175_ = v_reuseFailAlloc_5176_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
return v___x_5175_;
}
}
}
else
{
lean_object* v_k_5178_; lean_object* v_v_5179_; lean_object* v___x_5180_; lean_object* v___x_5182_; 
lean_dec(v_size_4924_);
v_k_5178_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_k_5178_);
v_v_5179_ = lean_ctor_get(v___x_5080_, 1);
lean_inc(v_v_5179_);
lean_dec_ref(v___x_5080_);
v___x_5180_ = lean_unsigned_to_nat(3u);
if (v_isShared_5079_ == 0)
{
lean_ctor_set(v___x_5078_, 4, v_r_4928_);
lean_ctor_set(v___x_5078_, 3, v_r_4928_);
lean_ctor_set(v___x_5078_, 2, v_v_5179_);
lean_ctor_set(v___x_5078_, 1, v_k_5178_);
lean_ctor_set(v___x_5078_, 0, v___x_4934_);
v___x_5182_ = v___x_5078_;
goto v_reusejp_5181_;
}
else
{
lean_object* v_reuseFailAlloc_5186_; 
v_reuseFailAlloc_5186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5186_, 0, v___x_4934_);
lean_ctor_set(v_reuseFailAlloc_5186_, 1, v_k_5178_);
lean_ctor_set(v_reuseFailAlloc_5186_, 2, v_v_5179_);
lean_ctor_set(v_reuseFailAlloc_5186_, 3, v_r_4928_);
lean_ctor_set(v_reuseFailAlloc_5186_, 4, v_r_4928_);
v___x_5182_ = v_reuseFailAlloc_5186_;
goto v_reusejp_5181_;
}
v_reusejp_5181_:
{
lean_object* v___x_5184_; 
if (v_isShared_5166_ == 0)
{
lean_ctor_set(v___x_5165_, 4, v___x_5182_);
lean_ctor_set(v___x_5165_, 0, v___x_5180_);
v___x_5184_ = v___x_5165_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v___x_5180_);
lean_ctor_set(v_reuseFailAlloc_5185_, 1, v_k_4925_);
lean_ctor_set(v_reuseFailAlloc_5185_, 2, v_v_4926_);
lean_ctor_set(v_reuseFailAlloc_5185_, 3, v_l_4927_);
lean_ctor_set(v_reuseFailAlloc_5185_, 4, v___x_5182_);
v___x_5184_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
return v___x_5184_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_4928_) == 0)
{
lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5217_; 
lean_inc(v_l_4927_);
lean_inc(v_v_4926_);
lean_inc(v_k_4925_);
v_isSharedCheck_5217_ = !lean_is_exclusive(v_l_4744_);
if (v_isSharedCheck_5217_ == 0)
{
lean_object* v_unused_5218_; lean_object* v_unused_5219_; lean_object* v_unused_5220_; lean_object* v_unused_5221_; lean_object* v_unused_5222_; 
v_unused_5218_ = lean_ctor_get(v_l_4744_, 4);
lean_dec(v_unused_5218_);
v_unused_5219_ = lean_ctor_get(v_l_4744_, 3);
lean_dec(v_unused_5219_);
v_unused_5220_ = lean_ctor_get(v_l_4744_, 2);
lean_dec(v_unused_5220_);
v_unused_5221_ = lean_ctor_get(v_l_4744_, 1);
lean_dec(v_unused_5221_);
v_unused_5222_ = lean_ctor_get(v_l_4744_, 0);
lean_dec(v_unused_5222_);
v___x_5194_ = v_l_4744_;
v_isShared_5195_ = v_isSharedCheck_5217_;
goto v_resetjp_5193_;
}
else
{
lean_dec(v_l_4744_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5217_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v_k_5196_; lean_object* v_v_5197_; lean_object* v_k_5198_; lean_object* v_v_5199_; lean_object* v___x_5201_; uint8_t v_isShared_5202_; uint8_t v_isSharedCheck_5213_; 
v_k_5196_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_k_5196_);
v_v_5197_ = lean_ctor_get(v___x_5080_, 1);
lean_inc(v_v_5197_);
lean_dec_ref(v___x_5080_);
v_k_5198_ = lean_ctor_get(v_r_4928_, 1);
v_v_5199_ = lean_ctor_get(v_r_4928_, 2);
v_isSharedCheck_5213_ = !lean_is_exclusive(v_r_4928_);
if (v_isSharedCheck_5213_ == 0)
{
lean_object* v_unused_5214_; lean_object* v_unused_5215_; lean_object* v_unused_5216_; 
v_unused_5214_ = lean_ctor_get(v_r_4928_, 4);
lean_dec(v_unused_5214_);
v_unused_5215_ = lean_ctor_get(v_r_4928_, 3);
lean_dec(v_unused_5215_);
v_unused_5216_ = lean_ctor_get(v_r_4928_, 0);
lean_dec(v_unused_5216_);
v___x_5201_ = v_r_4928_;
v_isShared_5202_ = v_isSharedCheck_5213_;
goto v_resetjp_5200_;
}
else
{
lean_inc(v_v_5199_);
lean_inc(v_k_5198_);
lean_dec(v_r_4928_);
v___x_5201_ = lean_box(0);
v_isShared_5202_ = v_isSharedCheck_5213_;
goto v_resetjp_5200_;
}
v_resetjp_5200_:
{
lean_object* v___x_5203_; lean_object* v___x_5205_; 
v___x_5203_ = lean_unsigned_to_nat(3u);
if (v_isShared_5202_ == 0)
{
lean_ctor_set(v___x_5201_, 4, v_l_4927_);
lean_ctor_set(v___x_5201_, 3, v_l_4927_);
lean_ctor_set(v___x_5201_, 2, v_v_4926_);
lean_ctor_set(v___x_5201_, 1, v_k_4925_);
lean_ctor_set(v___x_5201_, 0, v___x_4934_);
v___x_5205_ = v___x_5201_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5212_; 
v_reuseFailAlloc_5212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5212_, 0, v___x_4934_);
lean_ctor_set(v_reuseFailAlloc_5212_, 1, v_k_4925_);
lean_ctor_set(v_reuseFailAlloc_5212_, 2, v_v_4926_);
lean_ctor_set(v_reuseFailAlloc_5212_, 3, v_l_4927_);
lean_ctor_set(v_reuseFailAlloc_5212_, 4, v_l_4927_);
v___x_5205_ = v_reuseFailAlloc_5212_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
lean_object* v___x_5207_; 
if (v_isShared_5079_ == 0)
{
lean_ctor_set(v___x_5078_, 4, v_l_4927_);
lean_ctor_set(v___x_5078_, 3, v_l_4927_);
lean_ctor_set(v___x_5078_, 2, v_v_5197_);
lean_ctor_set(v___x_5078_, 1, v_k_5196_);
lean_ctor_set(v___x_5078_, 0, v___x_4934_);
v___x_5207_ = v___x_5078_;
goto v_reusejp_5206_;
}
else
{
lean_object* v_reuseFailAlloc_5211_; 
v_reuseFailAlloc_5211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5211_, 0, v___x_4934_);
lean_ctor_set(v_reuseFailAlloc_5211_, 1, v_k_5196_);
lean_ctor_set(v_reuseFailAlloc_5211_, 2, v_v_5197_);
lean_ctor_set(v_reuseFailAlloc_5211_, 3, v_l_4927_);
lean_ctor_set(v_reuseFailAlloc_5211_, 4, v_l_4927_);
v___x_5207_ = v_reuseFailAlloc_5211_;
goto v_reusejp_5206_;
}
v_reusejp_5206_:
{
lean_object* v___x_5209_; 
if (v_isShared_5195_ == 0)
{
lean_ctor_set(v___x_5194_, 4, v___x_5207_);
lean_ctor_set(v___x_5194_, 3, v___x_5205_);
lean_ctor_set(v___x_5194_, 2, v_v_5199_);
lean_ctor_set(v___x_5194_, 1, v_k_5198_);
lean_ctor_set(v___x_5194_, 0, v___x_5203_);
v___x_5209_ = v___x_5194_;
goto v_reusejp_5208_;
}
else
{
lean_object* v_reuseFailAlloc_5210_; 
v_reuseFailAlloc_5210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5210_, 0, v___x_5203_);
lean_ctor_set(v_reuseFailAlloc_5210_, 1, v_k_5198_);
lean_ctor_set(v_reuseFailAlloc_5210_, 2, v_v_5199_);
lean_ctor_set(v_reuseFailAlloc_5210_, 3, v___x_5205_);
lean_ctor_set(v_reuseFailAlloc_5210_, 4, v___x_5207_);
v___x_5209_ = v_reuseFailAlloc_5210_;
goto v_reusejp_5208_;
}
v_reusejp_5208_:
{
return v___x_5209_;
}
}
}
}
}
}
else
{
lean_object* v_k_5223_; lean_object* v_v_5224_; lean_object* v___x_5225_; lean_object* v___x_5227_; 
v_k_5223_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_k_5223_);
v_v_5224_ = lean_ctor_get(v___x_5080_, 1);
lean_inc(v_v_5224_);
lean_dec_ref(v___x_5080_);
v___x_5225_ = lean_unsigned_to_nat(2u);
if (v_isShared_5079_ == 0)
{
lean_ctor_set(v___x_5078_, 4, v_r_4928_);
lean_ctor_set(v___x_5078_, 3, v_l_4744_);
lean_ctor_set(v___x_5078_, 2, v_v_5224_);
lean_ctor_set(v___x_5078_, 1, v_k_5223_);
lean_ctor_set(v___x_5078_, 0, v___x_5225_);
v___x_5227_ = v___x_5078_;
goto v_reusejp_5226_;
}
else
{
lean_object* v_reuseFailAlloc_5228_; 
v_reuseFailAlloc_5228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5228_, 0, v___x_5225_);
lean_ctor_set(v_reuseFailAlloc_5228_, 1, v_k_5223_);
lean_ctor_set(v_reuseFailAlloc_5228_, 2, v_v_5224_);
lean_ctor_set(v_reuseFailAlloc_5228_, 3, v_l_4744_);
lean_ctor_set(v_reuseFailAlloc_5228_, 4, v_r_4928_);
v___x_5227_ = v_reuseFailAlloc_5228_;
goto v_reusejp_5226_;
}
v_reusejp_5226_:
{
return v___x_5227_;
}
}
}
}
}
}
}
else
{
return v_l_4744_;
}
}
else
{
return v_r_4745_;
}
}
default: 
{
lean_object* v_impl_5235_; lean_object* v___x_5236_; 
v_impl_5235_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg(v_k_4740_, v_r_4745_);
v___x_5236_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_5235_) == 0)
{
if (lean_obj_tag(v_l_4744_) == 0)
{
lean_object* v_size_5237_; lean_object* v_size_5238_; lean_object* v_k_5239_; lean_object* v_v_5240_; lean_object* v_l_5241_; lean_object* v_r_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; uint8_t v___x_5245_; 
v_size_5237_ = lean_ctor_get(v_impl_5235_, 0);
lean_inc(v_size_5237_);
v_size_5238_ = lean_ctor_get(v_l_4744_, 0);
v_k_5239_ = lean_ctor_get(v_l_4744_, 1);
v_v_5240_ = lean_ctor_get(v_l_4744_, 2);
v_l_5241_ = lean_ctor_get(v_l_4744_, 3);
v_r_5242_ = lean_ctor_get(v_l_4744_, 4);
lean_inc(v_r_5242_);
v___x_5243_ = lean_unsigned_to_nat(3u);
v___x_5244_ = lean_nat_mul(v___x_5243_, v_size_5237_);
v___x_5245_ = lean_nat_dec_lt(v___x_5244_, v_size_5238_);
lean_dec(v___x_5244_);
if (v___x_5245_ == 0)
{
lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5249_; 
lean_dec(v_r_5242_);
v___x_5246_ = lean_nat_add(v___x_5236_, v_size_5238_);
v___x_5247_ = lean_nat_add(v___x_5246_, v_size_5237_);
lean_dec(v_size_5237_);
lean_dec(v___x_5246_);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v_impl_5235_);
lean_ctor_set(v___x_4747_, 0, v___x_5247_);
v___x_5249_ = v___x_4747_;
goto v_reusejp_5248_;
}
else
{
lean_object* v_reuseFailAlloc_5250_; 
v_reuseFailAlloc_5250_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5250_, 0, v___x_5247_);
lean_ctor_set(v_reuseFailAlloc_5250_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_5250_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_5250_, 3, v_l_4744_);
lean_ctor_set(v_reuseFailAlloc_5250_, 4, v_impl_5235_);
v___x_5249_ = v_reuseFailAlloc_5250_;
goto v_reusejp_5248_;
}
v_reusejp_5248_:
{
return v___x_5249_;
}
}
else
{
lean_object* v___x_5252_; uint8_t v_isShared_5253_; uint8_t v_isSharedCheck_5316_; 
lean_inc(v_l_5241_);
lean_inc(v_v_5240_);
lean_inc(v_k_5239_);
lean_inc(v_size_5238_);
v_isSharedCheck_5316_ = !lean_is_exclusive(v_l_4744_);
if (v_isSharedCheck_5316_ == 0)
{
lean_object* v_unused_5317_; lean_object* v_unused_5318_; lean_object* v_unused_5319_; lean_object* v_unused_5320_; lean_object* v_unused_5321_; 
v_unused_5317_ = lean_ctor_get(v_l_4744_, 4);
lean_dec(v_unused_5317_);
v_unused_5318_ = lean_ctor_get(v_l_4744_, 3);
lean_dec(v_unused_5318_);
v_unused_5319_ = lean_ctor_get(v_l_4744_, 2);
lean_dec(v_unused_5319_);
v_unused_5320_ = lean_ctor_get(v_l_4744_, 1);
lean_dec(v_unused_5320_);
v_unused_5321_ = lean_ctor_get(v_l_4744_, 0);
lean_dec(v_unused_5321_);
v___x_5252_ = v_l_4744_;
v_isShared_5253_ = v_isSharedCheck_5316_;
goto v_resetjp_5251_;
}
else
{
lean_dec(v_l_4744_);
v___x_5252_ = lean_box(0);
v_isShared_5253_ = v_isSharedCheck_5316_;
goto v_resetjp_5251_;
}
v_resetjp_5251_:
{
lean_object* v_size_5254_; lean_object* v_size_5255_; lean_object* v_k_5256_; lean_object* v_v_5257_; lean_object* v_l_5258_; lean_object* v_r_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; uint8_t v___x_5262_; 
v_size_5254_ = lean_ctor_get(v_l_5241_, 0);
v_size_5255_ = lean_ctor_get(v_r_5242_, 0);
v_k_5256_ = lean_ctor_get(v_r_5242_, 1);
v_v_5257_ = lean_ctor_get(v_r_5242_, 2);
v_l_5258_ = lean_ctor_get(v_r_5242_, 3);
v_r_5259_ = lean_ctor_get(v_r_5242_, 4);
v___x_5260_ = lean_unsigned_to_nat(2u);
v___x_5261_ = lean_nat_mul(v___x_5260_, v_size_5254_);
v___x_5262_ = lean_nat_dec_lt(v_size_5255_, v___x_5261_);
lean_dec(v___x_5261_);
if (v___x_5262_ == 0)
{
lean_object* v___x_5264_; uint8_t v_isShared_5265_; uint8_t v_isSharedCheck_5291_; 
lean_inc(v_r_5259_);
lean_inc(v_l_5258_);
lean_inc(v_v_5257_);
lean_inc(v_k_5256_);
v_isSharedCheck_5291_ = !lean_is_exclusive(v_r_5242_);
if (v_isSharedCheck_5291_ == 0)
{
lean_object* v_unused_5292_; lean_object* v_unused_5293_; lean_object* v_unused_5294_; lean_object* v_unused_5295_; lean_object* v_unused_5296_; 
v_unused_5292_ = lean_ctor_get(v_r_5242_, 4);
lean_dec(v_unused_5292_);
v_unused_5293_ = lean_ctor_get(v_r_5242_, 3);
lean_dec(v_unused_5293_);
v_unused_5294_ = lean_ctor_get(v_r_5242_, 2);
lean_dec(v_unused_5294_);
v_unused_5295_ = lean_ctor_get(v_r_5242_, 1);
lean_dec(v_unused_5295_);
v_unused_5296_ = lean_ctor_get(v_r_5242_, 0);
lean_dec(v_unused_5296_);
v___x_5264_ = v_r_5242_;
v_isShared_5265_ = v_isSharedCheck_5291_;
goto v_resetjp_5263_;
}
else
{
lean_dec(v_r_5242_);
v___x_5264_ = lean_box(0);
v_isShared_5265_ = v_isSharedCheck_5291_;
goto v_resetjp_5263_;
}
v_resetjp_5263_:
{
lean_object* v___x_5266_; lean_object* v___x_5267_; lean_object* v___y_5269_; lean_object* v___y_5270_; lean_object* v___y_5271_; lean_object* v___x_5279_; lean_object* v___y_5281_; 
v___x_5266_ = lean_nat_add(v___x_5236_, v_size_5238_);
lean_dec(v_size_5238_);
v___x_5267_ = lean_nat_add(v___x_5266_, v_size_5237_);
lean_dec(v___x_5266_);
v___x_5279_ = lean_nat_add(v___x_5236_, v_size_5254_);
if (lean_obj_tag(v_l_5258_) == 0)
{
lean_object* v_size_5289_; 
v_size_5289_ = lean_ctor_get(v_l_5258_, 0);
lean_inc(v_size_5289_);
v___y_5281_ = v_size_5289_;
goto v___jp_5280_;
}
else
{
lean_object* v___x_5290_; 
v___x_5290_ = lean_unsigned_to_nat(0u);
v___y_5281_ = v___x_5290_;
goto v___jp_5280_;
}
v___jp_5268_:
{
lean_object* v___x_5272_; lean_object* v___x_5274_; 
v___x_5272_ = lean_nat_add(v___y_5270_, v___y_5271_);
lean_dec(v___y_5271_);
lean_dec(v___y_5270_);
if (v_isShared_5265_ == 0)
{
lean_ctor_set(v___x_5264_, 4, v_impl_5235_);
lean_ctor_set(v___x_5264_, 3, v_r_5259_);
lean_ctor_set(v___x_5264_, 2, v_v_4743_);
lean_ctor_set(v___x_5264_, 1, v_k_4742_);
lean_ctor_set(v___x_5264_, 0, v___x_5272_);
v___x_5274_ = v___x_5264_;
goto v_reusejp_5273_;
}
else
{
lean_object* v_reuseFailAlloc_5278_; 
v_reuseFailAlloc_5278_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5278_, 0, v___x_5272_);
lean_ctor_set(v_reuseFailAlloc_5278_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_5278_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_5278_, 3, v_r_5259_);
lean_ctor_set(v_reuseFailAlloc_5278_, 4, v_impl_5235_);
v___x_5274_ = v_reuseFailAlloc_5278_;
goto v_reusejp_5273_;
}
v_reusejp_5273_:
{
lean_object* v___x_5276_; 
if (v_isShared_5253_ == 0)
{
lean_ctor_set(v___x_5252_, 4, v___x_5274_);
lean_ctor_set(v___x_5252_, 3, v___y_5269_);
lean_ctor_set(v___x_5252_, 2, v_v_5257_);
lean_ctor_set(v___x_5252_, 1, v_k_5256_);
lean_ctor_set(v___x_5252_, 0, v___x_5267_);
v___x_5276_ = v___x_5252_;
goto v_reusejp_5275_;
}
else
{
lean_object* v_reuseFailAlloc_5277_; 
v_reuseFailAlloc_5277_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5277_, 0, v___x_5267_);
lean_ctor_set(v_reuseFailAlloc_5277_, 1, v_k_5256_);
lean_ctor_set(v_reuseFailAlloc_5277_, 2, v_v_5257_);
lean_ctor_set(v_reuseFailAlloc_5277_, 3, v___y_5269_);
lean_ctor_set(v_reuseFailAlloc_5277_, 4, v___x_5274_);
v___x_5276_ = v_reuseFailAlloc_5277_;
goto v_reusejp_5275_;
}
v_reusejp_5275_:
{
return v___x_5276_;
}
}
}
v___jp_5280_:
{
lean_object* v___x_5282_; lean_object* v___x_5284_; 
v___x_5282_ = lean_nat_add(v___x_5279_, v___y_5281_);
lean_dec(v___y_5281_);
lean_dec(v___x_5279_);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v_l_5258_);
lean_ctor_set(v___x_4747_, 3, v_l_5241_);
lean_ctor_set(v___x_4747_, 2, v_v_5240_);
lean_ctor_set(v___x_4747_, 1, v_k_5239_);
lean_ctor_set(v___x_4747_, 0, v___x_5282_);
v___x_5284_ = v___x_4747_;
goto v_reusejp_5283_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v___x_5282_);
lean_ctor_set(v_reuseFailAlloc_5288_, 1, v_k_5239_);
lean_ctor_set(v_reuseFailAlloc_5288_, 2, v_v_5240_);
lean_ctor_set(v_reuseFailAlloc_5288_, 3, v_l_5241_);
lean_ctor_set(v_reuseFailAlloc_5288_, 4, v_l_5258_);
v___x_5284_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5283_;
}
v_reusejp_5283_:
{
lean_object* v___x_5285_; 
v___x_5285_ = lean_nat_add(v___x_5236_, v_size_5237_);
lean_dec(v_size_5237_);
if (lean_obj_tag(v_r_5259_) == 0)
{
lean_object* v_size_5286_; 
v_size_5286_ = lean_ctor_get(v_r_5259_, 0);
lean_inc(v_size_5286_);
v___y_5269_ = v___x_5284_;
v___y_5270_ = v___x_5285_;
v___y_5271_ = v_size_5286_;
goto v___jp_5268_;
}
else
{
lean_object* v___x_5287_; 
v___x_5287_ = lean_unsigned_to_nat(0u);
v___y_5269_ = v___x_5284_;
v___y_5270_ = v___x_5285_;
v___y_5271_ = v___x_5287_;
goto v___jp_5268_;
}
}
}
}
}
else
{
lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5302_; 
lean_del_object(v___x_4747_);
v___x_5297_ = lean_nat_add(v___x_5236_, v_size_5238_);
lean_dec(v_size_5238_);
v___x_5298_ = lean_nat_add(v___x_5297_, v_size_5237_);
lean_dec(v___x_5297_);
v___x_5299_ = lean_nat_add(v___x_5236_, v_size_5237_);
lean_dec(v_size_5237_);
v___x_5300_ = lean_nat_add(v___x_5299_, v_size_5255_);
lean_dec(v___x_5299_);
lean_inc_ref(v_impl_5235_);
if (v_isShared_5253_ == 0)
{
lean_ctor_set(v___x_5252_, 4, v_impl_5235_);
lean_ctor_set(v___x_5252_, 3, v_r_5242_);
lean_ctor_set(v___x_5252_, 2, v_v_4743_);
lean_ctor_set(v___x_5252_, 1, v_k_4742_);
lean_ctor_set(v___x_5252_, 0, v___x_5300_);
v___x_5302_ = v___x_5252_;
goto v_reusejp_5301_;
}
else
{
lean_object* v_reuseFailAlloc_5315_; 
v_reuseFailAlloc_5315_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5315_, 0, v___x_5300_);
lean_ctor_set(v_reuseFailAlloc_5315_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_5315_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_5315_, 3, v_r_5242_);
lean_ctor_set(v_reuseFailAlloc_5315_, 4, v_impl_5235_);
v___x_5302_ = v_reuseFailAlloc_5315_;
goto v_reusejp_5301_;
}
v_reusejp_5301_:
{
lean_object* v___x_5304_; uint8_t v_isShared_5305_; uint8_t v_isSharedCheck_5309_; 
v_isSharedCheck_5309_ = !lean_is_exclusive(v_impl_5235_);
if (v_isSharedCheck_5309_ == 0)
{
lean_object* v_unused_5310_; lean_object* v_unused_5311_; lean_object* v_unused_5312_; lean_object* v_unused_5313_; lean_object* v_unused_5314_; 
v_unused_5310_ = lean_ctor_get(v_impl_5235_, 4);
lean_dec(v_unused_5310_);
v_unused_5311_ = lean_ctor_get(v_impl_5235_, 3);
lean_dec(v_unused_5311_);
v_unused_5312_ = lean_ctor_get(v_impl_5235_, 2);
lean_dec(v_unused_5312_);
v_unused_5313_ = lean_ctor_get(v_impl_5235_, 1);
lean_dec(v_unused_5313_);
v_unused_5314_ = lean_ctor_get(v_impl_5235_, 0);
lean_dec(v_unused_5314_);
v___x_5304_ = v_impl_5235_;
v_isShared_5305_ = v_isSharedCheck_5309_;
goto v_resetjp_5303_;
}
else
{
lean_dec(v_impl_5235_);
v___x_5304_ = lean_box(0);
v_isShared_5305_ = v_isSharedCheck_5309_;
goto v_resetjp_5303_;
}
v_resetjp_5303_:
{
lean_object* v___x_5307_; 
if (v_isShared_5305_ == 0)
{
lean_ctor_set(v___x_5304_, 4, v___x_5302_);
lean_ctor_set(v___x_5304_, 3, v_l_5241_);
lean_ctor_set(v___x_5304_, 2, v_v_5240_);
lean_ctor_set(v___x_5304_, 1, v_k_5239_);
lean_ctor_set(v___x_5304_, 0, v___x_5298_);
v___x_5307_ = v___x_5304_;
goto v_reusejp_5306_;
}
else
{
lean_object* v_reuseFailAlloc_5308_; 
v_reuseFailAlloc_5308_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5308_, 0, v___x_5298_);
lean_ctor_set(v_reuseFailAlloc_5308_, 1, v_k_5239_);
lean_ctor_set(v_reuseFailAlloc_5308_, 2, v_v_5240_);
lean_ctor_set(v_reuseFailAlloc_5308_, 3, v_l_5241_);
lean_ctor_set(v_reuseFailAlloc_5308_, 4, v___x_5302_);
v___x_5307_ = v_reuseFailAlloc_5308_;
goto v_reusejp_5306_;
}
v_reusejp_5306_:
{
return v___x_5307_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_5322_; lean_object* v___x_5323_; lean_object* v___x_5325_; 
v_size_5322_ = lean_ctor_get(v_impl_5235_, 0);
lean_inc(v_size_5322_);
v___x_5323_ = lean_nat_add(v___x_5236_, v_size_5322_);
lean_dec(v_size_5322_);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v_impl_5235_);
lean_ctor_set(v___x_4747_, 0, v___x_5323_);
v___x_5325_ = v___x_4747_;
goto v_reusejp_5324_;
}
else
{
lean_object* v_reuseFailAlloc_5326_; 
v_reuseFailAlloc_5326_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5326_, 0, v___x_5323_);
lean_ctor_set(v_reuseFailAlloc_5326_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_5326_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_5326_, 3, v_l_4744_);
lean_ctor_set(v_reuseFailAlloc_5326_, 4, v_impl_5235_);
v___x_5325_ = v_reuseFailAlloc_5326_;
goto v_reusejp_5324_;
}
v_reusejp_5324_:
{
return v___x_5325_;
}
}
}
else
{
if (lean_obj_tag(v_l_4744_) == 0)
{
lean_object* v_l_5327_; 
v_l_5327_ = lean_ctor_get(v_l_4744_, 3);
if (lean_obj_tag(v_l_5327_) == 0)
{
lean_object* v_r_5328_; 
lean_inc_ref(v_l_5327_);
v_r_5328_ = lean_ctor_get(v_l_4744_, 4);
lean_inc(v_r_5328_);
if (lean_obj_tag(v_r_5328_) == 0)
{
lean_object* v_size_5329_; lean_object* v_k_5330_; lean_object* v_v_5331_; lean_object* v___x_5333_; uint8_t v_isShared_5334_; uint8_t v_isSharedCheck_5344_; 
v_size_5329_ = lean_ctor_get(v_l_4744_, 0);
v_k_5330_ = lean_ctor_get(v_l_4744_, 1);
v_v_5331_ = lean_ctor_get(v_l_4744_, 2);
v_isSharedCheck_5344_ = !lean_is_exclusive(v_l_4744_);
if (v_isSharedCheck_5344_ == 0)
{
lean_object* v_unused_5345_; lean_object* v_unused_5346_; 
v_unused_5345_ = lean_ctor_get(v_l_4744_, 4);
lean_dec(v_unused_5345_);
v_unused_5346_ = lean_ctor_get(v_l_4744_, 3);
lean_dec(v_unused_5346_);
v___x_5333_ = v_l_4744_;
v_isShared_5334_ = v_isSharedCheck_5344_;
goto v_resetjp_5332_;
}
else
{
lean_inc(v_v_5331_);
lean_inc(v_k_5330_);
lean_inc(v_size_5329_);
lean_dec(v_l_4744_);
v___x_5333_ = lean_box(0);
v_isShared_5334_ = v_isSharedCheck_5344_;
goto v_resetjp_5332_;
}
v_resetjp_5332_:
{
lean_object* v_size_5335_; lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5339_; 
v_size_5335_ = lean_ctor_get(v_r_5328_, 0);
v___x_5336_ = lean_nat_add(v___x_5236_, v_size_5329_);
lean_dec(v_size_5329_);
v___x_5337_ = lean_nat_add(v___x_5236_, v_size_5335_);
if (v_isShared_5334_ == 0)
{
lean_ctor_set(v___x_5333_, 4, v_impl_5235_);
lean_ctor_set(v___x_5333_, 3, v_r_5328_);
lean_ctor_set(v___x_5333_, 2, v_v_4743_);
lean_ctor_set(v___x_5333_, 1, v_k_4742_);
lean_ctor_set(v___x_5333_, 0, v___x_5337_);
v___x_5339_ = v___x_5333_;
goto v_reusejp_5338_;
}
else
{
lean_object* v_reuseFailAlloc_5343_; 
v_reuseFailAlloc_5343_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5343_, 0, v___x_5337_);
lean_ctor_set(v_reuseFailAlloc_5343_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_5343_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_5343_, 3, v_r_5328_);
lean_ctor_set(v_reuseFailAlloc_5343_, 4, v_impl_5235_);
v___x_5339_ = v_reuseFailAlloc_5343_;
goto v_reusejp_5338_;
}
v_reusejp_5338_:
{
lean_object* v___x_5341_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v___x_5339_);
lean_ctor_set(v___x_4747_, 3, v_l_5327_);
lean_ctor_set(v___x_4747_, 2, v_v_5331_);
lean_ctor_set(v___x_4747_, 1, v_k_5330_);
lean_ctor_set(v___x_4747_, 0, v___x_5336_);
v___x_5341_ = v___x_4747_;
goto v_reusejp_5340_;
}
else
{
lean_object* v_reuseFailAlloc_5342_; 
v_reuseFailAlloc_5342_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5342_, 0, v___x_5336_);
lean_ctor_set(v_reuseFailAlloc_5342_, 1, v_k_5330_);
lean_ctor_set(v_reuseFailAlloc_5342_, 2, v_v_5331_);
lean_ctor_set(v_reuseFailAlloc_5342_, 3, v_l_5327_);
lean_ctor_set(v_reuseFailAlloc_5342_, 4, v___x_5339_);
v___x_5341_ = v_reuseFailAlloc_5342_;
goto v_reusejp_5340_;
}
v_reusejp_5340_:
{
return v___x_5341_;
}
}
}
}
else
{
lean_object* v_k_5347_; lean_object* v_v_5348_; lean_object* v___x_5350_; uint8_t v_isShared_5351_; uint8_t v_isSharedCheck_5359_; 
v_k_5347_ = lean_ctor_get(v_l_4744_, 1);
v_v_5348_ = lean_ctor_get(v_l_4744_, 2);
v_isSharedCheck_5359_ = !lean_is_exclusive(v_l_4744_);
if (v_isSharedCheck_5359_ == 0)
{
lean_object* v_unused_5360_; lean_object* v_unused_5361_; lean_object* v_unused_5362_; 
v_unused_5360_ = lean_ctor_get(v_l_4744_, 4);
lean_dec(v_unused_5360_);
v_unused_5361_ = lean_ctor_get(v_l_4744_, 3);
lean_dec(v_unused_5361_);
v_unused_5362_ = lean_ctor_get(v_l_4744_, 0);
lean_dec(v_unused_5362_);
v___x_5350_ = v_l_4744_;
v_isShared_5351_ = v_isSharedCheck_5359_;
goto v_resetjp_5349_;
}
else
{
lean_inc(v_v_5348_);
lean_inc(v_k_5347_);
lean_dec(v_l_4744_);
v___x_5350_ = lean_box(0);
v_isShared_5351_ = v_isSharedCheck_5359_;
goto v_resetjp_5349_;
}
v_resetjp_5349_:
{
lean_object* v___x_5352_; lean_object* v___x_5354_; 
v___x_5352_ = lean_unsigned_to_nat(3u);
if (v_isShared_5351_ == 0)
{
lean_ctor_set(v___x_5350_, 3, v_r_5328_);
lean_ctor_set(v___x_5350_, 2, v_v_4743_);
lean_ctor_set(v___x_5350_, 1, v_k_4742_);
lean_ctor_set(v___x_5350_, 0, v___x_5236_);
v___x_5354_ = v___x_5350_;
goto v_reusejp_5353_;
}
else
{
lean_object* v_reuseFailAlloc_5358_; 
v_reuseFailAlloc_5358_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5358_, 0, v___x_5236_);
lean_ctor_set(v_reuseFailAlloc_5358_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_5358_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_5358_, 3, v_r_5328_);
lean_ctor_set(v_reuseFailAlloc_5358_, 4, v_r_5328_);
v___x_5354_ = v_reuseFailAlloc_5358_;
goto v_reusejp_5353_;
}
v_reusejp_5353_:
{
lean_object* v___x_5356_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v___x_5354_);
lean_ctor_set(v___x_4747_, 3, v_l_5327_);
lean_ctor_set(v___x_4747_, 2, v_v_5348_);
lean_ctor_set(v___x_4747_, 1, v_k_5347_);
lean_ctor_set(v___x_4747_, 0, v___x_5352_);
v___x_5356_ = v___x_4747_;
goto v_reusejp_5355_;
}
else
{
lean_object* v_reuseFailAlloc_5357_; 
v_reuseFailAlloc_5357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5357_, 0, v___x_5352_);
lean_ctor_set(v_reuseFailAlloc_5357_, 1, v_k_5347_);
lean_ctor_set(v_reuseFailAlloc_5357_, 2, v_v_5348_);
lean_ctor_set(v_reuseFailAlloc_5357_, 3, v_l_5327_);
lean_ctor_set(v_reuseFailAlloc_5357_, 4, v___x_5354_);
v___x_5356_ = v_reuseFailAlloc_5357_;
goto v_reusejp_5355_;
}
v_reusejp_5355_:
{
return v___x_5356_;
}
}
}
}
}
else
{
lean_object* v_r_5363_; 
v_r_5363_ = lean_ctor_get(v_l_4744_, 4);
lean_inc(v_r_5363_);
if (lean_obj_tag(v_r_5363_) == 0)
{
lean_object* v_k_5364_; lean_object* v_v_5365_; lean_object* v___x_5367_; uint8_t v_isShared_5368_; uint8_t v_isSharedCheck_5388_; 
lean_inc(v_l_5327_);
v_k_5364_ = lean_ctor_get(v_l_4744_, 1);
v_v_5365_ = lean_ctor_get(v_l_4744_, 2);
v_isSharedCheck_5388_ = !lean_is_exclusive(v_l_4744_);
if (v_isSharedCheck_5388_ == 0)
{
lean_object* v_unused_5389_; lean_object* v_unused_5390_; lean_object* v_unused_5391_; 
v_unused_5389_ = lean_ctor_get(v_l_4744_, 4);
lean_dec(v_unused_5389_);
v_unused_5390_ = lean_ctor_get(v_l_4744_, 3);
lean_dec(v_unused_5390_);
v_unused_5391_ = lean_ctor_get(v_l_4744_, 0);
lean_dec(v_unused_5391_);
v___x_5367_ = v_l_4744_;
v_isShared_5368_ = v_isSharedCheck_5388_;
goto v_resetjp_5366_;
}
else
{
lean_inc(v_v_5365_);
lean_inc(v_k_5364_);
lean_dec(v_l_4744_);
v___x_5367_ = lean_box(0);
v_isShared_5368_ = v_isSharedCheck_5388_;
goto v_resetjp_5366_;
}
v_resetjp_5366_:
{
lean_object* v_k_5369_; lean_object* v_v_5370_; lean_object* v___x_5372_; uint8_t v_isShared_5373_; uint8_t v_isSharedCheck_5384_; 
v_k_5369_ = lean_ctor_get(v_r_5363_, 1);
v_v_5370_ = lean_ctor_get(v_r_5363_, 2);
v_isSharedCheck_5384_ = !lean_is_exclusive(v_r_5363_);
if (v_isSharedCheck_5384_ == 0)
{
lean_object* v_unused_5385_; lean_object* v_unused_5386_; lean_object* v_unused_5387_; 
v_unused_5385_ = lean_ctor_get(v_r_5363_, 4);
lean_dec(v_unused_5385_);
v_unused_5386_ = lean_ctor_get(v_r_5363_, 3);
lean_dec(v_unused_5386_);
v_unused_5387_ = lean_ctor_get(v_r_5363_, 0);
lean_dec(v_unused_5387_);
v___x_5372_ = v_r_5363_;
v_isShared_5373_ = v_isSharedCheck_5384_;
goto v_resetjp_5371_;
}
else
{
lean_inc(v_v_5370_);
lean_inc(v_k_5369_);
lean_dec(v_r_5363_);
v___x_5372_ = lean_box(0);
v_isShared_5373_ = v_isSharedCheck_5384_;
goto v_resetjp_5371_;
}
v_resetjp_5371_:
{
lean_object* v___x_5374_; lean_object* v___x_5376_; 
v___x_5374_ = lean_unsigned_to_nat(3u);
if (v_isShared_5373_ == 0)
{
lean_ctor_set(v___x_5372_, 4, v_l_5327_);
lean_ctor_set(v___x_5372_, 3, v_l_5327_);
lean_ctor_set(v___x_5372_, 2, v_v_5365_);
lean_ctor_set(v___x_5372_, 1, v_k_5364_);
lean_ctor_set(v___x_5372_, 0, v___x_5236_);
v___x_5376_ = v___x_5372_;
goto v_reusejp_5375_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v___x_5236_);
lean_ctor_set(v_reuseFailAlloc_5383_, 1, v_k_5364_);
lean_ctor_set(v_reuseFailAlloc_5383_, 2, v_v_5365_);
lean_ctor_set(v_reuseFailAlloc_5383_, 3, v_l_5327_);
lean_ctor_set(v_reuseFailAlloc_5383_, 4, v_l_5327_);
v___x_5376_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5375_;
}
v_reusejp_5375_:
{
lean_object* v___x_5378_; 
if (v_isShared_5368_ == 0)
{
lean_ctor_set(v___x_5367_, 4, v_l_5327_);
lean_ctor_set(v___x_5367_, 2, v_v_4743_);
lean_ctor_set(v___x_5367_, 1, v_k_4742_);
lean_ctor_set(v___x_5367_, 0, v___x_5236_);
v___x_5378_ = v___x_5367_;
goto v_reusejp_5377_;
}
else
{
lean_object* v_reuseFailAlloc_5382_; 
v_reuseFailAlloc_5382_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5382_, 0, v___x_5236_);
lean_ctor_set(v_reuseFailAlloc_5382_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_5382_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_5382_, 3, v_l_5327_);
lean_ctor_set(v_reuseFailAlloc_5382_, 4, v_l_5327_);
v___x_5378_ = v_reuseFailAlloc_5382_;
goto v_reusejp_5377_;
}
v_reusejp_5377_:
{
lean_object* v___x_5380_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v___x_5378_);
lean_ctor_set(v___x_4747_, 3, v___x_5376_);
lean_ctor_set(v___x_4747_, 2, v_v_5370_);
lean_ctor_set(v___x_4747_, 1, v_k_5369_);
lean_ctor_set(v___x_4747_, 0, v___x_5374_);
v___x_5380_ = v___x_4747_;
goto v_reusejp_5379_;
}
else
{
lean_object* v_reuseFailAlloc_5381_; 
v_reuseFailAlloc_5381_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5381_, 0, v___x_5374_);
lean_ctor_set(v_reuseFailAlloc_5381_, 1, v_k_5369_);
lean_ctor_set(v_reuseFailAlloc_5381_, 2, v_v_5370_);
lean_ctor_set(v_reuseFailAlloc_5381_, 3, v___x_5376_);
lean_ctor_set(v_reuseFailAlloc_5381_, 4, v___x_5378_);
v___x_5380_ = v_reuseFailAlloc_5381_;
goto v_reusejp_5379_;
}
v_reusejp_5379_:
{
return v___x_5380_;
}
}
}
}
}
}
else
{
lean_object* v___x_5392_; lean_object* v___x_5394_; 
v___x_5392_ = lean_unsigned_to_nat(2u);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v_r_5363_);
lean_ctor_set(v___x_4747_, 0, v___x_5392_);
v___x_5394_ = v___x_4747_;
goto v_reusejp_5393_;
}
else
{
lean_object* v_reuseFailAlloc_5395_; 
v_reuseFailAlloc_5395_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5395_, 0, v___x_5392_);
lean_ctor_set(v_reuseFailAlloc_5395_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_5395_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_5395_, 3, v_l_4744_);
lean_ctor_set(v_reuseFailAlloc_5395_, 4, v_r_5363_);
v___x_5394_ = v_reuseFailAlloc_5395_;
goto v_reusejp_5393_;
}
v_reusejp_5393_:
{
return v___x_5394_;
}
}
}
}
else
{
lean_object* v___x_5397_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 4, v_l_4744_);
lean_ctor_set(v___x_4747_, 0, v___x_5236_);
v___x_5397_ = v___x_4747_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5398_; 
v_reuseFailAlloc_5398_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5398_, 0, v___x_5236_);
lean_ctor_set(v_reuseFailAlloc_5398_, 1, v_k_4742_);
lean_ctor_set(v_reuseFailAlloc_5398_, 2, v_v_4743_);
lean_ctor_set(v_reuseFailAlloc_5398_, 3, v_l_4744_);
lean_ctor_set(v_reuseFailAlloc_5398_, 4, v_l_4744_);
v___x_5397_ = v_reuseFailAlloc_5398_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
return v___x_5397_;
}
}
}
}
}
}
}
else
{
return v_t_4741_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg___boxed(lean_object* v_k_5401_, lean_object* v_t_5402_){
_start:
{
lean_object* v_res_5403_; 
v_res_5403_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg(v_k_5401_, v_t_5402_);
lean_dec(v_k_5401_);
return v_res_5403_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2_spec__2(lean_object* v_init_5404_, lean_object* v_x_5405_){
_start:
{
if (lean_obj_tag(v_x_5405_) == 0)
{
lean_object* v_k_5406_; lean_object* v_l_5407_; lean_object* v_r_5408_; lean_object* v___x_5409_; lean_object* v_ileans_5410_; lean_object* v_workers_5411_; lean_object* v___x_5413_; uint8_t v_isShared_5414_; uint8_t v_isSharedCheck_5420_; 
v_k_5406_ = lean_ctor_get(v_x_5405_, 1);
v_l_5407_ = lean_ctor_get(v_x_5405_, 3);
v_r_5408_ = lean_ctor_get(v_x_5405_, 4);
v___x_5409_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2_spec__2(v_init_5404_, v_l_5407_);
v_ileans_5410_ = lean_ctor_get(v___x_5409_, 0);
v_workers_5411_ = lean_ctor_get(v___x_5409_, 1);
v_isSharedCheck_5420_ = !lean_is_exclusive(v___x_5409_);
if (v_isSharedCheck_5420_ == 0)
{
v___x_5413_ = v___x_5409_;
v_isShared_5414_ = v_isSharedCheck_5420_;
goto v_resetjp_5412_;
}
else
{
lean_inc(v_workers_5411_);
lean_inc(v_ileans_5410_);
lean_dec(v___x_5409_);
v___x_5413_ = lean_box(0);
v_isShared_5414_ = v_isSharedCheck_5420_;
goto v_resetjp_5412_;
}
v_resetjp_5412_:
{
lean_object* v___x_5415_; lean_object* v___x_5417_; 
v___x_5415_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg(v_k_5406_, v_ileans_5410_);
if (v_isShared_5414_ == 0)
{
lean_ctor_set(v___x_5413_, 0, v___x_5415_);
v___x_5417_ = v___x_5413_;
goto v_reusejp_5416_;
}
else
{
lean_object* v_reuseFailAlloc_5419_; 
v_reuseFailAlloc_5419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5419_, 0, v___x_5415_);
lean_ctor_set(v_reuseFailAlloc_5419_, 1, v_workers_5411_);
v___x_5417_ = v_reuseFailAlloc_5419_;
goto v_reusejp_5416_;
}
v_reusejp_5416_:
{
v_init_5404_ = v___x_5417_;
v_x_5405_ = v_r_5408_;
goto _start;
}
}
}
else
{
return v_init_5404_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2_spec__2___boxed(lean_object* v_init_5421_, lean_object* v_x_5422_){
_start:
{
lean_object* v_res_5423_; 
v_res_5423_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2_spec__2(v_init_5421_, v_x_5422_);
lean_dec(v_x_5422_);
return v_res_5423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_removeIlean(lean_object* v_self_5424_, lean_object* v_path_5425_){
_start:
{
lean_object* v_ileans_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; 
v_ileans_5426_ = lean_ctor_get(v_self_5424_, 0);
lean_inc(v_ileans_5426_);
v___x_5427_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg(v_path_5425_, v_ileans_5426_);
v___x_5428_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2_spec__2(v_self_5424_, v___x_5427_);
lean_dec(v___x_5427_);
return v___x_5428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_removeIlean___boxed(lean_object* v_self_5429_, lean_object* v_path_5430_){
_start:
{
lean_object* v_res_5431_; 
v_res_5431_ = l_Lean_Server_References_removeIlean(v_self_5429_, v_path_5430_);
lean_dec_ref(v_path_5430_);
return v_res_5431_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0(lean_object* v_00_u03b2_5432_, lean_object* v_k_5433_, lean_object* v_t_5434_, lean_object* v_h_5435_){
_start:
{
lean_object* v___x_5436_; 
v___x_5436_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg(v_k_5433_, v_t_5434_);
return v___x_5436_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___boxed(lean_object* v_00_u03b2_5437_, lean_object* v_k_5438_, lean_object* v_t_5439_, lean_object* v_h_5440_){
_start:
{
lean_object* v_res_5441_; 
v_res_5441_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0(v_00_u03b2_5437_, v_k_5438_, v_t_5439_, v_h_5440_);
lean_dec(v_k_5438_);
return v_res_5441_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1(lean_object* v_path_5442_, lean_object* v_t_5443_, lean_object* v_hl_5444_){
_start:
{
lean_object* v___x_5445_; 
v___x_5445_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___redArg(v_path_5442_, v_t_5443_);
return v___x_5445_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1___boxed(lean_object* v_path_5446_, lean_object* v_t_5447_, lean_object* v_hl_5448_){
_start:
{
lean_object* v_res_5449_; 
v_res_5449_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_Server_References_removeIlean_spec__1(v_path_5446_, v_t_5447_, v_hl_5448_);
lean_dec_ref(v_path_5446_);
return v_res_5449_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2(lean_object* v_init_5450_, lean_object* v_t_5451_){
_start:
{
lean_object* v___x_5452_; 
v___x_5452_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2_spec__2(v_init_5450_, v_t_5451_);
return v___x_5452_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2___boxed(lean_object* v_init_5453_, lean_object* v_t_5454_){
_start:
{
lean_object* v_res_5455_; 
v_res_5455_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_removeIlean_spec__2(v_init_5453_, v_t_5454_);
lean_dec(v_t_5454_);
return v_res_5455_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(lean_object* v_t_5456_, lean_object* v_k_5457_){
_start:
{
if (lean_obj_tag(v_t_5456_) == 0)
{
lean_object* v_k_5458_; lean_object* v_v_5459_; lean_object* v_l_5460_; lean_object* v_r_5461_; uint8_t v___x_5462_; 
v_k_5458_ = lean_ctor_get(v_t_5456_, 1);
v_v_5459_ = lean_ctor_get(v_t_5456_, 2);
v_l_5460_ = lean_ctor_get(v_t_5456_, 3);
v_r_5461_ = lean_ctor_get(v_t_5456_, 4);
v___x_5462_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_5457_, v_k_5458_);
switch(v___x_5462_)
{
case 0:
{
v_t_5456_ = v_l_5460_;
goto _start;
}
case 1:
{
lean_object* v___x_5464_; 
lean_inc(v_v_5459_);
v___x_5464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5464_, 0, v_v_5459_);
return v___x_5464_;
}
default: 
{
v_t_5456_ = v_r_5461_;
goto _start;
}
}
}
else
{
lean_object* v___x_5466_; 
v___x_5466_ = lean_box(0);
return v___x_5466_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg___boxed(lean_object* v_t_5467_, lean_object* v_k_5468_){
_start:
{
lean_object* v_res_5469_; 
v_res_5469_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_t_5467_, v_k_5468_);
lean_dec(v_k_5468_);
lean_dec(v_t_5467_);
return v_res_5469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerSetupInfo(lean_object* v_self_5470_, lean_object* v_name_5471_, lean_object* v_moduleUri_5472_, lean_object* v_version_5473_, lean_object* v_directImports_5474_, uint8_t v_isSetupFailure_5475_){
_start:
{
lean_object* v___x_5477_; 
v___x_5477_ = l_Lean_Server_DirectImports_convertImportInfos(v_directImports_5474_);
if (lean_obj_tag(v___x_5477_) == 0)
{
lean_object* v_a_5478_; lean_object* v___x_5480_; uint8_t v_isShared_5481_; uint8_t v_isSharedCheck_5545_; 
v_a_5478_ = lean_ctor_get(v___x_5477_, 0);
v_isSharedCheck_5545_ = !lean_is_exclusive(v___x_5477_);
if (v_isSharedCheck_5545_ == 0)
{
v___x_5480_ = v___x_5477_;
v_isShared_5481_ = v_isSharedCheck_5545_;
goto v_resetjp_5479_;
}
else
{
lean_inc(v_a_5478_);
lean_dec(v___x_5477_);
v___x_5480_ = lean_box(0);
v_isShared_5481_ = v_isSharedCheck_5545_;
goto v_resetjp_5479_;
}
v_resetjp_5479_:
{
lean_object* v_ileans_5482_; lean_object* v_workers_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; 
v_ileans_5482_ = lean_ctor_get(v_self_5470_, 0);
v_workers_5483_ = lean_ctor_get(v_self_5470_, 1);
v___x_5484_ = lean_box(v_isSetupFailure_5475_);
v___x_5485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5485_, 0, v___x_5484_);
v___x_5486_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_workers_5483_, v_name_5471_);
if (lean_obj_tag(v___x_5486_) == 1)
{
lean_object* v_val_5487_; lean_object* v_version_5488_; lean_object* v_refs_5489_; lean_object* v_decls_5490_; lean_object* v___x_5492_; uint8_t v_isShared_5493_; uint8_t v_isSharedCheck_5526_; 
v_val_5487_ = lean_ctor_get(v___x_5486_, 0);
lean_inc(v_val_5487_);
lean_dec_ref_known(v___x_5486_, 1);
v_version_5488_ = lean_ctor_get(v_val_5487_, 1);
v_refs_5489_ = lean_ctor_get(v_val_5487_, 4);
v_decls_5490_ = lean_ctor_get(v_val_5487_, 5);
v_isSharedCheck_5526_ = !lean_is_exclusive(v_val_5487_);
if (v_isSharedCheck_5526_ == 0)
{
lean_object* v_unused_5527_; lean_object* v_unused_5528_; lean_object* v_unused_5529_; 
v_unused_5527_ = lean_ctor_get(v_val_5487_, 3);
lean_dec(v_unused_5527_);
v_unused_5528_ = lean_ctor_get(v_val_5487_, 2);
lean_dec(v_unused_5528_);
v_unused_5529_ = lean_ctor_get(v_val_5487_, 0);
lean_dec(v_unused_5529_);
v___x_5492_ = v_val_5487_;
v_isShared_5493_ = v_isSharedCheck_5526_;
goto v_resetjp_5491_;
}
else
{
lean_inc(v_decls_5490_);
lean_inc(v_refs_5489_);
lean_inc(v_version_5488_);
lean_dec(v_val_5487_);
v___x_5492_ = lean_box(0);
v_isShared_5493_ = v_isSharedCheck_5526_;
goto v_resetjp_5491_;
}
v_resetjp_5491_:
{
uint8_t v___x_5494_; 
v___x_5494_ = lean_nat_dec_lt(v_version_5473_, v_version_5488_);
if (v___x_5494_ == 0)
{
lean_object* v___x_5496_; uint8_t v_isShared_5497_; uint8_t v_isSharedCheck_5520_; 
lean_inc(v_workers_5483_);
lean_inc(v_ileans_5482_);
v_isSharedCheck_5520_ = !lean_is_exclusive(v_self_5470_);
if (v_isSharedCheck_5520_ == 0)
{
lean_object* v_unused_5521_; lean_object* v_unused_5522_; 
v_unused_5521_ = lean_ctor_get(v_self_5470_, 1);
lean_dec(v_unused_5521_);
v_unused_5522_ = lean_ctor_get(v_self_5470_, 0);
lean_dec(v_unused_5522_);
v___x_5496_ = v_self_5470_;
v_isShared_5497_ = v_isSharedCheck_5520_;
goto v_resetjp_5495_;
}
else
{
lean_dec(v_self_5470_);
v___x_5496_ = lean_box(0);
v_isShared_5497_ = v_isSharedCheck_5520_;
goto v_resetjp_5495_;
}
v_resetjp_5495_:
{
uint8_t v___x_5498_; 
v___x_5498_ = lean_nat_dec_eq(v_version_5473_, v_version_5488_);
lean_dec(v_version_5488_);
if (v___x_5498_ == 0)
{
lean_object* v___x_5499_; lean_object* v___x_5501_; 
lean_dec(v_decls_5490_);
lean_dec(v_refs_5489_);
v___x_5499_ = lean_box(1);
if (v_isShared_5493_ == 0)
{
lean_ctor_set(v___x_5492_, 5, v___x_5499_);
lean_ctor_set(v___x_5492_, 4, v___x_5499_);
lean_ctor_set(v___x_5492_, 3, v___x_5485_);
lean_ctor_set(v___x_5492_, 2, v_a_5478_);
lean_ctor_set(v___x_5492_, 1, v_version_5473_);
lean_ctor_set(v___x_5492_, 0, v_moduleUri_5472_);
v___x_5501_ = v___x_5492_;
goto v_reusejp_5500_;
}
else
{
lean_object* v_reuseFailAlloc_5509_; 
v_reuseFailAlloc_5509_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5509_, 0, v_moduleUri_5472_);
lean_ctor_set(v_reuseFailAlloc_5509_, 1, v_version_5473_);
lean_ctor_set(v_reuseFailAlloc_5509_, 2, v_a_5478_);
lean_ctor_set(v_reuseFailAlloc_5509_, 3, v___x_5485_);
lean_ctor_set(v_reuseFailAlloc_5509_, 4, v___x_5499_);
lean_ctor_set(v_reuseFailAlloc_5509_, 5, v___x_5499_);
v___x_5501_ = v_reuseFailAlloc_5509_;
goto v_reusejp_5500_;
}
v_reusejp_5500_:
{
lean_object* v___x_5502_; lean_object* v___x_5504_; 
v___x_5502_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_name_5471_, v___x_5501_, v_workers_5483_);
if (v_isShared_5497_ == 0)
{
lean_ctor_set(v___x_5496_, 1, v___x_5502_);
v___x_5504_ = v___x_5496_;
goto v_reusejp_5503_;
}
else
{
lean_object* v_reuseFailAlloc_5508_; 
v_reuseFailAlloc_5508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5508_, 0, v_ileans_5482_);
lean_ctor_set(v_reuseFailAlloc_5508_, 1, v___x_5502_);
v___x_5504_ = v_reuseFailAlloc_5508_;
goto v_reusejp_5503_;
}
v_reusejp_5503_:
{
lean_object* v___x_5506_; 
if (v_isShared_5481_ == 0)
{
lean_ctor_set(v___x_5480_, 0, v___x_5504_);
v___x_5506_ = v___x_5480_;
goto v_reusejp_5505_;
}
else
{
lean_object* v_reuseFailAlloc_5507_; 
v_reuseFailAlloc_5507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5507_, 0, v___x_5504_);
v___x_5506_ = v_reuseFailAlloc_5507_;
goto v_reusejp_5505_;
}
v_reusejp_5505_:
{
return v___x_5506_;
}
}
}
}
else
{
lean_object* v___x_5511_; 
if (v_isShared_5493_ == 0)
{
lean_ctor_set(v___x_5492_, 3, v___x_5485_);
lean_ctor_set(v___x_5492_, 2, v_a_5478_);
lean_ctor_set(v___x_5492_, 1, v_version_5473_);
lean_ctor_set(v___x_5492_, 0, v_moduleUri_5472_);
v___x_5511_ = v___x_5492_;
goto v_reusejp_5510_;
}
else
{
lean_object* v_reuseFailAlloc_5519_; 
v_reuseFailAlloc_5519_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5519_, 0, v_moduleUri_5472_);
lean_ctor_set(v_reuseFailAlloc_5519_, 1, v_version_5473_);
lean_ctor_set(v_reuseFailAlloc_5519_, 2, v_a_5478_);
lean_ctor_set(v_reuseFailAlloc_5519_, 3, v___x_5485_);
lean_ctor_set(v_reuseFailAlloc_5519_, 4, v_refs_5489_);
lean_ctor_set(v_reuseFailAlloc_5519_, 5, v_decls_5490_);
v___x_5511_ = v_reuseFailAlloc_5519_;
goto v_reusejp_5510_;
}
v_reusejp_5510_:
{
lean_object* v___x_5512_; lean_object* v___x_5514_; 
v___x_5512_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_name_5471_, v___x_5511_, v_workers_5483_);
if (v_isShared_5497_ == 0)
{
lean_ctor_set(v___x_5496_, 1, v___x_5512_);
v___x_5514_ = v___x_5496_;
goto v_reusejp_5513_;
}
else
{
lean_object* v_reuseFailAlloc_5518_; 
v_reuseFailAlloc_5518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5518_, 0, v_ileans_5482_);
lean_ctor_set(v_reuseFailAlloc_5518_, 1, v___x_5512_);
v___x_5514_ = v_reuseFailAlloc_5518_;
goto v_reusejp_5513_;
}
v_reusejp_5513_:
{
lean_object* v___x_5516_; 
if (v_isShared_5481_ == 0)
{
lean_ctor_set(v___x_5480_, 0, v___x_5514_);
v___x_5516_ = v___x_5480_;
goto v_reusejp_5515_;
}
else
{
lean_object* v_reuseFailAlloc_5517_; 
v_reuseFailAlloc_5517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5517_, 0, v___x_5514_);
v___x_5516_ = v_reuseFailAlloc_5517_;
goto v_reusejp_5515_;
}
v_reusejp_5515_:
{
return v___x_5516_;
}
}
}
}
}
}
else
{
lean_object* v___x_5524_; 
lean_del_object(v___x_5492_);
lean_dec(v_decls_5490_);
lean_dec(v_refs_5489_);
lean_dec(v_version_5488_);
lean_dec_ref_known(v___x_5485_, 1);
lean_dec(v_a_5478_);
lean_dec(v_version_5473_);
lean_dec_ref(v_moduleUri_5472_);
lean_dec(v_name_5471_);
if (v_isShared_5481_ == 0)
{
lean_ctor_set(v___x_5480_, 0, v_self_5470_);
v___x_5524_ = v___x_5480_;
goto v_reusejp_5523_;
}
else
{
lean_object* v_reuseFailAlloc_5525_; 
v_reuseFailAlloc_5525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5525_, 0, v_self_5470_);
v___x_5524_ = v_reuseFailAlloc_5525_;
goto v_reusejp_5523_;
}
v_reusejp_5523_:
{
return v___x_5524_;
}
}
}
}
else
{
lean_object* v___x_5531_; uint8_t v_isShared_5532_; uint8_t v_isSharedCheck_5542_; 
lean_inc(v_workers_5483_);
lean_inc(v_ileans_5482_);
lean_dec(v___x_5486_);
v_isSharedCheck_5542_ = !lean_is_exclusive(v_self_5470_);
if (v_isSharedCheck_5542_ == 0)
{
lean_object* v_unused_5543_; lean_object* v_unused_5544_; 
v_unused_5543_ = lean_ctor_get(v_self_5470_, 1);
lean_dec(v_unused_5543_);
v_unused_5544_ = lean_ctor_get(v_self_5470_, 0);
lean_dec(v_unused_5544_);
v___x_5531_ = v_self_5470_;
v_isShared_5532_ = v_isSharedCheck_5542_;
goto v_resetjp_5530_;
}
else
{
lean_dec(v_self_5470_);
v___x_5531_ = lean_box(0);
v_isShared_5532_ = v_isSharedCheck_5542_;
goto v_resetjp_5530_;
}
v_resetjp_5530_:
{
lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5537_; 
v___x_5533_ = lean_box(1);
v___x_5534_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5534_, 0, v_moduleUri_5472_);
lean_ctor_set(v___x_5534_, 1, v_version_5473_);
lean_ctor_set(v___x_5534_, 2, v_a_5478_);
lean_ctor_set(v___x_5534_, 3, v___x_5485_);
lean_ctor_set(v___x_5534_, 4, v___x_5533_);
lean_ctor_set(v___x_5534_, 5, v___x_5533_);
v___x_5535_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_name_5471_, v___x_5534_, v_workers_5483_);
if (v_isShared_5532_ == 0)
{
lean_ctor_set(v___x_5531_, 1, v___x_5535_);
v___x_5537_ = v___x_5531_;
goto v_reusejp_5536_;
}
else
{
lean_object* v_reuseFailAlloc_5541_; 
v_reuseFailAlloc_5541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5541_, 0, v_ileans_5482_);
lean_ctor_set(v_reuseFailAlloc_5541_, 1, v___x_5535_);
v___x_5537_ = v_reuseFailAlloc_5541_;
goto v_reusejp_5536_;
}
v_reusejp_5536_:
{
lean_object* v___x_5539_; 
if (v_isShared_5481_ == 0)
{
lean_ctor_set(v___x_5480_, 0, v___x_5537_);
v___x_5539_ = v___x_5480_;
goto v_reusejp_5538_;
}
else
{
lean_object* v_reuseFailAlloc_5540_; 
v_reuseFailAlloc_5540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5540_, 0, v___x_5537_);
v___x_5539_ = v_reuseFailAlloc_5540_;
goto v_reusejp_5538_;
}
v_reusejp_5538_:
{
return v___x_5539_;
}
}
}
}
}
}
else
{
lean_object* v_a_5546_; lean_object* v___x_5548_; uint8_t v_isShared_5549_; uint8_t v_isSharedCheck_5553_; 
lean_dec(v_version_5473_);
lean_dec_ref(v_moduleUri_5472_);
lean_dec(v_name_5471_);
lean_dec_ref(v_self_5470_);
v_a_5546_ = lean_ctor_get(v___x_5477_, 0);
v_isSharedCheck_5553_ = !lean_is_exclusive(v___x_5477_);
if (v_isSharedCheck_5553_ == 0)
{
v___x_5548_ = v___x_5477_;
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
else
{
lean_inc(v_a_5546_);
lean_dec(v___x_5477_);
v___x_5548_ = lean_box(0);
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
v_resetjp_5547_:
{
lean_object* v___x_5551_; 
if (v_isShared_5549_ == 0)
{
v___x_5551_ = v___x_5548_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v_a_5546_);
v___x_5551_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
return v___x_5551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerSetupInfo___boxed(lean_object* v_self_5554_, lean_object* v_name_5555_, lean_object* v_moduleUri_5556_, lean_object* v_version_5557_, lean_object* v_directImports_5558_, lean_object* v_isSetupFailure_5559_, lean_object* v___y_5560_){
_start:
{
uint8_t v_isSetupFailure_boxed_5561_; lean_object* v_res_5562_; 
v_isSetupFailure_boxed_5561_ = lean_unbox(v_isSetupFailure_5559_);
v_res_5562_ = l_Lean_Server_References_updateWorkerSetupInfo(v_self_5554_, v_name_5555_, v_moduleUri_5556_, v_version_5557_, v_directImports_5558_, v_isSetupFailure_boxed_5561_);
lean_dec_ref(v_directImports_5558_);
return v_res_5562_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0(lean_object* v_00_u03b4_5563_, lean_object* v_t_5564_, lean_object* v_k_5565_){
_start:
{
lean_object* v___x_5566_; 
v___x_5566_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_t_5564_, v_k_5565_);
return v___x_5566_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___boxed(lean_object* v_00_u03b4_5567_, lean_object* v_t_5568_, lean_object* v_k_5569_){
_start:
{
lean_object* v_res_5570_; 
v_res_5570_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0(v_00_u03b4_5567_, v_t_5568_, v_k_5569_);
lean_dec(v_k_5569_);
lean_dec(v_t_5568_);
return v_res_5570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___lam__0(lean_object* v_m_5571_, lean_object* v_ident_5572_, lean_object* v_info_5573_){
_start:
{
lean_object* v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; 
v___x_5574_ = ((lean_object*)(l_Lean_Lsp_RefInfo_empty));
v___x_5575_ = l_Lean_Lsp_ModuleRefs_getD(v_m_5571_, v_ident_5572_, v___x_5574_);
v___x_5576_ = l_Lean_Lsp_RefInfo_merge(v___x_5575_, v_info_5573_);
v___x_5577_ = l_Lean_Lsp_ModuleRefs_insert(v_m_5571_, v_ident_5572_, v___x_5576_);
return v___x_5577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs(lean_object* v_self_5579_, lean_object* v_name_5580_, lean_object* v_moduleUri_5581_, lean_object* v_version_5582_, lean_object* v_refs_5583_, lean_object* v_decls_5584_){
_start:
{
lean_object* v_ileans_5586_; lean_object* v_workers_5587_; lean_object* v___x_5588_; 
v_ileans_5586_ = lean_ctor_get(v_self_5579_, 0);
v_workers_5587_ = lean_ctor_get(v_self_5579_, 1);
v___x_5588_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_workers_5587_, v_name_5580_);
if (lean_obj_tag(v___x_5588_) == 1)
{
lean_object* v_val_5589_; lean_object* v___x_5591_; uint8_t v_isShared_5592_; uint8_t v_isSharedCheck_5637_; 
v_val_5589_ = lean_ctor_get(v___x_5588_, 0);
v_isSharedCheck_5637_ = !lean_is_exclusive(v___x_5588_);
if (v_isSharedCheck_5637_ == 0)
{
v___x_5591_ = v___x_5588_;
v_isShared_5592_ = v_isSharedCheck_5637_;
goto v_resetjp_5590_;
}
else
{
lean_inc(v_val_5589_);
lean_dec(v___x_5588_);
v___x_5591_ = lean_box(0);
v_isShared_5592_ = v_isSharedCheck_5637_;
goto v_resetjp_5590_;
}
v_resetjp_5590_:
{
lean_object* v_version_5593_; lean_object* v_directImports_5594_; lean_object* v_isSetupFailure_x3f_5595_; lean_object* v_refs_5596_; lean_object* v_decls_5597_; lean_object* v___x_5599_; uint8_t v_isShared_5600_; uint8_t v_isSharedCheck_5635_; 
v_version_5593_ = lean_ctor_get(v_val_5589_, 1);
v_directImports_5594_ = lean_ctor_get(v_val_5589_, 2);
v_isSetupFailure_x3f_5595_ = lean_ctor_get(v_val_5589_, 3);
v_refs_5596_ = lean_ctor_get(v_val_5589_, 4);
v_decls_5597_ = lean_ctor_get(v_val_5589_, 5);
v_isSharedCheck_5635_ = !lean_is_exclusive(v_val_5589_);
if (v_isSharedCheck_5635_ == 0)
{
lean_object* v_unused_5636_; 
v_unused_5636_ = lean_ctor_get(v_val_5589_, 0);
lean_dec(v_unused_5636_);
v___x_5599_ = v_val_5589_;
v_isShared_5600_ = v_isSharedCheck_5635_;
goto v_resetjp_5598_;
}
else
{
lean_inc(v_decls_5597_);
lean_inc(v_refs_5596_);
lean_inc(v_isSetupFailure_x3f_5595_);
lean_inc(v_directImports_5594_);
lean_inc(v_version_5593_);
lean_dec(v_val_5589_);
v___x_5599_ = lean_box(0);
v_isShared_5600_ = v_isSharedCheck_5635_;
goto v_resetjp_5598_;
}
v_resetjp_5598_:
{
uint8_t v___x_5601_; 
v___x_5601_ = lean_nat_dec_lt(v_version_5582_, v_version_5593_);
if (v___x_5601_ == 0)
{
lean_object* v___x_5603_; uint8_t v_isShared_5604_; uint8_t v_isSharedCheck_5629_; 
lean_inc(v_workers_5587_);
lean_inc(v_ileans_5586_);
v_isSharedCheck_5629_ = !lean_is_exclusive(v_self_5579_);
if (v_isSharedCheck_5629_ == 0)
{
lean_object* v_unused_5630_; lean_object* v_unused_5631_; 
v_unused_5630_ = lean_ctor_get(v_self_5579_, 1);
lean_dec(v_unused_5630_);
v_unused_5631_ = lean_ctor_get(v_self_5579_, 0);
lean_dec(v_unused_5631_);
v___x_5603_ = v_self_5579_;
v_isShared_5604_ = v_isSharedCheck_5629_;
goto v_resetjp_5602_;
}
else
{
lean_dec(v_self_5579_);
v___x_5603_ = lean_box(0);
v_isShared_5604_ = v_isSharedCheck_5629_;
goto v_resetjp_5602_;
}
v_resetjp_5602_:
{
uint8_t v___x_5605_; 
v___x_5605_ = lean_nat_dec_eq(v_version_5582_, v_version_5593_);
lean_dec(v_version_5593_);
if (v___x_5605_ == 0)
{
lean_object* v___x_5607_; 
lean_dec(v_decls_5597_);
lean_dec(v_refs_5596_);
if (v_isShared_5600_ == 0)
{
lean_ctor_set(v___x_5599_, 5, v_decls_5584_);
lean_ctor_set(v___x_5599_, 4, v_refs_5583_);
lean_ctor_set(v___x_5599_, 1, v_version_5582_);
lean_ctor_set(v___x_5599_, 0, v_moduleUri_5581_);
v___x_5607_ = v___x_5599_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v_moduleUri_5581_);
lean_ctor_set(v_reuseFailAlloc_5615_, 1, v_version_5582_);
lean_ctor_set(v_reuseFailAlloc_5615_, 2, v_directImports_5594_);
lean_ctor_set(v_reuseFailAlloc_5615_, 3, v_isSetupFailure_x3f_5595_);
lean_ctor_set(v_reuseFailAlloc_5615_, 4, v_refs_5583_);
lean_ctor_set(v_reuseFailAlloc_5615_, 5, v_decls_5584_);
v___x_5607_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
lean_object* v___x_5608_; lean_object* v___x_5610_; 
v___x_5608_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_name_5580_, v___x_5607_, v_workers_5587_);
if (v_isShared_5604_ == 0)
{
lean_ctor_set(v___x_5603_, 1, v___x_5608_);
v___x_5610_ = v___x_5603_;
goto v_reusejp_5609_;
}
else
{
lean_object* v_reuseFailAlloc_5614_; 
v_reuseFailAlloc_5614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5614_, 0, v_ileans_5586_);
lean_ctor_set(v_reuseFailAlloc_5614_, 1, v___x_5608_);
v___x_5610_ = v_reuseFailAlloc_5614_;
goto v_reusejp_5609_;
}
v_reusejp_5609_:
{
lean_object* v___x_5612_; 
if (v_isShared_5592_ == 0)
{
lean_ctor_set_tag(v___x_5591_, 0);
lean_ctor_set(v___x_5591_, 0, v___x_5610_);
v___x_5612_ = v___x_5591_;
goto v_reusejp_5611_;
}
else
{
lean_object* v_reuseFailAlloc_5613_; 
v_reuseFailAlloc_5613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5613_, 0, v___x_5610_);
v___x_5612_ = v_reuseFailAlloc_5613_;
goto v_reusejp_5611_;
}
v_reusejp_5611_:
{
return v___x_5612_;
}
}
}
}
else
{
lean_object* v___f_5616_; lean_object* v_mergedRefs_5617_; lean_object* v_mergedDecls_5618_; lean_object* v___x_5620_; 
v___f_5616_ = ((lean_object*)(l_Lean_Server_References_updateWorkerRefs___closed__0));
v_mergedRefs_5617_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Lsp_ModuleRefs_foldl_spec__0_spec__0___redArg(v___f_5616_, v_refs_5596_, v_refs_5583_);
v_mergedDecls_5618_ = l_Lean_Lsp_Decls_insertMany(v_decls_5597_, v_decls_5584_);
if (v_isShared_5600_ == 0)
{
lean_ctor_set(v___x_5599_, 5, v_mergedDecls_5618_);
lean_ctor_set(v___x_5599_, 4, v_mergedRefs_5617_);
lean_ctor_set(v___x_5599_, 1, v_version_5582_);
lean_ctor_set(v___x_5599_, 0, v_moduleUri_5581_);
v___x_5620_ = v___x_5599_;
goto v_reusejp_5619_;
}
else
{
lean_object* v_reuseFailAlloc_5628_; 
v_reuseFailAlloc_5628_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5628_, 0, v_moduleUri_5581_);
lean_ctor_set(v_reuseFailAlloc_5628_, 1, v_version_5582_);
lean_ctor_set(v_reuseFailAlloc_5628_, 2, v_directImports_5594_);
lean_ctor_set(v_reuseFailAlloc_5628_, 3, v_isSetupFailure_x3f_5595_);
lean_ctor_set(v_reuseFailAlloc_5628_, 4, v_mergedRefs_5617_);
lean_ctor_set(v_reuseFailAlloc_5628_, 5, v_mergedDecls_5618_);
v___x_5620_ = v_reuseFailAlloc_5628_;
goto v_reusejp_5619_;
}
v_reusejp_5619_:
{
lean_object* v___x_5621_; lean_object* v___x_5623_; 
v___x_5621_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_name_5580_, v___x_5620_, v_workers_5587_);
if (v_isShared_5604_ == 0)
{
lean_ctor_set(v___x_5603_, 1, v___x_5621_);
v___x_5623_ = v___x_5603_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5627_; 
v_reuseFailAlloc_5627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5627_, 0, v_ileans_5586_);
lean_ctor_set(v_reuseFailAlloc_5627_, 1, v___x_5621_);
v___x_5623_ = v_reuseFailAlloc_5627_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
lean_object* v___x_5625_; 
if (v_isShared_5592_ == 0)
{
lean_ctor_set_tag(v___x_5591_, 0);
lean_ctor_set(v___x_5591_, 0, v___x_5623_);
v___x_5625_ = v___x_5591_;
goto v_reusejp_5624_;
}
else
{
lean_object* v_reuseFailAlloc_5626_; 
v_reuseFailAlloc_5626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5626_, 0, v___x_5623_);
v___x_5625_ = v_reuseFailAlloc_5626_;
goto v_reusejp_5624_;
}
v_reusejp_5624_:
{
return v___x_5625_;
}
}
}
}
}
}
else
{
lean_object* v___x_5633_; 
lean_del_object(v___x_5599_);
lean_dec(v_decls_5597_);
lean_dec(v_refs_5596_);
lean_dec(v_isSetupFailure_x3f_5595_);
lean_dec_ref(v_directImports_5594_);
lean_dec(v_version_5593_);
lean_dec(v_decls_5584_);
lean_dec(v_refs_5583_);
lean_dec(v_version_5582_);
lean_dec_ref(v_moduleUri_5581_);
lean_dec(v_name_5580_);
if (v_isShared_5592_ == 0)
{
lean_ctor_set_tag(v___x_5591_, 0);
lean_ctor_set(v___x_5591_, 0, v_self_5579_);
v___x_5633_ = v___x_5591_;
goto v_reusejp_5632_;
}
else
{
lean_object* v_reuseFailAlloc_5634_; 
v_reuseFailAlloc_5634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5634_, 0, v_self_5579_);
v___x_5633_ = v_reuseFailAlloc_5634_;
goto v_reusejp_5632_;
}
v_reusejp_5632_:
{
return v___x_5633_;
}
}
}
}
}
else
{
lean_object* v___x_5639_; uint8_t v_isShared_5640_; uint8_t v_isSharedCheck_5649_; 
lean_inc(v_workers_5587_);
lean_inc(v_ileans_5586_);
lean_dec(v___x_5588_);
v_isSharedCheck_5649_ = !lean_is_exclusive(v_self_5579_);
if (v_isSharedCheck_5649_ == 0)
{
lean_object* v_unused_5650_; lean_object* v_unused_5651_; 
v_unused_5650_ = lean_ctor_get(v_self_5579_, 1);
lean_dec(v_unused_5650_);
v_unused_5651_ = lean_ctor_get(v_self_5579_, 0);
lean_dec(v_unused_5651_);
v___x_5639_ = v_self_5579_;
v_isShared_5640_ = v_isSharedCheck_5649_;
goto v_resetjp_5638_;
}
else
{
lean_dec(v_self_5579_);
v___x_5639_ = lean_box(0);
v_isShared_5640_ = v_isSharedCheck_5649_;
goto v_resetjp_5638_;
}
v_resetjp_5638_:
{
lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5646_; 
v___x_5641_ = ((lean_object*)(l_Lean_Server_instEmptyCollectionDirectImports___closed__1));
v___x_5642_ = lean_box(0);
v___x_5643_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5643_, 0, v_moduleUri_5581_);
lean_ctor_set(v___x_5643_, 1, v_version_5582_);
lean_ctor_set(v___x_5643_, 2, v___x_5641_);
lean_ctor_set(v___x_5643_, 3, v___x_5642_);
lean_ctor_set(v___x_5643_, 4, v_refs_5583_);
lean_ctor_set(v___x_5643_, 5, v_decls_5584_);
v___x_5644_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_name_5580_, v___x_5643_, v_workers_5587_);
if (v_isShared_5640_ == 0)
{
lean_ctor_set(v___x_5639_, 1, v___x_5644_);
v___x_5646_ = v___x_5639_;
goto v_reusejp_5645_;
}
else
{
lean_object* v_reuseFailAlloc_5648_; 
v_reuseFailAlloc_5648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5648_, 0, v_ileans_5586_);
lean_ctor_set(v_reuseFailAlloc_5648_, 1, v___x_5644_);
v___x_5646_ = v_reuseFailAlloc_5648_;
goto v_reusejp_5645_;
}
v_reusejp_5645_:
{
lean_object* v___x_5647_; 
v___x_5647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5647_, 0, v___x_5646_);
return v___x_5647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_updateWorkerRefs___boxed(lean_object* v_self_5652_, lean_object* v_name_5653_, lean_object* v_moduleUri_5654_, lean_object* v_version_5655_, lean_object* v_refs_5656_, lean_object* v_decls_5657_, lean_object* v___y_5658_){
_start:
{
lean_object* v_res_5659_; 
v_res_5659_ = l_Lean_Server_References_updateWorkerRefs(v_self_5652_, v_name_5653_, v_moduleUri_5654_, v_version_5655_, v_refs_5656_, v_decls_5657_);
return v_res_5659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs(lean_object* v_self_5660_, lean_object* v_name_5661_, lean_object* v_moduleUri_5662_, lean_object* v_version_5663_, lean_object* v_refs_5664_, lean_object* v_decls_5665_){
_start:
{
lean_object* v_ileans_5667_; lean_object* v_workers_5668_; lean_object* v___x_5669_; 
v_ileans_5667_ = lean_ctor_get(v_self_5660_, 0);
v_workers_5668_ = lean_ctor_get(v_self_5660_, 1);
v___x_5669_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_workers_5668_, v_name_5661_);
if (lean_obj_tag(v___x_5669_) == 1)
{
lean_object* v_val_5670_; lean_object* v___x_5672_; uint8_t v_isShared_5673_; uint8_t v_isSharedCheck_5704_; 
v_val_5670_ = lean_ctor_get(v___x_5669_, 0);
v_isSharedCheck_5704_ = !lean_is_exclusive(v___x_5669_);
if (v_isSharedCheck_5704_ == 0)
{
v___x_5672_ = v___x_5669_;
v_isShared_5673_ = v_isSharedCheck_5704_;
goto v_resetjp_5671_;
}
else
{
lean_inc(v_val_5670_);
lean_dec(v___x_5669_);
v___x_5672_ = lean_box(0);
v_isShared_5673_ = v_isSharedCheck_5704_;
goto v_resetjp_5671_;
}
v_resetjp_5671_:
{
lean_object* v_version_5674_; lean_object* v_directImports_5675_; lean_object* v_isSetupFailure_x3f_5676_; lean_object* v___x_5678_; uint8_t v_isShared_5679_; uint8_t v_isSharedCheck_5700_; 
v_version_5674_ = lean_ctor_get(v_val_5670_, 1);
v_directImports_5675_ = lean_ctor_get(v_val_5670_, 2);
v_isSetupFailure_x3f_5676_ = lean_ctor_get(v_val_5670_, 3);
v_isSharedCheck_5700_ = !lean_is_exclusive(v_val_5670_);
if (v_isSharedCheck_5700_ == 0)
{
lean_object* v_unused_5701_; lean_object* v_unused_5702_; lean_object* v_unused_5703_; 
v_unused_5701_ = lean_ctor_get(v_val_5670_, 5);
lean_dec(v_unused_5701_);
v_unused_5702_ = lean_ctor_get(v_val_5670_, 4);
lean_dec(v_unused_5702_);
v_unused_5703_ = lean_ctor_get(v_val_5670_, 0);
lean_dec(v_unused_5703_);
v___x_5678_ = v_val_5670_;
v_isShared_5679_ = v_isSharedCheck_5700_;
goto v_resetjp_5677_;
}
else
{
lean_inc(v_isSetupFailure_x3f_5676_);
lean_inc(v_directImports_5675_);
lean_inc(v_version_5674_);
lean_dec(v_val_5670_);
v___x_5678_ = lean_box(0);
v_isShared_5679_ = v_isSharedCheck_5700_;
goto v_resetjp_5677_;
}
v_resetjp_5677_:
{
uint8_t v___x_5680_; 
v___x_5680_ = lean_nat_dec_lt(v_version_5663_, v_version_5674_);
lean_dec(v_version_5674_);
if (v___x_5680_ == 0)
{
lean_object* v___x_5682_; uint8_t v_isShared_5683_; uint8_t v_isSharedCheck_5694_; 
lean_inc(v_workers_5668_);
lean_inc(v_ileans_5667_);
v_isSharedCheck_5694_ = !lean_is_exclusive(v_self_5660_);
if (v_isSharedCheck_5694_ == 0)
{
lean_object* v_unused_5695_; lean_object* v_unused_5696_; 
v_unused_5695_ = lean_ctor_get(v_self_5660_, 1);
lean_dec(v_unused_5695_);
v_unused_5696_ = lean_ctor_get(v_self_5660_, 0);
lean_dec(v_unused_5696_);
v___x_5682_ = v_self_5660_;
v_isShared_5683_ = v_isSharedCheck_5694_;
goto v_resetjp_5681_;
}
else
{
lean_dec(v_self_5660_);
v___x_5682_ = lean_box(0);
v_isShared_5683_ = v_isSharedCheck_5694_;
goto v_resetjp_5681_;
}
v_resetjp_5681_:
{
lean_object* v___x_5685_; 
if (v_isShared_5679_ == 0)
{
lean_ctor_set(v___x_5678_, 5, v_decls_5665_);
lean_ctor_set(v___x_5678_, 4, v_refs_5664_);
lean_ctor_set(v___x_5678_, 1, v_version_5663_);
lean_ctor_set(v___x_5678_, 0, v_moduleUri_5662_);
v___x_5685_ = v___x_5678_;
goto v_reusejp_5684_;
}
else
{
lean_object* v_reuseFailAlloc_5693_; 
v_reuseFailAlloc_5693_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5693_, 0, v_moduleUri_5662_);
lean_ctor_set(v_reuseFailAlloc_5693_, 1, v_version_5663_);
lean_ctor_set(v_reuseFailAlloc_5693_, 2, v_directImports_5675_);
lean_ctor_set(v_reuseFailAlloc_5693_, 3, v_isSetupFailure_x3f_5676_);
lean_ctor_set(v_reuseFailAlloc_5693_, 4, v_refs_5664_);
lean_ctor_set(v_reuseFailAlloc_5693_, 5, v_decls_5665_);
v___x_5685_ = v_reuseFailAlloc_5693_;
goto v_reusejp_5684_;
}
v_reusejp_5684_:
{
lean_object* v___x_5686_; lean_object* v___x_5688_; 
v___x_5686_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_name_5661_, v___x_5685_, v_workers_5668_);
if (v_isShared_5683_ == 0)
{
lean_ctor_set(v___x_5682_, 1, v___x_5686_);
v___x_5688_ = v___x_5682_;
goto v_reusejp_5687_;
}
else
{
lean_object* v_reuseFailAlloc_5692_; 
v_reuseFailAlloc_5692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5692_, 0, v_ileans_5667_);
lean_ctor_set(v_reuseFailAlloc_5692_, 1, v___x_5686_);
v___x_5688_ = v_reuseFailAlloc_5692_;
goto v_reusejp_5687_;
}
v_reusejp_5687_:
{
lean_object* v___x_5690_; 
if (v_isShared_5673_ == 0)
{
lean_ctor_set_tag(v___x_5672_, 0);
lean_ctor_set(v___x_5672_, 0, v___x_5688_);
v___x_5690_ = v___x_5672_;
goto v_reusejp_5689_;
}
else
{
lean_object* v_reuseFailAlloc_5691_; 
v_reuseFailAlloc_5691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5691_, 0, v___x_5688_);
v___x_5690_ = v_reuseFailAlloc_5691_;
goto v_reusejp_5689_;
}
v_reusejp_5689_:
{
return v___x_5690_;
}
}
}
}
}
else
{
lean_object* v___x_5698_; 
lean_del_object(v___x_5678_);
lean_dec(v_isSetupFailure_x3f_5676_);
lean_dec_ref(v_directImports_5675_);
lean_dec(v_decls_5665_);
lean_dec(v_refs_5664_);
lean_dec(v_version_5663_);
lean_dec_ref(v_moduleUri_5662_);
lean_dec(v_name_5661_);
if (v_isShared_5673_ == 0)
{
lean_ctor_set_tag(v___x_5672_, 0);
lean_ctor_set(v___x_5672_, 0, v_self_5660_);
v___x_5698_ = v___x_5672_;
goto v_reusejp_5697_;
}
else
{
lean_object* v_reuseFailAlloc_5699_; 
v_reuseFailAlloc_5699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5699_, 0, v_self_5660_);
v___x_5698_ = v_reuseFailAlloc_5699_;
goto v_reusejp_5697_;
}
v_reusejp_5697_:
{
return v___x_5698_;
}
}
}
}
}
else
{
lean_object* v___x_5706_; uint8_t v_isShared_5707_; uint8_t v_isSharedCheck_5716_; 
lean_inc(v_workers_5668_);
lean_inc(v_ileans_5667_);
lean_dec(v___x_5669_);
v_isSharedCheck_5716_ = !lean_is_exclusive(v_self_5660_);
if (v_isSharedCheck_5716_ == 0)
{
lean_object* v_unused_5717_; lean_object* v_unused_5718_; 
v_unused_5717_ = lean_ctor_get(v_self_5660_, 1);
lean_dec(v_unused_5717_);
v_unused_5718_ = lean_ctor_get(v_self_5660_, 0);
lean_dec(v_unused_5718_);
v___x_5706_ = v_self_5660_;
v_isShared_5707_ = v_isSharedCheck_5716_;
goto v_resetjp_5705_;
}
else
{
lean_dec(v_self_5660_);
v___x_5706_ = lean_box(0);
v_isShared_5707_ = v_isSharedCheck_5716_;
goto v_resetjp_5705_;
}
v_resetjp_5705_:
{
lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5713_; 
v___x_5708_ = ((lean_object*)(l_Lean_Server_instEmptyCollectionDirectImports___closed__1));
v___x_5709_ = lean_box(0);
v___x_5710_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5710_, 0, v_moduleUri_5662_);
lean_ctor_set(v___x_5710_, 1, v_version_5663_);
lean_ctor_set(v___x_5710_, 2, v___x_5708_);
lean_ctor_set(v___x_5710_, 3, v___x_5709_);
lean_ctor_set(v___x_5710_, 4, v_refs_5664_);
lean_ctor_set(v___x_5710_, 5, v_decls_5665_);
v___x_5711_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_name_5661_, v___x_5710_, v_workers_5668_);
if (v_isShared_5707_ == 0)
{
lean_ctor_set(v___x_5706_, 1, v___x_5711_);
v___x_5713_ = v___x_5706_;
goto v_reusejp_5712_;
}
else
{
lean_object* v_reuseFailAlloc_5715_; 
v_reuseFailAlloc_5715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5715_, 0, v_ileans_5667_);
lean_ctor_set(v_reuseFailAlloc_5715_, 1, v___x_5711_);
v___x_5713_ = v_reuseFailAlloc_5715_;
goto v_reusejp_5712_;
}
v_reusejp_5712_:
{
lean_object* v___x_5714_; 
v___x_5714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5714_, 0, v___x_5713_);
return v___x_5714_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_finalizeWorkerRefs___boxed(lean_object* v_self_5719_, lean_object* v_name_5720_, lean_object* v_moduleUri_5721_, lean_object* v_version_5722_, lean_object* v_refs_5723_, lean_object* v_decls_5724_, lean_object* v___y_5725_){
_start:
{
lean_object* v_res_5726_; 
v_res_5726_ = l_Lean_Server_References_finalizeWorkerRefs(v_self_5719_, v_name_5720_, v_moduleUri_5721_, v_version_5722_, v_refs_5723_, v_decls_5724_);
return v_res_5726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_removeWorkerRefs(lean_object* v_self_5727_, lean_object* v_name_5728_){
_start:
{
lean_object* v_ileans_5729_; lean_object* v_workers_5730_; lean_object* v___x_5732_; uint8_t v_isShared_5733_; uint8_t v_isSharedCheck_5738_; 
v_ileans_5729_ = lean_ctor_get(v_self_5727_, 0);
v_workers_5730_ = lean_ctor_get(v_self_5727_, 1);
v_isSharedCheck_5738_ = !lean_is_exclusive(v_self_5727_);
if (v_isSharedCheck_5738_ == 0)
{
v___x_5732_ = v_self_5727_;
v_isShared_5733_ = v_isSharedCheck_5738_;
goto v_resetjp_5731_;
}
else
{
lean_inc(v_workers_5730_);
lean_inc(v_ileans_5729_);
lean_dec(v_self_5727_);
v___x_5732_ = lean_box(0);
v_isShared_5733_ = v_isSharedCheck_5738_;
goto v_resetjp_5731_;
}
v_resetjp_5731_:
{
lean_object* v___x_5734_; lean_object* v___x_5736_; 
v___x_5734_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Server_References_removeIlean_spec__0___redArg(v_name_5728_, v_workers_5730_);
if (v_isShared_5733_ == 0)
{
lean_ctor_set(v___x_5732_, 1, v___x_5734_);
v___x_5736_ = v___x_5732_;
goto v_reusejp_5735_;
}
else
{
lean_object* v_reuseFailAlloc_5737_; 
v_reuseFailAlloc_5737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5737_, 0, v_ileans_5729_);
lean_ctor_set(v_reuseFailAlloc_5737_, 1, v___x_5734_);
v___x_5736_ = v_reuseFailAlloc_5737_;
goto v_reusejp_5735_;
}
v_reusejp_5735_:
{
return v___x_5736_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_removeWorkerRefs___boxed(lean_object* v_self_5739_, lean_object* v_name_5740_){
_start:
{
lean_object* v_res_5741_; 
v_res_5741_ = l_Lean_Server_References_removeWorkerRefs(v_self_5739_, v_name_5740_);
lean_dec(v_name_5740_);
return v_res_5741_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__0_spec__0(lean_object* v_init_5742_, lean_object* v_x_5743_){
_start:
{
if (lean_obj_tag(v_x_5743_) == 0)
{
lean_object* v_v_5744_; lean_object* v_k_5745_; lean_object* v_l_5746_; lean_object* v_r_5747_; lean_object* v_moduleUri_5748_; lean_object* v_refs_5749_; lean_object* v_decls_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; 
v_v_5744_ = lean_ctor_get(v_x_5743_, 2);
lean_inc(v_v_5744_);
v_k_5745_ = lean_ctor_get(v_x_5743_, 1);
lean_inc(v_k_5745_);
v_l_5746_ = lean_ctor_get(v_x_5743_, 3);
lean_inc(v_l_5746_);
v_r_5747_ = lean_ctor_get(v_x_5743_, 4);
lean_inc(v_r_5747_);
lean_dec_ref_known(v_x_5743_, 5);
v_moduleUri_5748_ = lean_ctor_get(v_v_5744_, 0);
lean_inc_ref(v_moduleUri_5748_);
v_refs_5749_ = lean_ctor_get(v_v_5744_, 3);
lean_inc(v_refs_5749_);
v_decls_5750_ = lean_ctor_get(v_v_5744_, 4);
lean_inc(v_decls_5750_);
lean_dec(v_v_5744_);
v___x_5751_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__0_spec__0(v_init_5742_, v_l_5746_);
v___x_5752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5752_, 0, v_refs_5749_);
lean_ctor_set(v___x_5752_, 1, v_decls_5750_);
v___x_5753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5753_, 0, v_moduleUri_5748_);
lean_ctor_set(v___x_5753_, 1, v___x_5752_);
v___x_5754_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_k_5745_, v___x_5753_, v___x_5751_);
v_init_5742_ = v___x_5754_;
v_x_5743_ = v_r_5747_;
goto _start;
}
else
{
return v_init_5742_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__1_spec__2(lean_object* v_init_5756_, lean_object* v_x_5757_){
_start:
{
if (lean_obj_tag(v_x_5757_) == 0)
{
lean_object* v_v_5758_; lean_object* v_k_5759_; lean_object* v_l_5760_; lean_object* v_r_5761_; lean_object* v_moduleUri_5762_; lean_object* v_refs_5763_; lean_object* v_decls_5764_; lean_object* v___x_5765_; uint8_t v___x_5766_; 
v_v_5758_ = lean_ctor_get(v_x_5757_, 2);
lean_inc(v_v_5758_);
v_k_5759_ = lean_ctor_get(v_x_5757_, 1);
lean_inc(v_k_5759_);
v_l_5760_ = lean_ctor_get(v_x_5757_, 3);
lean_inc(v_l_5760_);
v_r_5761_ = lean_ctor_get(v_x_5757_, 4);
lean_inc(v_r_5761_);
lean_dec_ref_known(v_x_5757_, 5);
v_moduleUri_5762_ = lean_ctor_get(v_v_5758_, 0);
lean_inc_ref(v_moduleUri_5762_);
v_refs_5763_ = lean_ctor_get(v_v_5758_, 4);
lean_inc(v_refs_5763_);
v_decls_5764_ = lean_ctor_get(v_v_5758_, 5);
lean_inc(v_decls_5764_);
v___x_5765_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__1_spec__2(v_init_5756_, v_l_5760_);
v___x_5766_ = l_Lean_Server_TransientWorkerILean_hasRefs(v_v_5758_);
lean_dec(v_v_5758_);
if (v___x_5766_ == 0)
{
lean_dec(v_decls_5764_);
lean_dec(v_refs_5763_);
lean_dec_ref(v_moduleUri_5762_);
lean_dec(v_k_5759_);
v_init_5756_ = v___x_5765_;
v_x_5757_ = v_r_5761_;
goto _start;
}
else
{
lean_object* v___x_5768_; lean_object* v___x_5769_; lean_object* v___x_5770_; 
v___x_5768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5768_, 0, v_refs_5763_);
lean_ctor_set(v___x_5768_, 1, v_decls_5764_);
v___x_5769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5769_, 0, v_moduleUri_5762_);
lean_ctor_set(v___x_5769_, 1, v___x_5768_);
v___x_5770_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_k_5759_, v___x_5769_, v___x_5765_);
v_init_5756_ = v___x_5770_;
v_x_5757_ = v_r_5761_;
goto _start;
}
}
else
{
return v_init_5756_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_allRefs(lean_object* v_self_5772_){
_start:
{
lean_object* v_ileans_5773_; lean_object* v_workers_5774_; lean_object* v___x_5775_; lean_object* v_ileanRefs_5776_; lean_object* v___x_5777_; 
v_ileans_5773_ = lean_ctor_get(v_self_5772_, 0);
lean_inc(v_ileans_5773_);
v_workers_5774_ = lean_ctor_get(v_self_5772_, 1);
lean_inc(v_workers_5774_);
lean_dec_ref(v_self_5772_);
v___x_5775_ = lean_box(1);
v_ileanRefs_5776_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__0_spec__0(v___x_5775_, v_ileans_5773_);
v___x_5777_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__1_spec__2(v_ileanRefs_5776_, v_workers_5774_);
return v___x_5777_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__0(lean_object* v_init_5778_, lean_object* v_t_5779_){
_start:
{
lean_object* v___x_5780_; 
v___x_5780_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__0_spec__0(v_init_5778_, v_t_5779_);
return v___x_5780_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__1(lean_object* v_init_5781_, lean_object* v_t_5782_){
_start:
{
lean_object* v___x_5783_; 
v___x_5783_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefs_spec__1_spec__2(v_init_5781_, v_t_5782_);
return v___x_5783_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_allDirectImports_spec__0(lean_object* v_init_5784_, lean_object* v_x_5785_){
_start:
{
if (lean_obj_tag(v_x_5785_) == 0)
{
lean_object* v_k_5786_; lean_object* v_v_5787_; lean_object* v_l_5788_; lean_object* v_r_5789_; lean_object* v___x_5790_; lean_object* v_a_5791_; uint8_t v___x_5792_; 
v_k_5786_ = lean_ctor_get(v_x_5785_, 1);
lean_inc(v_k_5786_);
v_v_5787_ = lean_ctor_get(v_x_5785_, 2);
lean_inc(v_v_5787_);
v_l_5788_ = lean_ctor_get(v_x_5785_, 3);
lean_inc(v_l_5788_);
v_r_5789_ = lean_ctor_get(v_x_5785_, 4);
lean_inc(v_r_5789_);
lean_dec_ref_known(v_x_5785_, 5);
v___x_5790_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_allDirectImports_spec__0(v_init_5784_, v_l_5788_);
v_a_5791_ = lean_ctor_get(v___x_5790_, 0);
lean_inc(v_a_5791_);
v___x_5792_ = l_Lean_Server_TransientWorkerILean_hasRefs(v_v_5787_);
if (v___x_5792_ == 0)
{
lean_object* v_a_5793_; 
lean_dec(v_a_5791_);
lean_dec(v_v_5787_);
lean_dec(v_k_5786_);
v_a_5793_ = lean_ctor_get(v___x_5790_, 0);
lean_inc(v_a_5793_);
lean_dec_ref(v___x_5790_);
v_init_5784_ = v_a_5793_;
v_x_5785_ = v_r_5789_;
goto _start;
}
else
{
lean_object* v_moduleUri_5795_; lean_object* v_directImports_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; 
lean_dec_ref(v___x_5790_);
v_moduleUri_5795_ = lean_ctor_get(v_v_5787_, 0);
lean_inc_ref(v_moduleUri_5795_);
v_directImports_5796_ = lean_ctor_get(v_v_5787_, 2);
lean_inc_ref(v_directImports_5796_);
lean_dec(v_v_5787_);
v___x_5797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5797_, 0, v_moduleUri_5795_);
lean_ctor_set(v___x_5797_, 1, v_directImports_5796_);
v___x_5798_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_k_5786_, v___x_5797_, v_a_5791_);
v_init_5784_ = v___x_5798_;
v_x_5785_ = v_r_5789_;
goto _start;
}
}
else
{
lean_object* v___x_5800_; 
v___x_5800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5800_, 0, v_init_5784_);
return v___x_5800_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_allDirectImports_spec__1(lean_object* v_init_5801_, lean_object* v_x_5802_){
_start:
{
if (lean_obj_tag(v_x_5802_) == 0)
{
lean_object* v_k_5803_; lean_object* v_v_5804_; lean_object* v_l_5805_; lean_object* v_r_5806_; lean_object* v___x_5807_; lean_object* v_a_5808_; lean_object* v_moduleUri_5809_; lean_object* v_directImports_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; 
v_k_5803_ = lean_ctor_get(v_x_5802_, 1);
lean_inc(v_k_5803_);
v_v_5804_ = lean_ctor_get(v_x_5802_, 2);
lean_inc(v_v_5804_);
v_l_5805_ = lean_ctor_get(v_x_5802_, 3);
lean_inc(v_l_5805_);
v_r_5806_ = lean_ctor_get(v_x_5802_, 4);
lean_inc(v_r_5806_);
lean_dec_ref_known(v_x_5802_, 5);
v___x_5807_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_allDirectImports_spec__1(v_init_5801_, v_l_5805_);
v_a_5808_ = lean_ctor_get(v___x_5807_, 0);
lean_inc(v_a_5808_);
lean_dec_ref(v___x_5807_);
v_moduleUri_5809_ = lean_ctor_get(v_v_5804_, 0);
lean_inc_ref(v_moduleUri_5809_);
v_directImports_5810_ = lean_ctor_get(v_v_5804_, 2);
lean_inc_ref(v_directImports_5810_);
lean_dec(v_v_5804_);
v___x_5811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5811_, 0, v_moduleUri_5809_);
lean_ctor_set(v___x_5811_, 1, v_directImports_5810_);
v___x_5812_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_DirectImports_convertImportInfos_spec__1___redArg(v_k_5803_, v___x_5811_, v_a_5808_);
v_init_5801_ = v___x_5812_;
v_x_5802_ = v_r_5806_;
goto _start;
}
else
{
lean_object* v___x_5814_; 
v___x_5814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5814_, 0, v_init_5801_);
return v___x_5814_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_allDirectImports(lean_object* v_self_5815_){
_start:
{
lean_object* v_ileans_5816_; lean_object* v_workers_5817_; lean_object* v___y_5819_; lean_object* v_allDirectImports_5822_; lean_object* v___x_5823_; lean_object* v_a_5824_; 
v_ileans_5816_ = lean_ctor_get(v_self_5815_, 0);
lean_inc(v_ileans_5816_);
v_workers_5817_ = lean_ctor_get(v_self_5815_, 1);
lean_inc(v_workers_5817_);
lean_dec_ref(v_self_5815_);
v_allDirectImports_5822_ = lean_box(1);
v___x_5823_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_allDirectImports_spec__1(v_allDirectImports_5822_, v_ileans_5816_);
v_a_5824_ = lean_ctor_get(v___x_5823_, 0);
lean_inc(v_a_5824_);
lean_dec_ref(v___x_5823_);
v___y_5819_ = v_a_5824_;
goto v___jp_5818_;
v___jp_5818_:
{
lean_object* v___x_5820_; lean_object* v_a_5821_; 
v___x_5820_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_allDirectImports_spec__0(v___y_5819_, v_workers_5817_);
v_a_5821_ = lean_ctor_get(v___x_5820_, 0);
lean_inc(v_a_5821_);
lean_dec_ref(v___x_5820_);
return v_a_5821_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_getModuleRefs_x3f(lean_object* v_self_5825_, lean_object* v_mod_5826_){
_start:
{
lean_object* v_ileans_5827_; lean_object* v_workers_5828_; lean_object* v___x_5830_; uint8_t v_isShared_5831_; uint8_t v_isSharedCheck_5865_; 
v_ileans_5827_ = lean_ctor_get(v_self_5825_, 0);
v_workers_5828_ = lean_ctor_get(v_self_5825_, 1);
v_isSharedCheck_5865_ = !lean_is_exclusive(v_self_5825_);
if (v_isSharedCheck_5865_ == 0)
{
v___x_5830_ = v_self_5825_;
v_isShared_5831_ = v_isSharedCheck_5865_;
goto v_resetjp_5829_;
}
else
{
lean_inc(v_workers_5828_);
lean_inc(v_ileans_5827_);
lean_dec(v_self_5825_);
v___x_5830_ = lean_box(0);
v_isShared_5831_ = v_isSharedCheck_5865_;
goto v_resetjp_5829_;
}
v_resetjp_5829_:
{
lean_object* v___x_5850_; 
v___x_5850_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_workers_5828_, v_mod_5826_);
lean_dec(v_workers_5828_);
if (lean_obj_tag(v___x_5850_) == 1)
{
lean_object* v_val_5851_; lean_object* v___x_5853_; uint8_t v_isShared_5854_; uint8_t v_isSharedCheck_5864_; 
v_val_5851_ = lean_ctor_get(v___x_5850_, 0);
v_isSharedCheck_5864_ = !lean_is_exclusive(v___x_5850_);
if (v_isSharedCheck_5864_ == 0)
{
v___x_5853_ = v___x_5850_;
v_isShared_5854_ = v_isSharedCheck_5864_;
goto v_resetjp_5852_;
}
else
{
lean_inc(v_val_5851_);
lean_dec(v___x_5850_);
v___x_5853_ = lean_box(0);
v_isShared_5854_ = v_isSharedCheck_5864_;
goto v_resetjp_5852_;
}
v_resetjp_5852_:
{
uint8_t v___x_5855_; 
v___x_5855_ = l_Lean_Server_TransientWorkerILean_hasRefs(v_val_5851_);
if (v___x_5855_ == 0)
{
lean_del_object(v___x_5853_);
lean_dec(v_val_5851_);
goto v___jp_5832_;
}
else
{
lean_object* v_moduleUri_5856_; lean_object* v_refs_5857_; lean_object* v_decls_5858_; lean_object* v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5862_; 
lean_del_object(v___x_5830_);
lean_dec(v_ileans_5827_);
v_moduleUri_5856_ = lean_ctor_get(v_val_5851_, 0);
lean_inc_ref(v_moduleUri_5856_);
v_refs_5857_ = lean_ctor_get(v_val_5851_, 4);
lean_inc(v_refs_5857_);
v_decls_5858_ = lean_ctor_get(v_val_5851_, 5);
lean_inc(v_decls_5858_);
lean_dec(v_val_5851_);
v___x_5859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5859_, 0, v_refs_5857_);
lean_ctor_set(v___x_5859_, 1, v_decls_5858_);
v___x_5860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5860_, 0, v_moduleUri_5856_);
lean_ctor_set(v___x_5860_, 1, v___x_5859_);
if (v_isShared_5854_ == 0)
{
lean_ctor_set(v___x_5853_, 0, v___x_5860_);
v___x_5862_ = v___x_5853_;
goto v_reusejp_5861_;
}
else
{
lean_object* v_reuseFailAlloc_5863_; 
v_reuseFailAlloc_5863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5863_, 0, v___x_5860_);
v___x_5862_ = v_reuseFailAlloc_5863_;
goto v_reusejp_5861_;
}
v_reusejp_5861_:
{
return v___x_5862_;
}
}
}
}
else
{
lean_dec(v___x_5850_);
goto v___jp_5832_;
}
v___jp_5832_:
{
lean_object* v___x_5833_; 
v___x_5833_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_ileans_5827_, v_mod_5826_);
lean_dec(v_ileans_5827_);
if (lean_obj_tag(v___x_5833_) == 1)
{
lean_object* v_val_5834_; lean_object* v___x_5836_; uint8_t v_isShared_5837_; uint8_t v_isSharedCheck_5848_; 
v_val_5834_ = lean_ctor_get(v___x_5833_, 0);
v_isSharedCheck_5848_ = !lean_is_exclusive(v___x_5833_);
if (v_isSharedCheck_5848_ == 0)
{
v___x_5836_ = v___x_5833_;
v_isShared_5837_ = v_isSharedCheck_5848_;
goto v_resetjp_5835_;
}
else
{
lean_inc(v_val_5834_);
lean_dec(v___x_5833_);
v___x_5836_ = lean_box(0);
v_isShared_5837_ = v_isSharedCheck_5848_;
goto v_resetjp_5835_;
}
v_resetjp_5835_:
{
lean_object* v_moduleUri_5838_; lean_object* v_refs_5839_; lean_object* v_decls_5840_; lean_object* v___x_5842_; 
v_moduleUri_5838_ = lean_ctor_get(v_val_5834_, 0);
lean_inc_ref(v_moduleUri_5838_);
v_refs_5839_ = lean_ctor_get(v_val_5834_, 3);
lean_inc(v_refs_5839_);
v_decls_5840_ = lean_ctor_get(v_val_5834_, 4);
lean_inc(v_decls_5840_);
lean_dec(v_val_5834_);
if (v_isShared_5831_ == 0)
{
lean_ctor_set(v___x_5830_, 1, v_decls_5840_);
lean_ctor_set(v___x_5830_, 0, v_refs_5839_);
v___x_5842_ = v___x_5830_;
goto v_reusejp_5841_;
}
else
{
lean_object* v_reuseFailAlloc_5847_; 
v_reuseFailAlloc_5847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5847_, 0, v_refs_5839_);
lean_ctor_set(v_reuseFailAlloc_5847_, 1, v_decls_5840_);
v___x_5842_ = v_reuseFailAlloc_5847_;
goto v_reusejp_5841_;
}
v_reusejp_5841_:
{
lean_object* v___x_5843_; lean_object* v___x_5845_; 
v___x_5843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5843_, 0, v_moduleUri_5838_);
lean_ctor_set(v___x_5843_, 1, v___x_5842_);
if (v_isShared_5837_ == 0)
{
lean_ctor_set(v___x_5836_, 0, v___x_5843_);
v___x_5845_ = v___x_5836_;
goto v_reusejp_5844_;
}
else
{
lean_object* v_reuseFailAlloc_5846_; 
v_reuseFailAlloc_5846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5846_, 0, v___x_5843_);
v___x_5845_ = v_reuseFailAlloc_5846_;
goto v_reusejp_5844_;
}
v_reusejp_5844_:
{
return v___x_5845_;
}
}
}
}
else
{
lean_object* v___x_5849_; 
lean_dec(v___x_5833_);
lean_del_object(v___x_5830_);
v___x_5849_ = lean_box(0);
return v___x_5849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_getModuleRefs_x3f___boxed(lean_object* v_self_5866_, lean_object* v_mod_5867_){
_start:
{
lean_object* v_res_5868_; 
v_res_5868_ = l_Lean_Server_References_getModuleRefs_x3f(v_self_5866_, v_mod_5867_);
lean_dec(v_mod_5867_);
return v_res_5868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_getDirectImports_x3f(lean_object* v_self_5869_, lean_object* v_mod_5870_){
_start:
{
lean_object* v_ileans_5871_; lean_object* v_workers_5872_; lean_object* v___x_5885_; 
v_ileans_5871_ = lean_ctor_get(v_self_5869_, 0);
v_workers_5872_ = lean_ctor_get(v_self_5869_, 1);
v___x_5885_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_workers_5872_, v_mod_5870_);
if (lean_obj_tag(v___x_5885_) == 1)
{
lean_object* v_val_5886_; lean_object* v___x_5888_; uint8_t v_isShared_5889_; uint8_t v_isSharedCheck_5895_; 
v_val_5886_ = lean_ctor_get(v___x_5885_, 0);
v_isSharedCheck_5895_ = !lean_is_exclusive(v___x_5885_);
if (v_isSharedCheck_5895_ == 0)
{
v___x_5888_ = v___x_5885_;
v_isShared_5889_ = v_isSharedCheck_5895_;
goto v_resetjp_5887_;
}
else
{
lean_inc(v_val_5886_);
lean_dec(v___x_5885_);
v___x_5888_ = lean_box(0);
v_isShared_5889_ = v_isSharedCheck_5895_;
goto v_resetjp_5887_;
}
v_resetjp_5887_:
{
uint8_t v___x_5890_; 
v___x_5890_ = l_Lean_Server_TransientWorkerILean_hasRefs(v_val_5886_);
if (v___x_5890_ == 0)
{
lean_del_object(v___x_5888_);
lean_dec(v_val_5886_);
goto v___jp_5873_;
}
else
{
lean_object* v_directImports_5891_; lean_object* v___x_5893_; 
v_directImports_5891_ = lean_ctor_get(v_val_5886_, 2);
lean_inc_ref(v_directImports_5891_);
lean_dec(v_val_5886_);
if (v_isShared_5889_ == 0)
{
lean_ctor_set(v___x_5888_, 0, v_directImports_5891_);
v___x_5893_ = v___x_5888_;
goto v_reusejp_5892_;
}
else
{
lean_object* v_reuseFailAlloc_5894_; 
v_reuseFailAlloc_5894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5894_, 0, v_directImports_5891_);
v___x_5893_ = v_reuseFailAlloc_5894_;
goto v_reusejp_5892_;
}
v_reusejp_5892_:
{
return v___x_5893_;
}
}
}
}
else
{
lean_dec(v___x_5885_);
goto v___jp_5873_;
}
v___jp_5873_:
{
lean_object* v___x_5874_; 
v___x_5874_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_ileans_5871_, v_mod_5870_);
if (lean_obj_tag(v___x_5874_) == 1)
{
lean_object* v_val_5875_; lean_object* v___x_5877_; uint8_t v_isShared_5878_; uint8_t v_isSharedCheck_5883_; 
v_val_5875_ = lean_ctor_get(v___x_5874_, 0);
v_isSharedCheck_5883_ = !lean_is_exclusive(v___x_5874_);
if (v_isSharedCheck_5883_ == 0)
{
v___x_5877_ = v___x_5874_;
v_isShared_5878_ = v_isSharedCheck_5883_;
goto v_resetjp_5876_;
}
else
{
lean_inc(v_val_5875_);
lean_dec(v___x_5874_);
v___x_5877_ = lean_box(0);
v_isShared_5878_ = v_isSharedCheck_5883_;
goto v_resetjp_5876_;
}
v_resetjp_5876_:
{
lean_object* v_directImports_5879_; lean_object* v___x_5881_; 
v_directImports_5879_ = lean_ctor_get(v_val_5875_, 2);
lean_inc_ref(v_directImports_5879_);
lean_dec(v_val_5875_);
if (v_isShared_5878_ == 0)
{
lean_ctor_set(v___x_5877_, 0, v_directImports_5879_);
v___x_5881_ = v___x_5877_;
goto v_reusejp_5880_;
}
else
{
lean_object* v_reuseFailAlloc_5882_; 
v_reuseFailAlloc_5882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5882_, 0, v_directImports_5879_);
v___x_5881_ = v_reuseFailAlloc_5882_;
goto v_reusejp_5880_;
}
v_reusejp_5880_:
{
return v___x_5881_;
}
}
}
else
{
lean_object* v___x_5884_; 
lean_dec(v___x_5874_);
v___x_5884_ = lean_box(0);
return v___x_5884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_getDirectImports_x3f___boxed(lean_object* v_self_5896_, lean_object* v_mod_5897_){
_start:
{
lean_object* v_res_5898_; 
v_res_5898_ = l_Lean_Server_References_getDirectImports_x3f(v_self_5896_, v_mod_5897_);
lean_dec(v_mod_5897_);
lean_dec_ref(v_self_5896_);
return v_res_5898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_getDecls_x3f(lean_object* v_self_5899_, lean_object* v_mod_5900_){
_start:
{
lean_object* v_ileans_5901_; lean_object* v_workers_5902_; lean_object* v___x_5915_; 
v_ileans_5901_ = lean_ctor_get(v_self_5899_, 0);
v_workers_5902_ = lean_ctor_get(v_self_5899_, 1);
v___x_5915_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_workers_5902_, v_mod_5900_);
if (lean_obj_tag(v___x_5915_) == 1)
{
lean_object* v_val_5916_; lean_object* v___x_5918_; uint8_t v_isShared_5919_; uint8_t v_isSharedCheck_5925_; 
v_val_5916_ = lean_ctor_get(v___x_5915_, 0);
v_isSharedCheck_5925_ = !lean_is_exclusive(v___x_5915_);
if (v_isSharedCheck_5925_ == 0)
{
v___x_5918_ = v___x_5915_;
v_isShared_5919_ = v_isSharedCheck_5925_;
goto v_resetjp_5917_;
}
else
{
lean_inc(v_val_5916_);
lean_dec(v___x_5915_);
v___x_5918_ = lean_box(0);
v_isShared_5919_ = v_isSharedCheck_5925_;
goto v_resetjp_5917_;
}
v_resetjp_5917_:
{
uint8_t v___x_5920_; 
v___x_5920_ = l_Lean_Server_TransientWorkerILean_hasRefs(v_val_5916_);
if (v___x_5920_ == 0)
{
lean_del_object(v___x_5918_);
lean_dec(v_val_5916_);
goto v___jp_5903_;
}
else
{
lean_object* v_decls_5921_; lean_object* v___x_5923_; 
v_decls_5921_ = lean_ctor_get(v_val_5916_, 5);
lean_inc(v_decls_5921_);
lean_dec(v_val_5916_);
if (v_isShared_5919_ == 0)
{
lean_ctor_set(v___x_5918_, 0, v_decls_5921_);
v___x_5923_ = v___x_5918_;
goto v_reusejp_5922_;
}
else
{
lean_object* v_reuseFailAlloc_5924_; 
v_reuseFailAlloc_5924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5924_, 0, v_decls_5921_);
v___x_5923_ = v_reuseFailAlloc_5924_;
goto v_reusejp_5922_;
}
v_reusejp_5922_:
{
return v___x_5923_;
}
}
}
}
else
{
lean_dec(v___x_5915_);
goto v___jp_5903_;
}
v___jp_5903_:
{
lean_object* v___x_5904_; 
v___x_5904_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_ileans_5901_, v_mod_5900_);
if (lean_obj_tag(v___x_5904_) == 1)
{
lean_object* v_val_5905_; lean_object* v___x_5907_; uint8_t v_isShared_5908_; uint8_t v_isSharedCheck_5913_; 
v_val_5905_ = lean_ctor_get(v___x_5904_, 0);
v_isSharedCheck_5913_ = !lean_is_exclusive(v___x_5904_);
if (v_isSharedCheck_5913_ == 0)
{
v___x_5907_ = v___x_5904_;
v_isShared_5908_ = v_isSharedCheck_5913_;
goto v_resetjp_5906_;
}
else
{
lean_inc(v_val_5905_);
lean_dec(v___x_5904_);
v___x_5907_ = lean_box(0);
v_isShared_5908_ = v_isSharedCheck_5913_;
goto v_resetjp_5906_;
}
v_resetjp_5906_:
{
lean_object* v_decls_5909_; lean_object* v___x_5911_; 
v_decls_5909_ = lean_ctor_get(v_val_5905_, 4);
lean_inc(v_decls_5909_);
lean_dec(v_val_5905_);
if (v_isShared_5908_ == 0)
{
lean_ctor_set(v___x_5907_, 0, v_decls_5909_);
v___x_5911_ = v___x_5907_;
goto v_reusejp_5910_;
}
else
{
lean_object* v_reuseFailAlloc_5912_; 
v_reuseFailAlloc_5912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5912_, 0, v_decls_5909_);
v___x_5911_ = v_reuseFailAlloc_5912_;
goto v_reusejp_5910_;
}
v_reusejp_5910_:
{
return v___x_5911_;
}
}
}
else
{
lean_object* v___x_5914_; 
lean_dec(v___x_5904_);
v___x_5914_ = lean_box(0);
return v___x_5914_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_getDecls_x3f___boxed(lean_object* v_self_5926_, lean_object* v_mod_5927_){
_start:
{
lean_object* v_res_5928_; 
v_res_5928_ = l_Lean_Server_References_getDecls_x3f(v_self_5926_, v_mod_5927_);
lean_dec(v_mod_5927_);
lean_dec_ref(v_self_5926_);
return v_res_5928_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_allRefsFor_spec__0(lean_object* v_ident_5929_, lean_object* v_as_5930_, size_t v_sz_5931_, size_t v_i_5932_, lean_object* v_b_5933_){
_start:
{
lean_object* v_a_5935_; uint8_t v___x_5939_; 
v___x_5939_ = lean_usize_dec_lt(v_i_5932_, v_sz_5931_);
if (v___x_5939_ == 0)
{
return v_b_5933_;
}
else
{
lean_object* v_a_5940_; lean_object* v_snd_5941_; lean_object* v_snd_5942_; lean_object* v_fst_5943_; lean_object* v___x_5945_; uint8_t v_isShared_5946_; uint8_t v_isSharedCheck_5971_; 
v_a_5940_ = lean_array_uget(v_as_5930_, v_i_5932_);
v_snd_5941_ = lean_ctor_get(v_a_5940_, 1);
lean_inc(v_snd_5941_);
v_snd_5942_ = lean_ctor_get(v_snd_5941_, 1);
lean_inc(v_snd_5942_);
v_fst_5943_ = lean_ctor_get(v_a_5940_, 0);
v_isSharedCheck_5971_ = !lean_is_exclusive(v_a_5940_);
if (v_isSharedCheck_5971_ == 0)
{
lean_object* v_unused_5972_; 
v_unused_5972_ = lean_ctor_get(v_a_5940_, 1);
lean_dec(v_unused_5972_);
v___x_5945_ = v_a_5940_;
v_isShared_5946_ = v_isSharedCheck_5971_;
goto v_resetjp_5944_;
}
else
{
lean_inc(v_fst_5943_);
lean_dec(v_a_5940_);
v___x_5945_ = lean_box(0);
v_isShared_5946_ = v_isSharedCheck_5971_;
goto v_resetjp_5944_;
}
v_resetjp_5944_:
{
lean_object* v_fst_5947_; lean_object* v___x_5949_; uint8_t v_isShared_5950_; uint8_t v_isSharedCheck_5969_; 
v_fst_5947_ = lean_ctor_get(v_snd_5941_, 0);
v_isSharedCheck_5969_ = !lean_is_exclusive(v_snd_5941_);
if (v_isSharedCheck_5969_ == 0)
{
lean_object* v_unused_5970_; 
v_unused_5970_ = lean_ctor_get(v_snd_5941_, 1);
lean_dec(v_unused_5970_);
v___x_5949_ = v_snd_5941_;
v_isShared_5950_ = v_isSharedCheck_5969_;
goto v_resetjp_5948_;
}
else
{
lean_inc(v_fst_5947_);
lean_dec(v_snd_5941_);
v___x_5949_ = lean_box(0);
v_isShared_5950_ = v_isSharedCheck_5969_;
goto v_resetjp_5948_;
}
v_resetjp_5948_:
{
lean_object* v_fst_5951_; lean_object* v_snd_5952_; lean_object* v___x_5954_; uint8_t v_isShared_5955_; uint8_t v_isSharedCheck_5968_; 
v_fst_5951_ = lean_ctor_get(v_snd_5942_, 0);
v_snd_5952_ = lean_ctor_get(v_snd_5942_, 1);
v_isSharedCheck_5968_ = !lean_is_exclusive(v_snd_5942_);
if (v_isSharedCheck_5968_ == 0)
{
v___x_5954_ = v_snd_5942_;
v_isShared_5955_ = v_isSharedCheck_5968_;
goto v_resetjp_5953_;
}
else
{
lean_inc(v_snd_5952_);
lean_inc(v_fst_5951_);
lean_dec(v_snd_5942_);
v___x_5954_ = lean_box(0);
v_isShared_5955_ = v_isSharedCheck_5968_;
goto v_resetjp_5953_;
}
v_resetjp_5953_:
{
lean_object* v___x_5956_; 
v___x_5956_ = l_Lean_Lsp_ModuleRefs_get_x3f(v_fst_5951_, v_ident_5929_);
lean_dec(v_fst_5951_);
if (lean_obj_tag(v___x_5956_) == 1)
{
lean_object* v_val_5957_; lean_object* v___x_5959_; 
v_val_5957_ = lean_ctor_get(v___x_5956_, 0);
lean_inc(v_val_5957_);
lean_dec_ref_known(v___x_5956_, 1);
if (v_isShared_5955_ == 0)
{
lean_ctor_set(v___x_5954_, 0, v_val_5957_);
v___x_5959_ = v___x_5954_;
goto v_reusejp_5958_;
}
else
{
lean_object* v_reuseFailAlloc_5967_; 
v_reuseFailAlloc_5967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5967_, 0, v_val_5957_);
lean_ctor_set(v_reuseFailAlloc_5967_, 1, v_snd_5952_);
v___x_5959_ = v_reuseFailAlloc_5967_;
goto v_reusejp_5958_;
}
v_reusejp_5958_:
{
lean_object* v___x_5961_; 
if (v_isShared_5950_ == 0)
{
lean_ctor_set(v___x_5949_, 1, v___x_5959_);
lean_ctor_set(v___x_5949_, 0, v_fst_5943_);
v___x_5961_ = v___x_5949_;
goto v_reusejp_5960_;
}
else
{
lean_object* v_reuseFailAlloc_5966_; 
v_reuseFailAlloc_5966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5966_, 0, v_fst_5943_);
lean_ctor_set(v_reuseFailAlloc_5966_, 1, v___x_5959_);
v___x_5961_ = v_reuseFailAlloc_5966_;
goto v_reusejp_5960_;
}
v_reusejp_5960_:
{
lean_object* v___x_5963_; 
if (v_isShared_5946_ == 0)
{
lean_ctor_set(v___x_5945_, 1, v___x_5961_);
lean_ctor_set(v___x_5945_, 0, v_fst_5947_);
v___x_5963_ = v___x_5945_;
goto v_reusejp_5962_;
}
else
{
lean_object* v_reuseFailAlloc_5965_; 
v_reuseFailAlloc_5965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5965_, 0, v_fst_5947_);
lean_ctor_set(v_reuseFailAlloc_5965_, 1, v___x_5961_);
v___x_5963_ = v_reuseFailAlloc_5965_;
goto v_reusejp_5962_;
}
v_reusejp_5962_:
{
lean_object* v___x_5964_; 
v___x_5964_ = lean_array_push(v_b_5933_, v___x_5963_);
v_a_5935_ = v___x_5964_;
goto v___jp_5934_;
}
}
}
}
else
{
lean_dec(v___x_5956_);
lean_del_object(v___x_5954_);
lean_dec(v_snd_5952_);
lean_del_object(v___x_5949_);
lean_dec(v_fst_5947_);
lean_del_object(v___x_5945_);
lean_dec(v_fst_5943_);
v_a_5935_ = v_b_5933_;
goto v___jp_5934_;
}
}
}
}
}
v___jp_5934_:
{
size_t v___x_5936_; size_t v___x_5937_; 
v___x_5936_ = ((size_t)1ULL);
v___x_5937_ = lean_usize_add(v_i_5932_, v___x_5936_);
v_i_5932_ = v___x_5937_;
v_b_5933_ = v_a_5935_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_allRefsFor_spec__0___boxed(lean_object* v_ident_5973_, lean_object* v_as_5974_, lean_object* v_sz_5975_, lean_object* v_i_5976_, lean_object* v_b_5977_){
_start:
{
size_t v_sz_boxed_5978_; size_t v_i_boxed_5979_; lean_object* v_res_5980_; 
v_sz_boxed_5978_ = lean_unbox_usize(v_sz_5975_);
lean_dec(v_sz_5975_);
v_i_boxed_5979_ = lean_unbox_usize(v_i_5976_);
lean_dec(v_i_5976_);
v_res_5980_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_allRefsFor_spec__0(v_ident_5973_, v_as_5974_, v_sz_boxed_5978_, v_i_boxed_5979_, v_b_5977_);
lean_dec_ref(v_as_5974_);
lean_dec_ref(v_ident_5973_);
return v_res_5980_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1_spec__1(lean_object* v_init_5981_, lean_object* v_x_5982_){
_start:
{
if (lean_obj_tag(v_x_5982_) == 0)
{
lean_object* v_k_5983_; lean_object* v_v_5984_; lean_object* v_l_5985_; lean_object* v_r_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; 
v_k_5983_ = lean_ctor_get(v_x_5982_, 1);
v_v_5984_ = lean_ctor_get(v_x_5982_, 2);
v_l_5985_ = lean_ctor_get(v_x_5982_, 3);
v_r_5986_ = lean_ctor_get(v_x_5982_, 4);
v___x_5987_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1_spec__1(v_init_5981_, v_l_5985_);
lean_inc(v_v_5984_);
lean_inc(v_k_5983_);
v___x_5988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5988_, 0, v_k_5983_);
lean_ctor_set(v___x_5988_, 1, v_v_5984_);
v___x_5989_ = lean_array_push(v___x_5987_, v___x_5988_);
v_init_5981_ = v___x_5989_;
v_x_5982_ = v_r_5986_;
goto _start;
}
else
{
return v_init_5981_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1_spec__1___boxed(lean_object* v_init_5991_, lean_object* v_x_5992_){
_start:
{
lean_object* v_res_5993_; 
v_res_5993_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1_spec__1(v_init_5991_, v_x_5992_);
lean_dec(v_x_5992_);
return v_res_5993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_allRefsFor(lean_object* v_self_6000_, lean_object* v_ident_6001_){
_start:
{
lean_object* v___y_6003_; 
if (lean_obj_tag(v_ident_6001_) == 0)
{
lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; 
v___x_6008_ = l_Lean_Server_References_allRefs(v_self_6000_);
v___x_6009_ = ((lean_object*)(l_Lean_Server_References_allRefsFor___closed__1));
v___x_6010_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1_spec__1(v___x_6009_, v___x_6008_);
lean_dec(v___x_6008_);
v___y_6003_ = v___x_6010_;
goto v___jp_6002_;
}
else
{
lean_object* v_moduleName_6011_; lean_object* v_identModuleName_6012_; lean_object* v___x_6013_; 
v_moduleName_6011_ = lean_ctor_get(v_ident_6001_, 0);
lean_inc_ref(v_moduleName_6011_);
v_identModuleName_6012_ = l_String_toName(v_moduleName_6011_);
v___x_6013_ = l_Lean_Server_References_getModuleRefs_x3f(v_self_6000_, v_identModuleName_6012_);
if (lean_obj_tag(v___x_6013_) == 0)
{
lean_object* v___x_6014_; 
lean_dec(v_identModuleName_6012_);
v___x_6014_ = ((lean_object*)(l_Lean_Server_References_allRefsFor___closed__2));
v___y_6003_ = v___x_6014_;
goto v___jp_6002_;
}
else
{
lean_object* v_val_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; 
v_val_6015_ = lean_ctor_get(v___x_6013_, 0);
lean_inc(v_val_6015_);
lean_dec_ref_known(v___x_6013_, 1);
v___x_6016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6016_, 0, v_identModuleName_6012_);
lean_ctor_set(v___x_6016_, 1, v_val_6015_);
v___x_6017_ = lean_unsigned_to_nat(1u);
v___x_6018_ = lean_mk_empty_array_with_capacity(v___x_6017_);
v___x_6019_ = lean_array_push(v___x_6018_, v___x_6016_);
v___y_6003_ = v___x_6019_;
goto v___jp_6002_;
}
}
v___jp_6002_:
{
lean_object* v_result_6004_; size_t v_sz_6005_; size_t v___x_6006_; lean_object* v___x_6007_; 
v_result_6004_ = ((lean_object*)(l_Lean_Server_References_allRefsFor___closed__0));
v_sz_6005_ = lean_array_size(v___y_6003_);
v___x_6006_ = ((size_t)0ULL);
v___x_6007_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_allRefsFor_spec__0(v_ident_6001_, v___y_6003_, v_sz_6005_, v___x_6006_, v_result_6004_);
lean_dec_ref(v___y_6003_);
lean_dec_ref(v_ident_6001_);
return v___x_6007_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1(lean_object* v_init_6020_, lean_object* v_t_6021_){
_start:
{
lean_object* v___x_6022_; 
v___x_6022_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1_spec__1(v_init_6020_, v_t_6021_);
return v___x_6022_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1___boxed(lean_object* v_init_6023_, lean_object* v_t_6024_){
_start:
{
lean_object* v_res_6025_; 
v_res_6025_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_References_allRefsFor_spec__1(v_init_6023_, v_t_6024_);
lean_dec(v_t_6024_);
return v_res_6025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt(lean_object* v_self_6026_, lean_object* v_module_6027_, lean_object* v_pos_6028_, uint8_t v_includeStop_6029_){
_start:
{
lean_object* v___x_6030_; 
v___x_6030_ = l_Lean_Server_References_getModuleRefs_x3f(v_self_6026_, v_module_6027_);
if (lean_obj_tag(v___x_6030_) == 1)
{
lean_object* v_val_6031_; lean_object* v_snd_6032_; lean_object* v_fst_6033_; lean_object* v___x_6034_; 
v_val_6031_ = lean_ctor_get(v___x_6030_, 0);
lean_inc(v_val_6031_);
lean_dec_ref_known(v___x_6030_, 1);
v_snd_6032_ = lean_ctor_get(v_val_6031_, 1);
lean_inc(v_snd_6032_);
lean_dec(v_val_6031_);
v_fst_6033_ = lean_ctor_get(v_snd_6032_, 0);
lean_inc(v_fst_6033_);
lean_dec(v_snd_6032_);
v___x_6034_ = l_Lean_Lsp_ModuleRefs_findAt(v_fst_6033_, v_pos_6028_, v_includeStop_6029_);
return v___x_6034_;
}
else
{
lean_object* v___x_6035_; 
lean_dec(v___x_6030_);
v___x_6035_ = ((lean_object*)(l_Lean_Lsp_ModuleRefs_findAt___closed__0));
return v___x_6035_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_findAt___boxed(lean_object* v_self_6036_, lean_object* v_module_6037_, lean_object* v_pos_6038_, lean_object* v_includeStop_6039_){
_start:
{
uint8_t v_includeStop_boxed_6040_; lean_object* v_res_6041_; 
v_includeStop_boxed_6040_ = lean_unbox(v_includeStop_6039_);
v_res_6041_ = l_Lean_Server_References_findAt(v_self_6036_, v_module_6037_, v_pos_6038_, v_includeStop_boxed_6040_);
lean_dec_ref(v_pos_6038_);
lean_dec(v_module_6037_);
return v_res_6041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_findRange_x3f(lean_object* v_self_6042_, lean_object* v_module_6043_, lean_object* v_pos_6044_, uint8_t v_includeStop_6045_){
_start:
{
lean_object* v___x_6046_; 
v___x_6046_ = l_Lean_Server_References_getModuleRefs_x3f(v_self_6042_, v_module_6043_);
if (lean_obj_tag(v___x_6046_) == 0)
{
lean_object* v___x_6047_; 
v___x_6047_ = lean_box(0);
return v___x_6047_;
}
else
{
lean_object* v_val_6048_; lean_object* v_snd_6049_; lean_object* v_fst_6050_; lean_object* v___x_6051_; 
v_val_6048_ = lean_ctor_get(v___x_6046_, 0);
lean_inc(v_val_6048_);
lean_dec_ref_known(v___x_6046_, 1);
v_snd_6049_ = lean_ctor_get(v_val_6048_, 1);
lean_inc(v_snd_6049_);
lean_dec(v_val_6048_);
v_fst_6050_ = lean_ctor_get(v_snd_6049_, 0);
lean_inc(v_fst_6050_);
lean_dec(v_snd_6049_);
v___x_6051_ = l_Lean_Lsp_ModuleRefs_findRange_x3f(v_fst_6050_, v_pos_6044_, v_includeStop_6045_);
lean_dec(v_fst_6050_);
return v___x_6051_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_findRange_x3f___boxed(lean_object* v_self_6052_, lean_object* v_module_6053_, lean_object* v_pos_6054_, lean_object* v_includeStop_6055_){
_start:
{
uint8_t v_includeStop_boxed_6056_; lean_object* v_res_6057_; 
v_includeStop_boxed_6056_ = lean_unbox(v_includeStop_6055_);
v_res_6057_ = l_Lean_Server_References_findRange_x3f(v_self_6052_, v_module_6053_, v_pos_6054_, v_includeStop_boxed_6056_);
lean_dec_ref(v_pos_6054_);
lean_dec(v_module_6053_);
return v_res_6057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_ParentDecl_ofDecls_x3f(lean_object* v_ds_6058_, lean_object* v_name_6059_){
_start:
{
lean_object* v___x_6060_; 
v___x_6060_ = l_Lean_Lsp_Decls_get_x3f(v_ds_6058_, v_name_6059_);
if (lean_obj_tag(v___x_6060_) == 0)
{
lean_object* v___x_6061_; 
lean_dec_ref(v_name_6059_);
v___x_6061_ = lean_box(0);
return v___x_6061_;
}
else
{
lean_object* v_val_6062_; lean_object* v___x_6064_; uint8_t v_isShared_6065_; uint8_t v_isSharedCheck_6072_; 
v_val_6062_ = lean_ctor_get(v___x_6060_, 0);
v_isSharedCheck_6072_ = !lean_is_exclusive(v___x_6060_);
if (v_isSharedCheck_6072_ == 0)
{
v___x_6064_ = v___x_6060_;
v_isShared_6065_ = v_isSharedCheck_6072_;
goto v_resetjp_6063_;
}
else
{
lean_inc(v_val_6062_);
lean_dec(v___x_6060_);
v___x_6064_ = lean_box(0);
v_isShared_6065_ = v_isSharedCheck_6072_;
goto v_resetjp_6063_;
}
v_resetjp_6063_:
{
lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6070_; 
v___x_6066_ = l_Lean_Lsp_DeclInfo_range(v_val_6062_);
v___x_6067_ = l_Lean_Lsp_DeclInfo_selectionRange(v_val_6062_);
lean_dec(v_val_6062_);
v___x_6068_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6068_, 0, v_name_6059_);
lean_ctor_set(v___x_6068_, 1, v___x_6066_);
lean_ctor_set(v___x_6068_, 2, v___x_6067_);
if (v_isShared_6065_ == 0)
{
lean_ctor_set(v___x_6064_, 0, v___x_6068_);
v___x_6070_ = v___x_6064_;
goto v_reusejp_6069_;
}
else
{
lean_object* v_reuseFailAlloc_6071_; 
v_reuseFailAlloc_6071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6071_, 0, v___x_6068_);
v___x_6070_ = v_reuseFailAlloc_6071_;
goto v_reusejp_6069_;
}
v_reusejp_6069_:
{
return v___x_6070_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_ParentDecl_ofDecls_x3f___boxed(lean_object* v_ds_6073_, lean_object* v_name_6074_){
_start:
{
lean_object* v_res_6075_; 
v_res_6075_ = l_Lean_Server_References_ParentDecl_ofDecls_x3f(v_ds_6073_, v_name_6074_);
lean_dec(v_ds_6073_);
return v_res_6075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__0(lean_object* v_fst_6076_, lean_object* v_fst_6077_, lean_object* v_snd_6078_, lean_object* v_as_6079_, size_t v_sz_6080_, size_t v_i_6081_, lean_object* v_b_6082_){
_start:
{
uint8_t v___x_6083_; 
v___x_6083_ = lean_usize_dec_lt(v_i_6081_, v_sz_6080_);
if (v___x_6083_ == 0)
{
lean_dec(v_fst_6077_);
lean_dec_ref(v_fst_6076_);
return v_b_6082_;
}
else
{
lean_object* v_a_6084_; lean_object* v___y_6086_; lean_object* v___x_6094_; 
v_a_6084_ = lean_array_uget_borrowed(v_as_6079_, v_i_6081_);
v___x_6094_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_a_6084_);
if (lean_obj_tag(v___x_6094_) == 0)
{
lean_object* v___x_6095_; 
v___x_6095_ = lean_box(0);
v___y_6086_ = v___x_6095_;
goto v___jp_6085_;
}
else
{
lean_object* v_val_6096_; lean_object* v___x_6097_; 
v_val_6096_ = lean_ctor_get(v___x_6094_, 0);
lean_inc(v_val_6096_);
lean_dec_ref_known(v___x_6094_, 1);
v___x_6097_ = l_Lean_Server_References_ParentDecl_ofDecls_x3f(v_snd_6078_, v_val_6096_);
v___y_6086_ = v___x_6097_;
goto v___jp_6085_;
}
v___jp_6085_:
{
lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; size_t v___x_6091_; size_t v___x_6092_; 
v___x_6087_ = l_Lean_Lsp_RefInfo_Location_range(v_a_6084_);
lean_inc_ref(v_fst_6076_);
v___x_6088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6088_, 0, v_fst_6076_);
lean_ctor_set(v___x_6088_, 1, v___x_6087_);
lean_inc(v_fst_6077_);
v___x_6089_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6089_, 0, v___x_6088_);
lean_ctor_set(v___x_6089_, 1, v_fst_6077_);
lean_ctor_set(v___x_6089_, 2, v___y_6086_);
v___x_6090_ = lean_array_push(v_b_6082_, v___x_6089_);
v___x_6091_ = ((size_t)1ULL);
v___x_6092_ = lean_usize_add(v_i_6081_, v___x_6091_);
v_i_6081_ = v___x_6092_;
v_b_6082_ = v___x_6090_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__0___boxed(lean_object* v_fst_6098_, lean_object* v_fst_6099_, lean_object* v_snd_6100_, lean_object* v_as_6101_, lean_object* v_sz_6102_, lean_object* v_i_6103_, lean_object* v_b_6104_){
_start:
{
size_t v_sz_boxed_6105_; size_t v_i_boxed_6106_; lean_object* v_res_6107_; 
v_sz_boxed_6105_ = lean_unbox_usize(v_sz_6102_);
lean_dec(v_sz_6102_);
v_i_boxed_6106_ = lean_unbox_usize(v_i_6103_);
lean_dec(v_i_6103_);
v_res_6107_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__0(v_fst_6098_, v_fst_6099_, v_snd_6100_, v_as_6101_, v_sz_boxed_6105_, v_i_boxed_6106_, v_b_6104_);
lean_dec_ref(v_as_6101_);
lean_dec(v_snd_6100_);
return v_res_6107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__1(uint8_t v_includeDefinition_6108_, lean_object* v_as_6109_, size_t v_sz_6110_, size_t v_i_6111_, lean_object* v_b_6112_){
_start:
{
uint8_t v___x_6113_; 
v___x_6113_ = lean_usize_dec_lt(v_i_6111_, v_sz_6110_);
if (v___x_6113_ == 0)
{
return v_b_6112_;
}
else
{
lean_object* v_a_6114_; lean_object* v_snd_6115_; lean_object* v_snd_6116_; lean_object* v_fst_6117_; lean_object* v_fst_6118_; lean_object* v_fst_6119_; lean_object* v_snd_6120_; lean_object* v___x_6122_; uint8_t v_isShared_6123_; uint8_t v_isSharedCheck_6147_; 
v_a_6114_ = lean_array_uget_borrowed(v_as_6109_, v_i_6111_);
v_snd_6115_ = lean_ctor_get(v_a_6114_, 1);
v_snd_6116_ = lean_ctor_get(v_snd_6115_, 1);
lean_inc(v_snd_6116_);
v_fst_6117_ = lean_ctor_get(v_a_6114_, 0);
v_fst_6118_ = lean_ctor_get(v_snd_6115_, 0);
v_fst_6119_ = lean_ctor_get(v_snd_6116_, 0);
v_snd_6120_ = lean_ctor_get(v_snd_6116_, 1);
v_isSharedCheck_6147_ = !lean_is_exclusive(v_snd_6116_);
if (v_isSharedCheck_6147_ == 0)
{
v___x_6122_ = v_snd_6116_;
v_isShared_6123_ = v_isSharedCheck_6147_;
goto v_resetjp_6121_;
}
else
{
lean_inc(v_snd_6120_);
lean_inc(v_fst_6119_);
lean_dec(v_snd_6116_);
v___x_6122_ = lean_box(0);
v_isShared_6123_ = v_isSharedCheck_6147_;
goto v_resetjp_6121_;
}
v_resetjp_6121_:
{
lean_object* v_result_6125_; 
if (v_includeDefinition_6108_ == 0)
{
lean_del_object(v___x_6122_);
v_result_6125_ = v_b_6112_;
goto v___jp_6124_;
}
else
{
lean_object* v_definition_x3f_6133_; 
v_definition_x3f_6133_ = lean_ctor_get(v_fst_6119_, 0);
if (lean_obj_tag(v_definition_x3f_6133_) == 1)
{
lean_object* v_val_6134_; lean_object* v___y_6136_; lean_object* v___x_6143_; 
v_val_6134_ = lean_ctor_get(v_definition_x3f_6133_, 0);
v___x_6143_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_val_6134_);
if (lean_obj_tag(v___x_6143_) == 0)
{
lean_object* v___x_6144_; 
v___x_6144_ = lean_box(0);
v___y_6136_ = v___x_6144_;
goto v___jp_6135_;
}
else
{
lean_object* v_val_6145_; lean_object* v___x_6146_; 
v_val_6145_ = lean_ctor_get(v___x_6143_, 0);
lean_inc(v_val_6145_);
lean_dec_ref_known(v___x_6143_, 1);
v___x_6146_ = l_Lean_Server_References_ParentDecl_ofDecls_x3f(v_snd_6120_, v_val_6145_);
v___y_6136_ = v___x_6146_;
goto v___jp_6135_;
}
v___jp_6135_:
{
lean_object* v___x_6137_; lean_object* v___x_6139_; 
v___x_6137_ = l_Lean_Lsp_RefInfo_Location_range(v_val_6134_);
lean_inc(v_fst_6117_);
if (v_isShared_6123_ == 0)
{
lean_ctor_set(v___x_6122_, 1, v___x_6137_);
lean_ctor_set(v___x_6122_, 0, v_fst_6117_);
v___x_6139_ = v___x_6122_;
goto v_reusejp_6138_;
}
else
{
lean_object* v_reuseFailAlloc_6142_; 
v_reuseFailAlloc_6142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6142_, 0, v_fst_6117_);
lean_ctor_set(v_reuseFailAlloc_6142_, 1, v___x_6137_);
v___x_6139_ = v_reuseFailAlloc_6142_;
goto v_reusejp_6138_;
}
v_reusejp_6138_:
{
lean_object* v___x_6140_; lean_object* v___x_6141_; 
lean_inc(v_fst_6118_);
v___x_6140_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6140_, 0, v___x_6139_);
lean_ctor_set(v___x_6140_, 1, v_fst_6118_);
lean_ctor_set(v___x_6140_, 2, v___y_6136_);
v___x_6141_ = lean_array_push(v_b_6112_, v___x_6140_);
v_result_6125_ = v___x_6141_;
goto v___jp_6124_;
}
}
}
else
{
lean_del_object(v___x_6122_);
v_result_6125_ = v_b_6112_;
goto v___jp_6124_;
}
}
v___jp_6124_:
{
lean_object* v_usages_6126_; size_t v_sz_6127_; size_t v___x_6128_; lean_object* v___x_6129_; size_t v___x_6130_; size_t v___x_6131_; 
v_usages_6126_ = lean_ctor_get(v_fst_6119_, 1);
lean_inc_ref(v_usages_6126_);
lean_dec(v_fst_6119_);
v_sz_6127_ = lean_array_size(v_usages_6126_);
v___x_6128_ = ((size_t)0ULL);
lean_inc(v_fst_6118_);
lean_inc(v_fst_6117_);
v___x_6129_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__0(v_fst_6117_, v_fst_6118_, v_snd_6120_, v_usages_6126_, v_sz_6127_, v___x_6128_, v_result_6125_);
lean_dec_ref(v_usages_6126_);
lean_dec(v_snd_6120_);
v___x_6130_ = ((size_t)1ULL);
v___x_6131_ = lean_usize_add(v_i_6111_, v___x_6130_);
v_i_6111_ = v___x_6131_;
v_b_6112_ = v___x_6129_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__1___boxed(lean_object* v_includeDefinition_6148_, lean_object* v_as_6149_, lean_object* v_sz_6150_, lean_object* v_i_6151_, lean_object* v_b_6152_){
_start:
{
uint8_t v_includeDefinition_boxed_6153_; size_t v_sz_boxed_6154_; size_t v_i_boxed_6155_; lean_object* v_res_6156_; 
v_includeDefinition_boxed_6153_ = lean_unbox(v_includeDefinition_6148_);
v_sz_boxed_6154_ = lean_unbox_usize(v_sz_6150_);
lean_dec(v_sz_6150_);
v_i_boxed_6155_ = lean_unbox_usize(v_i_6151_);
lean_dec(v_i_6151_);
v_res_6156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__1(v_includeDefinition_boxed_6153_, v_as_6149_, v_sz_boxed_6154_, v_i_boxed_6155_, v_b_6152_);
lean_dec_ref(v_as_6149_);
return v_res_6156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_referringTo(lean_object* v_self_6159_, lean_object* v_ident_6160_, uint8_t v_includeDefinition_6161_){
_start:
{
lean_object* v_result_6162_; lean_object* v___x_6163_; size_t v_sz_6164_; size_t v___x_6165_; lean_object* v___x_6166_; 
v_result_6162_ = ((lean_object*)(l_Lean_Server_References_referringTo___closed__0));
v___x_6163_ = l_Lean_Server_References_allRefsFor(v_self_6159_, v_ident_6160_);
v_sz_6164_ = lean_array_size(v___x_6163_);
v___x_6165_ = ((size_t)0ULL);
v___x_6166_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_referringTo_spec__1(v_includeDefinition_6161_, v___x_6163_, v_sz_6164_, v___x_6165_, v_result_6162_);
lean_dec_ref(v___x_6163_);
return v___x_6166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_referringTo___boxed(lean_object* v_self_6167_, lean_object* v_ident_6168_, lean_object* v_includeDefinition_6169_){
_start:
{
uint8_t v_includeDefinition_boxed_6170_; lean_object* v_res_6171_; 
v_includeDefinition_boxed_6170_ = lean_unbox(v_includeDefinition_6169_);
v_res_6171_ = l_Lean_Server_References_referringTo(v_self_6167_, v_ident_6168_, v_includeDefinition_boxed_6170_);
return v_res_6171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0(lean_object* v_as_6175_, size_t v_sz_6176_, size_t v_i_6177_, lean_object* v_b_6178_){
_start:
{
uint8_t v___x_6179_; 
v___x_6179_ = lean_usize_dec_lt(v_i_6177_, v_sz_6176_);
if (v___x_6179_ == 0)
{
lean_inc_ref(v_b_6178_);
return v_b_6178_;
}
else
{
lean_object* v_a_6180_; lean_object* v_snd_6181_; lean_object* v_snd_6182_; lean_object* v_fst_6183_; lean_object* v_fst_6184_; lean_object* v_fst_6185_; lean_object* v_snd_6186_; lean_object* v___x_6188_; uint8_t v_isShared_6189_; uint8_t v_isSharedCheck_6224_; 
v_a_6180_ = lean_array_uget_borrowed(v_as_6175_, v_i_6177_);
v_snd_6181_ = lean_ctor_get(v_a_6180_, 1);
v_snd_6182_ = lean_ctor_get(v_snd_6181_, 1);
lean_inc(v_snd_6182_);
v_fst_6183_ = lean_ctor_get(v_snd_6182_, 0);
lean_inc(v_fst_6183_);
v_fst_6184_ = lean_ctor_get(v_a_6180_, 0);
v_fst_6185_ = lean_ctor_get(v_snd_6181_, 0);
v_snd_6186_ = lean_ctor_get(v_snd_6182_, 1);
v_isSharedCheck_6224_ = !lean_is_exclusive(v_snd_6182_);
if (v_isSharedCheck_6224_ == 0)
{
lean_object* v_unused_6225_; 
v_unused_6225_ = lean_ctor_get(v_snd_6182_, 0);
lean_dec(v_unused_6225_);
v___x_6188_ = v_snd_6182_;
v_isShared_6189_ = v_isSharedCheck_6224_;
goto v_resetjp_6187_;
}
else
{
lean_inc(v_snd_6186_);
lean_dec(v_snd_6182_);
v___x_6188_ = lean_box(0);
v_isShared_6189_ = v_isSharedCheck_6224_;
goto v_resetjp_6187_;
}
v_resetjp_6187_:
{
lean_object* v_definition_x3f_6190_; lean_object* v___x_6192_; uint8_t v_isShared_6193_; uint8_t v_isSharedCheck_6222_; 
v_definition_x3f_6190_ = lean_ctor_get(v_fst_6183_, 0);
v_isSharedCheck_6222_ = !lean_is_exclusive(v_fst_6183_);
if (v_isSharedCheck_6222_ == 0)
{
lean_object* v_unused_6223_; 
v_unused_6223_ = lean_ctor_get(v_fst_6183_, 1);
lean_dec(v_unused_6223_);
v___x_6192_ = v_fst_6183_;
v_isShared_6193_ = v_isSharedCheck_6222_;
goto v_resetjp_6191_;
}
else
{
lean_inc(v_definition_x3f_6190_);
lean_dec(v_fst_6183_);
v___x_6192_ = lean_box(0);
v_isShared_6193_ = v_isSharedCheck_6222_;
goto v_resetjp_6191_;
}
v_resetjp_6191_:
{
lean_object* v___x_6194_; 
v___x_6194_ = lean_box(0);
if (lean_obj_tag(v_definition_x3f_6190_) == 1)
{
lean_object* v_val_6195_; lean_object* v___x_6197_; uint8_t v_isShared_6198_; uint8_t v_isSharedCheck_6217_; 
v_val_6195_ = lean_ctor_get(v_definition_x3f_6190_, 0);
v_isSharedCheck_6217_ = !lean_is_exclusive(v_definition_x3f_6190_);
if (v_isSharedCheck_6217_ == 0)
{
v___x_6197_ = v_definition_x3f_6190_;
v_isShared_6198_ = v_isSharedCheck_6217_;
goto v_resetjp_6196_;
}
else
{
lean_inc(v_val_6195_);
lean_dec(v_definition_x3f_6190_);
v___x_6197_ = lean_box(0);
v_isShared_6198_ = v_isSharedCheck_6217_;
goto v_resetjp_6196_;
}
v_resetjp_6196_:
{
lean_object* v___y_6200_; lean_object* v___x_6213_; 
v___x_6213_ = l_Lean_Lsp_RefInfo_Location_parentDecl_x3f(v_val_6195_);
if (lean_obj_tag(v___x_6213_) == 0)
{
lean_object* v___x_6214_; 
lean_dec(v_snd_6186_);
v___x_6214_ = lean_box(0);
v___y_6200_ = v___x_6214_;
goto v___jp_6199_;
}
else
{
lean_object* v_val_6215_; lean_object* v___x_6216_; 
v_val_6215_ = lean_ctor_get(v___x_6213_, 0);
lean_inc(v_val_6215_);
lean_dec_ref_known(v___x_6213_, 1);
v___x_6216_ = l_Lean_Server_References_ParentDecl_ofDecls_x3f(v_snd_6186_, v_val_6215_);
lean_dec(v_snd_6186_);
v___y_6200_ = v___x_6216_;
goto v___jp_6199_;
}
v___jp_6199_:
{
lean_object* v___x_6201_; lean_object* v___x_6203_; 
v___x_6201_ = l_Lean_Lsp_RefInfo_Location_range(v_val_6195_);
lean_dec(v_val_6195_);
lean_inc(v_fst_6184_);
if (v_isShared_6193_ == 0)
{
lean_ctor_set(v___x_6192_, 1, v___x_6201_);
lean_ctor_set(v___x_6192_, 0, v_fst_6184_);
v___x_6203_ = v___x_6192_;
goto v_reusejp_6202_;
}
else
{
lean_object* v_reuseFailAlloc_6212_; 
v_reuseFailAlloc_6212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6212_, 0, v_fst_6184_);
lean_ctor_set(v_reuseFailAlloc_6212_, 1, v___x_6201_);
v___x_6203_ = v_reuseFailAlloc_6212_;
goto v_reusejp_6202_;
}
v_reusejp_6202_:
{
lean_object* v___x_6204_; lean_object* v___x_6206_; 
lean_inc(v_fst_6185_);
v___x_6204_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6204_, 0, v___x_6203_);
lean_ctor_set(v___x_6204_, 1, v_fst_6185_);
lean_ctor_set(v___x_6204_, 2, v___y_6200_);
if (v_isShared_6198_ == 0)
{
lean_ctor_set(v___x_6197_, 0, v___x_6204_);
v___x_6206_ = v___x_6197_;
goto v_reusejp_6205_;
}
else
{
lean_object* v_reuseFailAlloc_6211_; 
v_reuseFailAlloc_6211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6211_, 0, v___x_6204_);
v___x_6206_ = v_reuseFailAlloc_6211_;
goto v_reusejp_6205_;
}
v_reusejp_6205_:
{
lean_object* v___x_6207_; lean_object* v___x_6209_; 
v___x_6207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6207_, 0, v___x_6206_);
if (v_isShared_6189_ == 0)
{
lean_ctor_set(v___x_6188_, 1, v___x_6194_);
lean_ctor_set(v___x_6188_, 0, v___x_6207_);
v___x_6209_ = v___x_6188_;
goto v_reusejp_6208_;
}
else
{
lean_object* v_reuseFailAlloc_6210_; 
v_reuseFailAlloc_6210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6210_, 0, v___x_6207_);
lean_ctor_set(v_reuseFailAlloc_6210_, 1, v___x_6194_);
v___x_6209_ = v_reuseFailAlloc_6210_;
goto v_reusejp_6208_;
}
v_reusejp_6208_:
{
return v___x_6209_;
}
}
}
}
}
}
else
{
lean_object* v___x_6218_; size_t v___x_6219_; size_t v___x_6220_; 
lean_del_object(v___x_6192_);
lean_dec(v_definition_x3f_6190_);
lean_del_object(v___x_6188_);
lean_dec(v_snd_6186_);
v___x_6218_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0___closed__0));
v___x_6219_ = ((size_t)1ULL);
v___x_6220_ = lean_usize_add(v_i_6177_, v___x_6219_);
v_i_6177_ = v___x_6220_;
v_b_6178_ = v___x_6218_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0___boxed(lean_object* v_as_6226_, lean_object* v_sz_6227_, lean_object* v_i_6228_, lean_object* v_b_6229_){
_start:
{
size_t v_sz_boxed_6230_; size_t v_i_boxed_6231_; lean_object* v_res_6232_; 
v_sz_boxed_6230_ = lean_unbox_usize(v_sz_6227_);
lean_dec(v_sz_6227_);
v_i_boxed_6231_ = lean_unbox_usize(v_i_6228_);
lean_dec(v_i_6228_);
v_res_6232_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0(v_as_6226_, v_sz_boxed_6230_, v_i_boxed_6231_, v_b_6229_);
lean_dec_ref(v_b_6229_);
lean_dec_ref(v_as_6226_);
return v_res_6232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionOf_x3f(lean_object* v_self_6233_, lean_object* v_ident_6234_){
_start:
{
lean_object* v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; size_t v_sz_6238_; size_t v___x_6239_; lean_object* v___x_6240_; lean_object* v_fst_6241_; 
v___x_6235_ = l_Lean_Server_References_allRefsFor(v_self_6233_, v_ident_6234_);
v___x_6236_ = lean_box(0);
v___x_6237_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0___closed__0));
v_sz_6238_ = lean_array_size(v___x_6235_);
v___x_6239_ = ((size_t)0ULL);
v___x_6240_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_References_definitionOf_x3f_spec__0(v___x_6235_, v_sz_6238_, v___x_6239_, v___x_6237_);
lean_dec_ref(v___x_6235_);
v_fst_6241_ = lean_ctor_get(v___x_6240_, 0);
lean_inc(v_fst_6241_);
lean_dec_ref(v___x_6240_);
if (lean_obj_tag(v_fst_6241_) == 0)
{
return v___x_6236_;
}
else
{
lean_object* v_val_6242_; 
v_val_6242_ = lean_ctor_get(v_fst_6241_, 0);
lean_inc(v_val_6242_);
lean_dec_ref_known(v_fst_6241_, 1);
return v_val_6242_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___redArg(lean_object* v_filterMapIdent_6243_, lean_object* v_a_6244_, lean_object* v_fst_6245_, lean_object* v_init_6246_, lean_object* v_x_6247_){
_start:
{
lean_object* v_d_6250_; 
if (lean_obj_tag(v_x_6247_) == 0)
{
lean_object* v_k_6252_; lean_object* v_v_6253_; lean_object* v_l_6254_; lean_object* v_r_6255_; lean_object* v___y_6257_; lean_object* v___x_6261_; 
v_k_6252_ = lean_ctor_get(v_x_6247_, 1);
lean_inc(v_k_6252_);
v_v_6253_ = lean_ctor_get(v_x_6247_, 2);
lean_inc(v_v_6253_);
v_l_6254_ = lean_ctor_get(v_x_6247_, 3);
lean_inc(v_l_6254_);
v_r_6255_ = lean_ctor_get(v_x_6247_, 4);
lean_inc(v_r_6255_);
lean_dec_ref_known(v_x_6247_, 5);
lean_inc_ref(v_fst_6245_);
lean_inc(v_a_6244_);
lean_inc_ref(v_filterMapIdent_6243_);
v___x_6261_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___redArg(v_filterMapIdent_6243_, v_a_6244_, v_fst_6245_, v_init_6246_, v_l_6254_);
if (lean_obj_tag(v___x_6261_) == 0)
{
lean_object* v_a_6262_; 
lean_dec(v_r_6255_);
lean_dec(v_v_6253_);
lean_dec(v_k_6252_);
lean_dec_ref(v_fst_6245_);
lean_dec(v_a_6244_);
lean_dec_ref(v_filterMapIdent_6243_);
v_a_6262_ = lean_ctor_get(v___x_6261_, 0);
lean_inc(v_a_6262_);
lean_dec_ref_known(v___x_6261_, 1);
v_d_6250_ = v_a_6262_;
goto v___jp_6249_;
}
else
{
if (lean_obj_tag(v_k_6252_) == 0)
{
lean_object* v_definition_x3f_6263_; 
v_definition_x3f_6263_ = lean_ctor_get(v_v_6253_, 0);
lean_inc(v_definition_x3f_6263_);
lean_dec(v_v_6253_);
if (lean_obj_tag(v_definition_x3f_6263_) == 1)
{
lean_object* v_a_6264_; lean_object* v_identName_6265_; lean_object* v_val_6266_; lean_object* v___x_6267_; lean_object* v___x_6268_; 
v_a_6264_ = lean_ctor_get(v___x_6261_, 0);
lean_inc(v_a_6264_);
v_identName_6265_ = lean_ctor_get(v_k_6252_, 1);
lean_inc_ref(v_identName_6265_);
lean_dec_ref_known(v_k_6252_, 2);
v_val_6266_ = lean_ctor_get(v_definition_x3f_6263_, 0);
lean_inc(v_val_6266_);
lean_dec_ref_known(v_definition_x3f_6263_, 1);
v___x_6267_ = l_String_toName(v_identName_6265_);
lean_inc_ref(v_filterMapIdent_6243_);
v___x_6268_ = lean_apply_1(v_filterMapIdent_6243_, v___x_6267_);
if (lean_obj_tag(v___x_6268_) == 1)
{
lean_object* v_val_6269_; lean_object* v___x_6270_; lean_object* v___x_6271_; lean_object* v___x_6272_; 
lean_dec_ref_known(v___x_6261_, 1);
v_val_6269_ = lean_ctor_get(v___x_6268_, 0);
lean_inc(v_val_6269_);
lean_dec_ref_known(v___x_6268_, 1);
v___x_6270_ = l_Lean_Lsp_RefInfo_Location_range(v_val_6266_);
lean_dec(v_val_6266_);
lean_inc_ref(v_fst_6245_);
lean_inc(v_a_6244_);
v___x_6271_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6271_, 0, v_a_6244_);
lean_ctor_set(v___x_6271_, 1, v_fst_6245_);
lean_ctor_set(v___x_6271_, 2, v_val_6269_);
lean_ctor_set(v___x_6271_, 3, v___x_6270_);
v___x_6272_ = lean_array_push(v_a_6264_, v___x_6271_);
v_init_6246_ = v___x_6272_;
v_x_6247_ = v_r_6255_;
goto _start;
}
else
{
lean_dec(v___x_6268_);
lean_dec(v_val_6266_);
lean_dec(v_a_6264_);
v___y_6257_ = v___x_6261_;
goto v___jp_6256_;
}
}
else
{
lean_dec_ref_known(v_k_6252_, 2);
lean_dec(v_definition_x3f_6263_);
v___y_6257_ = v___x_6261_;
goto v___jp_6256_;
}
}
else
{
lean_dec(v_v_6253_);
lean_dec(v_k_6252_);
v___y_6257_ = v___x_6261_;
goto v___jp_6256_;
}
}
v___jp_6256_:
{
if (lean_obj_tag(v___y_6257_) == 0)
{
lean_object* v_a_6258_; 
lean_dec(v_r_6255_);
lean_dec_ref(v_fst_6245_);
lean_dec(v_a_6244_);
lean_dec_ref(v_filterMapIdent_6243_);
v_a_6258_ = lean_ctor_get(v___y_6257_, 0);
lean_inc(v_a_6258_);
lean_dec_ref_known(v___y_6257_, 1);
v_d_6250_ = v_a_6258_;
goto v___jp_6249_;
}
else
{
lean_object* v_a_6259_; 
v_a_6259_ = lean_ctor_get(v___y_6257_, 0);
lean_inc(v_a_6259_);
lean_dec_ref_known(v___y_6257_, 1);
v_init_6246_ = v_a_6259_;
v_x_6247_ = v_r_6255_;
goto _start;
}
}
}
else
{
lean_object* v___x_6274_; 
lean_dec_ref(v_fst_6245_);
lean_dec(v_a_6244_);
lean_dec_ref(v_filterMapIdent_6243_);
v___x_6274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6274_, 0, v_init_6246_);
return v___x_6274_;
}
v___jp_6249_:
{
lean_object* v___x_6251_; 
v___x_6251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6251_, 0, v_d_6250_);
return v___x_6251_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___redArg___boxed(lean_object* v_filterMapIdent_6275_, lean_object* v_a_6276_, lean_object* v_fst_6277_, lean_object* v_init_6278_, lean_object* v_x_6279_, lean_object* v___y_6280_){
_start:
{
lean_object* v_res_6281_; 
v_res_6281_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___redArg(v_filterMapIdent_6275_, v_a_6276_, v_fst_6277_, v_init_6278_, v_x_6279_);
return v_res_6281_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___redArg(lean_object* v_filterMapIdent_6282_, lean_object* v_cancelTk_x3f_6283_, lean_object* v_init_6284_, lean_object* v_x_6285_){
_start:
{
lean_object* v_d_6288_; 
if (lean_obj_tag(v_x_6285_) == 0)
{
lean_object* v_k_6290_; lean_object* v_v_6291_; lean_object* v_l_6292_; lean_object* v_r_6293_; lean_object* v___x_6294_; lean_object* v_val_6296_; lean_object* v___x_6299_; 
v_k_6290_ = lean_ctor_get(v_x_6285_, 1);
lean_inc(v_k_6290_);
v_v_6291_ = lean_ctor_get(v_x_6285_, 2);
lean_inc(v_v_6291_);
v_l_6292_ = lean_ctor_get(v_x_6285_, 3);
lean_inc(v_l_6292_);
v_r_6293_ = lean_ctor_get(v_x_6285_, 4);
lean_inc(v_r_6293_);
lean_dec_ref_known(v_x_6285_, 5);
v___x_6294_ = lean_box(0);
lean_inc(v_cancelTk_x3f_6283_);
lean_inc_ref(v_filterMapIdent_6282_);
v___x_6299_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___redArg(v_filterMapIdent_6282_, v_cancelTk_x3f_6283_, v_init_6284_, v_l_6292_);
if (lean_obj_tag(v___x_6299_) == 0)
{
lean_object* v_a_6300_; 
lean_dec(v_r_6293_);
lean_dec(v_v_6291_);
lean_dec(v_k_6290_);
lean_dec(v_cancelTk_x3f_6283_);
lean_dec_ref(v_filterMapIdent_6282_);
v_a_6300_ = lean_ctor_get(v___x_6299_, 0);
lean_inc(v_a_6300_);
lean_dec_ref_known(v___x_6299_, 1);
v_d_6288_ = v_a_6300_;
goto v___jp_6287_;
}
else
{
lean_object* v_snd_6301_; lean_object* v_a_6302_; lean_object* v_fst_6303_; lean_object* v_fst_6304_; lean_object* v_snd_6305_; lean_object* v___x_6307_; uint8_t v_isShared_6308_; uint8_t v_isSharedCheck_6325_; 
v_snd_6301_ = lean_ctor_get(v_v_6291_, 1);
lean_inc(v_snd_6301_);
v_a_6302_ = lean_ctor_get(v___x_6299_, 0);
lean_inc(v_a_6302_);
lean_dec_ref_known(v___x_6299_, 1);
v_fst_6303_ = lean_ctor_get(v_v_6291_, 0);
lean_inc(v_fst_6303_);
lean_dec(v_v_6291_);
v_fst_6304_ = lean_ctor_get(v_snd_6301_, 0);
lean_inc(v_fst_6304_);
lean_dec(v_snd_6301_);
v_snd_6305_ = lean_ctor_get(v_a_6302_, 1);
v_isSharedCheck_6325_ = !lean_is_exclusive(v_a_6302_);
if (v_isSharedCheck_6325_ == 0)
{
lean_object* v_unused_6326_; 
v_unused_6326_ = lean_ctor_get(v_a_6302_, 0);
lean_dec(v_unused_6326_);
v___x_6307_ = v_a_6302_;
v_isShared_6308_ = v_isSharedCheck_6325_;
goto v_resetjp_6306_;
}
else
{
lean_inc(v_snd_6305_);
lean_dec(v_a_6302_);
v___x_6307_ = lean_box(0);
v_isShared_6308_ = v_isSharedCheck_6325_;
goto v_resetjp_6306_;
}
v_resetjp_6306_:
{
if (lean_obj_tag(v_cancelTk_x3f_6283_) == 1)
{
lean_object* v_val_6312_; uint8_t v___x_6313_; 
v_val_6312_ = lean_ctor_get(v_cancelTk_x3f_6283_, 0);
v___x_6313_ = l_IO_CancelToken_isSet(v_val_6312_);
if (v___x_6313_ == 0)
{
lean_del_object(v___x_6307_);
goto v___jp_6309_;
}
else
{
lean_object* v___x_6315_; uint8_t v_isShared_6316_; uint8_t v_isSharedCheck_6323_; 
lean_dec(v_fst_6304_);
lean_dec(v_fst_6303_);
lean_dec(v_r_6293_);
lean_dec(v_k_6290_);
lean_dec_ref(v_filterMapIdent_6282_);
v_isSharedCheck_6323_ = !lean_is_exclusive(v_cancelTk_x3f_6283_);
if (v_isSharedCheck_6323_ == 0)
{
lean_object* v_unused_6324_; 
v_unused_6324_ = lean_ctor_get(v_cancelTk_x3f_6283_, 0);
lean_dec(v_unused_6324_);
v___x_6315_ = v_cancelTk_x3f_6283_;
v_isShared_6316_ = v_isSharedCheck_6323_;
goto v_resetjp_6314_;
}
else
{
lean_dec(v_cancelTk_x3f_6283_);
v___x_6315_ = lean_box(0);
v_isShared_6316_ = v_isSharedCheck_6323_;
goto v_resetjp_6314_;
}
v_resetjp_6314_:
{
lean_object* v___x_6318_; 
lean_inc(v_snd_6305_);
if (v_isShared_6316_ == 0)
{
lean_ctor_set(v___x_6315_, 0, v_snd_6305_);
v___x_6318_ = v___x_6315_;
goto v_reusejp_6317_;
}
else
{
lean_object* v_reuseFailAlloc_6322_; 
v_reuseFailAlloc_6322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6322_, 0, v_snd_6305_);
v___x_6318_ = v_reuseFailAlloc_6322_;
goto v_reusejp_6317_;
}
v_reusejp_6317_:
{
lean_object* v___x_6320_; 
if (v_isShared_6308_ == 0)
{
lean_ctor_set(v___x_6307_, 0, v___x_6318_);
v___x_6320_ = v___x_6307_;
goto v_reusejp_6319_;
}
else
{
lean_object* v_reuseFailAlloc_6321_; 
v_reuseFailAlloc_6321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6321_, 0, v___x_6318_);
lean_ctor_set(v_reuseFailAlloc_6321_, 1, v_snd_6305_);
v___x_6320_ = v_reuseFailAlloc_6321_;
goto v_reusejp_6319_;
}
v_reusejp_6319_:
{
v_d_6288_ = v___x_6320_;
goto v___jp_6287_;
}
}
}
}
}
else
{
lean_del_object(v___x_6307_);
goto v___jp_6309_;
}
v___jp_6309_:
{
lean_object* v___x_6310_; lean_object* v_a_6311_; 
lean_inc_ref(v_filterMapIdent_6282_);
v___x_6310_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___redArg(v_filterMapIdent_6282_, v_k_6290_, v_fst_6303_, v_snd_6305_, v_fst_6304_);
v_a_6311_ = lean_ctor_get(v___x_6310_, 0);
lean_inc(v_a_6311_);
lean_dec_ref(v___x_6310_);
v_val_6296_ = v_a_6311_;
goto v___jp_6295_;
}
}
}
v___jp_6295_:
{
lean_object* v___x_6297_; 
v___x_6297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6297_, 0, v___x_6294_);
lean_ctor_set(v___x_6297_, 1, v_val_6296_);
v_init_6284_ = v___x_6297_;
v_x_6285_ = v_r_6293_;
goto _start;
}
}
else
{
lean_object* v___x_6327_; 
lean_dec(v_cancelTk_x3f_6283_);
lean_dec_ref(v_filterMapIdent_6282_);
v___x_6327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6327_, 0, v_init_6284_);
return v___x_6327_;
}
v___jp_6287_:
{
lean_object* v___x_6289_; 
v___x_6289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6289_, 0, v_d_6288_);
return v___x_6289_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___redArg___boxed(lean_object* v_filterMapIdent_6328_, lean_object* v_cancelTk_x3f_6329_, lean_object* v_init_6330_, lean_object* v_x_6331_, lean_object* v___y_6332_){
_start:
{
lean_object* v_res_6333_; 
v_res_6333_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___redArg(v_filterMapIdent_6328_, v_cancelTk_x3f_6329_, v_init_6330_, v_x_6331_);
return v_res_6333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching___redArg(lean_object* v_self_6339_, lean_object* v_filterMapIdent_6340_, lean_object* v_cancelTk_x3f_6341_){
_start:
{
lean_object* v_val_6344_; lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; lean_object* v_a_6351_; 
v___x_6348_ = l_Lean_Server_References_allRefs(v_self_6339_);
v___x_6349_ = ((lean_object*)(l_Lean_Server_References_definitionsMatching___redArg___closed__1));
v___x_6350_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___redArg(v_filterMapIdent_6340_, v_cancelTk_x3f_6341_, v___x_6349_, v___x_6348_);
v_a_6351_ = lean_ctor_get(v___x_6350_, 0);
lean_inc(v_a_6351_);
lean_dec_ref(v___x_6350_);
v_val_6344_ = v_a_6351_;
goto v___jp_6343_;
v___jp_6343_:
{
lean_object* v_fst_6345_; 
v_fst_6345_ = lean_ctor_get(v_val_6344_, 0);
if (lean_obj_tag(v_fst_6345_) == 0)
{
lean_object* v_snd_6346_; 
v_snd_6346_ = lean_ctor_get(v_val_6344_, 1);
lean_inc(v_snd_6346_);
lean_dec_ref(v_val_6344_);
return v_snd_6346_;
}
else
{
lean_object* v_val_6347_; 
lean_inc_ref(v_fst_6345_);
lean_dec_ref(v_val_6344_);
v_val_6347_ = lean_ctor_get(v_fst_6345_, 0);
lean_inc(v_val_6347_);
lean_dec_ref_known(v_fst_6345_, 1);
return v_val_6347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching___redArg___boxed(lean_object* v_self_6352_, lean_object* v_filterMapIdent_6353_, lean_object* v_cancelTk_x3f_6354_, lean_object* v___y_6355_){
_start:
{
lean_object* v_res_6356_; 
v_res_6356_ = l_Lean_Server_References_definitionsMatching___redArg(v_self_6352_, v_filterMapIdent_6353_, v_cancelTk_x3f_6354_);
return v_res_6356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching(lean_object* v_00_u03b1_6357_, lean_object* v_self_6358_, lean_object* v_filterMapIdent_6359_, lean_object* v_cancelTk_x3f_6360_){
_start:
{
lean_object* v___x_6362_; 
v___x_6362_ = l_Lean_Server_References_definitionsMatching___redArg(v_self_6358_, v_filterMapIdent_6359_, v_cancelTk_x3f_6360_);
return v___x_6362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_definitionsMatching___boxed(lean_object* v_00_u03b1_6363_, lean_object* v_self_6364_, lean_object* v_filterMapIdent_6365_, lean_object* v_cancelTk_x3f_6366_, lean_object* v___y_6367_){
_start:
{
lean_object* v_res_6368_; 
v_res_6368_ = l_Lean_Server_References_definitionsMatching(v_00_u03b1_6363_, v_self_6364_, v_filterMapIdent_6365_, v_cancelTk_x3f_6366_);
return v_res_6368_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0(lean_object* v_00_u03b1_6369_, lean_object* v_filterMapIdent_6370_, lean_object* v_a_6371_, lean_object* v_fst_6372_, lean_object* v_init_6373_, lean_object* v_x_6374_){
_start:
{
lean_object* v___x_6376_; 
v___x_6376_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___redArg(v_filterMapIdent_6370_, v_a_6371_, v_fst_6372_, v_init_6373_, v_x_6374_);
return v___x_6376_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0___boxed(lean_object* v_00_u03b1_6377_, lean_object* v_filterMapIdent_6378_, lean_object* v_a_6379_, lean_object* v_fst_6380_, lean_object* v_init_6381_, lean_object* v_x_6382_, lean_object* v___y_6383_){
_start:
{
lean_object* v_res_6384_; 
v_res_6384_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__0(v_00_u03b1_6377_, v_filterMapIdent_6378_, v_a_6379_, v_fst_6380_, v_init_6381_, v_x_6382_);
return v_res_6384_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1(lean_object* v_00_u03b1_6385_, lean_object* v_filterMapIdent_6386_, lean_object* v_cancelTk_x3f_6387_, lean_object* v_init_6388_, lean_object* v_x_6389_){
_start:
{
lean_object* v___x_6391_; 
v___x_6391_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___redArg(v_filterMapIdent_6386_, v_cancelTk_x3f_6387_, v_init_6388_, v_x_6389_);
return v___x_6391_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1___boxed(lean_object* v_00_u03b1_6392_, lean_object* v_filterMapIdent_6393_, lean_object* v_cancelTk_x3f_6394_, lean_object* v_init_6395_, lean_object* v_x_6396_, lean_object* v___y_6397_){
_start:
{
lean_object* v_res_6398_; 
v_res_6398_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_definitionsMatching_spec__1(v_00_u03b1_6392_, v_filterMapIdent_6393_, v_cancelTk_x3f_6394_, v_init_6395_, v_x_6396_);
return v_res_6398_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_References_importedBy_spec__0(lean_object* v_msg_6399_){
_start:
{
lean_object* v___x_6400_; lean_object* v___x_6401_; 
v___x_6400_ = ((lean_object*)(l_Lean_Server_instInhabitedModuleImport_default));
v___x_6401_ = lean_panic_fn_borrowed(v___x_6400_, v_msg_6399_);
return v___x_6401_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__3(void){
_start:
{
lean_object* v___x_6405_; lean_object* v___x_6406_; lean_object* v___x_6407_; lean_object* v___x_6408_; lean_object* v___x_6409_; lean_object* v___x_6410_; 
v___x_6405_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__2));
v___x_6406_ = lean_unsigned_to_nat(14u);
v___x_6407_ = lean_unsigned_to_nat(22u);
v___x_6408_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__1));
v___x_6409_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__0));
v___x_6410_ = l_mkPanicMessageWithDecl(v___x_6409_, v___x_6408_, v___x_6407_, v___x_6406_, v___x_6405_);
return v___x_6410_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1(lean_object* v_requestedMod_6411_, lean_object* v_init_6412_, lean_object* v_x_6413_){
_start:
{
if (lean_obj_tag(v_x_6413_) == 0)
{
lean_object* v_k_6414_; lean_object* v_v_6415_; lean_object* v_l_6416_; lean_object* v_r_6417_; lean_object* v___x_6418_; lean_object* v_a_6419_; lean_object* v_fst_6420_; lean_object* v_snd_6421_; lean_object* v___y_6423_; lean_object* v_index_6438_; lean_object* v___x_6439_; 
v_k_6414_ = lean_ctor_get(v_x_6413_, 1);
v_v_6415_ = lean_ctor_get(v_x_6413_, 2);
v_l_6416_ = lean_ctor_get(v_x_6413_, 3);
v_r_6417_ = lean_ctor_get(v_x_6413_, 4);
v___x_6418_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1(v_requestedMod_6411_, v_init_6412_, v_l_6416_);
v_a_6419_ = lean_ctor_get(v___x_6418_, 0);
lean_inc(v_a_6419_);
v_fst_6420_ = lean_ctor_get(v_v_6415_, 0);
v_snd_6421_ = lean_ctor_get(v_v_6415_, 1);
v_index_6438_ = lean_ctor_get(v_snd_6421_, 1);
v___x_6439_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Server_References_updateWorkerSetupInfo_spec__0___redArg(v_index_6438_, v_requestedMod_6411_);
if (lean_obj_tag(v___x_6439_) == 1)
{
lean_object* v_val_6440_; lean_object* v___x_6441_; 
lean_dec_ref(v___x_6418_);
v_val_6440_ = lean_ctor_get(v___x_6439_, 0);
lean_inc(v_val_6440_);
lean_dec_ref_known(v___x_6439_, 1);
v___x_6441_ = l_Lean_Server_ModuleImport_collapseIdenticalImports_x3f(v_val_6440_);
lean_dec(v_val_6440_);
if (lean_obj_tag(v___x_6441_) == 0)
{
lean_object* v___x_6442_; lean_object* v___x_6443_; 
v___x_6442_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__3, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___closed__3);
v___x_6443_ = l_panic___at___00Lean_Server_References_importedBy_spec__0(v___x_6442_);
v___y_6423_ = v___x_6443_;
goto v___jp_6422_;
}
else
{
lean_object* v_val_6444_; 
v_val_6444_ = lean_ctor_get(v___x_6441_, 0);
lean_inc(v_val_6444_);
lean_dec_ref_known(v___x_6441_, 1);
v___y_6423_ = v_val_6444_;
goto v___jp_6422_;
}
}
else
{
lean_object* v_a_6445_; 
lean_dec(v___x_6439_);
lean_dec(v_a_6419_);
v_a_6445_ = lean_ctor_get(v___x_6418_, 0);
lean_inc(v_a_6445_);
lean_dec_ref(v___x_6418_);
v_init_6412_ = v_a_6445_;
v_x_6413_ = v_r_6417_;
goto _start;
}
v___jp_6422_:
{
uint8_t v_isAll_6424_; uint8_t v_isPrivate_6425_; uint8_t v_metaKind_6426_; lean_object* v___x_6428_; uint8_t v_isShared_6429_; uint8_t v_isSharedCheck_6435_; 
v_isAll_6424_ = lean_ctor_get_uint8(v___y_6423_, sizeof(void*)*2);
v_isPrivate_6425_ = lean_ctor_get_uint8(v___y_6423_, sizeof(void*)*2 + 1);
v_metaKind_6426_ = lean_ctor_get_uint8(v___y_6423_, sizeof(void*)*2 + 2);
v_isSharedCheck_6435_ = !lean_is_exclusive(v___y_6423_);
if (v_isSharedCheck_6435_ == 0)
{
lean_object* v_unused_6436_; lean_object* v_unused_6437_; 
v_unused_6436_ = lean_ctor_get(v___y_6423_, 1);
lean_dec(v_unused_6436_);
v_unused_6437_ = lean_ctor_get(v___y_6423_, 0);
lean_dec(v_unused_6437_);
v___x_6428_ = v___y_6423_;
v_isShared_6429_ = v_isSharedCheck_6435_;
goto v_resetjp_6427_;
}
else
{
lean_dec(v___y_6423_);
v___x_6428_ = lean_box(0);
v_isShared_6429_ = v_isSharedCheck_6435_;
goto v_resetjp_6427_;
}
v_resetjp_6427_:
{
lean_object* v___x_6431_; 
lean_inc(v_fst_6420_);
lean_inc(v_k_6414_);
if (v_isShared_6429_ == 0)
{
lean_ctor_set(v___x_6428_, 1, v_fst_6420_);
lean_ctor_set(v___x_6428_, 0, v_k_6414_);
v___x_6431_ = v___x_6428_;
goto v_reusejp_6430_;
}
else
{
lean_object* v_reuseFailAlloc_6434_; 
v_reuseFailAlloc_6434_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_6434_, 0, v_k_6414_);
lean_ctor_set(v_reuseFailAlloc_6434_, 1, v_fst_6420_);
lean_ctor_set_uint8(v_reuseFailAlloc_6434_, sizeof(void*)*2, v_isAll_6424_);
lean_ctor_set_uint8(v_reuseFailAlloc_6434_, sizeof(void*)*2 + 1, v_isPrivate_6425_);
lean_ctor_set_uint8(v_reuseFailAlloc_6434_, sizeof(void*)*2 + 2, v_metaKind_6426_);
v___x_6431_ = v_reuseFailAlloc_6434_;
goto v_reusejp_6430_;
}
v_reusejp_6430_:
{
lean_object* v___x_6432_; 
v___x_6432_ = lean_array_push(v_a_6419_, v___x_6431_);
v_init_6412_ = v___x_6432_;
v_x_6413_ = v_r_6417_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_6447_; 
v___x_6447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6447_, 0, v_init_6412_);
return v___x_6447_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1___boxed(lean_object* v_requestedMod_6448_, lean_object* v_init_6449_, lean_object* v_x_6450_){
_start:
{
lean_object* v_res_6451_; 
v_res_6451_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1(v_requestedMod_6448_, v_init_6449_, v_x_6450_);
lean_dec(v_x_6450_);
lean_dec(v_requestedMod_6448_);
return v_res_6451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_importedBy(lean_object* v_self_6452_, lean_object* v_requestedMod_6453_){
_start:
{
lean_object* v_result_6454_; lean_object* v___x_6455_; lean_object* v___x_6456_; lean_object* v_a_6457_; 
v_result_6454_ = ((lean_object*)(l_Lean_Server_instEmptyCollectionDirectImports___closed__0));
v___x_6455_ = l_Lean_Server_References_allDirectImports(v_self_6452_);
v___x_6456_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Server_References_importedBy_spec__1(v_requestedMod_6453_, v_result_6454_, v___x_6455_);
lean_dec(v___x_6455_);
v_a_6457_ = lean_ctor_get(v___x_6456_, 0);
lean_inc(v_a_6457_);
lean_dec_ref(v___x_6456_);
return v_a_6457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_References_importedBy___boxed(lean_object* v_self_6458_, lean_object* v_requestedMod_6459_){
_start:
{
lean_object* v_res_6460_; 
v_res_6460_ = l_Lean_Server_References_importedBy(v_self_6458_, v_requestedMod_6459_);
lean_dec(v_requestedMod_6459_);
return v_res_6460_;
}
}
lean_object* runtime_initialize_Lean_Data_Lsp_Internal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Utils(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Import(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_References(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Lsp_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_References(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp_Internal(uint8_t builtin);
lean_object* initialize_Lean_Server_Utils(uint8_t builtin);
lean_object* initialize_Lean_Elab_Import(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_References(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_References(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_References(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_References(builtin);
}
#ifdef __cplusplus
}
#endif
