// Lean compiler output
// Module: Lean.Server.Rpc.Deriving
// Imports: public import Lean.Elab.Deriving.Basic
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Parser_termParser(lean_object*);
lean_object* l_Lean_Parser_Term_matchAlt(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l_Lean_Server_RpcEncodable_isOptField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Server_RpcEncodable_isOptField___closed__0 = (const lean_object*)&l_Lean_Server_RpcEncodable_isOptField___closed__0_value;
static lean_once_cell_t l_Lean_Server_RpcEncodable_isOptField___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RpcEncodable_isOptField___closed__1;
LEAN_EXPORT uint8_t l_Lean_Server_RpcEncodable_isOptField(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RpcEncodable_isOptField___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "structExplicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__8_value),LEAN_SCALAR_PTR_LITERAL(156, 255, 55, 101, 203, 12, 116, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__11_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "RpcEncodable"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Json"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(190, 18, 71, 130, 82, 255, 111, 18)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__5_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__6_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__8_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__18_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(115, 27, 24, 243, 204, 49, 153, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__21_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__23_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rpcEncode"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(181, 130, 28, 14, 164, 108, 68, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 192, 180, 137, 118, 34, 3, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(147, 95, 3, 206, 143, 66, 59, 169)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__30_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__32_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rpcDecode"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(18, 61, 22, 59, 236, 209, 187, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 192, 180, 137, 118, 34, 3, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(220, 0, 93, 28, 42, 216, 37, 123)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__42 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__42_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__42_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__47 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__47_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__48_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__49 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__49_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__49_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__50 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__50_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__47_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__50_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__51 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__51_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__52 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__52_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__52_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__54 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__54_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__56 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__56_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 192, 180, 137, 118, 34, 3, 132)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__61_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__63_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(247, 100, 102, 194, 167, 62, 107, 182)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__66_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__68_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__70_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__72_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__74 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__74_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__74_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__75 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__75_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__75_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__76 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__76_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__76_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__77 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__77_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__77_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__78 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__78_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__78_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__79 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__79_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__79_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__80 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__80_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mapM"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__81 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__81_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__81_value),LEAN_SCALAR_PTR_LITERAL(58, 78, 170, 251, 181, 31, 172, 28)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "__rpcref"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__84 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__84_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__84_value),LEAN_SCALAR_PTR_LITERAL(120, 248, 178, 198, 26, 146, 90, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__85 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__85_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "'__rpcref' is reserved and cannot be used as a field name. See the `RpcEncodable` docstring."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__86 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__86_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__1 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__1_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__2 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__2_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__0_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__2_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__3 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__3_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__4 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__4_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__4_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__6 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__6_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "structure"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8_value),LEAN_SCALAR_PTR_LITERAL(180, 236, 187, 15, 83, 171, 117, 65)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "structureTk"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__10 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__10_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__10_value),LEAN_SCALAR_PTR_LITERAL(132, 164, 13, 167, 248, 219, 132, 242)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__12 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__12_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__12_value),LEAN_SCALAR_PTR_LITERAL(104, 186, 248, 230, 72, 158, 210, 227)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__14 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__14_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__14_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "RpcEncodablePacket"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16_value),LEAN_SCALAR_PTR_LITERAL(59, 154, 188, 20, 17, 205, 207, 181)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "where"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "structFields"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__20 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__20_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__20_value),LEAN_SCALAR_PTR_LITERAL(162, 20, 124, 55, 90, 140, 156, 83)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optDeriving"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__22 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__22_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__22_value),LEAN_SCALAR_PTR_LITERAL(215, 163, 253, 206, 79, 89, 101, 240)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "deriving"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "derivingClass"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__25_value),LEAN_SCALAR_PTR_LITERAL(71, 164, 144, 68, 145, 86, 212, 243)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "FromJson"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27_value),LEAN_SCALAR_PTR_LITERAL(9, 26, 128, 190, 189, 230, 248, 17)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__29 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__29_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27_value),LEAN_SCALAR_PTR_LITERAL(56, 129, 161, 88, 112, 64, 72, 138)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__31 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__31_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__30_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__32 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__32_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__31_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__33_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ToJson"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36_value),LEAN_SCALAR_PTR_LITERAL(90, 244, 120, 131, 70, 154, 113, 6)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__38 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__38_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36_value),LEAN_SCALAR_PTR_LITERAL(59, 61, 164, 230, 181, 158, 5, 186)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__40 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__40_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__39_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__41 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__41_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__41_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__40_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__42_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44_value),LEAN_SCALAR_PTR_LITERAL(65, 79, 35, 19, 21, 38, 89, 10)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "variable"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46_value),LEAN_SCALAR_PTR_LITERAL(250, 93, 226, 106, 76, 14, 69, 165)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__50 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__50_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__50_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__52_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 110, 25, 5, 88, 138, 0, 41)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__56 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__56_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__57 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__57_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__56_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__57_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__58 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__58_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__73_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__59 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__59_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__71_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__59_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__60 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__60_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__69_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__60_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__61 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__61_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__61_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__62 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__62_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__64_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__62_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__63 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__63_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__63_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__64 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__64_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__64_value)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__66 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__66_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__66_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__69 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__69_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__69_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__71 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__71_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__71_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__74 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__74_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__74_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__76 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__76_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__76_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "enc"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78_value),LEAN_SCALAR_PTR_LITERAL(127, 112, 184, 188, 166, 208, 172, 147)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__41_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__81 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__81_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__81_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dec"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 154, 178, 201, 214, 183, 192)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__86 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__86_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__86_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__88 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__88_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__90 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__90_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_1),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__89_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__90_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "whereDecls"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__92 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__92_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__92_value),LEAN_SCALAR_PTR_LITERAL(51, 156, 180, 247, 37, 30, 126, 62)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letRecDecl"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__94 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__94_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__94_value),LEAN_SCALAR_PTR_LITERAL(202, 48, 93, 231, 206, 172, 150, 190)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__96 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__96_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__96_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__98 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__98_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__98_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__100 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__100_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__100_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "termReturn"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__102 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__102_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__102_value),LEAN_SCALAR_PTR_LITERAL(199, 245, 184, 22, 191, 152, 219, 48)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "return"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toJson"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105_value),LEAN_SCALAR_PTR_LITERAL(112, 200, 227, 76, 90, 242, 6, 135)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__107 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__107_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36_value),LEAN_SCALAR_PTR_LITERAL(59, 61, 164, 230, 181, 158, 5, 186)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108_value_aux_1),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105_value),LEAN_SCALAR_PTR_LITERAL(240, 112, 235, 135, 88, 35, 83, 81)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__108_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__109_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "j"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112_value),LEAN_SCALAR_PTR_LITERAL(71, 110, 153, 29, 75, 133, 244, 52)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__117 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__117_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__117_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__119 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__119_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__119_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__121 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__121_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__121_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__124 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__124_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__124_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__126_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fromJson\?"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128_value),LEAN_SCALAR_PTR_LITERAL(3, 54, 193, 250, 66, 68, 188, 53)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__130 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__130_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27_value),LEAN_SCALAR_PTR_LITERAL(56, 129, 161, 88, 112, 64, 72, 138)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131_value_aux_1),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128_value),LEAN_SCALAR_PTR_LITERAL(196, 88, 105, 59, 236, 221, 213, 61)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__131_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__132 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__132_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__132_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__134_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137_value_aux_0),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136_value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 131, 12, 184, 158, 202, 243, 28)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__138_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__139 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__139_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "for structure "};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__141 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__141_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " with params "};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__143 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__143_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__144_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__144;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___closed__0 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1_value)} };
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "'__rpcref' is reserved and cannot be used as an argument name. See the `RpcEncodable` docstring."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ctor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 61, 118, 113, 180, 158, 239, 32)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "constructor name not a string: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inductive"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 178, 72, 69, 244, 64, 6, 60)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 175, 198, 167, 172, 79, 14, 207)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "have"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(55, 91, 239, 116, 115, 0, 62, 115)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "inst"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7_value),LEAN_SCALAR_PTR_LITERAL(170, 188, 240, 205, 110, 63, 170, 91)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__9 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__9_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__12 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__12_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__12_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__14 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__14_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__15 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__15_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__15_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__17 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__17_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__17_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pkt"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19_value),LEAN_SCALAR_PTR_LITERAL(182, 192, 230, 127, 128, 175, 248, 240)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__21 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__21_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_<|_"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__22 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__22_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__22_value),LEAN_SCALAR_PTR_LITERAL(152, 38, 96, 140, 215, 46, 31, 82)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__23 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__23_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__27 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__27_value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__28 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__28_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<|"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__29 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__29_value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "for inductive "};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__30 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__30_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__3_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__4_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "indexed inductive families are not supported"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__0 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "mutually inductive types are not supported"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__2 = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__2_value;
static lean_once_cell_t l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__0_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__0_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__0_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__1_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__1_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__1_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__1_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__2_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__3_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(79, 45, 83, 138, 97, 177, 55, 171)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rpc"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__4_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(92, 191, 146, 242, 66, 17, 254, 170)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__6_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136_value),LEAN_SCALAR_PTR_LITERAL(158, 127, 243, 163, 48, 99, 68, 29)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__7_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(103, 87, 172, 78, 42, 229, 166, 12)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__8_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 39, 125, 197, 167, 200, 226, 135)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__9_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(79, 198, 180, 110, 20, 95, 155, 100)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__10_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 214, 222, 162, 111, 144, 143, 232)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__12_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__12_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__12_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__11_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__12_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 1, 218, 74, 254, 184, 128, 80)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__14_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__14_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__14_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__13_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__14_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(169, 167, 112, 150, 119, 225, 52, 250)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__15_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 60, 176, 162, 23, 211, 36, 203)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__16_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(201, 123, 171, 151, 210, 10, 201, 136)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__17_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__5_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(178, 91, 41, 51, 232, 164, 71, 24)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__18_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__136_value),LEAN_SCALAR_PTR_LITERAL(232, 134, 14, 149, 197, 132, 95, 130)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__19_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)(((size_t)(198155338) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(176, 10, 214, 168, 206, 250, 43, 6)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__21_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__21_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__21_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__20_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__21_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 61, 5, 155, 136, 186, 134, 171)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__23_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__23_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__23_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__22_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__23_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(175, 244, 206, 133, 19, 32, 154, 234)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__24_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(170, 1, 9, 6, 68, 226, 179, 52)}};
static const lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Server_RpcEncodable_isOptField___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(l_Lean_Server_RpcEncodable_isOptField___closed__0));
v___x_3_ = lean_string_utf8_byte_size(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_RpcEncodable_isOptField(lean_object* v_n_4_){
_start:
{
uint8_t v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_5_ = 1;
v___x_6_ = l_Lean_Name_toString(v_n_4_, v___x_5_);
v___x_7_ = ((lean_object*)(l_Lean_Server_RpcEncodable_isOptField___closed__0));
v___x_8_ = lean_string_utf8_byte_size(v___x_6_);
v___x_9_ = lean_obj_once(&l_Lean_Server_RpcEncodable_isOptField___closed__1, &l_Lean_Server_RpcEncodable_isOptField___closed__1_once, _init_l_Lean_Server_RpcEncodable_isOptField___closed__1);
v___x_10_ = lean_nat_dec_le(v___x_9_, v___x_8_);
if (v___x_10_ == 0)
{
lean_dec_ref(v___x_6_);
return v___x_10_;
}
else
{
lean_object* v___x_11_; lean_object* v___x_12_; uint8_t v___x_13_; 
v___x_11_ = lean_unsigned_to_nat(0u);
v___x_12_ = lean_nat_sub(v___x_8_, v___x_9_);
v___x_13_ = lean_string_memcmp(v___x_6_, v___x_7_, v___x_12_, v___x_11_, v___x_9_);
lean_dec(v___x_12_);
lean_dec_ref(v___x_6_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RpcEncodable_isOptField___boxed(lean_object* v_n_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Server_RpcEncodable_isOptField(v_n_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(size_t v_sz_17_, size_t v_i_18_, lean_object* v_bs_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = lean_usize_dec_lt(v_i_18_, v_sz_17_);
if (v___x_20_ == 0)
{
return v_bs_19_;
}
else
{
lean_object* v_v_21_; lean_object* v___x_22_; lean_object* v_bs_x27_23_; size_t v___x_24_; size_t v___x_25_; lean_object* v___x_26_; 
v_v_21_ = lean_array_uget(v_bs_19_, v_i_18_);
v___x_22_ = lean_unsigned_to_nat(0u);
v_bs_x27_23_ = lean_array_uset(v_bs_19_, v_i_18_, v___x_22_);
v___x_24_ = ((size_t)1ULL);
v___x_25_ = lean_usize_add(v_i_18_, v___x_24_);
v___x_26_ = lean_array_uset(v_bs_x27_23_, v_i_18_, v_v_21_);
v_i_18_ = v___x_25_;
v_bs_19_ = v___x_26_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5___boxed(lean_object* v_sz_28_, lean_object* v_i_29_, lean_object* v_bs_30_){
_start:
{
size_t v_sz_boxed_31_; size_t v_i_boxed_32_; lean_object* v_res_33_; 
v_sz_boxed_31_ = lean_unbox_usize(v_sz_28_);
lean_dec(v_sz_28_);
v_i_boxed_32_ = lean_unbox_usize(v_i_29_);
lean_dec(v_i_29_);
v_res_33_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_boxed_31_, v_i_boxed_32_, v_bs_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(size_t v_sz_34_, size_t v_i_35_, lean_object* v_bs_36_){
_start:
{
uint8_t v___x_37_; 
v___x_37_ = lean_usize_dec_lt(v_i_35_, v_sz_34_);
if (v___x_37_ == 0)
{
return v_bs_36_;
}
else
{
lean_object* v_v_38_; lean_object* v___x_39_; lean_object* v_bs_x27_40_; size_t v___x_41_; size_t v___x_42_; lean_object* v___x_43_; 
v_v_38_ = lean_array_uget(v_bs_36_, v_i_35_);
v___x_39_ = lean_unsigned_to_nat(0u);
v_bs_x27_40_ = lean_array_uset(v_bs_36_, v_i_35_, v___x_39_);
v___x_41_ = ((size_t)1ULL);
v___x_42_ = lean_usize_add(v_i_35_, v___x_41_);
v___x_43_ = lean_array_uset(v_bs_x27_40_, v_i_35_, v_v_38_);
v_i_35_ = v___x_42_;
v_bs_36_ = v___x_43_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4___boxed(lean_object* v_sz_45_, lean_object* v_i_46_, lean_object* v_bs_47_){
_start:
{
size_t v_sz_boxed_48_; size_t v_i_boxed_49_; lean_object* v_res_50_; 
v_sz_boxed_48_ = lean_unbox_usize(v_sz_45_);
lean_dec(v_sz_45_);
v_i_boxed_49_ = lean_unbox_usize(v_i_46_);
lean_dec(v_i_46_);
v_res_50_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(v_sz_boxed_48_, v_i_boxed_49_, v_bs_47_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(lean_object* v_msgData_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; lean_object* v_env_58_; lean_object* v___x_59_; lean_object* v_toCold_60_; lean_object* v_mctx_61_; lean_object* v_lctx_62_; lean_object* v_options_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_57_ = lean_st_ref_get(v___y_55_);
v_env_58_ = lean_ctor_get(v___x_57_, 0);
lean_inc_ref(v_env_58_);
lean_dec(v___x_57_);
v___x_59_ = lean_st_ref_get(v___y_53_);
v_toCold_60_ = lean_ctor_get(v___y_54_, 0);
v_mctx_61_ = lean_ctor_get(v___x_59_, 0);
lean_inc_ref(v_mctx_61_);
lean_dec(v___x_59_);
v_lctx_62_ = lean_ctor_get(v___y_52_, 2);
v_options_63_ = lean_ctor_get(v_toCold_60_, 2);
lean_inc_ref(v_options_63_);
lean_inc_ref(v_lctx_62_);
v___x_64_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_64_, 0, v_env_58_);
lean_ctor_set(v___x_64_, 1, v_mctx_61_);
lean_ctor_set(v___x_64_, 2, v_lctx_62_);
lean_ctor_set(v___x_64_, 3, v_options_63_);
v___x_65_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v_msgData_51_);
v___x_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0___boxed(lean_object* v_msgData_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(v_msgData_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
return v_res_73_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_74_; double v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lean_float_of_nat(v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(lean_object* v_cls_79_, lean_object* v_msg_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_ref_86_; lean_object* v___x_87_; lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_132_; 
v_ref_86_ = lean_ctor_get(v___y_83_, 2);
v___x_87_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(v_msg_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_);
v_a_88_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_132_ == 0)
{
v___x_90_ = v___x_87_;
v_isShared_91_ = v_isSharedCheck_132_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_dec(v___x_87_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_132_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_92_; lean_object* v_traceState_93_; lean_object* v_env_94_; lean_object* v_nextMacroScope_95_; lean_object* v_ngen_96_; lean_object* v_auxDeclNGen_97_; lean_object* v_cache_98_; lean_object* v_messages_99_; lean_object* v_infoState_100_; lean_object* v_snapshotTasks_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_131_; 
v___x_92_ = lean_st_ref_take(v___y_84_);
v_traceState_93_ = lean_ctor_get(v___x_92_, 4);
v_env_94_ = lean_ctor_get(v___x_92_, 0);
v_nextMacroScope_95_ = lean_ctor_get(v___x_92_, 1);
v_ngen_96_ = lean_ctor_get(v___x_92_, 2);
v_auxDeclNGen_97_ = lean_ctor_get(v___x_92_, 3);
v_cache_98_ = lean_ctor_get(v___x_92_, 5);
v_messages_99_ = lean_ctor_get(v___x_92_, 6);
v_infoState_100_ = lean_ctor_get(v___x_92_, 7);
v_snapshotTasks_101_ = lean_ctor_get(v___x_92_, 8);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_131_ == 0)
{
v___x_103_ = v___x_92_;
v_isShared_104_ = v_isSharedCheck_131_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_snapshotTasks_101_);
lean_inc(v_infoState_100_);
lean_inc(v_messages_99_);
lean_inc(v_cache_98_);
lean_inc(v_traceState_93_);
lean_inc(v_auxDeclNGen_97_);
lean_inc(v_ngen_96_);
lean_inc(v_nextMacroScope_95_);
lean_inc(v_env_94_);
lean_dec(v___x_92_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_131_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
uint64_t v_tid_105_; lean_object* v_traces_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_130_; 
v_tid_105_ = lean_ctor_get_uint64(v_traceState_93_, sizeof(void*)*1);
v_traces_106_ = lean_ctor_get(v_traceState_93_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v_traceState_93_);
if (v_isSharedCheck_130_ == 0)
{
v___x_108_ = v_traceState_93_;
v_isShared_109_ = v_isSharedCheck_130_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_traces_106_);
lean_dec(v_traceState_93_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_130_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_110_; lean_object* v___x_111_; double v___x_112_; uint8_t v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_110_ = lean_box(0);
v___x_111_ = lean_box(0);
v___x_112_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__0);
v___x_113_ = 0;
v___x_114_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1));
v___x_115_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_115_, 0, v_cls_79_);
lean_ctor_set(v___x_115_, 1, v___x_111_);
lean_ctor_set(v___x_115_, 2, v___x_114_);
lean_ctor_set_float(v___x_115_, sizeof(void*)*3, v___x_112_);
lean_ctor_set_float(v___x_115_, sizeof(void*)*3 + 8, v___x_112_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*3 + 16, v___x_113_);
v___x_116_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__2));
v___x_117_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_117_, 0, v___x_115_);
lean_ctor_set(v___x_117_, 1, v_a_88_);
lean_ctor_set(v___x_117_, 2, v___x_116_);
lean_inc(v_ref_86_);
v___x_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_118_, 0, v_ref_86_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = l_Lean_PersistentArray_push___redArg(v_traces_106_, v___x_118_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 0, v___x_119_);
v___x_121_ = v___x_108_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v___x_119_);
lean_ctor_set_uint64(v_reuseFailAlloc_129_, sizeof(void*)*1, v_tid_105_);
v___x_121_ = v_reuseFailAlloc_129_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_123_; 
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 4, v___x_121_);
v___x_123_ = v___x_103_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_env_94_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_nextMacroScope_95_);
lean_ctor_set(v_reuseFailAlloc_128_, 2, v_ngen_96_);
lean_ctor_set(v_reuseFailAlloc_128_, 3, v_auxDeclNGen_97_);
lean_ctor_set(v_reuseFailAlloc_128_, 4, v___x_121_);
lean_ctor_set(v_reuseFailAlloc_128_, 5, v_cache_98_);
lean_ctor_set(v_reuseFailAlloc_128_, 6, v_messages_99_);
lean_ctor_set(v_reuseFailAlloc_128_, 7, v_infoState_100_);
lean_ctor_set(v_reuseFailAlloc_128_, 8, v_snapshotTasks_101_);
v___x_123_ = v_reuseFailAlloc_128_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_124_ = lean_st_ref_put(v___y_84_, v___x_123_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 0, v___x_110_);
v___x_126_ = v___x_90_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_110_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___boxed(lean_object* v_cls_133_, lean_object* v_msg_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(v_cls_133_, v_msg_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3(lean_object* v___x_169_, lean_object* v___x_170_, lean_object* v___x_171_, size_t v_sz_172_, size_t v_i_173_, lean_object* v_bs_174_){
_start:
{
uint8_t v___x_175_; 
v___x_175_ = lean_usize_dec_lt(v_i_173_, v_sz_172_);
if (v___x_175_ == 0)
{
lean_dec(v___x_171_);
lean_dec(v___x_170_);
lean_dec(v___x_169_);
return v_bs_174_;
}
else
{
lean_object* v_v_176_; lean_object* v_fst_177_; lean_object* v_snd_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_205_; 
v_v_176_ = lean_array_uget(v_bs_174_, v_i_173_);
v_fst_177_ = lean_ctor_get(v_v_176_, 0);
v_snd_178_ = lean_ctor_get(v_v_176_, 1);
v_isSharedCheck_205_ = !lean_is_exclusive(v_v_176_);
if (v_isSharedCheck_205_ == 0)
{
v___x_180_ = v_v_176_;
v_isShared_181_ = v_isSharedCheck_205_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_snd_178_);
lean_inc(v_fst_177_);
lean_dec(v_v_176_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_205_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v_bs_x27_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_189_; 
v___x_182_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_183_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7));
v___x_184_ = lean_unsigned_to_nat(0u);
v_bs_x27_185_ = lean_array_uset(v_bs_174_, v_i_173_, v___x_184_);
v___x_186_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__9));
v___x_187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10));
lean_inc(v___x_169_);
if (v_isShared_181_ == 0)
{
lean_ctor_set_tag(v___x_180_, 2);
lean_ctor_set(v___x_180_, 1, v___x_187_);
lean_ctor_set(v___x_180_, 0, v___x_169_);
v___x_189_ = v___x_180_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_169_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v___x_187_);
v___x_189_ = v_reuseFailAlloc_204_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; size_t v___x_200_; size_t v___x_201_; lean_object* v___x_202_; 
lean_inc_n(v___x_169_, 7);
v___x_190_ = l_Lean_Syntax_node1(v___x_169_, v___x_182_, v_fst_177_);
v___x_191_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12));
v___x_192_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_193_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_169_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = l_Lean_Syntax_node2(v___x_169_, v___x_191_, v___x_193_, v_snd_178_);
v___x_195_ = l_Lean_Syntax_node1(v___x_169_, v___x_182_, v___x_194_);
lean_inc_n(v___x_170_, 2);
v___x_196_ = l_Lean_Syntax_node2(v___x_169_, v___x_183_, v___x_170_, v___x_195_);
v___x_197_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_198_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_169_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
lean_inc(v___x_171_);
v___x_199_ = l_Lean_Syntax_node6(v___x_169_, v___x_186_, v___x_171_, v___x_189_, v___x_190_, v___x_196_, v___x_170_, v___x_198_);
v___x_200_ = ((size_t)1ULL);
v___x_201_ = lean_usize_add(v_i_173_, v___x_200_);
v___x_202_ = lean_array_uset(v_bs_x27_185_, v_i_173_, v___x_199_);
v_i_173_ = v___x_201_;
v_bs_174_ = v___x_202_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___boxed(lean_object* v___x_206_, lean_object* v___x_207_, lean_object* v___x_208_, lean_object* v_sz_209_, lean_object* v_i_210_, lean_object* v_bs_211_){
_start:
{
size_t v_sz_boxed_212_; size_t v_i_boxed_213_; lean_object* v_res_214_; 
v_sz_boxed_212_ = lean_unbox_usize(v_sz_209_);
lean_dec(v_sz_209_);
v_i_boxed_213_ = lean_unbox_usize(v_i_210_);
lean_dec(v_i_210_);
v_res_214_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3(v___x_206_, v___x_207_, v___x_208_, v_sz_boxed_212_, v_i_boxed_213_, v_bs_211_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__6(lean_object* v_a_215_, lean_object* v_a_216_){
_start:
{
if (lean_obj_tag(v_a_215_) == 0)
{
lean_object* v___x_217_; 
v___x_217_ = l_List_reverse___redArg(v_a_216_);
return v___x_217_;
}
else
{
lean_object* v_head_218_; lean_object* v_tail_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_228_; 
v_head_218_ = lean_ctor_get(v_a_215_, 0);
v_tail_219_ = lean_ctor_get(v_a_215_, 1);
v_isSharedCheck_228_ = !lean_is_exclusive(v_a_215_);
if (v_isSharedCheck_228_ == 0)
{
v___x_221_ = v_a_215_;
v_isShared_222_ = v_isSharedCheck_228_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_tail_219_);
lean_inc(v_head_218_);
lean_dec(v_a_215_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_228_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_223_ = l_Lean_MessageData_ofExpr(v_head_218_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 1, v_a_216_);
lean_ctor_set(v___x_221_, 0, v___x_223_);
v___x_225_ = v___x_221_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v_a_216_);
v___x_225_ = v_reuseFailAlloc_227_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
v_a_215_ = v_tail_219_;
v_a_216_ = v___x_225_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(size_t v_sz_229_, size_t v_i_230_, lean_object* v_bs_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v___x_236_; 
v___x_236_ = lean_usize_dec_lt(v_i_230_, v_sz_229_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; 
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v_bs_231_);
return v___x_237_;
}
else
{
lean_object* v_v_238_; lean_object* v___x_239_; lean_object* v_bs_x27_240_; lean_object* v___x_241_; 
v_v_238_ = lean_array_uget(v_bs_231_, v_i_230_);
v___x_239_ = lean_unsigned_to_nat(0u);
v_bs_x27_240_ = lean_array_uset(v_bs_231_, v_i_230_, v___x_239_);
v___x_241_ = l_Lean_Meta_getFVarLocalDecl___redArg(v_v_238_, v___y_232_, v___y_233_, v___y_234_);
lean_dec(v_v_238_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v_a_242_; lean_object* v___x_243_; lean_object* v___x_244_; size_t v___x_245_; size_t v___x_246_; lean_object* v___x_247_; 
v_a_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc(v_a_242_);
lean_dec_ref_known(v___x_241_, 1);
v___x_243_ = l_Lean_LocalDecl_userName(v_a_242_);
lean_dec(v_a_242_);
v___x_244_ = l_Lean_mkIdent(v___x_243_);
v___x_245_ = ((size_t)1ULL);
v___x_246_ = lean_usize_add(v_i_230_, v___x_245_);
v___x_247_ = lean_array_uset(v_bs_x27_240_, v_i_230_, v___x_244_);
v_i_230_ = v___x_246_;
v_bs_231_ = v___x_247_;
goto _start;
}
else
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec_ref(v_bs_x27_240_);
v_a_249_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_241_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_241_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg___boxed(lean_object* v_sz_257_, lean_object* v_i_258_, lean_object* v_bs_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
size_t v_sz_boxed_264_; size_t v_i_boxed_265_; lean_object* v_res_266_; 
v_sz_boxed_264_ = lean_unbox_usize(v_sz_257_);
lean_dec(v_sz_257_);
v_i_boxed_265_ = lean_unbox_usize(v_i_258_);
lean_dec(v_i_258_);
v_res_266_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(v_sz_boxed_264_, v_i_boxed_265_, v_bs_259_, v___y_260_, v___y_261_, v___y_262_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec_ref(v___y_260_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(uint8_t v___x_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_ref_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_ref_275_ = lean_ctor_get(v___y_272_, 2);
v___x_276_ = l_Lean_SourceInfo_fromRef(v_ref_275_, v___x_267_);
v___x_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1___boxed(lean_object* v___x_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
uint8_t v___x_30468__boxed_286_; lean_object* v_res_287_; 
v___x_30468__boxed_286_ = lean_unbox(v___x_278_);
v_res_287_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(v___x_30468__boxed_286_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_ref_295_; uint8_t v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_ref_295_ = lean_ctor_get(v___y_292_, 2);
v___x_296_ = 0;
v___x_297_ = l_Lean_SourceInfo_fromRef(v_ref_295_, v___x_296_);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0___boxed(lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
return v_res_306_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(lean_object* v_opts_307_, lean_object* v_opt_308_){
_start:
{
lean_object* v_name_309_; lean_object* v_defValue_310_; lean_object* v_map_311_; lean_object* v___x_312_; 
v_name_309_ = lean_ctor_get(v_opt_308_, 0);
v_defValue_310_ = lean_ctor_get(v_opt_308_, 1);
v_map_311_ = lean_ctor_get(v_opts_307_, 0);
v___x_312_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_311_, v_name_309_);
if (lean_obj_tag(v___x_312_) == 0)
{
uint8_t v___x_313_; 
v___x_313_ = lean_unbox(v_defValue_310_);
return v___x_313_;
}
else
{
lean_object* v_val_314_; 
v_val_314_ = lean_ctor_get(v___x_312_, 0);
lean_inc(v_val_314_);
lean_dec_ref_known(v___x_312_, 1);
if (lean_obj_tag(v_val_314_) == 1)
{
uint8_t v_v_315_; 
v_v_315_ = lean_ctor_get_uint8(v_val_314_, 0);
lean_dec_ref_known(v_val_314_, 0);
return v_v_315_;
}
else
{
uint8_t v___x_316_; 
lean_dec(v_val_314_);
v___x_316_ = lean_unbox(v_defValue_310_);
return v___x_316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2___boxed(lean_object* v_opts_317_, lean_object* v_opt_318_){
_start:
{
uint8_t v_res_319_; lean_object* v_r_320_; 
v_res_319_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(v_opts_317_, v_opt_318_);
lean_dec_ref(v_opt_318_);
lean_dec_ref(v_opts_317_);
v_r_320_ = lean_box(v_res_319_);
return v_r_320_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_box(1);
v___x_322_ = l_Lean_MessageData_ofFormat(v___x_321_);
return v___x_322_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__2));
v___x_327_ = l_Lean_MessageData_ofFormat(v___x_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3(lean_object* v_x_328_, lean_object* v_x_329_){
_start:
{
if (lean_obj_tag(v_x_329_) == 0)
{
return v_x_328_;
}
else
{
lean_object* v_head_330_; lean_object* v_tail_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_353_; 
v_head_330_ = lean_ctor_get(v_x_329_, 0);
v_tail_331_ = lean_ctor_get(v_x_329_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_x_329_);
if (v_isSharedCheck_353_ == 0)
{
v___x_333_ = v_x_329_;
v_isShared_334_ = v_isSharedCheck_353_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_tail_331_);
lean_inc(v_head_330_);
lean_dec(v_x_329_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_353_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_before_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_351_; 
v_before_335_ = lean_ctor_get(v_head_330_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v_head_330_);
if (v_isSharedCheck_351_ == 0)
{
lean_object* v_unused_352_; 
v_unused_352_ = lean_ctor_get(v_head_330_, 1);
lean_dec(v_unused_352_);
v___x_337_ = v_head_330_;
v_isShared_338_ = v_isSharedCheck_351_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_before_335_);
lean_dec(v_head_330_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_351_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_339_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_338_ == 0)
{
lean_ctor_set_tag(v___x_337_, 7);
lean_ctor_set(v___x_337_, 1, v___x_339_);
lean_ctor_set(v___x_337_, 0, v_x_328_);
v___x_341_ = v___x_337_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_x_328_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v___x_339_);
v___x_341_ = v_reuseFailAlloc_350_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_342_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__3);
if (v_isShared_334_ == 0)
{
lean_ctor_set_tag(v___x_333_, 7);
lean_ctor_set(v___x_333_, 1, v___x_342_);
lean_ctor_set(v___x_333_, 0, v___x_341_);
v___x_344_ = v___x_333_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_349_, 1, v___x_342_);
v___x_344_ = v_reuseFailAlloc_349_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_345_ = l_Lean_MessageData_ofSyntax(v_before_335_);
v___x_346_ = l_Lean_indentD(v___x_345_);
v___x_347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_344_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
v_x_328_ = v___x_347_;
v_x_329_ = v_tail_331_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__1));
v___x_358_ = l_Lean_MessageData_ofFormat(v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(lean_object* v_msgData_359_, lean_object* v_macroStack_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_toCold_363_; lean_object* v_options_364_; lean_object* v___x_365_; uint8_t v___x_366_; 
v_toCold_363_ = lean_ctor_get(v___y_361_, 0);
v_options_364_ = lean_ctor_get(v_toCold_363_, 2);
v___x_365_ = l_Lean_Elab_pp_macroStack;
v___x_366_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(v_options_364_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; 
lean_dec(v_macroStack_360_);
v___x_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_367_, 0, v_msgData_359_);
return v___x_367_;
}
else
{
if (lean_obj_tag(v_macroStack_360_) == 0)
{
lean_object* v___x_368_; 
v___x_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_368_, 0, v_msgData_359_);
return v___x_368_;
}
else
{
lean_object* v_head_369_; lean_object* v_after_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_385_; 
v_head_369_ = lean_ctor_get(v_macroStack_360_, 0);
lean_inc(v_head_369_);
v_after_370_ = lean_ctor_get(v_head_369_, 1);
v_isSharedCheck_385_ = !lean_is_exclusive(v_head_369_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; 
v_unused_386_ = lean_ctor_get(v_head_369_, 0);
lean_dec(v_unused_386_);
v___x_372_ = v_head_369_;
v_isShared_373_ = v_isSharedCheck_385_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_after_370_);
lean_dec(v_head_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_385_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_374_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_373_ == 0)
{
lean_ctor_set_tag(v___x_372_, 7);
lean_ctor_set(v___x_372_, 1, v___x_374_);
lean_ctor_set(v___x_372_, 0, v_msgData_359_);
v___x_376_ = v___x_372_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_msgData_359_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v___x_374_);
v___x_376_ = v_reuseFailAlloc_384_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v_msgData_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_377_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2);
v___x_378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_376_);
lean_ctor_set(v___x_378_, 1, v___x_377_);
v___x_379_ = l_Lean_MessageData_ofSyntax(v_after_370_);
v___x_380_ = l_Lean_indentD(v___x_379_);
v_msgData_381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_381_, 0, v___x_378_);
lean_ctor_set(v_msgData_381_, 1, v___x_380_);
v___x_382_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3(v_msgData_381_, v_macroStack_360_);
v___x_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
return v___x_383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_387_, lean_object* v_macroStack_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(v_msgData_387_, v_macroStack_388_, v___y_389_);
lean_dec_ref(v___y_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(lean_object* v_msg_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_ref_400_; lean_object* v_macroStack_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v_a_404_; lean_object* v___x_405_; lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_414_; 
v_ref_400_ = lean_ctor_get(v___y_397_, 2);
v_macroStack_401_ = lean_ctor_get(v___y_393_, 1);
v___x_402_ = l_Lean_Elab_getBetterRef(v_ref_400_, v_macroStack_401_);
v___x_403_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__0(v_msg_392_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
lean_dec_ref(v___x_403_);
lean_inc(v_macroStack_401_);
v___x_405_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(v_a_404_, v_macroStack_401_, v___y_397_);
v_a_406_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_414_ == 0)
{
v___x_408_ = v___x_405_;
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v___x_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_410_; lean_object* v___x_412_; 
v___x_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_410_, 0, v___x_402_);
lean_ctor_set(v___x_410_, 1, v_a_406_);
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 1);
lean_ctor_set(v___x_408_, 0, v___x_410_);
v___x_412_ = v___x_408_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg___boxed(lean_object* v_msg_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v_msg_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
return v_res_423_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__2));
v___x_428_ = l_String_toRawSubstring_x27(v___x_427_);
return v___x_428_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14(void){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = l_Array_mkArray0___redArg();
return v___x_457_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__25));
v___x_486_ = l_String_toRawSubstring_x27(v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35(void){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__34));
v___x_509_ = l_String_toRawSubstring_x27(v___x_508_);
return v___x_509_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__38));
v___x_515_ = l_String_toRawSubstring_x27(v___x_514_);
return v___x_515_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__44));
v___x_531_ = l_String_toRawSubstring_x27(v___x_530_);
return v___x_531_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg___closed__1));
v___x_564_ = l_String_toRawSubstring_x27(v___x_563_);
return v___x_564_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__81));
v___x_629_ = l_String_toRawSubstring_x27(v___x_628_);
return v___x_629_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__86));
v___x_637_ = l_Lean_stringToMessageData(v___x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1(lean_object* v_as_638_, size_t v_sz_639_, size_t v_i_640_, lean_object* v_b_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_a_650_; uint8_t v___x_654_; 
v___x_654_ = lean_usize_dec_lt(v_i_640_, v_sz_639_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; 
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v_b_641_);
return v___x_655_;
}
else
{
lean_object* v_snd_656_; lean_object* v_snd_657_; lean_object* v_fst_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_925_; 
v_snd_656_ = lean_ctor_get(v_b_641_, 1);
lean_inc(v_snd_656_);
v_snd_657_ = lean_ctor_get(v_snd_656_, 1);
lean_inc(v_snd_657_);
v_fst_658_ = lean_ctor_get(v_b_641_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v_b_641_);
if (v_isSharedCheck_925_ == 0)
{
lean_object* v_unused_926_; 
v_unused_926_ = lean_ctor_get(v_b_641_, 1);
lean_dec(v_unused_926_);
v___x_660_ = v_b_641_;
v_isShared_661_ = v_isSharedCheck_925_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_fst_658_);
lean_dec(v_b_641_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_925_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v_fst_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_923_; 
v_fst_662_ = lean_ctor_get(v_snd_656_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v_snd_656_);
if (v_isSharedCheck_923_ == 0)
{
lean_object* v_unused_924_; 
v_unused_924_ = lean_ctor_get(v_snd_656_, 1);
lean_dec(v_unused_924_);
v___x_664_ = v_snd_656_;
v_isShared_665_ = v_isSharedCheck_923_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_fst_662_);
lean_dec(v_snd_656_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_923_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v_fst_666_; lean_object* v_snd_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_922_; 
v_fst_666_ = lean_ctor_get(v_snd_657_, 0);
v_snd_667_ = lean_ctor_get(v_snd_657_, 1);
v_isSharedCheck_922_ = !lean_is_exclusive(v_snd_657_);
if (v_isSharedCheck_922_ == 0)
{
v___x_669_ = v_snd_657_;
v_isShared_670_ = v_isSharedCheck_922_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_snd_667_);
lean_inc(v_fst_666_);
lean_dec(v_snd_657_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_922_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v_a_671_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___x_910_; uint8_t v___x_911_; 
v_a_671_ = lean_array_uget_borrowed(v_as_638_, v_i_640_);
v___x_910_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__85));
v___x_911_ = lean_name_eq(v_a_671_, v___x_910_);
if (v___x_911_ == 0)
{
v___y_673_ = v___y_642_;
v___y_674_ = v___y_643_;
v___y_675_ = v___y_644_;
v___y_676_ = v___y_645_;
v___y_677_ = v___y_646_;
v___y_678_ = v___y_647_;
goto v___jp_672_;
}
else
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__87);
v___x_913_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v___x_912_, v___y_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_dec_ref_known(v___x_913_, 1);
v___y_673_ = v___y_642_;
v___y_674_ = v___y_643_;
v___y_675_ = v___y_644_;
v___y_676_ = v___y_645_;
v___y_677_ = v___y_646_;
v___y_678_ = v___y_647_;
goto v___jp_672_;
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_del_object(v___x_669_);
lean_dec(v_snd_667_);
lean_dec(v_fst_666_);
lean_del_object(v___x_664_);
lean_dec(v_fst_662_);
lean_del_object(v___x_660_);
lean_dec(v_fst_658_);
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_913_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
v___jp_672_:
{
lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
lean_inc_n(v_a_671_, 2);
v___x_679_ = l_Lean_mkIdent(v_a_671_);
lean_inc(v___x_679_);
v___x_680_ = lean_array_push(v_fst_658_, v___x_679_);
v___x_681_ = l_Lean_Server_RpcEncodable_isOptField(v_a_671_);
if (v___x_681_ == 0)
{
lean_object* v_toCold_682_; lean_object* v_ref_683_; lean_object* v_quotContext_684_; lean_object* v_currMacroScope_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v_toCold_682_ = lean_ctor_get(v___y_677_, 0);
v_ref_683_ = lean_ctor_get(v___y_677_, 2);
v_quotContext_684_ = lean_ctor_get(v_toCold_682_, 8);
v_currMacroScope_685_ = lean_ctor_get(v_toCold_682_, 9);
v___x_686_ = l_Lean_SourceInfo_fromRef(v_ref_683_, v___x_681_);
v___x_687_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3);
v___x_688_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4));
lean_inc(v_currMacroScope_685_);
lean_inc(v_quotContext_684_);
v___x_689_ = l_Lean_addMacroScope(v_quotContext_684_, v___x_688_, v_currMacroScope_685_);
v___x_690_ = lean_box(0);
v___x_691_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9));
v___x_692_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_692_, 0, v___x_686_);
lean_ctor_set(v___x_692_, 1, v___x_687_);
lean_ctor_set(v___x_692_, 2, v___x_689_);
lean_ctor_set(v___x_692_, 3, v___x_691_);
v___x_693_ = lean_array_push(v_fst_662_, v___x_692_);
v___x_694_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(v___x_681_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc_n(v_a_695_, 15);
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11));
v___x_697_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13));
v___x_698_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_699_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v___x_700_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_700_, 0, v_a_695_);
lean_ctor_set(v___x_700_, 1, v___x_698_);
lean_ctor_set(v___x_700_, 2, v___x_699_);
lean_inc_ref_n(v___x_700_, 3);
lean_inc_n(v___x_679_, 2);
v___x_701_ = l_Lean_Syntax_node2(v_a_695_, v___x_697_, v___x_679_, v___x_700_);
v___x_702_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16));
v___x_703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17));
v___x_704_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_704_, 0, v_a_695_);
lean_ctor_set(v___x_704_, 1, v___x_703_);
v___x_705_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_706_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
v___x_707_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_707_, 0, v_a_695_);
lean_ctor_set(v___x_707_, 1, v___x_706_);
v___x_708_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_709_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_710_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_711_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
lean_inc_n(v_currMacroScope_685_, 2);
lean_inc_n(v_quotContext_684_, 2);
v___x_712_ = l_Lean_addMacroScope(v_quotContext_684_, v___x_711_, v_currMacroScope_685_);
v___x_713_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31));
v___x_714_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_714_, 0, v_a_695_);
lean_ctor_set(v___x_714_, 1, v___x_710_);
lean_ctor_set(v___x_714_, 2, v___x_712_);
lean_ctor_set(v___x_714_, 3, v___x_713_);
v___x_715_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33));
v___x_716_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35);
v___x_717_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36));
v___x_718_ = l_Lean_addMacroScope(v_quotContext_684_, v___x_717_, v_currMacroScope_685_);
lean_inc(v___x_718_);
v___x_719_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_719_, 0, v_a_695_);
lean_ctor_set(v___x_719_, 1, v___x_716_);
lean_ctor_set(v___x_719_, 2, v___x_718_);
lean_ctor_set(v___x_719_, 3, v___x_690_);
v___x_720_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37));
v___x_721_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_721_, 0, v_a_695_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
v___x_722_ = l_Lean_Syntax_node3(v_a_695_, v___x_715_, v___x_719_, v___x_721_, v___x_679_);
v___x_723_ = l_Lean_Syntax_node1(v_a_695_, v___x_698_, v___x_722_);
v___x_724_ = l_Lean_Syntax_node2(v_a_695_, v___x_709_, v___x_714_, v___x_723_);
v___x_725_ = l_Lean_Syntax_node1(v_a_695_, v___x_708_, v___x_724_);
v___x_726_ = l_Lean_Syntax_node2(v_a_695_, v___x_705_, v___x_707_, v___x_725_);
v___x_727_ = l_Lean_Syntax_node3(v_a_695_, v___x_702_, v___x_704_, v___x_700_, v___x_726_);
v___x_728_ = l_Lean_Syntax_node3(v_a_695_, v___x_698_, v___x_700_, v___x_700_, v___x_727_);
v___x_729_ = l_Lean_Syntax_node2(v_a_695_, v___x_696_, v___x_701_, v___x_728_);
v___x_730_ = lean_array_push(v_fst_666_, v___x_729_);
v___x_731_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__1(v___x_681_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_754_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc_n(v_a_732_, 15);
lean_dec_ref_known(v___x_731_, 1);
v___x_733_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_733_, 0, v_a_732_);
lean_ctor_set(v___x_733_, 1, v___x_698_);
lean_ctor_set(v___x_733_, 2, v___x_699_);
lean_inc_ref_n(v___x_733_, 3);
lean_inc(v___x_679_);
v___x_734_ = l_Lean_Syntax_node2(v_a_732_, v___x_697_, v___x_679_, v___x_733_);
v___x_735_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_735_, 0, v_a_732_);
lean_ctor_set(v___x_735_, 1, v___x_703_);
v___x_736_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_736_, 0, v_a_732_);
lean_ctor_set(v___x_736_, 1, v___x_706_);
v___x_737_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_738_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
lean_inc(v_currMacroScope_685_);
lean_inc(v_quotContext_684_);
v___x_739_ = l_Lean_addMacroScope(v_quotContext_684_, v___x_738_, v_currMacroScope_685_);
v___x_740_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43));
v___x_741_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_741_, 0, v_a_732_);
lean_ctor_set(v___x_741_, 1, v___x_737_);
lean_ctor_set(v___x_741_, 2, v___x_739_);
lean_ctor_set(v___x_741_, 3, v___x_740_);
v___x_742_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_742_, 0, v_a_732_);
lean_ctor_set(v___x_742_, 1, v___x_716_);
lean_ctor_set(v___x_742_, 2, v___x_718_);
lean_ctor_set(v___x_742_, 3, v___x_690_);
v___x_743_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_743_, 0, v_a_732_);
lean_ctor_set(v___x_743_, 1, v___x_720_);
v___x_744_ = l_Lean_Syntax_node3(v_a_732_, v___x_715_, v___x_742_, v___x_743_, v___x_679_);
v___x_745_ = l_Lean_Syntax_node1(v_a_732_, v___x_698_, v___x_744_);
v___x_746_ = l_Lean_Syntax_node2(v_a_732_, v___x_709_, v___x_741_, v___x_745_);
v___x_747_ = l_Lean_Syntax_node1(v_a_732_, v___x_708_, v___x_746_);
v___x_748_ = l_Lean_Syntax_node2(v_a_732_, v___x_705_, v___x_736_, v___x_747_);
v___x_749_ = l_Lean_Syntax_node3(v_a_732_, v___x_702_, v___x_735_, v___x_733_, v___x_748_);
v___x_750_ = l_Lean_Syntax_node3(v_a_732_, v___x_698_, v___x_733_, v___x_733_, v___x_749_);
v___x_751_ = l_Lean_Syntax_node2(v_a_732_, v___x_696_, v___x_734_, v___x_750_);
v___x_752_ = lean_array_push(v_snd_667_, v___x_751_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 1, v___x_752_);
lean_ctor_set(v___x_669_, 0, v___x_730_);
v___x_754_ = v___x_669_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_761_, 1, v___x_752_);
v___x_754_ = v_reuseFailAlloc_761_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_object* v___x_756_; 
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 1, v___x_754_);
lean_ctor_set(v___x_664_, 0, v___x_693_);
v___x_756_ = v___x_664_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_693_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_754_);
v___x_756_ = v_reuseFailAlloc_760_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_758_; 
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v___x_756_);
lean_ctor_set(v___x_660_, 0, v___x_680_);
v___x_758_ = v___x_660_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v___x_756_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
v_a_650_ = v___x_758_;
goto v___jp_649_;
}
}
}
}
else
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec_ref(v___x_730_);
lean_dec(v___x_718_);
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_680_);
lean_dec(v___x_679_);
lean_del_object(v___x_669_);
lean_dec(v_snd_667_);
lean_del_object(v___x_664_);
lean_del_object(v___x_660_);
v_a_762_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_731_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_731_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec_ref(v___x_693_);
lean_dec_ref(v___x_680_);
lean_dec(v___x_679_);
lean_del_object(v___x_669_);
lean_dec(v_snd_667_);
lean_dec(v_fst_666_);
lean_del_object(v___x_664_);
lean_del_object(v___x_660_);
v_a_770_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_694_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_694_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
else
{
lean_object* v_toCold_778_; lean_object* v_ref_779_; lean_object* v_quotContext_780_; lean_object* v_currMacroScope_781_; uint8_t v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v_toCold_778_ = lean_ctor_get(v___y_677_, 0);
v_ref_779_ = lean_ctor_get(v___y_677_, 2);
v_quotContext_780_ = lean_ctor_get(v_toCold_778_, 8);
v_currMacroScope_781_ = lean_ctor_get(v_toCold_778_, 9);
v___x_782_ = 0;
v___x_783_ = l_Lean_SourceInfo_fromRef(v_ref_779_, v___x_782_);
v___x_784_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_785_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__45);
v___x_786_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__46));
lean_inc_n(v_currMacroScope_781_, 2);
lean_inc_n(v_quotContext_780_, 2);
v___x_787_ = l_Lean_addMacroScope(v_quotContext_780_, v___x_786_, v_currMacroScope_781_);
v___x_788_ = lean_box(0);
v___x_789_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__51));
lean_inc_n(v___x_783_, 3);
v___x_790_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_790_, 0, v___x_783_);
lean_ctor_set(v___x_790_, 1, v___x_785_);
lean_ctor_set(v___x_790_, 2, v___x_787_);
lean_ctor_set(v___x_790_, 3, v___x_789_);
v___x_791_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_792_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3);
v___x_793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4));
v___x_794_ = l_Lean_addMacroScope(v_quotContext_780_, v___x_793_, v_currMacroScope_781_);
v___x_795_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9));
v___x_796_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_796_, 0, v___x_783_);
lean_ctor_set(v___x_796_, 1, v___x_792_);
lean_ctor_set(v___x_796_, 2, v___x_794_);
lean_ctor_set(v___x_796_, 3, v___x_795_);
v___x_797_ = l_Lean_Syntax_node1(v___x_783_, v___x_791_, v___x_796_);
v___x_798_ = l_Lean_Syntax_node2(v___x_783_, v___x_784_, v___x_790_, v___x_797_);
v___x_799_ = lean_array_push(v_fst_662_, v___x_798_);
v___x_800_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc_n(v_a_801_, 23);
lean_dec_ref_known(v___x_800_, 1);
v___x_802_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11));
v___x_803_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13));
v___x_804_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v___x_805_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_805_, 0, v_a_801_);
lean_ctor_set(v___x_805_, 1, v___x_791_);
lean_ctor_set(v___x_805_, 2, v___x_804_);
lean_inc_ref_n(v___x_805_, 3);
lean_inc_n(v___x_679_, 2);
v___x_806_ = l_Lean_Syntax_node2(v_a_801_, v___x_803_, v___x_679_, v___x_805_);
v___x_807_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16));
v___x_808_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17));
v___x_809_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_809_, 0, v_a_801_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_811_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
v___x_812_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_812_, 0, v_a_801_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_814_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__33));
v___x_815_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53));
v___x_816_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55));
v___x_817_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10));
v___x_818_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_818_, 0, v_a_801_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
v___x_819_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57));
v___x_820_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58);
v___x_821_ = lean_box(0);
lean_inc_n(v_currMacroScope_781_, 4);
lean_inc_n(v_quotContext_780_, 4);
v___x_822_ = l_Lean_addMacroScope(v_quotContext_780_, v___x_821_, v_currMacroScope_781_);
v___x_823_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__80));
lean_inc(v___x_822_);
v___x_824_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_824_, 0, v_a_801_);
lean_ctor_set(v___x_824_, 1, v___x_820_);
lean_ctor_set(v___x_824_, 2, v___x_822_);
lean_ctor_set(v___x_824_, 3, v___x_823_);
v___x_825_ = l_Lean_Syntax_node1(v_a_801_, v___x_819_, v___x_824_);
v___x_826_ = l_Lean_Syntax_node2(v_a_801_, v___x_816_, v___x_818_, v___x_825_);
v___x_827_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35);
v___x_828_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36));
v___x_829_ = l_Lean_addMacroScope(v_quotContext_780_, v___x_828_, v_currMacroScope_781_);
lean_inc(v___x_829_);
v___x_830_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_830_, 0, v_a_801_);
lean_ctor_set(v___x_830_, 1, v___x_827_);
lean_ctor_set(v___x_830_, 2, v___x_829_);
lean_ctor_set(v___x_830_, 3, v___x_788_);
v___x_831_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37));
v___x_832_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_832_, 0, v_a_801_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
lean_inc_ref(v___x_832_);
v___x_833_ = l_Lean_Syntax_node3(v_a_801_, v___x_814_, v___x_830_, v___x_832_, v___x_679_);
v___x_834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_835_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_835_, 0, v_a_801_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
v___x_836_ = l_Lean_Syntax_node3(v_a_801_, v___x_815_, v___x_826_, v___x_833_, v___x_835_);
v___x_837_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__82);
v___x_838_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__83));
v___x_839_ = l_Lean_addMacroScope(v_quotContext_780_, v___x_838_, v_currMacroScope_781_);
lean_inc(v___x_839_);
v___x_840_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_840_, 0, v_a_801_);
lean_ctor_set(v___x_840_, 1, v___x_837_);
lean_ctor_set(v___x_840_, 2, v___x_839_);
lean_ctor_set(v___x_840_, 3, v___x_788_);
v___x_841_ = l_Lean_Syntax_node3(v_a_801_, v___x_814_, v___x_836_, v___x_832_, v___x_840_);
v___x_842_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_843_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
v___x_844_ = l_Lean_addMacroScope(v_quotContext_780_, v___x_843_, v_currMacroScope_781_);
v___x_845_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31));
v___x_846_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_846_, 0, v_a_801_);
lean_ctor_set(v___x_846_, 1, v___x_842_);
lean_ctor_set(v___x_846_, 2, v___x_844_);
lean_ctor_set(v___x_846_, 3, v___x_845_);
v___x_847_ = l_Lean_Syntax_node1(v_a_801_, v___x_791_, v___x_846_);
v___x_848_ = l_Lean_Syntax_node2(v_a_801_, v___x_784_, v___x_841_, v___x_847_);
v___x_849_ = l_Lean_Syntax_node1(v_a_801_, v___x_813_, v___x_848_);
v___x_850_ = l_Lean_Syntax_node2(v_a_801_, v___x_810_, v___x_812_, v___x_849_);
v___x_851_ = l_Lean_Syntax_node3(v_a_801_, v___x_807_, v___x_809_, v___x_805_, v___x_850_);
v___x_852_ = l_Lean_Syntax_node3(v_a_801_, v___x_791_, v___x_805_, v___x_805_, v___x_851_);
v___x_853_ = l_Lean_Syntax_node2(v_a_801_, v___x_802_, v___x_806_, v___x_852_);
v___x_854_ = lean_array_push(v_fst_666_, v___x_853_);
v___x_855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___lam__0(v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_886_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc_n(v_a_856_, 23);
lean_dec_ref_known(v___x_855_, 1);
v___x_857_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_857_, 0, v_a_856_);
lean_ctor_set(v___x_857_, 1, v___x_791_);
lean_ctor_set(v___x_857_, 2, v___x_804_);
lean_inc_ref_n(v___x_857_, 3);
lean_inc(v___x_679_);
v___x_858_ = l_Lean_Syntax_node2(v_a_856_, v___x_803_, v___x_679_, v___x_857_);
v___x_859_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_859_, 0, v_a_856_);
lean_ctor_set(v___x_859_, 1, v___x_808_);
v___x_860_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_860_, 0, v_a_856_);
lean_ctor_set(v___x_860_, 1, v___x_811_);
v___x_861_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_861_, 0, v_a_856_);
lean_ctor_set(v___x_861_, 1, v___x_817_);
v___x_862_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_862_, 0, v_a_856_);
lean_ctor_set(v___x_862_, 1, v___x_820_);
lean_ctor_set(v___x_862_, 2, v___x_822_);
lean_ctor_set(v___x_862_, 3, v___x_823_);
v___x_863_ = l_Lean_Syntax_node1(v_a_856_, v___x_819_, v___x_862_);
v___x_864_ = l_Lean_Syntax_node2(v_a_856_, v___x_816_, v___x_861_, v___x_863_);
v___x_865_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_865_, 0, v_a_856_);
lean_ctor_set(v___x_865_, 1, v___x_827_);
lean_ctor_set(v___x_865_, 2, v___x_829_);
lean_ctor_set(v___x_865_, 3, v___x_788_);
v___x_866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_866_, 0, v_a_856_);
lean_ctor_set(v___x_866_, 1, v___x_831_);
lean_inc_ref(v___x_866_);
v___x_867_ = l_Lean_Syntax_node3(v_a_856_, v___x_814_, v___x_865_, v___x_866_, v___x_679_);
v___x_868_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_868_, 0, v_a_856_);
lean_ctor_set(v___x_868_, 1, v___x_834_);
v___x_869_ = l_Lean_Syntax_node3(v_a_856_, v___x_815_, v___x_864_, v___x_867_, v___x_868_);
v___x_870_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_870_, 0, v_a_856_);
lean_ctor_set(v___x_870_, 1, v___x_837_);
lean_ctor_set(v___x_870_, 2, v___x_839_);
lean_ctor_set(v___x_870_, 3, v___x_788_);
v___x_871_ = l_Lean_Syntax_node3(v_a_856_, v___x_814_, v___x_869_, v___x_866_, v___x_870_);
v___x_872_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_873_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
lean_inc(v_currMacroScope_781_);
lean_inc(v_quotContext_780_);
v___x_874_ = l_Lean_addMacroScope(v_quotContext_780_, v___x_873_, v_currMacroScope_781_);
v___x_875_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43));
v___x_876_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_876_, 0, v_a_856_);
lean_ctor_set(v___x_876_, 1, v___x_872_);
lean_ctor_set(v___x_876_, 2, v___x_874_);
lean_ctor_set(v___x_876_, 3, v___x_875_);
v___x_877_ = l_Lean_Syntax_node1(v_a_856_, v___x_791_, v___x_876_);
v___x_878_ = l_Lean_Syntax_node2(v_a_856_, v___x_784_, v___x_871_, v___x_877_);
v___x_879_ = l_Lean_Syntax_node1(v_a_856_, v___x_813_, v___x_878_);
v___x_880_ = l_Lean_Syntax_node2(v_a_856_, v___x_810_, v___x_860_, v___x_879_);
v___x_881_ = l_Lean_Syntax_node3(v_a_856_, v___x_807_, v___x_859_, v___x_857_, v___x_880_);
v___x_882_ = l_Lean_Syntax_node3(v_a_856_, v___x_791_, v___x_857_, v___x_857_, v___x_881_);
v___x_883_ = l_Lean_Syntax_node2(v_a_856_, v___x_802_, v___x_858_, v___x_882_);
v___x_884_ = lean_array_push(v_snd_667_, v___x_883_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 1, v___x_884_);
lean_ctor_set(v___x_669_, 0, v___x_854_);
v___x_886_ = v___x_669_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_854_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v___x_884_);
v___x_886_ = v_reuseFailAlloc_893_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v___x_888_; 
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 1, v___x_886_);
lean_ctor_set(v___x_664_, 0, v___x_799_);
v___x_888_ = v___x_664_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_799_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v___x_886_);
v___x_888_ = v_reuseFailAlloc_892_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_890_; 
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v___x_888_);
lean_ctor_set(v___x_660_, 0, v___x_680_);
v___x_890_ = v___x_660_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v___x_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
v_a_650_ = v___x_890_;
goto v___jp_649_;
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_dec_ref(v___x_854_);
lean_dec(v___x_839_);
lean_dec(v___x_829_);
lean_dec(v___x_822_);
lean_dec_ref(v___x_799_);
lean_dec_ref(v___x_680_);
lean_dec(v___x_679_);
lean_del_object(v___x_669_);
lean_dec(v_snd_667_);
lean_del_object(v___x_664_);
lean_del_object(v___x_660_);
v_a_894_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_855_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_855_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec_ref(v___x_799_);
lean_dec_ref(v___x_680_);
lean_dec(v___x_679_);
lean_del_object(v___x_669_);
lean_dec(v_snd_667_);
lean_dec(v_fst_666_);
lean_del_object(v___x_664_);
lean_del_object(v___x_660_);
v_a_902_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_800_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_800_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
}
}
}
}
v___jp_649_:
{
size_t v___x_651_; size_t v___x_652_; 
v___x_651_ = ((size_t)1ULL);
v___x_652_ = lean_usize_add(v_i_640_, v___x_651_);
v_i_640_ = v___x_652_;
v_b_641_ = v_a_650_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___boxed(lean_object* v_as_927_, lean_object* v_sz_928_, lean_object* v_i_929_, lean_object* v_b_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
size_t v_sz_boxed_938_; size_t v_i_boxed_939_; lean_object* v_res_940_; 
v_sz_boxed_938_ = lean_unbox_usize(v_sz_928_);
lean_dec(v_sz_928_);
v_i_boxed_939_ = lean_unbox_usize(v_i_929_);
lean_dec(v_i_929_);
v_res_940_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1(v_as_927_, v_sz_boxed_938_, v_i_boxed_939_, v_b_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec_ref(v_as_927_);
return v_res_940_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__16));
v___x_989_ = l_String_toRawSubstring_x27(v___x_988_);
return v___x_989_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__27));
v___x_1014_ = l_String_toRawSubstring_x27(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__36));
v___x_1034_ = l_String_toRawSubstring_x27(v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0));
v___x_1082_ = l_String_toRawSubstring_x27(v___x_1081_);
return v___x_1082_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79(void){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1148_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__78));
v___x_1149_ = l_String_toRawSubstring_x27(v___x_1148_);
return v___x_1149_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__83));
v___x_1160_ = l_String_toRawSubstring_x27(v___x_1159_);
return v___x_1160_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__105));
v___x_1216_ = l_String_toRawSubstring_x27(v___x_1215_);
return v___x_1216_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111(void){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35));
v___x_1230_ = l_Lean_mkAtom(v___x_1229_);
return v___x_1230_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113(void){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__112));
v___x_1233_ = l_String_toRawSubstring_x27(v___x_1232_);
return v___x_1233_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129(void){
_start:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__128));
v___x_1275_ = l_String_toRawSubstring_x27(v___x_1274_);
return v___x_1275_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1302_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137));
v___x_1303_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__139));
v___x_1304_ = l_Lean_Name_append(v___x_1303_, v___x_1302_);
return v___x_1304_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__141));
v___x_1307_ = l_Lean_stringToMessageData(v___x_1306_);
return v___x_1307_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__144(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__143));
v___x_1310_ = l_Lean_stringToMessageData(v___x_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance(lean_object* v_indVal_1311_, lean_object* v_params_1312_, lean_object* v_encInstBinders_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_){
_start:
{
lean_object* v___x_1321_; lean_object* v_toConstantVal_1322_; lean_object* v_toCold_1323_; lean_object* v_options_1324_; lean_object* v_env_1325_; lean_object* v_name_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1670_; 
v___x_1321_ = lean_st_ref_get(v_a_1319_);
v_toConstantVal_1322_ = lean_ctor_get(v_indVal_1311_, 0);
lean_inc_ref(v_toConstantVal_1322_);
lean_dec_ref(v_indVal_1311_);
v_toCold_1323_ = lean_ctor_get(v_a_1318_, 0);
v_options_1324_ = lean_ctor_get(v_toCold_1323_, 2);
v_env_1325_ = lean_ctor_get(v___x_1321_, 0);
lean_inc_ref(v_env_1325_);
lean_dec(v___x_1321_);
v_name_1326_ = lean_ctor_get(v_toConstantVal_1322_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v_toConstantVal_1322_);
if (v_isSharedCheck_1670_ == 0)
{
lean_object* v_unused_1671_; lean_object* v_unused_1672_; 
v_unused_1671_ = lean_ctor_get(v_toConstantVal_1322_, 2);
lean_dec(v_unused_1671_);
v_unused_1672_ = lean_ctor_get(v_toConstantVal_1322_, 1);
lean_dec(v_unused_1672_);
v___x_1328_ = v_toConstantVal_1322_;
v_isShared_1329_ = v_isSharedCheck_1670_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_name_1326_);
lean_dec(v_toConstantVal_1322_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1670_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v_inheritedTraceOptions_1330_; uint8_t v_hasTrace_1331_; uint8_t v___x_1332_; lean_object* v___x_1333_; lean_object* v___y_1335_; lean_object* v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1340_; 
v_inheritedTraceOptions_1330_ = lean_ctor_get(v_toCold_1323_, 11);
v_hasTrace_1331_ = lean_ctor_get_uint8(v_options_1324_, sizeof(void*)*1);
v___x_1332_ = 0;
lean_inc(v_name_1326_);
v___x_1333_ = l_Lean_getStructureFieldsFlattened(v_env_1325_, v_name_1326_, v___x_1332_);
if (v_hasTrace_1331_ == 0)
{
v___y_1335_ = v_a_1314_;
v___y_1336_ = v_a_1315_;
v___y_1337_ = v_a_1316_;
v___y_1338_ = v_a_1317_;
v___y_1339_ = v_a_1318_;
v___y_1340_ = v_a_1319_;
goto v___jp_1334_;
}
else
{
lean_object* v___x_1648_; lean_object* v___x_1649_; uint8_t v___x_1650_; 
v___x_1648_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137));
v___x_1649_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140);
v___x_1650_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1330_, v_options_1324_, v___x_1649_);
if (v___x_1650_ == 0)
{
v___y_1335_ = v_a_1314_;
v___y_1336_ = v_a_1315_;
v___y_1337_ = v_a_1316_;
v___y_1338_ = v_a_1317_;
v___y_1339_ = v_a_1318_;
v___y_1340_ = v_a_1319_;
goto v___jp_1334_;
}
else
{
lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1651_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__142);
lean_inc(v_name_1326_);
v___x_1652_ = l_Lean_MessageData_ofName(v_name_1326_);
v___x_1653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set(v___x_1653_, 1, v___x_1652_);
v___x_1654_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__144, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__144_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__144);
v___x_1655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1653_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
lean_inc_ref(v_params_1312_);
v___x_1656_ = lean_array_to_list(v_params_1312_);
v___x_1657_ = lean_box(0);
v___x_1658_ = l_List_mapTR_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__6(v___x_1656_, v___x_1657_);
v___x_1659_ = l_Lean_MessageData_ofList(v___x_1658_);
v___x_1660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1655_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(v___x_1648_, v___x_1660_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_dec_ref_known(v___x_1661_, 1);
v___y_1335_ = v_a_1314_;
v___y_1336_ = v_a_1315_;
v___y_1337_ = v_a_1316_;
v___y_1338_ = v_a_1317_;
v___y_1339_ = v_a_1318_;
v___y_1340_ = v_a_1319_;
goto v___jp_1334_;
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec_ref(v___x_1333_);
lean_del_object(v___x_1328_);
lean_dec(v_name_1326_);
lean_dec_ref(v_params_1312_);
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1661_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1661_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
}
v___jp_1334_:
{
lean_object* v___x_1341_; size_t v_sz_1342_; size_t v___x_1343_; lean_object* v___x_1344_; 
v___x_1341_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__3));
v_sz_1342_ = lean_array_size(v___x_1333_);
v___x_1343_ = ((size_t)0ULL);
v___x_1344_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1(v___x_1333_, v_sz_1342_, v___x_1343_, v___x_1341_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
lean_dec_ref(v___x_1333_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v_snd_1346_; lean_object* v_snd_1347_; lean_object* v_fst_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1638_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1344_, 1);
v_snd_1346_ = lean_ctor_get(v_a_1345_, 1);
lean_inc(v_snd_1346_);
v_snd_1347_ = lean_ctor_get(v_snd_1346_, 1);
lean_inc(v_snd_1347_);
v_fst_1348_ = lean_ctor_get(v_a_1345_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v_a_1345_);
if (v_isSharedCheck_1638_ == 0)
{
lean_object* v_unused_1639_; 
v_unused_1639_ = lean_ctor_get(v_a_1345_, 1);
lean_dec(v_unused_1639_);
v___x_1350_ = v_a_1345_;
v_isShared_1351_ = v_isSharedCheck_1638_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_fst_1348_);
lean_dec(v_a_1345_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1638_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v_fst_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1636_; 
v_fst_1352_ = lean_ctor_get(v_snd_1346_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_snd_1346_);
if (v_isSharedCheck_1636_ == 0)
{
lean_object* v_unused_1637_; 
v_unused_1637_ = lean_ctor_get(v_snd_1346_, 1);
lean_dec(v_unused_1637_);
v___x_1354_ = v_snd_1346_;
v_isShared_1355_ = v_isSharedCheck_1636_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_fst_1352_);
lean_dec(v_snd_1346_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1636_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v_fst_1356_; lean_object* v_snd_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1635_; 
v_fst_1356_ = lean_ctor_get(v_snd_1347_, 0);
v_snd_1357_ = lean_ctor_get(v_snd_1347_, 1);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_snd_1347_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1359_ = v_snd_1347_;
v_isShared_1360_ = v_isSharedCheck_1635_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_snd_1357_);
lean_inc(v_fst_1356_);
lean_dec(v_snd_1347_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1635_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
size_t v_sz_1361_; lean_object* v___x_1362_; 
v_sz_1361_ = lean_array_size(v_params_1312_);
v___x_1362_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(v_sz_1361_, v___x_1343_, v_params_1312_, v___y_1337_, v___y_1339_, v___y_1340_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_toCold_1363_; lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1626_; 
v_toCold_1363_ = lean_ctor_get(v___y_1339_, 0);
v_a_1364_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1366_ = v___x_1362_;
v_isShared_1367_ = v_isSharedCheck_1626_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1362_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1626_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v_ref_1368_; lean_object* v_quotContext_1369_; lean_object* v_currMacroScope_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1377_; 
v_ref_1368_ = lean_ctor_get(v___y_1339_, 2);
v_quotContext_1369_ = lean_ctor_get(v_toCold_1363_, 8);
v_currMacroScope_1370_ = lean_ctor_get(v_toCold_1363_, 9);
v___x_1371_ = l_Lean_SourceInfo_fromRef(v_ref_1368_, v___x_1332_);
v___x_1372_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_1373_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5));
v___x_1374_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7));
v___x_1375_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
lean_inc(v___x_1371_);
if (v_isShared_1329_ == 0)
{
lean_ctor_set_tag(v___x_1328_, 1);
lean_ctor_set(v___x_1328_, 2, v___x_1375_);
lean_ctor_set(v___x_1328_, 1, v___x_1372_);
lean_ctor_set(v___x_1328_, 0, v___x_1371_);
v___x_1377_ = v___x_1328_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1625_, 1, v___x_1372_);
lean_ctor_set(v_reuseFailAlloc_1625_, 2, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
lean_inc_ref_n(v___x_1377_, 7);
lean_inc_n(v___x_1371_, 2);
v___x_1378_ = l_Lean_Syntax_node7(v___x_1371_, v___x_1374_, v___x_1377_, v___x_1377_, v___x_1377_, v___x_1377_, v___x_1377_, v___x_1377_, v___x_1377_);
v___x_1379_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__8));
v___x_1380_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__9));
v___x_1381_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__11));
if (v_isShared_1360_ == 0)
{
lean_ctor_set_tag(v___x_1359_, 2);
lean_ctor_set(v___x_1359_, 1, v___x_1379_);
lean_ctor_set(v___x_1359_, 0, v___x_1371_);
v___x_1383_ = v___x_1359_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1624_, 1, v___x_1379_);
v___x_1383_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1398_; 
v___x_1384_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__13));
lean_inc_ref_n(v___x_1377_, 4);
lean_inc_n(v___x_1371_, 6);
v___x_1385_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1384_, v___x_1377_);
v___x_1386_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1381_, v___x_1383_, v___x_1385_);
v___x_1387_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15));
v___x_1388_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17);
v___x_1389_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18));
lean_inc(v_currMacroScope_1370_);
lean_inc(v_quotContext_1369_);
v___x_1390_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1389_, v_currMacroScope_1370_);
v___x_1391_ = lean_box(0);
v___x_1392_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1371_);
lean_ctor_set(v___x_1392_, 1, v___x_1388_);
lean_ctor_set(v___x_1392_, 2, v___x_1390_);
lean_ctor_set(v___x_1392_, 3, v___x_1391_);
lean_inc_ref(v___x_1392_);
v___x_1393_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1387_, v___x_1392_, v___x_1377_);
v___x_1394_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7));
v___x_1395_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1394_, v___x_1377_, v___x_1377_);
v___x_1396_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19));
if (v_isShared_1355_ == 0)
{
lean_ctor_set_tag(v___x_1354_, 2);
lean_ctor_set(v___x_1354_, 1, v___x_1396_);
lean_ctor_set(v___x_1354_, 0, v___x_1371_);
v___x_1398_ = v___x_1354_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1623_, 1, v___x_1396_);
v___x_1398_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; size_t v_sz_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1410_; 
v___x_1399_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__21));
v___x_1400_ = l_Array_zip___redArg(v_fst_1348_, v_fst_1352_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1348_);
v_sz_1401_ = lean_array_size(v___x_1400_);
lean_inc(v___x_1378_);
lean_inc_ref_n(v___x_1377_, 2);
lean_inc_n(v___x_1371_, 5);
v___x_1402_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3(v___x_1371_, v___x_1377_, v___x_1378_, v_sz_1401_, v___x_1343_, v___x_1400_);
v___x_1403_ = l_Array_append___redArg(v___x_1375_, v___x_1402_);
lean_dec_ref(v___x_1402_);
v___x_1404_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1371_);
lean_ctor_set(v___x_1404_, 1, v___x_1372_);
lean_ctor_set(v___x_1404_, 2, v___x_1403_);
v___x_1405_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1399_, v___x_1404_);
lean_inc_ref(v___x_1398_);
v___x_1406_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1372_, v___x_1398_, v___x_1377_, v___x_1405_);
v___x_1407_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23));
v___x_1408_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24));
if (v_isShared_1351_ == 0)
{
lean_ctor_set_tag(v___x_1350_, 2);
lean_ctor_set(v___x_1350_, 1, v___x_1408_);
lean_ctor_set(v___x_1350_, 0, v___x_1371_);
v___x_1410_ = v___x_1350_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v___x_1408_);
v___x_1410_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; size_t v_sz_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; size_t v_sz_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1620_; 
v___x_1411_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26));
v___x_1412_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28);
v___x_1413_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__29));
lean_inc_n(v_currMacroScope_1370_, 12);
lean_inc_n(v_quotContext_1369_, 12);
v___x_1414_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1413_, v_currMacroScope_1370_);
v___x_1415_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34));
lean_inc_n(v___x_1371_, 102);
v___x_1416_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1371_);
lean_ctor_set(v___x_1416_, 1, v___x_1412_);
lean_ctor_set(v___x_1416_, 2, v___x_1414_);
lean_ctor_set(v___x_1416_, 3, v___x_1415_);
lean_inc_ref_n(v___x_1377_, 34);
v___x_1417_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1411_, v___x_1377_, v___x_1416_);
v___x_1418_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35));
v___x_1419_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1371_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37);
v___x_1421_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__38));
v___x_1422_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1421_, v_currMacroScope_1370_);
v___x_1423_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43));
v___x_1424_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1371_);
lean_ctor_set(v___x_1424_, 1, v___x_1420_);
lean_ctor_set(v___x_1424_, 2, v___x_1422_);
lean_ctor_set(v___x_1424_, 3, v___x_1423_);
v___x_1425_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1411_, v___x_1377_, v___x_1424_);
lean_inc_ref(v___x_1419_);
v___x_1426_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1372_, v___x_1417_, v___x_1419_, v___x_1425_);
v___x_1427_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1372_, v___x_1410_, v___x_1426_);
v___x_1428_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1407_, v___x_1427_);
v___x_1429_ = l_Lean_Syntax_node6(v___x_1371_, v___x_1380_, v___x_1386_, v___x_1393_, v___x_1395_, v___x_1377_, v___x_1406_, v___x_1428_);
lean_inc(v___x_1378_);
v___x_1430_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1373_, v___x_1378_, v___x_1429_);
v___x_1431_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44));
v___x_1432_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45));
v___x_1433_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46));
v___x_1434_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47));
v___x_1435_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1371_);
lean_ctor_set(v___x_1435_, 1, v___x_1433_);
v___x_1436_ = l_Array_append___redArg(v___x_1375_, v_encInstBinders_1313_);
v___x_1437_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1371_);
lean_ctor_set(v___x_1437_, 1, v___x_1372_);
lean_ctor_set(v___x_1437_, 2, v___x_1436_);
v___x_1438_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1434_, v___x_1435_, v___x_1437_);
v___x_1439_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1371_);
lean_ctor_set(v___x_1439_, 1, v___x_1431_);
v___x_1440_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48));
v___x_1441_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49));
v___x_1442_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51));
v___x_1443_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1442_, v___x_1377_);
v___x_1444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1371_);
lean_ctor_set(v___x_1444_, 1, v___x_1440_);
v___x_1445_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53));
v___x_1446_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12));
v___x_1447_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_1448_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1371_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
v___x_1449_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_1450_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54);
v___x_1451_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55));
v___x_1452_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1451_, v_currMacroScope_1370_);
v___x_1453_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__58));
v___x_1454_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1371_);
lean_ctor_set(v___x_1454_, 1, v___x_1450_);
lean_ctor_set(v___x_1454_, 2, v___x_1452_);
lean_ctor_set(v___x_1454_, 3, v___x_1453_);
v___x_1455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53));
v___x_1456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55));
v___x_1457_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10));
v___x_1458_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1371_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57));
v___x_1460_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58);
v___x_1461_ = lean_box(0);
v___x_1462_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1461_, v_currMacroScope_1370_);
v___x_1463_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__65));
v___x_1464_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1371_);
lean_ctor_set(v___x_1464_, 1, v___x_1460_);
lean_ctor_set(v___x_1464_, 2, v___x_1462_);
lean_ctor_set(v___x_1464_, 3, v___x_1463_);
v___x_1465_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1459_, v___x_1464_);
v___x_1466_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1456_, v___x_1458_, v___x_1465_);
v___x_1467_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67));
v___x_1468_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68));
v___x_1469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1371_);
lean_ctor_set(v___x_1469_, 1, v___x_1468_);
v___x_1470_ = l_Lean_mkCIdent(v_name_1326_);
v___x_1471_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1467_, v___x_1469_, v___x_1470_);
v_sz_1472_ = lean_array_size(v_a_1364_);
v___x_1473_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(v_sz_1472_, v___x_1343_, v_a_1364_);
v___x_1474_ = l_Array_append___redArg(v___x_1375_, v___x_1473_);
lean_dec_ref(v___x_1473_);
v___x_1475_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1371_);
lean_ctor_set(v___x_1475_, 1, v___x_1372_);
lean_ctor_set(v___x_1475_, 2, v___x_1474_);
v___x_1476_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1449_, v___x_1471_, v___x_1475_);
v___x_1477_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_1478_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1371_);
lean_ctor_set(v___x_1478_, 1, v___x_1477_);
v___x_1479_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1455_, v___x_1466_, v___x_1476_, v___x_1478_);
v___x_1480_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1372_, v___x_1479_);
v___x_1481_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1449_, v___x_1454_, v___x_1480_);
lean_inc_ref_n(v___x_1448_, 2);
v___x_1482_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1446_, v___x_1448_, v___x_1481_);
v___x_1483_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1445_, v___x_1377_, v___x_1482_);
v___x_1484_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70));
v___x_1485_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17));
v___x_1486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1371_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
v___x_1487_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72));
v___x_1488_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73));
v___x_1489_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1371_);
lean_ctor_set(v___x_1489_, 1, v___x_1488_);
v___x_1490_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75));
v___x_1491_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11));
v___x_1492_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13));
v___x_1493_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_1494_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
v___x_1495_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1494_, v_currMacroScope_1370_);
v___x_1496_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77));
v___x_1497_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1371_);
lean_ctor_set(v___x_1497_, 1, v___x_1493_);
lean_ctor_set(v___x_1497_, 2, v___x_1495_);
lean_ctor_set(v___x_1497_, 3, v___x_1496_);
v___x_1498_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1492_, v___x_1497_, v___x_1377_);
v___x_1499_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16));
v___x_1500_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79);
v___x_1501_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80));
v___x_1502_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1501_, v_currMacroScope_1370_);
v___x_1503_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1371_);
lean_ctor_set(v___x_1503_, 1, v___x_1500_);
lean_ctor_set(v___x_1503_, 2, v___x_1502_);
lean_ctor_set(v___x_1503_, 3, v___x_1391_);
lean_inc_ref(v___x_1503_);
lean_inc_ref_n(v___x_1486_, 4);
v___x_1504_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1499_, v___x_1486_, v___x_1377_, v___x_1503_);
v___x_1505_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1372_, v___x_1377_, v___x_1377_, v___x_1504_);
v___x_1506_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1491_, v___x_1498_, v___x_1505_);
v___x_1507_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_1508_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
v___x_1509_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1508_, v_currMacroScope_1370_);
v___x_1510_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82));
v___x_1511_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1371_);
lean_ctor_set(v___x_1511_, 1, v___x_1507_);
lean_ctor_set(v___x_1511_, 2, v___x_1509_);
lean_ctor_set(v___x_1511_, 3, v___x_1510_);
v___x_1512_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1492_, v___x_1511_, v___x_1377_);
v___x_1513_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84);
v___x_1514_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85));
v___x_1515_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1514_, v_currMacroScope_1370_);
v___x_1516_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1371_);
lean_ctor_set(v___x_1516_, 1, v___x_1513_);
lean_ctor_set(v___x_1516_, 2, v___x_1515_);
lean_ctor_set(v___x_1516_, 3, v___x_1391_);
lean_inc_ref(v___x_1516_);
v___x_1517_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1499_, v___x_1486_, v___x_1377_, v___x_1516_);
v___x_1518_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1372_, v___x_1377_, v___x_1377_, v___x_1517_);
v___x_1519_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1491_, v___x_1512_, v___x_1518_);
v___x_1520_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1372_, v___x_1506_, v___x_1419_, v___x_1519_);
v___x_1521_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1490_, v___x_1520_);
v___x_1522_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87));
v___x_1523_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1522_, v___x_1377_);
v___x_1524_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__88));
v___x_1525_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1371_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
lean_inc_ref_n(v___x_1525_, 2);
lean_inc_n(v___x_1523_, 2);
lean_inc_ref_n(v___x_1489_, 2);
v___x_1526_ = l_Lean_Syntax_node6(v___x_1371_, v___x_1487_, v___x_1489_, v___x_1377_, v___x_1521_, v___x_1523_, v___x_1377_, v___x_1525_);
v___x_1527_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91));
v___x_1528_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1527_, v___x_1377_, v___x_1377_);
v___x_1529_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93));
v___x_1530_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95));
v___x_1531_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97));
v___x_1532_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99));
v___x_1533_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101));
v___x_1534_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1533_, v___x_1503_);
v___x_1535_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__35);
v___x_1536_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__36));
v___x_1537_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1536_, v_currMacroScope_1370_);
v___x_1538_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1538_, 0, v___x_1371_);
lean_ctor_set(v___x_1538_, 1, v___x_1535_);
lean_ctor_set(v___x_1538_, 2, v___x_1537_);
lean_ctor_set(v___x_1538_, 3, v___x_1391_);
lean_inc_ref(v___x_1538_);
v___x_1539_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1372_, v___x_1538_);
v___x_1540_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103));
v___x_1541_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104));
v___x_1542_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1371_);
lean_ctor_set(v___x_1542_, 1, v___x_1541_);
v___x_1543_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106);
v___x_1544_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__107));
v___x_1545_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1544_, v_currMacroScope_1370_);
v___x_1546_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110));
v___x_1547_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1371_);
lean_ctor_set(v___x_1547_, 1, v___x_1543_);
lean_ctor_set(v___x_1547_, 2, v___x_1545_);
lean_ctor_set(v___x_1547_, 3, v___x_1546_);
v_sz_1548_ = lean_array_size(v_fst_1356_);
v___x_1549_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_1548_, v___x_1343_, v_fst_1356_);
v___x_1550_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__111);
v___x_1551_ = l_Lean_mkSepArray(v___x_1549_, v___x_1550_);
lean_dec_ref(v___x_1549_);
v___x_1552_ = l_Array_append___redArg(v___x_1375_, v___x_1551_);
lean_dec_ref(v___x_1551_);
v___x_1553_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1371_);
lean_ctor_set(v___x_1553_, 1, v___x_1372_);
lean_ctor_set(v___x_1553_, 2, v___x_1552_);
v___x_1554_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1490_, v___x_1553_);
lean_inc_ref(v___x_1392_);
v___x_1555_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1372_, v___x_1448_, v___x_1392_);
v___x_1556_ = l_Lean_Syntax_node6(v___x_1371_, v___x_1487_, v___x_1489_, v___x_1377_, v___x_1554_, v___x_1523_, v___x_1555_, v___x_1525_);
v___x_1557_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1372_, v___x_1556_);
v___x_1558_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1449_, v___x_1547_, v___x_1557_);
v___x_1559_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1372_, v___x_1558_);
lean_inc_ref(v___x_1542_);
v___x_1560_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1540_, v___x_1542_, v___x_1559_);
v___x_1561_ = l_Lean_Syntax_node5(v___x_1371_, v___x_1532_, v___x_1534_, v___x_1539_, v___x_1377_, v___x_1486_, v___x_1560_);
v___x_1562_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1531_, v___x_1561_);
lean_inc_n(v___x_1528_, 2);
v___x_1563_ = l_Lean_Syntax_node4(v___x_1371_, v___x_1530_, v___x_1377_, v___x_1377_, v___x_1562_, v___x_1528_);
v___x_1564_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1533_, v___x_1516_);
v___x_1565_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113);
v___x_1566_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114));
v___x_1567_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1566_, v_currMacroScope_1370_);
v___x_1568_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1371_);
lean_ctor_set(v___x_1568_, 1, v___x_1565_);
lean_ctor_set(v___x_1568_, 2, v___x_1567_);
lean_ctor_set(v___x_1568_, 3, v___x_1391_);
v___x_1569_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1372_, v___x_1568_);
v___x_1570_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115));
v___x_1571_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116));
v___x_1572_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1371_);
lean_ctor_set(v___x_1572_, 1, v___x_1570_);
v___x_1573_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118));
v___x_1574_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120));
v___x_1575_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122));
v___x_1576_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123));
v___x_1577_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1371_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125));
v___x_1579_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1578_, v___x_1377_);
v___x_1580_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127));
v___x_1581_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1446_, v___x_1448_, v___x_1392_);
v___x_1582_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1372_, v___x_1581_);
v___x_1583_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
v___x_1584_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1371_);
lean_ctor_set(v___x_1584_, 1, v___x_1583_);
v___x_1585_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_1586_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129);
v___x_1587_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__130));
v___x_1588_ = l_Lean_addMacroScope(v_quotContext_1369_, v___x_1587_, v_currMacroScope_1370_);
v___x_1589_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133));
v___x_1590_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1371_);
lean_ctor_set(v___x_1590_, 1, v___x_1586_);
lean_ctor_set(v___x_1590_, 2, v___x_1588_);
lean_ctor_set(v___x_1590_, 3, v___x_1589_);
lean_inc(v___x_1569_);
v___x_1591_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1449_, v___x_1590_, v___x_1569_);
v___x_1592_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1585_, v___x_1591_);
v___x_1593_ = l_Lean_Syntax_node4(v___x_1371_, v___x_1580_, v___x_1538_, v___x_1582_, v___x_1584_, v___x_1592_);
v___x_1594_ = l_Lean_Syntax_node4(v___x_1371_, v___x_1575_, v___x_1577_, v___x_1377_, v___x_1579_, v___x_1593_);
v___x_1595_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1574_, v___x_1594_, v___x_1377_);
v___x_1596_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__135));
v___x_1597_ = l_Lean_Syntax_SepArray_ofElems(v___x_1418_, v_snd_1357_);
lean_dec(v_snd_1357_);
v___x_1598_ = l_Array_append___redArg(v___x_1375_, v___x_1597_);
lean_dec_ref(v___x_1597_);
v___x_1599_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1371_);
lean_ctor_set(v___x_1599_, 1, v___x_1372_);
lean_ctor_set(v___x_1599_, 2, v___x_1598_);
v___x_1600_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1490_, v___x_1599_);
v___x_1601_ = l_Lean_Syntax_node6(v___x_1371_, v___x_1487_, v___x_1489_, v___x_1377_, v___x_1600_, v___x_1523_, v___x_1377_, v___x_1525_);
v___x_1602_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1372_, v___x_1601_);
v___x_1603_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1596_, v___x_1542_, v___x_1602_);
v___x_1604_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1574_, v___x_1603_, v___x_1377_);
v___x_1605_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1372_, v___x_1595_, v___x_1604_);
v___x_1606_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1573_, v___x_1605_);
v___x_1607_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1571_, v___x_1572_, v___x_1606_);
v___x_1608_ = l_Lean_Syntax_node5(v___x_1371_, v___x_1532_, v___x_1564_, v___x_1569_, v___x_1377_, v___x_1486_, v___x_1607_);
v___x_1609_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1531_, v___x_1608_);
v___x_1610_ = l_Lean_Syntax_node4(v___x_1371_, v___x_1530_, v___x_1377_, v___x_1377_, v___x_1609_, v___x_1528_);
v___x_1611_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1372_, v___x_1563_, v___x_1377_, v___x_1610_);
v___x_1612_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1529_, v___x_1398_, v___x_1611_, v___x_1377_);
v___x_1613_ = l_Lean_Syntax_node1(v___x_1371_, v___x_1372_, v___x_1612_);
v___x_1614_ = l_Lean_Syntax_node4(v___x_1371_, v___x_1484_, v___x_1486_, v___x_1526_, v___x_1528_, v___x_1613_);
v___x_1615_ = l_Lean_Syntax_node6(v___x_1371_, v___x_1441_, v___x_1443_, v___x_1444_, v___x_1377_, v___x_1377_, v___x_1483_, v___x_1614_);
v___x_1616_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1373_, v___x_1378_, v___x_1615_);
v___x_1617_ = l_Lean_Syntax_node3(v___x_1371_, v___x_1432_, v___x_1438_, v___x_1439_, v___x_1616_);
v___x_1618_ = l_Lean_Syntax_node2(v___x_1371_, v___x_1372_, v___x_1430_, v___x_1617_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 0, v___x_1618_);
v___x_1620_ = v___x_1366_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v___x_1618_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_del_object(v___x_1359_);
lean_dec(v_snd_1357_);
lean_dec(v_fst_1356_);
lean_del_object(v___x_1354_);
lean_dec(v_fst_1352_);
lean_del_object(v___x_1350_);
lean_dec(v_fst_1348_);
lean_del_object(v___x_1328_);
lean_dec(v_name_1326_);
v_a_1627_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1362_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1362_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_del_object(v___x_1328_);
lean_dec(v_name_1326_);
lean_dec_ref(v_params_1312_);
v_a_1640_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1344_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1344_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___boxed(lean_object* v_indVal_1673_, lean_object* v_params_1674_, lean_object* v_encInstBinders_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance(v_indVal_1673_, v_params_1674_, v_encInstBinders_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_);
lean_dec(v_a_1681_);
lean_dec_ref(v_a_1680_);
lean_dec(v_a_1679_);
lean_dec_ref(v_a_1678_);
lean_dec(v_a_1677_);
lean_dec_ref(v_a_1676_);
lean_dec_ref(v_encInstBinders_1675_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0(lean_object* v_00_u03b1_1684_, lean_object* v_msg_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v_msg_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___boxed(lean_object* v_00_u03b1_1694_, lean_object* v_msg_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0(v_00_u03b1_1694_, v_msg_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec_ref(v___y_1696_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2(size_t v_sz_1704_, size_t v_i_1705_, lean_object* v_bs_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(v_sz_1704_, v_i_1705_, v_bs_1706_, v___y_1709_, v___y_1711_, v___y_1712_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___boxed(lean_object* v_sz_1715_, lean_object* v_i_1716_, lean_object* v_bs_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_){
_start:
{
size_t v_sz_boxed_1725_; size_t v_i_boxed_1726_; lean_object* v_res_1727_; 
v_sz_boxed_1725_ = lean_unbox_usize(v_sz_1715_);
lean_dec(v_sz_1715_);
v_i_boxed_1726_ = lean_unbox_usize(v_i_1716_);
lean_dec(v_i_1716_);
v_res_1727_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2(v_sz_boxed_1725_, v_i_boxed_1726_, v_bs_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_);
lean_dec(v___y_1723_);
lean_dec_ref(v___y_1722_);
lean_dec(v___y_1721_);
lean_dec_ref(v___y_1720_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7(lean_object* v_cls_1728_, lean_object* v_msg_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(v_cls_1728_, v_msg_1729_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___boxed(lean_object* v_cls_1738_, lean_object* v_msg_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7(v_cls_1738_, v_msg_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1(lean_object* v_msgData_1748_, lean_object* v_macroStack_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg(v_msgData_1748_, v_macroStack_1749_, v___y_1754_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___boxed(lean_object* v_msgData_1758_, lean_object* v_macroStack_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1(v_msgData_1758_, v_macroStack_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_);
lean_dec(v___y_1765_);
lean_dec_ref(v___y_1764_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1767_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0(void){
_start:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = lean_unsigned_to_nat(0u);
v___x_1769_ = l_Lean_Parser_termParser(v___x_1768_);
return v___x_1769_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1(void){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1770_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__0);
v___x_1771_ = l_Lean_Parser_Term_matchAlt(v___x_1770_);
return v___x_1771_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm(void){
_start:
{
lean_object* v___x_1772_; 
v___x_1772_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm___closed__1);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0(lean_object* v_s_1773_){
_start:
{
lean_inc(v_s_1773_);
return v_s_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0___boxed(lean_object* v_s_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_instCoeTSyntaxConsSyntaxNodeKindStrNumAnonymousOfNatNatNilMkStr4___lam__0(v_s_1774_);
lean_dec(v_s_1774_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0(lean_object* v___x_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v_toCold_1782_; lean_object* v_quotContext_1783_; lean_object* v_currMacroScope_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v_toCold_1782_ = lean_ctor_get(v___y_1779_, 0);
lean_inc_ref(v_toCold_1782_);
lean_dec_ref(v___y_1779_);
v_quotContext_1783_ = lean_ctor_get(v_toCold_1782_, 8);
lean_inc(v_quotContext_1783_);
v_currMacroScope_1784_ = lean_ctor_get(v_toCold_1782_, 9);
lean_inc(v_currMacroScope_1784_);
lean_dec_ref(v_toCold_1782_);
v___x_1785_ = l_Lean_addMacroScope(v_quotContext_1783_, v___x_1778_, v_currMacroScope_1784_);
v___x_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1785_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0___boxed(lean_object* v___x_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___lam__0(v___x_1787_, v___y_1788_, v___y_1789_);
lean_dec(v___y_1789_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
lean_object* v___f_1800_; lean_object* v___x_1801_; 
v___f_1800_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__2));
v___x_1801_ = l_Lean_Core_withFreshMacroScope___redArg(v___f_1800_, v___y_1797_, v___y_1798_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___boxed(lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(v___y_1802_, v___y_1803_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0(lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(v___y_1810_, v___y_1811_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___boxed(lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0(v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0(lean_object* v_k_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v_b_1825_, lean_object* v_c_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v___x_1832_; 
lean_inc(v___y_1830_);
lean_inc_ref(v___y_1829_);
lean_inc(v___y_1828_);
lean_inc_ref(v___y_1827_);
lean_inc(v___y_1824_);
lean_inc_ref(v___y_1823_);
v___x_1832_ = lean_apply_9(v_k_1822_, v_b_1825_, v_c_1826_, v___y_1823_, v___y_1824_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, lean_box(0));
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0___boxed(lean_object* v_k_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v_b_1836_, lean_object* v_c_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0(v_k_1833_, v___y_1834_, v___y_1835_, v_b_1836_, v_c_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1835_);
lean_dec_ref(v___y_1834_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(lean_object* v_type_1844_, lean_object* v_k_1845_, uint8_t v_cleanupAnnotations_1846_, uint8_t v_whnfType_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
lean_object* v___f_1855_; lean_object* v___x_1856_; 
lean_inc(v___y_1849_);
lean_inc_ref(v___y_1848_);
v___f_1855_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1855_, 0, v_k_1845_);
lean_closure_set(v___f_1855_, 1, v___y_1848_);
lean_closure_set(v___f_1855_, 2, v___y_1849_);
v___x_1856_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1844_, v___f_1855_, v_cleanupAnnotations_1846_, v_whnfType_1847_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1856_) == 0)
{
return v___x_1856_;
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1856_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1856_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg___boxed(lean_object* v_type_1865_, lean_object* v_k_1866_, lean_object* v_cleanupAnnotations_1867_, lean_object* v_whnfType_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1876_; uint8_t v_whnfType_boxed_1877_; lean_object* v_res_1878_; 
v_cleanupAnnotations_boxed_1876_ = lean_unbox(v_cleanupAnnotations_1867_);
v_whnfType_boxed_1877_ = lean_unbox(v_whnfType_1868_);
v_res_1878_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(v_type_1865_, v_k_1866_, v_cleanupAnnotations_boxed_1876_, v_whnfType_boxed_1877_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10(lean_object* v_00_u03b1_1879_, lean_object* v_type_1880_, lean_object* v_k_1881_, uint8_t v_cleanupAnnotations_1882_, uint8_t v_whnfType_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(v_type_1880_, v_k_1881_, v_cleanupAnnotations_1882_, v_whnfType_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___boxed(lean_object* v_00_u03b1_1892_, lean_object* v_type_1893_, lean_object* v_k_1894_, lean_object* v_cleanupAnnotations_1895_, lean_object* v_whnfType_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1904_; uint8_t v_whnfType_boxed_1905_; lean_object* v_res_1906_; 
v_cleanupAnnotations_boxed_1904_ = lean_unbox(v_cleanupAnnotations_1895_);
v_whnfType_boxed_1905_ = lean_unbox(v_whnfType_1896_);
v_res_1906_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10(v_00_u03b1_1892_, v_type_1893_, v_k_1894_, v_cleanupAnnotations_boxed_1904_, v_whnfType_boxed_1905_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15(size_t v_sz_1907_, size_t v_i_1908_, lean_object* v_bs_1909_){
_start:
{
uint8_t v___x_1910_; 
v___x_1910_ = lean_usize_dec_lt(v_i_1908_, v_sz_1907_);
if (v___x_1910_ == 0)
{
return v_bs_1909_;
}
else
{
lean_object* v_v_1911_; lean_object* v___x_1912_; lean_object* v_bs_x27_1913_; size_t v___x_1914_; size_t v___x_1915_; lean_object* v___x_1916_; 
v_v_1911_ = lean_array_uget(v_bs_1909_, v_i_1908_);
v___x_1912_ = lean_unsigned_to_nat(0u);
v_bs_x27_1913_ = lean_array_uset(v_bs_1909_, v_i_1908_, v___x_1912_);
v___x_1914_ = ((size_t)1ULL);
v___x_1915_ = lean_usize_add(v_i_1908_, v___x_1914_);
v___x_1916_ = lean_array_uset(v_bs_x27_1913_, v_i_1908_, v_v_1911_);
v_i_1908_ = v___x_1915_;
v_bs_1909_ = v___x_1916_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15___boxed(lean_object* v_sz_1918_, lean_object* v_i_1919_, lean_object* v_bs_1920_){
_start:
{
size_t v_sz_boxed_1921_; size_t v_i_boxed_1922_; lean_object* v_res_1923_; 
v_sz_boxed_1921_ = lean_unbox_usize(v_sz_1918_);
lean_dec(v_sz_1918_);
v_i_boxed_1922_ = lean_unbox_usize(v_i_1919_);
lean_dec(v_i_1919_);
v_res_1923_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15(v_sz_boxed_1921_, v_i_boxed_1922_, v_bs_1920_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(size_t v_sz_1924_, size_t v_i_1925_, lean_object* v_bs_1926_){
_start:
{
uint8_t v___x_1927_; 
v___x_1927_ = lean_usize_dec_lt(v_i_1925_, v_sz_1924_);
if (v___x_1927_ == 0)
{
return v_bs_1926_;
}
else
{
lean_object* v_v_1928_; lean_object* v___x_1929_; lean_object* v_bs_x27_1930_; size_t v___x_1931_; size_t v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v_v_1928_ = lean_array_uget(v_bs_1926_, v_i_1925_);
v___x_1929_ = lean_unsigned_to_nat(0u);
v_bs_x27_1930_ = lean_array_uset(v_bs_1926_, v_i_1925_, v___x_1929_);
v___x_1931_ = ((size_t)1ULL);
v___x_1932_ = lean_usize_add(v_i_1925_, v___x_1931_);
v___x_1933_ = lean_array_uset(v_bs_x27_1930_, v_i_1925_, v_v_1928_);
v___x_1934_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12_spec__15(v_sz_1924_, v___x_1932_, v___x_1933_);
return v___x_1934_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12___boxed(lean_object* v_sz_1935_, lean_object* v_i_1936_, lean_object* v_bs_1937_){
_start:
{
size_t v_sz_boxed_1938_; size_t v_i_boxed_1939_; lean_object* v_res_1940_; 
v_sz_boxed_1938_ = lean_unbox_usize(v_sz_1935_);
lean_dec(v_sz_1935_);
v_i_boxed_1939_ = lean_unbox_usize(v_i_1936_);
lean_dec(v_i_1936_);
v_res_1940_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(v_sz_boxed_1938_, v_i_boxed_1939_, v_bs_1937_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5(size_t v_sz_1941_, size_t v_i_1942_, lean_object* v_bs_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
uint8_t v___x_1951_; 
v___x_1951_ = lean_usize_dec_lt(v_i_1942_, v_sz_1941_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1952_; 
v___x_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1952_, 0, v_bs_1943_);
return v___x_1952_;
}
else
{
lean_object* v___x_1953_; lean_object* v_bs_x27_1954_; lean_object* v___x_1955_; 
v___x_1953_ = lean_unsigned_to_nat(0u);
v_bs_x27_1954_ = lean_array_uset(v_bs_1943_, v_i_1942_, v___x_1953_);
v___x_1955_ = l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg(v___y_1948_, v___y_1949_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v___x_1957_; size_t v___x_1958_; size_t v___x_1959_; lean_object* v___x_1960_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref_known(v___x_1955_, 1);
v___x_1957_ = l_Lean_mkIdent(v_a_1956_);
v___x_1958_ = ((size_t)1ULL);
v___x_1959_ = lean_usize_add(v_i_1942_, v___x_1958_);
v___x_1960_ = lean_array_uset(v_bs_x27_1954_, v_i_1942_, v___x_1957_);
v_i_1942_ = v___x_1959_;
v_bs_1943_ = v___x_1960_;
goto _start;
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
lean_dec_ref(v_bs_x27_1954_);
v_a_1962_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1955_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1955_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5___boxed(lean_object* v_sz_1970_, lean_object* v_i_1971_, lean_object* v_bs_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
size_t v_sz_boxed_1980_; size_t v_i_boxed_1981_; lean_object* v_res_1982_; 
v_sz_boxed_1980_ = lean_unbox_usize(v_sz_1970_);
lean_dec(v_sz_1970_);
v_i_boxed_1981_ = lean_unbox_usize(v_i_1971_);
lean_dec(v_i_1971_);
v_res_1982_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5(v_sz_boxed_1980_, v_i_boxed_1981_, v_bs_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3(size_t v_sz_1983_, size_t v_i_1984_, lean_object* v_bs_1985_){
_start:
{
uint8_t v___x_1986_; 
v___x_1986_ = lean_usize_dec_lt(v_i_1984_, v_sz_1983_);
if (v___x_1986_ == 0)
{
return v_bs_1985_;
}
else
{
lean_object* v_v_1987_; lean_object* v___x_1988_; lean_object* v_bs_x27_1989_; size_t v___x_1990_; size_t v___x_1991_; lean_object* v___x_1992_; 
v_v_1987_ = lean_array_uget(v_bs_1985_, v_i_1984_);
v___x_1988_ = lean_unsigned_to_nat(0u);
v_bs_x27_1989_ = lean_array_uset(v_bs_1985_, v_i_1984_, v___x_1988_);
v___x_1990_ = ((size_t)1ULL);
v___x_1991_ = lean_usize_add(v_i_1984_, v___x_1990_);
v___x_1992_ = lean_array_uset(v_bs_x27_1989_, v_i_1984_, v_v_1987_);
v_i_1984_ = v___x_1991_;
v_bs_1985_ = v___x_1992_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3___boxed(lean_object* v_sz_1994_, lean_object* v_i_1995_, lean_object* v_bs_1996_){
_start:
{
size_t v_sz_boxed_1997_; size_t v_i_boxed_1998_; lean_object* v_res_1999_; 
v_sz_boxed_1997_ = lean_unbox_usize(v_sz_1994_);
lean_dec(v_sz_1994_);
v_i_boxed_1998_ = lean_unbox_usize(v_i_1995_);
lean_dec(v_i_1995_);
v_res_1999_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3(v_sz_boxed_1997_, v_i_boxed_1998_, v_bs_1996_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(size_t v_sz_2000_, size_t v_i_2001_, lean_object* v_bs_2002_, lean_object* v___y_2003_){
_start:
{
uint8_t v___x_2005_; 
v___x_2005_ = lean_usize_dec_lt(v_i_2001_, v_sz_2000_);
if (v___x_2005_ == 0)
{
lean_object* v___x_2006_; 
v___x_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2006_, 0, v_bs_2002_);
return v___x_2006_;
}
else
{
lean_object* v_toCold_2007_; lean_object* v_ref_2008_; lean_object* v_quotContext_2009_; lean_object* v_currMacroScope_2010_; lean_object* v_v_2011_; lean_object* v___x_2012_; lean_object* v_bs_x27_2013_; uint8_t v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; size_t v___x_2031_; size_t v___x_2032_; lean_object* v___x_2033_; 
v_toCold_2007_ = lean_ctor_get(v___y_2003_, 0);
v_ref_2008_ = lean_ctor_get(v___y_2003_, 2);
v_quotContext_2009_ = lean_ctor_get(v_toCold_2007_, 8);
v_currMacroScope_2010_ = lean_ctor_get(v_toCold_2007_, 9);
v_v_2011_ = lean_array_uget(v_bs_2002_, v_i_2001_);
v___x_2012_ = lean_unsigned_to_nat(0u);
v_bs_x27_2013_ = lean_array_uset(v_bs_2002_, v_i_2001_, v___x_2012_);
v___x_2014_ = 0;
v___x_2015_ = l_Lean_SourceInfo_fromRef(v_ref_2008_, v___x_2014_);
v___x_2016_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_2017_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
lean_inc_n(v___x_2015_, 5);
v___x_2018_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2015_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
v___x_2019_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_2020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2021_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_2022_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
lean_inc(v_currMacroScope_2010_);
lean_inc(v_quotContext_2009_);
v___x_2023_ = l_Lean_addMacroScope(v_quotContext_2009_, v___x_2022_, v_currMacroScope_2010_);
v___x_2024_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43));
v___x_2025_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2015_);
lean_ctor_set(v___x_2025_, 1, v___x_2021_);
lean_ctor_set(v___x_2025_, 2, v___x_2023_);
lean_ctor_set(v___x_2025_, 3, v___x_2024_);
v___x_2026_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2027_ = l_Lean_Syntax_node1(v___x_2015_, v___x_2026_, v_v_2011_);
v___x_2028_ = l_Lean_Syntax_node2(v___x_2015_, v___x_2020_, v___x_2025_, v___x_2027_);
v___x_2029_ = l_Lean_Syntax_node1(v___x_2015_, v___x_2019_, v___x_2028_);
v___x_2030_ = l_Lean_Syntax_node2(v___x_2015_, v___x_2016_, v___x_2018_, v___x_2029_);
v___x_2031_ = ((size_t)1ULL);
v___x_2032_ = lean_usize_add(v_i_2001_, v___x_2031_);
v___x_2033_ = lean_array_uset(v_bs_x27_2013_, v_i_2001_, v___x_2030_);
v_i_2001_ = v___x_2032_;
v_bs_2002_ = v___x_2033_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg___boxed(lean_object* v_sz_2035_, lean_object* v_i_2036_, lean_object* v_bs_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_){
_start:
{
size_t v_sz_boxed_2040_; size_t v_i_boxed_2041_; lean_object* v_res_2042_; 
v_sz_boxed_2040_ = lean_unbox_usize(v_sz_2035_);
lean_dec(v_sz_2035_);
v_i_boxed_2041_ = lean_unbox_usize(v_i_2036_);
lean_dec(v_i_2036_);
v_res_2042_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(v_sz_boxed_2040_, v_i_boxed_2041_, v_bs_2037_, v___y_2038_);
lean_dec_ref(v___y_2038_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8(size_t v_sz_2043_, size_t v_i_2044_, lean_object* v_bs_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_){
_start:
{
uint8_t v___x_2053_; 
v___x_2053_ = lean_usize_dec_lt(v_i_2044_, v_sz_2043_);
if (v___x_2053_ == 0)
{
lean_object* v___x_2054_; 
v___x_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2054_, 0, v_bs_2045_);
return v___x_2054_;
}
else
{
lean_object* v_toCold_2055_; lean_object* v_ref_2056_; lean_object* v_quotContext_2057_; lean_object* v_currMacroScope_2058_; lean_object* v_v_2059_; lean_object* v___x_2060_; lean_object* v_bs_x27_2061_; uint8_t v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; size_t v___x_2079_; size_t v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v_toCold_2055_ = lean_ctor_get(v___y_2050_, 0);
v_ref_2056_ = lean_ctor_get(v___y_2050_, 2);
v_quotContext_2057_ = lean_ctor_get(v_toCold_2055_, 8);
v_currMacroScope_2058_ = lean_ctor_get(v_toCold_2055_, 9);
v_v_2059_ = lean_array_uget(v_bs_2045_, v_i_2044_);
v___x_2060_ = lean_unsigned_to_nat(0u);
v_bs_x27_2061_ = lean_array_uset(v_bs_2045_, v_i_2044_, v___x_2060_);
v___x_2062_ = 0;
v___x_2063_ = l_Lean_SourceInfo_fromRef(v_ref_2056_, v___x_2062_);
v___x_2064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_2065_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
lean_inc_n(v___x_2063_, 5);
v___x_2066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2063_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___x_2067_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_2068_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2069_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_2070_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
lean_inc(v_currMacroScope_2058_);
lean_inc(v_quotContext_2057_);
v___x_2071_ = l_Lean_addMacroScope(v_quotContext_2057_, v___x_2070_, v_currMacroScope_2058_);
v___x_2072_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__43));
v___x_2073_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2063_);
lean_ctor_set(v___x_2073_, 1, v___x_2069_);
lean_ctor_set(v___x_2073_, 2, v___x_2071_);
lean_ctor_set(v___x_2073_, 3, v___x_2072_);
v___x_2074_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2075_ = l_Lean_Syntax_node1(v___x_2063_, v___x_2074_, v_v_2059_);
v___x_2076_ = l_Lean_Syntax_node2(v___x_2063_, v___x_2068_, v___x_2073_, v___x_2075_);
v___x_2077_ = l_Lean_Syntax_node1(v___x_2063_, v___x_2067_, v___x_2076_);
v___x_2078_ = l_Lean_Syntax_node2(v___x_2063_, v___x_2064_, v___x_2066_, v___x_2077_);
v___x_2079_ = ((size_t)1ULL);
v___x_2080_ = lean_usize_add(v_i_2044_, v___x_2079_);
v___x_2081_ = lean_array_uset(v_bs_x27_2061_, v_i_2044_, v___x_2078_);
v___x_2082_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(v_sz_2043_, v___x_2080_, v___x_2081_, v___y_2050_);
return v___x_2082_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8___boxed(lean_object* v_sz_2083_, lean_object* v_i_2084_, lean_object* v_bs_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
size_t v_sz_boxed_2093_; size_t v_i_boxed_2094_; lean_object* v_res_2095_; 
v_sz_boxed_2093_ = lean_unbox_usize(v_sz_2083_);
lean_dec(v_sz_2083_);
v_i_boxed_2094_ = lean_unbox_usize(v_i_2084_);
lean_dec(v_i_2084_);
v_res_2095_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8(v_sz_boxed_2093_, v_i_boxed_2094_, v_bs_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
lean_dec(v___y_2091_);
lean_dec_ref(v___y_2090_);
lean_dec(v___y_2089_);
lean_dec_ref(v___y_2088_);
lean_dec(v___y_2087_);
lean_dec_ref(v___y_2086_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(size_t v_sz_2096_, size_t v_i_2097_, lean_object* v_bs_2098_, lean_object* v___y_2099_){
_start:
{
uint8_t v___x_2101_; 
v___x_2101_ = lean_usize_dec_lt(v_i_2097_, v_sz_2096_);
if (v___x_2101_ == 0)
{
lean_object* v___x_2102_; 
v___x_2102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2102_, 0, v_bs_2098_);
return v___x_2102_;
}
else
{
lean_object* v_toCold_2103_; lean_object* v_ref_2104_; lean_object* v_quotContext_2105_; lean_object* v_currMacroScope_2106_; lean_object* v_v_2107_; lean_object* v___x_2108_; lean_object* v_bs_x27_2109_; uint8_t v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; size_t v___x_2127_; size_t v___x_2128_; lean_object* v___x_2129_; 
v_toCold_2103_ = lean_ctor_get(v___y_2099_, 0);
v_ref_2104_ = lean_ctor_get(v___y_2099_, 2);
v_quotContext_2105_ = lean_ctor_get(v_toCold_2103_, 8);
v_currMacroScope_2106_ = lean_ctor_get(v_toCold_2103_, 9);
v_v_2107_ = lean_array_uget(v_bs_2098_, v_i_2097_);
v___x_2108_ = lean_unsigned_to_nat(0u);
v_bs_x27_2109_ = lean_array_uset(v_bs_2098_, v_i_2097_, v___x_2108_);
v___x_2110_ = 0;
v___x_2111_ = l_Lean_SourceInfo_fromRef(v_ref_2104_, v___x_2110_);
v___x_2112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_2113_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
lean_inc_n(v___x_2111_, 5);
v___x_2114_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2111_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_2116_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2117_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_2118_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
lean_inc(v_currMacroScope_2106_);
lean_inc(v_quotContext_2105_);
v___x_2119_ = l_Lean_addMacroScope(v_quotContext_2105_, v___x_2118_, v_currMacroScope_2106_);
v___x_2120_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31));
v___x_2121_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2111_);
lean_ctor_set(v___x_2121_, 1, v___x_2117_);
lean_ctor_set(v___x_2121_, 2, v___x_2119_);
lean_ctor_set(v___x_2121_, 3, v___x_2120_);
v___x_2122_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2123_ = l_Lean_Syntax_node1(v___x_2111_, v___x_2122_, v_v_2107_);
v___x_2124_ = l_Lean_Syntax_node2(v___x_2111_, v___x_2116_, v___x_2121_, v___x_2123_);
v___x_2125_ = l_Lean_Syntax_node1(v___x_2111_, v___x_2115_, v___x_2124_);
v___x_2126_ = l_Lean_Syntax_node2(v___x_2111_, v___x_2112_, v___x_2114_, v___x_2125_);
v___x_2127_ = ((size_t)1ULL);
v___x_2128_ = lean_usize_add(v_i_2097_, v___x_2127_);
v___x_2129_ = lean_array_uset(v_bs_x27_2109_, v_i_2097_, v___x_2126_);
v_i_2097_ = v___x_2128_;
v_bs_2098_ = v___x_2129_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg___boxed(lean_object* v_sz_2131_, lean_object* v_i_2132_, lean_object* v_bs_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
size_t v_sz_boxed_2136_; size_t v_i_boxed_2137_; lean_object* v_res_2138_; 
v_sz_boxed_2136_ = lean_unbox_usize(v_sz_2131_);
lean_dec(v_sz_2131_);
v_i_boxed_2137_ = lean_unbox_usize(v_i_2132_);
lean_dec(v_i_2132_);
v_res_2138_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(v_sz_boxed_2136_, v_i_boxed_2137_, v_bs_2133_, v___y_2134_);
lean_dec_ref(v___y_2134_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7(size_t v_sz_2139_, size_t v_i_2140_, lean_object* v_bs_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_){
_start:
{
uint8_t v___x_2149_; 
v___x_2149_ = lean_usize_dec_lt(v_i_2140_, v_sz_2139_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2150_; 
v___x_2150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2150_, 0, v_bs_2141_);
return v___x_2150_;
}
else
{
lean_object* v_toCold_2151_; lean_object* v_ref_2152_; lean_object* v_quotContext_2153_; lean_object* v_currMacroScope_2154_; lean_object* v_v_2155_; lean_object* v___x_2156_; lean_object* v_bs_x27_2157_; uint8_t v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; size_t v___x_2175_; size_t v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v_toCold_2151_ = lean_ctor_get(v___y_2146_, 0);
v_ref_2152_ = lean_ctor_get(v___y_2146_, 2);
v_quotContext_2153_ = lean_ctor_get(v_toCold_2151_, 8);
v_currMacroScope_2154_ = lean_ctor_get(v_toCold_2151_, 9);
v_v_2155_ = lean_array_uget(v_bs_2141_, v_i_2140_);
v___x_2156_ = lean_unsigned_to_nat(0u);
v_bs_x27_2157_ = lean_array_uset(v_bs_2141_, v_i_2140_, v___x_2156_);
v___x_2158_ = 0;
v___x_2159_ = l_Lean_SourceInfo_fromRef(v_ref_2152_, v___x_2158_);
v___x_2160_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__19));
v___x_2161_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
lean_inc_n(v___x_2159_, 5);
v___x_2162_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2159_);
lean_ctor_set(v___x_2162_, 1, v___x_2161_);
v___x_2163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_2164_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2165_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_2166_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
lean_inc(v_currMacroScope_2154_);
lean_inc(v_quotContext_2153_);
v___x_2167_ = l_Lean_addMacroScope(v_quotContext_2153_, v___x_2166_, v_currMacroScope_2154_);
v___x_2168_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__31));
v___x_2169_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2159_);
lean_ctor_set(v___x_2169_, 1, v___x_2165_);
lean_ctor_set(v___x_2169_, 2, v___x_2167_);
lean_ctor_set(v___x_2169_, 3, v___x_2168_);
v___x_2170_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2171_ = l_Lean_Syntax_node1(v___x_2159_, v___x_2170_, v_v_2155_);
v___x_2172_ = l_Lean_Syntax_node2(v___x_2159_, v___x_2164_, v___x_2169_, v___x_2171_);
v___x_2173_ = l_Lean_Syntax_node1(v___x_2159_, v___x_2163_, v___x_2172_);
v___x_2174_ = l_Lean_Syntax_node2(v___x_2159_, v___x_2160_, v___x_2162_, v___x_2173_);
v___x_2175_ = ((size_t)1ULL);
v___x_2176_ = lean_usize_add(v_i_2140_, v___x_2175_);
v___x_2177_ = lean_array_uset(v_bs_x27_2157_, v_i_2140_, v___x_2174_);
v___x_2178_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(v_sz_2139_, v___x_2176_, v___x_2177_, v___y_2146_);
return v___x_2178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7___boxed(lean_object* v_sz_2179_, lean_object* v_i_2180_, lean_object* v_bs_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
size_t v_sz_boxed_2189_; size_t v_i_boxed_2190_; lean_object* v_res_2191_; 
v_sz_boxed_2189_ = lean_unbox_usize(v_sz_2179_);
lean_dec(v_sz_2179_);
v_i_boxed_2190_ = lean_unbox_usize(v_i_2180_);
lean_dec(v_i_2180_);
v_res_2191_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7(v_sz_boxed_2189_, v_i_boxed_2190_, v_bs_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2(size_t v_sz_2192_, size_t v_i_2193_, lean_object* v_bs_2194_){
_start:
{
uint8_t v___x_2195_; 
v___x_2195_ = lean_usize_dec_lt(v_i_2193_, v_sz_2192_);
if (v___x_2195_ == 0)
{
return v_bs_2194_;
}
else
{
lean_object* v_v_2196_; lean_object* v___x_2197_; lean_object* v_bs_x27_2198_; size_t v___x_2199_; size_t v___x_2200_; lean_object* v___x_2201_; 
v_v_2196_ = lean_array_uget(v_bs_2194_, v_i_2193_);
v___x_2197_ = lean_unsigned_to_nat(0u);
v_bs_x27_2198_ = lean_array_uset(v_bs_2194_, v_i_2193_, v___x_2197_);
v___x_2199_ = ((size_t)1ULL);
v___x_2200_ = lean_usize_add(v_i_2193_, v___x_2199_);
v___x_2201_ = lean_array_uset(v_bs_x27_2198_, v_i_2193_, v_v_2196_);
v_i_2193_ = v___x_2200_;
v_bs_2194_ = v___x_2201_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2___boxed(lean_object* v_sz_2203_, lean_object* v_i_2204_, lean_object* v_bs_2205_){
_start:
{
size_t v_sz_boxed_2206_; size_t v_i_boxed_2207_; lean_object* v_res_2208_; 
v_sz_boxed_2206_ = lean_unbox_usize(v_sz_2203_);
lean_dec(v_sz_2203_);
v_i_boxed_2207_ = lean_unbox_usize(v_i_2204_);
lean_dec(v_i_2204_);
v_res_2208_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2(v_sz_boxed_2206_, v_i_boxed_2207_, v_bs_2205_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6(size_t v_sz_2209_, size_t v_i_2210_, lean_object* v_bs_2211_){
_start:
{
uint8_t v___x_2212_; 
v___x_2212_ = lean_usize_dec_lt(v_i_2210_, v_sz_2209_);
if (v___x_2212_ == 0)
{
return v_bs_2211_;
}
else
{
lean_object* v_v_2213_; lean_object* v___x_2214_; lean_object* v_bs_x27_2215_; size_t v___x_2216_; size_t v___x_2217_; lean_object* v___x_2218_; 
v_v_2213_ = lean_array_uget(v_bs_2211_, v_i_2210_);
v___x_2214_ = lean_unsigned_to_nat(0u);
v_bs_x27_2215_ = lean_array_uset(v_bs_2211_, v_i_2210_, v___x_2214_);
v___x_2216_ = ((size_t)1ULL);
v___x_2217_ = lean_usize_add(v_i_2210_, v___x_2216_);
v___x_2218_ = lean_array_uset(v_bs_x27_2215_, v_i_2210_, v_v_2213_);
v_i_2210_ = v___x_2217_;
v_bs_2211_ = v___x_2218_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6___boxed(lean_object* v_sz_2220_, lean_object* v_i_2221_, lean_object* v_bs_2222_){
_start:
{
size_t v_sz_boxed_2223_; size_t v_i_boxed_2224_; lean_object* v_res_2225_; 
v_sz_boxed_2223_ = lean_unbox_usize(v_sz_2220_);
lean_dec(v_sz_2220_);
v_i_boxed_2224_ = lean_unbox_usize(v_i_2221_);
lean_dec(v_i_2221_);
v_res_2225_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6(v_sz_boxed_2223_, v_i_boxed_2224_, v_bs_2222_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4(size_t v_sz_2226_, size_t v_i_2227_, lean_object* v_bs_2228_){
_start:
{
uint8_t v___x_2229_; 
v___x_2229_ = lean_usize_dec_lt(v_i_2227_, v_sz_2226_);
if (v___x_2229_ == 0)
{
return v_bs_2228_;
}
else
{
lean_object* v_v_2230_; lean_object* v___x_2231_; lean_object* v_bs_x27_2232_; size_t v___x_2233_; size_t v___x_2234_; lean_object* v___x_2235_; 
v_v_2230_ = lean_array_uget(v_bs_2228_, v_i_2227_);
v___x_2231_ = lean_unsigned_to_nat(0u);
v_bs_x27_2232_ = lean_array_uset(v_bs_2228_, v_i_2227_, v___x_2231_);
v___x_2233_ = ((size_t)1ULL);
v___x_2234_ = lean_usize_add(v_i_2227_, v___x_2233_);
v___x_2235_ = lean_array_uset(v_bs_x27_2232_, v_i_2227_, v_v_2230_);
v_i_2227_ = v___x_2234_;
v_bs_2228_ = v___x_2235_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4___boxed(lean_object* v_sz_2237_, lean_object* v_i_2238_, lean_object* v_bs_2239_){
_start:
{
size_t v_sz_boxed_2240_; size_t v_i_boxed_2241_; lean_object* v_res_2242_; 
v_sz_boxed_2240_ = lean_unbox_usize(v_sz_2237_);
lean_dec(v_sz_2237_);
v_i_boxed_2241_ = lean_unbox_usize(v_i_2238_);
lean_dec(v_i_2238_);
v_res_2242_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4(v_sz_boxed_2240_, v_i_boxed_2241_, v_bs_2239_);
return v_res_2242_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3(void){
_start:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__2));
v___x_2251_ = l_Lean_stringToMessageData(v___x_2250_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1(size_t v_sz_2252_, size_t v_i_2253_, lean_object* v_bs_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
uint8_t v___x_2262_; 
v___x_2262_ = lean_usize_dec_lt(v_i_2253_, v_sz_2252_);
if (v___x_2262_ == 0)
{
lean_object* v___x_2263_; 
v___x_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2263_, 0, v_bs_2254_);
return v___x_2263_;
}
else
{
lean_object* v_v_2264_; lean_object* v___x_2265_; lean_object* v_bs_x27_2266_; lean_object* v___x_2267_; 
v_v_2264_ = lean_array_uget(v_bs_2254_, v_i_2253_);
v___x_2265_ = lean_unsigned_to_nat(0u);
v_bs_x27_2266_ = lean_array_uset(v_bs_2254_, v_i_2253_, v___x_2265_);
v___x_2267_ = l_Lean_Meta_getFVarLocalDecl___redArg(v_v_2264_, v___y_2257_, v___y_2259_, v___y_2260_);
lean_dec(v_v_2264_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v_a_2268_; lean_object* v___x_2269_; lean_object* v___y_2271_; lean_object* v___x_2301_; uint8_t v___x_2302_; 
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v___x_2267_, 1);
v___x_2269_ = l_Lean_LocalDecl_userName(v_a_2268_);
lean_dec(v_a_2268_);
v___x_2301_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__85));
v___x_2302_ = lean_name_eq(v___x_2269_, v___x_2301_);
if (v___x_2302_ == 0)
{
v___y_2271_ = v___y_2259_;
goto v___jp_2270_;
}
else
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__3);
v___x_2304_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v___x_2303_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_dec_ref_known(v___x_2304_, 1);
v___y_2271_ = v___y_2259_;
goto v___jp_2270_;
}
else
{
lean_object* v_a_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_dec(v___x_2269_);
lean_dec_ref(v_bs_x27_2266_);
v_a_2305_ = lean_ctor_get(v___x_2304_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2304_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2304_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_a_2305_);
lean_dec(v___x_2304_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
v___jp_2270_:
{
lean_object* v_toCold_2272_; lean_object* v_ref_2273_; lean_object* v_quotContext_2274_; lean_object* v_currMacroScope_2275_; uint8_t v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; size_t v___x_2297_; size_t v___x_2298_; lean_object* v___x_2299_; 
v_toCold_2272_ = lean_ctor_get(v___y_2271_, 0);
v_ref_2273_ = lean_ctor_get(v___y_2271_, 2);
v_quotContext_2274_ = lean_ctor_get(v_toCold_2272_, 8);
v_currMacroScope_2275_ = lean_ctor_get(v_toCold_2272_, 9);
v___x_2276_ = 0;
v___x_2277_ = l_Lean_SourceInfo_fromRef(v_ref_2273_, v___x_2276_);
v___x_2278_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___closed__1));
v___x_2279_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10));
lean_inc_n(v___x_2277_, 7);
v___x_2280_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2277_);
lean_ctor_set(v___x_2280_, 1, v___x_2279_);
v___x_2281_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2282_ = l_Lean_mkIdent(v___x_2269_);
v___x_2283_ = l_Lean_Syntax_node1(v___x_2277_, v___x_2281_, v___x_2282_);
v___x_2284_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_2285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2277_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__3);
v___x_2287_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__4));
lean_inc(v_currMacroScope_2275_);
lean_inc(v_quotContext_2274_);
v___x_2288_ = l_Lean_addMacroScope(v_quotContext_2274_, v___x_2287_, v_currMacroScope_2275_);
v___x_2289_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__9));
v___x_2290_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2277_);
lean_ctor_set(v___x_2290_, 1, v___x_2286_);
lean_ctor_set(v___x_2290_, 2, v___x_2288_);
lean_ctor_set(v___x_2290_, 3, v___x_2289_);
v___x_2291_ = l_Lean_Syntax_node2(v___x_2277_, v___x_2281_, v___x_2285_, v___x_2290_);
v___x_2292_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v___x_2293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2277_);
lean_ctor_set(v___x_2293_, 1, v___x_2281_);
lean_ctor_set(v___x_2293_, 2, v___x_2292_);
v___x_2294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_2295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2277_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = l_Lean_Syntax_node5(v___x_2277_, v___x_2278_, v___x_2280_, v___x_2283_, v___x_2291_, v___x_2293_, v___x_2295_);
v___x_2297_ = ((size_t)1ULL);
v___x_2298_ = lean_usize_add(v_i_2253_, v___x_2297_);
v___x_2299_ = lean_array_uset(v_bs_x27_2266_, v_i_2253_, v___x_2296_);
v_i_2253_ = v___x_2298_;
v_bs_2254_ = v___x_2299_;
goto _start;
}
}
else
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
lean_dec_ref(v_bs_x27_2266_);
v_a_2313_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2267_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2267_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1___boxed(lean_object* v_sz_2321_, lean_object* v_i_2322_, lean_object* v_bs_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_){
_start:
{
size_t v_sz_boxed_2331_; size_t v_i_boxed_2332_; lean_object* v_res_2333_; 
v_sz_boxed_2331_ = lean_unbox_usize(v_sz_2321_);
lean_dec(v_sz_2321_);
v_i_boxed_2332_ = lean_unbox_usize(v_i_2322_);
lean_dec(v_i_2322_);
v_res_2333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1(v_sz_boxed_2331_, v_i_boxed_2332_, v_bs_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
return v_res_2333_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11(void){
_start:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2361_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__10));
v___x_2362_ = l_Lean_stringToMessageData(v___x_2361_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1(lean_object* v_v_2363_, lean_object* v___f_2364_, lean_object* v___x_2365_, lean_object* v___x_2366_, lean_object* v_argVars_2367_, lean_object* v_x_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
if (lean_obj_tag(v_v_2363_) == 1)
{
lean_object* v_str_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; size_t v_sz_2380_; size_t v___x_2381_; lean_object* v___x_2382_; 
v_str_2376_ = lean_ctor_get(v_v_2363_, 1);
lean_inc_ref(v_str_2376_);
lean_dec_ref_known(v_v_2363_, 2);
v___x_2377_ = lean_box(0);
v___x_2378_ = l_Lean_Name_str___override(v___x_2377_, v_str_2376_);
v___x_2379_ = l_Lean_mkIdent(v___x_2378_);
v_sz_2380_ = lean_array_size(v_argVars_2367_);
v___x_2381_ = ((size_t)0ULL);
lean_inc_ref(v_argVars_2367_);
v___x_2382_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__1(v_sz_2380_, v___x_2381_, v_argVars_2367_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_toCold_2383_; lean_object* v_a_2384_; lean_object* v_ref_2385_; lean_object* v_quotContext_2386_; lean_object* v_currMacroScope_2387_; uint8_t v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; size_t v_sz_2401_; lean_object* v___x_2402_; size_t v_sz_2403_; lean_object* v___x_2404_; size_t v_sz_2405_; lean_object* v___x_2406_; size_t v_sz_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v_toCold_2383_ = lean_ctor_get(v___y_2373_, 0);
v_a_2384_ = lean_ctor_get(v___x_2382_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v___x_2382_, 1);
v_ref_2385_ = lean_ctor_get(v___y_2373_, 2);
v_quotContext_2386_ = lean_ctor_get(v_toCold_2383_, 8);
v_currMacroScope_2387_ = lean_ctor_get(v_toCold_2383_, 9);
v___x_2388_ = 0;
v___x_2389_ = l_Lean_SourceInfo_fromRef(v_ref_2385_, v___x_2388_);
v___x_2390_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__0));
v___x_2391_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__2));
v___x_2392_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__1));
v___x_2393_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_2394_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
lean_inc_n(v___x_2389_, 9);
v___x_2395_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2389_);
lean_ctor_set(v___x_2395_, 1, v___x_2393_);
lean_ctor_set(v___x_2395_, 2, v___x_2394_);
v___x_2396_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__2));
v___x_2397_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2389_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7));
lean_inc_ref_n(v___x_2395_, 7);
v___x_2399_ = l_Lean_Syntax_node7(v___x_2389_, v___x_2398_, v___x_2395_, v___x_2395_, v___x_2395_, v___x_2395_, v___x_2395_, v___x_2395_, v___x_2395_);
v___x_2400_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7));
v_sz_2401_ = lean_array_size(v_a_2384_);
v___x_2402_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__2(v_sz_2401_, v___x_2381_, v_a_2384_);
v_sz_2403_ = lean_array_size(v___x_2402_);
v___x_2404_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__3(v_sz_2403_, v___x_2381_, v___x_2402_);
v_sz_2405_ = lean_array_size(v___x_2404_);
v___x_2406_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__4(v_sz_2405_, v___x_2381_, v___x_2404_);
v_sz_2407_ = lean_array_size(v___x_2406_);
v___x_2408_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_2407_, v___x_2381_, v___x_2406_);
v___x_2409_ = l_Array_append___redArg(v___x_2394_, v___x_2408_);
lean_dec_ref(v___x_2408_);
v___x_2410_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2389_);
lean_ctor_set(v___x_2410_, 1, v___x_2393_);
lean_ctor_set(v___x_2410_, 2, v___x_2409_);
v___x_2411_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__5));
v___x_2412_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12));
v___x_2413_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_2414_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2389_);
lean_ctor_set(v___x_2414_, 1, v___x_2413_);
v___x_2415_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17);
v___x_2416_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18));
lean_inc(v_currMacroScope_2387_);
lean_inc(v_quotContext_2386_);
v___x_2417_ = l_Lean_addMacroScope(v_quotContext_2386_, v___x_2416_, v_currMacroScope_2387_);
v___x_2418_ = lean_box(0);
lean_inc(v___x_2417_);
v___x_2419_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2389_);
lean_ctor_set(v___x_2419_, 1, v___x_2415_);
lean_ctor_set(v___x_2419_, 2, v___x_2417_);
lean_ctor_set(v___x_2419_, 3, v___x_2418_);
v___x_2420_ = l_Lean_Syntax_node2(v___x_2389_, v___x_2412_, v___x_2414_, v___x_2419_);
v___x_2421_ = l_Lean_Syntax_node1(v___x_2389_, v___x_2393_, v___x_2420_);
v___x_2422_ = l_Lean_Syntax_node2(v___x_2389_, v___x_2400_, v___x_2410_, v___x_2421_);
lean_inc(v___x_2379_);
v___x_2423_ = l_Lean_Syntax_node5(v___x_2389_, v___x_2392_, v___x_2395_, v___x_2397_, v___x_2399_, v___x_2379_, v___x_2422_);
v___x_2424_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__5(v_sz_2380_, v___x_2381_, v_argVars_2367_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
if (lean_obj_tag(v___x_2424_) == 0)
{
lean_object* v_a_2425_; size_t v_sz_2426_; lean_object* v___x_2427_; size_t v_sz_2428_; lean_object* v___x_2429_; 
v_a_2425_ = lean_ctor_get(v___x_2424_, 0);
lean_inc(v_a_2425_);
lean_dec_ref_known(v___x_2424_, 1);
v_sz_2426_ = lean_array_size(v_a_2425_);
v___x_2427_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__6(v_sz_2426_, v___x_2381_, v_a_2425_);
v_sz_2428_ = lean_array_size(v___x_2427_);
lean_inc_ref(v___x_2427_);
v___x_2429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7(v_sz_2428_, v___x_2381_, v___x_2427_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
if (lean_obj_tag(v___x_2429_) == 0)
{
lean_object* v_a_2430_; lean_object* v___x_2431_; 
v_a_2430_ = lean_ctor_get(v___x_2429_, 0);
lean_inc(v_a_2430_);
lean_dec_ref_known(v___x_2429_, 1);
lean_inc_ref(v___f_2364_);
lean_inc(v___y_2374_);
lean_inc_ref(v___y_2373_);
lean_inc(v___y_2372_);
lean_inc_ref(v___y_2371_);
lean_inc(v___y_2370_);
lean_inc_ref(v___y_2369_);
v___x_2431_ = lean_apply_7(v___f_2364_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, lean_box(0));
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v_a_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
lean_inc_n(v_a_2432_, 26);
lean_dec_ref_known(v___x_2431_, 1);
v___x_2433_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__28));
v___x_2434_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__4));
v___x_2435_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2435_, 0, v_a_2432_);
lean_ctor_set(v___x_2435_, 1, v___x_2396_);
v___x_2436_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2437_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__6));
v___x_2438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__37));
v___x_2439_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2439_, 0, v_a_2432_);
lean_ctor_set(v___x_2439_, 1, v___x_2438_);
lean_inc(v___x_2379_);
v___x_2440_ = l_Lean_Syntax_node2(v_a_2432_, v___x_2437_, v___x_2439_, v___x_2379_);
v___x_2441_ = l_Array_append___redArg(v___x_2394_, v___x_2427_);
lean_inc_ref(v___x_2441_);
v___x_2442_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2442_, 0, v_a_2432_);
lean_ctor_set(v___x_2442_, 1, v___x_2393_);
lean_ctor_set(v___x_2442_, 2, v___x_2441_);
lean_inc(v___x_2440_);
v___x_2443_ = l_Lean_Syntax_node2(v_a_2432_, v___x_2436_, v___x_2440_, v___x_2442_);
v___x_2444_ = l_Lean_Syntax_node1(v_a_2432_, v___x_2393_, v___x_2443_);
v___x_2445_ = l_Lean_Syntax_node1(v_a_2432_, v___x_2393_, v___x_2444_);
v___x_2446_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__7));
v___x_2447_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2447_, 0, v_a_2432_);
lean_ctor_set(v___x_2447_, 1, v___x_2446_);
v___x_2448_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__103));
v___x_2449_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__104));
v___x_2450_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2450_, 0, v_a_2432_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__106);
v___x_2452_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__107));
lean_inc_n(v_currMacroScope_2387_, 2);
lean_inc_n(v_quotContext_2386_, 2);
v___x_2453_ = l_Lean_addMacroScope(v_quotContext_2386_, v___x_2452_, v_currMacroScope_2387_);
v___x_2454_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__110));
v___x_2455_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2455_, 0, v_a_2432_);
lean_ctor_set(v___x_2455_, 1, v___x_2451_);
lean_ctor_set(v___x_2455_, 2, v___x_2453_);
lean_ctor_set(v___x_2455_, 3, v___x_2454_);
v___x_2456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__9));
v___x_2457_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__55));
v___x_2458_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__10));
v___x_2459_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2459_, 0, v_a_2432_);
lean_ctor_set(v___x_2459_, 1, v___x_2458_);
v___x_2460_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__57));
v___x_2461_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__58);
v___x_2462_ = l_Lean_addMacroScope(v_quotContext_2386_, v___x_2377_, v_currMacroScope_2387_);
v___x_2463_ = l_Lean_Name_mkStr3(v___x_2390_, v___x_2433_, v___x_2365_);
v___x_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2463_);
v___x_2465_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__62));
lean_inc_ref_n(v___x_2366_, 2);
v___x_2466_ = l_Lean_Name_mkStr3(v___x_2390_, v___x_2366_, v___x_2411_);
v___x_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2466_);
v___x_2468_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__67));
v___x_2469_ = l_Lean_Name_mkStr3(v___x_2390_, v___x_2366_, v___x_2391_);
v___x_2470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2469_);
v___x_2471_ = l_Lean_Name_mkStr2(v___x_2390_, v___x_2366_);
v___x_2472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2472_, 0, v___x_2471_);
v___x_2473_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__59));
v___x_2474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2472_);
lean_ctor_set(v___x_2474_, 1, v___x_2473_);
v___x_2475_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2475_, 0, v___x_2470_);
lean_ctor_set(v___x_2475_, 1, v___x_2474_);
v___x_2476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2476_, 0, v___x_2468_);
lean_ctor_set(v___x_2476_, 1, v___x_2475_);
v___x_2477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2467_);
lean_ctor_set(v___x_2477_, 1, v___x_2476_);
v___x_2478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2465_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
v___x_2479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2464_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
lean_inc_ref(v___x_2479_);
lean_inc(v___x_2462_);
v___x_2480_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2480_, 0, v_a_2432_);
lean_ctor_set(v___x_2480_, 1, v___x_2461_);
lean_ctor_set(v___x_2480_, 2, v___x_2462_);
lean_ctor_set(v___x_2480_, 3, v___x_2479_);
v___x_2481_ = l_Lean_Syntax_node1(v_a_2432_, v___x_2460_, v___x_2480_);
v___x_2482_ = l_Lean_Syntax_node2(v_a_2432_, v___x_2457_, v___x_2459_, v___x_2481_);
v___x_2483_ = l_Array_append___redArg(v___x_2394_, v_a_2430_);
lean_dec(v_a_2430_);
v___x_2484_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2484_, 0, v_a_2432_);
lean_ctor_set(v___x_2484_, 1, v___x_2393_);
lean_ctor_set(v___x_2484_, 2, v___x_2483_);
v___x_2485_ = l_Lean_Syntax_node2(v_a_2432_, v___x_2436_, v___x_2440_, v___x_2484_);
v___x_2486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2486_, 0, v_a_2432_);
lean_ctor_set(v___x_2486_, 1, v___x_2413_);
v___x_2487_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2487_, 0, v_a_2432_);
lean_ctor_set(v___x_2487_, 1, v___x_2415_);
lean_ctor_set(v___x_2487_, 2, v___x_2417_);
lean_ctor_set(v___x_2487_, 3, v___x_2418_);
v___x_2488_ = l_Lean_Syntax_node1(v_a_2432_, v___x_2393_, v___x_2487_);
v___x_2489_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__14));
v___x_2490_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2490_, 0, v_a_2432_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
v___x_2491_ = l_Lean_Syntax_node5(v_a_2432_, v___x_2456_, v___x_2482_, v___x_2485_, v___x_2486_, v___x_2488_, v___x_2490_);
v___x_2492_ = l_Lean_Syntax_node1(v_a_2432_, v___x_2393_, v___x_2491_);
v___x_2493_ = l_Lean_Syntax_node2(v_a_2432_, v___x_2436_, v___x_2455_, v___x_2492_);
v___x_2494_ = l_Lean_Syntax_node1(v_a_2432_, v___x_2393_, v___x_2493_);
v___x_2495_ = l_Lean_Syntax_node2(v_a_2432_, v___x_2448_, v___x_2450_, v___x_2494_);
v___x_2496_ = l_Lean_Syntax_node4(v_a_2432_, v___x_2434_, v___x_2435_, v___x_2445_, v___x_2447_, v___x_2495_);
v___x_2497_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8(v_sz_2428_, v___x_2381_, v___x_2427_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v_a_2498_; lean_object* v___x_2499_; 
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_a_2498_);
lean_dec_ref_known(v___x_2497_, 1);
lean_inc(v___y_2374_);
lean_inc_ref(v___y_2373_);
lean_inc(v___y_2372_);
lean_inc_ref(v___y_2371_);
lean_inc(v___y_2370_);
lean_inc_ref(v___y_2369_);
v___x_2499_ = lean_apply_7(v___f_2364_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, lean_box(0));
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2531_; 
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2502_ = v___x_2499_;
v_isShared_2503_ = v_isSharedCheck_2531_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2499_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2531_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2529_; 
lean_inc_n(v_a_2500_, 19);
v___x_2504_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2504_, 0, v_a_2500_);
lean_ctor_set(v___x_2504_, 1, v___x_2396_);
v___x_2505_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2505_, 0, v_a_2500_);
lean_ctor_set(v___x_2505_, 1, v___x_2438_);
v___x_2506_ = l_Lean_Syntax_node2(v_a_2500_, v___x_2437_, v___x_2505_, v___x_2379_);
v___x_2507_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2507_, 0, v_a_2500_);
lean_ctor_set(v___x_2507_, 1, v___x_2393_);
lean_ctor_set(v___x_2507_, 2, v___x_2441_);
lean_inc(v___x_2506_);
v___x_2508_ = l_Lean_Syntax_node2(v_a_2500_, v___x_2436_, v___x_2506_, v___x_2507_);
v___x_2509_ = l_Lean_Syntax_node1(v_a_2500_, v___x_2393_, v___x_2508_);
v___x_2510_ = l_Lean_Syntax_node1(v_a_2500_, v___x_2393_, v___x_2509_);
v___x_2511_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2511_, 0, v_a_2500_);
lean_ctor_set(v___x_2511_, 1, v___x_2446_);
v___x_2512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2512_, 0, v_a_2500_);
lean_ctor_set(v___x_2512_, 1, v___x_2449_);
v___x_2513_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__53));
v___x_2514_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2514_, 0, v_a_2500_);
lean_ctor_set(v___x_2514_, 1, v___x_2458_);
v___x_2515_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2515_, 0, v_a_2500_);
lean_ctor_set(v___x_2515_, 1, v___x_2461_);
lean_ctor_set(v___x_2515_, 2, v___x_2462_);
lean_ctor_set(v___x_2515_, 3, v___x_2479_);
v___x_2516_ = l_Lean_Syntax_node1(v_a_2500_, v___x_2460_, v___x_2515_);
v___x_2517_ = l_Lean_Syntax_node2(v_a_2500_, v___x_2457_, v___x_2514_, v___x_2516_);
v___x_2518_ = l_Array_append___redArg(v___x_2394_, v_a_2498_);
lean_dec(v_a_2498_);
v___x_2519_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2519_, 0, v_a_2500_);
lean_ctor_set(v___x_2519_, 1, v___x_2393_);
lean_ctor_set(v___x_2519_, 2, v___x_2518_);
v___x_2520_ = l_Lean_Syntax_node2(v_a_2500_, v___x_2436_, v___x_2506_, v___x_2519_);
v___x_2521_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2521_, 0, v_a_2500_);
lean_ctor_set(v___x_2521_, 1, v___x_2489_);
v___x_2522_ = l_Lean_Syntax_node3(v_a_2500_, v___x_2513_, v___x_2517_, v___x_2520_, v___x_2521_);
v___x_2523_ = l_Lean_Syntax_node1(v_a_2500_, v___x_2393_, v___x_2522_);
v___x_2524_ = l_Lean_Syntax_node2(v_a_2500_, v___x_2448_, v___x_2512_, v___x_2523_);
v___x_2525_ = l_Lean_Syntax_node4(v_a_2500_, v___x_2434_, v___x_2504_, v___x_2510_, v___x_2511_, v___x_2524_);
v___x_2526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2496_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
v___x_2527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2423_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
if (v_isShared_2503_ == 0)
{
lean_ctor_set(v___x_2502_, 0, v___x_2527_);
v___x_2529_ = v___x_2502_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v___x_2527_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
else
{
lean_object* v_a_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2539_; 
lean_dec(v_a_2498_);
lean_dec(v___x_2496_);
lean_dec_ref_known(v___x_2479_, 2);
lean_dec(v___x_2462_);
lean_dec_ref(v___x_2441_);
lean_dec(v___x_2423_);
lean_dec(v___x_2379_);
v_a_2532_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2534_ = v___x_2499_;
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_a_2532_);
lean_dec(v___x_2499_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2537_; 
if (v_isShared_2535_ == 0)
{
v___x_2537_ = v___x_2534_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2532_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
lean_dec(v___x_2496_);
lean_dec_ref_known(v___x_2479_, 2);
lean_dec(v___x_2462_);
lean_dec_ref(v___x_2441_);
lean_dec(v___x_2423_);
lean_dec(v___x_2379_);
lean_dec_ref(v___f_2364_);
v_a_2540_ = lean_ctor_get(v___x_2497_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2497_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2497_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2497_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
else
{
lean_object* v_a_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2555_; 
lean_dec(v_a_2430_);
lean_dec_ref(v___x_2427_);
lean_dec(v___x_2423_);
lean_dec(v___x_2417_);
lean_dec(v___x_2379_);
lean_dec_ref(v___x_2366_);
lean_dec_ref(v___x_2365_);
lean_dec_ref(v___f_2364_);
v_a_2548_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2550_ = v___x_2431_;
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_a_2548_);
lean_dec(v___x_2431_);
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
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
lean_dec_ref(v___x_2427_);
lean_dec(v___x_2423_);
lean_dec(v___x_2417_);
lean_dec(v___x_2379_);
lean_dec_ref(v___x_2366_);
lean_dec_ref(v___x_2365_);
lean_dec_ref(v___f_2364_);
v_a_2556_ = lean_ctor_get(v___x_2429_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2429_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v___x_2429_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2429_);
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
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2571_; 
lean_dec(v___x_2423_);
lean_dec(v___x_2417_);
lean_dec(v___x_2379_);
lean_dec_ref(v___x_2366_);
lean_dec_ref(v___x_2365_);
lean_dec_ref(v___f_2364_);
v_a_2564_ = lean_ctor_get(v___x_2424_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2566_ = v___x_2424_;
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2424_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2569_; 
if (v_isShared_2567_ == 0)
{
v___x_2569_ = v___x_2566_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2564_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
return v___x_2569_;
}
}
}
}
else
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
lean_dec(v___x_2379_);
lean_dec_ref(v_argVars_2367_);
lean_dec_ref(v___x_2366_);
lean_dec_ref(v___x_2365_);
lean_dec_ref(v___f_2364_);
v_a_2572_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2382_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2382_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2572_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
}
else
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
lean_dec_ref(v_argVars_2367_);
lean_dec_ref(v___x_2366_);
lean_dec_ref(v___x_2365_);
lean_dec_ref(v___f_2364_);
v___x_2580_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___closed__11);
v___x_2581_ = l_Lean_MessageData_ofName(v_v_2363_);
v___x_2582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2580_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
v___x_2583_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v___x_2582_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
return v___x_2583_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___boxed(lean_object* v_v_2584_, lean_object* v___f_2585_, lean_object* v___x_2586_, lean_object* v___x_2587_, lean_object* v_argVars_2588_, lean_object* v_x_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1(v_v_2584_, v___f_2585_, v___x_2586_, v___x_2587_, v_argVars_2588_, v_x_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_);
lean_dec(v___y_2595_);
lean_dec_ref(v___y_2594_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec_ref(v_x_2589_);
return v_res_2597_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0(void){
_start:
{
lean_object* v___x_2598_; 
v___x_2598_ = l_instMonadEIO___redArg();
return v___x_2598_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11(lean_object* v_msg_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v_toApplicative_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2706_; 
v___x_2613_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__0);
v___x_2614_ = l_StateRefT_x27_instMonad___redArg(v___x_2613_);
v_toApplicative_2615_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2706_ == 0)
{
lean_object* v_unused_2707_; 
v_unused_2707_ = lean_ctor_get(v___x_2614_, 1);
lean_dec(v_unused_2707_);
v___x_2617_ = v___x_2614_;
v_isShared_2618_ = v_isSharedCheck_2706_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_toApplicative_2615_);
lean_dec(v___x_2614_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2706_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v_toFunctor_2619_; lean_object* v_toSeq_2620_; lean_object* v_toSeqLeft_2621_; lean_object* v_toSeqRight_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2704_; 
v_toFunctor_2619_ = lean_ctor_get(v_toApplicative_2615_, 0);
v_toSeq_2620_ = lean_ctor_get(v_toApplicative_2615_, 2);
v_toSeqLeft_2621_ = lean_ctor_get(v_toApplicative_2615_, 3);
v_toSeqRight_2622_ = lean_ctor_get(v_toApplicative_2615_, 4);
v_isSharedCheck_2704_ = !lean_is_exclusive(v_toApplicative_2615_);
if (v_isSharedCheck_2704_ == 0)
{
lean_object* v_unused_2705_; 
v_unused_2705_ = lean_ctor_get(v_toApplicative_2615_, 1);
lean_dec(v_unused_2705_);
v___x_2624_ = v_toApplicative_2615_;
v_isShared_2625_ = v_isSharedCheck_2704_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_toSeqRight_2622_);
lean_inc(v_toSeqLeft_2621_);
lean_inc(v_toSeq_2620_);
lean_inc(v_toFunctor_2619_);
lean_dec(v_toApplicative_2615_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2704_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___f_2626_; lean_object* v___f_2627_; lean_object* v___f_2628_; lean_object* v___f_2629_; lean_object* v___x_2630_; lean_object* v___f_2631_; lean_object* v___f_2632_; lean_object* v___f_2633_; lean_object* v___x_2635_; 
v___f_2626_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__1));
v___f_2627_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__2));
lean_inc_ref(v_toFunctor_2619_);
v___f_2628_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2628_, 0, v_toFunctor_2619_);
v___f_2629_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2629_, 0, v_toFunctor_2619_);
v___x_2630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___f_2628_);
lean_ctor_set(v___x_2630_, 1, v___f_2629_);
v___f_2631_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2631_, 0, v_toSeqRight_2622_);
v___f_2632_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2632_, 0, v_toSeqLeft_2621_);
v___f_2633_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2633_, 0, v_toSeq_2620_);
if (v_isShared_2625_ == 0)
{
lean_ctor_set(v___x_2624_, 4, v___f_2631_);
lean_ctor_set(v___x_2624_, 3, v___f_2632_);
lean_ctor_set(v___x_2624_, 2, v___f_2633_);
lean_ctor_set(v___x_2624_, 1, v___f_2626_);
lean_ctor_set(v___x_2624_, 0, v___x_2630_);
v___x_2635_ = v___x_2624_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v___x_2630_);
lean_ctor_set(v_reuseFailAlloc_2703_, 1, v___f_2626_);
lean_ctor_set(v_reuseFailAlloc_2703_, 2, v___f_2633_);
lean_ctor_set(v_reuseFailAlloc_2703_, 3, v___f_2632_);
lean_ctor_set(v_reuseFailAlloc_2703_, 4, v___f_2631_);
v___x_2635_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
lean_object* v___x_2637_; 
if (v_isShared_2618_ == 0)
{
lean_ctor_set(v___x_2617_, 1, v___f_2627_);
lean_ctor_set(v___x_2617_, 0, v___x_2635_);
v___x_2637_ = v___x_2617_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v___x_2635_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v___f_2627_);
v___x_2637_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
lean_object* v___x_2638_; lean_object* v_toApplicative_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2700_; 
v___x_2638_ = l_StateRefT_x27_instMonad___redArg(v___x_2637_);
v_toApplicative_2639_ = lean_ctor_get(v___x_2638_, 0);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2700_ == 0)
{
lean_object* v_unused_2701_; 
v_unused_2701_ = lean_ctor_get(v___x_2638_, 1);
lean_dec(v_unused_2701_);
v___x_2641_ = v___x_2638_;
v_isShared_2642_ = v_isSharedCheck_2700_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_toApplicative_2639_);
lean_dec(v___x_2638_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2700_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v_toFunctor_2643_; lean_object* v_toSeq_2644_; lean_object* v_toSeqLeft_2645_; lean_object* v_toSeqRight_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2698_; 
v_toFunctor_2643_ = lean_ctor_get(v_toApplicative_2639_, 0);
v_toSeq_2644_ = lean_ctor_get(v_toApplicative_2639_, 2);
v_toSeqLeft_2645_ = lean_ctor_get(v_toApplicative_2639_, 3);
v_toSeqRight_2646_ = lean_ctor_get(v_toApplicative_2639_, 4);
v_isSharedCheck_2698_ = !lean_is_exclusive(v_toApplicative_2639_);
if (v_isSharedCheck_2698_ == 0)
{
lean_object* v_unused_2699_; 
v_unused_2699_ = lean_ctor_get(v_toApplicative_2639_, 1);
lean_dec(v_unused_2699_);
v___x_2648_ = v_toApplicative_2639_;
v_isShared_2649_ = v_isSharedCheck_2698_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_toSeqRight_2646_);
lean_inc(v_toSeqLeft_2645_);
lean_inc(v_toSeq_2644_);
lean_inc(v_toFunctor_2643_);
lean_dec(v_toApplicative_2639_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2698_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___f_2650_; lean_object* v___f_2651_; lean_object* v___f_2652_; lean_object* v___f_2653_; lean_object* v___x_2654_; lean_object* v___f_2655_; lean_object* v___f_2656_; lean_object* v___f_2657_; lean_object* v___x_2659_; 
v___f_2650_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__3));
v___f_2651_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__4));
lean_inc_ref(v_toFunctor_2643_);
v___f_2652_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2652_, 0, v_toFunctor_2643_);
v___f_2653_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2653_, 0, v_toFunctor_2643_);
v___x_2654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___f_2652_);
lean_ctor_set(v___x_2654_, 1, v___f_2653_);
v___f_2655_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2655_, 0, v_toSeqRight_2646_);
v___f_2656_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2656_, 0, v_toSeqLeft_2645_);
v___f_2657_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2657_, 0, v_toSeq_2644_);
if (v_isShared_2649_ == 0)
{
lean_ctor_set(v___x_2648_, 4, v___f_2655_);
lean_ctor_set(v___x_2648_, 3, v___f_2656_);
lean_ctor_set(v___x_2648_, 2, v___f_2657_);
lean_ctor_set(v___x_2648_, 1, v___f_2650_);
lean_ctor_set(v___x_2648_, 0, v___x_2654_);
v___x_2659_ = v___x_2648_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v___x_2654_);
lean_ctor_set(v_reuseFailAlloc_2697_, 1, v___f_2650_);
lean_ctor_set(v_reuseFailAlloc_2697_, 2, v___f_2657_);
lean_ctor_set(v_reuseFailAlloc_2697_, 3, v___f_2656_);
lean_ctor_set(v_reuseFailAlloc_2697_, 4, v___f_2655_);
v___x_2659_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
lean_object* v___x_2661_; 
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 1, v___f_2651_);
lean_ctor_set(v___x_2641_, 0, v___x_2659_);
v___x_2661_ = v___x_2641_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2659_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v___f_2651_);
v___x_2661_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
lean_object* v___x_2662_; lean_object* v_toApplicative_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2694_; 
v___x_2662_ = l_StateRefT_x27_instMonad___redArg(v___x_2661_);
v_toApplicative_2663_ = lean_ctor_get(v___x_2662_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2694_ == 0)
{
lean_object* v_unused_2695_; 
v_unused_2695_ = lean_ctor_get(v___x_2662_, 1);
lean_dec(v_unused_2695_);
v___x_2665_ = v___x_2662_;
v_isShared_2666_ = v_isSharedCheck_2694_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_toApplicative_2663_);
lean_dec(v___x_2662_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2694_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v_toFunctor_2667_; lean_object* v_toSeq_2668_; lean_object* v_toSeqLeft_2669_; lean_object* v_toSeqRight_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2692_; 
v_toFunctor_2667_ = lean_ctor_get(v_toApplicative_2663_, 0);
v_toSeq_2668_ = lean_ctor_get(v_toApplicative_2663_, 2);
v_toSeqLeft_2669_ = lean_ctor_get(v_toApplicative_2663_, 3);
v_toSeqRight_2670_ = lean_ctor_get(v_toApplicative_2663_, 4);
v_isSharedCheck_2692_ = !lean_is_exclusive(v_toApplicative_2663_);
if (v_isSharedCheck_2692_ == 0)
{
lean_object* v_unused_2693_; 
v_unused_2693_ = lean_ctor_get(v_toApplicative_2663_, 1);
lean_dec(v_unused_2693_);
v___x_2672_ = v_toApplicative_2663_;
v_isShared_2673_ = v_isSharedCheck_2692_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_toSeqRight_2670_);
lean_inc(v_toSeqLeft_2669_);
lean_inc(v_toSeq_2668_);
lean_inc(v_toFunctor_2667_);
lean_dec(v_toApplicative_2663_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2692_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___f_2674_; lean_object* v___f_2675_; lean_object* v___f_2676_; lean_object* v___f_2677_; lean_object* v___x_2678_; lean_object* v___f_2679_; lean_object* v___f_2680_; lean_object* v___f_2681_; lean_object* v___x_2683_; 
v___f_2674_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__5));
v___f_2675_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___closed__6));
lean_inc_ref(v_toFunctor_2667_);
v___f_2676_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2676_, 0, v_toFunctor_2667_);
v___f_2677_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2677_, 0, v_toFunctor_2667_);
v___x_2678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2678_, 0, v___f_2676_);
lean_ctor_set(v___x_2678_, 1, v___f_2677_);
v___f_2679_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2679_, 0, v_toSeqRight_2670_);
v___f_2680_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2680_, 0, v_toSeqLeft_2669_);
v___f_2681_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2681_, 0, v_toSeq_2668_);
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 4, v___f_2679_);
lean_ctor_set(v___x_2672_, 3, v___f_2680_);
lean_ctor_set(v___x_2672_, 2, v___f_2681_);
lean_ctor_set(v___x_2672_, 1, v___f_2674_);
lean_ctor_set(v___x_2672_, 0, v___x_2678_);
v___x_2683_ = v___x_2672_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2678_);
lean_ctor_set(v_reuseFailAlloc_2691_, 1, v___f_2674_);
lean_ctor_set(v_reuseFailAlloc_2691_, 2, v___f_2681_);
lean_ctor_set(v_reuseFailAlloc_2691_, 3, v___f_2680_);
lean_ctor_set(v_reuseFailAlloc_2691_, 4, v___f_2679_);
v___x_2683_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
lean_object* v___x_2685_; 
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 1, v___f_2675_);
lean_ctor_set(v___x_2665_, 0, v___x_2683_);
v___x_2685_ = v___x_2665_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v___x_2683_);
lean_ctor_set(v_reuseFailAlloc_2690_, 1, v___f_2675_);
v___x_2685_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_39535__overap_2688_; lean_object* v___x_2689_; 
v___x_2686_ = lean_box(0);
v___x_2687_ = l_instInhabitedOfMonad___redArg(v___x_2685_, v___x_2686_);
v___x_39535__overap_2688_ = lean_panic_fn_borrowed(v___x_2687_, v_msg_2605_);
lean_dec(v___x_2687_);
lean_inc(v___y_2611_);
lean_inc_ref(v___y_2610_);
lean_inc(v___y_2609_);
lean_inc_ref(v___y_2608_);
lean_inc(v___y_2607_);
lean_inc_ref(v___y_2606_);
v___x_2689_ = lean_apply_7(v___x_39535__overap_2688_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, lean_box(0));
return v___x_2689_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11___boxed(lean_object* v_msg_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v_res_2716_; 
v_res_2716_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11(v_msg_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
lean_dec(v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
return v_res_2716_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1(void){
_start:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2718_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__0));
v___x_2719_ = l_Lean_stringToMessageData(v___x_2718_);
return v___x_2719_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3(void){
_start:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; 
v___x_2721_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__2));
v___x_2722_ = l_Lean_stringToMessageData(v___x_2721_);
return v___x_2722_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7(void){
_start:
{
lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2726_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__6));
v___x_2727_ = lean_unsigned_to_nat(11u);
v___x_2728_ = lean_unsigned_to_nat(122u);
v___x_2729_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__5));
v___x_2730_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__4));
v___x_2731_ = l_mkPanicMessageWithDecl(v___x_2730_, v___x_2729_, v___x_2728_, v___x_2727_, v___x_2726_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9(lean_object* v_constName_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_){
_start:
{
lean_object* v___x_2748_; lean_object* v_env_2749_; uint8_t v___x_2750_; lean_object* v___x_2751_; 
v___x_2748_ = lean_st_ref_get(v___y_2738_);
v_env_2749_ = lean_ctor_get(v___x_2748_, 0);
lean_inc_ref(v_env_2749_);
lean_dec(v___x_2748_);
v___x_2750_ = 0;
lean_inc(v_constName_2732_);
v___x_2751_ = l_Lean_Environment_findAsync_x3f(v_env_2749_, v_constName_2732_, v___x_2750_);
if (lean_obj_tag(v___x_2751_) == 1)
{
lean_object* v_val_2752_; uint8_t v_kind_2753_; 
v_val_2752_ = lean_ctor_get(v___x_2751_, 0);
lean_inc(v_val_2752_);
lean_dec_ref_known(v___x_2751_, 1);
v_kind_2753_ = lean_ctor_get_uint8(v_val_2752_, sizeof(void*)*3);
if (v_kind_2753_ == 6)
{
lean_object* v___x_2754_; 
v___x_2754_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2752_);
if (lean_obj_tag(v___x_2754_) == 6)
{
lean_object* v_val_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2762_; 
lean_dec(v_constName_2732_);
v_val_2755_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2757_ = v___x_2754_;
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_val_2755_);
lean_dec(v___x_2754_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2760_; 
if (v_isShared_2758_ == 0)
{
lean_ctor_set_tag(v___x_2757_, 0);
v___x_2760_ = v___x_2757_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v_val_2755_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
return v___x_2760_;
}
}
}
else
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
lean_dec_ref(v___x_2754_);
v___x_2763_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7, &l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__7);
v___x_2764_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9_spec__11(v___x_2763_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2764_) == 0)
{
lean_object* v_a_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2773_; 
v_a_2765_ = lean_ctor_get(v___x_2764_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2764_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2767_ = v___x_2764_;
v_isShared_2768_ = v_isSharedCheck_2773_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_a_2765_);
lean_dec(v___x_2764_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2773_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
if (lean_obj_tag(v_a_2765_) == 0)
{
lean_del_object(v___x_2767_);
goto v___jp_2740_;
}
else
{
lean_object* v_val_2769_; lean_object* v___x_2771_; 
lean_dec(v_constName_2732_);
v_val_2769_ = lean_ctor_get(v_a_2765_, 0);
lean_inc(v_val_2769_);
lean_dec_ref_known(v_a_2765_, 1);
if (v_isShared_2768_ == 0)
{
lean_ctor_set(v___x_2767_, 0, v_val_2769_);
v___x_2771_ = v___x_2767_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_val_2769_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_dec(v_constName_2732_);
v_a_2774_ = lean_ctor_get(v___x_2764_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2764_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2764_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2764_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
}
else
{
lean_dec(v_val_2752_);
goto v___jp_2740_;
}
}
else
{
lean_dec(v___x_2751_);
goto v___jp_2740_;
}
v___jp_2740_:
{
lean_object* v___x_2741_; uint8_t v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2741_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1);
v___x_2742_ = 0;
v___x_2743_ = l_Lean_MessageData_ofConstName(v_constName_2732_, v___x_2742_);
v___x_2744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2741_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
v___x_2745_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3, &l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__3);
v___x_2746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2744_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0___redArg(v___x_2746_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
return v___x_2747_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___boxed(lean_object* v_constName_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9(v_constName_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11(lean_object* v_params_2792_, size_t v_sz_2793_, size_t v_i_2794_, lean_object* v_bs_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_){
_start:
{
uint8_t v___x_2803_; 
v___x_2803_ = lean_usize_dec_lt(v_i_2794_, v_sz_2793_);
if (v___x_2803_ == 0)
{
lean_object* v___x_2804_; 
v___x_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2804_, 0, v_bs_2795_);
return v___x_2804_;
}
else
{
lean_object* v___f_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v_v_2808_; lean_object* v___f_2809_; lean_object* v___x_2810_; lean_object* v_bs_x27_2811_; lean_object* v___x_2812_; 
v___f_2805_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___closed__0));
v___x_2806_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__0));
v___x_2807_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__1));
v_v_2808_ = lean_array_uget(v_bs_2795_, v_i_2794_);
lean_inc(v_v_2808_);
v___f_2809_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___lam__1___boxed), 13, 4);
lean_closure_set(v___f_2809_, 0, v_v_2808_);
lean_closure_set(v___f_2809_, 1, v___f_2805_);
lean_closure_set(v___f_2809_, 2, v___x_2806_);
lean_closure_set(v___f_2809_, 3, v___x_2807_);
v___x_2810_ = lean_unsigned_to_nat(0u);
v_bs_x27_2811_ = lean_array_uset(v_bs_2795_, v_i_2794_, v___x_2810_);
v___x_2812_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9(v_v_2808_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v_a_2813_; lean_object* v_toConstantVal_2814_; lean_object* v_type_2815_; lean_object* v___x_2816_; 
v_a_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc(v_a_2813_);
lean_dec_ref_known(v___x_2812_, 1);
v_toConstantVal_2814_ = lean_ctor_get(v_a_2813_, 0);
lean_inc_ref(v_toConstantVal_2814_);
lean_dec(v_a_2813_);
v_type_2815_ = lean_ctor_get(v_toConstantVal_2814_, 2);
lean_inc_ref(v_type_2815_);
lean_dec_ref(v_toConstantVal_2814_);
v___x_2816_ = l_Lean_Meta_instantiateForall(v_type_2815_, v_params_2792_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; uint8_t v___x_2818_; lean_object* v___x_2819_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2817_);
lean_dec_ref_known(v___x_2816_, 1);
v___x_2818_ = 0;
v___x_2819_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___redArg(v_a_2817_, v___f_2809_, v___x_2818_, v___x_2818_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v_a_2820_; size_t v___x_2821_; size_t v___x_2822_; lean_object* v___x_2823_; 
v_a_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2820_);
lean_dec_ref_known(v___x_2819_, 1);
v___x_2821_ = ((size_t)1ULL);
v___x_2822_ = lean_usize_add(v_i_2794_, v___x_2821_);
v___x_2823_ = lean_array_uset(v_bs_x27_2811_, v_i_2794_, v_a_2820_);
v_i_2794_ = v___x_2822_;
v_bs_2795_ = v___x_2823_;
goto _start;
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec_ref(v_bs_x27_2811_);
v_a_2825_ = lean_ctor_get(v___x_2819_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2819_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2819_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_dec_ref(v_bs_x27_2811_);
lean_dec_ref(v___f_2809_);
v_a_2833_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2816_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2816_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
else
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec_ref(v_bs_x27_2811_);
lean_dec_ref(v___f_2809_);
v_a_2841_ = lean_ctor_get(v___x_2812_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2812_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2812_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2812_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_a_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11___boxed(lean_object* v_params_2849_, lean_object* v_sz_2850_, lean_object* v_i_2851_, lean_object* v_bs_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_){
_start:
{
size_t v_sz_boxed_2860_; size_t v_i_boxed_2861_; lean_object* v_res_2862_; 
v_sz_boxed_2860_ = lean_unbox_usize(v_sz_2850_);
lean_dec(v_sz_2850_);
v_i_boxed_2861_ = lean_unbox_usize(v_i_2851_);
lean_dec(v_i_2851_);
v_res_2862_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11(v_params_2849_, v_sz_boxed_2860_, v_i_boxed_2861_, v_bs_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec_ref(v_params_2849_);
return v_res_2862_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4(void){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__0));
v___x_2876_ = l_String_toRawSubstring_x27(v___x_2875_);
return v___x_2876_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8(void){
_start:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__7));
v___x_2885_ = l_String_toRawSubstring_x27(v___x_2884_);
return v___x_2885_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20(void){
_start:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2914_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__19));
v___x_2915_ = l_String_toRawSubstring_x27(v___x_2914_);
return v___x_2915_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25(void){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__24));
v___x_2923_ = l_String_toRawSubstring_x27(v___x_2922_);
return v___x_2923_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31(void){
_start:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; 
v___x_2934_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__30));
v___x_2935_ = l_Lean_stringToMessageData(v___x_2934_);
return v___x_2935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance(lean_object* v_indVal_2936_, lean_object* v_params_2937_, lean_object* v_encInstBinders_2938_, lean_object* v_a_2939_, lean_object* v_a_2940_, lean_object* v_a_2941_, lean_object* v_a_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v_toCold_2946_; lean_object* v_options_2947_; lean_object* v_inheritedTraceOptions_2948_; uint8_t v_hasTrace_2949_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v___y_2954_; lean_object* v___y_2955_; lean_object* v___y_2956_; 
v_toCold_2946_ = lean_ctor_get(v_a_2943_, 0);
v_options_2947_ = lean_ctor_get(v_toCold_2946_, 2);
v_inheritedTraceOptions_2948_ = lean_ctor_get(v_toCold_2946_, 11);
v_hasTrace_2949_ = lean_ctor_get_uint8(v_options_2947_, sizeof(void*)*1);
if (v_hasTrace_2949_ == 0)
{
v___y_2951_ = v_a_2939_;
v___y_2952_ = v_a_2940_;
v___y_2953_ = v_a_2941_;
v___y_2954_ = v_a_2942_;
v___y_2955_ = v_a_2943_;
v___y_2956_ = v_a_2944_;
goto v___jp_2950_;
}
else
{
lean_object* v_cls_3277_; lean_object* v___x_3278_; uint8_t v___x_3279_; 
v_cls_3277_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137));
v___x_3278_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__140);
v___x_3279_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2948_, v_options_2947_, v___x_3278_);
if (v___x_3279_ == 0)
{
v___y_2951_ = v_a_2939_;
v___y_2952_ = v_a_2940_;
v___y_2953_ = v_a_2941_;
v___y_2954_ = v_a_2942_;
v___y_2955_ = v_a_2943_;
v___y_2956_ = v_a_2944_;
goto v___jp_2950_;
}
else
{
lean_object* v_toConstantVal_3280_; lean_object* v_name_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v_toConstantVal_3280_ = lean_ctor_get(v_indVal_2936_, 0);
v_name_3281_ = lean_ctor_get(v_toConstantVal_3280_, 0);
v___x_3282_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__31);
lean_inc(v_name_3281_);
v___x_3283_ = l_Lean_MessageData_ofName(v_name_3281_);
v___x_3284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3282_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
v___x_3285_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__144, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__144_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__144);
v___x_3286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3284_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
lean_inc_ref(v_params_2937_);
v___x_3287_ = lean_array_to_list(v_params_2937_);
v___x_3288_ = lean_box(0);
v___x_3289_ = l_List_mapTR_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__6(v___x_3287_, v___x_3288_);
v___x_3290_ = l_Lean_MessageData_ofList(v___x_3289_);
v___x_3291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3291_, 0, v___x_3286_);
lean_ctor_set(v___x_3291_, 1, v___x_3290_);
v___x_3292_ = l_Lean_addTrace___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__7___redArg(v_cls_3277_, v___x_3291_, v_a_2941_, v_a_2942_, v_a_2943_, v_a_2944_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_dec_ref_known(v___x_3292_, 1);
v___y_2951_ = v_a_2939_;
v___y_2952_ = v_a_2940_;
v___y_2953_ = v_a_2941_;
v___y_2954_ = v_a_2942_;
v___y_2955_ = v_a_2943_;
v___y_2956_ = v_a_2944_;
goto v___jp_2950_;
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3300_; 
lean_dec_ref(v_params_2937_);
lean_dec_ref(v_indVal_2936_);
v_a_3293_ = lean_ctor_get(v___x_3292_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3295_ = v___x_3292_;
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3292_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3298_; 
if (v_isShared_3296_ == 0)
{
v___x_3298_ = v___x_3295_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3293_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
}
}
v___jp_2950_:
{
lean_object* v_toConstantVal_2957_; lean_object* v_ctors_2958_; lean_object* v___x_2959_; size_t v_sz_2960_; size_t v___x_2961_; lean_object* v___x_2962_; 
v_toConstantVal_2957_ = lean_ctor_get(v_indVal_2936_, 0);
lean_inc_ref(v_toConstantVal_2957_);
v_ctors_2958_ = lean_ctor_get(v_indVal_2936_, 4);
lean_inc(v_ctors_2958_);
lean_dec_ref(v_indVal_2936_);
v___x_2959_ = lean_array_mk(v_ctors_2958_);
v_sz_2960_ = lean_array_size(v___x_2959_);
v___x_2961_ = ((size_t)0ULL);
v___x_2962_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__11(v_params_2937_, v_sz_2960_, v___x_2961_, v___x_2959_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2964_; lean_object* v_fst_2965_; lean_object* v_snd_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_3268_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v___x_2962_, 1);
v___x_2964_ = l_Array_unzip___redArg(v_a_2963_);
lean_dec(v_a_2963_);
v_fst_2965_ = lean_ctor_get(v___x_2964_, 0);
v_snd_2966_ = lean_ctor_get(v___x_2964_, 1);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_2964_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_2968_ = v___x_2964_;
v_isShared_2969_ = v_isSharedCheck_3268_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_snd_2966_);
lean_inc(v_fst_2965_);
lean_dec(v___x_2964_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_3268_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2970_; lean_object* v_fst_2971_; lean_object* v_snd_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_3267_; 
v___x_2970_ = l_Array_unzip___redArg(v_snd_2966_);
lean_dec(v_snd_2966_);
v_fst_2971_ = lean_ctor_get(v___x_2970_, 0);
v_snd_2972_ = lean_ctor_get(v___x_2970_, 1);
v_isSharedCheck_3267_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_3267_ == 0)
{
v___x_2974_ = v___x_2970_;
v_isShared_2975_ = v_isSharedCheck_3267_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_snd_2972_);
lean_inc(v_fst_2971_);
lean_dec(v___x_2970_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_3267_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
size_t v_sz_2976_; lean_object* v___x_2977_; 
v_sz_2976_ = lean_array_size(v_params_2937_);
v___x_2977_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__2___redArg(v_sz_2976_, v___x_2961_, v_params_2937_, v___y_2953_, v___y_2955_, v___y_2956_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v_toCold_2978_; lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_3258_; 
v_toCold_2978_ = lean_ctor_get(v___y_2955_, 0);
v_a_2979_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_2981_ = v___x_2977_;
v_isShared_2982_ = v_isSharedCheck_3258_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v___x_2977_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_3258_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v_ref_2983_; lean_object* v_name_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_3255_; 
v_ref_2983_ = lean_ctor_get(v___y_2955_, 2);
v_name_2984_ = lean_ctor_get(v_toConstantVal_2957_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v_toConstantVal_2957_);
if (v_isSharedCheck_3255_ == 0)
{
lean_object* v_unused_3256_; lean_object* v_unused_3257_; 
v_unused_3256_ = lean_ctor_get(v_toConstantVal_2957_, 2);
lean_dec(v_unused_3256_);
v_unused_3257_ = lean_ctor_get(v_toConstantVal_2957_, 1);
lean_dec(v_unused_3257_);
v___x_2986_ = v_toConstantVal_2957_;
v_isShared_2987_ = v_isSharedCheck_3255_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_name_2984_);
lean_dec(v_toConstantVal_2957_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_3255_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v_quotContext_2988_; lean_object* v_currMacroScope_2989_; lean_object* v___x_2990_; uint8_t v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2995_; 
v_quotContext_2988_ = lean_ctor_get(v_toCold_2978_, 8);
v_currMacroScope_2989_ = lean_ctor_get(v_toCold_2978_, 9);
v___x_2990_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_2991_ = 0;
v___x_2992_ = l_Lean_SourceInfo_fromRef(v_ref_2983_, v___x_2991_);
v___x_2993_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__68));
lean_inc(v___x_2992_);
if (v_isShared_2975_ == 0)
{
lean_ctor_set_tag(v___x_2974_, 2);
lean_ctor_set(v___x_2974_, 1, v___x_2993_);
lean_ctor_set(v___x_2974_, 0, v___x_2992_);
v___x_2995_ = v___x_2974_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v___x_2992_);
lean_ctor_set(v_reuseFailAlloc_3254_, 1, v___x_2993_);
v___x_2995_ = v_reuseFailAlloc_3254_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; size_t v_sz_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3005_; 
v___x_2996_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__67));
v___x_2997_ = l_Lean_mkCIdent(v_name_2984_);
lean_inc_n(v___x_2992_, 2);
v___x_2998_ = l_Lean_Syntax_node2(v___x_2992_, v___x_2996_, v___x_2995_, v___x_2997_);
v_sz_2999_ = lean_array_size(v_a_2979_);
v___x_3000_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_3001_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v___x_3002_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__4(v_sz_2999_, v___x_2961_, v_a_2979_);
v___x_3003_ = l_Array_append___redArg(v___x_3001_, v___x_3002_);
lean_dec_ref(v___x_3002_);
if (v_isShared_2987_ == 0)
{
lean_ctor_set_tag(v___x_2986_, 1);
lean_ctor_set(v___x_2986_, 2, v___x_3003_);
lean_ctor_set(v___x_2986_, 1, v___x_3000_);
lean_ctor_set(v___x_2986_, 0, v___x_2992_);
v___x_3005_ = v___x_2986_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v___x_2992_);
lean_ctor_set(v_reuseFailAlloc_3253_, 1, v___x_3000_);
lean_ctor_set(v_reuseFailAlloc_3253_, 2, v___x_3003_);
v___x_3005_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3014_; 
lean_inc_n(v___x_2992_, 4);
v___x_3006_ = l_Lean_Syntax_node2(v___x_2992_, v___x_2990_, v___x_2998_, v___x_3005_);
v___x_3007_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__5));
v___x_3008_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__7));
v___x_3009_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3009_, 0, v___x_2992_);
lean_ctor_set(v___x_3009_, 1, v___x_3000_);
lean_ctor_set(v___x_3009_, 2, v___x_3001_);
lean_inc_ref_n(v___x_3009_, 7);
v___x_3010_ = l_Lean_Syntax_node7(v___x_2992_, v___x_3008_, v___x_3009_, v___x_3009_, v___x_3009_, v___x_3009_, v___x_3009_, v___x_3009_, v___x_3009_);
v___x_3011_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__0));
v___x_3012_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__1));
if (v_isShared_2969_ == 0)
{
lean_ctor_set_tag(v___x_2968_, 2);
lean_ctor_set(v___x_2968_, 1, v___x_3011_);
lean_ctor_set(v___x_2968_, 0, v___x_2992_);
v___x_3014_ = v___x_2968_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v___x_2992_);
lean_ctor_set(v_reuseFailAlloc_3252_, 1, v___x_3011_);
v___x_3014_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; size_t v_sz_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; size_t v_sz_3165_; lean_object* v___x_3166_; size_t v_sz_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; size_t v_sz_3224_; lean_object* v___x_3225_; size_t v_sz_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3250_; 
v___x_3015_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__15));
v___x_3016_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__17);
v___x_3017_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__18));
lean_inc_n(v_currMacroScope_2989_, 14);
lean_inc_n(v_quotContext_2988_, 14);
v___x_3018_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3017_, v_currMacroScope_2989_);
v___x_3019_ = lean_box(0);
lean_inc_n(v___x_2992_, 114);
v___x_3020_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3020_, 0, v___x_2992_);
lean_ctor_set(v___x_3020_, 1, v___x_3016_);
lean_ctor_set(v___x_3020_, 2, v___x_3018_);
lean_ctor_set(v___x_3020_, 3, v___x_3019_);
lean_inc_ref_n(v___x_3009_, 50);
lean_inc_ref(v___x_3020_);
v___x_3021_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3015_, v___x_3020_, v___x_3009_);
v___x_3022_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__7));
v___x_3023_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3022_, v___x_3009_, v___x_3009_);
v___x_3024_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__19));
v___x_3025_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3025_, 0, v___x_2992_);
lean_ctor_set(v___x_3025_, 1, v___x_3024_);
lean_inc_ref(v___x_3025_);
v___x_3026_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3025_);
v_sz_3027_ = lean_array_size(v_fst_2965_);
v___x_3028_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_3027_, v___x_2961_, v_fst_2965_);
v___x_3029_ = l_Array_append___redArg(v___x_3001_, v___x_3028_);
lean_dec_ref(v___x_3028_);
v___x_3030_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3030_, 0, v___x_2992_);
lean_ctor_set(v___x_3030_, 1, v___x_3000_);
lean_ctor_set(v___x_3030_, 2, v___x_3029_);
v___x_3031_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__23));
v___x_3032_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__24));
v___x_3033_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3033_, 0, v___x_2992_);
lean_ctor_set(v___x_3033_, 1, v___x_3032_);
v___x_3034_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__26));
v___x_3035_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__28);
v___x_3036_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__29));
v___x_3037_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3036_, v_currMacroScope_2989_);
v___x_3038_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__34));
v___x_3039_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3039_, 0, v___x_2992_);
lean_ctor_set(v___x_3039_, 1, v___x_3035_);
lean_ctor_set(v___x_3039_, 2, v___x_3037_);
lean_ctor_set(v___x_3039_, 3, v___x_3038_);
v___x_3040_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3034_, v___x_3009_, v___x_3039_);
v___x_3041_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__35));
v___x_3042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3042_, 0, v___x_2992_);
lean_ctor_set(v___x_3042_, 1, v___x_3041_);
v___x_3043_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__37);
v___x_3044_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__38));
v___x_3045_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3044_, v_currMacroScope_2989_);
v___x_3046_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__43));
v___x_3047_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3047_, 0, v___x_2992_);
lean_ctor_set(v___x_3047_, 1, v___x_3043_);
lean_ctor_set(v___x_3047_, 2, v___x_3045_);
lean_ctor_set(v___x_3047_, 3, v___x_3046_);
v___x_3048_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3034_, v___x_3009_, v___x_3047_);
lean_inc_ref(v___x_3042_);
v___x_3049_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3000_, v___x_3040_, v___x_3042_, v___x_3048_);
v___x_3050_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3000_, v___x_3033_, v___x_3049_);
v___x_3051_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3031_, v___x_3050_);
v___x_3052_ = l_Lean_Syntax_node8(v___x_2992_, v___x_3012_, v___x_3014_, v___x_3021_, v___x_3023_, v___x_3026_, v___x_3030_, v___x_3009_, v___x_3051_, v___x_3009_);
v___x_3053_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3007_, v___x_3010_, v___x_3052_);
v___x_3054_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__44));
v___x_3055_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__45));
v___x_3056_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__46));
v___x_3057_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__47));
v___x_3058_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_2992_);
lean_ctor_set(v___x_3058_, 1, v___x_3056_);
v___x_3059_ = l_Array_append___redArg(v___x_3001_, v_encInstBinders_2938_);
v___x_3060_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3060_, 0, v___x_2992_);
lean_ctor_set(v___x_3060_, 1, v___x_3000_);
lean_ctor_set(v___x_3060_, 2, v___x_3059_);
v___x_3061_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3057_, v___x_3058_, v___x_3060_);
v___x_3062_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3062_, 0, v___x_2992_);
lean_ctor_set(v___x_3062_, 1, v___x_3054_);
v___x_3063_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__2));
v___x_3064_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__3));
v___x_3065_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_2992_);
lean_ctor_set(v___x_3065_, 1, v___x_3063_);
v___x_3066_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3064_, v___x_3065_);
v___x_3067_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3066_);
v___x_3068_ = l_Lean_Syntax_node7(v___x_2992_, v___x_3008_, v___x_3009_, v___x_3009_, v___x_3009_, v___x_3009_, v___x_3009_, v___x_3009_, v___x_3067_);
v___x_3069_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__48));
v___x_3070_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__49));
v___x_3071_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__51));
v___x_3072_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3071_, v___x_3009_);
v___x_3073_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3073_, 0, v___x_2992_);
lean_ctor_set(v___x_3073_, 1, v___x_3069_);
v___x_3074_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__53));
v___x_3075_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__12));
v___x_3076_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__13));
v___x_3077_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___x_2992_);
lean_ctor_set(v___x_3077_, 1, v___x_3076_);
v___x_3078_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54);
v___x_3079_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55));
v___x_3080_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3079_, v_currMacroScope_2989_);
v___x_3081_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__58));
v___x_3082_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3082_, 0, v___x_2992_);
lean_ctor_set(v___x_3082_, 1, v___x_3078_);
lean_ctor_set(v___x_3082_, 2, v___x_3080_);
lean_ctor_set(v___x_3082_, 3, v___x_3081_);
v___x_3083_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3006_);
v___x_3084_ = l_Lean_Syntax_node2(v___x_2992_, v___x_2990_, v___x_3082_, v___x_3083_);
lean_inc_ref(v___x_3077_);
v___x_3085_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3075_, v___x_3077_, v___x_3084_);
lean_inc(v___x_3085_);
v___x_3086_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3074_, v___x_3009_, v___x_3085_);
v___x_3087_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__70));
v___x_3088_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__17));
v___x_3089_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_2992_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
v___x_3090_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__72));
v___x_3091_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__73));
v___x_3092_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3092_, 0, v___x_2992_);
lean_ctor_set(v___x_3092_, 1, v___x_3091_);
v___x_3093_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__75));
v___x_3094_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__11));
v___x_3095_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__13));
v___x_3096_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__26);
v___x_3097_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__27));
v___x_3098_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3097_, v_currMacroScope_2989_);
v___x_3099_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__77));
v___x_3100_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3100_, 0, v___x_2992_);
lean_ctor_set(v___x_3100_, 1, v___x_3096_);
lean_ctor_set(v___x_3100_, 2, v___x_3098_);
lean_ctor_set(v___x_3100_, 3, v___x_3099_);
v___x_3101_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3095_, v___x_3100_, v___x_3009_);
v___x_3102_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__16));
v___x_3103_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__79);
v___x_3104_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__80));
v___x_3105_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3104_, v_currMacroScope_2989_);
v___x_3106_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3106_, 0, v___x_2992_);
lean_ctor_set(v___x_3106_, 1, v___x_3103_);
lean_ctor_set(v___x_3106_, 2, v___x_3105_);
lean_ctor_set(v___x_3106_, 3, v___x_3019_);
lean_inc_ref(v___x_3106_);
lean_inc_ref_n(v___x_3089_, 5);
v___x_3107_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3102_, v___x_3089_, v___x_3009_, v___x_3106_);
v___x_3108_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3000_, v___x_3009_, v___x_3009_, v___x_3107_);
v___x_3109_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3094_, v___x_3101_, v___x_3108_);
v___x_3110_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__39);
v___x_3111_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__40));
v___x_3112_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3111_, v_currMacroScope_2989_);
v___x_3113_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__82));
v___x_3114_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3114_, 0, v___x_2992_);
lean_ctor_set(v___x_3114_, 1, v___x_3110_);
lean_ctor_set(v___x_3114_, 2, v___x_3112_);
lean_ctor_set(v___x_3114_, 3, v___x_3113_);
v___x_3115_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3095_, v___x_3114_, v___x_3009_);
v___x_3116_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__84);
v___x_3117_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__85));
v___x_3118_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3117_, v_currMacroScope_2989_);
v___x_3119_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3119_, 0, v___x_2992_);
lean_ctor_set(v___x_3119_, 1, v___x_3116_);
lean_ctor_set(v___x_3119_, 2, v___x_3118_);
lean_ctor_set(v___x_3119_, 3, v___x_3019_);
lean_inc_ref(v___x_3119_);
v___x_3120_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3102_, v___x_3089_, v___x_3009_, v___x_3119_);
v___x_3121_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3000_, v___x_3009_, v___x_3009_, v___x_3120_);
v___x_3122_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3094_, v___x_3115_, v___x_3121_);
v___x_3123_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3000_, v___x_3109_, v___x_3042_, v___x_3122_);
v___x_3124_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3093_, v___x_3123_);
v___x_3125_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__87));
v___x_3126_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3125_, v___x_3009_);
v___x_3127_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__88));
v___x_3128_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_2992_);
lean_ctor_set(v___x_3128_, 1, v___x_3127_);
v___x_3129_ = l_Lean_Syntax_node6(v___x_2992_, v___x_3090_, v___x_3092_, v___x_3009_, v___x_3124_, v___x_3126_, v___x_3009_, v___x_3128_);
v___x_3130_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__91));
v___x_3131_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3130_, v___x_3009_, v___x_3009_);
v___x_3132_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__93));
v___x_3133_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__95));
v___x_3134_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__97));
v___x_3135_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__99));
v___x_3136_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__101));
v___x_3137_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3136_, v___x_3106_);
v___x_3138_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__4);
v___x_3139_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__0___redArg___closed__1));
v___x_3140_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3139_, v_currMacroScope_2989_);
v___x_3141_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3141_, 0, v___x_2992_);
lean_ctor_set(v___x_3141_, 1, v___x_3138_);
lean_ctor_set(v___x_3141_, 2, v___x_3140_);
lean_ctor_set(v___x_3141_, 3, v___x_3019_);
lean_inc_ref(v___x_3141_);
v___x_3142_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3141_);
v___x_3143_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__5));
v___x_3144_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__6));
v___x_3145_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_2992_);
lean_ctor_set(v___x_3145_, 1, v___x_3143_);
v___x_3146_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__125));
v___x_3147_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3146_, v___x_3009_);
v___x_3148_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__8);
v___x_3149_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__9));
v___x_3150_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3149_, v_currMacroScope_2989_);
v___x_3151_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3151_, 0, v___x_2992_);
lean_ctor_set(v___x_3151_, 1, v___x_3148_);
lean_ctor_set(v___x_3151_, 2, v___x_3150_);
lean_ctor_set(v___x_3151_, 3, v___x_3019_);
v___x_3152_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3136_, v___x_3151_);
v___x_3153_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3085_);
lean_inc(v___x_3129_);
v___x_3154_ = l_Lean_Syntax_node5(v___x_2992_, v___x_3135_, v___x_3152_, v___x_3009_, v___x_3153_, v___x_3089_, v___x_3129_);
v___x_3155_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3134_, v___x_3154_);
v___x_3156_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__10));
v___x_3157_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__11));
v___x_3158_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___x_2992_);
lean_ctor_set(v___x_3158_, 1, v___x_3156_);
v___x_3159_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__13));
v___x_3160_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3159_, v___x_3009_, v___x_3141_);
v___x_3161_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3160_);
v___x_3162_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__14));
v___x_3163_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___x_2992_);
lean_ctor_set(v___x_3163_, 1, v___x_3162_);
v___x_3164_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__16));
v_sz_3165_ = lean_array_size(v_fst_2971_);
v___x_3166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(v_sz_3165_, v___x_2961_, v_fst_2971_);
v_sz_3167_ = lean_array_size(v___x_3166_);
v___x_3168_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_3167_, v___x_2961_, v___x_3166_);
v___x_3169_ = l_Array_append___redArg(v___x_3001_, v___x_3168_);
lean_dec_ref(v___x_3168_);
v___x_3170_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3170_, 0, v___x_2992_);
lean_ctor_set(v___x_3170_, 1, v___x_3000_);
lean_ctor_set(v___x_3170_, 2, v___x_3169_);
v___x_3171_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3164_, v___x_3170_);
lean_inc_ref(v___x_3163_);
lean_inc_ref(v___x_3158_);
v___x_3172_ = l_Lean_Syntax_node6(v___x_2992_, v___x_3157_, v___x_3158_, v___x_3009_, v___x_3009_, v___x_3161_, v___x_3163_, v___x_3171_);
lean_inc(v___x_3155_);
lean_inc_n(v___x_3147_, 2);
lean_inc_ref(v___x_3145_);
v___x_3173_ = l_Lean_Syntax_node5(v___x_2992_, v___x_3144_, v___x_3145_, v___x_3147_, v___x_3155_, v___x_3009_, v___x_3172_);
v___x_3174_ = l_Lean_Syntax_node5(v___x_2992_, v___x_3135_, v___x_3137_, v___x_3142_, v___x_3009_, v___x_3089_, v___x_3173_);
v___x_3175_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3134_, v___x_3174_);
lean_inc_n(v___x_3131_, 2);
v___x_3176_ = l_Lean_Syntax_node4(v___x_2992_, v___x_3133_, v___x_3009_, v___x_3009_, v___x_3175_, v___x_3131_);
v___x_3177_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3136_, v___x_3119_);
v___x_3178_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__113);
v___x_3179_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__114));
v___x_3180_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3179_, v_currMacroScope_2989_);
v___x_3181_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3181_, 0, v___x_2992_);
lean_ctor_set(v___x_3181_, 1, v___x_3178_);
lean_ctor_set(v___x_3181_, 2, v___x_3180_);
lean_ctor_set(v___x_3181_, 3, v___x_3019_);
v___x_3182_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3181_);
v___x_3183_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__115));
v___x_3184_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__116));
v___x_3185_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_2992_);
lean_ctor_set(v___x_3185_, 1, v___x_3183_);
v___x_3186_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__118));
v___x_3187_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__120));
v___x_3188_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__18));
v___x_3189_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3188_, v___x_3145_, v___x_3147_, v___x_3155_);
v___x_3190_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3187_, v___x_3189_, v___x_3009_);
v___x_3191_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__122));
v___x_3192_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__123));
v___x_3193_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3193_, 0, v___x_2992_);
lean_ctor_set(v___x_3193_, 1, v___x_3192_);
v___x_3194_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__127));
v___x_3195_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__20);
v___x_3196_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__21));
v___x_3197_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3196_, v_currMacroScope_2989_);
v___x_3198_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3198_, 0, v___x_2992_);
lean_ctor_set(v___x_3198_, 1, v___x_3195_);
lean_ctor_set(v___x_3198_, 2, v___x_3197_);
lean_ctor_set(v___x_3198_, 3, v___x_3019_);
v___x_3199_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3075_, v___x_3077_, v___x_3020_);
v___x_3200_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3199_);
v___x_3201_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__20));
v___x_3202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_2992_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
v___x_3203_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__22));
v___x_3204_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__129);
v___x_3205_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__130));
v___x_3206_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3205_, v_currMacroScope_2989_);
v___x_3207_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__133));
v___x_3208_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3208_, 0, v___x_2992_);
lean_ctor_set(v___x_3208_, 1, v___x_3204_);
lean_ctor_set(v___x_3208_, 2, v___x_3206_);
lean_ctor_set(v___x_3208_, 3, v___x_3207_);
lean_inc(v___x_3182_);
v___x_3209_ = l_Lean_Syntax_node2(v___x_2992_, v___x_2990_, v___x_3208_, v___x_3182_);
v___x_3210_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3203_, v___x_3209_);
lean_inc_ref(v___x_3198_);
v___x_3211_ = l_Lean_Syntax_node4(v___x_2992_, v___x_3194_, v___x_3198_, v___x_3200_, v___x_3202_, v___x_3210_);
v___x_3212_ = l_Lean_Syntax_node4(v___x_2992_, v___x_3191_, v___x_3193_, v___x_3009_, v___x_3147_, v___x_3211_);
v___x_3213_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3187_, v___x_3212_, v___x_3009_);
v___x_3214_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__23));
v___x_3215_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__25);
v___x_3216_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__26));
v___x_3217_ = l_Lean_addMacroScope(v_quotContext_2988_, v___x_3216_, v_currMacroScope_2989_);
v___x_3218_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__28));
v___x_3219_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3219_, 0, v___x_2992_);
lean_ctor_set(v___x_3219_, 1, v___x_3215_);
lean_ctor_set(v___x_3219_, 2, v___x_3217_);
lean_ctor_set(v___x_3219_, 3, v___x_3218_);
v___x_3220_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___closed__29));
v___x_3221_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3221_, 0, v___x_2992_);
lean_ctor_set(v___x_3221_, 1, v___x_3220_);
v___x_3222_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3159_, v___x_3009_, v___x_3198_);
v___x_3223_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3222_);
v_sz_3224_ = lean_array_size(v_snd_2972_);
v___x_3225_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__12(v_sz_3224_, v___x_2961_, v_snd_2972_);
v_sz_3226_ = lean_array_size(v___x_3225_);
v___x_3227_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__5(v_sz_3226_, v___x_2961_, v___x_3225_);
v___x_3228_ = l_Array_append___redArg(v___x_3001_, v___x_3227_);
lean_dec_ref(v___x_3227_);
v___x_3229_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3229_, 0, v___x_2992_);
lean_ctor_set(v___x_3229_, 1, v___x_3000_);
lean_ctor_set(v___x_3229_, 2, v___x_3228_);
v___x_3230_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3164_, v___x_3229_);
v___x_3231_ = l_Lean_Syntax_node6(v___x_2992_, v___x_3157_, v___x_3158_, v___x_3009_, v___x_3009_, v___x_3223_, v___x_3163_, v___x_3230_);
v___x_3232_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3214_, v___x_3219_, v___x_3221_, v___x_3231_);
v___x_3233_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3203_, v___x_3232_);
v___x_3234_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3187_, v___x_3233_, v___x_3009_);
v___x_3235_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3000_, v___x_3190_, v___x_3213_, v___x_3234_);
v___x_3236_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3186_, v___x_3235_);
v___x_3237_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3184_, v___x_3185_, v___x_3236_);
v___x_3238_ = l_Lean_Syntax_node5(v___x_2992_, v___x_3135_, v___x_3177_, v___x_3182_, v___x_3009_, v___x_3089_, v___x_3237_);
v___x_3239_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3134_, v___x_3238_);
v___x_3240_ = l_Lean_Syntax_node4(v___x_2992_, v___x_3133_, v___x_3009_, v___x_3009_, v___x_3239_, v___x_3131_);
v___x_3241_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3000_, v___x_3176_, v___x_3009_, v___x_3240_);
v___x_3242_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3132_, v___x_3025_, v___x_3241_, v___x_3009_);
v___x_3243_ = l_Lean_Syntax_node1(v___x_2992_, v___x_3000_, v___x_3242_);
v___x_3244_ = l_Lean_Syntax_node4(v___x_2992_, v___x_3087_, v___x_3089_, v___x_3129_, v___x_3131_, v___x_3243_);
v___x_3245_ = l_Lean_Syntax_node6(v___x_2992_, v___x_3070_, v___x_3072_, v___x_3073_, v___x_3009_, v___x_3009_, v___x_3086_, v___x_3244_);
v___x_3246_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3007_, v___x_3068_, v___x_3245_);
v___x_3247_ = l_Lean_Syntax_node3(v___x_2992_, v___x_3055_, v___x_3061_, v___x_3062_, v___x_3246_);
v___x_3248_ = l_Lean_Syntax_node2(v___x_2992_, v___x_3000_, v___x_3053_, v___x_3247_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set(v___x_2981_, 0, v___x_3248_);
v___x_3250_ = v___x_2981_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3248_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
lean_del_object(v___x_2974_);
lean_dec(v_snd_2972_);
lean_dec(v_fst_2971_);
lean_del_object(v___x_2968_);
lean_dec(v_fst_2965_);
lean_dec_ref(v_toConstantVal_2957_);
v_a_3259_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_2977_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_2977_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
v___x_3264_ = v___x_3261_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3259_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
}
}
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec_ref(v_toConstantVal_2957_);
lean_dec_ref(v_params_2937_);
v_a_3269_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_2962_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_2962_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance___boxed(lean_object* v_indVal_3301_, lean_object* v_params_3302_, lean_object* v_encInstBinders_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_){
_start:
{
lean_object* v_res_3311_; 
v_res_3311_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance(v_indVal_3301_, v_params_3302_, v_encInstBinders_3303_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_, v_a_3309_);
lean_dec(v_a_3309_);
lean_dec_ref(v_a_3308_);
lean_dec(v_a_3307_);
lean_dec_ref(v_a_3306_);
lean_dec(v_a_3305_);
lean_dec_ref(v_a_3304_);
lean_dec_ref(v_encInstBinders_3303_);
return v_res_3311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7(size_t v_sz_3312_, size_t v_i_3313_, lean_object* v_bs_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_){
_start:
{
lean_object* v___x_3322_; 
v___x_3322_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___redArg(v_sz_3312_, v_i_3313_, v_bs_3314_, v___y_3319_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7___boxed(lean_object* v_sz_3323_, lean_object* v_i_3324_, lean_object* v_bs_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
size_t v_sz_boxed_3333_; size_t v_i_boxed_3334_; lean_object* v_res_3335_; 
v_sz_boxed_3333_ = lean_unbox_usize(v_sz_3323_);
lean_dec(v_sz_3323_);
v_i_boxed_3334_ = lean_unbox_usize(v_i_3324_);
lean_dec(v_i_3324_);
v_res_3335_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__7_spec__7(v_sz_boxed_3333_, v_i_boxed_3334_, v_bs_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec(v___y_3327_);
lean_dec_ref(v___y_3326_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9(size_t v_sz_3336_, size_t v_i_3337_, lean_object* v_bs_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_){
_start:
{
lean_object* v___x_3346_; 
v___x_3346_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___redArg(v_sz_3336_, v_i_3337_, v_bs_3338_, v___y_3343_);
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9___boxed(lean_object* v_sz_3347_, lean_object* v_i_3348_, lean_object* v_bs_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_){
_start:
{
size_t v_sz_boxed_3357_; size_t v_i_boxed_3358_; lean_object* v_res_3359_; 
v_sz_boxed_3357_ = lean_unbox_usize(v_sz_3347_);
lean_dec(v_sz_3347_);
v_i_boxed_3358_ = lean_unbox_usize(v_i_3348_);
lean_dec(v_i_3348_);
v_res_3359_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__8_spec__9(v_sz_boxed_3357_, v_i_boxed_3358_, v_bs_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(size_t v_sz_3360_, size_t v_i_3361_, lean_object* v_bs_3362_){
_start:
{
uint8_t v___x_3363_; 
v___x_3363_ = lean_usize_dec_lt(v_i_3361_, v_sz_3360_);
if (v___x_3363_ == 0)
{
return v_bs_3362_;
}
else
{
lean_object* v_v_3364_; lean_object* v___x_3365_; lean_object* v_bs_x27_3366_; size_t v___x_3367_; size_t v___x_3368_; lean_object* v___x_3369_; 
v_v_3364_ = lean_array_uget(v_bs_3362_, v_i_3361_);
v___x_3365_ = lean_unsigned_to_nat(0u);
v_bs_x27_3366_ = lean_array_uset(v_bs_3362_, v_i_3361_, v___x_3365_);
v___x_3367_ = ((size_t)1ULL);
v___x_3368_ = lean_usize_add(v_i_3361_, v___x_3367_);
v___x_3369_ = lean_array_uset(v_bs_x27_3366_, v_i_3361_, v_v_3364_);
v_i_3361_ = v___x_3368_;
v_bs_3362_ = v___x_3369_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2___boxed(lean_object* v_sz_3371_, lean_object* v_i_3372_, lean_object* v_bs_3373_){
_start:
{
size_t v_sz_boxed_3374_; size_t v_i_boxed_3375_; lean_object* v_res_3376_; 
v_sz_boxed_3374_ = lean_unbox_usize(v_sz_3371_);
lean_dec(v_sz_3371_);
v_i_boxed_3375_ = lean_unbox_usize(v_i_3372_);
lean_dec(v_i_3372_);
v_res_3376_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(v_sz_boxed_3374_, v_i_boxed_3375_, v_bs_3373_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(lean_object* v_as_3377_, size_t v_i_3378_, size_t v_stop_3379_, lean_object* v_b_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
lean_object* v_a_3387_; uint8_t v___x_3391_; 
v___x_3391_ = lean_usize_dec_eq(v_i_3378_, v_stop_3379_);
if (v___x_3391_ == 0)
{
lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3392_ = lean_array_uget_borrowed(v_as_3377_, v_i_3378_);
lean_inc(v___x_3392_);
v___x_3393_ = l_Lean_Meta_isType(v___x_3392_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v_a_3394_; uint8_t v___x_3395_; 
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_a_3394_);
lean_dec_ref_known(v___x_3393_, 1);
v___x_3395_ = lean_unbox(v_a_3394_);
lean_dec(v_a_3394_);
if (v___x_3395_ == 0)
{
v_a_3387_ = v_b_3380_;
goto v___jp_3386_;
}
else
{
lean_object* v___x_3396_; 
lean_inc(v___x_3392_);
v___x_3396_ = lean_array_push(v_b_3380_, v___x_3392_);
v_a_3387_ = v___x_3396_;
goto v___jp_3386_;
}
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
lean_dec_ref(v_b_3380_);
v_a_3397_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3393_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3393_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
}
else
{
lean_object* v___x_3405_; 
v___x_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3405_, 0, v_b_3380_);
return v___x_3405_;
}
v___jp_3386_:
{
size_t v___x_3388_; size_t v___x_3389_; 
v___x_3388_ = ((size_t)1ULL);
v___x_3389_ = lean_usize_add(v_i_3378_, v___x_3388_);
v_i_3378_ = v___x_3389_;
v_b_3380_ = v_a_3387_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg___boxed(lean_object* v_as_3406_, lean_object* v_i_3407_, lean_object* v_stop_3408_, lean_object* v_b_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_){
_start:
{
size_t v_i_boxed_3415_; size_t v_stop_boxed_3416_; lean_object* v_res_3417_; 
v_i_boxed_3415_ = lean_unbox_usize(v_i_3407_);
lean_dec(v_i_3407_);
v_stop_boxed_3416_ = lean_unbox_usize(v_stop_3408_);
lean_dec(v_stop_3408_);
v_res_3417_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(v_as_3406_, v_i_boxed_3415_, v_stop_boxed_3416_, v_b_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_);
lean_dec(v___y_3413_);
lean_dec_ref(v___y_3412_);
lean_dec(v___y_3411_);
lean_dec_ref(v___y_3410_);
lean_dec_ref(v_as_3406_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg(size_t v_sz_3435_, size_t v_i_3436_, lean_object* v_bs_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_){
_start:
{
uint8_t v___x_3442_; 
v___x_3442_ = lean_usize_dec_lt(v_i_3436_, v_sz_3435_);
if (v___x_3442_ == 0)
{
lean_object* v___x_3443_; 
v___x_3443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3443_, 0, v_bs_3437_);
return v___x_3443_;
}
else
{
lean_object* v_v_3444_; lean_object* v___x_3445_; lean_object* v_bs_x27_3446_; lean_object* v___x_3447_; 
v_v_3444_ = lean_array_uget(v_bs_3437_, v_i_3436_);
v___x_3445_ = lean_unsigned_to_nat(0u);
v_bs_x27_3446_ = lean_array_uset(v_bs_3437_, v_i_3436_, v___x_3445_);
v___x_3447_ = l_Lean_Meta_getFVarLocalDecl___redArg(v_v_3444_, v___y_3438_, v___y_3439_, v___y_3440_);
lean_dec(v_v_3444_);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_object* v_toCold_3448_; lean_object* v_a_3449_; lean_object* v_ref_3450_; lean_object* v_quotContext_3451_; lean_object* v_currMacroScope_3452_; uint8_t v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; size_t v___x_3474_; size_t v___x_3475_; lean_object* v___x_3476_; 
v_toCold_3448_ = lean_ctor_get(v___y_3439_, 0);
v_a_3449_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3449_);
lean_dec_ref_known(v___x_3447_, 1);
v_ref_3450_ = lean_ctor_get(v___y_3439_, 2);
v_quotContext_3451_ = lean_ctor_get(v_toCold_3448_, 8);
v_currMacroScope_3452_ = lean_ctor_get(v_toCold_3448_, 9);
v___x_3453_ = 0;
v___x_3454_ = l_Lean_SourceInfo_fromRef(v_ref_3450_, v___x_3453_);
v___x_3455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__1));
v___x_3456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__2));
lean_inc_n(v___x_3454_, 6);
v___x_3457_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3454_);
lean_ctor_set(v___x_3457_, 1, v___x_3456_);
v___x_3458_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__3___closed__4));
v___x_3459_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__14);
v___x_3460_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3454_);
lean_ctor_set(v___x_3460_, 1, v___x_3458_);
lean_ctor_set(v___x_3460_, 2, v___x_3459_);
v___x_3461_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__24));
v___x_3462_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__54);
v___x_3463_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__55));
lean_inc(v_currMacroScope_3452_);
lean_inc(v_quotContext_3451_);
v___x_3464_ = l_Lean_addMacroScope(v_quotContext_3451_, v___x_3463_, v_currMacroScope_3452_);
v___x_3465_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__5));
v___x_3466_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3454_);
lean_ctor_set(v___x_3466_, 1, v___x_3462_);
lean_ctor_set(v___x_3466_, 2, v___x_3464_);
lean_ctor_set(v___x_3466_, 3, v___x_3465_);
v___x_3467_ = l_Lean_LocalDecl_userName(v_a_3449_);
lean_dec(v_a_3449_);
v___x_3468_ = l_Lean_mkIdent(v___x_3467_);
v___x_3469_ = l_Lean_Syntax_node1(v___x_3454_, v___x_3458_, v___x_3468_);
v___x_3470_ = l_Lean_Syntax_node2(v___x_3454_, v___x_3461_, v___x_3466_, v___x_3469_);
v___x_3471_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___closed__6));
v___x_3472_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3454_);
lean_ctor_set(v___x_3472_, 1, v___x_3471_);
v___x_3473_ = l_Lean_Syntax_node4(v___x_3454_, v___x_3455_, v___x_3457_, v___x_3460_, v___x_3470_, v___x_3472_);
v___x_3474_ = ((size_t)1ULL);
v___x_3475_ = lean_usize_add(v_i_3436_, v___x_3474_);
v___x_3476_ = lean_array_uset(v_bs_x27_3446_, v_i_3436_, v___x_3473_);
v_i_3436_ = v___x_3475_;
v_bs_3437_ = v___x_3476_;
goto _start;
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3485_; 
lean_dec_ref(v_bs_x27_3446_);
v_a_3478_ = lean_ctor_get(v___x_3447_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3447_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3480_ = v___x_3447_;
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v___x_3447_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3483_; 
if (v_isShared_3481_ == 0)
{
v___x_3483_ = v___x_3480_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3478_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg___boxed(lean_object* v_sz_3486_, lean_object* v_i_3487_, lean_object* v_bs_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_){
_start:
{
size_t v_sz_boxed_3493_; size_t v_i_boxed_3494_; lean_object* v_res_3495_; 
v_sz_boxed_3493_ = lean_unbox_usize(v_sz_3486_);
lean_dec(v_sz_3486_);
v_i_boxed_3494_ = lean_unbox_usize(v_i_3487_);
lean_dec(v_i_3487_);
v_res_3495_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg(v_sz_boxed_3493_, v_i_boxed_3494_, v_bs_3488_, v___y_3489_, v___y_3490_, v___y_3491_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec_ref(v___y_3489_);
return v_res_3495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0(lean_object* v___x_3496_, lean_object* v_a_3497_, lean_object* v___x_3498_, lean_object* v_params_3499_, lean_object* v_x_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_){
_start:
{
lean_object* v_a_3509_; lean_object* v___y_3532_; lean_object* v___x_3542_; lean_object* v___x_3543_; uint8_t v___x_3544_; 
v___x_3542_ = lean_array_get_size(v_params_3499_);
v___x_3543_ = lean_mk_empty_array_with_capacity(v___x_3498_);
v___x_3544_ = lean_nat_dec_lt(v___x_3498_, v___x_3542_);
if (v___x_3544_ == 0)
{
v_a_3509_ = v___x_3543_;
goto v___jp_3508_;
}
else
{
uint8_t v___x_3545_; 
v___x_3545_ = lean_nat_dec_le(v___x_3542_, v___x_3542_);
if (v___x_3545_ == 0)
{
if (v___x_3544_ == 0)
{
v_a_3509_ = v___x_3543_;
goto v___jp_3508_;
}
else
{
size_t v___x_3546_; size_t v___x_3547_; lean_object* v___x_3548_; 
v___x_3546_ = ((size_t)0ULL);
v___x_3547_ = lean_usize_of_nat(v___x_3542_);
v___x_3548_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(v_params_3499_, v___x_3546_, v___x_3547_, v___x_3543_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_);
v___y_3532_ = v___x_3548_;
goto v___jp_3531_;
}
}
else
{
size_t v___x_3549_; size_t v___x_3550_; lean_object* v___x_3551_; 
v___x_3549_ = ((size_t)0ULL);
v___x_3550_ = lean_usize_of_nat(v___x_3542_);
v___x_3551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(v_params_3499_, v___x_3549_, v___x_3550_, v___x_3543_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_);
v___y_3532_ = v___x_3551_;
goto v___jp_3531_;
}
}
v___jp_3508_:
{
size_t v_sz_3510_; size_t v___x_3511_; lean_object* v___x_3512_; 
v_sz_3510_ = lean_array_size(v_a_3509_);
v___x_3511_ = ((size_t)0ULL);
v___x_3512_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg(v_sz_3510_, v___x_3511_, v_a_3509_, v___y_3503_, v___y_3505_, v___y_3506_);
if (lean_obj_tag(v___x_3512_) == 0)
{
lean_object* v_a_3513_; lean_object* v___x_3514_; lean_object* v_env_3515_; uint8_t v___x_3516_; 
v_a_3513_ = lean_ctor_get(v___x_3512_, 0);
lean_inc(v_a_3513_);
lean_dec_ref_known(v___x_3512_, 1);
v___x_3514_ = lean_st_ref_get(v___y_3506_);
v_env_3515_ = lean_ctor_get(v___x_3514_, 0);
lean_inc_ref(v_env_3515_);
lean_dec(v___x_3514_);
v___x_3516_ = l_Lean_isStructure(v_env_3515_, v___x_3496_);
if (v___x_3516_ == 0)
{
size_t v_sz_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v_sz_3517_ = lean_array_size(v_a_3513_);
v___x_3518_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(v_sz_3517_, v___x_3511_, v_a_3513_);
v___x_3519_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance(v_a_3497_, v_params_3499_, v___x_3518_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_);
lean_dec_ref(v___x_3518_);
return v___x_3519_;
}
else
{
size_t v_sz_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; 
v_sz_3520_ = lean_array_size(v_a_3513_);
v___x_3521_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__2(v_sz_3520_, v___x_3511_, v_a_3513_);
v___x_3522_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance(v_a_3497_, v_params_3499_, v___x_3521_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_);
lean_dec_ref(v___x_3521_);
return v___x_3522_;
}
}
else
{
lean_object* v_a_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3530_; 
lean_dec_ref(v_params_3499_);
lean_dec_ref(v_a_3497_);
lean_dec(v___x_3496_);
v_a_3523_ = lean_ctor_get(v___x_3512_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v___x_3512_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3525_ = v___x_3512_;
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_a_3523_);
lean_dec(v___x_3512_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3528_; 
if (v_isShared_3526_ == 0)
{
v___x_3528_ = v___x_3525_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_a_3523_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
return v___x_3528_;
}
}
}
}
v___jp_3531_:
{
if (lean_obj_tag(v___y_3532_) == 0)
{
lean_object* v_a_3533_; 
v_a_3533_ = lean_ctor_get(v___y_3532_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___y_3532_, 1);
v_a_3509_ = v_a_3533_;
goto v___jp_3508_;
}
else
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3541_; 
lean_dec_ref(v_params_3499_);
lean_dec_ref(v_a_3497_);
lean_dec(v___x_3496_);
v_a_3534_ = lean_ctor_get(v___y_3532_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___y_3532_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3536_ = v___y_3532_;
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___y_3532_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3537_ == 0)
{
v___x_3539_ = v___x_3536_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3534_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0___boxed(lean_object* v___x_3552_, lean_object* v_a_3553_, lean_object* v___x_3554_, lean_object* v_params_3555_, lean_object* v_x_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_){
_start:
{
lean_object* v_res_3564_; 
v_res_3564_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0(v___x_3552_, v_a_3553_, v___x_3554_, v_params_3555_, v_x_3556_, v___y_3557_, v___y_3558_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_);
lean_dec(v___y_3562_);
lean_dec_ref(v___y_3561_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec(v___y_3558_);
lean_dec_ref(v___y_3557_);
lean_dec_ref(v_x_3556_);
lean_dec(v___x_3554_);
return v_res_3564_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3565_; 
v___x_3565_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3565_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3566_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__0);
v___x_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3566_);
return v___x_3567_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
v___x_3568_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1);
v___x_3569_ = lean_unsigned_to_nat(0u);
v___x_3570_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3569_);
lean_ctor_set(v___x_3570_, 1, v___x_3569_);
lean_ctor_set(v___x_3570_, 2, v___x_3569_);
lean_ctor_set(v___x_3570_, 3, v___x_3569_);
lean_ctor_set(v___x_3570_, 4, v___x_3568_);
lean_ctor_set(v___x_3570_, 5, v___x_3568_);
lean_ctor_set(v___x_3570_, 6, v___x_3568_);
lean_ctor_set(v___x_3570_, 7, v___x_3568_);
lean_ctor_set(v___x_3570_, 8, v___x_3568_);
lean_ctor_set(v___x_3570_, 9, v___x_3568_);
lean_ctor_set(v___x_3570_, 10, v___x_3568_);
return v___x_3570_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3571_ = lean_unsigned_to_nat(32u);
v___x_3572_ = lean_mk_empty_array_with_capacity(v___x_3571_);
v___x_3573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3572_);
return v___x_3573_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3574_ = ((size_t)5ULL);
v___x_3575_ = lean_unsigned_to_nat(0u);
v___x_3576_ = lean_unsigned_to_nat(32u);
v___x_3577_ = lean_mk_empty_array_with_capacity(v___x_3576_);
v___x_3578_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__3);
v___x_3579_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3579_, 0, v___x_3578_);
lean_ctor_set(v___x_3579_, 1, v___x_3577_);
lean_ctor_set(v___x_3579_, 2, v___x_3575_);
lean_ctor_set(v___x_3579_, 3, v___x_3575_);
lean_ctor_set_usize(v___x_3579_, 4, v___x_3574_);
return v___x_3579_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3580_ = lean_box(1);
v___x_3581_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__4);
v___x_3582_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__1);
v___x_3583_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
lean_ctor_set(v___x_3583_, 1, v___x_3581_);
lean_ctor_set(v___x_3583_, 2, v___x_3580_);
return v___x_3583_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(lean_object* v_msgData_3584_, lean_object* v___y_3585_){
_start:
{
lean_object* v___x_3587_; lean_object* v_env_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v_scopes_3591_; lean_object* v___x_3592_; lean_object* v_opts_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3587_ = lean_st_ref_get(v___y_3585_);
v_env_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc_ref(v_env_3588_);
lean_dec(v___x_3587_);
v___x_3589_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3590_ = lean_st_ref_get(v___y_3585_);
v_scopes_3591_ = lean_ctor_get(v___x_3590_, 2);
lean_inc(v_scopes_3591_);
lean_dec(v___x_3590_);
v___x_3592_ = l_List_head_x21___redArg(v___x_3589_, v_scopes_3591_);
lean_dec(v_scopes_3591_);
v_opts_3593_ = lean_ctor_get(v___x_3592_, 1);
lean_inc_ref(v_opts_3593_);
lean_dec(v___x_3592_);
v___x_3594_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__2);
v___x_3595_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___closed__5);
v___x_3596_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3596_, 0, v_env_3588_);
lean_ctor_set(v___x_3596_, 1, v___x_3594_);
lean_ctor_set(v___x_3596_, 2, v___x_3595_);
lean_ctor_set(v___x_3596_, 3, v_opts_3593_);
v___x_3597_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3596_);
lean_ctor_set(v___x_3597_, 1, v_msgData_3584_);
v___x_3598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3597_);
return v___x_3598_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg___boxed(lean_object* v_msgData_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_){
_start:
{
lean_object* v_res_3602_; 
v_res_3602_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(v_msgData_3599_, v___y_3600_);
lean_dec(v___y_3600_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(lean_object* v_msgData_3603_, lean_object* v_macroStack_3604_, lean_object* v___y_3605_){
_start:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v_scopes_3609_; lean_object* v___x_3610_; lean_object* v_opts_3611_; lean_object* v___x_3612_; uint8_t v___x_3613_; 
v___x_3607_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3608_ = lean_st_ref_get(v___y_3605_);
v_scopes_3609_ = lean_ctor_get(v___x_3608_, 2);
lean_inc(v_scopes_3609_);
lean_dec(v___x_3608_);
v___x_3610_ = l_List_head_x21___redArg(v___x_3607_, v_scopes_3609_);
lean_dec(v_scopes_3609_);
v_opts_3611_ = lean_ctor_get(v___x_3610_, 1);
lean_inc_ref(v_opts_3611_);
lean_dec(v___x_3610_);
v___x_3612_ = l_Lean_Elab_pp_macroStack;
v___x_3613_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__2(v_opts_3611_, v___x_3612_);
lean_dec_ref(v_opts_3611_);
if (v___x_3613_ == 0)
{
lean_object* v___x_3614_; 
lean_dec(v_macroStack_3604_);
v___x_3614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3614_, 0, v_msgData_3603_);
return v___x_3614_;
}
else
{
if (lean_obj_tag(v_macroStack_3604_) == 0)
{
lean_object* v___x_3615_; 
v___x_3615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3615_, 0, v_msgData_3603_);
return v___x_3615_;
}
else
{
lean_object* v_head_3616_; lean_object* v_after_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3632_; 
v_head_3616_ = lean_ctor_get(v_macroStack_3604_, 0);
lean_inc(v_head_3616_);
v_after_3617_ = lean_ctor_get(v_head_3616_, 1);
v_isSharedCheck_3632_ = !lean_is_exclusive(v_head_3616_);
if (v_isSharedCheck_3632_ == 0)
{
lean_object* v_unused_3633_; 
v_unused_3633_ = lean_ctor_get(v_head_3616_, 0);
lean_dec(v_unused_3633_);
v___x_3619_ = v_head_3616_;
v_isShared_3620_ = v_isSharedCheck_3632_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_after_3617_);
lean_dec(v_head_3616_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3632_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3621_; lean_object* v___x_3623_; 
v___x_3621_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_3620_ == 0)
{
lean_ctor_set_tag(v___x_3619_, 7);
lean_ctor_set(v___x_3619_, 1, v___x_3621_);
lean_ctor_set(v___x_3619_, 0, v_msgData_3603_);
v___x_3623_ = v___x_3619_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_msgData_3603_);
lean_ctor_set(v_reuseFailAlloc_3631_, 1, v___x_3621_);
v___x_3623_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v_msgData_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v___x_3624_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1___redArg___closed__2);
v___x_3625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3623_);
lean_ctor_set(v___x_3625_, 1, v___x_3624_);
v___x_3626_ = l_Lean_MessageData_ofSyntax(v_after_3617_);
v___x_3627_ = l_Lean_indentD(v___x_3626_);
v_msgData_3628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_3628_, 0, v___x_3625_);
lean_ctor_set(v_msgData_3628_, 1, v___x_3627_);
v___x_3629_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__0_spec__1_spec__3(v_msgData_3628_, v_macroStack_3604_);
v___x_3630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3629_);
return v___x_3630_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg___boxed(lean_object* v_msgData_3634_, lean_object* v_macroStack_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_){
_start:
{
lean_object* v_res_3638_; 
v_res_3638_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(v_msgData_3634_, v_macroStack_3635_, v___y_3636_);
lean_dec(v___y_3636_);
return v_res_3638_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(lean_object* v_msg_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_){
_start:
{
lean_object* v___x_3643_; 
v___x_3643_ = l_Lean_Elab_Command_getRef___redArg(v___y_3640_);
if (lean_obj_tag(v___x_3643_) == 0)
{
lean_object* v_a_3644_; lean_object* v_macroStack_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v_a_3648_; lean_object* v___x_3649_; lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3658_; 
v_a_3644_ = lean_ctor_get(v___x_3643_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___x_3643_, 1);
v_macroStack_3645_ = lean_ctor_get(v___y_3640_, 4);
v___x_3646_ = l_Lean_Elab_getBetterRef(v_a_3644_, v_macroStack_3645_);
lean_dec(v_a_3644_);
v___x_3647_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(v_msg_3639_, v___y_3641_);
v_a_3648_ = lean_ctor_get(v___x_3647_, 0);
lean_inc(v_a_3648_);
lean_dec_ref(v___x_3647_);
lean_inc(v_macroStack_3645_);
v___x_3649_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(v_a_3648_, v_macroStack_3645_, v___y_3641_);
v_a_3650_ = lean_ctor_get(v___x_3649_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3652_ = v___x_3649_;
v_isShared_3653_ = v_isSharedCheck_3658_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v___x_3649_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3658_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3654_; lean_object* v___x_3656_; 
v___x_3654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3646_);
lean_ctor_set(v___x_3654_, 1, v_a_3650_);
if (v_isShared_3653_ == 0)
{
lean_ctor_set_tag(v___x_3652_, 1);
lean_ctor_set(v___x_3652_, 0, v___x_3654_);
v___x_3656_ = v___x_3652_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v___x_3654_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
else
{
lean_object* v_a_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3666_; 
lean_dec_ref(v_msg_3639_);
v_a_3659_ = lean_ctor_get(v___x_3643_, 0);
v_isSharedCheck_3666_ = !lean_is_exclusive(v___x_3643_);
if (v_isSharedCheck_3666_ == 0)
{
v___x_3661_ = v___x_3643_;
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_a_3659_);
lean_dec(v___x_3643_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3664_; 
if (v_isShared_3662_ == 0)
{
v___x_3664_ = v___x_3661_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_a_3659_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg___boxed(lean_object* v_msg_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_){
_start:
{
lean_object* v_res_3671_; 
v_res_3671_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v_msg_3667_, v___y_3668_, v___y_3669_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
return v_res_3671_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3673_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__0));
v___x_3674_ = l_Lean_stringToMessageData(v___x_3673_);
return v___x_3674_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0(lean_object* v_constName_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_){
_start:
{
lean_object* v___x_3679_; lean_object* v_env_3680_; lean_object* v___x_3681_; 
v___x_3679_ = lean_st_ref_get(v___y_3677_);
v_env_3680_ = lean_ctor_get(v___x_3679_, 0);
lean_inc_ref(v_env_3680_);
lean_dec(v___x_3679_);
lean_inc(v_constName_3675_);
v___x_3681_ = l_Lean_isInductiveCore_x3f(v_env_3680_, v_constName_3675_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v___x_3682_; uint8_t v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3682_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__9___closed__1);
v___x_3683_ = 0;
v___x_3684_ = l_Lean_MessageData_ofConstName(v_constName_3675_, v___x_3683_);
v___x_3685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3682_);
lean_ctor_set(v___x_3685_, 1, v___x_3684_);
v___x_3686_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___closed__1);
v___x_3687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3685_);
lean_ctor_set(v___x_3687_, 1, v___x_3686_);
v___x_3688_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v___x_3687_, v___y_3676_, v___y_3677_);
return v___x_3688_;
}
else
{
lean_object* v_val_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3696_; 
lean_dec(v_constName_3675_);
v_val_3689_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3691_ = v___x_3681_;
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_val_3689_);
lean_dec(v___x_3681_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3694_; 
if (v_isShared_3692_ == 0)
{
lean_ctor_set_tag(v___x_3691_, 0);
v___x_3694_ = v___x_3691_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_val_3689_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0___boxed(lean_object* v_constName_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_){
_start:
{
lean_object* v_res_3701_; 
v_res_3701_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0(v_constName_3697_, v___y_3698_, v___y_3699_);
lean_dec(v___y_3699_);
lean_dec_ref(v___y_3698_);
return v_res_3701_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1(void){
_start:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3703_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__0));
v___x_3704_ = l_Lean_stringToMessageData(v___x_3703_);
return v___x_3704_;
}
}
static lean_object* _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3(void){
_start:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; 
v___x_3706_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__2));
v___x_3707_ = l_Lean_stringToMessageData(v___x_3706_);
return v___x_3707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance(lean_object* v_declNames_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_){
_start:
{
lean_object* v___x_3712_; lean_object* v___x_3713_; uint8_t v___x_3714_; 
v___x_3712_ = lean_array_get_size(v_declNames_3708_);
v___x_3713_ = lean_unsigned_to_nat(1u);
v___x_3714_ = lean_nat_dec_eq(v___x_3712_, v___x_3713_);
if (v___x_3714_ == 0)
{
lean_object* v___x_3715_; lean_object* v___x_3716_; 
v___x_3715_ = lean_box(v___x_3714_);
v___x_3716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3715_);
return v___x_3716_;
}
else
{
lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3717_ = lean_unsigned_to_nat(0u);
v___x_3718_ = lean_array_fget_borrowed(v_declNames_3708_, v___x_3717_);
lean_inc(v___x_3718_);
v___x_3719_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__0(v___x_3718_, v_a_3709_, v_a_3710_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; lean_object* v_toConstantVal_3721_; lean_object* v_numIndices_3722_; lean_object* v_all_3723_; lean_object* v___f_3724_; lean_object* v___y_3726_; lean_object* v___y_3727_; lean_object* v___y_3762_; lean_object* v___y_3763_; lean_object* v___x_3775_; uint8_t v___x_3776_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref_known(v___x_3719_, 1);
v_toConstantVal_3721_ = lean_ctor_get(v_a_3720_, 0);
lean_inc_ref(v_toConstantVal_3721_);
v_numIndices_3722_ = lean_ctor_get(v_a_3720_, 2);
lean_inc(v_numIndices_3722_);
v_all_3723_ = lean_ctor_get(v_a_3720_, 3);
lean_inc(v_all_3723_);
lean_inc(v___x_3718_);
v___f_3724_ = lean_alloc_closure((void*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___lam__0___boxed), 12, 3);
lean_closure_set(v___f_3724_, 0, v___x_3718_);
lean_closure_set(v___f_3724_, 1, v_a_3720_);
lean_closure_set(v___f_3724_, 2, v___x_3717_);
v___x_3775_ = l_List_lengthTR___redArg(v_all_3723_);
lean_dec(v_all_3723_);
v___x_3776_ = lean_nat_dec_eq(v___x_3775_, v___x_3713_);
lean_dec(v___x_3775_);
if (v___x_3776_ == 0)
{
if (v___x_3714_ == 0)
{
v___y_3762_ = v_a_3709_;
v___y_3763_ = v_a_3710_;
goto v___jp_3761_;
}
else
{
lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3786_; 
lean_dec_ref(v___f_3724_);
lean_dec(v_numIndices_3722_);
lean_dec_ref(v_toConstantVal_3721_);
v___x_3777_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__3);
v___x_3778_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v___x_3777_, v_a_3709_, v_a_3710_);
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3781_ = v___x_3778_;
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3778_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3784_; 
if (v_isShared_3782_ == 0)
{
v___x_3784_ = v___x_3781_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_a_3779_);
v___x_3784_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
return v___x_3784_;
}
}
}
}
else
{
v___y_3762_ = v_a_3709_;
v___y_3763_ = v_a_3710_;
goto v___jp_3761_;
}
v___jp_3725_:
{
lean_object* v_type_3728_; uint8_t v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v_type_3728_ = lean_ctor_get(v_toConstantVal_3721_, 2);
lean_inc_ref(v_type_3728_);
lean_dec_ref(v_toConstantVal_3721_);
v___x_3729_ = 0;
v___x_3730_ = lean_box(v___x_3729_);
v___x_3731_ = lean_box(v___x_3729_);
v___x_3732_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInductiveInstance_spec__10___boxed), 12, 5);
lean_closure_set(v___x_3732_, 0, lean_box(0));
lean_closure_set(v___x_3732_, 1, v_type_3728_);
lean_closure_set(v___x_3732_, 2, v___f_3724_);
lean_closure_set(v___x_3732_, 3, v___x_3730_);
lean_closure_set(v___x_3732_, 4, v___x_3731_);
v___x_3733_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3732_, v___y_3726_, v___y_3727_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v___x_3735_; 
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_a_3734_);
lean_dec_ref_known(v___x_3733_, 1);
v___x_3735_ = l_Lean_Elab_Command_elabCommand(v_a_3734_, v___y_3726_, v___y_3727_);
if (lean_obj_tag(v___x_3735_) == 0)
{
lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3743_; 
v_isSharedCheck_3743_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3743_ == 0)
{
lean_object* v_unused_3744_; 
v_unused_3744_ = lean_ctor_get(v___x_3735_, 0);
lean_dec(v_unused_3744_);
v___x_3737_ = v___x_3735_;
v_isShared_3738_ = v_isSharedCheck_3743_;
goto v_resetjp_3736_;
}
else
{
lean_dec(v___x_3735_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3743_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3739_; lean_object* v___x_3741_; 
v___x_3739_ = lean_box(v___x_3714_);
if (v_isShared_3738_ == 0)
{
lean_ctor_set(v___x_3737_, 0, v___x_3739_);
v___x_3741_ = v___x_3737_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v___x_3739_);
v___x_3741_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
return v___x_3741_;
}
}
}
else
{
lean_object* v_a_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3752_; 
v_a_3745_ = lean_ctor_get(v___x_3735_, 0);
v_isSharedCheck_3752_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3752_ == 0)
{
v___x_3747_ = v___x_3735_;
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_a_3745_);
lean_dec(v___x_3735_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3750_; 
if (v_isShared_3748_ == 0)
{
v___x_3750_ = v___x_3747_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v_a_3745_);
v___x_3750_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
return v___x_3750_;
}
}
}
}
else
{
lean_object* v_a_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3760_; 
v_a_3753_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3760_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3755_ = v___x_3733_;
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_a_3753_);
lean_dec(v___x_3733_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v___x_3758_; 
if (v_isShared_3756_ == 0)
{
v___x_3758_ = v___x_3755_;
goto v_reusejp_3757_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v_a_3753_);
v___x_3758_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3757_;
}
v_reusejp_3757_:
{
return v___x_3758_;
}
}
}
}
v___jp_3761_:
{
uint8_t v___x_3764_; 
v___x_3764_ = lean_nat_dec_eq(v_numIndices_3722_, v___x_3717_);
lean_dec(v_numIndices_3722_);
if (v___x_3764_ == 0)
{
if (v___x_3714_ == 0)
{
v___y_3726_ = v___y_3762_;
v___y_3727_ = v___y_3763_;
goto v___jp_3725_;
}
else
{
lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
lean_dec_ref(v___f_3724_);
lean_dec_ref(v_toConstantVal_3721_);
v___x_3765_ = lean_obj_once(&l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1, &l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1_once, _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___closed__1);
v___x_3766_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v___x_3765_, v___y_3762_, v___y_3763_);
v_a_3767_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3769_ = v___x_3766_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3766_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_a_3767_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
else
{
v___y_3726_ = v___y_3762_;
v___y_3727_ = v___y_3763_;
goto v___jp_3725_;
}
}
}
else
{
lean_object* v_a_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3794_; 
v_a_3787_ = lean_ctor_get(v___x_3719_, 0);
v_isSharedCheck_3794_ = !lean_is_exclusive(v___x_3719_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3789_ = v___x_3719_;
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_a_3787_);
lean_dec(v___x_3719_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3792_; 
if (v_isShared_3790_ == 0)
{
v___x_3792_ = v___x_3789_;
goto v_reusejp_3791_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v_a_3787_);
v___x_3792_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3791_;
}
v_reusejp_3791_:
{
return v___x_3792_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance___boxed(lean_object* v_declNames_3795_, lean_object* v_a_3796_, lean_object* v_a_3797_, lean_object* v_a_3798_){
_start:
{
lean_object* v_res_3799_; 
v_res_3799_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance(v_declNames_3795_, v_a_3796_, v_a_3797_);
lean_dec(v_a_3797_);
lean_dec_ref(v_a_3796_);
lean_dec_ref(v_declNames_3795_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1(size_t v_sz_3800_, size_t v_i_3801_, lean_object* v_bs_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_){
_start:
{
lean_object* v___x_3810_; 
v___x_3810_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___redArg(v_sz_3800_, v_i_3801_, v_bs_3802_, v___y_3805_, v___y_3807_, v___y_3808_);
return v___x_3810_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1___boxed(lean_object* v_sz_3811_, lean_object* v_i_3812_, lean_object* v_bs_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_){
_start:
{
size_t v_sz_boxed_3821_; size_t v_i_boxed_3822_; lean_object* v_res_3823_; 
v_sz_boxed_3821_ = lean_unbox_usize(v_sz_3811_);
lean_dec(v_sz_3811_);
v_i_boxed_3822_ = lean_unbox_usize(v_i_3812_);
lean_dec(v_i_3812_);
v_res_3823_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__1(v_sz_boxed_3821_, v_i_boxed_3822_, v_bs_3813_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_);
lean_dec(v___y_3819_);
lean_dec_ref(v___y_3818_);
lean_dec(v___y_3817_);
lean_dec_ref(v___y_3816_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
return v_res_3823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3(lean_object* v_as_3824_, size_t v_i_3825_, size_t v_stop_3826_, lean_object* v_b_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
lean_object* v___x_3835_; 
v___x_3835_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___redArg(v_as_3824_, v_i_3825_, v_stop_3826_, v_b_3827_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_);
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3___boxed(lean_object* v_as_3836_, lean_object* v_i_3837_, lean_object* v_stop_3838_, lean_object* v_b_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_){
_start:
{
size_t v_i_boxed_3847_; size_t v_stop_boxed_3848_; lean_object* v_res_3849_; 
v_i_boxed_3847_ = lean_unbox_usize(v_i_3837_);
lean_dec(v_i_3837_);
v_stop_boxed_3848_ = lean_unbox_usize(v_stop_3838_);
lean_dec(v_stop_3838_);
v_res_3849_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__3(v_as_3836_, v_i_boxed_3847_, v_stop_boxed_3848_, v_b_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
lean_dec(v___y_3845_);
lean_dec_ref(v___y_3844_);
lean_dec(v___y_3843_);
lean_dec_ref(v___y_3842_);
lean_dec(v___y_3841_);
lean_dec_ref(v___y_3840_);
lean_dec_ref(v_as_3836_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4(lean_object* v_msgData_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___redArg(v_msgData_3850_, v___y_3852_);
return v___x_3854_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4___boxed(lean_object* v_msgData_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_){
_start:
{
lean_object* v_res_3859_; 
v_res_3859_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__4(v_msgData_3855_, v___y_3856_, v___y_3857_);
lean_dec(v___y_3857_);
lean_dec_ref(v___y_3856_);
return v_res_3859_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4(lean_object* v_00_u03b1_3860_, lean_object* v_msg_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
lean_object* v___x_3865_; 
v___x_3865_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___redArg(v_msg_3861_, v___y_3862_, v___y_3863_);
return v___x_3865_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4___boxed(lean_object* v_00_u03b1_3866_, lean_object* v_msg_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4(v_00_u03b1_3866_, v_msg_3867_, v___y_3868_, v___y_3869_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3868_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5(lean_object* v_msgData_3872_, lean_object* v_macroStack_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_){
_start:
{
lean_object* v___x_3877_; 
v___x_3877_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___redArg(v_msgData_3872_, v_macroStack_3873_, v___y_3875_);
return v___x_3877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5___boxed(lean_object* v_msgData_3878_, lean_object* v_macroStack_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v_res_3883_; 
v_res_3883_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveInstance_spec__4_spec__5(v_msgData_3878_, v_macroStack_3879_, v___y_3880_, v___y_3881_);
lean_dec(v___y_3881_);
lean_dec_ref(v___y_3880_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v___x_3949_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance_spec__1___closed__59));
v___x_3950_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__0_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_3951_ = l_Lean_Elab_registerDerivingHandler(v___x_3949_, v___x_3950_);
if (lean_obj_tag(v___x_3951_) == 0)
{
lean_object* v___x_3952_; uint8_t v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; 
lean_dec_ref_known(v___x_3951_, 1);
v___x_3952_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_deriveStructureInstance___closed__137));
v___x_3953_ = 0;
v___x_3954_ = ((lean_object*)(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn___closed__25_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_));
v___x_3955_ = l_Lean_registerTraceClass(v___x_3952_, v___x_3953_, v___x_3954_);
return v___x_3955_;
}
else
{
return v___x_3951_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2____boxed(lean_object* v_a_3956_){
_start:
{
lean_object* v_res_3957_; 
v_res_3957_ = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_();
return v_res_3957_;
}
}
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Rpc_Deriving(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_initFn_00___x40_Lean_Server_Rpc_Deriving_198155338____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Rpc_Deriving(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm = _init_l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm();
lean_mark_persistent(l___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncodable_matchAltTerm);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Rpc_Deriving(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Rpc_Deriving(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Rpc_Deriving(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Rpc_Deriving(builtin);
}
#ifdef __cplusplus
}
#endif
