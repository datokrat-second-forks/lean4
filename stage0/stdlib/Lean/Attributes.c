// Lean compiler output
// Module: Lean.Attributes
// Imports: public import Lean.CoreM public import Lean.Compiler.MetaAttr
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
extern lean_object* l_Lean_instInhabitedMessageData_default;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameMap_size___redArg(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_reverse___redArg(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_NameSet_size(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_addParenHeuristic(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeApplicationTime_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeApplicationTime;
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeApplicationTime_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeApplicationTime_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqAttributeApplicationTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqAttributeApplicationTime_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqAttributeApplicationTime___closed__0 = (const lean_object*)&l_Lean_instBEqAttributeApplicationTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqAttributeApplicationTime = (const lean_object*)&l_Lean_instBEqAttributeApplicationTime___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instMonadLiftImportMAttrM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instMonadLiftImportMAttrM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMonadLiftImportMAttrM___closed__0 = (const lean_object*)&l_Lean_instMonadLiftImportMAttrM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instMonadLiftImportMAttrM = (const lean_object*)&l_Lean_instMonadLiftImportMAttrM___closed__0_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__0 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__1 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__2 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__3 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__4 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__4_value;
static const lean_array_object l_Lean_AttributeImplCore_ref___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__5 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__5_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__6 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__7 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__7_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__8 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__9 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__9_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__10 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__11 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__12;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__13;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__14 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__14_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__15 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_1),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_AttributeImplCore_ref___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value_aux_2),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__16 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__16_value;
static const lean_string_object l_Lean_AttributeImplCore_ref___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__17 = (const lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__17_value;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__18;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__19;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__20;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__21;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__22;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__23;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__24;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__25;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__26;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__27;
static lean_once_cell_t l_Lean_AttributeImplCore_ref___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_AttributeImplCore_ref___autoParam___closed__28;
LEAN_EXPORT lean_object* l_Lean_AttributeImplCore_ref___autoParam;
static const lean_string_object l_Lean_instInhabitedAttributeImplCore_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "instInhabitedAttributeImplCore"};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__0_value;
static const lean_string_object l_Lean_instInhabitedAttributeImplCore_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__1_value;
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_0),((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 168, 67, 30, 9, 195, 195, 250)}};
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value_aux_1),((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(6, 28, 76, 169, 127, 73, 161, 93)}};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value;
static const lean_string_object l_Lean_instInhabitedAttributeImplCore_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__3 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__3_value;
static const lean_ctor_object l_Lean_instInhabitedAttributeImplCore_default___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_instInhabitedAttributeImplCore_default___closed__4 = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAttributeImplCore_default = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAttributeImplCore = (const lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqAttributeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqAttributeKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqAttributeKind___closed__0 = (const lean_object*)&l_Lean_instBEqAttributeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqAttributeKind = (const lean_object*)&l_Lean_instBEqAttributeKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeKind_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedAttributeKind;
static const lean_string_object l_Lean_instToStringAttributeKind___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_instToStringAttributeKind___lam__0___closed__0 = (const lean_object*)&l_Lean_instToStringAttributeKind___lam__0___closed__0_value;
static const lean_string_object l_Lean_instToStringAttributeKind___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_instToStringAttributeKind___lam__0___closed__1 = (const lean_object*)&l_Lean_instToStringAttributeKind___lam__0___closed__1_value;
static const lean_string_object l_Lean_instToStringAttributeKind___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_instToStringAttributeKind___lam__0___closed__2 = (const lean_object*)&l_Lean_instToStringAttributeKind___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instToStringAttributeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToStringAttributeKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToStringAttributeKind___closed__0 = (const lean_object*)&l_Lean_instToStringAttributeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToStringAttributeKind = (const lean_object*)&l_Lean_instToStringAttributeKind___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1;
static const lean_string_object l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instInhabitedAttributeImpl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedAttributeImpl_default___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedAttributeImpl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedAttributeImpl_default___lam__1___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value)} };
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__1_value;
static const lean_ctor_object l_Lean_instInhabitedAttributeImpl_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedAttributeImplCore_default___closed__4_value),((lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__0_value),((lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__1_value)}};
static const lean_object* l_Lean_instInhabitedAttributeImpl_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAttributeImpl_default = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lean_instInhabitedAttributeImpl = (const lean_object*)&l_Lean_instInhabitedAttributeImpl_default___closed__2_value;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_attributeMapRef;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerBuiltinAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "Failed to register attribute: Attributes can only be registered during initialization"};
static const lean_object* l_Lean_registerBuiltinAttribute___closed__0 = (const lean_object*)&l_Lean_registerBuiltinAttribute___closed__0_value;
static lean_once_cell_t l_Lean_registerBuiltinAttribute___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerBuiltinAttribute___closed__1;
static const lean_string_object l_Lean_registerBuiltinAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Invalid builtin attribute declaration: `"};
static const lean_object* l_Lean_registerBuiltinAttribute___closed__2 = (const lean_object*)&l_Lean_registerBuiltinAttribute___closed__2_value;
static const lean_string_object l_Lean_registerBuiltinAttribute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "` has already been used"};
static const lean_object* l_Lean_registerBuiltinAttribute___closed__3 = (const lean_object*)&l_Lean_registerBuiltinAttribute___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value;
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__1 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__1_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 14, 146, 125, 144, 1, 65, 64)}};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__2 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__2_value;
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Unexpected attribute argument: This attribute takes no arguments"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__3 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__3_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_ensureNoArgs___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__4;
static const lean_string_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__5 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__5_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__5_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___closed__6 = (const lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__1 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__1_value;
static const lean_string_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__2 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_0),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_1),((lean_object*)&l_Lean_Attribute_Builtin_ensureNoArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value_aux_2),((lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 70, 85, 26, 88, 142, 178, 115)}};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__3 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__3_value;
static const lean_string_object l_Lean_Attribute_Builtin_getIdent_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Unexpected attribute argument"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__4 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent_x3f___closed__4_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_getIdent_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___closed__5;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_getIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Unexpected attribute argument: Expected identifier, but found"};
static const lean_object* l_Lean_Attribute_Builtin_getIdent___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_getIdent___closed__0_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_getIdent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_getIdent___closed__1;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getAttrParamOptPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Unexpected attribute argument: Expected a priority, but found"};
static const lean_object* l_Lean_getAttrParamOptPrio___closed__0 = (const lean_object*)&l_Lean_getAttrParamOptPrio___closed__0_value;
static lean_once_cell_t l_Lean_getAttrParamOptPrio___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getAttrParamOptPrio___closed__1;
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Attribute_Builtin_getPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "Unexpected attribute argument: Expected an optional priority, but found"};
static const lean_object* l_Lean_Attribute_Builtin_getPrio___closed__0 = (const lean_object*)&l_Lean_Attribute_Builtin_getPrio___closed__0_value;
static lean_once_cell_t l_Lean_Attribute_Builtin_getPrio___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Attribute_Builtin_getPrio___closed__1;
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` because it is not from the present async context"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "]`: Declaration `"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\nbut `["};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "]` can only be added to declarations of type"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "` must be public"};
static const lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0 = (const lean_object*)&l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureAttrDeclIsMeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` must be marked as `meta`"};
static const lean_object* l_Lean_ensureAttrDeclIsMeta___closed__0 = (const lean_object*)&l_Lean_ensureAttrDeclIsMeta___closed__0_value;
static lean_once_cell_t l_Lean_ensureAttrDeclIsMeta___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureAttrDeclIsMeta___closed__1;
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__2_value;
static const lean_closure_object l_Lean_instInhabitedTagAttribute_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedTagAttribute_default___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedTagAttribute_default___closed__3 = (const lean_object*)&l_Lean_instInhabitedTagAttribute_default___closed__3_value;
static lean_once_cell_t l_Lean_instInhabitedTagAttribute_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTagAttribute_default___closed__4;
static lean_once_cell_t l_Lean_instInhabitedTagAttribute_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTagAttribute_default___closed__5;
static lean_once_cell_t l_Lean_instInhabitedTagAttribute_default___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTagAttribute_default___closed__6;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___auto__1;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerTagAttribute___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tag attribute"};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__0 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__0_value)}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__1 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__2 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__2_value;
static const lean_string_object l_Lean_registerTagAttribute___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__3 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__3_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__3_value)}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__4 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value;
static const lean_ctor_object l_Lean_registerTagAttribute___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__2_value),((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value)}};
static const lean_object* l_Lean_registerTagAttribute___lam__2___closed__5 = (const lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerTagAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__0 = (const lean_object*)&l_Lean_registerTagAttribute___closed__0_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__1 = (const lean_object*)&l_Lean_registerTagAttribute___closed__1_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__2 = (const lean_object*)&l_Lean_registerTagAttribute___closed__2_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__3, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__3 = (const lean_object*)&l_Lean_registerTagAttribute___closed__3_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__4, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___closed__3_value)} };
static const lean_object* l_Lean_registerTagAttribute___closed__4 = (const lean_object*)&l_Lean_registerTagAttribute___closed__4_value;
static const lean_closure_object l_Lean_registerTagAttribute___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_insert, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerTagAttribute___closed__5 = (const lean_object*)&l_Lean_registerTagAttribute___closed__5_value;
static lean_once_cell_t l_Lean_registerTagAttribute___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTagAttribute___closed__6;
static lean_once_cell_t l_Lean_registerTagAttribute___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTagAttribute___closed__7;
static const lean_ctor_object l_Lean_registerTagAttribute___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerTagAttribute___closed__1_value)}};
static const lean_object* l_Lean_registerTagAttribute___closed__8 = (const lean_object*)&l_Lean_registerTagAttribute___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_hasTag___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2_value;
static const lean_closure_object l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3 = (const lean_object*)&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4;
static lean_once_cell_t l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedParametricAttribute_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedParametricAttribute_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "parametric attribute"};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__0_value)}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__1_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__2_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__2_value),((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value)}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__0 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__1 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__1_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__3, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__2 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__2_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__4___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__3 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__3_value;
static const lean_ctor_object l_Lean_registerParametricAttributeExt___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__4 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__4_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__5___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__4_value)} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__5 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__5_value;
static const lean_closure_object l_Lean_registerParametricAttributeExt___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerParametricAttributeExt___redArg___lam__6___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__4_value)} };
static const lean_object* l_Lean_registerParametricAttributeExt___redArg___closed__6 = (const lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__3 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__3_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__4 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__4_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__5 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__5_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__6 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__6_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__7 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__7_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__8 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__8_value;
static const lean_closure_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__9 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__9_value;
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__3_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__4_value)}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__10 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__10_value;
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__10_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__5_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__6_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__7_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__8_value)}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__11 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__11_value;
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__11_value),((lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__9_value)}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__12 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__12_value;
static const lean_ctor_object l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__13 = (const lean_object*)&l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Failed to add parametric attribute `["};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0_value;
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "]` to `"};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1_value;
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "`: Attribute has already been set"};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2_value;
static const lean_string_object l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`: Declaration is in an imported module"};
static const lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3 = (const lean_object*)&l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2 = (const lean_object*)&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3;
static lean_once_cell_t l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedEnumAttributes_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedEnumAttributes_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___auto__1;
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "enumeration attribute extension"};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__2_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_registerTagAttribute___lam__2___closed__4_value)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___lam__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__0 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__1 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__1_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__2 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__2_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__4, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_registerParametricAttributeExt___redArg___closed__1_value)} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__3 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__3_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__3, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__4 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__4_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerTagAttribute___lam__7___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__5 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__5_value;
static const lean_closure_object l_Lean_registerEnumAttributes___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerEnumAttributes___redArg___lam__6___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__6 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__6_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__7 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__7_value;
static const lean_ctor_object l_Lean_registerEnumAttributes___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__1_value)}};
static const lean_object* l_Lean_registerEnumAttributes___redArg___closed__8 = (const lean_object*)&l_Lean_registerEnumAttributes___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Internal error calling `"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__0 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__0_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ".setValue` for `"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__1 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__1_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = ": Declaration is not from this async context `"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__2 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__2_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__3 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__3_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "(some "};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__4 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__4_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__5 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__5_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = ": Attribute has already been set"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__6 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__6_value;
static const lean_string_object l_Lean_EnumAttributes_setValue___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = ": Declaration is in an imported module"};
static const lean_object* l_Lean_EnumAttributes_setValue___redArg___closed__7 = (const lean_object*)&l_Lean_EnumAttributes_setValue___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_attributeImplBuilderTableRef;
static const lean_string_object l_Lean_registerAttributeImplBuilder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Attribute implementation builder `"};
static const lean_object* l_Lean_registerAttributeImplBuilder___closed__0 = (const lean_object*)&l_Lean_registerAttributeImplBuilder___closed__0_value;
static const lean_string_object l_Lean_registerAttributeImplBuilder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_registerAttributeImplBuilder___closed__1 = (const lean_object*)&l_Lean_registerAttributeImplBuilder___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkAttributeImplOfEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Unknown attribute implementation builder `"};
static const lean_object* l_Lean_mkAttributeImplOfEntry___closed__0 = (const lean_object*)&l_Lean_mkAttributeImplOfEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedAttributeExtensionState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAttributeExtensionState_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeExtensionState_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeExtensionState;
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial___boxed(lean_object*);
static const lean_string_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "Unexpected attribute implementation type: `{.ofConstName declName}` is not of type `Lean.AttributeImpl`"};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__0 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__0_value)}};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__1 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__1_value;
static const lean_string_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__2 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__2_value;
static const lean_string_object l_Lean_mkAttributeImplOfConstantUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "AttributeImpl"};
static const lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___closed__3 = (const lean_object*)&l_Lean_mkAttributeImplOfConstantUnsafe___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_addAttrEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_initFn___lam__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_initFn___lam__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "attributeExtension"};
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_AttributeImplCore_ref___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__3_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(219, 25, 250, 145, 208, 184, 170, 105)}};
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Attributes_0__Lean_addAttrEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_attributeExtension;
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames();
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames___boxed(lean_object*);
static const lean_string_object l_Lean_getBuiltinAttributeImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unknown attribute `"};
static const lean_object* l_Lean_getBuiltinAttributeImpl___closed__0 = (const lean_object*)&l_Lean_getBuiltinAttributeImpl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isAttribute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAttribute___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAttributeNames(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAttributeImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_add(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_erase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Attribute_erase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_updateEnvAttributesImpl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_update_env_attributes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributesImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_get_num_attributes();
LEAN_EXPORT lean_object* l_Lean_getNumBuiltinAttributesImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx(uint8_t v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lean_AttributeApplicationTime_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_AttributeApplicationTime_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lean_AttributeApplicationTime_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg(lean_object* v_afterTypeChecking_23_){
_start:
{
lean_inc(v_afterTypeChecking_23_);
return v_afterTypeChecking_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg___boxed(lean_object* v_afterTypeChecking_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_AttributeApplicationTime_afterTypeChecking_elim___redArg(v_afterTypeChecking_24_);
lean_dec(v_afterTypeChecking_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_afterTypeChecking_29_){
_start:
{
lean_inc(v_afterTypeChecking_29_);
return v_afterTypeChecking_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterTypeChecking_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_afterTypeChecking_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lean_AttributeApplicationTime_afterTypeChecking_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_afterTypeChecking_33_);
lean_dec(v_afterTypeChecking_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg(lean_object* v_afterCompilation_36_){
_start:
{
lean_inc(v_afterCompilation_36_);
return v_afterCompilation_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg___boxed(lean_object* v_afterCompilation_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_AttributeApplicationTime_afterCompilation_elim___redArg(v_afterCompilation_37_);
lean_dec(v_afterCompilation_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_afterCompilation_42_){
_start:
{
lean_inc(v_afterCompilation_42_);
return v_afterCompilation_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_afterCompilation_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_afterCompilation_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lean_AttributeApplicationTime_afterCompilation_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_afterCompilation_46_);
lean_dec(v_afterCompilation_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg(lean_object* v_beforeElaboration_49_){
_start:
{
lean_inc(v_beforeElaboration_49_);
return v_beforeElaboration_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg___boxed(lean_object* v_beforeElaboration_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_AttributeApplicationTime_beforeElaboration_elim___redArg(v_beforeElaboration_50_);
lean_dec(v_beforeElaboration_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_beforeElaboration_55_){
_start:
{
lean_inc(v_beforeElaboration_55_);
return v_beforeElaboration_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeApplicationTime_beforeElaboration_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_beforeElaboration_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lean_AttributeApplicationTime_beforeElaboration_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_beforeElaboration_59_);
lean_dec(v_beforeElaboration_59_);
return v_res_61_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeApplicationTime_default(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeApplicationTime(void){
_start:
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeApplicationTime_beq(uint8_t v_x_64_, uint8_t v_y_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_66_ = l_Lean_AttributeApplicationTime_ctorIdx(v_x_64_);
v___x_67_ = l_Lean_AttributeApplicationTime_ctorIdx(v_y_65_);
v___x_68_ = lean_nat_dec_eq(v___x_66_, v___x_67_);
lean_dec(v___x_67_);
lean_dec(v___x_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeApplicationTime_beq___boxed(lean_object* v_x_69_, lean_object* v_y_70_){
_start:
{
uint8_t v_x_21__boxed_71_; uint8_t v_y_22__boxed_72_; uint8_t v_res_73_; lean_object* v_r_74_; 
v_x_21__boxed_71_ = lean_unbox(v_x_69_);
v_y_22__boxed_72_ = lean_unbox(v_y_70_);
v_res_73_ = l_Lean_instBEqAttributeApplicationTime_beq(v_x_21__boxed_71_, v_y_22__boxed_72_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0(lean_object* v_00_u03b1_77_, lean_object* v_x_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___x_82_; lean_object* v_toCold_83_; lean_object* v_env_84_; lean_object* v_ref_85_; lean_object* v_options_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_82_ = lean_st_ref_get(v___y_80_);
v_toCold_83_ = lean_ctor_get(v___y_79_, 0);
v_env_84_ = lean_ctor_get(v___x_82_, 0);
lean_inc_ref(v_env_84_);
lean_dec(v___x_82_);
v_ref_85_ = lean_ctor_get(v___y_79_, 2);
v_options_86_ = lean_ctor_get(v_toCold_83_, 2);
lean_inc_ref(v_options_86_);
v___x_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_87_, 0, v_env_84_);
lean_ctor_set(v___x_87_, 1, v_options_86_);
v___x_88_ = lean_apply_2(v_x_78_, v___x_87_, lean_box(0));
if (lean_obj_tag(v___x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_96_; 
v_a_89_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_96_ == 0)
{
v___x_91_ = v___x_88_;
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_94_; 
if (v_isShared_92_ == 0)
{
v___x_94_ = v___x_91_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_a_89_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_108_; 
v_a_97_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_108_ == 0)
{
v___x_99_ = v___x_88_;
v_isShared_100_ = v_isSharedCheck_108_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_88_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_108_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_101_ = lean_io_error_to_string(v_a_97_);
v___x_102_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
v___x_103_ = l_Lean_MessageData_ofFormat(v___x_102_);
lean_inc(v_ref_85_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v_ref_85_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 0, v___x_104_);
v___x_106_ = v___x_99_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLiftImportMAttrM___lam__0___boxed(lean_object* v_00_u03b1_109_, lean_object* v_x_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_instMonadLiftImportMAttrM___lam__0(v_00_u03b1_109_, v_x_110_, v___y_111_, v___y_112_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
return v_res_114_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__12(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__10));
v___x_144_ = l_Lean_mkAtom(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__13(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__12, &l_Lean_AttributeImplCore_ref___autoParam___closed__12_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__12);
v___x_146_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_147_ = lean_array_push(v___x_146_, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__18(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__17));
v___x_157_ = l_Lean_mkAtom(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__19(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__18, &l_Lean_AttributeImplCore_ref___autoParam___closed__18_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__18);
v___x_159_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_160_ = lean_array_push(v___x_159_, v___x_158_);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__20(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_161_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__19, &l_Lean_AttributeImplCore_ref___autoParam___closed__19_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__19);
v___x_162_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__16));
v___x_163_ = lean_box(2);
v___x_164_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___x_162_);
lean_ctor_set(v___x_164_, 2, v___x_161_);
return v___x_164_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__21(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__20, &l_Lean_AttributeImplCore_ref___autoParam___closed__20_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__20);
v___x_166_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__13, &l_Lean_AttributeImplCore_ref___autoParam___closed__13_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__13);
v___x_167_ = lean_array_push(v___x_166_, v___x_165_);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__22(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__21, &l_Lean_AttributeImplCore_ref___autoParam___closed__21_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__21);
v___x_169_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__11));
v___x_170_ = lean_box(2);
v___x_171_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___x_169_);
lean_ctor_set(v___x_171_, 2, v___x_168_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__23(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__22, &l_Lean_AttributeImplCore_ref___autoParam___closed__22_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__22);
v___x_173_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_174_ = lean_array_push(v___x_173_, v___x_172_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__24(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_175_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__23, &l_Lean_AttributeImplCore_ref___autoParam___closed__23_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__23);
v___x_176_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__9));
v___x_177_ = lean_box(2);
v___x_178_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
lean_ctor_set(v___x_178_, 2, v___x_175_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__25(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_179_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__24, &l_Lean_AttributeImplCore_ref___autoParam___closed__24_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__24);
v___x_180_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_181_ = lean_array_push(v___x_180_, v___x_179_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__26(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_182_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__25, &l_Lean_AttributeImplCore_ref___autoParam___closed__25_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__25);
v___x_183_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__7));
v___x_184_ = lean_box(2);
v___x_185_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_183_);
lean_ctor_set(v___x_185_, 2, v___x_182_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__27(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_186_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__26, &l_Lean_AttributeImplCore_ref___autoParam___closed__26_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__26);
v___x_187_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__5));
v___x_188_ = lean_array_push(v___x_187_, v___x_186_);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_189_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__27, &l_Lean_AttributeImplCore_ref___autoParam___closed__27_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__27);
v___x_190_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__4));
v___x_191_ = lean_box(2);
v___x_192_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v___x_190_);
lean_ctor_set(v___x_192_, 2, v___x_189_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_AttributeImplCore_ref___autoParam(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__28, &l_Lean_AttributeImplCore_ref___autoParam___closed__28_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx(uint8_t v_x_208_){
_start:
{
switch(v_x_208_)
{
case 0:
{
lean_object* v___x_209_; 
v___x_209_ = lean_unsigned_to_nat(0u);
return v___x_209_;
}
case 1:
{
lean_object* v___x_210_; 
v___x_210_ = lean_unsigned_to_nat(1u);
return v___x_210_;
}
default: 
{
lean_object* v___x_211_; 
v___x_211_ = lean_unsigned_to_nat(2u);
return v___x_211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorIdx___boxed(lean_object* v_x_212_){
_start:
{
uint8_t v_x_boxed_213_; lean_object* v_res_214_; 
v_x_boxed_213_ = lean_unbox(v_x_212_);
v_res_214_ = l_Lean_AttributeKind_ctorIdx(v_x_boxed_213_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg(lean_object* v_k_215_){
_start:
{
lean_inc(v_k_215_);
return v_k_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___redArg___boxed(lean_object* v_k_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_AttributeKind_ctorElim___redArg(v_k_216_);
lean_dec(v_k_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim(lean_object* v_motive_218_, lean_object* v_ctorIdx_219_, uint8_t v_t_220_, lean_object* v_h_221_, lean_object* v_k_222_){
_start:
{
lean_inc(v_k_222_);
return v_k_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_ctorElim___boxed(lean_object* v_motive_223_, lean_object* v_ctorIdx_224_, lean_object* v_t_225_, lean_object* v_h_226_, lean_object* v_k_227_){
_start:
{
uint8_t v_t_boxed_228_; lean_object* v_res_229_; 
v_t_boxed_228_ = lean_unbox(v_t_225_);
v_res_229_ = l_Lean_AttributeKind_ctorElim(v_motive_223_, v_ctorIdx_224_, v_t_boxed_228_, v_h_226_, v_k_227_);
lean_dec(v_k_227_);
lean_dec(v_ctorIdx_224_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg(lean_object* v_global_230_){
_start:
{
lean_inc(v_global_230_);
return v_global_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___redArg___boxed(lean_object* v_global_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_AttributeKind_global_elim___redArg(v_global_231_);
lean_dec(v_global_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim(lean_object* v_motive_233_, uint8_t v_t_234_, lean_object* v_h_235_, lean_object* v_global_236_){
_start:
{
lean_inc(v_global_236_);
return v_global_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_global_elim___boxed(lean_object* v_motive_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_global_240_){
_start:
{
uint8_t v_t_boxed_241_; lean_object* v_res_242_; 
v_t_boxed_241_ = lean_unbox(v_t_238_);
v_res_242_ = l_Lean_AttributeKind_global_elim(v_motive_237_, v_t_boxed_241_, v_h_239_, v_global_240_);
lean_dec(v_global_240_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg(lean_object* v_local_243_){
_start:
{
lean_inc(v_local_243_);
return v_local_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___redArg___boxed(lean_object* v_local_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_AttributeKind_local_elim___redArg(v_local_244_);
lean_dec(v_local_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim(lean_object* v_motive_246_, uint8_t v_t_247_, lean_object* v_h_248_, lean_object* v_local_249_){
_start:
{
lean_inc(v_local_249_);
return v_local_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_local_elim___boxed(lean_object* v_motive_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_local_253_){
_start:
{
uint8_t v_t_boxed_254_; lean_object* v_res_255_; 
v_t_boxed_254_ = lean_unbox(v_t_251_);
v_res_255_ = l_Lean_AttributeKind_local_elim(v_motive_250_, v_t_boxed_254_, v_h_252_, v_local_253_);
lean_dec(v_local_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg(lean_object* v_scoped_256_){
_start:
{
lean_inc(v_scoped_256_);
return v_scoped_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___redArg___boxed(lean_object* v_scoped_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_AttributeKind_scoped_elim___redArg(v_scoped_257_);
lean_dec(v_scoped_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim(lean_object* v_motive_259_, uint8_t v_t_260_, lean_object* v_h_261_, lean_object* v_scoped_262_){
_start:
{
lean_inc(v_scoped_262_);
return v_scoped_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_AttributeKind_scoped_elim___boxed(lean_object* v_motive_263_, lean_object* v_t_264_, lean_object* v_h_265_, lean_object* v_scoped_266_){
_start:
{
uint8_t v_t_boxed_267_; lean_object* v_res_268_; 
v_t_boxed_267_ = lean_unbox(v_t_264_);
v_res_268_ = l_Lean_AttributeKind_scoped_elim(v_motive_263_, v_t_boxed_267_, v_h_265_, v_scoped_266_);
lean_dec(v_scoped_266_);
return v_res_268_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t v_x_269_, uint8_t v_y_270_){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v___x_271_ = l_Lean_AttributeKind_ctorIdx(v_x_269_);
v___x_272_ = l_Lean_AttributeKind_ctorIdx(v_y_270_);
v___x_273_ = lean_nat_dec_eq(v___x_271_, v___x_272_);
lean_dec(v___x_272_);
lean_dec(v___x_271_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqAttributeKind_beq___boxed(lean_object* v_x_274_, lean_object* v_y_275_){
_start:
{
uint8_t v_x_21__boxed_276_; uint8_t v_y_22__boxed_277_; uint8_t v_res_278_; lean_object* v_r_279_; 
v_x_21__boxed_276_ = lean_unbox(v_x_274_);
v_y_22__boxed_277_ = lean_unbox(v_y_275_);
v_res_278_ = l_Lean_instBEqAttributeKind_beq(v_x_21__boxed_276_, v_y_22__boxed_277_);
v_r_279_ = lean_box(v_res_278_);
return v_r_279_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeKind_default(void){
_start:
{
uint8_t v___x_282_; 
v___x_282_ = 0;
return v___x_282_;
}
}
static uint8_t _init_l_Lean_instInhabitedAttributeKind(void){
_start:
{
uint8_t v___x_283_; 
v___x_283_ = 0;
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0(uint8_t v_x_287_){
_start:
{
switch(v_x_287_)
{
case 0:
{
lean_object* v___x_288_; 
v___x_288_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__0));
return v___x_288_;
}
case 1:
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__1));
return v___x_289_;
}
default: 
{
lean_object* v___x_290_; 
v___x_290_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__2));
return v___x_290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringAttributeKind___lam__0___boxed(lean_object* v_x_291_){
_start:
{
uint8_t v_x_36__boxed_292_; lean_object* v_res_293_; 
v_x_36__boxed_292_ = lean_unbox(v_x_291_);
v_res_293_ = l_Lean_instToStringAttributeKind___lam__0(v_x_36__boxed_292_);
return v_res_293_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = l_Lean_instInhabitedMessageData_default;
v___x_297_ = lean_box(0);
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
lean_ctor_set(v___x_298_, 1, v___x_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0(lean_object* v_x_299_, lean_object* v___y_300_, uint8_t v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0, &l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__0___closed__0);
v___x_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__0___boxed(lean_object* v_x_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
uint8_t v___y_1030__boxed_313_; lean_object* v_res_314_; 
v___y_1030__boxed_313_ = lean_unbox(v___y_309_);
v_res_314_ = l_Lean_instInhabitedAttributeImpl_default___lam__0(v_x_307_, v___y_308_, v___y_1030__boxed_313_, v___y_310_, v___y_311_);
lean_dec(v___y_311_);
lean_dec_ref(v___y_310_);
lean_dec(v___y_308_);
lean_dec(v_x_307_);
return v_res_314_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_315_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0);
v___x_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_318_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1);
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
lean_ctor_set(v___x_320_, 2, v___x_319_);
lean_ctor_set(v___x_320_, 3, v___x_319_);
lean_ctor_set(v___x_320_, 4, v___x_318_);
lean_ctor_set(v___x_320_, 5, v___x_318_);
lean_ctor_set(v___x_320_, 6, v___x_318_);
lean_ctor_set(v___x_320_, 7, v___x_318_);
lean_ctor_set(v___x_320_, 8, v___x_318_);
lean_ctor_set(v___x_320_, 9, v___x_318_);
lean_ctor_set(v___x_320_, 10, v___x_318_);
return v___x_320_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = lean_unsigned_to_nat(32u);
v___x_322_ = lean_mk_empty_array_with_capacity(v___x_321_);
v___x_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_324_ = ((size_t)5ULL);
v___x_325_ = lean_unsigned_to_nat(0u);
v___x_326_ = lean_unsigned_to_nat(32u);
v___x_327_ = lean_mk_empty_array_with_capacity(v___x_326_);
v___x_328_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__3);
v___x_329_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_329_, 0, v___x_328_);
lean_ctor_set(v___x_329_, 1, v___x_327_);
lean_ctor_set(v___x_329_, 2, v___x_325_);
lean_ctor_set(v___x_329_, 3, v___x_325_);
lean_ctor_set_usize(v___x_329_, 4, v___x_324_);
return v___x_329_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_330_ = lean_box(1);
v___x_331_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__4);
v___x_332_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__1);
v___x_333_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v___x_331_);
lean_ctor_set(v___x_333_, 2, v___x_330_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(lean_object* v_msgData_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
lean_object* v___x_338_; lean_object* v_toCold_339_; lean_object* v_env_340_; lean_object* v_options_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_338_ = lean_st_ref_get(v___y_336_);
v_toCold_339_ = lean_ctor_get(v___y_335_, 0);
v_env_340_ = lean_ctor_get(v___x_338_, 0);
lean_inc_ref(v_env_340_);
lean_dec(v___x_338_);
v_options_341_ = lean_ctor_get(v_toCold_339_, 2);
v___x_342_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__2);
v___x_343_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_341_);
v___x_344_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_344_, 0, v_env_340_);
lean_ctor_set(v___x_344_, 1, v___x_342_);
lean_ctor_set(v___x_344_, 2, v___x_343_);
lean_ctor_set(v___x_344_, 3, v_options_341_);
v___x_345_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
lean_ctor_set(v___x_345_, 1, v_msgData_334_);
v___x_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___boxed(lean_object* v_msgData_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(v_msgData_347_, v___y_348_, v___y_349_);
lean_dec(v___y_349_);
lean_dec_ref(v___y_348_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(lean_object* v_msg_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_ref_356_; lean_object* v___x_357_; lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_366_; 
v_ref_356_ = lean_ctor_get(v___y_353_, 2);
v___x_357_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(v_msg_352_, v___y_353_, v___y_354_);
v_a_358_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_366_ == 0)
{
v___x_360_ = v___x_357_;
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_357_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_362_; lean_object* v___x_364_; 
lean_inc(v_ref_356_);
v___x_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_362_, 0, v_ref_356_);
lean_ctor_set(v___x_362_, 1, v_a_358_);
if (v_isShared_361_ == 0)
{
lean_ctor_set_tag(v___x_360_, 1);
lean_ctor_set(v___x_360_, 0, v___x_362_);
v___x_364_ = v___x_360_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_362_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg___boxed(lean_object* v_msg_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v_msg_367_, v___y_368_, v___y_369_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_371_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__0));
v___x_374_ = l_Lean_stringToMessageData(v___x_373_);
return v___x_374_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__2));
v___x_377_ = l_Lean_stringToMessageData(v___x_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1(lean_object* v___x_378_, lean_object* v_decl_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v_name_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v_name_383_ = lean_ctor_get(v___x_378_, 1);
lean_inc(v_name_383_);
lean_dec_ref(v___x_378_);
v___x_384_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_385_ = l_Lean_MessageData_ofName(v_name_383_);
v___x_386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_388_, v___y_380_, v___y_381_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedAttributeImpl_default___lam__1___boxed(lean_object* v___x_390_, lean_object* v_decl_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lean_instInhabitedAttributeImpl_default___lam__1(v___x_390_, v_decl_391_, v___y_392_, v___y_393_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v_decl_391_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0(lean_object* v_00_u03b1_404_, lean_object* v_msg_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v_msg_405_, v___y_406_, v___y_407_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___boxed(lean_object* v_00_u03b1_410_, lean_object* v_msg_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0(v_00_u03b1_410_, v_msg_411_, v___y_412_, v___y_413_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
return v_res_415_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_417_ = lean_box(0);
v___x_418_ = lean_unsigned_to_nat(16u);
v___x_419_ = lean_mk_array(v___x_418_, v___x_417_);
return v___x_419_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_421_ = lean_unsigned_to_nat(0u);
v___x_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
lean_ctor_set(v___x_422_, 1, v___x_420_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_424_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_425_ = lean_st_mk_ref(v___x_424_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2____boxed(lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_();
return v_res_428_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(lean_object* v_a_429_, lean_object* v_x_430_){
_start:
{
if (lean_obj_tag(v_x_430_) == 0)
{
uint8_t v___x_431_; 
v___x_431_ = 0;
return v___x_431_;
}
else
{
lean_object* v_key_432_; lean_object* v_tail_433_; uint8_t v___x_434_; 
v_key_432_ = lean_ctor_get(v_x_430_, 0);
v_tail_433_ = lean_ctor_get(v_x_430_, 2);
v___x_434_ = lean_name_eq(v_key_432_, v_a_429_);
if (v___x_434_ == 0)
{
v_x_430_ = v_tail_433_;
goto _start;
}
else
{
return v___x_434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg___boxed(lean_object* v_a_436_, lean_object* v_x_437_){
_start:
{
uint8_t v_res_438_; lean_object* v_r_439_; 
v_res_438_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_436_, v_x_437_);
lean_dec(v_x_437_);
lean_dec(v_a_436_);
v_r_439_ = lean_box(v_res_438_);
return v_r_439_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(lean_object* v_m_440_, lean_object* v_a_441_){
_start:
{
lean_object* v_buckets_442_; lean_object* v___x_443_; uint64_t v___y_445_; 
v_buckets_442_ = lean_ctor_get(v_m_440_, 1);
v___x_443_ = lean_array_get_size(v_buckets_442_);
if (lean_obj_tag(v_a_441_) == 0)
{
uint64_t v___x_459_; 
v___x_459_ = 1723ULL;
v___y_445_ = v___x_459_;
goto v___jp_444_;
}
else
{
uint64_t v_hash_460_; 
v_hash_460_ = lean_ctor_get_uint64(v_a_441_, sizeof(void*)*2);
v___y_445_ = v_hash_460_;
goto v___jp_444_;
}
v___jp_444_:
{
uint64_t v___x_446_; uint64_t v___x_447_; uint64_t v_fold_448_; uint64_t v___x_449_; uint64_t v___x_450_; uint64_t v___x_451_; size_t v___x_452_; size_t v___x_453_; size_t v___x_454_; size_t v___x_455_; size_t v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_446_ = 32ULL;
v___x_447_ = lean_uint64_shift_right(v___y_445_, v___x_446_);
v_fold_448_ = lean_uint64_xor(v___y_445_, v___x_447_);
v___x_449_ = 16ULL;
v___x_450_ = lean_uint64_shift_right(v_fold_448_, v___x_449_);
v___x_451_ = lean_uint64_xor(v_fold_448_, v___x_450_);
v___x_452_ = lean_uint64_to_usize(v___x_451_);
v___x_453_ = lean_usize_of_nat(v___x_443_);
v___x_454_ = ((size_t)1ULL);
v___x_455_ = lean_usize_sub(v___x_453_, v___x_454_);
v___x_456_ = lean_usize_land(v___x_452_, v___x_455_);
v___x_457_ = lean_array_uget_borrowed(v_buckets_442_, v___x_456_);
v___x_458_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_441_, v___x_457_);
return v___x_458_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg___boxed(lean_object* v_m_461_, lean_object* v_a_462_){
_start:
{
uint8_t v_res_463_; lean_object* v_r_464_; 
v_res_463_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_m_461_, v_a_462_);
lean_dec(v_a_462_);
lean_dec_ref(v_m_461_);
v_r_464_ = lean_box(v_res_463_);
return v_r_464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(lean_object* v_a_465_, lean_object* v_b_466_, lean_object* v_x_467_){
_start:
{
if (lean_obj_tag(v_x_467_) == 0)
{
lean_dec(v_b_466_);
lean_dec(v_a_465_);
return v_x_467_;
}
else
{
lean_object* v_key_468_; lean_object* v_value_469_; lean_object* v_tail_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_482_; 
v_key_468_ = lean_ctor_get(v_x_467_, 0);
v_value_469_ = lean_ctor_get(v_x_467_, 1);
v_tail_470_ = lean_ctor_get(v_x_467_, 2);
v_isSharedCheck_482_ = !lean_is_exclusive(v_x_467_);
if (v_isSharedCheck_482_ == 0)
{
v___x_472_ = v_x_467_;
v_isShared_473_ = v_isSharedCheck_482_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_tail_470_);
lean_inc(v_value_469_);
lean_inc(v_key_468_);
lean_dec(v_x_467_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_482_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
uint8_t v___x_474_; 
v___x_474_ = lean_name_eq(v_key_468_, v_a_465_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; lean_object* v___x_477_; 
v___x_475_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(v_a_465_, v_b_466_, v_tail_470_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 2, v___x_475_);
v___x_477_ = v___x_472_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_key_468_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_value_469_);
lean_ctor_set(v_reuseFailAlloc_478_, 2, v___x_475_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
else
{
lean_object* v___x_480_; 
lean_dec(v_value_469_);
lean_dec(v_key_468_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 1, v_b_466_);
lean_ctor_set(v___x_472_, 0, v_a_465_);
v___x_480_ = v___x_472_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_465_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_b_466_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_tail_470_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_483_, lean_object* v_x_484_){
_start:
{
if (lean_obj_tag(v_x_484_) == 0)
{
return v_x_483_;
}
else
{
lean_object* v_key_485_; lean_object* v_value_486_; lean_object* v_tail_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_513_; 
v_key_485_ = lean_ctor_get(v_x_484_, 0);
v_value_486_ = lean_ctor_get(v_x_484_, 1);
v_tail_487_ = lean_ctor_get(v_x_484_, 2);
v_isSharedCheck_513_ = !lean_is_exclusive(v_x_484_);
if (v_isSharedCheck_513_ == 0)
{
v___x_489_ = v_x_484_;
v_isShared_490_ = v_isSharedCheck_513_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_tail_487_);
lean_inc(v_value_486_);
lean_inc(v_key_485_);
lean_dec(v_x_484_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_513_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_491_; uint64_t v___y_493_; 
v___x_491_ = lean_array_get_size(v_x_483_);
if (lean_obj_tag(v_key_485_) == 0)
{
uint64_t v___x_511_; 
v___x_511_ = 1723ULL;
v___y_493_ = v___x_511_;
goto v___jp_492_;
}
else
{
uint64_t v_hash_512_; 
v_hash_512_ = lean_ctor_get_uint64(v_key_485_, sizeof(void*)*2);
v___y_493_ = v_hash_512_;
goto v___jp_492_;
}
v___jp_492_:
{
uint64_t v___x_494_; uint64_t v___x_495_; uint64_t v_fold_496_; uint64_t v___x_497_; uint64_t v___x_498_; uint64_t v___x_499_; size_t v___x_500_; size_t v___x_501_; size_t v___x_502_; size_t v___x_503_; size_t v___x_504_; lean_object* v___x_505_; lean_object* v___x_507_; 
v___x_494_ = 32ULL;
v___x_495_ = lean_uint64_shift_right(v___y_493_, v___x_494_);
v_fold_496_ = lean_uint64_xor(v___y_493_, v___x_495_);
v___x_497_ = 16ULL;
v___x_498_ = lean_uint64_shift_right(v_fold_496_, v___x_497_);
v___x_499_ = lean_uint64_xor(v_fold_496_, v___x_498_);
v___x_500_ = lean_uint64_to_usize(v___x_499_);
v___x_501_ = lean_usize_of_nat(v___x_491_);
v___x_502_ = ((size_t)1ULL);
v___x_503_ = lean_usize_sub(v___x_501_, v___x_502_);
v___x_504_ = lean_usize_land(v___x_500_, v___x_503_);
v___x_505_ = lean_array_uget_borrowed(v_x_483_, v___x_504_);
lean_inc(v___x_505_);
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 2, v___x_505_);
v___x_507_ = v___x_489_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_key_485_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_value_486_);
lean_ctor_set(v_reuseFailAlloc_510_, 2, v___x_505_);
v___x_507_ = v_reuseFailAlloc_510_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v___x_508_; 
v___x_508_ = lean_array_uset(v_x_483_, v___x_504_, v___x_507_);
v_x_483_ = v___x_508_;
v_x_484_ = v_tail_487_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(lean_object* v_i_514_, lean_object* v_source_515_, lean_object* v_target_516_){
_start:
{
lean_object* v___x_517_; uint8_t v___x_518_; 
v___x_517_ = lean_array_get_size(v_source_515_);
v___x_518_ = lean_nat_dec_lt(v_i_514_, v___x_517_);
if (v___x_518_ == 0)
{
lean_dec_ref(v_source_515_);
lean_dec(v_i_514_);
return v_target_516_;
}
else
{
lean_object* v_es_519_; lean_object* v___x_520_; lean_object* v_source_521_; lean_object* v_target_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v_es_519_ = lean_array_fget(v_source_515_, v_i_514_);
v___x_520_ = lean_box(0);
v_source_521_ = lean_array_fset(v_source_515_, v_i_514_, v___x_520_);
v_target_522_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(v_target_516_, v_es_519_);
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = lean_nat_add(v_i_514_, v___x_523_);
lean_dec(v_i_514_);
v_i_514_ = v___x_524_;
v_source_515_ = v_source_521_;
v_target_516_ = v_target_522_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(lean_object* v_data_526_){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v_nbuckets_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_527_ = lean_array_get_size(v_data_526_);
v___x_528_ = lean_unsigned_to_nat(2u);
v_nbuckets_529_ = lean_nat_mul(v___x_527_, v___x_528_);
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = lean_box(0);
v___x_532_ = lean_mk_array(v_nbuckets_529_, v___x_531_);
v___x_533_ = lean_array_propagate_mark(v_data_526_, v___x_532_);
v___x_534_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(v___x_530_, v_data_526_, v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(lean_object* v_m_535_, lean_object* v_a_536_, lean_object* v_b_537_){
_start:
{
lean_object* v_size_538_; lean_object* v_buckets_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_585_; 
v_size_538_ = lean_ctor_get(v_m_535_, 0);
v_buckets_539_ = lean_ctor_get(v_m_535_, 1);
v_isSharedCheck_585_ = !lean_is_exclusive(v_m_535_);
if (v_isSharedCheck_585_ == 0)
{
v___x_541_ = v_m_535_;
v_isShared_542_ = v_isSharedCheck_585_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_buckets_539_);
lean_inc(v_size_538_);
lean_dec(v_m_535_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_585_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; uint64_t v___y_545_; 
v___x_543_ = lean_array_get_size(v_buckets_539_);
if (lean_obj_tag(v_a_536_) == 0)
{
uint64_t v___x_583_; 
v___x_583_ = 1723ULL;
v___y_545_ = v___x_583_;
goto v___jp_544_;
}
else
{
uint64_t v_hash_584_; 
v_hash_584_ = lean_ctor_get_uint64(v_a_536_, sizeof(void*)*2);
v___y_545_ = v_hash_584_;
goto v___jp_544_;
}
v___jp_544_:
{
uint64_t v___x_546_; uint64_t v___x_547_; uint64_t v_fold_548_; uint64_t v___x_549_; uint64_t v___x_550_; uint64_t v___x_551_; size_t v___x_552_; size_t v___x_553_; size_t v___x_554_; size_t v___x_555_; size_t v___x_556_; lean_object* v_bkt_557_; uint8_t v___x_558_; 
v___x_546_ = 32ULL;
v___x_547_ = lean_uint64_shift_right(v___y_545_, v___x_546_);
v_fold_548_ = lean_uint64_xor(v___y_545_, v___x_547_);
v___x_549_ = 16ULL;
v___x_550_ = lean_uint64_shift_right(v_fold_548_, v___x_549_);
v___x_551_ = lean_uint64_xor(v_fold_548_, v___x_550_);
v___x_552_ = lean_uint64_to_usize(v___x_551_);
v___x_553_ = lean_usize_of_nat(v___x_543_);
v___x_554_ = ((size_t)1ULL);
v___x_555_ = lean_usize_sub(v___x_553_, v___x_554_);
v___x_556_ = lean_usize_land(v___x_552_, v___x_555_);
v_bkt_557_ = lean_array_uget_borrowed(v_buckets_539_, v___x_556_);
v___x_558_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_536_, v_bkt_557_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; lean_object* v_size_x27_560_; lean_object* v___x_561_; lean_object* v_buckets_x27_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_559_ = lean_unsigned_to_nat(1u);
v_size_x27_560_ = lean_nat_add(v_size_538_, v___x_559_);
lean_dec(v_size_538_);
lean_inc(v_bkt_557_);
v___x_561_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_561_, 0, v_a_536_);
lean_ctor_set(v___x_561_, 1, v_b_537_);
lean_ctor_set(v___x_561_, 2, v_bkt_557_);
v_buckets_x27_562_ = lean_array_uset(v_buckets_539_, v___x_556_, v___x_561_);
v___x_563_ = lean_unsigned_to_nat(4u);
v___x_564_ = lean_nat_mul(v_size_x27_560_, v___x_563_);
v___x_565_ = lean_unsigned_to_nat(3u);
v___x_566_ = lean_nat_div(v___x_564_, v___x_565_);
lean_dec(v___x_564_);
v___x_567_ = lean_array_get_size(v_buckets_x27_562_);
v___x_568_ = lean_nat_dec_le(v___x_566_, v___x_567_);
lean_dec(v___x_566_);
if (v___x_568_ == 0)
{
lean_object* v_val_569_; lean_object* v___x_571_; 
v_val_569_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(v_buckets_x27_562_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 1, v_val_569_);
lean_ctor_set(v___x_541_, 0, v_size_x27_560_);
v___x_571_ = v___x_541_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_size_x27_560_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_val_569_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
else
{
lean_object* v___x_574_; 
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 1, v_buckets_x27_562_);
lean_ctor_set(v___x_541_, 0, v_size_x27_560_);
v___x_574_ = v___x_541_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_size_x27_560_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_buckets_x27_562_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
else
{
lean_object* v___x_576_; lean_object* v_buckets_x27_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_581_; 
lean_inc(v_bkt_557_);
v___x_576_ = lean_box(0);
v_buckets_x27_577_ = lean_array_uset(v_buckets_539_, v___x_556_, v___x_576_);
v___x_578_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(v_a_536_, v_b_537_, v_bkt_557_);
v___x_579_ = lean_array_uset(v_buckets_x27_577_, v___x_556_, v___x_578_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 1, v___x_579_);
v___x_581_ = v___x_541_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_size_538_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v___x_579_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_registerBuiltinAttribute___closed__1(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__0));
v___x_588_ = lean_mk_io_user_error(v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute(lean_object* v_attr_591_){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v_toAttributeImplCore_595_; lean_object* v_name_596_; uint8_t v___x_597_; 
v___x_593_ = l_Lean_attributeMapRef;
v___x_594_ = lean_st_ref_get(v___x_593_);
v_toAttributeImplCore_595_ = lean_ctor_get(v_attr_591_, 0);
v_name_596_ = lean_ctor_get(v_toAttributeImplCore_595_, 1);
lean_inc(v_name_596_);
v___x_597_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v___x_594_, v_name_596_);
lean_dec(v___x_594_);
if (v___x_597_ == 0)
{
uint8_t v___x_598_; 
v___x_598_ = l_Lean_initializing();
if (v___x_598_ == 0)
{
lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec(v_name_596_);
lean_dec_ref(v_attr_591_);
v___x_599_ = lean_obj_once(&l_Lean_registerBuiltinAttribute___closed__1, &l_Lean_registerBuiltinAttribute___closed__1_once, _init_l_Lean_registerBuiltinAttribute___closed__1);
v___x_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
else
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_601_ = lean_st_ref_take(v___x_593_);
v___x_602_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v___x_601_, v_name_596_, v_attr_591_);
v___x_603_ = lean_st_ref_put(v___x_593_, v___x_602_);
v___x_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
return v___x_604_;
}
}
else
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
lean_dec_ref(v_attr_591_);
v___x_605_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__2));
v___x_606_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_596_, v___x_597_);
v___x_607_ = lean_string_append(v___x_605_, v___x_606_);
lean_dec_ref(v___x_606_);
v___x_608_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__3));
v___x_609_ = lean_string_append(v___x_607_, v___x_608_);
v___x_610_ = lean_mk_io_user_error(v___x_609_);
v___x_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
return v___x_611_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerBuiltinAttribute___boxed(lean_object* v_attr_612_, lean_object* v___y_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lean_registerBuiltinAttribute(v_attr_612_);
return v_res_614_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0(lean_object* v_00_u03b2_615_, lean_object* v_m_616_, lean_object* v_a_617_){
_start:
{
uint8_t v___x_618_; 
v___x_618_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_m_616_, v_a_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___boxed(lean_object* v_00_u03b2_619_, lean_object* v_m_620_, lean_object* v_a_621_){
_start:
{
uint8_t v_res_622_; lean_object* v_r_623_; 
v_res_622_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0(v_00_u03b2_619_, v_m_620_, v_a_621_);
lean_dec(v_a_621_);
lean_dec_ref(v_m_620_);
v_r_623_ = lean_box(v_res_622_);
return v_r_623_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1(lean_object* v_00_u03b2_624_, lean_object* v_m_625_, lean_object* v_a_626_, lean_object* v_b_627_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_m_625_, v_a_626_, v_b_627_);
return v___x_628_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0(lean_object* v_00_u03b2_629_, lean_object* v_a_630_, lean_object* v_x_631_){
_start:
{
uint8_t v___x_632_; 
v___x_632_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___redArg(v_a_630_, v_x_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0___boxed(lean_object* v_00_u03b2_633_, lean_object* v_a_634_, lean_object* v_x_635_){
_start:
{
uint8_t v_res_636_; lean_object* v_r_637_; 
v_res_636_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0_spec__0(v_00_u03b2_633_, v_a_634_, v_x_635_);
lean_dec(v_x_635_);
lean_dec(v_a_634_);
v_r_637_ = lean_box(v_res_636_);
return v_r_637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2(lean_object* v_00_u03b2_638_, lean_object* v_data_639_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2___redArg(v_data_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3(lean_object* v_00_u03b2_641_, lean_object* v_a_642_, lean_object* v_b_643_, lean_object* v_x_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__3___redArg(v_a_642_, v_b_643_, v_x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_646_, lean_object* v_i_647_, lean_object* v_source_648_, lean_object* v_target_649_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3___redArg(v_i_647_, v_source_648_, v_target_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_651_, lean_object* v_x_652_, lean_object* v_x_653_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1_spec__2_spec__3_spec__4___redArg(v_x_652_, v_x_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(lean_object* v_ref_655_, lean_object* v_msg_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v_toCold_660_; lean_object* v_currRecDepth_661_; lean_object* v_ref_662_; uint8_t v_diag_663_; uint8_t v_suppressElabErrors_664_; lean_object* v_ref_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_toCold_660_ = lean_ctor_get(v___y_657_, 0);
v_currRecDepth_661_ = lean_ctor_get(v___y_657_, 1);
v_ref_662_ = lean_ctor_get(v___y_657_, 2);
v_diag_663_ = lean_ctor_get_uint8(v___y_657_, sizeof(void*)*3);
v_suppressElabErrors_664_ = lean_ctor_get_uint8(v___y_657_, sizeof(void*)*3 + 1);
v_ref_665_ = l_Lean_replaceRef(v_ref_655_, v_ref_662_);
lean_inc(v_currRecDepth_661_);
lean_inc_ref(v_toCold_660_);
v___x_666_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_666_, 0, v_toCold_660_);
lean_ctor_set(v___x_666_, 1, v_currRecDepth_661_);
lean_ctor_set(v___x_666_, 2, v_ref_665_);
lean_ctor_set_uint8(v___x_666_, sizeof(void*)*3, v_diag_663_);
lean_ctor_set_uint8(v___x_666_, sizeof(void*)*3 + 1, v_suppressElabErrors_664_);
v___x_667_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v_msg_656_, v___x_666_, v___y_658_);
lean_dec_ref_known(v___x_666_, 3);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg___boxed(lean_object* v_ref_668_, lean_object* v_msg_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_ref_668_, v_msg_669_, v___y_670_, v___y_671_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v_ref_668_);
return v_res_673_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_ensureNoArgs___closed__4(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__3));
v___x_683_ = l_Lean_stringToMessageData(v___x_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object* v_stx_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
lean_object* v___x_694_; uint8_t v___y_705_; lean_object* v___x_711_; uint8_t v___x_712_; 
lean_inc(v_stx_690_);
v___x_694_ = l_Lean_Syntax_getKind(v_stx_690_);
v___x_711_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__6));
v___x_712_ = lean_name_eq(v___x_694_, v___x_711_);
if (v___x_712_ == 0)
{
v___y_705_ = v___x_712_;
goto v___jp_704_;
}
else
{
lean_object* v___x_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_713_ = lean_unsigned_to_nat(1u);
v___x_714_ = l_Lean_Syntax_getArg(v_stx_690_, v___x_713_);
v___x_715_ = l_Lean_Syntax_isNone(v___x_714_);
lean_dec(v___x_714_);
v___y_705_ = v___x_715_;
goto v___jp_704_;
}
v___jp_695_:
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__2));
v___x_697_ = lean_name_eq(v___x_694_, v___x_696_);
lean_dec(v___x_694_);
if (v___x_697_ == 0)
{
if (lean_obj_tag(v_stx_690_) == 0)
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = lean_box(0);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
else
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = lean_obj_once(&l_Lean_Attribute_Builtin_ensureNoArgs___closed__4, &l_Lean_Attribute_Builtin_ensureNoArgs___closed__4_once, _init_l_Lean_Attribute_Builtin_ensureNoArgs___closed__4);
v___x_701_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_690_, v___x_700_, v___y_691_, v___y_692_);
lean_dec(v_stx_690_);
return v___x_701_;
}
}
else
{
lean_object* v___x_702_; lean_object* v___x_703_; 
lean_dec(v_stx_690_);
v___x_702_ = lean_box(0);
v___x_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
return v___x_703_;
}
}
v___jp_704_:
{
if (v___y_705_ == 0)
{
goto v___jp_695_;
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_706_ = lean_unsigned_to_nat(2u);
v___x_707_ = l_Lean_Syntax_getArg(v_stx_690_, v___x_706_);
v___x_708_ = l_Lean_Syntax_isNone(v___x_707_);
lean_dec(v___x_707_);
if (v___x_708_ == 0)
{
goto v___jp_695_;
}
else
{
lean_object* v___x_709_; lean_object* v___x_710_; 
lean_dec(v___x_694_);
lean_dec(v_stx_690_);
v___x_709_ = lean_box(0);
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
return v___x_710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_ensureNoArgs___boxed(lean_object* v_stx_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_716_, v___y_717_, v___y_718_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0(lean_object* v_00_u03b1_721_, lean_object* v_ref_722_, lean_object* v_msg_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_ref_722_, v_msg_723_, v___y_724_, v___y_725_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___boxed(lean_object* v_00_u03b1_728_, lean_object* v_ref_729_, lean_object* v_msg_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0(v_00_u03b1_728_, v_ref_729_, v_msg_730_, v___y_731_, v___y_732_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
lean_dec(v_ref_729_);
return v_res_734_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_getIdent_x3f___closed__5(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent_x3f___closed__4));
v___x_749_ = l_Lean_stringToMessageData(v___x_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f(lean_object* v_stx_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; 
lean_inc(v_stx_750_);
v___x_762_ = l_Lean_Syntax_getKind(v_stx_750_);
v___x_763_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__6));
v___x_764_ = lean_name_eq(v___x_762_, v___x_763_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; uint8_t v___x_766_; 
v___x_765_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent_x3f___closed__1));
v___x_766_ = lean_name_eq(v___x_762_, v___x_765_);
if (v___x_766_ == 0)
{
lean_object* v___x_767_; uint8_t v___x_768_; 
v___x_767_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent_x3f___closed__3));
v___x_768_ = lean_name_eq(v___x_762_, v___x_767_);
lean_dec(v___x_762_);
if (v___x_768_ == 0)
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = lean_obj_once(&l_Lean_Attribute_Builtin_getIdent_x3f___closed__5, &l_Lean_Attribute_Builtin_getIdent_x3f___closed__5_once, _init_l_Lean_Attribute_Builtin_getIdent_x3f___closed__5);
v___x_770_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_750_, v___x_769_, v___y_751_, v___y_752_);
lean_dec(v_stx_750_);
return v___x_770_;
}
else
{
goto v___jp_754_;
}
}
else
{
lean_dec(v___x_762_);
goto v___jp_754_;
}
}
else
{
lean_object* v___x_771_; lean_object* v___x_772_; uint8_t v___x_773_; 
lean_dec(v___x_762_);
v___x_771_ = lean_unsigned_to_nat(1u);
v___x_772_ = l_Lean_Syntax_getArg(v_stx_750_, v___x_771_);
lean_dec(v_stx_750_);
v___x_773_ = l_Lean_Syntax_isNone(v___x_772_);
if (v___x_773_ == 0)
{
if (v___x_764_ == 0)
{
lean_dec(v___x_772_);
goto v___jp_759_;
}
else
{
lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_774_ = lean_unsigned_to_nat(0u);
v___x_775_ = l_Lean_Syntax_getArg(v___x_772_, v___x_774_);
lean_dec(v___x_772_);
v___x_776_ = l_Lean_Syntax_isIdent(v___x_775_);
if (v___x_776_ == 0)
{
lean_dec(v___x_775_);
goto v___jp_759_;
}
else
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_777_, 0, v___x_775_);
v___x_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_778_, 0, v___x_777_);
return v___x_778_;
}
}
}
else
{
lean_dec(v___x_772_);
goto v___jp_759_;
}
}
v___jp_754_:
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_755_ = lean_unsigned_to_nat(1u);
v___x_756_ = l_Lean_Syntax_getArg(v_stx_750_, v___x_755_);
lean_dec(v_stx_750_);
v___x_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
v___x_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
v___jp_759_:
{
lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_760_ = lean_box(0);
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent_x3f___boxed(lean_object* v_stx_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lean_Attribute_Builtin_getIdent_x3f(v_stx_779_, v___y_780_, v___y_781_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
return v_res_783_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_getIdent___closed__1(void){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = ((lean_object*)(l_Lean_Attribute_Builtin_getIdent___closed__0));
v___x_786_ = l_Lean_stringToMessageData(v___x_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object* v_stx_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v___x_791_; 
lean_inc(v_stx_787_);
v___x_791_ = l_Lean_Attribute_Builtin_getIdent_x3f(v_stx_787_, v___y_788_, v___y_789_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_805_; 
v_a_792_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_805_ == 0)
{
v___x_794_ = v___x_791_;
v_isShared_795_ = v_isSharedCheck_805_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_791_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_805_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
if (lean_obj_tag(v_a_792_) == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
lean_del_object(v___x_794_);
v___x_796_ = lean_obj_once(&l_Lean_Attribute_Builtin_getIdent___closed__1, &l_Lean_Attribute_Builtin_getIdent___closed__1_once, _init_l_Lean_Attribute_Builtin_getIdent___closed__1);
lean_inc(v_stx_787_);
v___x_797_ = l_Lean_MessageData_ofSyntax(v_stx_787_);
v___x_798_ = l_Lean_indentD(v___x_797_);
v___x_799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_796_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_787_, v___x_799_, v___y_788_, v___y_789_);
lean_dec(v_stx_787_);
return v___x_800_;
}
else
{
lean_object* v_val_801_; lean_object* v___x_803_; 
lean_dec(v_stx_787_);
v_val_801_ = lean_ctor_get(v_a_792_, 0);
lean_inc(v_val_801_);
lean_dec_ref_known(v_a_792_, 1);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v_val_801_);
v___x_803_ = v___x_794_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_val_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
else
{
lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_813_; 
lean_dec(v_stx_787_);
v_a_806_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_813_ == 0)
{
v___x_808_ = v___x_791_;
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_dec(v___x_791_);
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
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_806_);
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
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getIdent___boxed(lean_object* v_stx_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_Attribute_Builtin_getIdent(v_stx_814_, v___y_815_, v___y_816_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f(lean_object* v_stx_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_Lean_Attribute_Builtin_getIdent_x3f(v_stx_819_, v___y_820_, v___y_821_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_844_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_844_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_844_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_844_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
if (lean_obj_tag(v_a_824_) == 0)
{
lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_828_ = lean_box(0);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 0, v___x_828_);
v___x_830_ = v___x_826_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
else
{
lean_object* v_val_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_843_; 
v_val_832_ = lean_ctor_get(v_a_824_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v_a_824_);
if (v_isSharedCheck_843_ == 0)
{
v___x_834_ = v_a_824_;
v_isShared_835_ = v_isSharedCheck_843_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_val_832_);
lean_dec(v_a_824_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_843_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_836_; lean_object* v___x_838_; 
v___x_836_ = l_Lean_Syntax_getId(v_val_832_);
lean_dec(v_val_832_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 0, v___x_836_);
v___x_838_ = v___x_834_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_836_);
v___x_838_ = v_reuseFailAlloc_842_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
lean_object* v___x_840_; 
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 0, v___x_838_);
v___x_840_ = v___x_826_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v___x_838_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
}
}
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
v_a_845_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_823_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_823_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId_x3f___boxed(lean_object* v_stx_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lean_Attribute_Builtin_getId_x3f(v_stx_853_, v___y_854_, v___y_855_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId(lean_object* v_stx_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l_Lean_Attribute_Builtin_getIdent(v_stx_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_871_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_871_ == 0)
{
v___x_865_ = v___x_862_;
v_isShared_866_ = v_isSharedCheck_871_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_862_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_871_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_867_ = l_Lean_Syntax_getId(v_a_863_);
lean_dec(v_a_863_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v___x_867_);
v___x_869_ = v___x_865_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v___x_867_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
v_a_872_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_862_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_862_);
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
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
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
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getId___boxed(lean_object* v_stx_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Lean_Attribute_Builtin_getId(v_stx_880_, v___y_881_, v___y_882_);
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
return v_res_884_;
}
}
static lean_object* _init_l_Lean_getAttrParamOptPrio___closed__1(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = ((lean_object*)(l_Lean_getAttrParamOptPrio___closed__0));
v___x_887_ = l_Lean_stringToMessageData(v___x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio(lean_object* v_optPrioStx_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
uint8_t v___x_892_; 
v___x_892_ = l_Lean_Syntax_isNone(v_optPrioStx_888_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = lean_unsigned_to_nat(0u);
v___x_894_ = l_Lean_Syntax_getArg(v_optPrioStx_888_, v___x_893_);
v___x_895_ = l_Lean_Syntax_isNatLit_x3f(v___x_894_);
lean_dec(v___x_894_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_896_ = lean_obj_once(&l_Lean_getAttrParamOptPrio___closed__1, &l_Lean_getAttrParamOptPrio___closed__1_once, _init_l_Lean_getAttrParamOptPrio___closed__1);
lean_inc(v_optPrioStx_888_);
v___x_897_ = l_Lean_MessageData_ofSyntax(v_optPrioStx_888_);
v___x_898_ = l_Lean_indentD(v___x_897_);
v___x_899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_896_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_optPrioStx_888_, v___x_899_, v___y_889_, v___y_890_);
lean_dec(v_optPrioStx_888_);
return v___x_900_;
}
else
{
lean_object* v_val_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_908_; 
lean_dec(v_optPrioStx_888_);
v_val_901_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_908_ == 0)
{
v___x_903_ = v___x_895_;
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_val_901_);
lean_dec(v___x_895_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_906_; 
if (v_isShared_904_ == 0)
{
lean_ctor_set_tag(v___x_903_, 0);
v___x_906_ = v___x_903_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_val_901_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
else
{
lean_object* v___x_909_; lean_object* v___x_910_; 
lean_dec(v_optPrioStx_888_);
v___x_909_ = lean_unsigned_to_nat(1000u);
v___x_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
return v___x_910_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAttrParamOptPrio___boxed(lean_object* v_optPrioStx_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lean_getAttrParamOptPrio(v_optPrioStx_911_, v___y_912_, v___y_913_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
return v_res_915_;
}
}
static lean_object* _init_l_Lean_Attribute_Builtin_getPrio___closed__1(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = ((lean_object*)(l_Lean_Attribute_Builtin_getPrio___closed__0));
v___x_918_ = l_Lean_stringToMessageData(v___x_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio(lean_object* v_stx_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
lean_inc(v_stx_919_);
v___x_923_ = l_Lean_Syntax_getKind(v_stx_919_);
v___x_924_ = ((lean_object*)(l_Lean_Attribute_Builtin_ensureNoArgs___closed__6));
v___x_925_ = lean_name_eq(v___x_923_, v___x_924_);
lean_dec(v___x_923_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_926_ = lean_obj_once(&l_Lean_Attribute_Builtin_getPrio___closed__1, &l_Lean_Attribute_Builtin_getPrio___closed__1_once, _init_l_Lean_Attribute_Builtin_getPrio___closed__1);
lean_inc(v_stx_919_);
v___x_927_ = l_Lean_MessageData_ofSyntax(v_stx_919_);
v___x_928_ = l_Lean_indentD(v___x_927_);
v___x_929_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_926_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
v___x_930_ = l_Lean_throwErrorAt___at___00Lean_Attribute_Builtin_ensureNoArgs_spec__0___redArg(v_stx_919_, v___x_929_, v___y_920_, v___y_921_);
lean_dec(v_stx_919_);
return v___x_930_;
}
else
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_931_ = lean_unsigned_to_nat(1u);
v___x_932_ = l_Lean_Syntax_getArg(v_stx_919_, v___x_931_);
lean_dec(v_stx_919_);
v___x_933_ = l_Lean_getAttrParamOptPrio(v___x_932_, v___y_920_, v___y_921_);
return v___x_933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_Builtin_getPrio___boxed(lean_object* v_stx_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lean_Attribute_Builtin_getPrio(v_stx_934_, v___y_935_, v___y_936_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
return v_res_938_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__1(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__0));
v___x_941_ = l_Lean_stringToMessageData(v___x_940_);
return v___x_941_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__3(void){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__2));
v___x_944_ = l_Lean_stringToMessageData(v___x_943_);
return v___x_944_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5(void){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_947_ = l_Lean_stringToMessageData(v___x_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg(lean_object* v_inst_948_, lean_object* v_inst_949_, lean_object* v_name_950_, uint8_t v_kind_951_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___y_958_; 
v___x_952_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__1);
v___x_953_ = l_Lean_MessageData_ofName(v_name_950_);
v___x_954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
v___x_955_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__3);
v___x_956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_954_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
switch(v_kind_951_)
{
case 0:
{
lean_object* v___x_965_; 
v___x_965_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__0));
v___y_958_ = v___x_965_;
goto v___jp_957_;
}
case 1:
{
lean_object* v___x_966_; 
v___x_966_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__1));
v___y_958_ = v___x_966_;
goto v___jp_957_;
}
default: 
{
lean_object* v___x_967_; 
v___x_967_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__2));
v___y_958_ = v___x_967_;
goto v___jp_957_;
}
}
v___jp_957_:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
lean_inc_ref(v___y_958_);
v___x_959_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_959_, 0, v___y_958_);
v___x_960_ = l_Lean_MessageData_ofFormat(v___x_959_);
v___x_961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_956_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
v___x_962_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_961_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
v___x_964_ = l_Lean_throwError___redArg(v_inst_948_, v_inst_949_, v___x_963_);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___redArg___boxed(lean_object* v_inst_968_, lean_object* v_inst_969_, lean_object* v_name_970_, lean_object* v_kind_971_){
_start:
{
uint8_t v_kind_boxed_972_; lean_object* v_res_973_; 
v_kind_boxed_972_ = lean_unbox(v_kind_971_);
v_res_973_ = l_Lean_throwAttrMustBeGlobal___redArg(v_inst_968_, v_inst_969_, v_name_970_, v_kind_boxed_972_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal(lean_object* v_m_974_, lean_object* v_inst_975_, lean_object* v_inst_976_, lean_object* v_00_u03b1_977_, lean_object* v_name_978_, uint8_t v_kind_979_){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = l_Lean_throwAttrMustBeGlobal___redArg(v_inst_975_, v_inst_976_, v_name_978_, v_kind_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___boxed(lean_object* v_m_981_, lean_object* v_inst_982_, lean_object* v_inst_983_, lean_object* v_00_u03b1_984_, lean_object* v_name_985_, lean_object* v_kind_986_){
_start:
{
uint8_t v_kind_boxed_987_; lean_object* v_res_988_; 
v_kind_boxed_987_ = lean_unbox(v_kind_986_);
v_res_988_ = l_Lean_throwAttrMustBeGlobal(v_m_981_, v_inst_982_, v_inst_983_, v_00_u03b1_984_, v_name_985_, v_kind_boxed_987_);
return v_res_988_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1(void){
_start:
{
lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_990_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___redArg___closed__0));
v___x_991_ = l_Lean_stringToMessageData(v___x_990_);
return v___x_991_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3(void){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___redArg___closed__2));
v___x_994_ = l_Lean_stringToMessageData(v___x_993_);
return v___x_994_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__5(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___redArg___closed__4));
v___x_997_ = l_Lean_stringToMessageData(v___x_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___redArg(lean_object* v_inst_998_, lean_object* v_inst_999_, lean_object* v_attrName_1000_, lean_object* v_declName_1001_){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; uint8_t v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1002_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1003_ = l_Lean_MessageData_ofName(v_attrName_1000_);
v___x_1004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1002_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = 0;
v___x_1008_ = l_Lean_MessageData_ofConstName(v_declName_1001_, v___x_1007_);
v___x_1009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1006_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__5);
v___x_1011_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = l_Lean_throwError___redArg(v_inst_998_, v_inst_999_, v___x_1011_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule(lean_object* v_m_1013_, lean_object* v_inst_1014_, lean_object* v_inst_1015_, lean_object* v_00_u03b1_1016_, lean_object* v_attrName_1017_, lean_object* v_declName_1018_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l_Lean_throwAttrDeclInImportedModule___redArg(v_inst_1014_, v_inst_1015_, v_attrName_1017_, v_declName_1018_);
return v___x_1019_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___redArg___closed__0));
v___x_1022_ = l_Lean_stringToMessageData(v___x_1021_);
return v___x_1022_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___redArg___closed__2));
v___x_1025_ = l_Lean_stringToMessageData(v___x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___redArg(lean_object* v_inst_1026_, lean_object* v_inst_1027_, lean_object* v_attrName_1028_, lean_object* v_declName_1029_, lean_object* v_asyncPrefix_x3f_1030_){
_start:
{
lean_object* v___y_1032_; 
if (lean_obj_tag(v_asyncPrefix_x3f_1030_) == 0)
{
lean_object* v___x_1045_; 
v___x_1045_ = l_Lean_MessageData_nil;
v___y_1032_ = v___x_1045_;
goto v___jp_1031_;
}
else
{
lean_object* v_val_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v_val_1046_ = lean_ctor_get(v_asyncPrefix_x3f_1030_, 0);
lean_inc(v_val_1046_);
lean_dec_ref_known(v_asyncPrefix_x3f_1030_, 1);
v___x_1047_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3);
v___x_1048_ = l_Lean_MessageData_ofName(v_val_1046_);
v___x_1049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1047_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_1051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___y_1032_ = v___x_1051_;
goto v___jp_1031_;
}
v___jp_1031_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; uint8_t v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1033_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1034_ = l_Lean_MessageData_ofName(v_attrName_1028_);
v___x_1035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1033_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = 0;
v___x_1039_ = l_Lean_MessageData_ofConstName(v_declName_1029_, v___x_1038_);
v___x_1040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1037_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1);
v___x_1042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1040_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
lean_ctor_set(v___x_1043_, 1, v___y_1032_);
v___x_1044_ = l_Lean_throwError___redArg(v_inst_1026_, v_inst_1027_, v___x_1043_);
return v___x_1044_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx(lean_object* v_m_1052_, lean_object* v_inst_1053_, lean_object* v_inst_1054_, lean_object* v_00_u03b1_1055_, lean_object* v_attrName_1056_, lean_object* v_declName_1057_, lean_object* v_asyncPrefix_x3f_1058_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Lean_throwAttrNotInAsyncCtx___redArg(v_inst_1053_, v_inst_1054_, v_attrName_1056_, v_declName_1057_, v_asyncPrefix_x3f_1058_);
return v___x_1059_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__0));
v___x_1062_ = l_Lean_stringToMessageData(v___x_1061_);
return v___x_1062_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__2));
v___x_1065_ = l_Lean_stringToMessageData(v___x_1064_);
return v___x_1065_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5(void){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__4));
v___x_1068_ = l_Lean_stringToMessageData(v___x_1067_);
return v___x_1068_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7(void){
_start:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__6));
v___x_1071_ = l_Lean_stringToMessageData(v___x_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___redArg(lean_object* v_inst_1072_, lean_object* v_inst_1073_, lean_object* v_attrName_1074_, lean_object* v_declName_1075_, lean_object* v_givenType_1076_, lean_object* v_expectedType_1077_){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1078_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1079_ = l_Lean_MessageData_ofName(v_attrName_1074_);
lean_inc_ref(v___x_1079_);
v___x_1080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1078_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1);
v___x_1082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = 0;
v___x_1084_ = l_Lean_MessageData_ofConstName(v_declName_1075_, v___x_1083_);
v___x_1085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1082_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__3);
v___x_1087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = l_Lean_indentExpr(v_givenType_1076_);
v___x_1089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1087_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__5);
v___x_1091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
lean_ctor_set(v___x_1092_, 1, v___x_1079_);
v___x_1093_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__7);
v___x_1094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = l_Lean_indentExpr(v_expectedType_1077_);
v___x_1096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = l_Lean_throwError___redArg(v_inst_1072_, v_inst_1073_, v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType(lean_object* v_m_1098_, lean_object* v_inst_1099_, lean_object* v_inst_1100_, lean_object* v_00_u03b1_1101_, lean_object* v_attrName_1102_, lean_object* v_declName_1103_, lean_object* v_givenType_1104_, lean_object* v_expectedType_1105_){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = l_Lean_throwAttrDeclNotOfExpectedType___redArg(v_inst_1099_, v_inst_1100_, v_attrName_1102_, v_declName_1103_, v_givenType_1104_, v_expectedType_1105_);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(lean_object* v_constName_1107_, uint8_t v_skipRealize_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___x_1111_; lean_object* v_env_1112_; uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1111_ = lean_st_ref_get(v___y_1109_);
v_env_1112_ = lean_ctor_get(v___x_1111_, 0);
lean_inc_ref(v_env_1112_);
lean_dec(v___x_1111_);
v___x_1113_ = l_Lean_Environment_contains(v_env_1112_, v_constName_1107_, v_skipRealize_1108_);
v___x_1114_ = lean_box(v___x_1113_);
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg___boxed(lean_object* v_constName_1116_, lean_object* v_skipRealize_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
uint8_t v_skipRealize_boxed_1120_; lean_object* v_res_1121_; 
v_skipRealize_boxed_1120_ = lean_unbox(v_skipRealize_1117_);
v_res_1121_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(v_constName_1116_, v_skipRealize_boxed_1120_, v___y_1118_);
lean_dec(v___y_1118_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1(lean_object* v_constName_1122_, uint8_t v_skipRealize_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(v_constName_1122_, v_skipRealize_1123_, v___y_1125_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___boxed(lean_object* v_constName_1128_, lean_object* v_skipRealize_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
uint8_t v_skipRealize_boxed_1133_; lean_object* v_res_1134_; 
v_skipRealize_boxed_1133_ = lean_unbox(v_skipRealize_1129_);
v_res_1134_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1(v_constName_1128_, v_skipRealize_boxed_1133_, v___y_1130_, v___y_1131_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(lean_object* v___y_1135_, uint8_t v_isExporting_1136_, lean_object* v___x_1137_, lean_object* v_a_x3f_1138_){
_start:
{
lean_object* v___x_1140_; lean_object* v_env_1141_; lean_object* v_nextMacroScope_1142_; lean_object* v_ngen_1143_; lean_object* v_auxDeclNGen_1144_; lean_object* v_traceState_1145_; lean_object* v_messages_1146_; lean_object* v_infoState_1147_; lean_object* v_snapshotTasks_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1159_; 
v___x_1140_ = lean_st_ref_take(v___y_1135_);
v_env_1141_ = lean_ctor_get(v___x_1140_, 0);
v_nextMacroScope_1142_ = lean_ctor_get(v___x_1140_, 1);
v_ngen_1143_ = lean_ctor_get(v___x_1140_, 2);
v_auxDeclNGen_1144_ = lean_ctor_get(v___x_1140_, 3);
v_traceState_1145_ = lean_ctor_get(v___x_1140_, 4);
v_messages_1146_ = lean_ctor_get(v___x_1140_, 6);
v_infoState_1147_ = lean_ctor_get(v___x_1140_, 7);
v_snapshotTasks_1148_ = lean_ctor_get(v___x_1140_, 8);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1159_ == 0)
{
lean_object* v_unused_1160_; 
v_unused_1160_ = lean_ctor_get(v___x_1140_, 5);
lean_dec(v_unused_1160_);
v___x_1150_ = v___x_1140_;
v_isShared_1151_ = v_isSharedCheck_1159_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_snapshotTasks_1148_);
lean_inc(v_infoState_1147_);
lean_inc(v_messages_1146_);
lean_inc(v_traceState_1145_);
lean_inc(v_auxDeclNGen_1144_);
lean_inc(v_ngen_1143_);
lean_inc(v_nextMacroScope_1142_);
lean_inc(v_env_1141_);
lean_dec(v___x_1140_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1159_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1155_; 
v___x_1152_ = lean_box(0);
v___x_1153_ = l_Lean_Environment_setExporting(v_env_1141_, v_isExporting_1136_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 5, v___x_1137_);
lean_ctor_set(v___x_1150_, 0, v___x_1153_);
v___x_1155_ = v___x_1150_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v___x_1153_);
lean_ctor_set(v_reuseFailAlloc_1158_, 1, v_nextMacroScope_1142_);
lean_ctor_set(v_reuseFailAlloc_1158_, 2, v_ngen_1143_);
lean_ctor_set(v_reuseFailAlloc_1158_, 3, v_auxDeclNGen_1144_);
lean_ctor_set(v_reuseFailAlloc_1158_, 4, v_traceState_1145_);
lean_ctor_set(v_reuseFailAlloc_1158_, 5, v___x_1137_);
lean_ctor_set(v_reuseFailAlloc_1158_, 6, v_messages_1146_);
lean_ctor_set(v_reuseFailAlloc_1158_, 7, v_infoState_1147_);
lean_ctor_set(v_reuseFailAlloc_1158_, 8, v_snapshotTasks_1148_);
v___x_1155_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = lean_st_ref_put(v___y_1135_, v___x_1155_);
v___x_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1152_);
return v___x_1157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0___boxed(lean_object* v___y_1161_, lean_object* v_isExporting_1162_, lean_object* v___x_1163_, lean_object* v_a_x3f_1164_, lean_object* v___y_1165_){
_start:
{
uint8_t v_isExporting_boxed_1166_; lean_object* v_res_1167_; 
v_isExporting_boxed_1166_ = lean_unbox(v_isExporting_1162_);
v_res_1167_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(v___y_1161_, v_isExporting_boxed_1166_, v___x_1163_, v_a_x3f_1164_);
lean_dec(v_a_x3f_1164_);
lean_dec(v___y_1161_);
return v_res_1167_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0___closed__0);
v___x_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
return v___x_1169_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__0);
v___x_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(lean_object* v_x_1172_, uint8_t v_isExporting_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_1177_; lean_object* v_env_1178_; lean_object* v___x_1179_; uint8_t v_isModule_1180_; 
v___x_1177_ = lean_st_ref_get(v___y_1175_);
v_env_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc_ref(v_env_1178_);
lean_dec(v___x_1177_);
v___x_1179_ = l_Lean_Environment_header(v_env_1178_);
v_isModule_1180_ = lean_ctor_get_uint8(v___x_1179_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1179_);
if (v_isModule_1180_ == 0)
{
lean_object* v___x_1181_; 
lean_dec_ref(v_env_1178_);
lean_inc(v___y_1175_);
lean_inc_ref(v___y_1174_);
v___x_1181_ = lean_apply_3(v_x_1172_, v___y_1174_, v___y_1175_, lean_box(0));
return v___x_1181_;
}
else
{
uint8_t v_isExporting_1182_; 
v_isExporting_1182_ = lean_ctor_get_uint8(v_env_1178_, sizeof(void*)*8);
lean_dec_ref(v_env_1178_);
if (v_isExporting_1173_ == 0)
{
if (v_isExporting_1182_ == 0)
{
lean_object* v___x_1233_; 
lean_inc(v___y_1175_);
lean_inc_ref(v___y_1174_);
v___x_1233_ = lean_apply_3(v_x_1172_, v___y_1174_, v___y_1175_, lean_box(0));
return v___x_1233_;
}
else
{
goto v___jp_1183_;
}
}
else
{
if (v_isExporting_1182_ == 0)
{
goto v___jp_1183_;
}
else
{
lean_object* v___x_1234_; 
lean_inc(v___y_1175_);
lean_inc_ref(v___y_1174_);
v___x_1234_ = lean_apply_3(v_x_1172_, v___y_1174_, v___y_1175_, lean_box(0));
return v___x_1234_;
}
}
v___jp_1183_:
{
lean_object* v___x_1184_; lean_object* v_env_1185_; lean_object* v_nextMacroScope_1186_; lean_object* v_ngen_1187_; lean_object* v_auxDeclNGen_1188_; lean_object* v_traceState_1189_; lean_object* v_messages_1190_; lean_object* v_infoState_1191_; lean_object* v_snapshotTasks_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1231_; 
v___x_1184_ = lean_st_ref_take(v___y_1175_);
v_env_1185_ = lean_ctor_get(v___x_1184_, 0);
v_nextMacroScope_1186_ = lean_ctor_get(v___x_1184_, 1);
v_ngen_1187_ = lean_ctor_get(v___x_1184_, 2);
v_auxDeclNGen_1188_ = lean_ctor_get(v___x_1184_, 3);
v_traceState_1189_ = lean_ctor_get(v___x_1184_, 4);
v_messages_1190_ = lean_ctor_get(v___x_1184_, 6);
v_infoState_1191_ = lean_ctor_get(v___x_1184_, 7);
v_snapshotTasks_1192_ = lean_ctor_get(v___x_1184_, 8);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1231_ == 0)
{
lean_object* v_unused_1232_; 
v_unused_1232_ = lean_ctor_get(v___x_1184_, 5);
lean_dec(v_unused_1232_);
v___x_1194_ = v___x_1184_;
v_isShared_1195_ = v_isSharedCheck_1231_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_snapshotTasks_1192_);
lean_inc(v_infoState_1191_);
lean_inc(v_messages_1190_);
lean_inc(v_traceState_1189_);
lean_inc(v_auxDeclNGen_1188_);
lean_inc(v_ngen_1187_);
lean_inc(v_nextMacroScope_1186_);
lean_inc(v_env_1185_);
lean_dec(v___x_1184_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1231_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1199_; 
v___x_1196_ = l_Lean_Environment_setExporting(v_env_1185_, v_isExporting_1173_);
v___x_1197_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 5, v___x_1197_);
lean_ctor_set(v___x_1194_, 0, v___x_1196_);
v___x_1199_ = v___x_1194_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v_nextMacroScope_1186_);
lean_ctor_set(v_reuseFailAlloc_1230_, 2, v_ngen_1187_);
lean_ctor_set(v_reuseFailAlloc_1230_, 3, v_auxDeclNGen_1188_);
lean_ctor_set(v_reuseFailAlloc_1230_, 4, v_traceState_1189_);
lean_ctor_set(v_reuseFailAlloc_1230_, 5, v___x_1197_);
lean_ctor_set(v_reuseFailAlloc_1230_, 6, v_messages_1190_);
lean_ctor_set(v_reuseFailAlloc_1230_, 7, v_infoState_1191_);
lean_ctor_set(v_reuseFailAlloc_1230_, 8, v_snapshotTasks_1192_);
v___x_1199_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
lean_object* v___x_1200_; lean_object* v_r_1201_; 
v___x_1200_ = lean_st_ref_put(v___y_1175_, v___x_1199_);
lean_inc(v___y_1175_);
lean_inc_ref(v___y_1174_);
v_r_1201_ = lean_apply_3(v_x_1172_, v___y_1174_, v___y_1175_, lean_box(0));
if (lean_obj_tag(v_r_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1218_; 
v_a_1202_ = lean_ctor_get(v_r_1201_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_r_1201_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1204_ = v_r_1201_;
v_isShared_1205_ = v_isSharedCheck_1218_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v_r_1201_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1218_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
lean_inc(v_a_1202_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set_tag(v___x_1204_, 1);
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
lean_object* v___x_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
v___x_1208_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(v___y_1175_, v_isExporting_1182_, v___x_1197_, v___x_1207_);
lean_dec_ref(v___x_1207_);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1215_ == 0)
{
lean_object* v_unused_1216_; 
v_unused_1216_ = lean_ctor_get(v___x_1208_, 0);
lean_dec(v_unused_1216_);
v___x_1210_ = v___x_1208_;
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
else
{
lean_dec(v___x_1208_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 0, v_a_1202_);
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1202_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
}
}
else
{
lean_object* v_a_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
v_a_1219_ = lean_ctor_get(v_r_1201_, 0);
lean_inc(v_a_1219_);
lean_dec_ref_known(v_r_1201_, 1);
v___x_1220_ = lean_box(0);
v___x_1221_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___lam__0(v___y_1175_, v_isExporting_1182_, v___x_1197_, v___x_1220_);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v___x_1221_, 0);
lean_dec(v_unused_1229_);
v___x_1223_ = v___x_1221_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_dec(v___x_1221_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
lean_ctor_set_tag(v___x_1223_, 1);
lean_ctor_set(v___x_1223_, 0, v_a_1219_);
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1219_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___boxed(lean_object* v_x_1235_, lean_object* v_isExporting_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
uint8_t v_isExporting_boxed_1240_; lean_object* v_res_1241_; 
v_isExporting_boxed_1240_ = lean_unbox(v_isExporting_1236_);
v_res_1241_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(v_x_1235_, v_isExporting_boxed_1240_, v___y_1237_, v___y_1238_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2(lean_object* v_00_u03b1_1242_, lean_object* v_x_1243_, uint8_t v_isExporting_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v___x_1248_; 
v___x_1248_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(v_x_1243_, v_isExporting_1244_, v___y_1245_, v___y_1246_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___boxed(lean_object* v_00_u03b1_1249_, lean_object* v_x_1250_, lean_object* v_isExporting_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
uint8_t v_isExporting_boxed_1255_; lean_object* v_res_1256_; 
v_isExporting_boxed_1255_ = lean_unbox(v_isExporting_1251_);
v_res_1256_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2(v_00_u03b1_1249_, v_x_1250_, v_isExporting_boxed_1255_, v___y_1252_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
return v_res_1256_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(lean_object* v_opts_1257_, lean_object* v_opt_1258_){
_start:
{
lean_object* v_name_1259_; lean_object* v_defValue_1260_; lean_object* v_map_1261_; lean_object* v___x_1262_; 
v_name_1259_ = lean_ctor_get(v_opt_1258_, 0);
v_defValue_1260_ = lean_ctor_get(v_opt_1258_, 1);
v_map_1261_ = lean_ctor_get(v_opts_1257_, 0);
v___x_1262_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1261_, v_name_1259_);
if (lean_obj_tag(v___x_1262_) == 0)
{
uint8_t v___x_1263_; 
v___x_1263_ = lean_unbox(v_defValue_1260_);
return v___x_1263_;
}
else
{
lean_object* v_val_1264_; 
v_val_1264_ = lean_ctor_get(v___x_1262_, 0);
lean_inc(v_val_1264_);
lean_dec_ref_known(v___x_1262_, 1);
if (lean_obj_tag(v_val_1264_) == 1)
{
uint8_t v_v_1265_; 
v_v_1265_ = lean_ctor_get_uint8(v_val_1264_, 0);
lean_dec_ref_known(v_val_1264_, 0);
return v_v_1265_;
}
else
{
uint8_t v___x_1266_; 
lean_dec(v_val_1264_);
v___x_1266_ = lean_unbox(v_defValue_1260_);
return v___x_1266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3___boxed(lean_object* v_opts_1267_, lean_object* v_opt_1268_){
_start:
{
uint8_t v_res_1269_; lean_object* v_r_1270_; 
v_res_1269_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(v_opts_1267_, v_opt_1268_);
lean_dec_ref(v_opt_1268_);
lean_dec_ref(v_opts_1267_);
v_r_1270_ = lean_box(v_res_1269_);
return v_r_1270_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0(uint8_t v_suppressElabErrors_1278_, uint8_t v___y_1279_, lean_object* v_x_1280_){
_start:
{
if (lean_obj_tag(v_x_1280_) == 1)
{
lean_object* v_pre_1281_; 
v_pre_1281_ = lean_ctor_get(v_x_1280_, 0);
switch(lean_obj_tag(v_pre_1281_))
{
case 1:
{
lean_object* v_pre_1282_; 
v_pre_1282_ = lean_ctor_get(v_pre_1281_, 0);
switch(lean_obj_tag(v_pre_1282_))
{
case 0:
{
lean_object* v_str_1283_; lean_object* v_str_1284_; lean_object* v___x_1285_; uint8_t v___x_1286_; 
v_str_1283_ = lean_ctor_get(v_x_1280_, 1);
v_str_1284_ = lean_ctor_get(v_pre_1281_, 1);
v___x_1285_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__0));
v___x_1286_ = lean_string_dec_eq(v_str_1284_, v___x_1285_);
if (v___x_1286_ == 0)
{
lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1287_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__2));
v___x_1288_ = lean_string_dec_eq(v_str_1284_, v___x_1287_);
if (v___x_1288_ == 0)
{
return v___x_1288_;
}
else
{
lean_object* v___x_1289_; uint8_t v___x_1290_; 
v___x_1289_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__1));
v___x_1290_ = lean_string_dec_eq(v_str_1283_, v___x_1289_);
if (v___x_1290_ == 0)
{
return v___x_1290_;
}
else
{
return v_suppressElabErrors_1278_;
}
}
}
else
{
lean_object* v___x_1291_; uint8_t v___x_1292_; 
v___x_1291_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__2));
v___x_1292_ = lean_string_dec_eq(v_str_1283_, v___x_1291_);
if (v___x_1292_ == 0)
{
return v___x_1292_;
}
else
{
return v_suppressElabErrors_1278_;
}
}
}
case 1:
{
lean_object* v_pre_1293_; 
v_pre_1293_ = lean_ctor_get(v_pre_1282_, 0);
if (lean_obj_tag(v_pre_1293_) == 0)
{
lean_object* v_str_1294_; lean_object* v_str_1295_; lean_object* v_str_1296_; lean_object* v___x_1297_; uint8_t v___x_1298_; 
v_str_1294_ = lean_ctor_get(v_x_1280_, 1);
v_str_1295_ = lean_ctor_get(v_pre_1281_, 1);
v_str_1296_ = lean_ctor_get(v_pre_1282_, 1);
v___x_1297_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__3));
v___x_1298_ = lean_string_dec_eq(v_str_1296_, v___x_1297_);
if (v___x_1298_ == 0)
{
return v___x_1298_;
}
else
{
lean_object* v___x_1299_; uint8_t v___x_1300_; 
v___x_1299_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__4));
v___x_1300_ = lean_string_dec_eq(v_str_1295_, v___x_1299_);
if (v___x_1300_ == 0)
{
return v___x_1300_;
}
else
{
lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1301_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__5));
v___x_1302_ = lean_string_dec_eq(v_str_1294_, v___x_1301_);
if (v___x_1302_ == 0)
{
return v___x_1302_;
}
else
{
return v_suppressElabErrors_1278_;
}
}
}
}
else
{
return v___y_1279_;
}
}
default: 
{
return v___y_1279_;
}
}
}
case 0:
{
lean_object* v_str_1303_; lean_object* v___x_1304_; uint8_t v___x_1305_; 
v_str_1303_ = lean_ctor_get(v_x_1280_, 1);
v___x_1304_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___closed__6));
v___x_1305_ = lean_string_dec_eq(v_str_1303_, v___x_1304_);
if (v___x_1305_ == 0)
{
return v___x_1305_;
}
else
{
return v_suppressElabErrors_1278_;
}
}
default: 
{
return v___y_1279_;
}
}
}
else
{
return v___y_1279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___boxed(lean_object* v_suppressElabErrors_1306_, lean_object* v___y_1307_, lean_object* v_x_1308_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1309_; uint8_t v___y_5295__boxed_1310_; uint8_t v_res_1311_; lean_object* v_r_1312_; 
v_suppressElabErrors_boxed_1309_ = lean_unbox(v_suppressElabErrors_1306_);
v___y_5295__boxed_1310_ = lean_unbox(v___y_1307_);
v_res_1311_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0(v_suppressElabErrors_boxed_1309_, v___y_5295__boxed_1310_, v_x_1308_);
lean_dec(v_x_1308_);
v_r_1312_ = lean_box(v_res_1311_);
return v_r_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(lean_object* v_ref_1313_, lean_object* v_msgData_1314_, uint8_t v_severity_1315_, uint8_t v_isSilent_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v___y_1321_; uint8_t v___y_1322_; uint8_t v___y_1323_; lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1327_; lean_object* v_currNamespace_1328_; lean_object* v_openDecls_1329_; lean_object* v___y_1330_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___y_1358_; uint8_t v___y_1359_; lean_object* v___y_1360_; lean_object* v___y_1361_; uint8_t v___y_1362_; uint8_t v___y_1363_; lean_object* v___y_1364_; lean_object* v___y_1365_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; uint8_t v___y_1387_; lean_object* v___y_1388_; uint8_t v___y_1389_; lean_object* v___y_1390_; uint8_t v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1396_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; uint8_t v___y_1401_; uint8_t v___y_1402_; lean_object* v___y_1403_; uint8_t v___y_1404_; uint8_t v___x_1409_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; uint8_t v___y_1417_; uint8_t v___y_1418_; uint8_t v___y_1419_; uint8_t v___y_1421_; uint8_t v___x_1439_; 
v___x_1409_ = 2;
v___x_1439_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1315_, v___x_1409_);
if (v___x_1439_ == 0)
{
v___y_1421_ = v___x_1439_;
goto v___jp_1420_;
}
else
{
uint8_t v___x_1440_; 
lean_inc_ref(v_msgData_1314_);
v___x_1440_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1314_);
v___y_1421_ = v___x_1440_;
goto v___jp_1420_;
}
v___jp_1320_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v_env_1335_; lean_object* v_nextMacroScope_1336_; lean_object* v_ngen_1337_; lean_object* v_auxDeclNGen_1338_; lean_object* v_traceState_1339_; lean_object* v_cache_1340_; lean_object* v_messages_1341_; lean_object* v_infoState_1342_; lean_object* v_snapshotTasks_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1354_; 
lean_inc(v_openDecls_1329_);
lean_inc(v_currNamespace_1328_);
v___x_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1331_, 0, v_currNamespace_1328_);
lean_ctor_set(v___x_1331_, 1, v_openDecls_1329_);
v___x_1332_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
lean_ctor_set(v___x_1332_, 1, v___y_1325_);
lean_inc_ref(v___y_1321_);
lean_inc_ref(v___y_1327_);
v___x_1333_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1333_, 0, v___y_1327_);
lean_ctor_set(v___x_1333_, 1, v___y_1326_);
lean_ctor_set(v___x_1333_, 2, v___y_1324_);
lean_ctor_set(v___x_1333_, 3, v___y_1321_);
lean_ctor_set(v___x_1333_, 4, v___x_1332_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*5, v___y_1323_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*5 + 1, v___y_1322_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*5 + 2, v_isSilent_1316_);
v___x_1334_ = lean_st_ref_take(v___y_1330_);
v_env_1335_ = lean_ctor_get(v___x_1334_, 0);
v_nextMacroScope_1336_ = lean_ctor_get(v___x_1334_, 1);
v_ngen_1337_ = lean_ctor_get(v___x_1334_, 2);
v_auxDeclNGen_1338_ = lean_ctor_get(v___x_1334_, 3);
v_traceState_1339_ = lean_ctor_get(v___x_1334_, 4);
v_cache_1340_ = lean_ctor_get(v___x_1334_, 5);
v_messages_1341_ = lean_ctor_get(v___x_1334_, 6);
v_infoState_1342_ = lean_ctor_get(v___x_1334_, 7);
v_snapshotTasks_1343_ = lean_ctor_get(v___x_1334_, 8);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1345_ = v___x_1334_;
v_isShared_1346_ = v_isSharedCheck_1354_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_snapshotTasks_1343_);
lean_inc(v_infoState_1342_);
lean_inc(v_messages_1341_);
lean_inc(v_cache_1340_);
lean_inc(v_traceState_1339_);
lean_inc(v_auxDeclNGen_1338_);
lean_inc(v_ngen_1337_);
lean_inc(v_nextMacroScope_1336_);
lean_inc(v_env_1335_);
lean_dec(v___x_1334_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1354_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1350_; 
v___x_1347_ = lean_box(0);
v___x_1348_ = l_Lean_MessageLog_add(v___x_1333_, v_messages_1341_);
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 6, v___x_1348_);
v___x_1350_ = v___x_1345_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_env_1335_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_nextMacroScope_1336_);
lean_ctor_set(v_reuseFailAlloc_1353_, 2, v_ngen_1337_);
lean_ctor_set(v_reuseFailAlloc_1353_, 3, v_auxDeclNGen_1338_);
lean_ctor_set(v_reuseFailAlloc_1353_, 4, v_traceState_1339_);
lean_ctor_set(v_reuseFailAlloc_1353_, 5, v_cache_1340_);
lean_ctor_set(v_reuseFailAlloc_1353_, 6, v___x_1348_);
lean_ctor_set(v_reuseFailAlloc_1353_, 7, v_infoState_1342_);
lean_ctor_set(v_reuseFailAlloc_1353_, 8, v_snapshotTasks_1343_);
v___x_1350_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = lean_st_ref_put(v___y_1330_, v___x_1350_);
v___x_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1347_);
return v___x_1352_;
}
}
}
v___jp_1355_:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1381_; 
v___x_1366_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1314_);
v___x_1367_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0_spec__0(v___x_1366_, v___y_1317_, v___y_1318_);
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1370_ = v___x_1367_;
v_isShared_1371_ = v_isSharedCheck_1381_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v___x_1367_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1381_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
lean_inc_ref_n(v___y_1361_, 2);
v___x_1372_ = l_Lean_FileMap_toPosition(v___y_1361_, v___y_1360_);
lean_dec(v___y_1360_);
v___x_1373_ = l_Lean_FileMap_toPosition(v___y_1361_, v___y_1365_);
lean_dec(v___y_1365_);
v___x_1374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
v___x_1375_ = ((lean_object*)(l_Lean_instInhabitedAttributeImplCore_default___closed__3));
if (v___y_1363_ == 0)
{
lean_del_object(v___x_1370_);
lean_dec_ref(v___y_1356_);
v___y_1321_ = v___x_1375_;
v___y_1322_ = v___y_1359_;
v___y_1323_ = v___y_1362_;
v___y_1324_ = v___x_1374_;
v___y_1325_ = v_a_1368_;
v___y_1326_ = v___x_1372_;
v___y_1327_ = v___y_1364_;
v_currNamespace_1328_ = v___y_1357_;
v_openDecls_1329_ = v___y_1358_;
v___y_1330_ = v___y_1318_;
goto v___jp_1320_;
}
else
{
uint8_t v___x_1376_; 
lean_inc(v_a_1368_);
v___x_1376_ = l_Lean_MessageData_hasTag(v___y_1356_, v_a_1368_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; lean_object* v___x_1379_; 
lean_dec_ref_known(v___x_1374_, 1);
lean_dec_ref(v___x_1372_);
lean_dec(v_a_1368_);
v___x_1377_ = lean_box(0);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 0, v___x_1377_);
v___x_1379_ = v___x_1370_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1377_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
else
{
lean_del_object(v___x_1370_);
v___y_1321_ = v___x_1375_;
v___y_1322_ = v___y_1359_;
v___y_1323_ = v___y_1362_;
v___y_1324_ = v___x_1374_;
v___y_1325_ = v_a_1368_;
v___y_1326_ = v___x_1372_;
v___y_1327_ = v___y_1364_;
v_currNamespace_1328_ = v___y_1357_;
v_openDecls_1329_ = v___y_1358_;
v___y_1330_ = v___y_1318_;
goto v___jp_1320_;
}
}
}
}
v___jp_1382_:
{
lean_object* v___x_1393_; 
v___x_1393_ = l_Lean_Syntax_getTailPos_x3f(v___y_1386_, v___y_1389_);
lean_dec(v___y_1386_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_inc(v___y_1392_);
v___y_1356_ = v___y_1383_;
v___y_1357_ = v___y_1384_;
v___y_1358_ = v___y_1385_;
v___y_1359_ = v___y_1387_;
v___y_1360_ = v___y_1392_;
v___y_1361_ = v___y_1388_;
v___y_1362_ = v___y_1389_;
v___y_1363_ = v___y_1391_;
v___y_1364_ = v___y_1390_;
v___y_1365_ = v___y_1392_;
goto v___jp_1355_;
}
else
{
lean_object* v_val_1394_; 
v_val_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_val_1394_);
lean_dec_ref_known(v___x_1393_, 1);
v___y_1356_ = v___y_1383_;
v___y_1357_ = v___y_1384_;
v___y_1358_ = v___y_1385_;
v___y_1359_ = v___y_1387_;
v___y_1360_ = v___y_1392_;
v___y_1361_ = v___y_1388_;
v___y_1362_ = v___y_1389_;
v___y_1363_ = v___y_1391_;
v___y_1364_ = v___y_1390_;
v___y_1365_ = v_val_1394_;
goto v___jp_1355_;
}
}
v___jp_1395_:
{
lean_object* v_ref_1405_; lean_object* v___x_1406_; 
v_ref_1405_ = l_Lean_replaceRef(v_ref_1313_, v___y_1399_);
v___x_1406_ = l_Lean_Syntax_getPos_x3f(v_ref_1405_, v___y_1401_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v___x_1407_; 
v___x_1407_ = lean_unsigned_to_nat(0u);
v___y_1383_ = v___y_1396_;
v___y_1384_ = v___y_1397_;
v___y_1385_ = v___y_1398_;
v___y_1386_ = v_ref_1405_;
v___y_1387_ = v___y_1404_;
v___y_1388_ = v___y_1400_;
v___y_1389_ = v___y_1401_;
v___y_1390_ = v___y_1403_;
v___y_1391_ = v___y_1402_;
v___y_1392_ = v___x_1407_;
goto v___jp_1382_;
}
else
{
lean_object* v_val_1408_; 
v_val_1408_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_val_1408_);
lean_dec_ref_known(v___x_1406_, 1);
v___y_1383_ = v___y_1396_;
v___y_1384_ = v___y_1397_;
v___y_1385_ = v___y_1398_;
v___y_1386_ = v_ref_1405_;
v___y_1387_ = v___y_1404_;
v___y_1388_ = v___y_1400_;
v___y_1389_ = v___y_1401_;
v___y_1390_ = v___y_1403_;
v___y_1391_ = v___y_1402_;
v___y_1392_ = v_val_1408_;
goto v___jp_1382_;
}
}
v___jp_1410_:
{
if (v___y_1419_ == 0)
{
v___y_1396_ = v___y_1411_;
v___y_1397_ = v___y_1413_;
v___y_1398_ = v___y_1414_;
v___y_1399_ = v___y_1416_;
v___y_1400_ = v___y_1412_;
v___y_1401_ = v___y_1417_;
v___y_1402_ = v___y_1418_;
v___y_1403_ = v___y_1415_;
v___y_1404_ = v_severity_1315_;
goto v___jp_1395_;
}
else
{
v___y_1396_ = v___y_1411_;
v___y_1397_ = v___y_1413_;
v___y_1398_ = v___y_1414_;
v___y_1399_ = v___y_1416_;
v___y_1400_ = v___y_1412_;
v___y_1401_ = v___y_1417_;
v___y_1402_ = v___y_1418_;
v___y_1403_ = v___y_1415_;
v___y_1404_ = v___x_1409_;
goto v___jp_1395_;
}
}
v___jp_1420_:
{
if (v___y_1421_ == 0)
{
lean_object* v_toCold_1422_; lean_object* v_ref_1423_; uint8_t v_suppressElabErrors_1424_; lean_object* v_fileName_1425_; lean_object* v_fileMap_1426_; lean_object* v_options_1427_; lean_object* v_currNamespace_1428_; lean_object* v_openDecls_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___f_1432_; uint8_t v___x_1433_; uint8_t v___x_1434_; 
v_toCold_1422_ = lean_ctor_get(v___y_1317_, 0);
v_ref_1423_ = lean_ctor_get(v___y_1317_, 2);
v_suppressElabErrors_1424_ = lean_ctor_get_uint8(v___y_1317_, sizeof(void*)*3 + 1);
v_fileName_1425_ = lean_ctor_get(v_toCold_1422_, 0);
v_fileMap_1426_ = lean_ctor_get(v_toCold_1422_, 1);
v_options_1427_ = lean_ctor_get(v_toCold_1422_, 2);
v_currNamespace_1428_ = lean_ctor_get(v_toCold_1422_, 4);
v_openDecls_1429_ = lean_ctor_get(v_toCold_1422_, 5);
v___x_1430_ = lean_box(v_suppressElabErrors_1424_);
v___x_1431_ = lean_box(v___y_1421_);
v___f_1432_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1432_, 0, v___x_1430_);
lean_closure_set(v___f_1432_, 1, v___x_1431_);
v___x_1433_ = 1;
v___x_1434_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1315_, v___x_1433_);
if (v___x_1434_ == 0)
{
v___y_1411_ = v___f_1432_;
v___y_1412_ = v_fileMap_1426_;
v___y_1413_ = v_currNamespace_1428_;
v___y_1414_ = v_openDecls_1429_;
v___y_1415_ = v_fileName_1425_;
v___y_1416_ = v_ref_1423_;
v___y_1417_ = v___y_1421_;
v___y_1418_ = v_suppressElabErrors_1424_;
v___y_1419_ = v___x_1434_;
goto v___jp_1410_;
}
else
{
lean_object* v___x_1435_; uint8_t v___x_1436_; 
v___x_1435_ = l_Lean_warningAsError;
v___x_1436_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(v_options_1427_, v___x_1435_);
v___y_1411_ = v___f_1432_;
v___y_1412_ = v_fileMap_1426_;
v___y_1413_ = v_currNamespace_1428_;
v___y_1414_ = v_openDecls_1429_;
v___y_1415_ = v_fileName_1425_;
v___y_1416_ = v_ref_1423_;
v___y_1417_ = v___y_1421_;
v___y_1418_ = v_suppressElabErrors_1424_;
v___y_1419_ = v___x_1436_;
goto v___jp_1410_;
}
}
else
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
lean_dec_ref(v_msgData_1314_);
v___x_1437_ = lean_box(0);
v___x_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
return v___x_1438_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6___boxed(lean_object* v_ref_1441_, lean_object* v_msgData_1442_, lean_object* v_severity_1443_, lean_object* v_isSilent_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
uint8_t v_severity_boxed_1448_; uint8_t v_isSilent_boxed_1449_; lean_object* v_res_1450_; 
v_severity_boxed_1448_ = lean_unbox(v_severity_1443_);
v_isSilent_boxed_1449_ = lean_unbox(v_isSilent_1444_);
v_res_1450_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(v_ref_1441_, v_msgData_1442_, v_severity_boxed_1448_, v_isSilent_boxed_1449_, v___y_1445_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v_ref_1441_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(lean_object* v_msgData_1451_, uint8_t v_severity_1452_, uint8_t v_isSilent_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_){
_start:
{
lean_object* v_ref_1457_; lean_object* v___x_1458_; 
v_ref_1457_ = lean_ctor_get(v___y_1454_, 2);
v___x_1458_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5_spec__6(v_ref_1457_, v_msgData_1451_, v_severity_1452_, v_isSilent_1453_, v___y_1454_, v___y_1455_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5___boxed(lean_object* v_msgData_1459_, lean_object* v_severity_1460_, lean_object* v_isSilent_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
uint8_t v_severity_boxed_1465_; uint8_t v_isSilent_boxed_1466_; lean_object* v_res_1467_; 
v_severity_boxed_1465_ = lean_unbox(v_severity_1460_);
v_isSilent_boxed_1466_ = lean_unbox(v_isSilent_1461_);
v_res_1467_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(v_msgData_1459_, v_severity_boxed_1465_, v_isSilent_boxed_1466_, v___y_1462_, v___y_1463_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(lean_object* v_msgData_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
uint8_t v___x_1472_; uint8_t v___x_1473_; lean_object* v___x_1474_; 
v___x_1472_ = 1;
v___x_1473_ = 0;
v___x_1474_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1_spec__5(v_msgData_1468_, v___x_1472_, v___x_1473_, v___y_1469_, v___y_1470_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1___boxed(lean_object* v_msgData_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(v_msgData_1475_, v___y_1476_, v___y_1477_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(lean_object* v_opt_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v_toCold_1483_; lean_object* v_options_1484_; uint8_t v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v_toCold_1483_ = lean_ctor_get(v___y_1481_, 0);
v_options_1484_ = lean_ctor_get(v_toCold_1483_, 2);
v___x_1485_ = l_Lean_Option_get___at___00Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0_spec__3(v_options_1484_, v_opt_1480_);
v___x_1486_ = lean_box(v___x_1485_);
v___x_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1486_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg___boxed(lean_object* v_opt_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(v_opt_1488_, v___y_1489_);
lean_dec_ref(v___y_1489_);
lean_dec_ref(v_opt_1488_);
return v_res_1491_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__0));
v___x_1494_ = l_Lean_stringToMessageData(v___x_1493_);
return v___x_1494_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__2));
v___x_1497_ = l_Lean_stringToMessageData(v___x_1496_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(lean_object* v_id_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v___x_1502_; lean_object* v_env_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v_a_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1525_; 
v___x_1502_ = lean_st_ref_get(v___y_1500_);
v_env_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc_ref(v_env_1503_);
lean_dec(v___x_1502_);
v___x_1504_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1505_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(v___x_1504_, v___y_1499_);
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1508_ = v___x_1505_;
v_isShared_1509_ = v_isSharedCheck_1525_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_a_1506_);
lean_dec(v___x_1505_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1525_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
uint8_t v_isExporting_1515_; 
v_isExporting_1515_ = lean_ctor_get_uint8(v_env_1503_, sizeof(void*)*8);
lean_dec_ref(v_env_1503_);
if (v_isExporting_1515_ == 0)
{
lean_dec(v_a_1506_);
lean_dec(v_id_1498_);
goto v___jp_1510_;
}
else
{
uint8_t v___x_1516_; 
v___x_1516_ = l_Lean_isPrivateName(v_id_1498_);
if (v___x_1516_ == 0)
{
lean_dec(v_a_1506_);
lean_dec(v_id_1498_);
goto v___jp_1510_;
}
else
{
uint8_t v___x_1517_; 
v___x_1517_ = lean_unbox(v_a_1506_);
lean_dec(v_a_1506_);
if (v___x_1517_ == 0)
{
lean_dec(v_id_1498_);
goto v___jp_1510_;
}
else
{
lean_object* v___x_1518_; uint8_t v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
lean_del_object(v___x_1508_);
v___x_1518_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__1);
v___x_1519_ = 0;
v___x_1520_ = l_Lean_MessageData_ofConstName(v_id_1498_, v___x_1519_);
v___x_1521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1518_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___closed__3);
v___x_1523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1521_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__1(v___x_1523_, v___y_1499_, v___y_1500_);
return v___x_1524_;
}
}
}
v___jp_1510_:
{
lean_object* v___x_1511_; lean_object* v___x_1513_; 
v___x_1511_ = lean_box(0);
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 0, v___x_1511_);
v___x_1513_ = v___x_1508_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1511_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0___boxed(lean_object* v_id_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(v_id_1526_, v___y_1527_, v___y_1528_);
lean_dec(v___y_1528_);
lean_dec_ref(v___y_1527_);
return v_res_1530_;
}
}
static lean_object* _init_l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = ((lean_object*)(l_Lean_ensureAttrDeclIsPublic___lam__0___closed__0));
v___x_1533_ = l_Lean_stringToMessageData(v___x_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0(lean_object* v_declName_1534_, uint8_t v_isModule_1535_, lean_object* v_attrName_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v___x_1540_; 
lean_inc(v_declName_1534_);
v___x_1540_ = l_Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0(v_declName_1534_, v___y_1537_, v___y_1538_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v___x_1541_; lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1562_; 
lean_dec_ref_known(v___x_1540_, 1);
lean_inc(v_declName_1534_);
v___x_1541_ = l_Lean_hasConst___at___00Lean_ensureAttrDeclIsPublic_spec__1___redArg(v_declName_1534_, v_isModule_1535_, v___y_1538_);
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1544_ = v___x_1541_;
v_isShared_1545_ = v_isSharedCheck_1562_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1541_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1562_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
uint8_t v___x_1546_; 
v___x_1546_ = lean_unbox(v_a_1542_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
lean_del_object(v___x_1544_);
v___x_1547_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1548_ = l_Lean_MessageData_ofName(v_attrName_1536_);
v___x_1549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1);
v___x_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = lean_unbox(v_a_1542_);
lean_dec(v_a_1542_);
v___x_1553_ = l_Lean_MessageData_ofConstName(v_declName_1534_, v___x_1552_);
v___x_1554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1551_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = lean_obj_once(&l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1, &l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1_once, _init_l_Lean_ensureAttrDeclIsPublic___lam__0___closed__1);
v___x_1556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1554_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
v___x_1557_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1556_, v___y_1537_, v___y_1538_);
return v___x_1557_;
}
else
{
lean_object* v___x_1558_; lean_object* v___x_1560_; 
lean_dec(v_a_1542_);
lean_dec(v_attrName_1536_);
lean_dec(v_declName_1534_);
v___x_1558_ = lean_box(0);
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 0, v___x_1558_);
v___x_1560_ = v___x_1544_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
else
{
lean_dec(v_attrName_1536_);
lean_dec(v_declName_1534_);
return v___x_1540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___lam__0___boxed(lean_object* v_declName_1563_, lean_object* v_isModule_1564_, lean_object* v_attrName_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
uint8_t v_isModule_boxed_1569_; lean_object* v_res_1570_; 
v_isModule_boxed_1569_ = lean_unbox(v_isModule_1564_);
v_res_1570_ = l_Lean_ensureAttrDeclIsPublic___lam__0(v_declName_1563_, v_isModule_boxed_1569_, v_attrName_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic(lean_object* v_attrName_1571_, lean_object* v_declName_1572_, uint8_t v_attrKind_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v___x_1577_; lean_object* v_env_1581_; lean_object* v___x_1582_; uint8_t v_isModule_1583_; 
v___x_1577_ = lean_st_ref_get(v___y_1575_);
v_env_1581_ = lean_ctor_get(v___x_1577_, 0);
lean_inc_ref(v_env_1581_);
lean_dec(v___x_1577_);
v___x_1582_ = l_Lean_Environment_header(v_env_1581_);
lean_dec_ref(v_env_1581_);
v_isModule_1583_ = lean_ctor_get_uint8(v___x_1582_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1582_);
if (v_isModule_1583_ == 0)
{
lean_dec(v_declName_1572_);
lean_dec(v_attrName_1571_);
goto v___jp_1578_;
}
else
{
uint8_t v___x_1584_; uint8_t v___x_1585_; 
v___x_1584_ = 1;
v___x_1585_ = l_Lean_instBEqAttributeKind_beq(v_attrKind_1573_, v___x_1584_);
if (v___x_1585_ == 0)
{
lean_object* v___x_1586_; lean_object* v___f_1587_; lean_object* v___x_1588_; 
v___x_1586_ = lean_box(v_isModule_1583_);
v___f_1587_ = lean_alloc_closure((void*)(l_Lean_ensureAttrDeclIsPublic___lam__0___boxed), 6, 3);
lean_closure_set(v___f_1587_, 0, v_declName_1572_);
lean_closure_set(v___f_1587_, 1, v___x_1586_);
lean_closure_set(v___f_1587_, 2, v_attrName_1571_);
v___x_1588_ = l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg(v___f_1587_, v_isModule_1583_, v___y_1574_, v___y_1575_);
return v___x_1588_;
}
else
{
lean_dec(v_declName_1572_);
lean_dec(v_attrName_1571_);
goto v___jp_1578_;
}
}
v___jp_1578_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = lean_box(0);
v___x_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1579_);
return v___x_1580_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsPublic___boxed(lean_object* v_attrName_1589_, lean_object* v_declName_1590_, lean_object* v_attrKind_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_){
_start:
{
uint8_t v_attrKind_boxed_1595_; lean_object* v_res_1596_; 
v_attrKind_boxed_1595_ = lean_unbox(v_attrKind_1591_);
v_res_1596_ = l_Lean_ensureAttrDeclIsPublic(v_attrName_1589_, v_declName_1590_, v_attrKind_boxed_1595_, v___y_1592_, v___y_1593_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0(lean_object* v_opt_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___redArg(v_opt_1597_, v___y_1598_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0___boxed(lean_object* v_opt_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_ensureAttrDeclIsPublic_spec__0_spec__0(v_opt_1602_, v___y_1603_, v___y_1604_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec_ref(v_opt_1602_);
return v_res_1606_;
}
}
static lean_object* _init_l_Lean_ensureAttrDeclIsMeta___closed__1(void){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = ((lean_object*)(l_Lean_ensureAttrDeclIsMeta___closed__0));
v___x_1609_ = l_Lean_stringToMessageData(v___x_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object* v_attrName_1610_, lean_object* v_declName_1611_, uint8_t v_attrKind_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v___x_1616_; lean_object* v_env_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; uint8_t v_isModule_1620_; 
v___x_1616_ = lean_st_ref_get(v___y_1614_);
v_env_1617_ = lean_ctor_get(v___x_1616_, 0);
lean_inc_ref(v_env_1617_);
lean_dec(v___x_1616_);
v___x_1618_ = lean_st_ref_get(v___y_1614_);
v___x_1619_ = l_Lean_Environment_header(v_env_1617_);
lean_dec_ref(v_env_1617_);
v_isModule_1620_ = lean_ctor_get_uint8(v___x_1619_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1619_);
if (v_isModule_1620_ == 0)
{
lean_object* v___x_1621_; 
lean_dec(v___x_1618_);
v___x_1621_ = l_Lean_ensureAttrDeclIsPublic(v_attrName_1610_, v_declName_1611_, v_attrKind_1612_, v___y_1613_, v___y_1614_);
return v___x_1621_;
}
else
{
lean_object* v_env_1622_; uint8_t v___x_1623_; 
v_env_1622_ = lean_ctor_get(v___x_1618_, 0);
lean_inc_ref(v_env_1622_);
lean_dec(v___x_1618_);
lean_inc(v_declName_1611_);
v___x_1623_ = l_Lean_isMarkedMeta(v_env_1622_, v_declName_1611_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1624_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1625_ = l_Lean_MessageData_ofName(v_attrName_1610_);
v___x_1626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1624_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v___x_1627_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___redArg___closed__1);
v___x_1628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1626_);
lean_ctor_set(v___x_1628_, 1, v___x_1627_);
v___x_1629_ = l_Lean_MessageData_ofConstName(v_declName_1611_, v___x_1623_);
v___x_1630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1628_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
v___x_1631_ = lean_obj_once(&l_Lean_ensureAttrDeclIsMeta___closed__1, &l_Lean_ensureAttrDeclIsMeta___closed__1_once, _init_l_Lean_ensureAttrDeclIsMeta___closed__1);
v___x_1632_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1630_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
v___x_1633_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1632_, v___y_1613_, v___y_1614_);
return v___x_1633_;
}
else
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Lean_ensureAttrDeclIsPublic(v_attrName_1610_, v_declName_1611_, v_attrKind_1612_, v___y_1613_, v___y_1614_);
return v___x_1634_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureAttrDeclIsMeta___boxed(lean_object* v_attrName_1635_, lean_object* v_declName_1636_, lean_object* v_attrKind_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
uint8_t v_attrKind_boxed_1641_; lean_object* v_res_1642_; 
v_attrKind_boxed_1641_ = lean_unbox(v_attrKind_1637_);
v_res_1642_ = l_Lean_ensureAttrDeclIsMeta(v_attrName_1635_, v_declName_1636_, v_attrKind_boxed_1641_, v___y_1638_, v___y_1639_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0(lean_object* v_x_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1));
v___x_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__0___boxed(lean_object* v_x_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_Lean_instInhabitedTagAttribute_default___lam__0(v_x_1651_, v___y_1652_);
lean_dec_ref(v___y_1652_);
lean_dec_ref(v_x_1651_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1(lean_object* v_s_1655_, lean_object* v_x_1656_){
_start:
{
lean_inc(v_s_1655_);
return v_s_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__1___boxed(lean_object* v_s_1657_, lean_object* v_x_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lean_instInhabitedTagAttribute_default___lam__1(v_s_1657_, v_x_1658_);
lean_dec(v_x_1658_);
lean_dec(v_s_1657_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2(lean_object* v_x_1664_, lean_object* v_x_1665_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__2___closed__1));
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__2___boxed(lean_object* v_x_1667_, lean_object* v_x_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_Lean_instInhabitedTagAttribute_default___lam__2(v_x_1667_, v_x_1668_);
lean_dec(v_x_1668_);
lean_dec_ref(v_x_1667_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3(lean_object* v_x_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = lean_box(0);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedTagAttribute_default___lam__3___boxed(lean_object* v_x_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_Lean_instInhabitedTagAttribute_default___lam__3(v_x_1672_);
lean_dec(v_x_1672_);
return v_res_1673_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default___closed__4(void){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_1678_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default___closed__5(void){
_start:
{
lean_object* v___f_1679_; lean_object* v___f_1680_; lean_object* v___f_1681_; lean_object* v___f_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___f_1679_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__3));
v___f_1680_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__2));
v___f_1681_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__1));
v___f_1682_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__0));
v___x_1683_ = lean_box(0);
v___x_1684_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__4, &l_Lean_instInhabitedTagAttribute_default___closed__4_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__4);
v___x_1685_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
lean_ctor_set(v___x_1685_, 1, v___x_1683_);
lean_ctor_set(v___x_1685_, 2, v___f_1682_);
lean_ctor_set(v___x_1685_, 3, v___f_1681_);
lean_ctor_set(v___x_1685_, 4, v___f_1680_);
lean_ctor_set(v___x_1685_, 5, v___f_1679_);
return v___x_1685_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default___closed__6(void){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1686_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__5, &l_Lean_instInhabitedTagAttribute_default___closed__5_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__5);
v___x_1687_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default));
v___x_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
lean_ctor_set(v___x_1688_, 1, v___x_1686_);
return v___x_1688_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute_default(void){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__6, &l_Lean_instInhabitedTagAttribute_default___closed__6_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__6);
return v___x_1689_;
}
}
static lean_object* _init_l_Lean_instInhabitedTagAttribute(void){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = l_Lean_instInhabitedTagAttribute_default;
return v___x_1690_;
}
}
static lean_object* _init_l_Lean_registerTagAttribute___auto__1(void){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__28, &l_Lean_AttributeImplCore_ref___autoParam___closed__28_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0(lean_object* v_x_1692_){
_start:
{
lean_object* v___x_1693_; 
v___x_1693_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0));
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__0___boxed(lean_object* v_x_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Lean_registerTagAttribute___lam__0(v_x_1694_);
lean_dec(v_x_1694_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0(lean_object* v_newState_1696_, lean_object* v_x_1697_, lean_object* v_x_1698_){
_start:
{
if (lean_obj_tag(v_x_1698_) == 0)
{
return v_x_1697_;
}
else
{
lean_object* v_head_1699_; lean_object* v_tail_1700_; uint8_t v___x_1701_; 
v_head_1699_ = lean_ctor_get(v_x_1698_, 0);
lean_inc(v_head_1699_);
v_tail_1700_ = lean_ctor_get(v_x_1698_, 1);
lean_inc(v_tail_1700_);
lean_dec_ref_known(v_x_1698_, 2);
v___x_1701_ = l_Lean_NameSet_contains(v_newState_1696_, v_head_1699_);
if (v___x_1701_ == 0)
{
lean_dec(v_head_1699_);
v_x_1698_ = v_tail_1700_;
goto _start;
}
else
{
lean_object* v___x_1703_; 
v___x_1703_ = l_Lean_NameSet_insert(v_x_1697_, v_head_1699_);
v_x_1697_ = v___x_1703_;
v_x_1698_ = v_tail_1700_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerTagAttribute_spec__0___boxed(lean_object* v_newState_1705_, lean_object* v_x_1706_, lean_object* v_x_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l_List_foldl___at___00Lean_registerTagAttribute_spec__0(v_newState_1705_, v_x_1706_, v_x_1707_);
lean_dec(v_newState_1705_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1(lean_object* v_x_1709_, lean_object* v_newState_1710_, lean_object* v_newConsts_1711_, lean_object* v_s_1712_){
_start:
{
lean_object* v___x_1713_; 
v___x_1713_ = l_List_foldl___at___00Lean_registerTagAttribute_spec__0(v_newState_1710_, v_s_1712_, v_newConsts_1711_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__1___boxed(lean_object* v_x_1714_, lean_object* v_newState_1715_, lean_object* v_newConsts_1716_, lean_object* v_s_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Lean_registerTagAttribute___lam__1(v_x_1714_, v_newState_1715_, v_newConsts_1716_, v_s_1717_);
lean_dec(v_newState_1715_);
lean_dec(v_x_1714_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__2(lean_object* v_s_1731_){
_start:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1732_ = ((lean_object*)(l_Lean_registerTagAttribute___lam__2___closed__5));
v___x_1733_ = l_Lean_NameSet_size(v_s_1731_);
v___x_1734_ = l_Nat_reprFast(v___x_1733_);
v___x_1735_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
v___x_1736_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1732_);
lean_ctor_set(v___x_1736_, 1, v___x_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__2___boxed(lean_object* v_s_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Lean_registerTagAttribute___lam__2(v_s_1737_);
lean_dec(v_s_1737_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__3(lean_object* v_a_1739_, lean_object* v_e_1740_){
_start:
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_array_push(v_a_1739_, v_e_1740_);
return v___x_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2___redArg(lean_object* v_hi_1742_, lean_object* v_pivot_1743_, lean_object* v_as_1744_, lean_object* v_i_1745_, lean_object* v_k_1746_){
_start:
{
uint8_t v___x_1747_; 
v___x_1747_ = lean_nat_dec_lt(v_k_1746_, v_hi_1742_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
lean_dec(v_k_1746_);
v___x_1748_ = lean_array_fswap(v_as_1744_, v_i_1745_, v_hi_1742_);
v___x_1749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1749_, 0, v_i_1745_);
lean_ctor_set(v___x_1749_, 1, v___x_1748_);
return v___x_1749_;
}
else
{
lean_object* v___x_1750_; uint8_t v___x_1751_; 
v___x_1750_ = lean_array_fget_borrowed(v_as_1744_, v_k_1746_);
v___x_1751_ = l_Lean_Name_quickLt(v___x_1750_, v_pivot_1743_);
if (v___x_1751_ == 0)
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = lean_unsigned_to_nat(1u);
v___x_1753_ = lean_nat_add(v_k_1746_, v___x_1752_);
lean_dec(v_k_1746_);
v_k_1746_ = v___x_1753_;
goto _start;
}
else
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1755_ = lean_array_fswap(v_as_1744_, v_i_1745_, v_k_1746_);
v___x_1756_ = lean_unsigned_to_nat(1u);
v___x_1757_ = lean_nat_add(v_i_1745_, v___x_1756_);
lean_dec(v_i_1745_);
v___x_1758_ = lean_nat_add(v_k_1746_, v___x_1756_);
lean_dec(v_k_1746_);
v_as_1744_ = v___x_1755_;
v_i_1745_ = v___x_1757_;
v_k_1746_ = v___x_1758_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2___redArg___boxed(lean_object* v_hi_1760_, lean_object* v_pivot_1761_, lean_object* v_as_1762_, lean_object* v_i_1763_, lean_object* v_k_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2___redArg(v_hi_1760_, v_pivot_1761_, v_as_1762_, v_i_1763_, v_k_1764_);
lean_dec(v_pivot_1761_);
lean_dec(v_hi_1760_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___redArg(lean_object* v_n_1766_, lean_object* v_as_1767_, lean_object* v_lo_1768_, lean_object* v_hi_1769_){
_start:
{
lean_object* v___y_1771_; uint8_t v___x_1781_; 
v___x_1781_ = lean_nat_dec_lt(v_lo_1768_, v_hi_1769_);
if (v___x_1781_ == 0)
{
lean_dec(v_lo_1768_);
return v_as_1767_;
}
else
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v_mid_1784_; lean_object* v___y_1786_; lean_object* v___y_1792_; lean_object* v___x_1797_; lean_object* v___x_1798_; uint8_t v___x_1799_; 
v___x_1782_ = lean_nat_add(v_lo_1768_, v_hi_1769_);
v___x_1783_ = lean_unsigned_to_nat(1u);
v_mid_1784_ = lean_nat_shiftr(v___x_1782_, v___x_1783_);
lean_dec(v___x_1782_);
v___x_1797_ = lean_array_fget_borrowed(v_as_1767_, v_mid_1784_);
v___x_1798_ = lean_array_fget_borrowed(v_as_1767_, v_lo_1768_);
v___x_1799_ = l_Lean_Name_quickLt(v___x_1797_, v___x_1798_);
if (v___x_1799_ == 0)
{
v___y_1792_ = v_as_1767_;
goto v___jp_1791_;
}
else
{
lean_object* v___x_1800_; 
v___x_1800_ = lean_array_fswap(v_as_1767_, v_lo_1768_, v_mid_1784_);
v___y_1792_ = v___x_1800_;
goto v___jp_1791_;
}
v___jp_1785_:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; uint8_t v___x_1789_; 
v___x_1787_ = lean_array_fget_borrowed(v___y_1786_, v_mid_1784_);
v___x_1788_ = lean_array_fget_borrowed(v___y_1786_, v_hi_1769_);
v___x_1789_ = l_Lean_Name_quickLt(v___x_1787_, v___x_1788_);
if (v___x_1789_ == 0)
{
lean_dec(v_mid_1784_);
v___y_1771_ = v___y_1786_;
goto v___jp_1770_;
}
else
{
lean_object* v___x_1790_; 
v___x_1790_ = lean_array_fswap(v___y_1786_, v_mid_1784_, v_hi_1769_);
lean_dec(v_mid_1784_);
v___y_1771_ = v___x_1790_;
goto v___jp_1770_;
}
}
v___jp_1791_:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; uint8_t v___x_1795_; 
v___x_1793_ = lean_array_fget_borrowed(v___y_1792_, v_hi_1769_);
v___x_1794_ = lean_array_fget_borrowed(v___y_1792_, v_lo_1768_);
v___x_1795_ = l_Lean_Name_quickLt(v___x_1793_, v___x_1794_);
if (v___x_1795_ == 0)
{
v___y_1786_ = v___y_1792_;
goto v___jp_1785_;
}
else
{
lean_object* v___x_1796_; 
v___x_1796_ = lean_array_fswap(v___y_1792_, v_lo_1768_, v_hi_1769_);
v___y_1786_ = v___x_1796_;
goto v___jp_1785_;
}
}
}
v___jp_1770_:
{
lean_object* v_pivot_1772_; lean_object* v___x_1773_; lean_object* v_fst_1774_; lean_object* v_snd_1775_; uint8_t v___x_1776_; 
v_pivot_1772_ = lean_array_fget(v___y_1771_, v_hi_1769_);
lean_inc_n(v_lo_1768_, 2);
v___x_1773_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2___redArg(v_hi_1769_, v_pivot_1772_, v___y_1771_, v_lo_1768_, v_lo_1768_);
lean_dec(v_pivot_1772_);
v_fst_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_fst_1774_);
v_snd_1775_ = lean_ctor_get(v___x_1773_, 1);
lean_inc(v_snd_1775_);
lean_dec_ref(v___x_1773_);
v___x_1776_ = lean_nat_dec_le(v_hi_1769_, v_fst_1774_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1777_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___redArg(v_n_1766_, v_snd_1775_, v_lo_1768_, v_fst_1774_);
v___x_1778_ = lean_unsigned_to_nat(1u);
v___x_1779_ = lean_nat_add(v_fst_1774_, v___x_1778_);
lean_dec(v_fst_1774_);
v_as_1767_ = v___x_1777_;
v_lo_1768_ = v___x_1779_;
goto _start;
}
else
{
lean_dec(v_fst_1774_);
lean_dec(v_lo_1768_);
return v_snd_1775_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___redArg___boxed(lean_object* v_n_1801_, lean_object* v_as_1802_, lean_object* v_lo_1803_, lean_object* v_hi_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___redArg(v_n_1801_, v_as_1802_, v_lo_1803_, v_hi_1804_);
lean_dec(v_hi_1804_);
lean_dec(v_n_1801_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__1(lean_object* v_env_1806_, lean_object* v_as_1807_, size_t v_i_1808_, size_t v_stop_1809_, lean_object* v_b_1810_){
_start:
{
lean_object* v___y_1812_; uint8_t v___x_1816_; 
v___x_1816_ = lean_usize_dec_eq(v_i_1808_, v_stop_1809_);
if (v___x_1816_ == 0)
{
lean_object* v___x_1817_; uint8_t v___x_1818_; lean_object* v___x_1819_; uint8_t v___x_1820_; 
v___x_1817_ = lean_array_uget_borrowed(v_as_1807_, v_i_1808_);
v___x_1818_ = 1;
lean_inc_ref(v_env_1806_);
v___x_1819_ = l_Lean_Environment_setExporting(v_env_1806_, v___x_1818_);
lean_inc(v___x_1817_);
v___x_1820_ = l_Lean_Environment_contains(v___x_1819_, v___x_1817_, v___x_1816_);
if (v___x_1820_ == 0)
{
v___y_1812_ = v_b_1810_;
goto v___jp_1811_;
}
else
{
lean_object* v___x_1821_; 
lean_inc(v___x_1817_);
v___x_1821_ = lean_array_push(v_b_1810_, v___x_1817_);
v___y_1812_ = v___x_1821_;
goto v___jp_1811_;
}
}
else
{
lean_dec_ref(v_env_1806_);
return v_b_1810_;
}
v___jp_1811_:
{
size_t v___x_1813_; size_t v___x_1814_; 
v___x_1813_ = ((size_t)1ULL);
v___x_1814_ = lean_usize_add(v_i_1808_, v___x_1813_);
v_i_1808_ = v___x_1814_;
v_b_1810_ = v___y_1812_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__1___boxed(lean_object* v_env_1822_, lean_object* v_as_1823_, lean_object* v_i_1824_, lean_object* v_stop_1825_, lean_object* v_b_1826_){
_start:
{
size_t v_i_boxed_1827_; size_t v_stop_boxed_1828_; lean_object* v_res_1829_; 
v_i_boxed_1827_ = lean_unbox_usize(v_i_1824_);
lean_dec(v_i_1824_);
v_stop_boxed_1828_ = lean_unbox_usize(v_stop_1825_);
lean_dec(v_stop_1825_);
v_res_1829_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__1(v_env_1822_, v_as_1823_, v_i_boxed_1827_, v_stop_boxed_1828_, v_b_1826_);
lean_dec_ref(v_as_1823_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__4(lean_object* v___f_1830_, lean_object* v_env_1831_, lean_object* v_es_1832_){
_start:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___y_1836_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___y_1853_; lean_object* v___y_1854_; uint8_t v___x_1856_; 
v___x_1833_ = lean_unsigned_to_nat(0u);
v___x_1834_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__2___closed__0));
v___x_1850_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v___f_1830_, v___x_1834_, v_es_1832_);
v___x_1851_ = lean_array_get_size(v___x_1850_);
v___x_1856_ = lean_nat_dec_eq(v___x_1851_, v___x_1833_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___y_1860_; uint8_t v___x_1862_; 
v___x_1857_ = lean_unsigned_to_nat(1u);
v___x_1858_ = lean_nat_sub(v___x_1851_, v___x_1857_);
v___x_1862_ = lean_nat_dec_le(v___x_1833_, v___x_1858_);
if (v___x_1862_ == 0)
{
lean_inc(v___x_1858_);
v___y_1860_ = v___x_1858_;
goto v___jp_1859_;
}
else
{
v___y_1860_ = v___x_1833_;
goto v___jp_1859_;
}
v___jp_1859_:
{
uint8_t v___x_1861_; 
v___x_1861_ = lean_nat_dec_le(v___y_1860_, v___x_1858_);
if (v___x_1861_ == 0)
{
lean_dec(v___x_1858_);
lean_inc(v___y_1860_);
v___y_1853_ = v___y_1860_;
v___y_1854_ = v___y_1860_;
goto v___jp_1852_;
}
else
{
v___y_1853_ = v___y_1860_;
v___y_1854_ = v___x_1858_;
goto v___jp_1852_;
}
}
}
else
{
v___y_1836_ = v___x_1850_;
goto v___jp_1835_;
}
v___jp_1835_:
{
lean_object* v___x_1837_; uint8_t v___x_1838_; 
v___x_1837_ = lean_array_get_size(v___y_1836_);
v___x_1838_ = lean_nat_dec_lt(v___x_1833_, v___x_1837_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; 
lean_dec_ref(v_env_1831_);
v___x_1839_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1834_);
lean_ctor_set(v___x_1839_, 1, v___x_1834_);
lean_ctor_set(v___x_1839_, 2, v___y_1836_);
return v___x_1839_;
}
else
{
uint8_t v___x_1840_; 
v___x_1840_ = lean_nat_dec_le(v___x_1837_, v___x_1837_);
if (v___x_1840_ == 0)
{
if (v___x_1838_ == 0)
{
lean_object* v___x_1841_; 
lean_dec_ref(v_env_1831_);
v___x_1841_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1834_);
lean_ctor_set(v___x_1841_, 1, v___x_1834_);
lean_ctor_set(v___x_1841_, 2, v___y_1836_);
return v___x_1841_;
}
else
{
size_t v___x_1842_; size_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1842_ = ((size_t)0ULL);
v___x_1843_ = lean_usize_of_nat(v___x_1837_);
v___x_1844_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__1(v_env_1831_, v___y_1836_, v___x_1842_, v___x_1843_, v___x_1834_);
lean_inc_ref(v___x_1844_);
v___x_1845_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
lean_ctor_set(v___x_1845_, 1, v___x_1844_);
lean_ctor_set(v___x_1845_, 2, v___y_1836_);
return v___x_1845_;
}
}
else
{
size_t v___x_1846_; size_t v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1846_ = ((size_t)0ULL);
v___x_1847_ = lean_usize_of_nat(v___x_1837_);
v___x_1848_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerTagAttribute_spec__1(v_env_1831_, v___y_1836_, v___x_1846_, v___x_1847_, v___x_1834_);
lean_inc_ref(v___x_1848_);
v___x_1849_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
lean_ctor_set(v___x_1849_, 2, v___y_1836_);
return v___x_1849_;
}
}
}
v___jp_1852_:
{
lean_object* v___x_1855_; 
v___x_1855_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___redArg(v___x_1851_, v___x_1850_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
v___y_1836_ = v___x_1855_;
goto v___jp_1835_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5(lean_object* v_name_1863_, lean_object* v_decl_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1868_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_1869_ = l_Lean_MessageData_ofName(v_name_1863_);
v___x_1870_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1868_);
lean_ctor_set(v___x_1870_, 1, v___x_1869_);
v___x_1871_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_1872_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1870_);
lean_ctor_set(v___x_1872_, 1, v___x_1871_);
v___x_1873_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1872_, v___y_1865_, v___y_1866_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__5___boxed(lean_object* v_name_1874_, lean_object* v_decl_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lean_registerTagAttribute___lam__5(v_name_1874_, v_decl_1875_, v___y_1876_, v___y_1877_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v_decl_1875_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6(lean_object* v___x_1880_, lean_object* v_x_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1880_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__6___boxed(lean_object* v___x_1885_, lean_object* v_x_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lean_registerTagAttribute___lam__6(v___x_1885_, v_x_1886_, v___y_1887_);
lean_dec_ref(v___y_1887_);
lean_dec_ref(v_x_1886_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7(lean_object* v___x_1890_){
_start:
{
lean_object* v___x_1892_; 
v___x_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1890_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__7___boxed(lean_object* v___x_1893_, lean_object* v___y_1894_){
_start:
{
lean_object* v_res_1895_; 
v_res_1895_ = l_Lean_registerTagAttribute___lam__7(v___x_1893_);
return v_res_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___redArg(lean_object* v_name_1896_, uint8_t v_kind_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___y_1907_; 
v___x_1901_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__1);
v___x_1902_ = l_Lean_MessageData_ofName(v_name_1896_);
v___x_1903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1901_);
lean_ctor_set(v___x_1903_, 1, v___x_1902_);
v___x_1904_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__3);
v___x_1905_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1903_);
lean_ctor_set(v___x_1905_, 1, v___x_1904_);
switch(v_kind_1897_)
{
case 0:
{
lean_object* v___x_1914_; 
v___x_1914_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__0));
v___y_1907_ = v___x_1914_;
goto v___jp_1906_;
}
case 1:
{
lean_object* v___x_1915_; 
v___x_1915_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__1));
v___y_1907_ = v___x_1915_;
goto v___jp_1906_;
}
default: 
{
lean_object* v___x_1916_; 
v___x_1916_ = ((lean_object*)(l_Lean_instToStringAttributeKind___lam__0___closed__2));
v___y_1907_ = v___x_1916_;
goto v___jp_1906_;
}
}
v___jp_1906_:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
lean_inc_ref(v___y_1907_);
v___x_1908_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1908_, 0, v___y_1907_);
v___x_1909_ = l_Lean_MessageData_ofFormat(v___x_1908_);
v___x_1910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1905_);
lean_ctor_set(v___x_1910_, 1, v___x_1909_);
v___x_1911_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_1912_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1910_);
lean_ctor_set(v___x_1912_, 1, v___x_1911_);
v___x_1913_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1912_, v___y_1898_, v___y_1899_);
return v___x_1913_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___redArg___boxed(lean_object* v_name_1917_, lean_object* v_kind_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_){
_start:
{
uint8_t v_kind_boxed_1922_; lean_object* v_res_1923_; 
v_kind_boxed_1922_ = lean_unbox(v_kind_1918_);
v_res_1923_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___redArg(v_name_1917_, v_kind_boxed_1922_, v___y_1919_, v___y_1920_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___redArg(lean_object* v_attrName_1924_, lean_object* v_declName_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; uint8_t v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1929_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1930_ = l_Lean_MessageData_ofName(v_attrName_1924_);
v___x_1931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1929_);
lean_ctor_set(v___x_1931_, 1, v___x_1930_);
v___x_1932_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1931_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
v___x_1934_ = 0;
v___x_1935_ = l_Lean_MessageData_ofConstName(v_declName_1925_, v___x_1934_);
v___x_1936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1933_);
lean_ctor_set(v___x_1936_, 1, v___x_1935_);
v___x_1937_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__5);
v___x_1938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1936_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1938_, v___y_1926_, v___y_1927_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___redArg___boxed(lean_object* v_attrName_1940_, lean_object* v_declName_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___redArg(v_attrName_1940_, v_declName_1941_, v___y_1942_, v___y_1943_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3___redArg(lean_object* v_attrName_1946_, lean_object* v_declName_1947_, lean_object* v_asyncPrefix_x3f_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_){
_start:
{
lean_object* v___y_1953_; 
if (lean_obj_tag(v_asyncPrefix_x3f_1948_) == 0)
{
lean_object* v___x_1966_; 
v___x_1966_ = l_Lean_MessageData_nil;
v___y_1953_ = v___x_1966_;
goto v___jp_1952_;
}
else
{
lean_object* v_val_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
v_val_1967_ = lean_ctor_get(v_asyncPrefix_x3f_1948_, 0);
lean_inc(v_val_1967_);
lean_dec_ref_known(v_asyncPrefix_x3f_1948_, 1);
v___x_1968_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__3);
v___x_1969_ = l_Lean_MessageData_ofName(v_val_1967_);
v___x_1970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1968_);
lean_ctor_set(v___x_1970_, 1, v___x_1969_);
v___x_1971_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___redArg___closed__5);
v___x_1972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1970_);
lean_ctor_set(v___x_1972_, 1, v___x_1971_);
v___y_1953_ = v___x_1972_;
goto v___jp_1952_;
}
v___jp_1952_:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; uint8_t v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1954_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__1);
v___x_1955_ = l_Lean_MessageData_ofName(v_attrName_1946_);
v___x_1956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1954_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
v___x_1957_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___redArg___closed__3);
v___x_1958_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1956_);
lean_ctor_set(v___x_1958_, 1, v___x_1957_);
v___x_1959_ = 0;
v___x_1960_ = l_Lean_MessageData_ofConstName(v_declName_1947_, v___x_1959_);
v___x_1961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1958_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___redArg___closed__1);
v___x_1963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1961_);
lean_ctor_set(v___x_1963_, 1, v___x_1962_);
v___x_1964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
lean_ctor_set(v___x_1964_, 1, v___y_1953_);
v___x_1965_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_1964_, v___y_1949_, v___y_1950_);
return v___x_1965_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3___redArg___boxed(lean_object* v_attrName_1973_, lean_object* v_declName_1974_, lean_object* v_asyncPrefix_x3f_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3___redArg(v_attrName_1973_, v_declName_1974_, v_asyncPrefix_x3f_1975_, v___y_1976_, v___y_1977_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__8(lean_object* v_validate_1980_, lean_object* v_a_1981_, lean_object* v_name_1982_, lean_object* v_decl_1983_, lean_object* v_stx_1984_, uint8_t v_kind_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_2025_; lean_object* v___y_2026_; lean_object* v___y_2027_; lean_object* v___x_2038_; 
v___x_2038_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_1984_, v___y_1986_, v___y_1987_);
if (lean_obj_tag(v___x_2038_) == 0)
{
uint8_t v___x_2039_; uint8_t v___x_2040_; 
lean_dec_ref_known(v___x_2038_, 1);
v___x_2039_ = 0;
v___x_2040_ = l_Lean_instBEqAttributeKind_beq(v_kind_1985_, v___x_2039_);
if (v___x_2040_ == 0)
{
lean_object* v___x_2041_; 
lean_dec(v_decl_1983_);
lean_dec_ref(v_a_1981_);
lean_dec_ref(v_validate_1980_);
v___x_2041_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___redArg(v_name_1982_, v_kind_1985_, v___y_1986_, v___y_1987_);
return v___x_2041_;
}
else
{
goto v___jp_2033_;
}
}
else
{
lean_dec(v_decl_1983_);
lean_dec(v_name_1982_);
lean_dec_ref(v_a_1981_);
lean_dec_ref(v_validate_1980_);
return v___x_2038_;
}
v___jp_1989_:
{
lean_object* v___x_1992_; 
lean_inc(v___y_1991_);
lean_inc_ref(v___y_1990_);
lean_inc(v_decl_1983_);
v___x_1992_ = lean_apply_4(v_validate_1980_, v_decl_1983_, v___y_1990_, v___y_1991_, lean_box(0));
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2022_; 
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2022_ == 0)
{
lean_object* v_unused_2023_; 
v_unused_2023_ = lean_ctor_get(v___x_1992_, 0);
lean_dec(v_unused_2023_);
v___x_1994_ = v___x_1992_;
v_isShared_1995_ = v_isSharedCheck_2022_;
goto v_resetjp_1993_;
}
else
{
lean_dec(v___x_1992_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2022_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1996_; lean_object* v_toEnvExtension_1997_; lean_object* v_env_1998_; lean_object* v_nextMacroScope_1999_; lean_object* v_ngen_2000_; lean_object* v_auxDeclNGen_2001_; lean_object* v_traceState_2002_; lean_object* v_messages_2003_; lean_object* v_infoState_2004_; lean_object* v_snapshotTasks_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2020_; 
v___x_1996_ = lean_st_ref_take(v___y_1991_);
v_toEnvExtension_1997_ = lean_ctor_get(v_a_1981_, 0);
v_env_1998_ = lean_ctor_get(v___x_1996_, 0);
v_nextMacroScope_1999_ = lean_ctor_get(v___x_1996_, 1);
v_ngen_2000_ = lean_ctor_get(v___x_1996_, 2);
v_auxDeclNGen_2001_ = lean_ctor_get(v___x_1996_, 3);
v_traceState_2002_ = lean_ctor_get(v___x_1996_, 4);
v_messages_2003_ = lean_ctor_get(v___x_1996_, 6);
v_infoState_2004_ = lean_ctor_get(v___x_1996_, 7);
v_snapshotTasks_2005_ = lean_ctor_get(v___x_1996_, 8);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2020_ == 0)
{
lean_object* v_unused_2021_; 
v_unused_2021_ = lean_ctor_get(v___x_1996_, 5);
lean_dec(v_unused_2021_);
v___x_2007_ = v___x_1996_;
v_isShared_2008_ = v_isSharedCheck_2020_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_snapshotTasks_2005_);
lean_inc(v_infoState_2004_);
lean_inc(v_messages_2003_);
lean_inc(v_traceState_2002_);
lean_inc(v_auxDeclNGen_2001_);
lean_inc(v_ngen_2000_);
lean_inc(v_nextMacroScope_1999_);
lean_inc(v_env_1998_);
lean_dec(v___x_1996_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2020_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v_asyncMode_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2014_; 
v_asyncMode_2009_ = lean_ctor_get(v_toEnvExtension_1997_, 2);
lean_inc(v_asyncMode_2009_);
v___x_2010_ = lean_box(0);
lean_inc(v_decl_1983_);
v___x_2011_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_a_1981_, v_env_1998_, v_decl_1983_, v_asyncMode_2009_, v_decl_1983_);
lean_dec(v_asyncMode_2009_);
v___x_2012_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 5, v___x_2012_);
lean_ctor_set(v___x_2007_, 0, v___x_2011_);
v___x_2014_ = v___x_2007_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v___x_2011_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_nextMacroScope_1999_);
lean_ctor_set(v_reuseFailAlloc_2019_, 2, v_ngen_2000_);
lean_ctor_set(v_reuseFailAlloc_2019_, 3, v_auxDeclNGen_2001_);
lean_ctor_set(v_reuseFailAlloc_2019_, 4, v_traceState_2002_);
lean_ctor_set(v_reuseFailAlloc_2019_, 5, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2019_, 6, v_messages_2003_);
lean_ctor_set(v_reuseFailAlloc_2019_, 7, v_infoState_2004_);
lean_ctor_set(v_reuseFailAlloc_2019_, 8, v_snapshotTasks_2005_);
v___x_2014_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
lean_object* v___x_2015_; lean_object* v___x_2017_; 
v___x_2015_ = lean_st_ref_put(v___y_1991_, v___x_2014_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_2010_);
v___x_2017_ = v___x_1994_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2010_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
}
else
{
lean_dec(v_decl_1983_);
lean_dec_ref(v_a_1981_);
return v___x_1992_;
}
}
v___jp_2024_:
{
lean_object* v_toEnvExtension_2028_; lean_object* v_asyncMode_2029_; uint8_t v___x_2030_; 
v_toEnvExtension_2028_ = lean_ctor_get(v_a_1981_, 0);
v_asyncMode_2029_ = lean_ctor_get(v_toEnvExtension_2028_, 2);
lean_inc(v_decl_1983_);
lean_inc_ref(v___y_2025_);
v___x_2030_ = l_Lean_EnvExtension_asyncMayModify___redArg(v___y_2025_, v_decl_1983_, v_asyncMode_2029_);
if (v___x_2030_ == 0)
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
lean_dec_ref(v_a_1981_);
lean_dec_ref(v_validate_1980_);
v___x_2031_ = l_Lean_Environment_asyncPrefix_x3f(v___y_2025_);
v___x_2032_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3___redArg(v_name_1982_, v_decl_1983_, v___x_2031_, v___y_2026_, v___y_2027_);
return v___x_2032_;
}
else
{
lean_dec_ref(v___y_2025_);
lean_dec(v_name_1982_);
v___y_1990_ = v___y_2026_;
v___y_1991_ = v___y_2027_;
goto v___jp_1989_;
}
}
v___jp_2033_:
{
lean_object* v___x_2034_; lean_object* v_env_2035_; lean_object* v___x_2036_; 
v___x_2034_ = lean_st_ref_get(v___y_1987_);
v_env_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc_ref(v_env_2035_);
lean_dec(v___x_2034_);
v___x_2036_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2035_, v_decl_1983_);
if (lean_obj_tag(v___x_2036_) == 0)
{
v___y_2025_ = v_env_2035_;
v___y_2026_ = v___y_1986_;
v___y_2027_ = v___y_1987_;
goto v___jp_2024_;
}
else
{
lean_object* v___x_2037_; 
lean_dec_ref_known(v___x_2036_, 1);
lean_dec_ref(v_env_2035_);
lean_dec_ref(v_a_1981_);
lean_dec_ref(v_validate_1980_);
v___x_2037_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___redArg(v_name_1982_, v_decl_1983_, v___y_1986_, v___y_1987_);
return v___x_2037_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___lam__8___boxed(lean_object* v_validate_2042_, lean_object* v_a_2043_, lean_object* v_name_2044_, lean_object* v_decl_2045_, lean_object* v_stx_2046_, lean_object* v_kind_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
uint8_t v_kind_boxed_2051_; lean_object* v_res_2052_; 
v_kind_boxed_2051_ = lean_unbox(v_kind_2047_);
v_res_2052_ = l_Lean_registerTagAttribute___lam__8(v_validate_2042_, v_a_2043_, v_name_2044_, v_decl_2045_, v_stx_2046_, v_kind_boxed_2051_, v___y_2048_, v___y_2049_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
return v_res_2052_;
}
}
static lean_object* _init_l_Lean_registerTagAttribute___closed__6(void){
_start:
{
lean_object* v___x_2060_; lean_object* v___f_2061_; 
v___x_2060_ = l_Lean_NameSet_empty;
v___f_2061_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__6___boxed), 4, 1);
lean_closure_set(v___f_2061_, 0, v___x_2060_);
return v___f_2061_;
}
}
static lean_object* _init_l_Lean_registerTagAttribute___closed__7(void){
_start:
{
lean_object* v___x_2062_; lean_object* v___f_2063_; 
v___x_2062_ = l_Lean_NameSet_empty;
v___f_2063_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__7___boxed), 2, 1);
lean_closure_set(v___f_2063_, 0, v___x_2062_);
return v___f_2063_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute(lean_object* v_name_2066_, lean_object* v_descr_2067_, lean_object* v_validate_2068_, lean_object* v_ref_2069_, uint8_t v_applicationTime_2070_, lean_object* v_asyncMode_2071_){
_start:
{
lean_object* v___f_2073_; lean_object* v___f_2074_; lean_object* v___f_2075_; lean_object* v___f_2076_; lean_object* v___f_2077_; lean_object* v___f_2078_; lean_object* v___f_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___f_2073_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__0));
v___f_2074_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__2));
v___f_2075_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__4));
v___f_2076_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__5));
lean_inc(v_name_2066_);
v___f_2077_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__5___boxed), 5, 1);
lean_closure_set(v___f_2077_, 0, v_name_2066_);
v___f_2078_ = lean_obj_once(&l_Lean_registerTagAttribute___closed__6, &l_Lean_registerTagAttribute___closed__6_once, _init_l_Lean_registerTagAttribute___closed__6);
v___f_2079_ = lean_obj_once(&l_Lean_registerTagAttribute___closed__7, &l_Lean_registerTagAttribute___closed__7_once, _init_l_Lean_registerTagAttribute___closed__7);
v___x_2080_ = ((lean_object*)(l_Lean_registerTagAttribute___closed__8));
lean_inc(v_ref_2069_);
v___x_2081_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2081_, 0, v_ref_2069_);
lean_ctor_set(v___x_2081_, 1, v___f_2079_);
lean_ctor_set(v___x_2081_, 2, v___f_2078_);
lean_ctor_set(v___x_2081_, 3, v___f_2076_);
lean_ctor_set(v___x_2081_, 4, v___f_2075_);
lean_ctor_set(v___x_2081_, 5, v___f_2074_);
lean_ctor_set(v___x_2081_, 6, v_asyncMode_2071_);
lean_ctor_set(v___x_2081_, 7, v___x_2080_);
v___x_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
lean_ctor_set(v___x_2082_, 1, v___f_2073_);
v___x_2083_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2082_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v_a_2084_; lean_object* v___f_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v_a_2084_ = lean_ctor_get(v___x_2083_, 0);
lean_inc_n(v_a_2084_, 2);
lean_dec_ref_known(v___x_2083_, 1);
lean_inc(v_name_2066_);
v___f_2085_ = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lam__8___boxed), 9, 3);
lean_closure_set(v___f_2085_, 0, v_validate_2068_);
lean_closure_set(v___f_2085_, 1, v_a_2084_);
lean_closure_set(v___f_2085_, 2, v_name_2066_);
v___x_2086_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2086_, 0, v_ref_2069_);
lean_ctor_set(v___x_2086_, 1, v_name_2066_);
lean_ctor_set(v___x_2086_, 2, v_descr_2067_);
lean_ctor_set_uint8(v___x_2086_, sizeof(void*)*3, v_applicationTime_2070_);
v___x_2087_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2086_);
lean_ctor_set(v___x_2087_, 1, v___f_2085_);
lean_ctor_set(v___x_2087_, 2, v___f_2077_);
lean_inc_ref(v___x_2087_);
v___x_2088_ = l_Lean_registerBuiltinAttribute(v___x_2087_);
if (lean_obj_tag(v___x_2088_) == 0)
{
lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2096_; 
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2096_ == 0)
{
lean_object* v_unused_2097_; 
v_unused_2097_ = lean_ctor_get(v___x_2088_, 0);
lean_dec(v_unused_2097_);
v___x_2090_ = v___x_2088_;
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
else
{
lean_dec(v___x_2088_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2087_);
lean_ctor_set(v___x_2092_, 1, v_a_2084_);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 0, v___x_2092_);
v___x_2094_ = v___x_2090_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
else
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2105_; 
lean_dec_ref_known(v___x_2087_, 3);
lean_dec(v_a_2084_);
v_a_2098_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2100_ = v___x_2088_;
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2088_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2103_; 
if (v_isShared_2101_ == 0)
{
v___x_2103_ = v___x_2100_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_a_2098_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec_ref(v___f_2077_);
lean_dec(v_ref_2069_);
lean_dec_ref(v_validate_2068_);
lean_dec_ref(v_descr_2067_);
lean_dec(v_name_2066_);
v_a_2106_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2083_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2083_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTagAttribute___boxed(lean_object* v_name_2114_, lean_object* v_descr_2115_, lean_object* v_validate_2116_, lean_object* v_ref_2117_, lean_object* v_applicationTime_2118_, lean_object* v_asyncMode_2119_, lean_object* v___y_2120_){
_start:
{
uint8_t v_applicationTime_boxed_2121_; lean_object* v_res_2122_; 
v_applicationTime_boxed_2121_ = lean_unbox(v_applicationTime_2118_);
v_res_2122_ = l_Lean_registerTagAttribute(v_name_2114_, v_descr_2115_, v_validate_2116_, v_ref_2117_, v_applicationTime_boxed_2121_, v_asyncMode_2119_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2(lean_object* v_n_2123_, lean_object* v_as_2124_, lean_object* v_lo_2125_, lean_object* v_hi_2126_, lean_object* v_w_2127_, lean_object* v_hlo_2128_, lean_object* v_hhi_2129_){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___redArg(v_n_2123_, v_as_2124_, v_lo_2125_, v_hi_2126_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2___boxed(lean_object* v_n_2131_, lean_object* v_as_2132_, lean_object* v_lo_2133_, lean_object* v_hi_2134_, lean_object* v_w_2135_, lean_object* v_hlo_2136_, lean_object* v_hhi_2137_){
_start:
{
lean_object* v_res_2138_; 
v_res_2138_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2(v_n_2131_, v_as_2132_, v_lo_2133_, v_hi_2134_, v_w_2135_, v_hlo_2136_, v_hhi_2137_);
lean_dec(v_hi_2134_);
lean_dec(v_n_2131_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3(lean_object* v_00_u03b1_2139_, lean_object* v_attrName_2140_, lean_object* v_declName_2141_, lean_object* v_asyncPrefix_x3f_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3___redArg(v_attrName_2140_, v_declName_2141_, v_asyncPrefix_x3f_2142_, v___y_2143_, v___y_2144_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3___boxed(lean_object* v_00_u03b1_2147_, lean_object* v_attrName_2148_, lean_object* v_declName_2149_, lean_object* v_asyncPrefix_x3f_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_registerTagAttribute_spec__3(v_00_u03b1_2147_, v_attrName_2148_, v_declName_2149_, v_asyncPrefix_x3f_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4(lean_object* v_00_u03b1_2155_, lean_object* v_attrName_2156_, lean_object* v_declName_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v___x_2161_; 
v___x_2161_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___redArg(v_attrName_2156_, v_declName_2157_, v___y_2158_, v___y_2159_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___boxed(lean_object* v_00_u03b1_2162_, lean_object* v_attrName_2163_, lean_object* v_declName_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4(v_00_u03b1_2162_, v_attrName_2163_, v_declName_2164_, v___y_2165_, v___y_2166_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5(lean_object* v_00_u03b1_2169_, lean_object* v_name_2170_, uint8_t v_kind_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___redArg(v_name_2170_, v_kind_2171_, v___y_2172_, v___y_2173_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___boxed(lean_object* v_00_u03b1_2176_, lean_object* v_name_2177_, lean_object* v_kind_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_){
_start:
{
uint8_t v_kind_boxed_2182_; lean_object* v_res_2183_; 
v_kind_boxed_2182_ = lean_unbox(v_kind_2178_);
v_res_2183_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5(v_00_u03b1_2176_, v_name_2177_, v_kind_boxed_2182_, v___y_2179_, v___y_2180_);
lean_dec(v___y_2180_);
lean_dec_ref(v___y_2179_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2(lean_object* v_n_2184_, lean_object* v_lo_2185_, lean_object* v_hi_2186_, lean_object* v_hhi_2187_, lean_object* v_pivot_2188_, lean_object* v_as_2189_, lean_object* v_i_2190_, lean_object* v_k_2191_, lean_object* v_ilo_2192_, lean_object* v_ik_2193_, lean_object* v_w_2194_){
_start:
{
lean_object* v___x_2195_; 
v___x_2195_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2___redArg(v_hi_2186_, v_pivot_2188_, v_as_2189_, v_i_2190_, v_k_2191_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2___boxed(lean_object* v_n_2196_, lean_object* v_lo_2197_, lean_object* v_hi_2198_, lean_object* v_hhi_2199_, lean_object* v_pivot_2200_, lean_object* v_as_2201_, lean_object* v_i_2202_, lean_object* v_k_2203_, lean_object* v_ilo_2204_, lean_object* v_ik_2205_, lean_object* v_w_2206_){
_start:
{
lean_object* v_res_2207_; 
v_res_2207_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerTagAttribute_spec__2_spec__2(v_n_2196_, v_lo_2197_, v_hi_2198_, v_hhi_2199_, v_pivot_2200_, v_as_2201_, v_i_2202_, v_k_2203_, v_ilo_2204_, v_ik_2205_, v_w_2206_);
lean_dec(v_pivot_2200_);
lean_dec(v_hi_2198_);
lean_dec(v_lo_2197_);
lean_dec(v_n_2196_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__0(lean_object* v_attr_2208_, lean_object* v_decl_2209_, lean_object* v_env_2210_){
_start:
{
lean_object* v_ext_2211_; lean_object* v_toEnvExtension_2212_; lean_object* v_asyncMode_2213_; lean_object* v___x_2214_; 
v_ext_2211_ = lean_ctor_get(v_attr_2208_, 1);
lean_inc_ref(v_ext_2211_);
lean_dec_ref(v_attr_2208_);
v_toEnvExtension_2212_ = lean_ctor_get(v_ext_2211_, 0);
v_asyncMode_2213_ = lean_ctor_get(v_toEnvExtension_2212_, 2);
lean_inc(v_asyncMode_2213_);
lean_inc(v_decl_2209_);
v___x_2214_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_2211_, v_env_2210_, v_decl_2209_, v_asyncMode_2213_, v_decl_2209_);
lean_dec(v_asyncMode_2213_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__1(lean_object* v_modifyEnv_2215_, lean_object* v___f_2216_, lean_object* v_____r_2217_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = lean_apply_1(v_modifyEnv_2215_, v___f_2216_);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__2(lean_object* v_attr_2219_, lean_object* v_env_2220_, lean_object* v_decl_2221_, lean_object* v_inst_2222_, lean_object* v_inst_2223_, lean_object* v_toBind_2224_, lean_object* v___f_2225_, lean_object* v_modifyEnv_2226_, lean_object* v___f_2227_, lean_object* v_____r_2228_){
_start:
{
lean_object* v_ext_2229_; lean_object* v_toEnvExtension_2230_; lean_object* v_attr_2231_; lean_object* v_asyncMode_2232_; uint8_t v___x_2233_; 
v_ext_2229_ = lean_ctor_get(v_attr_2219_, 1);
v_toEnvExtension_2230_ = lean_ctor_get(v_ext_2229_, 0);
lean_inc_ref(v_toEnvExtension_2230_);
v_attr_2231_ = lean_ctor_get(v_attr_2219_, 0);
lean_inc_ref(v_attr_2231_);
lean_dec_ref(v_attr_2219_);
v_asyncMode_2232_ = lean_ctor_get(v_toEnvExtension_2230_, 2);
lean_inc(v_asyncMode_2232_);
lean_dec_ref(v_toEnvExtension_2230_);
lean_inc(v_decl_2221_);
lean_inc_ref(v_env_2220_);
v___x_2233_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_2220_, v_decl_2221_, v_asyncMode_2232_);
lean_dec(v_asyncMode_2232_);
if (v___x_2233_ == 0)
{
lean_object* v_toAttributeImplCore_2234_; lean_object* v_name_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
lean_dec_ref(v___f_2227_);
lean_dec(v_modifyEnv_2226_);
v_toAttributeImplCore_2234_ = lean_ctor_get(v_attr_2231_, 0);
lean_inc_ref(v_toAttributeImplCore_2234_);
lean_dec_ref(v_attr_2231_);
v_name_2235_ = lean_ctor_get(v_toAttributeImplCore_2234_, 1);
lean_inc(v_name_2235_);
lean_dec_ref(v_toAttributeImplCore_2234_);
v___x_2236_ = l_Lean_Environment_asyncPrefix_x3f(v_env_2220_);
v___x_2237_ = l_Lean_throwAttrNotInAsyncCtx___redArg(v_inst_2222_, v_inst_2223_, v_name_2235_, v_decl_2221_, v___x_2236_);
v___x_2238_ = lean_apply_4(v_toBind_2224_, lean_box(0), lean_box(0), v___x_2237_, v___f_2225_);
return v___x_2238_;
}
else
{
lean_object* v___x_2239_; 
lean_dec_ref(v_attr_2231_);
lean_dec(v___f_2225_);
lean_dec(v_toBind_2224_);
lean_dec_ref(v_inst_2223_);
lean_dec_ref(v_inst_2222_);
lean_dec(v_decl_2221_);
lean_dec_ref(v_env_2220_);
v___x_2239_ = lean_apply_1(v_modifyEnv_2226_, v___f_2227_);
return v___x_2239_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__3(lean_object* v___f_2240_, lean_object* v_____r_2241_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = lean_apply_1(v___f_2240_, v_____r_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg___lam__4(lean_object* v_attr_2243_, lean_object* v_decl_2244_, lean_object* v_inst_2245_, lean_object* v_inst_2246_, lean_object* v_toBind_2247_, lean_object* v___f_2248_, lean_object* v_modifyEnv_2249_, lean_object* v___f_2250_, lean_object* v_env_2251_){
_start:
{
lean_object* v___f_2252_; lean_object* v___x_2253_; 
lean_inc_ref(v___f_2250_);
lean_inc(v_modifyEnv_2249_);
lean_inc(v___f_2248_);
lean_inc(v_toBind_2247_);
lean_inc_ref(v_inst_2246_);
lean_inc_ref(v_inst_2245_);
lean_inc(v_decl_2244_);
lean_inc_ref(v_env_2251_);
lean_inc_ref(v_attr_2243_);
v___f_2252_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__2), 10, 9);
lean_closure_set(v___f_2252_, 0, v_attr_2243_);
lean_closure_set(v___f_2252_, 1, v_env_2251_);
lean_closure_set(v___f_2252_, 2, v_decl_2244_);
lean_closure_set(v___f_2252_, 3, v_inst_2245_);
lean_closure_set(v___f_2252_, 4, v_inst_2246_);
lean_closure_set(v___f_2252_, 5, v_toBind_2247_);
lean_closure_set(v___f_2252_, 6, v___f_2248_);
lean_closure_set(v___f_2252_, 7, v_modifyEnv_2249_);
lean_closure_set(v___f_2252_, 8, v___f_2250_);
v___x_2253_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2251_, v_decl_2244_);
if (lean_obj_tag(v___x_2253_) == 0)
{
lean_object* v___x_2254_; lean_object* v___x_2255_; 
lean_dec_ref(v___f_2252_);
v___x_2254_ = lean_box(0);
v___x_2255_ = l_Lean_TagAttribute_setTag___redArg___lam__2(v_attr_2243_, v_env_2251_, v_decl_2244_, v_inst_2245_, v_inst_2246_, v_toBind_2247_, v___f_2248_, v_modifyEnv_2249_, v___f_2250_, v___x_2254_);
return v___x_2255_;
}
else
{
lean_object* v_attr_2256_; lean_object* v_toAttributeImplCore_2257_; lean_object* v_name_2258_; lean_object* v___f_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
lean_dec_ref_known(v___x_2253_, 1);
lean_dec_ref(v_env_2251_);
lean_dec_ref(v___f_2250_);
lean_dec(v_modifyEnv_2249_);
lean_dec(v___f_2248_);
v_attr_2256_ = lean_ctor_get(v_attr_2243_, 0);
lean_inc_ref(v_attr_2256_);
lean_dec_ref(v_attr_2243_);
v_toAttributeImplCore_2257_ = lean_ctor_get(v_attr_2256_, 0);
lean_inc_ref(v_toAttributeImplCore_2257_);
lean_dec_ref(v_attr_2256_);
v_name_2258_ = lean_ctor_get(v_toAttributeImplCore_2257_, 1);
lean_inc(v_name_2258_);
lean_dec_ref(v_toAttributeImplCore_2257_);
v___f_2259_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2259_, 0, v___f_2252_);
v___x_2260_ = l_Lean_throwAttrDeclInImportedModule___redArg(v_inst_2245_, v_inst_2246_, v_name_2258_, v_decl_2244_);
v___x_2261_ = lean_apply_4(v_toBind_2247_, lean_box(0), lean_box(0), v___x_2260_, v___f_2259_);
return v___x_2261_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___redArg(lean_object* v_inst_2262_, lean_object* v_inst_2263_, lean_object* v_inst_2264_, lean_object* v_attr_2265_, lean_object* v_decl_2266_){
_start:
{
lean_object* v_toBind_2267_; lean_object* v_getEnv_2268_; lean_object* v_modifyEnv_2269_; lean_object* v___f_2270_; lean_object* v___f_2271_; lean_object* v___f_2272_; lean_object* v___x_2273_; 
v_toBind_2267_ = lean_ctor_get(v_inst_2262_, 1);
lean_inc_n(v_toBind_2267_, 2);
v_getEnv_2268_ = lean_ctor_get(v_inst_2264_, 0);
lean_inc(v_getEnv_2268_);
v_modifyEnv_2269_ = lean_ctor_get(v_inst_2264_, 1);
lean_inc_n(v_modifyEnv_2269_, 2);
lean_dec_ref(v_inst_2264_);
lean_inc(v_decl_2266_);
lean_inc_ref(v_attr_2265_);
v___f_2270_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2270_, 0, v_attr_2265_);
lean_closure_set(v___f_2270_, 1, v_decl_2266_);
lean_inc_ref(v___f_2270_);
v___f_2271_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2271_, 0, v_modifyEnv_2269_);
lean_closure_set(v___f_2271_, 1, v___f_2270_);
v___f_2272_ = lean_alloc_closure((void*)(l_Lean_TagAttribute_setTag___redArg___lam__4), 9, 8);
lean_closure_set(v___f_2272_, 0, v_attr_2265_);
lean_closure_set(v___f_2272_, 1, v_decl_2266_);
lean_closure_set(v___f_2272_, 2, v_inst_2262_);
lean_closure_set(v___f_2272_, 3, v_inst_2263_);
lean_closure_set(v___f_2272_, 4, v_toBind_2267_);
lean_closure_set(v___f_2272_, 5, v___f_2271_);
lean_closure_set(v___f_2272_, 6, v_modifyEnv_2269_);
lean_closure_set(v___f_2272_, 7, v___f_2270_);
v___x_2273_ = lean_apply_4(v_toBind_2267_, lean_box(0), lean_box(0), v_getEnv_2268_, v___f_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag(lean_object* v_m_2274_, lean_object* v_inst_2275_, lean_object* v_inst_2276_, lean_object* v_inst_2277_, lean_object* v_attr_2278_, lean_object* v_decl_2279_){
_start:
{
lean_object* v___x_2280_; 
v___x_2280_ = l_Lean_TagAttribute_setTag___redArg(v_inst_2275_, v_inst_2276_, v_inst_2277_, v_attr_2278_, v_decl_2279_);
return v___x_2280_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(lean_object* v___y_2281_, lean_object* v_as_2282_, lean_object* v_k_2283_, lean_object* v_x_2284_, lean_object* v_x_2285_){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v_m_2288_; lean_object* v_a_2289_; uint8_t v___x_2290_; 
v___x_2286_ = lean_nat_add(v_x_2284_, v_x_2285_);
v___x_2287_ = lean_unsigned_to_nat(1u);
v_m_2288_ = lean_nat_shiftr(v___x_2286_, v___x_2287_);
lean_dec(v___x_2286_);
v_a_2289_ = lean_array_fget_borrowed(v_as_2282_, v_m_2288_);
v___x_2290_ = l_Lean_Name_quickLt(v_a_2289_, v_k_2283_);
if (v___x_2290_ == 0)
{
lean_object* v___x_2291_; uint8_t v___x_2292_; 
lean_dec(v_x_2285_);
v___x_2291_ = lean_unsigned_to_nat(0u);
v___x_2292_ = l_Lean_Name_quickLt(v_k_2283_, v_a_2289_);
if (v___x_2292_ == 0)
{
uint8_t v___x_2293_; 
lean_dec(v_m_2288_);
lean_dec(v_x_2284_);
v___x_2293_ = lean_nat_dec_le(v___x_2291_, v___y_2281_);
return v___x_2293_;
}
else
{
uint8_t v___x_2294_; lean_object* v___x_2295_; uint8_t v___y_2297_; 
v___x_2294_ = lean_nat_dec_eq(v_m_2288_, v___x_2291_);
v___x_2295_ = lean_nat_sub(v_m_2288_, v___x_2287_);
lean_dec(v_m_2288_);
if (v___x_2294_ == 0)
{
uint8_t v___x_2299_; 
v___x_2299_ = lean_nat_dec_lt(v___x_2295_, v_x_2284_);
v___y_2297_ = v___x_2299_;
goto v___jp_2296_;
}
else
{
v___y_2297_ = v___x_2294_;
goto v___jp_2296_;
}
v___jp_2296_:
{
if (v___y_2297_ == 0)
{
v_x_2285_ = v___x_2295_;
goto _start;
}
else
{
lean_dec(v___x_2295_);
lean_dec(v_x_2284_);
return v___x_2290_;
}
}
}
}
else
{
lean_object* v___x_2300_; uint8_t v___x_2301_; 
lean_dec(v_x_2284_);
v___x_2300_ = lean_nat_add(v_m_2288_, v___x_2287_);
lean_dec(v_m_2288_);
v___x_2301_ = lean_nat_dec_le(v___x_2300_, v_x_2285_);
if (v___x_2301_ == 0)
{
lean_dec(v___x_2300_);
lean_dec(v_x_2285_);
return v___x_2301_;
}
else
{
v_x_2284_ = v___x_2300_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg___boxed(lean_object* v___y_2303_, lean_object* v_as_2304_, lean_object* v_k_2305_, lean_object* v_x_2306_, lean_object* v_x_2307_){
_start:
{
uint8_t v_res_2308_; lean_object* v_r_2309_; 
v_res_2308_ = l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(v___y_2303_, v_as_2304_, v_k_2305_, v_x_2306_, v_x_2307_);
lean_dec(v_k_2305_);
lean_dec_ref(v_as_2304_);
lean_dec(v___y_2303_);
v_r_2309_ = lean_box(v_res_2308_);
return v_r_2309_;
}
}
LEAN_EXPORT uint8_t l_Lean_TagAttribute_hasTag(lean_object* v_attr_2310_, lean_object* v_env_2311_, lean_object* v_decl_2312_){
_start:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = lean_box(1);
v___x_2314_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2311_, v_decl_2312_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_ext_2315_; lean_object* v_toEnvExtension_2316_; lean_object* v_asyncMode_2317_; lean_object* v___x_2318_; uint8_t v___x_2319_; 
v_ext_2315_ = lean_ctor_get(v_attr_2310_, 1);
v_toEnvExtension_2316_ = lean_ctor_get(v_ext_2315_, 0);
v_asyncMode_2317_ = lean_ctor_get(v_toEnvExtension_2316_, 2);
lean_inc(v_decl_2312_);
v___x_2318_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2313_, v_ext_2315_, v_env_2311_, v_asyncMode_2317_, v_decl_2312_);
v___x_2319_ = l_Lean_NameSet_contains(v___x_2318_, v_decl_2312_);
lean_dec(v_decl_2312_);
lean_dec(v___x_2318_);
return v___x_2319_;
}
else
{
lean_object* v_val_2320_; lean_object* v_ext_2321_; uint8_t v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; uint8_t v___x_2326_; 
v_val_2320_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_val_2320_);
lean_dec_ref_known(v___x_2314_, 1);
v_ext_2321_ = lean_ctor_get(v_attr_2310_, 1);
v___x_2322_ = 0;
v___x_2323_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2313_, v_ext_2321_, v_env_2311_, v_val_2320_, v___x_2322_);
lean_dec(v_val_2320_);
lean_dec_ref(v_env_2311_);
v___x_2324_ = lean_unsigned_to_nat(0u);
v___x_2325_ = lean_array_get_size(v___x_2323_);
v___x_2326_ = lean_nat_dec_lt(v___x_2324_, v___x_2325_);
if (v___x_2326_ == 0)
{
lean_dec_ref(v___x_2323_);
lean_dec(v_decl_2312_);
return v___x_2326_;
}
else
{
lean_object* v___x_2327_; lean_object* v___x_2328_; uint8_t v___x_2329_; 
v___x_2327_ = lean_unsigned_to_nat(1u);
v___x_2328_ = lean_nat_sub(v___x_2325_, v___x_2327_);
v___x_2329_ = lean_nat_dec_le(v___x_2324_, v___x_2328_);
if (v___x_2329_ == 0)
{
lean_dec(v___x_2328_);
lean_dec_ref(v___x_2323_);
lean_dec(v_decl_2312_);
return v___x_2329_;
}
else
{
uint8_t v___x_2330_; 
lean_inc(v___x_2328_);
v___x_2330_ = l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(v___x_2328_, v___x_2323_, v_decl_2312_, v___x_2324_, v___x_2328_);
lean_dec(v_decl_2312_);
lean_dec_ref(v___x_2323_);
lean_dec(v___x_2328_);
return v___x_2330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_hasTag___boxed(lean_object* v_attr_2331_, lean_object* v_env_2332_, lean_object* v_decl_2333_){
_start:
{
uint8_t v_res_2334_; lean_object* v_r_2335_; 
v_res_2334_ = l_Lean_TagAttribute_hasTag(v_attr_2331_, v_env_2332_, v_decl_2333_);
lean_dec_ref(v_attr_2331_);
v_r_2335_ = lean_box(v_res_2334_);
return v_r_2335_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0(lean_object* v___y_2336_, lean_object* v_as_2337_, lean_object* v_k_2338_, lean_object* v_x_2339_, lean_object* v_x_2340_, lean_object* v_x_2341_){
_start:
{
uint8_t v___x_2342_; 
v___x_2342_ = l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___redArg(v___y_2336_, v_as_2337_, v_k_2338_, v_x_2339_, v_x_2340_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0___boxed(lean_object* v___y_2343_, lean_object* v_as_2344_, lean_object* v_k_2345_, lean_object* v_x_2346_, lean_object* v_x_2347_, lean_object* v_x_2348_){
_start:
{
uint8_t v_res_2349_; lean_object* v_r_2350_; 
v_res_2349_ = l_Array_binSearchAux___at___00Lean_TagAttribute_hasTag_spec__0(v___y_2343_, v_as_2344_, v_k_2345_, v_x_2346_, v_x_2347_, v_x_2348_);
lean_dec(v_k_2345_);
lean_dec_ref(v_as_2344_);
lean_dec(v___y_2343_);
v_r_2350_ = lean_box(v_res_2349_);
return v_r_2350_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0(lean_object* v_x_2351_, lean_object* v___y_2352_){
_start:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2354_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1));
v___x_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2354_);
return v___x_2355_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0___boxed(lean_object* v_x_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__0(v_x_2356_, v___y_2357_);
lean_dec_ref(v___y_2357_);
lean_dec_ref(v_x_2356_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1(lean_object* v_s_2360_, lean_object* v_x_2361_){
_start:
{
lean_inc_ref(v_s_2360_);
return v_s_2360_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1___boxed(lean_object* v_s_2362_, lean_object* v_x_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__1(v_s_2362_, v_x_2363_);
lean_dec_ref(v_x_2363_);
lean_dec_ref(v_s_2362_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2(lean_object* v_x_2369_, lean_object* v_x_2370_){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1));
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___boxed(lean_object* v_x_2372_, lean_object* v_x_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2(v_x_2372_, v_x_2373_);
lean_dec_ref(v_x_2373_);
lean_dec_ref(v_x_2372_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3(lean_object* v_x_2375_){
_start:
{
lean_object* v___x_2376_; 
v___x_2376_ = lean_box(0);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3___boxed(lean_object* v_x_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = l_Lean_instInhabitedParametricAttribute_default___redArg___lam__3(v_x_2377_);
lean_dec_ref(v_x_2377_);
return v_res_2378_;
}
}
static lean_object* _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4(void){
_start:
{
lean_object* v___f_2383_; lean_object* v___f_2384_; lean_object* v___f_2385_; lean_object* v___f_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___f_2383_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__3));
v___f_2384_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__2));
v___f_2385_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__1));
v___f_2386_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___closed__0));
v___x_2387_ = lean_box(0);
v___x_2388_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__4, &l_Lean_instInhabitedTagAttribute_default___closed__4_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__4);
v___x_2389_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2388_);
lean_ctor_set(v___x_2389_, 1, v___x_2387_);
lean_ctor_set(v___x_2389_, 2, v___f_2386_);
lean_ctor_set(v___x_2389_, 3, v___f_2385_);
lean_ctor_set(v___x_2389_, 4, v___f_2384_);
lean_ctor_set(v___x_2389_, 5, v___f_2383_);
return v___x_2389_;
}
}
static lean_object* _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5(void){
_start:
{
uint8_t v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2390_ = 0;
v___x_2391_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4, &l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4_once, _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__4);
v___x_2392_ = ((lean_object*)(l_Lean_instInhabitedAttributeImpl_default));
v___x_2393_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2393_, 0, v___x_2392_);
lean_ctor_set(v___x_2393_, 1, v___x_2391_);
lean_ctor_set_uint8(v___x_2393_, sizeof(void*)*2, v___x_2390_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg(){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5, &l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5_once, _init_l_Lean_instInhabitedParametricAttribute_default___redArg___closed__5);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default___redArg___boxed(lean_object* v___dummy_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l_Lean_instInhabitedParametricAttribute_default___redArg();
return v_res_2397_;
}
}
static lean_object* _init_l_Lean_instInhabitedParametricAttribute_default___closed__0(void){
_start:
{
lean_object* v___x_2398_; 
v___x_2398_ = l_Lean_instInhabitedParametricAttribute_default___redArg();
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute_default(lean_object* v_00_u03b1_2399_){
_start:
{
lean_object* v___x_2400_; 
v___x_2400_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___closed__0, &l_Lean_instInhabitedParametricAttribute_default___closed__0_once, _init_l_Lean_instInhabitedParametricAttribute_default___closed__0);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg(){
_start:
{
lean_object* v___x_2402_; 
v___x_2402_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___closed__0, &l_Lean_instInhabitedParametricAttribute_default___closed__0_once, _init_l_Lean_instInhabitedParametricAttribute_default___closed__0);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute___redArg___boxed(lean_object* v___dummy_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Lean_instInhabitedParametricAttribute___redArg();
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedParametricAttribute(lean_object* v_a_2405_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_obj_once(&l_Lean_instInhabitedParametricAttribute_default___closed__0, &l_Lean_instInhabitedParametricAttribute_default___closed__0_once, _init_l_Lean_instInhabitedParametricAttribute_default___closed__0);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__0(lean_object* v_x_2407_, lean_object* v_p_2408_){
_start:
{
lean_object* v_fst_2409_; lean_object* v_snd_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2427_; 
v_fst_2409_ = lean_ctor_get(v_x_2407_, 0);
v_snd_2410_ = lean_ctor_get(v_x_2407_, 1);
v_isSharedCheck_2427_ = !lean_is_exclusive(v_x_2407_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2412_ = v_x_2407_;
v_isShared_2413_ = v_isSharedCheck_2427_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_snd_2410_);
lean_inc(v_fst_2409_);
lean_dec(v_x_2407_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2427_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v_fst_2414_; lean_object* v_snd_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2426_; 
v_fst_2414_ = lean_ctor_get(v_p_2408_, 0);
v_snd_2415_ = lean_ctor_get(v_p_2408_, 1);
v_isSharedCheck_2426_ = !lean_is_exclusive(v_p_2408_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2417_ = v_p_2408_;
v_isShared_2418_ = v_isSharedCheck_2426_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_snd_2415_);
lean_inc(v_fst_2414_);
lean_dec(v_p_2408_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2426_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
lean_inc(v_fst_2414_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set_tag(v___x_2412_, 1);
lean_ctor_set(v___x_2412_, 1, v_fst_2409_);
lean_ctor_set(v___x_2412_, 0, v_fst_2414_);
v___x_2420_ = v___x_2412_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_fst_2414_);
lean_ctor_set(v_reuseFailAlloc_2425_, 1, v_fst_2409_);
v___x_2420_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
lean_object* v___x_2421_; lean_object* v___x_2423_; 
v___x_2421_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2414_, v_snd_2415_, v_snd_2410_);
if (v_isShared_2418_ == 0)
{
lean_ctor_set(v___x_2417_, 1, v___x_2421_);
lean_ctor_set(v___x_2417_, 0, v___x_2420_);
v___x_2423_ = v___x_2417_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v___x_2420_);
lean_ctor_set(v_reuseFailAlloc_2424_, 1, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__1(lean_object* v_a_2428_, lean_object* v_n_2429_, lean_object* v_p_2430_){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2431_, 0, v_n_2429_);
lean_ctor_set(v___x_2431_, 1, v_p_2430_);
v___x_2432_ = lean_array_push(v_a_2428_, v___x_2431_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(lean_object* v_hi_2433_, lean_object* v_pivot_2434_, lean_object* v_as_2435_, lean_object* v_i_2436_, lean_object* v_k_2437_){
_start:
{
uint8_t v___x_2438_; 
v___x_2438_ = lean_nat_dec_lt(v_k_2437_, v_hi_2433_);
if (v___x_2438_ == 0)
{
lean_object* v___x_2439_; lean_object* v___x_2440_; 
lean_dec(v_k_2437_);
v___x_2439_ = lean_array_fswap(v_as_2435_, v_i_2436_, v_hi_2433_);
v___x_2440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2440_, 0, v_i_2436_);
lean_ctor_set(v___x_2440_, 1, v___x_2439_);
return v___x_2440_;
}
else
{
lean_object* v___x_2441_; lean_object* v_fst_2442_; lean_object* v_fst_2443_; uint8_t v___x_2444_; 
v___x_2441_ = lean_array_fget_borrowed(v_as_2435_, v_k_2437_);
v_fst_2442_ = lean_ctor_get(v___x_2441_, 0);
v_fst_2443_ = lean_ctor_get(v_pivot_2434_, 0);
v___x_2444_ = l_Lean_Name_quickLt(v_fst_2442_, v_fst_2443_);
if (v___x_2444_ == 0)
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = lean_unsigned_to_nat(1u);
v___x_2446_ = lean_nat_add(v_k_2437_, v___x_2445_);
lean_dec(v_k_2437_);
v_k_2437_ = v___x_2446_;
goto _start;
}
else
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2448_ = lean_array_fswap(v_as_2435_, v_i_2436_, v_k_2437_);
v___x_2449_ = lean_unsigned_to_nat(1u);
v___x_2450_ = lean_nat_add(v_i_2436_, v___x_2449_);
lean_dec(v_i_2436_);
v___x_2451_ = lean_nat_add(v_k_2437_, v___x_2449_);
lean_dec(v_k_2437_);
v_as_2435_ = v___x_2448_;
v_i_2436_ = v___x_2450_;
v_k_2437_ = v___x_2451_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg___boxed(lean_object* v_hi_2453_, lean_object* v_pivot_2454_, lean_object* v_as_2455_, lean_object* v_i_2456_, lean_object* v_k_2457_){
_start:
{
lean_object* v_res_2458_; 
v_res_2458_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_hi_2453_, v_pivot_2454_, v_as_2455_, v_i_2456_, v_k_2457_);
lean_dec_ref(v_pivot_2454_);
lean_dec(v_hi_2453_);
return v_res_2458_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___lam__0(lean_object* v_a_2459_, lean_object* v_b_2460_){
_start:
{
lean_object* v_fst_2461_; lean_object* v_fst_2462_; uint8_t v___x_2463_; 
v_fst_2461_ = lean_ctor_get(v_a_2459_, 0);
v_fst_2462_ = lean_ctor_get(v_b_2460_, 0);
v___x_2463_ = l_Lean_Name_quickLt(v_fst_2461_, v_fst_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___lam__0___boxed(lean_object* v_a_2464_, lean_object* v_b_2465_){
_start:
{
uint8_t v_res_2466_; lean_object* v_r_2467_; 
v_res_2466_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___lam__0(v_a_2464_, v_b_2465_);
lean_dec_ref(v_b_2465_);
lean_dec_ref(v_a_2464_);
v_r_2467_ = lean_box(v_res_2466_);
return v_r_2467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg(lean_object* v_n_2468_, lean_object* v_as_2469_, lean_object* v_lo_2470_, lean_object* v_hi_2471_){
_start:
{
lean_object* v___y_2473_; uint8_t v___x_2483_; 
v___x_2483_ = lean_nat_dec_lt(v_lo_2470_, v_hi_2471_);
if (v___x_2483_ == 0)
{
lean_dec(v_lo_2470_);
return v_as_2469_;
}
else
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v_mid_2486_; lean_object* v___y_2488_; lean_object* v___y_2494_; lean_object* v___x_2499_; lean_object* v___x_2500_; uint8_t v___x_2501_; 
v___x_2484_ = lean_nat_add(v_lo_2470_, v_hi_2471_);
v___x_2485_ = lean_unsigned_to_nat(1u);
v_mid_2486_ = lean_nat_shiftr(v___x_2484_, v___x_2485_);
lean_dec(v___x_2484_);
v___x_2499_ = lean_array_fget_borrowed(v_as_2469_, v_mid_2486_);
v___x_2500_ = lean_array_fget_borrowed(v_as_2469_, v_lo_2470_);
v___x_2501_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___lam__0(v___x_2499_, v___x_2500_);
if (v___x_2501_ == 0)
{
v___y_2494_ = v_as_2469_;
goto v___jp_2493_;
}
else
{
lean_object* v___x_2502_; 
v___x_2502_ = lean_array_fswap(v_as_2469_, v_lo_2470_, v_mid_2486_);
v___y_2494_ = v___x_2502_;
goto v___jp_2493_;
}
v___jp_2487_:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; uint8_t v___x_2491_; 
v___x_2489_ = lean_array_fget_borrowed(v___y_2488_, v_mid_2486_);
v___x_2490_ = lean_array_fget_borrowed(v___y_2488_, v_hi_2471_);
v___x_2491_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___lam__0(v___x_2489_, v___x_2490_);
if (v___x_2491_ == 0)
{
lean_dec(v_mid_2486_);
v___y_2473_ = v___y_2488_;
goto v___jp_2472_;
}
else
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_array_fswap(v___y_2488_, v_mid_2486_, v_hi_2471_);
lean_dec(v_mid_2486_);
v___y_2473_ = v___x_2492_;
goto v___jp_2472_;
}
}
v___jp_2493_:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; uint8_t v___x_2497_; 
v___x_2495_ = lean_array_fget_borrowed(v___y_2494_, v_hi_2471_);
v___x_2496_ = lean_array_fget_borrowed(v___y_2494_, v_lo_2470_);
v___x_2497_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___lam__0(v___x_2495_, v___x_2496_);
if (v___x_2497_ == 0)
{
v___y_2488_ = v___y_2494_;
goto v___jp_2487_;
}
else
{
lean_object* v___x_2498_; 
v___x_2498_ = lean_array_fswap(v___y_2494_, v_lo_2470_, v_hi_2471_);
v___y_2488_ = v___x_2498_;
goto v___jp_2487_;
}
}
}
v___jp_2472_:
{
lean_object* v_pivot_2474_; lean_object* v___x_2475_; lean_object* v_fst_2476_; lean_object* v_snd_2477_; uint8_t v___x_2478_; 
v_pivot_2474_ = lean_array_fget(v___y_2473_, v_hi_2471_);
lean_inc_n(v_lo_2470_, 2);
v___x_2475_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_hi_2471_, v_pivot_2474_, v___y_2473_, v_lo_2470_, v_lo_2470_);
lean_dec(v_pivot_2474_);
v_fst_2476_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_fst_2476_);
v_snd_2477_ = lean_ctor_get(v___x_2475_, 1);
lean_inc(v_snd_2477_);
lean_dec_ref(v___x_2475_);
v___x_2478_ = lean_nat_dec_le(v_hi_2471_, v_fst_2476_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2479_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg(v_n_2468_, v_snd_2477_, v_lo_2470_, v_fst_2476_);
v___x_2480_ = lean_unsigned_to_nat(1u);
v___x_2481_ = lean_nat_add(v_fst_2476_, v___x_2480_);
lean_dec(v_fst_2476_);
v_as_2469_ = v___x_2479_;
v_lo_2470_ = v___x_2481_;
goto _start;
}
else
{
lean_dec(v_fst_2476_);
lean_dec(v_lo_2470_);
return v_snd_2477_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg___boxed(lean_object* v_n_2503_, lean_object* v_as_2504_, lean_object* v_lo_2505_, lean_object* v_hi_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg(v_n_2503_, v_as_2504_, v_lo_2505_, v_hi_2506_);
lean_dec(v_hi_2506_);
lean_dec(v_n_2503_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(lean_object* v_snd_2508_, lean_object* v_as_2509_, size_t v_i_2510_, size_t v_stop_2511_, lean_object* v_b_2512_){
_start:
{
lean_object* v___y_2514_; uint8_t v___x_2518_; 
v___x_2518_ = lean_usize_dec_eq(v_i_2510_, v_stop_2511_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2519_ = lean_array_uget_borrowed(v_as_2509_, v_i_2510_);
v___x_2520_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_2508_, v___x_2519_);
if (lean_obj_tag(v___x_2520_) == 0)
{
v___y_2514_ = v_b_2512_;
goto v___jp_2513_;
}
else
{
lean_object* v_val_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v_val_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_val_2521_);
lean_dec_ref_known(v___x_2520_, 1);
lean_inc(v___x_2519_);
v___x_2522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2519_);
lean_ctor_set(v___x_2522_, 1, v_val_2521_);
v___x_2523_ = lean_array_push(v_b_2512_, v___x_2522_);
v___y_2514_ = v___x_2523_;
goto v___jp_2513_;
}
}
else
{
return v_b_2512_;
}
v___jp_2513_:
{
size_t v___x_2515_; size_t v___x_2516_; 
v___x_2515_ = ((size_t)1ULL);
v___x_2516_ = lean_usize_add(v_i_2510_, v___x_2515_);
v_i_2510_ = v___x_2516_;
v_b_2512_ = v___y_2514_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg___boxed(lean_object* v_snd_2524_, lean_object* v_as_2525_, lean_object* v_i_2526_, lean_object* v_stop_2527_, lean_object* v_b_2528_){
_start:
{
size_t v_i_boxed_2529_; size_t v_stop_boxed_2530_; lean_object* v_res_2531_; 
v_i_boxed_2529_ = lean_unbox_usize(v_i_2526_);
lean_dec(v_i_2526_);
v_stop_boxed_2530_ = lean_unbox_usize(v_stop_2527_);
lean_dec(v_stop_2527_);
v_res_2531_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_snd_2524_, v_as_2525_, v_i_boxed_2529_, v_stop_boxed_2530_, v_b_2528_);
lean_dec_ref(v_as_2525_);
lean_dec(v_snd_2524_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2___redArg(lean_object* v_snd_2532_, lean_object* v_as_2533_, lean_object* v_start_2534_, lean_object* v_stop_2535_){
_start:
{
lean_object* v___x_2536_; uint8_t v___x_2537_; 
v___x_2536_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v___x_2537_ = lean_nat_dec_lt(v_start_2534_, v_stop_2535_);
if (v___x_2537_ == 0)
{
return v___x_2536_;
}
else
{
lean_object* v___x_2538_; uint8_t v___x_2539_; 
v___x_2538_ = lean_array_get_size(v_as_2533_);
v___x_2539_ = lean_nat_dec_le(v_stop_2535_, v___x_2538_);
if (v___x_2539_ == 0)
{
uint8_t v___x_2540_; 
v___x_2540_ = lean_nat_dec_lt(v_start_2534_, v___x_2538_);
if (v___x_2540_ == 0)
{
return v___x_2536_;
}
else
{
size_t v___x_2541_; size_t v___x_2542_; lean_object* v___x_2543_; 
v___x_2541_ = lean_usize_of_nat(v_start_2534_);
v___x_2542_ = lean_usize_of_nat(v___x_2538_);
v___x_2543_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_snd_2532_, v_as_2533_, v___x_2541_, v___x_2542_, v___x_2536_);
return v___x_2543_;
}
}
else
{
size_t v___x_2544_; size_t v___x_2545_; lean_object* v___x_2546_; 
v___x_2544_ = lean_usize_of_nat(v_start_2534_);
v___x_2545_ = lean_usize_of_nat(v_stop_2535_);
v___x_2546_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_snd_2532_, v_as_2533_, v___x_2544_, v___x_2545_, v___x_2536_);
return v___x_2546_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2___redArg___boxed(lean_object* v_snd_2547_, lean_object* v_as_2548_, lean_object* v_start_2549_, lean_object* v_stop_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v_snd_2547_, v_as_2548_, v_start_2549_, v_stop_2550_);
lean_dec(v_stop_2550_);
lean_dec(v_start_2549_);
lean_dec_ref(v_as_2548_);
lean_dec(v_snd_2547_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(lean_object* v_filterExport_2552_, lean_object* v_env_2553_, lean_object* v_as_2554_, size_t v_i_2555_, size_t v_stop_2556_, lean_object* v_b_2557_){
_start:
{
lean_object* v___y_2559_; uint8_t v___x_2563_; 
v___x_2563_ = lean_usize_dec_eq(v_i_2555_, v_stop_2556_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2564_; lean_object* v_fst_2565_; lean_object* v_snd_2566_; lean_object* v___x_2567_; uint8_t v___x_2568_; 
v___x_2564_ = lean_array_uget_borrowed(v_as_2554_, v_i_2555_);
v_fst_2565_ = lean_ctor_get(v___x_2564_, 0);
v_snd_2566_ = lean_ctor_get(v___x_2564_, 1);
lean_inc_ref(v_filterExport_2552_);
lean_inc(v_snd_2566_);
lean_inc(v_fst_2565_);
lean_inc_ref(v_env_2553_);
v___x_2567_ = lean_apply_3(v_filterExport_2552_, v_env_2553_, v_fst_2565_, v_snd_2566_);
v___x_2568_ = lean_unbox(v___x_2567_);
if (v___x_2568_ == 0)
{
v___y_2559_ = v_b_2557_;
goto v___jp_2558_;
}
else
{
lean_object* v___x_2569_; 
lean_inc(v___x_2564_);
v___x_2569_ = lean_array_push(v_b_2557_, v___x_2564_);
v___y_2559_ = v___x_2569_;
goto v___jp_2558_;
}
}
else
{
lean_dec_ref(v_env_2553_);
lean_dec_ref(v_filterExport_2552_);
return v_b_2557_;
}
v___jp_2558_:
{
size_t v___x_2560_; size_t v___x_2561_; 
v___x_2560_ = ((size_t)1ULL);
v___x_2561_ = lean_usize_add(v_i_2555_, v___x_2560_);
v_i_2555_ = v___x_2561_;
v_b_2557_ = v___y_2559_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg___boxed(lean_object* v_filterExport_2570_, lean_object* v_env_2571_, lean_object* v_as_2572_, lean_object* v_i_2573_, lean_object* v_stop_2574_, lean_object* v_b_2575_){
_start:
{
size_t v_i_boxed_2576_; size_t v_stop_boxed_2577_; lean_object* v_res_2578_; 
v_i_boxed_2576_ = lean_unbox_usize(v_i_2573_);
lean_dec(v_i_2573_);
v_stop_boxed_2577_ = lean_unbox_usize(v_stop_2574_);
lean_dec(v_stop_2574_);
v_res_2578_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2570_, v_env_2571_, v_as_2572_, v_i_boxed_2576_, v_stop_boxed_2577_, v_b_2575_);
lean_dec_ref(v_as_2572_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2(lean_object* v_filterExport_2579_, uint8_t v_preserveOrder_2580_, lean_object* v___f_2581_, lean_object* v_env_2582_, lean_object* v_x_2583_){
_start:
{
lean_object* v___y_2585_; 
if (v_preserveOrder_2580_ == 0)
{
lean_object* v_snd_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v_r_2604_; lean_object* v___x_2605_; lean_object* v___y_2607_; lean_object* v___y_2608_; uint8_t v___x_2610_; 
v_snd_2601_ = lean_ctor_get(v_x_2583_, 1);
lean_inc(v_snd_2601_);
lean_dec_ref(v_x_2583_);
v___x_2602_ = lean_unsigned_to_nat(0u);
v___x_2603_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v_r_2604_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v___f_2581_, v___x_2603_, v_snd_2601_);
v___x_2605_ = lean_array_get_size(v_r_2604_);
v___x_2610_ = lean_nat_dec_eq(v___x_2605_, v___x_2602_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___y_2614_; uint8_t v___x_2616_; 
v___x_2611_ = lean_unsigned_to_nat(1u);
v___x_2612_ = lean_nat_sub(v___x_2605_, v___x_2611_);
v___x_2616_ = lean_nat_dec_le(v___x_2602_, v___x_2612_);
if (v___x_2616_ == 0)
{
lean_inc(v___x_2612_);
v___y_2614_ = v___x_2612_;
goto v___jp_2613_;
}
else
{
v___y_2614_ = v___x_2602_;
goto v___jp_2613_;
}
v___jp_2613_:
{
uint8_t v___x_2615_; 
v___x_2615_ = lean_nat_dec_le(v___y_2614_, v___x_2612_);
if (v___x_2615_ == 0)
{
lean_dec(v___x_2612_);
lean_inc(v___y_2614_);
v___y_2607_ = v___y_2614_;
v___y_2608_ = v___y_2614_;
goto v___jp_2606_;
}
else
{
v___y_2607_ = v___y_2614_;
v___y_2608_ = v___x_2612_;
goto v___jp_2606_;
}
}
}
else
{
v___y_2585_ = v_r_2604_;
goto v___jp_2584_;
}
v___jp_2606_:
{
lean_object* v___x_2609_; 
v___x_2609_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg(v___x_2605_, v_r_2604_, v___y_2607_, v___y_2608_);
lean_dec(v___y_2608_);
v___y_2585_ = v___x_2609_;
goto v___jp_2584_;
}
}
else
{
lean_object* v_fst_2617_; lean_object* v_snd_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
lean_dec_ref(v___f_2581_);
v_fst_2617_ = lean_ctor_get(v_x_2583_, 0);
lean_inc(v_fst_2617_);
v_snd_2618_ = lean_ctor_get(v_x_2583_, 1);
lean_inc(v_snd_2618_);
lean_dec_ref(v_x_2583_);
v___x_2619_ = lean_array_mk(v_fst_2617_);
v___x_2620_ = l_Array_reverse___redArg(v___x_2619_);
v___x_2621_ = lean_unsigned_to_nat(0u);
v___x_2622_ = lean_array_get_size(v___x_2620_);
v___x_2623_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v_snd_2618_, v___x_2620_, v___x_2621_, v___x_2622_);
lean_dec_ref(v___x_2620_);
lean_dec(v_snd_2618_);
v___y_2585_ = v___x_2623_;
goto v___jp_2584_;
}
v___jp_2584_:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; uint8_t v___x_2589_; 
v___x_2586_ = lean_unsigned_to_nat(0u);
v___x_2587_ = lean_array_get_size(v___y_2585_);
v___x_2588_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v___x_2589_ = lean_nat_dec_lt(v___x_2586_, v___x_2587_);
if (v___x_2589_ == 0)
{
lean_object* v___x_2590_; 
lean_dec_ref(v_env_2582_);
lean_dec_ref(v_filterExport_2579_);
v___x_2590_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2588_);
lean_ctor_set(v___x_2590_, 1, v___x_2588_);
lean_ctor_set(v___x_2590_, 2, v___y_2585_);
return v___x_2590_;
}
else
{
uint8_t v___x_2591_; 
v___x_2591_ = lean_nat_dec_le(v___x_2587_, v___x_2587_);
if (v___x_2591_ == 0)
{
if (v___x_2589_ == 0)
{
lean_object* v___x_2592_; 
lean_dec_ref(v_env_2582_);
lean_dec_ref(v_filterExport_2579_);
v___x_2592_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2588_);
lean_ctor_set(v___x_2592_, 1, v___x_2588_);
lean_ctor_set(v___x_2592_, 2, v___y_2585_);
return v___x_2592_;
}
else
{
size_t v___x_2593_; size_t v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
v___x_2593_ = ((size_t)0ULL);
v___x_2594_ = lean_usize_of_nat(v___x_2587_);
v___x_2595_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2579_, v_env_2582_, v___y_2585_, v___x_2593_, v___x_2594_, v___x_2588_);
lean_inc_ref(v___x_2595_);
v___x_2596_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2595_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
lean_ctor_set(v___x_2596_, 2, v___y_2585_);
return v___x_2596_;
}
}
else
{
size_t v___x_2597_; size_t v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2597_ = ((size_t)0ULL);
v___x_2598_ = lean_usize_of_nat(v___x_2587_);
v___x_2599_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2579_, v_env_2582_, v___y_2585_, v___x_2597_, v___x_2598_, v___x_2588_);
lean_inc_ref(v___x_2599_);
v___x_2600_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
lean_ctor_set(v___x_2600_, 1, v___x_2599_);
lean_ctor_set(v___x_2600_, 2, v___y_2585_);
return v___x_2600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__2___boxed(lean_object* v_filterExport_2624_, lean_object* v_preserveOrder_2625_, lean_object* v___f_2626_, lean_object* v_env_2627_, lean_object* v_x_2628_){
_start:
{
uint8_t v_preserveOrder_boxed_2629_; lean_object* v_res_2630_; 
v_preserveOrder_boxed_2629_ = lean_unbox(v_preserveOrder_2625_);
v_res_2630_ = l_Lean_registerParametricAttributeExt___redArg___lam__2(v_filterExport_2624_, v_preserveOrder_boxed_2629_, v___f_2626_, v_env_2627_, v_x_2628_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__3(lean_object* v_x_2640_){
_start:
{
lean_object* v_snd_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2652_; 
v_snd_2641_ = lean_ctor_get(v_x_2640_, 1);
v_isSharedCheck_2652_ = !lean_is_exclusive(v_x_2640_);
if (v_isSharedCheck_2652_ == 0)
{
lean_object* v_unused_2653_; 
v_unused_2653_ = lean_ctor_get(v_x_2640_, 0);
lean_dec(v_unused_2653_);
v___x_2643_ = v_x_2640_;
v_isShared_2644_ = v_isSharedCheck_2652_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_snd_2641_);
lean_dec(v_x_2640_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2652_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2650_; 
v___x_2645_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___lam__3___closed__3));
v___x_2646_ = l_Lean_NameMap_size___redArg(v_snd_2641_);
lean_dec(v_snd_2641_);
v___x_2647_ = l_Nat_reprFast(v___x_2646_);
v___x_2648_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2647_);
if (v_isShared_2644_ == 0)
{
lean_ctor_set_tag(v___x_2643_, 5);
lean_ctor_set(v___x_2643_, 1, v___x_2648_);
lean_ctor_set(v___x_2643_, 0, v___x_2645_);
v___x_2650_ = v___x_2643_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v___x_2645_);
lean_ctor_set(v_reuseFailAlloc_2651_, 1, v___x_2648_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4(lean_object* v_x_2654_){
_start:
{
lean_object* v___x_2655_; 
v___x_2655_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__4___boxed(lean_object* v_x_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Lean_registerParametricAttributeExt___redArg___lam__4(v_x_2656_);
lean_dec_ref(v_x_2656_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5(lean_object* v___x_2658_){
_start:
{
lean_object* v___x_2660_; 
v___x_2660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2658_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__5___boxed(lean_object* v___x_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lean_registerParametricAttributeExt___redArg___lam__5(v___x_2661_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__6(lean_object* v___x_2664_, lean_object* v_x_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2664_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___lam__6___boxed(lean_object* v___x_2669_, lean_object* v_x_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = l_Lean_registerParametricAttributeExt___redArg___lam__6(v___x_2669_, v_x_2670_, v___y_2671_);
lean_dec_ref(v___y_2671_);
lean_dec_ref(v_x_2670_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg(lean_object* v_ref_2685_, uint8_t v_preserveOrder_2686_, lean_object* v_filterExport_2687_){
_start:
{
lean_object* v___f_2689_; lean_object* v___f_2690_; lean_object* v___x_2691_; lean_object* v___f_2692_; lean_object* v___f_2693_; lean_object* v___f_2694_; lean_object* v___f_2695_; lean_object* v___f_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___f_2689_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__0));
v___f_2690_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__1));
v___x_2691_ = lean_box(v_preserveOrder_2686_);
v___f_2692_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeExt___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_2692_, 0, v_filterExport_2687_);
lean_closure_set(v___f_2692_, 1, v___x_2691_);
lean_closure_set(v___f_2692_, 2, v___f_2690_);
v___f_2693_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__2));
v___f_2694_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__3));
v___f_2695_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__5));
v___f_2696_ = ((lean_object*)(l_Lean_registerParametricAttributeExt___redArg___closed__6));
v___x_2697_ = lean_box(2);
v___x_2698_ = lean_box(0);
v___x_2699_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2699_, 0, v_ref_2685_);
lean_ctor_set(v___x_2699_, 1, v___f_2695_);
lean_ctor_set(v___x_2699_, 2, v___f_2696_);
lean_ctor_set(v___x_2699_, 3, v___f_2689_);
lean_ctor_set(v___x_2699_, 4, v___f_2692_);
lean_ctor_set(v___x_2699_, 5, v___f_2693_);
lean_ctor_set(v___x_2699_, 6, v___x_2697_);
lean_ctor_set(v___x_2699_, 7, v___x_2698_);
v___x_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2699_);
lean_ctor_set(v___x_2700_, 1, v___f_2694_);
v___x_2701_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___redArg___boxed(lean_object* v_ref_2702_, lean_object* v_preserveOrder_2703_, lean_object* v_filterExport_2704_, lean_object* v___y_2705_){
_start:
{
uint8_t v_preserveOrder_boxed_2706_; lean_object* v_res_2707_; 
v_preserveOrder_boxed_2706_ = lean_unbox(v_preserveOrder_2703_);
v_res_2707_ = l_Lean_registerParametricAttributeExt___redArg(v_ref_2702_, v_preserveOrder_boxed_2706_, v_filterExport_2704_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt(lean_object* v_00_u03b1_2708_, lean_object* v_ref_2709_, uint8_t v_preserveOrder_2710_, lean_object* v_filterExport_2711_){
_start:
{
lean_object* v___x_2713_; 
v___x_2713_ = l_Lean_registerParametricAttributeExt___redArg(v_ref_2709_, v_preserveOrder_2710_, v_filterExport_2711_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeExt___boxed(lean_object* v_00_u03b1_2714_, lean_object* v_ref_2715_, lean_object* v_preserveOrder_2716_, lean_object* v_filterExport_2717_, lean_object* v___y_2718_){
_start:
{
uint8_t v_preserveOrder_boxed_2719_; lean_object* v_res_2720_; 
v_preserveOrder_boxed_2719_ = lean_unbox(v_preserveOrder_2716_);
v_res_2720_ = l_Lean_registerParametricAttributeExt(v_00_u03b1_2714_, v_ref_2715_, v_preserveOrder_boxed_2719_, v_filterExport_2717_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0(lean_object* v_00_u03b1_2721_, lean_object* v_filterExport_2722_, lean_object* v_env_2723_, lean_object* v_as_2724_, size_t v_i_2725_, size_t v_stop_2726_, lean_object* v_b_2727_){
_start:
{
lean_object* v___x_2728_; 
v___x_2728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___redArg(v_filterExport_2722_, v_env_2723_, v_as_2724_, v_i_2725_, v_stop_2726_, v_b_2727_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0___boxed(lean_object* v_00_u03b1_2729_, lean_object* v_filterExport_2730_, lean_object* v_env_2731_, lean_object* v_as_2732_, lean_object* v_i_2733_, lean_object* v_stop_2734_, lean_object* v_b_2735_){
_start:
{
size_t v_i_boxed_2736_; size_t v_stop_boxed_2737_; lean_object* v_res_2738_; 
v_i_boxed_2736_ = lean_unbox_usize(v_i_2733_);
lean_dec(v_i_2733_);
v_stop_boxed_2737_ = lean_unbox_usize(v_stop_2734_);
lean_dec(v_stop_2734_);
v_res_2738_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerParametricAttributeExt_spec__0(v_00_u03b1_2729_, v_filterExport_2730_, v_env_2731_, v_as_2732_, v_i_boxed_2736_, v_stop_boxed_2737_, v_b_2735_);
lean_dec_ref(v_as_2732_);
return v_res_2738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1(lean_object* v_00_u03b1_2739_, lean_object* v_n_2740_, lean_object* v_as_2741_, lean_object* v_lo_2742_, lean_object* v_hi_2743_, lean_object* v_w_2744_, lean_object* v_hlo_2745_, lean_object* v_hhi_2746_){
_start:
{
lean_object* v___x_2747_; 
v___x_2747_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg(v_n_2740_, v_as_2741_, v_lo_2742_, v_hi_2743_);
return v___x_2747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___boxed(lean_object* v_00_u03b1_2748_, lean_object* v_n_2749_, lean_object* v_as_2750_, lean_object* v_lo_2751_, lean_object* v_hi_2752_, lean_object* v_w_2753_, lean_object* v_hlo_2754_, lean_object* v_hhi_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1(v_00_u03b1_2748_, v_n_2749_, v_as_2750_, v_lo_2751_, v_hi_2752_, v_w_2753_, v_hlo_2754_, v_hhi_2755_);
lean_dec(v_hi_2752_);
lean_dec(v_n_2749_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2(lean_object* v_00_u03b1_2757_, lean_object* v_snd_2758_, lean_object* v_as_2759_, lean_object* v_start_2760_, lean_object* v_stop_2761_){
_start:
{
lean_object* v___x_2762_; 
v___x_2762_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2___redArg(v_snd_2758_, v_as_2759_, v_start_2760_, v_stop_2761_);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2___boxed(lean_object* v_00_u03b1_2763_, lean_object* v_snd_2764_, lean_object* v_as_2765_, lean_object* v_start_2766_, lean_object* v_stop_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2(v_00_u03b1_2763_, v_snd_2764_, v_as_2765_, v_start_2766_, v_stop_2767_);
lean_dec(v_stop_2767_);
lean_dec(v_start_2766_);
lean_dec_ref(v_as_2765_);
lean_dec(v_snd_2764_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1(lean_object* v_00_u03b1_2769_, lean_object* v_n_2770_, lean_object* v_lo_2771_, lean_object* v_hi_2772_, lean_object* v_hhi_2773_, lean_object* v_pivot_2774_, lean_object* v_as_2775_, lean_object* v_i_2776_, lean_object* v_k_2777_, lean_object* v_ilo_2778_, lean_object* v_ik_2779_, lean_object* v_w_2780_){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___redArg(v_hi_2772_, v_pivot_2774_, v_as_2775_, v_i_2776_, v_k_2777_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2782_, lean_object* v_n_2783_, lean_object* v_lo_2784_, lean_object* v_hi_2785_, lean_object* v_hhi_2786_, lean_object* v_pivot_2787_, lean_object* v_as_2788_, lean_object* v_i_2789_, lean_object* v_k_2790_, lean_object* v_ilo_2791_, lean_object* v_ik_2792_, lean_object* v_w_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1_spec__1(v_00_u03b1_2782_, v_n_2783_, v_lo_2784_, v_hi_2785_, v_hhi_2786_, v_pivot_2787_, v_as_2788_, v_i_2789_, v_k_2790_, v_ilo_2791_, v_ik_2792_, v_w_2793_);
lean_dec_ref(v_pivot_2787_);
lean_dec(v_hi_2785_);
lean_dec(v_lo_2784_);
lean_dec(v_n_2783_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3(lean_object* v_00_u03b1_2795_, lean_object* v_snd_2796_, lean_object* v_as_2797_, size_t v_i_2798_, size_t v_stop_2799_, lean_object* v_b_2800_){
_start:
{
lean_object* v___x_2801_; 
v___x_2801_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___redArg(v_snd_2796_, v_as_2797_, v_i_2798_, v_stop_2799_, v_b_2800_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2802_, lean_object* v_snd_2803_, lean_object* v_as_2804_, lean_object* v_i_2805_, lean_object* v_stop_2806_, lean_object* v_b_2807_){
_start:
{
size_t v_i_boxed_2808_; size_t v_stop_boxed_2809_; lean_object* v_res_2810_; 
v_i_boxed_2808_ = lean_unbox_usize(v_i_2805_);
lean_dec(v_i_2805_);
v_stop_boxed_2809_ = lean_unbox_usize(v_stop_2806_);
lean_dec(v_stop_2806_);
v_res_2810_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_registerParametricAttributeExt_spec__2_spec__3(v_00_u03b1_2802_, v_snd_2803_, v_as_2804_, v_i_boxed_2808_, v_stop_boxed_2809_, v_b_2807_);
lean_dec_ref(v_as_2804_);
lean_dec(v_snd_2803_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(lean_object* v_env_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v___x_2814_; lean_object* v_nextMacroScope_2815_; lean_object* v_ngen_2816_; lean_object* v_auxDeclNGen_2817_; lean_object* v_traceState_2818_; lean_object* v_messages_2819_; lean_object* v_infoState_2820_; lean_object* v_snapshotTasks_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2832_; 
v___x_2814_ = lean_st_ref_take(v___y_2812_);
v_nextMacroScope_2815_ = lean_ctor_get(v___x_2814_, 1);
v_ngen_2816_ = lean_ctor_get(v___x_2814_, 2);
v_auxDeclNGen_2817_ = lean_ctor_get(v___x_2814_, 3);
v_traceState_2818_ = lean_ctor_get(v___x_2814_, 4);
v_messages_2819_ = lean_ctor_get(v___x_2814_, 6);
v_infoState_2820_ = lean_ctor_get(v___x_2814_, 7);
v_snapshotTasks_2821_ = lean_ctor_get(v___x_2814_, 8);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2832_ == 0)
{
lean_object* v_unused_2833_; lean_object* v_unused_2834_; 
v_unused_2833_ = lean_ctor_get(v___x_2814_, 5);
lean_dec(v_unused_2833_);
v_unused_2834_ = lean_ctor_get(v___x_2814_, 0);
lean_dec(v_unused_2834_);
v___x_2823_ = v___x_2814_;
v_isShared_2824_ = v_isSharedCheck_2832_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_snapshotTasks_2821_);
lean_inc(v_infoState_2820_);
lean_inc(v_messages_2819_);
lean_inc(v_traceState_2818_);
lean_inc(v_auxDeclNGen_2817_);
lean_inc(v_ngen_2816_);
lean_inc(v_nextMacroScope_2815_);
lean_dec(v___x_2814_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2832_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2828_; 
v___x_2825_ = lean_box(0);
v___x_2826_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_2824_ == 0)
{
lean_ctor_set(v___x_2823_, 5, v___x_2826_);
lean_ctor_set(v___x_2823_, 0, v_env_2811_);
v___x_2828_ = v___x_2823_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_env_2811_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v_nextMacroScope_2815_);
lean_ctor_set(v_reuseFailAlloc_2831_, 2, v_ngen_2816_);
lean_ctor_set(v_reuseFailAlloc_2831_, 3, v_auxDeclNGen_2817_);
lean_ctor_set(v_reuseFailAlloc_2831_, 4, v_traceState_2818_);
lean_ctor_set(v_reuseFailAlloc_2831_, 5, v___x_2826_);
lean_ctor_set(v_reuseFailAlloc_2831_, 6, v_messages_2819_);
lean_ctor_set(v_reuseFailAlloc_2831_, 7, v_infoState_2820_);
lean_ctor_set(v_reuseFailAlloc_2831_, 8, v_snapshotTasks_2821_);
v___x_2828_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; 
v___x_2829_ = lean_st_ref_put(v___y_2812_, v___x_2828_);
v___x_2830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2825_);
return v___x_2830_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg___boxed(lean_object* v_env_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_){
_start:
{
lean_object* v_res_2838_; 
v_res_2838_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(v_env_2835_, v___y_2836_);
lean_dec(v___y_2836_);
return v_res_2838_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0(lean_object* v_env_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(v_env_2839_, v___y_2841_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___boxed(lean_object* v_env_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
lean_object* v_res_2848_; 
v_res_2848_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0(v_env_2844_, v___y_2845_, v___y_2846_);
lean_dec(v___y_2846_);
lean_dec_ref(v___y_2845_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0(lean_object* v_getParam_2849_, lean_object* v_ext_2850_, lean_object* v_afterSet_2851_, lean_object* v_toAttributeImplCore_2852_, lean_object* v_decl_2853_, lean_object* v_stx_2854_, uint8_t v_kind_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_){
_start:
{
lean_object* v___y_2860_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; uint8_t v___y_2864_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v___y_2869_; uint8_t v___x_2913_; uint8_t v___x_2914_; 
v___x_2913_ = 0;
v___x_2914_ = l_Lean_instBEqAttributeKind_beq(v_kind_2855_, v___x_2913_);
if (v___x_2914_ == 0)
{
lean_object* v_name_2915_; lean_object* v___x_2916_; 
lean_dec(v_stx_2854_);
lean_dec(v_decl_2853_);
lean_dec_ref(v_afterSet_2851_);
lean_dec_ref(v_ext_2850_);
lean_dec_ref(v_getParam_2849_);
v_name_2915_ = lean_ctor_get(v_toAttributeImplCore_2852_, 1);
lean_inc(v_name_2915_);
lean_dec_ref(v_toAttributeImplCore_2852_);
v___x_2916_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___redArg(v_name_2915_, v_kind_2855_, v___y_2856_, v___y_2857_);
return v___x_2916_;
}
else
{
goto v___jp_2907_;
}
v___jp_2859_:
{
if (v___y_2864_ == 0)
{
lean_object* v___x_2865_; 
lean_dec_ref(v___y_2860_);
v___x_2865_ = l_Lean_setEnv___at___00Lean_registerParametricAttributeForExt_spec__0___redArg(v___y_2862_, v___y_2861_);
return v___x_2865_;
}
else
{
lean_dec_ref(v___y_2862_);
return v___y_2860_;
}
}
v___jp_2866_:
{
lean_object* v___x_2870_; 
lean_inc(v___y_2869_);
lean_inc_ref(v___y_2868_);
lean_inc(v_decl_2853_);
v___x_2870_ = lean_apply_5(v_getParam_2849_, v_decl_2853_, v_stx_2854_, v___y_2868_, v___y_2869_, lean_box(0));
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_object* v_a_2871_; lean_object* v___x_2872_; lean_object* v_toEnvExtension_2873_; lean_object* v_env_2874_; lean_object* v_nextMacroScope_2875_; lean_object* v_ngen_2876_; lean_object* v_auxDeclNGen_2877_; lean_object* v_traceState_2878_; lean_object* v_messages_2879_; lean_object* v_infoState_2880_; lean_object* v_snapshotTasks_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2897_; 
v_a_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_a_2871_);
lean_dec_ref_known(v___x_2870_, 1);
v___x_2872_ = lean_st_ref_take(v___y_2869_);
v_toEnvExtension_2873_ = lean_ctor_get(v_ext_2850_, 0);
v_env_2874_ = lean_ctor_get(v___x_2872_, 0);
v_nextMacroScope_2875_ = lean_ctor_get(v___x_2872_, 1);
v_ngen_2876_ = lean_ctor_get(v___x_2872_, 2);
v_auxDeclNGen_2877_ = lean_ctor_get(v___x_2872_, 3);
v_traceState_2878_ = lean_ctor_get(v___x_2872_, 4);
v_messages_2879_ = lean_ctor_get(v___x_2872_, 6);
v_infoState_2880_ = lean_ctor_get(v___x_2872_, 7);
v_snapshotTasks_2881_ = lean_ctor_get(v___x_2872_, 8);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2872_);
if (v_isSharedCheck_2897_ == 0)
{
lean_object* v_unused_2898_; 
v_unused_2898_ = lean_ctor_get(v___x_2872_, 5);
lean_dec(v_unused_2898_);
v___x_2883_ = v___x_2872_;
v_isShared_2884_ = v_isSharedCheck_2897_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_snapshotTasks_2881_);
lean_inc(v_infoState_2880_);
lean_inc(v_messages_2879_);
lean_inc(v_traceState_2878_);
lean_inc(v_auxDeclNGen_2877_);
lean_inc(v_ngen_2876_);
lean_inc(v_nextMacroScope_2875_);
lean_inc(v_env_2874_);
lean_dec(v___x_2872_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2897_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v_asyncMode_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2890_; 
v_asyncMode_2885_ = lean_ctor_get(v_toEnvExtension_2873_, 2);
lean_inc(v_asyncMode_2885_);
lean_inc(v_a_2871_);
lean_inc_n(v_decl_2853_, 2);
v___x_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2886_, 0, v_decl_2853_);
lean_ctor_set(v___x_2886_, 1, v_a_2871_);
v___x_2887_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_2850_, v_env_2874_, v___x_2886_, v_asyncMode_2885_, v_decl_2853_);
lean_dec(v_asyncMode_2885_);
v___x_2888_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 5, v___x_2888_);
lean_ctor_set(v___x_2883_, 0, v___x_2887_);
v___x_2890_ = v___x_2883_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v___x_2887_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v_nextMacroScope_2875_);
lean_ctor_set(v_reuseFailAlloc_2896_, 2, v_ngen_2876_);
lean_ctor_set(v_reuseFailAlloc_2896_, 3, v_auxDeclNGen_2877_);
lean_ctor_set(v_reuseFailAlloc_2896_, 4, v_traceState_2878_);
lean_ctor_set(v_reuseFailAlloc_2896_, 5, v___x_2888_);
lean_ctor_set(v_reuseFailAlloc_2896_, 6, v_messages_2879_);
lean_ctor_set(v_reuseFailAlloc_2896_, 7, v_infoState_2880_);
lean_ctor_set(v_reuseFailAlloc_2896_, 8, v_snapshotTasks_2881_);
v___x_2890_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2891_ = lean_st_ref_put(v___y_2869_, v___x_2890_);
lean_inc(v___y_2869_);
lean_inc_ref(v___y_2868_);
v___x_2892_ = lean_apply_5(v_afterSet_2851_, v_decl_2853_, v_a_2871_, v___y_2868_, v___y_2869_, lean_box(0));
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_dec_ref(v___y_2867_);
return v___x_2892_;
}
else
{
lean_object* v_a_2893_; uint8_t v___x_2894_; 
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
lean_inc(v_a_2893_);
v___x_2894_ = l_Lean_Exception_isInterrupt(v_a_2893_);
if (v___x_2894_ == 0)
{
uint8_t v___x_2895_; 
v___x_2895_ = l_Lean_Exception_isRuntime(v_a_2893_);
v___y_2860_ = v___x_2892_;
v___y_2861_ = v___y_2869_;
v___y_2862_ = v___y_2867_;
v___y_2863_ = v___y_2868_;
v___y_2864_ = v___x_2895_;
goto v___jp_2859_;
}
else
{
lean_dec(v_a_2893_);
v___y_2860_ = v___x_2892_;
v___y_2861_ = v___y_2869_;
v___y_2862_ = v___y_2867_;
v___y_2863_ = v___y_2868_;
v___y_2864_ = v___x_2894_;
goto v___jp_2859_;
}
}
}
}
}
else
{
lean_object* v_a_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2906_; 
lean_dec_ref(v___y_2867_);
lean_dec(v_decl_2853_);
lean_dec_ref(v_afterSet_2851_);
lean_dec_ref(v_ext_2850_);
v_a_2899_ = lean_ctor_get(v___x_2870_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2870_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2901_ = v___x_2870_;
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_a_2899_);
lean_dec(v___x_2870_);
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
v___jp_2907_:
{
lean_object* v___x_2908_; lean_object* v_env_2909_; lean_object* v___x_2910_; 
v___x_2908_ = lean_st_ref_get(v___y_2857_);
v_env_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc_ref(v_env_2909_);
lean_dec(v___x_2908_);
v___x_2910_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2909_, v_decl_2853_);
if (lean_obj_tag(v___x_2910_) == 0)
{
lean_dec_ref(v_toAttributeImplCore_2852_);
v___y_2867_ = v_env_2909_;
v___y_2868_ = v___y_2856_;
v___y_2869_ = v___y_2857_;
goto v___jp_2866_;
}
else
{
lean_object* v_name_2911_; lean_object* v___x_2912_; 
lean_dec_ref_known(v___x_2910_, 1);
lean_dec_ref(v_env_2909_);
lean_dec(v_stx_2854_);
lean_dec_ref(v_afterSet_2851_);
lean_dec_ref(v_ext_2850_);
lean_dec_ref(v_getParam_2849_);
v_name_2911_ = lean_ctor_get(v_toAttributeImplCore_2852_, 1);
lean_inc(v_name_2911_);
lean_dec_ref(v_toAttributeImplCore_2852_);
v___x_2912_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___redArg(v_name_2911_, v_decl_2853_, v___y_2856_, v___y_2857_);
return v___x_2912_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__0___boxed(lean_object* v_getParam_2917_, lean_object* v_ext_2918_, lean_object* v_afterSet_2919_, lean_object* v_toAttributeImplCore_2920_, lean_object* v_decl_2921_, lean_object* v_stx_2922_, lean_object* v_kind_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_){
_start:
{
uint8_t v_kind_boxed_2927_; lean_object* v_res_2928_; 
v_kind_boxed_2927_ = lean_unbox(v_kind_2923_);
v_res_2928_ = l_Lean_registerParametricAttributeForExt___redArg___lam__0(v_getParam_2917_, v_ext_2918_, v_afterSet_2919_, v_toAttributeImplCore_2920_, v_decl_2921_, v_stx_2922_, v_kind_boxed_2927_, v___y_2924_, v___y_2925_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1(lean_object* v_toAttributeImplCore_2929_, lean_object* v_decl_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
lean_object* v_name_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; 
v_name_2934_ = lean_ctor_get(v_toAttributeImplCore_2929_, 1);
lean_inc(v_name_2934_);
lean_dec_ref(v_toAttributeImplCore_2929_);
v___x_2935_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_2936_ = l_Lean_MessageData_ofName(v_name_2934_);
v___x_2937_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2935_);
lean_ctor_set(v___x_2937_, 1, v___x_2936_);
v___x_2938_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_2939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2939_, 0, v___x_2937_);
lean_ctor_set(v___x_2939_, 1, v___x_2938_);
v___x_2940_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_2939_, v___y_2931_, v___y_2932_);
return v___x_2940_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___lam__1___boxed(lean_object* v_toAttributeImplCore_2941_, lean_object* v_decl_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Lean_registerParametricAttributeForExt___redArg___lam__1(v_toAttributeImplCore_2941_, v_decl_2942_, v___y_2943_, v___y_2944_);
lean_dec(v___y_2944_);
lean_dec_ref(v___y_2943_);
lean_dec(v_decl_2942_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg(lean_object* v_impl_2947_, lean_object* v_ext_2948_){
_start:
{
lean_object* v_toAttributeImplCore_2950_; lean_object* v_getParam_2951_; lean_object* v_afterSet_2952_; uint8_t v_preserveOrder_2953_; lean_object* v___f_2954_; lean_object* v___f_2955_; lean_object* v_attrImpl_2956_; lean_object* v___x_2957_; 
v_toAttributeImplCore_2950_ = lean_ctor_get(v_impl_2947_, 0);
lean_inc_ref_n(v_toAttributeImplCore_2950_, 3);
v_getParam_2951_ = lean_ctor_get(v_impl_2947_, 1);
lean_inc_ref(v_getParam_2951_);
v_afterSet_2952_ = lean_ctor_get(v_impl_2947_, 2);
lean_inc_ref(v_afterSet_2952_);
v_preserveOrder_2953_ = lean_ctor_get_uint8(v_impl_2947_, sizeof(void*)*4);
lean_dec_ref(v_impl_2947_);
lean_inc_ref(v_ext_2948_);
v___f_2954_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeForExt___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2954_, 0, v_getParam_2951_);
lean_closure_set(v___f_2954_, 1, v_ext_2948_);
lean_closure_set(v___f_2954_, 2, v_afterSet_2952_);
lean_closure_set(v___f_2954_, 3, v_toAttributeImplCore_2950_);
v___f_2955_ = lean_alloc_closure((void*)(l_Lean_registerParametricAttributeForExt___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_2955_, 0, v_toAttributeImplCore_2950_);
v_attrImpl_2956_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_attrImpl_2956_, 0, v_toAttributeImplCore_2950_);
lean_ctor_set(v_attrImpl_2956_, 1, v___f_2954_);
lean_ctor_set(v_attrImpl_2956_, 2, v___f_2955_);
lean_inc_ref(v_attrImpl_2956_);
v___x_2957_ = l_Lean_registerBuiltinAttribute(v_attrImpl_2956_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2965_; 
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2965_ == 0)
{
lean_object* v_unused_2966_; 
v_unused_2966_ = lean_ctor_get(v___x_2957_, 0);
lean_dec(v_unused_2966_);
v___x_2959_ = v___x_2957_;
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
else
{
lean_dec(v___x_2957_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2961_; lean_object* v___x_2963_; 
v___x_2961_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2961_, 0, v_attrImpl_2956_);
lean_ctor_set(v___x_2961_, 1, v_ext_2948_);
lean_ctor_set_uint8(v___x_2961_, sizeof(void*)*2, v_preserveOrder_2953_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 0, v___x_2961_);
v___x_2963_ = v___x_2959_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v___x_2961_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
else
{
lean_object* v_a_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2974_; 
lean_dec_ref_known(v_attrImpl_2956_, 3);
lean_dec_ref(v_ext_2948_);
v_a_2967_ = lean_ctor_get(v___x_2957_, 0);
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2974_ == 0)
{
v___x_2969_ = v___x_2957_;
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_a_2967_);
lean_dec(v___x_2957_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2972_; 
if (v_isShared_2970_ == 0)
{
v___x_2972_ = v___x_2969_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v_a_2967_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
return v___x_2972_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___redArg___boxed(lean_object* v_impl_2975_, lean_object* v_ext_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v_res_2978_; 
v_res_2978_ = l_Lean_registerParametricAttributeForExt___redArg(v_impl_2975_, v_ext_2976_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt(lean_object* v_00_u03b1_2979_, lean_object* v_impl_2980_, lean_object* v_ext_2981_){
_start:
{
lean_object* v___x_2983_; 
v___x_2983_ = l_Lean_registerParametricAttributeForExt___redArg(v_impl_2980_, v_ext_2981_);
return v___x_2983_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttributeForExt___boxed(lean_object* v_00_u03b1_2984_, lean_object* v_impl_2985_, lean_object* v_ext_2986_, lean_object* v___y_2987_){
_start:
{
lean_object* v_res_2988_; 
v_res_2988_ = l_Lean_registerParametricAttributeForExt(v_00_u03b1_2984_, v_impl_2985_, v_ext_2986_);
return v_res_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg(lean_object* v_impl_2989_){
_start:
{
lean_object* v_toAttributeImplCore_2991_; uint8_t v_preserveOrder_2992_; lean_object* v_filterExport_2993_; lean_object* v_ref_2994_; lean_object* v___x_2995_; 
v_toAttributeImplCore_2991_ = lean_ctor_get(v_impl_2989_, 0);
v_preserveOrder_2992_ = lean_ctor_get_uint8(v_impl_2989_, sizeof(void*)*4);
v_filterExport_2993_ = lean_ctor_get(v_impl_2989_, 3);
v_ref_2994_ = lean_ctor_get(v_toAttributeImplCore_2991_, 0);
lean_inc_ref(v_filterExport_2993_);
lean_inc(v_ref_2994_);
v___x_2995_ = l_Lean_registerParametricAttributeExt___redArg(v_ref_2994_, v_preserveOrder_2992_, v_filterExport_2993_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; lean_object* v___x_2997_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_a_2996_);
lean_dec_ref_known(v___x_2995_, 1);
v___x_2997_ = l_Lean_registerParametricAttributeForExt___redArg(v_impl_2989_, v_a_2996_);
return v___x_2997_;
}
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3005_; 
lean_dec_ref(v_impl_2989_);
v_a_2998_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_3000_ = v___x_2995_;
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v___x_2995_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3003_; 
if (v_isShared_3001_ == 0)
{
v___x_3003_ = v___x_3000_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v_a_2998_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___redArg___boxed(lean_object* v_impl_3006_, lean_object* v___y_3007_){
_start:
{
lean_object* v_res_3008_; 
v_res_3008_ = l_Lean_registerParametricAttribute___redArg(v_impl_3006_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute(lean_object* v_00_u03b1_3009_, lean_object* v_impl_3010_){
_start:
{
lean_object* v___x_3012_; 
v___x_3012_ = l_Lean_registerParametricAttribute___redArg(v_impl_3010_);
return v___x_3012_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerParametricAttribute___boxed(lean_object* v_00_u03b1_3013_, lean_object* v_impl_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l_Lean_registerParametricAttribute(v_00_u03b1_3013_, v_impl_3014_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1(lean_object* v_decl_3017_, lean_object* v___x_3018_, lean_object* v___x_3019_, lean_object* v_a_3020_, lean_object* v_x_3021_, lean_object* v___y_3022_){
_start:
{
lean_object* v_fst_3023_; uint8_t v___x_3024_; 
v_fst_3023_ = lean_ctor_get(v_a_3020_, 0);
v___x_3024_ = lean_name_eq(v_fst_3023_, v_decl_3017_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; 
lean_dec_ref(v_a_3020_);
v___x_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3018_);
return v___x_3025_;
}
else
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; 
lean_dec_ref(v___x_3018_);
v___x_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3026_, 0, v_a_3020_);
v___x_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
v___x_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
lean_ctor_set(v___x_3028_, 1, v___x_3019_);
v___x_3029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3028_);
return v___x_3029_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1___boxed(lean_object* v_decl_3030_, lean_object* v___x_3031_, lean_object* v___x_3032_, lean_object* v_a_3033_, lean_object* v_x_3034_, lean_object* v___y_3035_){
_start:
{
lean_object* v_res_3036_; 
v_res_3036_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1(v_decl_3030_, v___x_3031_, v___x_3032_, v_a_3033_, v_x_3034_, v___y_3035_);
lean_dec_ref(v___y_3035_);
lean_dec(v_decl_3030_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(lean_object* v_inst_3064_, lean_object* v_ext_3065_, uint8_t v_preserveOrder_3066_, lean_object* v_env_3067_, lean_object* v_decl_3068_){
_start:
{
lean_object* v___y_3070_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0));
v___x_3082_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3067_, v_decl_3068_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_toEnvExtension_3083_; lean_object* v_asyncMode_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v_snd_3087_; lean_object* v___x_3088_; 
lean_dec(v_inst_3064_);
v_toEnvExtension_3083_ = lean_ctor_get(v_ext_3065_, 0);
v_asyncMode_3084_ = lean_ctor_get(v_toEnvExtension_3083_, 2);
v___x_3085_ = lean_box(0);
v___x_3086_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3081_, v_ext_3065_, v_env_3067_, v_asyncMode_3084_, v___x_3085_);
v_snd_3087_ = lean_ctor_get(v___x_3086_, 1);
lean_inc(v_snd_3087_);
lean_dec(v___x_3086_);
v___x_3088_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_3087_, v_decl_3068_);
lean_dec(v_decl_3068_);
lean_dec(v_snd_3087_);
return v___x_3088_;
}
else
{
if (v_preserveOrder_3066_ == 0)
{
lean_object* v_val_3089_; uint8_t v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; uint8_t v___x_3094_; 
v_val_3089_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_val_3089_);
lean_dec_ref_known(v___x_3082_, 1);
v___x_3090_ = 0;
v___x_3091_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3081_, v_ext_3065_, v_env_3067_, v_val_3089_, v___x_3090_);
lean_dec(v_val_3089_);
lean_dec_ref(v_env_3067_);
v___x_3092_ = lean_unsigned_to_nat(0u);
v___x_3093_ = lean_array_get_size(v___x_3091_);
v___x_3094_ = lean_nat_dec_lt(v___x_3092_, v___x_3093_);
if (v___x_3094_ == 0)
{
lean_object* v___x_3095_; 
lean_dec_ref(v___x_3091_);
lean_dec(v_decl_3068_);
lean_dec(v_inst_3064_);
v___x_3095_ = lean_box(0);
return v___x_3095_;
}
else
{
lean_object* v___x_3096_; lean_object* v___x_3097_; uint8_t v___x_3098_; 
v___x_3096_ = lean_unsigned_to_nat(1u);
v___x_3097_ = lean_nat_sub(v___x_3093_, v___x_3096_);
v___x_3098_ = lean_nat_dec_le(v___x_3092_, v___x_3097_);
if (v___x_3098_ == 0)
{
lean_object* v___x_3099_; 
lean_dec(v___x_3097_);
lean_dec_ref(v___x_3091_);
lean_dec(v_decl_3068_);
lean_dec(v_inst_3064_);
v___x_3099_ = lean_box(0);
return v___x_3099_;
}
else
{
lean_object* v___f_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___f_3100_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1));
v___x_3101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3101_, 0, v_decl_3068_);
lean_ctor_set(v___x_3101_, 1, v_inst_3064_);
v___x_3102_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2));
v___x_3103_ = l_Array_binSearchAux___redArg(v___f_3100_, v___x_3102_, v___x_3091_, v___x_3101_, v___x_3092_, v___x_3097_);
lean_dec_ref(v___x_3091_);
v___y_3070_ = v___x_3103_;
goto v___jp_3069_;
}
}
}
else
{
lean_object* v_val_3104_; uint8_t v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___f_3111_; size_t v_sz_3112_; size_t v___x_3113_; lean_object* v___x_3114_; lean_object* v_fst_3115_; 
lean_dec(v_inst_3064_);
v_val_3104_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_val_3104_);
lean_dec_ref_known(v___x_3082_, 1);
v___x_3105_ = 0;
v___x_3106_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3081_, v_ext_3065_, v_env_3067_, v_val_3104_, v___x_3105_);
lean_dec(v_val_3104_);
lean_dec_ref(v_env_3067_);
v___x_3107_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__12));
v___x_3108_ = lean_box(0);
v___x_3109_ = lean_box(0);
v___x_3110_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__13));
v___f_3111_ = lean_alloc_closure((void*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_3111_, 0, v_decl_3068_);
lean_closure_set(v___f_3111_, 1, v___x_3110_);
lean_closure_set(v___f_3111_, 2, v___x_3109_);
v_sz_3112_ = lean_array_size(v___x_3106_);
v___x_3113_ = ((size_t)0ULL);
v___x_3114_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3107_, v___x_3106_, v___f_3111_, v_sz_3112_, v___x_3113_, v___x_3110_);
v_fst_3115_ = lean_ctor_get(v___x_3114_, 0);
lean_inc(v_fst_3115_);
lean_dec(v___x_3114_);
if (lean_obj_tag(v_fst_3115_) == 0)
{
return v___x_3108_;
}
else
{
lean_object* v_val_3116_; 
v_val_3116_ = lean_ctor_get(v_fst_3115_, 0);
lean_inc(v_val_3116_);
lean_dec_ref_known(v_fst_3115_, 1);
v___y_3070_ = v_val_3116_;
goto v___jp_3069_;
}
}
}
v___jp_3069_:
{
if (lean_obj_tag(v___y_3070_) == 0)
{
lean_object* v___x_3071_; 
v___x_3071_ = lean_box(0);
return v___x_3071_;
}
else
{
lean_object* v_val_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3080_; 
v_val_3072_ = lean_ctor_get(v___y_3070_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___y_3070_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3074_ = v___y_3070_;
v_isShared_3075_ = v_isSharedCheck_3080_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_val_3072_);
lean_dec(v___y_3070_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3080_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v_snd_3076_; lean_object* v___x_3078_; 
v_snd_3076_ = lean_ctor_get(v_val_3072_, 1);
lean_inc(v_snd_3076_);
lean_dec(v_val_3072_);
if (v_isShared_3075_ == 0)
{
lean_ctor_set(v___x_3074_, 0, v_snd_3076_);
v___x_3078_ = v___x_3074_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_snd_3076_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___boxed(lean_object* v_inst_3117_, lean_object* v_ext_3118_, lean_object* v_preserveOrder_3119_, lean_object* v_env_3120_, lean_object* v_decl_3121_){
_start:
{
uint8_t v_preserveOrder_boxed_3122_; lean_object* v_res_3123_; 
v_preserveOrder_boxed_3122_ = lean_unbox(v_preserveOrder_3119_);
v_res_3123_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v_inst_3117_, v_ext_3118_, v_preserveOrder_boxed_3122_, v_env_3120_, v_decl_3121_);
lean_dec_ref(v_ext_3118_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f(lean_object* v_00_u03b1_3124_, lean_object* v_inst_3125_, lean_object* v_ext_3126_, uint8_t v_preserveOrder_3127_, lean_object* v_env_3128_, lean_object* v_decl_3129_){
_start:
{
lean_object* v___x_3130_; 
v___x_3130_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v_inst_3125_, v_ext_3126_, v_preserveOrder_3127_, v_env_3128_, v_decl_3129_);
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___boxed(lean_object* v_00_u03b1_3131_, lean_object* v_inst_3132_, lean_object* v_ext_3133_, lean_object* v_preserveOrder_3134_, lean_object* v_env_3135_, lean_object* v_decl_3136_){
_start:
{
uint8_t v_preserveOrder_boxed_3137_; lean_object* v_res_3138_; 
v_preserveOrder_boxed_3137_ = lean_unbox(v_preserveOrder_3134_);
v_res_3138_ = l_Lean_ParametricAttribute_getParamFromExt_x3f(v_00_u03b1_3131_, v_inst_3132_, v_ext_3133_, v_preserveOrder_boxed_3137_, v_env_3135_, v_decl_3136_);
lean_dec_ref(v_ext_3133_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object* v_inst_3139_, lean_object* v_attr_3140_, lean_object* v_env_3141_, lean_object* v_decl_3142_){
_start:
{
lean_object* v_ext_3143_; uint8_t v_preserveOrder_3144_; lean_object* v___x_3145_; 
v_ext_3143_ = lean_ctor_get(v_attr_3140_, 1);
v_preserveOrder_3144_ = lean_ctor_get_uint8(v_attr_3140_, sizeof(void*)*2);
v___x_3145_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v_inst_3139_, v_ext_3143_, v_preserveOrder_3144_, v_env_3141_, v_decl_3142_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg___boxed(lean_object* v_inst_3146_, lean_object* v_attr_3147_, lean_object* v_env_3148_, lean_object* v_decl_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v_inst_3146_, v_attr_3147_, v_env_3148_, v_decl_3149_);
lean_dec_ref(v_attr_3147_);
return v_res_3150_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f(lean_object* v_00_u03b1_3151_, lean_object* v_inst_3152_, lean_object* v_attr_3153_, lean_object* v_env_3154_, lean_object* v_decl_3155_){
_start:
{
lean_object* v___x_3156_; 
v___x_3156_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v_inst_3152_, v_attr_3153_, v_env_3154_, v_decl_3155_);
return v___x_3156_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_getParam_x3f___boxed(lean_object* v_00_u03b1_3157_, lean_object* v_inst_3158_, lean_object* v_attr_3159_, lean_object* v_env_3160_, lean_object* v_decl_3161_){
_start:
{
lean_object* v_res_3162_; 
v_res_3162_ = l_Lean_ParametricAttribute_getParam_x3f(v_00_u03b1_3157_, v_inst_3158_, v_attr_3159_, v_env_3160_, v_decl_3161_);
lean_dec_ref(v_attr_3159_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt___redArg(lean_object* v_ext_3167_, lean_object* v_attr_3168_, lean_object* v_env_3169_, lean_object* v_decl_3170_, lean_object* v_param_3171_){
_start:
{
lean_object* v___x_3172_; 
v___x_3172_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3169_, v_decl_3170_);
if (lean_obj_tag(v___x_3172_) == 0)
{
lean_object* v_toEnvExtension_3173_; lean_object* v_asyncMode_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v_snd_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3208_; 
v_toEnvExtension_3173_ = lean_ctor_get(v_ext_3167_, 0);
v_asyncMode_3174_ = lean_ctor_get(v_toEnvExtension_3173_, 2);
lean_inc(v_asyncMode_3174_);
v___x_3175_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__0));
v___x_3176_ = lean_box(0);
lean_inc_ref(v_env_3169_);
v___x_3177_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3175_, v_ext_3167_, v_env_3169_, v_asyncMode_3174_, v___x_3176_);
v_snd_3178_ = lean_ctor_get(v___x_3177_, 1);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3208_ == 0)
{
lean_object* v_unused_3209_; 
v_unused_3209_ = lean_ctor_get(v___x_3177_, 0);
lean_dec(v_unused_3209_);
v___x_3180_ = v___x_3177_;
v_isShared_3181_ = v_isSharedCheck_3208_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_snd_3178_);
lean_dec(v___x_3177_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3208_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3182_; 
v___x_3182_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_3178_, v_decl_3170_);
lean_dec(v_snd_3178_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v___x_3184_; 
lean_dec_ref(v_attr_3168_);
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 1, v_param_3171_);
lean_ctor_set(v___x_3180_, 0, v_decl_3170_);
v___x_3184_ = v___x_3180_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_decl_3170_);
lean_ctor_set(v_reuseFailAlloc_3187_, 1, v_param_3171_);
v___x_3184_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3185_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_3167_, v_env_3169_, v___x_3184_, v_asyncMode_3174_, v___x_3176_);
lean_dec(v_asyncMode_3174_);
v___x_3186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
return v___x_3186_;
}
}
else
{
lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3206_; 
lean_del_object(v___x_3180_);
lean_dec(v_asyncMode_3174_);
lean_dec(v_param_3171_);
lean_dec_ref(v_env_3169_);
lean_dec_ref(v_ext_3167_);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3206_ == 0)
{
lean_object* v_unused_3207_; 
v_unused_3207_ = lean_ctor_get(v___x_3182_, 0);
lean_dec(v_unused_3207_);
v___x_3189_ = v___x_3182_;
v_isShared_3190_ = v_isSharedCheck_3206_;
goto v_resetjp_3188_;
}
else
{
lean_dec(v___x_3182_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3206_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v_toAttributeImplCore_3191_; lean_object* v_name_3192_; uint8_t v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3204_; 
v_toAttributeImplCore_3191_ = lean_ctor_get(v_attr_3168_, 0);
lean_inc_ref(v_toAttributeImplCore_3191_);
lean_dec_ref(v_attr_3168_);
v_name_3192_ = lean_ctor_get(v_toAttributeImplCore_3191_, 1);
lean_inc(v_name_3192_);
lean_dec_ref(v_toAttributeImplCore_3191_);
v___x_3193_ = 1;
v___x_3194_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0));
v___x_3195_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3192_, v___x_3193_);
v___x_3196_ = lean_string_append(v___x_3194_, v___x_3195_);
lean_dec_ref(v___x_3195_);
v___x_3197_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1));
v___x_3198_ = lean_string_append(v___x_3196_, v___x_3197_);
v___x_3199_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_3170_, v___x_3193_);
v___x_3200_ = lean_string_append(v___x_3198_, v___x_3199_);
lean_dec_ref(v___x_3199_);
v___x_3201_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__2));
v___x_3202_ = lean_string_append(v___x_3200_, v___x_3201_);
if (v_isShared_3190_ == 0)
{
lean_ctor_set_tag(v___x_3189_, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3202_);
v___x_3204_ = v___x_3189_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v___x_3202_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
}
}
else
{
lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3228_; 
lean_dec(v_param_3171_);
lean_dec_ref(v_env_3169_);
lean_dec_ref(v_ext_3167_);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3172_);
if (v_isSharedCheck_3228_ == 0)
{
lean_object* v_unused_3229_; 
v_unused_3229_ = lean_ctor_get(v___x_3172_, 0);
lean_dec(v_unused_3229_);
v___x_3211_ = v___x_3172_;
v_isShared_3212_ = v_isSharedCheck_3228_;
goto v_resetjp_3210_;
}
else
{
lean_dec(v___x_3172_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3228_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v_toAttributeImplCore_3213_; lean_object* v_name_3214_; uint8_t v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3226_; 
v_toAttributeImplCore_3213_ = lean_ctor_get(v_attr_3168_, 0);
lean_inc_ref(v_toAttributeImplCore_3213_);
lean_dec_ref(v_attr_3168_);
v_name_3214_ = lean_ctor_get(v_toAttributeImplCore_3213_, 1);
lean_inc(v_name_3214_);
lean_dec_ref(v_toAttributeImplCore_3213_);
v___x_3215_ = 1;
v___x_3216_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__0));
v___x_3217_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3214_, v___x_3215_);
v___x_3218_ = lean_string_append(v___x_3216_, v___x_3217_);
lean_dec_ref(v___x_3217_);
v___x_3219_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__1));
v___x_3220_ = lean_string_append(v___x_3218_, v___x_3219_);
v___x_3221_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_3170_, v___x_3215_);
v___x_3222_ = lean_string_append(v___x_3220_, v___x_3221_);
lean_dec_ref(v___x_3221_);
v___x_3223_ = ((lean_object*)(l_Lean_ParametricAttribute_setParamFromExt___redArg___closed__3));
v___x_3224_ = lean_string_append(v___x_3222_, v___x_3223_);
if (v_isShared_3212_ == 0)
{
lean_ctor_set_tag(v___x_3211_, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3224_);
v___x_3226_ = v___x_3211_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v___x_3224_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParamFromExt(lean_object* v_00_u03b1_3230_, lean_object* v_ext_3231_, lean_object* v_attr_3232_, lean_object* v_env_3233_, lean_object* v_decl_3234_, lean_object* v_param_3235_){
_start:
{
lean_object* v___x_3236_; 
v___x_3236_ = l_Lean_ParametricAttribute_setParamFromExt___redArg(v_ext_3231_, v_attr_3232_, v_env_3233_, v_decl_3234_, v_param_3235_);
return v___x_3236_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam___redArg(lean_object* v_attr_3237_, lean_object* v_env_3238_, lean_object* v_decl_3239_, lean_object* v_param_3240_){
_start:
{
lean_object* v_attr_3241_; lean_object* v_ext_3242_; lean_object* v___x_3243_; 
v_attr_3241_ = lean_ctor_get(v_attr_3237_, 0);
lean_inc_ref(v_attr_3241_);
v_ext_3242_ = lean_ctor_get(v_attr_3237_, 1);
lean_inc_ref(v_ext_3242_);
lean_dec_ref(v_attr_3237_);
v___x_3243_ = l_Lean_ParametricAttribute_setParamFromExt___redArg(v_ext_3242_, v_attr_3241_, v_env_3238_, v_decl_3239_, v_param_3240_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParametricAttribute_setParam(lean_object* v_00_u03b1_3244_, lean_object* v_attr_3245_, lean_object* v_env_3246_, lean_object* v_decl_3247_, lean_object* v_param_3248_){
_start:
{
lean_object* v___x_3249_; 
v___x_3249_ = l_Lean_ParametricAttribute_setParam___redArg(v_attr_3245_, v_env_3246_, v_decl_3247_, v_param_3248_);
return v___x_3249_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0(lean_object* v_x_3250_, lean_object* v___y_3251_){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3253_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___lam__0___closed__1));
v___x_3254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3253_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0___boxed(lean_object* v_x_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_){
_start:
{
lean_object* v_res_3258_; 
v_res_3258_ = l_Lean_instInhabitedEnumAttributes_default___redArg___lam__0(v_x_3255_, v___y_3256_);
lean_dec_ref(v___y_3256_);
lean_dec_ref(v_x_3255_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1(lean_object* v_s_3259_, lean_object* v_x_3260_){
_start:
{
lean_inc(v_s_3259_);
return v_s_3259_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1___boxed(lean_object* v_s_3261_, lean_object* v_x_3262_){
_start:
{
lean_object* v_res_3263_; 
v_res_3263_ = l_Lean_instInhabitedEnumAttributes_default___redArg___lam__1(v_s_3261_, v_x_3262_);
lean_dec_ref(v_x_3262_);
lean_dec(v_s_3261_);
return v_res_3263_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2(lean_object* v_x_3264_, lean_object* v_x_3265_){
_start:
{
lean_object* v___x_3266_; 
v___x_3266_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__1));
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2___boxed(lean_object* v_x_3267_, lean_object* v_x_3268_){
_start:
{
lean_object* v_res_3269_; 
v_res_3269_ = l_Lean_instInhabitedEnumAttributes_default___redArg___lam__2(v_x_3267_, v_x_3268_);
lean_dec(v_x_3268_);
lean_dec_ref(v_x_3267_);
return v_res_3269_;
}
}
static lean_object* _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3(void){
_start:
{
lean_object* v___f_3273_; lean_object* v___f_3274_; lean_object* v___f_3275_; lean_object* v___f_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___f_3273_ = ((lean_object*)(l_Lean_instInhabitedTagAttribute_default___closed__3));
v___f_3274_ = ((lean_object*)(l_Lean_instInhabitedEnumAttributes_default___redArg___closed__2));
v___f_3275_ = ((lean_object*)(l_Lean_instInhabitedEnumAttributes_default___redArg___closed__1));
v___f_3276_ = ((lean_object*)(l_Lean_instInhabitedEnumAttributes_default___redArg___closed__0));
v___x_3277_ = lean_box(0);
v___x_3278_ = lean_obj_once(&l_Lean_instInhabitedTagAttribute_default___closed__4, &l_Lean_instInhabitedTagAttribute_default___closed__4_once, _init_l_Lean_instInhabitedTagAttribute_default___closed__4);
v___x_3279_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
lean_ctor_set(v___x_3279_, 1, v___x_3277_);
lean_ctor_set(v___x_3279_, 2, v___f_3276_);
lean_ctor_set(v___x_3279_, 3, v___f_3275_);
lean_ctor_set(v___x_3279_, 4, v___f_3274_);
lean_ctor_set(v___x_3279_, 5, v___f_3273_);
return v___x_3279_;
}
}
static lean_object* _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
v___x_3280_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3, &l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3_once, _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__3);
v___x_3281_ = lean_box(0);
v___x_3282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3281_);
lean_ctor_set(v___x_3282_, 1, v___x_3280_);
return v___x_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg(){
_start:
{
lean_object* v___x_3284_; 
v___x_3284_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4, &l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4_once, _init_l_Lean_instInhabitedEnumAttributes_default___redArg___closed__4);
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default___redArg___boxed(lean_object* v___dummy_3285_){
_start:
{
lean_object* v_res_3286_; 
v_res_3286_ = l_Lean_instInhabitedEnumAttributes_default___redArg();
return v_res_3286_;
}
}
static lean_object* _init_l_Lean_instInhabitedEnumAttributes_default___closed__0(void){
_start:
{
lean_object* v___x_3287_; 
v___x_3287_ = l_Lean_instInhabitedEnumAttributes_default___redArg();
return v___x_3287_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes_default(lean_object* v_00_u03b1_3288_){
_start:
{
lean_object* v___x_3289_; 
v___x_3289_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___closed__0, &l_Lean_instInhabitedEnumAttributes_default___closed__0_once, _init_l_Lean_instInhabitedEnumAttributes_default___closed__0);
return v___x_3289_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg(){
_start:
{
lean_object* v___x_3291_; 
v___x_3291_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___closed__0, &l_Lean_instInhabitedEnumAttributes_default___closed__0_once, _init_l_Lean_instInhabitedEnumAttributes_default___closed__0);
return v___x_3291_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes___redArg___boxed(lean_object* v___dummy_3292_){
_start:
{
lean_object* v_res_3293_; 
v_res_3293_ = l_Lean_instInhabitedEnumAttributes___redArg();
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedEnumAttributes(lean_object* v_a_3294_){
_start:
{
lean_object* v___x_3295_; 
v___x_3295_ = lean_obj_once(&l_Lean_instInhabitedEnumAttributes_default___closed__0, &l_Lean_instInhabitedEnumAttributes_default___closed__0_once, _init_l_Lean_instInhabitedEnumAttributes_default___closed__0);
return v___x_3295_;
}
}
static lean_object* _init_l_Lean_registerEnumAttributes___auto__1(void){
_start:
{
lean_object* v___x_3296_; 
v___x_3296_ = lean_obj_once(&l_Lean_AttributeImplCore_ref___autoParam___closed__28, &l_Lean_AttributeImplCore_ref___autoParam___closed__28_once, _init_l_Lean_AttributeImplCore_ref___autoParam___closed__28);
return v___x_3296_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0(lean_object* v_x_3297_){
_start:
{
lean_object* v___x_3298_; 
v___x_3298_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__0___boxed(lean_object* v_x_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l_Lean_registerEnumAttributes___redArg___lam__0(v_x_3299_);
lean_dec(v_x_3299_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(lean_object* v_newState_3301_, lean_object* v_x_3302_, lean_object* v_x_3303_){
_start:
{
if (lean_obj_tag(v_x_3303_) == 0)
{
return v_x_3302_;
}
else
{
lean_object* v_head_3304_; lean_object* v_tail_3305_; lean_object* v___x_3306_; 
v_head_3304_ = lean_ctor_get(v_x_3303_, 0);
lean_inc(v_head_3304_);
v_tail_3305_ = lean_ctor_get(v_x_3303_, 1);
lean_inc(v_tail_3305_);
lean_dec_ref_known(v_x_3303_, 2);
v___x_3306_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_newState_3301_, v_head_3304_);
if (lean_obj_tag(v___x_3306_) == 1)
{
lean_object* v_val_3307_; lean_object* v___x_3308_; 
v_val_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_val_3307_);
lean_dec_ref_known(v___x_3306_, 1);
v___x_3308_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_head_3304_, v_val_3307_, v_x_3302_);
v_x_3302_ = v___x_3308_;
v_x_3303_ = v_tail_3305_;
goto _start;
}
else
{
lean_dec(v___x_3306_);
lean_dec(v_head_3304_);
v_x_3303_ = v_tail_3305_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg___boxed(lean_object* v_newState_3311_, lean_object* v_x_3312_, lean_object* v_x_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(v_newState_3311_, v_x_3312_, v_x_3313_);
lean_dec(v_newState_3311_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1(lean_object* v_x_3315_, lean_object* v_newState_3316_, lean_object* v_consts_3317_, lean_object* v_st_3318_){
_start:
{
lean_object* v___x_3319_; 
v___x_3319_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(v_newState_3316_, v_st_3318_, v_consts_3317_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__1___boxed(lean_object* v_x_3320_, lean_object* v_newState_3321_, lean_object* v_consts_3322_, lean_object* v_st_3323_){
_start:
{
lean_object* v_res_3324_; 
v_res_3324_ = l_Lean_registerEnumAttributes___redArg___lam__1(v_x_3320_, v_newState_3321_, v_consts_3322_, v_st_3323_);
lean_dec(v_newState_3321_);
lean_dec(v_x_3320_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__2(lean_object* v_s_3334_){
_start:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3335_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___lam__2___closed__3));
v___x_3336_ = l_Lean_NameMap_size___redArg(v_s_3334_);
v___x_3337_ = l_Nat_reprFast(v___x_3336_);
v___x_3338_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3337_);
v___x_3339_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3335_);
lean_ctor_set(v___x_3339_, 1, v___x_3338_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__2___boxed(lean_object* v_s_3340_){
_start:
{
lean_object* v_res_3341_; 
v_res_3341_ = l_Lean_registerEnumAttributes___redArg___lam__2(v_s_3340_);
lean_dec(v_s_3340_);
return v_res_3341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(lean_object* v_env_3342_, lean_object* v_as_3343_, size_t v_i_3344_, size_t v_stop_3345_, lean_object* v_b_3346_){
_start:
{
lean_object* v___y_3348_; uint8_t v___x_3352_; 
v___x_3352_ = lean_usize_dec_eq(v_i_3344_, v_stop_3345_);
if (v___x_3352_ == 0)
{
lean_object* v___x_3353_; lean_object* v_fst_3354_; uint8_t v___x_3355_; lean_object* v___x_3356_; uint8_t v___x_3357_; 
v___x_3353_ = lean_array_uget_borrowed(v_as_3343_, v_i_3344_);
v_fst_3354_ = lean_ctor_get(v___x_3353_, 0);
v___x_3355_ = 1;
lean_inc_ref(v_env_3342_);
v___x_3356_ = l_Lean_Environment_setExporting(v_env_3342_, v___x_3355_);
lean_inc(v_fst_3354_);
v___x_3357_ = l_Lean_Environment_contains(v___x_3356_, v_fst_3354_, v___x_3352_);
if (v___x_3357_ == 0)
{
v___y_3348_ = v_b_3346_;
goto v___jp_3347_;
}
else
{
lean_object* v___x_3358_; 
lean_inc(v___x_3353_);
v___x_3358_ = lean_array_push(v_b_3346_, v___x_3353_);
v___y_3348_ = v___x_3358_;
goto v___jp_3347_;
}
}
else
{
lean_dec_ref(v_env_3342_);
return v_b_3346_;
}
v___jp_3347_:
{
size_t v___x_3349_; size_t v___x_3350_; 
v___x_3349_ = ((size_t)1ULL);
v___x_3350_ = lean_usize_add(v_i_3344_, v___x_3349_);
v_i_3344_ = v___x_3350_;
v_b_3346_ = v___y_3348_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg___boxed(lean_object* v_env_3359_, lean_object* v_as_3360_, lean_object* v_i_3361_, lean_object* v_stop_3362_, lean_object* v_b_3363_){
_start:
{
size_t v_i_boxed_3364_; size_t v_stop_boxed_3365_; lean_object* v_res_3366_; 
v_i_boxed_3364_ = lean_unbox_usize(v_i_3361_);
lean_dec(v_i_3361_);
v_stop_boxed_3365_ = lean_unbox_usize(v_stop_3362_);
lean_dec(v_stop_3362_);
v_res_3366_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3359_, v_as_3360_, v_i_boxed_3364_, v_stop_boxed_3365_, v_b_3363_);
lean_dec_ref(v_as_3360_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__4(lean_object* v___f_3367_, lean_object* v_env_3368_, lean_object* v_m_3369_){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___y_3373_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___y_3390_; lean_object* v___y_3391_; uint8_t v___x_3393_; 
v___x_3370_ = lean_unsigned_to_nat(0u);
v___x_3371_ = ((lean_object*)(l_Lean_instInhabitedParametricAttribute_default___redArg___lam__2___closed__0));
v___x_3387_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v___f_3367_, v___x_3371_, v_m_3369_);
v___x_3388_ = lean_array_get_size(v___x_3387_);
v___x_3393_ = lean_nat_dec_eq(v___x_3388_, v___x_3370_);
if (v___x_3393_ == 0)
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___y_3397_; uint8_t v___x_3399_; 
v___x_3394_ = lean_unsigned_to_nat(1u);
v___x_3395_ = lean_nat_sub(v___x_3388_, v___x_3394_);
v___x_3399_ = lean_nat_dec_le(v___x_3370_, v___x_3395_);
if (v___x_3399_ == 0)
{
lean_inc(v___x_3395_);
v___y_3397_ = v___x_3395_;
goto v___jp_3396_;
}
else
{
v___y_3397_ = v___x_3370_;
goto v___jp_3396_;
}
v___jp_3396_:
{
uint8_t v___x_3398_; 
v___x_3398_ = lean_nat_dec_le(v___y_3397_, v___x_3395_);
if (v___x_3398_ == 0)
{
lean_dec(v___x_3395_);
lean_inc(v___y_3397_);
v___y_3390_ = v___y_3397_;
v___y_3391_ = v___y_3397_;
goto v___jp_3389_;
}
else
{
v___y_3390_ = v___y_3397_;
v___y_3391_ = v___x_3395_;
goto v___jp_3389_;
}
}
}
else
{
v___y_3373_ = v___x_3387_;
goto v___jp_3372_;
}
v___jp_3372_:
{
lean_object* v___x_3374_; uint8_t v___x_3375_; 
v___x_3374_ = lean_array_get_size(v___y_3373_);
v___x_3375_ = lean_nat_dec_lt(v___x_3370_, v___x_3374_);
if (v___x_3375_ == 0)
{
lean_object* v___x_3376_; 
lean_dec_ref(v_env_3368_);
v___x_3376_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3371_);
lean_ctor_set(v___x_3376_, 1, v___x_3371_);
lean_ctor_set(v___x_3376_, 2, v___y_3373_);
return v___x_3376_;
}
else
{
uint8_t v___x_3377_; 
v___x_3377_ = lean_nat_dec_le(v___x_3374_, v___x_3374_);
if (v___x_3377_ == 0)
{
if (v___x_3375_ == 0)
{
lean_object* v___x_3378_; 
lean_dec_ref(v_env_3368_);
v___x_3378_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3378_, 0, v___x_3371_);
lean_ctor_set(v___x_3378_, 1, v___x_3371_);
lean_ctor_set(v___x_3378_, 2, v___y_3373_);
return v___x_3378_;
}
else
{
size_t v___x_3379_; size_t v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3379_ = ((size_t)0ULL);
v___x_3380_ = lean_usize_of_nat(v___x_3374_);
v___x_3381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3368_, v___y_3373_, v___x_3379_, v___x_3380_, v___x_3371_);
lean_inc_ref(v___x_3381_);
v___x_3382_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3381_);
lean_ctor_set(v___x_3382_, 1, v___x_3381_);
lean_ctor_set(v___x_3382_, 2, v___y_3373_);
return v___x_3382_;
}
}
else
{
size_t v___x_3383_; size_t v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3383_ = ((size_t)0ULL);
v___x_3384_ = lean_usize_of_nat(v___x_3374_);
v___x_3385_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3368_, v___y_3373_, v___x_3383_, v___x_3384_, v___x_3371_);
lean_inc_ref(v___x_3385_);
v___x_3386_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3386_, 0, v___x_3385_);
lean_ctor_set(v___x_3386_, 1, v___x_3385_);
lean_ctor_set(v___x_3386_, 2, v___y_3373_);
return v___x_3386_;
}
}
}
v___jp_3389_:
{
lean_object* v___x_3392_; 
v___x_3392_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerParametricAttributeExt_spec__1___redArg(v___x_3388_, v___x_3387_, v___y_3390_, v___y_3391_);
lean_dec(v___y_3391_);
v___y_3373_ = v___x_3392_;
goto v___jp_3372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__3(lean_object* v_s_3400_, lean_object* v_p_3401_){
_start:
{
lean_object* v_fst_3402_; lean_object* v_snd_3403_; lean_object* v___x_3404_; 
v_fst_3402_ = lean_ctor_get(v_p_3401_, 0);
lean_inc(v_fst_3402_);
v_snd_3403_ = lean_ctor_get(v_p_3401_, 1);
lean_inc(v_snd_3403_);
lean_dec_ref(v_p_3401_);
v___x_3404_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3402_, v_snd_3403_, v_s_3400_);
return v___x_3404_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6(lean_object* v___x_3405_, lean_object* v_x_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v___x_3409_; 
v___x_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3409_, 0, v___x_3405_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___lam__6___boxed(lean_object* v___x_3410_, lean_object* v_x_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v_res_3414_; 
v_res_3414_ = l_Lean_registerEnumAttributes___redArg___lam__6(v___x_3410_, v_x_3411_, v___y_3412_);
lean_dec_ref(v___y_3412_);
lean_dec_ref(v_x_3411_);
return v_res_3414_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3(lean_object* v_as_3415_){
_start:
{
if (lean_obj_tag(v_as_3415_) == 0)
{
lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3417_ = lean_box(0);
v___x_3418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3417_);
return v___x_3418_;
}
else
{
lean_object* v_head_3419_; lean_object* v_tail_3420_; lean_object* v___x_3421_; 
v_head_3419_ = lean_ctor_get(v_as_3415_, 0);
lean_inc(v_head_3419_);
v_tail_3420_ = lean_ctor_get(v_as_3415_, 1);
lean_inc(v_tail_3420_);
lean_dec_ref_known(v_as_3415_, 2);
v___x_3421_ = l_Lean_registerBuiltinAttribute(v_head_3419_);
if (lean_obj_tag(v___x_3421_) == 0)
{
lean_dec_ref_known(v___x_3421_, 1);
v_as_3415_ = v_tail_3420_;
goto _start;
}
else
{
lean_dec(v_tail_3420_);
return v___x_3421_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_registerEnumAttributes_spec__3___boxed(lean_object* v_as_3423_, lean_object* v___y_3424_){
_start:
{
lean_object* v_res_3425_; 
v_res_3425_ = l_List_forM___at___00Lean_registerEnumAttributes_spec__3(v_as_3423_);
return v_res_3425_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1(lean_object* v_validate_3426_, lean_object* v_snd_3427_, lean_object* v_a_3428_, lean_object* v_fst_3429_, lean_object* v_decl_3430_, lean_object* v_stx_3431_, uint8_t v_kind_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_){
_start:
{
lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___x_3477_; 
v___x_3477_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_3431_, v___y_3433_, v___y_3434_);
if (lean_obj_tag(v___x_3477_) == 0)
{
uint8_t v___x_3478_; uint8_t v___x_3479_; 
lean_dec_ref_known(v___x_3477_, 1);
v___x_3478_ = 0;
v___x_3479_ = l_Lean_instBEqAttributeKind_beq(v_kind_3432_, v___x_3478_);
if (v___x_3479_ == 0)
{
lean_object* v___x_3480_; 
lean_dec(v_decl_3430_);
lean_dec_ref(v_a_3428_);
lean_dec(v_snd_3427_);
lean_dec_ref(v_validate_3426_);
v___x_3480_ = l_Lean_throwAttrMustBeGlobal___at___00Lean_registerTagAttribute_spec__5___redArg(v_fst_3429_, v_kind_3432_, v___y_3433_, v___y_3434_);
return v___x_3480_;
}
else
{
goto v___jp_3472_;
}
}
else
{
lean_dec(v_decl_3430_);
lean_dec(v_fst_3429_);
lean_dec_ref(v_a_3428_);
lean_dec(v_snd_3427_);
lean_dec_ref(v_validate_3426_);
return v___x_3477_;
}
v___jp_3436_:
{
lean_object* v___x_3439_; 
lean_inc(v___y_3438_);
lean_inc_ref(v___y_3437_);
lean_inc(v_snd_3427_);
lean_inc(v_decl_3430_);
v___x_3439_ = lean_apply_5(v_validate_3426_, v_decl_3430_, v_snd_3427_, v___y_3437_, v___y_3438_, lean_box(0));
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3470_; 
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3470_ == 0)
{
lean_object* v_unused_3471_; 
v_unused_3471_ = lean_ctor_get(v___x_3439_, 0);
lean_dec(v_unused_3471_);
v___x_3441_ = v___x_3439_;
v_isShared_3442_ = v_isSharedCheck_3470_;
goto v_resetjp_3440_;
}
else
{
lean_dec(v___x_3439_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3470_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; lean_object* v_toEnvExtension_3444_; lean_object* v_env_3445_; lean_object* v_nextMacroScope_3446_; lean_object* v_ngen_3447_; lean_object* v_auxDeclNGen_3448_; lean_object* v_traceState_3449_; lean_object* v_messages_3450_; lean_object* v_infoState_3451_; lean_object* v_snapshotTasks_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3468_; 
v___x_3443_ = lean_st_ref_take(v___y_3438_);
v_toEnvExtension_3444_ = lean_ctor_get(v_a_3428_, 0);
v_env_3445_ = lean_ctor_get(v___x_3443_, 0);
v_nextMacroScope_3446_ = lean_ctor_get(v___x_3443_, 1);
v_ngen_3447_ = lean_ctor_get(v___x_3443_, 2);
v_auxDeclNGen_3448_ = lean_ctor_get(v___x_3443_, 3);
v_traceState_3449_ = lean_ctor_get(v___x_3443_, 4);
v_messages_3450_ = lean_ctor_get(v___x_3443_, 6);
v_infoState_3451_ = lean_ctor_get(v___x_3443_, 7);
v_snapshotTasks_3452_ = lean_ctor_get(v___x_3443_, 8);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3468_ == 0)
{
lean_object* v_unused_3469_; 
v_unused_3469_ = lean_ctor_get(v___x_3443_, 5);
lean_dec(v_unused_3469_);
v___x_3454_ = v___x_3443_;
v_isShared_3455_ = v_isSharedCheck_3468_;
goto v_resetjp_3453_;
}
else
{
lean_inc(v_snapshotTasks_3452_);
lean_inc(v_infoState_3451_);
lean_inc(v_messages_3450_);
lean_inc(v_traceState_3449_);
lean_inc(v_auxDeclNGen_3448_);
lean_inc(v_ngen_3447_);
lean_inc(v_nextMacroScope_3446_);
lean_inc(v_env_3445_);
lean_dec(v___x_3443_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3468_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v_asyncMode_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3462_; 
v_asyncMode_3456_ = lean_ctor_get(v_toEnvExtension_3444_, 2);
lean_inc(v_asyncMode_3456_);
v___x_3457_ = lean_box(0);
lean_inc(v_decl_3430_);
v___x_3458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3458_, 0, v_decl_3430_);
lean_ctor_set(v___x_3458_, 1, v_snd_3427_);
v___x_3459_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_a_3428_, v_env_3445_, v___x_3458_, v_asyncMode_3456_, v_decl_3430_);
lean_dec(v_asyncMode_3456_);
v___x_3460_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_ensureAttrDeclIsPublic_spec__2___redArg___closed__1);
if (v_isShared_3455_ == 0)
{
lean_ctor_set(v___x_3454_, 5, v___x_3460_);
lean_ctor_set(v___x_3454_, 0, v___x_3459_);
v___x_3462_ = v___x_3454_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v___x_3459_);
lean_ctor_set(v_reuseFailAlloc_3467_, 1, v_nextMacroScope_3446_);
lean_ctor_set(v_reuseFailAlloc_3467_, 2, v_ngen_3447_);
lean_ctor_set(v_reuseFailAlloc_3467_, 3, v_auxDeclNGen_3448_);
lean_ctor_set(v_reuseFailAlloc_3467_, 4, v_traceState_3449_);
lean_ctor_set(v_reuseFailAlloc_3467_, 5, v___x_3460_);
lean_ctor_set(v_reuseFailAlloc_3467_, 6, v_messages_3450_);
lean_ctor_set(v_reuseFailAlloc_3467_, 7, v_infoState_3451_);
lean_ctor_set(v_reuseFailAlloc_3467_, 8, v_snapshotTasks_3452_);
v___x_3462_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
lean_object* v___x_3463_; lean_object* v___x_3465_; 
v___x_3463_ = lean_st_ref_put(v___y_3438_, v___x_3462_);
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 0, v___x_3457_);
v___x_3465_ = v___x_3441_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v___x_3457_);
v___x_3465_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
return v___x_3465_;
}
}
}
}
}
else
{
lean_dec(v_decl_3430_);
lean_dec_ref(v_a_3428_);
lean_dec(v_snd_3427_);
return v___x_3439_;
}
}
v___jp_3472_:
{
lean_object* v___x_3473_; lean_object* v_env_3474_; lean_object* v___x_3475_; 
v___x_3473_ = lean_st_ref_get(v___y_3434_);
v_env_3474_ = lean_ctor_get(v___x_3473_, 0);
lean_inc_ref(v_env_3474_);
lean_dec(v___x_3473_);
v___x_3475_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3474_, v_decl_3430_);
lean_dec_ref(v_env_3474_);
if (lean_obj_tag(v___x_3475_) == 0)
{
lean_dec(v_fst_3429_);
v___y_3437_ = v___y_3433_;
v___y_3438_ = v___y_3434_;
goto v___jp_3436_;
}
else
{
lean_object* v___x_3476_; 
lean_dec_ref_known(v___x_3475_, 1);
lean_dec_ref(v_a_3428_);
lean_dec(v_snd_3427_);
lean_dec_ref(v_validate_3426_);
v___x_3476_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_registerTagAttribute_spec__4___redArg(v_fst_3429_, v_decl_3430_, v___y_3433_, v___y_3434_);
return v___x_3476_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1___boxed(lean_object* v_validate_3481_, lean_object* v_snd_3482_, lean_object* v_a_3483_, lean_object* v_fst_3484_, lean_object* v_decl_3485_, lean_object* v_stx_3486_, lean_object* v_kind_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_){
_start:
{
uint8_t v_kind_boxed_3491_; lean_object* v_res_3492_; 
v_kind_boxed_3491_ = lean_unbox(v_kind_3487_);
v_res_3492_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1(v_validate_3481_, v_snd_3482_, v_a_3483_, v_fst_3484_, v_decl_3485_, v_stx_3486_, v_kind_boxed_3491_, v___y_3488_, v___y_3489_);
lean_dec(v___y_3489_);
lean_dec_ref(v___y_3488_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0(lean_object* v_fst_3493_, lean_object* v_decl_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_){
_start:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3498_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__1);
v___x_3499_ = l_Lean_MessageData_ofName(v_fst_3493_);
v___x_3500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3498_);
lean_ctor_set(v___x_3500_, 1, v___x_3499_);
v___x_3501_ = lean_obj_once(&l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3, &l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3_once, _init_l_Lean_instInhabitedAttributeImpl_default___lam__1___closed__3);
v___x_3502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3500_);
lean_ctor_set(v___x_3502_, 1, v___x_3501_);
v___x_3503_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_3502_, v___y_3495_, v___y_3496_);
return v___x_3503_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0___boxed(lean_object* v_fst_3504_, lean_object* v_decl_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v_res_3509_; 
v_res_3509_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0(v_fst_3504_, v_decl_3505_, v___y_3506_, v___y_3507_);
lean_dec(v___y_3507_);
lean_dec_ref(v___y_3506_);
lean_dec(v_decl_3505_);
return v_res_3509_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(lean_object* v_validate_3510_, lean_object* v_a_3511_, lean_object* v_ref_3512_, uint8_t v_applicationTime_3513_, lean_object* v_a_3514_, lean_object* v_a_3515_){
_start:
{
if (lean_obj_tag(v_a_3514_) == 0)
{
lean_object* v___x_3516_; 
lean_dec(v_ref_3512_);
lean_dec_ref(v_a_3511_);
lean_dec_ref(v_validate_3510_);
v___x_3516_ = l_List_reverse___redArg(v_a_3515_);
return v___x_3516_;
}
else
{
lean_object* v_head_3517_; lean_object* v_snd_3518_; lean_object* v_tail_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3534_; 
v_head_3517_ = lean_ctor_get(v_a_3514_, 0);
lean_inc(v_head_3517_);
v_snd_3518_ = lean_ctor_get(v_head_3517_, 1);
lean_inc(v_snd_3518_);
v_tail_3519_ = lean_ctor_get(v_a_3514_, 1);
v_isSharedCheck_3534_ = !lean_is_exclusive(v_a_3514_);
if (v_isSharedCheck_3534_ == 0)
{
lean_object* v_unused_3535_; 
v_unused_3535_ = lean_ctor_get(v_a_3514_, 0);
lean_dec(v_unused_3535_);
v___x_3521_ = v_a_3514_;
v_isShared_3522_ = v_isSharedCheck_3534_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_tail_3519_);
lean_dec(v_a_3514_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3534_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v_fst_3523_; lean_object* v_fst_3524_; lean_object* v_snd_3525_; lean_object* v___f_3526_; lean_object* v___f_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3531_; 
v_fst_3523_ = lean_ctor_get(v_head_3517_, 0);
lean_inc_n(v_fst_3523_, 3);
lean_dec(v_head_3517_);
v_fst_3524_ = lean_ctor_get(v_snd_3518_, 0);
lean_inc(v_fst_3524_);
v_snd_3525_ = lean_ctor_get(v_snd_3518_, 1);
lean_inc(v_snd_3525_);
lean_dec(v_snd_3518_);
v___f_3526_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_3526_, 0, v_fst_3523_);
lean_inc_ref(v_a_3511_);
lean_inc_ref(v_validate_3510_);
v___f_3527_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3527_, 0, v_validate_3510_);
lean_closure_set(v___f_3527_, 1, v_snd_3525_);
lean_closure_set(v___f_3527_, 2, v_a_3511_);
lean_closure_set(v___f_3527_, 3, v_fst_3523_);
lean_inc(v_ref_3512_);
v___x_3528_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3528_, 0, v_ref_3512_);
lean_ctor_set(v___x_3528_, 1, v_fst_3523_);
lean_ctor_set(v___x_3528_, 2, v_fst_3524_);
lean_ctor_set_uint8(v___x_3528_, sizeof(void*)*3, v_applicationTime_3513_);
v___x_3529_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3528_);
lean_ctor_set(v___x_3529_, 1, v___f_3527_);
lean_ctor_set(v___x_3529_, 2, v___f_3526_);
if (v_isShared_3522_ == 0)
{
lean_ctor_set(v___x_3521_, 1, v_a_3515_);
lean_ctor_set(v___x_3521_, 0, v___x_3529_);
v___x_3531_ = v___x_3521_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v___x_3529_);
lean_ctor_set(v_reuseFailAlloc_3533_, 1, v_a_3515_);
v___x_3531_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
v_a_3514_ = v_tail_3519_;
v_a_3515_ = v___x_3531_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg___boxed(lean_object* v_validate_3536_, lean_object* v_a_3537_, lean_object* v_ref_3538_, lean_object* v_applicationTime_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_){
_start:
{
uint8_t v_applicationTime_boxed_3542_; lean_object* v_res_3543_; 
v_applicationTime_boxed_3542_ = lean_unbox(v_applicationTime_3539_);
v_res_3543_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(v_validate_3536_, v_a_3537_, v_ref_3538_, v_applicationTime_boxed_3542_, v_a_3540_, v_a_3541_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg(lean_object* v_attrDescrs_3558_, lean_object* v_validate_3559_, uint8_t v_applicationTime_3560_, lean_object* v_ref_3561_){
_start:
{
lean_object* v___f_3563_; lean_object* v___f_3564_; lean_object* v___f_3565_; lean_object* v___f_3566_; lean_object* v___f_3567_; lean_object* v___f_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___f_3563_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__0));
v___f_3564_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__2));
v___f_3565_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__3));
v___f_3566_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__4));
v___f_3567_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__5));
v___f_3568_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__6));
v___x_3569_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__7));
v___x_3570_ = ((lean_object*)(l_Lean_registerEnumAttributes___redArg___closed__8));
lean_inc(v_ref_3561_);
v___x_3571_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3571_, 0, v_ref_3561_);
lean_ctor_set(v___x_3571_, 1, v___f_3567_);
lean_ctor_set(v___x_3571_, 2, v___f_3568_);
lean_ctor_set(v___x_3571_, 3, v___f_3566_);
lean_ctor_set(v___x_3571_, 4, v___f_3565_);
lean_ctor_set(v___x_3571_, 5, v___f_3564_);
lean_ctor_set(v___x_3571_, 6, v___x_3569_);
lean_ctor_set(v___x_3571_, 7, v___x_3570_);
v___x_3572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3571_);
lean_ctor_set(v___x_3572_, 1, v___f_3563_);
v___x_3573_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_3572_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
lean_inc_n(v_a_3574_, 2);
lean_dec_ref_known(v___x_3573_, 1);
v___x_3575_ = lean_box(0);
v___x_3576_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(v_validate_3559_, v_a_3574_, v_ref_3561_, v_applicationTime_3560_, v_attrDescrs_3558_, v___x_3575_);
lean_inc(v___x_3576_);
v___x_3577_ = l_List_forM___at___00Lean_registerEnumAttributes_spec__3(v___x_3576_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3585_; 
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3585_ == 0)
{
lean_object* v_unused_3586_; 
v_unused_3586_ = lean_ctor_get(v___x_3577_, 0);
lean_dec(v_unused_3586_);
v___x_3579_ = v___x_3577_;
v_isShared_3580_ = v_isSharedCheck_3585_;
goto v_resetjp_3578_;
}
else
{
lean_dec(v___x_3577_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3585_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3581_; lean_object* v___x_3583_; 
v___x_3581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3576_);
lean_ctor_set(v___x_3581_, 1, v_a_3574_);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 0, v___x_3581_);
v___x_3583_ = v___x_3579_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v___x_3581_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
else
{
lean_object* v_a_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3594_; 
lean_dec(v___x_3576_);
lean_dec(v_a_3574_);
v_a_3587_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3594_ == 0)
{
v___x_3589_ = v___x_3577_;
v_isShared_3590_ = v_isSharedCheck_3594_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_a_3587_);
lean_dec(v___x_3577_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3594_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3592_; 
if (v_isShared_3590_ == 0)
{
v___x_3592_ = v___x_3589_;
goto v_reusejp_3591_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v_a_3587_);
v___x_3592_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3591_;
}
v_reusejp_3591_:
{
return v___x_3592_;
}
}
}
}
else
{
lean_object* v_a_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3602_; 
lean_dec(v_ref_3561_);
lean_dec_ref(v_validate_3559_);
lean_dec(v_attrDescrs_3558_);
v_a_3595_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3597_ = v___x_3573_;
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_a_3595_);
lean_dec(v___x_3573_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3600_; 
if (v_isShared_3598_ == 0)
{
v___x_3600_ = v___x_3597_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_a_3595_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___redArg___boxed(lean_object* v_attrDescrs_3603_, lean_object* v_validate_3604_, lean_object* v_applicationTime_3605_, lean_object* v_ref_3606_, lean_object* v___y_3607_){
_start:
{
uint8_t v_applicationTime_boxed_3608_; lean_object* v_res_3609_; 
v_applicationTime_boxed_3608_ = lean_unbox(v_applicationTime_3605_);
v_res_3609_ = l_Lean_registerEnumAttributes___redArg(v_attrDescrs_3603_, v_validate_3604_, v_applicationTime_boxed_3608_, v_ref_3606_);
return v_res_3609_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes(lean_object* v_00_u03b1_3610_, lean_object* v_attrDescrs_3611_, lean_object* v_validate_3612_, uint8_t v_applicationTime_3613_, lean_object* v_ref_3614_){
_start:
{
lean_object* v___x_3616_; 
v___x_3616_ = l_Lean_registerEnumAttributes___redArg(v_attrDescrs_3611_, v_validate_3612_, v_applicationTime_3613_, v_ref_3614_);
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerEnumAttributes___boxed(lean_object* v_00_u03b1_3617_, lean_object* v_attrDescrs_3618_, lean_object* v_validate_3619_, lean_object* v_applicationTime_3620_, lean_object* v_ref_3621_, lean_object* v___y_3622_){
_start:
{
uint8_t v_applicationTime_boxed_3623_; lean_object* v_res_3624_; 
v_applicationTime_boxed_3623_ = lean_unbox(v_applicationTime_3620_);
v_res_3624_ = l_Lean_registerEnumAttributes(v_00_u03b1_3617_, v_attrDescrs_3618_, v_validate_3619_, v_applicationTime_boxed_3623_, v_ref_3621_);
return v_res_3624_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0(lean_object* v_00_u03b1_3625_, lean_object* v_env_3626_, lean_object* v_as_3627_, size_t v_i_3628_, size_t v_stop_3629_, lean_object* v_b_3630_){
_start:
{
lean_object* v___x_3631_; 
v___x_3631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___redArg(v_env_3626_, v_as_3627_, v_i_3628_, v_stop_3629_, v_b_3630_);
return v___x_3631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0___boxed(lean_object* v_00_u03b1_3632_, lean_object* v_env_3633_, lean_object* v_as_3634_, lean_object* v_i_3635_, lean_object* v_stop_3636_, lean_object* v_b_3637_){
_start:
{
size_t v_i_boxed_3638_; size_t v_stop_boxed_3639_; lean_object* v_res_3640_; 
v_i_boxed_3638_ = lean_unbox_usize(v_i_3635_);
lean_dec(v_i_3635_);
v_stop_boxed_3639_ = lean_unbox_usize(v_stop_3636_);
lean_dec(v_stop_3636_);
v_res_3640_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_registerEnumAttributes_spec__0(v_00_u03b1_3632_, v_env_3633_, v_as_3634_, v_i_boxed_3638_, v_stop_boxed_3639_, v_b_3637_);
lean_dec_ref(v_as_3634_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1(lean_object* v_00_u03b1_3641_, lean_object* v_newState_3642_, lean_object* v_x_3643_, lean_object* v_x_3644_){
_start:
{
lean_object* v___x_3645_; 
v___x_3645_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___redArg(v_newState_3642_, v_x_3643_, v_x_3644_);
return v___x_3645_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_registerEnumAttributes_spec__1___boxed(lean_object* v_00_u03b1_3646_, lean_object* v_newState_3647_, lean_object* v_x_3648_, lean_object* v_x_3649_){
_start:
{
lean_object* v_res_3650_; 
v_res_3650_ = l_List_foldl___at___00Lean_registerEnumAttributes_spec__1(v_00_u03b1_3646_, v_newState_3647_, v_x_3648_, v_x_3649_);
lean_dec(v_newState_3647_);
return v_res_3650_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2(lean_object* v_00_u03b1_3651_, lean_object* v_validate_3652_, lean_object* v_a_3653_, lean_object* v_ref_3654_, uint8_t v_applicationTime_3655_, lean_object* v_a_3656_, lean_object* v_a_3657_){
_start:
{
lean_object* v___x_3658_; 
v___x_3658_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___redArg(v_validate_3652_, v_a_3653_, v_ref_3654_, v_applicationTime_3655_, v_a_3656_, v_a_3657_);
return v___x_3658_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2___boxed(lean_object* v_00_u03b1_3659_, lean_object* v_validate_3660_, lean_object* v_a_3661_, lean_object* v_ref_3662_, lean_object* v_applicationTime_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_){
_start:
{
uint8_t v_applicationTime_boxed_3666_; lean_object* v_res_3667_; 
v_applicationTime_boxed_3666_ = lean_unbox(v_applicationTime_3663_);
v_res_3667_ = l_List_mapTR_loop___at___00Lean_registerEnumAttributes_spec__2(v_00_u03b1_3659_, v_validate_3660_, v_a_3661_, v_ref_3662_, v_applicationTime_boxed_3666_, v_a_3664_, v_a_3665_);
return v_res_3667_;
}
}
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue___redArg(lean_object* v_inst_3668_, lean_object* v_attr_3669_, lean_object* v_env_3670_, lean_object* v_decl_3671_){
_start:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
v___x_3672_ = lean_box(1);
v___x_3673_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3670_, v_decl_3671_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_ext_3674_; lean_object* v_toEnvExtension_3675_; lean_object* v_asyncMode_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; 
lean_dec(v_inst_3668_);
v_ext_3674_ = lean_ctor_get(v_attr_3669_, 1);
lean_inc_ref(v_ext_3674_);
lean_dec_ref(v_attr_3669_);
v_toEnvExtension_3675_ = lean_ctor_get(v_ext_3674_, 0);
v_asyncMode_3676_ = lean_ctor_get(v_toEnvExtension_3675_, 2);
lean_inc(v_asyncMode_3676_);
lean_inc(v_decl_3671_);
v___x_3677_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3672_, v_ext_3674_, v_env_3670_, v_asyncMode_3676_, v_decl_3671_);
lean_dec(v_asyncMode_3676_);
lean_dec_ref(v_ext_3674_);
v___x_3678_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3677_, v_decl_3671_);
lean_dec(v_decl_3671_);
lean_dec(v___x_3677_);
return v___x_3678_;
}
else
{
lean_object* v_val_3679_; lean_object* v_ext_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3710_; 
v_val_3679_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_val_3679_);
lean_dec_ref_known(v___x_3673_, 1);
v_ext_3680_ = lean_ctor_get(v_attr_3669_, 1);
v_isSharedCheck_3710_ = !lean_is_exclusive(v_attr_3669_);
if (v_isSharedCheck_3710_ == 0)
{
lean_object* v_unused_3711_; 
v_unused_3711_ = lean_ctor_get(v_attr_3669_, 0);
lean_dec(v_unused_3711_);
v___x_3682_ = v_attr_3669_;
v_isShared_3683_ = v_isSharedCheck_3710_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_ext_3680_);
lean_dec(v_attr_3669_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3710_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
uint8_t v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; uint8_t v___x_3688_; 
v___x_3684_ = 0;
v___x_3685_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3672_, v_ext_3680_, v_env_3670_, v_val_3679_, v___x_3684_);
lean_dec(v_val_3679_);
lean_dec_ref(v_env_3670_);
lean_dec_ref(v_ext_3680_);
v___x_3686_ = lean_unsigned_to_nat(0u);
v___x_3687_ = lean_array_get_size(v___x_3685_);
v___x_3688_ = lean_nat_dec_lt(v___x_3686_, v___x_3687_);
if (v___x_3688_ == 0)
{
lean_object* v___x_3689_; 
lean_dec_ref(v___x_3685_);
lean_del_object(v___x_3682_);
lean_dec(v_decl_3671_);
lean_dec(v_inst_3668_);
v___x_3689_ = lean_box(0);
return v___x_3689_;
}
else
{
lean_object* v___x_3690_; lean_object* v___x_3691_; uint8_t v___x_3692_; 
v___x_3690_ = lean_unsigned_to_nat(1u);
v___x_3691_ = lean_nat_sub(v___x_3687_, v___x_3690_);
v___x_3692_ = lean_nat_dec_le(v___x_3686_, v___x_3691_);
if (v___x_3692_ == 0)
{
lean_object* v___x_3693_; 
lean_dec(v___x_3691_);
lean_dec_ref(v___x_3685_);
lean_del_object(v___x_3682_);
lean_dec(v_decl_3671_);
lean_dec(v_inst_3668_);
v___x_3693_ = lean_box(0);
return v___x_3693_;
}
else
{
lean_object* v___f_3694_; lean_object* v___x_3696_; 
v___f_3694_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__1));
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 1, v_inst_3668_);
lean_ctor_set(v___x_3682_, 0, v_decl_3671_);
v___x_3696_ = v___x_3682_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v_decl_3671_);
lean_ctor_set(v_reuseFailAlloc_3709_, 1, v_inst_3668_);
v___x_3696_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3697_ = ((lean_object*)(l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg___closed__2));
v___x_3698_ = l_Array_binSearchAux___redArg(v___f_3694_, v___x_3697_, v___x_3685_, v___x_3696_, v___x_3686_, v___x_3691_);
lean_dec_ref(v___x_3685_);
if (lean_obj_tag(v___x_3698_) == 0)
{
lean_object* v___x_3699_; 
v___x_3699_ = lean_box(0);
return v___x_3699_;
}
else
{
lean_object* v_val_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3708_; 
v_val_3700_ = lean_ctor_get(v___x_3698_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3698_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3702_ = v___x_3698_;
v_isShared_3703_ = v_isSharedCheck_3708_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_val_3700_);
lean_dec(v___x_3698_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3708_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v_snd_3704_; lean_object* v___x_3706_; 
v_snd_3704_ = lean_ctor_get(v_val_3700_, 1);
lean_inc(v_snd_3704_);
lean_dec(v_val_3700_);
if (v_isShared_3703_ == 0)
{
lean_ctor_set(v___x_3702_, 0, v_snd_3704_);
v___x_3706_ = v___x_3702_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_snd_3704_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
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
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_getValue(lean_object* v_00_u03b1_3712_, lean_object* v_inst_3713_, lean_object* v_attr_3714_, lean_object* v_env_3715_, lean_object* v_decl_3716_){
_start:
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Lean_EnumAttributes_getValue___redArg(v_inst_3713_, v_attr_3714_, v_env_3715_, v_decl_3716_);
return v___x_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue___redArg(lean_object* v_attrs_3726_, lean_object* v_env_3727_, lean_object* v_decl_3728_, lean_object* v_val_3729_){
_start:
{
lean_object* v_ext_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3793_; 
v_ext_3730_ = lean_ctor_get(v_attrs_3726_, 1);
v_isSharedCheck_3793_ = !lean_is_exclusive(v_attrs_3726_);
if (v_isSharedCheck_3793_ == 0)
{
lean_object* v_unused_3794_; 
v_unused_3794_ = lean_ctor_get(v_attrs_3726_, 0);
lean_dec(v_unused_3794_);
v___x_3732_ = v_attrs_3726_;
v_isShared_3733_ = v_isSharedCheck_3793_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_ext_3730_);
lean_dec(v_attrs_3726_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3793_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v_toEnvExtension_3734_; lean_object* v_name_3735_; lean_object* v___x_3736_; uint8_t v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v_pfx_3745_; lean_object* v___x_3746_; 
v_toEnvExtension_3734_ = lean_ctor_get(v_ext_3730_, 0);
v_name_3735_ = lean_ctor_get(v_ext_3730_, 1);
v___x_3736_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__0));
v___x_3737_ = 1;
lean_inc(v_name_3735_);
v___x_3738_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3735_, v___x_3737_);
v___x_3739_ = lean_string_append(v___x_3736_, v___x_3738_);
lean_dec_ref(v___x_3738_);
v___x_3740_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__1));
v___x_3741_ = lean_string_append(v___x_3739_, v___x_3740_);
lean_inc(v_decl_3728_);
v___x_3742_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_decl_3728_, v___x_3737_);
v___x_3743_ = lean_string_append(v___x_3741_, v___x_3742_);
lean_dec_ref(v___x_3742_);
v___x_3744_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v_pfx_3745_ = lean_string_append(v___x_3743_, v___x_3744_);
v___x_3746_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3727_, v_decl_3728_);
if (lean_obj_tag(v___x_3746_) == 0)
{
lean_object* v_asyncMode_3747_; uint8_t v___x_3748_; 
v_asyncMode_3747_ = lean_ctor_get(v_toEnvExtension_3734_, 2);
lean_inc(v_asyncMode_3747_);
lean_inc(v_decl_3728_);
lean_inc_ref(v_env_3727_);
v___x_3748_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_3727_, v_decl_3728_, v_asyncMode_3747_);
if (v___x_3748_ == 0)
{
lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___y_3752_; lean_object* v___x_3756_; 
lean_dec(v_asyncMode_3747_);
lean_del_object(v___x_3732_);
lean_dec_ref(v_ext_3730_);
lean_dec(v_val_3729_);
lean_dec(v_decl_3728_);
v___x_3749_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__2));
v___x_3750_ = lean_string_append(v_pfx_3745_, v___x_3749_);
v___x_3756_ = l_Lean_Environment_asyncPrefix_x3f(v_env_3727_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v___x_3757_; 
v___x_3757_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__3));
v___y_3752_ = v___x_3757_;
goto v___jp_3751_;
}
else
{
lean_object* v_val_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v_val_3758_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_val_3758_);
lean_dec_ref_known(v___x_3756_, 1);
v___x_3759_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__4));
v___x_3760_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3758_, v___x_3737_);
v___x_3761_ = l_addParenHeuristic(v___x_3760_);
v___x_3762_ = lean_string_append(v___x_3759_, v___x_3761_);
lean_dec_ref(v___x_3761_);
v___x_3763_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__5));
v___x_3764_ = lean_string_append(v___x_3762_, v___x_3763_);
v___y_3752_ = v___x_3764_;
goto v___jp_3751_;
}
v___jp_3751_:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3753_ = lean_string_append(v___x_3750_, v___y_3752_);
lean_dec_ref(v___y_3752_);
v___x_3754_ = lean_string_append(v___x_3753_, v___x_3744_);
v___x_3755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3754_);
return v___x_3755_;
}
}
else
{
lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3765_ = lean_box(1);
lean_inc(v_decl_3728_);
lean_inc_ref(v_env_3727_);
v___x_3766_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3765_, v_ext_3730_, v_env_3727_, v_asyncMode_3747_, v_decl_3728_);
v___x_3767_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3766_, v_decl_3728_);
lean_dec(v___x_3766_);
if (lean_obj_tag(v___x_3767_) == 0)
{
lean_object* v___x_3769_; 
lean_dec_ref(v_pfx_3745_);
lean_inc(v_decl_3728_);
if (v_isShared_3733_ == 0)
{
lean_ctor_set(v___x_3732_, 1, v_val_3729_);
lean_ctor_set(v___x_3732_, 0, v_decl_3728_);
v___x_3769_ = v___x_3732_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_decl_3728_);
lean_ctor_set(v_reuseFailAlloc_3772_, 1, v_val_3729_);
v___x_3769_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
lean_object* v___x_3770_; lean_object* v___x_3771_; 
v___x_3770_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_3730_, v_env_3727_, v___x_3769_, v_asyncMode_3747_, v_decl_3728_);
lean_dec(v_asyncMode_3747_);
v___x_3771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3771_, 0, v___x_3770_);
return v___x_3771_;
}
}
else
{
lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3781_; 
lean_dec(v_asyncMode_3747_);
lean_del_object(v___x_3732_);
lean_dec_ref(v_ext_3730_);
lean_dec(v_val_3729_);
lean_dec(v_decl_3728_);
lean_dec_ref(v_env_3727_);
v_isSharedCheck_3781_ = !lean_is_exclusive(v___x_3767_);
if (v_isSharedCheck_3781_ == 0)
{
lean_object* v_unused_3782_; 
v_unused_3782_ = lean_ctor_get(v___x_3767_, 0);
lean_dec(v_unused_3782_);
v___x_3774_ = v___x_3767_;
v_isShared_3775_ = v_isSharedCheck_3781_;
goto v_resetjp_3773_;
}
else
{
lean_dec(v___x_3767_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3781_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3779_; 
v___x_3776_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__6));
v___x_3777_ = lean_string_append(v_pfx_3745_, v___x_3776_);
if (v_isShared_3775_ == 0)
{
lean_ctor_set_tag(v___x_3774_, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3777_);
v___x_3779_ = v___x_3774_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v___x_3777_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
return v___x_3779_;
}
}
}
}
}
else
{
lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3791_; 
lean_del_object(v___x_3732_);
lean_dec_ref(v_ext_3730_);
lean_dec(v_val_3729_);
lean_dec(v_decl_3728_);
lean_dec_ref(v_env_3727_);
v_isSharedCheck_3791_ = !lean_is_exclusive(v___x_3746_);
if (v_isSharedCheck_3791_ == 0)
{
lean_object* v_unused_3792_; 
v_unused_3792_ = lean_ctor_get(v___x_3746_, 0);
lean_dec(v_unused_3792_);
v___x_3784_ = v___x_3746_;
v_isShared_3785_ = v_isSharedCheck_3791_;
goto v_resetjp_3783_;
}
else
{
lean_dec(v___x_3746_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3791_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3789_; 
v___x_3786_ = ((lean_object*)(l_Lean_EnumAttributes_setValue___redArg___closed__7));
v___x_3787_ = lean_string_append(v_pfx_3745_, v___x_3786_);
if (v_isShared_3785_ == 0)
{
lean_ctor_set_tag(v___x_3784_, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3787_);
v___x_3789_ = v___x_3784_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v___x_3787_);
v___x_3789_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
return v___x_3789_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_EnumAttributes_setValue(lean_object* v_00_u03b1_3795_, lean_object* v_attrs_3796_, lean_object* v_env_3797_, lean_object* v_decl_3798_, lean_object* v_val_3799_){
_start:
{
lean_object* v___x_3800_; 
v___x_3800_ = l_Lean_EnumAttributes_setValue___redArg(v_attrs_3796_, v_env_3797_, v_decl_3798_, v_val_3799_);
return v___x_3800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3802_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_3803_ = lean_st_mk_ref(v___x_3802_);
v___x_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3804_, 0, v___x_3803_);
return v___x_3804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2____boxed(lean_object* v___y_3805_){
_start:
{
lean_object* v_res_3806_; 
v_res_3806_ = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_();
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder(lean_object* v_builderId_3809_, lean_object* v_builder_3810_){
_start:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; uint8_t v___x_3814_; 
v___x_3812_ = l_Lean_attributeImplBuilderTableRef;
v___x_3813_ = lean_st_ref_get(v___x_3812_);
v___x_3814_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v___x_3813_, v_builderId_3809_);
lean_dec(v___x_3813_);
if (v___x_3814_ == 0)
{
lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3815_ = lean_st_ref_take(v___x_3812_);
v___x_3816_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v___x_3815_, v_builderId_3809_, v_builder_3810_);
v___x_3817_ = lean_st_ref_put(v___x_3812_, v___x_3816_);
v___x_3818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
return v___x_3818_;
}
else
{
lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; 
lean_dec_ref(v_builder_3810_);
v___x_3819_ = ((lean_object*)(l_Lean_registerAttributeImplBuilder___closed__0));
v___x_3820_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_builderId_3809_, v___x_3814_);
v___x_3821_ = lean_string_append(v___x_3819_, v___x_3820_);
lean_dec_ref(v___x_3820_);
v___x_3822_ = ((lean_object*)(l_Lean_registerAttributeImplBuilder___closed__1));
v___x_3823_ = lean_string_append(v___x_3821_, v___x_3822_);
v___x_3824_ = lean_mk_io_user_error(v___x_3823_);
v___x_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3825_, 0, v___x_3824_);
return v___x_3825_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeImplBuilder___boxed(lean_object* v_builderId_3826_, lean_object* v_builder_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Lean_registerAttributeImplBuilder(v_builderId_3826_, v_builder_3827_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(lean_object* v_e_3830_){
_start:
{
if (lean_obj_tag(v_e_3830_) == 0)
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3840_; 
v_a_3832_ = lean_ctor_get(v_e_3830_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_e_3830_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3834_ = v_e_3830_;
v_isShared_3835_ = v_isSharedCheck_3840_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v_e_3830_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3840_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3836_; lean_object* v___x_3838_; 
v___x_3836_ = lean_mk_io_user_error(v_a_3832_);
if (v_isShared_3835_ == 0)
{
lean_ctor_set_tag(v___x_3834_, 1);
lean_ctor_set(v___x_3834_, 0, v___x_3836_);
v___x_3838_ = v___x_3834_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v___x_3836_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
else
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3848_; 
v_a_3841_ = lean_ctor_get(v_e_3830_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v_e_3830_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3843_ = v_e_3830_;
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v_e_3830_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
lean_ctor_set_tag(v___x_3843_, 0);
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v_a_3841_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
return v___x_3846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg___boxed(lean_object* v_e_3849_, lean_object* v___y_3850_){
_start:
{
lean_object* v_res_3851_; 
v_res_3851_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(v_e_3849_);
return v_res_3851_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1(lean_object* v_00_u03b1_3852_, lean_object* v_e_3853_){
_start:
{
lean_object* v___x_3855_; 
v___x_3855_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(v_e_3853_);
return v___x_3855_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___boxed(lean_object* v_00_u03b1_3856_, lean_object* v_e_3857_, lean_object* v___y_3858_){
_start:
{
lean_object* v_res_3859_; 
v_res_3859_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1(v_00_u03b1_3856_, v_e_3857_);
return v_res_3859_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(lean_object* v_a_3860_, lean_object* v_x_3861_){
_start:
{
if (lean_obj_tag(v_x_3861_) == 0)
{
lean_object* v___x_3862_; 
v___x_3862_ = lean_box(0);
return v___x_3862_;
}
else
{
lean_object* v_key_3863_; lean_object* v_value_3864_; lean_object* v_tail_3865_; uint8_t v___x_3866_; 
v_key_3863_ = lean_ctor_get(v_x_3861_, 0);
v_value_3864_ = lean_ctor_get(v_x_3861_, 1);
v_tail_3865_ = lean_ctor_get(v_x_3861_, 2);
v___x_3866_ = lean_name_eq(v_key_3863_, v_a_3860_);
if (v___x_3866_ == 0)
{
v_x_3861_ = v_tail_3865_;
goto _start;
}
else
{
lean_object* v___x_3868_; 
lean_inc(v_value_3864_);
v___x_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3868_, 0, v_value_3864_);
return v___x_3868_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg___boxed(lean_object* v_a_3869_, lean_object* v_x_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(v_a_3869_, v_x_3870_);
lean_dec(v_x_3870_);
lean_dec(v_a_3869_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(lean_object* v_m_3872_, lean_object* v_a_3873_){
_start:
{
lean_object* v_buckets_3874_; lean_object* v___x_3875_; uint64_t v___y_3877_; 
v_buckets_3874_ = lean_ctor_get(v_m_3872_, 1);
v___x_3875_ = lean_array_get_size(v_buckets_3874_);
if (lean_obj_tag(v_a_3873_) == 0)
{
uint64_t v___x_3891_; 
v___x_3891_ = 1723ULL;
v___y_3877_ = v___x_3891_;
goto v___jp_3876_;
}
else
{
uint64_t v_hash_3892_; 
v_hash_3892_ = lean_ctor_get_uint64(v_a_3873_, sizeof(void*)*2);
v___y_3877_ = v_hash_3892_;
goto v___jp_3876_;
}
v___jp_3876_:
{
uint64_t v___x_3878_; uint64_t v___x_3879_; uint64_t v_fold_3880_; uint64_t v___x_3881_; uint64_t v___x_3882_; uint64_t v___x_3883_; size_t v___x_3884_; size_t v___x_3885_; size_t v___x_3886_; size_t v___x_3887_; size_t v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3878_ = 32ULL;
v___x_3879_ = lean_uint64_shift_right(v___y_3877_, v___x_3878_);
v_fold_3880_ = lean_uint64_xor(v___y_3877_, v___x_3879_);
v___x_3881_ = 16ULL;
v___x_3882_ = lean_uint64_shift_right(v_fold_3880_, v___x_3881_);
v___x_3883_ = lean_uint64_xor(v_fold_3880_, v___x_3882_);
v___x_3884_ = lean_uint64_to_usize(v___x_3883_);
v___x_3885_ = lean_usize_of_nat(v___x_3875_);
v___x_3886_ = ((size_t)1ULL);
v___x_3887_ = lean_usize_sub(v___x_3885_, v___x_3886_);
v___x_3888_ = lean_usize_land(v___x_3884_, v___x_3887_);
v___x_3889_ = lean_array_uget_borrowed(v_buckets_3874_, v___x_3888_);
v___x_3890_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(v_a_3873_, v___x_3889_);
return v___x_3890_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg___boxed(lean_object* v_m_3893_, lean_object* v_a_3894_){
_start:
{
lean_object* v_res_3895_; 
v_res_3895_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v_m_3893_, v_a_3894_);
lean_dec(v_a_3894_);
lean_dec_ref(v_m_3893_);
return v_res_3895_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry(lean_object* v_e_3897_){
_start:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v_builderId_3901_; lean_object* v_ref_3902_; lean_object* v_args_3903_; lean_object* v___x_3904_; 
v___x_3899_ = l_Lean_attributeImplBuilderTableRef;
v___x_3900_ = lean_st_ref_get(v___x_3899_);
v_builderId_3901_ = lean_ctor_get(v_e_3897_, 0);
lean_inc(v_builderId_3901_);
v_ref_3902_ = lean_ctor_get(v_e_3897_, 1);
lean_inc(v_ref_3902_);
v_args_3903_ = lean_ctor_get(v_e_3897_, 2);
lean_inc(v_args_3903_);
lean_dec_ref(v_e_3897_);
v___x_3904_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v___x_3900_, v_builderId_3901_);
lean_dec(v___x_3900_);
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v___x_3905_; uint8_t v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
lean_dec(v_args_3903_);
lean_dec(v_ref_3902_);
v___x_3905_ = ((lean_object*)(l_Lean_mkAttributeImplOfEntry___closed__0));
v___x_3906_ = 1;
v___x_3907_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_builderId_3901_, v___x_3906_);
v___x_3908_ = lean_string_append(v___x_3905_, v___x_3907_);
lean_dec_ref(v___x_3907_);
v___x_3909_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_3910_ = lean_string_append(v___x_3908_, v___x_3909_);
v___x_3911_ = lean_mk_io_user_error(v___x_3910_);
v___x_3912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3911_);
return v___x_3912_;
}
else
{
lean_object* v_val_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
lean_dec(v_builderId_3901_);
v_val_3913_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_val_3913_);
lean_dec_ref_known(v___x_3904_, 1);
v___x_3914_ = lean_apply_2(v_val_3913_, v_ref_3902_, v_args_3903_);
v___x_3915_ = l_IO_ofExcept___at___00Lean_mkAttributeImplOfEntry_spec__1___redArg(v___x_3914_);
return v___x_3915_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfEntry___boxed(lean_object* v_e_3916_, lean_object* v___y_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l_Lean_mkAttributeImplOfEntry(v_e_3916_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0(lean_object* v_00_u03b2_3919_, lean_object* v_m_3920_, lean_object* v_a_3921_){
_start:
{
lean_object* v___x_3922_; 
v___x_3922_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v_m_3920_, v_a_3921_);
return v___x_3922_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___boxed(lean_object* v_00_u03b2_3923_, lean_object* v_m_3924_, lean_object* v_a_3925_){
_start:
{
lean_object* v_res_3926_; 
v_res_3926_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0(v_00_u03b2_3923_, v_m_3924_, v_a_3925_);
lean_dec(v_a_3925_);
lean_dec_ref(v_m_3924_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0(lean_object* v_00_u03b2_3927_, lean_object* v_a_3928_, lean_object* v_x_3929_){
_start:
{
lean_object* v___x_3930_; 
v___x_3930_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___redArg(v_a_3928_, v_x_3929_);
return v___x_3930_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3931_, lean_object* v_a_3932_, lean_object* v_x_3933_){
_start:
{
lean_object* v_res_3934_; 
v_res_3934_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0_spec__0(v_00_u03b2_3931_, v_a_3932_, v_x_3933_);
lean_dec(v_x_3933_);
lean_dec(v_a_3932_);
return v_res_3934_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeExtensionState_default___closed__0(void){
_start:
{
lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3935_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_);
v___x_3936_ = lean_box(0);
v___x_3937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3936_);
lean_ctor_set(v___x_3937_, 1, v___x_3935_);
return v___x_3937_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeExtensionState_default(void){
_start:
{
lean_object* v___x_3938_; 
v___x_3938_ = lean_obj_once(&l_Lean_instInhabitedAttributeExtensionState_default___closed__0, &l_Lean_instInhabitedAttributeExtensionState_default___closed__0_once, _init_l_Lean_instInhabitedAttributeExtensionState_default___closed__0);
return v___x_3938_;
}
}
static lean_object* _init_l_Lean_instInhabitedAttributeExtensionState(void){
_start:
{
lean_object* v___x_3939_; 
v___x_3939_ = l_Lean_instInhabitedAttributeExtensionState_default;
return v___x_3939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial(){
_start:
{
lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; 
v___x_3941_ = l_Lean_attributeMapRef;
v___x_3942_ = lean_st_ref_get(v___x_3941_);
v___x_3943_ = lean_box(0);
v___x_3944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3943_);
lean_ctor_set(v___x_3944_, 1, v___x_3942_);
v___x_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3944_);
return v___x_3945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial___boxed(lean_object* v___y_3946_){
_start:
{
lean_object* v_res_3947_; 
v_res_3947_ = l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial();
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe(lean_object* v_env_3953_, lean_object* v_opts_3954_, lean_object* v_declName_3955_){
_start:
{
uint8_t v___x_3958_; lean_object* v___x_3959_; 
v___x_3958_ = 0;
lean_inc(v_declName_3955_);
lean_inc_ref(v_env_3953_);
v___x_3959_ = l_Lean_Environment_find_x3f(v_env_3953_, v_declName_3955_, v___x_3958_);
if (lean_obj_tag(v___x_3959_) == 0)
{
lean_object* v___x_3960_; uint8_t v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
lean_dec_ref(v_env_3953_);
v___x_3960_ = ((lean_object*)(l_Lean_mkAttributeImplOfConstantUnsafe___closed__2));
v___x_3961_ = 1;
v___x_3962_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_3955_, v___x_3961_);
v___x_3963_ = lean_string_append(v___x_3960_, v___x_3962_);
lean_dec_ref(v___x_3962_);
v___x_3964_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_3965_ = lean_string_append(v___x_3963_, v___x_3964_);
v___x_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
return v___x_3966_;
}
else
{
lean_object* v_val_3967_; lean_object* v___x_3968_; 
v_val_3967_ = lean_ctor_get(v___x_3959_, 0);
lean_inc(v_val_3967_);
lean_dec_ref_known(v___x_3959_, 1);
v___x_3968_ = l_Lean_ConstantInfo_type(v_val_3967_);
lean_dec(v_val_3967_);
if (lean_obj_tag(v___x_3968_) == 4)
{
lean_object* v_declName_3969_; 
v_declName_3969_ = lean_ctor_get(v___x_3968_, 0);
lean_inc(v_declName_3969_);
lean_dec_ref_known(v___x_3968_, 2);
if (lean_obj_tag(v_declName_3969_) == 1)
{
lean_object* v_pre_3970_; 
v_pre_3970_ = lean_ctor_get(v_declName_3969_, 0);
lean_inc(v_pre_3970_);
if (lean_obj_tag(v_pre_3970_) == 1)
{
lean_object* v_pre_3971_; 
v_pre_3971_ = lean_ctor_get(v_pre_3970_, 0);
if (lean_obj_tag(v_pre_3971_) == 0)
{
lean_object* v_str_3972_; lean_object* v_str_3973_; lean_object* v___x_3974_; uint8_t v___x_3975_; 
v_str_3972_ = lean_ctor_get(v_declName_3969_, 1);
lean_inc_ref(v_str_3972_);
lean_dec_ref_known(v_declName_3969_, 2);
v_str_3973_ = lean_ctor_get(v_pre_3970_, 1);
lean_inc_ref(v_str_3973_);
lean_dec_ref_known(v_pre_3970_, 2);
v___x_3974_ = ((lean_object*)(l_Lean_AttributeImplCore_ref___autoParam___closed__0));
v___x_3975_ = lean_string_dec_eq(v_str_3973_, v___x_3974_);
lean_dec_ref(v_str_3973_);
if (v___x_3975_ == 0)
{
lean_dec_ref(v_str_3972_);
lean_dec(v_declName_3955_);
lean_dec_ref(v_env_3953_);
goto v___jp_3956_;
}
else
{
lean_object* v___x_3976_; uint8_t v___x_3977_; 
v___x_3976_ = ((lean_object*)(l_Lean_mkAttributeImplOfConstantUnsafe___closed__3));
v___x_3977_ = lean_string_dec_eq(v_str_3972_, v___x_3976_);
lean_dec_ref(v_str_3972_);
if (v___x_3977_ == 0)
{
lean_dec(v_declName_3955_);
lean_dec_ref(v_env_3953_);
goto v___jp_3956_;
}
else
{
lean_object* v___x_3978_; 
v___x_3978_ = l_Lean_Environment_evalConst___redArg(v_env_3953_, v_opts_3954_, v_declName_3955_, v___x_3977_);
lean_dec(v_declName_3955_);
lean_dec_ref(v_env_3953_);
return v___x_3978_;
}
}
}
else
{
lean_dec_ref_known(v_pre_3970_, 2);
lean_dec_ref_known(v_declName_3969_, 2);
lean_dec(v_declName_3955_);
lean_dec_ref(v_env_3953_);
goto v___jp_3956_;
}
}
else
{
lean_dec_ref_known(v_declName_3969_, 2);
lean_dec(v_pre_3970_);
lean_dec(v_declName_3955_);
lean_dec_ref(v_env_3953_);
goto v___jp_3956_;
}
}
else
{
lean_dec(v_declName_3969_);
lean_dec(v_declName_3955_);
lean_dec_ref(v_env_3953_);
goto v___jp_3956_;
}
}
else
{
lean_dec_ref(v___x_3968_);
lean_dec(v_declName_3955_);
lean_dec_ref(v_env_3953_);
goto v___jp_3956_;
}
}
v___jp_3956_:
{
lean_object* v___x_3957_; 
v___x_3957_ = ((lean_object*)(l_Lean_mkAttributeImplOfConstantUnsafe___closed__1));
return v___x_3957_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAttributeImplOfConstantUnsafe___boxed(lean_object* v_env_3979_, lean_object* v_opts_3980_, lean_object* v_declName_3981_){
_start:
{
lean_object* v_res_3982_; 
v_res_3982_ = l_Lean_mkAttributeImplOfConstantUnsafe(v_env_3979_, v_opts_3980_, v_declName_3981_);
lean_dec_ref(v_opts_3980_);
return v_res_3982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(lean_object* v_as_3983_, size_t v_i_3984_, size_t v_stop_3985_, lean_object* v_b_3986_){
_start:
{
uint8_t v___x_3988_; 
v___x_3988_ = lean_usize_dec_eq(v_i_3984_, v_stop_3985_);
if (v___x_3988_ == 0)
{
lean_object* v___x_3989_; lean_object* v___x_3990_; 
v___x_3989_ = lean_array_uget_borrowed(v_as_3983_, v_i_3984_);
lean_inc(v___x_3989_);
v___x_3990_ = l_Lean_mkAttributeImplOfEntry(v___x_3989_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v_a_3991_; lean_object* v_toAttributeImplCore_3992_; lean_object* v_name_3993_; lean_object* v___x_3994_; size_t v___x_3995_; size_t v___x_3996_; 
v_a_3991_ = lean_ctor_get(v___x_3990_, 0);
lean_inc(v_a_3991_);
lean_dec_ref_known(v___x_3990_, 1);
v_toAttributeImplCore_3992_ = lean_ctor_get(v_a_3991_, 0);
v_name_3993_ = lean_ctor_get(v_toAttributeImplCore_3992_, 1);
lean_inc(v_name_3993_);
v___x_3994_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_b_3986_, v_name_3993_, v_a_3991_);
v___x_3995_ = ((size_t)1ULL);
v___x_3996_ = lean_usize_add(v_i_3984_, v___x_3995_);
v_i_3984_ = v___x_3996_;
v_b_3986_ = v___x_3994_;
goto _start;
}
else
{
lean_object* v_a_3998_; lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4005_; 
lean_dec_ref(v_b_3986_);
v_a_3998_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4005_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4005_ == 0)
{
v___x_4000_ = v___x_3990_;
v_isShared_4001_ = v_isSharedCheck_4005_;
goto v_resetjp_3999_;
}
else
{
lean_inc(v_a_3998_);
lean_dec(v___x_3990_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4005_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v___x_4003_; 
if (v_isShared_4001_ == 0)
{
v___x_4003_ = v___x_4000_;
goto v_reusejp_4002_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v_a_3998_);
v___x_4003_ = v_reuseFailAlloc_4004_;
goto v_reusejp_4002_;
}
v_reusejp_4002_:
{
return v___x_4003_;
}
}
}
}
else
{
lean_object* v___x_4006_; 
v___x_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4006_, 0, v_b_3986_);
return v___x_4006_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg___boxed(lean_object* v_as_4007_, lean_object* v_i_4008_, lean_object* v_stop_4009_, lean_object* v_b_4010_, lean_object* v___y_4011_){
_start:
{
size_t v_i_boxed_4012_; size_t v_stop_boxed_4013_; lean_object* v_res_4014_; 
v_i_boxed_4012_ = lean_unbox_usize(v_i_4008_);
lean_dec(v_i_4008_);
v_stop_boxed_4013_ = lean_unbox_usize(v_stop_4009_);
lean_dec(v_stop_4009_);
v_res_4014_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v_as_4007_, v_i_boxed_4012_, v_stop_boxed_4013_, v_b_4010_);
lean_dec_ref(v_as_4007_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(lean_object* v_as_4015_, size_t v_i_4016_, size_t v_stop_4017_, lean_object* v_b_4018_, lean_object* v___y_4019_){
_start:
{
lean_object* v_a_4022_; lean_object* v___y_4027_; uint8_t v___x_4029_; 
v___x_4029_ = lean_usize_dec_eq(v_i_4016_, v_stop_4017_);
if (v___x_4029_ == 0)
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; uint8_t v___x_4033_; 
v___x_4030_ = lean_array_uget_borrowed(v_as_4015_, v_i_4016_);
v___x_4031_ = lean_unsigned_to_nat(0u);
v___x_4032_ = lean_array_get_size(v___x_4030_);
v___x_4033_ = lean_nat_dec_lt(v___x_4031_, v___x_4032_);
if (v___x_4033_ == 0)
{
v_a_4022_ = v_b_4018_;
goto v___jp_4021_;
}
else
{
uint8_t v___x_4034_; 
v___x_4034_ = lean_nat_dec_le(v___x_4032_, v___x_4032_);
if (v___x_4034_ == 0)
{
if (v___x_4033_ == 0)
{
v_a_4022_ = v_b_4018_;
goto v___jp_4021_;
}
else
{
size_t v___x_4035_; size_t v___x_4036_; lean_object* v___x_4037_; 
v___x_4035_ = ((size_t)0ULL);
v___x_4036_ = lean_usize_of_nat(v___x_4032_);
v___x_4037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v___x_4030_, v___x_4035_, v___x_4036_, v_b_4018_);
v___y_4027_ = v___x_4037_;
goto v___jp_4026_;
}
}
else
{
size_t v___x_4038_; size_t v___x_4039_; lean_object* v___x_4040_; 
v___x_4038_ = ((size_t)0ULL);
v___x_4039_ = lean_usize_of_nat(v___x_4032_);
v___x_4040_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v___x_4030_, v___x_4038_, v___x_4039_, v_b_4018_);
v___y_4027_ = v___x_4040_;
goto v___jp_4026_;
}
}
}
else
{
lean_object* v___x_4041_; 
v___x_4041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4041_, 0, v_b_4018_);
return v___x_4041_;
}
v___jp_4021_:
{
size_t v___x_4023_; size_t v___x_4024_; 
v___x_4023_ = ((size_t)1ULL);
v___x_4024_ = lean_usize_add(v_i_4016_, v___x_4023_);
v_i_4016_ = v___x_4024_;
v_b_4018_ = v_a_4022_;
goto _start;
}
v___jp_4026_:
{
if (lean_obj_tag(v___y_4027_) == 0)
{
lean_object* v_a_4028_; 
v_a_4028_ = lean_ctor_get(v___y_4027_, 0);
lean_inc(v_a_4028_);
lean_dec_ref_known(v___y_4027_, 1);
v_a_4022_ = v_a_4028_;
goto v___jp_4021_;
}
else
{
return v___y_4027_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1___boxed(lean_object* v_as_4042_, lean_object* v_i_4043_, lean_object* v_stop_4044_, lean_object* v_b_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_){
_start:
{
size_t v_i_boxed_4048_; size_t v_stop_boxed_4049_; lean_object* v_res_4050_; 
v_i_boxed_4048_ = lean_unbox_usize(v_i_4043_);
lean_dec(v_i_4043_);
v_stop_boxed_4049_ = lean_unbox_usize(v_stop_4044_);
lean_dec(v_stop_4044_);
v_res_4050_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(v_as_4042_, v_i_boxed_4048_, v_stop_boxed_4049_, v_b_4045_, v___y_4046_);
lean_dec_ref(v___y_4046_);
lean_dec_ref(v_as_4042_);
return v_res_4050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported(lean_object* v_es_4051_, lean_object* v___y_4052_){
_start:
{
lean_object* v_a_4055_; lean_object* v___y_4060_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; uint8_t v___x_4074_; 
v___x_4070_ = l_Lean_attributeMapRef;
v___x_4071_ = lean_st_ref_get(v___x_4070_);
v___x_4072_ = lean_unsigned_to_nat(0u);
v___x_4073_ = lean_array_get_size(v_es_4051_);
v___x_4074_ = lean_nat_dec_lt(v___x_4072_, v___x_4073_);
if (v___x_4074_ == 0)
{
v_a_4055_ = v___x_4071_;
goto v___jp_4054_;
}
else
{
uint8_t v___x_4075_; 
v___x_4075_ = lean_nat_dec_le(v___x_4073_, v___x_4073_);
if (v___x_4075_ == 0)
{
if (v___x_4074_ == 0)
{
v_a_4055_ = v___x_4071_;
goto v___jp_4054_;
}
else
{
size_t v___x_4076_; size_t v___x_4077_; lean_object* v___x_4078_; 
v___x_4076_ = ((size_t)0ULL);
v___x_4077_ = lean_usize_of_nat(v___x_4073_);
v___x_4078_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(v_es_4051_, v___x_4076_, v___x_4077_, v___x_4071_, v___y_4052_);
v___y_4060_ = v___x_4078_;
goto v___jp_4059_;
}
}
else
{
size_t v___x_4079_; size_t v___x_4080_; lean_object* v___x_4081_; 
v___x_4079_ = ((size_t)0ULL);
v___x_4080_ = lean_usize_of_nat(v___x_4073_);
v___x_4081_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__1(v_es_4051_, v___x_4079_, v___x_4080_, v___x_4071_, v___y_4052_);
v___y_4060_ = v___x_4081_;
goto v___jp_4059_;
}
}
v___jp_4054_:
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4056_ = lean_box(0);
v___x_4057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4057_, 0, v___x_4056_);
lean_ctor_set(v___x_4057_, 1, v_a_4055_);
v___x_4058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4058_, 0, v___x_4057_);
return v___x_4058_;
}
v___jp_4059_:
{
if (lean_obj_tag(v___y_4060_) == 0)
{
lean_object* v_a_4061_; 
v_a_4061_ = lean_ctor_get(v___y_4060_, 0);
lean_inc(v_a_4061_);
lean_dec_ref_known(v___y_4060_, 1);
v_a_4055_ = v_a_4061_;
goto v___jp_4054_;
}
else
{
lean_object* v_a_4062_; lean_object* v___x_4064_; uint8_t v_isShared_4065_; uint8_t v_isSharedCheck_4069_; 
v_a_4062_ = lean_ctor_get(v___y_4060_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v___y_4060_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4064_ = v___y_4060_;
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
else
{
lean_inc(v_a_4062_);
lean_dec(v___y_4060_);
v___x_4064_ = lean_box(0);
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
v_resetjp_4063_:
{
lean_object* v___x_4067_; 
if (v_isShared_4065_ == 0)
{
v___x_4067_ = v___x_4064_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_a_4062_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
return v___x_4067_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported___boxed(lean_object* v_es_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
lean_object* v_res_4085_; 
v_res_4085_ = l___private_Lean_Attributes_0__Lean_AttributeExtension_addImported(v_es_4082_, v___y_4083_);
lean_dec_ref(v___y_4083_);
lean_dec_ref(v_es_4082_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0(lean_object* v_as_4086_, size_t v_i_4087_, size_t v_stop_4088_, lean_object* v_b_4089_, lean_object* v___y_4090_){
_start:
{
lean_object* v___x_4092_; 
v___x_4092_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___redArg(v_as_4086_, v_i_4087_, v_stop_4088_, v_b_4089_);
return v___x_4092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0___boxed(lean_object* v_as_4093_, lean_object* v_i_4094_, lean_object* v_stop_4095_, lean_object* v_b_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_){
_start:
{
size_t v_i_boxed_4099_; size_t v_stop_boxed_4100_; lean_object* v_res_4101_; 
v_i_boxed_4099_ = lean_unbox_usize(v_i_4094_);
lean_dec(v_i_4094_);
v_stop_boxed_4100_ = lean_unbox_usize(v_stop_4095_);
lean_dec(v_stop_4095_);
v_res_4101_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Attributes_0__Lean_AttributeExtension_addImported_spec__0(v_as_4093_, v_i_boxed_4099_, v_stop_boxed_4100_, v_b_4096_, v___y_4097_);
lean_dec_ref(v___y_4097_);
lean_dec_ref(v_as_4093_);
return v_res_4101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_addAttrEntry(lean_object* v_s_4102_, lean_object* v_e_4103_){
_start:
{
lean_object* v_snd_4104_; lean_object* v_toAttributeImplCore_4105_; lean_object* v_fst_4106_; lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4124_; 
v_snd_4104_ = lean_ctor_get(v_e_4103_, 1);
lean_inc(v_snd_4104_);
v_toAttributeImplCore_4105_ = lean_ctor_get(v_snd_4104_, 0);
v_fst_4106_ = lean_ctor_get(v_e_4103_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v_e_4103_);
if (v_isSharedCheck_4124_ == 0)
{
lean_object* v_unused_4125_; 
v_unused_4125_ = lean_ctor_get(v_e_4103_, 1);
lean_dec(v_unused_4125_);
v___x_4108_ = v_e_4103_;
v_isShared_4109_ = v_isSharedCheck_4124_;
goto v_resetjp_4107_;
}
else
{
lean_inc(v_fst_4106_);
lean_dec(v_e_4103_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4124_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v_newEntries_4110_; lean_object* v_map_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4123_; 
v_newEntries_4110_ = lean_ctor_get(v_s_4102_, 0);
v_map_4111_ = lean_ctor_get(v_s_4102_, 1);
v_isSharedCheck_4123_ = !lean_is_exclusive(v_s_4102_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4113_ = v_s_4102_;
v_isShared_4114_ = v_isSharedCheck_4123_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_map_4111_);
lean_inc(v_newEntries_4110_);
lean_dec(v_s_4102_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4123_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v_name_4115_; lean_object* v___x_4117_; 
v_name_4115_ = lean_ctor_get(v_toAttributeImplCore_4105_, 1);
lean_inc(v_name_4115_);
if (v_isShared_4109_ == 0)
{
lean_ctor_set_tag(v___x_4108_, 1);
lean_ctor_set(v___x_4108_, 1, v_newEntries_4110_);
v___x_4117_ = v___x_4108_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v_fst_4106_);
lean_ctor_set(v_reuseFailAlloc_4122_, 1, v_newEntries_4110_);
v___x_4117_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
lean_object* v___x_4118_; lean_object* v___x_4120_; 
v___x_4118_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_map_4111_, v_name_4115_, v_snd_4104_);
if (v_isShared_4114_ == 0)
{
lean_ctor_set(v___x_4113_, 1, v___x_4118_);
lean_ctor_set(v___x_4113_, 0, v___x_4117_);
v___x_4120_ = v___x_4113_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4117_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v___x_4118_);
v___x_4120_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
return v___x_4120_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object* v_x_4126_, lean_object* v_s_4127_){
_start:
{
lean_object* v_newEntries_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; 
v_newEntries_4128_ = lean_ctor_get(v_s_4127_, 0);
lean_inc(v_newEntries_4128_);
lean_dec_ref(v_s_4127_);
v___x_4129_ = l_List_reverse___redArg(v_newEntries_4128_);
v___x_4130_ = lean_array_mk(v___x_4129_);
lean_inc_ref_n(v___x_4130_, 2);
v___x_4131_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4131_, 0, v___x_4130_);
lean_ctor_set(v___x_4131_, 1, v___x_4130_);
lean_ctor_set(v___x_4131_, 2, v___x_4130_);
return v___x_4131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object* v_x_4132_, lean_object* v_s_4133_){
_start:
{
lean_object* v_res_4134_; 
v_res_4134_ = l___private_Lean_Attributes_0__Lean_initFn___lam__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(v_x_4132_, v_s_4133_);
lean_dec_ref(v_x_4132_);
return v_res_4134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object* v_s_4135_){
_start:
{
lean_object* v_newEntries_4136_; lean_object* v___x_4138_; uint8_t v_isShared_4139_; uint8_t v_isSharedCheck_4147_; 
v_newEntries_4136_ = lean_ctor_get(v_s_4135_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v_s_4135_);
if (v_isSharedCheck_4147_ == 0)
{
lean_object* v_unused_4148_; 
v_unused_4148_ = lean_ctor_get(v_s_4135_, 1);
lean_dec(v_unused_4148_);
v___x_4138_ = v_s_4135_;
v_isShared_4139_ = v_isSharedCheck_4147_;
goto v_resetjp_4137_;
}
else
{
lean_inc(v_newEntries_4136_);
lean_dec(v_s_4135_);
v___x_4138_ = lean_box(0);
v_isShared_4139_ = v_isSharedCheck_4147_;
goto v_resetjp_4137_;
}
v_resetjp_4137_:
{
lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4145_; 
v___x_4140_ = ((lean_object*)(l_Lean_registerTagAttribute___lam__2___closed__4));
v___x_4141_ = l_List_lengthTR___redArg(v_newEntries_4136_);
lean_dec(v_newEntries_4136_);
v___x_4142_ = l_Nat_reprFast(v___x_4141_);
v___x_4143_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4143_, 0, v___x_4142_);
if (v_isShared_4139_ == 0)
{
lean_ctor_set_tag(v___x_4138_, 5);
lean_ctor_set(v___x_4138_, 1, v___x_4143_);
lean_ctor_set(v___x_4138_, 0, v___x_4140_);
v___x_4145_ = v___x_4138_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v___x_4140_);
lean_ctor_set(v_reuseFailAlloc_4146_, 1, v___x_4143_);
v___x_4145_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
return v___x_4145_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn___lam__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(lean_object* v_s_4149_){
_start:
{
lean_object* v_newEntries_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; 
v_newEntries_4150_ = lean_ctor_get(v_s_4149_, 0);
lean_inc(v_newEntries_4150_);
lean_dec_ref(v_s_4149_);
v___x_4151_ = l_List_reverse___redArg(v_newEntries_4150_);
v___x_4152_ = lean_array_mk(v___x_4151_);
return v___x_4152_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___f_4164_; lean_object* v___f_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4162_ = lean_box(0);
v___x_4163_ = lean_box(2);
v___f_4164_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__1_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___f_4165_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__0_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4166_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__6_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4167_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__5_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4168_ = lean_alloc_closure((void*)(l___private_Lean_Attributes_0__Lean_AttributeExtension_mkInitial___boxed), 1, 0);
v___x_4169_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__4_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4170_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4169_);
lean_ctor_set(v___x_4170_, 1, v___x_4168_);
lean_ctor_set(v___x_4170_, 2, v___x_4167_);
lean_ctor_set(v___x_4170_, 3, v___x_4166_);
lean_ctor_set(v___x_4170_, 4, v___f_4165_);
lean_ctor_set(v___x_4170_, 5, v___f_4164_);
lean_ctor_set(v___x_4170_, 6, v___x_4163_);
lean_ctor_set(v___x_4170_, 7, v___x_4162_);
return v___x_4170_;
}
}
static lean_object* _init_l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___f_4171_ = ((lean_object*)(l___private_Lean_Attributes_0__Lean_initFn___closed__2_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_));
v___x_4172_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__7_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_);
v___x_4173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4173_, 0, v___x_4172_);
lean_ctor_set(v___x_4173_, 1, v___f_4171_);
return v___x_4173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4175_; lean_object* v___x_4176_; 
v___x_4175_ = lean_obj_once(&l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_, &l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2__once, _init_l___private_Lean_Attributes_0__Lean_initFn___closed__8_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_);
v___x_4176_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_4175_);
return v___x_4176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2____boxed(lean_object* v___y_4177_){
_start:
{
lean_object* v_res_4178_; 
v_res_4178_ = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_();
return v_res_4178_;
}
}
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute(lean_object* v_n_4179_){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; uint8_t v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; 
v___x_4181_ = l_Lean_attributeMapRef;
v___x_4182_ = lean_st_ref_get(v___x_4181_);
v___x_4183_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v___x_4182_, v_n_4179_);
lean_dec(v___x_4182_);
v___x_4184_ = lean_box(v___x_4183_);
v___x_4185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4185_, 0, v___x_4184_);
return v___x_4185_;
}
}
LEAN_EXPORT lean_object* l_Lean_isBuiltinAttribute___boxed(lean_object* v_n_4186_, lean_object* v___y_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l_Lean_isBuiltinAttribute(v_n_4186_);
lean_dec(v_n_4186_);
return v_res_4188_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(lean_object* v_x_4189_, lean_object* v_x_4190_){
_start:
{
if (lean_obj_tag(v_x_4190_) == 0)
{
return v_x_4189_;
}
else
{
lean_object* v_key_4191_; lean_object* v_tail_4192_; lean_object* v___x_4193_; 
v_key_4191_ = lean_ctor_get(v_x_4190_, 0);
v_tail_4192_ = lean_ctor_get(v_x_4190_, 2);
lean_inc(v_key_4191_);
v___x_4193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4193_, 0, v_key_4191_);
lean_ctor_set(v___x_4193_, 1, v_x_4189_);
v_x_4189_ = v___x_4193_;
v_x_4190_ = v_tail_4192_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0___boxed(lean_object* v_x_4195_, lean_object* v_x_4196_){
_start:
{
lean_object* v_res_4197_; 
v_res_4197_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(v_x_4195_, v_x_4196_);
lean_dec(v_x_4196_);
return v_res_4197_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(lean_object* v_as_4198_, size_t v_i_4199_, size_t v_stop_4200_, lean_object* v_b_4201_){
_start:
{
uint8_t v___x_4202_; 
v___x_4202_ = lean_usize_dec_eq(v_i_4199_, v_stop_4200_);
if (v___x_4202_ == 0)
{
lean_object* v___x_4203_; lean_object* v___x_4204_; size_t v___x_4205_; size_t v___x_4206_; 
v___x_4203_ = lean_array_uget_borrowed(v_as_4198_, v_i_4199_);
v___x_4204_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_getBuiltinAttributeNames_spec__0(v_b_4201_, v___x_4203_);
v___x_4205_ = ((size_t)1ULL);
v___x_4206_ = lean_usize_add(v_i_4199_, v___x_4205_);
v_i_4199_ = v___x_4206_;
v_b_4201_ = v___x_4204_;
goto _start;
}
else
{
return v_b_4201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1___boxed(lean_object* v_as_4208_, lean_object* v_i_4209_, lean_object* v_stop_4210_, lean_object* v_b_4211_){
_start:
{
size_t v_i_boxed_4212_; size_t v_stop_boxed_4213_; lean_object* v_res_4214_; 
v_i_boxed_4212_ = lean_unbox_usize(v_i_4209_);
lean_dec(v_i_4209_);
v_stop_boxed_4213_ = lean_unbox_usize(v_stop_4210_);
lean_dec(v_stop_4210_);
v_res_4214_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(v_as_4208_, v_i_boxed_4212_, v_stop_boxed_4213_, v_b_4211_);
lean_dec_ref(v_as_4208_);
return v_res_4214_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames(){
_start:
{
lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v_buckets_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; uint8_t v___x_4222_; 
v___x_4216_ = l_Lean_attributeMapRef;
v___x_4217_ = lean_st_ref_get(v___x_4216_);
v_buckets_4218_ = lean_ctor_get(v___x_4217_, 1);
lean_inc_ref(v_buckets_4218_);
lean_dec(v___x_4217_);
v___x_4219_ = lean_box(0);
v___x_4220_ = lean_unsigned_to_nat(0u);
v___x_4221_ = lean_array_get_size(v_buckets_4218_);
v___x_4222_ = lean_nat_dec_lt(v___x_4220_, v___x_4221_);
if (v___x_4222_ == 0)
{
lean_object* v___x_4223_; 
lean_dec_ref(v_buckets_4218_);
v___x_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4219_);
return v___x_4223_;
}
else
{
size_t v___x_4224_; size_t v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4224_ = ((size_t)0ULL);
v___x_4225_ = lean_usize_of_nat(v___x_4221_);
v___x_4226_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(v_buckets_4218_, v___x_4224_, v___x_4225_, v___x_4219_);
lean_dec_ref(v_buckets_4218_);
v___x_4227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4226_);
return v___x_4227_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeNames___boxed(lean_object* v___y_4228_){
_start:
{
lean_object* v_res_4229_; 
v_res_4229_ = l_Lean_getBuiltinAttributeNames();
return v_res_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl(lean_object* v_attrName_4231_){
_start:
{
lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4233_ = l_Lean_attributeMapRef;
v___x_4234_ = lean_st_ref_get(v___x_4233_);
v___x_4235_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v___x_4234_, v_attrName_4231_);
lean_dec(v___x_4234_);
if (lean_obj_tag(v___x_4235_) == 0)
{
lean_object* v___x_4236_; uint8_t v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; 
v___x_4236_ = ((lean_object*)(l_Lean_getBuiltinAttributeImpl___closed__0));
v___x_4237_ = 1;
v___x_4238_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4231_, v___x_4237_);
v___x_4239_ = lean_string_append(v___x_4236_, v___x_4238_);
lean_dec_ref(v___x_4238_);
v___x_4240_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_4241_ = lean_string_append(v___x_4239_, v___x_4240_);
v___x_4242_ = lean_mk_io_user_error(v___x_4241_);
v___x_4243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4242_);
return v___x_4243_;
}
else
{
lean_object* v_val_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4251_; 
lean_dec(v_attrName_4231_);
v_val_4244_ = lean_ctor_get(v___x_4235_, 0);
v_isSharedCheck_4251_ = !lean_is_exclusive(v___x_4235_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4246_ = v___x_4235_;
v_isShared_4247_ = v_isSharedCheck_4251_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_val_4244_);
lean_dec(v___x_4235_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4251_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
lean_object* v___x_4249_; 
if (v_isShared_4247_ == 0)
{
lean_ctor_set_tag(v___x_4246_, 0);
v___x_4249_ = v___x_4246_;
goto v_reusejp_4248_;
}
else
{
lean_object* v_reuseFailAlloc_4250_; 
v_reuseFailAlloc_4250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4250_, 0, v_val_4244_);
v___x_4249_ = v_reuseFailAlloc_4250_;
goto v_reusejp_4248_;
}
v_reusejp_4248_:
{
return v___x_4249_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinAttributeImpl___boxed(lean_object* v_attrName_4252_, lean_object* v___y_4253_){
_start:
{
lean_object* v_res_4254_; 
v_res_4254_ = l_Lean_getBuiltinAttributeImpl(v_attrName_4252_);
return v_res_4254_;
}
}
LEAN_EXPORT uint8_t l_Lean_isAttribute(lean_object* v_env_4255_, lean_object* v_attrName_4256_){
_start:
{
lean_object* v___x_4257_; lean_object* v_toEnvExtension_4258_; lean_object* v_asyncMode_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v_map_4263_; uint8_t v___x_4264_; 
v___x_4257_ = l_Lean_attributeExtension;
v_toEnvExtension_4258_ = lean_ctor_get(v___x_4257_, 0);
v_asyncMode_4259_ = lean_ctor_get(v_toEnvExtension_4258_, 2);
v___x_4260_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4261_ = lean_box(0);
v___x_4262_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4260_, v___x_4257_, v_env_4255_, v_asyncMode_4259_, v___x_4261_);
v_map_4263_ = lean_ctor_get(v___x_4262_, 1);
lean_inc_ref(v_map_4263_);
lean_dec(v___x_4262_);
v___x_4264_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_map_4263_, v_attrName_4256_);
lean_dec_ref(v_map_4263_);
return v___x_4264_;
}
}
LEAN_EXPORT lean_object* l_Lean_isAttribute___boxed(lean_object* v_env_4265_, lean_object* v_attrName_4266_){
_start:
{
uint8_t v_res_4267_; lean_object* v_r_4268_; 
v_res_4267_ = l_Lean_isAttribute(v_env_4265_, v_attrName_4266_);
lean_dec(v_attrName_4266_);
v_r_4268_ = lean_box(v_res_4267_);
return v_r_4268_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAttributeNames(lean_object* v_env_4269_){
_start:
{
lean_object* v___x_4270_; lean_object* v_toEnvExtension_4271_; lean_object* v_asyncMode_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v_map_4276_; lean_object* v_buckets_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; uint8_t v___x_4281_; 
v___x_4270_ = l_Lean_attributeExtension;
v_toEnvExtension_4271_ = lean_ctor_get(v___x_4270_, 0);
v_asyncMode_4272_ = lean_ctor_get(v_toEnvExtension_4271_, 2);
v___x_4273_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4274_ = lean_box(0);
v___x_4275_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4273_, v___x_4270_, v_env_4269_, v_asyncMode_4272_, v___x_4274_);
v_map_4276_ = lean_ctor_get(v___x_4275_, 1);
lean_inc_ref(v_map_4276_);
lean_dec(v___x_4275_);
v_buckets_4277_ = lean_ctor_get(v_map_4276_, 1);
lean_inc_ref(v_buckets_4277_);
lean_dec_ref(v_map_4276_);
v___x_4278_ = lean_box(0);
v___x_4279_ = lean_unsigned_to_nat(0u);
v___x_4280_ = lean_array_get_size(v_buckets_4277_);
v___x_4281_ = lean_nat_dec_lt(v___x_4279_, v___x_4280_);
if (v___x_4281_ == 0)
{
lean_dec_ref(v_buckets_4277_);
return v___x_4278_;
}
else
{
size_t v___x_4282_; size_t v___x_4283_; lean_object* v___x_4284_; 
v___x_4282_ = ((size_t)0ULL);
v___x_4283_ = lean_usize_of_nat(v___x_4280_);
v___x_4284_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getBuiltinAttributeNames_spec__1(v_buckets_4277_, v___x_4282_, v___x_4283_, v___x_4278_);
lean_dec_ref(v_buckets_4277_);
return v___x_4284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAttributeImpl(lean_object* v_env_4285_, lean_object* v_attrName_4286_){
_start:
{
lean_object* v___x_4287_; lean_object* v_toEnvExtension_4288_; lean_object* v_asyncMode_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v_map_4293_; lean_object* v___x_4294_; 
v___x_4287_ = l_Lean_attributeExtension;
v_toEnvExtension_4288_ = lean_ctor_get(v___x_4287_, 0);
v_asyncMode_4289_ = lean_ctor_get(v_toEnvExtension_4288_, 2);
v___x_4290_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4291_ = lean_box(0);
v___x_4292_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4290_, v___x_4287_, v_env_4285_, v_asyncMode_4289_, v___x_4291_);
v_map_4293_ = lean_ctor_get(v___x_4292_, 1);
lean_inc_ref(v_map_4293_);
lean_dec(v___x_4292_);
v___x_4294_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_mkAttributeImplOfEntry_spec__0___redArg(v_map_4293_, v_attrName_4286_);
lean_dec_ref(v_map_4293_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v___x_4295_; uint8_t v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
v___x_4295_ = ((lean_object*)(l_Lean_getBuiltinAttributeImpl___closed__0));
v___x_4296_ = 1;
v___x_4297_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4286_, v___x_4296_);
v___x_4298_ = lean_string_append(v___x_4295_, v___x_4297_);
lean_dec_ref(v___x_4297_);
v___x_4299_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___redArg___closed__4));
v___x_4300_ = lean_string_append(v___x_4298_, v___x_4299_);
v___x_4301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4301_, 0, v___x_4300_);
return v___x_4301_;
}
else
{
lean_object* v_val_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4309_; 
lean_dec(v_attrName_4286_);
v_val_4302_ = lean_ctor_get(v___x_4294_, 0);
v_isSharedCheck_4309_ = !lean_is_exclusive(v___x_4294_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4304_ = v___x_4294_;
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_val_4302_);
lean_dec(v___x_4294_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v___x_4307_; 
if (v_isShared_4305_ == 0)
{
v___x_4307_ = v___x_4304_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v_val_4302_);
v___x_4307_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
return v___x_4307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder(lean_object* v_env_4310_, lean_object* v_builderId_4311_, lean_object* v_ref_4312_, lean_object* v_args_4313_){
_start:
{
lean_object* v_entry_4315_; lean_object* v___x_4316_; 
v_entry_4315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_entry_4315_, 0, v_builderId_4311_);
lean_ctor_set(v_entry_4315_, 1, v_ref_4312_);
lean_ctor_set(v_entry_4315_, 2, v_args_4313_);
lean_inc_ref(v_entry_4315_);
v___x_4316_ = l_Lean_mkAttributeImplOfEntry(v_entry_4315_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4342_; 
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4342_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4342_ == 0)
{
v___x_4319_ = v___x_4316_;
v_isShared_4320_ = v_isSharedCheck_4342_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4316_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4342_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v_toAttributeImplCore_4321_; lean_object* v_name_4322_; uint8_t v___x_4323_; 
v_toAttributeImplCore_4321_ = lean_ctor_get(v_a_4317_, 0);
v_name_4322_ = lean_ctor_get(v_toAttributeImplCore_4321_, 1);
lean_inc_ref(v_env_4310_);
v___x_4323_ = l_Lean_isAttribute(v_env_4310_, v_name_4322_);
if (v___x_4323_ == 0)
{
lean_object* v___x_4324_; lean_object* v_toEnvExtension_4325_; lean_object* v_asyncMode_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4331_; 
v___x_4324_ = l_Lean_attributeExtension;
v_toEnvExtension_4325_ = lean_ctor_get(v___x_4324_, 0);
v_asyncMode_4326_ = lean_ctor_get(v_toEnvExtension_4325_, 2);
v___x_4327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4327_, 0, v_entry_4315_);
lean_ctor_set(v___x_4327_, 1, v_a_4317_);
v___x_4328_ = lean_box(0);
v___x_4329_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_4324_, v_env_4310_, v___x_4327_, v_asyncMode_4326_, v___x_4328_);
if (v_isShared_4320_ == 0)
{
lean_ctor_set(v___x_4319_, 0, v___x_4329_);
v___x_4331_ = v___x_4319_;
goto v_reusejp_4330_;
}
else
{
lean_object* v_reuseFailAlloc_4332_; 
v_reuseFailAlloc_4332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4332_, 0, v___x_4329_);
v___x_4331_ = v_reuseFailAlloc_4332_;
goto v_reusejp_4330_;
}
v_reusejp_4330_:
{
return v___x_4331_;
}
}
else
{
lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4340_; 
lean_inc(v_name_4322_);
lean_dec(v_a_4317_);
lean_dec_ref_known(v_entry_4315_, 3);
lean_dec_ref(v_env_4310_);
v___x_4333_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__2));
v___x_4334_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4322_, v___x_4323_);
v___x_4335_ = lean_string_append(v___x_4333_, v___x_4334_);
lean_dec_ref(v___x_4334_);
v___x_4336_ = ((lean_object*)(l_Lean_registerBuiltinAttribute___closed__3));
v___x_4337_ = lean_string_append(v___x_4335_, v___x_4336_);
v___x_4338_ = lean_mk_io_user_error(v___x_4337_);
if (v_isShared_4320_ == 0)
{
lean_ctor_set_tag(v___x_4319_, 1);
lean_ctor_set(v___x_4319_, 0, v___x_4338_);
v___x_4340_ = v___x_4319_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v___x_4338_);
v___x_4340_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
return v___x_4340_;
}
}
}
}
else
{
lean_object* v_a_4343_; lean_object* v___x_4345_; uint8_t v_isShared_4346_; uint8_t v_isSharedCheck_4350_; 
lean_dec_ref_known(v_entry_4315_, 3);
lean_dec_ref(v_env_4310_);
v_a_4343_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4350_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4345_ = v___x_4316_;
v_isShared_4346_ = v_isSharedCheck_4350_;
goto v_resetjp_4344_;
}
else
{
lean_inc(v_a_4343_);
lean_dec(v___x_4316_);
v___x_4345_ = lean_box(0);
v_isShared_4346_ = v_isSharedCheck_4350_;
goto v_resetjp_4344_;
}
v_resetjp_4344_:
{
lean_object* v___x_4348_; 
if (v_isShared_4346_ == 0)
{
v___x_4348_ = v___x_4345_;
goto v_reusejp_4347_;
}
else
{
lean_object* v_reuseFailAlloc_4349_; 
v_reuseFailAlloc_4349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4349_, 0, v_a_4343_);
v___x_4348_ = v_reuseFailAlloc_4349_;
goto v_reusejp_4347_;
}
v_reusejp_4347_:
{
return v___x_4348_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerAttributeOfBuilder___boxed(lean_object* v_env_4351_, lean_object* v_builderId_4352_, lean_object* v_ref_4353_, lean_object* v_args_4354_, lean_object* v___y_4355_){
_start:
{
lean_object* v_res_4356_; 
v_res_4356_ = l_Lean_registerAttributeOfBuilder(v_env_4351_, v_builderId_4352_, v_ref_4353_, v_args_4354_);
return v_res_4356_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(lean_object* v_x_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_){
_start:
{
if (lean_obj_tag(v_x_4357_) == 0)
{
lean_object* v_a_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; 
v_a_4361_ = lean_ctor_get(v_x_4357_, 0);
lean_inc(v_a_4361_);
lean_dec_ref_known(v_x_4357_, 1);
v___x_4362_ = l_Lean_stringToMessageData(v_a_4361_);
v___x_4363_ = l_Lean_throwError___at___00Lean_instInhabitedAttributeImpl_default_spec__0___redArg(v___x_4362_, v___y_4358_, v___y_4359_);
return v___x_4363_;
}
else
{
lean_object* v_a_4364_; lean_object* v___x_4366_; uint8_t v_isShared_4367_; uint8_t v_isSharedCheck_4371_; 
v_a_4364_ = lean_ctor_get(v_x_4357_, 0);
v_isSharedCheck_4371_ = !lean_is_exclusive(v_x_4357_);
if (v_isSharedCheck_4371_ == 0)
{
v___x_4366_ = v_x_4357_;
v_isShared_4367_ = v_isSharedCheck_4371_;
goto v_resetjp_4365_;
}
else
{
lean_inc(v_a_4364_);
lean_dec(v_x_4357_);
v___x_4366_ = lean_box(0);
v_isShared_4367_ = v_isSharedCheck_4371_;
goto v_resetjp_4365_;
}
v_resetjp_4365_:
{
lean_object* v___x_4369_; 
if (v_isShared_4367_ == 0)
{
lean_ctor_set_tag(v___x_4366_, 0);
v___x_4369_ = v___x_4366_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4370_; 
v_reuseFailAlloc_4370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4370_, 0, v_a_4364_);
v___x_4369_ = v_reuseFailAlloc_4370_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
return v___x_4369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg___boxed(lean_object* v_x_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_){
_start:
{
lean_object* v_res_4376_; 
v_res_4376_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v_x_4372_, v___y_4373_, v___y_4374_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
return v_res_4376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_add(lean_object* v_declName_4377_, lean_object* v_attrName_4378_, lean_object* v_stx_4379_, uint8_t v_kind_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_){
_start:
{
lean_object* v___x_4384_; lean_object* v_env_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; 
v___x_4384_ = lean_st_ref_get(v___y_4382_);
v_env_4385_ = lean_ctor_get(v___x_4384_, 0);
lean_inc_ref(v_env_4385_);
lean_dec(v___x_4384_);
v___x_4386_ = l_Lean_getAttributeImpl(v_env_4385_, v_attrName_4378_);
v___x_4387_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v___x_4386_, v___y_4381_, v___y_4382_);
if (lean_obj_tag(v___x_4387_) == 0)
{
lean_object* v_a_4388_; lean_object* v_add_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; 
v_a_4388_ = lean_ctor_get(v___x_4387_, 0);
lean_inc(v_a_4388_);
lean_dec_ref_known(v___x_4387_, 1);
v_add_4389_ = lean_ctor_get(v_a_4388_, 1);
lean_inc_ref(v_add_4389_);
lean_dec(v_a_4388_);
v___x_4390_ = lean_box(v_kind_4380_);
lean_inc(v___y_4382_);
lean_inc_ref(v___y_4381_);
v___x_4391_ = lean_apply_6(v_add_4389_, v_declName_4377_, v_stx_4379_, v___x_4390_, v___y_4381_, v___y_4382_, lean_box(0));
return v___x_4391_;
}
else
{
lean_object* v_a_4392_; lean_object* v___x_4394_; uint8_t v_isShared_4395_; uint8_t v_isSharedCheck_4399_; 
lean_dec(v_stx_4379_);
lean_dec(v_declName_4377_);
v_a_4392_ = lean_ctor_get(v___x_4387_, 0);
v_isSharedCheck_4399_ = !lean_is_exclusive(v___x_4387_);
if (v_isSharedCheck_4399_ == 0)
{
v___x_4394_ = v___x_4387_;
v_isShared_4395_ = v_isSharedCheck_4399_;
goto v_resetjp_4393_;
}
else
{
lean_inc(v_a_4392_);
lean_dec(v___x_4387_);
v___x_4394_ = lean_box(0);
v_isShared_4395_ = v_isSharedCheck_4399_;
goto v_resetjp_4393_;
}
v_resetjp_4393_:
{
lean_object* v___x_4397_; 
if (v_isShared_4395_ == 0)
{
v___x_4397_ = v___x_4394_;
goto v_reusejp_4396_;
}
else
{
lean_object* v_reuseFailAlloc_4398_; 
v_reuseFailAlloc_4398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4398_, 0, v_a_4392_);
v___x_4397_ = v_reuseFailAlloc_4398_;
goto v_reusejp_4396_;
}
v_reusejp_4396_:
{
return v___x_4397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_add___boxed(lean_object* v_declName_4400_, lean_object* v_attrName_4401_, lean_object* v_stx_4402_, lean_object* v_kind_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_){
_start:
{
uint8_t v_kind_boxed_4407_; lean_object* v_res_4408_; 
v_kind_boxed_4407_ = lean_unbox(v_kind_4403_);
v_res_4408_ = l_Lean_Attribute_add(v_declName_4400_, v_attrName_4401_, v_stx_4402_, v_kind_boxed_4407_, v___y_4404_, v___y_4405_);
lean_dec(v___y_4405_);
lean_dec_ref(v___y_4404_);
return v_res_4408_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0(lean_object* v_00_u03b1_4409_, lean_object* v_x_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_){
_start:
{
lean_object* v___x_4414_; 
v___x_4414_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v_x_4410_, v___y_4411_, v___y_4412_);
return v___x_4414_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___boxed(lean_object* v_00_u03b1_4415_, lean_object* v_x_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_){
_start:
{
lean_object* v_res_4420_; 
v_res_4420_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0(v_00_u03b1_4415_, v_x_4416_, v___y_4417_, v___y_4418_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
return v_res_4420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_erase(lean_object* v_declName_4421_, lean_object* v_attrName_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_){
_start:
{
lean_object* v___x_4426_; lean_object* v_env_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; 
v___x_4426_ = lean_st_ref_get(v___y_4424_);
v_env_4427_ = lean_ctor_get(v___x_4426_, 0);
lean_inc_ref(v_env_4427_);
lean_dec(v___x_4426_);
v___x_4428_ = l_Lean_getAttributeImpl(v_env_4427_, v_attrName_4422_);
v___x_4429_ = l_Lean_ofExcept___at___00Lean_Attribute_add_spec__0___redArg(v___x_4428_, v___y_4423_, v___y_4424_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; lean_object* v_erase_4431_; lean_object* v___x_4432_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
lean_inc(v_a_4430_);
lean_dec_ref_known(v___x_4429_, 1);
v_erase_4431_ = lean_ctor_get(v_a_4430_, 2);
lean_inc_ref(v_erase_4431_);
lean_dec(v_a_4430_);
lean_inc(v___y_4424_);
lean_inc_ref(v___y_4423_);
v___x_4432_ = lean_apply_4(v_erase_4431_, v_declName_4421_, v___y_4423_, v___y_4424_, lean_box(0));
return v___x_4432_;
}
else
{
lean_object* v_a_4433_; lean_object* v___x_4435_; uint8_t v_isShared_4436_; uint8_t v_isSharedCheck_4440_; 
lean_dec(v_declName_4421_);
v_a_4433_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4440_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4440_ == 0)
{
v___x_4435_ = v___x_4429_;
v_isShared_4436_ = v_isSharedCheck_4440_;
goto v_resetjp_4434_;
}
else
{
lean_inc(v_a_4433_);
lean_dec(v___x_4429_);
v___x_4435_ = lean_box(0);
v_isShared_4436_ = v_isSharedCheck_4440_;
goto v_resetjp_4434_;
}
v_resetjp_4434_:
{
lean_object* v___x_4438_; 
if (v_isShared_4436_ == 0)
{
v___x_4438_ = v___x_4435_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4439_; 
v_reuseFailAlloc_4439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4439_, 0, v_a_4433_);
v___x_4438_ = v_reuseFailAlloc_4439_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
return v___x_4438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Attribute_erase___boxed(lean_object* v_declName_4441_, lean_object* v_attrName_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
lean_object* v_res_4446_; 
v_res_4446_ = l_Lean_Attribute_erase(v_declName_4441_, v_attrName_4442_, v___y_4443_, v___y_4444_);
lean_dec(v___y_4444_);
lean_dec_ref(v___y_4443_);
return v_res_4446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_updateEnvAttributesImpl_spec__0(lean_object* v_x_4447_, lean_object* v_x_4448_){
_start:
{
if (lean_obj_tag(v_x_4448_) == 0)
{
return v_x_4447_;
}
else
{
lean_object* v_key_4449_; lean_object* v_value_4450_; lean_object* v_tail_4451_; lean_object* v_newEntries_4452_; lean_object* v_map_4453_; uint8_t v___x_4454_; 
v_key_4449_ = lean_ctor_get(v_x_4448_, 0);
lean_inc(v_key_4449_);
v_value_4450_ = lean_ctor_get(v_x_4448_, 1);
lean_inc(v_value_4450_);
v_tail_4451_ = lean_ctor_get(v_x_4448_, 2);
lean_inc(v_tail_4451_);
lean_dec_ref_known(v_x_4448_, 3);
v_newEntries_4452_ = lean_ctor_get(v_x_4447_, 0);
v_map_4453_ = lean_ctor_get(v_x_4447_, 1);
v___x_4454_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_registerBuiltinAttribute_spec__0___redArg(v_map_4453_, v_key_4449_);
if (v___x_4454_ == 0)
{
lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4463_; 
lean_inc_ref(v_map_4453_);
lean_inc(v_newEntries_4452_);
v_isSharedCheck_4463_ = !lean_is_exclusive(v_x_4447_);
if (v_isSharedCheck_4463_ == 0)
{
lean_object* v_unused_4464_; lean_object* v_unused_4465_; 
v_unused_4464_ = lean_ctor_get(v_x_4447_, 1);
lean_dec(v_unused_4464_);
v_unused_4465_ = lean_ctor_get(v_x_4447_, 0);
lean_dec(v_unused_4465_);
v___x_4456_ = v_x_4447_;
v_isShared_4457_ = v_isSharedCheck_4463_;
goto v_resetjp_4455_;
}
else
{
lean_dec(v_x_4447_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4463_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4458_; lean_object* v___x_4460_; 
v___x_4458_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_registerBuiltinAttribute_spec__1___redArg(v_map_4453_, v_key_4449_, v_value_4450_);
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 1, v___x_4458_);
v___x_4460_ = v___x_4456_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v_newEntries_4452_);
lean_ctor_set(v_reuseFailAlloc_4462_, 1, v___x_4458_);
v___x_4460_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
v_x_4447_ = v___x_4460_;
v_x_4448_ = v_tail_4451_;
goto _start;
}
}
}
else
{
lean_dec(v_value_4450_);
lean_dec(v_key_4449_);
v_x_4448_ = v_tail_4451_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(lean_object* v_as_4467_, size_t v_i_4468_, size_t v_stop_4469_, lean_object* v_b_4470_){
_start:
{
uint8_t v___x_4471_; 
v___x_4471_ = lean_usize_dec_eq(v_i_4468_, v_stop_4469_);
if (v___x_4471_ == 0)
{
lean_object* v___x_4472_; lean_object* v___x_4473_; size_t v___x_4474_; size_t v___x_4475_; 
v___x_4472_ = lean_array_uget_borrowed(v_as_4467_, v_i_4468_);
lean_inc(v___x_4472_);
v___x_4473_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_updateEnvAttributesImpl_spec__0(v_b_4470_, v___x_4472_);
v___x_4474_ = ((size_t)1ULL);
v___x_4475_ = lean_usize_add(v_i_4468_, v___x_4474_);
v_i_4468_ = v___x_4475_;
v_b_4470_ = v___x_4473_;
goto _start;
}
else
{
return v_b_4470_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1___boxed(lean_object* v_as_4477_, lean_object* v_i_4478_, lean_object* v_stop_4479_, lean_object* v_b_4480_){
_start:
{
size_t v_i_boxed_4481_; size_t v_stop_boxed_4482_; lean_object* v_res_4483_; 
v_i_boxed_4481_ = lean_unbox_usize(v_i_4478_);
lean_dec(v_i_4478_);
v_stop_boxed_4482_ = lean_unbox_usize(v_stop_4479_);
lean_dec(v_stop_4479_);
v_res_4483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(v_as_4477_, v_i_boxed_4481_, v_stop_boxed_4482_, v_b_4480_);
lean_dec_ref(v_as_4477_);
return v_res_4483_;
}
}
LEAN_EXPORT lean_object* lean_update_env_attributes(lean_object* v_env_4484_){
_start:
{
lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___y_4491_; lean_object* v_toEnvExtension_4494_; lean_object* v_asyncMode_4495_; lean_object* v_buckets_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; uint8_t v___x_4501_; 
v___x_4486_ = l_Lean_instInhabitedAttributeExtensionState_default;
v___x_4487_ = l_Lean_attributeMapRef;
v___x_4488_ = lean_st_ref_get(v___x_4487_);
v___x_4489_ = l_Lean_attributeExtension;
v_toEnvExtension_4494_ = lean_ctor_get(v___x_4489_, 0);
v_asyncMode_4495_ = lean_ctor_get(v_toEnvExtension_4494_, 2);
v_buckets_4496_ = lean_ctor_get(v___x_4488_, 1);
lean_inc_ref(v_buckets_4496_);
lean_dec(v___x_4488_);
v___x_4497_ = lean_box(0);
lean_inc_ref(v_env_4484_);
v___x_4498_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4486_, v___x_4489_, v_env_4484_, v_asyncMode_4495_, v___x_4497_);
v___x_4499_ = lean_unsigned_to_nat(0u);
v___x_4500_ = lean_array_get_size(v_buckets_4496_);
v___x_4501_ = lean_nat_dec_lt(v___x_4499_, v___x_4500_);
if (v___x_4501_ == 0)
{
lean_dec_ref(v_buckets_4496_);
v___y_4491_ = v___x_4498_;
goto v___jp_4490_;
}
else
{
size_t v___x_4502_; size_t v___x_4503_; lean_object* v___x_4504_; 
v___x_4502_ = ((size_t)0ULL);
v___x_4503_ = lean_usize_of_nat(v___x_4500_);
v___x_4504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_updateEnvAttributesImpl_spec__1(v_buckets_4496_, v___x_4502_, v___x_4503_, v___x_4498_);
lean_dec_ref(v_buckets_4496_);
v___y_4491_ = v___x_4504_;
goto v___jp_4490_;
}
v___jp_4490_:
{
lean_object* v___x_4492_; lean_object* v___x_4493_; 
v___x_4492_ = l_Lean_PersistentEnvExtension_setState___redArg(v___x_4489_, v_env_4484_, v___y_4491_);
v___x_4493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4492_);
return v___x_4493_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_updateEnvAttributesImpl___boxed(lean_object* v_env_4505_, lean_object* v___y_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = lean_update_env_attributes(v_env_4505_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* lean_get_num_attributes(){
_start:
{
lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v_size_4511_; lean_object* v___x_4512_; 
v___x_4509_ = l_Lean_attributeMapRef;
v___x_4510_ = lean_st_ref_get(v___x_4509_);
v_size_4511_ = lean_ctor_get(v___x_4510_, 0);
lean_inc(v_size_4511_);
lean_dec(v___x_4510_);
v___x_4512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4512_, 0, v_size_4511_);
return v___x_4512_;
}
}
LEAN_EXPORT lean_object* l_Lean_getNumBuiltinAttributesImpl___boxed(lean_object* v___y_4513_){
_start:
{
lean_object* v_res_4514_; 
v_res_4514_ = lean_get_num_attributes();
return v_res_4514_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedAttributeApplicationTime_default = _init_l_Lean_instInhabitedAttributeApplicationTime_default();
l_Lean_instInhabitedAttributeApplicationTime = _init_l_Lean_instInhabitedAttributeApplicationTime();
l_Lean_instInhabitedAttributeKind_default = _init_l_Lean_instInhabitedAttributeKind_default();
l_Lean_instInhabitedAttributeKind = _init_l_Lean_instInhabitedAttributeKind();
res = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_285812513____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_attributeMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_attributeMapRef);
lean_dec_ref(res);
l_Lean_instInhabitedTagAttribute_default = _init_l_Lean_instInhabitedTagAttribute_default();
lean_mark_persistent(l_Lean_instInhabitedTagAttribute_default);
l_Lean_instInhabitedTagAttribute = _init_l_Lean_instInhabitedTagAttribute();
lean_mark_persistent(l_Lean_instInhabitedTagAttribute);
res = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_2990505691____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_attributeImplBuilderTableRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_attributeImplBuilderTableRef);
lean_dec_ref(res);
l_Lean_instInhabitedAttributeExtensionState_default = _init_l_Lean_instInhabitedAttributeExtensionState_default();
lean_mark_persistent(l_Lean_instInhabitedAttributeExtensionState_default);
l_Lean_instInhabitedAttributeExtensionState = _init_l_Lean_instInhabitedAttributeExtensionState();
lean_mark_persistent(l_Lean_instInhabitedAttributeExtensionState);
res = l___private_Lean_Attributes_0__Lean_initFn_00___x40_Lean_Attributes_3560353829____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_attributeExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_attributeExtension);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_AttributeImplCore_ref___autoParam = _init_l_Lean_AttributeImplCore_ref___autoParam();
lean_mark_persistent(l_Lean_AttributeImplCore_ref___autoParam);
l_Lean_registerTagAttribute___auto__1 = _init_l_Lean_registerTagAttribute___auto__1();
lean_mark_persistent(l_Lean_registerTagAttribute___auto__1);
l_Lean_registerEnumAttributes___auto__1 = _init_l_Lean_registerEnumAttributes___auto__1();
lean_mark_persistent(l_Lean_registerEnumAttributes___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Attributes(builtin);
}
#ifdef __cplusplus
}
#endif
